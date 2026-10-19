#include "types.h"

// Translation unit: src/nw4r/ef/unk_801A971C.cpp
// Total functions: 134

// Small Data symbols (@sda21)
extern "C" float lbl_8049C438;
extern "C" float lbl_8049D960;
extern "C" float lbl_8049D964;
extern "C" float lbl_8049D968;
extern "C" float lbl_8049D96C;
extern "C" float lbl_8049D970;
extern "C" float lbl_804A16F0;
extern "C" float lbl_804A16F8;
extern "C" float lbl_804A16FC;
extern "C" float lbl_804A1700;
extern "C" float lbl_804A1704;
extern "C" float lbl_804A1708;
extern "C" float lbl_804A1710;
extern "C" float lbl_804A1718;
extern "C" float lbl_804A1720;
extern "C" float lbl_804A1724;
extern "C" float lbl_804A1728;
extern "C" float lbl_804A172C;
extern "C" float lbl_804A1730;
extern "C" float lbl_804A1738;
extern "C" float lbl_804A1740;
extern "C" float lbl_804A1748;
extern "C" float lbl_804A1750;
extern "C" float lbl_804A1754;
extern "C" float lbl_804A1758;
extern "C" float lbl_804A175C;
extern "C" float lbl_804A1760;
extern "C" float lbl_804A1764;
extern "C" float lbl_804A1768;
extern "C" float lbl_804A176C;
extern "C" float lbl_804A1770;
extern "C" float lbl_804A1774;
extern "C" float lbl_804A1778;
extern "C" float lbl_804A177C;
extern "C" float lbl_804A1780;
extern "C" float lbl_804A1784;
extern "C" float lbl_804A1788;
extern "C" float lbl_804A178C;
extern "C" float lbl_804A1790;
extern "C" float lbl_804A1794;
extern "C" float lbl_804A1798;
extern "C" float lbl_804A179C;
extern "C" float lbl_804A17A0;
extern "C" float lbl_804A17A4;
extern "C" float lbl_804A17A8;
extern "C" float lbl_804A17AC;
extern "C" float lbl_804A17B0;
extern "C" float lbl_804A17B4;
extern "C" float lbl_804A17B8;
extern "C" float lbl_804A17BC;
extern "C" float lbl_804A17C0;
extern "C" float lbl_804A17C8;
extern "C" float lbl_804A17D0;
extern "C" float lbl_804A17D1;
extern "C" float lbl_804A17D2;
extern "C" float lbl_804A17D3;
extern "C" float lbl_804A17D4;
extern "C" float lbl_804A17D5;
extern "C" float lbl_804A17D6;
extern "C" float lbl_804A17D7;
extern "C" float lbl_804A17D8;
extern "C" float lbl_804A17DC;
extern "C" float lbl_804A17E0;
extern "C" float lbl_804A17E8;
extern "C" float lbl_804A17F0;
extern "C" float lbl_804A17F4;
extern "C" float lbl_804A17F8;
extern "C" float lbl_804A17FC;
extern "C" float lbl_804A1800;
extern "C" float lbl_804A1804;
extern "C" float lbl_804A1808;
extern "C" float lbl_804A180C;
extern "C" float lbl_804A1810;
extern "C" float lbl_804A1814;
extern "C" float lbl_804A1818;
extern "C" float lbl_804A1820;
extern "C" float lbl_804A1828;
extern "C" float lbl_804A1830;
extern "C" float lbl_804A1838;
extern "C" float lbl_804A183C;
extern "C" float lbl_804A1840;
extern "C" float lbl_804A1848;
extern "C" float lbl_804A184C;
extern "C" float lbl_804A1850;
extern "C" float lbl_804A1854;
extern "C" float lbl_804A1858;
extern "C" float lbl_804A185C;
extern "C" float lbl_804A1860;
extern "C" float lbl_804A1868;
extern "C" float lbl_804A1870;
extern "C" float lbl_804A1874;
extern "C" float lbl_804A1878;
extern "C" float lbl_804A187C;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_803606E8[];
extern "C" u8 jumptable_8036070C[];
extern "C" u8 lbl_8033C7B0[];
extern "C" u8 lbl_80360428[];
extern "C" u8 lbl_80360440[];
extern "C" u8 lbl_803604A8[];
extern "C" u8 lbl_803604D0[];
extern "C" u8 lbl_803605D0[];
extern "C" u8 lbl_803606D0[];
extern "C" u8 lbl_80360730[];
extern "C" u8 lbl_8036077C[];
extern "C" u8 lbl_80360814[];
extern "C" u8 lbl_803D9D58[];
extern "C" u8 lbl_803D9E08[];
extern "C" u8 lbl_803E5E70[];
extern "C" u8 lbl_803E5EA0[];
extern "C" u8 lbl_8049C440[];
extern "C" u8 lbl_804A1880[];

// Forward declarations
extern "C" void AXFXReverbHiSettings();
extern "C" void CosFIdx__Q24nw4r4mathFf();
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs();
extern "C" void List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f();
extern "C" void MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void OSRegisterVersion();
extern "C" void PSMTXConcat();
extern "C" void PSMTXCopy();
extern "C" void PSMTXIdentity();
extern "C" void PSMTXInverse();
extern "C" void PSMTXTransApply();
extern "C" void SinFIdx__Q24nw4r4mathFf();
extern "C" void __construct_new_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void __fpclassifyf();
extern "C" void __register_global_object();
extern "C" void _restgpr_14();
extern "C" void _restgpr_16();
extern "C" void _restgpr_18();
extern "C" void _restgpr_19();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_14();
extern "C" void _savegpr_16();
extern "C" void _savegpr_18();
extern "C" void _savegpr_19();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void asin();
extern "C" void atan2();
extern "C" void ceil();
extern "C" void dtor_80136CFC();
extern "C" void fmod();
extern "C" void fn_801A971C();
extern "C" void fn_801A9780();
extern "C" void fn_801A97E0();
extern "C" void fn_801A9914();
extern "C" void fn_801A9920();
extern "C" void fn_801A9924();
extern "C" void fn_801A9A28();
extern "C" void fn_801A9B1C();
extern "C" void fn_801A9BA4();
extern "C" void fn_801A9C7C();
extern "C" void fn_801A9D00();
extern "C" void fn_801AA130();
extern "C" void fn_801AA160();
extern "C" void fn_801AA168();
extern "C" void fn_801AA208();
extern "C" void fn_801AA298();
extern "C" void fn_801AA370();
extern "C" void fn_801AA3E0();
extern "C" void fn_801AA4D4();
extern "C" void fn_801AA55C();
extern "C" void fn_801AA568();
extern "C" void fn_801AA670();
extern "C" void fn_801AA6B8();
extern "C" void fn_801AA71C();
extern "C" void fn_801AA78C();
extern "C" void fn_801AA8B0();
extern "C" void fn_801AA94C();
extern "C" void fn_801AAA44();
extern "C" void fn_801AAAD4();
extern "C" void fn_801AAB64();
extern "C" void fn_801AAC04();
extern "C" void fn_801AAC8C();
extern "C" void fn_801AADB4();
extern "C" void fn_801AAE0C();
extern "C" void fn_801AAE4C();
extern "C" void fn_801AAED0();
extern "C" void fn_801AAEDC();
extern "C" void fn_801AAFC4();
extern "C" void fn_801AB06C();
extern "C" void fn_801AB144();
extern "C" void fn_801AB424();
extern "C" void fn_801AB594();
extern "C" void fn_801AB870();
extern "C" void fn_801ABFA8();
extern "C" void fn_801AC0A4();
extern "C" void fn_801AC4E8();
extern "C" void fn_801AC6A0();
extern "C" void fn_801AC728();
extern "C" void fn_801AC83C();
extern "C" void fn_801ACA14();
extern "C" void fn_801ACC48();
extern "C" void fn_801ACD98();
extern "C" void fn_801ACEA8();
extern "C" void fn_801ACEF0();
extern "C" void fn_801ACFD4();
extern "C" void fn_801ACFE0();
extern "C" void fn_801AE2D8();
extern "C" void fn_801AF2C4();
extern "C" void fn_801B03BC();
extern "C" void fn_801B0990();
extern "C" void fn_801B0AF4();
extern "C" void fn_801B1894();
extern "C" void fn_801B1BDC();
extern "C" void fn_801B1F28();
extern "C" void fn_801B2040();
extern "C" void fn_801B2120();
extern "C" void fn_801B21E8();
extern "C" void fn_801B22F4();
extern "C" void fn_801B23E4();
extern "C" void fn_801B2494();
extern "C" void fn_801B2930();
extern "C" void fn_801B2ED4();
extern "C" void fn_801B3460();
extern "C" void fn_801B3A98();
extern "C" void fn_801B426C();
extern "C" void fn_801B48B0();
extern "C" void fn_801B4C90();
extern "C" void fn_801B5504();
extern "C" void fn_801B5514();
extern "C" void fn_801B5554();
extern "C" void fn_801B5560();
extern "C" void fn_801B5564();
extern "C" void fn_801B587C();
extern "C" void fn_801B60F0();
extern "C" void fn_801B6324();
extern "C" void fn_801B637C();
extern "C" void fn_801B6388();
extern "C" void fn_801B638C();
extern "C" void fn_801B6418();
extern "C" void fn_801B64D8();
extern "C" void fn_801B6628();
extern "C" void fn_801B6668();
extern "C" void fn_801B6794();
extern "C" void fn_801B7CD8();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B8094();
extern "C" void fn_801B8100();
extern "C" void fn_801B8140();
extern "C" void fn_801B8238();
extern "C" void fn_801B823C();
extern "C" void fn_801B865C();
extern "C" void fn_801B8668();
extern "C" void fn_801B866C();
extern "C" void fn_801B8678();
extern "C" void fn_801B87DC();
extern "C" void fn_801B8894();
extern "C" void fn_801B8928();
extern "C" void fn_801B89B4();
extern "C" void fn_801B8A6C();
extern "C" void fn_801B8AE8();
extern "C" void fn_801B8B8C();
extern "C" void fn_801B8C08();
extern "C" void fn_801B8D28();
extern "C" void fn_801B8E24();
extern "C" void fn_801B9068();
extern "C" void fn_801B9108();
extern "C" void fn_801B916C();
extern "C" void fn_801B9270();
extern "C" void fn_801B92C0();
extern "C" void fn_801B9344();
extern "C" void fn_801B9448();
extern "C" void fn_801B955C();
extern "C" void fn_801B96C8();
extern "C" void fn_801B96E4();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9BF4();
extern "C" void fn_801B9C64();
extern "C" void fn_801B9CD8();
extern "C" void fn_801B9E1C();
extern "C" void fn_801B9F88();
extern "C" void fn_801BA008();
extern "C" void fn_801BA090();
extern "C" void fn_801BA138();
extern "C" void fn_801BA7E4();
extern "C" void fn_801BA7F0();
extern "C" void fn_801BA96C();
extern "C" void fn_801BAAEC();
extern "C" void fn_8030D7E0();
extern "C" void fn_8030DE44();
extern "C" void fn_8030DE88();
extern "C" void fn_8030DEEC();
extern "C" void fn_8030E000();
extern "C" void memcpy();
extern "C" void memset();
extern "C" void strcmp();

// ----------------------------------------------------------------------------
// fn_801A971C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A971C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80360440@ha
    li r4, 0x14
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80360440@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x1c(r3)
    addi r3, r3, 0x24
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r3, r31, 0x30
    li r4, 0x14
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r0, 0x0
    addi r3, r31, 0x90
    sth r0, 0x3c(r31)
    li r4, 0x30
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9780
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9780() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_801A97C4
    lis r4, lbl_80360440@ha
    addi r4, r4, lbl_80360440@l
    stw r4, 0x1c(r3)
    bl fn_801A9BA4
    cmpwi r31, 0x0
    ble lbl_801A97C4
    mr r3, r30
    bl dtor_80136CFC
lbl_801A97C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A97E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A97E0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r30, 0x0
    li r31, 0x1
    stw r30, 0x10(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    stw r31, 0xc(r3)
    mr r29, r6
    stw r30, 0x24(r3)
    sth r30, 0x2c(r3)
    stw r30, 0x28(r3)
    stw r30, 0x30(r3)
    sth r30, 0x38(r3)
    stw r30, 0x34(r3)
    sth r30, 0x3c(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x9c(r3)
    addi r3, r3, 0x54
    bl PSMTXIdentity
    lfs f0, lbl_804A16F0
    stw r27, 0x20(r26)
    stw r30, 0x44(r26)
    stw r30, 0x48(r26)
    stw r30, 0x4c(r26)
    stw r30, 0x50(r26)
    stfs f0, 0x84(r26)
    stfs f0, 0x88(r26)
    stfs f0, 0x8c(r26)
    lwz r3, 0x0(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_801A988C
    li r3, 0x0
    b lbl_801A98FC
lbl_801A988C:
    lwz r12, 0x1c(r3)
    mr r4, r26
    mr r5, r28
    li r6, 0x80
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801A98D0
    lwz r3, 0x0(r27)
    mr r4, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_801A98FC
lbl_801A98D0:
    mr r4, r30
    addi r3, r26, 0x24
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r4, 0x3c(r26)
    li r3, 0x1
    addi r0, r4, 0x1
    sth r0, 0x3c(r26)
    stw r31, 0xc(r30)
    lhz r0, 0xe8(r30)
    add r0, r0, r29
    sth r0, 0xe8(r30)
lbl_801A98FC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9914
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9914() {
    nofralloc
    mr r4, r3
    lwz r3, 0x20(r3)
    b fn_801AA6B8
}

// ----------------------------------------------------------------------------
// fn_801A9920
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9920() {
    nofralloc
    b fn_801A9BA4
}

// ----------------------------------------------------------------------------
// fn_801A9924
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9924() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0xf4(r4)
    cmpwi r5, 0x0
    beq lbl_801A997C
    lwz r0, 0x10(r5)
    subic. r0, r0, 0x1
    stw r0, 0x10(r5)
    bne lbl_801A997C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x2
    bne lbl_801A997C
    lwz r12, 0x1c(r5)
    mr r3, r5
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801A997C:
    lwz r3, 0xf8(r31)
    cmpwi r3, 0x0
    beq lbl_801A99BC
    lwz r0, 0x10(r3)
    subic. r0, r0, 0x1
    stw r0, 0x10(r3)
    bne lbl_801A99B4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_801A99B4
    lwz r12, 0x1c(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801A99B4:
    li r0, 0x0
    stw r0, 0xf8(r31)
lbl_801A99BC:
    lwz r3, 0xbc(r31)
    lwz r0, 0x10(r3)
    subic. r0, r0, 0x1
    stw r0, 0x10(r3)
    bne lbl_801A99EC
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_801A99EC
    lwz r12, 0x1c(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801A99EC:
    mr r4, r31
    addi r3, r30, 0x24
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    mr r4, r31
    addi r3, r30, 0x30
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    li r0, 0x3
    li r3, 0x1
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9A28
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9A28() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x8(r4)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    rlwinm. r0, r0, 0, 1, 1
    mr r30, r6
    bne lbl_801A9A60
    li r3, 0x0
    b lbl_801A9B04
lbl_801A9A60:
    lwz r3, 0x20(r3)
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A9A8C
    li r3, 0x0
    b lbl_801A9B04
lbl_801A9A8C:
    lwz r12, 0x1c(r3)
    mr r4, r27
    mr r5, r28
    mr r6, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801A9AD4
    lwz r3, 0x20(r27)
    mr r4, r31
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_801A9B04
lbl_801A9AD4:
    mr r4, r31
    addi r3, r27, 0x24
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r4, 0x3c(r27)
    li r0, 0x1
    mr r3, r31
    addi r4, r4, 0x1
    sth r4, 0x3c(r27)
    stw r0, 0xc(r31)
    lhz r0, 0xe8(r31)
    add r0, r0, r30
    sth r0, 0xe8(r31)
lbl_801A9B04:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9B1C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9B1C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    beq lbl_801A9B44
    li r3, 0x0
    b lbl_801A9B90
lbl_801A9B44:
    lhz r4, 0x3c(r3)
    subi r0, r4, 0x1
    sth r0, 0x3c(r3)
    mr r3, r31
    lwz r12, 0x1c(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x10(r31)
    li r3, 0x2
    stw r3, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_801A9B8C
    lwz r12, 0x1c(r31)
    mr r3, r31
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801A9B8C:
    li r3, 0x1
lbl_801A9B90:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9BA4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9BA4() {
    nofralloc
    stwu r1, -0x1030(r1)
    mflr r0
    stw r0, 0x1034(r1)
    addi r11, r1, 0x1030
    bl _savegpr_25
    lhz r5, 0x2c(r3)
    mr r25, r3
    addi r4, r1, 0x8
    li r28, 0x0
    addi r3, r3, 0x24
    bl fn_801B92C0
    addi r29, r1, 0x8
    clrlwi r31, r3, 16
    li r27, 0x0
    li r30, 0x2
    b lbl_801A9C54
lbl_801A9BE4:
    clrlslwi r0, r27, 16, 2
    lwzx r26, r29, r0
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_801A9C50
    beq lbl_801A9C04
    li r0, 0x0
    b lbl_801A9C4C
lbl_801A9C04:
    lhz r4, 0x3c(r25)
    mr r3, r26
    subi r0, r4, 0x1
    sth r0, 0x3c(r25)
    lwz r12, 0x1c(r26)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r30, 0xc(r26)
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    bne lbl_801A9C48
    lwz r12, 0x1c(r26)
    mr r3, r26
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801A9C48:
    li r0, 0x1
lbl_801A9C4C:
    add r28, r28, r0
lbl_801A9C50:
    addi r27, r27, 0x1
lbl_801A9C54:
    clrlwi r0, r27, 16
    cmplw r0, r31
    blt lbl_801A9BE4
    addi r11, r1, 0x1030
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x1034(r1)
    mtlr r0
    addi r1, r1, 0x1030
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9C7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9C7C() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    addi r4, r1, 0x8
    stw r31, 0x101c(r1)
    stw r30, 0x1018(r1)
    stw r29, 0x1014(r1)
    li r29, 0x0
    stw r28, 0x1010(r1)
    lhz r5, 0x2c(r3)
    addi r3, r3, 0x24
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r28, 0x0
    b lbl_801A9CD0
lbl_801A9CBC:
    clrlslwi r0, r28, 16, 2
    lwzx r3, r30, r0
    bl fn_801AAE4C
    add r29, r29, r3
    addi r28, r28, 0x1
lbl_801A9CD0:
    clrlwi r0, r28, 16
    cmplw r0, r31
    blt lbl_801A9CBC
    lwz r31, 0x101c(r1)
    mr r3, r29
    lwz r30, 0x1018(r1)
    lwz r29, 0x1014(r1)
    lwz r28, 0x1010(r1)
    lwz r0, 0x1024(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9D00
// ----------------------------------------------------------------------------
extern "C" asm void fn_801A9D00() {
    nofralloc
    stwu r1, -0x1050(r1)
    mflr r0
    stw r0, 0x1054(r1)
    addi r11, r1, 0x1050
    bl _savegpr_26
    clrlwi. r0, r4, 31
    mr r30, r3
    beq lbl_801A9D7C
    li r28, 0x0
    b lbl_801A9D60
lbl_801A9D28:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801A9D60
    lwz r3, 0x24(r3)
    rlwinm. r0, r3, 0, 15, 15
    bne lbl_801A9D4C
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_801A9D60
lbl_801A9D4C:
    lwz r12, 0x1c(r28)
    mr r3, r28
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801A9D60:
    mr r4, r28
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_801A9D28
    b lbl_801AA118
lbl_801A9D7C:
    lwz r0, 0x50(r3)
    clrlwi. r0, r0, 31
    bne lbl_801AA118
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_801A9E18
    li r29, 0x0
    li r28, 0x0
    b lbl_801A9E00
lbl_801A9D9C:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801A9DBC
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x1
    bne lbl_801A9DBC
    stw r28, 0xb4(r3)
lbl_801A9DBC:
    lfs f0, 0x108(r3)
    li r31, 0x0
    stfs f0, 0x114(r3)
    lfs f0, 0x10c(r3)
    stfs f0, 0x118(r3)
    lfs f0, 0x110(r3)
    stfs f0, 0x11c(r3)
    b lbl_801A9DE8
lbl_801A9DDC:
    mr r3, r31
    li r4, 0x0
    bl fn_801B8094
lbl_801A9DE8:
    mr r4, r31
    addi r3, r29, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A9DDC
lbl_801A9E00:
    mr r4, r29
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_801A9D9C
lbl_801A9E18:
    lwz r0, 0x50(r30)
    addi r31, r1, 0x38
    li r29, 0x0
    oris r0, r0, 0x1
    stw r0, 0x50(r30)
    b lbl_801AA07C
lbl_801A9E30:
    lwz r0, 0x50(r30)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x50(r30)
lbl_801A9E3C:
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl fn_801B92C0
    clrlwi r28, r3, 16
    li r27, 0x0
    b lbl_801A9E74
lbl_801A9E58:
    clrlslwi r0, r27, 16, 2
    lwzx r3, r31, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r27, r27, 0x1
lbl_801A9E74:
    clrlwi r0, r27, 16
    cmplw r0, r28
    blt lbl_801A9E58
    li r27, 0x0
    b lbl_801A9EC0
lbl_801A9E88:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801A9EC0
    lwz r3, 0x24(r3)
    rlwinm. r0, r3, 0, 15, 15
    bne lbl_801A9EAC
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_801A9EC0
lbl_801A9EAC:
    lwz r12, 0x1c(r27)
    mr r3, r27
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801A9EC0:
    mr r4, r27
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801A9E88
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl fn_801B92C0
    clrlwi r28, r3, 16
    li r27, 0x0
    b lbl_801A9F44
lbl_801A9EF4:
    clrlslwi r0, r27, 16, 2
    lwzx r26, r31, r0
    lwz r0, 0xb4(r26)
    cmpwi r0, 0x0
    bne lbl_801A9F14
    lwz r3, 0xe4(r26)
    addi r0, r3, 0x1
    stw r0, 0xe4(r26)
lbl_801A9F14:
    lwz r12, 0x1c(r26)
    mr r3, r26
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r0, 0xb4(r26)
    cmpwi r0, 0x0
    bne lbl_801A9F40
    lwz r3, 0xe4(r26)
    subi r0, r3, 0x1
    stw r0, 0xe4(r26)
lbl_801A9F40:
    addi r27, r27, 0x1
lbl_801A9F44:
    clrlwi r0, r27, 16
    cmplw r0, r28
    blt lbl_801A9EF4
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl fn_801B92C0
    clrlwi r28, r3, 16
    li r26, 0x0
    b lbl_801A9F88
lbl_801A9F6C:
    clrlslwi r0, r26, 16, 2
    lwzx r3, r31, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
lbl_801A9F88:
    clrlwi r0, r26, 16
    cmplw r0, r28
    blt lbl_801A9F6C
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl fn_801B92C0
    clrlwi r28, r3, 16
    li r26, 0x0
    b lbl_801A9FCC
lbl_801A9FB0:
    clrlslwi r0, r26, 16, 2
    lwzx r3, r31, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
lbl_801A9FCC:
    clrlwi r0, r26, 16
    cmplw r0, r28
    blt lbl_801A9FB0
    lwz r3, 0x20(r30)
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801A9FF0
    bl fn_801BAAEC
    b lbl_801A9E3C
lbl_801A9FF0:
    lwz r0, 0x50(r30)
    rlwinm. r0, r0, 0, 15, 15
    beq lbl_801AA07C
    li r26, 0x0
    b lbl_801AA064
lbl_801AA004:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801AA038
    lhz r4, 0xe8(r3)
    cmpwi r4, 0x0
    beq lbl_801AA038
    beq lbl_801AA028
    subi r0, r4, 0x1
    sth r0, 0xe8(r3)
lbl_801AA028:
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x1
    bne lbl_801AA038
    stw r29, 0xb4(r3)
lbl_801AA038:
    li r27, 0x0
    b lbl_801AA04C
lbl_801AA040:
    mr r3, r27
    li r4, 0x1
    bl fn_801B8094
lbl_801AA04C:
    mr r4, r27
    addi r3, r26, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801AA040
lbl_801AA064:
    mr r4, r26
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_801AA004
lbl_801AA07C:
    lwz r0, 0x50(r30)
    rlwinm. r0, r0, 0, 15, 15
    bne lbl_801A9E30
    li r26, 0x0
    li r31, 0x1
    b lbl_801AA100
lbl_801AA094:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801AA0B4
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x3
    bne lbl_801AA0B4
    stw r31, 0xb4(r3)
lbl_801AA0B4:
    li r27, 0x0
    b lbl_801AA0C4
lbl_801AA0BC:
    mr r3, r27
    bl fn_801B8100
lbl_801AA0C4:
    mr r4, r27
    addi r3, r26, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801AA0BC
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_801ACC48
    lfs f0, 0x14(r1)
    stfs f0, 0x108(r26)
    lfs f0, 0x24(r1)
    stfs f0, 0x10c(r26)
    lfs f0, 0x34(r1)
    stfs f0, 0x110(r26)
lbl_801AA100:
    mr r4, r26
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_801AA094
lbl_801AA118:
    addi r11, r1, 0x1050
    bl _restgpr_26
    lwz r0, 0x1054(r1)
    mtlr r0
    addi r1, r1, 0x1050
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA130
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA130() {
    nofralloc
    lwz r0, 0x50(r3)
    mr r6, r3
    mr r5, r4
    rlwinm. r0, r0, 0, 30, 30
    bnelr
    lwz r3, 0x9c(r3)
    mr r4, r6
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA160
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA160() {
    nofralloc
    lwz r3, 0x24(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA168
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA168() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r31, 0x0
    li r4, 0x0
    addi r3, r3, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801AA1E4
lbl_801AA1A4:
    mr r4, r30
    addi r3, r25, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r28, 0x0
    mr r29, r3
    bne lbl_801AA1C8
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_801AA1E0
lbl_801AA1C8:
    mr r12, r26
    mr r3, r30
    mr r4, r27
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_801AA1E0:
    mr r30, r29
lbl_801AA1E4:
    cmpwi r30, 0x0
    bne lbl_801AA1A4
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA208
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA208() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r31, 0x0
    li r4, 0x0
    addi r3, r3, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801AA274
lbl_801AA244:
    mr r4, r30
    addi r3, r25, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r29, r3
    mr r3, r30
    mr r4, r26
    mr r5, r27
    mr r6, r28
    li r7, 0x0
    bl fn_801ACEF0
    add r31, r31, r3
    mr r30, r29
lbl_801AA274:
    cmpwi r30, 0x0
    bne lbl_801AA244
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA298
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA298() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r31, 0x0
    li r4, 0x0
    addi r3, r3, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801AA34C
lbl_801AA2D8:
    mr r4, r30
    addi r3, r24, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r27, 0x0
    mr r29, r3
    bne lbl_801AA2FC
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_801AA348
lbl_801AA2FC:
    mr r3, r30
    li r0, 0x0
    b lbl_801AA314
lbl_801AA308:
    cmplw r3, r28
    bne lbl_801AA314
    li r0, 0x1
lbl_801AA314:
    cmpwi r0, 0x0
    bne lbl_801AA328
    lwz r3, 0xf4(r3)
    cmpwi r3, 0x0
    bne lbl_801AA308
lbl_801AA328:
    cmpwi r0, 0x0
    beq lbl_801AA348
    mr r12, r25
    mr r3, r30
    mr r4, r26
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_801AA348:
    mr r30, r29
lbl_801AA34C:
    cmpwi r30, 0x0
    bne lbl_801AA2D8
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA370
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA370() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    addi r4, r30, 0x54
    bl PSMTXCopy
    li r31, 0x0
    b lbl_801AA3B0
lbl_801AA39C:
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    bne lbl_801AA3B0
    mr r3, r31
    bl fn_801ACD98
lbl_801AA3B0:
    mr r4, r31
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801AA39C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA3E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA3E0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r30, 0x0(r4)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    lwz r0, 0x8(r30)
    rlwinm. r0, r0, 0, 1, 1
    bne lbl_801AA418
    li r31, 0x0
    b lbl_801AA4B8
lbl_801AA418:
    lwz r3, 0x20(r3)
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801AA444
    li r31, 0x0
    b lbl_801AA4B8
lbl_801AA444:
    lwz r12, 0x1c(r3)
    mr r4, r27
    mr r5, r30
    mr r6, r28
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801AA48C
    lwz r3, 0x20(r27)
    mr r4, r31
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    li r31, 0x0
    b lbl_801AA4B8
lbl_801AA48C:
    mr r4, r31
    addi r3, r27, 0x24
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r3, 0x3c(r27)
    li r0, 0x1
    addi r3, r3, 0x1
    sth r3, 0x3c(r27)
    stw r0, 0xc(r31)
    lhz r0, 0xe8(r31)
    add r0, r0, r29
    sth r0, 0xe8(r31)
lbl_801AA4B8:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA4D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA4D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_801AA538
    addis r31, r3, 0x1
    li r30, 0x0
    b lbl_801AA51C
lbl_801AA50C:
    mr r3, r28
    mr r4, r30
    bl fn_801AA94C
    addi r30, r30, 0x1
lbl_801AA51C:
    lwz r0, -0x3fec(r31)
    cmplw r30, r0
    blt lbl_801AA50C
    cmpwi r29, 0x0
    ble lbl_801AA538
    mr r3, r28
    bl dtor_80136CFC
lbl_801AA538:
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
// fn_801AA55C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA55C() {
    nofralloc
    lis r3, lbl_803D9E08@ha
    addi r3, r3, lbl_803D9E08@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA568
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA568() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    addis r5, r3, 0x1
    mr r26, r3
    stw r4, -0x3fec(r5)
    mr r28, r4
    lwz r3, 0x0(r3)
    mulli r4, r4, 0x1c
    lwz r12, 0x0(r3)
    addi r4, r4, 0x20
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lis r4, fn_801AA670@ha
    mr r7, r28
    addi r4, r4, fn_801AA670@l
    li r5, 0x0
    li r6, 0x1c
    bl __construct_new_array
    addis r30, r26, 0x1
    li r27, 0x0
    stw r3, -0x3fe8(r30)
    li r28, 0x0
    li r31, 0x0
    b lbl_801AA628
lbl_801AA5D8:
    lwz r0, -0x3fe8(r30)
    li r4, 0x14
    add r29, r0, r28
    mr r3, r29
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r3, r29, 0xc
    li r4, 0x14
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    sth r31, 0x18(r29)
    addi r27, r27, 0x1
    lwz r0, -0x3fe8(r30)
    stwx r31, r28, r0
    add r3, r0, r28
    addi r28, r28, 0x1c
    sth r31, 0x8(r3)
    stw r31, 0x4(r3)
    stw r31, 0xc(r3)
    sth r31, 0x14(r3)
    stw r31, 0x10(r3)
    sth r31, 0x18(r3)
lbl_801AA628:
    lwz r0, -0x3fec(r30)
    cmplw r27, r0
    blt lbl_801AA5D8
    li r3, 0x0
    la r5, lbl_8049D960
    la r4, lbl_8049D964
    la r0, lbl_8049D968
    stw r3, -0x3fe4(r30)
    addi r11, r1, 0x20
    li r3, 0x1
    stw r5, 0x4(r26)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA670
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA670() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r3, r31, 0xc
    li r4, 0x0
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r0, 0x0
    mr r3, r31
    sth r0, 0x18(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA6B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA6B8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r3, r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r0, 0x40(r4)
    lwz r3, -0x3fe8(r3)
    mulli r0, r0, 0x1c
    add r31, r3, r0
    mr r3, r31
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    mr r4, r30
    addi r3, r31, 0xc
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    li r0, 0x3
    li r3, 0x1
    stw r0, 0xc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA71C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA71C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_801B866C
    mr r4, r29
    li r5, 0x0
    bl fn_801B8AE8
    mr r4, r3
    mr r3, r28
    mr r5, r30
    mr r6, r31
    bl fn_801AA78C
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
// fn_801AA78C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA78C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r31, r5
    mr r30, r6
    bne lbl_801AA7C0
    li r3, 0x0
    b lbl_801AA898
lbl_801AA7C0:
    lwz r0, 0x8(r4)
    rlwinm. r0, r0, 0, 1, 1
    bne lbl_801AA7D4
    li r3, 0x0
    b lbl_801AA898
lbl_801AA7D4:
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_801AA7FC
    li r3, 0x0
    b lbl_801AA898
lbl_801AA7FC:
    lwz r12, 0x1c(r3)
    mr r4, r27
    mr r5, r28
    mr r6, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801AA840
    lwz r3, 0x0(r27)
    mr r4, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_801AA898
lbl_801AA840:
    stw r31, 0x40(r29)
    addis r3, r27, 0x1
    mulli r30, r31, 0x1c
    mr r4, r29
    lwz r0, -0x3fe8(r3)
    add r31, r0, r30
    mr r3, r31
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r3, 0x18(r31)
    li r5, 0x1
    addis r4, r27, 0x1
    li r0, 0x2
    addi r6, r3, 0x1
    mr r3, r29
    sth r6, 0x18(r31)
    stw r5, 0xc(r29)
    lwz r4, -0x3fe8(r4)
    add r5, r4, r30
    lhz r4, 0x18(r5)
    subi r4, r4, 0x1
    sth r4, 0x18(r5)
    stw r0, 0xc(r29)
lbl_801AA898:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA8B0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA8B0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    beq lbl_801AA8D8
    li r3, 0x0
    b lbl_801AA938
lbl_801AA8D8:
    lwz r0, 0x40(r4)
    addis r3, r3, 0x1
    lwz r4, -0x3fe8(r3)
    mr r3, r31
    mulli r0, r0, 0x1c
    add r5, r4, r0
    lhz r4, 0x18(r5)
    subi r0, r4, 0x1
    sth r0, 0x18(r5)
    lwz r12, 0x1c(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x10(r31)
    li r3, 0x2
    stw r3, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_801AA934
    lwz r12, 0x1c(r31)
    mr r3, r31
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801AA934:
    li r3, 0x1
lbl_801AA938:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801AA94C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AA94C() {
    nofralloc
    stwu r1, -0x1030(r1)
    mflr r0
    stw r0, 0x1034(r1)
    addi r11, r1, 0x1030
    bl _savegpr_25
    mulli r0, r4, 0x1c
    addis r5, r3, 0x1
    mr r29, r3
    lwz r3, -0x3fe8(r5)
    addi r4, r1, 0x8
    add r3, r3, r0
    lhz r5, 0x8(r3)
    li r31, 0x0
    bl fn_801B92C0
    addi r26, r1, 0x8
    clrlwi r28, r3, 16
    li r30, 0x0
    li r27, 0x2
    b lbl_801AAA1C
lbl_801AA998:
    clrlslwi r0, r30, 16, 2
    lwzx r25, r26, r0
    lwz r0, 0xc(r25)
    cmpwi r0, 0x1
    bne lbl_801AAA18
    beq lbl_801AA9B8
    li r0, 0x0
    b lbl_801AAA14
lbl_801AA9B8:
    lwz r0, 0x40(r25)
    addis r3, r29, 0x1
    lwz r4, -0x3fe8(r3)
    mr r3, r25
    mulli r0, r0, 0x1c
    add r5, r4, r0
    lhz r4, 0x18(r5)
    subi r0, r4, 0x1
    sth r0, 0x18(r5)
    lwz r12, 0x1c(r25)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r27, 0xc(r25)
    lwz r0, 0x10(r25)
    cmpwi r0, 0x0
    bne lbl_801AAA10
    lwz r12, 0x1c(r25)
    mr r3, r25
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801AAA10:
    li r0, 0x1
lbl_801AAA14:
    add r31, r31, r0
lbl_801AAA18:
    addi r30, r30, 0x1
lbl_801AAA1C:
    clrlwi r0, r30, 16
    cmplw r0, r28
    blt lbl_801AA998
    addi r11, r1, 0x1030
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x1034(r1)
    mtlr r0
    addi r1, r1, 0x1030
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAA44
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAA44() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    addis r3, r3, 0x1
    stw r0, 0x1024(r1)
    mulli r0, r4, 0x1c
    addi r4, r1, 0x8
    stw r31, 0x101c(r1)
    stw r30, 0x1018(r1)
    stw r29, 0x1014(r1)
    li r29, 0x0
    stw r28, 0x1010(r1)
    lwz r3, -0x3fe8(r3)
    add r3, r3, r0
    lhz r5, 0x8(r3)
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r28, 0x0
    b lbl_801AAAA4
lbl_801AAA90:
    clrlslwi r0, r28, 16, 2
    lwzx r3, r30, r0
    bl fn_801A9BA4
    add r29, r29, r3
    addi r28, r28, 0x1
lbl_801AAAA4:
    clrlwi r0, r28, 16
    cmplw r0, r31
    blt lbl_801AAA90
    lwz r31, 0x101c(r1)
    mr r3, r29
    lwz r30, 0x1018(r1)
    lwz r29, 0x1014(r1)
    lwz r28, 0x1010(r1)
    lwz r0, 0x1024(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAAD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAAD4() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    addis r3, r3, 0x1
    stw r0, 0x1024(r1)
    mulli r0, r4, 0x1c
    addi r4, r1, 0x8
    stw r31, 0x101c(r1)
    stw r30, 0x1018(r1)
    stw r29, 0x1014(r1)
    li r29, 0x0
    stw r28, 0x1010(r1)
    lwz r3, -0x3fe8(r3)
    add r3, r3, r0
    lhz r5, 0x8(r3)
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r28, 0x0
    b lbl_801AAB34
lbl_801AAB20:
    clrlslwi r0, r28, 16, 2
    lwzx r3, r30, r0
    bl fn_801A9C7C
    add r29, r29, r3
    addi r28, r28, 0x1
lbl_801AAB34:
    clrlwi r0, r28, 16
    cmplw r0, r31
    blt lbl_801AAB20
    lwz r31, 0x101c(r1)
    mr r3, r29
    lwz r30, 0x1018(r1)
    lwz r29, 0x1014(r1)
    lwz r28, 0x1010(r1)
    lwz r0, 0x1024(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAB64
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAB64() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    addi r11, r1, 0x1020
    bl _savegpr_27
    mulli r0, r4, 0x1c
    addis r6, r3, 0x1
    mr r28, r5
    lwz r5, -0x3fe8(r6)
    mr r27, r3
    add r3, r5, r0
    lhz r5, 0x8(r3)
    addi r4, r1, 0x8
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r29, 0x0
    b lbl_801AABCC
lbl_801AABAC:
    clrlslwi r0, r29, 16, 2
    mr r4, r28
    lwzx r3, r30, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r29, r29, 0x1
lbl_801AABCC:
    clrlwi r0, r29, 16
    cmplw r0, r31
    blt lbl_801AABAC
    lwz r3, 0x0(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r11, r1, 0x1020
    bl _restgpr_27
    lwz r0, 0x1024(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAC04
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAC04() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    fmr f30, f1
    lfs f4, 0x0(r4)
    fmr f31, f2
    stw r31, 0xc(r1)
    mr r31, r3
    addis r6, r31, 0x1
    lfs f3, 0x4(r4)
    mr r3, r5
    lfs f0, 0x8(r4)
    mr r4, r6
    stfs f4, -0x3fe0(r6)
    subi r4, r4, 0x3fd4
    stfs f3, -0x3fdc(r6)
    stfs f0, -0x3fd8(r6)
    bl PSMTXCopy
    addis r3, r31, 0x1
    stfs f30, -0x3fa0(r3)
    stfs f31, -0x3fa4(r3)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    opword 0xE3C10018
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAC8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAC8C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_80360428@ha
    lis r5, lbl_80360814@ha
    stw r0, 0x24(r1)
    lis r4, lbl_8036077C@ha
    addi r3, r3, lbl_80360428@l
    addi r5, r5, lbl_80360814@l
    stw r31, 0x1c(r1)
    addi r4, r4, lbl_8036077C@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_803D9D58@ha
    addi r29, r29, lbl_803D9D58@l
    stw r3, lbl_8049D960
    addi r3, r29, 0x0
    stw r5, lbl_8049D964
    stw r4, lbl_8049D968
    bl PSMTXIdentity
    addi r30, r29, 0x0
    addi r3, r30, 0x30
    bl PSMTXIdentity
    lfs f1, lbl_804A16F8
    li r4, 0x0
    li r0, 0xff
    lfs f0, lbl_804A16FC
    li r31, 0x1
    addi r3, r29, 0xb0
    stb r4, 0x60(r30)
    addi r3, r3, 0x10
    stw r4, 0x64(r30)
    stw r4, 0x68(r30)
    stb r31, 0x6c(r30)
    stw r4, 0x70(r30)
    stfs f1, 0x74(r30)
    stfs f0, 0x78(r30)
    stfs f1, 0x7c(r30)
    stfs f0, 0x80(r30)
    stfs f1, 0x88(r30)
    stfs f1, 0x8c(r30)
    stfs f1, 0x90(r30)
    stfs f1, 0x94(r30)
    stb r0, 0x9a(r30)
    stb r0, 0x99(r30)
    stb r0, 0x98(r30)
    stb r0, 0x9b(r30)
    stb r4, 0x9e(r30)
    stb r4, 0x9d(r30)
    stb r4, 0x9c(r30)
    stb r0, 0x9f(r30)
    bl fn_801BA7E4
    lwz r0, lbl_8049D96C
    cmpwi r0, 0x0
    bne lbl_801AAD70
    stw r31, lbl_8049D96C
    lwz r3, lbl_8049C438
    bl OSRegisterVersion
lbl_801AAD70:
    li r0, 0x0
    addi r3, r29, 0xb0
    stw r0, 0xb0(r29)
    addis r6, r3, 0x1
    lis r4, fn_801AA4D4@ha
    addi r5, r29, 0xa0
    stw r0, -0x3fec(r6)
    addi r4, r4, fn_801AA4D4@l
    stb r0, -0x3f9c(r6)
    bl __register_global_object
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801AADB4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AADB4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_803604A8@ha
    li r4, 0x14
    stw r0, 0x14(r1)
    addi r5, r5, lbl_803604A8@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x1c(r3)
    addi r3, r3, 0xc0
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r3, r31, 0xcc
    li r4, 0x14
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r0, 0x0
    mr r3, r31
    sth r0, 0xd8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAE0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAE0C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801AAE34
    cmpwi r4, 0x0
    ble lbl_801AAE34
    bl dtor_80136CFC
lbl_801AAE34:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAE4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAE4C() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    addi r4, r1, 0x8
    stw r31, 0x101c(r1)
    stw r30, 0x1018(r1)
    stw r29, 0x1014(r1)
    li r29, 0x0
    stw r28, 0x1010(r1)
    lhz r5, 0xc8(r3)
    addi r3, r3, 0xc0
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r28, 0x0
    b lbl_801AAEA0
lbl_801AAE8C:
    clrlslwi r0, r28, 16, 2
    lwzx r3, r30, r0
    bl fn_801B6418
    add r29, r29, r3
    addi r28, r28, 0x1
lbl_801AAEA0:
    clrlwi r0, r28, 16
    cmplw r0, r31
    blt lbl_801AAE8C
    lwz r31, 0x101c(r1)
    mr r3, r29
    lwz r30, 0x1018(r1)
    lwz r29, 0x1014(r1)
    lwz r28, 0x1010(r1)
    lwz r0, 0x1024(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAED0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAED0() {
    nofralloc
    mr r4, r3
    lwz r3, 0xbc(r3)
    b fn_801A9924
}

// ----------------------------------------------------------------------------
// fn_801AAEDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAEDC() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    addi r11, r1, 0x1020
    bl _savegpr_27
    lwz r0, 0xf0(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_801AAF08
    li r0, 0x0
    stw r0, 0xf0(r3)
lbl_801AAF08:
    lwz r0, 0x20(r3)
    clrlwi. r0, r0, 31
    beq lbl_801AAF1C
    mr r3, r27
    bl fn_801AAE4C
lbl_801AAF1C:
    mr r3, r27
    bl fn_801AB06C
    lwz r0, 0x20(r27)
    clrlwi. r0, r0, 31
    beq lbl_801AAFAC
    lwz r3, 0xbc(r27)
    addi r4, r1, 0x8
    lhz r5, 0x2c(r3)
    addi r3, r3, 0x24
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r29, 0x0
    b lbl_801AAFA0
lbl_801AAF54:
    clrlslwi r0, r29, 16, 2
    lwzx r28, r30, r0
    lwz r3, 0xf4(r28)
    b lbl_801AAF94
lbl_801AAF64:
    cmplw r3, r27
    bne lbl_801AAF90
    mr r3, r28
    bl fn_801AAE4C
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801AAF9C
    lwz r3, 0xbc(r27)
    mr r4, r28
    bl fn_801A9B1C
    b lbl_801AAF9C
lbl_801AAF90:
    lwz r3, 0xf4(r3)
lbl_801AAF94:
    cmpwi r3, 0x0
    bne lbl_801AAF64
lbl_801AAF9C:
    addi r29, r29, 0x1
lbl_801AAFA0:
    clrlwi r0, r29, 16
    cmplw r0, r31
    blt lbl_801AAF54
lbl_801AAFAC:
    addi r11, r1, 0x1020
    bl _restgpr_27
    lwz r0, 0x1024(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// fn_801AAFC4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AAFC4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0xbc(r3)
    lwz r3, 0x9c(r5)
    mr r4, r5
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x20(r31)
    lwz r0, 0x10(r3)
    subic. r0, r0, 0x1
    stw r0, 0x10(r3)
    bne lbl_801AB030
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_801AB030
    lwz r12, 0x1c(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801AB030:
    mr r4, r31
    addi r3, r30, 0xc0
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    mr r4, r31
    addi r3, r30, 0xcc
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    li r0, 0x3
    li r3, 0x1
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801AB06C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AB06C() {
    nofralloc
    stwu r1, -0x1030(r1)
    mflr r0
    stw r0, 0x1034(r1)
    addi r11, r1, 0x1030
    bl _savegpr_25
    lhz r5, 0xc8(r3)
    mr r25, r3
    addi r4, r1, 0x8
    li r28, 0x0
    addi r3, r3, 0xc0
    bl fn_801B92C0
    addi r29, r1, 0x8
    clrlwi r31, r3, 16
    li r27, 0x0
    li r30, 0x2
    b lbl_801AB11C
lbl_801AB0AC:
    clrlslwi r0, r27, 16, 2
    lwzx r26, r29, r0
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_801AB118
    beq lbl_801AB0CC
    li r0, 0x0
    b lbl_801AB114
lbl_801AB0CC:
    lhz r4, 0xd8(r25)
    mr r3, r26
    subi r0, r4, 0x1
    sth r0, 0xd8(r25)
    lwz r12, 0x1c(r26)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r30, 0xc(r26)
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    bne lbl_801AB110
    lwz r12, 0x1c(r26)
    mr r3, r26
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801AB110:
    li r0, 0x1
lbl_801AB114:
    add r28, r28, r0
lbl_801AB118:
    addi r27, r27, 0x1
lbl_801AB11C:
    clrlwi r0, r27, 16
    cmplw r0, r31
    blt lbl_801AB0AC
    addi r11, r1, 0x1030
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x1034(r1)
    mtlr r0
    addi r1, r1, 0x1030
    blr
}

// ----------------------------------------------------------------------------
// fn_801AB144
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AB144() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r8, 0x4330
    li r7, 0x0
    stw r0, 0x34(r1)
    li r6, 0x1
    lfd f4, lbl_804A1710
    li r0, 0x3
    stw r31, 0x2c(r1)
    addi r31, r4, 0x8
    lfs f3, lbl_804A1700
    stw r30, 0x28(r1)
    mr r30, r5
    lfd f2, lbl_804A1718
    stw r29, 0x24(r1)
    mr r29, r3
    lfs f0, lbl_804A1704
    stw r28, 0x20(r1)
    stw r7, 0xe4(r3)
    stw r6, 0xc(r3)
    stw r4, 0xb8(r3)
    stw r7, 0xb4(r3)
    lhz r4, 0x1e(r4)
    stw r8, 0x8(r1)
    sth r4, 0xe8(r3)
    lwz r4, 0x0(r31)
    stw r8, 0x10(r1)
    stw r4, 0x20(r3)
    lwz r4, 0x4(r31)
    stw r4, 0x24(r3)
    lhz r4, 0x8(r31)
    sth r4, 0x3c(r3)
    lhz r4, 0x14(r31)
    sth r4, 0xde(r3)
    sth r7, 0xe0(r3)
    lbz r4, 0x85(r31)
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f4
    fdivs f1, f1, f3
    stfs f1, 0x44(r3)
    lbz r4, 0x84(r31)
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f1, f1, f3
    stfs f1, 0x40(r3)
    lbz r4, 0x86(r31)
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f4
    fdivs f1, f1, f3
    stfs f1, 0x48(r3)
    lfs f1, 0x10(r31)
    stfs f1, 0x28(r3)
    lbz r4, 0xf(r31)
    extsb r4, r4
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f3
    stfs f1, 0x2c(r3)
    lhz r4, 0x18(r31)
    sth r4, 0x30(r3)
    lhz r4, 0x34(r31)
    sth r4, 0x32(r3)
    lbz r4, 0xe(r31)
    extsb r4, r4
    stfs f0, 0x38(r3)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    stb r6, 0xdc(r3)
    fsubs f0, f0, f2
    fdivs f0, f0, f3
    stfs f0, 0x34(r3)
    lfs f0, 0x78(r31)
    stfs f0, 0x90(r3)
    lfs f0, 0x7c(r31)
    stfs f0, 0x94(r3)
    lfs f0, 0x80(r31)
    stfs f0, 0x98(r3)
    lfs f0, 0x60(r31)
    stfs f0, 0x9c(r3)
    lfs f0, 0x64(r31)
    stfs f0, 0xa0(r3)
    lfs f0, 0x68(r31)
    stfs f0, 0xa4(r3)
    lfs f0, 0x6c(r31)
    stfs f0, 0xa8(r3)
    lfs f0, 0x70(r31)
    stfs f0, 0xac(r3)
    lfs f0, 0x74(r31)
    stfs f0, 0xb0(r3)
    stb r0, 0x64(r3)
    li r0, 0x64
    stb r0, 0x65(r3)
    lbz r0, 0x36(r31)
    stb r0, 0x66(r3)
    lbz r0, 0x37(r31)
    stb r0, 0x67(r3)
    lfs f0, 0x38(r31)
    stfs f0, 0x68(r3)
    lfs f0, 0x3c(r31)
    stfs f0, 0x6c(r3)
    lfs f0, 0x40(r31)
    stfs f0, 0x70(r3)
    lfs f0, 0x44(r31)
    stfs f0, 0x74(r3)
    lfs f0, 0x48(r31)
    stfs f0, 0x78(r3)
    lfs f0, 0x4c(r31)
    stfs f0, 0x7c(r3)
    lfs f0, 0x50(r31)
    stfs f0, 0x80(r3)
    lfs f0, 0x54(r31)
    stfs f0, 0x84(r3)
    lfs f0, 0x58(r31)
    stfs f0, 0x88(r3)
    lfs f0, 0x5c(r31)
    stfs f0, 0x8c(r3)
    bl fn_801B866C
    lwz r3, 0x88(r31)
    clrlwi. r0, r3, 16
    sth r3, 0xea(r29)
    bne lbl_801AB36C
    lwz r4, 0x20(r30)
    lis r3, 0x3
    addi r0, r3, 0x43fd
    addis r4, r4, 0x1
    lwz r3, -0x3fe4(r4)
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    stw r0, -0x3fe4(r4)
    srwi r0, r0, 16
    sth r0, 0xea(r29)
lbl_801AB36C:
    lhz r3, 0xea(r29)
    li r4, 0x0
    li r0, 0x1
    li r28, 0x0
    stw r3, 0xec(r29)
    lfs f0, 0x1c(r31)
    stfs f0, 0x4c(r29)
    lfs f0, 0x20(r31)
    stfs f0, 0x50(r29)
    lfs f0, 0x24(r31)
    stfs f0, 0x54(r29)
    lfs f0, 0x28(r31)
    stfs f0, 0x58(r29)
    lfs f0, 0x2c(r31)
    stfs f0, 0x5c(r29)
    lfs f0, 0x30(r31)
    stfs f0, 0x60(r29)
    stb r0, 0x120(r29)
    stw r4, 0xf8(r29)
    lwz r3, 0x20(r30)
    lwz r0, 0x4(r31)
    lwz r3, 0xc(r3)
    clrlwi r4, r0, 24
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_804A1708
    stw r3, 0xf0(r29)
    li r3, 0x1
    stw r28, 0xf4(r29)
    stw r28, 0xbc(r29)
    stfs f0, 0x11c(r29)
    stfs f0, 0x118(r29)
    stfs f0, 0x114(r29)
    stfs f0, 0x110(r29)
    stfs f0, 0x10c(r29)
    stfs f0, 0x108(r29)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801AB424
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AB424() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r26, 0x0
    li r27, 0x1
    mr r31, r4
    mr r29, r5
    stw r26, 0x10(r3)
    mr r28, r3
    mr r30, r6
    mr r4, r29
    stw r27, 0xc(r3)
    mr r5, r31
    stw r26, 0xc0(r3)
    sth r26, 0xc8(r3)
    stw r26, 0xc4(r3)
    stw r26, 0xcc(r3)
    sth r26, 0xd4(r3)
    stw r26, 0xd0(r3)
    sth r26, 0xd8(r3)
    bl fn_801AB144
    stw r31, 0xbc(r28)
    lwz r3, 0x20(r31)
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801AB4B0
    li r3, 0x0
    b lbl_801AB57C
lbl_801AB4B0:
    lwz r12, 0x1c(r3)
    mr r4, r28
    mr r5, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801AB4D8
    li r3, 0x0
    b lbl_801AB57C
lbl_801AB4D8:
    lwz r6, 0xbc(r28)
    mr r4, r31
    addi r3, r28, 0xc0
    lwz r5, 0x10(r6)
    addi r0, r5, 0x1
    stw r0, 0x10(r6)
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r3, 0xd8(r28)
    addi r0, r3, 0x1
    sth r0, 0xd8(r28)
    stw r27, 0xc(r31)
    stw r26, 0x28(r31)
    lwz r0, 0x8(r29)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801AB520
    lwz r0, 0x28(r31)
    ori r0, r0, 0x1
    stw r0, 0x28(r31)
lbl_801AB520:
    lwz r0, 0x8(r29)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801AB538
    lwz r0, 0x28(r31)
    ori r0, r0, 0x2
    stw r0, 0x28(r31)
lbl_801AB538:
    lbz r0, 0x22(r29)
    stb r0, 0x88(r31)
    lwz r0, 0x8(r29)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801AB558
    lwz r0, 0x28(r31)
    ori r0, r0, 0x4
    stw r0, 0x28(r31)
lbl_801AB558:
    stb r30, 0x89(r31)
    mr r5, r31
    lwz r4, 0xbc(r28)
    lwz r3, 0x9c(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_801AB57C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801AB594
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AB594() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lwz r0, 0x8(r4)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    rlwinm. r0, r0, 0, 1, 1
    mr r26, r7
    mr r30, r8
    bne lbl_801AB5D0
    li r3, 0x0
    b lbl_801AB858
lbl_801AB5D0:
    lwz r3, 0xbc(r3)
    li r6, 0x0
    lbz r5, 0x5(r5)
    bl fn_801A9A28
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801AB5F4
    li r3, 0x0
    b lbl_801AB858
lbl_801AB5F4:
    lhz r4, 0xe8(r3)
    li r0, 0x0
    add r4, r4, r26
    sth r4, 0xe8(r3)
    stw r27, 0xf4(r3)
    lwz r4, 0x10(r27)
    addi r4, r4, 0x1
    stw r4, 0x10(r27)
    stb r0, 0x64(r3)
    lwz r0, 0x20(r27)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_801AB630
    lbz r0, 0x64(r3)
    ori r0, r0, 0x1
    stb r0, 0x64(r3)
lbl_801AB630:
    lwz r0, 0x20(r27)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_801AB648
    lbz r0, 0x64(r3)
    ori r0, r0, 0x2
    stb r0, 0x64(r3)
lbl_801AB648:
    lwz r4, 0xb8(r27)
    lbz r0, 0x23(r4)
    stb r0, 0x65(r3)
    lwz r0, 0x20(r27)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_801AB66C
    lbz r0, 0x64(r3)
    ori r0, r0, 0x4
    stb r0, 0x64(r3)
lbl_801AB66C:
    lwz r5, 0x90(r3)
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    lfs f0, lbl_804A1704
    stw r5, 0x8(r1)
    stfs f0, 0x90(r3)
    stfs f0, 0x94(r3)
    stfs f0, 0x98(r3)
    mr r3, r31
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_801ACD98
    addi r3, r1, 0x48
    bl PSMTXIdentity
    lfs f1, 0xa8(r31)
    addi r3, r1, 0x48
    lfs f2, 0xac(r31)
    lfs f3, 0xb0(r31)
    bl fn_801B9E1C
    addi r3, r1, 0x48
    addi r5, r31, 0x9c
    mr r4, r3
    bl fn_801B9F88
    mr r3, r31
    addi r4, r1, 0x18
    bl fn_801ACC48
    addi r3, r1, 0x18
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x48
    addi r4, r1, 0x18
    mr r5, r3
    bl PSMTXConcat
    cmpwi r29, 0x0
    beq lbl_801AB714
    lwz r3, 0xc8(r29)
    addi r4, r1, 0x18
    bl fn_801B7FB8
    addi r3, r1, 0x48
    addi r4, r1, 0x18
    mr r5, r3
    bl PSMTXConcat
lbl_801AB714:
    cmpwi r30, 0x0
    bne lbl_801AB738
    cmpwi r29, 0x0
    beq lbl_801AB748
    addi r3, r1, 0x48
    addi r5, r29, 0xac
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801AB748
lbl_801AB738:
    addi r3, r1, 0x48
    mr r5, r30
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801AB748:
    lfs f1, 0xa8(r31)
    addi r3, r1, 0x18
    lfs f2, 0xac(r31)
    lfs f3, 0xb0(r31)
    bl fn_801B9E1C
    addi r3, r1, 0x18
    addi r5, r31, 0x9c
    mr r4, r3
    bl fn_801B9F88
    addi r3, r1, 0x18
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x48
    addi r4, r1, 0x18
    mr r5, r3
    bl PSMTXConcat
    lfs f1, 0x8(r1)
    mr r3, r31
    lfs f0, 0x54(r1)
    lfs f2, 0xc(r1)
    fadds f0, f1, f0
    lfs f1, 0x10(r1)
    stfs f0, 0x90(r31)
    lfs f0, 0x64(r1)
    fadds f0, f2, f0
    stfs f0, 0x94(r31)
    lfs f0, 0x74(r1)
    fadds f0, f1, f0
    stfs f0, 0x98(r31)
    bl fn_801ACD98
    lha r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x2(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x3(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x7(r28)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801AB854
lbl_801AB7FC:
    stw r29, 0xf8(r31)
    lwz r3, 0x10(r29)
    addi r0, r3, 0x1
    stw r0, 0x10(r29)
    lha r0, 0x0(r28)
    sth r0, 0xfc(r31)
    lbz r0, 0x2(r28)
    stb r0, 0xfe(r31)
    lbz r0, 0x3(r28)
    stb r0, 0xff(r31)
    lbz r0, 0x4(r28)
    stb r0, 0x100(r31)
    lbz r0, 0x5(r28)
    stb r0, 0x101(r31)
    lbz r0, 0x6(r28)
    stb r0, 0x102(r31)
    lbz r0, 0x7(r28)
    stb r0, 0x103(r31)
    lbz r0, 0x8(r28)
    stb r0, 0x104(r31)
    lbz r0, 0x9(r28)
    stb r0, 0x105(r31)
lbl_801AB854:
    mr r3, r31
lbl_801AB858:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801AB870
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AB870() {
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x2d0
    bl _savegpr_23
    lwz r0, 0x8(r4)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    rlwinm. r0, r0, 0, 1, 1
    mr r26, r6
    mr r29, r7
    mr r27, r8
    bne lbl_801AB8B0
    li r3, 0x0
    b lbl_801ABF90
lbl_801AB8B0:
    lis r5, lbl_803604A8@ha
    addi r3, r1, 0x210
    addi r5, r5, lbl_803604A8@l
    li r4, 0x14
    stw r5, 0x16c(r1)
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r3, r1, 0x21c
    li r4, 0x14
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r28, 0x0
    mr r4, r24
    sth r28, 0x228(r1)
    addi r3, r1, 0x150
    lwz r5, 0xbc(r23)
    bl fn_801AB144
    lhz r0, 0x238(r1)
    add r0, r0, r29
    sth r0, 0x238(r1)
    lwz r0, 0xbc(r23)
    stw r0, 0x20c(r1)
    stw r23, 0x244(r1)
    stb r28, 0x1b4(r1)
    lwz r0, 0x20(r23)
    rlwinm. r0, r0, 0, 19, 19
    beq lbl_801AB91C
    ori r0, r28, 0x1
    stb r0, 0x1b4(r1)
lbl_801AB91C:
    lwz r0, 0x20(r23)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_801AB934
    lbz r0, 0x1b4(r1)
    ori r0, r0, 0x2
    stb r0, 0x1b4(r1)
lbl_801AB934:
    lwz r3, 0xb8(r23)
    lbz r3, 0x15(r3)
    extsb. r0, r3
    stb r3, 0x1b5(r1)
    beq lbl_801AB950
    li r0, 0x64
    stb r0, 0x1b5(r1)
lbl_801AB950:
    lwz r0, 0x20(r23)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_801AB968
    lbz r0, 0x1b4(r1)
    ori r0, r0, 0x4
    stb r0, 0x1b4(r1)
lbl_801AB968:
    lbz r0, 0x7(r25)
    addi r28, r1, 0x150
    clrlwi. r0, r0, 31
    beq lbl_801ABA60
    lha r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_801ABA60
    lwz r3, 0xc8(r26)
    addi r4, r1, 0xf0
    bl fn_801B7FB8
    lfs f0, lbl_804A1704
    addi r4, r1, 0x20
    mr r5, r4
    addi r3, r1, 0xf0
    stfs f0, 0x11c(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0xfc(r1)
    opword 0xE05A00AC
    opword 0xE03A00B8
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    opword 0xF0010008
    opword 0x10020828
    lfs f2, 0x8(r1)
    opword 0xF0018010
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_8030D7E0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801ABA60
    lha r0, 0x0(r25)
    cmpwi r0, 0x0
    bge lbl_801ABA24
    lfs f0, lbl_804A1720
    opword 0xE0410020
    opword 0x10220018
    opword 0xE0418028
    opword 0xF0210020
    opword 0x10220018
    opword 0xF0218028
lbl_801ABA24:
    addi r3, r1, 0x120
    addi r4, r1, 0x20
    bl fn_801B9344
    lfs f1, 0x1f8(r1)
    addi r3, r1, 0xf0
    lfs f2, 0x1fc(r1)
    lfs f3, 0x200(r1)
    bl fn_801B9E1C
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x120
    addi r4, r28, 0xa8
    bl fn_801B955C
lbl_801ABA60:
    lwz r5, 0x1e0(r1)
    mr r3, r28
    lwz r4, 0x1e4(r1)
    lfs f0, lbl_804A1704
    lwz r0, 0x1e8(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    stfs f0, 0x1e0(r1)
    stfs f0, 0x1e4(r1)
    stfs f0, 0x1e8(r1)
    bl fn_801ACD98
    addi r3, r1, 0xc0
    bl PSMTXIdentity
    lfs f1, 0x1f8(r1)
    addi r3, r1, 0xc0
    lfs f2, 0x1fc(r1)
    lfs f3, 0x200(r1)
    bl fn_801B9E1C
    addi r3, r1, 0xc0
    addi r5, r28, 0x9c
    mr r4, r3
    bl fn_801B9F88
    mr r3, r28
    addi r4, r1, 0x90
    bl fn_801ACC48
    addi r3, r1, 0x90
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0xc0
    addi r4, r1, 0x90
    mr r5, r3
    bl PSMTXConcat
    cmpwi r26, 0x0
    beq lbl_801ABB08
    lwz r3, 0xc8(r26)
    addi r4, r1, 0x90
    bl fn_801B7FB8
    addi r3, r1, 0xc0
    addi r4, r1, 0x90
    mr r5, r3
    bl PSMTXConcat
lbl_801ABB08:
    cmpwi r27, 0x0
    bne lbl_801ABB2C
    cmpwi r26, 0x0
    beq lbl_801ABB3C
    addi r3, r1, 0xc0
    addi r5, r26, 0xac
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801ABB3C
lbl_801ABB2C:
    addi r3, r1, 0xc0
    mr r5, r27
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ABB3C:
    lfs f1, 0x1f8(r1)
    addi r3, r1, 0x90
    lfs f2, 0x1fc(r1)
    lfs f3, 0x200(r1)
    bl fn_801B9E1C
    addi r3, r1, 0x90
    addi r5, r28, 0x9c
    mr r4, r3
    bl fn_801B9F88
    addi r3, r1, 0x90
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0xc0
    addi r4, r1, 0x90
    mr r5, r3
    bl PSMTXConcat
    lfs f1, 0x14(r1)
    mr r3, r28
    lfs f0, 0xcc(r1)
    lfs f3, 0x18(r1)
    fadds f4, f1, f0
    lfs f2, 0xdc(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0xec(r1)
    fadds f2, f3, f2
    stfs f4, 0x1e0(r1)
    fadds f0, f1, f0
    stfs f2, 0x1e4(r1)
    stfs f0, 0x1e8(r1)
    bl fn_801ACD98
    addi r3, r1, 0x150
    bl fn_801AC4E8
    addi r3, r1, 0x150
    bl fn_801AC83C
    lwz r3, 0x20(r23)
    li r31, 0x0
    rlwinm. r0, r3, 0, 19, 19
    beq lbl_801ABBE4
    lwz r0, 0x8(r24)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801ABBE4
    li r31, 0x1
lbl_801ABBE4:
    rlwinm. r0, r3, 0, 18, 18
    li r30, 0x0
    beq lbl_801ABC00
    lwz r0, 0x8(r24)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801ABC00
    li r30, 0x1
lbl_801ABC00:
    rlwinm. r0, r3, 0, 20, 20
    li r29, 0x1
    bne lbl_801ABC1C
    lwz r0, 0x8(r24)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_801ABC1C
    li r29, 0x0
lbl_801ABC1C:
    lwz r3, 0xb8(r23)
    lbz r0, 0x22(r24)
    lbz r3, 0x15(r3)
    extsb r28, r0
    extsb. r0, r3
    beq lbl_801ABC3C
    cmpwi r28, 0x0
    bne lbl_801ABC44
lbl_801ABC3C:
    li r28, 0x0
    b lbl_801ABC80
lbl_801ABC44:
    cmpwi r0, 0x64
    bne lbl_801ABC50
    b lbl_801ABC80
lbl_801ABC50:
    cmpwi r28, 0x64
    bne lbl_801ABC60
    mr r28, r0
    b lbl_801ABC80
lbl_801ABC60:
    mullw r0, r0, r28
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    extsb r28, r0
lbl_801ABC80:
    lbz r27, 0x5(r25)
    addi r3, r23, 0xc0
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    b lbl_801ABCF8
lbl_801ABC94:
    lwz r0, 0x24(r3)
    cmplw r0, r24
    bne lbl_801ABCEC
    lwz r5, 0x28(r3)
    clrlwi r0, r5, 31
    cmplw r0, r31
    bne lbl_801ABCEC
    extrwi r0, r5, 1, 30
    cmplw r0, r30
    bne lbl_801ABCEC
    lbz r4, 0x88(r3)
    extsb r0, r28
    extsb r4, r4
    cmpw r4, r0
    bne lbl_801ABCEC
    extrwi r0, r5, 1, 29
    cmplw r0, r29
    bne lbl_801ABCEC
    lbz r0, 0x89(r3)
    cmplw r0, r27
    bne lbl_801ABCEC
    b lbl_801ABD04
lbl_801ABCEC:
    mr r4, r3
    addi r3, r23, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
lbl_801ABCF8:
    cmpwi r3, 0x0
    bne lbl_801ABC94
    li r3, 0x0
lbl_801ABD04:
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801ABDF4
    lwz r3, 0xbc(r23)
    lwz r3, 0x20(r3)
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801ABD40
    li r3, 0x0
    b lbl_801ABF90
lbl_801ABD40:
    lwz r12, 0x1c(r3)
    mr r4, r23
    mr r5, r24
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801ABD68
    li r3, 0x0
    b lbl_801ABF90
lbl_801ABD68:
    mr r4, r27
    addi r3, r23, 0xc0
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r4, 0xd8(r23)
    li r3, 0x1
    cmpwi r31, 0x0
    li r0, 0x0
    addi r4, r4, 0x1
    sth r4, 0xd8(r23)
    stw r3, 0xc(r27)
    stw r0, 0x28(r27)
    beq lbl_801ABDA4
    lwz r0, 0x28(r27)
    ori r0, r0, 0x1
    stw r0, 0x28(r27)
lbl_801ABDA4:
    cmpwi r30, 0x0
    beq lbl_801ABDB8
    lwz r0, 0x28(r27)
    ori r0, r0, 0x2
    stw r0, 0x28(r27)
lbl_801ABDB8:
    cmpwi r29, 0x0
    stb r28, 0x88(r27)
    beq lbl_801ABDD0
    lwz r0, 0x28(r27)
    ori r0, r0, 0x4
    stw r0, 0x28(r27)
lbl_801ABDD0:
    lbz r0, 0x5(r25)
    mr r5, r27
    stb r0, 0x89(r27)
    lwz r4, 0xbc(r23)
    lwz r3, 0x9c(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801ABDF4:
    lha r0, 0x0(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x2(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x3(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x4(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x7(r25)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801ABE8C
lbl_801ABE30:
    stw r26, 0x248(r1)
    lwz r3, 0x10(r26)
    addi r0, r3, 0x1
    stw r0, 0x10(r26)
    lha r0, 0x0(r25)
    sth r0, 0x24c(r1)
    lbz r0, 0x2(r25)
    stb r0, 0x24e(r1)
    lbz r0, 0x3(r25)
    stb r0, 0x24f(r1)
    lbz r0, 0x4(r25)
    stb r0, 0x250(r1)
    lbz r0, 0x5(r25)
    stb r0, 0x251(r1)
    lbz r0, 0x6(r25)
    stb r0, 0x252(r1)
    lbz r0, 0x7(r25)
    stb r0, 0x253(r1)
    lbz r0, 0x8(r25)
    stb r0, 0x254(r1)
    lbz r0, 0x9(r25)
    stb r0, 0x255(r1)
    b lbl_801ABE94
lbl_801ABE8C:
    li r0, 0x0
    stw r0, 0x248(r1)
lbl_801ABE94:
    mr r3, r27
    addi r4, r1, 0x30
    bl fn_801B7FB8
    addi r3, r1, 0x30
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x150
    addi r4, r1, 0x60
    bl fn_801ACC48
    addi r4, r1, 0x60
    addi r3, r1, 0x30
    mr r5, r4
    bl PSMTXConcat
    mr r4, r27
    addi r3, r1, 0x150
    addi r5, r1, 0x60
    bl fn_801AC0A4
    lwz r0, 0x248(r1)
    li r3, 0x0
    stw r3, 0x244(r1)
    cmpwi r0, 0x0
    stw r3, 0x20c(r1)
    beq lbl_801ABF28
    lwz r0, 0x10(r26)
    subic. r0, r0, 0x1
    stw r0, 0x10(r26)
    bne lbl_801ABF20
    lwz r0, 0xc(r26)
    cmpwi r0, 0x2
    bne lbl_801ABF20
    lwz r12, 0x1c(r26)
    mr r3, r26
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801ABF20:
    li r0, 0x0
    stw r0, 0x248(r1)
lbl_801ABF28:
    lwz r0, 0xc(r23)
    cmpwi r0, 0x1
    beq lbl_801ABF8C
    lwz r0, 0xc(r27)
    cmpwi r0, 0x1
    bne lbl_801ABF8C
    bne lbl_801ABF8C
    lhz r4, 0xd8(r23)
    mr r3, r27
    subi r0, r4, 0x1
    sth r0, 0xd8(r23)
    lwz r12, 0x1c(r27)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0xc(r27)
    lwz r0, 0x10(r27)
    cmpwi r0, 0x0
    bne lbl_801ABF8C
    lwz r12, 0x1c(r27)
    mr r3, r27
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801ABF8C:
    li r3, 0x1
lbl_801ABF90:
    addi r11, r1, 0x2d0
    bl _restgpr_23
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

// ----------------------------------------------------------------------------
// fn_801ABFA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ABFA8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stfd f28, 0x20(r1)
    opword 0xF3810028
    stfd f27, 0x10(r1)
    opword 0xF3610018
    fmr f27, f2
    mr r0, r3
    fmr f28, f3
    mr r3, r4
    fmr f29, f4
    mr r4, r0
    fsubs f30, f1, f2
    bl fn_8030E000
    lfs f0, lbl_804A1704
    fmr f31, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801AC014
    b lbl_801AC01C
lbl_801AC014:
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f31, f1
lbl_801AC01C:
    fsubs f0, f0, f27
    fmuls f2, f30, f29
    fmuls f1, f30, f28
    fcmpo cr0, f2, f0
    ble lbl_801AC038
    lfs f1, lbl_804A1724
    b lbl_801AC06C
lbl_801AC038:
    fcmpo cr0, f1, f0
    bge lbl_801AC048
    lfs f1, lbl_804A1704
    b lbl_801AC06C
lbl_801AC048:
    fsubs f3, f1, f2
    lfs f1, lbl_804A1704
    fcmpu cr0, f1, f3
    bne lbl_801AC05C
    b lbl_801AC06C
lbl_801AC05C:
    fsubs f1, f0, f2
    lfs f0, lbl_804A1724
    fdivs f1, f1, f3
    fsubs f1, f0, f1
lbl_801AC06C:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    opword 0xE3810028
    lfd f28, 0x20(r1)
    opword 0xE3610018
    lwz r0, 0x64(r1)
    lfd f27, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801AC0A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AC0A4() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    addi r11, r1, 0xc0
    bl _savegpr_19
    lhz r6, 0xe0(r3)
    lis r0, 0x4330
    stw r0, 0x70(r1)
    mr r29, r3
    cmpwi r6, 0x0
    mr r30, r4
    stw r0, 0x78(r1)
    mr r31, r5
    beq lbl_801AC0F0
    subi r0, r6, 0x1
    sth r0, 0xe0(r3)
    b lbl_801AC4C8
lbl_801AC0F0:
    lfs f0, lbl_804A1704
    lfs f4, 0x34(r3)
    lhz r6, 0x30(r3)
    fcmpu cr0, f0, f4
    sth r6, 0xe0(r3)
    beq lbl_801AC17C
    lis r4, 0x3
    lwz r5, 0xec(r3)
    addi r0, r4, 0x43fd
    stw r6, 0x7c(r1)
    mullw r4, r5, r0
    lfd f3, lbl_804A1710
    lfd f0, 0x78(r1)
    lfs f2, lbl_804A1728
    fsubs f1, f0, f3
    lfs f0, lbl_804A1724
    addis r4, r4, 0x27
    fmuls f1, f1, f4
    subi r4, r4, 0x613d
    srwi r0, r4, 16
    stw r4, 0xec(r3)
    fsubs f0, f1, f0
    stw r0, 0x74(r1)
    lfd f1, 0x70(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    fmuls f1, f0, f1
    bl ceil
    frsp f0, f1
    lhz r3, 0xe0(r29)
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r0, 0x84(r1)
    add r0, r3, r0
    sth r0, 0xe0(r29)
lbl_801AC17C:
    lwz r0, 0x24(r29)
    rlwinm. r0, r0, 0, 14, 14
    beq lbl_801AC1A4
    lhz r0, 0x32(r29)
    lfd f1, lbl_804A1710
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f1
    stfs f0, 0x38(r29)
    b lbl_801AC2B0
lbl_801AC1A4:
    lfs f1, lbl_804A1704
    lfs f0, 0x2c(r29)
    fcmpu cr0, f1, f0
    bne lbl_801AC1BC
    lfs f31, 0x28(r29)
    b lbl_801AC214
lbl_801AC1BC:
    lis r3, 0x3
    lwz r4, 0xec(r29)
    addi r0, r3, 0x43fd
    lfs f3, 0x28(r29)
    mullw r3, r4, r0
    lfd f6, lbl_804A1710
    fmuls f2, f3, f0
    lfs f4, lbl_804A1728
    lfs f1, lbl_804A172C
    lfs f0, lbl_804A1724
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r29)
    stw r0, 0x7c(r1)
    lfd f5, 0x78(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmuls f1, f1, f4
    fsubs f0, f1, f0
    fmuls f0, f2, f0
    fadds f31, f3, f0
lbl_801AC214:
    lwz r0, 0x24(r29)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_801AC278
    lwz r5, 0xbc(r29)
    mr r3, r29
    li r4, 0x0
    lwz r19, 0x20(r5)
    bl fn_801ACC48
    addi r4, r29, 0x90
    addi r5, r1, 0x18
    bl fn_8030D7E0
    addis r4, r19, 0x1
    lfs f3, 0x44(r29)
    lfs f1, -0x3fa4(r4)
    addi r3, r1, 0x18
    lfs f2, -0x3fa0(r4)
    subi r4, r4, 0x3fe0
    lfs f4, 0x40(r29)
    bl fn_801ABFA8
    lfs f0, lbl_804A1724
    lfs f2, 0x48(r29)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fadds f0, f2, f0
    fmuls f31, f31, f0
lbl_801AC278:
    lfs f0, 0x38(r29)
    lbz r0, 0xdc(r29)
    fadds f2, f0, f31
    cmpwi r0, 0x0
    stfs f2, 0x38(r29)
    beq lbl_801AC2B0
    lfs f1, lbl_804A1704
    lfs f0, 0x28(r29)
    fcmpu cr0, f1, f0
    beq lbl_801AC2B0
    lfs f0, lbl_804A1724
    fcmpo cr0, f2, f0
    bge lbl_801AC2B0
    stfs f0, 0x38(r29)
lbl_801AC2B0:
    lfs f1, 0x38(r29)
    lfs f0, lbl_804A1724
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801AC4B4
    bl fn_801B866C
    lwz r3, 0xf0(r29)
    lwz r11, 0xb8(r29)
    cmpwi r3, 0x0
    beq lbl_801AC488
    lwz r4, 0xbc(r29)
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    beq lbl_801AC42C
    lfs f0, 0x38(r29)
    mr r3, r29
    lwz r19, 0x0(r31)
    mr r4, r30
    fctiwz f1, f0
    lwz r20, 0x4(r31)
    lwz r21, 0x8(r31)
    addi r5, r1, 0x14
    lwz r22, 0xc(r31)
    addi r6, r1, 0x10
    stfd f1, 0x80(r1)
    addi r7, r1, 0x28
    lwz r23, 0x10(r31)
    addi r8, r1, 0x8
    lwz r0, 0x84(r1)
    addi r9, r1, 0xc
    lwz r24, 0x14(r31)
    addi r10, r1, 0x40
    stw r0, 0x14(r1)
    lwz r25, 0x18(r31)
    lwz r0, 0x24(r29)
    lwz r26, 0x1c(r31)
    stw r0, 0x10(r1)
    lwz r27, 0x20(r31)
    lfs f1, 0x4c(r29)
    lwz r28, 0x24(r31)
    stfs f1, 0x28(r1)
    lwz r12, 0x28(r31)
    lfs f1, 0x50(r29)
    lwz r0, 0x2c(r31)
    stfs f1, 0x2c(r1)
    lfd f2, lbl_804A1718
    lfs f1, 0x54(r29)
    lfs f0, lbl_804A1700
    stfs f1, 0x30(r1)
    lfs f1, 0x58(r29)
    stfs f1, 0x34(r1)
    lfs f1, 0x5c(r29)
    stfs f1, 0x38(r1)
    lfs f1, 0x60(r29)
    stfs f1, 0x3c(r1)
    lhz r31, 0x12(r11)
    sth r31, 0x8(r1)
    lbz r11, 0x14(r11)
    extsb r11, r11
    stw r19, 0x40(r1)
    xoris r11, r11, 0x8000
    stw r11, 0x74(r1)
    lfd f1, 0x70(r1)
    stw r20, 0x44(r1)
    fsubs f1, f1, f2
    stw r21, 0x48(r1)
    fdivs f0, f1, f0
    stw r22, 0x4c(r1)
    stw r23, 0x50(r1)
    stw r24, 0x54(r1)
    stw r25, 0x58(r1)
    stw r26, 0x5c(r1)
    stfs f0, 0xc(r1)
    stw r27, 0x60(r1)
    stw r28, 0x64(r1)
    stw r12, 0x68(r1)
    stw r0, 0x6c(r1)
    lwz r11, 0xbc(r29)
    lwz r12, 0x44(r11)
    mtctr r12
    bctrl
    lwz r3, 0xf0(r29)
    mr r4, r29
    mr r5, r30
    addi r8, r1, 0x28
    lwz r12, 0x0(r3)
    addi r10, r1, 0x40
    lwz r6, 0x14(r1)
    lwz r12, 0x8(r12)
    lwz r7, 0x10(r1)
    lhz r9, 0x8(r1)
    lfs f1, 0xc(r1)
    mtctr r12
    bctrl
    b lbl_801AC488
lbl_801AC42C:
    lbz r0, 0x14(r11)
    mr r4, r29
    lfs f0, 0x38(r29)
    mr r5, r30
    extsb r0, r0
    lwz r12, 0x0(r3)
    xoris r0, r0, 0x8000
    fctiwz f2, f0
    stw r0, 0x7c(r1)
    mr r10, r31
    lfd f1, lbl_804A1718
    addi r8, r29, 0x4c
    lfd f0, 0x78(r1)
    stfd f2, 0x80(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_804A1700
    lwz r12, 0x8(r12)
    lwz r6, 0x84(r1)
    fdivs f1, f1, f0
    lwz r7, 0x24(r29)
    lhz r9, 0x12(r11)
    mtctr r12
    bctrl
lbl_801AC488:
    lfs f2, 0x38(r29)
    lfd f1, lbl_804A1718
    fctiwz f0, f2
    stfd f0, 0x80(r1)
    lwz r0, 0x84(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f1
    fsubs f0, f2, f0
    stfs f0, 0x38(r29)
lbl_801AC4B4:
    lbz r0, 0xdc(r29)
    cmpwi r0, 0x0
    beq lbl_801AC4C8
    li r0, 0x0
    stb r0, 0xdc(r29)
lbl_801AC4C8:
    opword 0xE3E100C8
    addi r11, r1, 0xc0
    lfd f31, 0xc0(r1)
    bl _restgpr_19
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// ----------------------------------------------------------------------------
// fn_801AC4E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AC4E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x20(r3)
    mr r27, r3
    rlwinm. r0, r0, 0, 22, 22
    bne lbl_801AC688
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801AC688
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    bne lbl_801AC688
    lhz r0, 0xde(r3)
    cmpwi r0, 0x0
    bne lbl_801AC688
    lwz r0, 0x20(r3)
    rlwinm. r4, r0, 0, 29, 29
    bne lbl_801AC55C
    lwz r31, 0xe4(r3)
    lhz r0, 0x3c(r3)
    cmplw r31, r0
    blt lbl_801AC57C
    lwz r3, 0xbc(r3)
    mr r4, r27
    bl fn_801A9B1C
    b lbl_801AC688
lbl_801AC55C:
    lwz r31, 0xe4(r3)
    addis r0, r31, 0x1
    cmplwi r0, 0xffff
    bne lbl_801AC57C
    lwz r3, 0xbc(r3)
    mr r4, r27
    bl fn_801A9B1C
    b lbl_801AC688
lbl_801AC57C:
    cmpwi r4, 0x0
    beq lbl_801AC58C
    li r30, -0x1
    b lbl_801AC590
lbl_801AC58C:
    lhz r30, 0x3c(r3)
lbl_801AC590:
    cmpwi r31, 0x0
    li r29, 0x0
    bne lbl_801AC5A4
    li r28, 0x0
    b lbl_801AC644
lbl_801AC5A4:
    lwz r3, 0xb8(r3)
    lwz r0, 0x4(r3)
    add r3, r0, r3
    lwzu r0, 0x8(r3)
    add r3, r0, r3
    lhzu r0, 0x4(r3)
    slwi r0, r0, 3
    add r3, r0, r3
    lhz r28, 0x6(r3)
    b lbl_801AC644
lbl_801AC5CC:
    lwzx r3, r5, r6
    add r4, r5, r6
    clrlslwi r0, r28, 16, 2
    add r3, r3, r4
    addi r4, r3, 0x4
    lhz r3, 0x4(r3)
    slwi r3, r3, 3
    add r3, r3, r4
    addi r3, r3, 0x4
    add r3, r3, r0
    lwz r3, 0x4(r3)
    lbz r0, 0x4(r3)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801AC640
    lbz r4, 0x0(r3)
    addi r0, r4, 0x55
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801AC640
    lbz r26, 0x1(r3)
    mr r5, r31
    lhz r6, 0xea(r27)
    mr r7, r30
    add r4, r27, r26
    addi r4, r4, 0x20
    bl fn_801AE2D8
    cmplwi r26, 0x70
    blt lbl_801AC640
    li r29, 0x1
lbl_801AC640:
    addi r28, r28, 0x1
lbl_801AC644:
    lwz r5, 0xb8(r27)
    clrlwi r3, r28, 16
    lwz r4, 0x4(r5)
    addi r6, r4, 0x8
    lwzx r0, r5, r6
    add r4, r5, r6
    add r4, r0, r4
    lhzu r0, 0x4(r4)
    slwi r0, r0, 3
    add r4, r0, r4
    lhz r0, 0x4(r4)
    cmplw r3, r0
    blt lbl_801AC5CC
    cmpwi r29, 0x0
    beq lbl_801AC688
    mr r3, r27
    bl fn_801ACD98
lbl_801AC688:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801AC6A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AC6A0() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    stw r31, 0x101c(r1)
    stw r30, 0x1018(r1)
    stw r29, 0x1014(r1)
    lwz r0, 0x20(r3)
    rlwinm. r0, r0, 0, 22, 22
    bne lbl_801AC70C
    lhz r5, 0xc8(r3)
    addi r4, r1, 0x8
    addi r3, r3, 0xc0
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r29, 0x0
    b lbl_801AC700
lbl_801AC6E4:
    clrlslwi r0, r29, 16, 2
    lwzx r3, r30, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r29, r29, 0x1
lbl_801AC700:
    clrlwi r0, r29, 16
    cmplw r0, r31
    blt lbl_801AC6E4
lbl_801AC70C:
    lwz r0, 0x1024(r1)
    lwz r31, 0x101c(r1)
    lwz r30, 0x1018(r1)
    lwz r29, 0x1014(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// fn_801AC728
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AC728() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x20(r3)
    rlwinm. r0, r0, 0, 22, 22
    bne lbl_801AC824
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    bne lbl_801AC824
    lhz r0, 0xe8(r3)
    li r4, 0x1
    stw r4, 0xb4(r3)
    cmpwi r0, 0x0
    beq lbl_801AC77C
    lwz r4, 0xbc(r3)
    lwz r0, 0x50(r4)
    oris r0, r0, 0x1
    stw r0, 0x50(r4)
lbl_801AC77C:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801AC800
    li r4, 0x0
    addi r3, r3, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r31, r3
    addi r4, r1, 0x8
    bl fn_801B7FB8
    addi r3, r1, 0x8
    mr r4, r3
    bl PSMTXInverse
    mr r3, r30
    addi r4, r1, 0x38
    bl fn_801ACC48
    addi r4, r1, 0x38
    addi r3, r1, 0x8
    mr r5, r4
    bl PSMTXConcat
    lhz r3, 0xde(r30)
    cmpwi r3, 0x0
    beq lbl_801AC7E0
    subi r0, r3, 0x1
    sth r0, 0xde(r30)
    b lbl_801AC824
lbl_801AC7E0:
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x38
    bl fn_801AC0A4
    lwz r3, 0xe4(r30)
    addi r0, r3, 0x1
    stw r0, 0xe4(r30)
    b lbl_801AC824
lbl_801AC800:
    lhz r4, 0xde(r3)
    cmpwi r4, 0x0
    beq lbl_801AC818
    subi r0, r4, 0x1
    sth r0, 0xde(r3)
    b lbl_801AC824
lbl_801AC818:
    lwz r4, 0xe4(r3)
    addi r0, r4, 0x1
    stw r0, 0xe4(r3)
lbl_801AC824:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801AC83C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AC83C() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    stw r28, 0xd0(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    beq lbl_801AC870
    cmpwi r0, 0x2
    bne lbl_801AC9F4
lbl_801AC870:
    lwz r4, 0x24(r3)
    rlwinm. r0, r4, 0, 15, 15
    bne lbl_801AC884
    rlwinm. r0, r4, 0, 16, 16
    beq lbl_801AC9F4
lbl_801AC884:
    lfs f0, lbl_804A1704
    li r0, 0x1
    stb r0, 0x120(r3)
    addi r4, r1, 0x98
    stfs f0, 0xb0(r3)
    stfs f0, 0xac(r3)
    stfs f0, 0xa8(r3)
    mr r3, r31
    bl fn_801ACC48
    lwz r3, 0xbc(r31)
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    subi r3, r3, 0x3fd4
    bl PSMTXConcat
    lwz r28, 0x68(r1)
    addi r3, r1, 0x38
    lwz r29, 0x6c(r1)
    li r4, 0x0
    lwz r30, 0x70(r1)
    lwz r12, 0x74(r1)
    lwz r11, 0x78(r1)
    lwz r10, 0x7c(r1)
    lwz r9, 0x80(r1)
    lwz r8, 0x84(r1)
    lwz r7, 0x88(r1)
    lwz r6, 0x8c(r1)
    lwz r5, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r28, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r12, 0x44(r1)
    stw r11, 0x48(r1)
    stw r10, 0x4c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_801BA138
    lfs f0, lbl_804A1704
    addi r3, r1, 0x38
    stfs f1, 0x38(r1)
    li r4, 0x1
    stfs f0, 0x58(r1)
    stfs f0, 0x48(r1)
    bl fn_801BA138
    lfs f0, lbl_804A1704
    addi r3, r1, 0x38
    stfs f1, 0x4c(r1)
    li r4, 0x2
    stfs f0, 0x5c(r1)
    stfs f0, 0x3c(r1)
    bl fn_801BA138
    lfs f2, lbl_804A1704
    stfs f1, 0x60(r1)
    stfs f2, 0x50(r1)
    stfs f2, 0x40(r1)
    lwz r0, 0x24(r31)
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_801AC9A4
    fmr f3, f2
    lfs f1, lbl_804A1730
    addi r3, r1, 0x8
    bl fn_801B9E1C
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    mr r5, r3
    bl PSMTXConcat
lbl_801AC9A4:
    addi r3, r1, 0x68
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x68
    addi r4, r1, 0x38
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x68
    addi r5, r31, 0xa8
    mr r4, r3
    bl fn_801BA090
    addi r3, r1, 0x68
    addi r4, r31, 0x9c
    mr r5, r3
    bl fn_801BA008
    addi r3, r1, 0x68
    addi r4, r31, 0xa8
    bl fn_801B955C
    mr r3, r31
    bl fn_801ACD98
lbl_801AC9F4:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_801ACA14
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ACA14() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    cmpwi r5, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    beq lbl_801ACAC0
    cmpwi r6, 0x0
    beq lbl_801ACAC0
    extsb r0, r7
    cmpwi r0, 0x64
    bne lbl_801ACAC0
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r5, 0x20(r4)
    lwz r0, 0x24(r4)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r5, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    b lbl_801ACC30
lbl_801ACAC0:
    cmpwi r5, 0x0
    bne lbl_801ACAE8
    cmpwi r6, 0x0
    bne lbl_801ACAE8
    extsb. r0, r7
    bne lbl_801ACAE8
    mr r3, r26
    bl PSMTXIdentity
    mr r3, r26
    b lbl_801ACC30
lbl_801ACAE8:
    mr r3, r26
    bl PSMTXIdentity
    mr r3, r27
    addi r4, r1, 0x2c
    bl fn_801B96C8
    extsb r0, r30
    cmpwi r0, 0x64
    bne lbl_801ACB1C
    mr r3, r26
    mr r4, r26
    addi r5, r1, 0x2c
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801ACB70
lbl_801ACB1C:
    cmpwi r0, 0x0
    beq lbl_801ACB70
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0x6c(r1)
    addi r5, r1, 0x20
    lfd f2, lbl_804A1718
    mr r3, r26
    stw r0, 0x68(r1)
    mr r4, r26
    lfs f0, lbl_804A1700
    lfd f1, 0x68(r1)
    opword 0xE061002C
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    opword 0x10230018
    opword 0xE0618034
    opword 0xF0250000
    opword 0x10230018
    opword 0xF0258008
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ACB70:
    cmpwi r29, 0x0
    bne lbl_801ACB80
    cmpwi r28, 0x0
    beq lbl_801ACC2C
lbl_801ACB80:
    cmpwi r31, 0x0
    beq lbl_801ACBA4
    extsb r0, r30
    cmpwi r0, 0x64
    beq lbl_801ACBA4
    mr r3, r26
    mr r4, r26
    addi r5, r1, 0x2c
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ACBA4:
    cmpwi r29, 0x0
    beq lbl_801ACBC8
    mr r3, r27
    addi r4, r1, 0x38
    bl fn_801B9448
    mr r3, r26
    mr r5, r26
    addi r4, r1, 0x38
    bl PSMTXConcat
lbl_801ACBC8:
    cmpwi r28, 0x0
    beq lbl_801ACBEC
    mr r3, r27
    addi r4, r1, 0x14
    bl fn_801B96E4
    mr r3, r26
    mr r4, r26
    addi r5, r1, 0x14
    bl fn_801B9F88
lbl_801ACBEC:
    cmpwi r31, 0x0
    beq lbl_801ACC2C
    extsb r0, r30
    cmpwi r0, 0x64
    beq lbl_801ACC2C
    lfs f0, lbl_804A1720
    addi r5, r1, 0x8
    opword 0xE041002C
    mr r3, r26
    mr r4, r26
    opword 0x10220018
    opword 0xE0418034
    opword 0xF0250000
    opword 0x10220018
    opword 0xF0258008
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ACC2C:
    mr r3, r26
lbl_801ACC30:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801ACC48
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ACC48() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lbz r0, 0x120(r3)
    cmpwi r0, 0x0
    beq lbl_801ACD0C
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    bne lbl_801ACC90
    lwz r3, 0xbc(r3)
    addi r4, r30, 0x124
    addi r3, r3, 0x54
    bl PSMTXCopy
    b lbl_801ACCC0
lbl_801ACC90:
    mr r3, r0
    addi r4, r1, 0x8
    bl fn_801ACC48
    lbz r8, 0x64(r30)
    addi r3, r30, 0x124
    lbz r0, 0x65(r30)
    addi r4, r1, 0x8
    clrlwi r5, r8, 31
    extrwi r6, r8, 1, 30
    extsb r7, r0
    extrwi r8, r8, 1, 29
    bl fn_801ACA14
lbl_801ACCC0:
    addi r3, r30, 0x124
    addi r5, r30, 0x90
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lfs f1, 0xa8(r30)
    addi r3, r1, 0x38
    lfs f2, 0xac(r30)
    lfs f3, 0xb0(r30)
    bl fn_801B9E1C
    addi r3, r30, 0x124
    addi r4, r1, 0x38
    mr r5, r3
    bl PSMTXConcat
    addi r3, r30, 0x124
    addi r5, r30, 0x9c
    mr r4, r3
    bl fn_801B9F88
    li r0, 0x0
    stb r0, 0x120(r30)
lbl_801ACD0C:
    cmpwi r31, 0x0
    beq lbl_801ACD7C
    lwz r4, 0x124(r30)
    mr r3, r31
    lwz r0, 0x128(r30)
    stw r4, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r4, 0x12c(r30)
    lwz r0, 0x130(r30)
    stw r4, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r4, 0x134(r30)
    lwz r0, 0x138(r30)
    stw r4, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r4, 0x13c(r30)
    lwz r0, 0x140(r30)
    stw r4, 0x18(r31)
    stw r0, 0x1c(r31)
    lwz r4, 0x144(r30)
    lwz r0, 0x148(r30)
    stw r4, 0x20(r31)
    stw r0, 0x24(r31)
    lwz r4, 0x14c(r30)
    lwz r0, 0x150(r30)
    stw r4, 0x28(r31)
    stw r0, 0x2c(r31)
    b lbl_801ACD80
lbl_801ACD7C:
    addi r3, r30, 0x124
lbl_801ACD80:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801ACD98
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ACD98() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r31, 0x1
    mr r27, r3
    stb r31, 0x120(r3)
    li r4, 0x0
    li r30, -0x1
    b lbl_801ACDE0
lbl_801ACDC4:
    stb r31, 0x8a(r3)
    lwz r0, 0x8(r3)
    lwz r3, lbl_8049D970
    clrlwi r0, r0, 16
    cmpw r3, r0
    bne lbl_801ACDE0
    stw r30, lbl_8049D970
lbl_801ACDE0:
    addi r3, r27, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_801ACDC4
    lwz r0, 0xbc(r27)
    cmpwi r0, 0x0
    beq lbl_801ACE90
    li r29, 0x0
    li r31, -0x1
    li r30, 0x1
    b lbl_801ACE74
lbl_801ACE10:
    lbz r0, 0x120(r3)
    cmpwi r0, 0x0
    bne lbl_801ACE74
    lwz r28, 0xf4(r3)
    b lbl_801ACE6C
lbl_801ACE24:
    cmplw r28, r27
    bne lbl_801ACE68
    stb r30, 0x120(r29)
    li r4, 0x0
    b lbl_801ACE54
lbl_801ACE38:
    stb r30, 0x8a(r3)
    lwz r0, 0x8(r3)
    lwz r3, lbl_8049D970
    clrlwi r0, r0, 16
    cmpw r3, r0
    bne lbl_801ACE54
    stw r31, lbl_8049D970
lbl_801ACE54:
    addi r3, r29, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_801ACE38
lbl_801ACE68:
    lwz r28, 0xf4(r28)
lbl_801ACE6C:
    cmpwi r28, 0x0
    bne lbl_801ACE24
lbl_801ACE74:
    lwz r3, 0xbc(r27)
    mr r4, r29
    addi r3, r3, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_801ACE10
lbl_801ACE90:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801ACEA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ACEA8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r4, 0x4(r4)
    lwz r5, 0x8(r31)
    lbz r6, 0xc(r31)
    bl fn_801ACEF0
    lwz r0, 0x0(r31)
    add r0, r0, r3
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801ACEF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ACEF0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r31, 0x0
    li r4, 0x0
    addi r3, r3, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801ACF70
lbl_801ACF30:
    mr r4, r30
    addi r3, r24, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r27, 0x0
    mr r29, r3
    bne lbl_801ACF54
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_801ACF6C
lbl_801ACF54:
    mr r12, r25
    mr r3, r30
    mr r4, r26
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_801ACF6C:
    mr r30, r29
lbl_801ACF70:
    cmpwi r30, 0x0
    bne lbl_801ACF30
    cmpwi r28, 0x0
    beq lbl_801ACFB8
    li r0, 0x0
    lis r4, fn_801ACEA8@ha
    stw r0, 0x8(r1)
    mr r7, r24
    addi r4, r4, fn_801ACEA8@l
    addi r5, r1, 0x8
    stw r25, 0xc(r1)
    li r6, 0x1
    stw r26, 0x10(r1)
    stb r27, 0x14(r1)
    lwz r3, 0xbc(r24)
    bl fn_801AA298
    lwz r0, 0x8(r1)
    add r31, r31, r0
lbl_801ACFB8:
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801ACFD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ACFD4() {
    nofralloc
    lwz r0, 0xb8(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801ACFE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801ACFE0() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    addi r11, r1, 0x80
    bl _savegpr_16
    lbz r0, 0x0(r3)
    lis r8, 0x4330
    stw r8, 0x20(r1)
    mr r29, r3
    cmplwi r0, 0xab
    mr r30, r4
    stw r8, 0x28(r1)
    mr r16, r5
    mr r31, r6
    bne lbl_801AD030
    mr r6, r7
    bl fn_801B1894
    b lbl_801AE2B8
lbl_801AD030:
    lis r4, lbl_803604D0@ha
    lbz r25, 0x3(r3)
    addi r4, r4, lbl_803604D0@l
    lis r6, lbl_803605D0@ha
    lbzx r9, r4, r25
    addi r6, r6, lbl_803605D0@l
    lbzx r24, r6, r25
    cmpwi r9, 0x0
    beq lbl_801AE2B8
    lhz r4, 0x8(r3)
    addi r8, r9, 0xd
    lwz r6, 0xc(r3)
    addi r22, r3, 0x20
    cmplwi r4, 0x1
    lwz r0, 0x10(r3)
    add r21, r22, r6
    clrrwi r23, r8, 1
    add r20, r21, r0
    slwi r28, r9, 1
    li r19, 0x0
    bgt lbl_801AD094
    lfs f4, lbl_804A1738
    mr r19, r16
    li r4, 0x0
    b lbl_801AD368
lbl_801AD094:
    lbz r27, 0x4(r3)
    rlwinm. r6, r27, 0, 26, 26
    bne lbl_801AD170
    lbz r0, 0x5(r3)
    cmplwi r0, 0x1
    bgt lbl_801AD170
    rlwinm. r0, r27, 0, 24, 24
    bne lbl_801AD0DC
    subi r0, r4, 0x1
    clrlwi r4, r5, 16
    cmplw r5, r0
    blt lbl_801AD0C8
    clrlwi r4, r0, 16
lbl_801AD0C8:
    stw r4, 0x24(r1)
    lfd f1, lbl_804A1740
    lfd f0, 0x20(r1)
    fsubs f4, f0, f1
    b lbl_801AD368
lbl_801AD0DC:
    cmplwi r7, 0x1
    bne lbl_801AD100
    subi r0, r4, 0x1
    lfd f1, lbl_804A1748
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f4, f0, f1
    b lbl_801AD160
lbl_801AD100:
    stw r5, 0x24(r1)
    subi r0, r4, 0x1
    xoris r3, r0, 0x8000
    lfd f5, lbl_804A1740
    lfd f0, 0x20(r1)
    subi r0, r7, 0x1
    stw r3, 0x2c(r1)
    fsubs f4, f0, f5
    lfd f3, lbl_804A1748
    stw r0, 0x24(r1)
    lfd f1, 0x28(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f1, f3
    stw r3, 0x2c(r1)
    fsubs f1, f0, f5
    lfd f0, 0x28(r1)
    fdivs f1, f2, f1
    fmuls f4, f4, f1
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    ble lbl_801AD160
    stw r3, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f3
lbl_801AD160:
    fctiwz f0, f4
    stfd f0, 0x30(r1)
    lwz r4, 0x34(r1)
    b lbl_801AD368
lbl_801AD170:
    rlwinm. r0, r27, 0, 24, 24
    bne lbl_801AD240
    subi r7, r4, 0x1
    rlwinm. r0, r27, 0, 25, 25
    divwu r19, r5, r7
    bne lbl_801AD1BC
    cmpwi r6, 0x0
    bne lbl_801AD1AC
    lbz r3, 0x5(r3)
    cmplw r19, r3
    blt lbl_801AD1AC
    subi r0, r3, 0x1
    clrlwi r4, r7, 16
    clrlwi r19, r0, 24
    b lbl_801AD228
lbl_801AD1AC:
    mullw r0, r19, r7
    subf r0, r0, r5
    clrlwi r4, r0, 16
    b lbl_801AD228
lbl_801AD1BC:
    cmpwi r6, 0x0
    bne lbl_801AD200
    lbz r6, 0x5(r3)
    cmplw r19, r6
    blt lbl_801AD200
    srwi r4, r6, 31
    clrlwi r0, r6, 31
    xor r3, r0, r4
    subf r4, r4, r3
    subi r0, r6, 0x1
    cntlzw r4, r4
    clrlwi r3, r7, 16
    clrlwi r19, r0, 24
    extrwi r0, r4, 1, 26
    neg r0, r0
    andc r4, r3, r0
    b lbl_801AD228
lbl_801AD200:
    clrlwi. r0, r19, 31
    bne lbl_801AD218
    mullw r0, r19, r7
    subf r0, r0, r5
    clrlwi r4, r0, 16
    b lbl_801AD228
lbl_801AD218:
    addi r0, r19, 0x1
    mullw r0, r7, r0
    subf r0, r5, r0
    clrlwi r4, r0, 16
lbl_801AD228:
    clrlwi r0, r4, 16
    lfd f1, lbl_804A1740
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f4, f0, f1
    b lbl_801AD368
lbl_801AD240:
    subi r6, r7, 0x1
    cmplw r5, r6
    blt lbl_801AD29C
    rlwinm. r0, r27, 0, 25, 25
    beq lbl_801AD26C
    lbz r0, 0x5(r3)
    srwi r5, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r5
    subf. r0, r5, r0
    beq lbl_801AD278
lbl_801AD26C:
    subi r0, r4, 0x1
    clrlwi r4, r0, 16
    b lbl_801AD27C
lbl_801AD278:
    li r4, 0x0
lbl_801AD27C:
    stw r4, 0x24(r1)
    lbz r3, 0x5(r3)
    lfd f1, lbl_804A1740
    lfd f0, 0x20(r1)
    subi r0, r3, 0x1
    clrlwi r19, r0, 24
    fsubs f4, f0, f1
    b lbl_801AD368
lbl_801AD29C:
    lbz r3, 0x5(r3)
    subi r26, r4, 0x1
    xoris r0, r26, 0x8000
    lfd f5, lbl_804A1740
    stw r3, 0x2c(r1)
    lfd f3, lbl_804A1748
    lfd f0, 0x28(r1)
    stw r0, 0x24(r1)
    fsubs f4, f0, f5
    stw r6, 0x2c(r1)
    lfd f1, 0x20(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f1, f3
    stw r5, 0x24(r1)
    fsubs f0, f0, f5
    lfd f1, 0x20(r1)
    stw r0, 0x2c(r1)
    fdivs f2, f2, f0
    lfd f0, 0x28(r1)
    fmuls f31, f4, f2
    fsubs f1, f1, f5
    fsubs f0, f0, f3
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r4, r3, r26
    stw r16, 0x24(r1)
    lfd f2, lbl_804A1740
    rlwinm. r0, r27, 0, 25, 25
    lfd f0, 0x20(r1)
    mr r19, r3
    fsubs f1, f0, f2
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fmuls f1, f1, f31
    fsubs f0, f0, f2
    fsubs f4, f1, f0
    bne lbl_801AD338
    b lbl_801AD35C
lbl_801AD338:
    clrlwi. r0, r3, 31
    bne lbl_801AD344
    b lbl_801AD35C
lbl_801AD344:
    xoris r0, r26, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    fsubs f4, f0, f4
lbl_801AD35C:
    fctiwz f0, f4
    stfd f0, 0x30(r1)
    lwz r4, 0x34(r1)
lbl_801AD368:
    clrlwi r4, r4, 16
    lhz r3, 0x0(r22)
    xoris r0, r4, 0x8000
    lfd f2, lbl_804A1748
    stw r0, 0x2c(r1)
    subi r18, r3, 0x1
    srwi r0, r18, 31
    lfs f0, lbl_804A1754
    lfd f1, 0x28(r1)
    add r0, r0, r18
    addi r27, r22, 0x4
    li r6, 0x0
    fsubs f1, f1, f2
    srawi r5, r0, 1
    fsubs f1, f1, f4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r7
    lhz r17, 0x4(r22)
    srwi r7, r7, 31
    cmpw r4, r17
    bge lbl_801AD3D0
    li r18, 0x0
    li r7, 0x1
    b lbl_801AD488
lbl_801AD3D0:
    bne lbl_801AD3F8
    cmpwi r18, 0x0
    li r18, 0x0
    bne lbl_801AD3E8
    li r7, 0x1
    b lbl_801AD488
lbl_801AD3E8:
    cmpwi r7, 0x0
    bne lbl_801AD488
    lhzx r16, r27, r23
    b lbl_801AD488
lbl_801AD3F8:
    mullw r0, r18, r23
    lhzx r16, r27, r0
    cmpw r16, r4
    bgt lbl_801AD410
    li r7, 0x1
    b lbl_801AD488
lbl_801AD410:
    mullw r0, r5, r23
    lhzx r3, r27, r0
    b lbl_801AD478
lbl_801AD41C:
    cmpw r4, r3
    bne lbl_801AD444
    cmpwi r7, 0x0
    mr r18, r5
    bne lbl_801AD488
    addi r0, r5, 0x1
    mr r17, r3
    mullw r0, r0, r23
    lhzx r16, r27, r0
    b lbl_801AD488
lbl_801AD444:
    cmpw r3, r4
    bge lbl_801AD458
    mr r6, r5
    mr r17, r3
    b lbl_801AD460
lbl_801AD458:
    mr r18, r5
    mr r16, r3
lbl_801AD460:
    add r3, r6, r18
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r5, r0, 1
    mullw r0, r5, r23
    lhzx r3, r27, r0
lbl_801AD478:
    cmpw r6, r5
    blt lbl_801AD41C
    mr r18, r6
    li r7, 0x0
lbl_801AD488:
    cmpwi r7, 0x0
    beq lbl_801AD620
    mullw r0, r18, r23
    add r4, r27, r0
    lbz r9, 0x2(r4)
    addi r4, r4, 0xc
    cmpwi r9, 0x0
    bne lbl_801AD4D8
    li r3, 0x1
    b lbl_801AD4CC
lbl_801AD4B0:
    and. r0, r25, r3
    beq lbl_801AD4C4
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r30)
lbl_801AD4C4:
    clrlslwi r3, r3, 17, 1
    addi r30, r30, 0x1
lbl_801AD4CC:
    cmpw r3, r24
    ble lbl_801AD4B0
    b lbl_801AE2B8
lbl_801AD4D8:
    lis r3, 0x3711
    lhz r0, 0x0(r4)
    subi r3, r3, 0x6819
    lis r6, 0x3f82
    mullw r3, r0, r3
    lis r5, 0x30a7
    subi r8, r6, 0x9cb
    lhz r7, 0x6(r29)
    lis r4, 0x8
    addi r6, r5, 0x4193
    subi r5, r4, 0x46d7
    addis r4, r3, 0x5
    rlwinm. r3, r9, 0, 30, 30
    subi r3, r4, 0x40ad
    mullw r5, r19, r5
    mullw r8, r31, r8
    add r3, r5, r3
    mullw r4, r7, r6
    add r4, r8, r4
    add r3, r4, r3
    stw r3, 0x18(r1)
    lbz r5, 0x1a(r1)
    lbz r3, 0x1b(r1)
    lbz r4, 0x19(r1)
    xor r5, r5, r3
    lbz r3, 0x18(r1)
    xor r4, r4, r5
    stb r5, 0x1a(r1)
    xor r3, r3, r4
    stb r4, 0x19(r1)
    stb r3, 0x18(r1)
    lwz r3, 0x18(r1)
    bne lbl_801AD56C
    mullw r0, r0, r28
    add r4, r21, r0
    addi r7, r4, 0x4
    b lbl_801AD5A0
lbl_801AD56C:
    lhz r6, 0x0(r20)
    srwi r7, r3, 16
    lis r4, 0x3
    divwu r5, r7, r6
    addi r0, r4, 0x43fd
    mullw r4, r5, r6
    subf r4, r4, r7
    mullw r4, r28, r4
    mullw r3, r3, r0
    add r4, r20, r4
    addi r7, r4, 0x4
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
lbl_801AD5A0:
    li r8, 0x1
    lis r4, 0x3
    b lbl_801AD614
lbl_801AD5AC:
    and. r0, r25, r8
    beq lbl_801AD5F0
    srwi r0, r3, 16
    lbz r5, 0x1(r7)
    extsh r0, r0
    lbz r6, 0x0(r7)
    mullw r0, r5, r0
    addi r7, r7, 0x2
    srawi r0, r0, 15
    addze r0, r0
    add. r0, r6, r0
    bge lbl_801AD5E0
    li r0, 0x0
lbl_801AD5E0:
    cmpwi r0, 0xff
    ble lbl_801AD5EC
    li r0, 0xff
lbl_801AD5EC:
    stb r0, 0x0(r30)
lbl_801AD5F0:
    lbz r0, 0x4(r29)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801AD60C
    addi r0, r4, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
lbl_801AD60C:
    clrlslwi r8, r8, 17, 1
    addi r30, r30, 0x1
lbl_801AD614:
    cmpw r8, r24
    ble lbl_801AD5AC
    b lbl_801AE2B8
lbl_801AD620:
    lbz r3, 0x4(r29)
    mr r26, r19
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_801AD698
    rlwinm. r5, r3, 0, 26, 26
    bne lbl_801AD644
    lbz r0, 0x5(r29)
    cmplwi r0, 0x1
    ble lbl_801AD698
lbl_801AD644:
    clrlwi. r6, r19, 31
    bne lbl_801AD67C
    lhz r3, 0x0(r22)
    addi r4, r18, 0x1
    subi r0, r3, 0x1
    cmpw r4, r0
    blt lbl_801AD67C
    cmpwi r5, 0x0
    bne lbl_801AD678
    lbz r3, 0x5(r29)
    subi r0, r3, 0x1
    cmplw r19, r0
    bge lbl_801AD67C
lbl_801AD678:
    addi r26, r19, 0x1
lbl_801AD67C:
    cmpwi r6, 0x0
    beq lbl_801AD698
    cmpwi r18, 0x0
    bne lbl_801AD698
    cmpwi r19, 0x0
    beq lbl_801AD698
    addi r19, r19, 0x1
lbl_801AD698:
    clrlwi r0, r17, 16
    lfd f2, lbl_804A1740
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1758
    lfd f1, 0x20(r1)
    fsubs f1, f1, f2
    fsubs f1, f4, f1
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    clrlwi r4, r17, 16
    clrlwi r0, r16, 16
    subf r4, r4, r0
    divwu r5, r3, r4
    addi r0, r18, 0x1
    mullw r3, r18, r23
    add r6, r27, r3
    mullw r3, r0, r23
    lbz r0, 0x2(r6)
    addi r4, r6, 0xc
    addi r7, r6, 0x4
    neg r8, r0
    add r6, r27, r3
    lbz r3, 0x2(r6)
    or r8, r8, r0
    srwi. r9, r8, 31
    addi r6, r6, 0xc
    neg r8, r3
    or r8, r8, r3
    srwi r8, r8, 31
    bne lbl_801AD8D8
    cmpwi r8, 0x0
    bne lbl_801AD8D8
    lfd f1, lbl_804A1740
    li r10, 0x1
    lfs f0, lbl_804A1758
    lfd f10, lbl_804A1748
    lfs f8, lbl_804A1760
    lfs f6, lbl_804A1768
    lfs f5, lbl_804A175C
    lfs f4, lbl_804A1738
    lfs f3, lbl_804A176C
    b lbl_801AD8CC
lbl_801AD740:
    and. r0, r25, r10
    beq lbl_801AD8C0
    lbz r8, 0x0(r6)
    lbz r3, 0x0(r4)
    lbz r9, 0x0(r7)
    cmplw r3, r8
    bne lbl_801AD760
    b lbl_801AD8B4
lbl_801AD760:
    clrlwi r0, r9, 30
    cmpwi r0, 0x1
    beq lbl_801AD7A0
    bge lbl_801AD77C
    cmpwi r0, 0x0
    bge lbl_801AD788
    b lbl_801AD8B0
lbl_801AD77C:
    cmpwi r0, 0x3
    bge lbl_801AD8B0
    b lbl_801AD8B4
lbl_801AD788:
    subf r0, r3, r8
    mullw r0, r5, r0
    srwi r0, r0, 16
    add r0, r3, r0
    clrlwi r3, r0, 24
    b lbl_801AD8B4
lbl_801AD7A0:
    stw r5, 0x2c(r1)
    cmplwi r9, 0x1
    lfd f2, 0x28(r1)
    fsubs f2, f2, f1
    fdivs f13, f2, f0
    bne lbl_801AD800
    subf r0, r3, r8
    fmuls f2, f8, f13
    xoris r0, r0, 0x8000
    stw r3, 0x24(r1)
    stw r0, 0x2c(r1)
    fsubs f7, f5, f2
    lfd f9, 0x20(r1)
    lfd f2, 0x28(r1)
    fsubs f9, f9, f1
    fsubs f2, f2, f10
    fmuls f2, f7, f2
    fmuls f2, f13, f2
    fmuls f2, f13, f2
    fadds f2, f9, f2
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r3, 0x34(r1)
    b lbl_801AD8B4
lbl_801AD800:
    extrwi. r0, r9, 1, 29
    bne lbl_801AD810
    lfs f9, lbl_804A1738
    b lbl_801AD814
lbl_801AD810:
    lfs f9, lbl_804A1764
lbl_801AD814:
    extrwi. r0, r9, 1, 28
    bne lbl_801AD824
    lfs f12, lbl_804A1738
    b lbl_801AD828
lbl_801AD824:
    lfs f12, lbl_804A1764
lbl_801AD828:
    fadds f7, f12, f9
    subf r0, r3, r8
    fmuls f2, f6, f12
    xoris r0, r0, 0x8000
    stw r3, 0x24(r1)
    fsubs f7, f7, f8
    fsubs f2, f2, f9
    stw r0, 0x2c(r1)
    lfd f11, 0x20(r1)
    fmuls f7, f13, f7
    lfd f9, 0x28(r1)
    fadds f2, f5, f2
    fsubs f9, f9, f10
    fmuls f7, f13, f7
    fmuls f2, f13, f2
    fmuls f9, f13, f9
    fsubs f11, f11, f1
    fadds f2, f7, f2
    fadds f2, f12, f2
    fmuls f2, f9, f2
    fadds f2, f11, f2
    fcmpo cr0, f2, f4
    bge lbl_801AD88C
    li r3, 0x0
    b lbl_801AD8B4
lbl_801AD88C:
    fcmpo cr0, f2, f3
    ble lbl_801AD89C
    li r3, 0xff
    b lbl_801AD8B4
lbl_801AD89C:
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r3, 0x34(r1)
    b lbl_801AD8B4
    b lbl_801AD8B4
lbl_801AD8B0:
    li r3, 0x0
lbl_801AD8B4:
    stb r3, 0x0(r30)
    addi r4, r4, 0x1
    addi r6, r6, 0x1
lbl_801AD8C0:
    clrlslwi r10, r10, 17, 1
    addi r7, r7, 0x1
    addi r30, r30, 0x1
lbl_801AD8CC:
    cmpw r10, r24
    ble lbl_801AD740
    b lbl_801AE2B8
lbl_801AD8D8:
    cmpwi r9, 0x0
    beq lbl_801ADBC8
    cmpwi r8, 0x0
    bne lbl_801ADBC8
    lis r8, 0x3711
    lhz r3, 0x0(r4)
    subi r4, r8, 0x6819
    lis r11, 0x3f82
    mullw r4, r3, r4
    lis r9, 0x30a7
    lis r8, 0x8
    lhz r10, 0x6(r29)
    subi r11, r11, 0x9cb
    subi r8, r8, 0x46d7
    addi r9, r9, 0x4193
    addis r4, r4, 0x5
    rlwinm. r0, r0, 0, 30, 30
    subi r0, r4, 0x40ad
    mullw r8, r19, r8
    mullw r11, r31, r11
    add r0, r8, r0
    mullw r4, r10, r9
    add r4, r11, r4
    add r0, r4, r0
    stw r0, 0x14(r1)
    lbz r8, 0x16(r1)
    lbz r0, 0x17(r1)
    lbz r4, 0x15(r1)
    xor r8, r8, r0
    lbz r0, 0x14(r1)
    xor r4, r4, r8
    stb r8, 0x16(r1)
    xor r0, r0, r4
    stb r4, 0x15(r1)
    stb r0, 0x14(r1)
    lwz r4, 0x14(r1)
    bne lbl_801AD97C
    mullw r0, r3, r28
    add r3, r21, r0
    addi r3, r3, 0x4
    b lbl_801AD9B0
lbl_801AD97C:
    lhz r9, 0x0(r20)
    srwi r10, r4, 16
    lis r3, 0x3
    divwu r8, r10, r9
    addi r0, r3, 0x43fd
    mullw r3, r8, r9
    subf r3, r3, r10
    mullw r3, r28, r3
    mullw r4, r4, r0
    add r3, r20, r3
    addi r3, r3, 0x4
    addis r4, r4, 0x27
    subi r4, r4, 0x613d
lbl_801AD9B0:
    lfd f1, lbl_804A1740
    li r0, 0x1
    lfs f0, lbl_804A1758
    lis r8, 0x3
    lfd f10, lbl_804A1748
    lfs f8, lbl_804A1760
    lfs f6, lbl_804A1768
    lfs f5, lbl_804A175C
    lfs f4, lbl_804A1738
    lfs f3, lbl_804A176C
    b lbl_801ADBBC
lbl_801AD9DC:
    and. r9, r25, r0
    beq lbl_801ADB94
    srwi r9, r4, 16
    lbz r10, 0x1(r3)
    extsh r9, r9
    lbz r11, 0x0(r3)
    mullw r9, r10, r9
    addi r3, r3, 0x2
    srawi r9, r9, 15
    addze r9, r9
    add. r16, r11, r9
    bge lbl_801ADA10
    li r16, 0x0
lbl_801ADA10:
    cmpwi r16, 0xff
    ble lbl_801ADA1C
    li r16, 0xff
lbl_801ADA1C:
    lbz r11, 0x0(r6)
    clrlwi r10, r16, 24
    lbz r12, 0x0(r7)
    cmplw r10, r11
    bne lbl_801ADA34
    b lbl_801ADB8C
lbl_801ADA34:
    clrlwi r9, r12, 30
    cmpwi r9, 0x1
    beq lbl_801ADA74
    bge lbl_801ADA50
    cmpwi r9, 0x0
    bge lbl_801ADA5C
    b lbl_801ADB88
lbl_801ADA50:
    cmpwi r9, 0x3
    bge lbl_801ADB88
    b lbl_801ADB8C
lbl_801ADA5C:
    subf r9, r10, r11
    mullw r9, r5, r9
    srwi r9, r9, 16
    add r9, r10, r9
    clrlwi r10, r9, 24
    b lbl_801ADB8C
lbl_801ADA74:
    stw r5, 0x24(r1)
    cmplwi r12, 0x1
    lfd f2, 0x20(r1)
    fsubs f2, f2, f1
    fdivs f13, f2, f0
    bne lbl_801ADAD4
    subf r9, r10, r11
    fmuls f2, f8, f13
    xoris r9, r9, 0x8000
    stw r10, 0x2c(r1)
    stw r9, 0x24(r1)
    fsubs f7, f5, f2
    lfd f9, 0x28(r1)
    lfd f2, 0x20(r1)
    fsubs f9, f9, f1
    fsubs f2, f2, f10
    fmuls f2, f7, f2
    fmuls f2, f13, f2
    fmuls f2, f13, f2
    fadds f2, f9, f2
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r10, 0x34(r1)
    b lbl_801ADB8C
lbl_801ADAD4:
    extrwi. r9, r12, 1, 29
    bne lbl_801ADAE4
    lfs f9, lbl_804A1738
    b lbl_801ADAE8
lbl_801ADAE4:
    lfs f9, lbl_804A1764
lbl_801ADAE8:
    extrwi. r9, r12, 1, 28
    bne lbl_801ADAF8
    lfs f12, lbl_804A1738
    b lbl_801ADAFC
lbl_801ADAF8:
    lfs f12, lbl_804A1764
lbl_801ADAFC:
    fadds f7, f12, f9
    clrlwi r10, r16, 24
    fmuls f2, f6, f12
    subf r9, r10, r11
    xoris r9, r9, 0x8000
    stw r10, 0x2c(r1)
    fsubs f7, f7, f8
    lfd f11, 0x28(r1)
    fsubs f2, f2, f9
    stw r9, 0x24(r1)
    fsubs f11, f11, f1
    fmuls f7, f13, f7
    fadds f2, f5, f2
    lfd f9, 0x20(r1)
    fmuls f7, f13, f7
    fmuls f2, f13, f2
    fsubs f9, f9, f10
    fadds f2, f7, f2
    fmuls f9, f13, f9
    fadds f2, f12, f2
    fmuls f2, f9, f2
    fadds f2, f11, f2
    fcmpo cr0, f2, f4
    bge lbl_801ADB64
    li r10, 0x0
    b lbl_801ADB8C
lbl_801ADB64:
    fcmpo cr0, f2, f3
    ble lbl_801ADB74
    li r10, 0xff
    b lbl_801ADB8C
lbl_801ADB74:
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r10, 0x34(r1)
    b lbl_801ADB8C
    b lbl_801ADB8C
lbl_801ADB88:
    li r10, 0x0
lbl_801ADB8C:
    stb r10, 0x0(r30)
    addi r6, r6, 0x1
lbl_801ADB94:
    lbz r9, 0x4(r29)
    rlwinm. r9, r9, 0, 29, 29
    bne lbl_801ADBB0
    addi r9, r8, 0x43fd
    mullw r4, r4, r9
    addis r4, r4, 0x27
    subi r4, r4, 0x613d
lbl_801ADBB0:
    clrlslwi r0, r0, 17, 1
    addi r7, r7, 0x1
    addi r30, r30, 0x1
lbl_801ADBBC:
    cmpw r0, r24
    ble lbl_801AD9DC
    b lbl_801AE2B8
lbl_801ADBC8:
    cmpwi r9, 0x0
    bne lbl_801ADEB8
    cmpwi r8, 0x0
    beq lbl_801ADEB8
    lis r8, 0x3711
    lhz r0, 0x0(r6)
    subi r6, r8, 0x6819
    lis r11, 0x3f82
    mullw r6, r0, r6
    lis r9, 0x30a7
    lis r8, 0x8
    lhz r10, 0x6(r29)
    subi r11, r11, 0x9cb
    subi r8, r8, 0x46d7
    addi r9, r9, 0x4193
    addis r6, r6, 0x5
    rlwinm. r3, r3, 0, 30, 30
    subi r3, r6, 0x40ad
    mullw r8, r26, r8
    mullw r11, r31, r11
    add r3, r8, r3
    mullw r6, r10, r9
    add r6, r11, r6
    add r3, r6, r3
    stw r3, 0x10(r1)
    lbz r8, 0x12(r1)
    lbz r3, 0x13(r1)
    lbz r6, 0x11(r1)
    xor r8, r8, r3
    lbz r3, 0x10(r1)
    xor r6, r6, r8
    stb r8, 0x12(r1)
    xor r3, r3, r6
    stb r6, 0x11(r1)
    stb r3, 0x10(r1)
    lwz r3, 0x10(r1)
    bne lbl_801ADC6C
    mullw r0, r0, r28
    add r6, r21, r0
    addi r6, r6, 0x4
    b lbl_801ADCA0
lbl_801ADC6C:
    lhz r9, 0x0(r20)
    srwi r10, r3, 16
    lis r6, 0x3
    divwu r8, r10, r9
    addi r0, r6, 0x43fd
    mullw r6, r8, r9
    subf r6, r6, r10
    mullw r6, r28, r6
    mullw r3, r3, r0
    add r6, r20, r6
    addi r6, r6, 0x4
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
lbl_801ADCA0:
    lfd f1, lbl_804A1740
    li r0, 0x1
    lfs f0, lbl_804A1758
    lis r8, 0x3
    lfd f10, lbl_804A1748
    lfs f8, lbl_804A1760
    lfs f6, lbl_804A1768
    lfs f5, lbl_804A175C
    lfs f4, lbl_804A1738
    lfs f3, lbl_804A176C
    b lbl_801ADEAC
lbl_801ADCCC:
    and. r9, r25, r0
    beq lbl_801ADE84
    srwi r9, r3, 16
    lbz r10, 0x1(r6)
    extsh r9, r9
    lbz r11, 0x0(r6)
    mullw r9, r10, r9
    addi r6, r6, 0x2
    srawi r9, r9, 15
    addze r9, r9
    add. r16, r11, r9
    bge lbl_801ADD00
    li r16, 0x0
lbl_801ADD00:
    cmpwi r16, 0xff
    ble lbl_801ADD0C
    li r16, 0xff
lbl_801ADD0C:
    lbz r11, 0x0(r4)
    clrlwi r10, r16, 24
    lbz r12, 0x0(r7)
    cmplw r11, r10
    bne lbl_801ADD24
    b lbl_801ADE7C
lbl_801ADD24:
    clrlwi r9, r12, 30
    cmpwi r9, 0x1
    beq lbl_801ADD64
    bge lbl_801ADD40
    cmpwi r9, 0x0
    bge lbl_801ADD4C
    b lbl_801ADE78
lbl_801ADD40:
    cmpwi r9, 0x3
    bge lbl_801ADE78
    b lbl_801ADE7C
lbl_801ADD4C:
    subf r9, r11, r10
    mullw r9, r5, r9
    srwi r9, r9, 16
    add r9, r11, r9
    clrlwi r11, r9, 24
    b lbl_801ADE7C
lbl_801ADD64:
    stw r5, 0x2c(r1)
    cmplwi r12, 0x1
    lfd f2, 0x28(r1)
    fsubs f2, f2, f1
    fdivs f13, f2, f0
    bne lbl_801ADDC4
    subf r9, r11, r10
    fmuls f2, f8, f13
    xoris r9, r9, 0x8000
    stw r11, 0x24(r1)
    stw r9, 0x2c(r1)
    fsubs f7, f5, f2
    lfd f9, 0x20(r1)
    lfd f2, 0x28(r1)
    fsubs f9, f9, f1
    fsubs f2, f2, f10
    fmuls f2, f7, f2
    fmuls f2, f13, f2
    fmuls f2, f13, f2
    fadds f2, f9, f2
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r11, 0x34(r1)
    b lbl_801ADE7C
lbl_801ADDC4:
    extrwi. r9, r12, 1, 29
    bne lbl_801ADDD4
    lfs f9, lbl_804A1738
    b lbl_801ADDD8
lbl_801ADDD4:
    lfs f9, lbl_804A1764
lbl_801ADDD8:
    extrwi. r9, r12, 1, 28
    bne lbl_801ADDE8
    lfs f12, lbl_804A1738
    b lbl_801ADDEC
lbl_801ADDE8:
    lfs f12, lbl_804A1764
lbl_801ADDEC:
    fadds f7, f12, f9
    clrlwi r9, r16, 24
    fmuls f2, f6, f12
    subf r9, r11, r9
    xoris r9, r9, 0x8000
    stw r11, 0x24(r1)
    fsubs f7, f7, f8
    lfd f11, 0x20(r1)
    fsubs f2, f2, f9
    stw r9, 0x2c(r1)
    fsubs f11, f11, f1
    fmuls f7, f13, f7
    fadds f2, f5, f2
    lfd f9, 0x28(r1)
    fmuls f7, f13, f7
    fmuls f2, f13, f2
    fsubs f9, f9, f10
    fadds f2, f7, f2
    fmuls f9, f13, f9
    fadds f2, f12, f2
    fmuls f2, f9, f2
    fadds f2, f11, f2
    fcmpo cr0, f2, f4
    bge lbl_801ADE54
    li r11, 0x0
    b lbl_801ADE7C
lbl_801ADE54:
    fcmpo cr0, f2, f3
    ble lbl_801ADE64
    li r11, 0xff
    b lbl_801ADE7C
lbl_801ADE64:
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r11, 0x34(r1)
    b lbl_801ADE7C
    b lbl_801ADE7C
lbl_801ADE78:
    li r11, 0x0
lbl_801ADE7C:
    stb r11, 0x0(r30)
    addi r4, r4, 0x1
lbl_801ADE84:
    lbz r9, 0x4(r29)
    rlwinm. r9, r9, 0, 29, 29
    bne lbl_801ADEA0
    addi r9, r8, 0x43fd
    mullw r3, r3, r9
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
lbl_801ADEA0:
    clrlslwi r0, r0, 17, 1
    addi r7, r7, 0x1
    addi r30, r30, 0x1
lbl_801ADEAC:
    cmpw r0, r24
    ble lbl_801ADCCC
    b lbl_801AE2B8
lbl_801ADEB8:
    lis r8, 0x3f82
    lis r10, 0x30a7
    subi r12, r8, 0x9cb
    lis r9, 0x8
    lis r8, 0x3711
    lhz r11, 0x6(r29)
    addi r10, r10, 0x4193
    rlwinm. r0, r0, 0, 30, 30
    lhz r4, 0x0(r4)
    subi r8, r8, 0x6819
    subi r9, r9, 0x46d7
    mullw r0, r11, r10
    mullw r12, r31, r12
    mullw r8, r4, r8
    add r0, r12, r0
    mullw r10, r19, r9
    addis r9, r8, 0x5
    add r8, r10, r0
    add r8, r8, r9
    subi r8, r8, 0x40ad
    stw r8, 0xc(r1)
    lbz r10, 0xe(r1)
    lbz r8, 0xf(r1)
    lbz r9, 0xd(r1)
    xor r10, r10, r8
    lbz r8, 0xc(r1)
    xor r9, r9, r10
    stb r10, 0xe(r1)
    xor r8, r8, r9
    stb r9, 0xd(r1)
    stb r8, 0xc(r1)
    lwz r8, 0xc(r1)
    bne lbl_801ADF4C
    mullw r4, r4, r28
    add r4, r21, r4
    addi r9, r4, 0x4
    b lbl_801ADF80
lbl_801ADF4C:
    lhz r10, 0x0(r20)
    srwi r11, r8, 16
    lis r4, 0x3
    divwu r9, r11, r10
    addi r4, r4, 0x43fd
    mullw r9, r9, r10
    subf r9, r9, r11
    mullw r9, r28, r9
    mullw r4, r8, r4
    add r8, r20, r9
    addi r9, r8, 0x4
    addis r8, r4, 0x27
    subi r8, r8, 0x613d
lbl_801ADF80:
    lis r4, 0x8
    lis r10, 0x3711
    subi r11, r4, 0x46d7
    lhz r4, 0x0(r6)
    subi r6, r10, 0x6819
    rlwinm. r3, r3, 0, 30, 30
    mullw r10, r26, r11
    mullw r3, r4, r6
    add r0, r10, r0
    addis r3, r3, 0x5
    add r3, r0, r3
    subi r0, r3, 0x40ad
    stw r0, 0x8(r1)
    lbz r6, 0xa(r1)
    lbz r0, 0xb(r1)
    lbz r3, 0x9(r1)
    xor r6, r6, r0
    lbz r0, 0x8(r1)
    xor r3, r3, r6
    stb r6, 0xa(r1)
    xor r0, r0, r3
    stb r3, 0x9(r1)
    stb r0, 0x8(r1)
    lwz r6, 0x8(r1)
    bne lbl_801ADFF4
    mullw r0, r4, r28
    add r3, r21, r0
    addi r4, r3, 0x4
    b lbl_801AE028
lbl_801ADFF4:
    lhz r10, 0x0(r20)
    srwi r11, r6, 16
    lis r3, 0x3
    divwu r4, r11, r10
    addi r0, r3, 0x43fd
    mullw r3, r4, r10
    subf r3, r3, r11
    mullw r4, r28, r3
    mullw r3, r6, r0
    add r4, r20, r4
    addi r4, r4, 0x4
    addis r6, r3, 0x27
    subi r6, r6, 0x613d
lbl_801AE028:
    lfd f1, lbl_804A1740
    li r10, 0x1
    lfs f0, lbl_804A1758
    lis r3, 0x3
    lfd f10, lbl_804A1748
    lfs f8, lbl_804A1760
    lfs f6, lbl_804A1768
    lfs f5, lbl_804A175C
    lfs f4, lbl_804A1738
    lfs f3, lbl_804A176C
    b lbl_801AE2B0
lbl_801AE054:
    and. r0, r25, r10
    beq lbl_801AE27C
    srwi r0, r8, 16
    lbz r11, 0x1(r9)
    extsh r0, r0
    lbz r12, 0x0(r9)
    mullw r0, r11, r0
    addi r9, r9, 0x2
    srawi r0, r0, 15
    addze r0, r0
    add. r0, r12, r0
    bge lbl_801AE088
    li r0, 0x0
lbl_801AE088:
    cmpwi r0, 0xff
    ble lbl_801AE094
    li r0, 0xff
lbl_801AE094:
    lbz r11, 0x4(r29)
    rlwinm. r17, r11, 0, 29, 29
    bne lbl_801AE0B0
    addi r11, r3, 0x43fd
    mullw r8, r8, r11
    addis r8, r8, 0x27
    subi r8, r8, 0x613d
lbl_801AE0B0:
    srwi r11, r6, 16
    lbz r12, 0x1(r4)
    extsh r11, r11
    lbz r16, 0x0(r4)
    mullw r11, r12, r11
    addi r4, r4, 0x2
    srawi r11, r11, 15
    addze r11, r11
    add. r18, r16, r11
    bge lbl_801AE0DC
    li r18, 0x0
lbl_801AE0DC:
    cmpwi r18, 0xff
    ble lbl_801AE0E8
    li r18, 0xff
lbl_801AE0E8:
    cmpwi r17, 0x0
    bne lbl_801AE100
    addi r11, r3, 0x43fd
    mullw r6, r6, r11
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
lbl_801AE100:
    clrlwi r16, r0, 24
    clrlwi r12, r18, 24
    cmplw r16, r12
    lbz r17, 0x0(r7)
    bne lbl_801AE118
    b lbl_801AE274
lbl_801AE118:
    clrlwi r11, r17, 30
    cmpwi r11, 0x1
    beq lbl_801AE158
    bge lbl_801AE134
    cmpwi r11, 0x0
    bge lbl_801AE140
    b lbl_801AE270
lbl_801AE134:
    cmpwi r11, 0x3
    bge lbl_801AE270
    b lbl_801AE274
lbl_801AE140:
    subf r0, r16, r12
    mullw r0, r5, r0
    srwi r0, r0, 16
    add r0, r16, r0
    clrlwi r16, r0, 24
    b lbl_801AE274
lbl_801AE158:
    stw r5, 0x24(r1)
    cmplwi r17, 0x1
    lfd f2, 0x20(r1)
    fsubs f2, f2, f1
    fdivs f13, f2, f0
    bne lbl_801AE1B8
    subf r0, r16, r12
    fmuls f2, f8, f13
    xoris r0, r0, 0x8000
    stw r16, 0x2c(r1)
    stw r0, 0x24(r1)
    fsubs f7, f5, f2
    lfd f9, 0x28(r1)
    lfd f2, 0x20(r1)
    fsubs f9, f9, f1
    fsubs f2, f2, f10
    fmuls f2, f7, f2
    fmuls f2, f13, f2
    fmuls f2, f13, f2
    fadds f2, f9, f2
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r16, 0x34(r1)
    b lbl_801AE274
lbl_801AE1B8:
    extrwi. r11, r17, 1, 29
    bne lbl_801AE1C8
    lfs f9, lbl_804A1738
    b lbl_801AE1CC
lbl_801AE1C8:
    lfs f9, lbl_804A1764
lbl_801AE1CC:
    extrwi. r11, r17, 1, 28
    bne lbl_801AE1DC
    lfs f12, lbl_804A1738
    b lbl_801AE1E0
lbl_801AE1DC:
    lfs f12, lbl_804A1764
lbl_801AE1E0:
    fadds f7, f12, f9
    clrlwi r11, r0, 24
    fmuls f2, f6, f12
    clrlwi r0, r18, 24
    subf r0, r11, r0
    stw r11, 0x2c(r1)
    fsubs f7, f7, f8
    xoris r0, r0, 0x8000
    fsubs f2, f2, f9
    stw r0, 0x24(r1)
    lfd f11, 0x28(r1)
    fmuls f7, f13, f7
    fadds f2, f5, f2
    lfd f9, 0x20(r1)
    fsubs f11, f11, f1
    fmuls f7, f13, f7
    fmuls f2, f13, f2
    fsubs f9, f9, f10
    fadds f2, f7, f2
    fmuls f7, f13, f9
    fadds f2, f12, f2
    fmuls f2, f7, f2
    fadds f2, f11, f2
    fcmpo cr0, f2, f4
    bge lbl_801AE24C
    li r16, 0x0
    b lbl_801AE274
lbl_801AE24C:
    fcmpo cr0, f2, f3
    ble lbl_801AE25C
    li r16, 0xff
    b lbl_801AE274
lbl_801AE25C:
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r16, 0x34(r1)
    b lbl_801AE274
    b lbl_801AE274
lbl_801AE270:
    li r16, 0x0
lbl_801AE274:
    stb r16, 0x0(r30)
    b lbl_801AE2A4
lbl_801AE27C:
    lbz r0, 0x4(r29)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801AE2A4
    addi r0, r3, 0x43fd
    mullw r8, r8, r0
    mullw r6, r6, r0
    addis r8, r8, 0x27
    subi r8, r8, 0x613d
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
lbl_801AE2A4:
    clrlslwi r10, r10, 17, 1
    addi r7, r7, 0x1
    addi r30, r30, 0x1
lbl_801AE2B0:
    cmpw r10, r24
    ble lbl_801AE054
lbl_801AE2B8:
    opword 0xE3E10088
    addi r11, r1, 0x80
    lfd f31, 0x80(r1)
    bl _restgpr_16
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801AE2D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AE2D8() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    addi r11, r1, 0x60
    bl _savegpr_22
    lbz r0, 0x0(r3)
    lis r8, 0x4330
    stw r8, 0x20(r1)
    mr r29, r3
    cmplwi r0, 0xab
    mr r30, r4
    stw r8, 0x28(r1)
    mr r23, r5
    mr r31, r6
    bne lbl_801AE328
    mr r6, r7
    bl fn_801B1BDC
    b lbl_801AF2A4
lbl_801AE328:
    lhz r4, 0x8(r3)
    addi r26, r3, 0x20
    lwz r8, 0xc(r3)
    li r6, 0x0
    cmplwi r4, 0x1
    lwz r0, 0x10(r3)
    add r25, r26, r8
    lbz r27, 0x3(r3)
    add r24, r25, r0
    bgt lbl_801AE360
    lfs f4, lbl_804A1738
    mr r6, r23
    li r7, 0x0
    b lbl_801AE634
lbl_801AE360:
    lbz r22, 0x4(r3)
    rlwinm. r8, r22, 0, 26, 26
    bne lbl_801AE43C
    lbz r0, 0x5(r3)
    cmplwi r0, 0x1
    bgt lbl_801AE43C
    rlwinm. r0, r22, 0, 24, 24
    bne lbl_801AE3A8
    subi r0, r4, 0x1
    clrlwi r7, r5, 16
    cmplw r5, r0
    blt lbl_801AE394
    clrlwi r7, r0, 16
lbl_801AE394:
    stw r7, 0x24(r1)
    lfd f1, lbl_804A1740
    lfd f0, 0x20(r1)
    fsubs f4, f0, f1
    b lbl_801AE634
lbl_801AE3A8:
    cmplwi r7, 0x1
    bne lbl_801AE3CC
    subi r0, r4, 0x1
    lfd f1, lbl_804A1748
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f4, f0, f1
    b lbl_801AE42C
lbl_801AE3CC:
    stw r5, 0x24(r1)
    subi r0, r4, 0x1
    xoris r3, r0, 0x8000
    lfd f5, lbl_804A1740
    lfd f0, 0x20(r1)
    subi r0, r7, 0x1
    stw r3, 0x2c(r1)
    fsubs f4, f0, f5
    lfd f3, lbl_804A1748
    stw r0, 0x24(r1)
    lfd f1, 0x28(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f1, f3
    stw r3, 0x2c(r1)
    fsubs f1, f0, f5
    lfd f0, 0x28(r1)
    fdivs f1, f2, f1
    fmuls f4, f4, f1
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    ble lbl_801AE42C
    stw r3, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f3
lbl_801AE42C:
    fctiwz f0, f4
    stfd f0, 0x30(r1)
    lwz r7, 0x34(r1)
    b lbl_801AE634
lbl_801AE43C:
    rlwinm. r0, r22, 0, 24, 24
    bne lbl_801AE50C
    subi r7, r4, 0x1
    rlwinm. r0, r22, 0, 25, 25
    divwu r6, r5, r7
    bne lbl_801AE488
    cmpwi r8, 0x0
    bne lbl_801AE478
    lbz r3, 0x5(r3)
    cmplw r6, r3
    blt lbl_801AE478
    subi r0, r3, 0x1
    clrlwi r7, r7, 16
    clrlwi r6, r0, 24
    b lbl_801AE4F4
lbl_801AE478:
    mullw r0, r6, r7
    subf r0, r0, r5
    clrlwi r7, r0, 16
    b lbl_801AE4F4
lbl_801AE488:
    cmpwi r8, 0x0
    bne lbl_801AE4CC
    lbz r8, 0x5(r3)
    cmplw r6, r8
    blt lbl_801AE4CC
    srwi r4, r8, 31
    clrlwi r0, r8, 31
    xor r3, r0, r4
    subf r4, r4, r3
    subi r0, r8, 0x1
    cntlzw r4, r4
    clrlwi r3, r7, 16
    clrlwi r6, r0, 24
    extrwi r0, r4, 1, 26
    neg r0, r0
    andc r7, r3, r0
    b lbl_801AE4F4
lbl_801AE4CC:
    clrlwi. r0, r6, 31
    bne lbl_801AE4E4
    mullw r0, r6, r7
    subf r0, r0, r5
    clrlwi r7, r0, 16
    b lbl_801AE4F4
lbl_801AE4E4:
    addi r0, r6, 0x1
    mullw r0, r7, r0
    subf r0, r5, r0
    clrlwi r7, r0, 16
lbl_801AE4F4:
    clrlwi r0, r7, 16
    lfd f1, lbl_804A1740
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f4, f0, f1
    b lbl_801AE634
lbl_801AE50C:
    subi r6, r7, 0x1
    cmplw r5, r6
    blt lbl_801AE568
    rlwinm. r0, r22, 0, 25, 25
    beq lbl_801AE538
    lbz r0, 0x5(r3)
    srwi r5, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r5
    subf. r0, r5, r0
    beq lbl_801AE544
lbl_801AE538:
    subi r0, r4, 0x1
    clrlwi r7, r0, 16
    b lbl_801AE548
lbl_801AE544:
    li r7, 0x0
lbl_801AE548:
    stw r7, 0x24(r1)
    lbz r3, 0x5(r3)
    lfd f1, lbl_804A1740
    lfd f0, 0x20(r1)
    subi r0, r3, 0x1
    clrlwi r6, r0, 24
    fsubs f4, f0, f1
    b lbl_801AE634
lbl_801AE568:
    lbz r3, 0x5(r3)
    subi r28, r4, 0x1
    xoris r0, r28, 0x8000
    lfd f5, lbl_804A1740
    stw r3, 0x2c(r1)
    lfd f3, lbl_804A1748
    lfd f0, 0x28(r1)
    stw r0, 0x24(r1)
    fsubs f4, f0, f5
    stw r6, 0x2c(r1)
    lfd f1, 0x20(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f1, f3
    stw r5, 0x24(r1)
    fsubs f0, f0, f5
    lfd f1, 0x20(r1)
    stw r0, 0x2c(r1)
    fdivs f2, f2, f0
    lfd f0, 0x28(r1)
    fmuls f31, f4, f2
    fsubs f1, f1, f5
    fsubs f0, f0, f3
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r4, r3, r28
    stw r23, 0x24(r1)
    lfd f2, lbl_804A1740
    rlwinm. r0, r22, 0, 25, 25
    lfd f0, 0x20(r1)
    mr r6, r3
    fsubs f1, f0, f2
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fmuls f1, f1, f31
    fsubs f0, f0, f2
    fsubs f4, f1, f0
    bne lbl_801AE604
    b lbl_801AE628
lbl_801AE604:
    clrlwi. r0, r3, 31
    bne lbl_801AE610
    b lbl_801AE628
lbl_801AE610:
    xoris r0, r28, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    fsubs f4, f0, f4
lbl_801AE628:
    fctiwz f0, f4
    stfd f0, 0x30(r1)
    lwz r7, 0x34(r1)
lbl_801AE634:
    lis r3, lbl_803604D0@ha
    lis r4, lbl_803605D0@ha
    addi r3, r3, lbl_803604D0@l
    lbzx r10, r3, r27
    addi r4, r4, lbl_803605D0@l
    lbzx r8, r4, r27
    cmpwi r10, 0x0
    beq lbl_801AF2A4
    clrlwi r11, r7, 16
    lhz r3, 0x0(r26)
    xoris r0, r11, 0x8000
    lfd f2, lbl_804A1748
    stw r0, 0x2c(r1)
    subi r5, r3, 0x1
    srwi r0, r5, 31
    slwi r9, r10, 2
    lfd f1, 0x28(r1)
    add r7, r0, r5
    lfs f0, lbl_804A1754
    addi r4, r26, 0x4
    fsubs f1, f1, f2
    addi r3, r9, 0xc
    slwi r0, r10, 3
    srawi r12, r7, 1
    li r28, 0x0
    fsubs f1, f1, f4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r22
    lhz r9, 0x4(r26)
    srwi r22, r22, 31
    cmpw r11, r9
    bge lbl_801AE6C8
    li r5, 0x0
    li r22, 0x1
    b lbl_801AE780
lbl_801AE6C8:
    bne lbl_801AE6F0
    cmpwi r5, 0x0
    li r5, 0x0
    bne lbl_801AE6E0
    li r22, 0x1
    b lbl_801AE780
lbl_801AE6E0:
    cmpwi r22, 0x0
    bne lbl_801AE780
    lhzx r23, r4, r3
    b lbl_801AE780
lbl_801AE6F0:
    mullw r7, r5, r3
    lhzx r23, r4, r7
    cmpw r23, r11
    bgt lbl_801AE708
    li r22, 0x1
    b lbl_801AE780
lbl_801AE708:
    mullw r7, r12, r3
    lhzx r10, r4, r7
    b lbl_801AE770
lbl_801AE714:
    cmpw r11, r10
    bne lbl_801AE73C
    cmpwi r22, 0x0
    mr r5, r12
    bne lbl_801AE780
    addi r7, r12, 0x1
    mr r9, r10
    mullw r7, r7, r3
    lhzx r23, r4, r7
    b lbl_801AE780
lbl_801AE73C:
    cmpw r10, r11
    bge lbl_801AE750
    mr r28, r12
    mr r9, r10
    b lbl_801AE758
lbl_801AE750:
    mr r5, r12
    mr r23, r10
lbl_801AE758:
    add r10, r28, r5
    srwi r7, r10, 31
    add r7, r7, r10
    srawi r12, r7, 1
    mullw r7, r12, r3
    lhzx r10, r4, r7
lbl_801AE770:
    cmpw r28, r12
    blt lbl_801AE714
    mr r5, r28
    li r22, 0x0
lbl_801AE780:
    cmpwi r22, 0x0
    beq lbl_801AE908
    mullw r3, r5, r3
    add r3, r4, r3
    lbz r12, 0x2(r3)
    addi r3, r3, 0xc
    cmpwi r12, 0x0
    bne lbl_801AE7D0
    li r4, 0x1
    b lbl_801AE7C4
lbl_801AE7A8:
    and. r0, r27, r4
    beq lbl_801AE7BC
    lfs f0, 0x0(r3)
    addi r3, r3, 0x4
    stfs f0, 0x0(r30)
lbl_801AE7BC:
    clrlslwi r4, r4, 17, 1
    addi r30, r30, 0x4
lbl_801AE7C4:
    cmpw r4, r8
    ble lbl_801AE7A8
    b lbl_801AF2A4
lbl_801AE7D0:
    lis r4, 0x3711
    lhz r3, 0x0(r3)
    subi r4, r4, 0x6819
    lis r9, 0x3f82
    mullw r4, r3, r4
    lis r7, 0x30a7
    subi r11, r9, 0x9cb
    lhz r10, 0x6(r29)
    lis r5, 0x8
    addi r9, r7, 0x4193
    subi r7, r5, 0x46d7
    addis r5, r4, 0x5
    rlwinm. r4, r12, 0, 30, 30
    subi r4, r5, 0x40ad
    mullw r6, r6, r7
    mullw r11, r31, r11
    add r4, r6, r4
    mullw r5, r10, r9
    add r5, r11, r5
    add r4, r5, r4
    stw r4, 0x18(r1)
    lbz r6, 0x1a(r1)
    lbz r4, 0x1b(r1)
    lbz r5, 0x19(r1)
    xor r6, r6, r4
    lbz r4, 0x18(r1)
    xor r5, r5, r6
    stb r6, 0x1a(r1)
    xor r4, r4, r5
    stb r5, 0x19(r1)
    stb r4, 0x18(r1)
    lwz r7, 0x18(r1)
    bne lbl_801AE864
    mullw r0, r3, r0
    add r3, r25, r0
    addi r4, r3, 0x4
    b lbl_801AE898
lbl_801AE864:
    lhz r5, 0x0(r24)
    srwi r6, r7, 16
    lis r3, 0x3
    divwu r4, r6, r5
    addi r3, r3, 0x43fd
    mullw r4, r4, r5
    subf r4, r4, r6
    mullw r0, r0, r4
    mullw r3, r7, r3
    add r4, r24, r0
    addi r4, r4, 0x4
    addis r7, r3, 0x27
    subi r7, r7, 0x613d
lbl_801AE898:
    lis r3, 0x3
    lfd f1, lbl_804A1740
    addi r0, r3, 0x43fd
    li r5, 0x1
    b lbl_801AE8FC
lbl_801AE8AC:
    and. r3, r27, r5
    beq lbl_801AE8F4
    srwi r3, r7, 16
    lfs f2, 0x4(r4)
    stw r3, 0x24(r1)
    lfs f3, 0x0(r4)
    addi r4, r4, 0x8
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f0, f3, f0
    stfs f0, 0x0(r30)
    lbz r3, 0x4(r29)
    rlwinm. r3, r3, 0, 29, 29
    bne lbl_801AE8F4
    mullw r3, r7, r0
    addis r7, r3, 0x27
    subi r7, r7, 0x613d
lbl_801AE8F4:
    clrlslwi r5, r5, 17, 1
    addi r30, r30, 0x4
lbl_801AE8FC:
    cmpw r5, r8
    ble lbl_801AE8AC
    b lbl_801AF2A4
lbl_801AE908:
    lbz r11, 0x4(r29)
    mr r7, r6
    rlwinm. r10, r11, 0, 25, 25
    beq lbl_801AE980
    rlwinm. r12, r11, 0, 26, 26
    bne lbl_801AE92C
    lbz r10, 0x5(r29)
    cmplwi r10, 0x1
    ble lbl_801AE980
lbl_801AE92C:
    clrlwi. r22, r6, 31
    bne lbl_801AE964
    lhz r10, 0x0(r26)
    addi r11, r5, 0x1
    subi r10, r10, 0x1
    cmpw r11, r10
    blt lbl_801AE964
    cmpwi r12, 0x0
    bne lbl_801AE960
    lbz r10, 0x5(r29)
    subi r10, r10, 0x1
    cmplw r6, r10
    bge lbl_801AE964
lbl_801AE960:
    addi r7, r6, 0x1
lbl_801AE964:
    cmpwi r22, 0x0
    beq lbl_801AE980
    cmpwi r5, 0x0
    bne lbl_801AE980
    cmpwi r6, 0x0
    beq lbl_801AE980
    addi r6, r6, 0x1
lbl_801AE980:
    clrlwi r10, r9, 16
    clrlwi r9, r23, 16
    stw r10, 0x2c(r1)
    subf r9, r10, r9
    xoris r10, r9, 0x8000
    lfd f1, lbl_804A1740
    lfd f0, 0x28(r1)
    addi r9, r5, 0x1
    stw r10, 0x24(r1)
    mullw r5, r5, r3
    fsubs f2, f0, f1
    lfd f1, lbl_804A1748
    lfd f0, 0x20(r1)
    fsubs f2, f4, f2
    fsubs f0, f0, f1
    add r12, r4, r5
    mullw r11, r9, r3
    lbz r3, 0x2(r12)
    fdivs f2, f2, f0
    addi r5, r12, 0xc
    neg r9, r3
    or r10, r9, r3
    add r9, r4, r11
    srwi. r22, r10, 31
    lbz r4, 0x2(r9)
    addi r9, r9, 0xc
    addi r10, r12, 0x4
    neg r11, r4
    or r11, r11, r4
    srwi r11, r11, 31
    bne lbl_801AEB28
    cmpwi r11, 0x0
    bne lbl_801AEB28
    lfs f5, lbl_804A1760
    li r4, 0x1
    lfs f3, lbl_804A1768
    lfs f1, lbl_804A175C
    b lbl_801AEB1C
lbl_801AEA18:
    and. r0, r27, r4
    beq lbl_801AEB10
    lfs f6, 0x0(r9)
    lfs f7, 0x0(r5)
    lbz r3, 0x0(r10)
    fcmpu cr0, f7, f6
    bne lbl_801AEA38
    b lbl_801AEB04
lbl_801AEA38:
    clrlwi r0, r3, 30
    cmpwi r0, 0x1
    beq lbl_801AEA70
    bge lbl_801AEA54
    cmpwi r0, 0x0
    bge lbl_801AEA60
    b lbl_801AEB00
lbl_801AEA54:
    cmpwi r0, 0x3
    bge lbl_801AEB00
    b lbl_801AEB04
lbl_801AEA60:
    fsubs f0, f6, f7
    fmuls f0, f2, f0
    fadds f7, f7, f0
    b lbl_801AEB04
lbl_801AEA70:
    cmplwi r3, 0x1
    bne lbl_801AEA98
    fmuls f4, f5, f2
    fsubs f0, f6, f7
    fsubs f4, f1, f4
    fmuls f0, f4, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fadds f7, f7, f0
    b lbl_801AEB04
lbl_801AEA98:
    extrwi. r0, r3, 1, 28
    bne lbl_801AEAA8
    lfs f8, lbl_804A1738
    b lbl_801AEAAC
lbl_801AEAA8:
    lfs f8, lbl_804A1764
lbl_801AEAAC:
    extrwi. r0, r3, 1, 29
    bne lbl_801AEABC
    lfs f9, lbl_804A1738
    b lbl_801AEAC0
lbl_801AEABC:
    lfs f9, lbl_804A1764
lbl_801AEAC0:
    fadds f4, f8, f9
    fmuls f0, f3, f8
    fsubs f6, f6, f7
    fsubs f4, f4, f5
    fsubs f0, f0, f9
    fmuls f6, f2, f6
    fmuls f4, f2, f4
    fadds f0, f1, f0
    fmuls f4, f2, f4
    fmuls f0, f2, f0
    fadds f0, f4, f0
    fadds f0, f8, f0
    fmuls f0, f6, f0
    fadds f7, f7, f0
    b lbl_801AEB04
    b lbl_801AEB04
lbl_801AEB00:
    lfs f7, lbl_804A1738
lbl_801AEB04:
    stfs f7, 0x0(r30)
    addi r5, r5, 0x4
    addi r9, r9, 0x4
lbl_801AEB10:
    clrlslwi r4, r4, 17, 1
    addi r10, r10, 0x1
    addi r30, r30, 0x4
lbl_801AEB1C:
    cmpw r4, r8
    ble lbl_801AEA18
    b lbl_801AF2A4
lbl_801AEB28:
    cmpwi r22, 0x0
    beq lbl_801AED64
    cmpwi r11, 0x0
    bne lbl_801AED64
    lis r7, 0x3711
    lhz r4, 0x0(r5)
    subi r5, r7, 0x6819
    lis r23, 0x3f82
    mullw r5, r4, r5
    lis r11, 0x30a7
    lis r7, 0x8
    lhz r12, 0x6(r29)
    subi r23, r23, 0x9cb
    subi r7, r7, 0x46d7
    addi r11, r11, 0x4193
    addis r5, r5, 0x5
    rlwinm. r3, r3, 0, 30, 30
    subi r3, r5, 0x40ad
    mullw r6, r6, r7
    mullw r23, r31, r23
    add r3, r6, r3
    mullw r5, r12, r11
    add r5, r23, r5
    add r3, r5, r3
    stw r3, 0x14(r1)
    lbz r6, 0x16(r1)
    lbz r3, 0x17(r1)
    lbz r5, 0x15(r1)
    xor r6, r6, r3
    lbz r3, 0x14(r1)
    xor r5, r5, r6
    stb r6, 0x16(r1)
    xor r3, r3, r5
    stb r5, 0x15(r1)
    stb r3, 0x14(r1)
    lwz r3, 0x14(r1)
    bne lbl_801AEBCC
    mullw r0, r4, r0
    add r4, r25, r0
    addi r6, r4, 0x4
    b lbl_801AEC00
lbl_801AEBCC:
    lhz r6, 0x0(r24)
    srwi r7, r3, 16
    lis r4, 0x3
    divwu r5, r7, r6
    addi r4, r4, 0x43fd
    mullw r5, r5, r6
    subf r5, r5, r7
    mullw r3, r3, r4
    mullw r0, r0, r5
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    add r4, r24, r0
    addi r6, r4, 0x4
lbl_801AEC00:
    lfd f7, lbl_804A1740
    li r7, 0x1
    lfs f5, lbl_804A1760
    lis r4, 0x3
    lfs f3, lbl_804A1768
    lfs f1, lbl_804A175C
    b lbl_801AED58
lbl_801AEC1C:
    and. r0, r27, r7
    beq lbl_801AED4C
    srwi r5, r3, 16
    lbz r0, 0x4(r29)
    stw r5, 0x2c(r1)
    lfs f4, 0x4(r6)
    rlwinm. r0, r0, 0, 29, 29
    lfd f0, 0x28(r1)
    lfs f6, 0x0(r6)
    addi r6, r6, 0x8
    fsubs f0, f0, f7
    fmuls f0, f4, f0
    fadds f10, f6, f0
    bne lbl_801AEC64
    addi r0, r4, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
lbl_801AEC64:
    lfs f6, 0x0(r9)
    lbz r5, 0x0(r10)
    fcmpu cr0, f10, f6
    bne lbl_801AEC78
    b lbl_801AED44
lbl_801AEC78:
    clrlwi r0, r5, 30
    cmpwi r0, 0x1
    beq lbl_801AECB0
    bge lbl_801AEC94
    cmpwi r0, 0x0
    bge lbl_801AECA0
    b lbl_801AED40
lbl_801AEC94:
    cmpwi r0, 0x3
    bge lbl_801AED40
    b lbl_801AED44
lbl_801AECA0:
    fsubs f0, f6, f10
    fmuls f0, f2, f0
    fadds f10, f10, f0
    b lbl_801AED44
lbl_801AECB0:
    cmplwi r5, 0x1
    bne lbl_801AECD8
    fmuls f4, f5, f2
    fsubs f0, f6, f10
    fsubs f4, f1, f4
    fmuls f0, f4, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fadds f10, f10, f0
    b lbl_801AED44
lbl_801AECD8:
    extrwi. r0, r5, 1, 28
    bne lbl_801AECE8
    lfs f8, lbl_804A1738
    b lbl_801AECEC
lbl_801AECE8:
    lfs f8, lbl_804A1764
lbl_801AECEC:
    extrwi. r0, r5, 1, 29
    bne lbl_801AECFC
    lfs f9, lbl_804A1738
    b lbl_801AED00
lbl_801AECFC:
    lfs f9, lbl_804A1764
lbl_801AED00:
    fadds f4, f8, f9
    fmuls f0, f3, f8
    fsubs f6, f6, f10
    fsubs f4, f4, f5
    fsubs f0, f0, f9
    fmuls f6, f2, f6
    fmuls f4, f2, f4
    fadds f0, f1, f0
    fmuls f4, f2, f4
    fmuls f0, f2, f0
    fadds f0, f4, f0
    fadds f0, f8, f0
    fmuls f0, f6, f0
    fadds f10, f10, f0
    b lbl_801AED44
    b lbl_801AED44
lbl_801AED40:
    lfs f10, lbl_804A1738
lbl_801AED44:
    stfs f10, 0x0(r30)
    addi r9, r9, 0x4
lbl_801AED4C:
    clrlslwi r7, r7, 17, 1
    addi r10, r10, 0x1
    addi r30, r30, 0x4
lbl_801AED58:
    cmpw r7, r8
    ble lbl_801AEC1C
    b lbl_801AF2A4
lbl_801AED64:
    cmpwi r22, 0x0
    bne lbl_801AEFA0
    cmpwi r11, 0x0
    beq lbl_801AEFA0
    lis r6, 0x3711
    lhz r3, 0x0(r9)
    subi r6, r6, 0x6819
    lis r23, 0x3f82
    mullw r6, r3, r6
    lis r11, 0x30a7
    lis r9, 0x8
    lhz r12, 0x6(r29)
    subi r23, r23, 0x9cb
    subi r9, r9, 0x46d7
    addi r11, r11, 0x4193
    addis r6, r6, 0x5
    rlwinm. r4, r4, 0, 30, 30
    subi r4, r6, 0x40ad
    mullw r7, r7, r9
    mullw r23, r31, r23
    add r4, r7, r4
    mullw r6, r12, r11
    add r6, r23, r6
    add r4, r6, r4
    stw r4, 0x10(r1)
    lbz r7, 0x12(r1)
    lbz r4, 0x13(r1)
    lbz r6, 0x11(r1)
    xor r7, r7, r4
    lbz r4, 0x10(r1)
    xor r6, r6, r7
    stb r7, 0x12(r1)
    xor r4, r4, r6
    stb r6, 0x11(r1)
    stb r4, 0x10(r1)
    lwz r4, 0x10(r1)
    bne lbl_801AEE08
    mullw r0, r3, r0
    add r3, r25, r0
    addi r7, r3, 0x4
    b lbl_801AEE3C
lbl_801AEE08:
    lhz r7, 0x0(r24)
    srwi r9, r4, 16
    lis r3, 0x3
    divwu r6, r9, r7
    addi r3, r3, 0x43fd
    mullw r6, r6, r7
    subf r6, r6, r9
    mullw r0, r0, r6
    mullw r3, r4, r3
    add r4, r24, r0
    addi r7, r4, 0x4
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801AEE3C:
    lfd f7, lbl_804A1740
    li r9, 0x1
    lfs f5, lbl_804A1760
    lis r6, 0x3
    lfs f3, lbl_804A1768
    lfs f1, lbl_804A175C
    b lbl_801AEF94
lbl_801AEE58:
    and. r0, r27, r9
    beq lbl_801AEF88
    srwi r3, r4, 16
    lbz r0, 0x4(r29)
    stw r3, 0x24(r1)
    lfs f4, 0x4(r7)
    rlwinm. r0, r0, 0, 29, 29
    lfd f0, 0x20(r1)
    lfs f6, 0x0(r7)
    addi r7, r7, 0x8
    fsubs f0, f0, f7
    fmuls f0, f4, f0
    fadds f6, f6, f0
    bne lbl_801AEEA0
    addi r0, r6, 0x43fd
    mullw r3, r4, r0
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801AEEA0:
    lfs f8, 0x0(r5)
    lbz r3, 0x0(r10)
    fcmpu cr0, f8, f6
    bne lbl_801AEEB4
    b lbl_801AEF80
lbl_801AEEB4:
    clrlwi r0, r3, 30
    cmpwi r0, 0x1
    beq lbl_801AEEEC
    bge lbl_801AEED0
    cmpwi r0, 0x0
    bge lbl_801AEEDC
    b lbl_801AEF7C
lbl_801AEED0:
    cmpwi r0, 0x3
    bge lbl_801AEF7C
    b lbl_801AEF80
lbl_801AEEDC:
    fsubs f0, f6, f8
    fmuls f0, f2, f0
    fadds f8, f8, f0
    b lbl_801AEF80
lbl_801AEEEC:
    cmplwi r3, 0x1
    bne lbl_801AEF14
    fmuls f4, f5, f2
    fsubs f0, f6, f8
    fsubs f4, f1, f4
    fmuls f0, f4, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fadds f8, f8, f0
    b lbl_801AEF80
lbl_801AEF14:
    extrwi. r0, r3, 1, 28
    bne lbl_801AEF24
    lfs f9, lbl_804A1738
    b lbl_801AEF28
lbl_801AEF24:
    lfs f9, lbl_804A1764
lbl_801AEF28:
    extrwi. r0, r3, 1, 29
    bne lbl_801AEF38
    lfs f10, lbl_804A1738
    b lbl_801AEF3C
lbl_801AEF38:
    lfs f10, lbl_804A1764
lbl_801AEF3C:
    fadds f4, f9, f10
    fmuls f0, f3, f9
    fsubs f6, f6, f8
    fsubs f4, f4, f5
    fsubs f0, f0, f10
    fmuls f6, f2, f6
    fmuls f4, f2, f4
    fadds f0, f1, f0
    fmuls f4, f2, f4
    fmuls f0, f2, f0
    fadds f0, f4, f0
    fadds f0, f9, f0
    fmuls f0, f6, f0
    fadds f8, f8, f0
    b lbl_801AEF80
    b lbl_801AEF80
lbl_801AEF7C:
    lfs f8, lbl_804A1738
lbl_801AEF80:
    stfs f8, 0x0(r30)
    addi r5, r5, 0x4
lbl_801AEF88:
    clrlslwi r9, r9, 17, 1
    addi r10, r10, 0x1
    addi r30, r30, 0x4
lbl_801AEF94:
    cmpw r9, r8
    ble lbl_801AEE58
    b lbl_801AF2A4
lbl_801AEFA0:
    lis r11, 0x3f82
    lis r23, 0x30a7
    subi r28, r11, 0x9cb
    lis r12, 0x8
    lis r11, 0x3711
    lhz r26, 0x6(r29)
    subi r12, r12, 0x46d7
    addi r23, r23, 0x4193
    rlwinm. r3, r3, 0, 30, 30
    lhz r5, 0x0(r5)
    subi r11, r11, 0x6819
    mullw r11, r5, r11
    mullw r28, r31, r28
    addis r11, r11, 0x5
    mullw r3, r26, r23
    mullw r6, r6, r12
    add r3, r28, r3
    add r6, r6, r3
    add r6, r6, r11
    subi r6, r6, 0x40ad
    stw r6, 0xc(r1)
    lbz r12, 0xe(r1)
    lbz r6, 0xf(r1)
    lbz r11, 0xd(r1)
    xor r12, r12, r6
    lbz r6, 0xc(r1)
    xor r11, r11, r12
    stb r12, 0xe(r1)
    xor r6, r6, r11
    stb r11, 0xd(r1)
    stb r6, 0xc(r1)
    lwz r6, 0xc(r1)
    bne lbl_801AF034
    mullw r5, r5, r0
    add r5, r25, r5
    addi r11, r5, 0x4
    b lbl_801AF068
lbl_801AF034:
    lhz r12, 0x0(r24)
    srwi r23, r6, 16
    lis r5, 0x3
    divwu r11, r23, r12
    addi r5, r5, 0x43fd
    mullw r11, r11, r12
    subf r11, r11, r23
    mullw r11, r0, r11
    mullw r5, r6, r5
    add r6, r24, r11
    addi r11, r6, 0x4
    addis r6, r5, 0x27
    subi r6, r6, 0x613d
lbl_801AF068:
    lis r5, 0x8
    lis r12, 0x3711
    subi r23, r5, 0x46d7
    lhz r5, 0x0(r9)
    subi r9, r12, 0x6819
    rlwinm. r4, r4, 0, 30, 30
    mullw r7, r7, r23
    mullw r4, r5, r9
    add r3, r7, r3
    addis r4, r4, 0x5
    add r3, r3, r4
    subi r3, r3, 0x40ad
    stw r3, 0x8(r1)
    lbz r7, 0xa(r1)
    lbz r3, 0xb(r1)
    lbz r4, 0x9(r1)
    xor r7, r7, r3
    lbz r3, 0x8(r1)
    xor r4, r4, r7
    stb r7, 0xa(r1)
    xor r3, r3, r4
    stb r4, 0x9(r1)
    stb r3, 0x8(r1)
    lwz r3, 0x8(r1)
    bne lbl_801AF0DC
    mullw r0, r5, r0
    add r4, r25, r0
    addi r9, r4, 0x4
    b lbl_801AF110
lbl_801AF0DC:
    lhz r7, 0x0(r24)
    srwi r9, r3, 16
    lis r4, 0x3
    divwu r5, r9, r7
    addi r4, r4, 0x43fd
    mullw r5, r5, r7
    subf r5, r5, r9
    mullw r3, r3, r4
    mullw r0, r0, r5
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    add r4, r24, r0
    addi r9, r4, 0x4
lbl_801AF110:
    lfd f0, lbl_804A1740
    li r12, 0x1
    lfs f7, lbl_804A1760
    lis r5, 0x3
    lfs f5, lbl_804A1768
    lfs f4, lbl_804A175C
    b lbl_801AF29C
lbl_801AF12C:
    and. r0, r27, r12
    beq lbl_801AF290
    srwi r4, r6, 16
    lbz r0, 0x4(r29)
    stw r4, 0x2c(r1)
    lfs f3, 0x4(r11)
    rlwinm. r7, r0, 0, 29, 29
    lfd f1, 0x28(r1)
    lfs f6, 0x0(r11)
    addi r11, r11, 0x8
    fsubs f1, f1, f0
    fmuls f1, f3, f1
    fadds f1, f6, f1
    bne lbl_801AF174
    addi r0, r5, 0x43fd
    mullw r4, r6, r0
    addis r6, r4, 0x27
    subi r6, r6, 0x613d
lbl_801AF174:
    srwi r0, r3, 16
    lfs f6, 0x4(r9)
    stw r0, 0x24(r1)
    cmpwi r7, 0x0
    lfs f8, 0x0(r9)
    addi r9, r9, 0x8
    lfd f3, 0x20(r1)
    fsubs f3, f3, f0
    fmuls f3, f6, f3
    fadds f8, f8, f3
    bne lbl_801AF1B0
    addi r0, r5, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
lbl_801AF1B0:
    fcmpu cr0, f1, f8
    lbz r4, 0x0(r10)
    bne lbl_801AF1C0
    b lbl_801AF28C
lbl_801AF1C0:
    clrlwi r0, r4, 30
    cmpwi r0, 0x1
    beq lbl_801AF1F8
    bge lbl_801AF1DC
    cmpwi r0, 0x0
    bge lbl_801AF1E8
    b lbl_801AF288
lbl_801AF1DC:
    cmpwi r0, 0x3
    bge lbl_801AF288
    b lbl_801AF28C
lbl_801AF1E8:
    fsubs f3, f8, f1
    fmuls f3, f2, f3
    fadds f1, f1, f3
    b lbl_801AF28C
lbl_801AF1F8:
    cmplwi r4, 0x1
    bne lbl_801AF220
    fmuls f6, f7, f2
    fsubs f3, f8, f1
    fsubs f6, f4, f6
    fmuls f3, f6, f3
    fmuls f3, f2, f3
    fmuls f3, f2, f3
    fadds f1, f1, f3
    b lbl_801AF28C
lbl_801AF220:
    extrwi. r0, r4, 1, 28
    bne lbl_801AF230
    lfs f9, lbl_804A1738
    b lbl_801AF234
lbl_801AF230:
    lfs f9, lbl_804A1764
lbl_801AF234:
    extrwi. r0, r4, 1, 29
    bne lbl_801AF244
    lfs f10, lbl_804A1738
    b lbl_801AF248
lbl_801AF244:
    lfs f10, lbl_804A1764
lbl_801AF248:
    fadds f6, f9, f10
    fmuls f3, f5, f9
    fsubs f8, f8, f1
    fsubs f6, f6, f7
    fsubs f3, f3, f10
    fmuls f8, f2, f8
    fmuls f6, f2, f6
    fadds f3, f4, f3
    fmuls f6, f2, f6
    fmuls f3, f2, f3
    fadds f3, f6, f3
    fadds f3, f9, f3
    fmuls f3, f8, f3
    fadds f1, f1, f3
    b lbl_801AF28C
    b lbl_801AF28C
lbl_801AF288:
    lfs f1, lbl_804A1738
lbl_801AF28C:
    stfs f1, 0x0(r30)
lbl_801AF290:
    clrlslwi r12, r12, 17, 1
    addi r10, r10, 0x1
    addi r30, r30, 0x4
lbl_801AF29C:
    cmpw r12, r8
    ble lbl_801AF12C
lbl_801AF2A4:
    opword 0xE3E10068
    addi r11, r1, 0x60
    lfd f31, 0x60(r1)
    bl _restgpr_22
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801AF2C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801AF2C4() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    addi r11, r1, 0x70
    bl _savegpr_21
    lhz r8, 0x8(r3)
    lis r10, 0x4330
    lwz r9, 0xc(r3)
    addi r25, r3, 0x20
    cmplwi r8, 0x1
    lwz r0, 0x10(r3)
    add r24, r25, r9
    stw r10, 0x20(r1)
    mr r30, r6
    lbz r26, 0x3(r3)
    stw r10, 0x28(r1)
    mr r28, r3
    mr r29, r4
    mr r31, r5
    add r23, r24, r0
    li r6, 0x0
    bgt lbl_801AF334
    lfs f4, lbl_804A1738
    mr r6, r31
    li r7, 0x0
    b lbl_801AF608
lbl_801AF334:
    lbz r22, 0x4(r3)
    rlwinm. r4, r22, 0, 26, 26
    bne lbl_801AF410
    lbz r0, 0x5(r3)
    cmplwi r0, 0x1
    bgt lbl_801AF410
    rlwinm. r0, r22, 0, 24, 24
    bne lbl_801AF37C
    subi r0, r8, 0x1
    clrlwi r7, r5, 16
    cmplw r5, r0
    blt lbl_801AF368
    clrlwi r7, r0, 16
lbl_801AF368:
    stw r7, 0x24(r1)
    lfd f1, lbl_804A1740
    lfd f0, 0x20(r1)
    fsubs f4, f0, f1
    b lbl_801AF608
lbl_801AF37C:
    cmplwi r7, 0x1
    bne lbl_801AF3A0
    subi r0, r8, 0x1
    lfd f1, lbl_804A1748
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f4, f0, f1
    b lbl_801AF400
lbl_801AF3A0:
    stw r5, 0x24(r1)
    subi r0, r8, 0x1
    xoris r3, r0, 0x8000
    lfd f5, lbl_804A1740
    lfd f0, 0x20(r1)
    subi r0, r7, 0x1
    stw r3, 0x2c(r1)
    fsubs f4, f0, f5
    lfd f3, lbl_804A1748
    stw r0, 0x24(r1)
    lfd f1, 0x28(r1)
    lfd f0, 0x20(r1)
    fsubs f2, f1, f3
    stw r3, 0x2c(r1)
    fsubs f1, f0, f5
    lfd f0, 0x28(r1)
    fdivs f1, f2, f1
    fmuls f4, f4, f1
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    ble lbl_801AF400
    stw r3, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f4, f0, f3
lbl_801AF400:
    fctiwz f0, f4
    stfd f0, 0x30(r1)
    lwz r7, 0x34(r1)
    b lbl_801AF608
lbl_801AF410:
    rlwinm. r0, r22, 0, 24, 24
    bne lbl_801AF4E0
    subi r7, r8, 0x1
    rlwinm. r0, r22, 0, 25, 25
    divwu r6, r5, r7
    bne lbl_801AF45C
    cmpwi r4, 0x0
    bne lbl_801AF44C
    lbz r3, 0x5(r3)
    cmplw r6, r3
    blt lbl_801AF44C
    subi r0, r3, 0x1
    clrlwi r7, r7, 16
    clrlwi r6, r0, 24
    b lbl_801AF4C8
lbl_801AF44C:
    mullw r0, r6, r7
    subf r0, r0, r5
    clrlwi r7, r0, 16
    b lbl_801AF4C8
lbl_801AF45C:
    cmpwi r4, 0x0
    bne lbl_801AF4A0
    lbz r8, 0x5(r3)
    cmplw r6, r8
    blt lbl_801AF4A0
    srwi r4, r8, 31
    clrlwi r0, r8, 31
    xor r3, r0, r4
    subf r4, r4, r3
    subi r0, r8, 0x1
    cntlzw r4, r4
    clrlwi r3, r7, 16
    clrlwi r6, r0, 24
    extrwi r0, r4, 1, 26
    neg r0, r0
    andc r7, r3, r0
    b lbl_801AF4C8
lbl_801AF4A0:
    clrlwi. r0, r6, 31
    bne lbl_801AF4B8
    mullw r0, r6, r7
    subf r0, r0, r5
    clrlwi r7, r0, 16
    b lbl_801AF4C8
lbl_801AF4B8:
    addi r0, r6, 0x1
    mullw r0, r7, r0
    subf r0, r5, r0
    clrlwi r7, r0, 16
lbl_801AF4C8:
    clrlwi r0, r7, 16
    lfd f1, lbl_804A1740
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f4, f0, f1
    b lbl_801AF608
lbl_801AF4E0:
    subi r4, r7, 0x1
    cmplw r5, r4
    blt lbl_801AF53C
    rlwinm. r0, r22, 0, 25, 25
    beq lbl_801AF50C
    lbz r0, 0x5(r3)
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    beq lbl_801AF518
lbl_801AF50C:
    subi r0, r8, 0x1
    clrlwi r7, r0, 16
    b lbl_801AF51C
lbl_801AF518:
    li r7, 0x0
lbl_801AF51C:
    stw r7, 0x24(r1)
    lbz r3, 0x5(r3)
    lfd f1, lbl_804A1740
    lfd f0, 0x20(r1)
    subi r0, r3, 0x1
    clrlwi r6, r0, 24
    fsubs f4, f0, f1
    b lbl_801AF608
lbl_801AF53C:
    lbz r3, 0x5(r3)
    subi r27, r8, 0x1
    xoris r0, r27, 0x8000
    lfd f5, lbl_804A1740
    stw r3, 0x2c(r1)
    lfd f3, lbl_804A1748
    lfd f0, 0x28(r1)
    stw r0, 0x24(r1)
    fsubs f4, f0, f5
    stw r4, 0x2c(r1)
    lfd f1, 0x20(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f1, f3
    stw r5, 0x24(r1)
    fsubs f0, f0, f5
    lfd f1, 0x20(r1)
    stw r0, 0x2c(r1)
    fdivs f2, f2, f0
    lfd f0, 0x28(r1)
    fmuls f31, f4, f2
    fsubs f1, f1, f5
    fsubs f0, f0, f3
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r4, r3, r27
    stw r31, 0x24(r1)
    lfd f2, lbl_804A1740
    rlwinm. r0, r22, 0, 25, 25
    lfd f0, 0x20(r1)
    mr r6, r3
    fsubs f1, f0, f2
    stw r4, 0x2c(r1)
    lfd f0, 0x28(r1)
    fmuls f1, f1, f31
    fsubs f0, f0, f2
    fsubs f4, f1, f0
    bne lbl_801AF5D8
    b lbl_801AF5FC
lbl_801AF5D8:
    clrlwi. r0, r3, 31
    bne lbl_801AF5E4
    b lbl_801AF5FC
lbl_801AF5E4:
    xoris r0, r27, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    fsubs f4, f0, f4
lbl_801AF5FC:
    fctiwz f0, f4
    stfd f0, 0x30(r1)
    lwz r7, 0x34(r1)
lbl_801AF608:
    lis r3, lbl_803604D0@ha
    lis r4, lbl_803605D0@ha
    addi r3, r3, lbl_803604D0@l
    lbzx r5, r3, r26
    addi r4, r4, lbl_803605D0@l
    lbzx r8, r4, r26
    cmpwi r5, 0x0
    beq lbl_801B039C
    clrlwi r0, r7, 16
    lhz r4, 0x0(r25)
    xoris r3, r0, 0x8000
    lfd f2, lbl_804A1748
    stw r3, 0x2c(r1)
    subi r10, r4, 0x1
    srwi r3, r10, 31
    slwi r11, r5, 2
    lfd f1, 0x28(r1)
    slwi r9, r5, 3
    add r7, r3, r10
    lfs f0, lbl_804A1754
    fsubs f1, f1, f2
    addi r5, r25, 0x4
    addi r4, r11, 0xc
    addi r3, r9, 0x4
    srawi r22, r7, 1
    li r27, 0x0
    fsubs f1, f1, f4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r7
    lhz r11, 0x4(r25)
    srwi r7, r7, 31
    cmpw r0, r11
    bge lbl_801AF6A0
    li r10, 0x0
    li r7, 0x1
    b lbl_801AF758
lbl_801AF6A0:
    bne lbl_801AF6C8
    cmpwi r10, 0x0
    li r10, 0x0
    bne lbl_801AF6B8
    li r7, 0x1
    b lbl_801AF758
lbl_801AF6B8:
    cmpwi r7, 0x0
    bne lbl_801AF758
    lhzx r31, r5, r4
    b lbl_801AF758
lbl_801AF6C8:
    mullw r12, r10, r4
    lhzx r31, r5, r12
    cmpw r31, r0
    bgt lbl_801AF6E0
    li r7, 0x1
    b lbl_801AF758
lbl_801AF6E0:
    mullw r12, r22, r4
    lhzx r12, r5, r12
    b lbl_801AF748
lbl_801AF6EC:
    cmpw r0, r12
    bne lbl_801AF714
    cmpwi r7, 0x0
    mr r10, r22
    bne lbl_801AF758
    addi r0, r22, 0x1
    mr r11, r12
    mullw r0, r0, r4
    lhzx r31, r5, r0
    b lbl_801AF758
lbl_801AF714:
    cmpw r12, r0
    bge lbl_801AF728
    mr r27, r22
    mr r11, r12
    b lbl_801AF730
lbl_801AF728:
    mr r10, r22
    mr r31, r12
lbl_801AF730:
    add r22, r27, r10
    srwi r12, r22, 31
    add r12, r12, r22
    srawi r22, r12, 1
    mullw r12, r22, r4
    lhzx r12, r5, r12
lbl_801AF748:
    cmpw r27, r22
    blt lbl_801AF6EC
    mr r10, r27
    li r7, 0x0
lbl_801AF758:
    cmpwi r7, 0x0
    beq lbl_801AF91C
    mullw r0, r10, r4
    add r5, r5, r0
    lbz r22, 0x2(r5)
    addi r5, r5, 0xc
    cmpwi r22, 0x0
    bne lbl_801AF7A8
    li r3, 0x1
    b lbl_801AF79C
lbl_801AF780:
    and. r0, r26, r3
    beq lbl_801AF794
    lfs f0, 0x0(r5)
    addi r5, r5, 0x4
    stfs f0, 0x0(r29)
lbl_801AF794:
    clrlslwi r3, r3, 17, 1
    addi r29, r29, 0x4
lbl_801AF79C:
    cmpw r3, r8
    ble lbl_801AF780
    b lbl_801B039C
lbl_801AF7A8:
    lis r4, 0x3711
    lhz r0, 0x0(r5)
    subi r4, r4, 0x6819
    lis r10, 0x3f82
    mullw r4, r0, r4
    lis r7, 0x30a7
    subi r12, r10, 0x9cb
    lhz r11, 0x6(r28)
    lis r5, 0x8
    addi r10, r7, 0x4193
    subi r7, r5, 0x46d7
    addis r5, r4, 0x5
    rlwinm. r4, r22, 0, 30, 30
    subi r4, r5, 0x40ad
    mullw r6, r6, r7
    mullw r12, r30, r12
    add r4, r6, r4
    mullw r5, r11, r10
    add r5, r12, r5
    add r4, r5, r4
    stw r4, 0x18(r1)
    lbz r6, 0x1a(r1)
    lbz r4, 0x1b(r1)
    lbz r5, 0x19(r1)
    xor r6, r6, r4
    lbz r4, 0x18(r1)
    xor r5, r5, r6
    stb r6, 0x1a(r1)
    xor r4, r4, r5
    stb r5, 0x19(r1)
    stb r4, 0x18(r1)
    lwz r4, 0x18(r1)
    bne lbl_801AF83C
    mullw r0, r0, r3
    add r3, r24, r0
    addi r6, r3, 0x4
    b lbl_801AF870
lbl_801AF83C:
    lhz r7, 0x0(r23)
    srwi r10, r4, 16
    lis r5, 0x3
    divwu r6, r10, r7
    addi r0, r5, 0x43fd
    mullw r5, r6, r7
    subf r5, r5, r10
    mullw r5, r3, r5
    mullw r3, r4, r0
    add r4, r23, r5
    addi r6, r4, 0x4
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801AF870:
    lbzx r0, r6, r9
    li r7, 0x0
    cmpwi r0, 0x0
    beq lbl_801AF8A0
    rlwinm. r0, r4, 0, 15, 15
    bne lbl_801AF88C
    li r7, 0x1
lbl_801AF88C:
    lis r3, 0x3
    addi r0, r3, 0x43fd
    mullw r3, r4, r0
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801AF8A0:
    lfd f1, lbl_804A1740
    li r9, 0x1
    lis r5, 0x3
    b lbl_801AF910
lbl_801AF8B0:
    and. r0, r26, r9
    beq lbl_801AF8EC
    srwi r0, r4, 16
    lfs f2, 0x4(r6)
    stw r0, 0x24(r1)
    cmpwi r7, 0x0
    lfs f3, 0x0(r6)
    addi r6, r6, 0x8
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f0, f3, f0
    beq lbl_801AF8E8
    fneg f0, f0
lbl_801AF8E8:
    stfs f0, 0x0(r29)
lbl_801AF8EC:
    lbz r0, 0x4(r28)
    addi r29, r29, 0x4
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801AF90C
    addi r0, r5, 0x43fd
    mullw r3, r4, r0
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801AF90C:
    clrlslwi r9, r9, 17, 1
lbl_801AF910:
    cmpw r9, r8
    ble lbl_801AF8B0
    b lbl_801B039C
lbl_801AF91C:
    lbz r12, 0x4(r28)
    mr r7, r6
    rlwinm. r0, r12, 0, 25, 25
    beq lbl_801AF994
    rlwinm. r27, r12, 0, 26, 26
    bne lbl_801AF940
    lbz r0, 0x5(r28)
    cmplwi r0, 0x1
    ble lbl_801AF994
lbl_801AF940:
    clrlwi. r21, r6, 31
    bne lbl_801AF978
    lhz r12, 0x0(r25)
    addi r22, r10, 0x1
    subi r0, r12, 0x1
    cmpw r22, r0
    blt lbl_801AF978
    cmpwi r27, 0x0
    bne lbl_801AF974
    lbz r12, 0x5(r28)
    subi r0, r12, 0x1
    cmplw r6, r0
    bge lbl_801AF978
lbl_801AF974:
    addi r7, r6, 0x1
lbl_801AF978:
    cmpwi r21, 0x0
    beq lbl_801AF994
    cmpwi r10, 0x0
    bne lbl_801AF994
    cmpwi r6, 0x0
    beq lbl_801AF994
    addi r6, r6, 0x1
lbl_801AF994:
    clrlwi r11, r11, 16
    clrlwi r0, r31, 16
    stw r11, 0x2c(r1)
    subf r0, r11, r0
    xoris r11, r0, 0x8000
    lfd f1, lbl_804A1740
    lfd f0, 0x28(r1)
    addi r0, r10, 0x1
    stw r11, 0x24(r1)
    mullw r10, r10, r4
    fsubs f2, f0, f1
    lfd f1, lbl_804A1748
    lfd f0, 0x20(r1)
    fsubs f2, f4, f2
    fsubs f0, f0, f1
    add r12, r5, r10
    mullw r11, r0, r4
    lbz r0, 0x2(r12)
    fdivs f2, f2, f0
    addi r10, r12, 0xc
    neg r4, r0
    or r4, r4, r0
    add r5, r5, r11
    srwi. r21, r4, 31
    lbz r4, 0x2(r5)
    addi r11, r12, 0x4
    addi r5, r5, 0xc
    neg r12, r4
    or r12, r12, r4
    srwi r12, r12, 31
    bne lbl_801AFB3C
    cmpwi r12, 0x0
    bne lbl_801AFB3C
    lfs f5, lbl_804A1760
    li r4, 0x1
    lfs f3, lbl_804A1768
    lfs f1, lbl_804A175C
    b lbl_801AFB30
lbl_801AFA2C:
    and. r0, r26, r4
    beq lbl_801AFB24
    lfs f6, 0x0(r5)
    lfs f7, 0x0(r10)
    lbz r3, 0x0(r11)
    fcmpu cr0, f7, f6
    bne lbl_801AFA4C
    b lbl_801AFB18
lbl_801AFA4C:
    clrlwi r0, r3, 30
    cmpwi r0, 0x1
    beq lbl_801AFA84
    bge lbl_801AFA68
    cmpwi r0, 0x0
    bge lbl_801AFA74
    b lbl_801AFB14
lbl_801AFA68:
    cmpwi r0, 0x3
    bge lbl_801AFB14
    b lbl_801AFB18
lbl_801AFA74:
    fsubs f0, f6, f7
    fmuls f0, f2, f0
    fadds f7, f7, f0
    b lbl_801AFB18
lbl_801AFA84:
    cmplwi r3, 0x1
    bne lbl_801AFAAC
    fmuls f4, f5, f2
    fsubs f0, f6, f7
    fsubs f4, f1, f4
    fmuls f0, f4, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fadds f7, f7, f0
    b lbl_801AFB18
lbl_801AFAAC:
    extrwi. r0, r3, 1, 28
    bne lbl_801AFABC
    lfs f8, lbl_804A1738
    b lbl_801AFAC0
lbl_801AFABC:
    lfs f8, lbl_804A1764
lbl_801AFAC0:
    extrwi. r0, r3, 1, 29
    bne lbl_801AFAD0
    lfs f9, lbl_804A1738
    b lbl_801AFAD4
lbl_801AFAD0:
    lfs f9, lbl_804A1764
lbl_801AFAD4:
    fadds f4, f8, f9
    fmuls f0, f3, f8
    fsubs f6, f6, f7
    fsubs f4, f4, f5
    fsubs f0, f0, f9
    fmuls f6, f2, f6
    fmuls f4, f2, f4
    fadds f0, f1, f0
    fmuls f4, f2, f4
    fmuls f0, f2, f0
    fadds f0, f4, f0
    fadds f0, f8, f0
    fmuls f0, f6, f0
    fadds f7, f7, f0
    b lbl_801AFB18
    b lbl_801AFB18
lbl_801AFB14:
    lfs f7, lbl_804A1738
lbl_801AFB18:
    stfs f7, 0x0(r29)
    addi r10, r10, 0x4
    addi r5, r5, 0x4
lbl_801AFB24:
    clrlslwi r4, r4, 17, 1
    addi r11, r11, 0x1
    addi r29, r29, 0x4
lbl_801AFB30:
    cmpw r4, r8
    ble lbl_801AFA2C
    b lbl_801B039C
lbl_801AFB3C:
    cmpwi r21, 0x0
    beq lbl_801AFDB4
    cmpwi r12, 0x0
    bne lbl_801AFDB4
    lis r7, 0x3711
    lhz r4, 0x0(r10)
    subi r7, r7, 0x6819
    lis r25, 0x3f82
    mullw r7, r4, r7
    lis r12, 0x30a7
    lis r10, 0x8
    lhz r22, 0x6(r28)
    subi r25, r25, 0x9cb
    addi r12, r12, 0x4193
    subi r10, r10, 0x46d7
    addis r7, r7, 0x5
    rlwinm. r0, r0, 0, 30, 30
    subi r0, r7, 0x40ad
    mullw r7, r6, r10
    mullw r25, r30, r25
    add r0, r7, r0
    mullw r12, r22, r12
    add r6, r25, r12
    add r0, r6, r0
    stw r0, 0x14(r1)
    lbz r7, 0x16(r1)
    lbz r0, 0x17(r1)
    lbz r6, 0x15(r1)
    xor r7, r7, r0
    lbz r0, 0x14(r1)
    xor r6, r6, r7
    stb r7, 0x16(r1)
    xor r0, r0, r6
    stb r6, 0x15(r1)
    stb r0, 0x14(r1)
    lwz r6, 0x14(r1)
    bne lbl_801AFBE0
    mullw r0, r4, r3
    add r3, r24, r0
    addi r7, r3, 0x4
    b lbl_801AFC14
lbl_801AFBE0:
    lhz r10, 0x0(r23)
    srwi r12, r6, 16
    lis r4, 0x3
    divwu r7, r12, r10
    addi r0, r4, 0x43fd
    mullw r4, r7, r10
    subf r4, r4, r12
    mullw r4, r3, r4
    mullw r3, r6, r0
    add r4, r23, r4
    addi r7, r4, 0x4
    addis r6, r3, 0x27
    subi r6, r6, 0x613d
lbl_801AFC14:
    lbzx r0, r7, r9
    li r9, 0x0
    cmpwi r0, 0x0
    beq lbl_801AFC44
    rlwinm. r0, r6, 0, 15, 15
    bne lbl_801AFC30
    li r9, 0x1
lbl_801AFC30:
    lis r3, 0x3
    addi r0, r3, 0x43fd
    mullw r3, r6, r0
    addis r6, r3, 0x27
    subi r6, r6, 0x613d
lbl_801AFC44:
    lfd f7, lbl_804A1740
    li r10, 0x1
    lfs f5, lbl_804A1760
    lis r4, 0x3
    lfs f3, lbl_804A1768
    lfs f1, lbl_804A175C
    b lbl_801AFDA8
lbl_801AFC60:
    and. r0, r26, r10
    beq lbl_801AFD80
    srwi r0, r6, 16
    lfs f4, 0x4(r7)
    stw r0, 0x2c(r1)
    cmpwi r9, 0x0
    lfs f6, 0x0(r7)
    addi r7, r7, 0x8
    lfd f0, 0x28(r1)
    fsubs f0, f0, f7
    fmuls f0, f4, f0
    fadds f10, f6, f0
    beq lbl_801AFC98
    fneg f10, f10
lbl_801AFC98:
    lfs f6, 0x0(r5)
    lbz r3, 0x0(r11)
    fcmpu cr0, f10, f6
    bne lbl_801AFCAC
    b lbl_801AFD78
lbl_801AFCAC:
    clrlwi r0, r3, 30
    cmpwi r0, 0x1
    beq lbl_801AFCE4
    bge lbl_801AFCC8
    cmpwi r0, 0x0
    bge lbl_801AFCD4
    b lbl_801AFD74
lbl_801AFCC8:
    cmpwi r0, 0x3
    bge lbl_801AFD74
    b lbl_801AFD78
lbl_801AFCD4:
    fsubs f0, f6, f10
    fmuls f0, f2, f0
    fadds f10, f10, f0
    b lbl_801AFD78
lbl_801AFCE4:
    cmplwi r3, 0x1
    bne lbl_801AFD0C
    fmuls f4, f5, f2
    fsubs f0, f6, f10
    fsubs f4, f1, f4
    fmuls f0, f4, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fadds f10, f10, f0
    b lbl_801AFD78
lbl_801AFD0C:
    extrwi. r0, r3, 1, 28
    bne lbl_801AFD1C
    lfs f8, lbl_804A1738
    b lbl_801AFD20
lbl_801AFD1C:
    lfs f8, lbl_804A1764
lbl_801AFD20:
    extrwi. r0, r3, 1, 29
    bne lbl_801AFD30
    lfs f9, lbl_804A1738
    b lbl_801AFD34
lbl_801AFD30:
    lfs f9, lbl_804A1764
lbl_801AFD34:
    fadds f4, f8, f9
    fmuls f0, f3, f8
    fsubs f6, f6, f10
    fsubs f4, f4, f5
    fsubs f0, f0, f9
    fmuls f6, f2, f6
    fmuls f4, f2, f4
    fadds f0, f1, f0
    fmuls f4, f2, f4
    fmuls f0, f2, f0
    fadds f0, f4, f0
    fadds f0, f8, f0
    fmuls f0, f6, f0
    fadds f10, f10, f0
    b lbl_801AFD78
    b lbl_801AFD78
lbl_801AFD74:
    lfs f10, lbl_804A1738
lbl_801AFD78:
    stfs f10, 0x0(r29)
    addi r5, r5, 0x4
lbl_801AFD80:
    lbz r0, 0x4(r28)
    addi r11, r11, 0x1
    addi r29, r29, 0x4
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801AFDA4
    addi r0, r4, 0x43fd
    mullw r3, r6, r0
    addis r6, r3, 0x27
    subi r6, r6, 0x613d
lbl_801AFDA4:
    clrlslwi r10, r10, 17, 1
lbl_801AFDA8:
    cmpw r10, r8
    ble lbl_801AFC60
    b lbl_801B039C
lbl_801AFDB4:
    cmpwi r21, 0x0
    bne lbl_801B002C
    cmpwi r12, 0x0
    beq lbl_801B002C
    lis r6, 0x3711
    lhz r0, 0x0(r5)
    subi r5, r6, 0x6819
    lis r25, 0x3f82
    mullw r5, r0, r5
    lis r12, 0x30a7
    lis r6, 0x8
    lhz r22, 0x6(r28)
    subi r25, r25, 0x9cb
    subi r6, r6, 0x46d7
    addi r12, r12, 0x4193
    addis r5, r5, 0x5
    rlwinm. r4, r4, 0, 30, 30
    subi r4, r5, 0x40ad
    mullw r6, r7, r6
    mullw r25, r30, r25
    add r4, r6, r4
    mullw r5, r22, r12
    add r5, r25, r5
    add r4, r5, r4
    stw r4, 0x10(r1)
    lbz r6, 0x12(r1)
    lbz r4, 0x13(r1)
    lbz r5, 0x11(r1)
    xor r6, r6, r4
    lbz r4, 0x10(r1)
    xor r5, r5, r6
    stb r6, 0x12(r1)
    xor r4, r4, r5
    stb r5, 0x11(r1)
    stb r4, 0x10(r1)
    lwz r4, 0x10(r1)
    bne lbl_801AFE58
    mullw r0, r0, r3
    add r3, r24, r0
    addi r6, r3, 0x4
    b lbl_801AFE8C
lbl_801AFE58:
    lhz r7, 0x0(r23)
    srwi r12, r4, 16
    lis r5, 0x3
    divwu r6, r12, r7
    addi r0, r5, 0x43fd
    mullw r5, r6, r7
    subf r5, r5, r12
    mullw r5, r3, r5
    mullw r3, r4, r0
    add r4, r23, r5
    addi r6, r4, 0x4
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801AFE8C:
    lbzx r0, r6, r9
    li r7, 0x0
    cmpwi r0, 0x0
    beq lbl_801AFEBC
    rlwinm. r0, r4, 0, 15, 15
    bne lbl_801AFEA8
    li r7, 0x1
lbl_801AFEA8:
    lis r3, 0x3
    addi r0, r3, 0x43fd
    mullw r3, r4, r0
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801AFEBC:
    lfd f7, lbl_804A1740
    li r9, 0x1
    lfs f5, lbl_804A1760
    lis r5, 0x3
    lfs f3, lbl_804A1768
    lfs f1, lbl_804A175C
    b lbl_801B0020
lbl_801AFED8:
    and. r0, r26, r9
    beq lbl_801AFFF8
    srwi r0, r4, 16
    lfs f4, 0x4(r6)
    stw r0, 0x24(r1)
    cmpwi r7, 0x0
    lfs f6, 0x0(r6)
    addi r6, r6, 0x8
    lfd f0, 0x20(r1)
    fsubs f0, f0, f7
    fmuls f0, f4, f0
    fadds f6, f6, f0
    beq lbl_801AFF10
    fneg f6, f6
lbl_801AFF10:
    lfs f8, 0x0(r10)
    lbz r3, 0x0(r11)
    fcmpu cr0, f8, f6
    bne lbl_801AFF24
    b lbl_801AFFF0
lbl_801AFF24:
    clrlwi r0, r3, 30
    cmpwi r0, 0x1
    beq lbl_801AFF5C
    bge lbl_801AFF40
    cmpwi r0, 0x0
    bge lbl_801AFF4C
    b lbl_801AFFEC
lbl_801AFF40:
    cmpwi r0, 0x3
    bge lbl_801AFFEC
    b lbl_801AFFF0
lbl_801AFF4C:
    fsubs f0, f6, f8
    fmuls f0, f2, f0
    fadds f8, f8, f0
    b lbl_801AFFF0
lbl_801AFF5C:
    cmplwi r3, 0x1
    bne lbl_801AFF84
    fmuls f4, f5, f2
    fsubs f0, f6, f8
    fsubs f4, f1, f4
    fmuls f0, f4, f0
    fmuls f0, f2, f0
    fmuls f0, f2, f0
    fadds f8, f8, f0
    b lbl_801AFFF0
lbl_801AFF84:
    extrwi. r0, r3, 1, 28
    bne lbl_801AFF94
    lfs f9, lbl_804A1738
    b lbl_801AFF98
lbl_801AFF94:
    lfs f9, lbl_804A1764
lbl_801AFF98:
    extrwi. r0, r3, 1, 29
    bne lbl_801AFFA8
    lfs f10, lbl_804A1738
    b lbl_801AFFAC
lbl_801AFFA8:
    lfs f10, lbl_804A1764
lbl_801AFFAC:
    fadds f4, f9, f10
    fmuls f0, f3, f9
    fsubs f6, f6, f8
    fsubs f4, f4, f5
    fsubs f0, f0, f10
    fmuls f6, f2, f6
    fmuls f4, f2, f4
    fadds f0, f1, f0
    fmuls f4, f2, f4
    fmuls f0, f2, f0
    fadds f0, f4, f0
    fadds f0, f9, f0
    fmuls f0, f6, f0
    fadds f8, f8, f0
    b lbl_801AFFF0
    b lbl_801AFFF0
lbl_801AFFEC:
    lfs f8, lbl_804A1738
lbl_801AFFF0:
    stfs f8, 0x0(r29)
    addi r10, r10, 0x4
lbl_801AFFF8:
    lbz r0, 0x4(r28)
    addi r11, r11, 0x1
    addi r29, r29, 0x4
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801B001C
    addi r0, r5, 0x43fd
    mullw r3, r4, r0
    addis r4, r3, 0x27
    subi r4, r4, 0x613d
lbl_801B001C:
    clrlslwi r9, r9, 17, 1
lbl_801B0020:
    cmpw r9, r8
    ble lbl_801AFED8
    b lbl_801B039C
lbl_801B002C:
    lis r12, 0x3f82
    lis r27, 0x30a7
    subi r22, r12, 0x9cb
    lis r25, 0x8
    lis r12, 0x3711
    lhz r31, 0x6(r28)
    subi r25, r25, 0x46d7
    addi r27, r27, 0x4193
    rlwinm. r0, r0, 0, 30, 30
    lhz r10, 0x0(r10)
    subi r12, r12, 0x6819
    mullw r12, r10, r12
    mullw r30, r30, r22
    addis r12, r12, 0x5
    mullw r0, r31, r27
    mullw r6, r6, r25
    add r0, r30, r0
    add r6, r6, r0
    add r6, r6, r12
    subi r6, r6, 0x40ad
    stw r6, 0xc(r1)
    lbz r25, 0xe(r1)
    lbz r6, 0xf(r1)
    lbz r12, 0xd(r1)
    xor r25, r25, r6
    lbz r6, 0xc(r1)
    xor r12, r12, r25
    stb r25, 0xe(r1)
    xor r6, r6, r12
    stb r12, 0xd(r1)
    stb r6, 0xc(r1)
    lwz r6, 0xc(r1)
    bne lbl_801B00C0
    mullw r10, r10, r3
    add r10, r24, r10
    addi r10, r10, 0x4
    b lbl_801B00F4
lbl_801B00C0:
    lhz r25, 0x0(r23)
    srwi r27, r6, 16
    lis r10, 0x3
    divwu r12, r27, r25
    addi r10, r10, 0x43fd
    mullw r12, r12, r25
    subf r12, r12, r27
    mullw r6, r6, r10
    mullw r12, r3, r12
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    add r10, r23, r12
    addi r10, r10, 0x4
lbl_801B00F4:
    lis r25, 0x8
    lis r12, 0x3711
    subi r25, r25, 0x46d7
    lhz r5, 0x0(r5)
    mullw r7, r7, r25
    subi r12, r12, 0x6819
    rlwinm. r4, r4, 0, 30, 30
    mullw r4, r5, r12
    add r0, r7, r0
    addis r4, r4, 0x5
    add r4, r0, r4
    subi r0, r4, 0x40ad
    stw r0, 0x8(r1)
    lbz r7, 0xa(r1)
    lbz r0, 0xb(r1)
    lbz r4, 0x9(r1)
    xor r7, r7, r0
    lbz r0, 0x8(r1)
    xor r4, r4, r7
    stb r7, 0xa(r1)
    xor r0, r0, r4
    stb r4, 0x9(r1)
    stb r0, 0x8(r1)
    lwz r4, 0x8(r1)
    bne lbl_801B0168
    mullw r0, r5, r3
    add r3, r24, r0
    addi r3, r3, 0x4
    b lbl_801B019C
lbl_801B0168:
    lhz r12, 0x0(r23)
    srwi r24, r4, 16
    lis r5, 0x3
    divwu r7, r24, r12
    addi r0, r5, 0x43fd
    mullw r5, r7, r12
    subf r5, r5, r24
    mullw r3, r3, r5
    mullw r4, r4, r0
    add r3, r23, r3
    addi r3, r3, 0x4
    addis r4, r4, 0x27
    subi r4, r4, 0x613d
lbl_801B019C:
    lbzx r5, r10, r9
    li r0, 0x0
    cmpwi r5, 0x0
    beq lbl_801B01CC
    rlwinm. r5, r6, 0, 15, 15
    bne lbl_801B01B8
    li r0, 0x1
lbl_801B01B8:
    lis r5, 0x3
    addi r5, r5, 0x43fd
    mullw r5, r6, r5
    addis r6, r5, 0x27
    subi r6, r6, 0x613d
lbl_801B01CC:
    lbzx r7, r3, r9
    li r5, 0x0
    cmpwi r7, 0x0
    beq lbl_801B01FC
    rlwinm. r7, r4, 0, 15, 15
    bne lbl_801B01E8
    li r5, 0x1
lbl_801B01E8:
    lis r7, 0x3
    addi r7, r7, 0x43fd
    mullw r4, r4, r7
    addis r4, r4, 0x27
    subi r4, r4, 0x613d
lbl_801B01FC:
    lfd f0, lbl_804A1740
    li r21, 0x1
    lfs f7, lbl_804A1760
    lis r7, 0x3
    lfs f5, lbl_804A1768
    lfs f4, lbl_804A175C
    b lbl_801B0394
lbl_801B0218:
    and. r9, r26, r21
    beq lbl_801B0360
    srwi r9, r6, 16
    lfs f3, 0x4(r10)
    stw r9, 0x2c(r1)
    cmpwi r0, 0x0
    lfs f6, 0x0(r10)
    addi r10, r10, 0x8
    lfd f1, 0x28(r1)
    fsubs f1, f1, f0
    fmuls f1, f3, f1
    fadds f1, f6, f1
    beq lbl_801B0250
    fneg f1, f1
lbl_801B0250:
    srwi r9, r4, 16
    lfs f6, 0x4(r3)
    stw r9, 0x24(r1)
    cmpwi r5, 0x0
    lfs f8, 0x0(r3)
    addi r3, r3, 0x8
    lfd f3, 0x20(r1)
    fsubs f3, f3, f0
    fmuls f3, f6, f3
    fadds f8, f8, f3
    beq lbl_801B0280
    fneg f8, f8
lbl_801B0280:
    fcmpu cr0, f1, f8
    lbz r12, 0x0(r11)
    bne lbl_801B0290
    b lbl_801B035C
lbl_801B0290:
    clrlwi r9, r12, 30
    cmpwi r9, 0x1
    beq lbl_801B02C8
    bge lbl_801B02AC
    cmpwi r9, 0x0
    bge lbl_801B02B8
    b lbl_801B0358
lbl_801B02AC:
    cmpwi r9, 0x3
    bge lbl_801B0358
    b lbl_801B035C
lbl_801B02B8:
    fsubs f3, f8, f1
    fmuls f3, f2, f3
    fadds f1, f1, f3
    b lbl_801B035C
lbl_801B02C8:
    cmplwi r12, 0x1
    bne lbl_801B02F0
    fmuls f6, f7, f2
    fsubs f3, f8, f1
    fsubs f6, f4, f6
    fmuls f3, f6, f3
    fmuls f3, f2, f3
    fmuls f3, f2, f3
    fadds f1, f1, f3
    b lbl_801B035C
lbl_801B02F0:
    extrwi. r9, r12, 1, 28
    bne lbl_801B0300
    lfs f9, lbl_804A1738
    b lbl_801B0304
lbl_801B0300:
    lfs f9, lbl_804A1764
lbl_801B0304:
    extrwi. r9, r12, 1, 29
    bne lbl_801B0314
    lfs f10, lbl_804A1738
    b lbl_801B0318
lbl_801B0314:
    lfs f10, lbl_804A1764
lbl_801B0318:
    fadds f6, f9, f10
    fmuls f3, f5, f9
    fsubs f8, f8, f1
    fsubs f6, f6, f7
    fsubs f3, f3, f10
    fmuls f8, f2, f8
    fmuls f6, f2, f6
    fadds f3, f4, f3
    fmuls f6, f2, f6
    fmuls f3, f2, f3
    fadds f3, f6, f3
    fadds f3, f9, f3
    fmuls f3, f8, f3
    fadds f1, f1, f3
    b lbl_801B035C
    b lbl_801B035C
lbl_801B0358:
    lfs f1, lbl_804A1738
lbl_801B035C:
    stfs f1, 0x0(r29)
lbl_801B0360:
    lbz r9, 0x4(r28)
    addi r11, r11, 0x1
    addi r29, r29, 0x4
    rlwinm. r9, r9, 0, 29, 29
    bne lbl_801B0390
    addi r9, r7, 0x43fd
    mullw r6, r6, r9
    mullw r4, r4, r9
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    addis r4, r4, 0x27
    subi r4, r4, 0x613d
lbl_801B0390:
    clrlslwi r21, r21, 17, 1
lbl_801B0394:
    cmpw r21, r8
    ble lbl_801B0218
lbl_801B039C:
    opword 0xE3E10078
    addi r11, r1, 0x70
    lfd f31, 0x70(r1)
    bl _restgpr_21
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801B03BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B03BC() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    addi r11, r1, 0x50
    bl _savegpr_23
    lbz r10, 0x4(r3)
    lis r9, 0x4330
    lwz r0, 0xc(r3)
    addi r30, r3, 0x20
    lwz r8, 0x10(r3)
    rlwinm. r11, r10, 0, 26, 26
    add r29, r30, r0
    lwz r0, 0x14(r3)
    add r28, r29, r8
    mr r24, r4
    stw r9, 0x10(r1)
    mr r31, r3
    mr r25, r5
    mr r26, r6
    stw r9, 0x18(r1)
    add r27, r28, r0
    li r4, 0x0
    bne lbl_801B0460
    lbz r0, 0x5(r3)
    cmplwi r0, 0x1
    bgt lbl_801B0460
    rlwinm. r0, r10, 0, 24, 24
    bne lbl_801B044C
    lhz r8, 0x8(r3)
    cmplw r5, r8
    blt lbl_801B0444
    b lbl_801B06D4
lbl_801B0444:
    clrlwi r8, r5, 16
    b lbl_801B06D4
lbl_801B044C:
    lhz r0, 0x8(r3)
    mullw r0, r0, r5
    divwu r0, r0, r7
    clrlwi r8, r0, 16
    b lbl_801B06D4
lbl_801B0460:
    rlwinm. r0, r10, 0, 24, 24
    bne lbl_801B0528
    lhz r8, 0x8(r3)
    cmplwi r8, 0x1
    ble lbl_801B047C
    rlwinm. r0, r10, 0, 25, 25
    bne lbl_801B04B0
lbl_801B047C:
    divwu r4, r5, r8
    cmpwi r11, 0x0
    bne lbl_801B04A0
    lbz r3, 0x5(r3)
    cmplw r4, r3
    blt lbl_801B04A0
    subi r0, r3, 0x1
    clrlwi r4, r0, 24
    b lbl_801B06D4
lbl_801B04A0:
    mullw r0, r4, r8
    subf r0, r0, r5
    clrlwi r8, r0, 16
    b lbl_801B06D4
lbl_801B04B0:
    subi r7, r8, 0x1
    cmpwi r11, 0x0
    divwu r4, r5, r7
    bne lbl_801B04FC
    lbz r6, 0x5(r3)
    cmplw r4, r6
    blt lbl_801B04FC
    srwi r4, r6, 31
    clrlwi r0, r6, 31
    xor r3, r0, r4
    subf r4, r4, r3
    subi r0, r6, 0x1
    cntlzw r5, r4
    clrlwi r3, r7, 16
    clrlwi r4, r0, 24
    extrwi r0, r5, 1, 26
    neg r0, r0
    andc r8, r3, r0
    b lbl_801B06D4
lbl_801B04FC:
    clrlwi. r0, r4, 31
    bne lbl_801B0514
    mullw r0, r4, r7
    subf r0, r0, r5
    clrlwi r8, r0, 16
    b lbl_801B06D4
lbl_801B0514:
    addi r0, r4, 0x1
    mullw r0, r7, r0
    subf r0, r5, r0
    clrlwi r8, r0, 16
    b lbl_801B06D4
lbl_801B0528:
    cmplw r5, r7
    blt lbl_801B056C
    rlwinm. r0, r10, 0, 25, 25
    beq lbl_801B0550
    lbz r0, 0x5(r3)
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    beq lbl_801B0558
lbl_801B0550:
    lhz r8, 0x8(r3)
    b lbl_801B055C
lbl_801B0558:
    li r8, 0x0
lbl_801B055C:
    lbz r3, 0x5(r3)
    subi r0, r3, 0x1
    clrlwi r4, r0, 24
    b lbl_801B06D4
lbl_801B056C:
    lhz r23, 0x8(r3)
    cmplwi r23, 0x1
    ble lbl_801B0580
    rlwinm. r0, r10, 0, 25, 25
    bne lbl_801B0614
lbl_801B0580:
    lbz r0, 0x5(r3)
    stw r23, 0x1c(r1)
    lfd f5, lbl_804A1740
    stw r0, 0x14(r1)
    lfd f0, 0x18(r1)
    lfd f1, 0x10(r1)
    fsubs f3, f0, f5
    stw r5, 0x1c(r1)
    fsubs f4, f1, f5
    stw r7, 0x14(r1)
    lfd f0, 0x18(r1)
    lfd f2, 0x10(r1)
    fsubs f1, f0, f5
    fsubs f2, f2, f5
    stw r23, 0x14(r1)
    lfd f0, 0x10(r1)
    fdivs f2, f3, f2
    fmuls f31, f4, f2
    fsubs f0, f0, f5
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r0, r3, r23
    stw r25, 0x1c(r1)
    lfd f2, lbl_804A1740
    mr r4, r3
    lfd f0, 0x18(r1)
    fsubs f1, f0, f2
    stw r0, 0x14(r1)
    fmuls f1, f1, f31
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r8, 0x24(r1)
    b lbl_801B06D4
lbl_801B0614:
    subi r25, r23, 0x1
    lbz r23, 0x5(r3)
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0x1c(r1)
    lfd f4, lbl_804A1740
    lfd f0, 0x18(r1)
    stw r23, 0x14(r1)
    fsubs f3, f0, f1
    lfs f2, lbl_804A1750
    lfd f0, 0x10(r1)
    stw r7, 0x1c(r1)
    fsubs f1, f0, f4
    lfd f0, 0x18(r1)
    stw r5, 0x14(r1)
    fmuls f3, f3, f1
    fsubs f1, f0, f4
    lfd f0, 0x10(r1)
    fadds f2, f2, f3
    fsubs f0, f0, f4
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    divwu r4, r3, r25
    cmplw r4, r23
    blt lbl_801B06AC
    srwi r4, r23, 31
    clrlwi r0, r23, 31
    xor r3, r0, r4
    subf r4, r4, r3
    subi r0, r23, 0x1
    cntlzw r5, r4
    clrlwi r3, r25, 16
    clrlwi r4, r0, 24
    extrwi r0, r5, 1, 26
    neg r0, r0
    andc r8, r3, r0
    b lbl_801B06D4
lbl_801B06AC:
    clrlwi. r0, r4, 31
    bne lbl_801B06C4
    mullw r0, r4, r25
    subf r0, r0, r3
    clrlwi r8, r0, 16
    b lbl_801B06D4
lbl_801B06C4:
    addi r0, r4, 0x1
    mullw r0, r25, r0
    subf r0, r3, r0
    clrlwi r8, r0, 16
lbl_801B06D4:
    lbz r0, 0x1(r31)
    cmpwi r0, 0x6c
    beq lbl_801B0708
    bge lbl_801B06F0
    cmpwi r0, 0x68
    beq lbl_801B06FC
    b lbl_801B0970
lbl_801B06F0:
    cmpwi r0, 0x70
    beq lbl_801B0714
    b lbl_801B0970
lbl_801B06FC:
    addi r3, r24, 0x88
    li r0, 0x0
    b lbl_801B0724
lbl_801B0708:
    addi r3, r24, 0x8c
    li r0, 0x1
    b lbl_801B0724
lbl_801B0714:
    addi r3, r24, 0x90
    li r0, 0x2
    b lbl_801B0724
    b lbl_801B0970
lbl_801B0724:
    lhz r6, 0x0(r30)
    clrlwi r8, r8, 16
    lhz r7, 0x4(r30)
    addi r5, r30, 0x4
    subi r10, r6, 0x1
    li r9, 0x0
    srwi r6, r10, 31
    cmpw r8, r7
    add r6, r6, r10
    srawi r7, r6, 1
    blt lbl_801B0754
    b lbl_801B075C
lbl_801B0754:
    li r10, 0x0
    b lbl_801B07D0
lbl_801B075C:
    slwi r6, r10, 4
    lhzx r6, r5, r6
    cmpw r6, r8
    blt lbl_801B07D0
    cmpw r8, r6
    bne lbl_801B0778
    b lbl_801B07D0
lbl_801B0778:
    slwi r6, r7, 4
    lhzx r6, r5, r6
    b lbl_801B07C4
lbl_801B0784:
    cmpw r8, r6
    bne lbl_801B0794
    mr r9, r7
    b lbl_801B07AC
lbl_801B0794:
    cmpw r6, r8
    bge lbl_801B07A0
    mr r9, r7
lbl_801B07A0:
    cmpw r6, r8
    blt lbl_801B07AC
    mr r10, r7
lbl_801B07AC:
    add r7, r9, r10
    srwi r6, r7, 31
    add r7, r6, r7
    extlwi r6, r7, 28, 3
    lhzx r6, r5, r6
    srawi r7, r7, 1
lbl_801B07C4:
    cmpw r9, r7
    blt lbl_801B0784
    mr r10, r9
lbl_801B07D0:
    slwi r6, r10, 4
    add r5, r5, r6
    lbz r12, 0x2(r5)
    cmpwi r12, 0x0
    bne lbl_801B07F4
    lbz r8, 0xc(r5)
    lbz r9, 0xd(r5)
    lhz r5, 0xe(r5)
    b lbl_801B0910
lbl_801B07F4:
    lis r6, 0x3711
    lhz r5, 0xc(r5)
    subi r6, r6, 0x6819
    lis r9, 0x3f82
    mullw r6, r5, r6
    lis r8, 0x30a7
    subi r11, r9, 0x9cb
    lhz r10, 0x6(r31)
    lis r7, 0x8
    addi r9, r8, 0x4193
    subi r8, r7, 0x46d7
    addis r7, r6, 0x5
    rlwinm. r6, r12, 0, 30, 30
    mullw r11, r26, r11
    subi r7, r7, 0x40ad
    mullw r6, r10, r9
    mullw r4, r4, r8
    add r6, r11, r6
    add r4, r4, r7
    add r4, r6, r4
    stw r4, 0x8(r1)
    lbz r7, 0xa(r1)
    lbz r4, 0xb(r1)
    lbz r6, 0x9(r1)
    xor r7, r7, r4
    lbz r4, 0x8(r1)
    xor r6, r6, r7
    stb r7, 0xa(r1)
    xor r4, r4, r6
    stb r6, 0x9(r1)
    stb r4, 0x8(r1)
    bne lbl_801B08E4
    clrlslwi r4, r5, 16, 3
    add r5, r29, r4
    lbz r4, 0x8(r5)
    lbz r8, 0x4(r5)
    cmpwi r4, 0x2
    lbz r9, 0x5(r5)
    lhz r5, 0x6(r5)
    beq lbl_801B08C4
    bge lbl_801B08A4
    cmpwi r4, 0x1
    bge lbl_801B08B0
    b lbl_801B0910
lbl_801B08A4:
    cmpwi r4, 0x4
    bge lbl_801B0910
    b lbl_801B08D8
lbl_801B08B0:
    lwz r4, 0x8(r1)
    extrwi r4, r4, 1, 15
    rlwimi r4, r9, 0, 30, 30
    mr r9, r4
    b lbl_801B0910
lbl_801B08C4:
    lwz r4, 0x8(r1)
    rlwinm r4, r4, 16, 30, 30
    rlwimi r4, r9, 0, 31, 31
    mr r9, r4
    b lbl_801B0910
lbl_801B08D8:
    lwz r4, 0x8(r1)
    extrwi r9, r4, 2, 14
    b lbl_801B0910
lbl_801B08E4:
    lwz r4, 0x8(r1)
    lhz r5, 0x0(r28)
    srwi r6, r4, 16
    divwu r4, r6, r5
    mullw r4, r4, r5
    subf r4, r4, r6
    slwi r4, r4, 2
    add r4, r28, r4
    lbz r8, 0x4(r4)
    lbz r9, 0x5(r4)
    lhz r5, 0x6(r4)
lbl_801B0910:
    clrlslwi r4, r5, 16, 2
    clrlwi r5, r8, 28
    add r4, r27, r4
    slwi r10, r0, 2
    lwz r7, 0x4(r4)
    slwi r8, r0, 1
    li r6, 0xf
    clrlwi r0, r9, 30
    stw r7, 0x0(r3)
    li r4, 0x3
    slw r3, r4, r8
    slw r6, r6, r10
    lhz r7, 0x94(r24)
    slw r5, r5, r10
    lbz r4, 0x96(r24)
    slw r0, r0, r8
    andc r6, r7, r6
    andc r3, r4, r3
    clrlwi r4, r6, 16
    clrlwi r3, r3, 24
    or r4, r4, r5
    or r0, r3, r0
    sth r4, 0x94(r24)
    stb r0, 0x96(r24)
lbl_801B0970:
    opword 0xE3E10058
    addi r11, r1, 0x50
    lfd f31, 0x50(r1)
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801B0990
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B0990() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_801B09B8
    addi r4, r3, 0xc
    b lbl_801B0A64
lbl_801B09B8:
    lis r11, 0x3f82
    lis r30, 0x8
    subi r12, r11, 0x9cb
    lis r10, 0x30a7
    lhz r11, 0x6(r5)
    addi r5, r10, 0x4193
    lhz r31, 0xc(r3)
    rlwinm. r0, r0, 0, 30, 30
    mullw r3, r4, r12
    lis r10, 0x3711
    subi r30, r30, 0x46d7
    subi r10, r10, 0x6819
    mullw r0, r11, r5
    add r3, r3, r0
    addis r3, r3, 0x5
    subi r0, r3, 0x40ad
    mullw r5, r9, r30
    mullw r3, r31, r10
    add r3, r5, r3
    add r0, r3, r0
    stw r0, 0x8(r1)
    lbz r5, 0xa(r1)
    lbz r0, 0xb(r1)
    lbz r3, 0x9(r1)
    xor r5, r5, r0
    lbz r0, 0x8(r1)
    xor r3, r3, r5
    stb r5, 0xa(r1)
    xor r0, r0, r3
    stb r3, 0x9(r1)
    stb r0, 0x8(r1)
    beq lbl_801B0A64
    lhz r4, 0x0(r7)
    cmpwi r4, 0x0
    beq lbl_801B0ADC
    lwz r0, 0x8(r1)
    srwi r3, r0, 16
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    mulli r0, r0, 0xc
    add r3, r7, r0
    addi r4, r3, 0x4
lbl_801B0A64:
    lhz r0, 0xa(r4)
    slwi r0, r0, 2
    add r3, r6, r0
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_801B0ADC
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    bne lbl_801B0AB4
    lwz r3, 0xc8(r8)
    mr r5, r8
    lhz r7, 0xe2(r8)
    li r8, 0x0
    lwz r3, 0x20(r3)
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA7F0
    b lbl_801B0ADC
lbl_801B0AB4:
    lwz r3, 0xc8(r8)
    mr r5, r8
    lhz r7, 0xe2(r8)
    li r8, 0x0
    lwz r3, 0x20(r3)
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA96C
lbl_801B0ADC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B0AF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B0AF4() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    addi r11, r1, 0x60
    bl _savegpr_18
    lbz r11, 0x4(r3)
    lis r10, 0x4330
    lwz r0, 0xc(r3)
    addi r30, r3, 0x20
    lwz r9, 0x10(r3)
    rlwinm. r12, r11, 0, 26, 26
    add r8, r30, r0
    lwz r0, 0x14(r3)
    add r29, r9, r8
    stw r10, 0x8(r1)
    mr r31, r3
    mr r21, r4
    stw r10, 0x10(r1)
    mr r20, r5
    mr r22, r6
    mr r18, r7
    add r28, r29, r0
    li r26, 0x0
    li r19, 0x0
    bne lbl_801B0BA0
    lbz r0, 0x5(r3)
    cmplwi r0, 0x1
    bgt lbl_801B0BA0
    rlwinm. r0, r11, 0, 24, 24
    bne lbl_801B0B8C
    lhz r27, 0x8(r3)
    cmplw r5, r27
    blt lbl_801B0B84
    b lbl_801B0E30
lbl_801B0B84:
    clrlwi r27, r5, 16
    b lbl_801B0E30
lbl_801B0B8C:
    lhz r0, 0x8(r3)
    mullw r0, r0, r5
    divwu r0, r0, r7
    clrlwi r27, r0, 16
    b lbl_801B0E30
lbl_801B0BA0:
    rlwinm. r0, r11, 0, 24, 24
    bne lbl_801B0C78
    lhz r27, 0x8(r3)
    cmplwi r27, 0x1
    ble lbl_801B0BBC
    rlwinm. r0, r11, 0, 25, 25
    bne lbl_801B0BF0
lbl_801B0BBC:
    divwu r26, r5, r27
    cmpwi r12, 0x0
    bne lbl_801B0BE0
    lbz r3, 0x5(r3)
    cmplw r26, r3
    blt lbl_801B0BE0
    subi r0, r3, 0x1
    clrlwi r26, r0, 24
    b lbl_801B0E30
lbl_801B0BE0:
    mullw r0, r26, r27
    subf r0, r0, r5
    clrlwi r27, r0, 16
    b lbl_801B0E30
lbl_801B0BF0:
    subi r6, r27, 0x1
    cmpwi r12, 0x0
    divwu r26, r5, r6
    bne lbl_801B0C4C
    lbz r4, 0x5(r3)
    cmplw cr1, r26, r4
    blt cr1, lbl_801B0C4C
    srwi r3, r4, 31
    clrlwi r0, r4, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_801B0C3C
    bne cr1, lbl_801B0C34
    mullw r0, r26, r6
    subf. r0, r0, r5
    bne lbl_801B0C34
    li r19, 0x1
lbl_801B0C34:
    li r27, 0x0
    b lbl_801B0C40
lbl_801B0C3C:
    clrlwi r27, r6, 16
lbl_801B0C40:
    subi r0, r4, 0x1
    clrlwi r26, r0, 24
    b lbl_801B0E30
lbl_801B0C4C:
    clrlwi. r0, r26, 31
    bne lbl_801B0C64
    mullw r0, r26, r6
    subf r0, r0, r5
    clrlwi r27, r0, 16
    b lbl_801B0E30
lbl_801B0C64:
    addi r0, r26, 0x1
    mullw r0, r6, r0
    subf r0, r5, r0
    clrlwi r27, r0, 16
    b lbl_801B0E30
lbl_801B0C78:
    cmplw r5, r7
    blt lbl_801B0CBC
    rlwinm. r0, r11, 0, 25, 25
    beq lbl_801B0CA0
    lbz r0, 0x5(r3)
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    beq lbl_801B0CA8
lbl_801B0CA0:
    lhz r27, 0x8(r3)
    b lbl_801B0CAC
lbl_801B0CA8:
    li r27, 0x0
lbl_801B0CAC:
    lbz r3, 0x5(r3)
    subi r0, r3, 0x1
    clrlwi r26, r0, 24
    b lbl_801B0E30
lbl_801B0CBC:
    lhz r23, 0x8(r3)
    cmplwi r23, 0x1
    ble lbl_801B0CD0
    rlwinm. r0, r11, 0, 25, 25
    bne lbl_801B0D64
lbl_801B0CD0:
    lbz r0, 0x5(r3)
    stw r23, 0x14(r1)
    lfd f5, lbl_804A1740
    stw r0, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f0, f5
    stw r5, 0x14(r1)
    fsubs f4, f1, f5
    stw r7, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f2, 0x8(r1)
    fsubs f1, f0, f5
    fsubs f2, f2, f5
    stw r23, 0xc(r1)
    lfd f0, 0x8(r1)
    fdivs f2, f3, f2
    fmuls f31, f4, f2
    fsubs f0, f0, f5
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r0, r3, r23
    stw r20, 0x14(r1)
    lfd f2, lbl_804A1740
    mr r26, r3
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    stw r0, 0xc(r1)
    fmuls f1, f1, f31
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r27, 0x1c(r1)
    b lbl_801B0E30
lbl_801B0D64:
    subi r23, r23, 0x1
    lbz r24, 0x5(r3)
    xoris r0, r23, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0x14(r1)
    lfd f4, lbl_804A1740
    lfd f0, 0x10(r1)
    stw r24, 0xc(r1)
    fsubs f3, f0, f1
    lfs f2, lbl_804A1750
    lfd f0, 0x8(r1)
    stw r7, 0x14(r1)
    fsubs f1, f0, f4
    lfd f0, 0x10(r1)
    stw r5, 0xc(r1)
    fmuls f3, f3, f1
    fsubs f1, f0, f4
    lfd f0, 0x8(r1)
    fadds f2, f2, f3
    fsubs f0, f0, f4
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    divwu r26, r3, r23
    cmplw r26, r24
    blt lbl_801B0E08
    srwi r3, r24, 31
    clrlwi r0, r24, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_801B0DF8
    subi r0, r18, 0x1
    cmplw r20, r0
    bne lbl_801B0DF0
    li r19, 0x1
lbl_801B0DF0:
    li r27, 0x0
    b lbl_801B0DFC
lbl_801B0DF8:
    clrlwi r27, r23, 16
lbl_801B0DFC:
    subi r0, r24, 0x1
    clrlwi r26, r0, 24
    b lbl_801B0E30
lbl_801B0E08:
    clrlwi. r0, r26, 31
    bne lbl_801B0E20
    mullw r0, r26, r23
    subf r0, r0, r3
    clrlwi r27, r0, 16
    b lbl_801B0E30
lbl_801B0E20:
    addi r0, r26, 0x1
    mullw r0, r23, r0
    subf r0, r3, r0
    clrlwi r27, r0, 16
lbl_801B0E30:
    lbz r4, 0x4(r31)
    li r24, 0x0
    rlwinm. r3, r4, 0, 26, 26
    bne lbl_801B0E88
    lbz r0, 0x5(r31)
    cmplwi r0, 0x1
    bgt lbl_801B0E88
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_801B0E70
    lhz r25, 0x8(r31)
    addi r0, r20, 0x1
    cmplw r0, r25
    blt lbl_801B0E68
    b lbl_801B111C
lbl_801B0E68:
    clrlwi r25, r0, 16
    b lbl_801B111C
lbl_801B0E70:
    lhz r3, 0x8(r31)
    addi r0, r20, 0x1
    mullw r0, r3, r0
    divwu r0, r0, r18
    clrlwi r25, r0, 16
    b lbl_801B111C
lbl_801B0E88:
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_801B0F64
    lhz r25, 0x8(r31)
    cmplwi r25, 0x1
    ble lbl_801B0EA4
    rlwinm. r0, r4, 0, 25, 25
    bne lbl_801B0EE0
lbl_801B0EA4:
    addi r0, r20, 0x1
    cmpwi r3, 0x0
    divwu r24, r0, r25
    bne lbl_801B0ECC
    lbz r3, 0x5(r31)
    cmplw r24, r3
    blt lbl_801B0ECC
    subi r0, r3, 0x1
    clrlwi r24, r0, 24
    b lbl_801B111C
lbl_801B0ECC:
    mullw r3, r24, r25
    addi r0, r20, 0x1
    subf r0, r3, r0
    clrlwi r25, r0, 16
    b lbl_801B111C
lbl_801B0EE0:
    subi r6, r25, 0x1
    addi r0, r20, 0x1
    divwu r24, r0, r6
    cmpwi r3, 0x0
    bne lbl_801B0F30
    lbz r5, 0x5(r31)
    cmplw r24, r5
    blt lbl_801B0F30
    srwi r4, r5, 31
    clrlwi r0, r5, 31
    xor r3, r0, r4
    subf r4, r4, r3
    subi r0, r5, 0x1
    cntlzw r4, r4
    clrlwi r3, r6, 16
    clrlwi r24, r0, 24
    extrwi r0, r4, 1, 26
    neg r0, r0
    andc r25, r3, r0
    b lbl_801B111C
lbl_801B0F30:
    clrlwi. r0, r24, 31
    bne lbl_801B0F4C
    mullw r3, r24, r6
    addi r0, r20, 0x1
    subf r0, r3, r0
    clrlwi r25, r0, 16
    b lbl_801B111C
lbl_801B0F4C:
    addi r0, r24, 0x1
    mullw r3, r6, r0
    subi r0, r3, 0x1
    subf r0, r20, r0
    clrlwi r25, r0, 16
    b lbl_801B111C
lbl_801B0F64:
    addi r3, r20, 0x1
    cmplw r3, r18
    blt lbl_801B0FAC
    rlwinm. r0, r4, 0, 25, 25
    beq lbl_801B0F90
    lbz r0, 0x5(r31)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    beq lbl_801B0F98
lbl_801B0F90:
    lhz r25, 0x8(r31)
    b lbl_801B0F9C
lbl_801B0F98:
    li r25, 0x0
lbl_801B0F9C:
    lbz r3, 0x5(r31)
    subi r0, r3, 0x1
    clrlwi r24, r0, 24
    b lbl_801B111C
lbl_801B0FAC:
    lhz r23, 0x8(r31)
    cmplwi r23, 0x1
    ble lbl_801B0FC0
    rlwinm. r0, r4, 0, 25, 25
    bne lbl_801B105C
lbl_801B0FC0:
    lbz r3, 0x5(r31)
    addi r0, r20, 0x1
    stw r23, 0x14(r1)
    lfd f5, lbl_804A1740
    stw r3, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f3, f0, f5
    stw r0, 0x14(r1)
    fsubs f4, f1, f5
    stw r18, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f2, 0x8(r1)
    fsubs f1, f0, f5
    fsubs f2, f2, f5
    stw r23, 0xc(r1)
    lfd f0, 0x8(r1)
    fdivs f2, f3, f2
    fmuls f31, f4, f2
    fsubs f0, f0, f5
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r0, r3, r23
    addi r4, r20, 0x1
    stw r4, 0x14(r1)
    mr r24, r3
    lfd f2, lbl_804A1740
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fmuls f1, f1, f31
    fsubs f0, f0, f2
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r25, 0x1c(r1)
    b lbl_801B111C
lbl_801B105C:
    subi r23, r23, 0x1
    lbz r25, 0x5(r31)
    xoris r0, r23, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0x14(r1)
    lfd f4, lbl_804A1740
    lfd f0, 0x10(r1)
    stw r25, 0xc(r1)
    fsubs f3, f0, f1
    lfs f2, lbl_804A1750
    lfd f0, 0x8(r1)
    stw r18, 0x14(r1)
    fsubs f1, f0, f4
    lfd f0, 0x10(r1)
    stw r3, 0xc(r1)
    fmuls f3, f3, f1
    fsubs f1, f0, f4
    lfd f0, 0x8(r1)
    fadds f2, f2, f3
    fsubs f0, f0, f4
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    divwu r24, r3, r23
    cmplw r24, r25
    blt lbl_801B10F4
    srwi r4, r25, 31
    clrlwi r0, r25, 31
    xor r3, r0, r4
    subf r4, r4, r3
    subi r0, r25, 0x1
    cntlzw r4, r4
    clrlwi r3, r23, 16
    clrlwi r24, r0, 24
    extrwi r0, r4, 1, 26
    neg r0, r0
    andc r25, r3, r0
    b lbl_801B111C
lbl_801B10F4:
    clrlwi. r0, r24, 31
    bne lbl_801B110C
    mullw r0, r24, r23
    subf r0, r0, r3
    clrlwi r25, r0, 16
    b lbl_801B111C
lbl_801B110C:
    addi r0, r24, 0x1
    mullw r0, r23, r0
    subf r0, r3, r0
    clrlwi r25, r0, 16
lbl_801B111C:
    cmplw r26, r24
    clrlwi r3, r25, 16
    addi r23, r30, 0x4
    bne lbl_801B1354
    clrlwi r0, r27, 16
    cmplw r0, r3
    bne lbl_801B1144
    cmpwi r19, 0x0
    beq lbl_801B1874
    li r25, 0x1
lbl_801B1144:
    clrlwi r0, r27, 16
    clrlwi r3, r25, 16
    cmplw r0, r3
    bge lbl_801B1254
    lhz r3, 0x0(r30)
    li r5, 0x0
    lhz r4, 0x0(r23)
    subi r19, r3, 0x1
    srwi r3, r19, 31
    cmpw r0, r4
    add r3, r3, r19
    srawi r4, r3, 1
    blt lbl_801B117C
    bne lbl_801B1184
lbl_801B117C:
    li r19, 0x0
    b lbl_801B11F4
lbl_801B1184:
    mulli r3, r19, 0x18
    lhzx r3, r23, r3
    cmpw r3, r0
    blt lbl_801B11F4
    b lbl_801B119C
    b lbl_801B11F4
lbl_801B119C:
    mulli r3, r4, 0x18
    lhzx r3, r23, r3
    b lbl_801B11E8
lbl_801B11A8:
    cmpw r0, r3
    bne lbl_801B11B8
    mr r19, r4
    b lbl_801B11D0
lbl_801B11B8:
    cmpw r3, r0
    bge lbl_801B11C4
    mr r5, r4
lbl_801B11C4:
    cmpw r3, r0
    blt lbl_801B11D0
    mr r19, r4
lbl_801B11D0:
    add r4, r5, r19
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r4, r3, 1
    mulli r3, r4, 0x18
    lhzx r3, r23, r3
lbl_801B11E8:
    cmpw r5, r4
    blt lbl_801B11A8
    mr r19, r5
lbl_801B11F4:
    mulli r0, r19, 0x18
    clrlwi r18, r25, 16
    clrlwi r20, r27, 16
    add r23, r23, r0
    b lbl_801B1244
lbl_801B1208:
    lhz r0, 0x0(r23)
    cmplw r0, r20
    blt lbl_801B123C
    cmplw r18, r0
    ble lbl_801B1874
    mr r3, r23
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
lbl_801B123C:
    addi r23, r23, 0x18
    addi r19, r19, 0x1
lbl_801B1244:
    lhz r0, 0x0(r30)
    cmpw r19, r0
    blt lbl_801B1208
    b lbl_801B1874
lbl_801B1254:
    lhz r3, 0x0(r30)
    li r5, 0x0
    lhz r4, 0x0(r23)
    subi r19, r3, 0x1
    srwi r3, r19, 31
    cmpw r0, r4
    add r3, r3, r19
    srawi r4, r3, 1
    blt lbl_801B127C
    b lbl_801B1284
lbl_801B127C:
    li r19, 0x0
    b lbl_801B12F8
lbl_801B1284:
    mulli r3, r19, 0x18
    lhzx r3, r23, r3
    cmpw r3, r0
    blt lbl_801B12F8
    cmpw r0, r3
    bne lbl_801B12A0
    b lbl_801B12F8
lbl_801B12A0:
    mulli r3, r4, 0x18
    lhzx r3, r23, r3
    b lbl_801B12EC
lbl_801B12AC:
    cmpw r0, r3
    bne lbl_801B12BC
    mr r5, r4
    b lbl_801B12D4
lbl_801B12BC:
    cmpw r3, r0
    bge lbl_801B12C8
    mr r5, r4
lbl_801B12C8:
    cmpw r3, r0
    blt lbl_801B12D4
    mr r19, r4
lbl_801B12D4:
    add r4, r5, r19
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r4, r3, 1
    mulli r3, r4, 0x18
    lhzx r3, r23, r3
lbl_801B12EC:
    cmpw r5, r4
    blt lbl_801B12AC
    mr r19, r5
lbl_801B12F8:
    mulli r0, r19, 0x18
    clrlwi r18, r25, 16
    clrlwi r20, r27, 16
    add r23, r23, r0
    b lbl_801B1348
lbl_801B130C:
    lhz r0, 0x0(r23)
    cmplw r20, r0
    blt lbl_801B1340
    cmplw r0, r18
    ble lbl_801B1874
    mr r3, r23
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
lbl_801B1340:
    subi r23, r23, 0x18
    subi r19, r19, 0x1
lbl_801B1348:
    cmpwi r19, 0x0
    bge lbl_801B130C
    b lbl_801B1874
lbl_801B1354:
    lbz r0, 0x4(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801B16E0
    clrlwi. r20, r26, 31
    bne lbl_801B1470
    lhz r3, 0x0(r30)
    clrlwi r4, r27, 16
    lhz r5, 0x0(r23)
    li r6, 0x0
    subi r19, r3, 0x1
    srwi r0, r19, 31
    cmpw r4, r5
    add r0, r0, r19
    srawi r3, r0, 1
    blt lbl_801B1394
    bne lbl_801B139C
lbl_801B1394:
    li r19, 0x0
    b lbl_801B140C
lbl_801B139C:
    mulli r0, r19, 0x18
    lhzx r0, r23, r0
    cmpw r0, r4
    blt lbl_801B140C
    b lbl_801B13B4
    b lbl_801B140C
lbl_801B13B4:
    mulli r0, r3, 0x18
    lhzx r0, r23, r0
    b lbl_801B1400
lbl_801B13C0:
    cmpw r4, r0
    bne lbl_801B13D0
    mr r19, r3
    b lbl_801B13E8
lbl_801B13D0:
    cmpw r0, r4
    bge lbl_801B13DC
    mr r6, r3
lbl_801B13DC:
    cmpw r0, r4
    blt lbl_801B13E8
    mr r19, r3
lbl_801B13E8:
    add r3, r6, r19
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
    mulli r0, r3, 0x18
    lhzx r0, r23, r0
lbl_801B1400:
    cmpw r6, r3
    blt lbl_801B13C0
    mr r19, r6
lbl_801B140C:
    mulli r0, r19, 0x18
    clrlwi r18, r27, 16
    add r27, r23, r0
    b lbl_801B1460
lbl_801B141C:
    lhz r4, 0x0(r27)
    cmplw r4, r18
    blt lbl_801B1458
    lhz r3, 0x8(r31)
    subi r0, r3, 0x1
    cmpw r4, r0
    beq lbl_801B156C
    mr r3, r27
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
lbl_801B1458:
    addi r27, r27, 0x18
    addi r19, r19, 0x1
lbl_801B1460:
    lhz r0, 0x0(r30)
    cmpw r19, r0
    blt lbl_801B141C
    b lbl_801B156C
lbl_801B1470:
    lhz r3, 0x0(r30)
    clrlwi r4, r27, 16
    lhz r5, 0x0(r23)
    li r6, 0x0
    subi r19, r3, 0x1
    srwi r0, r19, 31
    cmpw r4, r5
    add r0, r0, r19
    srawi r3, r0, 1
    blt lbl_801B149C
    b lbl_801B14A4
lbl_801B149C:
    li r19, 0x0
    b lbl_801B1518
lbl_801B14A4:
    mulli r0, r19, 0x18
    lhzx r0, r23, r0
    cmpw r0, r4
    blt lbl_801B1518
    cmpw r4, r0
    bne lbl_801B14C0
    b lbl_801B1518
lbl_801B14C0:
    mulli r0, r3, 0x18
    lhzx r0, r23, r0
    b lbl_801B150C
lbl_801B14CC:
    cmpw r4, r0
    bne lbl_801B14DC
    mr r6, r3
    b lbl_801B14F4
lbl_801B14DC:
    cmpw r0, r4
    bge lbl_801B14E8
    mr r6, r3
lbl_801B14E8:
    cmpw r0, r4
    blt lbl_801B14F4
    mr r19, r3
lbl_801B14F4:
    add r3, r6, r19
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
    mulli r0, r3, 0x18
    lhzx r0, r23, r0
lbl_801B150C:
    cmpw r6, r3
    blt lbl_801B14CC
    mr r19, r6
lbl_801B1518:
    mulli r0, r19, 0x18
    clrlwi r18, r27, 16
    add r27, r23, r0
    b lbl_801B1564
lbl_801B1528:
    lhz r0, 0x0(r27)
    cmplw r18, r0
    blt lbl_801B155C
    cmpwi r0, 0x0
    beq lbl_801B156C
    mr r3, r27
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
lbl_801B155C:
    subi r27, r27, 0x18
    subi r19, r19, 0x1
lbl_801B1564:
    cmpwi r19, 0x0
    bge lbl_801B1528
lbl_801B156C:
    addi r18, r26, 0x1
    b lbl_801B1628
lbl_801B1574:
    cmpwi r20, 0x0
    bne lbl_801B15D4
    mr r19, r23
    li r27, 0x0
    b lbl_801B15C4
lbl_801B1588:
    lhz r3, 0x8(r31)
    lhz r4, 0x0(r19)
    subi r0, r3, 0x1
    cmpw r4, r0
    beq lbl_801B1624
    mr r3, r19
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
    addi r19, r19, 0x18
    addi r27, r27, 0x1
lbl_801B15C4:
    lhz r0, 0x0(r30)
    cmpw r27, r0
    blt lbl_801B1588
    b lbl_801B1624
lbl_801B15D4:
    lhz r3, 0x0(r30)
    subi r19, r3, 0x1
    mulli r0, r19, 0x18
    add r27, r23, r0
    b lbl_801B161C
lbl_801B15E8:
    lhz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_801B1624
    mr r3, r27
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
    subi r27, r27, 0x18
    subi r19, r19, 0x1
lbl_801B161C:
    cmpwi r19, 0x0
    bge lbl_801B15E8
lbl_801B1624:
    addi r18, r18, 0x1
lbl_801B1628:
    cmplw r18, r24
    blt lbl_801B1574
    clrlwi. r0, r24, 31
    bne lbl_801B1688
    clrlwi r18, r25, 16
    li r19, 0x0
    b lbl_801B1678
lbl_801B1644:
    lhz r0, 0x0(r23)
    cmplw r18, r0
    ble lbl_801B1874
    mr r3, r23
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
    addi r23, r23, 0x18
    addi r19, r19, 0x1
lbl_801B1678:
    lhz r0, 0x0(r30)
    cmpw r19, r0
    blt lbl_801B1644
    b lbl_801B1874
lbl_801B1688:
    lhz r3, 0x0(r30)
    clrlwi r18, r25, 16
    subi r19, r3, 0x1
    mulli r0, r19, 0x18
    add r20, r23, r0
    b lbl_801B16D4
lbl_801B16A0:
    lhz r0, 0x0(r20)
    cmplw r18, r0
    bge lbl_801B1874
    mr r3, r20
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
    subi r20, r20, 0x18
    subi r19, r19, 0x1
lbl_801B16D4:
    cmpwi r19, 0x0
    bge lbl_801B16A0
    b lbl_801B1874
lbl_801B16E0:
    lhz r3, 0x0(r30)
    clrlwi r4, r27, 16
    lhz r5, 0x0(r23)
    li r6, 0x0
    subi r20, r3, 0x1
    srwi r0, r20, 31
    cmpw r4, r5
    add r0, r0, r20
    srawi r3, r0, 1
    blt lbl_801B170C
    bne lbl_801B1714
lbl_801B170C:
    li r20, 0x0
    b lbl_801B1784
lbl_801B1714:
    mulli r0, r20, 0x18
    lhzx r0, r23, r0
    cmpw r0, r4
    blt lbl_801B1784
    b lbl_801B172C
    b lbl_801B1784
lbl_801B172C:
    mulli r0, r3, 0x18
    lhzx r0, r23, r0
    b lbl_801B1778
lbl_801B1738:
    cmpw r4, r0
    bne lbl_801B1748
    mr r20, r3
    b lbl_801B1760
lbl_801B1748:
    cmpw r0, r4
    bge lbl_801B1754
    mr r6, r3
lbl_801B1754:
    cmpw r0, r4
    blt lbl_801B1760
    mr r20, r3
lbl_801B1760:
    add r3, r6, r20
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
    mulli r0, r3, 0x18
    lhzx r0, r23, r0
lbl_801B1778:
    cmpw r6, r3
    blt lbl_801B1738
    mr r20, r6
lbl_801B1784:
    mulli r0, r20, 0x18
    clrlwi r18, r27, 16
    add r19, r23, r0
    b lbl_801B17C8
lbl_801B1794:
    lhz r0, 0x0(r19)
    cmplw r0, r18
    blt lbl_801B17C0
    mr r3, r19
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
lbl_801B17C0:
    addi r19, r19, 0x18
    addi r20, r20, 0x1
lbl_801B17C8:
    lhz r0, 0x0(r30)
    cmpw r20, r0
    blt lbl_801B1794
    addi r20, r26, 0x1
    b lbl_801B1820
lbl_801B17DC:
    mr r19, r23
    li r18, 0x0
    b lbl_801B1810
lbl_801B17E8:
    mr r3, r19
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
    addi r19, r19, 0x18
    addi r18, r18, 0x1
lbl_801B1810:
    lhz r0, 0x0(r30)
    cmpw r18, r0
    blt lbl_801B17E8
    addi r20, r20, 0x1
lbl_801B1820:
    cmplw r20, r24
    blt lbl_801B17DC
    clrlwi r18, r25, 16
    li r19, 0x0
    b lbl_801B1868
lbl_801B1834:
    lhz r0, 0x0(r23)
    cmplw r18, r0
    ble lbl_801B1874
    mr r3, r23
    mr r4, r22
    mr r5, r31
    mr r6, r28
    mr r7, r29
    mr r8, r21
    mr r9, r26
    bl fn_801B0990
    addi r23, r23, 0x18
    addi r19, r19, 0x1
lbl_801B1868:
    lhz r0, 0x0(r30)
    cmpw r19, r0
    blt lbl_801B1834
lbl_801B1874:
    opword 0xE3E10068
    addi r11, r1, 0x60
    lfd f31, 0x60(r1)
    bl _restgpr_18
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801B1894
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B1894() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    addi r11, r1, 0x50
    bl _savegpr_24
    lis r7, lbl_803604D0@ha
    lbz r31, 0x3(r3)
    addi r7, r7, lbl_803604D0@l
    lis r0, 0x4330
    lbzx r29, r7, r31
    lis r7, lbl_803605D0@ha
    addi r7, r7, lbl_803605D0@l
    stw r0, 0x8(r1)
    cmpwi r29, 0x0
    lbzx r30, r7, r31
    stw r0, 0x10(r1)
    mr r27, r4
    mr r24, r5
    beq lbl_801B1BBC
    lhz r8, 0x8(r3)
    addi r28, r3, 0x20
    cmplwi r8, 0x1
    bgt lbl_801B1900
    li r0, 0x0
    b lbl_801B1B84
lbl_801B1900:
    lbz r26, 0x4(r3)
    rlwinm. r7, r26, 0, 26, 26
    bne lbl_801B19C0
    lbz r0, 0x5(r3)
    cmplwi r0, 0x1
    bgt lbl_801B19C0
    rlwinm. r0, r26, 0, 24, 24
    bne lbl_801B193C
    subi r0, r8, 0x1
    cmplw r5, r0
    blt lbl_801B1934
    clrlwi r0, r0, 16
    b lbl_801B1B84
lbl_801B1934:
    clrlwi r0, r5, 16
    b lbl_801B1B84
lbl_801B193C:
    cmplwi r6, 0x1
    bne lbl_801B1950
    subi r0, r8, 0x1
    clrlwi r0, r0, 16
    b lbl_801B1B84
lbl_801B1950:
    stw r5, 0xc(r1)
    subi r0, r8, 0x1
    xoris r3, r0, 0x8000
    lfd f5, lbl_804A1740
    lfd f0, 0x8(r1)
    subi r0, r6, 0x1
    stw r3, 0x14(r1)
    fsubs f4, f0, f5
    lfd f3, lbl_804A1748
    stw r0, 0xc(r1)
    lfd f1, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f1, f3
    stw r3, 0x14(r1)
    fsubs f1, f0, f5
    lfd f0, 0x10(r1)
    fdivs f1, f2, f1
    fmuls f1, f4, f1
    fsubs f0, f0, f3
    fcmpo cr0, f1, f0
    ble lbl_801B19B0
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
lbl_801B19B0:
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    b lbl_801B1B84
lbl_801B19C0:
    rlwinm. r0, r26, 0, 24, 24
    bne lbl_801B1A68
    subi r6, r8, 0x1
    rlwinm. r0, r26, 0, 25, 25
    divwu r4, r5, r6
    bne lbl_801B1A04
    cmpwi r7, 0x0
    bne lbl_801B19F4
    lbz r0, 0x5(r3)
    cmplw r4, r0
    blt lbl_801B19F4
    clrlwi r0, r6, 16
    b lbl_801B1B84
lbl_801B19F4:
    mullw r0, r4, r6
    subf r0, r0, r5
    clrlwi r0, r0, 16
    b lbl_801B1B84
lbl_801B1A04:
    cmpwi r7, 0x0
    bne lbl_801B1A3C
    lbz r0, 0x5(r3)
    cmplw r4, r0
    blt lbl_801B1A3C
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_801B1A34
    li r0, 0x0
    b lbl_801B1B84
lbl_801B1A34:
    clrlwi r0, r6, 16
    b lbl_801B1B84
lbl_801B1A3C:
    clrlwi. r0, r4, 31
    bne lbl_801B1A54
    mullw r0, r4, r6
    subf r0, r0, r5
    clrlwi r0, r0, 16
    b lbl_801B1B84
lbl_801B1A54:
    addi r0, r4, 0x1
    mullw r0, r6, r0
    subf r0, r5, r0
    clrlwi r0, r0, 16
    b lbl_801B1B84
lbl_801B1A68:
    subi r4, r6, 0x1
    cmplw r5, r4
    blt lbl_801B1AA8
    rlwinm. r0, r26, 0, 25, 25
    beq lbl_801B1A94
    lbz r0, 0x5(r3)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    beq lbl_801B1AA0
lbl_801B1A94:
    subi r0, r8, 0x1
    clrlwi r0, r0, 16
    b lbl_801B1B84
lbl_801B1AA0:
    li r0, 0x0
    b lbl_801B1B84
lbl_801B1AA8:
    lbz r3, 0x5(r3)
    subi r25, r8, 0x1
    xoris r0, r25, 0x8000
    lfd f5, lbl_804A1740
    stw r3, 0x14(r1)
    lfd f3, lbl_804A1748
    lfd f0, 0x10(r1)
    stw r0, 0xc(r1)
    fsubs f4, f0, f5
    stw r4, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f1, f3
    stw r5, 0xc(r1)
    fsubs f0, f0, f5
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fdivs f2, f2, f0
    lfd f0, 0x10(r1)
    fmuls f31, f4, f2
    fsubs f1, f1, f5
    fsubs f0, f0, f3
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r4, r3, r25
    stw r24, 0xc(r1)
    lfd f2, lbl_804A1740
    rlwinm. r0, r26, 0, 25, 25
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    stw r4, 0x14(r1)
    fmuls f1, f1, f31
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fsubs f2, f1, f0
    bne lbl_801B1B4C
    fctiwz f0, f2
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    b lbl_801B1B84
lbl_801B1B4C:
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0xc(r1)
    clrlwi. r3, r3, 31
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fsubs f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    bne lbl_801B1B84
    fctiwz f0, f2
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
lbl_801B1B84:
    clrlwi r0, r0, 16
    li r4, 0x1
    mullw r0, r29, r0
    add r3, r28, r0
    b lbl_801B1BB4
lbl_801B1B98:
    and. r0, r31, r4
    beq lbl_801B1BAC
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r27)
lbl_801B1BAC:
    clrlslwi r4, r4, 17, 1
    addi r27, r27, 0x1
lbl_801B1BB4:
    cmpw r4, r30
    ble lbl_801B1B98
lbl_801B1BBC:
    opword 0xE3E10058
    addi r11, r1, 0x50
    lfd f31, 0x50(r1)
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801B1BDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B1BDC() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    addi r11, r1, 0x50
    bl _savegpr_24
    lis r7, lbl_803604D0@ha
    lbz r31, 0x3(r3)
    addi r7, r7, lbl_803604D0@l
    lis r0, 0x4330
    lbzx r29, r7, r31
    lis r7, lbl_803605D0@ha
    addi r7, r7, lbl_803605D0@l
    stw r0, 0x8(r1)
    cmpwi r29, 0x0
    lbzx r30, r7, r31
    stw r0, 0x10(r1)
    mr r27, r4
    mr r24, r5
    beq lbl_801B1F08
    lhz r8, 0x8(r3)
    addi r28, r3, 0x20
    cmplwi r8, 0x1
    bgt lbl_801B1C48
    li r0, 0x0
    b lbl_801B1ECC
lbl_801B1C48:
    lbz r26, 0x4(r3)
    rlwinm. r7, r26, 0, 26, 26
    bne lbl_801B1D08
    lbz r0, 0x5(r3)
    cmplwi r0, 0x1
    bgt lbl_801B1D08
    rlwinm. r0, r26, 0, 24, 24
    bne lbl_801B1C84
    subi r0, r8, 0x1
    cmplw r5, r0
    blt lbl_801B1C7C
    clrlwi r0, r0, 16
    b lbl_801B1ECC
lbl_801B1C7C:
    clrlwi r0, r5, 16
    b lbl_801B1ECC
lbl_801B1C84:
    cmplwi r6, 0x1
    bne lbl_801B1C98
    subi r0, r8, 0x1
    clrlwi r0, r0, 16
    b lbl_801B1ECC
lbl_801B1C98:
    stw r5, 0xc(r1)
    subi r0, r8, 0x1
    xoris r3, r0, 0x8000
    lfd f5, lbl_804A1740
    lfd f0, 0x8(r1)
    subi r0, r6, 0x1
    stw r3, 0x14(r1)
    fsubs f4, f0, f5
    lfd f3, lbl_804A1748
    stw r0, 0xc(r1)
    lfd f1, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f1, f3
    stw r3, 0x14(r1)
    fsubs f1, f0, f5
    lfd f0, 0x10(r1)
    fdivs f1, f2, f1
    fmuls f1, f4, f1
    fsubs f0, f0, f3
    fcmpo cr0, f1, f0
    ble lbl_801B1CF8
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
lbl_801B1CF8:
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    b lbl_801B1ECC
lbl_801B1D08:
    rlwinm. r0, r26, 0, 24, 24
    bne lbl_801B1DB0
    subi r6, r8, 0x1
    rlwinm. r0, r26, 0, 25, 25
    divwu r4, r5, r6
    bne lbl_801B1D4C
    cmpwi r7, 0x0
    bne lbl_801B1D3C
    lbz r0, 0x5(r3)
    cmplw r4, r0
    blt lbl_801B1D3C
    clrlwi r0, r6, 16
    b lbl_801B1ECC
lbl_801B1D3C:
    mullw r0, r4, r6
    subf r0, r0, r5
    clrlwi r0, r0, 16
    b lbl_801B1ECC
lbl_801B1D4C:
    cmpwi r7, 0x0
    bne lbl_801B1D84
    lbz r0, 0x5(r3)
    cmplw r4, r0
    blt lbl_801B1D84
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_801B1D7C
    li r0, 0x0
    b lbl_801B1ECC
lbl_801B1D7C:
    clrlwi r0, r6, 16
    b lbl_801B1ECC
lbl_801B1D84:
    clrlwi. r0, r4, 31
    bne lbl_801B1D9C
    mullw r0, r4, r6
    subf r0, r0, r5
    clrlwi r0, r0, 16
    b lbl_801B1ECC
lbl_801B1D9C:
    addi r0, r4, 0x1
    mullw r0, r6, r0
    subf r0, r5, r0
    clrlwi r0, r0, 16
    b lbl_801B1ECC
lbl_801B1DB0:
    subi r4, r6, 0x1
    cmplw r5, r4
    blt lbl_801B1DF0
    rlwinm. r0, r26, 0, 25, 25
    beq lbl_801B1DDC
    lbz r0, 0x5(r3)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    beq lbl_801B1DE8
lbl_801B1DDC:
    subi r0, r8, 0x1
    clrlwi r0, r0, 16
    b lbl_801B1ECC
lbl_801B1DE8:
    li r0, 0x0
    b lbl_801B1ECC
lbl_801B1DF0:
    lbz r3, 0x5(r3)
    subi r25, r8, 0x1
    xoris r0, r25, 0x8000
    lfd f5, lbl_804A1740
    stw r3, 0x14(r1)
    lfd f3, lbl_804A1748
    lfd f0, 0x10(r1)
    stw r0, 0xc(r1)
    fsubs f4, f0, f5
    stw r4, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f1, f3
    stw r5, 0xc(r1)
    fsubs f0, f0, f5
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fdivs f2, f2, f0
    lfd f0, 0x10(r1)
    fmuls f31, f4, f2
    fsubs f1, f1, f5
    fsubs f0, f0, f3
    fmuls f1, f1, f31
    fdivs f1, f1, f0
    bl __cvt_fp2unsigned
    mullw r4, r3, r25
    stw r24, 0xc(r1)
    lfd f2, lbl_804A1740
    rlwinm. r0, r26, 0, 25, 25
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    stw r4, 0x14(r1)
    fmuls f1, f1, f31
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fsubs f2, f1, f0
    bne lbl_801B1E94
    fctiwz f0, f2
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    b lbl_801B1ECC
lbl_801B1E94:
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1748
    stw r0, 0xc(r1)
    clrlwi. r3, r3, 31
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fsubs f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    bne lbl_801B1ECC
    fctiwz f0, f2
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
lbl_801B1ECC:
    clrlwi r0, r0, 16
    li r4, 0x1
    mullw r0, r29, r0
    slwi r0, r0, 2
    add r3, r28, r0
    b lbl_801B1F00
lbl_801B1EE4:
    and. r0, r31, r4
    beq lbl_801B1EF8
    lfs f0, 0x0(r3)
    addi r3, r3, 0x4
    stfs f0, 0x0(r27)
lbl_801B1EF8:
    clrlslwi r4, r4, 17, 1
    addi r27, r27, 0x4
lbl_801B1F00:
    cmpw r4, r30
    ble lbl_801B1EE4
lbl_801B1F08:
    opword 0xE3E10058
    addi r11, r1, 0x50
    lfd f31, 0x50(r1)
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801B1F28
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B1F28() {
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r0, 0xc(r1)
    lfs f0, lbl_804A1770
    lfs f1, 0xc(r1)
    lwz r0, 0x8(r3)
    fcmpo cr0, f1, f0
    stw r5, 0x8(r1)
    stw r0, 0x10(r1)
    blt lbl_801B1F60
    lfs f0, lbl_804A1774
    fcmpo cr0, f1, f0
    ble lbl_801B1F68
lbl_801B1F60:
    li r3, 0x3
    b lbl_801B2038
lbl_801B1F68:
    clrlwi. r0, r4, 31
    beq lbl_801B1F84
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B1F84
    li r3, 0x3
    b lbl_801B2038
lbl_801B1F84:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801B1FA4
    lfs f1, 0xc(r1)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B1FA4
    li r3, 0x3
    b lbl_801B2038
lbl_801B1FA4:
    lfs f0, 0x8(r1)
    lfs f2, lbl_804A1770
    fcmpo cr0, f0, f2
    blt lbl_801B1FC0
    lfs f1, lbl_804A1774
    fcmpo cr0, f0, f1
    ble lbl_801B1FC8
lbl_801B1FC0:
    li r3, 0x3
    b lbl_801B2038
lbl_801B1FC8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f2
    blt lbl_801B1FDC
    fcmpo cr0, f0, f1
    ble lbl_801B1FE4
lbl_801B1FDC:
    li r3, 0x3
    b lbl_801B2038
lbl_801B1FE4:
    opword 0xE0410008
    opword 0x104200B2
    opword 0x1000103A
    opword 0x10001094
    fcmpo cr0, f0, f1
    ble lbl_801B2004
    li r3, 0x3
    b lbl_801B2038
lbl_801B2004:
    fcmpu cr0, f1, f0
    bne lbl_801B2014
    li r3, 0x1
    b lbl_801B2038
lbl_801B2014:
    cmpwi r4, 0x0
    beq lbl_801B2034
    lfs f1, lbl_804A1778
    lfs f0, 0xc(r1)
    fcmpu cr0, f1, f0
    bne lbl_801B2034
    li r3, 0x1
    b lbl_801B2038
lbl_801B2034:
    li r3, 0x2
lbl_801B2038:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B2040
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B2040() {
    nofralloc
    stwu r1, -0x20(r1)
    li r5, 0x0
    lwz r0, 0x0(r3)
    lwz r4, 0x4(r3)
    stw r0, 0x8(r1)
    lfs f1, lbl_804A1770
    lfs f2, 0x8(r1)
    lwz r0, 0x8(r3)
    fcmpo cr0, f2, f1
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    blt lbl_801B207C
    lfs f0, lbl_804A1774
    fcmpo cr0, f2, f0
    ble lbl_801B2084
lbl_801B207C:
    li r3, 0x3
    b lbl_801B2118
lbl_801B2084:
    fcmpu cr0, f0, f2
    beq lbl_801B2094
    fcmpu cr0, f1, f2
    bne lbl_801B2098
lbl_801B2094:
    li r5, 0x1
lbl_801B2098:
    lfs f2, 0xc(r1)
    lfs f1, lbl_804A1770
    fcmpo cr0, f2, f1
    blt lbl_801B20B4
    lfs f0, lbl_804A1774
    fcmpo cr0, f2, f0
    ble lbl_801B20BC
lbl_801B20B4:
    li r3, 0x3
    b lbl_801B2118
lbl_801B20BC:
    fcmpu cr0, f0, f2
    beq lbl_801B20CC
    fcmpu cr0, f1, f2
    bne lbl_801B20D0
lbl_801B20CC:
    li r5, 0x1
lbl_801B20D0:
    lfs f2, 0x10(r1)
    lfs f1, lbl_804A1770
    fcmpo cr0, f2, f1
    blt lbl_801B20EC
    lfs f0, lbl_804A1774
    fcmpo cr0, f2, f0
    ble lbl_801B20F4
lbl_801B20EC:
    li r3, 0x3
    b lbl_801B2118
lbl_801B20F4:
    cmpwi r5, 0x0
    bne lbl_801B210C
    fcmpu cr0, f0, f2
    beq lbl_801B210C
    fcmpu cr0, f1, f2
    bne lbl_801B2114
lbl_801B210C:
    li r3, 0x1
    b lbl_801B2118
lbl_801B2114:
    li r3, 0x2
lbl_801B2118:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B2120
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B2120() {
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x4(r3)
    lwz r4, 0x0(r3)
    stw r0, 0xc(r1)
    lfs f3, lbl_804A1770
    lfs f4, 0xc(r1)
    lwz r0, 0x8(r3)
    fcmpo cr0, f4, f3
    stw r4, 0x8(r1)
    stw r0, 0x10(r1)
    blt lbl_801B2158
    lfs f2, lbl_804A1774
    fcmpo cr0, f4, f2
    ble lbl_801B2160
lbl_801B2158:
    li r3, 0x3
    b lbl_801B21E0
lbl_801B2160:
    lfs f1, 0x8(r1)
    fcmpo cr0, f1, f3
    blt lbl_801B2174
    fcmpo cr0, f1, f2
    ble lbl_801B217C
lbl_801B2174:
    li r3, 0x3
    b lbl_801B21E0
lbl_801B217C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f3
    blt lbl_801B2190
    fcmpo cr0, f0, f2
    ble lbl_801B2198
lbl_801B2190:
    li r3, 0x3
    b lbl_801B21E0
lbl_801B2198:
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f0, f1, f0
    fcmpo cr0, f0, f2
    ble lbl_801B21B4
    li r3, 0x3
    b lbl_801B21E0
lbl_801B21B4:
    fcmpu cr0, f2, f0
    bne lbl_801B21C4
    li r3, 0x1
    b lbl_801B21E0
lbl_801B21C4:
    fcmpu cr0, f3, f4
    beq lbl_801B21D4
    fcmpu cr0, f2, f4
    bne lbl_801B21DC
lbl_801B21D4:
    li r3, 0x1
    b lbl_801B21E0
lbl_801B21DC:
    li r3, 0x2
lbl_801B21E0:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B21E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B21E8() {
    nofralloc
    cmpwi r4, 0x1
    stwu r1, -0x20(r1)
    beq lbl_801B222C
    bge lbl_801B2204
    cmpwi r4, 0x0
    bge lbl_801B2210
    b lbl_801B2268
lbl_801B2204:
    cmpwi r4, 0x3
    bge lbl_801B2268
    b lbl_801B224C
lbl_801B2210:
    lfs f2, 0x0(r3)
    lfs f1, 0x4(r3)
    lfs f0, 0x8(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_801B2268
lbl_801B222C:
    lfs f0, 0x4(r3)
    lfs f2, 0x0(r3)
    fneg f0, f0
    lfs f1, 0x8(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_801B2268
lbl_801B224C:
    lfs f0, 0x4(r3)
    lfs f1, 0x0(r3)
    fneg f2, f0
    lfs f0, 0x8(r3)
    stfs f1, 0xc(r1)
    stfs f2, 0x8(r1)
    stfs f0, 0x10(r1)
lbl_801B2268:
    lfs f1, 0xc(r1)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B2280
    li r3, 0x3
    b lbl_801B22EC
lbl_801B2280:
    bge lbl_801B228C
    li r3, 0x3
    b lbl_801B22EC
lbl_801B228C:
    lfs f3, 0x8(r1)
    lfs f1, lbl_804A1770
    fcmpo cr0, f3, f1
    blt lbl_801B22A8
    lfs f2, lbl_804A1774
    fcmpo cr0, f3, f2
    ble lbl_801B22B0
lbl_801B22A8:
    li r3, 0x4
    b lbl_801B22EC
lbl_801B22B0:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f1
    blt lbl_801B22C4
    fcmpo cr0, f0, f2
    ble lbl_801B22CC
lbl_801B22C4:
    li r3, 0x4
    b lbl_801B22EC
lbl_801B22CC:
    fmuls f1, f3, f3
    fmuls f0, f0, f0
    fadds f0, f1, f0
    fcmpo cr0, f0, f2
    ble lbl_801B22E8
    li r3, 0x4
    b lbl_801B22EC
lbl_801B22E8:
    li r3, 0x1
lbl_801B22EC:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B22F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B22F4() {
    nofralloc
    cmpwi r4, 0x1
    stwu r1, -0x20(r1)
    beq lbl_801B2338
    bge lbl_801B2310
    cmpwi r4, 0x0
    bge lbl_801B231C
    b lbl_801B2374
lbl_801B2310:
    cmpwi r4, 0x3
    bge lbl_801B2374
    b lbl_801B2358
lbl_801B231C:
    lfs f2, 0x0(r3)
    lfs f1, 0x4(r3)
    lfs f0, 0x8(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_801B2374
lbl_801B2338:
    lfs f0, 0x4(r3)
    lfs f2, 0x0(r3)
    fneg f0, f0
    lfs f1, 0x8(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_801B2374
lbl_801B2358:
    lfs f0, 0x4(r3)
    lfs f1, 0x0(r3)
    fneg f2, f0
    lfs f0, 0x8(r3)
    stfs f1, 0xc(r1)
    stfs f2, 0x8(r1)
    stfs f0, 0x10(r1)
lbl_801B2374:
    lfs f1, 0xc(r1)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B238C
    li r3, 0x3
    b lbl_801B23DC
lbl_801B238C:
    bge lbl_801B2398
    li r3, 0x3
    b lbl_801B23DC
lbl_801B2398:
    lfs f0, 0x8(r1)
    lfs f2, lbl_804A1770
    fcmpo cr0, f0, f2
    blt lbl_801B23B4
    lfs f1, lbl_804A1774
    fcmpo cr0, f0, f1
    ble lbl_801B23BC
lbl_801B23B4:
    li r3, 0x4
    b lbl_801B23DC
lbl_801B23BC:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f2
    blt lbl_801B23D0
    fcmpo cr0, f0, f1
    ble lbl_801B23D8
lbl_801B23D0:
    li r3, 0x4
    b lbl_801B23DC
lbl_801B23D8:
    li r3, 0x1
lbl_801B23DC:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B23E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B23E4() {
    nofralloc
    cmpwi r4, 0x1
    stwu r1, -0x20(r1)
    beq lbl_801B2428
    bge lbl_801B2400
    cmpwi r4, 0x0
    bge lbl_801B240C
    b lbl_801B2464
lbl_801B2400:
    cmpwi r4, 0x3
    bge lbl_801B2464
    b lbl_801B2448
lbl_801B240C:
    lfs f2, 0x0(r3)
    lfs f1, 0x4(r3)
    lfs f0, 0x8(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_801B2464
lbl_801B2428:
    lfs f0, 0x4(r3)
    lfs f2, 0x0(r3)
    fneg f0, f0
    lfs f1, 0x8(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_801B2464
lbl_801B2448:
    lfs f0, 0x4(r3)
    lfs f1, 0x0(r3)
    fneg f2, f0
    lfs f0, 0x8(r3)
    stfs f1, 0xc(r1)
    stfs f2, 0x8(r1)
    stfs f0, 0x10(r1)
lbl_801B2464:
    lfs f1, 0xc(r1)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B247C
    li r3, 0x2
    b lbl_801B248C
lbl_801B247C:
    bge lbl_801B2488
    li r3, 0x3
    b lbl_801B248C
lbl_801B2488:
    li r3, 0x1
lbl_801B248C:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B2494
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B2494() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    lbz r0, 0x2a(r4)
    cmpwi r0, 0x1
    beq lbl_801B263C
    bge lbl_801B24C4
    cmpwi r0, 0x0
    bge lbl_801B24D0
    b lbl_801B2914
lbl_801B24C4:
    cmpwi r0, 0x3
    bge lbl_801B2914
    b lbl_801B27A8
lbl_801B24D0:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B24FC
    lfs f1, 0x4(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B24FC
    lfs f1, lbl_804A177C
    b lbl_801B2918
lbl_801B24FC:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B2598
    lfs f0, 0x4(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    bge lbl_801B2598
    fneg f1, f1
    lfs f0, 0x4(r7)
    lhz r0, 0x2c(r4)
    opword 0xE0660000
    fdivs f31, f1, f0
    opword 0xE0250000
    rlwinm. r0, r0, 0, 30, 30
    opword 0x10011828
    opword 0xE0258008
    opword 0x10001FDC
    opword 0xE0668008
    opword 0xF0090000
    opword 0x10011828
    opword 0x10001FDC
    opword 0xF0098008
    beq lbl_801B2584
    lfs f0, 0x4(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r8)
    lfs f0, 0x4(r7)
    fmuls f0, f0, f1
    stfs f0, 0x4(r7)
    lfs f0, 0x4(r9)
    fadds f0, f0, f2
    stfs f0, 0x4(r9)
lbl_801B2584:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2918
lbl_801B2598:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B2634
    lfs f0, 0x4(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    ble lbl_801B2634
    fneg f1, f1
    lfs f0, 0x4(r7)
    lhz r0, 0x2c(r4)
    opword 0xE0660000
    fdivs f31, f1, f0
    opword 0xE0250000
    rlwinm. r0, r0, 0, 30, 30
    opword 0x10011828
    opword 0xE0258008
    opword 0x10001FDC
    opword 0xE0668008
    opword 0xF0090000
    opword 0x10011828
    opword 0x10001FDC
    opword 0xF0098008
    beq lbl_801B2620
    lfs f0, 0x4(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r8)
    lfs f0, 0x4(r7)
    fmuls f0, f0, f1
    stfs f0, 0x4(r7)
    lfs f0, 0x4(r9)
    fsubs f0, f0, f2
    stfs f0, 0x4(r9)
lbl_801B2620:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2918
lbl_801B2634:
    lfs f1, lbl_804A177C
    b lbl_801B2918
lbl_801B263C:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2668
    lfs f1, 0x8(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2668
    lfs f1, lbl_804A177C
    b lbl_801B2918
lbl_801B2668:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B2704
    lfs f0, 0x8(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    bge lbl_801B2704
    fneg f1, f1
    lfs f0, 0x8(r7)
    lhz r0, 0x2c(r4)
    opword 0xE0660000
    fdivs f31, f1, f0
    opword 0xE0250000
    rlwinm. r0, r0, 0, 30, 30
    opword 0x10011828
    opword 0xE0258008
    opword 0x10001FDC
    opword 0xE0668008
    opword 0xF0090000
    opword 0x10011828
    opword 0x10001FDC
    opword 0xF0098008
    beq lbl_801B26F0
    lfs f0, 0x8(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x8(r8)
    lfs f0, 0x8(r7)
    fmuls f0, f0, f1
    stfs f0, 0x8(r7)
    lfs f0, 0x8(r9)
    fadds f0, f0, f2
    stfs f0, 0x8(r9)
lbl_801B26F0:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2918
lbl_801B2704:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B27A0
    lfs f0, 0x8(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    ble lbl_801B27A0
    fneg f1, f1
    lfs f0, 0x8(r7)
    lhz r0, 0x2c(r4)
    opword 0xE0660000
    fdivs f31, f1, f0
    opword 0xE0250000
    rlwinm. r0, r0, 0, 30, 30
    opword 0x10011828
    opword 0xE0258008
    opword 0x10001FDC
    opword 0xE0668008
    opword 0xF0090000
    opword 0x10011828
    opword 0x10001FDC
    opword 0xF0098008
    beq lbl_801B278C
    lfs f0, 0x8(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x8(r8)
    lfs f0, 0x8(r7)
    fmuls f0, f0, f1
    stfs f0, 0x8(r7)
    lfs f0, 0x8(r9)
    fsubs f0, f0, f2
    stfs f0, 0x8(r9)
lbl_801B278C:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2918
lbl_801B27A0:
    lfs f1, lbl_804A177C
    b lbl_801B2918
lbl_801B27A8:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B27D4
    lfs f1, 0x0(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B27D4
    lfs f1, lbl_804A177C
    b lbl_801B2918
lbl_801B27D4:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B2870
    lfs f0, 0x0(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    bge lbl_801B2870
    fneg f1, f1
    lfs f0, 0x0(r7)
    lhz r0, 0x2c(r4)
    opword 0xE0660000
    fdivs f31, f1, f0
    opword 0xE0250000
    rlwinm. r0, r0, 0, 30, 30
    opword 0x10011828
    opword 0xE0258008
    opword 0x10001FDC
    opword 0xE0668008
    opword 0xF0090000
    opword 0x10011828
    opword 0x10001FDC
    opword 0xF0098008
    beq lbl_801B285C
    lfs f0, 0x0(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x0(r8)
    lfs f0, 0x0(r7)
    fmuls f0, f0, f1
    stfs f0, 0x0(r7)
    lfs f0, 0x0(r9)
    fadds f0, f0, f2
    stfs f0, 0x0(r9)
lbl_801B285C:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2918
lbl_801B2870:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B290C
    lfs f0, 0x0(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    ble lbl_801B290C
    fneg f1, f1
    lfs f0, 0x0(r7)
    lhz r0, 0x2c(r4)
    opword 0xE0660000
    fdivs f31, f1, f0
    opword 0xE0250000
    rlwinm. r0, r0, 0, 30, 30
    opword 0x10011828
    opword 0xE0258008
    opword 0x10001FDC
    opword 0xE0668008
    opword 0xF0090000
    opword 0x10011828
    opword 0x10001FDC
    opword 0xF0098008
    beq lbl_801B28F8
    lfs f0, 0x0(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x0(r8)
    lfs f0, 0x0(r7)
    fmuls f0, f0, f1
    stfs f0, 0x0(r7)
    lfs f0, 0x0(r9)
    fsubs f0, f0, f2
    stfs f0, 0x0(r9)
lbl_801B28F8:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2918
lbl_801B290C:
    lfs f1, lbl_804A177C
    b lbl_801B2918
lbl_801B2914:
    lfs f1, lbl_804A177C
lbl_801B2918:
    opword 0xE3E10018
    lwz r0, 0x24(r1)
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B2930
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B2930() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    lbz r0, 0x2a(r4)
    cmpwi r0, 0x1
    beq lbl_801B2B30
    bge lbl_801B2960
    cmpwi r0, 0x0
    bge lbl_801B296C
    b lbl_801B2EB8
lbl_801B2960:
    cmpwi r0, 0x3
    bge lbl_801B2EB8
    b lbl_801B2CF4
lbl_801B296C:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2998
    lfs f1, 0x4(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2998
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2998:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B2A60
    lfs f0, 0x4(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    bge lbl_801B2A60
    fneg f1, f1
    lfs f0, 0x4(r7)
    opword 0xE0860000
    opword 0xE0650000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1784
    opword 0x10232028
    opword 0xE0658008
    opword 0x102127DC
    opword 0xE0868008
    opword 0xF0290000
    opword 0x10232028
    lfs f3, 0x0(r9)
    opword 0x102127DC
    fabs f3, f3
    opword 0xF0298008
    fcmpo cr0, f3, f0
    bge lbl_801B2A58
    lfs f1, 0x8(r9)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2A58
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B2A44
    lfs f0, 0x4(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r8)
    lfs f0, 0x4(r7)
    fmuls f0, f0, f1
    stfs f0, 0x4(r7)
    lfs f0, 0x4(r9)
    fadds f0, f0, f2
    stfs f0, 0x4(r9)
lbl_801B2A44:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2EBC
lbl_801B2A58:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2A60:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B2B28
    lfs f0, 0x4(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    ble lbl_801B2B28
    fneg f1, f1
    lfs f0, 0x4(r7)
    opword 0xE0860000
    opword 0xE0650000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1784
    opword 0x10232028
    opword 0xE0658008
    opword 0x102127DC
    opword 0xE0868008
    opword 0xF0290000
    opword 0x10232028
    lfs f3, 0x0(r9)
    opword 0x102127DC
    fabs f3, f3
    opword 0xF0298008
    fcmpo cr0, f3, f0
    bge lbl_801B2B20
    lfs f1, 0x8(r9)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2B20
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B2B0C
    lfs f0, 0x4(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r8)
    lfs f0, 0x4(r7)
    fmuls f0, f0, f1
    stfs f0, 0x4(r7)
    lfs f0, 0x4(r9)
    fsubs f0, f0, f2
    stfs f0, 0x4(r9)
lbl_801B2B0C:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2EBC
lbl_801B2B20:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2B28:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2B30:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2B5C
    lfs f1, 0x8(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2B5C
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2B5C:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B2C24
    lfs f0, 0x8(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    bge lbl_801B2C24
    fneg f1, f1
    lfs f0, 0x8(r7)
    opword 0xE0860000
    opword 0xE0650000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1784
    opword 0x10232028
    opword 0xE0658008
    opword 0x102127DC
    opword 0xE0868008
    opword 0xF0290000
    opword 0x10232028
    lfs f3, 0x0(r9)
    opword 0x102127DC
    fabs f3, f3
    opword 0xF0298008
    fcmpo cr0, f3, f0
    bge lbl_801B2C1C
    lfs f1, 0x4(r9)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2C1C
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B2C08
    lfs f0, 0x8(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x8(r8)
    lfs f0, 0x8(r7)
    fmuls f0, f0, f1
    stfs f0, 0x8(r7)
    lfs f0, 0x8(r9)
    fadds f0, f0, f2
    stfs f0, 0x8(r9)
lbl_801B2C08:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2EBC
lbl_801B2C1C:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2C24:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B2CEC
    lfs f0, 0x8(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    ble lbl_801B2CEC
    fneg f1, f1
    lfs f0, 0x8(r7)
    opword 0xE0860000
    opword 0xE0650000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1784
    opword 0x10232028
    opword 0xE0658008
    opword 0x102127DC
    opword 0xE0868008
    opword 0xF0290000
    opword 0x10232028
    lfs f3, 0x0(r9)
    opword 0x102127DC
    fabs f3, f3
    opword 0xF0298008
    fcmpo cr0, f3, f0
    bge lbl_801B2CE4
    lfs f1, 0x4(r9)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2CE4
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B2CD0
    lfs f0, 0x8(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x8(r8)
    lfs f0, 0x8(r7)
    fmuls f0, f0, f1
    stfs f0, 0x8(r7)
    lfs f0, 0x8(r9)
    fsubs f0, f0, f2
    stfs f0, 0x8(r9)
lbl_801B2CD0:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2EBC
lbl_801B2CE4:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2CEC:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2CF4:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2D20
    lfs f1, 0x0(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2D20
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2D20:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B2DE8
    lfs f0, 0x0(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    bge lbl_801B2DE8
    fneg f1, f1
    lfs f0, 0x0(r7)
    opword 0xE0860000
    opword 0xE0650000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1784
    opword 0x10232028
    opword 0xE0658008
    opword 0x102127DC
    opword 0xE0868008
    opword 0xF0290000
    opword 0x10232028
    lfs f3, 0x4(r9)
    opword 0x102127DC
    fabs f3, f3
    opword 0xF0298008
    fcmpo cr0, f3, f0
    bge lbl_801B2DE0
    lfs f1, 0x8(r9)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2DE0
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B2DCC
    lfs f0, 0x0(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x0(r8)
    lfs f0, 0x0(r7)
    fmuls f0, f0, f1
    stfs f0, 0x0(r7)
    lfs f0, 0x0(r9)
    fadds f0, f0, f2
    stfs f0, 0x0(r9)
lbl_801B2DCC:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2EBC
lbl_801B2DE0:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2DE8:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B2EB0
    lfs f0, 0x0(r5)
    lfs f2, lbl_804A1780
    fcmpo cr0, f0, f2
    ble lbl_801B2EB0
    fneg f1, f1
    lfs f0, 0x0(r7)
    opword 0xE0860000
    opword 0xE0650000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1784
    opword 0x10232028
    opword 0xE0658008
    opword 0x102127DC
    opword 0xE0868008
    opword 0xF0290000
    opword 0x10232028
    lfs f3, 0x4(r9)
    opword 0x102127DC
    fabs f3, f3
    opword 0xF0298008
    fcmpo cr0, f3, f0
    bge lbl_801B2EA8
    lfs f1, 0x8(r9)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2EA8
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B2E94
    lfs f0, 0x0(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x0(r8)
    lfs f0, 0x0(r7)
    fmuls f0, f0, f1
    stfs f0, 0x0(r7)
    lfs f0, 0x0(r9)
    fsubs f0, f0, f2
    stfs f0, 0x0(r9)
lbl_801B2E94:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B2EBC
lbl_801B2EA8:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2EB0:
    lfs f1, lbl_804A177C
    b lbl_801B2EBC
lbl_801B2EB8:
    lfs f1, lbl_804A177C
lbl_801B2EBC:
    opword 0xE3E10018
    lwz r0, 0x24(r1)
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B2ED4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B2ED4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    lbz r0, 0x2a(r4)
    cmpwi r0, 0x1
    beq lbl_801B30CC
    bge lbl_801B2F04
    cmpwi r0, 0x0
    bge lbl_801B2F10
    b lbl_801B3444
lbl_801B2F04:
    cmpwi r0, 0x3
    bge lbl_801B3444
    b lbl_801B3288
lbl_801B2F10:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2F3C
    lfs f1, 0x4(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2F3C
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B2F3C:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B3000
    lfs f0, 0x4(r5)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    bge lbl_801B3000
    fneg f1, f1
    lfs f0, 0x4(r7)
    opword 0xE0A60000
    opword 0xE0450000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1788
    opword 0x10822828
    opword 0xE0458008
    opword 0x10842FDC
    opword 0xE0A68008
    opword 0xF0890000
    opword 0x10822828
    lfs f1, 0x0(r9)
    opword 0x10842FDC
    fmuls f2, f1, f1
    opword 0xF0898008
    lfs f1, 0x8(r9)
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B2FF8
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B2FE4
    lfs f0, 0x4(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r8)
    lfs f0, 0x4(r7)
    fmuls f0, f0, f1
    stfs f0, 0x4(r7)
    lfs f0, 0x4(r9)
    fadds f0, f0, f3
    stfs f0, 0x4(r9)
lbl_801B2FE4:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B3448
lbl_801B2FF8:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B3000:
    lfs f1, 0x4(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B30C4
    lfs f0, 0x4(r5)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    ble lbl_801B30C4
    fneg f1, f1
    lfs f0, 0x4(r7)
    opword 0xE0A60000
    opword 0xE0450000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1788
    opword 0x10822828
    opword 0xE0458008
    opword 0x10842FDC
    opword 0xE0A68008
    opword 0xF0890000
    opword 0x10822828
    lfs f1, 0x0(r9)
    opword 0x10842FDC
    fmuls f2, f1, f1
    opword 0xF0898008
    lfs f1, 0x8(r9)
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B30BC
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B30A8
    lfs f0, 0x4(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r8)
    lfs f0, 0x4(r7)
    fmuls f0, f0, f1
    stfs f0, 0x4(r7)
    lfs f0, 0x4(r9)
    fsubs f0, f0, f3
    stfs f0, 0x4(r9)
lbl_801B30A8:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B3448
lbl_801B30BC:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B30C4:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B30CC:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B30F8
    lfs f1, 0x8(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B30F8
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B30F8:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B31BC
    lfs f0, 0x8(r5)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    bge lbl_801B31BC
    fneg f1, f1
    lfs f0, 0x8(r7)
    opword 0xE0A60000
    opword 0xE0450000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1788
    opword 0x10822828
    opword 0xE0458008
    opword 0x10842FDC
    opword 0xE0A68008
    opword 0xF0890000
    opword 0x10822828
    lfs f2, 0x0(r9)
    lfs f1, 0x4(r9)
    opword 0x10842FDC
    fmuls f2, f2, f2
    fmuls f1, f1, f1
    opword 0xF0898008
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B31B4
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B31A0
    lfs f0, 0x8(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x8(r8)
    lfs f0, 0x8(r7)
    fmuls f0, f0, f1
    stfs f0, 0x8(r7)
    lfs f0, 0x8(r9)
    fadds f0, f0, f3
    stfs f0, 0x8(r9)
lbl_801B31A0:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B3448
lbl_801B31B4:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B31BC:
    lfs f1, 0x8(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B3280
    lfs f0, 0x8(r5)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    ble lbl_801B3280
    fneg f1, f1
    lfs f0, 0x8(r7)
    opword 0xE0A60000
    opword 0xE0450000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1788
    opword 0x10822828
    opword 0xE0458008
    opword 0x10842FDC
    opword 0xE0A68008
    opword 0xF0890000
    opword 0x10822828
    lfs f2, 0x0(r9)
    lfs f1, 0x4(r9)
    opword 0x10842FDC
    fmuls f2, f2, f2
    fmuls f1, f1, f1
    opword 0xF0898008
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B3278
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B3264
    lfs f0, 0x8(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x8(r8)
    lfs f0, 0x8(r7)
    fmuls f0, f0, f1
    stfs f0, 0x8(r7)
    lfs f0, 0x8(r9)
    fsubs f0, f0, f3
    stfs f0, 0x8(r9)
lbl_801B3264:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B3448
lbl_801B3278:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B3280:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B3288:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B32B4
    lfs f1, 0x0(r5)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B32B4
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B32B4:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B3378
    lfs f0, 0x0(r5)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    bge lbl_801B3378
    fneg f1, f1
    lfs f0, 0x0(r7)
    opword 0xE0A60000
    opword 0xE0450000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1788
    opword 0x10822828
    opword 0xE0458008
    opword 0x10842FDC
    opword 0xE0A68008
    opword 0xF0890000
    opword 0x10822828
    lfs f1, 0x4(r9)
    opword 0x10842FDC
    fmuls f2, f1, f1
    opword 0xF0898008
    lfs f1, 0x8(r9)
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B3370
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B335C
    lfs f0, 0x0(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x0(r8)
    lfs f0, 0x0(r7)
    fmuls f0, f0, f1
    stfs f0, 0x0(r7)
    lfs f0, 0x0(r9)
    fadds f0, f0, f3
    stfs f0, 0x0(r9)
lbl_801B335C:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B3448
lbl_801B3370:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B3378:
    lfs f1, 0x0(r6)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B343C
    lfs f0, 0x0(r5)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    ble lbl_801B343C
    fneg f1, f1
    lfs f0, 0x0(r7)
    opword 0xE0A60000
    opword 0xE0450000
    fdivs f31, f1, f0
    lfs f0, lbl_804A1788
    opword 0x10822828
    opword 0xE0458008
    opword 0x10842FDC
    opword 0xE0A68008
    opword 0xF0890000
    opword 0x10822828
    lfs f1, 0x4(r9)
    opword 0x10842FDC
    fmuls f2, f1, f1
    opword 0xF0898008
    lfs f1, 0x8(r9)
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B3434
    lhz r0, 0x2c(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B3420
    lfs f0, 0x0(r8)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x0(r8)
    lfs f0, 0x0(r7)
    fmuls f0, f0, f1
    stfs f0, 0x0(r7)
    lfs f0, 0x0(r9)
    fsubs f0, f0, f3
    stfs f0, 0x0(r9)
lbl_801B3420:
    mr r4, r9
    mr r5, r10
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B3448
lbl_801B3434:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B343C:
    lfs f1, lbl_804A177C
    b lbl_801B3448
lbl_801B3444:
    lfs f1, lbl_804A177C
lbl_801B3448:
    opword 0xE3E10018
    lwz r0, 0x24(r1)
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B3460
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B3460() {
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
    stfd f27, 0xa0(r1)
    opword 0xF36100A8
    addi r11, r1, 0xa0
    bl _savegpr_24
    opword 0xE0260000
    mr r31, r3
    opword 0xE0670000
    mr r24, r4
    opword 0xE0E60004
    opword 0x10210072
    opword 0xE0C70004
    opword 0x106300F2
    lfs f0, 0x8(r6)
    mr r25, r5
    lfs f2, 0x8(r7)
    opword 0x13E0083A
    opword 0xE0868000
    opword 0x13C218BA
    opword 0xE0A78000
    opword 0x10E701B2
    lfs f2, lbl_804A178C
    opword 0x13DE18D4
    lfs f0, lbl_804A1774
    opword 0x10C4397A
    lfs f5, lbl_804A1778
    opword 0x13FF0854
    lfs f29, lbl_804A177C
    opword 0x138639D4
    mr r26, r6
    fmuls f1, f2, f30
    mr r27, r7
    fsubs f0, f31, f0
    mr r28, r8
    fmuls f2, f2, f28
    mr r29, r9
    fmuls f0, f1, f0
    mr r30, r10
    fmuls f1, f2, f28
    fsubs f27, f1, f0
    fcmpo cr0, f27, f5
    bge lbl_801B3538
    fmr f1, f29
    b lbl_801B3A58
lbl_801B3538:
    opword 0x4C401382
    bne lbl_801B3544
    b lbl_801B3550
lbl_801B3544:
    fmr f1, f27
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f5, f27, f1
lbl_801B3550:
    lfs f0, lbl_804A1790
    lfs f1, lbl_804A177C
    fmuls f4, f0, f28
    lfs f0, lbl_804A1778
    fmuls f2, f1, f30
    fsubs f3, f4, f5
    fadds f1, f4, f5
    fdivs f3, f3, f2
    fdivs f4, f1, f2
    fcmpo cr0, f3, f0
    ble lbl_801B35E8
    lfs f0, lbl_804A1784
    fcmpo cr0, f3, f0
    bge lbl_801B35E8
    opword 0xE05A0000
    opword 0xE0390000
    lbz r0, 0x2a(r24)
    opword 0x10011028
    opword 0xE0398008
    cmplwi r0, 0x1
    opword 0x100010DC
    opword 0xE05A8008
    opword 0xF01D0000
    opword 0x10011028
    opword 0x100010DC
    opword 0xF01D8008
    bne lbl_801B35CC
    lfs f1, 0x4(r29)
    lfs f0, lbl_804A1794
    fcmpo cr0, f1, f0
    blt lbl_801B35E8
lbl_801B35CC:
    cmplwi r0, 0x2
    bne lbl_801B35E4
    lfs f1, 0x4(r29)
    lfs f0, lbl_804A1780
    fcmpo cr0, f1, f0
    bgt lbl_801B35E8
lbl_801B35E4:
    fmr f29, f3
lbl_801B35E8:
    lfs f0, lbl_804A1778
    fcmpo cr0, f4, f0
    ble lbl_801B3680
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    bge lbl_801B3680
    fcmpo cr0, f4, f29
    bge lbl_801B3680
    opword 0xE05A0000
    opword 0xE0390000
    lbz r0, 0x2a(r24)
    opword 0x10011028
    opword 0xE0398008
    cmplwi r0, 0x1
    opword 0x1000111C
    opword 0xE05A8008
    opword 0xF0010038
    opword 0x10011028
    opword 0x1000111C
    opword 0xF0018040
    bne lbl_801B364C
    lfs f1, 0x3c(r1)
    lfs f0, lbl_804A1794
    fcmpo cr0, f1, f0
    blt lbl_801B3680
lbl_801B364C:
    cmplwi r0, 0x2
    bne lbl_801B3664
    lfs f1, 0x3c(r1)
    lfs f0, lbl_804A1780
    fcmpo cr0, f1, f0
    bgt lbl_801B3680
lbl_801B3664:
    lfs f2, 0x38(r1)
    fmr f29, f4
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
lbl_801B3680:
    lbz r3, 0x2a(r24)
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801B3878
    lfs f1, 0x4(r26)
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801B36B8
    lfs f1, 0x4(r25)
    fabs f1, f1
    fcmpo cr0, f1, f0
    blt lbl_801B3878
lbl_801B36B8:
    lfs f1, 0x4(r26)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    ble lbl_801B3798
    lfs f0, 0x4(r25)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    bge lbl_801B3798
    fneg f1, f1
    lfs f0, 0x4(r27)
    opword 0xE09A0000
    opword 0xE0590000
    fdivs f30, f1, f0
    opword 0x10022028
    opword 0xE0598008
    fcmpo cr0, f30, f29
    opword 0x1000279C
    opword 0xE09A8008
    opword 0xF001002C
    opword 0x10022028
    opword 0x1000279C
    opword 0xF0018034
    bge lbl_801B3878
    lfs f0, 0x2c(r1)
    lfs f1, 0x34(r1)
    fmuls f2, f0, f0
    lfs f0, lbl_804A1788
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B3878
    lhz r0, 0x2c(r24)
    lfs f2, 0x2c(r1)
    lfs f1, 0x30(r1)
    rlwinm. r0, r0, 0, 30, 30
    lfs f0, 0x34(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
    beq lbl_801B3780
    lfs f0, 0x4(r28)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r28)
    lfs f0, 0x4(r27)
    fmuls f0, f0, f1
    stfs f0, 0x4(r27)
    lfs f0, 0x4(r29)
    fadds f0, f0, f3
    stfs f0, 0x4(r29)
lbl_801B3780:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
    fmr f1, f30
    b lbl_801B3A58
lbl_801B3798:
    lfs f1, 0x4(r26)
    lfs f0, lbl_804A1778
    fcmpo cr0, f1, f0
    bge lbl_801B3878
    lfs f0, 0x4(r25)
    lfs f3, lbl_804A1780
    fcmpo cr0, f0, f3
    ble lbl_801B3878
    fneg f1, f1
    lfs f0, 0x4(r27)
    opword 0xE09A0000
    opword 0xE0590000
    fdivs f30, f1, f0
    opword 0x10022028
    opword 0xE0598008
    fcmpo cr0, f30, f29
    opword 0x1000279C
    opword 0xE09A8008
    opword 0xF0010020
    opword 0x10022028
    opword 0x1000279C
    opword 0xF0018028
    bge lbl_801B3878
    lfs f0, 0x20(r1)
    lfs f1, 0x28(r1)
    fmuls f2, f0, f0
    lfs f0, lbl_804A1788
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B3878
    lhz r0, 0x2c(r24)
    lfs f2, 0x20(r1)
    lfs f1, 0x24(r1)
    rlwinm. r0, r0, 0, 30, 30
    lfs f0, 0x28(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
    beq lbl_801B3860
    lfs f0, 0x4(r28)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r28)
    lfs f0, 0x4(r27)
    fmuls f0, f0, f1
    stfs f0, 0x4(r27)
    lfs f0, 0x4(r29)
    fsubs f0, f0, f3
    stfs f0, 0x4(r29)
lbl_801B3860:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
    fmr f1, f30
    b lbl_801B3A58
lbl_801B3878:
    lfs f0, lbl_804A177C
    fcmpo cr0, f29, f0
    bge lbl_801B3A54
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B3A44
    lfs f1, 0x8(r29)
    lfs f0, lbl_804A1774
    fmuls f1, f1, f1
    lfs f3, lbl_804A1778
    fsubs f28, f0, f1
    fcmpo cr0, f28, f3
    opword 0x4C401382
    bne lbl_801B38B4
    b lbl_801B38C0
lbl_801B38B4:
    fmr f1, f28
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f3, f28, f1
lbl_801B38C0:
    lfs f0, lbl_804A1780
    fcmpo cr0, f3, f0
    ble lbl_801B38E4
    lfs f0, 0x0(r29)
    lfs f1, 0x4(r29)
    fneg f0, f0
    fdivs f1, f1, f3
    fdivs f4, f0, f3
    b lbl_801B38EC
lbl_801B38E4:
    lfs f1, lbl_804A1774
    lfs f4, lbl_804A1778
lbl_801B38EC:
    stfs f1, 0x48(r1)
    addi r3, r1, 0x48
    lfs f2, lbl_804A1778
    fneg f1, f1
    lfs f0, 0x0(r29)
    mr r4, r3
    stfs f0, 0x4c(r1)
    lfs f0, 0x8(r29)
    fmuls f0, f0, f4
    stfs f2, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f0, 0x50(r1)
    lfs f0, 0x4(r29)
    stfs f0, 0x5c(r1)
    lfs f0, 0x8(r29)
    fmuls f0, f1, f0
    stfs f2, 0x64(r1)
    stfs f2, 0x68(r1)
    stfs f0, 0x60(r1)
    lfs f0, 0x8(r29)
    stfs f0, 0x6c(r1)
    stfs f3, 0x70(r1)
    stfs f2, 0x74(r1)
    bl PSMTXInverse
    mr r4, r27
    addi r3, r1, 0x48
    addi r5, r1, 0x14
    bl fn_8030D7E0
    lfs f0, 0x18(r1)
    mr r4, r28
    opword 0xE05D0000
    addi r3, r1, 0x48
    opword 0xE07B0000
    addi r5, r1, 0x14
    opword 0x10220018
    opword 0xE05D8008
    opword 0xF0210008
    opword 0x10220018
    opword 0xE0010008
    opword 0xF0218010
    opword 0x10430028
    opword 0xE07B8008
    opword 0xF05B0000
    opword 0x10430828
    opword 0xE07B0000
    opword 0x10030028
    opword 0xF01B0000
    opword 0x10020828
    opword 0xF01B8008
    bl fn_8030D7E0
    lfs f1, 0x18(r1)
    opword 0xE07D0000
    lfs f0, lbl_804A1774
    opword 0x10430058
    opword 0xE09C0000
    opword 0xE07D8008
    fcmpo cr0, f31, f0
    opword 0xF0410008
    opword 0x10430058
    opword 0xE0010008
    opword 0xF0418010
    opword 0x10240028
    opword 0xE09C8008
    opword 0xF03C0000
    opword 0x10241028
    opword 0xE07C0000
    opword 0x10030028
    opword 0xF01C0000
    opword 0x10011028
    opword 0xF01C8008
    ble lbl_801B3A28
    lfs f0, lbl_804A1798
    opword 0xE05D0000
    opword 0x10220018
    opword 0xE05D8008
    opword 0xF03D0000
    opword 0x10220018
    opword 0xF03D8008
    b lbl_801B3A44
lbl_801B3A28:
    lfs f0, lbl_804A179C
    opword 0xE05D0000
    opword 0x10220018
    opword 0xE05D8008
    opword 0xF03D0000
    opword 0x10220018
    opword 0xF03D8008
lbl_801B3A44:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
lbl_801B3A54:
    fmr f1, f29
lbl_801B3A58:
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    lfd f30, 0xd0(r1)
    opword 0xE3A100C8
    lfd f29, 0xc0(r1)
    opword 0xE38100B8
    lfd f28, 0xb0(r1)
    opword 0xE36100A8
    addi r11, r1, 0xa0
    lfd f27, 0xa0(r1)
    bl _restgpr_24
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B3A98
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B3A98() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    stfd f27, 0x70(r1)
    opword 0xF3610078
    addi r11, r1, 0x70
    bl _savegpr_24
    lfs f3, 0x0(r6)
    mr r31, r3
    lfs f0, 0x0(r7)
    mr r24, r4
    lfs f7, 0x8(r6)
    fmuls f8, f3, f3
    lfs f1, 0x8(r7)
    fmuls f6, f0, f0
    fmuls f5, f7, f7
    lfs f2, lbl_804A178C
    fmuls f4, f1, f1
    fmuls f3, f3, f0
    lfs f0, lbl_804A1774
    fadds f29, f8, f5
    fmuls f1, f7, f1
    lfs f5, lbl_804A1778
    fadds f31, f6, f4
    fsubs f0, f29, f0
    lfs f30, lbl_804A177C
    fadds f28, f3, f1
    fmuls f1, f2, f31
    mr r25, r5
    mr r26, r6
    fmuls f2, f2, f28
    mr r27, r7
    fmuls f0, f1, f0
    mr r28, r8
    mr r29, r9
    fmuls f1, f2, f28
    mr r30, r10
    fsubs f27, f1, f0
    fcmpo cr0, f27, f5
    bge lbl_801B3B60
    fmr f1, f30
    b lbl_801B422C
lbl_801B3B60:
    opword 0x4C401382
    bne lbl_801B3B6C
    b lbl_801B3B78
lbl_801B3B6C:
    fmr f1, f27
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f5, f27, f1
lbl_801B3B78:
    lfs f0, lbl_804A1790
    lfs f1, lbl_804A177C
    fmuls f4, f0, f28
    lfs f0, lbl_804A1778
    fmuls f2, f1, f31
    fsubs f3, f4, f5
    fadds f1, f4, f5
    fdivs f4, f3, f2
    fdivs f5, f1, f2
    fcmpo cr0, f4, f0
    ble lbl_801B3BEC
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    bge lbl_801B3BEC
    opword 0xE07A0000
    opword 0xE0590000
    opword 0x10221828
    opword 0xE0598008
    opword 0x1021191C
    opword 0xE07A8008
    opword 0xF03D0000
    opword 0x10221828
    lfs f2, 0x4(r29)
    opword 0x1021191C
    fabs f2, f2
    opword 0xF03D8008
    fcmpo cr0, f2, f0
    bge lbl_801B3BEC
    fmr f30, f4
lbl_801B3BEC:
    lfs f0, lbl_804A1778
    fcmpo cr0, f5, f0
    ble lbl_801B3C60
    lfs f0, lbl_804A1784
    fcmpo cr0, f5, f0
    bge lbl_801B3C60
    fcmpo cr0, f5, f30
    bge lbl_801B3C60
    opword 0xE07A0000
    opword 0xE0590000
    opword 0x10221828
    opword 0xE0598008
    opword 0x1021195C
    opword 0xE07A8008
    opword 0xF0210044
    opword 0x10221828
    lfs f2, 0x48(r1)
    opword 0x1021195C
    fabs f2, f2
    opword 0xF021804C
    fcmpo cr0, f2, f0
    bge lbl_801B3C60
    lfs f2, 0x44(r1)
    fmr f30, f5
    lfs f1, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
lbl_801B3C60:
    lfs f4, lbl_804A1774
    lfs f0, 0x4(r26)
    lfs f1, lbl_804A1780
    fsubs f0, f0, f4
    fabs f0, f0
    fcmpo cr0, f0, f1
    bge lbl_801B3C90
    lfs f0, 0x4(r25)
    fsubs f0, f0, f4
    fabs f0, f0
    fcmpo cr0, f0, f1
    blt lbl_801B3E50
lbl_801B3C90:
    lfs f2, 0x4(r26)
    fcmpo cr0, f2, f4
    ble lbl_801B3D70
    lfs f3, lbl_804A1780
    lfs f1, 0x4(r25)
    fadds f0, f3, f4
    fcmpo cr0, f1, f0
    bge lbl_801B3D70
    fsubs f1, f4, f2
    lfs f0, 0x4(r27)
    opword 0xE09A0000
    opword 0xE0590000
    fdivs f31, f1, f0
    opword 0x10022028
    opword 0xE0598008
    fcmpo cr0, f31, f30
    opword 0x100027DC
    opword 0xE09A8008
    opword 0xF0010038
    opword 0x10022028
    opword 0x100027DC
    opword 0xF0018040
    bge lbl_801B3E50
    lfs f0, 0x38(r1)
    lfs f1, 0x40(r1)
    fmuls f2, f0, f0
    lfs f0, lbl_804A1788
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B3E50
    lhz r0, 0x2c(r24)
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    rlwinm. r0, r0, 0, 30, 30
    lfs f0, 0x40(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
    beq lbl_801B3D58
    lfs f0, 0x4(r28)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r28)
    lfs f0, 0x4(r27)
    fmuls f0, f0, f1
    stfs f0, 0x4(r27)
    lfs f0, 0x4(r29)
    fadds f0, f0, f3
    stfs f0, 0x4(r29)
lbl_801B3D58:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B422C
lbl_801B3D70:
    lfs f2, 0x4(r26)
    fcmpo cr0, f2, f4
    bge lbl_801B3E50
    lfs f3, lbl_804A1780
    lfs f1, 0x4(r25)
    fadds f0, f3, f4
    fcmpo cr0, f1, f0
    ble lbl_801B3E50
    fsubs f1, f4, f2
    lfs f0, 0x4(r27)
    opword 0xE09A0000
    opword 0xE0590000
    fdivs f31, f1, f0
    opword 0x10022028
    opword 0xE0598008
    fcmpo cr0, f31, f30
    opword 0x100027DC
    opword 0xE09A8008
    opword 0xF001002C
    opword 0x10022028
    opword 0x100027DC
    opword 0xF0018034
    bge lbl_801B3E50
    lfs f0, 0x2c(r1)
    lfs f1, 0x34(r1)
    fmuls f2, f0, f0
    lfs f0, lbl_804A1788
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B3E50
    lhz r0, 0x2c(r24)
    lfs f2, 0x2c(r1)
    lfs f1, 0x30(r1)
    rlwinm. r0, r0, 0, 30, 30
    lfs f0, 0x34(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
    beq lbl_801B3E38
    lfs f0, 0x4(r28)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r28)
    lfs f0, 0x4(r27)
    fmuls f0, f0, f1
    stfs f0, 0x4(r27)
    lfs f0, 0x4(r29)
    fsubs f0, f0, f3
    stfs f0, 0x4(r29)
lbl_801B3E38:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B422C
lbl_801B3E50:
    lfs f4, lbl_804A1770
    lfs f0, 0x4(r26)
    lfs f1, lbl_804A1780
    fsubs f0, f0, f4
    fabs f0, f0
    fcmpo cr0, f0, f1
    bge lbl_801B3E80
    lfs f0, 0x4(r25)
    fsubs f0, f0, f4
    fabs f0, f0
    fcmpo cr0, f0, f1
    blt lbl_801B4040
lbl_801B3E80:
    lfs f2, 0x4(r26)
    fcmpo cr0, f2, f4
    ble lbl_801B3F60
    lfs f3, lbl_804A1780
    lfs f1, 0x4(r25)
    fadds f0, f3, f4
    fcmpo cr0, f1, f0
    bge lbl_801B3F60
    fsubs f1, f4, f2
    lfs f0, 0x4(r27)
    opword 0xE09A0000
    opword 0xE0590000
    fdivs f31, f1, f0
    opword 0x10022028
    opword 0xE0598008
    fcmpo cr0, f31, f30
    opword 0x100027DC
    opword 0xE09A8008
    opword 0xF0010020
    opword 0x10022028
    opword 0x100027DC
    opword 0xF0018028
    bge lbl_801B4040
    lfs f0, 0x20(r1)
    lfs f1, 0x28(r1)
    fmuls f2, f0, f0
    lfs f0, lbl_804A1788
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B4040
    lhz r0, 0x2c(r24)
    lfs f2, 0x20(r1)
    lfs f1, 0x24(r1)
    rlwinm. r0, r0, 0, 30, 30
    lfs f0, 0x28(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
    beq lbl_801B3F48
    lfs f0, 0x4(r28)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r28)
    lfs f0, 0x4(r27)
    fmuls f0, f0, f1
    stfs f0, 0x4(r27)
    lfs f0, 0x4(r29)
    fadds f0, f0, f3
    stfs f0, 0x4(r29)
lbl_801B3F48:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B422C
lbl_801B3F60:
    lfs f2, 0x4(r26)
    fcmpo cr0, f2, f4
    bge lbl_801B4040
    lfs f3, lbl_804A1780
    lfs f1, 0x4(r25)
    fadds f0, f3, f4
    fcmpo cr0, f1, f0
    ble lbl_801B4040
    fsubs f1, f4, f2
    lfs f0, 0x4(r27)
    opword 0xE09A0000
    opword 0xE0590000
    fdivs f31, f1, f0
    opword 0x10022028
    opword 0xE0598008
    fcmpo cr0, f31, f30
    opword 0x100027DC
    opword 0xE09A8008
    opword 0xF0010014
    opword 0x10022028
    opword 0x100027DC
    opword 0xF001801C
    bge lbl_801B4040
    lfs f0, 0x14(r1)
    lfs f1, 0x1c(r1)
    fmuls f2, f0, f0
    lfs f0, lbl_804A1788
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_801B4040
    lhz r0, 0x2c(r24)
    lfs f2, 0x14(r1)
    lfs f1, 0x18(r1)
    rlwinm. r0, r0, 0, 30, 30
    lfs f0, 0x1c(r1)
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
    beq lbl_801B4028
    lfs f0, 0x4(r28)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r28)
    lfs f0, 0x4(r27)
    fmuls f0, f0, f1
    stfs f0, 0x4(r27)
    lfs f0, 0x4(r29)
    fsubs f0, f0, f3
    stfs f0, 0x4(r29)
lbl_801B4028:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
    fmr f1, f31
    b lbl_801B422C
lbl_801B4040:
    lfs f0, lbl_804A177C
    fcmpo cr0, f30, f0
    bge lbl_801B4228
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B4218
    lfs f0, 0x0(r27)
    lfs f1, 0x8(r27)
    fmuls f2, f0, f0
    lfs f0, lbl_804A1778
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B4080
    b lbl_801B4084
lbl_801B4080:
    bl FrSqrt__Q24nw4r4mathFf
lbl_801B4084:
    lfs f0, 0x0(r27)
    addi r3, r1, 0x8
    lfs f4, 0x0(r29)
    mr r4, r3
    lfs f2, 0x8(r27)
    lfs f1, 0x8(r29)
    fmuls f3, f0, f4
    lfs f0, lbl_804A1778
    fmuls f1, f2, f1
    stfs f4, 0x8(r1)
    stfs f0, 0xc(r1)
    fadds f27, f3, f1
    lfs f0, 0x8(r29)
    stfs f0, 0x10(r1)
    bl fn_8030DE44
    opword 0xE0410008
    lfs f0, lbl_804A1778
    opword 0x102206D8
    opword 0xE0418010
    opword 0xF0210008
    opword 0x102206D8
    opword 0xE0410008
    opword 0xF0218010
    opword 0xE03B0000
    opword 0x10611028
    opword 0xE03B8008
    opword 0xF07B0000
    opword 0x10801890
    opword 0xE0418010
    opword 0x10611028
    opword 0xF07B8008
    opword 0xE0210008
    opword 0x10240828
    opword 0xF03B0000
    opword 0xE0218010
    opword 0x10230828
    opword 0xF03B8008
    lfs f2, 0x0(r28)
    lfs f1, 0x8(r28)
    fmuls f2, f2, f2
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B413C
    b lbl_801B4140
lbl_801B413C:
    bl FrSqrt__Q24nw4r4mathFf
lbl_801B4140:
    lfs f0, 0x0(r28)
    addi r3, r1, 0x8
    lfs f4, 0x0(r29)
    mr r4, r3
    lfs f2, 0x8(r28)
    lfs f1, 0x8(r29)
    fmuls f3, f0, f4
    lfs f0, lbl_804A1778
    fmuls f1, f2, f1
    stfs f4, 0x8(r1)
    stfs f0, 0xc(r1)
    fadds f31, f3, f1
    lfs f0, 0x8(r29)
    stfs f0, 0x10(r1)
    bl fn_8030DE44
    opword 0xE0410008
    lfs f0, lbl_804A1774
    opword 0x102207D8
    opword 0xE0418010
    fcmpo cr0, f29, f0
    opword 0xF0210008
    opword 0x102207D8
    opword 0xE0410008
    opword 0xF0218010
    opword 0xE01C0000
    opword 0x10201028
    opword 0xE01C8008
    opword 0xF03C0000
    opword 0x10600890
    opword 0xE0418010
    opword 0x10201028
    opword 0xF03C8008
    opword 0xE0010008
    opword 0x10030028
    opword 0xF01C0000
    opword 0xE0018010
    opword 0x10010028
    opword 0xF01C8008
    ble lbl_801B41FC
    lfs f0, lbl_804A1798
    opword 0xE05D0000
    opword 0x10220018
    opword 0xE05D8008
    opword 0xF03D0000
    opword 0x10220018
    opword 0xF03D8008
    b lbl_801B4218
lbl_801B41FC:
    lfs f0, lbl_804A179C
    opword 0xE05D0000
    opword 0x10220018
    opword 0xE05D8008
    opword 0xF03D0000
    opword 0x10220018
    opword 0xF03D8008
lbl_801B4218:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_8030D7E0
lbl_801B4228:
    fmr f1, f30
lbl_801B422C:
    opword 0xE3E100B8
    lfd f31, 0xb0(r1)
    opword 0xE3C100A8
    lfd f30, 0xa0(r1)
    opword 0xE3A10098
    lfd f29, 0x90(r1)
    opword 0xE3810088
    lfd f28, 0x80(r1)
    opword 0xE3610078
    addi r11, r1, 0x70
    lfd f27, 0x70(r1)
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B426C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B426C() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    stfd f29, 0x70(r1)
    opword 0xF3A10078
    stfd f28, 0x60(r1)
    opword 0xF3810068
    stfd f27, 0x50(r1)
    opword 0xF3610058
    stfd f26, 0x40(r1)
    opword 0xF3410048
    stfd f25, 0x30(r1)
    opword 0xF3210038
    lfs f31, lbl_804A177C
    stw r31, 0x2c(r1)
    mr r31, r9
    lfs f1, lbl_804A1774
    fmr f30, f31
    stw r30, 0x28(r1)
    fmr f29, f31
    lfs f0, 0x0(r6)
    fmr f28, f31
    stw r29, 0x24(r1)
    fsubs f2, f1, f0
    lfs f0, lbl_804A1778
    stw r28, 0x20(r1)
    fmr f27, f31
    fmr f26, f31
    mr r28, r4
    lfs f1, 0x0(r7)
    fmr f25, f31
    mr r29, r7
    mr r30, r8
    fdivs f4, f2, f1
    fcmpo cr0, f4, f0
    ble lbl_801B437C
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    opword 0x4C401382
    bne lbl_801B437C
    opword 0xE0660000
    opword 0xE0450000
    opword 0x10221828
    opword 0xE0458008
    opword 0x1021191C
    opword 0xE0668008
    opword 0xF0210008
    opword 0x10221828
    lfs f2, 0xc(r1)
    opword 0x1021191C
    fabs f2, f2
    opword 0xF0218010
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_801B437C
    lfs f1, 0x10(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B437C
    fmr f30, f4
    fcmpo cr0, f4, f31
    bge lbl_801B437C
    fmr f31, f4
lbl_801B437C:
    lfs f2, lbl_804A1770
    lfs f0, 0x0(r6)
    lfs f1, 0x0(r7)
    fsubs f2, f2, f0
    lfs f0, lbl_804A1778
    fdivs f4, f2, f1
    fcmpo cr0, f4, f0
    ble lbl_801B440C
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    opword 0x4C401382
    bne lbl_801B440C
    opword 0xE0660000
    opword 0xE0450000
    opword 0x10221828
    opword 0xE0458008
    opword 0x1021191C
    opword 0xE0668008
    opword 0xF0210008
    opword 0x10221828
    lfs f2, 0xc(r1)
    opword 0x1021191C
    fabs f2, f2
    opword 0xF0218010
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_801B440C
    lfs f1, 0x10(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B440C
    fmr f29, f4
    fcmpo cr0, f4, f31
    bge lbl_801B440C
    fmr f31, f4
lbl_801B440C:
    lfs f2, lbl_804A1774
    lfs f0, 0x4(r6)
    lfs f1, 0x4(r7)
    fsubs f2, f2, f0
    lfs f0, lbl_804A1778
    fdivs f4, f2, f1
    fcmpo cr0, f4, f0
    ble lbl_801B449C
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    opword 0x4C401382
    bne lbl_801B449C
    opword 0xE0660000
    opword 0xE0450000
    opword 0x10221828
    opword 0xE0458008
    opword 0x1021191C
    opword 0xE0668008
    opword 0xF0210008
    opword 0x10221828
    lfs f2, 0x8(r1)
    opword 0x1021191C
    fabs f2, f2
    opword 0xF0218010
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_801B449C
    lfs f1, 0x10(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B449C
    fmr f28, f4
    fcmpo cr0, f4, f31
    bge lbl_801B449C
    fmr f31, f4
lbl_801B449C:
    lfs f2, lbl_804A1770
    lfs f0, 0x4(r6)
    lfs f1, 0x4(r7)
    fsubs f2, f2, f0
    lfs f0, lbl_804A1778
    fdivs f4, f2, f1
    fcmpo cr0, f4, f0
    ble lbl_801B452C
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    opword 0x4C401382
    bne lbl_801B452C
    opword 0xE0660000
    opword 0xE0450000
    opword 0x10221828
    opword 0xE0458008
    opword 0x1021191C
    opword 0xE0668008
    opword 0xF0210008
    opword 0x10221828
    lfs f2, 0x8(r1)
    opword 0x1021191C
    fabs f2, f2
    opword 0xF0218010
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_801B452C
    lfs f1, 0x10(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B452C
    fmr f27, f4
    fcmpo cr0, f4, f31
    bge lbl_801B452C
    fmr f31, f4
lbl_801B452C:
    lfs f2, lbl_804A1774
    lfs f0, 0x8(r6)
    lfs f1, 0x8(r7)
    fsubs f2, f2, f0
    lfs f0, lbl_804A1778
    fdivs f4, f2, f1
    fcmpo cr0, f4, f0
    ble lbl_801B45BC
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    opword 0x4C401382
    bne lbl_801B45BC
    opword 0xE0660000
    opword 0xE0450000
    opword 0x10221828
    opword 0xE0458008
    opword 0x1021191C
    opword 0xE0668008
    opword 0xF0210008
    opword 0x10221828
    lfs f2, 0x8(r1)
    opword 0x1021191C
    fabs f2, f2
    opword 0xF0218010
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_801B45BC
    lfs f1, 0xc(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B45BC
    fmr f26, f4
    fcmpo cr0, f4, f31
    bge lbl_801B45BC
    fmr f31, f4
lbl_801B45BC:
    lfs f2, lbl_804A1770
    lfs f0, 0x8(r6)
    lfs f1, 0x8(r7)
    fsubs f2, f2, f0
    lfs f0, lbl_804A1778
    fdivs f4, f2, f1
    fcmpo cr0, f4, f0
    ble lbl_801B464C
    lfs f0, lbl_804A1784
    fcmpo cr0, f4, f0
    opword 0x4C401382
    bne lbl_801B464C
    opword 0xE0660000
    opword 0xE0450000
    opword 0x10221828
    opword 0xE0458008
    opword 0x1021191C
    opword 0xE0668008
    opword 0xF0210008
    opword 0x10221828
    lfs f2, 0x8(r1)
    opword 0x1021191C
    fabs f2, f2
    opword 0xF0218010
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_801B464C
    lfs f1, 0xc(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B464C
    fmr f25, f4
    fcmpo cr0, f4, f31
    bge lbl_801B464C
    fmr f31, f4
lbl_801B464C:
    lfs f1, lbl_804A177C
    fcmpu cr0, f1, f31
    bne lbl_801B465C
    b lbl_801B4858
lbl_801B465C:
    lfs f0, 0x0(r5)
    mr r4, r31
    lfs f5, 0x0(r6)
    lfs f2, 0x4(r5)
    fsubs f4, f0, f5
    lfs f3, 0x4(r6)
    lfs f0, 0x8(r5)
    mr r5, r10
    lfs f1, 0x8(r6)
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    fmuls f4, f31, f4
    fmuls f2, f31, f2
    fmuls f0, f31, f0
    fadds f4, f5, f4
    fadds f2, f3, f2
    fadds f0, f1, f0
    stfs f4, 0x0(r9)
    stfs f2, 0x4(r9)
    stfs f0, 0x8(r9)
    bl fn_8030D7E0
    lhz r0, 0x2c(r28)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B4854
    fsubs f1, f30, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_801B46E8
    fsubs f1, f29, f31
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B4704
lbl_801B46E8:
    lfs f0, 0x0(r30)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x0(r30)
    lfs f0, 0x0(r29)
    fmuls f0, f0, f1
    stfs f0, 0x0(r29)
lbl_801B4704:
    fsubs f1, f28, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_801B4730
    fsubs f1, f27, f31
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B474C
lbl_801B4730:
    lfs f0, 0x4(r30)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x4(r30)
    lfs f0, 0x4(r29)
    fmuls f0, f0, f1
    stfs f0, 0x4(r29)
lbl_801B474C:
    fsubs f1, f26, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_801B4778
    fsubs f1, f25, f31
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B4794
lbl_801B4778:
    lfs f0, 0x8(r30)
    lfs f1, lbl_804A1770
    fmuls f0, f0, f1
    stfs f0, 0x8(r30)
    lfs f0, 0x8(r29)
    fmuls f0, f0, f1
    stfs f0, 0x8(r29)
lbl_801B4794:
    fsubs f1, f30, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B47B4
    lfs f0, lbl_804A1774
    stfs f0, 0x0(r31)
lbl_801B47B4:
    fsubs f1, f29, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B47D4
    lfs f0, lbl_804A1770
    stfs f0, 0x0(r31)
lbl_801B47D4:
    fsubs f1, f28, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B47F4
    lfs f0, lbl_804A1774
    stfs f0, 0x4(r31)
lbl_801B47F4:
    fsubs f1, f27, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B4814
    lfs f0, lbl_804A1770
    stfs f0, 0x4(r31)
lbl_801B4814:
    fsubs f1, f26, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B4834
    lfs f0, lbl_804A1774
    stfs f0, 0x8(r31)
lbl_801B4834:
    fsubs f1, f25, f31
    lfs f0, lbl_804A1780
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801B4854
    lfs f0, lbl_804A1770
    stfs f0, 0x8(r31)
lbl_801B4854:
    fmr f1, f31
lbl_801B4858:
    opword 0xE3E10098
    lfd f31, 0x90(r1)
    opword 0xE3C10088
    lfd f30, 0x80(r1)
    opword 0xE3A10078
    lfd f29, 0x70(r1)
    opword 0xE3810068
    lfd f28, 0x60(r1)
    opword 0xE3610058
    lfd f27, 0x50(r1)
    opword 0xE3410048
    lfd f26, 0x40(r1)
    opword 0xE3210038
    lfd f25, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0xa4(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B48B0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B48B0() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    addi r11, r1, 0x60
    bl _savegpr_19
    lbz r0, 0x29(r5)
    mr r26, r4
    lwz r30, 0x78(r1)
    mr r19, r3
    cmpwi r0, 0x3
    lwz r25, 0x7c(r1)
    lwz r31, 0x80(r1)
    mr r27, r5
    lwz r23, 0x84(r1)
    mr r28, r6
    lwz r24, 0x88(r1)
    mr r29, r7
    lbz r4, 0x2a(r5)
    mr r20, r8
    mr r21, r9
    mr r22, r10
    beq lbl_801B4960
    bge lbl_801B492C
    cmpwi r0, 0x1
    beq lbl_801B4948
    bge lbl_801B4954
    cmpwi r0, 0x0
    bge lbl_801B493C
    b lbl_801B4980
lbl_801B492C:
    cmpwi r0, 0x5
    beq lbl_801B4978
    bge lbl_801B4980
    b lbl_801B496C
lbl_801B493C:
    mr r3, r21
    bl fn_801B23E4
    b lbl_801B4980
lbl_801B4948:
    mr r3, r21
    bl fn_801B22F4
    b lbl_801B4980
lbl_801B4954:
    mr r3, r21
    bl fn_801B21E8
    b lbl_801B4980
lbl_801B4960:
    mr r3, r21
    bl fn_801B2040
    b lbl_801B4980
lbl_801B496C:
    mr r3, r21
    bl fn_801B1F28
    b lbl_801B4980
lbl_801B4978:
    mr r3, r21
    bl fn_801B2120
lbl_801B4980:
    opword 0xE0550000
    addi r7, r1, 0x14
    opword 0xE0340000
    lbz r0, 0x29(r27)
    opword 0x10020828
    opword 0xE0558008
    opword 0xE0348008
    cmpwi r0, 0x3
    lfs f31, lbl_804A177C
    opword 0xF0070000
    opword 0x10020828
    opword 0xF0078008
    beq lbl_801B4A58
    bge lbl_801B49D0
    cmpwi r0, 0x1
    beq lbl_801B4A08
    bge lbl_801B4A30
    cmpwi r0, 0x0
    bge lbl_801B49E0
    b lbl_801B4ACC
lbl_801B49D0:
    cmpwi r0, 0x5
    beq lbl_801B4AA8
    bge lbl_801B4ACC
    b lbl_801B4A80
lbl_801B49E0:
    mr r3, r19
    mr r4, r27
    mr r5, r21
    mr r6, r20
    mr r8, r22
    mr r9, r25
    mr r10, r31
    bl fn_801B2494
    fmr f31, f1
    b lbl_801B4ACC
lbl_801B4A08:
    mr r3, r19
    mr r4, r27
    mr r5, r21
    mr r6, r20
    mr r8, r22
    mr r9, r25
    mr r10, r31
    bl fn_801B2930
    fmr f31, f1
    b lbl_801B4ACC
lbl_801B4A30:
    mr r3, r19
    mr r4, r27
    mr r5, r21
    mr r6, r20
    mr r8, r22
    mr r9, r25
    mr r10, r31
    bl fn_801B2ED4
    fmr f31, f1
    b lbl_801B4ACC
lbl_801B4A58:
    mr r3, r19
    mr r4, r27
    mr r5, r21
    mr r6, r20
    mr r8, r22
    mr r9, r25
    mr r10, r31
    bl fn_801B426C
    fmr f31, f1
    b lbl_801B4ACC
lbl_801B4A80:
    mr r3, r19
    mr r4, r27
    mr r5, r21
    mr r6, r20
    mr r8, r22
    mr r9, r25
    mr r10, r31
    bl fn_801B3460
    fmr f31, f1
    b lbl_801B4ACC
lbl_801B4AA8:
    mr r3, r19
    mr r4, r27
    mr r5, r21
    mr r6, r20
    mr r8, r22
    mr r9, r25
    mr r10, r31
    bl fn_801B3A98
    fmr f31, f1
lbl_801B4ACC:
    lfs f0, lbl_804A17A0
    fcmpo cr0, f31, f0
    ble lbl_801B4AE0
    li r3, 0x0
    b lbl_801B4C70
lbl_801B4AE0:
    lhz r3, 0x2c(r27)
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_801B4AF4
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_801B4BB8
lbl_801B4AF4:
    mr r3, r26
    mr r4, r22
    mr r5, r24
    bl fn_8030D7E0
    lfs f2, 0x0(r24)
    addi r25, r1, 0x8
    lfs f1, 0x30(r27)
    mr r3, r26
    lfs f0, lbl_804A1774
    mr r4, r25
    fmuls f3, f2, f1
    lfs f2, 0x34(r27)
    fsubs f4, f0, f31
    lfs f1, 0x38(r27)
    mr r5, r25
    stfs f3, 0x0(r24)
    lfs f0, 0x4(r24)
    fmuls f0, f0, f2
    stfs f0, 0x4(r24)
    lfs f0, 0x8(r24)
    fmuls f0, f0, f1
    stfs f0, 0x8(r24)
    opword 0xE0210014
    opword 0x10010118
    opword 0xE021801C
    opword 0xF0190000
    opword 0x10010118
    opword 0xF0198008
    bl fn_8030D7E0
    lfs f1, 0x8(r1)
    lfs f0, 0x30(r27)
    lfs f3, 0xc(r1)
    fmuls f4, f1, f0
    lfs f2, 0x34(r27)
    lfs f1, 0x10(r1)
    lfs f0, 0x38(r27)
    fmuls f2, f3, f2
    stfs f4, 0x8(r1)
    fmuls f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x10(r1)
    opword 0xE0190000
    opword 0xE03F0000
    opword 0x1001002A
    opword 0xF0170000
    opword 0xE03F8008
    opword 0xE0198008
    opword 0x1001002A
    opword 0xF0178008
lbl_801B4BB8:
    lhz r0, 0x2c(r27)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801B4BE4
    li r0, 0x1
    stb r0, 0x0(r30)
    lfs f0, 0x0(r31)
    stfs f0, 0x0(r23)
    lfs f0, 0x4(r31)
    stfs f0, 0x4(r23)
    lfs f0, 0x8(r31)
    stfs f0, 0x8(r23)
lbl_801B4BE4:
    lhz r0, 0x2c(r27)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801B4C28
    cmpwi r28, 0x0
    beq lbl_801B4C28
    lwz r3, 0xc8(r29)
    mr r5, r29
    lhz r7, 0xe2(r29)
    mr r6, r28
    lwz r3, 0x20(r3)
    mr r8, r31
    addi r4, r27, 0x3c
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA7F0
lbl_801B4C28:
    lhz r0, 0x2c(r27)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801B4C6C
    cmpwi r28, 0x0
    beq lbl_801B4C6C
    lwz r3, 0xc8(r29)
    mr r5, r29
    lhz r7, 0xe2(r29)
    mr r6, r28
    lwz r3, 0x20(r3)
    mr r8, r31
    addi r4, r27, 0x3c
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA96C
lbl_801B4C6C:
    li r3, 0x1
lbl_801B4C70:
    opword 0xE3E10068
    addi r11, r1, 0x60
    lfd f31, 0x60(r1)
    bl _restgpr_19
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801B4C90
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B4C90() {
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    opword 0xF3E101B8
    addi r11, r1, 0x1b0
    bl _savegpr_21
    lwz r28, 0x1c8(r1)
    mr r23, r3
    lwz r29, 0x1cc(r1)
    mr r30, r4
    mr r24, r5
    mr r25, r6
    mr r22, r7
    mr r21, r8
    mr r26, r9
    mr r27, r10
    addi r3, r1, 0x150
    bl PSMTXIdentity
    addi r3, r1, 0x150
    mr r4, r30
    mr r5, r3
    bl fn_801BA008
    lfs f1, 0xc(r30)
    addi r3, r1, 0x120
    lfs f2, 0x10(r30)
    lfs f3, 0x14(r30)
    bl fn_801B9E1C
    addi r4, r1, 0x150
    addi r3, r1, 0x120
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0x150
    lfs f1, 0x18(r30)
    lfs f2, 0x1c(r30)
    mr r4, r3
    lfs f3, 0x20(r30)
    bl PSMTXTransApply
    lhz r0, 0x2c(r24)
    clrlwi. r0, r0, 31
    beq lbl_801B4D58
    lfs f3, 0x2c(r22)
    addi r3, r1, 0x150
    lfs f2, 0x1c(r22)
    mr r4, r3
    lfs f1, 0xc(r22)
    stfs f2, 0x84(r1)
    stfs f1, 0x80(r1)
    stfs f3, 0x88(r1)
    bl PSMTXTransApply
lbl_801B4D58:
    addi r4, r1, 0x150
    mr r3, r21
    mr r5, r4
    bl PSMTXConcat
    lwz r12, 0x15c(r1)
    addi r3, r1, 0x150
    lwz r8, 0x16c(r1)
    addi r4, r1, 0xc0
    lwz r0, 0x17c(r1)
    lwz r30, 0x150(r1)
    lwz r22, 0x154(r1)
    lwz r21, 0x158(r1)
    lwz r11, 0x160(r1)
    lwz r10, 0x164(r1)
    lwz r9, 0x168(r1)
    lwz r7, 0x170(r1)
    lwz r6, 0x174(r1)
    lwz r5, 0x178(r1)
    stw r12, 0xfc(r1)
    lfs f0, lbl_804A1778
    stw r8, 0x10c(r1)
    stw r0, 0x11c(r1)
    stw r30, 0xf0(r1)
    stw r22, 0xf4(r1)
    stw r21, 0xf8(r1)
    stw r11, 0x100(r1)
    stw r10, 0x104(r1)
    stw r9, 0x108(r1)
    stw r7, 0x110(r1)
    stw r6, 0x114(r1)
    stw r5, 0x118(r1)
    stfs f0, 0xfc(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0x11c(r1)
    bl PSMTXInverse
    lwz r22, 0xcc(r1)
    mr r4, r26
    lwz r9, 0xdc(r1)
    addi r3, r1, 0xc0
    lwz r0, 0xec(r1)
    addi r5, r1, 0x74
    lwz r21, 0xc0(r1)
    lwz r31, 0xc4(r1)
    lwz r30, 0xc8(r1)
    lwz r12, 0xd0(r1)
    lwz r11, 0xd4(r1)
    lwz r10, 0xd8(r1)
    lwz r8, 0xe0(r1)
    lwz r7, 0xe4(r1)
    lwz r6, 0xe8(r1)
    stw r22, 0x9c(r1)
    lfs f0, lbl_804A1778
    stw r9, 0xac(r1)
    stw r0, 0xbc(r1)
    stw r21, 0x90(r1)
    stw r31, 0x94(r1)
    stw r30, 0x98(r1)
    stw r12, 0xa0(r1)
    stw r11, 0xa4(r1)
    stw r10, 0xa8(r1)
    stw r8, 0xb0(r1)
    stw r7, 0xb4(r1)
    stw r6, 0xb8(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xac(r1)
    stfs f0, 0xbc(r1)
    bl fn_8030D7E0
    lbz r0, 0x29(r24)
    lbz r4, 0x2a(r24)
    cmpwi r0, 0x3
    beq lbl_801B4EC4
    bge lbl_801B4E90
    cmpwi r0, 0x1
    beq lbl_801B4EAC
    bge lbl_801B4EB8
    cmpwi r0, 0x0
    bge lbl_801B4EA0
    b lbl_801B4EE8
lbl_801B4E90:
    cmpwi r0, 0x5
    beq lbl_801B4EDC
    bge lbl_801B4EE8
    b lbl_801B4ED0
lbl_801B4EA0:
    addi r3, r1, 0x74
    bl fn_801B23E4
    b lbl_801B4EEC
lbl_801B4EAC:
    addi r3, r1, 0x74
    bl fn_801B22F4
    b lbl_801B4EEC
lbl_801B4EB8:
    addi r3, r1, 0x74
    bl fn_801B21E8
    b lbl_801B4EEC
lbl_801B4EC4:
    addi r3, r1, 0x74
    bl fn_801B2040
    b lbl_801B4EEC
lbl_801B4ED0:
    addi r3, r1, 0x74
    bl fn_801B1F28
    b lbl_801B4EEC
lbl_801B4EDC:
    addi r3, r1, 0x74
    bl fn_801B2120
    b lbl_801B4EEC
lbl_801B4EE8:
    li r3, 0x1
lbl_801B4EEC:
    lbz r30, 0x9d(r23)
    clrlwi r31, r3, 24
    stb r3, 0x9d(r23)
    opword 0xE05C0000
    lbz r0, 0x28(r24)
    opword 0x104200B2
    lfs f0, 0x8(r28)
    cmpwi r0, 0x2
    opword 0x1020103A
    opword 0x10211094
    beq lbl_801B4F64
    bge lbl_801B4F7C
    cmpwi r0, 0x1
    bge lbl_801B4F28
    b lbl_801B4F7C
lbl_801B4F28:
    lfs f0, 0x24(r24)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_801B4F7C
    mr r3, r28
    mr r4, r28
    bl fn_801B9B90
    lfs f0, 0x24(r24)
    opword 0xE03C0000
    opword 0x10210018
    opword 0xF03C0000
    opword 0xE03C8008
    opword 0x10210018
    opword 0xF03C8008
    b lbl_801B4F7C
lbl_801B4F64:
    lfs f0, 0x24(r24)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_801B4F7C
    li r0, 0x1
    stb r0, 0x0(r29)
lbl_801B4F7C:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_801B4F90
    li r3, 0x1
    b lbl_801B54E4
lbl_801B4F90:
    lhz r3, 0xdc(r23)
    lhz r0, 0x2e(r24)
    cmplw r3, r0
    bge lbl_801B4FA8
    li r3, 0x1
    b lbl_801B54E4
lbl_801B4FA8:
    lhz r4, 0x2c(r24)
    cmpwi r4, 0x0
    bne lbl_801B4FBC
    li r3, 0x1
    b lbl_801B54E4
lbl_801B4FBC:
    lbz r3, 0x2b(r24)
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801B51A4
    cmplwi r3, 0x1
    bne lbl_801B4FE8
    cmplwi r31, 0x2
    beq lbl_801B4FE8
    li r3, 0x1
    b lbl_801B54E4
lbl_801B4FE8:
    cmplwi r3, 0x2
    bne lbl_801B5000
    cmplwi r31, 0x3
    beq lbl_801B5000
    li r3, 0x1
    b lbl_801B54E4
lbl_801B5000:
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_801B5100
    lfs f0, 0x30(r24)
    lfs f1, 0x0(r28)
    fmr f5, f0
    lfs f3, 0x34(r24)
    fmuls f0, f1, f0
    lfs f2, 0x38(r24)
    lfs f1, 0x0(r27)
    lfs f4, 0x4(r27)
    stfs f0, 0x0(r28)
    fmuls f5, f1, f5
    fmuls f4, f4, f3
    lfs f3, 0x8(r27)
    lfs f1, 0x4(r28)
    lfs f0, 0x34(r24)
    fmuls f2, f3, f2
    stfs f5, 0x0(r27)
    fmuls f0, f1, f0
    stfs f4, 0x4(r27)
    stfs f0, 0x4(r28)
    lfs f1, 0x8(r28)
    lfs f0, 0x38(r24)
    stfs f2, 0x8(r27)
    fmuls f0, f1, f0
    stfs f0, 0x8(r28)
    lbz r0, 0x28(r24)
    cmpwi r0, 0x2
    beq lbl_801B50D4
    bge lbl_801B5100
    cmpwi r0, 0x1
    bge lbl_801B5084
    b lbl_801B5100
lbl_801B5084:
    opword 0xE05C0000
    lfs f0, 0x24(r24)
    opword 0x104200B2
    lfs f1, 0x8(r28)
    fmuls f0, f0, f0
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    ble lbl_801B5100
    mr r3, r28
    mr r4, r28
    bl fn_801B9B90
    lfs f0, 0x24(r24)
    opword 0xE03C0000
    opword 0x10210018
    opword 0xF03C0000
    opword 0xE03C8008
    opword 0x10210018
    opword 0xF03C8008
    b lbl_801B5100
lbl_801B50D4:
    opword 0xE05C0000
    lfs f0, 0x24(r24)
    opword 0x104200B2
    lfs f1, 0x8(r28)
    fmuls f0, f0, f0
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    ble lbl_801B5100
    li r0, 0x1
    stb r0, 0x0(r29)
lbl_801B5100:
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801B5114
    li r0, 0x1
    stb r0, 0x0(r29)
lbl_801B5114:
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801B5158
    cmpwi r25, 0x0
    beq lbl_801B5158
    lwz r3, 0xc8(r23)
    mr r5, r23
    lhz r7, 0xe2(r23)
    mr r6, r25
    lwz r3, 0x20(r3)
    addi r4, r24, 0x3c
    li r8, 0x0
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA7F0
lbl_801B5158:
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801B519C
    cmpwi r25, 0x0
    beq lbl_801B519C
    lwz r3, 0xc8(r23)
    mr r5, r23
    lhz r7, 0xe2(r23)
    mr r6, r25
    lwz r3, 0x20(r3)
    addi r4, r24, 0x3c
    li r8, 0x0
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA96C
lbl_801B519C:
    li r3, 0x1
    b lbl_801B54E4
lbl_801B51A4:
    lfs f2, 0x0(r27)
    addi r4, r1, 0x68
    lfs f1, 0x0(r28)
    mr r5, r4
    lfs f0, 0xc4(r23)
    addi r3, r1, 0xc0
    fadds f3, f2, f1
    lfs f2, 0x0(r26)
    lfs f5, 0x4(r27)
    lfs f1, 0x4(r26)
    fmuls f4, f0, f3
    lfs f3, 0x8(r27)
    lfs f0, 0x8(r26)
    fadds f2, f2, f4
    stfs f2, 0x68(r1)
    lfs f4, 0x4(r28)
    lfs f2, 0xc4(r23)
    fadds f4, f5, f4
    fmuls f2, f2, f4
    fadds f1, f1, f2
    stfs f1, 0x6c(r1)
    lfs f2, 0x8(r28)
    lfs f1, 0xc4(r23)
    fadds f2, f3, f2
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x70(r1)
    bl fn_8030D7E0
    mr r4, r28
    addi r3, r1, 0x90
    addi r5, r1, 0x5c
    bl fn_8030D7E0
    lfs f31, lbl_804A17A4
    addi r22, r1, 0x50
    addi r28, r1, 0x44
    addi r27, r1, 0x38
    addi r26, r1, 0x2c
    li r21, 0x0
lbl_801B523C:
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    bl fn_8030E000
    fcmpo cr0, f1, f31
    bge lbl_801B5258
    li r3, 0x0
    b lbl_801B52A8
lbl_801B5258:
    lwz r3, 0x5c(r1)
    mr r5, r24
    lwz r9, 0x60(r1)
    mr r6, r25
    lwz r0, 0x64(r1)
    mr r7, r23
    stw r3, 0x20(r1)
    addi r3, r1, 0x150
    addi r4, r1, 0xf0
    addi r8, r1, 0x74
    stw r9, 0x24(r1)
    addi r9, r1, 0x68
    addi r10, r1, 0x20
    stw r0, 0x28(r1)
    stw r29, 0x8(r1)
    stw r22, 0xc(r1)
    stw r28, 0x10(r1)
    stw r27, 0x14(r1)
    stw r26, 0x18(r1)
    bl fn_801B48B0
lbl_801B52A8:
    cmpwi r3, 0x0
    beq lbl_801B5340
    lfs f0, 0x38(r1)
    lbz r0, 0x9d(r23)
    stfs f0, 0xac(r23)
    ori r0, r0, 0x80
    lfs f0, 0x3c(r1)
    stfs f0, 0xb0(r23)
    lfs f0, 0x40(r1)
    stfs f0, 0xb4(r23)
    lfs f0, 0x2c(r1)
    stfs f0, 0xa0(r23)
    lfs f0, 0x30(r1)
    stfs f0, 0xa4(r23)
    lfs f0, 0x34(r1)
    stfs f0, 0xa8(r23)
    stb r0, 0x9d(r23)
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_801B5300
    li r3, 0x0
    b lbl_801B54E4
lbl_801B5300:
    lfs f2, 0x50(r1)
    addi r3, r1, 0xc0
    lfs f1, 0x54(r1)
    addi r4, r1, 0x38
    lfs f0, 0x58(r1)
    addi r5, r1, 0x68
    stfs f2, 0x74(r1)
    li r31, 0x1
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    bl fn_8030D7E0
    addi r3, r1, 0x90
    addi r4, r1, 0x2c
    addi r5, r1, 0x5c
    bl fn_8030D7E0
    b lbl_801B54CC
lbl_801B5340:
    cmpwi r21, 0x0
    bne lbl_801B542C
    lhz r3, 0xdc(r23)
    lhz r0, 0x2e(r24)
    cmplw r3, r0
    ble lbl_801B5424
    cmplwi r30, 0x2
    bne lbl_801B5370
    cmplwi r31, 0x3
    beq lbl_801B5388
    cmplwi r31, 0x1
    beq lbl_801B5388
lbl_801B5370:
    cmplwi r30, 0x3
    bne lbl_801B5424
    addi r0, r31, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801B5424
lbl_801B5388:
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801B539C
    li r0, 0x1
    stb r0, 0x0(r29)
lbl_801B539C:
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801B53E0
    cmpwi r25, 0x0
    beq lbl_801B53E0
    lwz r3, 0xc8(r23)
    mr r5, r23
    lhz r7, 0xe2(r23)
    mr r6, r25
    lwz r3, 0x20(r3)
    addi r4, r24, 0x3c
    li r8, 0x0
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA7F0
lbl_801B53E0:
    lhz r0, 0x2c(r24)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801B5424
    cmpwi r25, 0x0
    beq lbl_801B5424
    lwz r3, 0xc8(r23)
    mr r5, r23
    lhz r7, 0xe2(r23)
    mr r6, r25
    lwz r3, 0x20(r3)
    addi r4, r24, 0x3c
    li r8, 0x0
    li r9, 0x0
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    bl fn_801BA96C
lbl_801B5424:
    li r3, 0x1
    b lbl_801B54E4
lbl_801B542C:
    lbz r0, 0x28(r24)
    cmpwi r0, 0x2
    beq lbl_801B5498
    bge lbl_801B54C4
    cmpwi r0, 0x1
    bge lbl_801B5448
    b lbl_801B54C4
lbl_801B5448:
    addi r3, r23, 0xa0
    lfs f0, 0x24(r24)
    opword 0xE0430000
    lfs f1, 0xa8(r23)
    fmuls f0, f0, f0
    opword 0x104200B2
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    ble lbl_801B54C4
    mr r4, r3
    bl fn_801B9B90
    lfs f0, 0x24(r24)
    opword 0xE05700A0
    opword 0x10220018
    opword 0xE05780A8
    opword 0xF03700A0
    opword 0x10220018
    opword 0xF03780A8
    b lbl_801B54C4
lbl_801B5498:
    opword 0xE05700A0
    lfs f0, 0x24(r24)
    opword 0x104200B2
    lfs f1, 0xa8(r23)
    fmuls f0, f0, f0
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    ble lbl_801B54C4
    li r0, 0x1
    stb r0, 0x0(r29)
lbl_801B54C4:
    li r3, 0x0
    b lbl_801B54E4
lbl_801B54CC:
    addi r21, r21, 0x1
    cmpwi r21, 0x5
    blt lbl_801B523C
    li r0, 0x1
    li r3, 0x0
    stb r0, 0x0(r29)
lbl_801B54E4:
    opword 0xE3E101B8
    addi r11, r1, 0x1b0
    lfd f31, 0x1b0(r1)
    bl _restgpr_21
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B5504
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B5504() {
    nofralloc
    lis r4, lbl_803606D0@ha
    addi r4, r4, lbl_803606D0@l
    stw r4, 0x1c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801B5514
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B5514() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801B553C
    cmpwi r4, 0x0
    ble lbl_801B553C
    bl dtor_80136CFC
lbl_801B553C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B5554
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B5554() {
    nofralloc
    mr r4, r3
    lwz r3, 0xc8(r3)
    b fn_801B638C
}

// ----------------------------------------------------------------------------
// fn_801B5560
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B5560() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801B5564
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B5564() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    stfd f27, 0x70(r1)
    opword 0xF3610078
    stfd f26, 0x60(r1)
    opword 0xF3410068
    stfd f25, 0x50(r1)
    opword 0xF3210058
    stfd f24, 0x40(r1)
    opword 0xF3010048
    addi r11, r1, 0x40
    bl _savegpr_25
    lbz r0, 0x0(r4)
    mr r27, r4
    lfd f31, lbl_804A17C8
    mr r26, r3
    stb r0, 0x0(r3)
    mr r28, r5
    lfs f24, lbl_804A17A8
    mr r30, r27
    lbz r0, 0x1(r4)
    li r29, 0x0
    lfs f25, lbl_804A17AC
    lis r31, 0x3
    stb r0, 0x1(r3)
    lis r25, 0x4330
    lfs f26, lbl_804A17B0
    lbz r0, 0x2(r4)
    lfs f27, lbl_804A17B4
    stb r0, 0x2(r3)
    lfs f28, lbl_804A17BC
    lbz r0, 0x3(r4)
    lfs f29, lbl_804A17B8
    stb r0, 0x3(r3)
    lfs f30, lbl_804A17C0
    lbz r0, 0x4(r4)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r4)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r4)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r4)
    stb r0, 0x7(r3)
    lbz r0, 0x8(r4)
    stb r0, 0x8(r3)
    lbz r0, 0x9(r4)
    stb r0, 0x9(r3)
    lbz r0, 0xa(r4)
    stb r0, 0xa(r3)
    lbz r0, 0xb(r4)
    stb r0, 0xb(r3)
    lbz r0, 0xc(r4)
    stb r0, 0xc(r3)
    lbz r0, 0xd(r4)
    stb r0, 0xd(r3)
    lbz r0, 0xe(r4)
    stb r0, 0xe(r3)
    lbz r0, 0xf(r4)
    stb r0, 0xf(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r4)
    stfs f0, 0x28(r3)
lbl_801B56AC:
    add r5, r27, r29
    lfs f2, 0x7c(r30)
    lbz r0, 0x79(r5)
    cmpwi r0, 0x0
    beq lbl_801B5720
    lwz r4, 0x20(r28)
    addi r0, r31, 0x43fd
    stw r25, 0x8(r1)
    lwz r3, 0xec(r4)
    stw r25, 0x10(r1)
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r4)
    stw r0, 0xc(r1)
    lbz r0, 0x79(r5)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f0, f0, f31
    lfd f1, 0x10(r1)
    fdivs f0, f0, f24
    fmuls f0, f25, f0
    fsubs f1, f1, f31
    fsubs f0, f0, f26
    fmuls f0, f2, f0
    fmuls f0, f1, f0
    fdivs f0, f0, f27
    fadds f2, f2, f0
lbl_801B5720:
    fdivs f0, f2, f28
    fmuls f0, f29, f0
    fsubs f1, f0, f30
    bl ceil
    frsp f0, f1
    add r3, r26, r29
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x3
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    slwi r0, r4, 24
    srwi r4, r4, 31
    subf r0, r4, r0
    rotlwi r0, r0, 8
    add r0, r0, r4
    stb r0, 0x7a(r3)
    blt lbl_801B56AC
    lwz r0, 0x68(r27)
    li r3, 0x0
    stw r0, 0x68(r26)
    lfs f0, 0x2c(r27)
    stfs f0, 0x2c(r26)
    lfs f0, 0x30(r27)
    stfs f0, 0x30(r26)
    lfs f0, 0x44(r27)
    stfs f0, 0x44(r26)
    lfs f0, 0x50(r27)
    stfs f0, 0x50(r26)
    lfs f0, 0x54(r27)
    stfs f0, 0x54(r26)
    lwz r0, 0x6c(r27)
    stw r0, 0x6c(r26)
    lfs f0, 0x34(r27)
    stfs f0, 0x34(r26)
    lfs f0, 0x38(r27)
    stfs f0, 0x38(r26)
    lfs f0, 0x48(r27)
    stfs f0, 0x48(r26)
    lfs f0, 0x58(r27)
    stfs f0, 0x58(r26)
    lfs f0, 0x5c(r27)
    stfs f0, 0x5c(r26)
    lwz r0, 0x70(r27)
    stw r0, 0x70(r26)
    lfs f0, 0x3c(r27)
    stfs f0, 0x3c(r26)
    lfs f0, 0x40(r27)
    stfs f0, 0x40(r26)
    lfs f0, 0x4c(r27)
    stfs f0, 0x4c(r26)
    lfs f0, 0x60(r27)
    stfs f0, 0x60(r26)
    lfs f0, 0x64(r27)
    stfs f0, 0x64(r26)
    lhz r0, 0x74(r27)
    sth r0, 0x74(r26)
    lbz r0, 0x76(r27)
    stb r0, 0x76(r26)
    lbz r0, 0x77(r27)
    stb r0, 0x77(r26)
    lbz r0, 0x78(r27)
    stb r0, 0x78(r26)
    stb r3, 0x7d(r26)
    opword 0xE3E100B8
    lfd f31, 0xb0(r1)
    opword 0xE3C100A8
    lfd f30, 0xa0(r1)
    opword 0xE3A10098
    lfd f29, 0x90(r1)
    opword 0xE3810088
    lfd f28, 0x80(r1)
    opword 0xE3610078
    lfd f27, 0x70(r1)
    opword 0xE3410068
    lfd f26, 0x60(r1)
    opword 0xE3210058
    lfd f25, 0x50(r1)
    opword 0xE3010048
    lfd f24, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B587C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B587C() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    addi r11, r1, 0x120
    bl _savegpr_23
    lis r12, 0x4330
    li r11, 0x0
    li r0, 0x1
    fmr f31, f1
    cmpwi r4, 0x0
    stw r12, 0xc8(r1)
    mr r24, r3
    mr r25, r4
    stw r12, 0xd0(r1)
    mr r31, r5
    mr r30, r6
    stw r11, 0x10(r3)
    mr r29, r7
    mr r28, r8
    mr r26, r9
    stw r0, 0xc(r3)
    mr r27, r10
    bne lbl_801B58E4
    li r25, 0x1
lbl_801B58E4:
    stw r7, 0xc8(r3)
    li r23, 0x0
    lwz r4, 0x10(r7)
    addi r0, r4, 0x1
    stw r0, 0x10(r7)
    stw r23, 0xd8(r3)
    sth r23, 0xe2(r3)
    bl fn_801B866C
    lwz r4, 0x24(r29)
    mr r5, r29
    addi r3, r24, 0x20
    lwz r0, 0x4(r4)
    add r4, r0, r4
    addi r4, r4, 0xc
    bl fn_801B5564
    stfs f31, 0xc4(r24)
    lis r3, 0x8102
    lis r4, 0x3
    lfs f6, 0x0(r31)
    sth r23, 0xdc(r24)
    addi r0, r3, 0x409
    addi r4, r4, 0x43fd
    lfs f5, 0x4(r31)
    lwz r5, 0x20(r29)
    lfs f4, 0x8(r31)
    lwz r3, 0xec(r5)
    lfs f3, 0x0(r30)
    mullw r3, r3, r4
    lfs f2, 0x4(r30)
    lfs f0, 0x8(r30)
    lfs f1, lbl_804A17D8
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    stw r3, 0xec(r5)
    srwi r3, r3, 16
    sth r3, 0xde(r24)
    sth r25, 0xe0(r24)
    lwz r5, 0x20(r29)
    lwz r3, 0xec(r5)
    mullw r3, r3, r4
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r4, r3, 16
    stw r3, 0xec(r5)
    mulhw r0, r0, r4
    stfs f6, 0xac(r24)
    stfs f5, 0xb0(r24)
    add r0, r0, r4
    stfs f4, 0xb4(r24)
    srawi r0, r0, 7
    srwi r3, r0, 31
    stfs f6, 0xb8(r24)
    add r0, r0, r3
    mulli r0, r0, 0xfe
    stfs f5, 0xbc(r24)
    stfs f4, 0xc0(r24)
    subf r3, r0, r4
    subi r0, r3, 0x7e
    stfs f3, 0xa0(r24)
    stb r0, 0x99(r24)
    stfs f2, 0xa4(r24)
    stfs f0, 0xa8(r24)
    lwz r3, 0x20(r29)
    lwz r4, 0xbc(r3)
    lfs f0, 0x84(r4)
    addi r23, r4, 0x84
    fcmpu cr0, f1, f0
    bne lbl_801B5A0C
    lfs f0, 0x4(r23)
    fcmpu cr0, f1, f0
    bne lbl_801B5A0C
    lfs f0, 0x8(r23)
    fcmpu cr0, f1, f0
    beq lbl_801B5A60
lbl_801B5A0C:
    addi r4, r1, 0x98
    bl fn_801ACC48
    addi r3, r1, 0x98
    mr r4, r3
    bl PSMTXInverse
    lfs f0, lbl_804A17D8
    mr r4, r23
    addi r3, r1, 0x98
    addi r5, r1, 0x28
    stfs f0, 0xc4(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xa4(r1)
    bl fn_8030D7E0
    opword 0xE01800A0
    opword 0xE0210028
    opword 0x1020082A
    opword 0xE01880A8
    opword 0xF03800A0
    opword 0xE0218030
    opword 0x1020082A
    opword 0xF03880A8
lbl_801B5A60:
    cmpwi r28, 0x0
    beq lbl_801B5AF8
    addi r4, r24, 0xac
    mr r3, r28
    mr r5, r4
    bl fn_8030D7E0
    lwz r6, 0x0(r28)
    addi r4, r24, 0xa0
    lwz r0, 0x4(r28)
    mr r5, r4
    lfs f0, lbl_804A17D8
    addi r3, r1, 0x68
    stw r6, 0x68(r1)
    stw r0, 0x6c(r1)
    lwz r6, 0x8(r28)
    lwz r0, 0xc(r28)
    stw r6, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r6, 0x10(r28)
    lwz r0, 0x14(r28)
    stw r6, 0x78(r1)
    stw r0, 0x7c(r1)
    lwz r6, 0x18(r28)
    lwz r0, 0x1c(r28)
    stw r6, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r6, 0x20(r28)
    lwz r0, 0x24(r28)
    stw r6, 0x88(r1)
    stw r0, 0x8c(r1)
    lwz r6, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r0, 0x94(r1)
    stw r6, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x74(r1)
    bl fn_8030D7E0
lbl_801B5AF8:
    lfs f0, lbl_804A17D8
    cmpwi r27, 0x0
    lfs f1, lbl_804A17AC
    stfs f0, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0xcc(r24)
    stfs f0, 0xd0(r24)
    stfs f0, 0xd4(r24)
    beq lbl_801B60CC
    cmpwi r26, 0x0
    beq lbl_801B60CC
    lha r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_801B5C24
    lwz r3, 0xc8(r27)
    addi r4, r1, 0x38
    bl fn_801B7FB8
    lfs f0, lbl_804A17D8
    addi r3, r1, 0x38
    addi r4, r27, 0xa0
    addi r5, r1, 0x1c
    stfs f0, 0x64(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x44(r1)
    bl fn_8030D7E0
    lwz r3, 0xc8(r24)
    addi r4, r1, 0x38
    bl fn_801B7FB8
    lfs f0, lbl_804A17D8
    addi r3, r1, 0x38
    mr r4, r3
    stfs f0, 0x64(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x44(r1)
    bl PSMTXInverse
    addi r4, r1, 0x1c
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_8030D7E0
    lha r0, 0x0(r26)
    lfd f6, lbl_804A17E8
    xoris r0, r0, 0x8000
    lfs f3, 0x1c(r1)
    stw r0, 0xcc(r1)
    lfs f4, lbl_804A17DC
    lfd f0, 0xc8(r1)
    lfs f2, 0xa0(r24)
    fsubs f5, f0, f6
    lfs f1, 0xa4(r24)
    lfs f0, 0xa8(r24)
    fmuls f3, f3, f5
    fmuls f3, f4, f3
    fadds f2, f2, f3
    stfs f2, 0xa0(r24)
    lha r0, 0x0(r26)
    lfs f2, 0x20(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f3, 0xd0(r1)
    fsubs f3, f3, f6
    fmuls f2, f2, f3
    fmuls f2, f4, f2
    fadds f1, f1, f2
    stfs f1, 0xa4(r24)
    lha r0, 0x0(r26)
    lfs f1, 0x24(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    lfd f2, 0xc8(r1)
    fsubs f2, f2, f6
    fmuls f1, f1, f2
    fmuls f1, f4, f1
    fadds f0, f0, f1
    stfs f0, 0xa8(r24)
lbl_801B5C24:
    lbz r0, 0x2(r26)
    cmpwi r0, 0x0
    beq lbl_801B5D04
    lfs f1, 0x30(r27)
    lfs f0, 0x38(r27)
    stw r0, 0xd4(r1)
    fmuls f3, f1, f0
    lwz r3, 0xc8(r27)
    lfd f2, lbl_804A17C8
    lfs f0, 0x58(r3)
    lfd f1, 0xd0(r1)
    fmuls f3, f3, f0
    lfs f0, lbl_804A17DC
    fsubs f1, f1, f2
    fmuls f1, f1, f3
    fmuls f0, f0, f1
    stfs f0, 0x30(r24)
    lwz r4, 0xc8(r27)
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801B5C9C
    bge lbl_801B5C90
    cmpwi r0, 0x2000
    beq lbl_801B5CAC
    b lbl_801B5CCC
lbl_801B5C90:
    cmpwi r0, 0x6000
    beq lbl_801B5CBC
    b lbl_801B5CCC
lbl_801B5C9C:
    lfs f1, 0x34(r27)
    lfs f0, 0x38(r27)
    fmuls f1, f1, f0
    b lbl_801B5CD8
lbl_801B5CAC:
    lfs f1, 0x30(r27)
    lfs f0, 0x3c(r27)
    fmuls f1, f1, f0
    b lbl_801B5CD8
lbl_801B5CBC:
    lfs f1, 0x30(r27)
    lfs f0, 0x38(r27)
    fmuls f1, f1, f0
    b lbl_801B5CD8
lbl_801B5CCC:
    lfs f1, 0x34(r27)
    lfs f0, 0x3c(r27)
    fmuls f1, f1, f0
lbl_801B5CD8:
    lbz r0, 0x2(r26)
    lfs f0, 0x5c(r4)
    stw r0, 0xcc(r1)
    fmuls f3, f1, f0
    lfd f2, lbl_804A17C8
    lfd f1, 0xc8(r1)
    lfs f0, lbl_804A17DC
    fsubs f1, f1, f2
    fmuls f1, f1, f3
    fmuls f0, f0, f1
    stfs f0, 0x34(r24)
lbl_801B5D04:
    lbz r0, 0x3(r26)
    cmpwi r0, 0x0
    beq lbl_801B5E98
    lbz r12, lbl_804A17D0
    mr r4, r27
    lbz r11, lbl_804A17D1
    addi r5, r1, 0xc
    lbz r10, lbl_804A17D2
    addi r6, r1, 0x8
    lbz r9, lbl_804A17D3
    lbz r8, lbl_804A17D4
    lbz r7, lbl_804A17D5
    lbz r3, lbl_804A17D6
    lbz r0, lbl_804A17D7
    stb r12, 0xc(r1)
    stb r11, 0xd(r1)
    stb r10, 0xe(r1)
    stb r9, 0xf(r1)
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r3, 0xc8(r27)
    bl fn_801B823C
    mr r30, r27
    mr r29, r24
    li r28, 0x0
    lis r31, 0x51ec
lbl_801B5D74:
    lbz r4, 0x8(r26)
    cmpwi r4, 0x0
    beq lbl_801B5DFC
    clrlwi. r0, r4, 31
    li r23, 0xff
    beq lbl_801B5DA0
    lbz r3, 0x23(r30)
    addi r3, r3, 0x1
    slwi r0, r3, 8
    subf r23, r3, r0
    srwi r23, r23, 8
lbl_801B5DA0:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801B5DB8
    lbz r0, 0x27(r30)
    mullw r3, r23, r0
    addi r23, r3, 0xff
    srwi r23, r23, 8
lbl_801B5DB8:
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_801B5DE4
    mr r3, r27
    bl fn_801B60F0
    clrlwi r3, r3, 24
    lbz r0, 0xf(r1)
    mullw r3, r23, r3
    addi r3, r3, 0xff
    mullw r3, r3, r0
    addi r23, r3, 0xff
    srwi r23, r23, 16
lbl_801B5DE4:
    lbz r0, 0x3(r26)
    subi r3, r31, 0x7ae1
    mullw r0, r23, r0
    mulhwu r0, r3, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x23(r29)
lbl_801B5DFC:
    lbz r4, 0x9(r26)
    cmpwi r4, 0x0
    beq lbl_801B5E84
    clrlwi. r0, r4, 31
    li r23, 0xff
    beq lbl_801B5E28
    lbz r3, 0x23(r30)
    addi r3, r3, 0x1
    slwi r0, r3, 8
    subf r23, r3, r0
    srwi r23, r23, 8
lbl_801B5E28:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801B5E40
    lbz r0, 0x27(r30)
    mullw r3, r23, r0
    addi r23, r3, 0xff
    srwi r23, r23, 8
lbl_801B5E40:
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_801B5E6C
    mr r3, r27
    bl fn_801B60F0
    clrlwi r3, r3, 24
    lbz r0, 0xf(r1)
    mullw r3, r23, r3
    addi r3, r3, 0xff
    mullw r3, r3, r0
    addi r23, r3, 0xff
    srwi r23, r23, 16
lbl_801B5E6C:
    lbz r0, 0x3(r26)
    subi r3, r31, 0x7ae1
    mullw r0, r23, r0
    mulhwu r0, r3, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x27(r29)
lbl_801B5E84:
    addi r28, r28, 0x1
    addi r29, r29, 0x8
    cmpwi r28, 0x2
    addi r30, r30, 0x8
    blt lbl_801B5D74
lbl_801B5E98:
    lbz r0, 0x4(r26)
    cmpwi r0, 0x0
    beq lbl_801B5F88
    lis r5, 0x51ec
    li r0, 0x2
    mr r3, r27
    mr r4, r24
    subi r6, r5, 0x7ae1
    mtctr r0
lbl_801B5EBC:
    lbz r5, 0x20(r3)
    lbz r0, 0x4(r26)
    lbz r7, 0x21(r3)
    mullw r0, r5, r0
    lbz r8, 0x22(r3)
    mulhw r0, r6, r0
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    stb r0, 0x20(r4)
    lbz r0, 0x4(r26)
    mullw r0, r7, r0
    mulhw r0, r6, r0
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    stb r0, 0x21(r4)
    lbz r0, 0x4(r26)
    mullw r0, r8, r0
    mulhw r0, r6, r0
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    stb r0, 0x22(r4)
    lbz r5, 0x24(r3)
    lbz r0, 0x4(r26)
    lbz r7, 0x25(r3)
    mullw r0, r5, r0
    lbz r8, 0x26(r3)
    addi r3, r3, 0x8
    mulhw r0, r6, r0
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    stb r0, 0x24(r4)
    lbz r0, 0x4(r26)
    mullw r0, r7, r0
    mulhw r0, r6, r0
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    stb r0, 0x25(r4)
    lbz r0, 0x4(r26)
    mullw r0, r8, r0
    mulhw r0, r6, r0
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    stb r0, 0x26(r4)
    addi r4, r4, 0x8
    bdnz lbl_801B5EBC
lbl_801B5F88:
    lbz r0, 0x7(r26)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B60CC
    lbz r0, 0x9a(r27)
    lfd f1, lbl_804A17C8
    stw r0, 0xd4(r1)
    lfs f3, lbl_804A17E0
    lfd f0, 0xd0(r1)
    lfs f5, 0x40(r27)
    fsubs f4, f0, f1
    lfs f2, lbl_804A17BC
    lfs f1, lbl_804A17B8
    lfs f0, lbl_804A17C0
    fmuls f3, f3, f4
    fadds f5, f5, f3
    fdivs f2, f5, f2
    fmuls f1, f1, f2
    fsubs f1, f1, f0
    bl ceil
    frsp f0, f1
    lfd f5, lbl_804A17C8
    lfs f3, lbl_804A17E0
    lfs f2, lbl_804A17BC
    fctiwz f4, f0
    lfs f1, lbl_804A17B8
    lfs f0, lbl_804A17C0
    stfd f4, 0xd8(r1)
    lwz r3, 0xdc(r1)
    slwi r0, r3, 24
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 8
    add r0, r0, r3
    stb r0, 0x9a(r24)
    lbz r0, 0x9b(r27)
    lfs f6, 0x44(r27)
    stw r0, 0xcc(r1)
    lfd f4, 0xc8(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f6, f6, f3
    fdivs f2, f6, f2
    fmuls f1, f1, f2
    fsubs f1, f1, f0
    bl ceil
    frsp f0, f1
    lfd f5, lbl_804A17C8
    lfs f3, lbl_804A17E0
    lfs f2, lbl_804A17BC
    fctiwz f4, f0
    lfs f1, lbl_804A17B8
    lfs f0, lbl_804A17C0
    stfd f4, 0xe0(r1)
    lwz r3, 0xe4(r1)
    slwi r0, r3, 24
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 8
    add r0, r0, r3
    stb r0, 0x9b(r24)
    lbz r0, 0x9c(r27)
    lfs f6, 0x48(r27)
    stw r0, 0xd4(r1)
    lfd f4, 0xd0(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f6, f6, f3
    fdivs f2, f6, f2
    fmuls f1, f1, f2
    fsubs f1, f1, f0
    bl ceil
    frsp f0, f1
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r3, 0xec(r1)
    slwi r0, r3, 24
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 8
    add r0, r0, r3
    stb r0, 0x9c(r24)
lbl_801B60CC:
    li r3, 0x1
    opword 0xE3E10128
    lfd f31, 0x120(r1)
    addi r11, r1, 0x120
    bl _restgpr_23
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// fn_801B60F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B60F0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lwz r4, 0xc8(r3)
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r31, 0x24(r4)
    lbz r9, 0x10d(r31)
    cmpwi r9, 0x0
    bne lbl_801B6120
    li r3, 0xff
    b lbl_801B630C
lbl_801B6120:
    lhz r8, 0x10e(r31)
    lis r5, 0x14a4
    lbz r0, 0x110(r31)
    addi r7, r5, 0x299b
    lbz r6, 0x99(r3)
    lis r4, 0x1
    mullw r5, r0, r8
    subi r0, r4, 0x1
    extsb r4, r6
    mullw r4, r5, r4
    mulhw r4, r7, r4
    srawi r4, r4, 10
    srwi r5, r4, 31
    add r4, r4, r5
    add r4, r8, r4
    cmplwi r4, 0xffff
    bgt lbl_801B6168
    clrlwi r0, r4, 16
lbl_801B6168:
    lhz r3, 0xdc(r3)
    clrlwi r4, r0, 16
    cmpwi r9, 0x3
    li r5, 0x0
    subi r3, r3, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    clrlwi r6, r0, 16
    beq lbl_801B6230
    bge lbl_801B61A4
    cmpwi r9, 0x1
    beq lbl_801B61B4
    bge lbl_801B620C
    b lbl_801B62EC
lbl_801B61A4:
    cmpwi r9, 0x5
    beq lbl_801B627C
    bge lbl_801B62EC
    b lbl_801B6250
lbl_801B61B4:
    clrlslwi r0, r6, 16, 1
    cmpw r0, r4
    bgt lbl_801B61E0
    lbz r3, 0x111(r31)
    clrlslwi r0, r6, 16, 2
    mullw r0, r3, r0
    subfic r3, r3, 0x80
    divw r0, r0, r4
    add r0, r3, r0
    extsh r5, r0
    b lbl_801B62EC
lbl_801B61E0:
    lbz r5, 0x111(r31)
    mullw r0, r5, r6
    slwi r3, r5, 2
    subf r3, r5, r3
    slwi r0, r0, 2
    neg r0, r0
    divw r0, r0, r4
    add r3, r3, r0
    addi r0, r3, 0x80
    extsh r5, r0
    b lbl_801B62EC
lbl_801B620C:
    lbz r3, 0x111(r31)
    mullw r0, r3, r6
    slwi r0, r0, 1
    neg r0, r0
    divw r0, r0, r4
    add r3, r3, r0
    addi r0, r3, 0x80
    extsh r5, r0
    b lbl_801B62EC
lbl_801B6230:
    lbz r3, 0x111(r31)
    clrlslwi r0, r6, 16, 1
    mullw r0, r3, r0
    subfic r3, r3, 0x80
    divw r0, r0, r4
    add r0, r3, r0
    extsh r5, r0
    b lbl_801B62EC
lbl_801B6250:
    clrlslwi r0, r6, 16, 1
    cmpw r0, r4
    bgt lbl_801B626C
    lbz r3, 0x111(r31)
    addi r0, r3, 0x80
    extsh r5, r0
    b lbl_801B62EC
lbl_801B626C:
    lbz r0, 0x111(r31)
    subfic r0, r0, 0x80
    extsh r5, r0
    b lbl_801B62EC
lbl_801B627C:
    lis r30, 0x4330
    stw r6, 0xc(r1)
    lfd f4, lbl_804A17C8
    stw r30, 0x8(r1)
    lfs f2, lbl_804A17F4
    lfd f0, 0x8(r1)
    stw r4, 0x14(r1)
    fsubs f3, f0, f4
    lfs f0, lbl_804A17F0
    stw r30, 0x10(r1)
    lfd f1, 0x10(r1)
    fmuls f2, f2, f3
    fsubs f1, f1, f4
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl SinFIdx__Q24nw4r4mathFf
    lbz r0, 0x111(r31)
    stw r30, 0x18(r1)
    lfd f3, lbl_804A17C8
    stw r0, 0x1c(r1)
    lfs f0, lbl_804A17B8
    lfd f2, 0x18(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r5, 0x24(r1)
lbl_801B62EC:
    extsh. r0, r5
    bge lbl_801B62F8
    li r5, 0x0
lbl_801B62F8:
    extsh r0, r5
    cmpwi r0, 0xff
    ble lbl_801B6308
    li r5, 0xff
lbl_801B6308:
    clrlwi r3, r5, 24
lbl_801B630C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801B6324
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B6324() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80360730@ha
    li r4, 0x14
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80360730@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x1c(r3)
    addi r3, r3, 0x38
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r3, r31, 0x44
    li r4, 0x14
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r0, 0x0
    mr r3, r31
    sth r0, 0x50(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B637C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B637C() {
    nofralloc
    mr r4, r3
    lwz r3, 0x20(r3)
    b fn_801AAFC4
}

// ----------------------------------------------------------------------------
// fn_801B6388
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B6388() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801B638C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B638C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0xc8(r4)
    lwz r0, 0x10(r5)
    subic. r0, r0, 0x1
    stw r0, 0x10(r5)
    bne lbl_801B63DC
    lwz r0, 0xc(r5)
    cmpwi r0, 0x2
    bne lbl_801B63DC
    lwz r12, 0x1c(r5)
    mr r3, r5
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801B63DC:
    mr r4, r31
    addi r3, r30, 0x38
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    mr r4, r31
    addi r3, r30, 0x44
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    li r0, 0x3
    li r3, 0x1
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B6418
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B6418() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r29, 0x38(r3)
    mr r27, r3
    li r30, 0x0
    li r31, 0x2
    b lbl_801B64B4
lbl_801B6440:
    lhz r0, 0x42(r27)
    lwz r4, 0xc(r29)
    add r3, r29, r0
    cmpwi r4, 0x1
    lwz r28, 0x4(r3)
    bne lbl_801B64B0
    beq lbl_801B6464
    li r0, 0x0
    b lbl_801B64AC
lbl_801B6464:
    lhz r4, 0x50(r27)
    mr r3, r29
    subi r0, r4, 0x1
    sth r0, 0x50(r27)
    lwz r12, 0x1c(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r31, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    bne lbl_801B64A8
    lwz r12, 0x1c(r29)
    mr r3, r29
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801B64A8:
    li r0, 0x1
lbl_801B64AC:
    add r30, r30, r0
lbl_801B64B0:
    mr r29, r28
lbl_801B64B4:
    cmpwi r29, 0x0
    bne lbl_801B6440
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B64D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B64D8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A17FC
    li r8, 0x0
    stw r0, 0x14(r1)
    li r7, 0x1
    lfs f1, lbl_804A17F8
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r8, 0x10(r3)
    stw r7, 0xc(r3)
    stw r8, 0x38(r3)
    sth r8, 0x40(r3)
    stw r8, 0x3c(r3)
    stw r8, 0x44(r3)
    sth r8, 0x4c(r3)
    stw r8, 0x48(r3)
    sth r8, 0x50(r3)
    stfs f1, 0x58(r3)
    stfs f1, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stfs f0, 0x68(r3)
    stw r4, 0x20(r3)
    lwz r6, 0x10(r4)
    addi r0, r6, 0x1
    stw r0, 0x10(r4)
    lwz r0, 0x8(r3)
    stw r5, 0x24(r3)
    clrlwi r0, r0, 16
    stw r8, 0x28(r3)
    stb r7, 0x8a(r3)
    lwz r4, lbl_8049D970
    cmpw r4, r0
    bne lbl_801B6570
    li r0, -0x1
    stw r0, lbl_8049D970
lbl_801B6570:
    lwz r4, 0x20(r3)
    lwz r30, 0x24(r3)
    lwz r3, 0xbc(r4)
    lbz r4, 0x148(r30)
    lwz r3, 0x20(r3)
    lwz r3, 0x8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r3, 0x2c(r31)
    li r3, 0x1
    stw r0, 0x54(r31)
    lfs f0, 0x11c(r30)
    lbz r0, 0x113(r30)
    stb r0, 0x6c(r31)
    lbz r0, 0x114(r30)
    stb r0, 0x6d(r31)
    lbz r0, 0x115(r30)
    stb r0, 0x6e(r31)
    lbz r0, 0x116(r30)
    stb r0, 0x6f(r31)
    lbz r0, 0x117(r30)
    stb r0, 0x70(r31)
    lbz r0, 0x118(r30)
    stb r0, 0x71(r31)
    lbz r0, 0x119(r30)
    stb r0, 0x72(r31)
    lbz r0, 0x11a(r30)
    stb r0, 0x73(r31)
    lbz r0, 0x11b(r30)
    stb r0, 0x74(r31)
    stfs f0, 0x78(r31)
    lfs f0, 0x120(r30)
    stfs f0, 0x7c(r31)
    lfs f0, 0x124(r30)
    stfs f0, 0x80(r31)
    lfs f0, 0x128(r30)
    stfs f0, 0x84(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B6628
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B6628() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801B6650
    cmpwi r4, 0x0
    ble lbl_801B6650
    bl dtor_80136CFC
lbl_801B6650:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B6668
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B6668() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x48
    stfd f31, 0x48(r1)
    bl _savegpr_22
    lwz r11, 0x20(r3)
    mr r31, r3
    fmr f31, f1
    mr r22, r4
    lwz r3, 0xbc(r11)
    mr r23, r5
    mr r30, r6
    mr r24, r7
    lwz r3, 0x20(r3)
    mr r25, r8
    mr r26, r9
    mr r27, r10
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_801B66D8
    li r3, 0x0
    b lbl_801B6778
lbl_801B66D8:
    lwz r5, 0x0(r30)
    fmr f1, f31
    lwz r29, 0x4(r30)
    mr r4, r22
    lwz r30, 0x8(r30)
    mr r7, r31
    lwz r12, 0x0(r23)
    lwz r11, 0x4(r23)
    mr r8, r24
    lwz r0, 0x8(r23)
    mr r9, r25
    stw r5, 0x8(r1)
    mr r10, r26
    addi r5, r1, 0x14
    addi r6, r1, 0x8
    stw r29, 0xc(r1)
    stw r30, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r0, 0x1c(r1)
    lwz r12, 0x1c(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801B6748
    li r3, 0x0
    b lbl_801B6778
lbl_801B6748:
    lhz r0, 0xe2(r28)
    mr r4, r28
    addi r3, r31, 0x38
    add r0, r0, r27
    sth r0, 0xe2(r28)
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r4, 0x50(r31)
    li r0, 0x1
    mr r3, r28
    addi r4, r4, 0x1
    sth r4, 0x50(r31)
    stw r0, 0xc(r28)
lbl_801B6778:
    addi r11, r1, 0x48
    lfd f31, 0x48(r1)
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801B6794
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B6794() {
    nofralloc
    stwu r1, -0x5d0(r1)
    mflr r0
    stw r0, 0x5d4(r1)
    stfd f31, 0x5c0(r1)
    opword 0xF3E105C8
    stfd f30, 0x5b0(r1)
    opword 0xF3C105B8
    stfd f29, 0x5a0(r1)
    opword 0xF3A105A8
    stfd f28, 0x590(r1)
    opword 0xF3810598
    stfd f27, 0x580(r1)
    opword 0xF3610588
    stfd f26, 0x570(r1)
    opword 0xF3410578
    stfd f25, 0x560(r1)
    opword 0xF3210568
    stfd f24, 0x550(r1)
    opword 0xF3010558
    stfd f23, 0x540(r1)
    opword 0xF2E10548
    stfd f22, 0x530(r1)
    opword 0xF2C10538
    stfd f21, 0x520(r1)
    opword 0xF2A10528
    stfd f20, 0x510(r1)
    opword 0xF2810518
    addi r11, r1, 0x510
    bl _savegpr_14
    lis r0, 0x4330
    lwz r4, 0x54(r3)
    stw r0, 0x490(r1)
    mr r31, r3
    addi r3, r3, 0x38
    stw r0, 0x498(r1)
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    stw r3, 0x4a4(r1)
    beq lbl_801B7C60
    lwz r3, 0x20(r31)
    lwz r22, 0x4a4(r1)
    lwz r3, 0xbc(r3)
    lwz r12, 0x48(r3)
    cmpwi r12, 0x0
    beq lbl_801B685C
    mr r3, r31
    mr r5, r22
    addi r4, r31, 0x38
    mtctr r12
    bctrl
lbl_801B685C:
    lbz r0, 0x8a(r31)
    cmpwi r0, 0x0
    beq lbl_801B68A0
    lwz r3, 0x20(r31)
    addi r4, r1, 0x1c8
    bl fn_801ACC48
    lwz r8, 0x28(r31)
    addi r3, r31, 0x8c
    lbz r0, 0x88(r31)
    addi r4, r1, 0x1c8
    clrlwi r5, r8, 31
    extrwi r6, r8, 1, 30
    extsb r7, r0
    extrwi r8, r8, 1, 29
    bl fn_801ACA14
    li r0, 0x0
    stb r0, 0x8a(r31)
lbl_801B68A0:
    lwz r5, 0x8c(r31)
    addi r3, r1, 0x460
    lwz r0, 0x90(r31)
    addi r4, r1, 0x430
    stw r5, 0x460(r1)
    stw r0, 0x464(r1)
    lwz r5, 0x94(r31)
    lwz r0, 0x98(r31)
    stw r5, 0x468(r1)
    stw r0, 0x46c(r1)
    lwz r5, 0x9c(r31)
    lwz r0, 0xa0(r31)
    stw r5, 0x470(r1)
    stw r0, 0x474(r1)
    lwz r5, 0xa4(r31)
    lwz r0, 0xa8(r31)
    stw r5, 0x478(r1)
    stw r0, 0x47c(r1)
    lwz r5, 0xac(r31)
    lwz r0, 0xb0(r31)
    stw r5, 0x480(r1)
    stw r0, 0x484(r1)
    lwz r5, 0xb4(r31)
    lwz r0, 0xb8(r31)
    stw r5, 0x488(r1)
    stw r0, 0x48c(r1)
    bl PSMTXInverse
    lwz r3, 0x20(r31)
    addi r4, r1, 0x400
    bl fn_801ACC48
    lfs f3, 0x420(r1)
    addi r3, r1, 0x140
    lfs f1, 0x424(r1)
    lfs f2, 0x410(r1)
    fadds f5, f3, f1
    lfs f0, 0x414(r1)
    lfs f1, 0x400(r1)
    fadds f3, f2, f0
    lfs f0, 0x404(r1)
    lfs f4, 0x428(r1)
    fadds f1, f1, f0
    lfs f2, 0x418(r1)
    lfs f0, 0x408(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x148(r1)
    stfs f2, 0x144(r1)
    stfs f0, 0x140(r1)
    bl fn_8030DE88
    lfs f0, lbl_804A1800
    addi r3, r1, 0x430
    addi r4, r1, 0x400
    addi r5, r1, 0x3d0
    fmuls f21, f0, f1
    bl PSMTXConcat
    addi r3, r1, 0x3d0
    addi r4, r1, 0x3a0
    bl PSMTXInverse
    lwz r12, 0x43c(r1)
    addi r3, r1, 0x370
    lwz r8, 0x44c(r1)
    addi r4, r1, 0x340
    lwz r0, 0x45c(r1)
    lwz r16, 0x430(r1)
    lwz r15, 0x434(r1)
    lwz r14, 0x438(r1)
    lwz r11, 0x440(r1)
    lwz r10, 0x444(r1)
    lwz r9, 0x448(r1)
    lwz r7, 0x450(r1)
    lwz r6, 0x454(r1)
    lwz r5, 0x458(r1)
    stw r12, 0x37c(r1)
    lfs f0, lbl_804A17FC
    stw r8, 0x38c(r1)
    stw r0, 0x39c(r1)
    stw r16, 0x370(r1)
    stw r15, 0x374(r1)
    stw r14, 0x378(r1)
    stw r11, 0x380(r1)
    stw r10, 0x384(r1)
    stw r9, 0x388(r1)
    stw r7, 0x390(r1)
    stw r6, 0x394(r1)
    stw r5, 0x398(r1)
    stfs f0, 0x37c(r1)
    stfs f0, 0x38c(r1)
    stfs f0, 0x39c(r1)
    bl PSMTXInverse
    lwz r0, 0x3ec(r1)
    addi r24, r1, 0xec
    lwz r23, 0x3e8(r1)
    addi r27, r1, 0x134
    stw r0, 0x4a8(r1)
    addi r14, r1, 0x400
    lwz r0, 0x3fc(r1)
    addi r28, r1, 0xb0
    stw r23, 0x4bc(r1)
    addi r26, r1, 0x310
    lwz r23, 0x3f0(r1)
    addi r25, r1, 0xf8
    stw r0, 0x4b8(r1)
    lis r30, 0x3
    lwz r0, 0x3e0(r1)
    lwz r3, 0x3dc(r1)
    stw r23, 0x4ac(r1)
    lwz r23, 0x3f4(r1)
    stw r0, 0x2f0(r1)
    lwz r0, 0x4bc(r1)
    stw r3, 0x2ec(r1)
    lwz r3, 0x4a8(r1)
    stw r23, 0x4b0(r1)
    lwz r17, 0x3ac(r1)
    stw r0, 0x2f8(r1)
    lwz r0, 0x4ac(r1)
    lwz r11, 0x3bc(r1)
    lwz r7, 0x3cc(r1)
    stw r3, 0x2fc(r1)
    lfs f22, lbl_804A17FC
    lwz r3, 0x4b8(r1)
    lwz r23, 0x3f8(r1)
    stw r0, 0x300(r1)
    lwz r0, 0x4b0(r1)
    lwz r21, 0x3a0(r1)
    lwz r20, 0x3a4(r1)
    lwz r18, 0x3a8(r1)
    lwz r16, 0x3b0(r1)
    lwz r15, 0x3b4(r1)
    lwz r12, 0x3b8(r1)
    lwz r10, 0x3c0(r1)
    lwz r9, 0x3c4(r1)
    lwz r8, 0x3c8(r1)
    lwz r6, 0x3d0(r1)
    lwz r5, 0x3d4(r1)
    lwz r4, 0x3d8(r1)
    lwz r29, 0x3e4(r1)
    stw r17, 0x31c(r1)
    lfs f25, lbl_804A17F8
    stw r11, 0x32c(r1)
    lfd f23, lbl_804A1828
    stw r7, 0x33c(r1)
    lfs f24, lbl_804A1804
    stw r3, 0x30c(r1)
    lfd f26, lbl_804A1830
    stw r0, 0x304(r1)
    mr r0, r23
    lfs f27, lbl_804A1808
    stw r23, 0x4b4(r1)
    lfs f28, lbl_804A1810
    stw r21, 0x310(r1)
    lfs f29, lbl_804A180C
    stw r20, 0x314(r1)
    lfs f30, lbl_804A1814
    stw r18, 0x318(r1)
    lfs f31, lbl_804A1820
    stw r16, 0x320(r1)
    stw r15, 0x324(r1)
    stw r12, 0x328(r1)
    stw r10, 0x330(r1)
    stw r9, 0x334(r1)
    stw r8, 0x338(r1)
    stfs f22, 0x31c(r1)
    stfs f22, 0x32c(r1)
    stfs f22, 0x33c(r1)
    stw r6, 0x2e0(r1)
    stw r5, 0x2e4(r1)
    stw r4, 0x2e8(r1)
    stw r29, 0x2f4(r1)
    stw r0, 0x308(r1)
    stfs f22, 0x2ec(r1)
    stfs f22, 0x2fc(r1)
    stfs f22, 0x30c(r1)
    b lbl_801B7C20
lbl_801B6B58:
    lhz r3, 0x42(r31)
    lwz r0, 0xc(r22)
    add r3, r22, r3
    cmpwi r0, 0x1
    lwz r0, 0x4(r3)
    stw r0, 0x4a0(r1)
    bne lbl_801B7C1C
    lwz r0, 0xd8(r22)
    cmpwi r0, 0x0
    bne lbl_801B7C1C
    li r0, 0x1
    stw r0, 0xd8(r22)
    lhz r0, 0xe2(r22)
    cmpwi r0, 0x0
    beq lbl_801B6BA8
    lwz r3, 0x20(r31)
    lwz r3, 0xbc(r3)
    lwz r0, 0x50(r3)
    oris r0, r0, 0x1
    stw r0, 0x50(r3)
lbl_801B6BA8:
    lwz r3, 0xac(r22)
    lwz r0, 0xb0(r22)
    stw r3, 0x134(r1)
    stw r0, 0x138(r1)
    lwz r0, 0xb4(r22)
    stw r0, 0x13c(r1)
    lwz r3, 0xa0(r22)
    lwz r0, 0xa4(r22)
    lwz r4, 0xa8(r22)
    opword 0xE07600AC
    opword 0xE05600B8
    lfs f0, 0xac(r22)
    opword 0x10231028
    opword 0xE07680B4
    opword 0xE05680C0
    stw r3, 0x128(r1)
    stfs f0, 0xb8(r22)
    lfs f0, 0xb0(r22)
    opword 0xF0210098
    opword 0x10231028
    stfs f0, 0xbc(r22)
    lfs f3, 0x98(r1)
    lfs f0, 0xb4(r22)
    opword 0xF02180A0
    lfs f2, 0x9c(r1)
    stfs f0, 0xc0(r22)
    lfs f1, 0xa0(r1)
    stw r0, 0x12c(r1)
    lhz r3, 0xe0(r22)
    lhz r0, 0xdc(r22)
    stw r4, 0x130(r1)
    cmplw r3, r0
    stfs f3, 0x11c(r1)
    stfs f2, 0x120(r1)
    stfs f1, 0x124(r1)
    bgt lbl_801B6C90
    lwz r0, 0xc(r22)
    cmpwi r0, 0x1
    bne lbl_801B7C1C
    lhz r4, 0x50(r31)
    mr r3, r22
    subi r0, r4, 0x1
    sth r0, 0x50(r31)
    lwz r12, 0x1c(r22)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0xc(r22)
    lwz r0, 0x10(r22)
    cmpwi r0, 0x0
    bne lbl_801B7C1C
    lwz r12, 0x1c(r22)
    mr r3, r22
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_801B7C1C
lbl_801B6C90:
    cmpwi r0, 0x0
    stfs f22, 0x110(r1)
    li r20, 0x0
    li r18, 0x0
    stfs f22, 0x114(r1)
    stfs f22, 0x118(r1)
    stfs f22, 0x104(r1)
    stfs f22, 0x108(r1)
    stfs f22, 0x10c(r1)
    bne lbl_801B6CC0
    li r21, 0x0
    b lbl_801B7804
lbl_801B6CC0:
    lwz r3, 0x24(r31)
    lwz r0, 0x4(r3)
    add r3, r0, r3
    lwzu r0, 0x8(r3)
    add r3, r0, r3
    lhz r21, 0x6(r3)
    b lbl_801B7804
lbl_801B6CDC:
    lwzx r3, r5, r6
    add r4, r5, r6
    clrlslwi r0, r21, 16, 2
    add r3, r3, r4
    addi r3, r3, 0x4
    add r3, r3, r0
    lwz r23, 0x4(r3)
    lbz r3, 0x4(r23)
    rlwinm. r0, r3, 0, 28, 28
    bne lbl_801B7800
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_801B6D38
    lwz r3, 0xc8(r22)
    lwz r3, 0x20(r3)
    lwz r0, 0x20(r3)
    lwz r17, 0xe4(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801B6D2C
    li r16, -0x1
    b lbl_801B6D30
lbl_801B6D2C:
    lhz r16, 0x3c(r3)
lbl_801B6D30:
    lhz r15, 0xea(r3)
    b lbl_801B6D44
lbl_801B6D38:
    lhz r17, 0xdc(r22)
    lhz r16, 0xe0(r22)
    lhz r15, 0xde(r22)
lbl_801B6D44:
    lbz r3, 0x0(r23)
    addi r0, r3, 0x55
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801B7800
    lbz r0, 0x2(r23)
    lbz r29, 0x1(r23)
    cmplwi r0, 0x7
    bgt lbl_801B7800
    lis r3, jumptable_8036070C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8036070C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r23
    mr r4, r22
    mr r5, r17
    mr r6, r15
    mr r7, r16
    bl fn_801B03BC
    b lbl_801B7800
    mr r3, r23
    mr r4, r22
    mr r5, r17
    mr r6, r15
    mr r7, r16
    bl fn_801B0AF4
    b lbl_801B7800
    mr r3, r23
    mr r5, r17
    mr r6, r15
    mr r7, r16
    addi r4, r22, 0x40
    bl fn_801AF2C4
    b lbl_801B7800
    add r4, r22, r29
    mr r3, r23
    mr r5, r17
    mr r6, r15
    mr r7, r16
    addi r4, r4, 0x20
    bl fn_801ACFE0
    b lbl_801B7800
    add r4, r22, r29
    mr r3, r23
    mr r5, r17
    mr r6, r15
    mr r7, r16
    addi r4, r4, 0x20
    bl fn_801AE2D8
    b lbl_801B7800
    lwz r4, 0xc(r23)
    addi r3, r1, 0x14c
    lwz r0, 0x10(r23)
    li r5, 0x1c
    add r6, r23, r4
    lwz r4, 0x14(r23)
    add r6, r6, r0
    lwz r0, 0x18(r23)
    add r4, r6, r4
    add r4, r4, r0
    addi r4, r4, 0x20
    bl memcpy
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    beq lbl_801B6E68
    mr r3, r23
    mr r5, r17
    mr r6, r15
    mr r7, r16
    addi r4, r1, 0x150
    bl fn_801AE2D8
lbl_801B6E68:
    cmplwi r29, 0x6
    beq lbl_801B6E80
    addi r0, r29, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_801B6F04
lbl_801B6E80:
    lbz r0, 0x14c(r1)
    cmplwi r0, 0x1
    bne lbl_801B6EA0
    addi r3, r1, 0x3a0
    mr r4, r27
    mr r5, r28
    bl fn_8030D7E0
    b lbl_801B6EEC
lbl_801B6EA0:
    addi r3, r1, 0x460
    mr r4, r27
    mr r5, r28
    bl fn_8030D7E0
    addi r4, r1, 0x8c
    stfs f22, 0x8c(r1)
    mr r3, r14
    stfs f22, 0x90(r1)
    mr r5, r4
    stfs f22, 0x94(r1)
    bl fn_8030D7E0
    opword 0xE01C0000
    opword 0xE021008C
    opword 0x10400828
    opword 0xE01C8008
    opword 0xE0218094
    opword 0xF05C0000
    opword 0x10400828
    opword 0xF05C8008
lbl_801B6EEC:
    lfs f2, 0xb0(r1)
    lfs f1, 0xb4(r1)
    lfs f0, 0xb8(r1)
    stfs f2, 0xf8(r1)
    stfs f1, 0xfc(r1)
    stfs f0, 0x100(r1)
lbl_801B6F04:
    cmplwi r29, 0x8
    stfs f22, 0xec(r1)
    stfs f22, 0xf0(r1)
    stfs f22, 0xf4(r1)
    bgt lbl_801B7698
    lis r3, jumptable_803606E8@ha
    slwi r0, r29, 2
    addi r3, r3, jumptable_803606E8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f0, 0x150(r1)
    opword 0xE0210128
    fsubs f2, f0, f25
    opword 0x10010098
    opword 0xE0218130
    opword 0xF00100EC
    opword 0x10010098
    opword 0xF00180F4
    b lbl_801B7698
    lfs f2, 0x154(r1)
    addi r3, r1, 0x80
    lfs f1, 0x158(r1)
    addi r4, r1, 0xec
    lfs f0, 0x15c(r1)
    stfs f2, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x88(r1)
    bl fn_801B9CD8
    lfs f2, 0x150(r1)
    opword 0xE02100EC
    opword 0x10010098
    opword 0xE02180F4
    opword 0xF00100EC
    opword 0x10010098
    opword 0xF00180F4
    b lbl_801B7698
    lis r3, 0x3f82
    lbz r0, 0x4(r23)
    subi r7, r3, 0x9cb
    lhz r6, 0x6(r23)
    lis r3, 0x30a7
    clrlwi r4, r17, 16
    addi r5, r3, 0x4193
    rlwinm. r0, r0, 0, 27, 27
    lis r3, 0x3711
    subi r3, r3, 0x6819
    mullw r3, r4, r3
    mullw r4, r15, r7
    addis r3, r3, 0x5
    mullw r0, r6, r5
    add r0, r4, r0
    add r3, r0, r3
    subi r0, r3, 0x40ad
    stw r0, 0x1c(r1)
    lbz r4, 0x1e(r1)
    lbz r0, 0x1f(r1)
    lbz r3, 0x1d(r1)
    xor r4, r4, r0
    lbz r0, 0x1c(r1)
    xor r3, r3, r4
    stb r4, 0x1e(r1)
    xor r0, r0, r3
    stb r3, 0x1d(r1)
    stb r0, 0x1c(r1)
    bne lbl_801B7030
    cmpwi r17, 0x0
    beq lbl_801B7698
    lhz r3, 0x158(r1)
    addi r3, r3, 0x1
    divwu r0, r17, r3
    mullw r0, r0, r3
    subf. r0, r0, r17
    beq lbl_801B7054
    b lbl_801B7698
lbl_801B7030:
    lhz r0, 0xdc(r22)
    cmpwi r0, 0x0
    beq lbl_801B7054
    lhz r3, 0x158(r1)
    addi r3, r3, 0x1
    divwu r0, r17, r3
    mullw r0, r0, r3
    subf. r0, r0, r17
    bne lbl_801B7698
lbl_801B7054:
    lbz r0, 0x14f(r1)
    clrlwi. r0, r0, 31
    beq lbl_801B7114
    lbz r0, 0x14d(r1)
    cmpwi r0, 0x1
    beq lbl_801B7098
    bge lbl_801B70F8
    cmpwi r0, 0x0
    bge lbl_801B707C
    b lbl_801B70F8
lbl_801B707C:
    lfs f2, 0x128(r1)
    lfs f1, 0x12c(r1)
    lfs f0, 0x130(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    b lbl_801B70F8
lbl_801B7098:
    lhz r0, 0xdc(r22)
    cmpwi r0, 0x0
    bne lbl_801B70C0
    lfs f2, 0x128(r1)
    lfs f1, 0x12c(r1)
    lfs f0, 0x130(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    b lbl_801B70F8
lbl_801B70C0:
    lfs f0, 0xc4(r22)
    opword 0xE021011C
    fdivs f0, f25, f0
    opword 0x10610018
    opword 0xE0218124
    opword 0xF0610074
    opword 0x10610018
    lfs f2, 0x74(r1)
    opword 0xF061807C
    lfs f1, 0x78(r1)
    lfs f0, 0x7c(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
lbl_801B70F8:
    addi r4, r1, 0x5c
    mr r3, r26
    mr r5, r4
    bl fn_8030D7E0
    addi r3, r1, 0x5c
    bl fn_8030DE88
    stfs f1, 0x150(r1)
lbl_801B7114:
    lbz r3, 0x14f(r1)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_801B71E0
    lwz r5, 0x1c(r1)
    clrlwi. r0, r3, 31
    addi r4, r30, 0x43fd
    mullw r3, r5, r4
    srwi r0, r5, 16
    extsh r0, r0
    xoris r0, r0, 0x8000
    addis r5, r3, 0x27
    stw r0, 0x494(r1)
    subi r5, r5, 0x613d
    mullw r3, r5, r4
    lfd f0, 0x490(r1)
    srwi r0, r5, 16
    fsubs f0, f0, f23
    extsh r4, r0
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    fdivs f2, f0, f24
    srwi r0, r0, 16
    xoris r3, r4, 0x8000
    extsh r0, r0
    stw r3, 0x49c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x494(r1)
    lfd f1, 0x498(r1)
    lfd f0, 0x490(r1)
    fsubs f1, f1, f23
    stfs f2, 0xec(r1)
    fsubs f0, f0, f23
    fdivs f1, f1, f24
    fdivs f0, f0, f24
    stfs f1, 0xf0(r1)
    stfs f0, 0xf4(r1)
    beq lbl_801B71C0
    mr r3, r24
    mr r4, r24
    bl fn_801B9B90
    cmpwi r3, 0x0
    bne lbl_801B71C0
    stfs f25, 0xf0(r1)
lbl_801B71C0:
    lfs f2, 0x150(r1)
    opword 0xE0180000
    opword 0x10200098
    opword 0xE0188008
    opword 0xF0380000
    opword 0x10200098
    opword 0xF0388008
    b lbl_801B73B4
lbl_801B71E0:
    lhz r0, 0xdc(r22)
    cmpwi r0, 0x0
    bne lbl_801B7208
    lfs f2, 0x128(r1)
    lfs f1, 0x12c(r1)
    lfs f0, 0x130(r1)
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    b lbl_801B7220
lbl_801B7208:
    lfs f2, 0x11c(r1)
    lfs f1, 0x120(r1)
    lfs f0, 0x124(r1)
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
lbl_801B7220:
    addi r4, r1, 0x68
    mr r3, r26
    mr r5, r4
    bl fn_8030D7E0
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    bne lbl_801B7248
    stfs f25, 0x6c(r1)
lbl_801B7248:
    addi r3, r1, 0x198
    addi r4, r1, 0x68
    bl fn_801B9344
    lfs f2, 0x154(r1)
    fcmpu cr0, f22, f2
    beq lbl_801B7358
    lwz r0, 0x1c(r1)
    addi r5, r30, 0x43fd
    mr r3, r24
    mullw r4, r0, r5
    srwi r0, r0, 16
    stw r0, 0x49c(r1)
    lfd f0, 0x498(r1)
    addis r4, r4, 0x27
    fsubs f0, f0, f26
    subi r4, r4, 0x613d
    srwi r0, r4, 16
    stw r0, 0x494(r1)
    fdivs f1, f0, f27
    mullw r4, r4, r5
    lfd f0, 0x490(r1)
    addis r15, r4, 0x27
    subi r15, r15, 0x613d
    fsubs f0, f0, f26
    fmuls f1, f1, f2
    fdivs f0, f0, f27
    fmuls f0, f28, f0
    fmuls f20, f29, f0
    bl fn_801B9BF4
    lfs f0, 0xec(r1)
    fmr f1, f20
    addi r3, r1, 0x14
    addi r4, r1, 0x18
    stfs f0, 0xf4(r1)
    bl fn_801B9C64
    lfs f1, 0xec(r1)
    lfs f0, 0x14(r1)
    lbz r0, 0x14f(r1)
    fmuls f2, f1, f0
    lfs f1, 0xf4(r1)
    lfs f0, 0x18(r1)
    clrlwi. r0, r0, 31
    fmuls f0, f1, f0
    stfs f2, 0xec(r1)
    stfs f0, 0xf4(r1)
    beq lbl_801B7320
    lfs f2, 0x150(r1)
    opword 0xE0180000
    opword 0x10200098
    opword 0xE0188008
    opword 0xF0380000
    opword 0x10200098
    opword 0xF0388008
    b lbl_801B73A4
lbl_801B7320:
    srwi r0, r15, 16
    lfs f0, 0x150(r1)
    stw r0, 0x49c(r1)
    opword 0xE0580000
    lfd f1, 0x498(r1)
    fsubs f1, f1, f26
    fdivs f1, f1, f27
    fmuls f1, f1, f0
    opword 0x10020058
    opword 0xE0588008
    opword 0xF0180000
    opword 0x10020058
    opword 0xF0188008
    b lbl_801B73A4
lbl_801B7358:
    lbz r0, 0x14f(r1)
    stfs f22, 0xec(r1)
    clrlwi. r0, r0, 31
    beq lbl_801B7374
    lfs f0, 0x150(r1)
    stfs f0, 0xf0(r1)
    b lbl_801B73A0
lbl_801B7374:
    lwz r0, 0x1c(r1)
    lfs f0, 0x150(r1)
    srwi r0, r0, 16
    extsh r0, r0
    xoris r0, r0, 0x8000
    stw r0, 0x494(r1)
    lfd f1, 0x490(r1)
    fsubs f1, f1, f23
    fdivs f1, f1, f24
    fmuls f0, f1, f0
    stfs f0, 0xf0(r1)
lbl_801B73A0:
    stfs f22, 0xf4(r1)
lbl_801B73A4:
    mr r4, r24
    mr r5, r24
    addi r3, r1, 0x198
    bl fn_8030D7E0
lbl_801B73B4:
    lbz r0, 0x14f(r1)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801B73C4
    stfs f22, 0xec(r1)
lbl_801B73C4:
    lbz r0, 0x14f(r1)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801B73D4
    stfs f22, 0xf0(r1)
lbl_801B73D4:
    lbz r0, 0x14f(r1)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_801B7698
    stfs f22, 0xf4(r1)
    b lbl_801B7698
    lfs f2, 0x154(r1)
    addi r3, r1, 0x50
    lfs f1, 0x158(r1)
    addi r4, r1, 0x44
    lfs f0, 0x15c(r1)
    stfs f2, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x58(r1)
    bl fn_801B9CD8
    lfs f0, 0x150(r1)
    addi r3, r1, 0x168
    addi r4, r1, 0x44
    fmuls f1, f30, f0
    bl MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f
    mr r4, r25
    mr r5, r24
    addi r3, r1, 0x168
    bl fn_8030D7E0
    opword 0xE0180000
    opword 0xE0390000
    opword 0x10400828
    opword 0xE0188008
    opword 0xE0398008
    opword 0xF0580000
    opword 0x10400828
    opword 0xF0588008
    b lbl_801B7698
    opword 0xE0010154
    mr r3, r24
    opword 0xE02100F8
    mr r4, r24
    opword 0x10400828
    opword 0xE001815C
    opword 0xE0218100
    opword 0xF0580000
    opword 0x10400828
    opword 0xF0588008
    bl fn_801B9B90
    lfs f2, 0x150(r1)
    opword 0xE0180000
    opword 0x10200098
    opword 0xE0188008
    opword 0xF0380000
    opword 0x10200098
    opword 0xF0388008
    b lbl_801B7698
    opword 0xE0010158
    mr r3, r24
    opword 0xE02100F8
    mr r4, r24
    opword 0x10400828
    opword 0xE0018160
    opword 0xE0218100
    opword 0xF0580000
    opword 0x10400828
    opword 0xE0180000
    opword 0xF0588008
    opword 0x10000032
    lfs f1, 0xf4(r1)
    opword 0x1281007A
    opword 0x12940014
    bl fn_801B9B90
    lfs f3, 0x150(r1)
    opword 0xE0380000
    lfs f0, 0x154(r1)
    opword 0x104100D8
    opword 0xE0388008
    fmuls f0, f0, f0
    opword 0xF0580000
    opword 0x104100D8
    fcmpo cr0, f20, f0
    opword 0xF0588008
    ble lbl_801B7698
    fdivs f1, f0, f20
    opword 0xE0180000
    opword 0x10000058
    opword 0xF0180000
    opword 0x10020058
    opword 0xF0188008
    b lbl_801B7698
    lfs f2, 0x15c(r1)
    addi r3, r1, 0x38
    lfs f1, 0x160(r1)
    addi r4, r1, 0x20
    lfs f0, 0x164(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_801B9CD8
    opword 0xE0610024
    opword 0xE08100FC
    lfs f0, 0x158(r1)
    opword 0x10630132
    opword 0xE0818020
    opword 0xE02180F8
    fmuls f0, f0, f0
    opword 0xE0410020
    opword 0x1084187A
    opword 0xE02100F8
    stfs f0, 0x158(r1)
    opword 0x108418D4
    opword 0x10620118
    opword 0xE0418028
    opword 0xF061002C
    opword 0x10620118
    opword 0xE041002C
    opword 0x10411028
    opword 0xE0218100
    opword 0xF041002C
    opword 0x10411828
    opword 0xE021002C
    opword 0xF0418034
    opword 0x10210072
    lfs f2, 0x34(r1)
    opword 0x104208BA
    opword 0x10420854
    fcmpu cr0, f22, f2
    beq lbl_801B7698
    fcmpo cr0, f2, f0
    opword 0x4C411382
    bne lbl_801B75D4
    lfs f20, 0x154(r1)
    b lbl_801B75F0
lbl_801B75D4:
    fdivs f3, f2, f0
    lfs f0, 0x154(r1)
    lfs f1, 0x150(r1)
    fsubs f2, f25, f3
    fmuls f0, f3, f0
    fmuls f1, f2, f1
    fadds f20, f1, f0
lbl_801B75F0:
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_801B9B90
    mr r5, r24
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_8030DEEC
    opword 0xE0180000
    opword 0x10200518
    opword 0xE0188008
    opword 0xF0380000
    opword 0x10200518
    opword 0xF0388008
    b lbl_801B7698
    lwz r3, 0x20(r31)
    lfs f1, 0x114(r3)
    bl __fpclassifyf
    cmpwi r3, 0x1
    beq lbl_801B7698
    lwz r3, 0x20(r31)
    addi r4, r1, 0x288
    bl fn_801ACC48
    lfs f1, 0x2a4(r1)
    lfs f0, 0x294(r1)
    lwz r3, 0x20(r31)
    stfs f0, 0xe0(r1)
    lfs f0, 0x2b4(r1)
    stfs f1, 0xe4(r1)
    opword 0xE0430114
    opword 0xE02100E0
    stfs f0, 0xe8(r1)
    opword 0x10011028
    lfs f3, 0x150(r1)
    opword 0xE02180E8
    opword 0xF00100EC
    opword 0x10800090
    opword 0xE043811C
    opword 0x10011028
    opword 0x102400D8
    opword 0xF02100EC
    opword 0x102000D8
    opword 0xF02180F4
lbl_801B7698:
    lbz r0, 0x14c(r1)
    cmpwi r0, 0x2
    beq lbl_801B7714
    bge lbl_801B76B8
    cmpwi r0, 0x0
    beq lbl_801B76D8
    bge lbl_801B76C4
    b lbl_801B7714
lbl_801B76B8:
    cmpwi r0, 0x4
    bge lbl_801B7714
    b lbl_801B76EC
lbl_801B76C4:
    addi r4, r1, 0xec
    addi r3, r1, 0x2e0
    mr r5, r4
    bl fn_8030D7E0
    b lbl_801B7714
lbl_801B76D8:
    addi r4, r1, 0xec
    addi r3, r1, 0x370
    mr r5, r4
    bl fn_8030D7E0
    b lbl_801B7714
lbl_801B76EC:
    opword 0xE0180000
    mr r4, r24
    mr r5, r24
    addi r3, r1, 0x370
    opword 0x10200558
    opword 0xE0188008
    opword 0xF0380000
    opword 0x10200558
    opword 0xF0388008
    bl fn_8030D7E0
lbl_801B7714:
    lbz r0, 0x14d(r1)
    cmpwi r0, 0x1
    beq lbl_801B7754
    bge lbl_801B7800
    cmpwi r0, 0x0
    bge lbl_801B7730
    b lbl_801B7800
lbl_801B7730:
    opword 0xE0010110
    opword 0xE02100EC
    opword 0x1040082A
    opword 0xE0018118
    opword 0xE02180F4
    opword 0xF0410110
    opword 0x1040082A
    opword 0xF0418118
    b lbl_801B7800
lbl_801B7754:
    opword 0xE0010104
    opword 0xE02100EC
    opword 0x1040082A
    opword 0xE001810C
    opword 0xE02180F4
    opword 0xF0410104
    opword 0x1040082A
    opword 0xF041810C
    b lbl_801B7800
    lwz r0, 0x1c(r23)
    cmpwi r0, 0x0
    beq lbl_801B77D4
    lwz r4, 0xc(r23)
    addi r3, r1, 0x2b8
    lwz r0, 0x10(r23)
    li r5, 0x24
    add r6, r23, r4
    lwz r4, 0x14(r23)
    add r6, r6, r0
    lwz r0, 0x18(r23)
    add r4, r6, r4
    addi r20, r4, 0x20
    add r19, r20, r0
    mr r4, r19
    bl memcpy
    lwz r0, 0x18(r23)
    cmplwi r0, 0x4
    ble lbl_801B77D4
    lhz r0, 0x46(r19)
    slwi r0, r0, 2
    add r3, r20, r0
    lwz r18, 0x4(r3)
lbl_801B77D4:
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    beq lbl_801B77FC
    addi r4, r1, 0x2b8
    mr r3, r23
    mr r5, r17
    mr r6, r15
    mr r7, r16
    add r4, r4, r29
    bl fn_801AE2D8
lbl_801B77FC:
    li r20, 0x1
lbl_801B7800:
    addi r21, r21, 0x1
lbl_801B7804:
    lwz r5, 0x24(r31)
    clrlwi r3, r21, 16
    lwz r4, 0x4(r5)
    addi r6, r4, 0x8
    lwzx r0, r5, r6
    add r4, r5, r6
    add r4, r0, r4
    lhz r0, 0x4(r4)
    cmplw r3, r0
    blt lbl_801B6CDC
    cmpwi r20, 0x0
    beq lbl_801B7B7C
    lwz r4, 0xa0(r22)
    addi r11, r1, 0xd4
    lwz r0, 0xa4(r22)
    mr r3, r22
    opword 0xE0210110
    mr r5, r19
    stw r4, 0xd4(r1)
    mr r6, r18
    lwz r16, 0x104(r1)
    addi r4, r1, 0x2b8
    stw r0, 0xd8(r1)
    addi r7, r1, 0x400
    lwz r15, 0x108(r1)
    addi r8, r1, 0x430
    lwz r0, 0xa8(r22)
    addi r9, r1, 0x134
    opword 0xE00B0000
    addi r10, r1, 0xa4
    stw r0, 0xdc(r1)
    li r0, 0x0
    opword 0x1040082A
    opword 0xE0218118
    lwz r12, 0x10c(r1)
    opword 0xE00B8008
    opword 0xF04B0000
    opword 0x1040082A
    stb r0, 0x10(r1)
    mr r0, r11
    opword 0xF04B8008
    stw r16, 0xa4(r1)
    stw r15, 0xa8(r1)
    stw r12, 0xac(r1)
    stw r0, 0x8(r1)
    addi r0, r1, 0x10
    stw r0, 0xc(r1)
    bl fn_801B4C90
    lbz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_801B7928
    lwz r0, 0xc(r22)
    cmpwi r0, 0x1
    bne lbl_801B7C1C
    lhz r4, 0x50(r31)
    mr r3, r22
    subi r0, r4, 0x1
    sth r0, 0x50(r31)
    lwz r12, 0x1c(r22)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0xc(r22)
    lwz r0, 0x10(r22)
    cmpwi r0, 0x0
    bne lbl_801B7C1C
    lwz r12, 0x1c(r22)
    mr r3, r22
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_801B7C1C
lbl_801B7928:
    cmpwi r3, 0x0
    beq lbl_801B79B0
    lfs f8, 0xd4(r1)
    lfs f5, 0x104(r1)
    stfs f8, 0xa0(r22)
    lfs f3, 0x108(r1)
    lfs f7, 0xd8(r1)
    lfs f4, 0x10c(r1)
    stfs f7, 0xa4(r22)
    lfs f0, 0xdc(r1)
    stfs f0, 0xa8(r22)
    lfs f2, 0xc4(r22)
    lfs f1, 0xac(r22)
    fmuls f2, f5, f2
    fadds f6, f1, f2
    lfs f2, 0xc4(r22)
    lfs f1, 0xb0(r22)
    fmuls f2, f3, f2
    lfs f3, 0xc4(r22)
    fadds f5, f1, f2
    lfs f2, 0xb4(r22)
    fmuls f1, f8, f3
    fmuls f3, f4, f3
    fadds f1, f6, f1
    fadds f2, f2, f3
    stfs f1, 0xac(r22)
    lfs f1, 0xc4(r22)
    fmuls f1, f7, f1
    fadds f1, f5, f1
    stfs f1, 0xb0(r22)
    lfs f1, 0xc4(r22)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0xb4(r22)
lbl_801B79B0:
    lbz r0, 0x48(r19)
    clrlwi. r0, r0, 31
    beq lbl_801B7C10
    addi r3, r1, 0x258
    bl PSMTXIdentity
    addi r3, r1, 0x258
    addi r4, r19, 0x4c
    mr r5, r3
    bl fn_801BA008
    lfs f1, 0x58(r19)
    addi r3, r1, 0x228
    lfs f2, 0x5c(r19)
    lfs f3, 0x60(r19)
    bl fn_801B9E1C
    addi r4, r1, 0x258
    addi r3, r1, 0x228
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0x258
    lfs f1, 0x64(r19)
    lfs f2, 0x68(r19)
    mr r4, r3
    lfs f3, 0x6c(r19)
    bl PSMTXTransApply
    lbz r0, 0x48(r19)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B7A40
    lfs f3, 0x42c(r1)
    addi r3, r1, 0x258
    lfs f2, 0x41c(r1)
    mr r4, r3
    lfs f1, 0x40c(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xc8(r1)
    stfs f3, 0xd0(r1)
    bl PSMTXTransApply
lbl_801B7A40:
    addi r4, r1, 0x258
    addi r3, r1, 0x430
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0x258
    addi r4, r1, 0x1f8
    bl PSMTXInverse
    addi r3, r1, 0x1f8
    addi r4, r22, 0xac
    addi r5, r1, 0xbc
    bl fn_8030D7E0
    lfs f0, 0xbc(r1)
    li r0, 0x0
    fcmpo cr0, f0, f25
    ble lbl_801B7A9C
    fadds f1, f25, f0
    lfd f2, lbl_804A1818
    bl fmod
    frsp f0, f1
    li r0, 0x1
    fsubs f0, f0, f25
    stfs f0, 0xbc(r1)
    b lbl_801B7AC0
lbl_801B7A9C:
    fcmpo cr0, f0, f31
    bge lbl_801B7AC0
    fsubs f1, f0, f25
    lfd f2, lbl_804A1818
    bl fmod
    frsp f0, f1
    li r0, 0x1
    fadds f0, f25, f0
    stfs f0, 0xbc(r1)
lbl_801B7AC0:
    lfs f0, 0xc0(r1)
    fcmpo cr0, f0, f25
    ble lbl_801B7AEC
    fadds f1, f25, f0
    lfd f2, lbl_804A1818
    bl fmod
    frsp f0, f1
    li r0, 0x1
    fsubs f0, f0, f25
    stfs f0, 0xc0(r1)
    b lbl_801B7B10
lbl_801B7AEC:
    fcmpo cr0, f0, f31
    bge lbl_801B7B10
    fsubs f1, f0, f25
    lfd f2, lbl_804A1818
    bl fmod
    frsp f0, f1
    li r0, 0x1
    fadds f0, f25, f0
    stfs f0, 0xc0(r1)
lbl_801B7B10:
    lfs f0, 0xc4(r1)
    fcmpo cr0, f0, f25
    ble lbl_801B7B3C
    fadds f1, f25, f0
    lfd f2, lbl_804A1818
    bl fmod
    frsp f0, f1
    li r0, 0x1
    fsubs f0, f0, f25
    stfs f0, 0xc4(r1)
    b lbl_801B7B60
lbl_801B7B3C:
    fcmpo cr0, f0, f31
    bge lbl_801B7B60
    fsubs f1, f0, f25
    lfd f2, lbl_804A1818
    bl fmod
    frsp f0, f1
    li r0, 0x1
    fadds f0, f25, f0
    stfs f0, 0xc4(r1)
lbl_801B7B60:
    cmpwi r0, 0x0
    beq lbl_801B7C10
    addi r3, r1, 0x258
    addi r4, r1, 0xbc
    addi r5, r22, 0xac
    bl fn_8030D7E0
    b lbl_801B7C10
lbl_801B7B7C:
    opword 0xE01600A0
    opword 0xE0210110
    lfs f4, 0x104(r1)
    opword 0x1000082A
    opword 0xE0218118
    lfs f3, 0x108(r1)
    lfs f2, 0x10c(r1)
    opword 0xF01600A0
    opword 0xE01680A8
    opword 0x1000082A
    opword 0xF01680A8
    lfs f1, 0xc4(r22)
    lfs f0, 0xac(r22)
    fmuls f1, f4, f1
    fadds f5, f0, f1
    lfs f1, 0xc4(r22)
    lfs f0, 0xb0(r22)
    fmuls f1, f3, f1
    lfs f3, 0xc4(r22)
    fmuls f2, f2, f3
    fadds f4, f0, f1
    lfs f0, 0xa0(r22)
    lfs f1, 0xb4(r22)
    fmuls f0, f0, f3
    fadds f2, f1, f2
    fadds f0, f5, f0
    stfs f0, 0xac(r22)
    lfs f1, 0xa4(r22)
    lfs f0, 0xc4(r22)
    fmuls f0, f1, f0
    fadds f0, f4, f0
    stfs f0, 0xb0(r22)
    lfs f1, 0xa8(r22)
    lfs f0, 0xc4(r22)
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0xb4(r22)
lbl_801B7C10:
    lhz r3, 0xdc(r22)
    addi r0, r3, 0x1
    sth r0, 0xdc(r22)
lbl_801B7C1C:
    lwz r22, 0x4a0(r1)
lbl_801B7C20:
    cmpwi r22, 0x0
    bne lbl_801B6B58
    addi r3, r31, 0x38
    li r4, 0x0
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    stw r3, 0x54(r31)
    lwz r3, 0x20(r31)
    lwz r3, 0xbc(r3)
    lwz r12, 0x4c(r3)
    cmpwi r12, 0x0
    beq lbl_801B7C60
    mr r3, r31
    lwz r5, 0x4a4(r1)
    addi r4, r31, 0x38
    mtctr r12
    bctrl
lbl_801B7C60:
    opword 0xE3E105C8
    lfd f31, 0x5c0(r1)
    opword 0xE3C105B8
    lfd f30, 0x5b0(r1)
    opword 0xE3A105A8
    lfd f29, 0x5a0(r1)
    opword 0xE3810598
    lfd f28, 0x590(r1)
    opword 0xE3610588
    lfd f27, 0x580(r1)
    opword 0xE3410578
    lfd f26, 0x570(r1)
    opword 0xE3210568
    lfd f25, 0x560(r1)
    opword 0xE3010558
    lfd f24, 0x550(r1)
    opword 0xE2E10548
    lfd f23, 0x540(r1)
    opword 0xE2C10538
    lfd f22, 0x530(r1)
    opword 0xE2A10528
    lfd f21, 0x520(r1)
    opword 0xE2810518
    addi r11, r1, 0x510
    lfd f20, 0x510(r1)
    bl _restgpr_14
    lwz r0, 0x5d4(r1)
    mtlr r0
    addi r1, r1, 0x5d0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B7CD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B7CD8() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    opword 0xF3E10188
    addi r11, r1, 0x180
    bl _savegpr_14
    lwz r5, 0x24(r3)
    mr r31, r3
    lhz r0, 0x9c(r5)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_801B7F98
    lwz r5, 0x20(r3)
    lwz r0, 0x20(r5)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801B7D1C
    b lbl_801B7F98
lbl_801B7D1C:
    lwz r15, 0x64(r4)
    lwz r0, 0x5c(r4)
    stw r15, 0x12c(r1)
    lwz r15, 0x68(r4)
    stw r0, 0xa4(r1)
    lwz r0, 0x12c(r1)
    stw r15, 0xe8(r1)
    lbz r15, 0x6c(r4)
    stw r0, 0xac(r1)
    lwz r0, 0xe8(r1)
    stw r15, 0xec(r1)
    lwz r15, 0x70(r4)
    stw r0, 0xb0(r1)
    lwz r0, 0xec(r1)
    stw r15, 0xf0(r1)
    lbz r15, 0x84(r4)
    stb r0, 0xb4(r1)
    lwz r0, 0xf0(r1)
    stw r15, 0xf4(r1)
    lbz r15, 0x85(r4)
    stw r0, 0xb8(r1)
    lwz r0, 0xf4(r1)
    stw r15, 0xf8(r1)
    lbz r15, 0x86(r4)
    stb r0, 0xcc(r1)
    lwz r0, 0xf8(r1)
    stw r15, 0xfc(r1)
    lbz r15, 0x87(r4)
    stb r0, 0xcd(r1)
    lwz r0, 0xfc(r1)
    stw r15, 0x100(r1)
    lwz r15, 0x8c(r4)
    stb r0, 0xce(r1)
    lwz r0, 0x100(r1)
    stw r15, 0x104(r1)
    lwz r15, 0x90(r4)
    stb r0, 0xcf(r1)
    lwz r0, 0x104(r1)
    stw r15, 0x108(r1)
    lwz r15, 0x94(r4)
    stw r0, 0xd4(r1)
    lwz r0, 0x108(r1)
    stw r15, 0x10c(r1)
    lbz r15, 0x98(r4)
    stw r0, 0xd8(r1)
    lwz r0, 0x10c(r1)
    stw r15, 0x110(r1)
    lbz r15, 0x99(r4)
    stw r0, 0xdc(r1)
    lwz r0, 0x110(r1)
    stw r15, 0x114(r1)
    lbz r15, 0x9a(r4)
    stb r0, 0xe0(r1)
    lwz r0, 0x114(r1)
    stw r15, 0x118(r1)
    lbz r15, 0x9b(r4)
    stb r0, 0xe1(r1)
    lwz r0, 0x118(r1)
    stw r15, 0x11c(r1)
    lbz r15, 0x9c(r4)
    stb r0, 0xe2(r1)
    lwz r0, 0x11c(r1)
    stw r15, 0x120(r1)
    lbz r15, 0x9d(r4)
    stb r0, 0xe3(r1)
    lwz r0, 0x120(r1)
    stw r15, 0x124(r1)
    lbz r15, 0x9e(r4)
    stb r0, 0xe4(r1)
    lwz r0, 0x124(r1)
    lwz r16, 0x0(r4)
    lwz r17, 0x4(r4)
    lwz r18, 0x8(r4)
    lwz r19, 0xc(r4)
    lwz r20, 0x10(r4)
    lwz r21, 0x14(r4)
    lwz r22, 0x18(r4)
    lwz r23, 0x1c(r4)
    lwz r24, 0x20(r4)
    lwz r25, 0x24(r4)
    lwz r26, 0x28(r4)
    lwz r27, 0x2c(r4)
    lwz r28, 0x30(r4)
    lwz r29, 0x34(r4)
    lwz r30, 0x38(r4)
    lwz r12, 0x3c(r4)
    lwz r11, 0x40(r4)
    lwz r10, 0x44(r4)
    lwz r9, 0x48(r4)
    lwz r8, 0x4c(r4)
    lwz r7, 0x50(r4)
    lwz r6, 0x54(r4)
    lwz r5, 0x58(r4)
    lbz r14, 0x60(r4)
    lfs f5, 0x74(r4)
    lfs f4, 0x78(r4)
    lfs f3, 0x7c(r4)
    lfs f2, 0x80(r4)
    lfs f1, 0x88(r4)
    lbz r4, 0x9f(r4)
    stb r0, 0xe5(r1)
    mr r0, r15
    lfs f0, lbl_804A17FC
    stw r16, 0x48(r1)
    stw r17, 0x4c(r1)
    stw r18, 0x50(r1)
    stw r19, 0x54(r1)
    stw r20, 0x58(r1)
    stw r21, 0x5c(r1)
    stw r22, 0x60(r1)
    stw r23, 0x64(r1)
    stw r24, 0x68(r1)
    stw r25, 0x6c(r1)
    stw r26, 0x70(r1)
    stw r27, 0x74(r1)
    stw r28, 0x78(r1)
    stw r29, 0x7c(r1)
    stw r30, 0x80(r1)
    stw r12, 0x84(r1)
    stw r11, 0x88(r1)
    stw r10, 0x8c(r1)
    stw r9, 0x90(r1)
    stw r8, 0x94(r1)
    stw r7, 0x98(r1)
    stw r6, 0x9c(r1)
    stw r5, 0xa0(r1)
    stb r14, 0xa8(r1)
    stfs f5, 0xbc(r1)
    stfs f4, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f2, 0xc8(r1)
    stfs f1, 0xd0(r1)
    stb r0, 0xe6(r1)
    stb r4, 0xe7(r1)
    lwz r4, 0x24(r3)
    stw r15, 0x128(r1)
    lfs f31, 0x150(r4)
    fcmpu cr0, f0, f31
    beq lbl_801B7F7C
    lwz r3, 0x20(r3)
    addi r4, r1, 0x18
    bl fn_801ACC48
    lfs f2, 0x44(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x24(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0x10(r1)
    stfs f31, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f1, 0xd8(r1)
    stfs f2, 0xdc(r1)
lbl_801B7F7C:
    lwz r3, 0x2c(r31)
    mr r5, r31
    addi r4, r1, 0x48
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_801B7F98:
    opword 0xE3E10188
    addi r11, r1, 0x180
    lfd f31, 0x180(r1)
    bl _restgpr_14
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_801B7FB8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B7FB8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    lbz r0, 0x8a(r3)
    cmpwi r0, 0x0
    beq lbl_801B8018
    lwz r3, 0x20(r3)
    addi r4, r1, 0x8
    bl fn_801ACC48
    lwz r8, 0x28(r30)
    addi r3, r30, 0x8c
    lbz r0, 0x88(r30)
    addi r4, r1, 0x8
    clrlwi r5, r8, 31
    extrwi r6, r8, 1, 30
    extsb r7, r0
    extrwi r8, r8, 1, 29
    bl fn_801ACA14
    li r0, 0x0
    stb r0, 0x8a(r30)
lbl_801B8018:
    lwz r4, 0x8c(r30)
    mr r3, r31
    lwz r0, 0x90(r30)
    stw r4, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r4, 0x94(r30)
    lwz r0, 0x98(r30)
    stw r4, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r4, 0x9c(r30)
    lwz r0, 0xa0(r30)
    stw r4, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r4, 0xa4(r30)
    lwz r0, 0xa8(r30)
    stw r4, 0x18(r31)
    stw r0, 0x1c(r31)
    lwz r4, 0xac(r30)
    lwz r0, 0xb0(r30)
    stw r4, 0x20(r31)
    stw r0, 0x24(r31)
    lwz r4, 0xb4(r30)
    lwz r0, 0xb8(r30)
    stw r4, 0x28(r31)
    stw r0, 0x2c(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8094
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8094() {
    nofralloc
    li r6, 0x0
    lwz r7, 0x38(r3)
    stw r6, 0x54(r3)
    b lbl_801B80F4
lbl_801B80A4:
    cmpwi r4, 0x0
    beq lbl_801B80B8
    lhz r0, 0xe2(r7)
    cmpwi r0, 0x0
    beq lbl_801B80E8
lbl_801B80B8:
    lhz r5, 0xe2(r7)
    cmpwi r5, 0x0
    beq lbl_801B80CC
    subi r0, r5, 0x1
    sth r0, 0xe2(r7)
lbl_801B80CC:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801B80E8
    lwz r0, 0xd8(r7)
    cmpwi r0, 0x1
    bne lbl_801B80E8
    stw r6, 0xd8(r7)
lbl_801B80E8:
    lhz r0, 0x42(r3)
    add r5, r7, r0
    lwz r7, 0x4(r5)
lbl_801B80F4:
    cmpwi r7, 0x0
    bne lbl_801B80A4
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8100
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8100() {
    nofralloc
    lwz r4, 0x38(r3)
    li r5, 0x1
    b lbl_801B8134
lbl_801B810C:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801B8128
    lwz r0, 0xd8(r4)
    cmpwi r0, 0x3
    bne lbl_801B8128
    stw r5, 0xd8(r4)
lbl_801B8128:
    lhz r0, 0x42(r3)
    add r4, r4, r0
    lwz r4, 0x4(r4)
lbl_801B8134:
    cmpwi r4, 0x0
    bne lbl_801B810C
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8140
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8140() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r4, r1, 0x68
    stw r31, 0x9c(r1)
    mr r31, r3
    lwz r3, 0x20(r3)
    bl fn_801ACC48
    lbz r0, 0x8a(r31)
    cmpwi r0, 0x0
    beq lbl_801B81A4
    lwz r3, 0x20(r31)
    addi r4, r1, 0x8
    bl fn_801ACC48
    lwz r8, 0x28(r31)
    addi r3, r31, 0x8c
    lbz r0, 0x88(r31)
    addi r4, r1, 0x8
    clrlwi r5, r8, 31
    extrwi r6, r8, 1, 30
    extsb r7, r0
    extrwi r8, r8, 1, 29
    bl fn_801ACA14
    li r0, 0x0
    stb r0, 0x8a(r31)
lbl_801B81A4:
    lwz r5, 0x8c(r31)
    addi r3, r1, 0x68
    lwz r0, 0x90(r31)
    mr r4, r3
    stw r5, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r5, 0x94(r31)
    lwz r0, 0x98(r31)
    stw r5, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r5, 0x9c(r31)
    lwz r0, 0xa0(r31)
    stw r5, 0x48(r1)
    stw r0, 0x4c(r1)
    lwz r5, 0xa4(r31)
    lwz r0, 0xa8(r31)
    stw r5, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r5, 0xac(r31)
    lwz r0, 0xb0(r31)
    stw r5, 0x58(r1)
    stw r0, 0x5c(r1)
    lwz r5, 0xb4(r31)
    lwz r0, 0xb8(r31)
    stw r5, 0x60(r1)
    stw r0, 0x64(r1)
    bl PSMTXInverse
    lis r5, lbl_803E5E70@ha
    addi r3, r1, 0x68
    addi r4, r1, 0x38
    addi r5, r5, lbl_803E5E70@l
    bl PSMTXConcat
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8238
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8238() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801B823C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B823C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lbz r0, 0x6c(r3)
    mr r29, r3
    mr r30, r5
    mr r31, r6
    cmpwi r0, 0x2
    beq lbl_801B833C
    bge lbl_801B8644
    cmpwi r0, 0x1
    bge lbl_801B8278
    b lbl_801B8644
lbl_801B8278:
    lbz r4, 0x0(r5)
    lbz r0, 0x6d(r3)
    lbz r8, 0x1(r5)
    mullw r9, r4, r0
    lbz r7, 0x2(r5)
    lbz r4, 0x3(r5)
    addi r0, r9, 0x80
    srawi r0, r0, 8
    stb r0, 0x0(r5)
    lbz r0, 0x6e(r3)
    mullw r8, r8, r0
    addi r0, r8, 0x80
    srawi r0, r0, 8
    stb r0, 0x1(r5)
    lbz r0, 0x6f(r3)
    mullw r7, r7, r0
    addi r0, r7, 0x80
    srawi r0, r0, 8
    stb r0, 0x2(r5)
    lbz r0, 0x70(r3)
    mullw r4, r4, r0
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x3(r5)
    lbz r4, 0x0(r6)
    lbz r0, 0x6d(r3)
    lbz r7, 0x1(r6)
    mullw r8, r4, r0
    lbz r5, 0x2(r6)
    lbz r4, 0x3(r6)
    addi r0, r8, 0x80
    srawi r0, r0, 8
    stb r0, 0x0(r6)
    lbz r0, 0x6e(r3)
    mullw r7, r7, r0
    addi r0, r7, 0x80
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    lbz r0, 0x6f(r3)
    mullw r5, r5, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x2(r6)
    lbz r0, 0x70(r3)
    mullw r3, r4, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x3(r6)
    b lbl_801B8644
lbl_801B833C:
    lfs f1, 0x78(r3)
    lfs f0, lbl_804A1838
    fcmpo cr0, f1, f0
    bge lbl_801B8410
    lbz r4, 0x0(r5)
    lbz r0, 0x6d(r3)
    lbz r8, 0x1(r5)
    mullw r9, r4, r0
    lbz r7, 0x2(r5)
    lbz r4, 0x3(r5)
    addi r0, r9, 0x80
    srawi r0, r0, 8
    stb r0, 0x0(r5)
    lbz r0, 0x6e(r3)
    mullw r8, r8, r0
    addi r0, r8, 0x80
    srawi r0, r0, 8
    stb r0, 0x1(r5)
    lbz r0, 0x6f(r3)
    mullw r7, r7, r0
    addi r0, r7, 0x80
    srawi r0, r0, 8
    stb r0, 0x2(r5)
    lbz r0, 0x70(r3)
    mullw r4, r4, r0
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x3(r5)
    lbz r4, 0x0(r6)
    lbz r0, 0x6d(r3)
    lbz r7, 0x1(r6)
    mullw r8, r4, r0
    lbz r5, 0x2(r6)
    lbz r4, 0x3(r6)
    addi r0, r8, 0x80
    srawi r0, r0, 8
    stb r0, 0x0(r6)
    lbz r0, 0x6e(r3)
    mullw r7, r7, r0
    addi r0, r7, 0x80
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    lbz r0, 0x6f(r3)
    mullw r5, r5, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x2(r6)
    lbz r0, 0x70(r3)
    mullw r3, r4, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x3(r6)
    b lbl_801B8644
lbl_801B8410:
    lis r3, lbl_803E5E70@ha
    addi r4, r4, 0xac
    addi r3, r3, lbl_803E5E70@l
    addi r5, r1, 0x8
    bl fn_8030D7E0
    addi r3, r1, 0x8
    opword 0xE01D007C
    opword 0xE0230000
    opword 0x10010028
    opword 0xE0238008
    opword 0xF0030000
    opword 0xE01D8084
    opword 0x10010028
    opword 0xF0038008
    bl fn_8030DE88
    lfs f2, 0x78(r29)
    fcmpo cr0, f1, f2
    ble lbl_801B851C
    lbz r3, 0x0(r30)
    lbz r0, 0x6d(r29)
    lbz r5, 0x1(r30)
    mullw r6, r3, r0
    lbz r4, 0x2(r30)
    lbz r3, 0x3(r30)
    addi r0, r6, 0x80
    srawi r0, r0, 8
    stb r0, 0x0(r30)
    lbz r0, 0x6e(r29)
    mullw r5, r5, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x1(r30)
    lbz r0, 0x6f(r29)
    mullw r4, r4, r0
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x2(r30)
    lbz r0, 0x70(r29)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x3(r30)
    lbz r3, 0x0(r31)
    lbz r0, 0x6d(r29)
    lbz r5, 0x1(r31)
    mullw r6, r3, r0
    lbz r4, 0x2(r31)
    lbz r3, 0x3(r31)
    addi r0, r6, 0x80
    srawi r0, r0, 8
    stb r0, 0x0(r31)
    lbz r0, 0x6e(r29)
    mullw r5, r5, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lbz r0, 0x6f(r29)
    mullw r4, r4, r0
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x2(r31)
    lbz r0, 0x70(r29)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x3(r31)
    b lbl_801B8644
lbl_801B851C:
    lfs f0, lbl_804A183C
    lbz r4, 0x71(r29)
    fmuls f0, f0, f1
    lbz r3, 0x6d(r29)
    lbz r5, 0x72(r29)
    slwi r27, r4, 8
    lbz r0, 0x6e(r29)
    subf r6, r4, r3
    fdivs f0, f0, f2
    lbz r7, 0x73(r29)
    lbz r3, 0x6f(r29)
    subf r9, r5, r0
    lbz r8, 0x74(r29)
    slwi r28, r5, 8
    fctiwz f0, f0
    lbz r0, 0x70(r29)
    subf r3, r7, r3
    slwi r12, r7, 8
    subf r4, r8, r0
    slwi r11, r8, 8
    stfd f0, 0x18(r1)
    lbz r5, 0x0(r30)
    lwz r29, 0x1c(r1)
    lbz r8, 0x1(r30)
    mullw r0, r29, r6
    lbz r7, 0x2(r30)
    lbz r6, 0x3(r30)
    mullw r10, r29, r9
    add r0, r27, r0
    clrlwi r0, r0, 16
    mullw r9, r29, r3
    add r3, r28, r10
    clrlwi r3, r3, 16
    mullw r10, r29, r4
    add r4, r12, r9
    clrlwi r4, r4, 16
    mullw r9, r5, r0
    add r5, r11, r10
    clrlwi r5, r5, 16
    mullw r8, r8, r3
    addi r9, r9, 0x80
    srawi r9, r9, 16
    stb r9, 0x0(r30)
    mullw r7, r7, r4
    addi r8, r8, 0x80
    srawi r8, r8, 16
    stb r8, 0x1(r30)
    mullw r6, r6, r5
    addi r7, r7, 0x80
    srawi r7, r7, 16
    stb r7, 0x2(r30)
    addi r6, r6, 0x80
    srawi r6, r6, 16
    stb r6, 0x3(r30)
    lbz r6, 0x0(r31)
    lbz r7, 0x1(r31)
    mullw r8, r6, r0
    lbz r6, 0x2(r31)
    lbz r0, 0x3(r31)
    mullw r3, r7, r3
    addi r7, r8, 0x80
    srawi r7, r7, 16
    stb r7, 0x0(r31)
    addi r3, r3, 0x80
    srawi r3, r3, 16
    stb r3, 0x1(r31)
    mullw r4, r6, r4
    mullw r3, r0, r5
    addi r0, r4, 0x80
    srawi r0, r0, 16
    stb r0, 0x2(r31)
    addi r0, r3, 0x80
    srawi r0, r0, 16
    stb r0, 0x3(r31)
lbl_801B8644:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801B865C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B865C() {
    nofralloc
    lwz r0, 0x24(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8668
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8668() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801B866C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B866C() {
    nofralloc
    lis r3, lbl_803E5EA0@ha
    addi r3, r3, lbl_803E5EA0@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8678
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8678() {
    nofralloc
    stwu r1, -0x10(r1)
    li r8, 0x0
    stw r31, 0xc(r1)
    lwz r0, 0x0(r3)
    add r6, r3, r0
    addi r7, r6, 0x8
    b lbl_801B87C4
lbl_801B8694:
    lbz r4, 0x0(r7)
    li r3, 0x0
    lbz r0, 0x1(r7)
    addi r7, r7, 0x2
    slwi r4, r4, 8
    add r0, r4, r0
    mr r11, r7
    add r7, r7, r0
    lbz r5, 0x2(r7)
    lbz r0, 0x1(r7)
    lbz r4, 0x0(r7)
    slwi r9, r5, 8
    lbz r10, 0x3(r7)
    slwi r0, r0, 16
    slwi r5, r4, 24
    addi r7, r7, 0x8
    add r4, r10, r9
    add r0, r5, r0
    add r0, r4, r0
    stwx r11, r6, r0
    add r9, r6, r0
    lwz r4, 0x4(r9)
    addi r0, r4, 0x8
    add r4, r9, r0
    lwzx r0, r9, r0
    add r4, r0, r4
    addi r10, r4, 0x4
    lhz r0, 0x4(r4)
    addi r12, r10, 0x4
    slwi r4, r0, 3
    slwi r0, r0, 2
    add r5, r4, r10
    add r10, r10, r0
    lhz r0, 0x4(r5)
    addi r4, r5, 0x4
    addi r5, r5, 0x8
    addi r31, r10, 0x4
    slwi r10, r0, 3
    slwi r0, r0, 2
    add r11, r10, r4
    add r10, r4, r0
    addi r4, r11, 0x4
    addi r11, r10, 0x4
    b lbl_801B875C
lbl_801B8744:
    stw r4, 0x0(r12)
    addi r12, r12, 0x4
    addi r3, r3, 0x1
    lwz r0, 0x0(r31)
    addi r31, r31, 0x4
    add r4, r4, r0
lbl_801B875C:
    lwz r0, 0x4(r9)
    add r10, r0, r9
    lwzu r0, 0x8(r10)
    add r10, r0, r10
    lhz r0, 0x4(r10)
    cmpw r3, r0
    blt lbl_801B8744
    li r10, 0x0
    b lbl_801B8798
lbl_801B8780:
    stw r4, 0x0(r5)
    addi r5, r5, 0x4
    addi r10, r10, 0x1
    lwz r0, 0x0(r11)
    addi r11, r11, 0x4
    add r4, r4, r0
lbl_801B8798:
    lwz r0, 0x4(r9)
    add r3, r0, r9
    lwzu r0, 0x8(r3)
    add r3, r0, r3
    lhzu r0, 0x4(r3)
    slwi r0, r0, 3
    add r3, r0, r3
    lhz r0, 0x4(r3)
    cmpw r10, r0
    blt lbl_801B8780
    addi r8, r8, 0x1
lbl_801B87C4:
    lhz r0, 0x4(r6)
    cmpw r8, r0
    blt lbl_801B8694
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B87DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B87DC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x0(r3)
    mr r30, r4
    li r31, 0x0
    add r28, r3, r0
    lhz r29, 0x4(r28)
    addi r27, r28, 0x8
    b lbl_801B8870
lbl_801B880C:
    lbz r4, 0x0(r27)
    mr r3, r30
    lbz r0, 0x1(r27)
    addi r27, r27, 0x2
    slwi r4, r4, 8
    add r0, r4, r0
    mr r4, r27
    add r27, r27, r0
    lbz r6, 0x2(r27)
    lbz r0, 0x1(r27)
    lbz r5, 0x0(r27)
    slwi r7, r6, 8
    lbz r8, 0x3(r27)
    slwi r0, r0, 16
    slwi r6, r5, 24
    addi r27, r27, 0x8
    add r5, r8, r7
    add r0, r6, r0
    add r26, r5, r0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_801B886C
    add r3, r28, r26
    b lbl_801B887C
lbl_801B886C:
    addi r31, r31, 0x1
lbl_801B8870:
    cmpw r31, r29
    blt lbl_801B880C
    li r3, 0x0
lbl_801B887C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8894
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8894() {
    nofralloc
    lwz r0, 0x0(r3)
    add r8, r3, r0
    lhz r0, 0x4(r8)
    cmplw r4, r0
    blt lbl_801B88B0
    li r3, 0x0
    blr
lbl_801B88B0:
    addi r9, r8, 0x8
    li r10, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_801B8920
lbl_801B88C4:
    lbz r3, 0x0(r9)
    cmpw r10, r4
    lbz r0, 0x1(r9)
    addi r9, r9, 0x2
    slwi r3, r3, 8
    add r0, r3, r0
    add r9, r9, r0
    lbz r5, 0x2(r9)
    lbz r0, 0x1(r9)
    lbz r3, 0x0(r9)
    slwi r6, r5, 8
    lbz r7, 0x3(r9)
    slwi r0, r0, 16
    slwi r5, r3, 24
    addi r9, r9, 0x8
    add r3, r7, r6
    add r0, r5, r0
    add r0, r3, r0
    bne lbl_801B8918
    add r3, r8, r0
    blr
lbl_801B8918:
    addi r10, r10, 0x1
    bdnz lbl_801B88C4
lbl_801B8920:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8928
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8928() {
    nofralloc
    lwz r0, 0x0(r3)
    li r9, 0x0
    add r7, r3, r0
    addi r8, r7, 0x8
    b lbl_801B89A4
lbl_801B893C:
    lbz r3, 0x0(r8)
    addi r9, r9, 0x1
    lbz r0, 0x1(r8)
    addi r8, r8, 0x2
    slwi r3, r3, 8
    add r0, r3, r0
    mr r10, r8
    add r8, r8, r0
    lbz r4, 0x2(r8)
    lbz r0, 0x1(r8)
    lbz r3, 0x0(r8)
    slwi r5, r4, 8
    lbz r6, 0x3(r8)
    slwi r0, r0, 16
    slwi r4, r3, 24
    addi r8, r8, 0x8
    add r3, r6, r5
    add r0, r4, r0
    add r0, r3, r0
    add r4, r7, r0
    stwx r10, r7, r0
    addi r3, r4, 0x40
    stw r3, 0x1c(r4)
    lwz r0, 0x8(r4)
    add r0, r3, r0
    stw r0, 0x20(r4)
lbl_801B89A4:
    lhz r0, 0x4(r7)
    cmpw r9, r0
    blt lbl_801B893C
    blr
}

// ----------------------------------------------------------------------------
// fn_801B89B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B89B4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x0(r3)
    mr r30, r4
    li r31, 0x0
    add r28, r3, r0
    lhz r29, 0x4(r28)
    addi r27, r28, 0x8
    b lbl_801B8A48
lbl_801B89E4:
    lbz r4, 0x0(r27)
    mr r3, r30
    lbz r0, 0x1(r27)
    addi r27, r27, 0x2
    slwi r4, r4, 8
    add r0, r4, r0
    mr r4, r27
    add r27, r27, r0
    lbz r6, 0x2(r27)
    lbz r0, 0x1(r27)
    lbz r5, 0x0(r27)
    slwi r7, r6, 8
    lbz r8, 0x3(r27)
    slwi r0, r0, 16
    slwi r6, r5, 24
    addi r27, r27, 0x8
    add r5, r8, r7
    add r0, r6, r0
    add r26, r5, r0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_801B8A44
    add r3, r28, r26
    b lbl_801B8A54
lbl_801B8A44:
    addi r31, r31, 0x1
lbl_801B8A48:
    cmpw r31, r29
    blt lbl_801B89E4
    li r3, 0x0
lbl_801B8A54:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8A6C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8A6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r0, 0xc(r4)
    add r3, r4, r0
    li r4, 0x0
    addi r31, r3, 0x8
    addi r3, r31, 0x4
    bl memset
    mr r3, r30
    mr r4, r31
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lwz r0, 0x0(r31)
    mr r3, r31
    lwz r4, 0xc(r30)
    add r5, r31, r0
    lhz r0, 0x4(r5)
    add r0, r4, r0
    stw r0, 0xc(r30)
    bl fn_801B8678
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8AE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8AE8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_801B8B28
    mr r3, r31
    bl fn_801B87DC
    cmpwi r3, 0x0
    beq lbl_801B8B28
    b lbl_801B8B70
lbl_801B8B28:
    mr r3, r29
    li r4, 0x0
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r31, r3
    b lbl_801B8B64
lbl_801B8B3C:
    mr r3, r31
    mr r4, r30
    bl fn_801B87DC
    cmpwi r3, 0x0
    beq lbl_801B8B54
    b lbl_801B8B70
lbl_801B8B54:
    mr r3, r29
    mr r4, r31
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r31, r3
lbl_801B8B64:
    cmpwi r31, 0x0
    bne lbl_801B8B3C
    li r3, 0x0
lbl_801B8B70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8B8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8B8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r0, 0xc(r4)
    add r3, r4, r0
    li r4, 0x0
    addi r31, r3, 0x8
    addi r3, r31, 0x4
    bl memset
    mr r4, r31
    addi r3, r30, 0x10
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lwz r0, 0x0(r31)
    mr r3, r31
    lwz r4, 0x1c(r30)
    add r5, r31, r0
    lhz r0, 0x4(r5)
    add r0, r4, r0
    stw r0, 0x1c(r30)
    bl fn_801B8928
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8C08
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8C08() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r6, 0xc(r4)
    mr r30, r3
    lwz r0, 0x18(r4)
    li r31, 0x0
    lwz r5, 0x10(r4)
    add r6, r4, r6
    cmpwi r0, 0x0
    lwz r3, 0x14(r4)
    add r0, r6, r5
    add r3, r0, r3
    addi r27, r3, 0x20
    bne lbl_801B8C54
    li r3, 0x0
    b lbl_801B8D10
lbl_801B8C54:
    lhz r0, 0x0(r27)
    mr r28, r27
    li r25, 0x0
    slwi r0, r0, 2
    add r3, r27, r0
    addi r26, r3, 0x4
    b lbl_801B8D00
lbl_801B8C70:
    lbz r0, 0x2(r26)
    lhz r24, 0x0(r26)
    addi r26, r26, 0x2
    extsb. r0, r0
    bne lbl_801B8C8C
    li r3, 0x0
    b lbl_801B8CD4
lbl_801B8C8C:
    addi r3, r30, 0x10
    li r4, 0x0
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r29, r3
    b lbl_801B8CC8
lbl_801B8CA0:
    mr r3, r29
    mr r4, r26
    bl fn_801B89B4
    cmpwi r3, 0x0
    beq lbl_801B8CB8
    b lbl_801B8CD4
lbl_801B8CB8:
    mr r4, r29
    addi r3, r30, 0x10
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r29, r3
lbl_801B8CC8:
    cmpwi r29, 0x0
    bne lbl_801B8CA0
    li r3, 0x0
lbl_801B8CD4:
    stw r3, 0x4(r28)
    lbz r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_801B8CF4
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_801B8CF4
    addi r31, r31, 0x1
lbl_801B8CF4:
    add r26, r26, r24
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_801B8D00:
    lhz r0, 0x0(r27)
    cmpw r25, r0
    blt lbl_801B8C70
    mr r3, r31
lbl_801B8D10:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8D28
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8D28() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r6, 0xc(r4)
    mr r31, r3
    lwz r0, 0x18(r4)
    li r28, 0x0
    lwz r5, 0x10(r4)
    add r6, r4, r6
    cmpwi r0, 0x0
    lwz r3, 0x14(r4)
    add r0, r6, r5
    add r3, r0, r3
    addi r27, r3, 0x20
    bne lbl_801B8D74
    li r3, 0x0
    b lbl_801B8E0C
lbl_801B8D74:
    lhz r0, 0x0(r27)
    mr r29, r27
    li r25, 0x0
    slwi r0, r0, 2
    add r3, r27, r0
    addi r26, r3, 0x4
    b lbl_801B8DFC
lbl_801B8D90:
    lhz r24, 0x0(r26)
    mr r3, r31
    li r4, 0x0
    addi r26, r26, 0x2
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801B8DD4
lbl_801B8DAC:
    mr r3, r30
    mr r4, r26
    bl fn_801B87DC
    cmpwi r3, 0x0
    beq lbl_801B8DC4
    b lbl_801B8DE0
lbl_801B8DC4:
    mr r3, r31
    mr r4, r30
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
lbl_801B8DD4:
    cmpwi r30, 0x0
    bne lbl_801B8DAC
    li r3, 0x0
lbl_801B8DE0:
    cmpwi r3, 0x0
    stw r3, 0x4(r29)
    bne lbl_801B8DF0
    addi r28, r28, 0x1
lbl_801B8DF0:
    add r26, r26, r24
    addi r29, r29, 0x4
    addi r25, r25, 0x1
lbl_801B8DFC:
    lhz r0, 0x0(r27)
    cmpw r25, r0
    blt lbl_801B8D90
    mr r3, r28
lbl_801B8E0C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801B8E24
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B8E24() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r26, r3
    li r30, 0x0
    li r29, 0x0
    b lbl_801B9040
lbl_801B8E48:
    mr r27, r29
    mr r3, r26
    li r28, 0x0
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    b lbl_801B8E9C
lbl_801B8E64:
    lwz r0, 0x0(r4)
    add r3, r4, r0
    lhz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_801B8E8C
    mr r3, r4
    clrlwi r4, r27, 16
    bl fn_801B8894
    mr r31, r3
    b lbl_801B8EA8
lbl_801B8E8C:
    mr r3, r26
    subf r27, r0, r27
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
lbl_801B8E9C:
    cmpwi r4, 0x0
    bne lbl_801B8E64
    li r31, 0x0
lbl_801B8EA8:
    cmpwi r31, 0x0
    beq lbl_801B903C
    lwz r0, 0x4(r31)
    li r23, 0x0
    add r3, r0, r31
    addi r24, r3, 0x94
    addi r25, r3, 0x74
lbl_801B8EC4:
    lbz r0, 0x2(r24)
    lhz r22, 0x0(r24)
    addi r24, r24, 0x2
    extsb. r0, r0
    bne lbl_801B8EE0
    li r3, 0x0
    b lbl_801B8F28
lbl_801B8EE0:
    addi r3, r26, 0x10
    li r4, 0x0
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r27, r3
    b lbl_801B8F1C
lbl_801B8EF4:
    mr r3, r27
    mr r4, r24
    bl fn_801B89B4
    cmpwi r3, 0x0
    beq lbl_801B8F0C
    b lbl_801B8F28
lbl_801B8F0C:
    mr r4, r27
    addi r3, r26, 0x10
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r27, r3
lbl_801B8F1C:
    cmpwi r27, 0x0
    bne lbl_801B8EF4
    li r3, 0x0
lbl_801B8F28:
    stw r3, 0x0(r25)
    lbz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_801B8F4C
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    bne lbl_801B8F4C
    addi r0, r28, 0x1
    clrlwi r28, r0, 24
lbl_801B8F4C:
    addi r23, r23, 0x1
    add r24, r24, r22
    cmpwi r23, 0x3
    addi r25, r25, 0x4
    blt lbl_801B8EC4
    li r27, 0x0
    b lbl_801B8FF0
lbl_801B8F68:
    lwzx r3, r31, r5
    add r4, r31, r5
    clrlslwi r0, r27, 16, 2
    add r3, r3, r4
    addi r3, r3, 0x4
    add r3, r3, r0
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    addi r0, r3, 0x55
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801B8FEC
    lbz r0, 0x2(r4)
    cmpwi r0, 0x4
    beq lbl_801B8FC0
    bge lbl_801B8FB4
    cmpwi r0, 0x2
    beq lbl_801B8FD8
    b lbl_801B8FEC
lbl_801B8FB4:
    cmpwi r0, 0x6
    bge lbl_801B8FEC
    b lbl_801B8FD8
lbl_801B8FC0:
    mr r3, r26
    mr r5, r31
    bl fn_801B8C08
    add r0, r28, r3
    clrlwi r28, r0, 24
    b lbl_801B8FEC
lbl_801B8FD8:
    mr r3, r26
    mr r5, r31
    bl fn_801B8D28
    add r0, r28, r3
    clrlwi r28, r0, 24
lbl_801B8FEC:
    addi r27, r27, 0x1
lbl_801B8FF0:
    lwz r4, 0x4(r31)
    clrlwi r3, r27, 16
    addi r5, r4, 0x8
    lwzx r0, r31, r5
    add r4, r31, r5
    add r4, r0, r4
    lhz r0, 0x4(r4)
    cmplw r3, r0
    blt lbl_801B8F68
    cmpwi r28, 0x0
    beq lbl_801B902C
    lwz r0, 0x8(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x8(r31)
    b lbl_801B9038
lbl_801B902C:
    lwz r0, 0x8(r31)
    oris r0, r0, 0x4000
    stw r0, 0x8(r31)
lbl_801B9038:
    add r30, r30, r28
lbl_801B903C:
    addi r29, r29, 0x1
lbl_801B9040:
    lwz r0, 0xc(r26)
    cmplw r29, r0
    blt lbl_801B8E48
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9068
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9068() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    b lbl_801B90E4
lbl_801B9094:
    cmplw r4, r31
    bne lbl_801B90D8
    mr r3, r30
    mr r4, r31
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    cmpwi r31, 0x0
    beq lbl_801B90C0
    lwz r0, 0x0(r31)
    add r3, r31, r0
    lhz r4, 0x4(r3)
    b lbl_801B90C4
lbl_801B90C0:
    lwz r4, 0xc(r30)
lbl_801B90C4:
    lwz r0, 0xc(r30)
    li r3, 0x1
    subf r0, r4, r0
    stw r0, 0xc(r30)
    b lbl_801B90F0
lbl_801B90D8:
    mr r3, r30
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
lbl_801B90E4:
    cmpwi r4, 0x0
    bne lbl_801B9094
    li r3, 0x0
lbl_801B90F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9108
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9108() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_801B9138
lbl_801B9120:
    mr r3, r31
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    mr r3, r31
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
lbl_801B9138:
    mr r3, r31
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    bne lbl_801B9120
    li r0, 0x0
    li r3, 0x1
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B916C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B916C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x10
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    b lbl_801B91E8
lbl_801B9198:
    cmplw r3, r31
    bne lbl_801B91DC
    mr r4, r31
    addi r3, r30, 0x10
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    cmpwi r31, 0x0
    beq lbl_801B91C4
    lwz r0, 0x0(r31)
    add r3, r31, r0
    lhz r4, 0x4(r3)
    b lbl_801B91C8
lbl_801B91C4:
    lwz r4, 0x1c(r30)
lbl_801B91C8:
    lwz r0, 0x1c(r30)
    li r3, 0x1
    subf r0, r4, r0
    stw r0, 0x1c(r30)
    b lbl_801B91F4
lbl_801B91DC:
    mr r4, r3
    addi r3, r30, 0x10
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
lbl_801B91E8:
    cmpwi r3, 0x0
    bne lbl_801B9198
    li r3, 0x0
lbl_801B91F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// AXFXReverbHiSettings
// ----------------------------------------------------------------------------
extern "C" asm void AXFXReverbHiSettings() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_801B923C
lbl_801B9224:
    addi r3, r31, 0x10
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    addi r3, r31, 0x10
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
lbl_801B923C:
    addi r3, r31, 0x10
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    bne lbl_801B9224
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x1c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9270
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9270() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_803E5EA0@ha
    addi r3, r31, lbl_803E5EA0@l
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r31, r31, lbl_803E5EA0@l
    li r4, 0x4
    addi r3, r31, 0x10
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r0, 0x0
    stw r0, 0xc(r31)
    stw r0, 0x1c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B92C0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B92C0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_801B930C
lbl_801B92F4:
    clrlslwi r5, r31, 16, 2
    addi r31, r31, 0x1
    clrlwi r0, r31, 16
    stwx r3, r29, r5
    cmpw r0, r30
    bge lbl_801B9320
lbl_801B930C:
    mr r3, r28
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_801B92F4
lbl_801B9320:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9344
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9344() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    lfs f31, 0x8(r4)
    stw r31, 0xc(r1)
    mr r31, r4
    fabs f1, f31
    lfs f8, lbl_804A1850
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f0, lbl_804A185C
    fsubs f1, f8, f1
    fcmpo cr0, f1, f0
    bge lbl_801B9398
    lfs f6, lbl_804A184C
    fmr f7, f6
    b lbl_801B93D4
lbl_801B9398:
    fmuls f0, f31, f31
    lfs f6, lbl_804A184C
    fsubs f30, f8, f0
    fcmpo cr0, f30, f6
    opword 0x4C401382
    bne lbl_801B93B4
    b lbl_801B93C0
lbl_801B93B4:
    fmr f1, f30
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f6, f30, f1
lbl_801B93C0:
    fneg f1, f6
    lfs f2, 0x4(r31)
    lfs f0, 0x0(r31)
    fdivs f8, f2, f6
    fdivs f7, f0, f1
lbl_801B93D4:
    fneg f0, f8
    lfs f3, lbl_804A184C
    fmuls f4, f31, f7
    lfs f5, 0x0(r31)
    lfs f2, 0x4(r31)
    fmuls f1, f0, f31
    lfs f0, 0x8(r31)
    stfs f8, 0x0(r30)
    stfs f5, 0x4(r30)
    stfs f4, 0x8(r30)
    stfs f3, 0xc(r30)
    stfs f7, 0x10(r30)
    stfs f2, 0x14(r30)
    stfs f1, 0x18(r30)
    stfs f3, 0x1c(r30)
    stfs f3, 0x20(r30)
    stfs f0, 0x24(r30)
    stfs f6, 0x28(r30)
    stfs f3, 0x2c(r30)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    opword 0xE3C10018
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9448
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9448() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f2, 0x0(r3)
    stw r0, 0x44(r1)
    lfs f1, 0x10(r3)
    stw r31, 0x3c(r1)
    mr r31, r4
    lfs f0, 0x20(r3)
    stw r30, 0x38(r1)
    mr r30, r3
    addi r3, r1, 0x20
    stfs f2, 0x20(r1)
    mr r4, r3
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_801B9B90
    cmpwi r3, 0x0
    bne lbl_801B9498
    lfs f0, lbl_804A1850
    stfs f0, 0x20(r1)
lbl_801B9498:
    lfs f2, 0x4(r30)
    addi r3, r1, 0x14
    lfs f1, 0x14(r30)
    mr r4, r3
    lfs f0, 0x24(r30)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_801B9B90
    cmpwi r3, 0x0
    bne lbl_801B94CC
    lfs f0, lbl_804A1850
    stfs f0, 0x18(r1)
lbl_801B94CC:
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8030DEEC
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8030DEEC
    lfs f1, 0x20(r1)
    lfs f0, lbl_804A184C
    stfs f1, 0x0(r31)
    lfs f1, 0x24(r1)
    stfs f1, 0x10(r31)
    lfs f1, 0x28(r1)
    stfs f1, 0x20(r31)
    lfs f1, 0x14(r1)
    stfs f1, 0x4(r31)
    lfs f1, 0x18(r1)
    stfs f1, 0x14(r31)
    lfs f1, 0x1c(r1)
    stfs f1, 0x24(r31)
    lfs f1, 0x8(r1)
    stfs f1, 0x8(r31)
    lfs f1, 0xc(r1)
    stfs f1, 0x18(r31)
    lfs f1, 0x10(r1)
    stfs f1, 0x28(r31)
    stfs f0, 0xc(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x2c(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801B955C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B955C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stfd f29, 0x10(r1)
    opword 0xF3A10018
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_801BA138
    lfs f0, lbl_804A1860
    fmr f29, f1
    fcmpo cr0, f1, f0
    blt lbl_801B9688
    mr r3, r30
    li r4, 0x1
    bl fn_801BA138
    lfs f0, lbl_804A1860
    fmr f30, f1
    fcmpo cr0, f1, f0
    blt lbl_801B9688
    mr r3, r30
    li r4, 0x2
    bl fn_801BA138
    lfs f0, lbl_804A1860
    fmr f31, f1
    fcmpo cr0, f1, f0
    blt lbl_801B9688
    lfs f1, 0x20(r30)
    lfs f0, lbl_804A1850
    fneg f1, f1
    fdivs f1, f1, f29
    fcmpo cr0, f1, f0
    ble lbl_801B95FC
    fmr f1, f0
lbl_801B95FC:
    lfs f0, lbl_804A1858
    fcmpo cr0, f1, f0
    bge lbl_801B960C
    fmr f1, f0
lbl_801B960C:
    bl asin
    frsp f2, f1
    lfs f0, lbl_804A1848
    fmuls f1, f0, f2
    stfs f2, 0x4(r31)
    bl CosFIdx__Q24nw4r4mathFf
    lfs f0, lbl_804A1860
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801B9668
    lfs f1, 0x28(r30)
    lfs f0, 0x24(r30)
    fdivs f2, f1, f31
    fdivs f1, f0, f30
    bl atan2
    frsp f0, f1
    lfs f2, 0x0(r30)
    lfs f1, 0x10(r30)
    stfs f0, 0x0(r31)
    bl atan2
    frsp f0, f1
    stfs f0, 0x8(r31)
    b lbl_801B9698
lbl_801B9668:
    lfs f2, 0x14(r30)
    lfs f1, 0x4(r30)
    bl atan2
    frsp f1, f1
    lfs f0, lbl_804A184C
    stfs f0, 0x8(r31)
    stfs f1, 0x0(r31)
    b lbl_801B9698
lbl_801B9688:
    lfs f0, lbl_804A184C
    stfs f0, 0x0(r31)
    stfs f0, 0x4(r31)
    stfs f0, 0x8(r31)
lbl_801B9698:
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    opword 0xE3A10018
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x44(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801B96C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B96C8() {
    nofralloc
    lfs f2, 0xc(r3)
    lfs f1, 0x1c(r3)
    lfs f0, 0x2c(r3)
    stfs f2, 0x0(r4)
    stfs f1, 0x4(r4)
    stfs f0, 0x8(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_801B96E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B96E4() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    lfs f0, 0x0(r3)
    lfs f1, 0x10(r3)
    stfs f0, 0x2c(r1)
    lfs f0, 0x20(r3)
    stfs f1, 0x30(r1)
    lfs f3, lbl_804A185C
    opword 0xE041002C
    stw r31, 0x4c(r1)
    mr r31, r4
    opword 0x104200B2
    stw r30, 0x48(r1)
    mr r30, r3
    opword 0x1020103A
    stfs f0, 0x34(r1)
    opword 0x10211094
    fcmpo cr0, f1, f3
    ble lbl_801B9A64
    bl FrSqrt__Q24nw4r4mathFf
    fres f5, f1
    opword 0xE101002C
    lfs f2, 0x14(r30)
    lfs f0, 0x24(r30)
    lfs f4, 0x4(r30)
    lfs f3, lbl_804A185C
    opword 0x10E80058
    opword 0xE1018034
    opword 0x10C5282A
    opword 0x10A50172
    opword 0xF0E1002C
    opword 0x10E80058
    opword 0x10A1317C
    opword 0xE0C1802C
    opword 0xF0E18034
    opword 0xE101002C
    stfs f5, 0x0(r31)
    opword 0xE0A10030
    stfs f4, 0x20(r1)
    stfs f2, 0x24(r1)
    opword 0xE0218020
    stfs f0, 0x28(r1)
    opword 0xE0410020
    opword 0xE0010024
    opword 0x10A50032
    opword 0x1006287A
    opword 0x10002954
    frsp f1, f0
    stfs f0, 0x38(r1)
    opword 0x10080058
    opword 0xF0010008
    opword 0x10070058
    opword 0xE0210008
    opword 0xF0018010
    opword 0x10220828
    opword 0xE0418028
    opword 0xF0210020
    opword 0x10220028
    opword 0xE0410020
    opword 0xF0218028
    opword 0x104200B2
    lfs f0, 0x28(r1)
    opword 0x1020103A
    opword 0x10211094
    fcmpo cr0, f1, f3
    ble lbl_801B99B0
    bl FrSqrt__Q24nw4r4mathFf
    fres f6, f1
    lfs f0, 0x38(r1)
    lfs f4, 0x8(r30)
    lfs f3, 0x18(r30)
    lfs f2, 0x28(r30)
    opword 0xE1210030
    opword 0x10E6302A
    opword 0xE101802C
    opword 0x10C601B2
    opword 0xE141002C
    fmuls f5, f0, f1
    lfs f0, lbl_804A185C
    opword 0x10C139BC
    stfs f5, 0x38(r1)
    stfs f6, 0x4(r31)
    opword 0xE0A10020
    stfs f4, 0x14(r1)
    opword 0x10850058
    opword 0xE0A18028
    stfs f3, 0x18(r1)
    opword 0xE0618014
    opword 0xF0810020
    opword 0x10850058
    opword 0xE0E10014
    stfs f2, 0x1c(r1)
    opword 0xE0218020
    opword 0xF0818028
    opword 0xE0410018
    opword 0xE0A10024
    opword 0xE0C10020
    opword 0x10A500B2
    opword 0x104128FA
    opword 0x10222954
    frsp f2, f1
    stfs f1, 0x40(r1)
    opword 0x10260098
    opword 0xF0210008
    opword 0x10240098
    opword 0xE0410008
    opword 0x10471028
    opword 0xE0E1801C
    opword 0xF0410014
    opword 0x10470828
    opword 0xE0218014
    opword 0xF041801C
    opword 0xE0810014
    opword 0xE0610018
    opword 0x112900F2
    opword 0x1068487A
    opword 0x10234A54
    frsp f3, f1
    stfs f1, 0x3c(r1)
    opword 0x102A00D8
    opword 0xE1418034
    opword 0xF0210008
    opword 0x102A00D8
    opword 0xE0610008
    opword 0xF0218010
    opword 0x10641828
    opword 0xF0610014
    opword 0x10620828
    opword 0xE0410014
    opword 0xF061801C
    opword 0x104200B2
    lfs f1, 0x1c(r1)
    opword 0x13E1107A
    opword 0x13FF1094
    fcmpo cr0, f31, f0
    ble lbl_801B99A4
    lfs f0, lbl_804A184C
    fcmpo cr0, f31, f0
    opword 0x4C401382
    bne lbl_801B9924
    b lbl_801B9930
lbl_801B9924:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f31, f1
lbl_801B9930:
    stfs f0, 0x8(r31)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8030DEEC
    opword 0xE0610030
    opword 0xE041000C
    opword 0xE021802C
    opword 0x106300B2
    opword 0xE0418008
    lfs f0, lbl_804A184C
    opword 0x104118BA
    opword 0x102218D4
    fcmpo cr0, f1, f0
    bge lbl_801B9B70
    lfs f2, 0x0(r31)
    lfd f3, lbl_804A1868
    lfs f1, 0x4(r31)
    lfs f0, 0x8(r31)
    fmul f2, f2, f3
    fmul f1, f1, f3
    fmul f0, f0, f3
    frsp f2, f2
    frsp f1, f1
    frsp f0, f0
    stfs f2, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f0, 0x8(r31)
    b lbl_801B9B70
lbl_801B99A4:
    lfs f0, lbl_804A184C
    stfs f0, 0x8(r31)
    b lbl_801B9B70
lbl_801B99B0:
    lfs f2, lbl_804A184C
    lfs f1, 0x18(r30)
    stfs f2, 0x4(r31)
    lfs f0, 0x28(r30)
    stfs f1, 0x18(r1)
    lfs f1, 0x8(r30)
    stfs f0, 0x1c(r1)
    opword 0xE0810030
    stfs f1, 0x14(r1)
    opword 0xE0210018
    opword 0xE0018014
    opword 0x10840072
    opword 0xE0A10014
    opword 0x1026203A
    opword 0x10012114
    frsp f1, f0
    stfs f0, 0x3c(r1)
    opword 0x10080058
    opword 0xF0010008
    opword 0x10070058
    opword 0xE0210008
    opword 0xF0018010
    opword 0x10250828
    opword 0xE0A1801C
    opword 0xF0210014
    opword 0x10250028
    opword 0xE0810014
    opword 0xF021801C
    opword 0x10840132
    lfs f0, 0x1c(r1)
    opword 0x13E0203A
    opword 0x13FF2114
    fcmpo cr0, f31, f3
    ble lbl_801B9A5C
    fcmpo cr0, f31, f2
    opword 0x4C401382
    bne lbl_801B9A48
    b lbl_801B9A54
lbl_801B9A48:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f2, f31, f1
lbl_801B9A54:
    stfs f2, 0x8(r31)
    b lbl_801B9B70
lbl_801B9A5C:
    stfs f2, 0x8(r31)
    b lbl_801B9B70
lbl_801B9A64:
    lfs f2, lbl_804A184C
    lfs f0, 0x4(r3)
    stfs f2, 0x0(r4)
    lfs f1, 0x14(r3)
    stfs f0, 0x20(r1)
    lfs f0, 0x24(r3)
    stfs f1, 0x24(r1)
    opword 0xE0810020
    stfs f0, 0x28(r1)
    opword 0x10840132
    opword 0x1020203A
    opword 0x10212114
    fcmpo cr0, f1, f3
    ble lbl_801B9B48
    bl FrSqrt__Q24nw4r4mathFf
    fres f4, f1
    lfs f3, 0x8(r30)
    lfs f2, 0x18(r30)
    addi r3, r1, 0x14
    lfs f0, 0x28(r30)
    opword 0x10A4202A
    opword 0x10840132
    opword 0x1081293C
    stfs f4, 0x4(r31)
    opword 0xE0810020
    stfs f3, 0x14(r1)
    opword 0x10640058
    opword 0xE0818028
    stfs f2, 0x18(r1)
    opword 0xE0438000
    opword 0xF0610020
    opword 0x10640058
    opword 0xE0C30000
    stfs f0, 0x1c(r1)
    opword 0xE0018020
    opword 0xF0618028
    opword 0xE0230004
    opword 0xE0810024
    opword 0xE0A10020
    opword 0x10840072
    opword 0x102020BA
    opword 0x10012114
    frsp f1, f0
    stfs f0, 0x40(r1)
    opword 0x10050058
    opword 0xF0010008
    opword 0x10030058
    opword 0xE0210008
    opword 0xF0018010
    opword 0x10260828
    opword 0xE0C38008
    opword 0xF0230000
    opword 0x10260028
    opword 0xF0238008
    bl fn_8030DE88
    stfs f1, 0x8(r31)
    b lbl_801B9B70
lbl_801B9B48:
    stfs f2, 0x4(r4)
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    lfs f0, 0x28(r3)
    addi r3, r1, 0x14
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_8030DE88
    stfs f1, 0x8(r31)
lbl_801B9B70:
    opword 0xE3E10058
    lwz r0, 0x64(r1)
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9B90
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9B90() {
    nofralloc
    opword 0xE0640000
    lfs f0, lbl_804A1870
    opword 0x10C300F2
    opword 0xE0848008
    fsubs f2, f0, f0
    lfs f1, lbl_804A1874
    opword 0x10A4313A
    opword 0x10A53114
    fcmpu cr0, f5, f2
    beq lbl_801B9BE4
    frsqrte f2, f5
    fmuls f6, f2, f2
    fmuls f0, f2, f0
    fnmsubs f6, f6, f5, f1
    fmuls f2, f6, f0
    opword 0x10630098
    opword 0x10840098
    opword 0xF0630000
    opword 0xF0838008
    li r3, 0x1
    blr
lbl_801B9BE4:
    opword 0xF0630000
    opword 0xF0838008
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9BF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9BF4() {
    nofralloc
    lfs f0, lbl_804A1848
    lis r4, lbl_8033C7B0@ha
    lfs f2, lbl_804A1878
    addi r4, r4, lbl_8033C7B0@l
    fmuls f0, f1, f0
    fabs f1, f0
    opword 0xF023B000
    fcmpu cr0, f1, f2
    ble lbl_801B9C28
lbl_801B9C18:
    fsubs f1, f1, f2
    fcmpu cr0, f1, f2
    bge lbl_801B9C18
    opword 0xF023B000
lbl_801B9C28:
    lhz r0, 0x0(r3)
    fsubs f4, f2, f2
    clrlslwi r0, r0, 24, 4
    add r4, r4, r0
    opword 0xE043B000
    fcmpu cr0, f0, f4
    opword 0xE0640000
    fsubs f2, f1, f2
    opword 0xE0040008
    opword 0x1020189C
    bge lbl_801B9C5C
    opword 0x10000850
    opword 0x10200C60
lbl_801B9C5C:
    opword 0xF0230000
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9C64
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9C64() {
    nofralloc
    lfs f0, lbl_804A1848
    lis r5, lbl_8033C7B0@ha
    lfs f2, lbl_804A1878
    addi r5, r5, lbl_8033C7B0@l
    fmuls f0, f1, f0
    fabs f1, f0
    opword 0xF023B000
    fcmpu cr0, f1, f2
    ble lbl_801B9C98
lbl_801B9C88:
    fsubs f1, f1, f2
    fcmpu cr0, f1, f2
    bge lbl_801B9C88
    opword 0xF023B000
lbl_801B9C98:
    lhz r0, 0x0(r3)
    fsubs f4, f2, f2
    clrlslwi r0, r0, 24, 4
    add r5, r5, r0
    opword 0xE043B000
    fcmpu cr0, f0, f4
    opword 0xE0650000
    fsubs f2, f1, f2
    opword 0xE0050008
    opword 0x1000189C
    opword 0x104004A0
    opword 0xF0448000
    bge lbl_801B9CD0
    opword 0x10000050
lbl_801B9CD0:
    opword 0xF0038000
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9CD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9CD8() {
    nofralloc
    lfs f0, 0x0(r3)
    lis r5, lbl_8033C7B0@ha
    lfs f1, 0x4(r3)
    la r0, lbl_804A1840
    stwu r1, -0x10(r1)
    addi r5, r5, lbl_8033C7B0@l
    lfs f2, 0x8(r3)
    opword 0x1060000C
    opword 0x10C00C20
    lfs f1, lbl_804A1848
    opword 0x10631C20
    opword 0x10C60058
    opword 0x10001850
    opword 0x10A03210
    opword 0x10831828
    opword 0x10051800
    ble lbl_801B9D28
lbl_801B9D1C:
    opword 0x10A50154
    opword 0x10051800
    bge lbl_801B9D1C
lbl_801B9D28:
    opword 0x10051880
    ble lbl_801B9D44
    opword 0x10A52CA0
lbl_801B9D34:
    opword 0x10A50154
    opword 0x10051800
    bge lbl_801B9D34
    opword 0x10A52CA0
lbl_801B9D44:
    opword 0xF0A13008
    fmuls f7, f2, f1
    opword 0xE1013008
    fabs f2, f7
    lwz r0, 0x8(r1)
    fcmpu cr0, f2, f3
    ble lbl_801B9D6C
lbl_801B9D60:
    fsubs f2, f2, f3
    fcmpu cr0, f2, f3
    bge lbl_801B9D60
lbl_801B9D6C:
    opword 0xF041B008
    rlwinm r3, r0, 20, 20, 27
    add r3, r5, r3
    opword 0x11054028
    opword 0xE0630000
    clrlslwi r6, r0, 24, 4
    opword 0xE0A30008
    opword 0x10062000
    add r6, r5, r6
    opword 0x10051A1C
    opword 0xE0660000
    opword 0xE0A60008
    lhz r0, 0x8(r1)
    bge lbl_801B9DAC
    opword 0x11200050
    opword 0x10090460
lbl_801B9DAC:
    opword 0x10251A1E
    opword 0xE101B008
    clrlslwi r0, r0, 24, 4
    opword 0x10062080
    add r3, r5, r0
    fsubs f8, f2, f8
    opword 0xE0630000
    opword 0xE0A30008
    bge lbl_801B9DD8
    opword 0x11200850
    opword 0x10290C60
lbl_801B9DD8:
    fcmpu cr0, f7, f4
    opword 0x10451A1C
    bge lbl_801B9DEC
    opword 0x11201050
    opword 0x10491460
lbl_801B9DEC:
    opword 0x1062001A
    mr r3, r4
    opword 0x10210018
    opword 0x104214A0
    opword 0x10001850
    opword 0x10601C60
    opword 0x1042185C
    opword 0x10210CA0
    opword 0xF0440000
    opword 0xF0248008
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9E1C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9E1C() {
    nofralloc
    lis r4, lbl_8033C7B0@ha
    la r0, lbl_804A1840
    stwu r1, -0x10(r1)
    addi r4, r4, lbl_8033C7B0@l
    opword 0x1000000C
    opword 0x10C11420
    lfs f2, lbl_804A1848
    opword 0x10000420
    opword 0x10C60098
    opword 0x10200050
    opword 0x10A03210
    opword 0x10800028
    opword 0x10050000
    ble lbl_801B9E60
lbl_801B9E54:
    opword 0x10A50954
    opword 0x10050000
    bge lbl_801B9E54
lbl_801B9E60:
    opword 0x10050080
    ble lbl_801B9E7C
    opword 0x10A52CA0
lbl_801B9E6C:
    opword 0x10A50954
    opword 0x10050000
    bge lbl_801B9E6C
    opword 0x10A52CA0
lbl_801B9E7C:
    opword 0xF0A13008
    fmuls f3, f3, f2
    opword 0xE0E13008
    fabs f2, f3
    lwz r0, 0x8(r1)
    fcmpu cr0, f2, f0
    ble lbl_801B9EA4
lbl_801B9E98:
    fsubs f2, f2, f0
    fcmpu cr0, f2, f0
    bge lbl_801B9E98
lbl_801B9EA4:
    opword 0xF041B008
    rlwinm r5, r0, 20, 20, 27
    add r5, r4, r5
    opword 0x10E53828
    opword 0xE0A50000
    clrlslwi r6, r0, 24, 4
    opword 0xE1050008
    opword 0x10062000
    add r6, r4, r6
    opword 0x100829DC
    opword 0xE0A60000
    opword 0xE1060008
    lhz r0, 0x8(r1)
    bge lbl_801B9EE4
    opword 0x11200050
    opword 0x10090460
lbl_801B9EE4:
    opword 0x102829DE
    opword 0xE0E1B008
    clrlslwi r0, r0, 24, 4
    opword 0x10062080
    add r5, r4, r0
    fsubs f7, f2, f7
    opword 0xE0A50000
    opword 0xE1050008
    bge lbl_801B9F10
    opword 0x11200850
    opword 0x10290C60
lbl_801B9F10:
    fcmpu cr0, f3, f4
    opword 0x104829DC
    bge lbl_801B9F24
    opword 0x11201050
    opword 0x10491460
lbl_801B9F24:
    opword 0x10600050
    opword 0x10A2005A
    opword 0x10E00028
    opword 0x106304A0
    opword 0x10C52CA0
    opword 0x10800098
    opword 0xF0E3802C
    opword 0x11030098
    opword 0xF0C38000
    opword 0x10C0009A
    opword 0x1043009A
    opword 0x10C6405C
    opword 0x10401050
    opword 0xF0C30004
    opword 0x10C72C20
    opword 0xF0C3000C
    opword 0x10C4105C
    opword 0xF0C30014
    opword 0x10C00850
    opword 0x10C73420
    opword 0xF0C3001C
    opword 0x10C0005A
    opword 0xF0C30024
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801B9F88
// ----------------------------------------------------------------------------
extern "C" asm void fn_801B9F88() {
    nofralloc
    opword 0xE0050000
    lfs f8, lbl_804A1854
    opword 0x10C00028
    opword 0xE0258008
    opword 0xE0440000
    opword 0xE0640008
    opword 0x10003000
    bne lbl_801B9FAC
    opword 0x10080460
lbl_801B9FAC:
    opword 0x10003080
    opword 0xE0840010
    opword 0xE0A40018
    bne lbl_801B9FC0
    opword 0x10004420
lbl_801B9FC0:
    opword 0x10013000
    opword 0xE0C40020
    opword 0xE0E40028
    bne lbl_801B9FD4
    opword 0x10280C60
lbl_801B9FD4:
    opword 0x10420032
    opword 0x10840032
    opword 0x10C60032
    opword 0x10630072
    opword 0xF0430000
    opword 0x10A50072
    opword 0x10E70072
    opword 0xF0830010
    opword 0xF0630008
    opword 0xF0C30020
    opword 0xF0A30018
    opword 0xF0E30028
    blr
}

// ----------------------------------------------------------------------------
// fn_801BA008
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA008() {
    nofralloc
    lis r6, lbl_804A1880@ha
    lfs f9, 0x0(r4)
    lfs f12, lbl_804A1880@l(r6)
    lfs f10, 0x4(r4)
    fsubs f13, f12, f12
    lfs f11, 0x8(r4)
    opword 0xE0850000
    opword 0xE0A50008
    fcmpu cr0, f9, f13
    bne lbl_801BA034
    fmr f9, f12
lbl_801BA034:
    fcmpu cr0, f10, f13
    opword 0xE0C50010
    opword 0xE0E50018
    bne lbl_801BA048
    fmr f10, f12
lbl_801BA048:
    fcmpu cr0, f11, f13
    opword 0xE1050020
    opword 0xE0450028
    bne lbl_801BA05C
    fmr f11, f12
lbl_801BA05C:
    opword 0x10840258
    opword 0x10A50258
    opword 0x10C60298
    opword 0x10E70298
    opword 0xF0830000
    opword 0x110802D8
    opword 0x104202D8
    opword 0xF0A30008
    opword 0xF0C30010
    opword 0xF0E30018
    opword 0xF1030020
    opword 0xF0430028
    blr
}

// ----------------------------------------------------------------------------
// fn_801BA090
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA090() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_804A184C
    lfs f0, 0x0(r5)
    stw r0, 0x24(r1)
    fcmpu cr0, f1, f0
    beq lbl_801BA0C0
    fres f3, f0
    opword 0x1043182A
    opword 0x102300F2
    opword 0x1060107C
    b lbl_801BA0C4
lbl_801BA0C0:
    lfs f3, lbl_804A187C
lbl_801BA0C4:
    lfs f1, lbl_804A184C
    lfs f0, 0x4(r5)
    stfs f3, 0x8(r1)
    fcmpu cr0, f1, f0
    beq lbl_801BA0EC
    fres f3, f0
    opword 0x1043182A
    opword 0x102300F2
    opword 0x1060107C
    b lbl_801BA0F0
lbl_801BA0EC:
    lfs f3, lbl_804A187C
lbl_801BA0F0:
    lfs f1, lbl_804A184C
    lfs f0, 0x8(r5)
    stfs f3, 0xc(r1)
    fcmpu cr0, f1, f0
    beq lbl_801BA118
    fres f1, f0
    opword 0x1041082A
    opword 0x10210072
    opword 0x1020107C
    b lbl_801BA11C
lbl_801BA118:
    lfs f1, lbl_804A187C
lbl_801BA11C:
    stfs f1, 0x10(r1)
    addi r5, r1, 0x8
    bl MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801BA138
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA138() {
    nofralloc
    slwi r4, r4, 2
    add r4, r3, r4
    opword 0xE0048000
    opword 0xE0248010
    lfs f2, 0x20(r4)
    opword 0x10000C20
    opword 0x10000032
    opword 0x102200BA
    fsubs f2, f0, f0
    opword 0x10210014
    fcmpu cr0, f1, f2
    beqlr
    frsqrte f0, f1
    lis r6, lbl_8049C440@ha
    addi r6, r6, lbl_8049C440@l
    opword 0xE0660000
    fmuls f2, f0, f0
    opword 0x100000DA
    fnmsubs f2, f2, f1, f3
    fmuls f0, f2, f0
    fmuls f1, f1, f0
    blr
}

