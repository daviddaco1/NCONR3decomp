#include "types.h"

// Translation unit: src/nw4r/ef/drawstrategy/unk_801BEE9C.cpp
// Total functions: 109

// Small Data symbols (@sda21)
extern "C" float lbl_8049C460;
extern "C" float lbl_8049C480;
extern "C" float lbl_8049C4A0;
extern "C" float lbl_8049C4A8;
extern "C" float lbl_8049C4B0;
extern "C" float lbl_8049D9A0;
extern "C" float lbl_8049D9A1;
extern "C" float lbl_8049D9A2;
extern "C" float lbl_8049D9A3;
extern "C" float lbl_804A1A70;
extern "C" float lbl_804A1A74;
extern "C" float lbl_804A1A78;
extern "C" float lbl_804A1A7C;
extern "C" float lbl_804A1A80;
extern "C" float lbl_804A1A88;
extern "C" float lbl_804A1A90;
extern "C" float lbl_804A1A98;
extern "C" float lbl_804A1AA0;
extern "C" float lbl_804A1AA4;
extern "C" float lbl_804A1AA8;
extern "C" float lbl_804A1AAC;
extern "C" float lbl_804A1AB0;
extern "C" float lbl_804A1AB8;
extern "C" float lbl_804A1AC0;
extern "C" float lbl_804A1AC8;
extern "C" float lbl_804A1AD0;
extern "C" float lbl_804A1AD4;
extern "C" float lbl_804A1AD8;
extern "C" float lbl_804A1ADC;
extern "C" float lbl_804A1AE0;
extern "C" float lbl_804A1AE4;
extern "C" float lbl_804A1AE8;
extern "C" float lbl_804A1AF0;
extern "C" float lbl_804A1AF8;
extern "C" float lbl_804A1AFC;
extern "C" float lbl_804A1B00;
extern "C" float lbl_804A1B04;
extern "C" float lbl_804A1B08;
extern "C" float lbl_804A1B10;
extern "C" float lbl_804A1B18;
extern "C" float lbl_804A1B20;
extern "C" float lbl_804A1B24;
extern "C" float lbl_804A1B28;
extern "C" float lbl_804A1B2C;
extern "C" float lbl_804A1B30;
extern "C" float lbl_804A1B34;
extern "C" float lbl_804A1B38;
extern "C" float lbl_804A1B40;
extern "C" float lbl_804A1B44;
extern "C" float lbl_804A1B48;
extern "C" float lbl_804A1B50;
extern "C" float lbl_804A1B54;
extern "C" float lbl_804A1B58;
extern "C" float lbl_804A1B60;
extern "C" float lbl_804A1B68;
extern "C" float lbl_804A1B6C;
extern "C" float lbl_804A1B70;
extern "C" float lbl_804A1B78;
extern "C" float lbl_804A1B7C;
extern "C" float lbl_804A1B80;
extern "C" float lbl_804A1B84;
extern "C" float lbl_804A1B88;
extern "C" float lbl_804A1B90;
extern "C" float lbl_804A1B94;
extern "C" float lbl_804A1B98;
extern "C" float lbl_804A1BA0;
extern "C" float lbl_804A1BA4;
extern "C" float lbl_804A1BA8;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_80360858[];
extern "C" u8 jumptable_803608E0[];
extern "C" u8 jumptable_80360944[];
extern "C" u8 jumptable_803609A8[];
extern "C" u8 jumptable_803609E8[];
extern "C" u8 jumptable_80360A4C[];
extern "C" u8 jumptable_80360AB0[];
extern "C" u8 lbl_8033C3A0[];
extern "C" u8 lbl_8033C3D0[];
extern "C" u8 lbl_8033C400[];
extern "C" u8 lbl_8033C430[];
extern "C" u8 lbl_80360820[];
extern "C" u8 lbl_80360838[];
extern "C" u8 lbl_80360878[];
extern "C" u8 lbl_80360898[];
extern "C" u8 lbl_803608B0[];
extern "C" u8 lbl_803608C8[];
extern "C" u8 lbl_803609C8[];
extern "C" u8 lbl_80360AD0[];
extern "C" u8 lbl_803E6550[];
extern "C" u8 lbl_803E6568[];
extern "C" u8 lbl_803E6574[];
extern "C" u8 lbl_803E6580[];
extern "C" u8 lbl_803E65B0[];

// Forward declarations
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void GXBegin();
extern "C" void GXClearVtxDesc();
extern "C" void GXEnableTexOffsets();
extern "C" void GXGetProjectionv();
extern "C" void GXGetVtxAttrFmt();
extern "C" void GXGetVtxDesc();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjCI();
extern "C" void GXInitTexObjLOD();
extern "C" void GXInitTlutObj();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXLoadTexMtxImm();
extern "C" void GXLoadTexObj();
extern "C" void GXLoadTlut();
extern "C" void GXSetArray();
extern "C" void GXSetBlendMode();
extern "C" void GXSetChanAmbColor();
extern "C" void GXSetChanCtrl();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetClipMode();
extern "C" void GXSetCullMode();
extern "C" void GXSetCurrentMtx();
extern "C" void GXSetFog();
extern "C" void GXSetLineWidth();
extern "C" void GXSetNumChans();
extern "C" void GXSetNumTexGens();
extern "C" void GXSetPointSize();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetTexCoordScaleManually();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetVtxDesc();
extern "C" void GXSetZCompLoc();
extern "C" void GXSetZMode();
extern "C" void PSMTXConcat();
extern "C" void PSMTXIdentity();
extern "C" void PSMTXInverse();
extern "C" void SinCosFIdx__Q24nw4r4mathFPfPff();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void __a1_32_data_type();
extern "C" void _restgpr_14();
extern "C" void _restgpr_15();
extern "C" void _restgpr_16();
extern "C" void _restgpr_17();
extern "C" void _restgpr_18();
extern "C" void _restgpr_19();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_14();
extern "C" void _savegpr_15();
extern "C" void _savegpr_16();
extern "C" void _savegpr_17();
extern "C" void _savegpr_18();
extern "C" void _savegpr_19();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_80018B24();
extern "C" void fn_80018B90();
extern "C" void fn_8001B910();
extern "C" void fn_8001DA9C();
extern "C" void fn_8001F9CC();
extern "C" void fn_8002AE40();
extern "C" void fn_8002AF5C();
extern "C" void fn_8002AF60();
extern "C" void fn_8002B060();
extern "C" void fn_8002B0AC();
extern "C" void fn_80031AF4();
extern "C" void fn_8003CF70();
extern "C" void fn_80047C40();
extern "C" void fn_801ACC48();
extern "C" void fn_801B60F0();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B823C();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9C64();
extern "C" void fn_801BA138();
extern "C" void fn_801BEE9C();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF28C();
extern "C" void fn_801BF578();
extern "C" void fn_801BF940();
extern "C" void fn_801BFF78();
extern "C" void fn_801C070C();
extern "C" void fn_801C0D80();
extern "C" void fn_801C0DA4();
extern "C" void fn_801C0DC8();
extern "C" void fn_801C0DF8();
extern "C" void fn_801C0E40();
extern "C" void fn_801C0E70();
extern "C" void fn_801C0E98();
extern "C" void fn_801C10B4();
extern "C" void fn_801C10F4();
extern "C" void fn_801C117C();
extern "C" void fn_801C11B8();
extern "C" void fn_801C11F4();
extern "C" void fn_801C1BBC();
extern "C" void fn_801C2408();
extern "C" void fn_801C2BA8();
extern "C" void fn_801C2C78();
extern "C" void fn_801C2CF4();
extern "C" void fn_801C2DC8();
extern "C" void fn_801C2E84();
extern "C" void fn_801C2EA0();
extern "C" void fn_801C2FB0();
extern "C" void fn_801C3218();
extern "C" void fn_801C3254();
extern "C" void fn_801C338C();
extern "C" void fn_801C3518();
extern "C" void fn_801C3624();
extern "C" void fn_801C362C();
extern "C" void fn_801C4360();
extern "C" void fn_801C451C();
extern "C" void fn_801C458C();
extern "C" void fn_801C4594();
extern "C" void fn_801C45A0();
extern "C" void fn_801C45BC();
extern "C" void fn_801C4638();
extern "C" void fn_801C4680();
extern "C" void fn_801C4A00();
extern "C" void fn_801C4A44();
extern "C" void fn_801C4C4C();
extern "C" void fn_801C5280();
extern "C" void fn_801C533C();
extern "C" void fn_801C53B8();
extern "C" void fn_801C53E8();
extern "C" void fn_801C5424();
extern "C" void fn_801C555C();
extern "C" void fn_801C5DC8();
extern "C" void fn_801C5E04();
extern "C" void fn_801C63A8();
extern "C" void fn_801C63E4();
extern "C" void fn_801C67F8();
extern "C" void fn_801C6834();
extern "C" void fn_801C6B84();
extern "C" void fn_801C6B8C();
extern "C" void fn_801C6B98();
extern "C" void fn_801C6BB0();
extern "C" void fn_801C6FEC();
extern "C" void fn_801C6FF0();
extern "C" void fn_801C7458();
extern "C" void fn_801C77FC();
extern "C" void fn_801C7AC0();
extern "C" void fn_801C7E08();
extern "C" void fn_801C8980();
extern "C" void fn_801C920C();
extern "C" void fn_801C94AC();
extern "C" void fn_801C9560();
extern "C" void fn_801C9678();
extern "C" void fn_801C98E0();
extern "C" void fn_801C9B90();
extern "C" void fn_801C9DAC();
extern "C" void fn_801C9DE8();
extern "C" void fn_801CA180();
extern "C" void fn_801CA5E8();
extern "C" void fn_801CA878();
extern "C" void fn_801CAA5C();
extern "C" void fn_801CB35C();
extern "C" void fn_801CB360();
extern "C" void fn_801CB6AC();
extern "C" void fn_801CB6B8();
extern "C" void fn_801CB6C4();
extern "C" void fn_801CB6C8();
extern "C" void fn_801CBAE8();
extern "C" void fn_801CBF8C();
extern "C" void fn_801CBFD4();
extern "C" void fn_801CC00C();
extern "C" void fn_801CC048();
extern "C" void fn_801CC348();
extern "C" void fn_801CC6FC();
extern "C" void fn_801CCC6C();
extern "C" void fn_801CD440();
extern "C" void fn_801CDE24();
extern "C" void fn_801CE0C4();
extern "C" void fn_801CE178();
extern "C" void fn_801CE290();
extern "C" void fn_801CE4F8();
extern "C" void fn_801CE7A8();
extern "C" void fn_801CE9C4();
extern "C" void fn_801CE9D4();
extern "C" void fn_801CE9EC();
extern "C" void fn_801CE9F8();
extern "C" void fn_801CEA04();
extern "C" void fn_801CEA54();
extern "C" void fn_801CEA7C();
extern "C" void fn_802E1DE4();
extern "C" void fn_802E3F80();
extern "C" void fn_802E3FE8();
extern "C" void fn_802E413C();
extern "C" void fn_802E4240();
extern "C" void fn_802E430C();
extern "C" void fn_802E432C();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4590();
extern "C" void fn_802E4654();
extern "C" void fn_802E46B0();
extern "C" void fn_802E4700();
extern "C" void fn_802E4750();
extern "C" void fn_802E4808();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void fn_8030D7E0();
extern "C" void fn_8030DEEC();
extern "C" void strcmp();

// ----------------------------------------------------------------------------
// fn_801BEE9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BEE9C() {
    nofralloc
    lfs f1, lbl_804A1A70
    lis r4, lbl_80360820@ha
    lfs f0, lbl_804A1A74
    li r0, 0x0
    addi r4, r4, lbl_80360820@l
    addi r6, r3, 0x34
    addi r5, r3, 0x94
    stw r4, 0x0(r3)
    cmplw r6, r5
    stw r0, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    bgelr
    addi r8, r3, 0x34
    lis r4, 0x2aab
    subf r9, r8, r5
    subi r7, r3, 0xec
    addi r10, r9, 0x2f
    subi r0, r4, 0x5555
    mulhw r0, r0, r10
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r11, r0, r4
    addi r12, r11, 0x1
    cmpwi r12, 0x8
    ble lbl_801BF144
    cmplw r8, r5
    li r4, 0x0
    li r5, 0x0
    bgt lbl_801BEF5C
    clrrwi. r0, r9, 31
    li r8, 0x1
    bne lbl_801BEF50
    clrrwi. r0, r10, 31
    beq lbl_801BEF50
    li r8, 0x0
lbl_801BEF50:
    cmpwi r8, 0x0
    beq lbl_801BEF5C
    li r5, 0x1
lbl_801BEF5C:
    cmpwi r5, 0x0
    beq lbl_801BEF8C
    clrrwi. r8, r11, 31
    li r5, 0x1
    bne lbl_801BEF80
    clrrwi r0, r12, 31
    cmpw r8, r0
    beq lbl_801BEF80
    li r5, 0x0
lbl_801BEF80:
    cmpwi r5, 0x0
    beq lbl_801BEF8C
    li r4, 0x1
lbl_801BEF8C:
    cmpwi r4, 0x0
    beq lbl_801BF144
    addi r4, r7, 0x17f
    li r0, 0x180
    subf r4, r6, r4
    lfs f1, lbl_804A1A70
    divwu r4, r4, r0
    lfs f0, lbl_804A1A74
    li r0, 0x0
    mtctr r4
    cmplw r6, r7
    bge lbl_801BF144
lbl_801BEFBC:
    stw r0, 0x0(r6)
    stfs f1, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f1, 0x10(r6)
    stw r0, 0x14(r6)
    stw r0, 0x18(r6)
    stfs f1, 0x1c(r6)
    stfs f1, 0x20(r6)
    stfs f0, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f0, 0x2c(r6)
    stw r0, 0x30(r6)
    stfs f1, 0x34(r6)
    stfs f1, 0x38(r6)
    stfs f1, 0x3c(r6)
    stfs f1, 0x40(r6)
    stw r0, 0x44(r6)
    stw r0, 0x48(r6)
    stfs f1, 0x4c(r6)
    stfs f1, 0x50(r6)
    stfs f0, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f0, 0x5c(r6)
    stw r0, 0x60(r6)
    stfs f1, 0x64(r6)
    stfs f1, 0x68(r6)
    stfs f1, 0x6c(r6)
    stfs f1, 0x70(r6)
    stw r0, 0x74(r6)
    stw r0, 0x78(r6)
    stfs f1, 0x7c(r6)
    stfs f1, 0x80(r6)
    stfs f0, 0x84(r6)
    stfs f0, 0x88(r6)
    stfs f0, 0x8c(r6)
    stw r0, 0x90(r6)
    stfs f1, 0x94(r6)
    stfs f1, 0x98(r6)
    stfs f1, 0x9c(r6)
    stfs f1, 0xa0(r6)
    stw r0, 0xa4(r6)
    stw r0, 0xa8(r6)
    stfs f1, 0xac(r6)
    stfs f1, 0xb0(r6)
    stfs f0, 0xb4(r6)
    stfs f0, 0xb8(r6)
    stfs f0, 0xbc(r6)
    stw r0, 0xc0(r6)
    stfs f1, 0xc4(r6)
    stfs f1, 0xc8(r6)
    stfs f1, 0xcc(r6)
    stfs f1, 0xd0(r6)
    stw r0, 0xd4(r6)
    stw r0, 0xd8(r6)
    stfs f1, 0xdc(r6)
    stfs f1, 0xe0(r6)
    stfs f0, 0xe4(r6)
    stfs f0, 0xe8(r6)
    stfs f0, 0xec(r6)
    stw r0, 0xf0(r6)
    stfs f1, 0xf4(r6)
    stfs f1, 0xf8(r6)
    stfs f1, 0xfc(r6)
    stfs f1, 0x100(r6)
    stw r0, 0x104(r6)
    stw r0, 0x108(r6)
    stfs f1, 0x10c(r6)
    stfs f1, 0x110(r6)
    stfs f0, 0x114(r6)
    stfs f0, 0x118(r6)
    stfs f0, 0x11c(r6)
    stw r0, 0x120(r6)
    stfs f1, 0x124(r6)
    stfs f1, 0x128(r6)
    stfs f1, 0x12c(r6)
    stfs f1, 0x130(r6)
    stw r0, 0x134(r6)
    stw r0, 0x138(r6)
    stfs f1, 0x13c(r6)
    stfs f1, 0x140(r6)
    stfs f0, 0x144(r6)
    stfs f0, 0x148(r6)
    stfs f0, 0x14c(r6)
    stw r0, 0x150(r6)
    stfs f1, 0x154(r6)
    stfs f1, 0x158(r6)
    stfs f1, 0x15c(r6)
    stfs f1, 0x160(r6)
    stw r0, 0x164(r6)
    stw r0, 0x168(r6)
    stfs f1, 0x16c(r6)
    stfs f1, 0x170(r6)
    stfs f0, 0x174(r6)
    stfs f0, 0x178(r6)
    stfs f0, 0x17c(r6)
    addi r6, r6, 0x180
    bdnz lbl_801BEFBC
lbl_801BF144:
    addi r5, r3, 0x94
    li r0, 0x30
    addi r4, r5, 0x2f
    lfs f1, lbl_804A1A70
    subf r4, r6, r4
    lfs f0, lbl_804A1A74
    divwu r4, r4, r0
    li r0, 0x0
    mtctr r4
    cmplw r6, r5
    bgelr
lbl_801BF170:
    stw r0, 0x0(r6)
    stfs f1, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f1, 0x10(r6)
    stw r0, 0x14(r6)
    stw r0, 0x18(r6)
    stfs f1, 0x1c(r6)
    stfs f1, 0x20(r6)
    stfs f0, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f0, 0x2c(r6)
    addi r6, r6, 0x30
    bdnz lbl_801BF170
    blr
}

// ----------------------------------------------------------------------------
// fn_801BF1AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BF1AC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, -0x1
    li r8, 0x0
    stw r0, 0x24(r1)
    lhz r0, 0x0(r5)
    stw r31, 0x1c(r1)
    mr r31, r6
    rlwinm. r0, r0, 0, 27, 27
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r7, 0xd4(r3)
    stb r8, 0xd0(r3)
    stw r7, 0xd8(r3)
    stw r7, 0xdc(r3)
    beq lbl_801BF208
    li r0, 0x1
    stw r8, 0xd4(r3)
    stb r0, 0xd0(r3)
lbl_801BF208:
    lhz r0, 0x0(r5)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801BF224
    lbz r4, 0xd0(r3)
    addi r0, r4, 0x1
    stw r4, 0xd8(r3)
    stb r0, 0xd0(r3)
lbl_801BF224:
    lhz r0, 0x0(r5)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801BF240
    lbz r4, 0xd0(r3)
    addi r0, r4, 0x1
    stw r4, 0xdc(r3)
    stb r0, 0xd0(r3)
lbl_801BF240:
    lbz r3, 0xd0(r3)
    bl GXSetNumTexGens
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_801BF28C
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_801BF578
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
// fn_801BF28C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BF28C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lhz r0, 0x0(r4)
    mr r25, r3
    mr r30, r4
    mr r31, r5
    extrwi r3, r0, 1, 28
    bl GXSetClipMode
    lbz r3, 0x5(r30)
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    mr r29, r30
    mr r28, r30
    li r26, 0x0
    b lbl_801BF3E8
lbl_801BF2E8:
    mr r3, r26
    bl fn_802E432C
    lbz r4, 0xc(r29)
    mr r3, r26
    lbz r5, 0xd(r29)
    lbz r6, 0xe(r29)
    lbz r7, 0xf(r29)
    bl fn_802E4460
    lbz r4, 0x30(r29)
    mr r3, r26
    lbz r5, 0x31(r29)
    lbz r6, 0x32(r29)
    lbz r7, 0x33(r29)
    bl fn_802E44A0
    lbz r4, 0x1c(r28)
    mr r3, r26
    lbz r5, 0x1d(r28)
    lbz r6, 0x1e(r28)
    lbz r7, 0x1f(r28)
    lbz r8, 0x20(r28)
    bl fn_802E44E0
    lbz r4, 0x40(r28)
    mr r3, r26
    lbz r5, 0x41(r28)
    lbz r6, 0x42(r28)
    lbz r7, 0x43(r28)
    lbz r8, 0x44(r28)
    bl fn_802E4538
    add r27, r30, r26
    mr r3, r26
    lbz r4, 0x54(r27)
    bl fn_802E46B0
    lbz r4, 0x58(r27)
    mr r3, r26
    bl fn_802E4700
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    lbz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_801BF3A8
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    b lbl_801BF3DC
lbl_801BF3A8:
    cmplwi r0, 0x1
    bne lbl_801BF3C8
    lwz r4, 0xd8(r25)
    mr r3, r26
    li r6, 0x4
    mr r5, r4
    bl fn_802E48CC
    b lbl_801BF3DC
lbl_801BF3C8:
    mr r3, r26
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
lbl_801BF3DC:
    addi r29, r29, 0x4
    addi r28, r28, 0x5
    addi r26, r26, 0x1
lbl_801BF3E8:
    lbz r0, 0x5(r30)
    cmpw r26, r0
    blt lbl_801BF2E8
    lhz r0, 0x0(r30)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801BF49C
    li r3, 0x1
    bl fn_802E430C
    lwz r4, 0xdc(r25)
    li r3, 0x0
    mr r5, r4
    bl fn_802E4240
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E413C
    lbz r0, 0xa8(r30)
    addi r4, r30, 0x90
    li r3, 0x1
    extsb r5, r0
    bl fn_802E3FE8
    li r26, 0x1
    li r27, 0x0
    li r29, 0x0
    b lbl_801BF48C
lbl_801BF44C:
    lbz r0, 0x7(r30)
    and. r0, r0, r26
    beq lbl_801BF484
    stw r29, 0x8(r1)
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    stw r29, 0xc(r1)
    li r6, 0x7
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_802E3F80
lbl_801BF484:
    clrlslwi r26, r26, 25, 1
    addi r27, r27, 0x1
lbl_801BF48C:
    lbz r0, 0x5(r30)
    cmpw r27, r0
    blt lbl_801BF44C
    b lbl_801BF4A4
lbl_801BF49C:
    li r3, 0x0
    bl fn_802E430C
lbl_801BF4A4:
    lhz r0, 0x0(r30)
    extrwi r3, r0, 1, 29
    bl GXSetZCompLoc
    li r3, 0x0
    bl GXSetCullMode
    li r3, 0x0
    bl fn_802E1DE4
    lbz r3, 0x5c(r30)
    lbz r4, 0x5d(r30)
    lbz r5, 0x5e(r30)
    lbz r6, 0x5f(r30)
    bl GXSetBlendMode
    lhz r0, 0x0(r30)
    lbz r4, 0x70(r30)
    clrlwi r3, r0, 31
    extrwi r5, r0, 1, 30
    bl GXSetZMode
    lhz r0, 0x0(r30)
    rlwinm. r0, r0, 0, 19, 19
    beq lbl_801BF53C
    lbz r6, 0x84(r31)
    addi r4, r1, 0x14
    lbz r3, 0x85(r31)
    lbz r5, 0x86(r31)
    lbz r0, 0x87(r31)
    stb r3, 0x19(r1)
    lfs f1, 0x74(r31)
    stb r6, 0x18(r1)
    lfs f2, 0x78(r31)
    stb r5, 0x1a(r1)
    lfs f3, 0x7c(r31)
    stb r0, 0x1b(r1)
    lfs f4, 0x80(r31)
    lwz r0, 0x18(r1)
    lwz r3, 0x70(r31)
    stw r0, 0x14(r1)
    bl GXSetFog
    b lbl_801BF560
lbl_801BF53C:
    lfs f1, lbl_804A1A74
    li r0, 0x0
    lfs f2, lbl_804A1A78
    addi r4, r1, 0x10
    fmr f3, f1
    stw r0, 0x10(r1)
    fmr f4, f2
    li r3, 0x0
    bl GXSetFog
lbl_801BF560:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801BF578
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BF578() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, -0x1
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r6
    stw r0, 0xb0(r3)
    stw r0, 0xb4(r3)
    li r3, 0x1
    bl GXSetNumChans
    lbz r0, 0x60(r29)
    cmpwi r0, 0x0
    bne lbl_801BF5E0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    b lbl_801BF6A0
lbl_801BF5E0:
    lbz r0, 0x60(r31)
    cmplwi r0, 0x1
    bne lbl_801BF620
    lbz r0, 0x6c(r29)
    li r3, 0x0
    lwz r7, 0x64(r29)
    li r4, 0x1
    cmpwi r0, 0x0
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x2
    beq lbl_801BF618
    li r9, 0x1
lbl_801BF618:
    bl GXSetChanCtrl
    b lbl_801BF640
lbl_801BF620:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
lbl_801BF640:
    lbz r0, 0x68(r31)
    cmplwi r0, 0x1
    bne lbl_801BF680
    lbz r0, 0x6c(r29)
    li r3, 0x2
    lwz r7, 0x68(r29)
    li r4, 0x1
    cmpwi r0, 0x0
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x2
    beq lbl_801BF678
    li r9, 0x1
lbl_801BF678:
    bl GXSetChanCtrl
    b lbl_801BF6A0
lbl_801BF680:
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
lbl_801BF6A0:
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    lbz r7, 0x98(r29)
    addi r4, r1, 0xc
    lbz r6, 0x99(r29)
    li r3, 0x4
    lbz r5, 0x9a(r29)
    lbz r0, 0x9b(r29)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    bl GXSetChanMatColor
    lbz r7, 0x9c(r29)
    addi r4, r1, 0x8
    lbz r6, 0x9d(r29)
    li r3, 0x4
    lbz r5, 0x9e(r29)
    lbz r0, 0x9f(r29)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    bl GXSetChanAmbColor
    li r4, 0x0
    li r0, 0x3
    stb r4, 0xb8(r30)
    li r5, 0x0
    li r3, 0x1
    stb r4, 0xb9(r30)
    stb r4, 0xba(r30)
    stb r4, 0xbb(r30)
    stb r4, 0xbc(r30)
    stb r4, 0xbd(r30)
    stb r4, 0xbe(r30)
    stb r4, 0xbf(r30)
    mtctr r0
lbl_801BF74C:
    add r4, r31, r5
    lbz r0, 0x61(r4)
    cmpwi r0, 0x4
    beq lbl_801BF7AC
    bge lbl_801BF778
    cmpwi r0, 0x2
    beq lbl_801BF790
    bge lbl_801BF7A4
    cmpwi r0, 0x1
    bge lbl_801BF788
    b lbl_801BF7BC
lbl_801BF778:
    cmpwi r0, 0x6
    beq lbl_801BF7B4
    bge lbl_801BF7BC
    b lbl_801BF798
lbl_801BF788:
    stb r3, 0xb8(r30)
    b lbl_801BF7BC
lbl_801BF790:
    stb r3, 0xb9(r30)
    b lbl_801BF7BC
lbl_801BF798:
    stb r3, 0xb8(r30)
    stb r3, 0xb9(r30)
    b lbl_801BF7BC
lbl_801BF7A4:
    stb r3, 0xba(r30)
    b lbl_801BF7BC
lbl_801BF7AC:
    stb r3, 0xbb(r30)
    b lbl_801BF7BC
lbl_801BF7B4:
    stb r3, 0xba(r30)
    stb r3, 0xbb(r30)
lbl_801BF7BC:
    lbz r0, 0x69(r4)
    cmpwi r0, 0x4
    beq lbl_801BF818
    bge lbl_801BF7E4
    cmpwi r0, 0x2
    beq lbl_801BF7FC
    bge lbl_801BF810
    cmpwi r0, 0x1
    bge lbl_801BF7F4
    b lbl_801BF828
lbl_801BF7E4:
    cmpwi r0, 0x6
    beq lbl_801BF820
    bge lbl_801BF828
    b lbl_801BF804
lbl_801BF7F4:
    stb r3, 0xbc(r30)
    b lbl_801BF828
lbl_801BF7FC:
    stb r3, 0xbd(r30)
    b lbl_801BF828
lbl_801BF804:
    stb r3, 0xbc(r30)
    stb r3, 0xbd(r30)
    b lbl_801BF828
lbl_801BF810:
    stb r3, 0xbe(r30)
    b lbl_801BF828
lbl_801BF818:
    stb r3, 0xbf(r30)
    b lbl_801BF828
lbl_801BF820:
    stb r3, 0xbe(r30)
    stb r3, 0xbf(r30)
lbl_801BF828:
    addi r5, r5, 0x1
    bdnz lbl_801BF74C
    li r0, 0x4
    li r5, 0x0
    li r3, 0x1
    mtctr r0
lbl_801BF840:
    add r4, r31, r5
    lbz r0, 0x64(r4)
    cmpwi r0, 0x4
    beq lbl_801BF8A0
    bge lbl_801BF86C
    cmpwi r0, 0x2
    beq lbl_801BF884
    bge lbl_801BF898
    cmpwi r0, 0x1
    bge lbl_801BF87C
    b lbl_801BF8B0
lbl_801BF86C:
    cmpwi r0, 0x6
    beq lbl_801BF8A8
    bge lbl_801BF8B0
    b lbl_801BF88C
lbl_801BF87C:
    stb r3, 0xb8(r30)
    b lbl_801BF8B0
lbl_801BF884:
    stb r3, 0xb9(r30)
    b lbl_801BF8B0
lbl_801BF88C:
    stb r3, 0xb8(r30)
    stb r3, 0xb9(r30)
    b lbl_801BF8B0
lbl_801BF898:
    stb r3, 0xba(r30)
    b lbl_801BF8B0
lbl_801BF8A0:
    stb r3, 0xbb(r30)
    b lbl_801BF8B0
lbl_801BF8A8:
    stb r3, 0xba(r30)
    stb r3, 0xbb(r30)
lbl_801BF8B0:
    lbz r0, 0x6c(r4)
    cmpwi r0, 0x4
    beq lbl_801BF90C
    bge lbl_801BF8D8
    cmpwi r0, 0x2
    beq lbl_801BF8F0
    bge lbl_801BF904
    cmpwi r0, 0x1
    bge lbl_801BF8E8
    b lbl_801BF91C
lbl_801BF8D8:
    cmpwi r0, 0x6
    beq lbl_801BF914
    bge lbl_801BF91C
    b lbl_801BF8F8
lbl_801BF8E8:
    stb r3, 0xbc(r30)
    b lbl_801BF91C
lbl_801BF8F0:
    stb r3, 0xbd(r30)
    b lbl_801BF91C
lbl_801BF8F8:
    stb r3, 0xbc(r30)
    stb r3, 0xbd(r30)
    b lbl_801BF91C
lbl_801BF904:
    stb r3, 0xbe(r30)
    b lbl_801BF91C
lbl_801BF90C:
    stb r3, 0xbf(r30)
    b lbl_801BF91C
lbl_801BF914:
    stb r3, 0xbe(r30)
    stb r3, 0xbf(r30)
lbl_801BF91C:
    addi r5, r5, 0x1
    bdnz lbl_801BF840
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801BF940
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BF940() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    cmpwi r7, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_801BF988
    lbz r0, 0x97(r4)
    lwz r6, 0xb0(r3)
    cmpw r6, r0
    bne lbl_801BF988
    beq lbl_801BF9B8
lbl_801BF988:
    lbz r0, 0x97(r4)
    lbz r6, 0x3(r28)
    stw r0, 0xb0(r3)
    lbz r0, 0x97(r4)
    stw r0, 0xb4(r3)
    lbz r3, 0x2(r5)
    lbz r4, 0x97(r4)
    lbz r5, 0x4(r5)
    lbz r7, 0x98(r27)
    bl fn_802E4808
    li r0, 0x1
    b lbl_801BF9BC
lbl_801BF9B8:
    li r0, 0x0
lbl_801BF9BC:
    cmpwi r31, 0x0
    li r31, 0x0
    bne lbl_801BF9D0
    cmpwi r0, 0x0
    beq lbl_801BF9D4
lbl_801BF9D0:
    li r31, 0x1
lbl_801BF9D4:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r30
    bl fn_801BFF78
    cmpwi r31, 0x0
    li r31, 0x0
    bne lbl_801BF9FC
    cmpwi r3, 0x0
    beq lbl_801BFA00
lbl_801BF9FC:
    li r31, 0x1
lbl_801BFA00:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    bl fn_801C070C
    cmpwi r31, 0x0
    li r4, 0x0
    beq lbl_801BFA30
    cmpwi r3, 0x0
    bne lbl_801BFA30
    li r4, 0x1
lbl_801BFA30:
    lhz r0, 0x0(r28)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801BFF60
    lwz r3, 0xc8(r27)
    lwz r3, 0x20(r3)
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    lbz r0, -0x3f9c(r3)
    cmpwi r0, 0x0
    bne lbl_801BFA60
    b lbl_801BFF60
lbl_801BFA60:
    cmpwi r4, 0x0
    beq lbl_801BFF60
    addi r4, r1, 0x24
    li r3, 0x9
    bl GXGetVtxDesc
    addi r4, r1, 0x18
    li r3, 0xa
    bl GXGetVtxDesc
    addi r4, r1, 0x30
    li r3, 0xb
    bl GXGetVtxDesc
    addi r4, r1, 0x3c
    li r3, 0xc
    bl GXGetVtxDesc
    addi r4, r1, 0xc
    li r3, 0xd
    bl GXGetVtxDesc
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0x9
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xa
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x34
    addi r6, r1, 0x38
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xb
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x40
    addi r6, r1, 0x44
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xc
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x10
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xd
    bl GXGetVtxAttrFmt
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x8
    lwz r5, 0x24(r1)
    lwz r6, 0x28(r1)
    li r4, 0x0
    lwz r7, 0x2c(r1)
    lis r3, 0xcc01
    lwz r8, 0x18(r1)
    lwz r9, 0x1c(r1)
    lwz r10, 0x20(r1)
    lwz r11, 0xc(r1)
    lwz r12, 0x10(r1)
    lwz r31, 0x14(r1)
    mtctr r0
lbl_801BFB60:
    cmpwi r5, 0x0
    beq lbl_801BFCA8
    cmpwi r5, 0x2
    beq lbl_801BFC9C
    bge lbl_801BFB80
    cmpwi r5, 0x1
    bge lbl_801BFB8C
    b lbl_801BFCA8
lbl_801BFB80:
    cmpwi r5, 0x4
    bge lbl_801BFCA8
    b lbl_801BFCA4
lbl_801BFB8C:
    cmpwi r6, 0x1
    beq lbl_801BFBA4
    bge lbl_801BFCA8
    cmpwi r6, 0x0
    bge lbl_801BFC2C
    b lbl_801BFCA8
lbl_801BFBA4:
    cmpwi r7, 0x2
    beq lbl_801BFBF0
    bge lbl_801BFBC0
    cmpwi r7, 0x0
    beq lbl_801BFBD0
    bge lbl_801BFBE0
    b lbl_801BFCA8
lbl_801BFBC0:
    cmpwi r7, 0x4
    beq lbl_801BFC10
    bge lbl_801BFCA8
    b lbl_801BFC00
lbl_801BFBD0:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFBE0:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFBF0:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC00:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC10:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC2C:
    cmpwi r7, 0x2
    beq lbl_801BFC70
    bge lbl_801BFC48
    cmpwi r7, 0x0
    beq lbl_801BFC58
    bge lbl_801BFC64
    b lbl_801BFCA8
lbl_801BFC48:
    cmpwi r7, 0x4
    beq lbl_801BFC88
    bge lbl_801BFCA8
    b lbl_801BFC7C
lbl_801BFC58:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC64:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC70:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC7C:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC88:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC9C:
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFCA4:
    sth r4, -0x8000(r3)
lbl_801BFCA8:
    cmpwi r8, 0x0
    beq lbl_801BFD4C
    cmpwi r8, 0x2
    beq lbl_801BFD40
    bge lbl_801BFCC8
    cmpwi r8, 0x1
    bge lbl_801BFCD4
    b lbl_801BFD4C
lbl_801BFCC8:
    cmpwi r8, 0x4
    bge lbl_801BFD4C
    b lbl_801BFD48
lbl_801BFCD4:
    cmpwi r9, 0x0
    beq lbl_801BFCE0
    b lbl_801BFD4C
lbl_801BFCE0:
    cmpwi r10, 0x3
    beq lbl_801BFD14
    bge lbl_801BFCF8
    cmpwi r10, 0x1
    beq lbl_801BFD04
    b lbl_801BFD4C
lbl_801BFCF8:
    cmpwi r10, 0x5
    bge lbl_801BFD4C
    b lbl_801BFD24
lbl_801BFD04:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD14:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD24:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD40:
    stb r4, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD48:
    sth r4, -0x8000(r3)
lbl_801BFD4C:
    lwz r0, 0x30(r1)
    cmpwi r0, 0x0
    beq lbl_801BFDC8
    cmpwi r0, 0x2
    beq lbl_801BFDBC
    bge lbl_801BFD70
    cmpwi r0, 0x1
    bge lbl_801BFD7C
    b lbl_801BFDC8
lbl_801BFD70:
    cmpwi r0, 0x4
    bge lbl_801BFDC8
    b lbl_801BFDC4
lbl_801BFD7C:
    lwz r0, 0x34(r1)
    cmpwi r0, 0x1
    beq lbl_801BFDA8
    bge lbl_801BFDC8
    cmpwi r0, 0x0
    bge lbl_801BFD98
    b lbl_801BFDC8
lbl_801BFD98:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFDC8
lbl_801BFDA8:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFDC8
lbl_801BFDBC:
    stb r4, -0x8000(r3)
    b lbl_801BFDC8
lbl_801BFDC4:
    sth r4, -0x8000(r3)
lbl_801BFDC8:
    lwz r0, 0x3c(r1)
    cmpwi r0, 0x0
    beq lbl_801BFE44
    cmpwi r0, 0x2
    beq lbl_801BFE38
    bge lbl_801BFDEC
    cmpwi r0, 0x1
    bge lbl_801BFDF8
    b lbl_801BFE44
lbl_801BFDEC:
    cmpwi r0, 0x4
    bge lbl_801BFE44
    b lbl_801BFE40
lbl_801BFDF8:
    lwz r0, 0x40(r1)
    cmpwi r0, 0x1
    beq lbl_801BFE24
    bge lbl_801BFE44
    cmpwi r0, 0x0
    bge lbl_801BFE14
    b lbl_801BFE44
lbl_801BFE14:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFE44
lbl_801BFE24:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFE44
lbl_801BFE38:
    stb r4, -0x8000(r3)
    b lbl_801BFE44
lbl_801BFE40:
    sth r4, -0x8000(r3)
lbl_801BFE44:
    cmpwi r11, 0x0
    beq lbl_801BFF5C
    cmpwi r11, 0x2
    beq lbl_801BFF50
    bge lbl_801BFE64
    cmpwi r11, 0x1
    bge lbl_801BFE70
    b lbl_801BFF5C
lbl_801BFE64:
    cmpwi r11, 0x4
    bge lbl_801BFF5C
    b lbl_801BFF58
lbl_801BFE70:
    cmpwi r12, 0x1
    beq lbl_801BFE88
    bge lbl_801BFF5C
    cmpwi r12, 0x0
    bge lbl_801BFEF8
    b lbl_801BFF5C
lbl_801BFE88:
    cmpwi r31, 0x2
    beq lbl_801BFECC
    bge lbl_801BFEA4
    cmpwi r31, 0x0
    beq lbl_801BFEB4
    bge lbl_801BFEC0
    b lbl_801BFF5C
lbl_801BFEA4:
    cmpwi r31, 0x4
    beq lbl_801BFEE4
    bge lbl_801BFF5C
    b lbl_801BFED8
lbl_801BFEB4:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFEC0:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFECC:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFED8:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFEE4:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFEF8:
    cmpwi r31, 0x2
    beq lbl_801BFF34
    bge lbl_801BFF14
    cmpwi r31, 0x0
    beq lbl_801BFF24
    bge lbl_801BFF2C
    b lbl_801BFF5C
lbl_801BFF14:
    cmpwi r31, 0x4
    beq lbl_801BFF44
    bge lbl_801BFF5C
    b lbl_801BFF3C
lbl_801BFF24:
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF2C:
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF34:
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF3C:
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF44:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF50:
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF58:
    sth r4, -0x8000(r3)
lbl_801BFF5C:
    bdnz lbl_801BFB60
lbl_801BFF60:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801BFF78
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BFF78() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lbz r0, 0xb8(r3)
    mr r25, r3
    mr r29, r4
    mr r26, r5
    cmpwi r0, 0x0
    mr r27, r6
    li r28, 0x0
    beq lbl_801BFFC4
    lbz r0, 0x20(r4)
    stb r0, 0xc0(r3)
    lbz r0, 0x21(r4)
    stb r0, 0xc1(r3)
    lbz r0, 0x22(r4)
    stb r0, 0xc2(r3)
lbl_801BFFC4:
    lbz r0, 0xb9(r3)
    cmpwi r0, 0x0
    beq lbl_801BFFE8
    lbz r0, 0x24(r4)
    stb r0, 0xc4(r3)
    lbz r0, 0x25(r4)
    stb r0, 0xc5(r3)
    lbz r0, 0x26(r4)
    stb r0, 0xc6(r3)
lbl_801BFFE8:
    lbz r0, 0xba(r3)
    cmpwi r0, 0x0
    beq lbl_801C000C
    lbz r0, 0x28(r4)
    stb r0, 0xc8(r3)
    lbz r0, 0x29(r4)
    stb r0, 0xc9(r3)
    lbz r0, 0x2a(r4)
    stb r0, 0xca(r3)
lbl_801C000C:
    lbz r0, 0xbb(r3)
    cmpwi r0, 0x0
    beq lbl_801C0030
    lbz r0, 0x2c(r4)
    stb r0, 0xcc(r3)
    lbz r0, 0x2d(r4)
    stb r0, 0xcd(r3)
    lbz r0, 0x2e(r4)
    stb r0, 0xce(r3)
lbl_801C0030:
    lbz r4, 0xbc(r3)
    li r0, 0xff
    cmpwi r4, 0x0
    bne lbl_801C0064
    lbz r4, 0xbd(r3)
    cmpwi r4, 0x0
    bne lbl_801C0064
    lbz r4, 0xbe(r3)
    cmpwi r4, 0x0
    bne lbl_801C0064
    lbz r3, 0xbf(r3)
    cmpwi r3, 0x0
    beq lbl_801C007C
lbl_801C0064:
    lbz r3, 0x71(r5)
    cmpwi r3, 0x0
    beq lbl_801C007C
    mr r3, r29
    bl fn_801B60F0
    mr r0, r3
lbl_801C007C:
    lbz r3, 0xbc(r25)
    cmpwi r3, 0x0
    beq lbl_801C00AC
    clrlwi r3, r0, 24
    lbz r4, 0x23(r29)
    cmplwi r3, 0xff
    stb r4, 0xc3(r25)
    beq lbl_801C00AC
    mullw r3, r4, r3
    addi r3, r3, 0x80
    srawi r3, r3, 8
    stb r3, 0xc3(r25)
lbl_801C00AC:
    lbz r3, 0xbd(r25)
    cmpwi r3, 0x0
    beq lbl_801C00DC
    clrlwi r3, r0, 24
    lbz r4, 0x27(r29)
    cmplwi r3, 0xff
    stb r4, 0xc7(r25)
    beq lbl_801C00DC
    mullw r3, r4, r3
    addi r3, r3, 0x80
    srawi r3, r3, 8
    stb r3, 0xc7(r25)
lbl_801C00DC:
    lbz r3, 0xbe(r25)
    cmpwi r3, 0x0
    beq lbl_801C010C
    clrlwi r3, r0, 24
    lbz r4, 0x2b(r29)
    cmplwi r3, 0xff
    stb r4, 0xcb(r25)
    beq lbl_801C010C
    mullw r3, r4, r3
    addi r3, r3, 0x80
    srawi r3, r3, 8
    stb r3, 0xcb(r25)
lbl_801C010C:
    lbz r3, 0xbf(r25)
    cmpwi r3, 0x0
    beq lbl_801C013C
    clrlwi r0, r0, 24
    lbz r3, 0x2f(r29)
    cmplwi r0, 0xff
    stb r3, 0xcf(r25)
    beq lbl_801C013C
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0xcf(r25)
lbl_801C013C:
    lwz r3, 0xc8(r29)
    lbz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_801C01D0
    lbz r0, 0xb8(r25)
    cmpwi r0, 0x0
    bne lbl_801C017C
    lbz r0, 0xb9(r25)
    cmpwi r0, 0x0
    bne lbl_801C017C
    lbz r0, 0xbc(r25)
    cmpwi r0, 0x0
    bne lbl_801C017C
    lbz r0, 0xbd(r25)
    cmpwi r0, 0x0
    beq lbl_801C018C
lbl_801C017C:
    mr r4, r29
    addi r5, r25, 0xc0
    addi r6, r25, 0xc4
    bl fn_801B823C
lbl_801C018C:
    lbz r0, 0xba(r25)
    cmpwi r0, 0x0
    bne lbl_801C01BC
    lbz r0, 0xbb(r25)
    cmpwi r0, 0x0
    bne lbl_801C01BC
    lbz r0, 0xbe(r25)
    cmpwi r0, 0x0
    bne lbl_801C01BC
    lbz r0, 0xbf(r25)
    cmpwi r0, 0x0
    beq lbl_801C01D0
lbl_801C01BC:
    lwz r3, 0xc8(r29)
    mr r4, r29
    addi r5, r25, 0xc8
    addi r6, r25, 0xcc
    bl fn_801B823C
lbl_801C01D0:
    mr r30, r25
    li r29, 0x0
    li r31, 0x0
lbl_801C01DC:
    add r3, r26, r29
    stw r31, 0x14(r1)
    lbz r4, 0x61(r3)
    cmpwi r4, 0x0
    bne lbl_801C01FC
    lbz r0, 0x69(r3)
    cmpwi r0, 0x0
    beq lbl_801C0450
lbl_801C01FC:
    cmpwi r4, 0x4
    beq lbl_801C02D0
    bge lbl_801C0220
    cmpwi r4, 0x2
    beq lbl_801C024C
    bge lbl_801C02B4
    cmpwi r4, 0x1
    bge lbl_801C0230
    b lbl_801C0334
lbl_801C0220:
    cmpwi r4, 0x6
    beq lbl_801C02EC
    bge lbl_801C0334
    b lbl_801C0268
lbl_801C0230:
    lbz r5, 0xc0(r25)
    lbz r4, 0xc1(r25)
    lbz r0, 0xc2(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C024C:
    lbz r5, 0xc4(r25)
    lbz r4, 0xc5(r25)
    lbz r0, 0xc6(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C0268:
    lbz r4, 0xc1(r25)
    lbz r0, 0xc5(r25)
    lbz r6, 0xc2(r25)
    mullw r7, r4, r0
    lbz r5, 0xc6(r25)
    lbz r4, 0xc0(r25)
    lbz r0, 0xc4(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x15(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x16(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x14(r1)
    b lbl_801C0334
lbl_801C02B4:
    lbz r5, 0xc8(r25)
    lbz r4, 0xc9(r25)
    lbz r0, 0xca(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C02D0:
    lbz r5, 0xcc(r25)
    lbz r4, 0xcd(r25)
    lbz r0, 0xce(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C02EC:
    lbz r4, 0xc9(r25)
    lbz r0, 0xcd(r25)
    lbz r6, 0xca(r25)
    mullw r7, r4, r0
    lbz r5, 0xce(r25)
    lbz r4, 0xc8(r25)
    lbz r0, 0xcc(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x15(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x16(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x14(r1)
lbl_801C0334:
    lbz r0, 0x69(r3)
    cmpwi r0, 0x4
    beq lbl_801C03AC
    bge lbl_801C035C
    cmpwi r0, 0x2
    beq lbl_801C0378
    bge lbl_801C03A0
    cmpwi r0, 0x1
    bge lbl_801C036C
    b lbl_801C03D0
lbl_801C035C:
    cmpwi r0, 0x6
    beq lbl_801C03B8
    bge lbl_801C03D0
    b lbl_801C0384
lbl_801C036C:
    lbz r0, 0xc3(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C0378:
    lbz r0, 0xc7(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C0384:
    lbz r3, 0xc3(r25)
    lbz r0, 0xc7(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C03A0:
    lbz r0, 0xcb(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C03AC:
    lbz r0, 0xcf(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C03B8:
    lbz r3, 0xcb(r25)
    lbz r0, 0xcf(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x17(r1)
lbl_801C03D0:
    cmpwi r27, 0x0
    bne lbl_801C0418
    lbz r3, 0x14(r1)
    lbz r0, 0x94(r30)
    cmplw r3, r0
    bne lbl_801C0418
    lbz r3, 0x15(r1)
    lbz r0, 0x95(r30)
    cmplw r3, r0
    bne lbl_801C0418
    lbz r3, 0x16(r1)
    lbz r0, 0x96(r30)
    cmplw r3, r0
    bne lbl_801C0418
    lbz r3, 0x17(r1)
    lbz r0, 0x97(r30)
    cmplw r3, r0
    beq lbl_801C0450
lbl_801C0418:
    lwz r0, 0x14(r1)
    addi r3, r29, 0x1
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_802E4590
    lbz r3, 0x14(r1)
    li r28, 0x1
    lbz r0, 0x15(r1)
    stb r3, 0x94(r30)
    lbz r3, 0x16(r1)
    stb r0, 0x95(r30)
    lbz r0, 0x17(r1)
    stb r3, 0x96(r30)
    stb r0, 0x97(r30)
lbl_801C0450:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x3
    blt lbl_801C01DC
    mr r30, r25
    li r29, 0x0
    li r31, 0x0
lbl_801C046C:
    add r3, r26, r29
    stw r31, 0x10(r1)
    lbz r4, 0x64(r3)
    cmpwi r4, 0x0
    bne lbl_801C048C
    lbz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_801C06E0
lbl_801C048C:
    cmpwi r4, 0x4
    beq lbl_801C0560
    bge lbl_801C04B0
    cmpwi r4, 0x2
    beq lbl_801C04DC
    bge lbl_801C0544
    cmpwi r4, 0x1
    bge lbl_801C04C0
    b lbl_801C05C4
lbl_801C04B0:
    cmpwi r4, 0x6
    beq lbl_801C057C
    bge lbl_801C05C4
    b lbl_801C04F8
lbl_801C04C0:
    lbz r5, 0xc0(r25)
    lbz r4, 0xc1(r25)
    lbz r0, 0xc2(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C04DC:
    lbz r5, 0xc4(r25)
    lbz r4, 0xc5(r25)
    lbz r0, 0xc6(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C04F8:
    lbz r4, 0xc1(r25)
    lbz r0, 0xc5(r25)
    lbz r6, 0xc2(r25)
    mullw r7, r4, r0
    lbz r5, 0xc6(r25)
    lbz r4, 0xc0(r25)
    lbz r0, 0xc4(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x11(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x12(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x10(r1)
    b lbl_801C05C4
lbl_801C0544:
    lbz r5, 0xc8(r25)
    lbz r4, 0xc9(r25)
    lbz r0, 0xca(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C0560:
    lbz r5, 0xcc(r25)
    lbz r4, 0xcd(r25)
    lbz r0, 0xce(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C057C:
    lbz r4, 0xc9(r25)
    lbz r0, 0xcd(r25)
    lbz r6, 0xca(r25)
    mullw r7, r4, r0
    lbz r5, 0xce(r25)
    lbz r4, 0xc8(r25)
    lbz r0, 0xcc(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x11(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x12(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x10(r1)
lbl_801C05C4:
    lbz r0, 0x6c(r3)
    cmpwi r0, 0x4
    beq lbl_801C063C
    bge lbl_801C05EC
    cmpwi r0, 0x2
    beq lbl_801C0608
    bge lbl_801C0630
    cmpwi r0, 0x1
    bge lbl_801C05FC
    b lbl_801C0660
lbl_801C05EC:
    cmpwi r0, 0x6
    beq lbl_801C0648
    bge lbl_801C0660
    b lbl_801C0614
lbl_801C05FC:
    lbz r0, 0xc3(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0608:
    lbz r0, 0xc7(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0614:
    lbz r3, 0xc3(r25)
    lbz r0, 0xc7(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0630:
    lbz r0, 0xcb(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C063C:
    lbz r0, 0xcf(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0648:
    lbz r3, 0xcb(r25)
    lbz r0, 0xcf(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x13(r1)
lbl_801C0660:
    cmpwi r27, 0x0
    bne lbl_801C06A8
    lbz r3, 0x10(r1)
    lbz r0, 0xa0(r30)
    cmplw r3, r0
    bne lbl_801C06A8
    lbz r3, 0x11(r1)
    lbz r0, 0xa1(r30)
    cmplw r3, r0
    bne lbl_801C06A8
    lbz r3, 0x12(r1)
    lbz r0, 0xa2(r30)
    cmplw r3, r0
    bne lbl_801C06A8
    lbz r3, 0x13(r1)
    lbz r0, 0xa3(r30)
    cmplw r3, r0
    beq lbl_801C06E0
lbl_801C06A8:
    lwz r0, 0x10(r1)
    mr r3, r29
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_802E4654
    lbz r3, 0x10(r1)
    li r28, 0x1
    lbz r0, 0x11(r1)
    stb r3, 0xa0(r30)
    lbz r3, 0x12(r1)
    stb r0, 0xa1(r30)
    lbz r0, 0x13(r1)
    stb r3, 0xa2(r30)
    stb r0, 0xa3(r30)
lbl_801C06E0:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_801C046C
    addi r11, r1, 0x40
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801C070C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C070C() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    opword 0xF3E10188
    stfd f30, 0x170(r1)
    opword 0xF3C10178
    stfd f29, 0x160(r1)
    opword 0xF3A10168
    stfd f28, 0x150(r1)
    opword 0xF3810158
    stfd f27, 0x140(r1)
    opword 0xF3610148
    stfd f26, 0x130(r1)
    opword 0xF3410138
    stfd f25, 0x120(r1)
    opword 0xF3210128
    stfd f24, 0x110(r1)
    opword 0xF3010118
    stfd f23, 0x100(r1)
    opword 0xF2E10108
    stfd f22, 0xf0(r1)
    opword 0xF2C100F8
    stfd f21, 0xe0(r1)
    opword 0xF2A100E8
    stfd f20, 0xd0(r1)
    opword 0xF28100D8
    addi r11, r1, 0xd0
    bl _savegpr_15
    lis r0, 0x4330
    mr r15, r4
    stw r0, 0x78(r1)
    mr r16, r5
    lfd f26, lbl_804A1A88
    mr r17, r6
    stw r0, 0x80(r1)
    mr r18, r7
    lfs f27, lbl_804A1A7C
    mr r29, r3
    lfd f28, lbl_804A1A90
    mr r28, r15
    lfs f30, lbl_804A1A80
    mr r25, r3
    lfs f29, lbl_804A1A74
    mr r23, r15
    lfs f31, lbl_804A1A70
    li r21, 0x0
    li r20, 0x0
    li r27, 0x0
    li r24, 0x0
lbl_801C07D4:
    lwz r0, 0xd4(r29)
    addi r26, r27, 0x2
    cmpwi r0, 0x0
    blt lbl_801C0CE0
    lwz r22, 0x88(r28)
    cmpwi r22, 0x0
    beq lbl_801C0CE0
    lhz r0, 0x94(r15)
    cmpwi r18, 0x0
    sraw r3, r0, r27
    sraw r0, r0, r26
    clrlwi r31, r3, 30
    clrlwi r30, r0, 30
    bne lbl_801C0830
    lwz r0, 0x4(r25)
    cmplw r22, r0
    bne lbl_801C0830
    lwz r0, 0x18(r25)
    cmpw r31, r0
    bne lbl_801C0830
    lwz r0, 0x1c(r25)
    cmpw r30, r0
    beq lbl_801C0938
lbl_801C0830:
    stw r22, 0x4(r25)
    li r21, 0x1
    stw r31, 0x18(r25)
    stw r30, 0x1c(r25)
    lbz r19, 0xc(r22)
    cmpwi r19, 0xb
    bge lbl_801C0864
    cmpwi r19, 0x7
    beq lbl_801C08F4
    bge lbl_801C0870
    cmpwi r19, 0x0
    bge lbl_801C08C8
    b lbl_801C08F4
lbl_801C0864:
    cmpwi r19, 0xe
    beq lbl_801C08C8
    b lbl_801C08F4
lbl_801C0870:
    lwz r4, 0x20(r22)
    addi r3, r1, 0x18
    lbz r5, 0xd(r22)
    lhz r6, 0xe(r22)
    bl GXInitTlutObj
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x18
    bl GXLoadTlut
    lwz r0, 0xd4(r29)
    mr r7, r19
    mr r8, r31
    mr r9, r30
    stw r0, 0x8(r1)
    addi r3, r1, 0x28
    lbz r0, 0x14(r22)
    lwz r4, 0x1c(r22)
    subfic r0, r0, 0x1
    lhz r5, 0x4(r22)
    lhz r6, 0x6(r22)
    srwi r10, r0, 31
    bl GXInitTexObjCI
    b lbl_801C08F4
lbl_801C08C8:
    lbz r0, 0x14(r22)
    mr r7, r19
    lwz r4, 0x1c(r22)
    mr r8, r31
    subfic r0, r0, 0x1
    lhz r5, 0x4(r22)
    lhz r6, 0x6(r22)
    mr r9, r30
    addi r3, r1, 0x28
    srwi r10, r0, 31
    bl GXInitTexObj
lbl_801C08F4:
    lbz r0, 0x14(r22)
    addi r3, r1, 0x28
    lbz r4, 0x15(r22)
    li r6, 0x0
    stw r0, 0x7c(r1)
    li r7, 0x0
    lbz r5, 0x16(r22)
    li r8, 0x0
    lfd f0, 0x78(r1)
    lfs f1, lbl_804A1A74
    fsubs f0, f0, f26
    lfs f3, 0x18(r22)
    fadds f2, f27, f0
    bl GXInitTexObjLOD
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x28
    bl GXLoadTexObj
lbl_801C0938:
    lhz r4, 0x94(r15)
    li r3, 0x1
    sraw r0, r4, r27
    clrlwi r6, r0, 30
    cmpwi r6, 0x2
    bne lbl_801C0954
    li r3, 0x2
lbl_801C0954:
    lbz r0, 0x96(r15)
    sraw r0, r0, r24
    clrlwi r5, r0, 30
    cmplwi r5, 0x1
    beq lbl_801C0970
    cmplwi r5, 0x3
    bne lbl_801C0978
lbl_801C0970:
    slwi r0, r3, 1
    subf r3, r0, r3
lbl_801C0978:
    xoris r3, r3, 0x8000
    sraw r0, r4, r26
    stw r3, 0x84(r1)
    clrlwi r4, r0, 30
    cmpwi r4, 0x2
    li r3, 0x1
    lfd f0, 0x80(r1)
    fsubs f25, f0, f28
    bne lbl_801C09A0
    li r3, 0x2
lbl_801C09A0:
    cmplwi r5, 0x2
    beq lbl_801C09B0
    cmplwi r5, 0x3
    bne lbl_801C09B8
lbl_801C09B0:
    slwi r0, r3, 1
    subf r3, r0, r3
lbl_801C09B8:
    xoris r0, r3, 0x8000
    cmplwi r5, 0x1
    stw r0, 0x7c(r1)
    li r0, 0x0
    lfd f0, 0x78(r1)
    fsubs f24, f0, f28
    beq lbl_801C09DC
    cmplwi r5, 0x3
    bne lbl_801C09E0
lbl_801C09DC:
    li r0, 0x1
lbl_801C09E0:
    cmpwi r6, 0x2
    bne lbl_801C09EC
    slwi r0, r0, 1
lbl_801C09EC:
    xoris r0, r0, 0x8000
    cmplwi r5, 0x2
    stw r0, 0x84(r1)
    li r0, 0x0
    lfd f0, 0x80(r1)
    fsubs f23, f0, f28
    beq lbl_801C0A10
    cmplwi r5, 0x3
    bne lbl_801C0A14
lbl_801C0A10:
    li r0, 0x1
lbl_801C0A14:
    cmpwi r4, 0x2
    bne lbl_801C0A20
    slwi r0, r0, 1
lbl_801C0A20:
    xoris r0, r0, 0x8000
    cmpwi r18, 0x0
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f22, f0, f28
    bne lbl_801C0AB8
    lfs f0, 0x8(r25)
    fcmpu cr0, f25, f0
    bne lbl_801C0AB8
    lfs f0, 0xc(r25)
    fcmpu cr0, f24, f0
    bne lbl_801C0AB8
    lfs f0, 0x10(r25)
    fcmpu cr0, f23, f0
    bne lbl_801C0AB8
    lfs f0, 0x14(r25)
    fcmpu cr0, f22, f0
    bne lbl_801C0AB8
    lfs f1, 0x4c(r23)
    lfs f0, 0x20(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x50(r23)
    lfs f0, 0x24(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x64(r28)
    lfs f0, 0x28(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x70(r23)
    lfs f0, 0x2c(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x74(r23)
    lfs f0, 0x30(r25)
    fcmpu cr0, f1, f0
    beq lbl_801C0CE0
lbl_801C0AB8:
    stfs f25, 0x8(r25)
    addi r3, r1, 0x48
    li r21, 0x1
    stfs f24, 0xc(r25)
    stfs f23, 0x10(r25)
    stfs f22, 0x14(r25)
    lfs f0, 0x4c(r23)
    stfs f0, 0x20(r25)
    lfs f0, 0x50(r23)
    stfs f0, 0x24(r25)
    lfs f0, 0x64(r28)
    stfs f0, 0x28(r25)
    lfs f0, 0x70(r23)
    stfs f0, 0x2c(r25)
    lfs f0, 0x74(r23)
    stfs f0, 0x30(r25)
    bl PSMTXIdentity
    lfs f2, 0x70(r23)
    stfs f2, 0x54(r1)
    lfs f0, 0x74(r23)
    stfs f0, 0x64(r1)
    lfs f1, 0x64(r28)
    fcmpu cr0, f29, f1
    beq lbl_801C0B70
    fsubs f20, f2, f30
    addi r3, r1, 0x14
    fsubs f21, f0, f30
    addi r4, r1, 0x10
    bl fn_801B9C64
    lfs f5, 0x14(r1)
    lfs f6, 0x10(r1)
    fmuls f0, f5, f20
    stfs f5, 0x58(r1)
    fmuls f1, f6, f20
    fneg f4, f5
    stfs f6, 0x5c(r1)
    fmuls f2, f5, f21
    fadds f3, f30, f1
    stfs f6, 0x48(r1)
    fadds f1, f30, f0
    fmuls f0, f6, f21
    stfs f4, 0x4c(r1)
    fsubs f2, f3, f2
    fadds f0, f1, f0
    stfs f2, 0x54(r1)
    stfs f0, 0x64(r1)
lbl_801C0B70:
    fcmpu cr0, f31, f25
    bne lbl_801C0BA8
    fcmpu cr0, f31, f24
    bne lbl_801C0BA8
    lfs f0, 0x4c(r23)
    fcmpu cr0, f31, f0
    bne lbl_801C0BA8
    lfs f0, 0x50(r23)
    fcmpu cr0, f31, f0
    bne lbl_801C0BA8
    fcmpu cr0, f29, f23
    bne lbl_801C0BA8
    fcmpu cr0, f29, f22
    beq lbl_801C0C28
lbl_801C0BA8:
    lfs f1, 0x4c(r23)
    lfs f0, 0x50(r23)
    fmuls f3, f25, f1
    lfs f2, 0x48(r1)
    lfs f1, 0x4c(r1)
    fmuls f6, f24, f0
    lfs f0, 0x54(r1)
    fmuls f4, f2, f3
    fmuls f3, f1, f3
    lfs f2, 0x58(r1)
    fsubs f5, f0, f30
    lfs f1, 0x5c(r1)
    stfs f4, 0x48(r1)
    lfs f0, 0x64(r1)
    stfs f3, 0x4c(r1)
    fmuls f3, f2, f6
    fmuls f2, f1, f6
    lfs f4, 0x4c(r23)
    fsubs f1, f0, f30
    fmuls f0, f5, f4
    stfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    fadds f0, f30, f0
    fmuls f0, f25, f0
    fadds f0, f23, f0
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r23)
    fmuls f0, f1, f0
    fadds f0, f30, f0
    fmuls f0, f24, f0
    fadds f0, f22, f0
    stfs f0, 0x64(r1)
lbl_801C0C28:
    lhz r3, 0x0(r16)
    addi r0, r20, 0x7
    sraw r0, r3, r0
    clrlwi. r0, r0, 31
    bne lbl_801C0C88
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x48
    li r5, 0x1
    slwi r0, r4, 2
    subf r4, r4, r0
    addi r4, r4, 0x1e
    bl GXLoadTexMtxImm
    cmpwi r18, 0x0
    beq lbl_801C0CE0
    lwz r3, 0xd4(r29)
    li r4, 0x1
    li r5, 0x4
    li r7, 0x0
    slwi r0, r3, 2
    li r8, 0x7d
    subf r6, r3, r0
    addi r6, r6, 0x1e
    bl GXSetTexCoordGen2
    b lbl_801C0CE0
lbl_801C0C88:
    addi r4, r1, 0x48
    addi r3, r17, 0x30
    mr r5, r4
    bl PSMTXConcat
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x48
    li r5, 0x0
    slwi r0, r4, 2
    subf r4, r4, r0
    addi r4, r4, 0x40
    bl GXLoadTexMtxImm
    cmpwi r18, 0x0
    beq lbl_801C0CE0
    lwz r3, 0xd4(r29)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    slwi r0, r3, 2
    li r7, 0x0
    subf r8, r3, r0
    addi r8, r8, 0x40
    bl GXSetTexCoordGen2
lbl_801C0CE0:
    addi r20, r20, 0x1
    addi r28, r28, 0x4
    cmpwi r20, 0x3
    addi r27, r27, 0x4
    addi r25, r25, 0x30
    addi r24, r24, 0x2
    addi r23, r23, 0x8
    addi r29, r29, 0x4
    blt lbl_801C07D4
    mr r3, r21
    opword 0xE3E10188
    lfd f31, 0x180(r1)
    opword 0xE3C10178
    lfd f30, 0x170(r1)
    opword 0xE3A10168
    lfd f29, 0x160(r1)
    opword 0xE3810158
    lfd f28, 0x150(r1)
    opword 0xE3610148
    lfd f27, 0x140(r1)
    opword 0xE3410138
    lfd f26, 0x130(r1)
    opword 0xE3210128
    lfd f25, 0x120(r1)
    opword 0xE3010118
    lfd f24, 0x110(r1)
    opword 0xE2E10108
    lfd f23, 0x100(r1)
    opword 0xE2C100F8
    lfd f22, 0xf0(r1)
    opword 0xE2A100E8
    lfd f21, 0xe0(r1)
    opword 0xE28100D8
    lfd f20, 0xd0(r1)
    addi r11, r1, 0xd0
    bl _restgpr_15
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_801C0D80
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C0D80() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801C0D8C
    b lbl_801C0D98
lbl_801C0D8C:
    lis r3, fn_801C0DF8@ha
    addi r3, r3, fn_801C0DF8@l
    blr
lbl_801C0D98:
    lis r3, fn_801C0DC8@ha
    addi r3, r3, fn_801C0DC8@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801C0DA4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C0DA4() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801C0DB0
    b lbl_801C0DBC
lbl_801C0DB0:
    lis r3, fn_801C0E70@ha
    addi r3, r3, fn_801C0E70@l
    blr
lbl_801C0DBC:
    lis r3, fn_801C0E40@ha
    addi r3, r3, fn_801C0E40@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801C0DC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C0DC8() {
    nofralloc
    lwz r4, 0x38(r3)
    b lbl_801C0DDC
lbl_801C0DD0:
    lhz r0, 0x42(r3)
    add r4, r4, r0
    lwz r4, 0x4(r4)
lbl_801C0DDC:
    cmpwi r4, 0x0
    beq lbl_801C0DF0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C0DD0
lbl_801C0DF0:
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801C0DF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C0DF8() {
    nofralloc
    lwz r4, 0x3c(r3)
    b lbl_801C0E24
lbl_801C0E00:
    lhz r5, 0x42(r3)
    lwzx r4, r4, r5
    b lbl_801C0E10
lbl_801C0E0C:
    lwzx r4, r4, r5
lbl_801C0E10:
    cmpwi r4, 0x0
    beq lbl_801C0E24
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C0E0C
lbl_801C0E24:
    cmpwi r4, 0x0
    beq lbl_801C0E38
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C0E00
lbl_801C0E38:
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_801C0E40
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C0E40() {
    nofralloc
    lhz r5, 0x42(r3)
    add r3, r4, r5
    lwz r3, 0x4(r3)
    b lbl_801C0E58
lbl_801C0E50:
    add r3, r3, r5
    lwz r3, 0x4(r3)
lbl_801C0E58:
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801C0E50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C0E70
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C0E70() {
    nofralloc
    lhz r5, 0x42(r3)
    lwzx r3, r4, r5
    b lbl_801C0E80
lbl_801C0E7C:
    lwzx r3, r3, r5
lbl_801C0E80:
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801C0E7C
    blr
}

// ----------------------------------------------------------------------------
// fn_801C0E98
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C0E98() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    addi r4, r30, 0x8
    stw r5, 0x0(r3)
    lwz r3, 0x20(r5)
    bl fn_801ACC48
    mr r3, r31
    addi r4, r30, 0x38
    bl fn_801B7FB8
    addi r3, r30, 0x38
    addi r4, r30, 0x68
    bl PSMTXInverse
    lfs f2, 0x2c(r30)
    addi r3, r1, 0x38
    lfs f1, 0x1c(r30)
    mr r5, r3
    lfs f0, 0xc(r30)
    addi r4, r30, 0x68
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    opword 0xE021003C
    opword 0xE0418038
    opword 0x10210072
    lfs f0, lbl_804A1A98
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C0F30
    li r0, 0x0
    b lbl_801C0F50
lbl_801C0F30:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410038
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418040
    opword 0xF0010038
    opword 0x10020058
    opword 0xF0018040
lbl_801C0F50:
    cmpwi r0, 0x0
    bne lbl_801C0F78
    lfs f1, lbl_804A1A74
    lfs f0, lbl_804A1A70
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x40(r1)
lbl_801C0F78:
    lfs f0, 0x38(r1)
    addi r4, r1, 0x2c
    lfs f3, 0x34(r30)
    mr r5, r4
    stfs f0, 0x98(r30)
    addi r3, r30, 0x68
    lfs f2, 0x24(r30)
    lfs f0, 0x3c(r1)
    lfs f1, 0x14(r30)
    stfs f0, 0x9c(r30)
    lfs f0, 0x40(r1)
    stfs f0, 0xa0(r30)
    stfs f1, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f3, 0x34(r1)
    bl fn_8030D7E0
    lfs f0, 0x2c(r1)
    stfs f0, 0xa4(r30)
    lfs f0, 0x30(r1)
    stfs f0, 0xa8(r30)
    lfs f0, 0x34(r1)
    stfs f0, 0xac(r30)
    lwz r3, 0x24(r31)
    lbz r0, 0x14a(r3)
    cmpwi r0, 0x6
    beq lbl_801C1098
    bge lbl_801C0FF0
    cmpwi r0, 0x5
    bge lbl_801C0FF8
    b lbl_801C1098
lbl_801C0FF0:
    cmpwi r0, 0x8
    bge lbl_801C1098
lbl_801C0FF8:
    lfs f1, 0x8c(r30)
    lfs f0, 0x7c(r30)
    stfs f1, 0x28(r1)
    lfs f1, 0x6c(r30)
    stfs f0, 0x24(r1)
    lfs f0, lbl_804A1A98
    opword 0xE0410024
    stfs f1, 0x20(r1)
    opword 0x104200B2
    opword 0xE0218020
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C1038
    li r0, 0x0
    b lbl_801C1058
lbl_801C1038:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C1058:
    cmpwi r0, 0x0
    bne lbl_801C1080
    lfs f1, lbl_804A1A74
    lfs f0, lbl_804A1A70
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
lbl_801C1080:
    lfs f2, 0x20(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f2, 0xb0(r30)
    stfs f1, 0xb4(r30)
    stfs f0, 0xb8(r30)
lbl_801C1098:
    mr r3, r30
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C10B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C10B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801C10DC
    cmpwi r4, 0x0
    ble lbl_801C10DC
    bl dtor_80136CFC
lbl_801C10DC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C10F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C10F4() {
    nofralloc
    lis r8, lbl_803E6550@ha
    lfs f1, lbl_804A1A70
    addi r8, r8, lbl_803E6550@l
    lfs f0, lbl_804A1A74
    addi r3, r8, 0x30
    stfs f1, 0x0(r8)
    addi r7, r8, 0x0
    addi r6, r8, 0xc
    addi r5, r8, 0x18
    addi r4, r8, 0x24
    stfs f0, 0x4(r7)
    stfs f0, 0x8(r7)
    stfs f0, 0xc(r8)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0x18(r8)
    stfs f0, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f0, 0x24(r8)
    stfs f0, 0x4(r4)
    stfs f0, 0x8(r4)
    stfs f1, 0x30(r8)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f0, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801C117C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C117C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BEE9C
    lis r4, lbl_80360838@ha
    mr r3, r31
    addi r4, r4, lbl_80360838@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C11B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C11B8() {
    nofralloc
    lwz r6, 0x24(r5)
    lbz r0, 0x149(r6)
    cmpwi r0, 0x2
    beq lbl_801C11EC
    bge lbl_801C11DC
    cmpwi r0, 0x0
    beq lbl_801C11E4
    bge lbl_801C11E8
    blr
lbl_801C11DC:
    cmpwi r0, 0x4
    bgelr
lbl_801C11E4:
    b fn_801C11F4
lbl_801C11E8:
    b fn_801C1BBC
lbl_801C11EC:
    b fn_801C2408
    blr
}

// ----------------------------------------------------------------------------
// fn_801C11F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C11F4() {
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    opword 0xF3E102C8
    stfd f30, 0x2b0(r1)
    opword 0xF3C102B8
    stfd f29, 0x2a0(r1)
    opword 0xF3A102A8
    stfd f28, 0x290(r1)
    opword 0xF3810298
    stfd f27, 0x280(r1)
    opword 0xF3610288
    stfd f26, 0x270(r1)
    opword 0xF3410278
    stfd f25, 0x260(r1)
    opword 0xF3210268
    stfd f24, 0x250(r1)
    opword 0xF3010258
    stfd f23, 0x240(r1)
    opword 0xF2E10248
    stfd f22, 0x230(r1)
    opword 0xF2C10238
    stfd f21, 0x220(r1)
    opword 0xF2A10228
    stfd f20, 0x210(r1)
    opword 0xF2810218
    stfd f19, 0x200(r1)
    opword 0xF2610208
    stfd f18, 0x1f0(r1)
    opword 0xF24101F8
    stfd f17, 0x1e0(r1)
    opword 0xF22101E8
    stfd f16, 0x1d0(r1)
    opword 0xF20101D8
    stfd f15, 0x1c0(r1)
    opword 0xF1E101C8
    stfd f14, 0x1b0(r1)
    opword 0xF1C101B8
    addi r11, r1, 0x1b0
    bl _savegpr_18
    lfs f13, lbl_804A1AA0
    lis r21, 0x4330
    lfs f7, 0x88(r4)
    mr r24, r3
    lwz r20, 0x0(r4)
    mr r26, r5
    lwz r19, 0x4(r4)
    fcmpu cr0, f13, f7
    lwz r12, 0x8(r4)
    mr r25, r4
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r21, 0x140(r1)
    stw r21, 0x148(r1)
    stw r20, 0x110(r1)
    stw r19, 0x114(r1)
    stw r12, 0x118(r1)
    stw r11, 0x11c(r1)
    stw r10, 0x120(r1)
    stw r9, 0x124(r1)
    stw r8, 0x128(r1)
    stw r7, 0x12c(r1)
    stw r6, 0x130(r1)
    stw r5, 0x134(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    beq lbl_801C142C
    addi r3, r1, 0x90
    bl GXGetProjectionv
    lfs f7, 0x90(r1)
    fctiwz f7, f7
    stfd f7, 0x150(r1)
    lwz r0, 0x154(r1)
    cmpwi r0, 0x1
    beq lbl_801C141C
    bge lbl_801C142C
    cmpwi r0, 0x0
    bge lbl_801C1350
    b lbl_801C142C
lbl_801C1350:
    mr r3, r25
    addi r4, r25, 0x8c
    addi r5, r1, 0x84
    bl fn_8030D7E0
    addi r3, r1, 0x84
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C1408
    lfs f13, 0x8c(r1)
    lfs f7, lbl_804A1AA0
    fcmpo cr0, f13, f7
    opword 0x4C411382
    bne lbl_801C13C8
    lfs f15, 0x88(r25)
    lfs f16, 0x84(r1)
    lfs f14, 0x88(r1)
    fmuls f13, f13, f15
    fmuls f17, f16, f15
    lfs f7, 0x13c(r1)
    fmuls f15, f14, f15
    lfs f16, 0x11c(r1)
    lfs f14, 0x12c(r1)
    fadds f16, f16, f17
    fadds f14, f14, f15
    fadds f7, f7, f13
    stfs f16, 0x11c(r1)
    stfs f14, 0x12c(r1)
    stfs f7, 0x13c(r1)
    b lbl_801C142C
lbl_801C13C8:
    lfs f15, 0x88(r25)
    lfs f16, 0x84(r1)
    lfs f14, 0x88(r1)
    fmuls f13, f13, f15
    fmuls f17, f16, f15
    lfs f7, 0x13c(r1)
    fmuls f15, f14, f15
    lfs f16, 0x11c(r1)
    lfs f14, 0x12c(r1)
    fsubs f16, f16, f17
    fsubs f14, f14, f15
    fsubs f7, f7, f13
    stfs f16, 0x11c(r1)
    stfs f14, 0x12c(r1)
    stfs f7, 0x13c(r1)
    b lbl_801C142C
lbl_801C1408:
    lfs f13, 0x13c(r1)
    lfs f7, 0x88(r25)
    fadds f7, f13, f7
    stfs f7, 0x13c(r1)
    b lbl_801C142C
lbl_801C141C:
    lfs f13, 0x13c(r1)
    lfs f7, 0x88(r25)
    fadds f7, f13, f7
    stfs f7, 0x13c(r1)
lbl_801C142C:
    lwz r6, 0x24(r26)
    mr r3, r24
    mr r4, r25
    mr r5, r26
    addi r31, r6, 0x9c
    bl fn_801C2BA8
    lbz r5, 0xa9(r31)
    mr r3, r26
    lbz r0, 0xaa(r31)
    addi r4, r1, 0xe0
    extsb r5, r5
    lbz r7, 0xd0(r24)
    extsb r0, r0
    lfd f15, lbl_804A1AB8
    xoris r5, r5, 0x8000
    lfs f14, lbl_804A1AA4
    xoris r0, r0, 0x8000
    stw r5, 0x144(r1)
    neg r6, r7
    stw r0, 0x14c(r1)
    or r5, r6, r7
    lfd f13, 0x140(r1)
    srwi r30, r5, 31
    lfd f7, 0x148(r1)
    fsubs f13, f13, f15
    fsubs f7, f7, f15
    fdivs f13, f13, f14
    fdivs f7, f7, f14
    stfs f13, 0x10(r1)
    stfs f7, 0x14(r1)
    bl fn_801B7FB8
    addi r4, r1, 0xe0
    addi r3, r1, 0x110
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_801BA138
    fmr f21, f1
    addi r3, r1, 0xe0
    li r4, 0x1
    bl fn_801BA138
    lfs f13, 0x114(r1)
    fmr f20, f1
    lfs f7, 0x124(r1)
    fmuls f13, f13, f13
    lfs f14, lbl_804A1AA0
    fmuls f7, f7, f7
    fadds f15, f13, f7
    fcmpo cr0, f15, f14
    opword 0x4C401382
    bne lbl_801C1500
    b lbl_801C150C
lbl_801C1500:
    fmr f1, f15
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f14, f15, f1
lbl_801C150C:
    lbz r0, 0xad(r31)
    cmplwi r0, 0x3
    beq lbl_801C1524
    lfs f7, lbl_804A1AA0
    fcmpu cr0, f7, f14
    bne lbl_801C1530
lbl_801C1524:
    lfs f23, lbl_804A1AA0
    lfs f22, lbl_804A1AA8
    b lbl_801C1554
lbl_801C1530:
    fres f15, f14
    lfs f13, 0x114(r1)
    lfs f7, 0x124(r1)
    opword 0x120F782A
    opword 0x11EF03F2
    fneg f13, f13
    opword 0x11EE83FC
    fmuls f23, f13, f15
    fmuls f22, f7, f15
lbl_801C1554:
    lwz r12, 0x0(r24)
    mr r3, r24
    lhz r0, 0x0(r31)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r18, r3
    lhz r0, 0x0(r31)
    mr r3, r24
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r18
    mr r29, r3
    mr r3, r26
    li r28, 0x1
    mtctr r12
    bctrl
    lfs f7, lbl_804A1AAC
    mr r27, r3
    lfs f17, lbl_804A1AA0
    addi r18, r1, 0xe0
    lfd f19, lbl_804A1AC0
    li r19, 0x0
    lfs f18, lbl_804A1AB0
    lis r20, 0xcc01
    stfd f7, 0x158(r1)
    li r21, 0x1
    li r22, 0x2
    li r23, 0x3
    b lbl_801C1B0C
lbl_801C15DC:
    lfs f14, 0x30(r27)
    lfs f13, 0x38(r27)
    lwz r4, 0xc8(r27)
    fmuls f15, f14, f13
    lfs f7, 0x58(r4)
    fmuls f27, f15, f7
    lfd f7, 0x158(r1)
    fcmpo cr0, f27, f7
    blt lbl_801C1AF4
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C1630
    bge lbl_801C1624
    cmpwi r0, 0x2000
    beq lbl_801C163C
    b lbl_801C164C
lbl_801C1624:
    cmpwi r0, 0x6000
    beq lbl_801C1658
    b lbl_801C164C
lbl_801C1630:
    lfs f7, 0x34(r27)
    fmuls f15, f7, f13
    b lbl_801C1658
lbl_801C163C:
    lfs f7, 0x3c(r27)
    fmuls f15, f14, f7
    b lbl_801C1658
    b lbl_801C1658
lbl_801C164C:
    lfs f13, 0x34(r27)
    lfs f7, 0x3c(r27)
    fmuls f15, f13, f7
lbl_801C1658:
    lfs f7, 0x5c(r4)
    fmuls f26, f15, f7
    lfd f7, 0x158(r1)
    fcmpo cr0, f26, f7
    blt lbl_801C1AF4
    mr r3, r24
    mr r4, r27
    mr r5, r31
    mr r6, r25
    mr r7, r28
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0x9a(r27)
    li r28, 0x0
    lfs f14, 0x40(r27)
    lfs f13, 0x44(r27)
    cmpwi r0, 0x0
    lfs f7, 0x48(r27)
    stfs f14, 0x18(r1)
    stfs f13, 0x1c(r1)
    stfs f7, 0x20(r1)
    beq lbl_801C16C8
    stw r0, 0x144(r1)
    lfd f7, 0x140(r1)
    fsubs f7, f7, f19
    fmuls f7, f18, f7
    fadds f7, f14, f7
    stfs f7, 0x18(r1)
lbl_801C16C8:
    lbz r0, 0x9b(r27)
    cmpwi r0, 0x0
    beq lbl_801C16F0
    stw r0, 0x14c(r1)
    lfs f7, 0x1c(r1)
    lfd f13, 0x148(r1)
    fsubs f13, f13, f19
    fmuls f13, f18, f13
    fadds f7, f7, f13
    stfs f7, 0x1c(r1)
lbl_801C16F0:
    lbz r0, 0x9c(r27)
    cmpwi r0, 0x0
    beq lbl_801C1718
    stw r0, 0x144(r1)
    lfs f7, 0x20(r1)
    lfd f13, 0x140(r1)
    fsubs f13, f13, f19
    fmuls f13, f18, f13
    fadds f7, f7, f13
    stfs f7, 0x20(r1)
lbl_801C1718:
    lwz r3, 0xc8(r27)
    lfs f13, 0x20(r1)
    lfs f7, 0x68(r3)
    lfs f16, 0x18(r1)
    fadds f7, f13, f7
    lfs f15, 0x60(r3)
    lfs f14, 0x1c(r1)
    lfs f13, 0x64(r3)
    fadds f15, f16, f15
    fcmpu cr0, f17, f7
    fadds f13, f14, f13
    stfs f7, 0x20(r1)
    stfs f15, 0x18(r1)
    stfs f13, 0x1c(r1)
    beq lbl_801C199C
    mr r3, r18
    addi r4, r27, 0xac
    addi r5, r1, 0x24
    bl fn_8030D7E0
    lfs f7, 0x20(r1)
    fmuls f30, f21, f22
    fmuls f31, f21, f23
    lfs f28, 0x10(r1)
    fmuls f25, f20, f22
    lfs f29, 0x14(r1)
    fmuls f24, f20, f23
    fneg f1, f7
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f13, 0x8(r1)
    li r3, 0x80
    lfs f15, 0x24(r1)
    li r4, 0x0
    fmuls f16, f13, f27
    lfs f7, 0xc(r1)
    lfs f14, 0x2c(r1)
    fmuls f13, f13, f26
    fmuls f27, f7, f27
    stfd f15, 0x160(r1)
    lfs f15, 0x28(r1)
    fmuls f7, f7, f26
    stfs f14, 0x38(r1)
    fmuls f14, f27, f28
    li r5, 0x4
    stfd f15, 0x168(r1)
    fmuls f15, f16, f28
    fadds f26, f29, f14
    fmuls f14, f13, f29
    stfs f17, 0x44(r1)
    fsubs f28, f28, f15
    fmuls f15, f7, f29
    stfs f17, 0x50(r1)
    fsubs f29, f26, f14
    fmuls f26, f30, f7
    fsubs f15, f28, f15
    fmuls f28, f30, f16
    fmuls f16, f31, f16
    fmuls f14, f30, f15
    fmuls f30, f24, f29
    fmuls f15, f31, f15
    fmuls f7, f31, f7
    fadds f30, f14, f30
    fsubs f14, f28, f26
    fmuls f31, f24, f27
    fmuls f29, f25, f29
    fadds f26, f28, f26
    fmuls f27, f25, f27
    fsubs f28, f15, f29
    lfd f15, 0x160(r1)
    fmuls f25, f25, f13
    fadds f29, f15, f30
    fsubs f15, f16, f7
    fadds f16, f16, f7
    lfd f7, 0x168(r1)
    stfs f29, 0x30(r1)
    fadds f28, f7, f28
    fmuls f7, f24, f13
    fsubs f24, f14, f31
    fsubs f14, f26, f31
    stfs f28, 0x34(r1)
    fadds f15, f27, f15
    fadds f13, f27, f16
    fsubs f16, f24, f7
    fadds f14, f7, f14
    fadds f15, f25, f15
    fsubs f7, f13, f25
    stfs f16, 0x3c(r1)
    stfs f15, 0x40(r1)
    stfs f14, 0x48(r1)
    stfs f7, 0x4c(r1)
    bl GXBegin
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A1003C
    opword 0x11C76828
    opword 0xE0E18038
    opword 0xE1A18044
    opword 0xF1C10078
    opword 0x11C76828
    lfs f7, 0x78(r1)
    opword 0xF1C18080
    lfs f13, 0x7c(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x80(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C18CC
    stb r19, -0x8000(r20)
lbl_801C18CC:
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A10048
    opword 0x11C76828
    opword 0xE0E18038
    opword 0xE1A18050
    opword 0xF1C1006C
    opword 0x11C76828
    lfs f7, 0x6c(r1)
    opword 0xF1C18074
    lfs f13, 0x70(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x74(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1910
    stb r21, -0x8000(r20)
lbl_801C1910:
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A1003C
    opword 0x11C7682A
    opword 0xE0E18038
    opword 0xE1A18044
    opword 0xF1C10060
    opword 0x11C7682A
    lfs f7, 0x60(r1)
    opword 0xF1C18068
    lfs f13, 0x64(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x68(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1954
    stb r22, -0x8000(r20)
lbl_801C1954:
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A10048
    opword 0x11C7682A
    opword 0xE0E18038
    opword 0xE1A18050
    opword 0xF1C10054
    opword 0x11C7682A
    lfs f7, 0x54(r1)
    opword 0xF1C1805C
    lfs f13, 0x58(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x5c(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AF4
    stb r23, -0x8000(r20)
    b lbl_801C1AF4
lbl_801C199C:
    opword 0x11B7B420
    opword 0xE01B00AC
    opword 0xE0520000
    opword 0x10FBD420
    opword 0xE1120010
    li r3, 0x80
    opword 0x10820032
    opword 0xE03B80B4
    opword 0x130D0518
    opword 0xE0720008
    opword 0x132D0558
    opword 0xE1320018
    opword 0x10A3207A
    opword 0xE1A10010
    opword 0x11480032
    opword 0xE0520020
    opword 0x1340C050
    opword 0xE0720028
    opword 0x1169507A
    li r4, 0x0
    opword 0x1339CCA0
    li r5, 0x4
    opword 0x11C76B7C
    opword 0x1318D460
    opword 0x11B901D8
    opword 0x10C52994
    opword 0x118B5B14
    opword 0x10F801DA
    opword 0x10820032
    opword 0x11E66420
    opword 0x10A3207A
    opword 0x13597B9C
    opword 0x11ED382A
    opword 0x10E03850
    opword 0x11D8D39E
    opword 0x11AD382A
    opword 0x10E52994
    opword 0x134E6828
    opword 0xF0E180B8
    opword 0xF34100B0
    opword 0x134E7828
    opword 0xF0E180C4
    opword 0xF34100BC
    opword 0x134E682A
    opword 0xF0E180D0
    opword 0xF34100C8
    opword 0x134E782A
    opword 0xF0E180DC
    opword 0xF34100D4
    bl GXBegin
    lfs f7, 0xb0(r1)
    cmpwi r30, 0x0
    lfs f13, 0xb4(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xb8(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1A88
    stb r19, -0x8000(r20)
lbl_801C1A88:
    lfs f7, 0xbc(r1)
    cmpwi r30, 0x0
    lfs f13, 0xc0(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xc4(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AAC
    stb r21, -0x8000(r20)
lbl_801C1AAC:
    lfs f7, 0xc8(r1)
    cmpwi r30, 0x0
    lfs f13, 0xcc(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xd0(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AD0
    stb r22, -0x8000(r20)
lbl_801C1AD0:
    lfs f7, 0xd4(r1)
    cmpwi r30, 0x0
    lfs f13, 0xd8(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xdc(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AF4
    stb r23, -0x8000(r20)
lbl_801C1AF4:
    mr r12, r29
    mr r3, r26
    mr r4, r27
    mtctr r12
    bctrl
    mr r27, r3
lbl_801C1B0C:
    cmpwi r27, 0x0
    bne lbl_801C15DC
    opword 0xE3E102C8
    lfd f31, 0x2c0(r1)
    opword 0xE3C102B8
    lfd f30, 0x2b0(r1)
    opword 0xE3A102A8
    lfd f29, 0x2a0(r1)
    opword 0xE3810298
    lfd f28, 0x290(r1)
    opword 0xE3610288
    lfd f27, 0x280(r1)
    opword 0xE3410278
    lfd f26, 0x270(r1)
    opword 0xE3210268
    lfd f25, 0x260(r1)
    opword 0xE3010258
    lfd f24, 0x250(r1)
    opword 0xE2E10248
    lfd f23, 0x240(r1)
    opword 0xE2C10238
    lfd f22, 0x230(r1)
    opword 0xE2A10228
    lfd f21, 0x220(r1)
    opword 0xE2810218
    lfd f20, 0x210(r1)
    opword 0xE2610208
    lfd f19, 0x200(r1)
    opword 0xE24101F8
    lfd f18, 0x1f0(r1)
    opword 0xE22101E8
    lfd f17, 0x1e0(r1)
    opword 0xE20101D8
    lfd f16, 0x1d0(r1)
    opword 0xE1E101C8
    lfd f15, 0x1c0(r1)
    opword 0xE1C101B8
    addi r11, r1, 0x1b0
    lfd f14, 0x1b0(r1)
    bl _restgpr_18
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C1BBC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C1BBC() {
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    opword 0xF3E10238
    stfd f30, 0x220(r1)
    opword 0xF3C10228
    stfd f29, 0x210(r1)
    opword 0xF3A10218
    stfd f28, 0x200(r1)
    opword 0xF3810208
    stfd f27, 0x1f0(r1)
    opword 0xF36101F8
    stfd f26, 0x1e0(r1)
    opword 0xF34101E8
    stfd f25, 0x1d0(r1)
    opword 0xF32101D8
    stfd f24, 0x1c0(r1)
    opword 0xF30101C8
    stfd f23, 0x1b0(r1)
    opword 0xF2E101B8
    stfd f22, 0x1a0(r1)
    opword 0xF2C101A8
    stfd f21, 0x190(r1)
    opword 0xF2A10198
    stfd f20, 0x180(r1)
    opword 0xF2810188
    stfd f19, 0x170(r1)
    opword 0xF2610178
    stfd f18, 0x160(r1)
    opword 0xF2410168
    addi r11, r1, 0x160
    bl _savegpr_18
    lfs f1, lbl_804A1AA0
    lis r20, 0x4330
    lfs f0, 0x88(r4)
    mr r23, r3
    lwz r19, 0x0(r4)
    mr r25, r5
    lwz r18, 0x4(r4)
    fcmpu cr0, f1, f0
    lwz r12, 0x8(r4)
    mr r24, r4
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r20, 0x110(r1)
    stw r20, 0x118(r1)
    stw r19, 0xe0(r1)
    stw r18, 0xe4(r1)
    stw r12, 0xe8(r1)
    stw r11, 0xec(r1)
    stw r10, 0xf0(r1)
    stw r9, 0xf4(r1)
    stw r8, 0xf8(r1)
    stw r7, 0xfc(r1)
    stw r6, 0x100(r1)
    stw r5, 0x104(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    beq lbl_801C1DD4
    addi r3, r1, 0x90
    bl GXGetProjectionv
    lfs f0, 0x90(r1)
    fctiwz f0, f0
    stfd f0, 0x120(r1)
    lwz r0, 0x124(r1)
    cmpwi r0, 0x1
    beq lbl_801C1DC4
    bge lbl_801C1DD4
    cmpwi r0, 0x0
    bge lbl_801C1CF8
    b lbl_801C1DD4
lbl_801C1CF8:
    mr r3, r24
    addi r4, r24, 0x8c
    addi r5, r1, 0x84
    bl fn_8030D7E0
    addi r3, r1, 0x84
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C1DB0
    lfs f1, 0x8c(r1)
    lfs f0, lbl_804A1AA0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C1D70
    lfs f3, 0x88(r24)
    lfs f4, 0x84(r1)
    lfs f2, 0x88(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x10c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xec(r1)
    lfs f2, 0xfc(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0xec(r1)
    stfs f2, 0xfc(r1)
    stfs f0, 0x10c(r1)
    b lbl_801C1DD4
lbl_801C1D70:
    lfs f3, 0x88(r24)
    lfs f4, 0x84(r1)
    lfs f2, 0x88(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x10c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xec(r1)
    lfs f2, 0xfc(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0xec(r1)
    stfs f2, 0xfc(r1)
    stfs f0, 0x10c(r1)
    b lbl_801C1DD4
lbl_801C1DB0:
    lfs f1, 0x10c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x10c(r1)
    b lbl_801C1DD4
lbl_801C1DC4:
    lfs f1, 0x10c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x10c(r1)
lbl_801C1DD4:
    lwz r6, 0x24(r25)
    mr r3, r23
    mr r4, r24
    mr r5, r25
    addi r30, r6, 0x9c
    bl fn_801C2BA8
    lbz r5, 0xaa(r30)
    mr r3, r25
    lbz r0, 0xa9(r30)
    addi r4, r1, 0xb0
    extsb r5, r5
    lbz r7, 0xd0(r23)
    extsb r0, r0
    lfd f3, lbl_804A1AB8
    xoris r5, r5, 0x8000
    lfs f1, lbl_804A1AA4
    xoris r0, r0, 0x8000
    stw r5, 0x114(r1)
    neg r6, r7
    stw r0, 0x11c(r1)
    or r5, r6, r7
    lfd f2, 0x110(r1)
    srwi r29, r5, 31
    lfd f0, 0x118(r1)
    fsubs f2, f2, f3
    fsubs f0, f0, f3
    fdivs f2, f2, f1
    fdivs f0, f0, f1
    stfs f2, 0x14(r1)
    stfs f0, 0x10(r1)
    bl fn_801B7FB8
    addi r4, r1, 0xb0
    addi r3, r1, 0xe0
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0xb0
    li r4, 0x0
    bl fn_801BA138
    fmr f26, f1
    addi r3, r1, 0xb0
    li r4, 0x1
    bl fn_801BA138
    lfs f0, 0x104(r1)
    fmr f27, f1
    lfs f2, 0xf4(r1)
    fmuls f0, f0, f0
    fmuls f1, f2, f2
    lfs f2, lbl_804A1AA0
    fadds f18, f1, f0
    fcmpo cr0, f18, f2
    opword 0x4C401382
    bne lbl_801C1EA8
    b lbl_801C1EB4
lbl_801C1EA8:
    fmr f1, f18
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f2, f18, f1
lbl_801C1EB4:
    lfs f19, lbl_804A1AA0
    fcmpu cr0, f19, f2
    bne lbl_801C1EC8
    lfs f18, lbl_804A1AA8
    b lbl_801C1EE8
lbl_801C1EC8:
    fres f3, f2
    lfs f1, 0x104(r1)
    lfs f0, 0xf4(r1)
    opword 0x1083182A
    opword 0x106300F2
    opword 0x106220FC
    fmuls f18, f1, f3
    fmuls f19, f0, f3
lbl_801C1EE8:
    lwz r12, 0x0(r23)
    mr r3, r23
    lhz r0, 0x0(r30)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r18, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r18
    mr r28, r3
    mr r3, r25
    li r27, 0x1
    mtctr r12
    bctrl
    lfd f29, lbl_804A1AC0
    mr r26, r3
    lfs f30, lbl_804A1AB0
    addi r31, r1, 0xb0
    lfs f31, lbl_804A1AA0
    li r18, 0x0
    lfs f28, lbl_804A1AAC
    lis r19, 0xcc01
    li r20, 0x1
    li r21, 0x2
    li r22, 0x3
    b lbl_801C2378
lbl_801C1F6C:
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_801C2360
    lfs f2, 0x30(r26)
    lfs f1, 0x38(r26)
    lwz r4, 0xc8(r26)
    fmuls f3, f2, f1
    lfs f0, 0x58(r4)
    fmuls f21, f3, f0
    fcmpo cr0, f21, f28
    blt lbl_801C2360
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C1FC8
    bge lbl_801C1FBC
    cmpwi r0, 0x2000
    beq lbl_801C1FD4
    b lbl_801C1FE4
lbl_801C1FBC:
    cmpwi r0, 0x6000
    beq lbl_801C1FF0
    b lbl_801C1FE4
lbl_801C1FC8:
    lfs f0, 0x34(r26)
    fmuls f3, f0, f1
    b lbl_801C1FF0
lbl_801C1FD4:
    lfs f0, 0x3c(r26)
    fmuls f3, f2, f0
    b lbl_801C1FF0
    b lbl_801C1FF0
lbl_801C1FE4:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f3, f1, f0
lbl_801C1FF0:
    lfs f0, 0x5c(r4)
    fmuls f20, f3, f0
    fcmpo cr0, f20, f28
    blt lbl_801C2360
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0x9a(r26)
    li r27, 0x0
    lfs f2, 0x40(r26)
    lfs f1, 0x44(r26)
    cmpwi r0, 0x0
    lfs f0, 0x48(r26)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    beq lbl_801C205C
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f29
    fmuls f0, f30, f0
    fadds f0, f2, f0
    stfs f0, 0x18(r1)
lbl_801C205C:
    lbz r0, 0x9b(r26)
    cmpwi r0, 0x0
    beq lbl_801C2084
    stw r0, 0x11c(r1)
    lfs f0, 0x1c(r1)
    lfd f1, 0x118(r1)
    fsubs f1, f1, f29
    fmuls f1, f30, f1
    fadds f0, f0, f1
    stfs f0, 0x1c(r1)
lbl_801C2084:
    lbz r0, 0x9c(r26)
    cmpwi r0, 0x0
    beq lbl_801C20AC
    stw r0, 0x114(r1)
    lfs f0, 0x20(r1)
    lfd f1, 0x110(r1)
    fsubs f1, f1, f29
    fmuls f1, f30, f1
    fadds f0, f0, f1
    stfs f0, 0x20(r1)
lbl_801C20AC:
    lwz r6, 0xc8(r26)
    mr r3, r31
    lfs f1, 0x18(r1)
    addi r4, r26, 0xac
    lfs f0, 0x60(r6)
    addi r5, r1, 0x24
    lfs f3, 0x1c(r1)
    fadds f4, f1, f0
    lfs f2, 0x64(r6)
    lfs f1, 0x20(r1)
    lfs f0, 0x68(r6)
    fadds f2, f3, f2
    stfs f4, 0x18(r1)
    fadds f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x20(r1)
    bl fn_8030D7E0
    lfs f0, 0x20(r1)
    fmuls f22, f27, f19
    fmuls f23, f27, f18
    lfs f24, 0x10(r1)
    fcmpu cr0, f31, f0
    lfs f25, 0x14(r1)
    beq lbl_801C21CC
    fneg f1, f0
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
    lfs f2, 0xc(r1)
    fneg f5, f25
    lfs f1, 0x8(r1)
    fmuls f0, f2, f21
    lfs f8, 0x24(r1)
    fmuls f12, f1, f21
    lfs f6, 0x28(r1)
    fmuls f11, f2, f20
    lfs f4, 0x2c(r1)
    fmuls f10, f1, f20
    fmuls f3, f12, f24
    fmuls f1, f0, f24
    fmuls f2, f11, f25
    fsubs f7, f5, f3
    fsubs f5, f24, f1
    fmuls f3, f10, f25
    fadds f9, f7, f2
    fadds f1, f12, f11
    fsubs f3, f5, f3
    fsubs f2, f12, f11
    fmuls f7, f22, f9
    fmuls f5, f23, f9
    fmuls f9, f26, f3
    fsubs f3, f0, f10
    fadds f0, f0, f10
    fadds f9, f8, f9
    fadds f8, f6, f7
    fadds f7, f4, f5
    fmuls f6, f26, f3
    stfs f9, 0x30(r1)
    fmuls f3, f26, f0
    fmuls f5, f22, f1
    stfs f8, 0x34(r1)
    fmuls f4, f23, f1
    fmuls f1, f22, f2
    stfs f7, 0x38(r1)
    fmuls f0, f23, f2
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    b lbl_801C2240
lbl_801C21CC:
    fmuls f5, f24, f21
    lfs f6, 0x24(r1)
    fmuls f1, f25, f20
    lfs f4, 0x28(r1)
    fmuls f0, f26, f21
    lfs f2, 0x2c(r1)
    fsubs f3, f1, f25
    fsubs f7, f24, f5
    stfs f0, 0x3c(r1)
    fneg f1, f22
    fmuls f5, f22, f3
    stfs f0, 0x48(r1)
    fmuls f7, f26, f7
    fneg f0, f23
    fadds f5, f4, f5
    fmuls f3, f23, f3
    fadds f6, f6, f7
    fmuls f1, f1, f20
    stfs f5, 0x34(r1)
    fadds f4, f2, f3
    fmuls f3, f22, f20
    stfs f6, 0x30(r1)
    fmuls f2, f23, f20
    fmuls f0, f0, f20
    stfs f4, 0x38(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
lbl_801C2240:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE021003C
    opword 0x10400828
    opword 0xE0018038
    opword 0xE0218044
    opword 0xF0410078
    opword 0x10400828
    lfs f0, 0x78(r1)
    opword 0xF0418080
    lfs f1, 0x7c(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x80(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2294
    stb r18, -0x8000(r19)
lbl_801C2294:
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE0210048
    opword 0x10400828
    opword 0xE0018038
    opword 0xE0218050
    opword 0xF041006C
    opword 0x10400828
    lfs f0, 0x6c(r1)
    opword 0xF0418074
    lfs f1, 0x70(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x74(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C22D8
    stb r20, -0x8000(r19)
lbl_801C22D8:
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE021003C
    opword 0x1040082A
    opword 0xE0018038
    opword 0xE0218044
    opword 0xF0410060
    opword 0x1040082A
    lfs f0, 0x60(r1)
    opword 0xF0418068
    lfs f1, 0x64(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x68(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C231C
    stb r21, -0x8000(r19)
lbl_801C231C:
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE0210048
    opword 0x1040082A
    opword 0xE0018038
    opword 0xE0218050
    opword 0xF0410054
    opword 0x1040082A
    lfs f0, 0x54(r1)
    opword 0xF041805C
    lfs f1, 0x58(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x5c(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2360
    stb r22, -0x8000(r19)
lbl_801C2360:
    mr r12, r28
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C2378:
    cmpwi r26, 0x0
    bne lbl_801C1F6C
    opword 0xE3E10238
    lfd f31, 0x230(r1)
    opword 0xE3C10228
    lfd f30, 0x220(r1)
    opword 0xE3A10218
    lfd f29, 0x210(r1)
    opword 0xE3810208
    lfd f28, 0x200(r1)
    opword 0xE36101F8
    lfd f27, 0x1f0(r1)
    opword 0xE34101E8
    lfd f26, 0x1e0(r1)
    opword 0xE32101D8
    lfd f25, 0x1d0(r1)
    opword 0xE30101C8
    lfd f24, 0x1c0(r1)
    opword 0xE2E101B8
    lfd f23, 0x1b0(r1)
    opword 0xE2C101A8
    lfd f22, 0x1a0(r1)
    opword 0xE2A10198
    lfd f21, 0x190(r1)
    opword 0xE2810188
    lfd f20, 0x180(r1)
    opword 0xE2610178
    lfd f19, 0x170(r1)
    opword 0xE2410168
    addi r11, r1, 0x160
    lfd f18, 0x160(r1)
    bl _restgpr_18
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2408
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2408() {
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    stfd f31, 0x2e0(r1)
    opword 0xF3E102E8
    stfd f30, 0x2d0(r1)
    opword 0xF3C102D8
    stfd f29, 0x2c0(r1)
    opword 0xF3A102C8
    stfd f28, 0x2b0(r1)
    opword 0xF38102B8
    stfd f27, 0x2a0(r1)
    opword 0xF36102A8
    stfd f26, 0x290(r1)
    opword 0xF3410298
    stfd f25, 0x280(r1)
    opword 0xF3210288
    stfd f24, 0x270(r1)
    opword 0xF3010278
    stfd f23, 0x260(r1)
    opword 0xF2E10268
    stfd f22, 0x250(r1)
    opword 0xF2C10258
    stfd f21, 0x240(r1)
    opword 0xF2A10248
    stfd f20, 0x230(r1)
    opword 0xF2810238
    addi r11, r1, 0x230
    bl _savegpr_18
    lfs f1, lbl_804A1AA0
    mr r23, r3
    lfs f0, 0x88(r4)
    mr r25, r5
    lwz r19, 0x0(r4)
    mr r24, r4
    lwz r18, 0x4(r4)
    fcmpu cr0, f1, f0
    lwz r12, 0x8(r4)
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r19, 0xf0(r1)
    stw r18, 0xf4(r1)
    stw r12, 0xf8(r1)
    stw r11, 0xfc(r1)
    stw r10, 0x100(r1)
    stw r9, 0x104(r1)
    stw r8, 0x108(r1)
    stw r7, 0x10c(r1)
    stw r6, 0x110(r1)
    stw r5, 0x114(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    beq lbl_801C2604
    addi r3, r1, 0xa0
    bl GXGetProjectionv
    lfs f0, 0xa0(r1)
    fctiwz f0, f0
    stfd f0, 0x1e0(r1)
    lwz r0, 0x1e4(r1)
    cmpwi r0, 0x1
    beq lbl_801C25F4
    bge lbl_801C2604
    cmpwi r0, 0x0
    bge lbl_801C2528
    b lbl_801C2604
lbl_801C2528:
    mr r3, r24
    addi r4, r24, 0x8c
    addi r5, r1, 0x7c
    bl fn_8030D7E0
    addi r3, r1, 0x7c
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C25E0
    lfs f1, 0x84(r1)
    lfs f0, lbl_804A1AA0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C25A0
    lfs f3, 0x88(r24)
    lfs f4, 0x7c(r1)
    lfs f2, 0x80(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x11c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xfc(r1)
    lfs f2, 0x10c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0xfc(r1)
    stfs f2, 0x10c(r1)
    stfs f0, 0x11c(r1)
    b lbl_801C2604
lbl_801C25A0:
    lfs f3, 0x88(r24)
    lfs f4, 0x7c(r1)
    lfs f2, 0x80(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x11c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xfc(r1)
    lfs f2, 0x10c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0xfc(r1)
    stfs f2, 0x10c(r1)
    stfs f0, 0x11c(r1)
    b lbl_801C2604
lbl_801C25E0:
    lfs f1, 0x11c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x11c(r1)
    b lbl_801C2604
lbl_801C25F4:
    lfs f1, 0x11c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x11c(r1)
lbl_801C2604:
    lwz r6, 0x24(r25)
    mr r3, r23
    mr r4, r24
    mr r5, r25
    addi r30, r6, 0x9c
    bl fn_801C2BA8
    lbz r4, 0xa9(r30)
    lis r5, 0x4330
    lbz r0, 0xaa(r30)
    mr r3, r25
    extsb r4, r4
    lbz r7, 0xd0(r23)
    xoris r4, r4, 0x8000
    extsb r0, r0
    stw r5, 0x1e0(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_804A1AB8
    neg r6, r7
    stw r4, 0x1e4(r1)
    or r4, r6, r7
    srwi r31, r4, 31
    lfs f2, lbl_804A1AA4
    lfd f0, 0x1e0(r1)
    addi r4, r1, 0xc0
    stw r0, 0x1ec(r1)
    fsubs f1, f0, f3
    stw r5, 0x1e8(r1)
    lfd f0, 0x1e8(r1)
    fdivs f1, f1, f2
    fsubs f0, f0, f3
    stfs f1, 0x8(r1)
    fdivs f0, f0, f2
    stfs f0, 0xc(r1)
    bl fn_801B7FB8
    addi r4, r1, 0xc0
    addi r3, r1, 0xf0
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0xc0
    li r4, 0x0
    bl fn_801BA138
    fmr f26, f1
    addi r3, r1, 0xc0
    li r4, 0x1
    bl fn_801BA138
    fmr f27, f1
    mr r5, r25
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_801C0E98
    lwz r12, 0x0(r23)
    mr r3, r23
    mr r4, r25
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r29, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r18, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r18
    mr r28, r3
    mr r3, r25
    li r27, 0x1
    mtctr r12
    bctrl
    lfs f29, lbl_804A1AA0
    mr r26, r3
    lfs f30, lbl_804A1AC8
    li r18, 0x0
    lfs f31, lbl_804A1AA8
    lis r19, 0xcc01
    lfs f28, lbl_804A1AAC
    li r20, 0x1
    li r21, 0x2
    li r22, 0x3
    b lbl_801C2B28
lbl_801C2768:
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_801C2B10
    lfs f2, 0x30(r26)
    lfs f1, 0x38(r26)
    lwz r4, 0xc8(r26)
    fmuls f3, f2, f1
    lfs f0, 0x58(r4)
    fmuls f25, f3, f0
    fcmpo cr0, f25, f28
    blt lbl_801C2B10
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C27C4
    bge lbl_801C27B8
    cmpwi r0, 0x2000
    beq lbl_801C27D0
    b lbl_801C27E0
lbl_801C27B8:
    cmpwi r0, 0x6000
    beq lbl_801C27EC
    b lbl_801C27E0
lbl_801C27C4:
    lfs f0, 0x34(r26)
    fmuls f3, f0, f1
    b lbl_801C27EC
lbl_801C27D0:
    lfs f0, 0x3c(r26)
    fmuls f3, f2, f0
    b lbl_801C27EC
    b lbl_801C27EC
lbl_801C27E0:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f3, f1, f0
lbl_801C27EC:
    lfs f0, 0x5c(r4)
    fmuls f24, f3, f0
    fcmpo cr0, f24, f28
    blt lbl_801C2B10
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x0
    bl fn_801BF940
    mr r12, r29
    mr r5, r26
    addi r3, r1, 0x94
    addi r4, r1, 0x120
    li r27, 0x0
    mtctr r12
    bctrl
    addi r3, r1, 0x94
    addi r4, r1, 0xc0
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lfs f1, 0x94(r1)
    lfs f0, 0x98(r1)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f21, f1, f0
    fcmpo cr0, f21, f29
    opword 0x4C401382
    bne lbl_801C286C
    fmr f2, f29
    b lbl_801C2878
lbl_801C286C:
    fmr f1, f21
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f2, f21, f1
lbl_801C2878:
    fcmpu cr0, f29, f2
    bne lbl_801C288C
    fmr f22, f29
    lfs f23, lbl_804A1AA8
    b lbl_801C28B0
lbl_801C288C:
    fres f3, f2
    lfs f1, 0x94(r1)
    lfs f0, 0x98(r1)
    opword 0x1083182A
    opword 0x106300F2
    fneg f1, f1
    opword 0x106220FC
    fmuls f22, f1, f3
    fmuls f23, f0, f3
lbl_801C28B0:
    lbz r0, 0xb0(r30)
    lfs f21, lbl_804A1AA8
    cmpwi r0, 0x0
    beq lbl_801C2938
    opword 0xE05A00AC
    opword 0xE03A00B8
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    opword 0xF0010070
    opword 0x10020828
    lfs f1, 0x74(r1)
    opword 0xF0018078
    lfs f2, 0x70(r1)
    lfs f0, 0x78(r1)
    stfs f1, 0x8c(r1)
    stfs f0, 0x90(r1)
    opword 0xE021008C
    stfs f2, 0x88(r1)
    opword 0x10210072
    opword 0xE0018088
    opword 0x1000083A
    opword 0x12800854
    fcmpo cr0, f20, f29
    opword 0x4C401382
    bne lbl_801C2920
    fmr f0, f29
    b lbl_801C292C
lbl_801C2920:
    fmr f1, f20
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f20, f1
lbl_801C292C:
    fmuls f0, f30, f0
    fdivs f0, f0, f24
    fadds f21, f21, f0
lbl_801C2938:
    addi r3, r1, 0xc0
    addi r4, r26, 0xac
    addi r5, r1, 0x10
    bl fn_8030D7E0
    lfs f8, 0xc(r1)
    fmuls f0, f26, f22
    lfs f4, 0x8(r1)
    fmuls f7, f27, f23
    fadds f1, f21, f8
    lfs f3, 0x18(r1)
    fmuls f2, f25, f4
    stfs f3, 0x24(r1)
    fmuls f9, f27, f22
    fsubs f1, f1, f31
    fsubs f5, f4, f2
    lfs f6, 0x14(r1)
    fmuls f10, f26, f23
    lfs f4, 0x10(r1)
    fmuls f2, f24, f1
    fmuls f3, f7, f24
    fmuls f1, f9, f24
    stfs f29, 0x30(r1)
    fsubs f2, f2, f8
    li r3, 0x80
    fmuls f8, f0, f5
    fmuls f5, f10, f5
    fmuls f7, f7, f2
    stfs f29, 0x3c(r1)
    fmuls f2, f9, f2
    li r4, 0x0
    fmuls f9, f21, f1
    fmuls f10, f10, f25
    fsubs f7, f8, f7
    li r5, 0x4
    fadds f1, f5, f2
    fsubs f2, f10, f9
    fadds f5, f6, f7
    fmuls f6, f0, f25
    fadds f4, f4, f1
    stfs f2, 0x28(r1)
    fmuls f0, f21, f3
    fadds f1, f10, f9
    stfs f5, 0x20(r1)
    fadds f2, f6, f0
    stfs f4, 0x1c(r1)
    fsubs f0, f6, f0
    stfs f1, 0x34(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x38(r1)
    bl GXBegin
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210028
    opword 0x10400828
    opword 0xE0018024
    opword 0xE0218030
    opword 0xF0410064
    opword 0x10400828
    lfs f0, 0x64(r1)
    opword 0xF041806C
    lfs f1, 0x68(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x6c(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2A44
    stb r18, -0x8000(r19)
lbl_801C2A44:
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210034
    opword 0x10400828
    opword 0xE0018024
    opword 0xE021803C
    opword 0xF0410058
    opword 0x10400828
    lfs f0, 0x58(r1)
    opword 0xF0418060
    lfs f1, 0x5c(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x60(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2A88
    stb r20, -0x8000(r19)
lbl_801C2A88:
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210028
    opword 0x1040082A
    opword 0xE0018024
    opword 0xE0218030
    opword 0xF041004C
    opword 0x1040082A
    lfs f0, 0x4c(r1)
    opword 0xF0418054
    lfs f1, 0x50(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x54(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2ACC
    stb r21, -0x8000(r19)
lbl_801C2ACC:
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210034
    opword 0x1040082A
    opword 0xE0018024
    opword 0xE021803C
    opword 0xF0410040
    opword 0x1040082A
    lfs f0, 0x40(r1)
    opword 0xF0418048
    lfs f1, 0x44(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x48(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2B10
    stb r22, -0x8000(r19)
lbl_801C2B10:
    mr r12, r28
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C2B28:
    cmpwi r26, 0x0
    bne lbl_801C2768
    opword 0xE3E102E8
    lfd f31, 0x2e0(r1)
    opword 0xE3C102D8
    lfd f30, 0x2d0(r1)
    opword 0xE3A102C8
    lfd f29, 0x2c0(r1)
    opword 0xE38102B8
    lfd f28, 0x2b0(r1)
    opword 0xE36102A8
    lfd f27, 0x2a0(r1)
    opword 0xE3410298
    lfd f26, 0x290(r1)
    opword 0xE3210288
    lfd f25, 0x280(r1)
    opword 0xE3010278
    lfd f24, 0x270(r1)
    opword 0xE2E10268
    lfd f23, 0x260(r1)
    opword 0xE2C10258
    lfd f22, 0x250(r1)
    opword 0xE2A10248
    lfd f21, 0x240(r1)
    opword 0xE2810238
    addi r11, r1, 0x230
    lfd f20, 0x230(r1)
    bl _restgpr_18
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2BA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2BA8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r4
    mr r4, r5
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r7, 0x24(r5)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C460
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r31)
    cmpwi r0, 0x0
    beq lbl_801C2C18
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C2C18:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    addi r3, r1, 0x8
    bl PSMTXIdentity
    addi r3, r1, 0x8
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2C78
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2C78() {
    nofralloc
    lwz r3, 0x24(r4)
    lbz r0, 0x14a(r3)
    cmpwi r0, 0x2
    beq lbl_801C2CC4
    bge lbl_801C2C9C
    cmpwi r0, 0x0
    beq lbl_801C2CAC
    bge lbl_801C2CB8
    b lbl_801C2CE8
lbl_801C2C9C:
    cmpwi r0, 0x4
    beq lbl_801C2CDC
    bge lbl_801C2CE8
    b lbl_801C2CD0
lbl_801C2CAC:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
lbl_801C2CB8:
    lis r3, fn_801C2DC8@ha
    addi r3, r3, fn_801C2DC8@l
    blr
lbl_801C2CC4:
    lis r3, fn_801C2E84@ha
    addi r3, r3, fn_801C2E84@l
    blr
lbl_801C2CD0:
    lis r3, fn_801C2EA0@ha
    addi r3, r3, fn_801C2EA0@l
    blr
lbl_801C2CDC:
    lis r3, fn_801C2FB0@ha
    addi r3, r3, fn_801C2FB0@l
    blr
lbl_801C2CE8:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2CF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2CF4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_804A1AAC
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    opword 0xE06500AC
    opword 0xE04500B8
    opword 0x10231028
    opword 0xE06580B4
    opword 0xE04580C0
    opword 0xF0210008
    opword 0x10231028
    lfs f2, 0xc(r1)
    opword 0xF0218010
    lfs f3, 0x8(r1)
    lfs f1, 0x10(r1)
    stfs f2, 0x4(r3)
    stfs f1, 0x8(r3)
    opword 0xE0230004
    stfs f3, 0x0(r3)
    opword 0x10210072
    opword 0xE0438000
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C2D70
    li r0, 0x0
    b lbl_801C2D90
lbl_801C2D70:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C2D90:
    cmpwi r0, 0x0
    bne lbl_801C2DB0
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C2DB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2DC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2DC8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A1AAC
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    opword 0xE04500AC
    opword 0xE02400A4
    opword 0x10220828
    opword 0xF0230000
    opword 0xE04580B4
    opword 0xE02480AC
    opword 0xE0638000
    opword 0x10220828
    opword 0xF0238008
    opword 0xE0230004
    opword 0x10210072
    opword 0x104308FA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C2E2C
    li r0, 0x0
    b lbl_801C2E4C
lbl_801C2E2C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C2E4C:
    cmpwi r0, 0x0
    bne lbl_801C2E6C
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C2E6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2E84
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2E84() {
    nofralloc
    lfs f0, 0x98(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x9c(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2EA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2EA0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x0(r4)
    lhz r7, 0x42(r6)
    lwzx r6, r5, r7
    b lbl_801C2ED0
lbl_801C2ECC:
    lwzx r6, r6, r7
lbl_801C2ED0:
    cmpwi r6, 0x0
    beq lbl_801C2EE4
    lwz r0, 0xc(r6)
    cmpwi r0, 0x1
    bne lbl_801C2ECC
lbl_801C2EE4:
    cmpwi r6, 0x0
    beq lbl_801C2F10
    opword 0xE02600AC
    opword 0xE00500AC
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02680B4
    opword 0xE00580B4
    opword 0x10010028
    opword 0xF0038008
    b lbl_801C2F30
lbl_801C2F10:
    opword 0xE02500AC
    opword 0xE00400A4
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00480AC
    opword 0x10010028
    opword 0xF0038008
lbl_801C2F30:
    opword 0xE0230004
    opword 0xE0438000
    opword 0x10210072
    lfs f0, lbl_804A1AAC
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C2F58
    li r0, 0x0
    b lbl_801C2F78
lbl_801C2F58:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C2F78:
    cmpwi r0, 0x0
    bne lbl_801C2F98
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C2F98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C2FB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C2FB0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801C2FEC
lbl_801C2FE8:
    lwzx r4, r4, r6
lbl_801C2FEC:
    cmpwi r4, 0x0
    beq lbl_801C3000
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C2FE8
lbl_801C3000:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801C3014
lbl_801C300C:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801C3014:
    cmpwi r31, 0x0
    beq lbl_801C3028
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801C300C
lbl_801C3028:
    lfs f0, lbl_804A1AA0
    cmpwi r4, 0x0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_801C30CC
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1AAC
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C3088
    li r0, 0x0
    b lbl_801C30A8
lbl_801C3088:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801C30A8:
    cmpwi r0, 0x0
    bne lbl_801C30CC
    lfs f0, lbl_804A1AA0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801C30CC:
    lfs f0, lbl_804A1AA0
    cmpwi r31, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C3170
    opword 0xE07F00AC
    opword 0xE05E00AC
    lfs f0, lbl_804A1AAC
    opword 0x10231028
    opword 0xE07F80B4
    opword 0xE05E80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C312C
    li r0, 0x0
    b lbl_801C314C
lbl_801C312C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C314C:
    cmpwi r0, 0x0
    bne lbl_801C3170
    lfs f0, lbl_804A1AA0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801C3170:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1AAC
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C31B8
    li r0, 0x0
    b lbl_801C31D8
lbl_801C31B8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801C31D8:
    cmpwi r0, 0x0
    bne lbl_801C31F8
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801C31F8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C3218
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C3218() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BEE9C
    lis r4, lbl_80360878@ha
    mr r3, r31
    addi r4, r4, lbl_80360878@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C3254
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C3254() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    addi r5, r1, 0x2c
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    bl fn_8030D7E0
    mr r3, r29
    addi r4, r30, 0xc
    addi r5, r1, 0x20
    bl fn_8030D7E0
    mr r3, r29
    addi r4, r30, 0x18
    addi r5, r1, 0x14
    bl fn_8030D7E0
    mr r3, r29
    addi r4, r30, 0x24
    addi r5, r1, 0x8
    bl fn_8030D7E0
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f0, 0x34(r1)
    lis r3, 0xcc01
    lfs f1, 0x30(r1)
    clrlwi. r4, r31, 31
    lfs f2, 0x2c(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C32EC
    li r0, 0x0
    stb r0, -0x8000(r3)
lbl_801C32EC:
    lfs f0, 0x28(r1)
    lis r3, 0xcc01
    lfs f1, 0x24(r1)
    cmpwi r4, 0x0
    lfs f2, 0x20(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3318
    li r0, 0x1
    stb r0, -0x8000(r3)
lbl_801C3318:
    lfs f0, 0x1c(r1)
    lis r3, 0xcc01
    lfs f1, 0x18(r1)
    cmpwi r4, 0x0
    lfs f2, 0x14(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3344
    li r0, 0x2
    stb r0, -0x8000(r3)
lbl_801C3344:
    lfs f0, 0x10(r1)
    lis r3, 0xcc01
    lfs f1, 0xc(r1)
    cmpwi r4, 0x0
    lfs f2, 0x8(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3370
    li r0, 0x3
    stb r0, -0x8000(r3)
lbl_801C3370:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C338C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C338C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r5
    li r5, 0x4
    stw r29, 0x44(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x40(r1)
    mr r28, r3
    li r3, 0x80
    bl GXBegin
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03D0000
    clrlwi. r4, r31, 31
    opword 0x10400828
    opword 0xE01C8008
    opword 0xE03D8008
    opword 0xF041002C
    opword 0x10400828
    lfs f0, 0x2c(r1)
    opword 0xF0418034
    lfs f1, 0x30(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3414
    li r0, 0x0
    stb r0, -0x8000(r3)
lbl_801C3414:
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03E0000
    cmpwi r4, 0x0
    opword 0x10400828
    opword 0xE01C8008
    opword 0xE03E8008
    opword 0xF0410020
    opword 0x10400828
    lfs f0, 0x20(r1)
    opword 0xF0418028
    lfs f1, 0x24(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x28(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3460
    li r0, 0x1
    stb r0, -0x8000(r3)
lbl_801C3460:
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03D0000
    cmpwi r4, 0x0
    opword 0x1040082A
    opword 0xE01C8008
    opword 0xE03D8008
    opword 0xF0410014
    opword 0x1040082A
    lfs f0, 0x14(r1)
    opword 0xF041801C
    lfs f1, 0x18(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x1c(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C34AC
    li r0, 0x2
    stb r0, -0x8000(r3)
lbl_801C34AC:
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03E0000
    cmpwi r4, 0x0
    opword 0x1040082A
    opword 0xE01C8008
    opword 0xE03E8008
    opword 0xF0410008
    opword 0x1040082A
    lfs f0, 0x8(r1)
    opword 0xF0418010
    lfs f1, 0xc(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x10(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C34F8
    li r0, 0x3
    stb r0, -0x8000(r3)
lbl_801C34F8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C3518
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C3518() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x14(r1)
    mr r29, r3
    mr r6, r30
    lwz r7, 0x24(r5)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C480
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r29)
    cmpwi r0, 0x0
    beq lbl_801C3598
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C3598:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r3, 0x24(r31)
    lbz r0, 0x14e(r3)
    clrlwi r0, r0, 30
    cmpwi r0, 0x1
    beq lbl_801C35F8
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801C362C
    b lbl_801C3608
lbl_801C35F8:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801C4C4C
lbl_801C3608:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801C3624
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C3624() {
    nofralloc
    addi r3, r3, 0x9c
    blr
}

// ----------------------------------------------------------------------------
// fn_801C362C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C362C() {
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    stfd f31, 0x440(r1)
    opword 0xF3E10448
    stfd f30, 0x430(r1)
    opword 0xF3C10438
    stfd f29, 0x420(r1)
    opword 0xF3A10428
    stfd f28, 0x410(r1)
    opword 0xF3810418
    stfd f27, 0x400(r1)
    opword 0xF3610408
    stfd f26, 0x3f0(r1)
    opword 0xF34103F8
    stfd f25, 0x3e0(r1)
    opword 0xF32103E8
    stfd f24, 0x3d0(r1)
    opword 0xF30103D8
    stfd f23, 0x3c0(r1)
    opword 0xF2E103C8
    stfd f22, 0x3b0(r1)
    opword 0xF2C103B8
    stfd f21, 0x3a0(r1)
    opword 0xF2A103A8
    stfd f20, 0x390(r1)
    opword 0xF2810398
    stfd f19, 0x380(r1)
    opword 0xF2610388
    stfd f18, 0x370(r1)
    opword 0xF2410378
    addi r11, r1, 0x370
    bl _savegpr_21
    lis r0, 0x4330
    lwz r7, 0x24(r5)
    mr r24, r4
    mr r25, r5
    stw r0, 0x328(r1)
    mr r23, r3
    mr r4, r25
    mr r6, r24
    stw r0, 0x330(r1)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C480
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r23)
    cmpwi r0, 0x0
    beq lbl_801C3724
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C3724:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r3, 0x24(r25)
    lfs f1, lbl_804A1AD0
    lfs f0, 0x88(r24)
    addi r31, r3, 0x9c
    lwz r21, 0x0(r24)
    lwz r12, 0x4(r24)
    fcmpu cr0, f1, f0
    lwz r11, 0x8(r24)
    lwz r10, 0xc(r24)
    lwz r9, 0x10(r24)
    lwz r8, 0x14(r24)
    lwz r7, 0x18(r24)
    lwz r6, 0x1c(r24)
    lwz r5, 0x20(r24)
    lwz r4, 0x24(r24)
    lwz r3, 0x28(r24)
    lwz r0, 0x2c(r24)
    stw r21, 0x238(r1)
    stw r12, 0x23c(r1)
    stw r11, 0x240(r1)
    stw r10, 0x244(r1)
    stw r9, 0x248(r1)
    stw r8, 0x24c(r1)
    stw r7, 0x250(r1)
    stw r6, 0x254(r1)
    stw r5, 0x258(r1)
    stw r4, 0x25c(r1)
    stw r3, 0x260(r1)
    stw r0, 0x264(r1)
    beq lbl_801C38E0
    addi r3, r1, 0xc8
    bl GXGetProjectionv
    lfs f0, 0xc8(r1)
    fctiwz f0, f0
    stfd f0, 0x338(r1)
    lwz r0, 0x33c(r1)
    cmpwi r0, 0x1
    beq lbl_801C38D0
    bge lbl_801C38E0
    cmpwi r0, 0x0
    bge lbl_801C3804
    b lbl_801C38E0
lbl_801C3804:
    mr r3, r24
    addi r5, r1, 0x38
    addi r4, r24, 0x8c
    bl fn_8030D7E0
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C38BC
    lfs f1, 0x40(r1)
    lfs f0, lbl_804A1AD0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C387C
    lfs f3, 0x88(r24)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x264(r1)
    fmuls f3, f2, f3
    lfs f4, 0x244(r1)
    lfs f2, 0x254(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x244(r1)
    stfs f2, 0x254(r1)
    stfs f0, 0x264(r1)
    b lbl_801C38E0
lbl_801C387C:
    lfs f3, 0x88(r24)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x264(r1)
    fmuls f3, f2, f3
    lfs f4, 0x244(r1)
    lfs f2, 0x254(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x244(r1)
    stfs f2, 0x254(r1)
    stfs f0, 0x264(r1)
    b lbl_801C38E0
lbl_801C38BC:
    lfs f1, 0x264(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x264(r1)
    b lbl_801C38E0
lbl_801C38D0:
    lfs f1, 0x264(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x264(r1)
lbl_801C38E0:
    mr r5, r25
    addi r3, r1, 0x268
    addi r4, r1, 0x238
    bl fn_801C0E98
    lwz r12, 0x0(r23)
    mr r3, r23
    mr r4, r25
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lbz r0, 0xd0(r23)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_801C3920
    li r29, 0x1
    b lbl_801C3924
lbl_801C3920:
    li r29, 0x0
lbl_801C3924:
    lbz r0, 0xae(r31)
    cmplwi r0, 0x7
    bne lbl_801C39D8
    addi r4, r1, 0x2a0
    addi r5, r1, 0x208
    addi r3, r1, 0x238
    bl PSMTXConcat
    addi r3, r1, 0x208
    li r4, 0x0
    bl GXLoadPosMtxImm
    lfs f7, 0x2f8(r1)
    lfs f6, 0x2e8(r1)
    stfs f7, 0xb8(r1)
    lfs f5, 0x2d8(r1)
    stfs f6, 0xb4(r1)
    lfs f4, 0x2f4(r1)
    opword 0xE02100B4
    stfs f5, 0xb0(r1)
    opword 0x10210072
    lfs f3, 0x2e4(r1)
    opword 0xE00180B0
    lfs f2, 0x2d4(r1)
    opword 0x1100083A
    lfs f0, lbl_804A1AD4
    stfs f2, 0x68(r1)
    opword 0x10280854
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    fcmpo cr0, f1, f0
    stfs f2, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f5, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f7, 0x64(r1)
    bge lbl_801C39B8
    b lbl_801C3A98
lbl_801C39B8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE04100B0
    opword 0x10020058
    opword 0xE04180B8
    opword 0xF00100B0
    opword 0x10020058
    opword 0xF00180B8
    b lbl_801C3A98
lbl_801C39D8:
    addi r4, r1, 0x2a0
    addi r5, r1, 0x1d8
    addi r3, r1, 0x238
    bl PSMTXConcat
    addi r3, r1, 0x1d8
    li r4, 0x0
    bl GXLoadPosMtxImm
    lwz r3, 0x20(r25)
    addi r4, r1, 0x1a8
    bl fn_801ACC48
    addi r5, r1, 0x1a8
    addi r3, r1, 0x2d0
    mr r4, r5
    bl PSMTXConcat
    lfs f7, 0x1d0(r1)
    lfs f6, 0x1c0(r1)
    stfs f7, 0xb8(r1)
    lfs f5, 0x1b0(r1)
    stfs f6, 0xb4(r1)
    lfs f4, 0x1cc(r1)
    opword 0xE02100B4
    stfs f5, 0xb0(r1)
    opword 0x10210072
    lfs f3, 0x1bc(r1)
    opword 0xE00180B0
    lfs f2, 0x1ac(r1)
    opword 0x1100083A
    lfs f0, lbl_804A1AD4
    stfs f2, 0x50(r1)
    opword 0x10280854
    stfs f3, 0x54(r1)
    stfs f4, 0x58(r1)
    fcmpo cr0, f1, f0
    stfs f2, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f7, 0x4c(r1)
    bge lbl_801C3A7C
    b lbl_801C3A98
lbl_801C3A7C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE04100B0
    opword 0x10020058
    opword 0xE04180B8
    opword 0xF00100B0
    opword 0x10020058
    opword 0xF00180B8
lbl_801C3A98:
    lwz r3, 0x3c(r25)
    lfs f0, lbl_804A1AD8
    lfs f4, 0xbc(r1)
    lfs f3, 0xc0(r1)
    lfs f2, 0xc4(r1)
    b lbl_801C3AC4
lbl_801C3AB0:
    stfs f4, 0xcc(r3)
    stfs f3, 0xd0(r3)
    stfs f2, 0xd4(r3)
    lhz r0, 0x42(r25)
    lwzx r3, r3, r0
lbl_801C3AC4:
    cmpwi r3, 0x0
    beq lbl_801C3AD8
    lfs f1, 0xcc(r3)
    fcmpo cr0, f1, f0
    bgt lbl_801C3AB0
lbl_801C3AD8:
    lbz r4, 0xa9(r31)
    mr r3, r23
    lbz r0, 0xaa(r31)
    extsb r5, r4
    lwz r12, 0x0(r23)
    extsb r4, r0
    lfd f3, lbl_804A1AE8
    xoris r6, r5, 0x8000
    lfs f1, lbl_804A1ADC
    xoris r5, r4, 0x8000
    stw r6, 0x32c(r1)
    lhz r0, 0x0(r31)
    stw r5, 0x334(r1)
    lfd f2, 0x328(r1)
    rlwinm r4, r0, 0, 20, 20
    lfd f0, 0x330(r1)
    fsubs f2, f2, f3
    lwz r12, 0x10(r12)
    fsubs f0, f0, f3
    fdivs f23, f2, f1
    fdivs f22, f0, f1
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r21, r3
    lhz r0, 0x0(r31)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r21
    mr r28, r3
    mr r3, r25
    li r27, 0x1
    mtctr r12
    bctrl
    lfs f26, lbl_804A1AD0
    mr r26, r3
    lfs f27, lbl_804A1AE0
    lis r21, lbl_8033C3A0@ha
    lfd f28, lbl_804A1AF0
    lis r22, lbl_8033C3D0@ha
    lfs f29, lbl_804A1AE4
    lfs f30, lbl_804A1AD8
    lfs f31, lbl_804A1AD4
    b lbl_801C42D0
lbl_801C3B94:
    lfs f2, 0x30(r26)
    lfs f1, 0x38(r26)
    lwz r3, 0xc8(r26)
    fmuls f3, f2, f1
    lfs f0, 0x58(r3)
    fmuls f25, f3, f0
    fcmpo cr0, f25, f31
    blt lbl_801C42B8
    lwz r3, 0x24(r3)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C3BE4
    bge lbl_801C3BD8
    cmpwi r0, 0x2000
    beq lbl_801C3BF0
    b lbl_801C3C00
lbl_801C3BD8:
    cmpwi r0, 0x6000
    beq lbl_801C3C0C
    b lbl_801C3C00
lbl_801C3BE4:
    lfs f0, 0x34(r26)
    fmuls f3, f0, f1
    b lbl_801C3C0C
lbl_801C3BF0:
    lfs f0, 0x3c(r26)
    fmuls f3, f2, f0
    b lbl_801C3C0C
    b lbl_801C3C0C
lbl_801C3C00:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f3, f1, f0
lbl_801C3C0C:
    lwz r3, 0xc8(r26)
    lfs f0, 0x5c(r3)
    fmuls f24, f3, f0
    fcmpo cr0, f24, f31
    blt lbl_801C42B8
    lbz r0, 0xb0(r31)
    lfs f21, lbl_804A1AD8
    cmpwi r0, 0x0
    beq lbl_801C3CA8
    opword 0xE05A00AC
    opword 0xE03A00B8
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    opword 0xF001002C
    opword 0x10020828
    lfs f1, 0x30(r1)
    opword 0xF0018034
    lfs f2, 0x2c(r1)
    lfs f0, 0x34(r1)
    stfs f1, 0xa8(r1)
    stfs f0, 0xac(r1)
    opword 0xE02100A8
    stfs f2, 0xa4(r1)
    opword 0x10210072
    opword 0xE00180A4
    opword 0x1000083A
    opword 0x12400854
    fcmpo cr0, f18, f26
    opword 0x4C401382
    bne lbl_801C3C90
    fmr f0, f26
    b lbl_801C3C9C
lbl_801C3C90:
    fmr f1, f18
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f18, f1
lbl_801C3C9C:
    fmuls f0, f27, f0
    fdivs f0, f0, f24
    fadds f21, f21, f0
lbl_801C3CA8:
    mr r3, r23
    mr r4, r26
    mr r5, r31
    mr r6, r24
    mr r7, r27
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0x9a(r26)
    li r27, 0x0
    lfs f2, 0x40(r26)
    lfs f1, 0x44(r26)
    cmpwi r0, 0x0
    lfs f0, 0x48(r26)
    stfs f2, 0x20(r1)
    lbz r3, 0xaf(r31)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C3D08
    stw r0, 0x32c(r1)
    lfd f0, 0x328(r1)
    fsubs f0, f0, f28
    fmuls f0, f29, f0
    fadds f0, f2, f0
    stfs f0, 0x20(r1)
lbl_801C3D08:
    lbz r0, 0x9b(r26)
    cmpwi r0, 0x0
    beq lbl_801C3D30
    stw r0, 0x334(r1)
    lfs f0, 0x24(r1)
    lfd f1, 0x330(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_801C3D30:
    lbz r0, 0x9c(r26)
    cmpwi r0, 0x0
    beq lbl_801C3D58
    stw r0, 0x32c(r1)
    lfs f0, 0x28(r1)
    lfd f1, 0x328(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_801C3D58:
    lwz r4, 0xc8(r26)
    cmpwi r3, 0x2
    lfs f1, 0x20(r1)
    lfs f0, 0x60(r4)
    lfs f3, 0x24(r1)
    fadds f4, f1, f0
    lfs f2, 0x64(r4)
    lfs f0, 0x68(r4)
    lfs f1, 0x28(r1)
    fadds f2, f3, f2
    stfs f4, 0x20(r1)
    fadds f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f26, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f30, 0x1c(r1)
    beq lbl_801C3E74
    bge lbl_801C3ECC
    cmpwi r3, 0x0
    beq lbl_801C3DC4
    bge lbl_801C3E1C
    b lbl_801C3ECC
    b lbl_801C3ECC
lbl_801C3DC4:
    fcmpu cr0, f26, f4
    beq lbl_801C3DDC
    fneg f1, f4
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
lbl_801C3DDC:
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fneg f2, f1
    stfs f30, 0x178(r1)
    stfs f26, 0x17c(r1)
    stfs f26, 0x180(r1)
    stfs f26, 0x184(r1)
    stfs f26, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f2, 0x190(r1)
    stfs f26, 0x194(r1)
    stfs f26, 0x198(r1)
    stfs f1, 0x19c(r1)
    stfs f0, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
    b lbl_801C3FB4
lbl_801C3E1C:
    fcmpu cr0, f26, f2
    beq lbl_801C3E34
    fneg f1, f2
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
lbl_801C3E34:
    lfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    fneg f2, f0
    stfs f26, 0x17c(r1)
    stfs f1, 0x178(r1)
    stfs f0, 0x180(r1)
    stfs f26, 0x184(r1)
    stfs f26, 0x188(r1)
    stfs f30, 0x18c(r1)
    stfs f26, 0x190(r1)
    stfs f26, 0x194(r1)
    stfs f2, 0x198(r1)
    stfs f26, 0x19c(r1)
    stfs f1, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
    b lbl_801C3FB4
lbl_801C3E74:
    fcmpu cr0, f26, f0
    beq lbl_801C3E8C
    fneg f1, f0
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
lbl_801C3E8C:
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    fneg f2, f1
    stfs f26, 0x180(r1)
    stfs f0, 0x178(r1)
    stfs f2, 0x17c(r1)
    stfs f26, 0x184(r1)
    stfs f1, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f26, 0x190(r1)
    stfs f26, 0x194(r1)
    stfs f26, 0x198(r1)
    stfs f26, 0x19c(r1)
    stfs f30, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
    b lbl_801C3FB4
lbl_801C3ECC:
    lfs f0, 0x20(r1)
    fcmpu cr0, f26, f0
    beq lbl_801C3EE8
    fneg f1, f0
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
lbl_801C3EE8:
    lfs f0, 0x24(r1)
    fcmpu cr0, f26, f0
    beq lbl_801C3F04
    fneg f1, f0
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
lbl_801C3F04:
    lfs f0, 0x28(r1)
    fcmpu cr0, f26, f0
    beq lbl_801C3F20
    fneg f1, f0
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
lbl_801C3F20:
    lfs f0, 0x10(r1)
    lfs f7, 0xc(r1)
    lfs f8, 0x8(r1)
    fneg f10, f0
    lfs f4, 0x1c(r1)
    fmuls f1, f7, f0
    lfs f5, 0x18(r1)
    fmuls f12, f8, f0
    fmuls f2, f8, f4
    fmuls f3, f1, f5
    lfs f6, 0x14(r1)
    fmuls f0, f8, f5
    stfs f10, 0x198(r1)
    fmuls f1, f1, f4
    fsubs f11, f3, f2
    fmuls f2, f6, f5
    stfs f26, 0x184(r1)
    fadds f10, f1, f0
    fmuls f0, f6, f4
    stfs f26, 0x194(r1)
    fmuls f3, f12, f5
    stfs f2, 0x188(r1)
    fmuls f2, f7, f4
    fmuls f9, f7, f6
    stfs f0, 0x178(r1)
    fmuls f8, f6, f8
    fadds f2, f3, f2
    fmuls f1, f12, f4
    stfs f10, 0x180(r1)
    fmuls f0, f7, f5
    stfs f8, 0x19c(r1)
    fsubs f0, f1, f0
    stfs f11, 0x190(r1)
    stfs f2, 0x18c(r1)
    stfs f0, 0x17c(r1)
    stfs f9, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
lbl_801C3FB4:
    lbz r0, 0xb1(r31)
    cmpwi r0, 0x1
    beq lbl_801C4098
    bge lbl_801C4098
    cmpwi r0, 0x0
    bge lbl_801C3FD0
    b lbl_801C4098
lbl_801C3FD0:
    fadds f0, f22, f21
    lfs f12, 0x188(r1)
    lfs f7, 0x178(r1)
    fmuls f2, f25, f23
    fneg f4, f12
    lfs f18, 0x198(r1)
    fsubs f0, f0, f30
    lfs f13, 0x1a0(r1)
    fneg f1, f7
    lfs f8, 0x190(r1)
    lfs f3, 0x180(r1)
    fmuls f13, f13, f25
    fmuls f0, f24, f0
    lfs f5, 0x17c(r1)
    fmuls f11, f4, f2
    lfs f10, 0x18c(r1)
    fmuls f6, f1, f2
    lfs f20, 0x19c(r1)
    fmuls f4, f5, f0
    stfs f13, 0x170(r1)
    fmuls f9, f10, f0
    fmuls f1, f24, f21
    fsubs f4, f6, f4
    fsubs f9, f11, f9
    fmuls f6, f20, f1
    fmuls f5, f5, f1
    fmuls f11, f18, f25
    stfs f6, 0x16c(r1)
    fmuls f6, f10, f1
    fneg f19, f18
    fadds f9, f22, f9
    stfs f5, 0x14c(r1)
    fmuls f8, f8, f25
    fmuls f10, f12, f25
    stfs f6, 0x15c(r1)
    fadds f4, f23, f4
    fmuls f3, f3, f25
    stfs f9, 0x164(r1)
    fmuls f6, f7, f25
    fmuls f1, f19, f2
    stfs f4, 0x154(r1)
    fmuls f0, f20, f0
    stfs f6, 0x148(r1)
    fsubs f0, f1, f0
    stfs f3, 0x150(r1)
    stfs f10, 0x158(r1)
    stfs f8, 0x160(r1)
    stfs f11, 0x168(r1)
    stfs f0, 0x174(r1)
    b lbl_801C4150
lbl_801C4098:
    lfs f20, 0x198(r1)
    fmuls f1, f25, f23
    lfs f6, 0x178(r1)
    fmuls f0, f24, f22
    fneg f3, f20
    lfs f13, 0x1a0(r1)
    fneg f2, f6
    lfs f10, 0x188(r1)
    fmuls f12, f13, f0
    fmuls f21, f3, f1
    lfs f4, 0x180(r1)
    fmuls f5, f2, f1
    fneg f9, f10
    lfs f11, 0x19c(r1)
    fmuls f3, f4, f0
    fsubs f12, f21, f12
    lfs f8, 0x190(r1)
    fmuls f11, f11, f25
    fsubs f3, f5, f3
    lfs f7, 0x18c(r1)
    fsubs f5, f12, f22
    lfs f2, 0x17c(r1)
    fmuls f12, f13, f24
    fmuls f1, f9, f1
    stfs f5, 0x174(r1)
    fmuls f5, f8, f24
    fmuls f0, f8, f0
    stfs f11, 0x170(r1)
    fmuls f11, f20, f25
    fmuls f7, f7, f25
    fmuls f10, f10, f25
    stfs f5, 0x15c(r1)
    fadds f3, f23, f3
    fmuls f2, f2, f25
    stfs f11, 0x168(r1)
    fmuls f4, f4, f24
    fmuls f5, f6, f25
    stfs f3, 0x154(r1)
    fsubs f0, f1, f0
    stfs f4, 0x14c(r1)
    stfs f5, 0x148(r1)
    stfs f2, 0x150(r1)
    stfs f10, 0x158(r1)
    stfs f7, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f12, 0x16c(r1)
lbl_801C4150:
    mr r12, r30
    mr r5, r26
    addi r3, r1, 0x8c
    addi r4, r1, 0x268
    mtctr r12
    bctrl
    addi r5, r1, 0x80
    addi r4, r1, 0x8c
    addi r3, r26, 0xcc
    bl fn_8030DEEC
    opword 0xE0010084
    opword 0xE0218080
    opword 0x10000032
    opword 0x1021007A
    opword 0x10210014
    fcmpo cr0, f1, f31
    bge lbl_801C419C
    li r0, 0x0
    b lbl_801C41BC
lbl_801C419C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410080
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418088
    opword 0xF0010080
    opword 0x10020058
    opword 0xF0018088
lbl_801C41BC:
    cmpwi r0, 0x0
    bne lbl_801C41DC
    lfs f2, 0xb0(r1)
    lfs f1, 0xb4(r1)
    lfs f0, 0xb8(r1)
    stfs f2, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x88(r1)
lbl_801C41DC:
    addi r5, r1, 0x98
    addi r4, r1, 0x80
    addi r3, r1, 0x8c
    bl fn_8030DEEC
    lfs f0, 0x98(r1)
    addi r5, r1, 0xe8
    addi r4, r1, 0x148
    addi r3, r1, 0x118
    stfs f0, 0xcc(r26)
    lfs f0, 0x9c(r1)
    stfs f0, 0xd0(r26)
    lfs f0, 0xa0(r1)
    stfs f0, 0xd4(r26)
    lwz r7, 0xac(r26)
    lwz r6, 0xb0(r26)
    lwz r0, 0xb4(r26)
    stw r7, 0x74(r1)
    lfs f10, 0x88(r1)
    stw r6, 0x78(r1)
    lfs f9, 0x94(r1)
    stw r0, 0x7c(r1)
    lfs f8, 0xa0(r1)
    lfs f11, 0x7c(r1)
    lfs f7, 0x78(r1)
    lfs f6, 0x84(r1)
    lfs f5, 0x90(r1)
    lfs f4, 0x9c(r1)
    lfs f3, 0x74(r1)
    lfs f2, 0x80(r1)
    lfs f1, 0x8c(r1)
    lfs f0, 0x98(r1)
    stfs f1, 0x11c(r1)
    stfs f0, 0x118(r1)
    stfs f2, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f4, 0x128(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x130(r1)
    stfs f7, 0x134(r1)
    stfs f8, 0x138(r1)
    stfs f9, 0x13c(r1)
    stfs f10, 0x140(r1)
    stfs f11, 0x144(r1)
    bl PSMTXConcat
    mr r5, r29
    addi r3, r1, 0xe8
    addi r4, r21, lbl_8033C3A0@l
    bl fn_801C3254
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C42B8
    mr r5, r29
    addi r3, r1, 0xe8
    addi r4, r22, lbl_8033C3D0@l
    bl fn_801C3254
lbl_801C42B8:
    mr r12, r28
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C42D0:
    cmpwi r26, 0x0
    bne lbl_801C3B94
    opword 0xE3E10448
    lfd f31, 0x440(r1)
    opword 0xE3C10438
    lfd f30, 0x430(r1)
    opword 0xE3A10428
    lfd f29, 0x420(r1)
    opword 0xE3810418
    lfd f28, 0x410(r1)
    opword 0xE3610408
    lfd f27, 0x400(r1)
    opword 0xE34103F8
    lfd f26, 0x3f0(r1)
    opword 0xE32103E8
    lfd f25, 0x3e0(r1)
    opword 0xE30103D8
    lfd f24, 0x3d0(r1)
    opword 0xE2E103C8
    lfd f23, 0x3c0(r1)
    opword 0xE2C103B8
    lfd f22, 0x3b0(r1)
    opword 0xE2A103A8
    lfd f21, 0x3a0(r1)
    opword 0xE2810398
    lfd f20, 0x390(r1)
    opword 0xE2610388
    lfd f19, 0x380(r1)
    opword 0xE2410378
    addi r11, r1, 0x370
    lfd f18, 0x370(r1)
    bl _restgpr_21
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

// ----------------------------------------------------------------------------
// fn_801C4360
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C4360() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lfs f1, lbl_804A1AD0
    mr r27, r3
    lfs f0, 0x88(r3)
    mr r28, r4
    lwz r29, 0x0(r3)
    lwz r30, 0x4(r3)
    fcmpu cr0, f1, f0
    lwz r31, 0x8(r3)
    lwz r12, 0xc(r3)
    lwz r11, 0x10(r3)
    lwz r10, 0x14(r3)
    lwz r9, 0x18(r3)
    lwz r8, 0x1c(r3)
    lwz r7, 0x20(r3)
    lwz r6, 0x24(r3)
    lwz r5, 0x28(r3)
    lwz r0, 0x2c(r3)
    stw r29, 0x0(r4)
    stw r30, 0x4(r4)
    stw r31, 0x8(r4)
    stw r12, 0xc(r4)
    stw r11, 0x10(r4)
    stw r10, 0x14(r4)
    stw r9, 0x18(r4)
    stw r8, 0x1c(r4)
    stw r7, 0x20(r4)
    stw r6, 0x24(r4)
    stw r5, 0x28(r4)
    stw r0, 0x2c(r4)
    beq lbl_801C4500
    addi r3, r1, 0x14
    bl GXGetProjectionv
    lfs f0, 0x14(r1)
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    cmpwi r0, 0x1
    beq lbl_801C44F0
    bge lbl_801C4500
    cmpwi r0, 0x0
    bge lbl_801C441C
    b lbl_801C4500
lbl_801C441C:
    mr r3, r27
    addi r4, r27, 0x8c
    addi r5, r1, 0x8
    bl fn_8030D7E0
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C44DC
    lfs f1, 0x10(r1)
    lfs f0, lbl_804A1AD0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C4498
    lfs f0, 0x8(r1)
    lfs f4, 0x88(r27)
    lfs f2, 0xc(r28)
    fmuls f3, f0, f4
    lfs f1, 0x1c(r28)
    lfs f0, 0x2c(r28)
    fadds f2, f2, f3
    stfs f2, 0xc(r28)
    lfs f2, 0xc(r1)
    fmuls f2, f2, f4
    fadds f1, f1, f2
    stfs f1, 0x1c(r28)
    lfs f1, 0x10(r1)
    fmuls f1, f1, f4
    fadds f0, f0, f1
    stfs f0, 0x2c(r28)
    b lbl_801C4500
lbl_801C4498:
    lfs f0, 0x8(r1)
    lfs f4, 0x88(r27)
    lfs f2, 0xc(r28)
    fmuls f3, f0, f4
    lfs f1, 0x1c(r28)
    lfs f0, 0x2c(r28)
    fsubs f2, f2, f3
    stfs f2, 0xc(r28)
    lfs f2, 0xc(r1)
    fmuls f2, f2, f4
    fsubs f1, f1, f2
    stfs f1, 0x1c(r28)
    lfs f1, 0x10(r1)
    fmuls f1, f1, f4
    fsubs f0, f0, f1
    stfs f0, 0x2c(r28)
    b lbl_801C4500
lbl_801C44DC:
    lfs f1, 0x2c(r28)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x2c(r28)
    b lbl_801C4500
lbl_801C44F0:
    lfs f1, 0x2c(r28)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x2c(r28)
lbl_801C4500:
    addi r11, r1, 0x50
    mr r3, r28
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C451C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C451C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A1AD4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    opword 0xE0430004
    opword 0xE0238000
    opword 0x104200B2
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C4558
    li r3, 0x0
    b lbl_801C4578
lbl_801C4558:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE01F0000
    li r3, 0x1
    opword 0x10400058
    opword 0xE01F8008
    opword 0xF05F0000
    opword 0x10400058
    opword 0xF05F8008
lbl_801C4578:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C458C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C458C() {
    nofralloc
    lwz r3, 0x3c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801C4594
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C4594() {
    nofralloc
    lhz r0, 0x42(r3)
    lwzx r3, r4, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C45A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C45A0() {
    nofralloc
    lfs f1, 0x30(r3)
    lfs f0, 0x38(r3)
    lwz r3, 0xc8(r3)
    fmuls f1, f1, f0
    lfs f0, 0x58(r3)
    fmuls f1, f1, f0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C45BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C45BC() {
    nofralloc
    lwz r5, 0xc8(r3)
    lwz r4, 0x24(r5)
    lhz r0, 0x9c(r4)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C45F0
    bge lbl_801C45E4
    cmpwi r0, 0x2000
    beq lbl_801C4600
    b lbl_801C4620
lbl_801C45E4:
    cmpwi r0, 0x6000
    beq lbl_801C4610
    b lbl_801C4620
lbl_801C45F0:
    lfs f1, 0x34(r3)
    lfs f0, 0x38(r3)
    fmuls f1, f1, f0
    b lbl_801C462C
lbl_801C4600:
    lfs f1, 0x30(r3)
    lfs f0, 0x3c(r3)
    fmuls f1, f1, f0
    b lbl_801C462C
lbl_801C4610:
    lfs f1, 0x30(r3)
    lfs f0, 0x38(r3)
    fmuls f1, f1, f0
    b lbl_801C462C
lbl_801C4620:
    lfs f1, 0x34(r3)
    lfs f0, 0x3c(r3)
    fmuls f1, f1, f0
lbl_801C462C:
    lfs f0, 0x5c(r5)
    fmuls f1, f1, f0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C4638
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C4638() {
    nofralloc
    stwu r1, -0x20(r1)
    opword 0xE00300AC
    opword 0xE02300B8
    opword 0x10600828
    opword 0xE00380B4
    opword 0xE02380C0
    mr r3, r4
    opword 0xF0610008
    opword 0x10600828
    lfs f2, 0x8(r1)
    opword 0xF0618010
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0x0(r4)
    stfs f1, 0x4(r4)
    stfs f0, 0x8(r4)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801C4680
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C4680() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stw r31, 0x3c(r1)
    mr r31, r3
    lbz r6, 0x9a(r4)
    lfs f3, 0x40(r4)
    lfs f1, 0x44(r4)
    cmpwi r6, 0x0
    lfs f0, 0x48(r4)
    stfs f3, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C46E8
    lis r0, 0x4330
    stw r6, 0x34(r1)
    lfd f2, lbl_804A1AF0
    stw r0, 0x30(r1)
    lfs f0, lbl_804A1AE4
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x20(r1)
lbl_801C46E8:
    lbz r3, 0x9b(r4)
    cmpwi r3, 0x0
    beq lbl_801C4720
    lis r0, 0x4330
    stw r3, 0x34(r1)
    lfd f3, lbl_804A1AF0
    stw r0, 0x30(r1)
    lfs f1, lbl_804A1AE4
    lfd f2, 0x30(r1)
    lfs f0, 0x24(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_801C4720:
    lbz r3, 0x9c(r4)
    cmpwi r3, 0x0
    beq lbl_801C4758
    lis r0, 0x4330
    stw r3, 0x34(r1)
    lfd f3, lbl_804A1AF0
    stw r0, 0x30(r1)
    lfs f1, lbl_804A1AE4
    lfd f2, 0x30(r1)
    lfs f0, 0x28(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_801C4758:
    lwz r3, 0xc8(r4)
    cmpwi r5, 0x2
    lfs f3, 0x20(r1)
    lfs f2, 0x60(r3)
    lfs f1, 0x24(r1)
    fadds f5, f3, f2
    lfs f0, 0x64(r3)
    lfs f3, 0x28(r1)
    fadds f4, f1, f0
    lfs f2, 0x68(r3)
    lfs f1, lbl_804A1AD0
    lfs f0, lbl_804A1AD8
    fadds f2, f3, f2
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    beq lbl_801C488C
    bge lbl_801C48EC
    cmpwi r5, 0x0
    beq lbl_801C47CC
    bge lbl_801C482C
    b lbl_801C48EC
    b lbl_801C48EC
lbl_801C47CC:
    fcmpu cr0, f1, f5
    beq lbl_801C47E4
    fneg f1, f5
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    bl fn_801B9C64
lbl_801C47E4:
    lfs f3, 0x1c(r1)
    lfs f4, 0x18(r1)
    fneg f2, f3
    lfs f0, lbl_804A1AD0
    lfs f1, lbl_804A1AD8
    stfs f0, 0x4(r31)
    stfs f1, 0x0(r31)
    stfs f0, 0x8(r31)
    stfs f0, 0xc(r31)
    stfs f0, 0x10(r31)
    stfs f4, 0x14(r31)
    stfs f2, 0x18(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x20(r31)
    stfs f3, 0x24(r31)
    stfs f4, 0x28(r31)
    stfs f0, 0x2c(r31)
    b lbl_801C49E4
lbl_801C482C:
    fcmpu cr0, f1, f4
    beq lbl_801C4844
    fneg f1, f4
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801B9C64
lbl_801C4844:
    lfs f2, 0x14(r1)
    lfs f4, 0x10(r1)
    fneg f3, f2
    lfs f1, lbl_804A1AD0
    lfs f0, lbl_804A1AD8
    stfs f4, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f2, 0x8(r31)
    stfs f1, 0xc(r31)
    stfs f1, 0x10(r31)
    stfs f0, 0x14(r31)
    stfs f1, 0x18(r31)
    stfs f1, 0x1c(r31)
    stfs f3, 0x20(r31)
    stfs f1, 0x24(r31)
    stfs f4, 0x28(r31)
    stfs f1, 0x2c(r31)
    b lbl_801C49E4
lbl_801C488C:
    fcmpu cr0, f1, f2
    beq lbl_801C48A4
    fneg f1, f2
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
lbl_801C48A4:
    lfs f3, 0xc(r1)
    lfs f4, 0x8(r1)
    fneg f2, f3
    lfs f1, lbl_804A1AD0
    lfs f0, lbl_804A1AD8
    stfs f4, 0x0(r31)
    stfs f2, 0x4(r31)
    stfs f1, 0x8(r31)
    stfs f1, 0xc(r31)
    stfs f3, 0x10(r31)
    stfs f4, 0x14(r31)
    stfs f1, 0x18(r31)
    stfs f1, 0x1c(r31)
    stfs f1, 0x20(r31)
    stfs f1, 0x24(r31)
    stfs f0, 0x28(r31)
    stfs f1, 0x2c(r31)
    b lbl_801C49E4
lbl_801C48EC:
    lfs f1, lbl_804A1AD0
    lfs f0, 0x20(r1)
    fcmpu cr0, f1, f0
    beq lbl_801C490C
    fneg f1, f0
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    bl fn_801B9C64
lbl_801C490C:
    lfs f1, lbl_804A1AD0
    lfs f0, 0x24(r1)
    fcmpu cr0, f1, f0
    beq lbl_801C492C
    fneg f1, f0
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801B9C64
lbl_801C492C:
    lfs f1, lbl_804A1AD0
    lfs f0, 0x28(r1)
    fcmpu cr0, f1, f0
    beq lbl_801C494C
    fneg f1, f0
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
lbl_801C494C:
    lfs f0, 0x14(r1)
    lfs f8, 0x18(r1)
    lfs f9, 0x1c(r1)
    fneg f11, f0
    lfs f6, 0xc(r1)
    fmuls f2, f8, f0
    lfs f5, 0x8(r1)
    fmuls f31, f9, f0
    fmuls f1, f9, f6
    lfs f7, 0x10(r1)
    fmuls f4, f2, f6
    fmuls f3, f9, f5
    lfs f0, lbl_804A1AD0
    fmuls f12, f7, f9
    fmuls f2, f2, f5
    stfs f0, 0xc(r31)
    fsubs f10, f4, f3
    fmuls f3, f7, f6
    stfs f0, 0x1c(r31)
    fadds f9, f2, f1
    fmuls f1, f7, f5
    stfs f11, 0x20(r31)
    fmuls f13, f8, f7
    stfs f3, 0x10(r31)
    fmuls f4, f31, f6
    fmuls f3, f8, f5
    stfs f1, 0x0(r31)
    fmuls f2, f31, f5
    fmuls f1, f8, f6
    fadds f3, f4, f3
    stfs f9, 0x8(r31)
    fsubs f1, f2, f1
    stfs f10, 0x18(r31)
    stfs f3, 0x14(r31)
    stfs f1, 0x4(r31)
    stfs f12, 0x24(r31)
    stfs f13, 0x28(r31)
    stfs f0, 0x2c(r31)
lbl_801C49E4:
    opword 0xE3E10048
    lwz r0, 0x54(r1)
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C4A00
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C4A00() {
    nofralloc
    lfs f11, 0x8(r1)
    lfs f10, 0xc(r1)
    lfs f9, 0x10(r1)
    lfs f0, 0x14(r1)
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f4, 0xc(r3)
    stfs f5, 0x10(r3)
    stfs f6, 0x14(r3)
    stfs f7, 0x18(r3)
    stfs f8, 0x1c(r3)
    stfs f11, 0x20(r3)
    stfs f10, 0x24(r3)
    stfs f9, 0x28(r3)
    stfs f0, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801C4A44
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C4A44() {
    nofralloc
    stwu r1, -0x70(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    stfd f28, 0x30(r1)
    opword 0xF3810038
    stfd f27, 0x20(r1)
    opword 0xF3610028
    stfd f26, 0x10(r1)
    opword 0xF3410018
    cmpwi r4, 0x1
    beq lbl_801C4B5C
    bge lbl_801C4B5C
    cmpwi r4, 0x0
    bge lbl_801C4A90
    b lbl_801C4B5C
lbl_801C4A90:
    fadds f7, f2, f5
    lfs f6, lbl_804A1AD8
    lfs f9, 0x0(r5)
    fmuls f0, f3, f1
    lfs f26, 0x10(r5)
    fmuls f31, f4, f5
    fsubs f6, f7, f6
    lfs f30, 0x20(r5)
    fneg f8, f9
    lfs f27, 0x28(r5)
    fneg f11, f26
    lfs f10, 0x18(r5)
    fmuls f6, f4, f6
    lfs f7, 0x4(r5)
    fmuls f8, f8, f0
    lfs f12, 0x14(r5)
    fmuls f13, f11, f0
    lfs f28, 0x24(r5)
    fmuls f5, f7, f6
    lfs f4, 0x8(r5)
    fmuls f11, f12, f6
    fmuls f27, f27, f3
    fsubs f5, f8, f5
    fsubs f11, f13, f11
    fneg f29, f30
    stfs f27, 0x28(r3)
    fadds f1, f1, f5
    fadds f11, f2, f11
    fmuls f8, f28, f31
    fmuls f5, f4, f3
    stfs f1, 0xc(r3)
    fmuls f2, f12, f31
    fmuls f1, f29, f0
    stfs f8, 0x24(r3)
    fmuls f0, f28, f6
    fmuls f13, f30, f3
    stfs f2, 0x14(r3)
    fmuls f10, f10, f3
    fmuls f8, f26, f3
    stfs f11, 0x1c(r3)
    fmuls f4, f7, f31
    fmuls f2, f9, f3
    stfs f5, 0x8(r3)
    fsubs f0, f1, f0
    stfs f4, 0x4(r3)
    stfs f2, 0x0(r3)
    stfs f8, 0x10(r3)
    stfs f10, 0x18(r3)
    stfs f13, 0x20(r3)
    stfs f0, 0x2c(r3)
    b lbl_801C4C14
lbl_801C4B5C:
    lfs f26, 0x20(r5)
    fmuls f0, f3, f1
    lfs f10, 0x0(r5)
    fmuls f5, f4, f2
    fneg f7, f26
    lfs f28, 0x28(r5)
    fneg f6, f10
    lfs f8, 0x8(r5)
    fmuls f26, f26, f3
    fmuls f27, f7, f0
    fmuls f29, f28, f5
    lfs f31, 0x10(r5)
    fmuls f9, f6, f0
    lfs f30, 0x24(r5)
    fmuls f7, f8, f5
    fsubs f29, f27, f29
    lfs f11, 0x14(r5)
    fmuls f30, f30, f3
    fsubs f7, f9, f7
    lfs f6, 0x4(r5)
    fsubs f2, f29, f2
    fneg f13, f31
    lfs f12, 0x18(r5)
    fadds f1, f1, f7
    stfs f2, 0x2c(r3)
    fmuls f2, f12, f4
    fmuls f27, f28, f4
    stfs f1, 0xc(r3)
    fmuls f1, f13, f0
    fmuls f0, f12, f5
    fmuls f11, f11, f3
    stfs f2, 0x14(r3)
    fmuls f9, f31, f3
    fmuls f6, f6, f3
    stfs f30, 0x28(r3)
    fmuls f4, f8, f4
    fmuls f2, f10, f3
    stfs f26, 0x20(r3)
    fsubs f0, f1, f0
    stfs f4, 0x4(r3)
    stfs f2, 0x0(r3)
    stfs f6, 0x8(r3)
    stfs f9, 0x10(r3)
    stfs f11, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f27, 0x24(r3)
lbl_801C4C14:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    opword 0xE3810038
    lfd f28, 0x30(r1)
    opword 0xE3610028
    lfd f27, 0x20(r1)
    opword 0xE3410018
    lfd f26, 0x10(r1)
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801C4C4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C4C4C() {
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    stfd f31, 0x390(r1)
    opword 0xF3E10398
    stfd f30, 0x380(r1)
    opword 0xF3C10388
    stfd f29, 0x370(r1)
    opword 0xF3A10378
    stfd f28, 0x360(r1)
    opword 0xF3810368
    stfd f27, 0x350(r1)
    opword 0xF3610358
    stfd f26, 0x340(r1)
    opword 0xF3410348
    stfd f25, 0x330(r1)
    opword 0xF3210338
    stfd f24, 0x320(r1)
    opword 0xF3010328
    stfd f23, 0x310(r1)
    opword 0xF2E10318
    stfd f22, 0x300(r1)
    opword 0xF2C10308
    addi r11, r1, 0x300
    bl _savegpr_22
    mr r26, r3
    mr r27, r4
    mr r28, r5
    bl fn_801C5280
    lwz r3, 0x24(r28)
    bl fn_801C3624
    mr r31, r3
    addi r3, r1, 0x1d8
    bl fn_8002AE40
    mr r3, r27
    addi r4, r1, 0x1d8
    bl fn_801C4360
    mr r5, r28
    addi r3, r1, 0x208
    addi r4, r1, 0x1d8
    bl fn_801C0E98
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r28
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lbz r4, 0xd0(r26)
    mr r30, r3
    addi r3, r1, 0x1a8
    neg r0, r4
    or r0, r0, r4
    srwi r29, r0, 31
    bl fn_8002AE40
    addi r3, r1, 0x178
    bl fn_8002AE40
    mr r3, r28
    addi r4, r1, 0x178
    bl fn_801B7FB8
    addi r3, r1, 0x1a8
    addi r4, r1, 0x1d8
    addi r5, r1, 0x178
    bl fn_8003CF70
    lis r3, lbl_803E6580@ha
    addi r3, r3, lbl_803E6580@l
    bl fn_80018B90
    li r4, 0x0
    bl GXLoadPosMtxImm
    addi r3, r1, 0x1a8
    li r4, 0x0
    bl fn_801BA138
    fmr f27, f1
    addi r3, r1, 0x1a8
    li r4, 0x1
    bl fn_801BA138
    fmr f28, f1
    addi r3, r1, 0x1a8
    li r4, 0x2
    bl fn_801BA138
    fmr f29, f1
    mr r3, r28
    bl fn_801C458C
    lfs f25, lbl_804A1AD8
    mr r24, r3
    lis r25, lbl_803E6574@ha
    b lbl_801C4DC0
lbl_801C4DA4:
    addi r3, r24, 0xcc
    addi r4, r25, lbl_803E6574@l
    bl fn_8002B060
    mr r3, r28
    mr r4, r24
    bl fn_801C4594
    mr r24, r3
lbl_801C4DC0:
    cmpwi r24, 0x0
    beq lbl_801C4DD4
    lfs f0, 0xcc(r24)
    fcmpo cr0, f0, f25
    bgt lbl_801C4DA4
lbl_801C4DD4:
    lbz r4, 0xa9(r31)
    lis r6, 0x4330
    lwz r12, 0x0(r26)
    mr r3, r26
    extsb r5, r4
    lbz r0, 0xaa(r31)
    xoris r7, r5, 0x8000
    stw r6, 0x2c8(r1)
    extsb r4, r0
    lfd f3, lbl_804A1AE8
    stw r7, 0x2cc(r1)
    xoris r5, r4, 0x8000
    lhz r0, 0x0(r31)
    lfd f0, 0x2c8(r1)
    stw r5, 0x2d4(r1)
    rlwinm r4, r0, 0, 20, 20
    fsubs f2, f0, f3
    lfs f1, lbl_804A1ADC
    stw r6, 0x2d0(r1)
    lwz r12, 0x10(r12)
    lfd f0, 0x2d0(r1)
    fdivs f26, f2, f1
    fsubs f0, f0, f3
    fdivs f25, f0, f1
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r24, r3
    lhz r0, 0x0(r31)
    mr r3, r26
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r24
    mr r24, r3
    mr r3, r28
    li r23, 0x1
    mtctr r12
    bctrl
    lfs f31, lbl_804A1AE0
    mr r22, r3
    lfs f30, lbl_804A1AD4
    lis r25, lbl_803E6550@ha
    b lbl_801C5210
lbl_801C4E88:
    mr r3, r22
    bl fn_801C45A0
    fcmpo cr0, f1, f30
    fmr f24, f1
    blt lbl_801C51F8
    mr r3, r22
    bl fn_801C45BC
    fmr f23, f1
    fcmpo cr0, f1, f30
    blt lbl_801C51F8
    lbz r0, 0xb0(r31)
    lfs f22, lbl_804A1AD8
    cmpwi r0, 0x0
    beq lbl_801C4EF0
    addi r3, r1, 0xa8
    bl fn_8002AF5C
    mr r3, r22
    addi r4, r1, 0xa8
    bl fn_801C4638
    addi r3, r1, 0xa8
    mr r4, r3
    bl fn_8001B910
    bl fn_8001DA9C
    fmuls f0, f31, f1
    fdivs f0, f0, f23
    fadds f22, f22, f0
lbl_801C4EF0:
    mr r3, r26
    mr r4, r22
    mr r5, r31
    mr r6, r27
    mr r7, r23
    li r8, 0x0
    bl fn_801BF940
    lbz r5, 0xaf(r31)
    mr r4, r22
    addi r3, r1, 0x148
    li r23, 0x0
    bl fn_801C4680
    fmr f1, f26
    lbz r4, 0xb1(r31)
    fmr f2, f25
    addi r3, r1, 0x118
    fmr f3, f24
    addi r5, r1, 0x148
    fmr f4, f23
    fmr f5, f22
    bl fn_801C4A44
    addi r3, r1, 0x9c
    bl fn_8002AF5C
    addi r3, r1, 0x90
    bl fn_8002AF5C
    addi r3, r1, 0x84
    bl fn_8002AF5C
    addi r3, r1, 0x78
    bl fn_8002AF5C
    mr r12, r30
    mr r5, r22
    addi r3, r1, 0x78
    addi r4, r1, 0x208
    mtctr r12
    bctrl
    addi r3, r1, 0x78
    addi r4, r1, 0x1a8
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    addi r3, r1, 0x90
    addi r4, r1, 0x78
    bl fn_8002B060
    addi r3, r1, 0x90
    bl fn_801C451C
    lfs f0, 0x78(r1)
    addi r3, r1, 0x24
    lfs f1, 0x7c(r1)
    fneg f2, f0
    lfs f3, lbl_804A1AD0
    bl fn_8002AF60
    mr r4, r3
    addi r3, r1, 0x9c
    bl fn_8002B060
    addi r3, r1, 0x9c
    bl fn_801C451C
    cmpwi r3, 0x0
    beq lbl_801C5014
    lfs f3, 0x78(r1)
    addi r3, r1, 0x18
    lfs f0, 0x7c(r1)
    fneg f1, f3
    lfs f4, 0x80(r1)
    fneg f2, f0
    fmuls f3, f3, f3
    fmuls f0, f0, f0
    fmuls f1, f1, f4
    fmuls f2, f2, f4
    fadds f3, f3, f0
    bl fn_8002AF60
    mr r4, r3
    addi r3, r1, 0x84
    bl fn_8002B060
    b lbl_801C5050
lbl_801C5014:
    addi r3, r1, 0x9c
    addi r4, r1, 0x78
    addi r5, r22, 0xcc
    bl fn_8001F9CC
    addi r3, r1, 0x9c
    bl fn_801C451C
    cmpwi r3, 0x0
    bne lbl_801C5040
    addi r3, r1, 0x9c
    addi r4, r25, lbl_803E6550@l
    bl fn_8002B060
lbl_801C5040:
    addi r3, r1, 0x84
    addi r4, r1, 0x9c
    addi r5, r1, 0x78
    bl fn_8001F9CC
lbl_801C5050:
    addi r3, r1, 0x84
    bl fn_801C451C
    addi r3, r22, 0xcc
    addi r4, r1, 0x84
    bl fn_8002B060
    addi r3, r1, 0x6c
    bl fn_8002AF5C
    addi r3, r1, 0x6c
    addi r4, r1, 0x1a8
    addi r5, r22, 0xac
    bl fn_80018B24
    lfs f0, 0xa4(r1)
    addi r3, r1, 0xe8
    fmuls f0, f27, f0
    stfs f0, 0x8(r1)
    lfs f0, 0x98(r1)
    fmuls f0, f28, f0
    stfs f0, 0xc(r1)
    lfs f0, 0x8c(r1)
    fmuls f0, f29, f0
    stfs f0, 0x10(r1)
    lfs f0, 0x74(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x84(r1)
    lfs f1, 0x9c(r1)
    lfs f2, 0x90(r1)
    fmuls f3, f29, f0
    lfs f4, 0xa0(r1)
    fmuls f1, f27, f1
    lfs f6, 0x94(r1)
    fmuls f2, f28, f2
    lfs f0, 0x88(r1)
    fmuls f5, f27, f4
    lfs f4, 0x6c(r1)
    fmuls f6, f28, f6
    lfs f8, 0x70(r1)
    fmuls f7, f29, f0
    bl fn_801C4A00
    addi r3, r1, 0xb8
    bl fn_8002AE40
    addi r3, r1, 0xb8
    addi r4, r1, 0xe8
    addi r5, r1, 0x118
    bl fn_8003CF70
    lfs f1, 0xc4(r1)
    addi r3, r1, 0x60
    lfs f2, 0xd4(r1)
    lfs f3, 0xe4(r1)
    bl fn_8002AF60
    lfs f1, 0xb8(r1)
    addi r3, r1, 0x54
    lfs f0, 0xbc(r1)
    lfs f4, 0xc8(r1)
    lfs f2, 0xcc(r1)
    fadds f1, f1, f0
    lfs f3, 0xd8(r1)
    lfs f0, 0xdc(r1)
    fadds f2, f4, f2
    fadds f3, f3, f0
    bl fn_8002AF60
    lfs f1, 0xb8(r1)
    addi r3, r1, 0x48
    lfs f0, 0xbc(r1)
    lfs f4, 0xc8(r1)
    lfs f2, 0xcc(r1)
    fsubs f1, f1, f0
    lfs f3, 0xd8(r1)
    lfs f0, 0xdc(r1)
    fsubs f2, f4, f2
    fsubs f3, f3, f0
    bl fn_8002AF60
    mr r6, r29
    addi r3, r1, 0x60
    addi r4, r1, 0x54
    addi r5, r1, 0x48
    bl fn_801C338C
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C51F8
    lfs f1, 0xbc(r1)
    addi r3, r1, 0x3c
    lfs f0, 0xc0(r1)
    lfs f4, 0xcc(r1)
    lfs f2, 0xd0(r1)
    fadds f1, f1, f0
    lfs f3, 0xdc(r1)
    lfs f0, 0xe0(r1)
    fadds f2, f4, f2
    fadds f3, f3, f0
    bl fn_8002AF60
    lfs f1, 0xbc(r1)
    addi r3, r1, 0x30
    lfs f0, 0xc0(r1)
    lfs f4, 0xcc(r1)
    lfs f2, 0xd0(r1)
    fsubs f1, f1, f0
    lfs f3, 0xdc(r1)
    lfs f0, 0xe0(r1)
    fsubs f2, f4, f2
    fsubs f3, f3, f0
    bl fn_8002AF60
    mr r6, r29
    addi r3, r1, 0x60
    addi r4, r1, 0x3c
    addi r5, r1, 0x30
    bl fn_801C338C
lbl_801C51F8:
    mr r12, r24
    mr r3, r28
    mr r4, r22
    mtctr r12
    bctrl
    mr r22, r3
lbl_801C5210:
    cmpwi r22, 0x0
    bne lbl_801C4E88
    opword 0xE3E10398
    lfd f31, 0x390(r1)
    opword 0xE3C10388
    lfd f30, 0x380(r1)
    opword 0xE3A10378
    lfd f29, 0x370(r1)
    opword 0xE3810368
    lfd f28, 0x360(r1)
    opword 0xE3610358
    lfd f27, 0x350(r1)
    opword 0xE3410348
    lfd f26, 0x340(r1)
    opword 0xE3210338
    lfd f25, 0x330(r1)
    opword 0xE3010328
    lfd f24, 0x320(r1)
    opword 0xE2E10318
    lfd f23, 0x310(r1)
    opword 0xE2C10308
    addi r11, r1, 0x300
    lfd f22, 0x300(r1)
    bl _restgpr_22
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C5280
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C5280() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    mr r4, r5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x24(r5)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C480
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r31)
    cmpwi r0, 0x0
    beq lbl_801C52F0
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C52F0:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C533C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C533C() {
    nofralloc
    lwz r3, 0x24(r4)
    lbz r0, 0x14a(r3)
    cmplwi r0, 0x7
    bgt lbl_801C53AC
    lis r3, jumptable_80360858@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80360858@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
    lis r3, fn_801C2DC8@ha
    addi r3, r3, fn_801C2DC8@l
    blr
    lis r3, fn_801C2E84@ha
    addi r3, r3, fn_801C2E84@l
    blr
    lis r3, fn_801C2EA0@ha
    addi r3, r3, fn_801C2EA0@l
    blr
    lis r3, fn_801C53B8@ha
    addi r3, r3, fn_801C53B8@l
    blr
    lis r3, fn_801C2FB0@ha
    addi r3, r3, fn_801C2FB0@l
    blr
lbl_801C53AC:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801C53B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C53B8() {
    nofralloc
    stwu r1, -0x20(r1)
    lfs f2, 0xb0(r4)
    lfs f1, 0xb4(r4)
    lfs f0, 0xb8(r4)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801C53E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C53E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BEE9C
    lis r4, lbl_80360898@ha
    mr r3, r31
    addi r4, r4, lbl_80360898@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C5424
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C5424() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    addi r5, r1, 0x2c
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    bl fn_8030D7E0
    mr r3, r29
    addi r4, r30, 0xc
    addi r5, r1, 0x20
    bl fn_8030D7E0
    mr r3, r29
    addi r4, r30, 0x18
    addi r5, r1, 0x14
    bl fn_8030D7E0
    mr r3, r29
    addi r4, r30, 0x24
    addi r5, r1, 0x8
    bl fn_8030D7E0
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f0, 0x34(r1)
    lis r3, 0xcc01
    lfs f1, 0x30(r1)
    clrlwi. r4, r31, 31
    lfs f2, 0x2c(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C54BC
    li r0, 0x0
    stb r0, -0x8000(r3)
lbl_801C54BC:
    lfs f0, 0x28(r1)
    lis r3, 0xcc01
    lfs f1, 0x24(r1)
    cmpwi r4, 0x0
    lfs f2, 0x20(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C54E8
    li r0, 0x1
    stb r0, -0x8000(r3)
lbl_801C54E8:
    lfs f0, 0x1c(r1)
    lis r3, 0xcc01
    lfs f1, 0x18(r1)
    cmpwi r4, 0x0
    lfs f2, 0x14(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C5514
    li r0, 0x2
    stb r0, -0x8000(r3)
lbl_801C5514:
    lfs f0, 0x10(r1)
    lis r3, 0xcc01
    lfs f1, 0xc(r1)
    cmpwi r4, 0x0
    lfs f2, 0x8(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C5540
    li r0, 0x3
    stb r0, -0x8000(r3)
lbl_801C5540:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C555C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C555C() {
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    opword 0xF3E10208
    stfd f30, 0x1f0(r1)
    opword 0xF3C101F8
    stfd f29, 0x1e0(r1)
    opword 0xF3A101E8
    stfd f28, 0x1d0(r1)
    opword 0xF38101D8
    stfd f27, 0x1c0(r1)
    opword 0xF36101C8
    stfd f26, 0x1b0(r1)
    opword 0xF34101B8
    stfd f25, 0x1a0(r1)
    opword 0xF32101A8
    stfd f24, 0x190(r1)
    opword 0xF3010198
    stfd f23, 0x180(r1)
    opword 0xF2E10188
    stfd f22, 0x170(r1)
    opword 0xF2C10178
    stfd f21, 0x160(r1)
    opword 0xF2A10168
    addi r11, r1, 0x160
    bl _savegpr_22
    lis r0, 0x4330
    lwz r7, 0x24(r5)
    mr r25, r4
    mr r26, r5
    stw r0, 0x118(r1)
    mr r24, r3
    mr r4, r26
    mr r6, r25
    stw r0, 0x120(r1)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C4A0
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r24)
    cmpwi r0, 0x0
    beq lbl_801C563C
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C563C:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    lbz r0, 0xd0(r24)
    lwz r3, 0x24(r26)
    cmpwi r0, 0x0
    addi r31, r3, 0x9c
    beq lbl_801C5690
    li r30, 0x1
    b lbl_801C5694
lbl_801C5690:
    li r30, 0x0
lbl_801C5694:
    mr r3, r26
    addi r4, r1, 0xe8
    bl fn_801B7FB8
    lfs f1, lbl_804A1AF8
    lfs f0, 0x88(r25)
    lwz r22, 0x0(r25)
    lwz r12, 0x4(r25)
    fcmpu cr0, f1, f0
    lwz r11, 0x8(r25)
    lwz r10, 0xc(r25)
    lwz r9, 0x10(r25)
    lwz r8, 0x14(r25)
    lwz r7, 0x18(r25)
    lwz r6, 0x1c(r25)
    lwz r5, 0x20(r25)
    lwz r4, 0x24(r25)
    lwz r3, 0x28(r25)
    lwz r0, 0x2c(r25)
    stw r22, 0xb8(r1)
    stw r12, 0xbc(r1)
    stw r11, 0xc0(r1)
    stw r10, 0xc4(r1)
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r6, 0xd4(r1)
    stw r5, 0xd8(r1)
    stw r4, 0xdc(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    beq lbl_801C581C
    addi r3, r1, 0x38
    bl GXGetProjectionv
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x128(r1)
    lwz r0, 0x12c(r1)
    cmpwi r0, 0x1
    beq lbl_801C580C
    bge lbl_801C581C
    cmpwi r0, 0x0
    bge lbl_801C5740
    b lbl_801C581C
lbl_801C5740:
    mr r3, r25
    addi r5, r1, 0x2c
    addi r4, r25, 0x8c
    bl fn_8030D7E0
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C57F8
    lfs f1, 0x34(r1)
    lfs f0, lbl_804A1AF8
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C57B8
    lfs f3, 0x88(r25)
    lfs f4, 0x2c(r1)
    lfs f2, 0x30(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0xe4(r1)
    fmuls f3, f2, f3
    lfs f4, 0xc4(r1)
    lfs f2, 0xd4(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0xc4(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xe4(r1)
    b lbl_801C581C
lbl_801C57B8:
    lfs f3, 0x88(r25)
    lfs f4, 0x2c(r1)
    lfs f2, 0x30(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0xe4(r1)
    fmuls f3, f2, f3
    lfs f4, 0xc4(r1)
    lfs f2, 0xd4(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0xc4(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xe4(r1)
    b lbl_801C581C
lbl_801C57F8:
    lfs f1, 0xe4(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0xe4(r1)
    b lbl_801C581C
lbl_801C580C:
    lfs f1, 0xe4(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0xe4(r1)
lbl_801C581C:
    addi r5, r1, 0xb8
    addi r4, r1, 0xe8
    mr r3, r5
    bl PSMTXConcat
    addi r3, r1, 0xb8
    li r4, 0x0
    bl GXLoadPosMtxImm
    lbz r4, 0xa9(r31)
    mr r3, r24
    lbz r0, 0xaa(r31)
    extsb r5, r4
    lwz r12, 0x0(r24)
    extsb r4, r0
    lfd f3, lbl_804A1B10
    xoris r6, r5, 0x8000
    lfs f1, lbl_804A1AFC
    xoris r5, r4, 0x8000
    stw r6, 0x11c(r1)
    lhz r0, 0x0(r31)
    stw r5, 0x124(r1)
    lfd f2, 0x118(r1)
    rlwinm r4, r0, 0, 20, 20
    lfd f0, 0x120(r1)
    fsubs f2, f2, f3
    lwz r12, 0x10(r12)
    fsubs f0, f0, f3
    fdivs f24, f2, f1
    fdivs f23, f0, f1
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r22, r3
    lhz r0, 0x0(r31)
    mr r3, r24
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r22
    mr r29, r3
    mr r3, r26
    li r28, 0x1
    mtctr r12
    bctrl
    lfd f28, lbl_804A1B18
    mr r27, r3
    lfs f29, lbl_804A1B04
    lis r22, lbl_8033C400@ha
    lfs f31, lbl_804A1AF8
    lis r23, lbl_8033C430@ha
    lfs f30, lbl_804A1B08
    lfs f27, lbl_804A1B00
    b lbl_801C5D50
lbl_801C58F0:
    lfs f2, 0x30(r27)
    lfs f1, 0x38(r27)
    lwz r3, 0xc8(r27)
    fmuls f3, f2, f1
    lfs f0, 0x58(r3)
    fmuls f26, f3, f0
    fcmpo cr0, f26, f27
    blt lbl_801C5D38
    lwz r3, 0x24(r3)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C5940
    bge lbl_801C5934
    cmpwi r0, 0x2000
    beq lbl_801C594C
    b lbl_801C595C
lbl_801C5934:
    cmpwi r0, 0x6000
    beq lbl_801C5968
    b lbl_801C595C
lbl_801C5940:
    lfs f0, 0x34(r27)
    fmuls f3, f0, f1
    b lbl_801C5968
lbl_801C594C:
    lfs f0, 0x3c(r27)
    fmuls f3, f2, f0
    b lbl_801C5968
    b lbl_801C5968
lbl_801C595C:
    lfs f1, 0x34(r27)
    lfs f0, 0x3c(r27)
    fmuls f3, f1, f0
lbl_801C5968:
    lwz r3, 0xc8(r27)
    lfs f0, 0x5c(r3)
    fmuls f25, f3, f0
    fcmpo cr0, f25, f27
    blt lbl_801C5D38
    mr r3, r24
    mr r4, r27
    mr r5, r31
    mr r6, r25
    mr r7, r28
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0x9a(r27)
    li r28, 0x0
    lfs f2, 0x40(r27)
    lfs f1, 0x44(r27)
    cmpwi r0, 0x0
    lfs f0, 0x48(r27)
    stfs f2, 0x20(r1)
    lbz r3, 0xaf(r31)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C59DC
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f28
    fmuls f0, f29, f0
    fadds f0, f2, f0
    stfs f0, 0x20(r1)
lbl_801C59DC:
    lbz r0, 0x9b(r27)
    cmpwi r0, 0x0
    beq lbl_801C5A04
    stw r0, 0x124(r1)
    lfs f0, 0x24(r1)
    lfd f1, 0x120(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_801C5A04:
    lbz r0, 0x9c(r27)
    cmpwi r0, 0x0
    beq lbl_801C5A2C
    stw r0, 0x11c(r1)
    lfs f0, 0x28(r1)
    lfd f1, 0x118(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_801C5A2C:
    lwz r4, 0xc8(r27)
    cmpwi r3, 0x2
    lfs f1, 0x20(r1)
    lfs f0, 0x60(r4)
    lfs f4, 0x24(r1)
    fadds f1, f1, f0
    lfs f3, 0x64(r4)
    lfs f2, 0x28(r1)
    lfs f0, 0x68(r4)
    fadds f3, f4, f3
    stfs f1, 0x20(r1)
    fadds f0, f2, f0
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C5B1C
    bge lbl_801C5B6C
    cmpwi r3, 0x0
    beq lbl_801C5A80
    bge lbl_801C5ACC
    b lbl_801C5B6C
    b lbl_801C5B6C
lbl_801C5A80:
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fneg f2, f1
    stfs f30, 0x88(r1)
    stfs f31, 0x8c(r1)
    stfs f31, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f2, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f31, 0xb4(r1)
    b lbl_801C5C30
lbl_801C5ACC:
    fmr f1, f3
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
    lfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    fneg f2, f0
    stfs f31, 0x8c(r1)
    stfs f1, 0x88(r1)
    stfs f0, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f2, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f31, 0xb4(r1)
    b lbl_801C5C30
lbl_801C5B1C:
    fmr f1, f0
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    fneg f2, f1
    stfs f31, 0x90(r1)
    stfs f0, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f31, 0x94(r1)
    stfs f1, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f31, 0xb4(r1)
    b lbl_801C5C30
lbl_801C5B6C:
    lfs f1, 0x20(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
    lfs f1, 0x24(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
    lfs f1, 0x28(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
    lfs f0, 0x10(r1)
    lfs f7, 0xc(r1)
    lfs f8, 0x8(r1)
    fneg f10, f0
    lfs f4, 0x1c(r1)
    fmuls f1, f7, f0
    lfs f5, 0x18(r1)
    fmuls f12, f8, f0
    fmuls f2, f8, f4
    fmuls f3, f1, f5
    lfs f6, 0x14(r1)
    fmuls f0, f8, f5
    stfs f10, 0xa8(r1)
    fmuls f1, f1, f4
    fsubs f11, f3, f2
    fmuls f2, f6, f5
    stfs f31, 0x94(r1)
    fadds f10, f1, f0
    fmuls f0, f6, f4
    stfs f31, 0xa4(r1)
    fmuls f3, f12, f5
    stfs f2, 0x98(r1)
    fmuls f2, f7, f4
    fmuls f9, f7, f6
    stfs f0, 0x88(r1)
    fmuls f8, f6, f8
    fadds f2, f3, f2
    fmuls f1, f12, f4
    stfs f10, 0x90(r1)
    fmuls f0, f7, f5
    stfs f8, 0xac(r1)
    fsubs f0, f1, f0
    stfs f11, 0xa0(r1)
    stfs f2, 0x9c(r1)
    stfs f0, 0x8c(r1)
    stfs f9, 0xb0(r1)
    stfs f31, 0xb4(r1)
lbl_801C5C30:
    lfs f11, 0x98(r1)
    fmuls f1, f26, f24
    lfs f6, 0x88(r1)
    fmuls f0, f25, f23
    fneg f3, f11
    lfs f21, 0xa8(r1)
    fneg f2, f6
    lfs f9, 0x9c(r1)
    fmuls f6, f6, f26
    lfs f4, 0x8c(r1)
    fmuls f10, f3, f1
    lfs f13, 0xac(r1)
    fmuls f8, f9, f0
    lfs f12, 0xb0(r1)
    fmuls f3, f4, f0
    lfs f7, 0xa0(r1)
    fmuls f5, f2, f1
    lfs f2, 0x90(r1)
    fsubs f8, f10, f8
    stfs f6, 0x58(r1)
    fmuls f10, f12, f26
    mr r5, r30
    fsubs f3, f5, f3
    addi r3, r1, 0x58
    fneg f22, f21
    stfs f10, 0x80(r1)
    fmuls f5, f13, f25
    addi r4, r22, lbl_8033C400@l
    fmuls f12, f21, f26
    fadds f8, f23, f8
    stfs f5, 0x7c(r1)
    fmuls f7, f7, f26
    fmuls f9, f9, f25
    stfs f12, 0x78(r1)
    fmuls f10, f11, f26
    fadds f3, f24, f3
    stfs f7, 0x70(r1)
    fmuls f2, f2, f26
    fmuls f4, f4, f25
    stfs f10, 0x68(r1)
    fmuls f1, f22, f1
    fmuls f0, f13, f0
    stfs f2, 0x60(r1)
    stfs f4, 0x5c(r1)
    fsubs f1, f1, f0
    stfs f3, 0x64(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x74(r1)
    stfs f1, 0x84(r1)
    lfs f0, 0xac(r27)
    fadds f0, f3, f0
    stfs f0, 0x64(r1)
    lfs f0, 0xb0(r27)
    fadds f0, f8, f0
    stfs f0, 0x74(r1)
    lfs f0, 0xb4(r27)
    fadds f0, f1, f0
    stfs f0, 0x84(r1)
    bl fn_801C5424
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C5D38
    mr r5, r30
    addi r3, r1, 0x58
    addi r4, r23, lbl_8033C430@l
    bl fn_801C5424
lbl_801C5D38:
    mr r12, r29
    mr r3, r26
    mr r4, r27
    mtctr r12
    bctrl
    mr r27, r3
lbl_801C5D50:
    cmpwi r27, 0x0
    bne lbl_801C58F0
    opword 0xE3E10208
    lfd f31, 0x200(r1)
    opword 0xE3C101F8
    lfd f30, 0x1f0(r1)
    opword 0xE3A101E8
    lfd f29, 0x1e0(r1)
    opword 0xE38101D8
    lfd f28, 0x1d0(r1)
    opword 0xE36101C8
    lfd f27, 0x1c0(r1)
    opword 0xE34101B8
    lfd f26, 0x1b0(r1)
    opword 0xE32101A8
    lfd f25, 0x1a0(r1)
    opword 0xE3010198
    lfd f24, 0x190(r1)
    opword 0xE2E10188
    lfd f23, 0x180(r1)
    opword 0xE2C10178
    lfd f22, 0x170(r1)
    opword 0xE2A10168
    addi r11, r1, 0x160
    lfd f21, 0x160(r1)
    bl _restgpr_22
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

// ----------------------------------------------------------------------------
// fn_801C5DC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C5DC8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BEE9C
    lis r4, lbl_803608B0@ha
    mr r3, r31
    addi r4, r4, lbl_803608B0@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C5E04
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C5E04() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    opword 0xF3E10118
    stfd f30, 0x100(r1)
    opword 0xF3C10108
    stfd f29, 0xf0(r1)
    opword 0xF3A100F8
    addi r11, r1, 0xf0
    bl _savegpr_22
    lwz r7, 0x24(r5)
    mr r24, r4
    mr r25, r5
    mr r23, r3
    mr r4, r25
    mr r6, r24
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r23)
    cmpwi r0, 0x0
    beq lbl_801C5E88
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801C5E88:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    lbz r5, 0xd0(r23)
    mr r3, r25
    lwz r6, 0x24(r25)
    addi r4, r1, 0x88
    neg r0, r5
    or r0, r0, r5
    addi r30, r6, 0x9c
    srwi r31, r0, 31
    bl fn_801B7FB8
    lfs f1, lbl_804A1B20
    lfs f0, 0x88(r24)
    lwz r22, 0x0(r24)
    lwz r12, 0x4(r24)
    fcmpu cr0, f1, f0
    lwz r11, 0x8(r24)
    lwz r10, 0xc(r24)
    lwz r9, 0x10(r24)
    lwz r8, 0x14(r24)
    lwz r7, 0x18(r24)
    lwz r6, 0x1c(r24)
    lwz r5, 0x20(r24)
    lwz r4, 0x24(r24)
    lwz r3, 0x28(r24)
    lwz r0, 0x2c(r24)
    stw r22, 0x58(r1)
    stw r12, 0x5c(r1)
    stw r11, 0x60(r1)
    stw r10, 0x64(r1)
    stw r9, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r6, 0x74(r1)
    stw r5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    beq lbl_801C6060
    addi r3, r1, 0x3c
    bl GXGetProjectionv
    lfs f0, 0x3c(r1)
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    cmpwi r0, 0x1
    beq lbl_801C6050
    bge lbl_801C6060
    cmpwi r0, 0x0
    bge lbl_801C5F84
    b lbl_801C6060
lbl_801C5F84:
    mr r3, r24
    addi r4, r24, 0x8c
    addi r5, r1, 0x18
    bl fn_8030D7E0
    addi r3, r1, 0x18
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C603C
    lfs f1, 0x20(r1)
    lfs f0, lbl_804A1B20
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C5FFC
    lfs f3, 0x88(r24)
    lfs f4, 0x18(r1)
    lfs f2, 0x1c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x84(r1)
    fmuls f3, f2, f3
    lfs f4, 0x64(r1)
    lfs f2, 0x74(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x64(r1)
    stfs f2, 0x74(r1)
    stfs f0, 0x84(r1)
    b lbl_801C6060
lbl_801C5FFC:
    lfs f3, 0x88(r24)
    lfs f4, 0x18(r1)
    lfs f2, 0x1c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x84(r1)
    fmuls f3, f2, f3
    lfs f4, 0x64(r1)
    lfs f2, 0x74(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x64(r1)
    stfs f2, 0x74(r1)
    stfs f0, 0x84(r1)
    b lbl_801C6060
lbl_801C603C:
    lfs f1, 0x84(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x84(r1)
    b lbl_801C6060
lbl_801C6050:
    lfs f1, 0x84(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x84(r1)
lbl_801C6060:
    addi r3, r1, 0x58
    addi r4, r1, 0x88
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x58
    li r4, 0x0
    bl GXLoadPosMtxImm
    lwz r12, 0x0(r23)
    mr r3, r23
    lhz r0, 0x0(r30)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r22, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r22
    mr r29, r3
    mr r3, r25
    li r28, 0x0
    li r27, 0x1
    mtctr r12
    bctrl
    lfs f30, lbl_804A1B28
    mr r26, r3
    lfs f29, lbl_804A1B24
    lis r22, 0xcc01
    b lbl_801C6370
lbl_801C60E8:
    lfs f1, 0x30(r26)
    lfs f0, 0x38(r26)
    lwz r3, 0xc8(r26)
    fmuls f1, f1, f0
    lfs f0, 0x58(r3)
    fmuls f0, f1, f0
    fcmpo cr0, f0, f29
    stfs f0, 0x8(r1)
    blt lbl_801C6358
    lwz r4, 0xc8(r26)
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C6140
    bge lbl_801C6134
    cmpwi r0, 0x2000
    beq lbl_801C6150
    b lbl_801C6170
lbl_801C6134:
    cmpwi r0, 0x6000
    beq lbl_801C6160
    b lbl_801C6170
lbl_801C6140:
    lfs f1, 0x34(r26)
    lfs f0, 0x38(r26)
    fmuls f1, f1, f0
    b lbl_801C617C
lbl_801C6150:
    lfs f1, 0x30(r26)
    lfs f0, 0x3c(r26)
    fmuls f1, f1, f0
    b lbl_801C617C
lbl_801C6160:
    lfs f1, 0x30(r26)
    lfs f0, 0x38(r26)
    fmuls f1, f1, f0
    b lbl_801C617C
lbl_801C6170:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f1, f1, f0
lbl_801C617C:
    lfs f0, 0x5c(r4)
    fmuls f31, f1, f0
    fcmpo cr0, f31, f29
    blt lbl_801C6358
    opword 0xE05A00AC
    opword 0xE03A00B8
    lwz r4, 0xac(r26)
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    lwz r3, 0xb0(r26)
    opword 0xF001000C
    opword 0x10020828
    lwz r0, 0xb4(r26)
    lfs f1, 0x10(r1)
    opword 0xF0018014
    lfs f2, 0xc(r1)
    lfs f0, 0x14(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    opword 0xE0010028
    stfs f2, 0x24(r1)
    opword 0x10000032
    opword 0xE0218024
    stw r4, 0x30(r1)
    opword 0x1021007A
    stw r3, 0x34(r1)
    opword 0x10210014
    stw r0, 0x38(r1)
    fcmpo cr0, f1, f29
    bge lbl_801C6200
    li r0, 0x0
    b lbl_801C6220
lbl_801C6200:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410024
    li r0, 0x1
    opword 0x10020058
    opword 0xE041802C
    opword 0xF0010024
    opword 0x10020058
    opword 0xF001802C
lbl_801C6220:
    cmpwi r0, 0x0
    beq lbl_801C6358
    opword 0xE0410024
    lfs f1, 0x8(r1)
    opword 0x106207D8
    lfs f0, lbl_8049C4A8
    opword 0xE0810030
    opword 0xE041802C
    fcmpo cr0, f1, f0
    opword 0xF0610024
    opword 0x106207D8
    opword 0xE0010024
    opword 0x10040028
    opword 0xE0818038
    opword 0xF0010024
    opword 0x10041828
    opword 0xF001802C
    bge lbl_801C6270
    addi r3, r1, 0x8
    b lbl_801C6274
lbl_801C6270:
    la r3, lbl_8049C4A8
lbl_801C6274:
    lfs f0, 0x0(r3)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r4, 0xbc(r1)
    clrlwi. r3, r4, 24
    beq lbl_801C6358
    clrlwi r0, r28, 24
    cmplw r0, r3
    beq lbl_801C62C8
    mr r28, r4
    li r4, 0x5
    bl GXSetLineWidth
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x1
    bl fn_801BF940
    b lbl_801C62E4
lbl_801C62C8:
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x0
    bl fn_801BF940
lbl_801C62E4:
    li r27, 0x0
    li r3, 0xa8
    li r4, 0x0
    li r5, 0x2
    bl GXBegin
    lfs f0, 0x30(r1)
    cmpwi r31, 0x0
    lfs f1, 0x34(r1)
    stfs f0, -0x8000(r22)
    lfs f0, 0x38(r1)
    stfs f1, -0x8000(r22)
    stfs f0, -0x8000(r22)
    beq lbl_801C6328
    lfs f0, lbl_804A1B20
    stfs f0, -0x8000(r22)
    lfs f0, lbl_804A1B20
    stfs f0, -0x8000(r22)
lbl_801C6328:
    lfs f0, 0x24(r1)
    cmpwi r31, 0x0
    lfs f1, 0x28(r1)
    stfs f0, -0x8000(r22)
    lfs f0, 0x2c(r1)
    stfs f1, -0x8000(r22)
    stfs f0, -0x8000(r22)
    beq lbl_801C6358
    lfs f0, lbl_804A1B20
    stfs f0, -0x8000(r22)
    lfs f0, lbl_804A1B2C
    stfs f0, -0x8000(r22)
lbl_801C6358:
    mr r12, r29
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C6370:
    cmpwi r26, 0x0
    bne lbl_801C60E8
    opword 0xE3E10118
    lfd f31, 0x110(r1)
    opword 0xE3C10108
    lfd f30, 0x100(r1)
    opword 0xE3A100F8
    addi r11, r1, 0xf0
    lfd f29, 0xf0(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// ----------------------------------------------------------------------------
// fn_801C63A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C63A8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BEE9C
    lis r4, lbl_803608C8@ha
    mr r3, r31
    addi r4, r4, lbl_803608C8@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C63E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C63E4() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    addi r11, r1, 0xd0
    bl _savegpr_22
    lwz r7, 0x24(r5)
    mr r28, r4
    mr r29, r5
    mr r27, r3
    mr r4, r29
    mr r6, r28
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r27)
    cmpwi r0, 0x0
    beq lbl_801C6460
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801C6460:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    lbz r5, 0xd0(r27)
    mr r3, r29
    lwz r6, 0x24(r29)
    addi r4, r1, 0x68
    neg r0, r5
    or r0, r0, r5
    addi r30, r6, 0x9c
    srwi r31, r0, 31
    bl fn_801B7FB8
    lfs f1, lbl_804A1B30
    lfs f0, 0x88(r28)
    lwz r26, 0x0(r28)
    lwz r12, 0x4(r28)
    fcmpu cr0, f1, f0
    lwz r11, 0x8(r28)
    lwz r10, 0xc(r28)
    lwz r9, 0x10(r28)
    lwz r8, 0x14(r28)
    lwz r7, 0x18(r28)
    lwz r6, 0x1c(r28)
    lwz r5, 0x20(r28)
    lwz r4, 0x24(r28)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r26, 0x38(r1)
    stw r12, 0x3c(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_801C6638
    addi r3, r1, 0x18
    bl GXGetProjectionv
    lfs f0, 0x18(r1)
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    cmpwi r0, 0x1
    beq lbl_801C6628
    bge lbl_801C6638
    cmpwi r0, 0x0
    bge lbl_801C655C
    b lbl_801C6638
lbl_801C655C:
    mr r3, r28
    addi r4, r28, 0x8c
    addi r5, r1, 0xc
    bl fn_8030D7E0
    addi r3, r1, 0xc
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C6614
    lfs f1, 0x14(r1)
    lfs f0, lbl_804A1B30
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C65D4
    lfs f3, 0x88(r28)
    lfs f4, 0xc(r1)
    lfs f2, 0x10(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x64(r1)
    fmuls f3, f2, f3
    lfs f4, 0x44(r1)
    lfs f2, 0x54(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x44(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0x64(r1)
    b lbl_801C6638
lbl_801C65D4:
    lfs f3, 0x88(r28)
    lfs f4, 0xc(r1)
    lfs f2, 0x10(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x64(r1)
    fmuls f3, f2, f3
    lfs f4, 0x44(r1)
    lfs f2, 0x54(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x44(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0x64(r1)
    b lbl_801C6638
lbl_801C6614:
    lfs f1, 0x64(r1)
    lfs f0, 0x88(r28)
    fadds f0, f1, f0
    stfs f0, 0x64(r1)
    b lbl_801C6638
lbl_801C6628:
    lfs f1, 0x64(r1)
    lfs f0, 0x88(r28)
    fadds f0, f1, f0
    stfs f0, 0x64(r1)
lbl_801C6638:
    addi r3, r1, 0x38
    addi r4, r1, 0x68
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x38
    li r4, 0x0
    bl GXLoadPosMtxImm
    lwz r12, 0x0(r27)
    mr r3, r27
    lhz r0, 0x0(r30)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r26, r3
    lhz r0, 0x0(r30)
    mr r3, r27
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r26
    mr r25, r3
    mr r3, r29
    li r24, 0x0
    li r23, 0x1
    mtctr r12
    bctrl
    lfs f31, lbl_804A1B38
    mr r22, r3
    lfs f30, lbl_804A1B34
    lis r26, 0xcc01
    b lbl_801C67C8
lbl_801C66C0:
    lfs f1, 0x30(r22)
    lfs f0, 0x38(r22)
    lwz r3, 0xc8(r22)
    fmuls f1, f1, f0
    lfs f0, 0x58(r3)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f30
    stfs f1, 0x8(r1)
    blt lbl_801C67B0
    lfs f0, lbl_8049C4B0
    fcmpo cr0, f1, f0
    bge lbl_801C66F8
    addi r3, r1, 0x8
    b lbl_801C66FC
lbl_801C66F8:
    la r3, lbl_8049C4B0
lbl_801C66FC:
    lfs f0, 0x0(r3)
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r4, 0x9c(r1)
    clrlwi. r3, r4, 24
    beq lbl_801C67B0
    clrlwi r0, r24, 24
    cmplw r0, r3
    beq lbl_801C6750
    mr r24, r4
    li r4, 0x5
    bl GXSetPointSize
    mr r3, r27
    mr r4, r22
    mr r5, r30
    mr r6, r28
    mr r7, r23
    li r8, 0x1
    bl fn_801BF940
    b lbl_801C676C
lbl_801C6750:
    mr r3, r27
    mr r4, r22
    mr r5, r30
    mr r6, r28
    mr r7, r23
    li r8, 0x0
    bl fn_801BF940
lbl_801C676C:
    li r23, 0x0
    li r3, 0xb8
    li r4, 0x0
    li r5, 0x1
    bl GXBegin
    lfs f2, 0xb4(r22)
    cmpwi r31, 0x0
    lfs f1, 0xb0(r22)
    lfs f0, 0xac(r22)
    stfs f0, -0x8000(r26)
    stfs f1, -0x8000(r26)
    stfs f2, -0x8000(r26)
    beq lbl_801C67B0
    lfs f0, lbl_804A1B30
    stfs f0, -0x8000(r26)
    lfs f0, lbl_804A1B30
    stfs f0, -0x8000(r26)
lbl_801C67B0:
    mr r12, r25
    mr r3, r29
    mr r4, r22
    mtctr r12
    bctrl
    mr r22, r3
lbl_801C67C8:
    cmpwi r22, 0x0
    bne lbl_801C66C0
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    addi r11, r1, 0xd0
    lfd f30, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C67F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C67F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BEE9C
    lis r4, lbl_803609C8@ha
    mr r3, r31
    addi r4, r4, lbl_803609C8@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C6834
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C6834() {
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
    addi r11, r1, 0x60
    bl _savegpr_17
    lwz r31, 0x0(r4)
    lis r0, 0x4330
    mr r18, r3
    stw r0, 0x8(r1)
    lwz r3, 0x24(r31)
    mr r19, r4
    stw r0, 0x10(r1)
    mr r20, r5
    mr r21, r6
    mr r22, r7
    bl fn_801C3624
    lwz r12, 0x0(r18)
    mr r30, r3
    mr r3, r18
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r18)
    mr r29, r3
    lhz r0, 0x0(r30)
    mr r3, r18
    lwz r12, 0x10(r12)
    rlwinm r28, r0, 0, 20, 20
    mr r4, r28
    mtctr r12
    bctrl
    lwz r12, 0x0(r18)
    mr r27, r3
    mr r3, r18
    mr r4, r28
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r26, r3
    mr r3, r18
    mr r4, r31
    bl fn_801C6B84
    lbz r4, 0xa9(r30)
    mr r25, r3
    lbz r0, 0xb2(r30)
    extsb r4, r4
    lfd f2, lbl_804A1B48
    xoris r4, r4, 0x8000
    clrlwi r5, r0, 29
    stw r4, 0xc(r1)
    subi r0, r5, 0x1
    cntlzw r4, r0
    lfs f0, lbl_804A1B40
    lfd f1, 0x8(r1)
    subi r0, r5, 0x2
    cntlzw r0, r0
    srwi. r24, r4, 5
    fsubs f1, f1, f2
    srwi r23, r0, 5
    fmuls f30, f0, f1
    bne lbl_801C694C
    cmpwi r23, 0x0
    beq lbl_801C6950
lbl_801C694C:
    addi r25, r3, 0x1
lbl_801C6950:
    clrlslwi r5, r25, 17, 1
    li r3, 0x98
    li r4, 0x0
    bl GXBegin
    mr r3, r18
    mr r4, r30
    bl fn_801C6B8C
    cmpwi r3, 0x40
    beq lbl_801C69A0
    bge lbl_801C697C
    cmpwi r3, 0x0
lbl_801C697C:
    subi r0, r25, 0x1
    lfd f1, lbl_804A1B48
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_801C6B98
    fmr f29, f1
    b lbl_801C69A4
lbl_801C69A0:
    lfs f29, lbl_804A1B44
lbl_801C69A4:
    lhz r0, 0x0(r30)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x1
    beq lbl_801C69D0
    bge lbl_801C69D0
    cmpwi r0, 0x0
    bge lbl_801C69C4
    b lbl_801C69D0
lbl_801C69C4:
    li r25, 0x0
    li r30, 0x1
    b lbl_801C69D8
lbl_801C69D0:
    subi r25, r25, 0x1
    li r30, -0x1
lbl_801C69D8:
    cmpwi r23, 0x0
    beq lbl_801C6A2C
    cmpwi r28, 0x0
    bne lbl_801C6A2C
    xoris r0, r25, 0x8000
    lfd f2, lbl_804A1B48
    stw r0, 0xc(r1)
    fmr f1, f30
    mr r3, r18
    mr r4, r19
    lfd f0, 0x8(r1)
    mr r5, r20
    mr r7, r29
    fsubs f0, f0, f2
    mr r9, r21
    mr r10, r22
    addi r8, r19, 0xa4
    li r6, 0x0
    fmuls f2, f29, f0
    bl fn_801C6BB0
    add r25, r25, r30
lbl_801C6A2C:
    mr r12, r27
    mr r3, r31
    mtctr r12
    bctrl
    lfd f31, lbl_804A1B48
    mr r17, r3
    b lbl_801C6AA0
lbl_801C6A48:
    xoris r0, r25, 0x8000
    fmr f1, f30
    stw r0, 0x14(r1)
    mr r3, r18
    mr r4, r19
    mr r5, r20
    lfd f0, 0x10(r1)
    mr r6, r17
    mr r7, r29
    fsubs f0, f0, f31
    mr r9, r21
    mr r10, r22
    addi r8, r17, 0xac
    fmuls f2, f29, f0
    bl fn_801C6BB0
    mr r12, r26
    mr r3, r31
    mr r4, r17
    mtctr r12
    bctrl
    mr r17, r3
    add r25, r25, r30
lbl_801C6AA0:
    cmpwi r17, 0x0
    bne lbl_801C6A48
    cmpwi r24, 0x0
    beq lbl_801C6B00
    mr r12, r27
    mr r3, r31
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r6, r3
    stw r0, 0xc(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B48
    mr r3, r18
    lfd f0, 0x8(r1)
    mr r4, r19
    mr r5, r20
    fsubs f0, f0, f2
    mr r7, r29
    mr r9, r21
    mr r10, r22
    addi r8, r6, 0xac
    fmuls f2, f29, f0
    bl fn_801C6BB0
lbl_801C6B00:
    cmpwi r23, 0x0
    beq lbl_801C6B50
    cmpwi r28, 0x0
    beq lbl_801C6B50
    xoris r0, r25, 0x8000
    lfd f2, lbl_804A1B48
    stw r0, 0x14(r1)
    fmr f1, f30
    mr r3, r18
    mr r4, r19
    lfd f0, 0x10(r1)
    mr r5, r20
    mr r7, r29
    fsubs f0, f0, f2
    mr r9, r21
    mr r10, r22
    addi r8, r19, 0xa4
    li r6, 0x0
    fmuls f2, f29, f0
    bl fn_801C6BB0
lbl_801C6B50:
    bl fn_801C6FEC
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    opword 0xE3C10078
    lfd f30, 0x70(r1)
    opword 0xE3A10068
    addi r11, r1, 0x60
    lfd f29, 0x60(r1)
    bl _restgpr_17
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801C6B84
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C6B84() {
    nofralloc
    lhz r3, 0x50(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_801C6B8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C6B8C() {
    nofralloc
    lbz r0, 0xb2(r4)
    rlwinm r3, r0, 0, 24, 25
    blr
}

// ----------------------------------------------------------------------------
// fn_801C6B98
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C6B98() {
    nofralloc
    fres f0, f1
    opword 0x1040002A
    opword 0x10000032
    opword 0x1001103C
    fmr f1, f0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C6BB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C6BB0() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    addi r11, r1, 0x110
    bl _savegpr_25
    fmr f30, f1
    cmpwi r6, 0x0
    fmr f31, f2
    mr r25, r4
    mr r28, r5
    mr r29, r6
    mr r26, r8
    mr r30, r9
    mr r31, r10
    bne lbl_801C6C48
    lwz r3, 0x0(r4)
    lwz r29, 0x3c(r3)
    b lbl_801C6C34
lbl_801C6C10:
    lhz r4, 0x42(r3)
    lwzx r29, r29, r4
    b lbl_801C6C20
lbl_801C6C1C:
    lwzx r29, r29, r4
lbl_801C6C20:
    cmpwi r29, 0x0
    beq lbl_801C6C34
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_801C6C1C
lbl_801C6C34:
    cmpwi r29, 0x0
    beq lbl_801C6C48
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_801C6C10
lbl_801C6C48:
    mr r12, r7
    mr r4, r25
    mr r5, r29
    addi r3, r1, 0x4c
    mtctr r12
    bctrl
    rlwinm. r0, r28, 0, 28, 28
    addi r27, r1, 0x4c
    bne lbl_801C6C80
    mr r3, r27
    addi r4, r29, 0xcc
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    b lbl_801C6C90
lbl_801C6C80:
    mr r3, r27
    addi r4, r25, 0xc8
    addi r5, r1, 0x1c
    bl fn_8030DEEC
lbl_801C6C90:
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C6CB8
    li r0, 0x0
    b lbl_801C6CD8
lbl_801C6CB8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801C6CD8:
    cmpwi r0, 0x0
    bne lbl_801C6CF8
    lfs f0, 0xbc(r25)
    stfs f0, 0x1c(r1)
    lfs f0, 0xc0(r25)
    stfs f0, 0x20(r1)
    lfs f0, 0xc4(r25)
    stfs f0, 0x24(r1)
lbl_801C6CF8:
    mr r4, r27
    addi r3, r1, 0x1c
    addi r5, r1, 0x28
    bl fn_8030DEEC
    opword 0xE041002C
    opword 0xE0218028
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801C6D44
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010028
    opword 0x10400058
    opword 0xE0018030
    opword 0xF0410028
    opword 0x10400058
    opword 0xF0418030
lbl_801C6D44:
    lfs f0, 0x28(r1)
    lfs f1, 0x8(r26)
    stfs f0, 0xcc(r29)
    lfs f4, 0x4(r26)
    lfs f0, 0x2c(r1)
    lfs f8, 0x0(r26)
    stfs f0, 0xd0(r29)
    lfs f0, 0x30(r1)
    stfs f0, 0xd4(r29)
    lfs f0, 0x30(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x24(r1)
    lfs f5, 0x2c(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x20(r1)
    lfs f9, 0x28(r1)
    lfs f10, 0x4c(r1)
    lfs f11, 0x1c(r1)
    stfs f10, 0x8c(r1)
    stfs f11, 0x88(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f1, 0xb4(r1)
    lbz r3, 0x9a(r29)
    lfs f3, 0x40(r29)
    lfs f1, 0x44(r29)
    cmpwi r3, 0x0
    lfs f0, 0x48(r29)
    stfs f3, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    beq lbl_801C6E08
    lis r0, 0x4330
    stw r3, 0xec(r1)
    lfd f2, lbl_804A1B60
    stw r0, 0xe8(r1)
    lfs f0, lbl_804A1B54
    lfd f1, 0xe8(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x10(r1)
lbl_801C6E08:
    lbz r3, 0x9b(r29)
    cmpwi r3, 0x0
    beq lbl_801C6E40
    lis r0, 0x4330
    stw r3, 0xec(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe8(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe8(r1)
    lfs f0, 0x14(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x14(r1)
lbl_801C6E40:
    lbz r3, 0x9c(r29)
    cmpwi r3, 0x0
    beq lbl_801C6E78
    lis r0, 0x4330
    stw r3, 0xec(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe8(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe8(r1)
    lfs f0, 0x18(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x18(r1)
lbl_801C6E78:
    lwz r5, 0xc8(r29)
    addi r3, r1, 0xc
    lfs f1, 0x14(r1)
    addi r4, r1, 0x8
    lfs f0, 0x64(r5)
    lfs f2, 0x30(r29)
    fadds f1, f1, f0
    lfs f0, 0x38(r29)
    lfs f4, 0x10(r1)
    fmuls f5, f2, f0
    lfs f3, 0x60(r5)
    lfs f0, 0x58(r5)
    fadds f4, f4, f3
    lfs f3, 0x18(r1)
    lfs f2, 0x68(r5)
    fmuls f29, f5, f0
    stfs f1, 0x14(r1)
    fadds f0, f3, f2
    stfs f4, 0x10(r1)
    stfs f0, 0x18(r1)
    bl fn_801B9C64
    lfs f1, 0xc(r1)
    addi r3, r1, 0x88
    lfs f0, 0x8(r1)
    addi r4, r1, 0x58
    fmuls f5, f1, f29
    lfs f1, lbl_804A1B58
    fmuls f4, f0, f29
    lfs f0, lbl_804A1B44
    stfs f1, 0x5c(r1)
    addi r5, r1, 0xb8
    fneg f3, f5
    stfs f5, 0xc(r1)
    fmuls f2, f4, f30
    stfs f4, 0x8(r1)
    fmuls f6, f3, f30
    fsubs f2, f30, f2
    stfs f4, 0x58(r1)
    stfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f6, 0x84(r1)
    bl PSMTXConcat
    mr r4, r30
    addi r3, r1, 0xb8
    addi r5, r1, 0x40
    bl fn_8030D7E0
    mr r4, r31
    addi r3, r1, 0xb8
    addi r5, r1, 0x34
    bl fn_8030D7E0
    lfs f2, 0x48(r1)
    lis r3, 0xcc01
    lfs f1, 0x44(r1)
    clrlwi. r0, r28, 31
    lfs f0, 0x40(r1)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    beq lbl_801C6F8C
    lfs f0, lbl_804A1B44
    stfs f0, -0x8000(r3)
    stfs f31, -0x8000(r3)
lbl_801C6F8C:
    lfs f2, 0x3c(r1)
    lis r3, 0xcc01
    lfs f1, 0x38(r1)
    cmpwi r0, 0x0
    lfs f0, 0x34(r1)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    beq lbl_801C6FBC
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    stfs f31, -0x8000(r3)
lbl_801C6FBC:
    opword 0xE3E10138
    lfd f31, 0x130(r1)
    opword 0xE3C10128
    lfd f30, 0x120(r1)
    opword 0xE3A10118
    addi r11, r1, 0x110
    lfd f29, 0x110(r1)
    bl _restgpr_25
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// fn_801C6FEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C6FEC() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801C6FF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C6FF0() {
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
    stfd f28, 0x110(r1)
    opword 0xF3810118
    stfd f27, 0x100(r1)
    opword 0xF3610108
    mr r12, r8
    fmr f28, f1
    addi r3, r1, 0x40
    stw r31, 0xfc(r1)
    fmr f29, f2
    fmr f30, f3
    mr r31, r6
    stw r30, 0xf8(r1)
    mr r30, r7
    stw r29, 0xf4(r1)
    mr r29, r5
    mr r5, r30
    stw r28, 0xf0(r1)
    mr r28, r4
    mr r4, r29
    mtctr r12
    bctrl
    rlwinm. r0, r31, 0, 28, 28
    addi r31, r1, 0x40
    bne lbl_801C7088
    mr r3, r31
    addi r4, r30, 0xcc
    addi r5, r1, 0x10
    bl fn_8030DEEC
    b lbl_801C7098
lbl_801C7088:
    mr r3, r31
    addi r4, r29, 0xc8
    addi r5, r1, 0x10
    bl fn_8030DEEC
lbl_801C7098:
    opword 0xE0410014
    opword 0xE0218010
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C70C0
    li r0, 0x0
    b lbl_801C70E0
lbl_801C70C0:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010010
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018018
    opword 0xF0410010
    opword 0x10400058
    opword 0xF0418018
lbl_801C70E0:
    cmpwi r0, 0x0
    bne lbl_801C7100
    lfs f0, 0xbc(r29)
    stfs f0, 0x10(r1)
    lfs f0, 0xc0(r29)
    stfs f0, 0x14(r1)
    lfs f0, 0xc4(r29)
    stfs f0, 0x18(r1)
lbl_801C7100:
    mr r4, r31
    addi r3, r1, 0x10
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801C714C
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801C714C:
    lfs f0, 0x1c(r1)
    lfs f1, 0xb4(r30)
    stfs f0, 0xcc(r30)
    lfs f4, 0xb0(r30)
    lfs f0, 0x20(r1)
    lfs f8, 0xac(r30)
    stfs f0, 0xd0(r30)
    lfs f0, 0x24(r1)
    stfs f0, 0xd4(r30)
    lfs f0, 0x24(r1)
    lfs f2, 0x48(r1)
    lfs f3, 0x18(r1)
    lfs f5, 0x20(r1)
    lfs f6, 0x44(r1)
    lfs f7, 0x14(r1)
    lfs f9, 0x1c(r1)
    lfs f10, 0x40(r1)
    lfs f11, 0x10(r1)
    stfs f10, 0xb4(r1)
    stfs f11, 0xb0(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f1, 0xdc(r1)
    lbz r3, 0x9a(r30)
    lfs f3, 0x40(r30)
    lfs f1, 0x44(r30)
    cmpwi r3, 0x0
    lfs f0, 0x48(r30)
    stfs f3, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801C7210
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f2, lbl_804A1B60
    stw r0, 0xe0(r1)
    lfs f0, lbl_804A1B54
    lfd f1, 0xe0(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x34(r1)
lbl_801C7210:
    lbz r3, 0x9b(r30)
    cmpwi r3, 0x0
    beq lbl_801C7248
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe0(r1)
    lfs f0, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x38(r1)
lbl_801C7248:
    lbz r3, 0x9c(r30)
    cmpwi r3, 0x0
    beq lbl_801C7280
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe0(r1)
    lfs f0, 0x3c(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x3c(r1)
lbl_801C7280:
    lwz r4, 0xc8(r30)
    lfs f3, 0x34(r1)
    lfs f0, 0x60(r4)
    lfs f2, 0x30(r30)
    fadds f6, f3, f0
    lfs f1, 0x38(r30)
    lwz r3, 0x24(r4)
    lfs f4, 0x38(r1)
    fmuls f7, f2, f1
    lfs f3, 0x64(r4)
    lfs f0, 0x58(r4)
    fadds f5, f4, f3
    lhz r0, 0x9c(r3)
    lfs f4, 0x3c(r1)
    fmuls f31, f7, f0
    lfs f3, 0x68(r4)
    rlwinm r0, r0, 0, 17, 18
    fadds f0, f4, f3
    cmpwi r0, 0x4000
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801C72F8
    bge lbl_801C72EC
    cmpwi r0, 0x2000
    beq lbl_801C7304
    b lbl_801C7314
lbl_801C72EC:
    cmpwi r0, 0x6000
    beq lbl_801C7320
    b lbl_801C7314
lbl_801C72F8:
    lfs f0, 0x34(r30)
    fmuls f7, f0, f1
    b lbl_801C7320
lbl_801C7304:
    lfs f0, 0x3c(r30)
    fmuls f7, f2, f0
    b lbl_801C7320
    b lbl_801C7320
lbl_801C7314:
    lfs f1, 0x34(r30)
    lfs f0, 0x3c(r30)
    fmuls f7, f1, f0
lbl_801C7320:
    lfs f0, 0x5c(r4)
    addi r3, r1, 0xc
    lfs f1, 0x38(r1)
    addi r4, r1, 0x8
    fmuls f27, f7, f0
    bl fn_801B9C64
    lfs f3, 0x8(r1)
    addi r3, r1, 0xb0
    lfs f7, 0xc(r1)
    addi r4, r1, 0x80
    fmuls f2, f3, f31
    lfs f1, lbl_804A1B58
    fmuls f8, f7, f31
    lfs f0, lbl_804A1B44
    fmuls f6, f3, f27
    stfs f1, 0x84(r1)
    fmuls f5, f28, f8
    stfs f2, 0x80(r1)
    fmuls f4, f28, f2
    addi r5, r1, 0x50
    fneg f2, f7
    stfs f0, 0x94(r1)
    fmuls f3, f7, f27
    stfs f1, 0x90(r1)
    fmuls f9, f2, f27
    fsubs f7, f29, f5
    stfs f1, 0x98(r1)
    fmuls f5, f29, f6
    fmuls f0, f29, f3
    stfs f1, 0x9c(r1)
    fsubs f2, f28, f4
    fsubs f3, f7, f5
    stfs f9, 0x88(r1)
    fadds f0, f2, f0
    stfs f8, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0xa8(r1)
    stfs f3, 0xac(r1)
    bl PSMTXConcat
    lfs f2, 0x7c(r1)
    lis r5, lbl_803E6550@ha
    lfs f1, 0x6c(r1)
    addi r3, r28, 0xc
    lfs f0, 0x5c(r1)
    addi r4, r1, 0x50
    stfs f1, 0x2c(r1)
    addi r5, r5, lbl_803E6550@l
    stfs f0, 0x28(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x0(r28)
    stfs f1, 0x4(r28)
    stfs f2, 0x8(r28)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lis r5, lbl_803E6568@ha
    addi r3, r28, 0x18
    addi r4, r1, 0x50
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    stfs f30, 0x24(r28)
    opword 0xE3E10148
    lfd f31, 0x140(r1)
    opword 0xE3C10138
    lfd f30, 0x130(r1)
    opword 0xE3A10128
    lfd f29, 0x120(r1)
    opword 0xE3810118
    lfd f28, 0x110(r1)
    opword 0xE3610108
    lfd f27, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// fn_801C7458
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C7458() {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    opword 0xF3E100F8
    addi r11, r1, 0xf0
    bl _savegpr_27
    lis r9, 0x4330
    xoris r0, r7, 0x8000
    stw r9, 0xc8(r1)
    mr r30, r4
    lfd f1, lbl_804A1B48
    slwi r3, r7, 1
    stw r0, 0xcc(r1)
    addi r0, r3, 0x2
    mr r31, r5
    mr r27, r6
    lfd f0, 0xc8(r1)
    mr r28, r7
    stw r9, 0xd0(r1)
    mr r29, r8
    fsubs f0, f0, f1
    clrlwi r5, r0, 16
    li r3, 0x98
    li r4, 0x0
    fres f31, f0
    opword 0x105FF82A
    opword 0x103F07F2
    opword 0x13E0107C
    bl GXBegin
    rlwinm. r0, r27, 0, 27, 27
    beq lbl_801C765C
    cmpwi r28, 0x0
    li r5, 0x0
    blt lbl_801C77DC
    addi r0, r28, 0x1
    clrlwi r4, r27, 31
    lfd f1, lbl_804A1B48
    lis r3, 0xcc01
    mtctr r0
    blt lbl_801C77DC
lbl_801C74FC:
    lfs f6, 0x0(r29)
    cmpwi r4, 0x0
    opword 0xE07E0018
    lfs f7, 0x4(r29)
    opword 0x10830198
    opword 0xE01E000C
    opword 0xE07E8020
    opword 0x104001D8
    opword 0xE01E8014
    opword 0xF0810098
    opword 0x10830198
    opword 0xE0BE0000
    opword 0xF04100A4
    opword 0x104001D8
    opword 0xE0610098
    opword 0xE00100A4
    opword 0xF08180A0
    opword 0x1000182A
    opword 0xF04180AC
    opword 0xF00100B0
    opword 0x1002202A
    opword 0xE04100B0
    opword 0xF00180B8
    opword 0x1042282A
    opword 0xE0BE8008
    opword 0xF04100BC
    opword 0x1040282A
    lfs f0, 0xbc(r1)
    opword 0xF04180C4
    lfs f2, 0xc0(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0xc4(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C75A8
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r30)
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C75A8:
    opword 0xE01F000C
    cmpwi r4, 0x0
    opword 0xE07F0018
    opword 0x104001D8
    opword 0xE01F8014
    opword 0x10830198
    opword 0xE07F8020
    opword 0xE0BF0000
    opword 0xF0410074
    opword 0x104001D8
    opword 0xF0810068
    opword 0x10830198
    opword 0xE0010074
    opword 0xE0610068
    opword 0xF041807C
    opword 0x1000182A
    opword 0xF0818070
    opword 0xF0010080
    opword 0x1002202A
    opword 0xE0410080
    opword 0xF0018088
    opword 0x1042282A
    opword 0xE0BF8008
    opword 0xF041008C
    opword 0x1040282A
    lfs f0, 0x8c(r1)
    opword 0xF0418094
    lfs f2, 0x90(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x94(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C764C
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r31)
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C764C:
    addi r29, r29, 0x8
    addi r5, r5, 0x1
    bdnz lbl_801C74FC
    b lbl_801C77DC
lbl_801C765C:
    cmpwi r28, 0x0
    li r5, 0x0
    blt lbl_801C77DC
    addi r0, r28, 0x1
    clrlwi r4, r27, 31
    lfd f1, lbl_804A1B48
    lis r3, 0xcc01
    mtctr r0
    blt lbl_801C77DC
lbl_801C7680:
    lfs f6, 0x0(r29)
    cmpwi r4, 0x0
    opword 0xE07F0018
    lfs f7, 0x4(r29)
    opword 0x10830198
    opword 0xE01F000C
    opword 0xE07F8020
    opword 0x104001D8
    opword 0xE01F8014
    opword 0xF0810038
    opword 0x10830198
    opword 0xE0BF0000
    opword 0xF0410044
    opword 0x104001D8
    opword 0xE0610038
    opword 0xE0010044
    opword 0xF0818040
    opword 0x1000182A
    opword 0xF041804C
    opword 0xF0010050
    opword 0x1002202A
    opword 0xE0410050
    opword 0xF0018058
    opword 0x1042282A
    opword 0xE0BF8008
    opword 0xF041005C
    opword 0x1040282A
    lfs f0, 0x5c(r1)
    opword 0xF0418064
    lfs f2, 0x60(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x64(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C772C
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r31)
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C772C:
    opword 0xE01E000C
    cmpwi r4, 0x0
    opword 0xE07E0018
    opword 0x104001D8
    opword 0xE01E8014
    opword 0x10830198
    opword 0xE07E8020
    opword 0xE0BE0000
    opword 0xF0410014
    opword 0x104001D8
    opword 0xF0810008
    opword 0x10830198
    opword 0xE0010014
    opword 0xE0610008
    opword 0xF041801C
    opword 0x1000182A
    opword 0xF0818010
    opword 0xF0010020
    opword 0x1002202A
    opword 0xE0410020
    opword 0xF0018028
    opword 0x1042282A
    opword 0xE0BE8008
    opword 0xF041002C
    opword 0x1040282A
    lfs f0, 0x2c(r1)
    opword 0xF0418034
    lfs f2, 0x30(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C77D0
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r30)
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C77D0:
    addi r29, r29, 0x8
    addi r5, r5, 0x1
    bdnz lbl_801C7680
lbl_801C77DC:
    opword 0xE3E100F8
    addi r11, r1, 0xf0
    lfd f31, 0xf0(r1)
    bl _restgpr_27
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

// ----------------------------------------------------------------------------
// fn_801C77FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C77FC() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    stfd f30, 0xc0(r1)
    opword 0xF3C100C8
    stfd f29, 0xb0(r1)
    opword 0xF3A100B8
    stfd f28, 0xa0(r1)
    opword 0xF38100A8
    addi r11, r1, 0xa0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r22, r4
    lwz r12, 0x18(r12)
    mr r21, r3
    mr r23, r5
    mr r4, r29
    stw r0, 0x58(r1)
    lwz r31, 0x24(r29)
    stw r0, 0x60(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r21
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r27, r3
    mr r3, r21
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r31)
    mr r26, r3
    lbz r3, 0x146(r31)
    extsb r4, r0
    lbz r0, 0x14e(r31)
    extsb r3, r3
    lfd f3, lbl_804A1B48
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x5c(r1)
    lfs f1, lbl_804A1B40
    cmpwi r0, 0x40
    stw r3, 0x64(r1)
    lfd f2, 0x58(r1)
    lfd f0, 0x60(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r29)
    fsubs f0, f0, f3
    fmuls f30, f1, f2
    fmuls f29, f1, f0
    beq lbl_801C7930
    bge lbl_801C7904
    cmpwi r0, 0x0
lbl_801C7904:
    subi r0, r3, 0x1
    lfd f1, lbl_804A1B48
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fres f28, f0
    opword 0x105CE02A
    opword 0x103C0732
    opword 0x1380107C
    b lbl_801C7934
lbl_801C7930:
    lfs f28, lbl_804A1B44
lbl_801C7934:
    cmpwi r30, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801C794C
    subi r25, r3, 0x1
    li r24, -0x1
lbl_801C794C:
    mr r12, r27
    mr r3, r29
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r19, r3
    stw r0, 0x64(r1)
    fmr f1, f30
    lfd f3, lbl_804A1B48
    fmr f2, f29
    lfd f0, 0x60(r1)
    mr r3, r21
    mr r5, r22
    fsubs f0, f0, f3
    mr r6, r23
    mr r7, r19
    mr r8, r28
    addi r4, r1, 0x30
    fmuls f3, f28, f0
    bl fn_801C6FF0
    mr r12, r26
    mr r3, r29
    mr r4, r19
    add r25, r25, r24
    mtctr r12
    bctrl
    lfd f31, lbl_804A1B48
    mr r30, r3
    b lbl_801C7A80
lbl_801C79C0:
    xoris r0, r25, 0x8000
    lwz r4, 0x30(r1)
    stw r0, 0x5c(r1)
    fmr f1, f30
    lwz r19, 0x34(r1)
    fmr f2, f29
    lfd f0, 0x58(r1)
    mr r3, r21
    lwz r20, 0x38(r1)
    fsubs f0, f0, f31
    lwz r27, 0x3c(r1)
    lwz r12, 0x40(r1)
    mr r5, r22
    lwz r11, 0x44(r1)
    mr r6, r23
    lwz r10, 0x48(r1)
    fmuls f3, f28, f0
    lwz r9, 0x4c(r1)
    mr r7, r30
    lwz r0, 0x50(r1)
    mr r8, r28
    lfs f0, 0x54(r1)
    stw r4, 0x8(r1)
    addi r4, r1, 0x30
    stw r19, 0xc(r1)
    stw r20, 0x10(r1)
    stw r27, 0x14(r1)
    stw r12, 0x18(r1)
    stw r11, 0x1c(r1)
    stw r10, 0x20(r1)
    stw r9, 0x24(r1)
    stw r0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_801C6FF0
    lbz r7, 0x14c(r31)
    mr r3, r21
    lwz r8, 0xd4(r22)
    mr r6, r23
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    mr r30, r3
    add r25, r25, r24
lbl_801C7A80:
    cmpwi r30, 0x0
    bne lbl_801C79C0
    opword 0xE3E100D8
    lfd f31, 0xd0(r1)
    opword 0xE3C100C8
    lfd f30, 0xc0(r1)
    opword 0xE3A100B8
    lfd f29, 0xb0(r1)
    opword 0xE38100A8
    addi r11, r1, 0xa0
    lfd f28, 0xa0(r1)
    bl _restgpr_19
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C7AC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C7AC0() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    addi r11, r1, 0xd0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r22, r4
    lwz r12, 0x18(r12)
    mr r21, r3
    mr r23, r5
    mr r4, r29
    stw r0, 0x80(r1)
    lwz r31, 0x24(r29)
    stw r0, 0x88(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r21
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r27, r3
    mr r3, r21
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r31)
    mr r26, r3
    lbz r3, 0x146(r31)
    extsb r4, r0
    lbz r0, 0x14e(r31)
    extsb r3, r3
    lfd f3, lbl_804A1B48
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x84(r1)
    lfs f1, lbl_804A1B40
    cmpwi r0, 0x40
    stw r3, 0x8c(r1)
    lfd f2, 0x80(r1)
    lfd f0, 0x88(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r29)
    fsubs f0, f0, f3
    fmuls f30, f1, f2
    fmuls f29, f1, f0
    beq lbl_801C7BF0
    bge lbl_801C7BC8
    cmpwi r0, 0x0
lbl_801C7BC8:
    xoris r0, r3, 0x8000
    lfd f1, lbl_804A1B48
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f1
    fres f28, f0
    opword 0x105CE02A
    opword 0x103C0732
    opword 0x1380107C
    b lbl_801C7BF4
lbl_801C7BF0:
    lfs f28, lbl_804A1B44
lbl_801C7BF4:
    cmpwi r30, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801C7C0C
    mr r25, r3
    li r24, -0x1
lbl_801C7C0C:
    mr r12, r27
    mr r3, r29
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r20, r3
    stw r0, 0x8c(r1)
    fmr f1, f30
    lfd f3, lbl_804A1B48
    fmr f2, f29
    lfd f0, 0x88(r1)
    mr r3, r21
    mr r5, r22
    fsubs f0, f0, f3
    mr r6, r23
    mr r7, r20
    mr r8, r28
    addi r4, r1, 0x8
    fmuls f3, f28, f0
    bl fn_801C6FF0
    lwz r19, 0x8(r1)
    mr r12, r26
    lwz r11, 0xc(r1)
    mr r3, r29
    lwz r10, 0x10(r1)
    mr r4, r20
    lwz r9, 0x14(r1)
    add r25, r25, r24
    lwz r8, 0x18(r1)
    lwz r7, 0x1c(r1)
    lwz r6, 0x20(r1)
    lwz r5, 0x24(r1)
    lwz r0, 0x28(r1)
    lfs f0, 0x2c(r1)
    stw r19, 0x58(r1)
    stw r11, 0x5c(r1)
    stw r10, 0x60(r1)
    stw r9, 0x64(r1)
    stw r8, 0x68(r1)
    stw r7, 0x6c(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    stw r0, 0x78(r1)
    stfs f0, 0x7c(r1)
    mtctr r12
    bctrl
    lfd f31, lbl_804A1B48
    mr r30, r3
    b lbl_801C7D90
lbl_801C7CD0:
    xoris r0, r25, 0x8000
    lwz r4, 0x58(r1)
    stw r0, 0x84(r1)
    fmr f1, f30
    lwz r19, 0x5c(r1)
    fmr f2, f29
    lfd f0, 0x80(r1)
    mr r3, r21
    lwz r20, 0x60(r1)
    fsubs f0, f0, f31
    lwz r27, 0x64(r1)
    lwz r12, 0x68(r1)
    mr r5, r22
    lwz r11, 0x6c(r1)
    mr r6, r23
    lwz r10, 0x70(r1)
    fmuls f3, f28, f0
    lwz r9, 0x74(r1)
    mr r7, r30
    lwz r0, 0x78(r1)
    mr r8, r28
    lfs f0, 0x7c(r1)
    stw r4, 0x30(r1)
    addi r4, r1, 0x58
    stw r19, 0x34(r1)
    stw r20, 0x38(r1)
    stw r27, 0x3c(r1)
    stw r12, 0x40(r1)
    stw r11, 0x44(r1)
    stw r10, 0x48(r1)
    stw r9, 0x4c(r1)
    stw r0, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_801C6FF0
    lbz r7, 0x14c(r31)
    mr r3, r21
    lwz r8, 0xd4(r22)
    mr r6, r23
    addi r4, r1, 0x30
    addi r5, r1, 0x58
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    mr r30, r3
    add r25, r25, r24
lbl_801C7D90:
    cmpwi r30, 0x0
    bne lbl_801C7CD0
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1B48
    stw r0, 0x8c(r1)
    mr r3, r21
    mr r6, r23
    addi r4, r1, 0x58
    lfd f0, 0x88(r1)
    addi r5, r1, 0x8
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    stfs f0, 0x2c(r1)
    lbz r7, 0x14c(r31)
    lwz r8, 0xd4(r22)
    bl fn_801C7458
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    addi r11, r1, 0xd0
    lfd f28, 0xd0(r1)
    bl _restgpr_19
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_801C7E08
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C7E08() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    stfd f29, 0xc0(r1)
    opword 0xF3A100C8
    stfd f28, 0xb0(r1)
    opword 0xF38100B8
    addi r11, r1, 0xb0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r22, r4
    lwz r12, 0x18(r12)
    mr r21, r3
    mr r23, r5
    mr r4, r29
    stw r0, 0x68(r1)
    lwz r31, 0x24(r29)
    stw r0, 0x70(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r21
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r27, r3
    mr r3, r21
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r31)
    mr r26, r3
    lbz r3, 0x146(r31)
    extsb r4, r0
    lbz r0, 0x14e(r31)
    extsb r3, r3
    lfd f3, lbl_804A1B48
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x6c(r1)
    lfs f1, lbl_804A1B40
    cmpwi r0, 0x40
    stw r3, 0x74(r1)
    lfd f2, 0x68(r1)
    lfd f0, 0x70(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r29)
    fsubs f0, f0, f3
    fmuls f31, f1, f2
    fmuls f30, f1, f0
    beq lbl_801C7F38
    bge lbl_801C7F10
    cmpwi r0, 0x0
lbl_801C7F10:
    xoris r0, r3, 0x8000
    lfd f1, lbl_804A1B48
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fres f29, f0
    opword 0x105DE82A
    opword 0x103D0772
    opword 0x13A0107C
    b lbl_801C7F3C
lbl_801C7F38:
    lfs f29, lbl_804A1B44
lbl_801C7F3C:
    cmpwi r30, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801C7F54
    mr r25, r3
    li r24, -0x1
lbl_801C7F54:
    mr r12, r27
    mr r3, r29
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r27, r3
    stw r0, 0x74(r1)
    fmr f1, f31
    lfd f3, lbl_804A1B48
    fmr f2, f30
    lfd f0, 0x70(r1)
    mr r3, r21
    mr r5, r22
    fsubs f0, f0, f3
    mr r6, r23
    mr r7, r27
    mr r8, r28
    addi r4, r1, 0x18
    fmuls f3, f29, f0
    bl fn_801C6FF0
    add r25, r25, r24
    lwz r10, 0x18(r1)
    xoris r0, r25, 0x8000
    lwz r9, 0x1c(r1)
    stw r0, 0x6c(r1)
    lwz r8, 0x20(r1)
    lfd f1, lbl_804A1B48
    lfd f0, 0x68(r1)
    lwz r7, 0x24(r1)
    fsubs f0, f0, f1
    lwz r6, 0x28(r1)
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    fmuls f0, f29, f0
    lwz r3, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r5, 0x3c(r29)
    b lbl_801C8038
lbl_801C8014:
    lhz r3, 0x42(r29)
    lwzx r5, r5, r3
    b lbl_801C8024
lbl_801C8020:
    lwzx r5, r5, r3
lbl_801C8024:
    cmpwi r5, 0x0
    beq lbl_801C8038
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801C8020
lbl_801C8038:
    cmpwi r5, 0x0
    beq lbl_801C804C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801C8014
lbl_801C804C:
    opword 0xE01600A4
    addi r4, r1, 0x18
    opword 0xE02500AC
    mr r3, r21
    opword 0xE0640000
    mr r6, r23
    opword 0x10400828
    opword 0xE02580B4
    opword 0xE01680AC
    add r25, r25, r24
    addi r5, r1, 0x40
    opword 0xF0410008
    opword 0x10400828
    opword 0xE0010008
    opword 0x1003002A
    opword 0xE0648008
    opword 0xF0418010
    opword 0xF0040000
    opword 0x1003102A
    opword 0xF0048008
    lbz r7, 0x14c(r31)
    lwz r8, 0xd4(r22)
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r27
    mtctr r12
    bctrl
    lfd f28, lbl_804A1B48
    mr r30, r3
    b lbl_801C8188
lbl_801C80C8:
    xoris r0, r25, 0x8000
    lwz r4, 0x40(r1)
    stw r0, 0x74(r1)
    fmr f1, f31
    lwz r19, 0x44(r1)
    fmr f2, f30
    lfd f0, 0x70(r1)
    mr r3, r21
    lwz r20, 0x48(r1)
    fsubs f0, f0, f28
    lwz r27, 0x4c(r1)
    lwz r12, 0x50(r1)
    mr r5, r22
    lwz r11, 0x54(r1)
    mr r6, r23
    lwz r10, 0x58(r1)
    fmuls f3, f29, f0
    lwz r9, 0x5c(r1)
    mr r7, r30
    lwz r0, 0x60(r1)
    mr r8, r28
    lfs f0, 0x64(r1)
    stw r4, 0x18(r1)
    addi r4, r1, 0x40
    stw r19, 0x1c(r1)
    stw r20, 0x20(r1)
    stw r27, 0x24(r1)
    stw r12, 0x28(r1)
    stw r11, 0x2c(r1)
    stw r10, 0x30(r1)
    stw r9, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_801C6FF0
    lbz r7, 0x14c(r31)
    mr r3, r21
    lwz r8, 0xd4(r22)
    mr r6, r23
    addi r4, r1, 0x18
    addi r5, r1, 0x40
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    mr r30, r3
    add r25, r25, r24
lbl_801C8188:
    cmpwi r30, 0x0
    bne lbl_801C80C8
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    lfd f30, 0xd0(r1)
    opword 0xE3A100C8
    lfd f29, 0xc0(r1)
    opword 0xE38100B8
    addi r11, r1, 0xb0
    lfd f28, 0xb0(r1)
    bl _restgpr_19
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// __a1_32_data_type
// ----------------------------------------------------------------------------
extern "C" asm void __a1_32_data_type() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r31, r1
    lwz r7, 0x0(r4)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r25, 0x24(r7)
    mr r30, r6
    lbz r24, 0x14c(r25)
    cmpwi r24, 0x3
    blt lbl_801C8948
    addi r3, r24, 0x1
    lwz r0, 0x0(r1)
    slwi r3, r3, 3
    neg r22, r3
    clrrwi r22, r22, 3
    stwux r0, r1, r22
    addic. r22, r1, 0x8
    beq lbl_801C8948
    xoris r0, r24, 0x8000
    lis r26, 0x4330
    stw r0, 0xc(r31)
    addi r23, r22, 0x8
    lfs f0, lbl_804A1B44
    li r21, 0x1
    stw r26, 0x8(r31)
    lfd f30, lbl_804A1B48
    lfd f2, 0x8(r31)
    lfs f1, lbl_804A1B68
    fsubs f2, f2, f30
    stfs f0, 0x4(r22)
    lfs f0, lbl_804A1B58
    lfs f31, lbl_804A1B6C
    fdivs f29, f1, f2
    stfs f0, 0x0(r22)
    b lbl_801C82B0
lbl_801C8280:
    xoris r0, r21, 0x8000
    stw r26, 0x8(r31)
    mr r3, r23
    addi r4, r23, 0x4
    stw r0, 0xc(r31)
    lfd f0, 0x8(r31)
    fsubs f0, f0, f30
    fmuls f0, f29, f0
    fmuls f1, f31, f0
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    addi r23, r23, 0x8
    addi r21, r21, 0x1
lbl_801C82B0:
    cmpw r21, r24
    blt lbl_801C8280
    slwi r0, r24, 3
    lfs f1, lbl_804A1B44
    add r3, r22, r0
    lfs f0, lbl_804A1B58
    stfs f1, 0x4(r3)
    stfsx f0, r22, r0
    stw r22, 0xd4(r28)
    lbz r0, 0x14e(r25)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801C8514
    bge lbl_801C82EC
    b lbl_801C82F8
lbl_801C82EC:
    cmpwi r0, 0x3
    bge lbl_801C82F8
    b lbl_801C8730
lbl_801C82F8:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C83F4
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C832C:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C835C
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C835C:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C838C
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C838C:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C83BC
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C83BC:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C83EC
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C83EC:
    addi r4, r4, 0x3
    bdnz lbl_801C832C
lbl_801C83F4:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C77FC
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C8500
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8438:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8468
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8468:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8498
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8498:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C84C8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C84C8:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C84F8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C84F8:
    addi r4, r4, 0x3
    bdnz lbl_801C8438
lbl_801C8500:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C77FC
    b lbl_801C8948
lbl_801C8514:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C8610
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8548:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8578
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8578:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C85A8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C85A8:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C85D8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C85D8:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8608
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8608:
    addi r4, r4, 0x3
    bdnz lbl_801C8548
lbl_801C8610:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7AC0
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C871C
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8654:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8684
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8684:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C86B4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C86B4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C86E4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C86E4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8714
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8714:
    addi r4, r4, 0x3
    bdnz lbl_801C8654
lbl_801C871C:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7AC0
    b lbl_801C8948
lbl_801C8730:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C882C
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8764:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8794
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8794:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C87C4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C87C4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C87F4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C87F4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8824
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8824:
    addi r4, r4, 0x3
    bdnz lbl_801C8764
lbl_801C882C:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7E08
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C8938
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8870:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C88A0
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C88A0:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C88D0
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C88D0:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8900
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8900:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8930
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8930:
    addi r4, r4, 0x3
    bdnz lbl_801C8870
lbl_801C8938:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7E08
lbl_801C8948:
    mr r10, r31
    opword 0xE3EA0068
    lfd f31, 0x60(r31)
    opword 0xE3CA0058
    lfd f30, 0x50(r31)
    opword 0xE3AA0048
    addi r11, r10, 0x40
    lfd f29, 0x40(r31)
    bl _restgpr_21
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C8980
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C8980() {
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    stfd f31, 0x2a0(r1)
    opword 0xF3E102A8
    addi r11, r1, 0x2a0
    bl _savegpr_24
    lhz r30, 0x50(r5)
    mr r26, r3
    lwz r3, 0x24(r5)
    mr r27, r4
    cmpwi r30, 0x0
    mr r28, r5
    addi r31, r3, 0x9c
    beq lbl_801C91EC
    lfs f1, lbl_804A1B58
    lfs f0, 0x88(r4)
    lwz r29, 0x0(r4)
    lwz r25, 0x4(r4)
    fcmpu cr0, f1, f0
    lwz r12, 0x8(r4)
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r29, 0x170(r1)
    stw r25, 0x174(r1)
    stw r12, 0x178(r1)
    stw r11, 0x17c(r1)
    stw r10, 0x180(r1)
    stw r9, 0x184(r1)
    stw r8, 0x188(r1)
    stw r7, 0x18c(r1)
    stw r6, 0x190(r1)
    stw r5, 0x194(r1)
    stw r3, 0x198(r1)
    stw r0, 0x19c(r1)
    beq lbl_801C8B38
    addi r3, r1, 0xc0
    bl GXGetProjectionv
    lfs f0, 0xc0(r1)
    fctiwz f0, f0
    stfd f0, 0x278(r1)
    lwz r0, 0x27c(r1)
    cmpwi r0, 0x1
    beq lbl_801C8B28
    bge lbl_801C8B38
    cmpwi r0, 0x0
    bge lbl_801C8A5C
    b lbl_801C8B38
lbl_801C8A5C:
    mr r3, r27
    addi r4, r27, 0x8c
    addi r5, r1, 0x38
    bl fn_8030D7E0
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C8B14
    lfs f1, 0x40(r1)
    lfs f0, lbl_804A1B58
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C8AD4
    lfs f3, 0x88(r27)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x19c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x17c(r1)
    lfs f2, 0x18c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x17c(r1)
    stfs f2, 0x18c(r1)
    stfs f0, 0x19c(r1)
    b lbl_801C8B38
lbl_801C8AD4:
    lfs f3, 0x88(r27)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x19c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x17c(r1)
    lfs f2, 0x18c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x17c(r1)
    stfs f2, 0x18c(r1)
    stfs f0, 0x19c(r1)
    b lbl_801C8B38
lbl_801C8B14:
    lfs f1, 0x19c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x19c(r1)
    b lbl_801C8B38
lbl_801C8B28:
    lfs f1, 0x19c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x19c(r1)
lbl_801C8B38:
    mr r5, r28
    addi r3, r1, 0x1a0
    addi r4, r1, 0x170
    bl fn_801C0E98
    lfs f0, 0x1c8(r1)
    li r0, 0x0
    lfs f1, 0x1b8(r1)
    addi r3, r1, 0x25c
    lfs f2, 0x1a8(r1)
    addi r4, r1, 0x208
    stw r0, 0x274(r1)
    addi r5, r1, 0x2c
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r4, r26
    mr r5, r31
    addi r3, r1, 0x98
    addi r6, r1, 0x1a0
    bl fn_801C920C
    lwz r3, 0x3c(r28)
    lfs f1, lbl_804A1B44
    b lbl_801C8BC8
lbl_801C8B98:
    lfs f0, 0xcc(r3)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_801C8BD0
    lfs f0, 0x98(r1)
    stfs f0, 0xcc(r3)
    lfs f0, 0x9c(r1)
    stfs f0, 0xd0(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0xd4(r3)
    lhz r0, 0x42(r28)
    lwzx r3, r3, r0
lbl_801C8BC8:
    cmpwi r3, 0x0
    bne lbl_801C8B98
lbl_801C8BD0:
    lbz r4, 0xad(r31)
    lhz r5, 0x0(r31)
    subi r3, r4, 0x2
    subfic r0, r4, 0x2
    nor r0, r3, r0
    lwz r25, 0x0(r27)
    extrwi r3, r5, 1, 20
    lfs f1, lbl_804A1B58
    srawi r0, r0, 31
    lfs f0, 0x88(r27)
    lwz r12, 0x4(r27)
    rlwinm r29, r0, 0, 28, 28
    neg r3, r3
    lwz r11, 0x8(r27)
    lwz r10, 0xc(r27)
    rlwimi r29, r3, 0, 27, 27
    lwz r9, 0x10(r27)
    fcmpu cr0, f1, f0
    lwz r8, 0x14(r27)
    lwz r7, 0x18(r27)
    lwz r6, 0x1c(r27)
    lwz r5, 0x20(r27)
    lwz r4, 0x24(r27)
    lwz r3, 0x28(r27)
    lwz r0, 0x2c(r27)
    stw r25, 0x140(r1)
    stw r12, 0x144(r1)
    stw r11, 0x148(r1)
    stw r10, 0x14c(r1)
    stw r9, 0x150(r1)
    stw r8, 0x154(r1)
    stw r7, 0x158(r1)
    stw r6, 0x15c(r1)
    stw r5, 0x160(r1)
    stw r4, 0x164(r1)
    stw r3, 0x168(r1)
    stw r0, 0x16c(r1)
    beq lbl_801C8D74
    addi r3, r1, 0xa4
    bl GXGetProjectionv
    lfs f0, 0xa4(r1)
    fctiwz f0, f0
    stfd f0, 0x278(r1)
    lwz r0, 0x27c(r1)
    cmpwi r0, 0x1
    beq lbl_801C8D64
    bge lbl_801C8D74
    cmpwi r0, 0x0
    bge lbl_801C8C98
    b lbl_801C8D74
lbl_801C8C98:
    mr r3, r27
    addi r4, r27, 0x8c
    addi r5, r1, 0x20
    bl fn_8030D7E0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C8D50
    lfs f1, 0x28(r1)
    lfs f0, lbl_804A1B58
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C8D10
    lfs f3, 0x88(r27)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801C8D74
lbl_801C8D10:
    lfs f3, 0x88(r27)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801C8D74
lbl_801C8D50:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
    b lbl_801C8D74
lbl_801C8D64:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
lbl_801C8D74:
    addi r3, r1, 0x140
    addi r4, r1, 0x1d8
    mr r5, r3
    bl PSMTXConcat
    rlwinm. r24, r29, 0, 28, 28
    beq lbl_801C8DE8
    addi r3, r1, 0x140
    addi r4, r1, 0x110
    bl PSMTXInverse
    cmpwi r3, 0x0
    beq lbl_801C8DC8
    lfs f2, 0x138(r1)
    lfs f1, 0x128(r1)
    lfs f0, 0x118(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f2, 0x88(r1)
    stfs f0, 0x268(r1)
    stfs f1, 0x26c(r1)
    stfs f2, 0x270(r1)
    b lbl_801C8DE8
lbl_801C8DC8:
    lfs f1, lbl_804A1B58
    lfs f0, lbl_804A1B44
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f1, 0x268(r1)
    stfs f1, 0x26c(r1)
    stfs f0, 0x270(r1)
lbl_801C8DE8:
    lbz r0, 0xb2(r31)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    bne lbl_801C8E00
    cmpwi r30, 0x3
    blt lbl_801C8E10
lbl_801C8E00:
    cmpwi r0, 0x0
    bne lbl_801C9020
    cmpwi r30, 0x2
    bge lbl_801C9020
lbl_801C8E10:
    lwz r12, 0x0(r26)
    mr r3, r26
    lhz r0, 0x0(r31)
    mr r4, r28
    lwz r12, 0x18(r12)
    rlwinm r25, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r27, r3
    mr r3, r26
    mr r4, r25
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r29, r3
    mr r3, r26
    mr r4, r25
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r12, r29
    mr r26, r3
    mr r3, r28
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_801C91EC
    lfs f31, lbl_804A1B50
    addi r25, r1, 0x8c
    b lbl_801C9014
lbl_801C8E94:
    mr r12, r27
    mr r5, r29
    addi r3, r1, 0x8c
    addi r4, r1, 0x1a0
    mtctr r12
    bctrl
    cmpwi r24, 0x0
    bne lbl_801C8EC8
    mr r3, r25
    addi r4, r29, 0xcc
    addi r5, r1, 0x8
    bl fn_8030DEEC
    b lbl_801C8ED8
lbl_801C8EC8:
    mr r3, r25
    addi r4, r1, 0x268
    addi r5, r1, 0x8
    bl fn_8030DEEC
lbl_801C8ED8:
    opword 0xE021000C
    opword 0xE0018008
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    bge lbl_801C8EFC
    li r0, 0x0
    b lbl_801C8F1C
lbl_801C8EFC:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010008
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018010
    opword 0xF0410008
    opword 0x10400058
    opword 0xF0418010
lbl_801C8F1C:
    cmpwi r0, 0x0
    bne lbl_801C8F3C
    lfs f2, 0x25c(r1)
    lfs f1, 0x260(r1)
    lfs f0, 0x264(r1)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
lbl_801C8F3C:
    mr r4, r25
    addi r3, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8030DEEC
    opword 0xE0210018
    opword 0xE0018014
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    blt lbl_801C8F84
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010014
    opword 0x10400058
    opword 0xE001801C
    opword 0xF0410014
    opword 0x10400058
    opword 0xF041801C
lbl_801C8F84:
    lfs f0, 0x14(r1)
    mr r12, r26
    mr r3, r28
    mr r4, r29
    stfs f0, 0xcc(r29)
    lfs f0, 0x18(r1)
    stfs f0, 0xd0(r29)
    lfs f0, 0x1c(r1)
    stfs f0, 0xd4(r29)
    lfs f0, 0xb4(r29)
    lfs f1, 0x1c(r1)
    lfs f2, 0x94(r1)
    lfs f3, 0x10(r1)
    lfs f4, 0xb0(r29)
    lfs f5, 0x18(r1)
    lfs f6, 0x90(r1)
    lfs f7, 0xc(r1)
    lfs f8, 0xac(r29)
    lfs f9, 0x14(r1)
    lfs f10, 0x8c(r1)
    lfs f11, 0x8(r1)
    stfs f10, 0xe4(r1)
    stfs f11, 0xe0(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f6, 0xf4(r1)
    stfs f5, 0xf8(r1)
    stfs f4, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f2, 0x104(r1)
    stfs f1, 0x108(r1)
    stfs f0, 0x10c(r1)
    mtctr r12
    bctrl
    mr r29, r3
lbl_801C9014:
    cmpwi r29, 0x0
    bne lbl_801C8E94
    b lbl_801C91EC
lbl_801C9020:
    lwz r5, 0x24(r28)
    mr r3, r26
    mr r4, r28
    mr r6, r27
    addi r5, r5, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r26)
    cmpwi r0, 0x0
    beq lbl_801C9070
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801C9070:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    addi r3, r1, 0x140
    li r4, 0x0
    bl GXLoadPosMtxImm
    lbz r5, 0xd0(r26)
    mr r3, r26
    lwz r12, 0x0(r26)
    neg r4, r5
    lhz r0, 0x0(r31)
    or r4, r4, r5
    lwz r12, 0x10(r12)
    srwi r5, r4, 31
    rlwinm r4, r0, 0, 20, 20
    or r29, r29, r5
    mtctr r12
    bctrl
    mr r12, r3
    mr r3, r28
    mtctr r12
    bctrl
    mr r24, r3
    mr r3, r26
    mr r4, r24
    mr r5, r31
    mr r6, r27
    li r7, 0x1
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0xad(r31)
    cmpwi r0, 0x3
    beq lbl_801C91A8
    lfs f1, lbl_804A1B58
    mr r3, r26
    lfs f2, lbl_804A1B70
    mr r5, r29
    lfs f0, lbl_804A1B44
    addi r4, r1, 0x1a0
    stfs f2, 0x5c(r1)
    addi r6, r1, 0x68
    addi r7, r1, 0x5c
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    bl fn_801C6834
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C91EC
    lfs f2, lbl_804A1B58
    mr r3, r26
    lfs f1, lbl_804A1B44
    mr r5, r29
    lfs f0, lbl_804A1B70
    addi r4, r1, 0x1a0
    stfs f2, 0x44(r1)
    addi r6, r1, 0x50
    addi r7, r1, 0x44
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0x58(r1)
    bl fn_801C6834
    b lbl_801C91EC
lbl_801C91A8:
    lhz r0, 0x0(r31)
    li r6, 0x0
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801C91D8
    lwz r3, 0xc8(r24)
    lwz r3, 0x20(r3)
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    lbz r0, -0x3f9c(r3)
    cmpwi r0, 0x0
    bne lbl_801C91DC
lbl_801C91D8:
    li r6, 0x1
lbl_801C91DC:
    mr r3, r26
    mr r5, r29
    addi r4, r1, 0x1a0
    bl __a1_32_data_type
lbl_801C91EC:
    opword 0xE3E102A8
    addi r11, r1, 0x2a0
    lfd f31, 0x2a0(r1)
    bl _restgpr_24
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

// ----------------------------------------------------------------------------
// fn_801C920C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C920C() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lbz r0, 0xae(r5)
    stw r31, 0x7c(r1)
    mr r31, r6
    cmplwi r0, 0x7
    stw r30, 0x78(r1)
    mr r30, r3
    bne lbl_801C9374
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801C9284
    lis r4, jumptable_80360944@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80360944@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lfs f2, 0x88(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f1, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801C942C
lbl_801C9284:
    lfs f2, 0x8c(r6)
    lfs f1, 0x7c(r6)
    lfs f0, 0x6c(r6)
    stfs f1, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801C942C
    lfs f2, 0x90(r6)
    lfs f1, 0x80(r6)
    lfs f0, 0x70(r6)
    stfs f1, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f2, 0x4c(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801C942C
    lfs f3, 0x7c(r6)
    lfs f2, 0x6c(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f2, 0x14(r1)
    lfs f4, 0x8c(r6)
    stfs f3, 0x18(r1)
    lfs f2, 0x88(r6)
    lfs f5, 0x80(r6)
    lfs f3, 0x70(r6)
    lfs f6, 0x90(r6)
    stfs f0, 0x20(r1)
    opword 0xE0E10014
    stfs f1, 0x24(r1)
    opword 0xE0010020
    stfs f4, 0x1c(r1)
    opword 0x1000382A
    stfs f2, 0x28(r1)
    opword 0xE0E1801C
    opword 0xF001002C
    opword 0xE0018028
    stfs f3, 0x8(r1)
    opword 0x1000382A
    opword 0xE021002C
    stfs f5, 0xc(r1)
    opword 0xE0410008
    stfs f6, 0x10(r1)
    opword 0x1021102A
    opword 0xE0418010
    opword 0xF0018034
    opword 0xF0210038
    opword 0x1020102A
    lfs f2, 0x38(r1)
    opword 0xF0218040
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801C942C
lbl_801C9374:
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801C93C0
    lis r4, jumptable_803608E0@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_803608E0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r5, lbl_803E6550@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6550@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801C942C
lbl_801C93C0:
    lfs f2, 0x98(r6)
    lfs f1, 0x9c(r6)
    lfs f0, 0xa0(r6)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801C9494
    lis r5, lbl_803E6568@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801C942C
    lfs f0, lbl_804A1B44
    addi r4, r6, 0x8
    addi r5, r1, 0x68
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801C942C:
    opword 0xE03E0004
    opword 0xE05E8000
    opword 0x10210072
    lfs f0, lbl_804A1B50
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9454
    li r0, 0x0
    b lbl_801C9474
lbl_801C9454:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C9474:
    cmpwi r0, 0x0
    bne lbl_801C9494
    lfs f2, 0x98(r31)
    lfs f1, 0x9c(r31)
    lfs f0, 0xa0(r31)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
lbl_801C9494:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801C94AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C94AC() {
    nofralloc
    lwz r4, 0x24(r4)
    lbz r0, 0x14a(r4)
    cmplwi r0, 0x7
    bgt lbl_801C9554
    lis r3, jumptable_803609A8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_803609A8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
    lis r3, fn_801C2DC8@ha
    addi r3, r3, fn_801C2DC8@l
    blr
    lis r3, fn_801C2E84@ha
    addi r3, r3, fn_801C2E84@l
    blr
    lis r3, fn_801C9560@ha
    addi r3, r3, fn_801C9560@l
    blr
    lis r3, fn_801C53B8@ha
    addi r3, r3, fn_801C53B8@l
    blr
    lbz r0, 0x14e(r4)
    clrlwi r0, r0, 29
    cmpwi r0, 0x2
    beq lbl_801C953C
    bge lbl_801C9548
    cmpwi r0, 0x1
    bge lbl_801C9530
    b lbl_801C9548
lbl_801C9530:
    lis r3, fn_801C98E0@ha
    addi r3, r3, fn_801C98E0@l
    blr
lbl_801C953C:
    lis r3, fn_801C9B90@ha
    addi r3, r3, fn_801C9B90@l
    blr
lbl_801C9548:
    lis r3, fn_801C9678@ha
    addi r3, r3, fn_801C9678@l
    blr
lbl_801C9554:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801C9560
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C9560() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x0(r4)
    lhz r7, 0x42(r6)
    add r6, r5, r7
    lwz r6, 0x4(r6)
    b lbl_801C9598
lbl_801C9590:
    add r6, r6, r7
    lwz r6, 0x4(r6)
lbl_801C9598:
    cmpwi r6, 0x0
    beq lbl_801C95AC
    lwz r0, 0xc(r6)
    cmpwi r0, 0x1
    bne lbl_801C9590
lbl_801C95AC:
    cmpwi r6, 0x0
    beq lbl_801C95D8
    opword 0xE02500AC
    opword 0xE00600AC
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00680B4
    opword 0x10010028
    opword 0xF0038008
    b lbl_801C95F8
lbl_801C95D8:
    opword 0xE02500AC
    opword 0xE00400A4
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00480AC
    opword 0x10010028
    opword 0xF0038008
lbl_801C95F8:
    opword 0xE0230004
    opword 0xE0438000
    opword 0x10210072
    lfs f0, lbl_804A1B50
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9620
    li r0, 0x0
    b lbl_801C9640
lbl_801C9620:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C9640:
    cmpwi r0, 0x0
    bne lbl_801C9660
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C9660:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C9678
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C9678() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801C96B4
lbl_801C96B0:
    lwzx r4, r4, r6
lbl_801C96B4:
    cmpwi r4, 0x0
    beq lbl_801C96C8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C96B0
lbl_801C96C8:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801C96DC
lbl_801C96D4:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801C96DC:
    cmpwi r31, 0x0
    beq lbl_801C96F0
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801C96D4
lbl_801C96F0:
    lfs f0, lbl_804A1B58
    cmpwi r4, 0x0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_801C9794
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9750
    li r0, 0x0
    b lbl_801C9770
lbl_801C9750:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801C9770:
    cmpwi r0, 0x0
    bne lbl_801C9794
    lfs f0, lbl_804A1B58
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801C9794:
    lfs f0, lbl_804A1B58
    cmpwi r31, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C9838
    opword 0xE07F00AC
    opword 0xE05E00AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE07F80B4
    opword 0xE05E80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C97F4
    li r0, 0x0
    b lbl_801C9814
lbl_801C97F4:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C9814:
    cmpwi r0, 0x0
    bne lbl_801C9838
    lfs f0, lbl_804A1B58
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801C9838:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9880
    li r0, 0x0
    b lbl_801C98A0
lbl_801C9880:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801C98A0:
    cmpwi r0, 0x0
    bne lbl_801C98C0
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801C98C0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C98E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C98E0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r6, 0x0(r4)
    lhz r4, 0x42(r6)
    lwzx r7, r5, r4
    b lbl_801C991C
lbl_801C9918:
    lwzx r7, r7, r4
lbl_801C991C:
    cmpwi r7, 0x0
    beq lbl_801C9930
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801C9918
lbl_801C9930:
    cmpwi r7, 0x0
    bne lbl_801C9978
    lwz r7, 0x3c(r6)
    b lbl_801C9964
lbl_801C9940:
    lhz r3, 0x42(r6)
    lwzx r7, r7, r3
    b lbl_801C9950
lbl_801C994C:
    lwzx r7, r7, r3
lbl_801C9950:
    cmpwi r7, 0x0
    beq lbl_801C9964
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801C994C
lbl_801C9964:
    cmpwi r7, 0x0
    beq lbl_801C9978
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801C9940
lbl_801C9978:
    add r3, r5, r4
    lwz r28, 0x4(r3)
    b lbl_801C998C
lbl_801C9984:
    add r3, r28, r4
    lwz r28, 0x4(r3)
lbl_801C998C:
    cmpwi r28, 0x0
    beq lbl_801C99A0
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801C9984
lbl_801C99A0:
    cmpwi r28, 0x0
    bne lbl_801C99D0
    lwz r28, 0x38(r6)
    b lbl_801C99BC
lbl_801C99B0:
    lhz r0, 0x42(r6)
    add r3, r28, r0
    lwz r28, 0x4(r3)
lbl_801C99BC:
    cmpwi r28, 0x0
    beq lbl_801C99D0
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801C99B0
lbl_801C99D0:
    opword 0xE06700AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE06780B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9A18
    li r0, 0x0
    b lbl_801C9A38
lbl_801C9A18:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801C9A38:
    cmpwi r0, 0x0
    bne lbl_801C9A5C
    lfs f0, lbl_804A1B58
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801C9A5C:
    opword 0xE07C00AC
    opword 0xE05F00AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE07C80B4
    opword 0xE05F80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9AA4
    li r0, 0x0
    b lbl_801C9AC4
lbl_801C9AA4:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C9AC4:
    cmpwi r0, 0x0
    bne lbl_801C9AE8
    lfs f0, lbl_804A1B58
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801C9AE8:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03D0000
    opword 0x10231028
    opword 0xE05D8000
    opword 0xF03D8008
    opword 0xE03D0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9B30
    li r0, 0x0
    b lbl_801C9B50
lbl_801C9B30:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05D0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05D8008
    opword 0xF01D0000
    opword 0x10020058
    opword 0xF01D8008
lbl_801C9B50:
    cmpwi r0, 0x0
    bne lbl_801C9B70
    lfs f0, 0x98(r30)
    stfs f0, 0x0(r29)
    lfs f0, 0x9c(r30)
    stfs f0, 0x4(r29)
    lfs f0, 0xa0(r30)
    stfs f0, 0x8(r29)
lbl_801C9B70:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801C9B90
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C9B90() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801C9BCC
lbl_801C9BC8:
    lwzx r4, r4, r6
lbl_801C9BCC:
    cmpwi r4, 0x0
    beq lbl_801C9BE0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C9BC8
lbl_801C9BE0:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801C9BF4
lbl_801C9BEC:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801C9BF4:
    cmpwi r31, 0x0
    beq lbl_801C9C08
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801C9BEC
lbl_801C9C08:
    lfs f0, lbl_804A1B58
    cmpwi r4, 0x0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    beq lbl_801C9C7C
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF0210014
    opword 0x10231028
    opword 0xE0418014
    opword 0xF021801C
    opword 0xE0210018
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801C9C7C
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410014
    opword 0x10020058
    opword 0xE041801C
    opword 0xF0010014
    opword 0x10020058
    opword 0xF001801C
lbl_801C9C7C:
    cmpwi r31, 0x0
    beq lbl_801C9CA8
    opword 0xE05F00AC
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05F80B4
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
    b lbl_801C9CC8
lbl_801C9CA8:
    opword 0xE05D00A4
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05D80AC
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
lbl_801C9CC8:
    opword 0xE021000C
    opword 0xE0418008
    opword 0x10210072
    lfs f0, lbl_804A1B50
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801C9D04
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410008
    opword 0x10020058
    opword 0xE0418010
    opword 0xF0010008
    opword 0x10020058
    opword 0xF0018010
lbl_801C9D04:
    opword 0xE0610014
    opword 0xE0410008
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE061801C
    opword 0xE0418010
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9D4C
    li r0, 0x0
    b lbl_801C9D6C
lbl_801C9D4C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801C9D6C:
    cmpwi r0, 0x0
    bne lbl_801C9D8C
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801C9D8C:
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
// fn_801C9DAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C9DAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BEE9C
    lis r4, lbl_80360AD0@ha
    mr r3, r31
    addi r4, r4, lbl_80360AD0@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C9DE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C9DE8() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    stfd f30, 0x110(r1)
    opword 0xF3C10118
    stfd f29, 0x100(r1)
    opword 0xF3A10108
    addi r11, r1, 0x100
    bl _savegpr_25
    mr r26, r5
    mr r27, r7
    mr r25, r4
    mr r12, r8
    fmr f30, f1
    mr r31, r6
    fmr f31, f2
    mr r28, r9
    mr r29, r10
    mr r4, r26
    mr r5, r27
    addi r3, r1, 0x34
    lwz r30, 0x138(r1)
    mtctr r12
    bctrl
    rlwinm. r0, r31, 0, 28, 28
    addi r31, r1, 0x34
    bne lbl_801C9E70
    mr r3, r31
    addi r4, r27, 0xcc
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    b lbl_801C9E80
lbl_801C9E70:
    mr r3, r31
    addi r4, r26, 0xc8
    addi r5, r1, 0x1c
    bl fn_8030DEEC
lbl_801C9E80:
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C9EA8
    li r0, 0x0
    b lbl_801C9EC8
lbl_801C9EA8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801C9EC8:
    cmpwi r0, 0x0
    bne lbl_801C9EE8
    lfs f0, 0xbc(r26)
    stfs f0, 0x1c(r1)
    lfs f0, 0xc0(r26)
    stfs f0, 0x20(r1)
    lfs f0, 0xc4(r26)
    stfs f0, 0x24(r1)
lbl_801C9EE8:
    mr r4, r31
    addi r3, r1, 0x1c
    addi r5, r1, 0x28
    bl fn_8030DEEC
    opword 0xE041002C
    opword 0xE0218028
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801C9F34
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010028
    opword 0x10400058
    opword 0xE0018030
    opword 0xF0410028
    opword 0x10400058
    opword 0xF0418030
lbl_801C9F34:
    lfs f0, 0x28(r1)
    lfs f1, 0x8(r28)
    stfs f0, 0xcc(r27)
    lfs f4, 0x4(r28)
    lfs f0, 0x2c(r1)
    lfs f8, 0x0(r28)
    stfs f0, 0xd0(r27)
    lfs f0, 0x30(r1)
    stfs f0, 0xd4(r27)
    lfs f0, 0x30(r1)
    lfs f2, 0x3c(r1)
    lfs f3, 0x24(r1)
    lfs f5, 0x2c(r1)
    lfs f6, 0x38(r1)
    lfs f7, 0x20(r1)
    lfs f9, 0x28(r1)
    lfs f10, 0x34(r1)
    lfs f11, 0x1c(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x70(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f1, 0x9c(r1)
    lbz r3, 0x9a(r27)
    lfs f3, 0x40(r27)
    lfs f1, 0x44(r27)
    cmpwi r3, 0x0
    lfs f0, 0x48(r27)
    stfs f3, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    beq lbl_801C9FF8
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lfd f2, lbl_804A1B88
    stw r0, 0xd0(r1)
    lfs f0, lbl_804A1B7C
    lfd f1, 0xd0(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x10(r1)
lbl_801C9FF8:
    lbz r3, 0x9b(r27)
    cmpwi r3, 0x0
    beq lbl_801CA030
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xd0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xd0(r1)
    lfs f0, 0x14(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x14(r1)
lbl_801CA030:
    lbz r3, 0x9c(r27)
    cmpwi r3, 0x0
    beq lbl_801CA068
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xd0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xd0(r1)
    lfs f0, 0x18(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x18(r1)
lbl_801CA068:
    lwz r5, 0xc8(r27)
    addi r3, r1, 0xc
    lfs f1, 0x14(r1)
    addi r4, r1, 0x8
    lfs f0, 0x64(r5)
    lfs f2, 0x30(r27)
    fadds f1, f1, f0
    lfs f0, 0x38(r27)
    lfs f4, 0x10(r1)
    fmuls f5, f2, f0
    lfs f3, 0x60(r5)
    lfs f0, 0x58(r5)
    fadds f4, f4, f3
    lfs f3, 0x18(r1)
    lfs f2, 0x68(r5)
    fmuls f29, f5, f0
    stfs f1, 0x14(r1)
    fadds f0, f3, f2
    stfs f4, 0x10(r1)
    stfs f0, 0x18(r1)
    bl fn_801B9C64
    lfs f1, 0x8(r1)
    addi r3, r1, 0x70
    lfs f0, 0xc(r1)
    addi r4, r1, 0x40
    fmuls f5, f1, f29
    lfs f1, lbl_804A1B80
    fmuls f4, f0, f29
    lfs f0, lbl_804A1B84
    stfs f1, 0x44(r1)
    addi r5, r1, 0xa0
    fneg f3, f4
    stfs f5, 0x8(r1)
    fmuls f2, f5, f30
    stfs f4, 0xc(r1)
    fmuls f6, f3, f30
    fsubs f2, f30, f2
    stfs f5, 0x40(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f6, 0x6c(r1)
    bl PSMTXConcat
    mr r4, r29
    mr r5, r25
    addi r3, r1, 0xa0
    bl fn_8030D7E0
    mr r4, r30
    addi r3, r1, 0xa0
    addi r5, r25, 0xc
    bl fn_8030D7E0
    stfs f31, 0x18(r25)
    opword 0xE3E10128
    lfd f31, 0x120(r1)
    opword 0xE3C10118
    lfd f30, 0x110(r1)
    opword 0xE3A10108
    lfd f29, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// fn_801CA180
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CA180() {
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
    stfd f28, 0x110(r1)
    opword 0xF3810118
    stfd f27, 0x100(r1)
    opword 0xF3610108
    mr r12, r8
    fmr f28, f1
    addi r3, r1, 0x40
    stw r31, 0xfc(r1)
    fmr f29, f2
    fmr f30, f3
    mr r31, r6
    stw r30, 0xf8(r1)
    mr r30, r7
    stw r29, 0xf4(r1)
    mr r29, r5
    mr r5, r30
    stw r28, 0xf0(r1)
    mr r28, r4
    mr r4, r29
    mtctr r12
    bctrl
    rlwinm. r0, r31, 0, 28, 28
    addi r31, r1, 0x40
    bne lbl_801CA218
    mr r3, r31
    addi r4, r30, 0xcc
    addi r5, r1, 0x10
    bl fn_8030DEEC
    b lbl_801CA228
lbl_801CA218:
    mr r3, r31
    addi r4, r29, 0xc8
    addi r5, r1, 0x10
    bl fn_8030DEEC
lbl_801CA228:
    opword 0xE0410014
    opword 0xE0218010
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801CA250
    li r0, 0x0
    b lbl_801CA270
lbl_801CA250:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010010
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018018
    opword 0xF0410010
    opword 0x10400058
    opword 0xF0418018
lbl_801CA270:
    cmpwi r0, 0x0
    bne lbl_801CA290
    lfs f0, 0xbc(r29)
    stfs f0, 0x10(r1)
    lfs f0, 0xc0(r29)
    stfs f0, 0x14(r1)
    lfs f0, 0xc4(r29)
    stfs f0, 0x18(r1)
lbl_801CA290:
    mr r4, r31
    addi r3, r1, 0x10
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801CA2DC
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801CA2DC:
    lfs f0, 0x1c(r1)
    lfs f1, 0xb4(r30)
    stfs f0, 0xcc(r30)
    lfs f4, 0xb0(r30)
    lfs f0, 0x20(r1)
    lfs f8, 0xac(r30)
    stfs f0, 0xd0(r30)
    lfs f0, 0x24(r1)
    stfs f0, 0xd4(r30)
    lfs f0, 0x24(r1)
    lfs f2, 0x48(r1)
    lfs f3, 0x18(r1)
    lfs f5, 0x20(r1)
    lfs f6, 0x44(r1)
    lfs f7, 0x14(r1)
    lfs f9, 0x1c(r1)
    lfs f10, 0x40(r1)
    lfs f11, 0x10(r1)
    stfs f10, 0xb4(r1)
    stfs f11, 0xb0(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f1, 0xdc(r1)
    lbz r3, 0x9a(r30)
    lfs f3, 0x40(r30)
    lfs f1, 0x44(r30)
    cmpwi r3, 0x0
    lfs f0, 0x48(r30)
    stfs f3, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801CA3A0
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f2, lbl_804A1B88
    stw r0, 0xe0(r1)
    lfs f0, lbl_804A1B7C
    lfd f1, 0xe0(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x34(r1)
lbl_801CA3A0:
    lbz r3, 0x9b(r30)
    cmpwi r3, 0x0
    beq lbl_801CA3D8
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xe0(r1)
    lfs f0, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x38(r1)
lbl_801CA3D8:
    lbz r3, 0x9c(r30)
    cmpwi r3, 0x0
    beq lbl_801CA410
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xe0(r1)
    lfs f0, 0x3c(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x3c(r1)
lbl_801CA410:
    lwz r4, 0xc8(r30)
    lfs f3, 0x34(r1)
    lfs f0, 0x60(r4)
    lfs f2, 0x30(r30)
    fadds f6, f3, f0
    lfs f1, 0x38(r30)
    lwz r3, 0x24(r4)
    lfs f4, 0x38(r1)
    fmuls f7, f2, f1
    lfs f3, 0x64(r4)
    lfs f0, 0x58(r4)
    fadds f5, f4, f3
    lhz r0, 0x9c(r3)
    lfs f4, 0x3c(r1)
    fmuls f31, f7, f0
    lfs f3, 0x68(r4)
    rlwinm r0, r0, 0, 17, 18
    fadds f0, f4, f3
    cmpwi r0, 0x4000
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801CA488
    bge lbl_801CA47C
    cmpwi r0, 0x2000
    beq lbl_801CA494
    b lbl_801CA4A4
lbl_801CA47C:
    cmpwi r0, 0x6000
    beq lbl_801CA4B0
    b lbl_801CA4A4
lbl_801CA488:
    lfs f0, 0x34(r30)
    fmuls f7, f0, f1
    b lbl_801CA4B0
lbl_801CA494:
    lfs f0, 0x3c(r30)
    fmuls f7, f2, f0
    b lbl_801CA4B0
    b lbl_801CA4B0
lbl_801CA4A4:
    lfs f1, 0x34(r30)
    lfs f0, 0x3c(r30)
    fmuls f7, f1, f0
lbl_801CA4B0:
    lfs f0, 0x5c(r4)
    addi r3, r1, 0xc
    lfs f1, 0x38(r1)
    addi r4, r1, 0x8
    fmuls f27, f7, f0
    bl fn_801B9C64
    lfs f3, 0x8(r1)
    addi r3, r1, 0xb0
    lfs f7, 0xc(r1)
    addi r4, r1, 0x80
    fmuls f2, f3, f31
    lfs f1, lbl_804A1B80
    fmuls f8, f7, f31
    lfs f0, lbl_804A1B84
    fmuls f6, f3, f27
    stfs f1, 0x84(r1)
    fmuls f5, f28, f8
    stfs f2, 0x80(r1)
    fmuls f4, f28, f2
    addi r5, r1, 0x50
    fneg f2, f7
    stfs f0, 0x94(r1)
    fmuls f3, f7, f27
    stfs f1, 0x90(r1)
    fmuls f9, f2, f27
    fsubs f7, f29, f5
    stfs f1, 0x98(r1)
    fmuls f5, f29, f6
    fmuls f0, f29, f3
    stfs f1, 0x9c(r1)
    fsubs f2, f28, f4
    fsubs f3, f7, f5
    stfs f9, 0x88(r1)
    fadds f0, f2, f0
    stfs f8, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0xa8(r1)
    stfs f3, 0xac(r1)
    bl PSMTXConcat
    lfs f2, 0x7c(r1)
    lis r5, lbl_803E6550@ha
    lfs f1, 0x6c(r1)
    addi r3, r28, 0xc
    lfs f0, 0x5c(r1)
    addi r4, r1, 0x50
    stfs f1, 0x2c(r1)
    addi r5, r5, lbl_803E6550@l
    stfs f0, 0x28(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x0(r28)
    stfs f1, 0x4(r28)
    stfs f2, 0x8(r28)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lis r5, lbl_803E6568@ha
    addi r3, r28, 0x18
    addi r4, r1, 0x50
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    stfs f30, 0x24(r28)
    opword 0xE3E10148
    lfd f31, 0x140(r1)
    opword 0xE3C10138
    lfd f30, 0x130(r1)
    opword 0xE3A10128
    lfd f29, 0x120(r1)
    opword 0xE3810118
    lfd f28, 0x110(r1)
    opword 0xE3610108
    lfd f27, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// fn_801CA5E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CA5E8() {
    nofralloc
    stwu r1, -0x110(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    stfd f27, 0xc0(r1)
    opword 0xF36100C8
    stfd f26, 0xb0(r1)
    opword 0xF34100B8
    xoris r0, r4, 0x8000
    lis r9, 0x4330
    stw r0, 0xac(r1)
    cmpwi r4, 0x0
    lfd f10, lbl_804A1B98
    li r10, 0x0
    stw r9, 0xa8(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f10
    fres f11, f0
    opword 0x104B582A
    opword 0x102B02F2
    opword 0x1160107C
    ble lbl_801CA840
    clrlwi r8, r8, 31
    lfs f9, lbl_804A1B90
    lfs f7, lbl_804A1B94
    lis r3, 0xcc01
    mtctr r4
    ble lbl_801CA840
lbl_801CA66C:
    xoris r0, r10, 0x8000
    stw r9, 0xa8(r1)
    opword 0xE3850000
    stw r0, 0xac(r1)
    opword 0xE3660000
    lfd f0, 0xa8(r1)
    opword 0xE0C5000C
    fsubs f0, f0, f10
    opword 0xE086000C
    opword 0xE1A70000
    opword 0xE067000C
    fmuls f2, f0, f11
    fmuls f0, f2, f2
    fmuls f8, f9, f0
    fmuls f0, f7, f0
    fsubs f1, f8, f2
    stfs f8, 0x88(r1)
    fadds f0, f0, f2
    opword 0x13AD0218
    opword 0xE1A78008
    fadds f2, f9, f1
    fadds f5, f9, f0
    opword 0x11830218
    opword 0xF3A10038
    opword 0x135C0098
    opword 0xE3858008
    opword 0x13C60098
    opword 0x13E40158
    opword 0xF3410020
    opword 0x137B0158
    opword 0x135C0098
    opword 0xE0678014
    opword 0xE0010020
    opword 0xF3C1005C
    opword 0x13AD0218
    opword 0x1380D82A
    opword 0xF3E10068
    opword 0xE021005C
    opword 0xF361002C
    opword 0xE3668008
    opword 0xE0010068
    opword 0x137B0158
    opword 0xF3810014
    opword 0x11A1002A
    opword 0xE0C58014
    opword 0xF1810074
    opword 0x11830218
    opword 0xE0868014
    opword 0x139AD82A
    opword 0x13C60098
    opword 0xE0610014
    opword 0xE0210038
    opword 0x13E40158
    opword 0xF1A10050
    opword 0x1063082A
    opword 0x11BEF82A
    opword 0xE0010074
    opword 0xE0210050
    opword 0xF0610008
    opword 0x107CE82A
    opword 0x1001002A
    lfs f4, 0x8(r1)
    opword 0xF0618010
    lfs f3, 0xc(r1)
    opword 0xF0010044
    opword 0x100D602A
    lfs f6, 0x10(r1)
    stfs f2, 0x80(r1)
    stfs f5, 0x84(r1)
    opword 0xF3418028
    opword 0xF3618034
    opword 0xF381801C
    opword 0xF3A18040
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f6, 0x94(r1)
    opword 0xF3C18064
    opword 0xF3E18070
    opword 0xF1A18058
    opword 0xF181807C
    opword 0xF001804C
    lfs f1, 0x18(r5)
    cmpwi r8, 0x0
    lfs f0, 0x18(r6)
    fmuls f1, f1, f2
    stfs f4, -0x8000(r3)
    fmuls f0, f0, f5
    lfs f2, 0x18(r7)
    stfs f3, -0x8000(r3)
    fmuls f2, f2, f8
    fadds f0, f1, f0
    lfs f5, 0x44(r1)
    lfs f4, 0x48(r1)
    lfs f3, 0x4c(r1)
    fadds f1, f2, f0
    stfs f5, 0x98(r1)
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f6, -0x8000(r3)
    beq lbl_801CA80C
    lfs f0, lbl_804A1B84
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CA80C:
    lfs f0, 0x98(r1)
    cmpwi r8, 0x0
    lfs f2, 0x9c(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0xa0(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801CA838
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CA838:
    addi r10, r10, 0x1
    bdnz lbl_801CA66C
lbl_801CA840:
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    lfd f28, 0xd0(r1)
    opword 0xE36100C8
    lfd f27, 0xc0(r1)
    opword 0xE34100B8
    lfd f26, 0xb0(r1)
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_801CA878
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CA878() {
    nofralloc
    stwu r1, -0xc0(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    lfs f3, lbl_804A1B84
    lis r3, 0xcc01
    lfs f2, lbl_804A1B90
    clrlwi. r0, r7, 31
    lfs f0, lbl_804A1B94
    fmuls f8, f2, f3
    opword 0xE1660000
    fmuls f0, f0, f3
    opword 0xE0A40000
    opword 0xE1850000
    fsubs f1, f8, f3
    fadds f0, f0, f3
    opword 0xE084000C
    opword 0x114B0218
    opword 0xE065000C
    fadds f7, f2, f1
    fadds f6, f2, f0
    opword 0xE1668008
    opword 0x13E501D8
    opword 0xE0A48008
    opword 0x11AC0198
    opword 0xE1858008
    opword 0x112401D8
    opword 0xE0848014
    opword 0xF3E10020
    opword 0x10430198
    opword 0x13E501D8
    opword 0xE0658014
    opword 0xF1A1002C
    opword 0x11AC0198
    opword 0xE0210020
    opword 0xE001002C
    opword 0xF121005C
    opword 0x112401D8
    opword 0x1181002A
    opword 0xF0410068
    opword 0x10A05090
    opword 0x10430198
    opword 0xE021005C
    opword 0xF1810014
    opword 0x119F682A
    opword 0xE0010068
    opword 0xE0810014
    opword 0xF1410038
    opword 0x114B0218
    opword 0x1161002A
    opword 0x1064282A
    lfs f1, 0x18(r4)
    lfs f0, 0x18(r5)
    opword 0xF1610050
    opword 0x1169102A
    fmuls f1, f1, f7
    opword 0xF0610008
    opword 0x106C502A
    fmuls f0, f0, f6
    lfs f5, 0x8(r1)
    opword 0xF1418040
    lfs f4, 0xc(r1)
    fadds f0, f1, f0
    stfs f5, -0x8000(r3)
    opword 0xE146000C
    opword 0xF1218064
    opword 0x112A0218
    opword 0xE1468014
    stfs f5, 0x8c(r1)
    opword 0xE0A10050
    opword 0xF0418070
    opword 0x10204890
    lfs f2, 0x18(r6)
    opword 0xF1210074
    opword 0x112A0218
    fmuls f2, f2, f8
    opword 0xF0618010
    lfs f3, 0x10(r1)
    stfs f4, -0x8000(r3)
    stfs f4, 0x90(r1)
    opword 0x1085082A
    fadds f1, f2, f0
    stfs f3, 0x94(r1)
    opword 0xF0810044
    opword 0x108B482A
    stfs f3, -0x8000(r3)
    lfs f3, 0x44(r1)
    opword 0xF081804C
    lfs f2, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f7, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f8, 0x88(r1)
    opword 0xF3E18028
    opword 0xF1A18034
    opword 0xF181801C
    opword 0xF1618058
    opword 0xF121807C
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f1, 0xa4(r1)
    beq lbl_801CAA1C
    lfs f0, lbl_804A1B84
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CAA1C:
    lfs f0, 0x98(r1)
    lis r3, 0xcc01
    lfs f2, 0x9c(r1)
    cmpwi r0, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, 0xa0(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801CAA4C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CAA4C:
    opword 0xE3E100B8
    lfd f31, 0xb0(r1)
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// fn_801CAA5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CAA5C() {
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    stfd f31, 0x370(r1)
    opword 0xF3E10378
    stfd f30, 0x360(r1)
    opword 0xF3C10368
    stfd f29, 0x350(r1)
    opword 0xF3A10358
    stfd f28, 0x340(r1)
    opword 0xF3810348
    stfd f27, 0x330(r1)
    opword 0xF3610338
    stfd f26, 0x320(r1)
    opword 0xF3410328
    stfd f25, 0x310(r1)
    opword 0xF3210318
    stfd f24, 0x300(r1)
    opword 0xF3010308
    addi r11, r1, 0x300
    bl _savegpr_20
    lfs f2, lbl_804A1B80
    lis r11, 0x4330
    lfs f30, lbl_804A1B90
    xoris r3, r4, 0x8000
    lfs f31, lbl_804A1B94
    xoris r0, r5, 0x8000
    fmuls f11, f30, f2
    opword 0xE0A80000
    fmuls f0, f31, f2
    stw r11, 0x2c0(r1)
    lfd f29, lbl_804A1B98
    mr r22, r4
    fsubs f1, f11, f2
    stw r3, 0x2c4(r1)
    fadds f0, f0, f2
    opword 0xE3060000
    stw r11, 0x2c8(r1)
    opword 0x10E502D8
    fadds f8, f30, f1
    lfd f1, 0x2c0(r1)
    fadds f10, f30, f0
    stw r0, 0x2cc(r1)
    opword 0xE0C70000
    fsubs f1, f1, f29
    opword 0x11B80218
    lfd f0, 0x2c8(r1)
    opword 0x11860298
    opword 0xE3068008
    fsubs f3, f0, f29
    opword 0xE0C78008
    fres f28, f1
    opword 0xE0A88008
    opword 0xF1A100D4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    opword 0x112D602A
    opword 0xF18100E0
    opword 0x11B80218
    mr r26, r8
    opword 0x11860298
    opword 0xF0E100EC
    opword 0xF12100C8
    opword 0x10803890
    opword 0x10E502D8
    mr r27, r10
    opword 0xE0A100C8
    opword 0x112D602A
    fres f27, f3
    stfs f8, 0x23c(r1)
    stfs f10, 0x240(r1)
    stfs f11, 0x244(r1)
    opword 0xF1A180DC
    opword 0xF18180E8
    opword 0x10C5202A
    opword 0xF12180D0
    opword 0x105CE02A
    opword 0x101C0732
    opword 0xF0E180F4
    opword 0x10BBD82A
    opword 0x109B06F2
    opword 0xF0C100BC
    opword 0x10C9382A
    opword 0x1381103C
    opword 0x1363293C
    opword 0xF0C180C4
    opword 0xE046000C
    cmpwi r4, 0x1
    opword 0xE087000C
    li r28, 0x1
    opword 0x10C20218
    opword 0xE0460018
    opword 0x10A40298
    opword 0xE0270018
    opword 0x10420218
    lfs f9, 0x24(r8)
    opword 0xF0C10110
    opword 0x10210298
    opword 0xE0878014
    fmuls f9, f9, f11
    opword 0xF041014C
    opword 0xE0468014
    opword 0xF0A1011C
    opword 0x10A40298
    opword 0x10C20218
    opword 0xE0468020
    lfs f7, 0x24(r6)
    opword 0x10420218
    lfs f4, 0x24(r7)
    fmuls f8, f7, f8
    fmuls f7, f4, f10
    opword 0xE068000C
    opword 0xE0080018
    opword 0xF0210158
    opword 0x106302D8
    fadds f7, f8, f7
    opword 0x100002D8
    opword 0xE1810110
    opword 0xE081011C
    fadds f7, f9, f7
    opword 0xF0610128
    opword 0x108C202A
    opword 0xE0688014
    opword 0xF0010164
    opword 0xE0088020
    opword 0x106302D8
    opword 0xF0810104
    opword 0x1086282A
    opword 0x100002D8
    opword 0xE0278020
    opword 0xE121014C
    opword 0x10210298
    opword 0xE1010158
    opword 0xE1610104
    opword 0x1309402A
    opword 0xE1210128
    lfs f10, 0xbc(r1)
    opword 0x116B482A
    opword 0xE1010164
    opword 0xF3010140
    opword 0x1302082A
    lfs f25, 0xc0(r1)
    opword 0xF16100F8
    opword 0xE1210140
    opword 0x1164182A
    lfs f26, 0xc4(r1)
    opword 0x1109402A
    lfs f13, 0xf8(r1)
    opword 0xF1618100
    lfs f12, 0xfc(r1)
    opword 0xF1010134
    opword 0x1118002A
    lfs f11, 0x100(r1)
    stfs f10, 0x270(r1)
    lfs f10, 0x134(r1)
    opword 0xF101813C
    lfs f9, 0x138(r1)
    lfs f8, 0x13c(r1)
    stfs f25, 0x274(r1)
    stfs f26, 0x278(r1)
    opword 0xF0C18118
    opword 0xF0A18124
    opword 0xF081810C
    opword 0xF0618130
    stfs f13, 0x27c(r1)
    stfs f12, 0x280(r1)
    stfs f11, 0x284(r1)
    opword 0xF0418154
    opword 0xF0218160
    opword 0xF3018148
    opword 0xF001816C
    stfs f10, 0x288(r1)
    stfs f9, 0x28c(r1)
    stfs f8, 0x290(r1)
    stfs f7, 0x294(r1)
    blt lbl_801CB304
    slwi r3, r5, 1
    rlwinm r30, r9, 0, 27, 27
    addi r31, r3, 0x2
    clrlwi r29, r9, 31
    lis r21, 0xcc01
    b lbl_801CB2FC
lbl_801CAD38:
    xoris r0, r28, 0x8000
    lwz r10, 0x270(r1)
    stw r0, 0x2c4(r1)
    lwz r9, 0x274(r1)
    lfd f0, 0x2c0(r1)
    lwz r8, 0x278(r1)
    fsubs f0, f0, f29
    lwz r7, 0x27c(r1)
    lwz r6, 0x280(r1)
    lwz r5, 0x284(r1)
    fmuls f4, f0, f28
    lwz r4, 0x288(r1)
    lwz r3, 0x28c(r1)
    lwz r0, 0x290(r1)
    fmuls f0, f4, f4
    lfs f3, 0x294(r1)
    opword 0xE1B80000
    opword 0xE0F90000
    fmuls f11, f30, f0
    opword 0xE0BA0000
    fmuls f0, f31, f0
    opword 0xE058000C
    stw r10, 0x298(r1)
    fsubs f1, f11, f4
    fadds f0, f0, f4
    stw r9, 0x29c(r1)
    opword 0x108502D8
    opword 0xE0BA8008
    fadds f10, f30, f1
    fadds f9, f30, f0
    opword 0xF0810038
    opword 0x108502D8
    opword 0x118D0298
    opword 0xE1B88008
    opword 0x10C70258
    opword 0x11020298
    opword 0xE0F98008
    opword 0xF1810020
    opword 0x118D0298
    opword 0xE0010038
    opword 0xF0C1002C
    opword 0xE0A10020
    opword 0x10C70258
    opword 0xE021002C
    opword 0xE0588014
    opword 0x10A5082A
    opword 0xF101005C
    opword 0x11020298
    stw r8, 0x2a0(r1)
    opword 0xF0A10014
    opword 0x10AC302A
    opword 0xE0210014
    stw r7, 0x2a4(r1)
    opword 0x1001002A
    stw r6, 0x2a8(r1)
    opword 0xF0010008
    opword 0x1005202A
    lfs f2, 0x8(r1)
    opword 0xF0018010
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stw r5, 0x2ac(r1)
    stw r4, 0x2b0(r1)
    stw r3, 0x2b4(r1)
    stw r0, 0x2b8(r1)
    stfs f3, 0x2bc(r1)
    stfs f10, 0x230(r1)
    stfs f9, 0x234(r1)
    stfs f11, 0x238(r1)
    stfs f10, 0x23c(r1)
    stfs f9, 0x240(r1)
    stfs f11, 0x244(r1)
    opword 0xF1818028
    opword 0xF0C18034
    opword 0xF0A1801C
    opword 0xF0818040
    stfs f2, 0x248(r1)
    stfs f1, 0x24c(r1)
    stfs f0, 0x250(r1)
    opword 0xF1018064
    opword 0xE059000C
    clrlwi r5, r31, 16
    opword 0xE0180018
    li r3, 0x98
    opword 0x10A20258
    opword 0xE0F90018
    opword 0x10400298
    opword 0xE001005C
    opword 0x10270258
    opword 0xE0DA0018
    opword 0x1080282A
    opword 0xF0410098
    opword 0xE0598014
    opword 0x11A602D8
    opword 0xF0A10068
    li r4, 0x0
    opword 0x10A20258
    opword 0xE0188020
    opword 0xE07A000C
    opword 0x10400298
    opword 0xE0C10098
    opword 0xF0810050
    opword 0x10000890
    opword 0xE0F98020
    opword 0x106302D8
    opword 0xF02100A4
    opword 0x10270258
    opword 0x1006002A
    opword 0xF0610074
    opword 0x1088282A
    lfs f7, 0x24(r24)
    opword 0xF001008C
    opword 0x1002082A
    fmuls f7, f7, f10
    opword 0xE07A8014
    lfs f8, 0x24(r26)
    opword 0x106302D8
    opword 0xE0DA8020
    opword 0xF1A100B0
    opword 0x11A602D8
    lfs f6, 0x24(r25)
    opword 0xE3010050
    fmuls f6, f6, f9
    opword 0xE1810074
    opword 0xE141008C
    opword 0x1318602A
    lwz r20, 0x248(r1)
    lwz r12, 0x24c(r1)
    lwz r11, 0x250(r1)
    fadds f6, f7, f6
    opword 0xF3010044
    fmuls f8, f8, f11
    opword 0xE12100B0
    opword 0x1304182A
    lfs f12, 0x44(r1)
    opword 0x10EA482A
    lfs f11, 0x48(r1)
    fadds f6, f8, f6
    opword 0xF301804C
    opword 0xF0E10080
    opword 0x10E0682A
    lfs f10, 0x4c(r1)
    lfs f9, 0x80(r1)
    opword 0xF0E18088
    lfs f8, 0x84(r1)
    lfs f7, 0x88(r1)
    stfs f12, 0x254(r1)
    stfs f11, 0x258(r1)
    lwz r10, 0x254(r1)
    stfs f10, 0x25c(r1)
    lwz r9, 0x258(r1)
    stfs f9, 0x260(r1)
    lwz r8, 0x25c(r1)
    stfs f8, 0x264(r1)
    lwz r7, 0x260(r1)
    stfs f7, 0x268(r1)
    lwz r6, 0x264(r1)
    lwz r0, 0x268(r1)
    opword 0xF0A18070
    opword 0xF0818058
    opword 0xF061807C
    opword 0xF04180A0
    opword 0xF02180AC
    opword 0xF0018094
    opword 0xF1A180B8
    stfs f6, 0x26c(r1)
    stw r20, 0x270(r1)
    stw r12, 0x274(r1)
    stw r11, 0x278(r1)
    stw r10, 0x27c(r1)
    stw r9, 0x280(r1)
    stw r8, 0x284(r1)
    stw r7, 0x288(r1)
    stw r6, 0x28c(r1)
    stw r0, 0x290(r1)
    stfs f6, 0x294(r1)
    bl GXBegin
    cmpwi r30, 0x0
    beq lbl_801CB180
    cmpwi r23, 0x0
    li r4, 0x0
    blt lbl_801CB2F8
    addi r0, r23, 0x1
    mr r3, r27
    mtctr r0
    blt lbl_801CB2F8
lbl_801CB020:
    lfs f5, 0x4(r3)
    cmpwi r29, 0x0
    opword 0xE04102B0
    lfs f6, 0x0(r3)
    opword 0x10620158
    opword 0xE00102A4
    opword 0xE04182B8
    opword 0x10200198
    opword 0xE00182AC
    opword 0xF0610200
    opword 0x10620158
    opword 0xE0810298
    opword 0xF021020C
    opword 0x10200198
    opword 0xE0410200
    opword 0xE001020C
    opword 0xF0618208
    opword 0x1000102A
    opword 0xF0218214
    opword 0xF0010218
    opword 0x1001182A
    opword 0xE0210218
    opword 0xF0018220
    opword 0x1021202A
    opword 0xE08182A0
    opword 0xF0210224
    opword 0x1020202A
    lfs f0, 0x224(r1)
    opword 0xF021822C
    lfs f1, 0x228(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x22c(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB0CC
    xoris r0, r4, 0x8000
    lfs f1, 0x2bc(r1)
    stw r0, 0x2cc(r1)
    lfd f0, 0x2c8(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB0CC:
    opword 0xE001027C
    cmpwi r29, 0x0
    opword 0xE0410288
    opword 0x10200198
    opword 0xE0018284
    opword 0x10620158
    opword 0xE0418290
    opword 0xE0810270
    opword 0xF02101DC
    opword 0x10200198
    opword 0xF06101D0
    opword 0x10620158
    opword 0xE00101DC
    opword 0xE04101D0
    opword 0xF02181E4
    opword 0x1000102A
    opword 0xF06181D8
    opword 0xF00101E8
    opword 0x1001182A
    opword 0xE02101E8
    opword 0xF00181F0
    opword 0x1021202A
    opword 0xE0818278
    opword 0xF02101F4
    opword 0x1020202A
    lfs f0, 0x1f4(r1)
    opword 0xF02181FC
    lfs f1, 0x1f8(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x1fc(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB170
    xoris r0, r4, 0x8000
    lfs f1, 0x294(r1)
    stw r0, 0x2c4(r1)
    lfd f0, 0x2c0(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB170:
    addi r3, r3, 0x8
    addi r4, r4, 0x1
    bdnz lbl_801CB020
    b lbl_801CB2F8
lbl_801CB180:
    cmpwi r23, 0x0
    li r4, 0x0
    blt lbl_801CB2F8
    addi r0, r23, 0x1
    mr r3, r27
    mtctr r0
    blt lbl_801CB2F8
lbl_801CB19C:
    lfs f5, 0x4(r3)
    cmpwi r29, 0x0
    opword 0xE0410288
    lfs f6, 0x0(r3)
    opword 0x10620158
    opword 0xE001027C
    opword 0xE0418290
    opword 0x10200198
    opword 0xE0018284
    opword 0xF06101A0
    opword 0x10620158
    opword 0xE0810270
    opword 0xF02101AC
    opword 0x10200198
    opword 0xE04101A0
    opword 0xE00101AC
    opword 0xF06181A8
    opword 0x1000102A
    opword 0xF02181B4
    opword 0xF00101B8
    opword 0x1001182A
    opword 0xE02101B8
    opword 0xF00181C0
    opword 0x1021202A
    opword 0xE0818278
    opword 0xF02101C4
    opword 0x1020202A
    lfs f0, 0x1c4(r1)
    opword 0xF02181CC
    lfs f1, 0x1c8(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x1cc(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB248
    xoris r0, r4, 0x8000
    lfs f1, 0x294(r1)
    stw r0, 0x2cc(r1)
    lfd f0, 0x2c8(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB248:
    opword 0xE00102A4
    cmpwi r29, 0x0
    opword 0xE04102B0
    opword 0x10200198
    opword 0xE00182AC
    opword 0x10620158
    opword 0xE04182B8
    opword 0xE0810298
    opword 0xF021017C
    opword 0x10200198
    opword 0xF0610170
    opword 0x10620158
    opword 0xE001017C
    opword 0xE0410170
    opword 0xF0218184
    opword 0x1000102A
    opword 0xF0618178
    opword 0xF0010188
    opword 0x1001182A
    opword 0xE0210188
    opword 0xF0018190
    opword 0x1021202A
    opword 0xE08182A0
    opword 0xF0210194
    opword 0x1020202A
    lfs f0, 0x194(r1)
    opword 0xF021819C
    lfs f1, 0x198(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x19c(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB2EC
    xoris r0, r4, 0x8000
    lfs f1, 0x2bc(r1)
    stw r0, 0x2c4(r1)
    lfd f0, 0x2c0(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB2EC:
    addi r3, r3, 0x8
    addi r4, r4, 0x1
    bdnz lbl_801CB19C
lbl_801CB2F8:
    addi r28, r28, 0x1
lbl_801CB2FC:
    cmpw r28, r22
    ble lbl_801CAD38
lbl_801CB304:
    opword 0xE3E10378
    lfd f31, 0x370(r1)
    opword 0xE3C10368
    lfd f30, 0x360(r1)
    opword 0xE3A10358
    lfd f29, 0x350(r1)
    opword 0xE3810348
    lfd f28, 0x340(r1)
    opword 0xE3610338
    lfd f27, 0x330(r1)
    opword 0xE3410328
    lfd f26, 0x320(r1)
    opword 0xE3210318
    lfd f25, 0x310(r1)
    opword 0xE3010308
    addi r11, r1, 0x300
    lfd f24, 0x300(r1)
    bl _restgpr_20
    lwz r0, 0x384(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB35C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB35C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB360
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB360() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    stfd f29, 0xc0(r1)
    opword 0xF3A100C8
    addi r11, r1, 0xc0
    bl _savegpr_15
    lwz r22, 0x0(r4)
    lis r0, 0x4330
    mr r26, r3
    stw r0, 0x68(r1)
    lwz r3, 0x24(r22)
    mr r27, r4
    stw r0, 0x70(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_801C3624
    lwz r12, 0x0(r26)
    mr r23, r3
    mr r3, r26
    mr r4, r22
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    mr r21, r3
    mr r3, r26
    mr r4, r23
    bl fn_801CB6AC
    lwz r12, 0x0(r26)
    mr r24, r3
    mr r3, r26
    lwz r12, 0x10(r12)
    mr r4, r24
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r20, r3
    mr r3, r26
    mr r4, r24
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r19, r3
    mr r3, r26
    mr r4, r22
    bl fn_801C6B84
    lbz r0, 0xa9(r23)
    mr r25, r3
    lfd f2, lbl_804A1B98
    mullw r4, r25, r28
    extsb r0, r0
    lfs f0, lbl_804A1BA0
    li r3, 0x98
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f1, 0x68(r1)
    addi r0, r4, 0x1
    clrlslwi r5, r0, 17, 1
    li r4, 0x0
    fsubs f1, f1, f2
    fmuls f30, f0, f1
    bl GXBegin
    mr r3, r26
    mr r4, r23
    bl fn_801CB6B8
    cmpwi r3, 0x40
    beq lbl_801CB4B0
    bge lbl_801CB48C
    cmpwi r3, 0x0
lbl_801CB48C:
    subi r0, r25, 0x1
    lfd f1, lbl_804A1B98
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f1
    bl fn_801C6B98
    fmr f29, f1
    b lbl_801CB4B4
lbl_801CB4B0:
    lfs f29, lbl_804A1B84
lbl_801CB4B4:
    cmpwi r24, 0x0
    li r18, 0x0
    li r17, 0x1
    beq lbl_801CB4CC
    subi r18, r25, 0x1
    li r17, -0x1
lbl_801CB4CC:
    addi r3, r1, 0x10
    bl fn_801CB6C4
    addi r3, r1, 0x2c
    bl fn_801CB6C4
    addi r3, r1, 0x48
    bl fn_801CB6C4
    mr r12, r20
    mr r3, r22
    li r16, 0x0
    li r15, 0x0
    mtctr r12
    bctrl
    xoris r0, r18, 0x8000
    mr r20, r3
    stw r0, 0x6c(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B98
    mr r3, r26
    lfd f0, 0x68(r1)
    mr r5, r27
    stw r31, 0x8(r1)
    fsubs f0, f0, f2
    mr r6, r29
    mr r7, r20
    mr r8, r21
    mr r10, r30
    addi r4, r1, 0x10
    fmuls f2, f29, f0
    addi r9, r20, 0xac
    bl fn_801C9DE8
    mr r12, r19
    mr r3, r22
    mr r4, r20
    add r18, r18, r17
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r23, r3
    addi r25, r4, 0x5556
    b lbl_801CB624
lbl_801CB570:
    addi r4, r15, 0x1
    xoris r0, r18, 0x8000
    mulhw r3, r25, r4
    stw r0, 0x74(r1)
    mr r20, r16
    fmr f1, f30
    lfd f0, 0x70(r1)
    mr r16, r15
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    addi r24, r1, 0x10
    mulli r0, r0, 0x3
    stw r31, 0x8(r1)
    fmuls f2, f29, f0
    mr r3, r26
    subf r15, r0, r4
    mr r5, r27
    mulli r0, r15, 0x1c
    mr r6, r29
    mr r7, r23
    mr r8, r21
    add r24, r24, r0
    mr r10, r30
    mr r4, r24
    addi r9, r23, 0xac
    bl fn_801C9DE8
    mulli r9, r20, 0x1c
    addi r5, r1, 0x10
    mr r3, r26
    mr r6, r5
    mulli r0, r16, 0x1c
    mr r4, r28
    mr r7, r24
    mr r8, r29
    add r5, r5, r9
    add r6, r6, r0
    bl fn_801CA5E8
    mr r12, r19
    mr r3, r22
    mr r4, r23
    mtctr r12
    bctrl
    mr r23, r3
    add r18, r18, r17
lbl_801CB624:
    cmpwi r23, 0x0
    bne lbl_801CB570
    mulli r0, r15, 0x1c
    addi r15, r1, 0x10
    mr r3, r26
    mr r17, r15
    add r15, r15, r0
    mr r4, r28
    mulli r0, r16, 0x1c
    mr r8, r29
    mr r6, r15
    mr r7, r15
    add r17, r17, r0
    mr r5, r17
    bl fn_801CA5E8
    mr r3, r26
    mr r4, r17
    mr r5, r15
    mr r6, r15
    mr r7, r29
    bl fn_801CA878
    bl fn_801CB35C
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    lfd f30, 0xd0(r1)
    opword 0xE3A100C8
    addi r11, r1, 0xc0
    lfd f29, 0xc0(r1)
    bl _restgpr_15
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6AC() {
    nofralloc
    lhz r0, 0x0(r4)
    rlwinm r3, r0, 0, 20, 20
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6B8() {
    nofralloc
    lbz r0, 0xb2(r4)
    rlwinm r3, r0, 0, 24, 25
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6C4() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6C8() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    addi r11, r1, 0x110
    bl _savegpr_15
    lwz r22, 0x0(r4)
    lis r0, 0x4330
    mr r26, r3
    stw r0, 0xb8(r1)
    lwz r3, 0x24(r22)
    mr r27, r4
    stw r0, 0xc0(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_801C3624
    lwz r12, 0x0(r26)
    mr r23, r3
    mr r3, r26
    mr r4, r22
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    mr r21, r3
    mr r3, r26
    mr r4, r23
    bl fn_801CB6AC
    lwz r12, 0x0(r26)
    mr r24, r3
    mr r3, r26
    lwz r12, 0x10(r12)
    mr r4, r24
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r20, r3
    mr r3, r26
    mr r4, r24
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r19, r3
    mr r3, r26
    mr r4, r22
    bl fn_801C6B84
    lbz r0, 0xa9(r23)
    mr r25, r3
    lfd f2, lbl_804A1B98
    mullw r4, r25, r28
    extsb r0, r0
    lfs f0, lbl_804A1BA0
    li r3, 0x98
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f1, 0xb8(r1)
    addi r0, r4, 0x1
    clrlslwi r5, r0, 17, 1
    li r4, 0x0
    fsubs f1, f1, f2
    fmuls f30, f0, f1
    bl GXBegin
    mr r3, r26
    mr r4, r23
    bl fn_801CB6B8
    cmpwi r3, 0x40
    beq lbl_801CB814
    bge lbl_801CB7F4
    cmpwi r3, 0x0
lbl_801CB7F4:
    xoris r0, r25, 0x8000
    lfd f2, lbl_804A1B98
    stw r0, 0xc4(r1)
    lfs f0, lbl_804A1B90
    lfd f1, 0xc0(r1)
    fsubs f1, f1, f2
    fdivs f29, f0, f1
    b lbl_801CB818
lbl_801CB814:
    lfs f29, lbl_804A1B90
lbl_801CB818:
    cmpwi r24, 0x0
    li r18, -0x1
    li r17, 0x2
    beq lbl_801CB834
    slwi r3, r25, 1
    li r17, -0x2
    addi r18, r3, 0x1
lbl_801CB834:
    addi r3, r1, 0x28
    bl fn_801CB6C4
    addi r3, r1, 0x44
    bl fn_801CB6C4
    addi r3, r1, 0x60
    bl fn_801CB6C4
    addi r3, r1, 0x7c
    bl fn_801CB6C4
    addi r3, r1, 0x98
    bl fn_801CB6C4
    addi r3, r1, 0x1c
    bl fn_8002AF5C
    addi r3, r1, 0x10
    bl fn_8002AF5C
    mr r12, r20
    mr r3, r22
    mtctr r12
    bctrl
    xoris r0, r18, 0x8000
    mr r15, r3
    stw r0, 0xbc(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B98
    mr r3, r26
    lfd f0, 0xb8(r1)
    mr r5, r27
    stw r31, 0x8(r1)
    fsubs f0, f0, f2
    mr r6, r29
    mr r7, r15
    mr r8, r21
    mr r10, r30
    addi r4, r1, 0x7c
    fmuls f2, f29, f0
    addi r9, r15, 0xac
    bl fn_801C9DE8
    mr r12, r19
    mr r3, r22
    mr r4, r15
    mtctr r12
    bctrl
    add r18, r18, r17
    mr r15, r3
    xoris r0, r18, 0x8000
    lfd f2, lbl_804A1B98
    stw r0, 0xc4(r1)
    fmr f1, f30
    mr r3, r26
    mr r5, r27
    lfd f0, 0xc0(r1)
    mr r6, r29
    stw r31, 0x8(r1)
    fsubs f0, f0, f2
    mr r7, r15
    mr r8, r21
    mr r10, r30
    addi r4, r1, 0x98
    addi r9, r15, 0xac
    fmuls f2, f29, f0
    bl fn_801C9DE8
    mr r12, r19
    mr r3, r22
    mr r4, r15
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r23, r3
    add r18, r18, r17
    addi r25, r4, 0x5556
    li r16, 0x3
    li r15, 0x4
    b lbl_801CBA0C
lbl_801CB958:
    addi r4, r15, 0x1
    xoris r0, r18, 0x8000
    mulhw r3, r25, r4
    stw r0, 0xbc(r1)
    mr r20, r16
    fmr f1, f30
    lfd f0, 0xb8(r1)
    mr r16, r15
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    addi r24, r1, 0x28
    mulli r0, r0, 0x3
    stw r31, 0x8(r1)
    fmuls f2, f29, f0
    mr r3, r26
    subf r15, r0, r4
    mr r5, r27
    mulli r0, r15, 0x1c
    mr r6, r29
    mr r7, r23
    mr r8, r21
    add r24, r24, r0
    mr r10, r30
    mr r4, r24
    addi r9, r23, 0xac
    bl fn_801C9DE8
    mulli r9, r20, 0x1c
    addi r5, r1, 0x28
    mr r3, r26
    mr r6, r5
    mulli r0, r16, 0x1c
    mr r4, r28
    mr r7, r24
    mr r8, r29
    add r5, r5, r9
    add r6, r6, r0
    bl fn_801CA5E8
    mr r12, r19
    mr r3, r22
    mr r4, r23
    mtctr r12
    bctrl
    mr r23, r3
    add r18, r18, r17
lbl_801CBA0C:
    cmpwi r23, 0x0
    bne lbl_801CB958
    xoris r0, r18, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xc4(r1)
    mulli r4, r15, 0x1c
    addi r15, r1, 0x28
    lfd f0, 0xc0(r1)
    mr r3, r26
    mr r5, r15
    mr r8, r29
    fsubs f0, f0, f1
    add r15, r15, r4
    mulli r0, r16, 0x1c
    mr r4, r28
    mr r6, r15
    fmuls f0, f29, f0
    add r5, r5, r0
    addi r7, r1, 0x7c
    stfs f0, 0x94(r1)
    bl fn_801CA5E8
    add r18, r18, r17
    lfd f1, lbl_804A1B98
    xoris r0, r18, 0x8000
    mr r3, r26
    stw r0, 0xbc(r1)
    mr r4, r28
    mr r5, r15
    mr r8, r29
    lfd f0, 0xb8(r1)
    addi r6, r1, 0x7c
    addi r7, r1, 0x98
    fsubs f0, f0, f1
    fmuls f0, f29, f0
    stfs f0, 0xb0(r1)
    bl fn_801CA5E8
    mr r3, r26
    mr r4, r15
    mr r7, r29
    addi r5, r1, 0x7c
    addi r6, r1, 0x98
    bl fn_801CA878
    bl fn_801CB35C
    opword 0xE3E10138
    lfd f31, 0x130(r1)
    opword 0xE3C10128
    lfd f30, 0x120(r1)
    opword 0xE3A10118
    addi r11, r1, 0x110
    lfd f29, 0x110(r1)
    bl _restgpr_15
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// fn_801CBAE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CBAE8() {
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
    addi r11, r1, 0x120
    bl _savegpr_14
    lwz r28, 0x0(r4)
    lis r0, 0x4330
    mr r15, r3
    stw r0, 0xc0(r1)
    lwz r3, 0x24(r28)
    mr r16, r4
    stw r0, 0xc8(r1)
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    bl fn_801C3624
    lwz r12, 0x0(r15)
    mr r21, r3
    mr r3, r15
    mr r4, r28
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    mr r27, r3
    mr r3, r15
    mr r4, r21
    bl fn_801CB6AC
    lwz r12, 0x0(r15)
    mr r14, r3
    mr r3, r15
    lwz r12, 0x10(r12)
    mr r4, r14
    mtctr r12
    bctrl
    lwz r12, 0x0(r15)
    mr r23, r3
    mr r3, r15
    mr r4, r14
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0xa9(r21)
    mr r26, r3
    lfd f2, lbl_804A1B98
    extsb r0, r0
    lfs f0, lbl_804A1BA0
    xoris r0, r0, 0x8000
    lwz r3, 0x0(r16)
    stw r0, 0xc4(r1)
    lfd f1, 0xc0(r1)
    fsubs f1, f1, f2
    fmuls f30, f0, f1
    bl fn_801CBF8C
    mr r5, r3
    addi r3, r1, 0x40
    addi r4, r16, 0xa4
    addi r5, r5, 0xac
    bl fn_8002B0AC
    mr r3, r15
    mr r4, r28
    bl fn_801C6B84
    mr r22, r3
    li r3, 0x98
    addi r0, r22, 0x1
    li r4, 0x0
    mullw r5, r0, r17
    addi r0, r5, 0x1
    clrlslwi r5, r0, 17, 1
    bl GXBegin
    mr r3, r15
    mr r4, r21
    bl fn_801CB6B8
    cmpwi r3, 0x40
    beq lbl_801CBC54
    bge lbl_801CBC34
    cmpwi r3, 0x0
lbl_801CBC34:
    xoris r0, r22, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f1, f0, f1
    bl fn_801C6B98
    fmr f29, f1
    b lbl_801CBC58
lbl_801CBC54:
    lfs f29, lbl_804A1B84
lbl_801CBC58:
    cmpwi r14, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801CBC70
    mr r25, r22
    li r24, -0x1
lbl_801CBC70:
    addi r3, r1, 0x68
    bl fn_801CB6C4
    addi r3, r1, 0x84
    bl fn_801CB6C4
    addi r3, r1, 0xa0
    bl fn_801CB6C4
    addi r3, r1, 0x34
    li r22, 0x0
    li r21, 0x0
    bl fn_8002AF5C
    addi r3, r1, 0x28
    bl fn_8002AF5C
    mr r12, r23
    mr r3, r28
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r23, r3
    stw r0, 0xc4(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B98
    mr r3, r15
    lfd f0, 0xc0(r1)
    mr r5, r16
    stw r20, 0x8(r1)
    fsubs f0, f0, f2
    mr r6, r18
    mr r7, r23
    mr r8, r27
    mr r10, r19
    addi r4, r1, 0x68
    fmuls f2, f29, f0
    addi r9, r23, 0xac
    bl fn_801C9DE8
    cmpwi r14, 0x0
    add r25, r25, r24
    bne lbl_801CBD68
    addi r3, r1, 0x84
    addi r4, r1, 0x68
    li r21, 0x1
    bl fn_801CC00C
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xcc(r1)
    addi r3, r1, 0x68
    addi r4, r1, 0x40
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f0, f29, f0
    stfs f0, 0x9c(r1)
    bl fn_80031AF4
    addi r3, r1, 0x74
    addi r4, r1, 0x40
    bl fn_80031AF4
    addi r5, r1, 0x68
    mr r3, r15
    mr r4, r17
    mr r8, r18
    mr r6, r5
    add r25, r25, r24
    addi r7, r1, 0x84
    bl fn_801CA5E8
lbl_801CBD68:
    mr r12, r26
    mr r3, r28
    mr r4, r23
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r29, r3
    addi r31, r4, 0x5556
    b lbl_801CBE44
lbl_801CBD90:
    addi r4, r21, 0x1
    xoris r0, r25, 0x8000
    mulhw r3, r31, r4
    stw r0, 0xc4(r1)
    mr r23, r22
    fmr f1, f30
    lfd f0, 0xc0(r1)
    mr r22, r21
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    addi r30, r1, 0x68
    mulli r0, r0, 0x3
    stw r20, 0x8(r1)
    fmuls f2, f29, f0
    mr r3, r15
    subf r21, r0, r4
    mr r5, r16
    mulli r0, r21, 0x1c
    mr r6, r18
    mr r7, r29
    mr r8, r27
    add r30, r30, r0
    mr r10, r19
    mr r4, r30
    addi r9, r29, 0xac
    bl fn_801C9DE8
    mulli r9, r23, 0x1c
    addi r5, r1, 0x68
    mr r3, r15
    mr r6, r5
    mulli r0, r22, 0x1c
    mr r4, r17
    mr r7, r30
    mr r8, r18
    add r5, r5, r9
    add r6, r6, r0
    bl fn_801CA5E8
    mr r12, r26
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
    mr r29, r3
    add r25, r25, r24
lbl_801CBE44:
    cmpwi r29, 0x0
    bne lbl_801CBD90
    cmpwi r14, 0x0
    beq lbl_801CBF0C
    lis r3, 0x5555
    mr r19, r22
    addi r0, r3, 0x5556
    addi r6, r21, 0x1
    mulhw r4, r0, r6
    addi r14, r1, 0x68
    mr r22, r21
    mr r16, r14
    addi r3, r1, 0x10
    addi r5, r1, 0x40
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r21, r0, r6
    mulli r4, r22, 0x1c
    mulli r0, r21, 0x1c
    add r14, r14, r4
    add r16, r16, r0
    addi r4, r14, 0xc
    bl fn_80047C40
    mr r4, r14
    addi r3, r1, 0x1c
    addi r5, r1, 0x40
    bl fn_80047C40
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xcc(r1)
    addi r3, r1, 0x4c
    addi r4, r1, 0x1c
    addi r5, r1, 0x10
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f1, f29, f0
    bl fn_801CBFD4
    mr r4, r3
    mr r3, r16
    bl fn_801CC00C
    mulli r0, r19, 0x1c
    addi r5, r1, 0x68
    mr r3, r15
    mr r4, r17
    mr r6, r14
    mr r7, r16
    mr r8, r18
    add r5, r5, r0
    bl fn_801CA5E8
lbl_801CBF0C:
    mulli r0, r21, 0x1c
    addi r14, r1, 0x68
    mr r3, r15
    mr r16, r14
    add r14, r14, r0
    mr r4, r17
    mulli r0, r22, 0x1c
    mr r8, r18
    mr r6, r14
    mr r7, r14
    add r16, r16, r0
    mr r5, r16
    bl fn_801CA5E8
    mr r3, r15
    mr r4, r16
    mr r5, r14
    mr r6, r14
    mr r7, r18
    bl fn_801CA878
    bl fn_801CB35C
    opword 0xE3E10148
    lfd f31, 0x140(r1)
    opword 0xE3C10138
    lfd f30, 0x130(r1)
    opword 0xE3A10128
    addi r11, r1, 0x120
    lfd f29, 0x120(r1)
    bl _restgpr_14
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// fn_801CBF8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CBF8C() {
    nofralloc
    lwz r5, 0x3c(r3)
    b lbl_801CBFB8
lbl_801CBF94:
    lhz r4, 0x42(r3)
    lwzx r5, r5, r4
    b lbl_801CBFA4
lbl_801CBFA0:
    lwzx r5, r5, r4
lbl_801CBFA4:
    cmpwi r5, 0x0
    beq lbl_801CBFB8
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801CBFA0
lbl_801CBFB8:
    cmpwi r5, 0x0
    beq lbl_801CBFCC
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801CBF94
lbl_801CBFCC:
    mr r3, r5
    blr
}

// ----------------------------------------------------------------------------
// fn_801CBFD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CBFD4() {
    nofralloc
    lwz r9, 0x0(r4)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r6, 0x0(r5)
    lwz r4, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f1, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC00C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC00C() {
    nofralloc
    lwz r9, 0x0(r4)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r6, 0xc(r4)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    lfs f0, 0x18(r4)
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC048
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC048() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    addi r11, r1, 0xd0
    bl _savegpr_16
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r23, 0x0(r4)
    mr r29, r4
    lwz r12, 0x18(r12)
    mr r28, r3
    mr r30, r5
    mr r31, r6
    mr r4, r23
    stw r0, 0x80(r1)
    lwz r26, 0x24(r23)
    stw r0, 0x88(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r22, r3
    lhz r0, 0x9c(r26)
    mr r3, r28
    lwz r12, 0x10(r12)
    rlwinm r27, r0, 0, 20, 20
    mr r4, r27
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r24, r3
    mr r3, r28
    mr r4, r27
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r26)
    mr r21, r3
    lbz r3, 0x146(r26)
    extsb r4, r0
    lbz r0, 0x14e(r26)
    extsb r3, r3
    lfd f3, lbl_804A1B98
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x84(r1)
    lfs f1, lbl_804A1BA0
    cmpwi r0, 0x40
    stw r3, 0x8c(r1)
    lfd f2, 0x80(r1)
    lfd f0, 0x88(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r23)
    fsubs f0, f0, f3
    fmuls f30, f1, f2
    fmuls f29, f1, f0
    beq lbl_801CC180
    bge lbl_801CC154
    cmpwi r0, 0x0
lbl_801CC154:
    subi r0, r3, 0x1
    lfd f1, lbl_804A1B98
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f1
    fres f28, f0
    opword 0x105CE02A
    opword 0x103C0732
    opword 0x1380107C
    b lbl_801CC184
lbl_801CC180:
    lfs f28, lbl_804A1B84
lbl_801CC184:
    cmpwi r27, 0x0
    li r20, 0x0
    li r19, 0x1
    beq lbl_801CC19C
    subi r20, r3, 0x1
    li r19, -0x1
lbl_801CC19C:
    mr r12, r24
    mr r3, r23
    li r17, 0x0
    li r16, 0x0
    mtctr r12
    bctrl
    xoris r0, r20, 0x8000
    mr r18, r3
    stw r0, 0x8c(r1)
    fmr f1, f30
    lfd f3, lbl_804A1B98
    fmr f2, f29
    lfd f0, 0x88(r1)
    mr r3, r28
    mr r5, r29
    fsubs f0, f0, f3
    mr r6, r31
    mr r7, r18
    mr r8, r22
    addi r4, r1, 0x8
    fmuls f3, f28, f0
    bl fn_801CA180
    mr r12, r21
    mr r3, r23
    mr r4, r18
    add r20, r20, r19
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r24, r3
    addi r27, r4, 0x5556
    b lbl_801CC2D4
lbl_801CC220:
    addi r4, r16, 0x1
    xoris r0, r20, 0x8000
    mulhw r3, r27, r4
    stw r0, 0x84(r1)
    mr r18, r17
    fmr f1, f30
    lfd f0, 0x80(r1)
    mr r17, r16
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    fmr f2, f29
    mulli r0, r0, 0x3
    addi r25, r1, 0x8
    fmuls f3, f28, f0
    mr r3, r28
    subf r16, r0, r4
    mr r5, r29
    mulli r0, r16, 0x28
    mr r6, r31
    mr r7, r24
    mr r8, r22
    add r25, r25, r0
    mr r4, r25
    bl fn_801CA180
    mulli r11, r18, 0x28
    addi r6, r1, 0x8
    lbz r5, 0x14c(r26)
    mr r3, r28
    mr r7, r6
    lwz r10, 0xd4(r29)
    mulli r0, r17, 0x28
    mr r4, r30
    mr r8, r25
    mr r9, r31
    add r6, r6, r11
    add r7, r7, r0
    bl fn_801CAA5C
    mr r12, r21
    mr r3, r23
    mr r4, r24
    mtctr r12
    bctrl
    mr r24, r3
    add r20, r20, r19
lbl_801CC2D4:
    cmpwi r24, 0x0
    bne lbl_801CC220
    mulli r0, r16, 0x28
    addi r7, r1, 0x8
    lbz r5, 0x14c(r26)
    mr r3, r28
    mr r6, r7
    lwz r10, 0xd4(r29)
    add r7, r7, r0
    mr r4, r30
    mulli r0, r17, 0x28
    mr r9, r31
    mr r8, r7
    add r6, r6, r0
    bl fn_801CAA5C
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    addi r11, r1, 0xd0
    lfd f28, 0xd0(r1)
    bl _restgpr_16
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC348
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC348() {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    opword 0xF3E10158
    stfd f30, 0x140(r1)
    opword 0xF3C10148
    stfd f29, 0x130(r1)
    opword 0xF3A10138
    stfd f28, 0x120(r1)
    opword 0xF3810128
    addi r11, r1, 0x120
    bl _savegpr_16
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r23, 0x0(r4)
    mr r29, r4
    lwz r12, 0x18(r12)
    mr r28, r3
    mr r30, r5
    mr r31, r6
    mr r4, r23
    stw r0, 0xd0(r1)
    lwz r26, 0x24(r23)
    stw r0, 0xd8(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r22, r3
    lhz r0, 0x9c(r26)
    mr r3, r28
    lwz r12, 0x10(r12)
    rlwinm r27, r0, 0, 20, 20
    mr r4, r27
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r24, r3
    mr r3, r28
    mr r4, r27
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r26)
    mr r21, r3
    lbz r3, 0x146(r26)
    extsb r4, r0
    lbz r0, 0x14e(r26)
    extsb r3, r3
    lfd f3, lbl_804A1B98
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0xd4(r1)
    lfs f1, lbl_804A1BA0
    cmpwi r0, 0x40
    stw r3, 0xdc(r1)
    lfd f2, 0xd0(r1)
    lfd f0, 0xd8(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r23)
    fsubs f0, f0, f3
    fmuls f29, f1, f2
    fmuls f28, f1, f0
    beq lbl_801CC474
    bge lbl_801CC454
    cmpwi r0, 0x0
lbl_801CC454:
    xoris r0, r3, 0x8000
    lfd f2, lbl_804A1B98
    stw r0, 0xd4(r1)
    lfs f0, lbl_804A1B90
    lfd f1, 0xd0(r1)
    fsubs f1, f1, f2
    fdivs f31, f0, f1
    b lbl_801CC478
lbl_801CC474:
    lfs f31, lbl_804A1B90
lbl_801CC478:
    cmpwi r27, 0x0
    li r20, -0x1
    li r19, 0x2
    beq lbl_801CC494
    slwi r3, r3, 1
    li r19, -0x2
    addi r20, r3, 0x1
lbl_801CC494:
    mr r12, r24
    mr r3, r23
    mtctr r12
    bctrl
    xoris r0, r20, 0x8000
    mr r16, r3
    stw r0, 0xdc(r1)
    fmr f1, f29
    lfd f3, lbl_804A1B98
    fmr f2, f28
    lfd f0, 0xd8(r1)
    mr r3, r28
    mr r5, r29
    fsubs f0, f0, f3
    mr r6, r31
    mr r7, r16
    mr r8, r22
    addi r4, r1, 0x80
    fmuls f3, f31, f0
    bl fn_801CA180
    mr r12, r21
    mr r3, r23
    mr r4, r16
    mtctr r12
    bctrl
    add r20, r20, r19
    mr r16, r3
    xoris r0, r20, 0x8000
    lfd f3, lbl_804A1B98
    stw r0, 0xd4(r1)
    fmr f1, f29
    fmr f2, f28
    mr r3, r28
    lfd f0, 0xd0(r1)
    mr r5, r29
    mr r6, r31
    fsubs f0, f0, f3
    mr r7, r16
    mr r8, r22
    addi r4, r1, 0xa8
    fmuls f3, f31, f0
    bl fn_801CA180
    mr r12, r21
    mr r3, r23
    mr r4, r16
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f30, lbl_804A1B98
    mr r24, r3
    add r20, r20, r19
    addi r27, r4, 0x5556
    li r17, 0x3
    li r16, 0x4
    b lbl_801CC624
lbl_801CC570:
    addi r4, r16, 0x1
    xoris r0, r20, 0x8000
    mulhw r3, r27, r4
    stw r0, 0xdc(r1)
    mr r18, r17
    fmr f1, f29
    lfd f0, 0xd8(r1)
    mr r17, r16
    srwi r0, r3, 31
    fsubs f0, f0, f30
    add r0, r3, r0
    fmr f2, f28
    mulli r0, r0, 0x3
    addi r25, r1, 0x8
    fmuls f3, f31, f0
    mr r3, r28
    subf r16, r0, r4
    mr r5, r29
    mulli r0, r16, 0x28
    mr r6, r31
    mr r7, r24
    mr r8, r22
    add r25, r25, r0
    mr r4, r25
    bl fn_801CA180
    mulli r11, r18, 0x28
    addi r6, r1, 0x8
    lbz r5, 0x14c(r26)
    mr r3, r28
    mr r7, r6
    lwz r10, 0xd4(r29)
    mulli r0, r17, 0x28
    mr r4, r30
    mr r8, r25
    mr r9, r31
    add r6, r6, r11
    add r7, r7, r0
    bl fn_801CAA5C
    mr r12, r21
    mr r3, r23
    mr r4, r24
    mtctr r12
    bctrl
    mr r24, r3
    add r20, r20, r19
lbl_801CC624:
    cmpwi r24, 0x0
    bne lbl_801CC570
    xoris r0, r20, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xd4(r1)
    mulli r4, r16, 0x28
    addi r16, r1, 0x8
    lfd f0, 0xd0(r1)
    mr r3, r28
    mr r6, r16
    mr r9, r31
    fsubs f0, f0, f1
    add r16, r16, r4
    mulli r0, r17, 0x28
    mr r4, r30
    mr r7, r16
    fmuls f0, f31, f0
    add r6, r6, r0
    addi r8, r1, 0x80
    stfs f0, 0xa4(r1)
    lbz r5, 0x14c(r26)
    lwz r10, 0xd4(r29)
    bl fn_801CAA5C
    add r20, r20, r19
    lfd f1, lbl_804A1B98
    xoris r0, r20, 0x8000
    mr r3, r28
    stw r0, 0xdc(r1)
    mr r4, r30
    mr r6, r16
    mr r9, r31
    lfd f0, 0xd8(r1)
    addi r7, r1, 0x80
    addi r8, r1, 0xa8
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, 0xcc(r1)
    lbz r5, 0x14c(r26)
    lwz r10, 0xd4(r29)
    bl fn_801CAA5C
    opword 0xE3E10158
    lfd f31, 0x150(r1)
    opword 0xE3C10148
    lfd f30, 0x140(r1)
    opword 0xE3A10138
    lfd f29, 0x130(r1)
    opword 0xE3810128
    addi r11, r1, 0x120
    lfd f28, 0x120(r1)
    bl _restgpr_16
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC6FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC6FC() {
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    opword 0xF3E10178
    stfd f30, 0x160(r1)
    opword 0xF3C10168
    stfd f29, 0x150(r1)
    opword 0xF3A10158
    stfd f28, 0x140(r1)
    opword 0xF3810148
    addi r11, r1, 0x140
    bl _savegpr_14
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r20, r4
    lwz r12, 0x18(r12)
    mr r19, r3
    mr r21, r5
    mr r22, r6
    mr r4, r29
    stw r0, 0xe8(r1)
    lwz r31, 0x24(r29)
    stw r0, 0xf0(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r19)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r19
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r19)
    mr r14, r3
    mr r3, r19
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x146(r31)
    mr r27, r3
    lbz r4, 0x145(r31)
    extsb r0, r0
    lfd f3, lbl_804A1B98
    extsb r3, r4
    lfs f1, lbl_804A1BA0
    xoris r3, r3, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0xec(r1)
    lwz r4, 0x0(r20)
    stw r0, 0xf4(r1)
    lfd f2, 0xe8(r1)
    lfd f0, 0xf0(r1)
    fsubs f2, f2, f3
    lwz r3, 0x3c(r4)
    fsubs f0, f0, f3
    fmuls f31, f1, f2
    fmuls f30, f1, f0
    b lbl_801CC81C
lbl_801CC7F8:
    lhz r5, 0x42(r4)
    lwzx r3, r3, r5
    b lbl_801CC808
lbl_801CC804:
    lwzx r3, r3, r5
lbl_801CC808:
    cmpwi r3, 0x0
    beq lbl_801CC81C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801CC804
lbl_801CC81C:
    cmpwi r3, 0x0
    beq lbl_801CC830
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801CC7F8
lbl_801CC830:
    opword 0xE01400A4
    opword 0xE02300AC
    lbz r0, 0x14e(r31)
    opword 0x10400828
    opword 0xE02380B4
    opword 0xE01480AC
    rlwinm r0, r0, 0, 24, 25
    cmpwi r0, 0x40
    lhz r3, 0x50(r29)
    opword 0xF0410014
    opword 0x10400828
    opword 0xF041801C
    beq lbl_801CC894
    bge lbl_801CC86C
    cmpwi r0, 0x0
lbl_801CC86C:
    xoris r0, r3, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f1
    fres f29, f0
    opword 0x105DE82A
    opword 0x103D0772
    opword 0x13A0107C
    b lbl_801CC898
lbl_801CC894:
    lfs f29, lbl_804A1B84
lbl_801CC898:
    cmpwi r30, 0x0
    li r26, 0x0
    li r25, 0x1
    beq lbl_801CC8B0
    mr r26, r3
    li r25, -0x1
lbl_801CC8B0:
    mr r12, r14
    mr r3, r29
    li r24, 0x0
    li r23, 0x0
    mtctr r12
    bctrl
    xoris r0, r26, 0x8000
    mr r14, r3
    stw r0, 0xf4(r1)
    fmr f1, f31
    lfd f3, lbl_804A1B98
    fmr f2, f30
    lfd f0, 0xf0(r1)
    mr r3, r19
    mr r5, r20
    fsubs f0, f0, f3
    mr r6, r22
    mr r7, r14
    mr r8, r28
    addi r4, r1, 0x70
    fmuls f3, f29, f0
    bl fn_801CA180
    cmpwi r30, 0x0
    add r26, r26, r25
    bne lbl_801CC9EC
    xoris r0, r26, 0x8000
    addi r6, r1, 0x70
    stw r0, 0xec(r1)
    mr r3, r19
    lwz r5, 0x70(r1)
    mr r4, r21
    lfd f1, lbl_804A1B98
    mr r7, r6
    lfd f0, 0xe8(r1)
    mr r9, r22
    opword 0xE0460000
    add r26, r26, r25
    fsubs f0, f0, f1
    opword 0xE0210014
    lwz r10, 0x74(r1)
    addi r8, r1, 0x98
    opword 0x1062082A
    opword 0xE0468008
    fmuls f0, f29, f0
    opword 0xE021801C
    lwz r15, 0x78(r1)
    li r23, 0x1
    lwz r16, 0x7c(r1)
    lwz r17, 0x80(r1)
    lwz r18, 0x84(r1)
    lwz r12, 0x88(r1)
    lwz r11, 0x8c(r1)
    lwz r0, 0x90(r1)
    opword 0xF0660000
    opword 0x1062082A
    stw r5, 0x98(r1)
    stw r10, 0x9c(r1)
    stw r15, 0xa0(r1)
    stw r16, 0xa4(r1)
    stw r17, 0xa8(r1)
    stw r18, 0xac(r1)
    stw r12, 0xb0(r1)
    stw r11, 0xb4(r1)
    stw r0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    opword 0xF0668008
    stw r5, 0x48(r1)
    lbz r5, 0x14c(r31)
    stw r10, 0x4c(r1)
    lwz r10, 0xd4(r20)
    stw r15, 0x50(r1)
    stw r16, 0x54(r1)
    stw r17, 0x58(r1)
    stw r18, 0x5c(r1)
    stw r12, 0x60(r1)
    stw r11, 0x64(r1)
    stw r0, 0x68(r1)
    stfs f0, 0x6c(r1)
    bl fn_801CAA5C
lbl_801CC9EC:
    mr r12, r27
    mr r3, r29
    mr r4, r14
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f28, lbl_804A1B98
    mr r16, r3
    addi r14, r4, 0x5556
    b lbl_801CCAC8
lbl_801CCA14:
    addi r4, r23, 0x1
    xoris r0, r26, 0x8000
    mulhw r3, r14, r4
    stw r0, 0xf4(r1)
    mr r17, r24
    fmr f1, f31
    lfd f0, 0xf0(r1)
    mr r24, r23
    srwi r0, r3, 31
    fsubs f0, f0, f28
    add r0, r3, r0
    fmr f2, f30
    mulli r0, r0, 0x3
    addi r15, r1, 0x70
    fmuls f3, f29, f0
    mr r3, r19
    subf r23, r0, r4
    mr r5, r20
    mulli r0, r23, 0x28
    mr r6, r22
    mr r7, r16
    mr r8, r28
    add r15, r15, r0
    mr r4, r15
    bl fn_801CA180
    mulli r11, r17, 0x28
    addi r6, r1, 0x70
    lbz r5, 0x14c(r31)
    mr r3, r19
    mr r7, r6
    lwz r10, 0xd4(r20)
    mulli r0, r24, 0x28
    mr r4, r21
    mr r8, r15
    mr r9, r22
    add r6, r6, r11
    add r7, r7, r0
    bl fn_801CAA5C
    mr r12, r27
    mr r3, r29
    mr r4, r16
    mtctr r12
    bctrl
    mr r16, r3
    add r26, r26, r25
lbl_801CCAC8:
    cmpwi r16, 0x0
    bne lbl_801CCA14
    cmpwi r30, 0x0
    beq lbl_801CCC00
    lis r4, 0x5555
    mr r3, r24
    addi r5, r23, 0x1
    mr r24, r23
    addi r4, r4, 0x5556
    xoris r0, r26, 0x8000
    mulhw r4, r4, r5
    stw r0, 0xec(r1)
    addi r7, r1, 0x70
    opword 0xE0610014
    lfd f1, lbl_804A1B98
    addi r14, r1, 0x7c
    mulli r8, r24, 0x28
    srwi r0, r4, 31
    lfd f0, 0xe8(r1)
    addi r6, r1, 0x88
    add r0, r4, r0
    add r7, r7, r8
    mulli r0, r0, 0x3
    fsubs f0, f0, f1
    add r4, r6, r8
    opword 0xE0470000
    add r9, r14, r8
    lwz r26, 0x0(r4)
    opword 0x1022182A
    subf r23, r0, r5
    mulli r10, r23, 0x28
    lwz r12, 0x0(r9)
    lwz r11, 0x4(r9)
    addi r8, r1, 0x70
    opword 0xF0210008
    add r17, r14, r10
    lwz r0, 0x8(r9)
    mulli r14, r3, 0x28
    lwz r5, 0x8(r1)
    add r16, r6, r10
    lwz r25, 0x4(r4)
    addi r6, r1, 0x70
    lwz r18, 0x8(r4)
    opword 0xE0478008
    add r6, r6, r14
    opword 0xE061801C
    fmuls f0, f29, f0
    lwz r27, 0xc(r1)
    addi r15, r1, 0x94
    opword 0x1022182A
    stwux r5, r8, r10
    mr r3, r19
    stw r27, 0x4(r8)
    mr r4, r21
    mr r9, r22
    opword 0xF0218010
    lwz r14, 0x10(r1)
    stw r5, 0x20(r1)
    stw r14, 0x8(r8)
    stw r12, 0x0(r17)
    stw r11, 0x4(r17)
    stw r0, 0x8(r17)
    stw r26, 0x0(r16)
    stw r25, 0x4(r16)
    stw r18, 0x8(r16)
    stfsx f0, r15, r10
    stw r27, 0x24(r1)
    lbz r5, 0x14c(r31)
    stw r14, 0x28(r1)
    lwz r10, 0xd4(r20)
    stw r12, 0x2c(r1)
    stw r11, 0x30(r1)
    stw r0, 0x34(r1)
    stw r26, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r18, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_801CAA5C
lbl_801CCC00:
    mulli r0, r23, 0x28
    addi r7, r1, 0x70
    lbz r5, 0x14c(r31)
    mr r3, r19
    mr r6, r7
    lwz r10, 0xd4(r20)
    add r7, r7, r0
    mr r4, r21
    mulli r0, r24, 0x28
    mr r9, r22
    mr r8, r7
    add r6, r6, r0
    bl fn_801CAA5C
    opword 0xE3E10178
    lfd f31, 0x170(r1)
    opword 0xE3C10168
    lfd f30, 0x160(r1)
    opword 0xE3A10158
    lfd f29, 0x150(r1)
    opword 0xE3810148
    addi r11, r1, 0x140
    lfd f28, 0x140(r1)
    bl _restgpr_14
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

// ----------------------------------------------------------------------------
// fn_801CCC6C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CCC6C() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r31, r1
    lwz r8, 0x0(r4)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r24, 0x24(r8)
    mr r29, r6
    mr r30, r7
    lbz r23, 0x14c(r24)
    cmpwi r23, 0x3
    blt lbl_801CD408
    addi r3, r23, 0x1
    lwz r0, 0x0(r1)
    slwi r3, r3, 3
    neg r21, r3
    clrrwi r21, r21, 3
    stwux r0, r1, r21
    addic. r21, r1, 0x8
    beq lbl_801CD408
    xoris r0, r23, 0x8000
    lis r25, 0x4330
    stw r0, 0xc(r31)
    addi r22, r21, 0x8
    lfs f0, lbl_804A1B84
    li r20, 0x1
    stw r25, 0x8(r31)
    lfd f30, lbl_804A1B98
    lfd f2, 0x8(r31)
    lfs f1, lbl_804A1BA4
    fsubs f2, f2, f30
    stfs f0, 0x0(r21)
    lfs f0, lbl_804A1B80
    lfs f31, lbl_804A1BA8
    fdivs f29, f1, f2
    stfs f0, 0x4(r21)
    b lbl_801CCD58
lbl_801CCD28:
    xoris r0, r20, 0x8000
    stw r25, 0x8(r31)
    mr r4, r22
    addi r3, r22, 0x4
    stw r0, 0xc(r31)
    lfd f0, 0x8(r31)
    fsubs f0, f0, f30
    fmuls f0, f29, f0
    fmuls f1, f31, f0
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    addi r22, r22, 0x8
    addi r20, r20, 0x1
lbl_801CCD58:
    cmpw r20, r23
    blt lbl_801CCD28
    lfs f1, lbl_804A1B84
    slwi r0, r23, 3
    lfs f0, lbl_804A1B80
    add r3, r21, r0
    stfsx f1, r21, r0
    stfs f0, 0x4(r3)
    stw r21, 0xd4(r27)
    lbz r0, 0x14e(r24)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801CCFC4
    bge lbl_801CCD94
    b lbl_801CCDA0
lbl_801CCD94:
    cmpwi r0, 0x3
    bge lbl_801CCDA0
    b lbl_801CD1E8
lbl_801CCDA0:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CCE9C
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CCDD4:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE04
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE04:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE34
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE34:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE64
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE64:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE94
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE94:
    addi r4, r4, 0x3
    bdnz lbl_801CCDD4
lbl_801CCE9C:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC048
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CCFAC
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CCEE4:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCF14
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCF14:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCF44
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCF44:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCF74
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCF74:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCFA4
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCFA4:
    addi r4, r4, 0x3
    bdnz lbl_801CCEE4
lbl_801CCFAC:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC048
    b lbl_801CD408
lbl_801CCFC4:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD0C0
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CCFF8:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD028
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD028:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD058
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD058:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD088
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD088:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD0B8
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD0B8:
    addi r4, r4, 0x3
    bdnz lbl_801CCFF8
lbl_801CD0C0:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC348
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD1D0
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CD108:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD138
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD138:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD168
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD168:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD198
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD198:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD1C8
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD1C8:
    addi r4, r4, 0x3
    bdnz lbl_801CD108
lbl_801CD1D0:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC348
    b lbl_801CD408
lbl_801CD1E8:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD2E4
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CD21C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD24C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD24C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD27C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD27C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD2AC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD2AC:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD2DC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD2DC:
    addi r4, r4, 0x3
    bdnz lbl_801CD21C
lbl_801CD2E4:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC6FC
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD3F4
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CD32C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD35C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD35C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD38C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD38C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD3BC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD3BC:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD3EC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD3EC:
    addi r4, r4, 0x3
    bdnz lbl_801CD32C
lbl_801CD3F4:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC6FC
lbl_801CD408:
    mr r10, r31
    opword 0xE3EA0068
    lfd f31, 0x60(r31)
    opword 0xE3CA0058
    lfd f30, 0x50(r31)
    opword 0xE3AA0048
    addi r11, r10, 0x40
    lfd f29, 0x40(r31)
    bl _restgpr_20
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_801CD440
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CD440() {
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stfd f31, 0x280(r1)
    opword 0xF3E10288
    addi r11, r1, 0x280
    bl _savegpr_22
    lhz r29, 0x50(r5)
    lis r31, lbl_803E65B0@ha
    lwz r6, 0x24(r5)
    mr r24, r3
    cmpwi r29, 0x0
    mr r25, r4
    mr r26, r5
    addi r31, r31, lbl_803E65B0@l
    addi r30, r6, 0x9c
    beq lbl_801CDE04
    lfs f1, lbl_804A1B80
    lfs f0, 0x88(r4)
    lwz r27, 0x0(r4)
    lwz r23, 0x4(r4)
    fcmpu cr0, f1, f0
    lwz r12, 0x8(r4)
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r27, 0x140(r1)
    stw r23, 0x144(r1)
    stw r12, 0x148(r1)
    stw r11, 0x14c(r1)
    stw r10, 0x150(r1)
    stw r9, 0x154(r1)
    stw r8, 0x158(r1)
    stw r7, 0x15c(r1)
    stw r6, 0x160(r1)
    stw r5, 0x164(r1)
    stw r3, 0x168(r1)
    stw r0, 0x16c(r1)
    beq lbl_801CD600
    addi r3, r1, 0x90
    bl GXGetProjectionv
    lfs f0, 0x90(r1)
    fctiwz f0, f0
    stfd f0, 0x248(r1)
    lwz r0, 0x24c(r1)
    cmpwi r0, 0x1
    beq lbl_801CD5F0
    bge lbl_801CD600
    cmpwi r0, 0x0
    bge lbl_801CD524
    b lbl_801CD600
lbl_801CD524:
    mr r3, r25
    addi r4, r25, 0x8c
    addi r5, r1, 0x38
    bl fn_8030D7E0
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801CD5DC
    lfs f1, 0x40(r1)
    lfs f0, lbl_804A1B80
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801CD59C
    lfs f3, 0x88(r25)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801CD600
lbl_801CD59C:
    lfs f3, 0x88(r25)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801CD600
lbl_801CD5DC:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
    b lbl_801CD600
lbl_801CD5F0:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
lbl_801CD600:
    mr r5, r26
    addi r3, r1, 0x170
    addi r4, r1, 0x140
    bl fn_801C0E98
    lfs f0, 0x198(r1)
    addi r3, r1, 0x22c
    lfs f1, 0x188(r1)
    addi r4, r1, 0x1d8
    lfs f2, 0x178(r1)
    addi r5, r1, 0x2c
    stfs f1, 0x30(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x34(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r4, r24
    mr r5, r30
    addi r3, r1, 0x68
    addi r6, r1, 0x170
    bl fn_801CDE24
    lwz r3, 0x3c(r26)
    lfs f1, lbl_804A1B84
    b lbl_801CD688
lbl_801CD658:
    lfs f0, 0xcc(r3)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_801CD690
    lfs f0, 0x68(r1)
    stfs f0, 0xcc(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0xd0(r3)
    lfs f0, 0x70(r1)
    stfs f0, 0xd4(r3)
    lhz r0, 0x42(r26)
    lwzx r3, r3, r0
lbl_801CD688:
    cmpwi r3, 0x0
    bne lbl_801CD658
lbl_801CD690:
    lbz r4, 0xad(r30)
    lhz r5, 0x0(r30)
    subi r3, r4, 0x2
    subfic r0, r4, 0x2
    nor r0, r3, r0
    lwz r23, 0x0(r25)
    extrwi r3, r5, 1, 20
    lfs f1, lbl_804A1B80
    srawi r0, r0, 31
    lfs f0, 0x88(r25)
    lwz r12, 0x4(r25)
    rlwinm r27, r0, 0, 28, 28
    neg r3, r3
    lwz r11, 0x8(r25)
    lwz r10, 0xc(r25)
    rlwinm r28, r5, 0, 20, 20
    lwz r9, 0x10(r25)
    rlwimi r27, r3, 0, 27, 27
    lwz r8, 0x14(r25)
    fcmpu cr0, f1, f0
    lwz r7, 0x18(r25)
    lwz r6, 0x1c(r25)
    lwz r5, 0x20(r25)
    lwz r4, 0x24(r25)
    lwz r3, 0x28(r25)
    lwz r0, 0x2c(r25)
    stw r23, 0x110(r1)
    stw r12, 0x114(r1)
    stw r11, 0x118(r1)
    stw r10, 0x11c(r1)
    stw r9, 0x120(r1)
    stw r8, 0x124(r1)
    stw r7, 0x128(r1)
    stw r6, 0x12c(r1)
    stw r5, 0x130(r1)
    stw r4, 0x134(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    beq lbl_801CD838
    addi r3, r1, 0x74
    bl GXGetProjectionv
    lfs f0, 0x74(r1)
    fctiwz f0, f0
    stfd f0, 0x248(r1)
    lwz r0, 0x24c(r1)
    cmpwi r0, 0x1
    beq lbl_801CD828
    bge lbl_801CD838
    cmpwi r0, 0x0
    bge lbl_801CD75C
    b lbl_801CD838
lbl_801CD75C:
    mr r3, r25
    addi r4, r25, 0x8c
    addi r5, r1, 0x20
    bl fn_8030D7E0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801CD814
    lfs f1, 0x28(r1)
    lfs f0, lbl_804A1B80
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801CD7D4
    lfs f3, 0x88(r25)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x13c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x11c(r1)
    lfs f2, 0x12c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x11c(r1)
    stfs f2, 0x12c(r1)
    stfs f0, 0x13c(r1)
    b lbl_801CD838
lbl_801CD7D4:
    lfs f3, 0x88(r25)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x13c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x11c(r1)
    lfs f2, 0x12c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x11c(r1)
    stfs f2, 0x12c(r1)
    stfs f0, 0x13c(r1)
    b lbl_801CD838
lbl_801CD814:
    lfs f1, 0x13c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x13c(r1)
    b lbl_801CD838
lbl_801CD828:
    lfs f1, 0x13c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x13c(r1)
lbl_801CD838:
    addi r3, r1, 0x110
    addi r4, r1, 0x1a8
    mr r5, r3
    bl PSMTXConcat
    rlwinm. r22, r27, 0, 28, 28
    beq lbl_801CD8AC
    addi r3, r1, 0x110
    addi r4, r1, 0xe0
    bl PSMTXInverse
    cmpwi r3, 0x0
    beq lbl_801CD88C
    lfs f2, 0x108(r1)
    lfs f1, 0xf8(r1)
    lfs f0, 0xe8(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x238(r1)
    stfs f1, 0x23c(r1)
    stfs f2, 0x240(r1)
    b lbl_801CD8AC
lbl_801CD88C:
    lfs f1, lbl_804A1B80
    lfs f0, lbl_804A1B84
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f1, 0x238(r1)
    stfs f1, 0x23c(r1)
    stfs f0, 0x240(r1)
lbl_801CD8AC:
    lbz r0, 0xb2(r30)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    bne lbl_801CD8C4
    cmpwi r29, 0x3
    blt lbl_801CD8D4
lbl_801CD8C4:
    cmpwi r0, 0x0
    bne lbl_801CDADC
    cmpwi r29, 0x2
    bge lbl_801CDADC
lbl_801CD8D4:
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r26
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r25, r3
    mr r3, r24
    mr r4, r28
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r23, r3
    mr r3, r24
    mr r4, r28
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r12, r23
    mr r24, r3
    mr r3, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_801CDE04
    lfs f31, lbl_804A1B78
    addi r23, r1, 0x5c
    b lbl_801CDAD0
lbl_801CD950:
    mr r12, r25
    mr r5, r27
    addi r3, r1, 0x5c
    addi r4, r1, 0x170
    mtctr r12
    bctrl
    cmpwi r22, 0x0
    bne lbl_801CD984
    mr r3, r23
    addi r4, r27, 0xcc
    addi r5, r1, 0x8
    bl fn_8030DEEC
    b lbl_801CD994
lbl_801CD984:
    mr r3, r23
    addi r4, r1, 0x238
    addi r5, r1, 0x8
    bl fn_8030DEEC
lbl_801CD994:
    opword 0xE021000C
    opword 0xE0018008
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    bge lbl_801CD9B8
    li r0, 0x0
    b lbl_801CD9D8
lbl_801CD9B8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010008
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018010
    opword 0xF0410008
    opword 0x10400058
    opword 0xF0418010
lbl_801CD9D8:
    cmpwi r0, 0x0
    bne lbl_801CD9F8
    lfs f2, 0x22c(r1)
    lfs f1, 0x230(r1)
    lfs f0, 0x234(r1)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
lbl_801CD9F8:
    mr r4, r23
    addi r3, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8030DEEC
    opword 0xE0210018
    opword 0xE0018014
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    blt lbl_801CDA40
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010014
    opword 0x10400058
    opword 0xE001801C
    opword 0xF0410014
    opword 0x10400058
    opword 0xF041801C
lbl_801CDA40:
    lfs f0, 0x14(r1)
    mr r12, r24
    mr r3, r26
    mr r4, r27
    stfs f0, 0xcc(r27)
    lfs f0, 0x18(r1)
    stfs f0, 0xd0(r27)
    lfs f0, 0x1c(r1)
    stfs f0, 0xd4(r27)
    lfs f0, 0xb4(r27)
    lfs f1, 0x1c(r1)
    lfs f2, 0x64(r1)
    lfs f3, 0x10(r1)
    lfs f4, 0xb0(r27)
    lfs f5, 0x18(r1)
    lfs f6, 0x60(r1)
    lfs f7, 0xc(r1)
    lfs f8, 0xac(r27)
    lfs f9, 0x14(r1)
    lfs f10, 0x5c(r1)
    lfs f11, 0x8(r1)
    stfs f10, 0xb4(r1)
    stfs f11, 0xb0(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f2, 0xd4(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xdc(r1)
    mtctr r12
    bctrl
    mr r27, r3
lbl_801CDAD0:
    cmpwi r27, 0x0
    bne lbl_801CD950
    b lbl_801CDE04
lbl_801CDADC:
    lwz r5, 0x24(r26)
    mr r3, r24
    mr r4, r26
    mr r6, r25
    addi r5, r5, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r24)
    cmpwi r0, 0x0
    beq lbl_801CDB2C
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801CDB2C:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    addi r3, r1, 0x110
    li r4, 0x0
    bl GXLoadPosMtxImm
    lbz r5, 0xd0(r24)
    mr r3, r24
    lwz r12, 0x0(r24)
    neg r4, r5
    lhz r0, 0x0(r30)
    or r4, r4, r5
    lwz r12, 0x10(r12)
    srwi r5, r4, 31
    rlwinm r4, r0, 0, 20, 20
    or r27, r27, r5
    mtctr r12
    bctrl
    mr r12, r3
    mr r3, r26
    mtctr r12
    bctrl
    mr r28, r3
    mr r3, r24
    mr r4, r28
    mr r5, r30
    mr r6, r25
    li r7, 0x1
    li r8, 0x0
    bl fn_801BF940
    lbz r29, 0xb1(r30)
    cmpwi r29, 0x0
    bne lbl_801CDBE0
    li r29, 0x1
lbl_801CDBE0:
    lbz r0, lbl_8049D9A0
    extsb. r0, r0
    bne lbl_801CDC0C
    lfs f1, lbl_804A1B84
    li r0, 0x1
    lfs f0, lbl_804A1B80
    addi r3, r31, 0x0
    stfs f1, 0x0(r31)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A0
lbl_801CDC0C:
    lbz r0, lbl_8049D9A1
    extsb. r0, r0
    bne lbl_801CDC38
    lfs f1, lbl_804A1B94
    li r0, 0x1
    lfs f0, lbl_804A1B80
    addi r3, r31, 0xc
    stfs f1, 0xc(r31)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A1
lbl_801CDC38:
    lbz r0, lbl_8049D9A2
    extsb. r0, r0
    bne lbl_801CDC64
    lfs f1, lbl_804A1B80
    addi r3, r31, 0x18
    lfs f0, lbl_804A1B84
    li r0, 0x1
    stfs f1, 0x18(r31)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A2
lbl_801CDC64:
    lbz r0, lbl_8049D9A3
    extsb. r0, r0
    bne lbl_801CDC90
    lfs f1, lbl_804A1B80
    addi r3, r31, 0x24
    lfs f0, lbl_804A1B94
    li r0, 0x1
    stfs f1, 0x24(r31)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A3
lbl_801CDC90:
    lbz r0, 0xad(r30)
    cmpwi r0, 0x3
    beq lbl_801CDDBC
    lwz r3, 0x170(r1)
    lwz r3, 0x24(r3)
    lbz r0, 0x14e(r3)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801CDCE8
    bge lbl_801CDCBC
    b lbl_801CDCC8
lbl_801CDCBC:
    cmpwi r0, 0x3
    bge lbl_801CDCC8
    b lbl_801CDD08
lbl_801CDCC8:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x0
    addi r8, r31, 0xc
    bl fn_801CB360
    b lbl_801CDD24
lbl_801CDCE8:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x0
    addi r8, r31, 0xc
    bl fn_801CB6C8
    b lbl_801CDD24
lbl_801CDD08:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x0
    addi r8, r31, 0xc
    bl fn_801CBAE8
lbl_801CDD24:
    lbz r0, 0xad(r30)
    cmplwi r0, 0x1
    bne lbl_801CDE04
    lwz r3, 0x170(r1)
    lwz r3, 0x24(r3)
    lbz r0, 0x14e(r3)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801CDD7C
    bge lbl_801CDD50
    b lbl_801CDD5C
lbl_801CDD50:
    cmpwi r0, 0x3
    bge lbl_801CDD5C
    b lbl_801CDD9C
lbl_801CDD5C:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x18
    addi r8, r31, 0x24
    bl fn_801CB360
    b lbl_801CDE04
lbl_801CDD7C:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x18
    addi r8, r31, 0x24
    bl fn_801CB6C8
    b lbl_801CDE04
lbl_801CDD9C:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x18
    addi r8, r31, 0x24
    bl fn_801CBAE8
    b lbl_801CDE04
lbl_801CDDBC:
    lhz r0, 0x0(r30)
    li r7, 0x0
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801CDDEC
    lwz r3, 0xc8(r28)
    lwz r3, 0x20(r3)
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    lbz r0, -0x3f9c(r3)
    cmpwi r0, 0x0
    bne lbl_801CDDF0
lbl_801CDDEC:
    li r7, 0x1
lbl_801CDDF0:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    bl fn_801CCC6C
lbl_801CDE04:
    opword 0xE3E10288
    addi r11, r1, 0x280
    lfd f31, 0x280(r1)
    bl _restgpr_22
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

// ----------------------------------------------------------------------------
// fn_801CDE24
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CDE24() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lbz r0, 0xae(r5)
    stw r31, 0x7c(r1)
    mr r31, r6
    cmplwi r0, 0x7
    stw r30, 0x78(r1)
    mr r30, r3
    bne lbl_801CDF8C
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801CDE9C
    lis r4, jumptable_80360A4C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80360A4C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lfs f2, 0x88(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f1, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801CE044
lbl_801CDE9C:
    lfs f2, 0x8c(r6)
    lfs f1, 0x7c(r6)
    lfs f0, 0x6c(r6)
    stfs f1, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801CE044
    lfs f2, 0x90(r6)
    lfs f1, 0x80(r6)
    lfs f0, 0x70(r6)
    stfs f1, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f2, 0x4c(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801CE044
    lfs f3, 0x7c(r6)
    lfs f2, 0x6c(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f2, 0x14(r1)
    lfs f4, 0x8c(r6)
    stfs f3, 0x18(r1)
    lfs f2, 0x88(r6)
    lfs f5, 0x80(r6)
    lfs f3, 0x70(r6)
    lfs f6, 0x90(r6)
    stfs f0, 0x20(r1)
    opword 0xE0E10014
    stfs f1, 0x24(r1)
    opword 0xE0010020
    stfs f4, 0x1c(r1)
    opword 0x1000382A
    stfs f2, 0x28(r1)
    opword 0xE0E1801C
    opword 0xF001002C
    opword 0xE0018028
    stfs f3, 0x8(r1)
    opword 0x1000382A
    opword 0xE021002C
    stfs f5, 0xc(r1)
    opword 0xE0410008
    stfs f6, 0x10(r1)
    opword 0x1021102A
    opword 0xE0418010
    opword 0xF0018034
    opword 0xF0210038
    opword 0x1020102A
    lfs f2, 0x38(r1)
    opword 0xF0218040
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801CE044
lbl_801CDF8C:
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801CDFD8
    lis r4, jumptable_803609E8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_803609E8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r5, lbl_803E6550@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6550@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801CE044
lbl_801CDFD8:
    lfs f2, 0x98(r6)
    lfs f1, 0x9c(r6)
    lfs f0, 0xa0(r6)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801CE0AC
    lis r5, lbl_803E6568@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801CE044
    lfs f0, lbl_804A1B84
    addi r4, r6, 0x8
    addi r5, r1, 0x68
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801CE044:
    opword 0xE03E0004
    opword 0xE05E8000
    opword 0x10210072
    lfs f0, lbl_804A1B78
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE06C
    li r0, 0x0
    b lbl_801CE08C
lbl_801CE06C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801CE08C:
    cmpwi r0, 0x0
    bne lbl_801CE0AC
    lfs f2, 0x98(r31)
    lfs f1, 0x9c(r31)
    lfs f0, 0xa0(r31)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
lbl_801CE0AC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE0C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE0C4() {
    nofralloc
    lwz r4, 0x24(r4)
    lbz r0, 0x14a(r4)
    cmplwi r0, 0x7
    bgt lbl_801CE16C
    lis r3, jumptable_80360AB0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80360AB0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
    lis r3, fn_801C2DC8@ha
    addi r3, r3, fn_801C2DC8@l
    blr
    lis r3, fn_801C2E84@ha
    addi r3, r3, fn_801C2E84@l
    blr
    lis r3, fn_801CE178@ha
    addi r3, r3, fn_801CE178@l
    blr
    lis r3, fn_801C53B8@ha
    addi r3, r3, fn_801C53B8@l
    blr
    lbz r0, 0x14e(r4)
    clrlwi r0, r0, 29
    cmpwi r0, 0x2
    beq lbl_801CE154
    bge lbl_801CE160
    cmpwi r0, 0x1
    bge lbl_801CE148
    b lbl_801CE160
lbl_801CE148:
    lis r3, fn_801CE4F8@ha
    addi r3, r3, fn_801CE4F8@l
    blr
lbl_801CE154:
    lis r3, fn_801CE7A8@ha
    addi r3, r3, fn_801CE7A8@l
    blr
lbl_801CE160:
    lis r3, fn_801CE290@ha
    addi r3, r3, fn_801CE290@l
    blr
lbl_801CE16C:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE178
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE178() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x0(r4)
    lhz r7, 0x42(r6)
    add r6, r5, r7
    lwz r6, 0x4(r6)
    b lbl_801CE1B0
lbl_801CE1A8:
    add r6, r6, r7
    lwz r6, 0x4(r6)
lbl_801CE1B0:
    cmpwi r6, 0x0
    beq lbl_801CE1C4
    lwz r0, 0xc(r6)
    cmpwi r0, 0x1
    bne lbl_801CE1A8
lbl_801CE1C4:
    cmpwi r6, 0x0
    beq lbl_801CE1F0
    opword 0xE02500AC
    opword 0xE00600AC
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00680B4
    opword 0x10010028
    opword 0xF0038008
    b lbl_801CE210
lbl_801CE1F0:
    opword 0xE02500AC
    opword 0xE00400A4
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00480AC
    opword 0x10010028
    opword 0xF0038008
lbl_801CE210:
    opword 0xE0230004
    opword 0xE0438000
    opword 0x10210072
    lfs f0, lbl_804A1B78
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE238
    li r0, 0x0
    b lbl_801CE258
lbl_801CE238:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801CE258:
    cmpwi r0, 0x0
    bne lbl_801CE278
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801CE278:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE290
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE290() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801CE2CC
lbl_801CE2C8:
    lwzx r4, r4, r6
lbl_801CE2CC:
    cmpwi r4, 0x0
    beq lbl_801CE2E0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801CE2C8
lbl_801CE2E0:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801CE2F4
lbl_801CE2EC:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801CE2F4:
    cmpwi r31, 0x0
    beq lbl_801CE308
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801CE2EC
lbl_801CE308:
    lfs f0, lbl_804A1B80
    cmpwi r4, 0x0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_801CE3AC
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE368
    li r0, 0x0
    b lbl_801CE388
lbl_801CE368:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801CE388:
    cmpwi r0, 0x0
    bne lbl_801CE3AC
    lfs f0, lbl_804A1B80
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801CE3AC:
    lfs f0, lbl_804A1B80
    cmpwi r31, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801CE450
    opword 0xE07F00AC
    opword 0xE05E00AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE07F80B4
    opword 0xE05E80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE40C
    li r0, 0x0
    b lbl_801CE42C
lbl_801CE40C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801CE42C:
    cmpwi r0, 0x0
    bne lbl_801CE450
    lfs f0, lbl_804A1B80
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801CE450:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE498
    li r0, 0x0
    b lbl_801CE4B8
lbl_801CE498:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801CE4B8:
    cmpwi r0, 0x0
    bne lbl_801CE4D8
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801CE4D8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE4F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE4F8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r6, 0x0(r4)
    lhz r4, 0x42(r6)
    lwzx r7, r5, r4
    b lbl_801CE534
lbl_801CE530:
    lwzx r7, r7, r4
lbl_801CE534:
    cmpwi r7, 0x0
    beq lbl_801CE548
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801CE530
lbl_801CE548:
    cmpwi r7, 0x0
    bne lbl_801CE590
    lwz r7, 0x3c(r6)
    b lbl_801CE57C
lbl_801CE558:
    lhz r3, 0x42(r6)
    lwzx r7, r7, r3
    b lbl_801CE568
lbl_801CE564:
    lwzx r7, r7, r3
lbl_801CE568:
    cmpwi r7, 0x0
    beq lbl_801CE57C
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801CE564
lbl_801CE57C:
    cmpwi r7, 0x0
    beq lbl_801CE590
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801CE558
lbl_801CE590:
    add r3, r5, r4
    lwz r28, 0x4(r3)
    b lbl_801CE5A4
lbl_801CE59C:
    add r3, r28, r4
    lwz r28, 0x4(r3)
lbl_801CE5A4:
    cmpwi r28, 0x0
    beq lbl_801CE5B8
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801CE59C
lbl_801CE5B8:
    cmpwi r28, 0x0
    bne lbl_801CE5E8
    lwz r28, 0x38(r6)
    b lbl_801CE5D4
lbl_801CE5C8:
    lhz r0, 0x42(r6)
    add r3, r28, r0
    lwz r28, 0x4(r3)
lbl_801CE5D4:
    cmpwi r28, 0x0
    beq lbl_801CE5E8
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801CE5C8
lbl_801CE5E8:
    opword 0xE06700AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE06780B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE630
    li r0, 0x0
    b lbl_801CE650
lbl_801CE630:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801CE650:
    cmpwi r0, 0x0
    bne lbl_801CE674
    lfs f0, lbl_804A1B80
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801CE674:
    opword 0xE07C00AC
    opword 0xE05F00AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE07C80B4
    opword 0xE05F80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE6BC
    li r0, 0x0
    b lbl_801CE6DC
lbl_801CE6BC:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801CE6DC:
    cmpwi r0, 0x0
    bne lbl_801CE700
    lfs f0, lbl_804A1B80
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801CE700:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03D0000
    opword 0x10231028
    opword 0xE05D8000
    opword 0xF03D8008
    opword 0xE03D0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE748
    li r0, 0x0
    b lbl_801CE768
lbl_801CE748:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05D0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05D8008
    opword 0xF01D0000
    opword 0x10020058
    opword 0xF01D8008
lbl_801CE768:
    cmpwi r0, 0x0
    bne lbl_801CE788
    lfs f0, 0x98(r30)
    stfs f0, 0x0(r29)
    lfs f0, 0x9c(r30)
    stfs f0, 0x4(r29)
    lfs f0, 0xa0(r30)
    stfs f0, 0x8(r29)
lbl_801CE788:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE7A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE7A8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801CE7E4
lbl_801CE7E0:
    lwzx r4, r4, r6
lbl_801CE7E4:
    cmpwi r4, 0x0
    beq lbl_801CE7F8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801CE7E0
lbl_801CE7F8:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801CE80C
lbl_801CE804:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801CE80C:
    cmpwi r31, 0x0
    beq lbl_801CE820
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801CE804
lbl_801CE820:
    lfs f0, lbl_804A1B80
    cmpwi r4, 0x0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    beq lbl_801CE894
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF0210014
    opword 0x10231028
    opword 0xE0418014
    opword 0xF021801C
    opword 0xE0210018
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801CE894
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410014
    opword 0x10020058
    opword 0xE041801C
    opword 0xF0010014
    opword 0x10020058
    opword 0xF001801C
lbl_801CE894:
    cmpwi r31, 0x0
    beq lbl_801CE8C0
    opword 0xE05F00AC
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05F80B4
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
    b lbl_801CE8E0
lbl_801CE8C0:
    opword 0xE05D00A4
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05D80AC
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
lbl_801CE8E0:
    opword 0xE021000C
    opword 0xE0418008
    opword 0x10210072
    lfs f0, lbl_804A1B78
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801CE91C
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410008
    opword 0x10020058
    opword 0xE0418010
    opword 0xF0010008
    opword 0x10020058
    opword 0xF0018010
lbl_801CE91C:
    opword 0xE0610014
    opword 0xE0410008
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE061801C
    opword 0xE0418010
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE964
    li r0, 0x0
    b lbl_801CE984
lbl_801CE964:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801CE984:
    cmpwi r0, 0x0
    bne lbl_801CE9A4
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801CE9A4:
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
// fn_801CE9C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9C4() {
    nofralloc
    lwz r4, 0x0(r4)
    addi r0, r4, 0x8
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE9D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9D4() {
    nofralloc
    lwz r4, 0x0(r4)
    lwz r0, 0x4(r4)
    add r4, r0, r4
    addi r0, r4, 0xc
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE9EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9EC() {
    nofralloc
    lwz r3, 0x0(r3)
    lfs f1, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE9F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9F8() {
    nofralloc
    lwz r3, 0x0(r3)
    addi r3, r3, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CEA04
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CEA04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r4, 0x0(r4)
    stw r0, 0x14(r1)
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    lwz r3, 0x0(r5)
    cmplw r3, r0
    bne lbl_801CEA40
    addi r3, r5, 0x4
    addi r4, r4, 0x4
    bl strcmp
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_801CEA44
lbl_801CEA40:
    li r3, 0x0
lbl_801CEA44:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CEA54
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CEA54() {
    nofralloc
    srwi r6, r4, 24
    extrwi r5, r4, 8, 8
    extrwi r0, r4, 8, 16
    li r7, 0x61
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    stb r4, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CEA7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CEA7C() {
    nofralloc
    srwi r7, r5, 24
    extrwi r6, r5, 8, 8
    extrwi r0, r5, 8, 16
    li r8, 0x8
    stb r8, 0x0(r3)
    stb r4, 0x1(r3)
    stb r7, 0x2(r3)
    stb r6, 0x3(r3)
    stb r0, 0x4(r3)
    stb r5, 0x5(r3)
    blr
}

