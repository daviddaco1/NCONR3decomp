#include "types.h"

// Translation unit: src/g_net_data.cpp
// Total functions: 77

// Small Data symbols (@sda21)
extern "C" float lbl_8049C300;
extern "C" float lbl_8049D5D0;
extern "C" float lbl_8049D5D4;
extern "C" float lbl_8049D5D8;
extern "C" float lbl_8049D5DC;
extern "C" float lbl_8049D5E0;
extern "C" float lbl_8049D5E4;
extern "C" float lbl_8049D5E8;
extern "C" float lbl_8049D5EC;
extern "C" float lbl_8049D5F0;
extern "C" float lbl_8049D5F4;
extern "C" float lbl_8049D600;
extern "C" float lbl_8049D604;
extern "C" float lbl_8049D608;
extern "C" float lbl_8049D60C;
extern "C" float lbl_8049D610;
extern "C" float lbl_8049D614;
extern "C" float lbl_8049D618;
extern "C" float lbl_8049D61C;
extern "C" float lbl_8049F620;
extern "C" float lbl_8049F628;
extern "C" float lbl_8049F638;
extern "C" float lbl_8049F63C;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_8034D038[];
extern "C" u8 jumptable_8034D290[];
extern "C" u8 jumptable_8034D310[];
extern "C" u8 jumptable_8034D388[];
extern "C" u8 lbl_80339948[];
extern "C" u8 lbl_8034D100[];
extern "C" u8 lbl_8034D110[];
extern "C" u8 lbl_8034D1E8[];
extern "C" u8 lbl_8034D340[];
extern "C" u8 lbl_8034D4D0[];
extern "C" u8 lbl_80390580[];
extern "C" u8 lbl_80395728[];
extern "C" u8 lbl_8039A0D0[];
extern "C" u8 lbl_803A2008[];
extern "C" u8 lbl_803A2070[];
extern "C" u8 lbl_803A20B8[];
extern "C" u8 lbl_803A21C8[];
extern "C" u8 lbl_803A21E8[];
extern "C" u8 lbl_803A22F8[];
extern "C" u8 lbl_803A2330[];
extern "C" u8 lbl_803A2440[];
extern "C" u8 lbl_803A2450[];
extern "C" u8 lbl_803A2560[];
extern "C" u8 lbl_803A2610[];
extern "C" u8 lbl_803A2648[];
extern "C" u8 lbl_803A2A80[];
extern "C" u8 lbl_803A2AC8[];
extern "C" u8 lbl_803A2B4C[];
extern "C" u8 lbl_803A2BD0[];
extern "C" u8 lbl_803A2C58[];
extern "C" u8 lbl_803BE030[];

// Forward declarations
extern "C" void OSGetTime();
extern "C" void _restgpr_21();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_21();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_8005CEE8();
extern "C" void fn_8005CFCC();
extern "C" void fn_8005D018();
extern "C" void fn_8005E4A4();
extern "C" void fn_8005E4D4();
extern "C" void fn_8006A020();
extern "C" void fn_8008396C();
extern "C" void fn_8008BBD8();
extern "C" void fn_8008D5A8();
extern "C" void fn_8008D6C4();
extern "C" void fn_8008D7F0();
extern "C" void fn_800914D8();
extern "C" void fn_800961EC();
extern "C" void fn_800A50A4();
extern "C" void fn_800A6D10();
extern "C" void fn_800A6EA8();
extern "C" void fn_800A6EE4();
extern "C" void fn_800A6F54();
extern "C" void fn_800A7018();
extern "C" void fn_800A715C();
extern "C" void fn_800A71CC();
extern "C" void fn_800A7284();
extern "C" void fn_800A72AC();
extern "C" void fn_800A72EC();
extern "C" void fn_800A7354();
extern "C" void fn_800A7358();
extern "C" void fn_800A7760();
extern "C" void fn_800A77F8();
extern "C" void fn_800A7980();
extern "C" void fn_800A7AC8();
extern "C" void fn_800A7CDC();
extern "C" void fn_800A7D54();
extern "C" void fn_800A7DA0();
extern "C" void fn_800A7E38();
extern "C" void fn_800A7F80();
extern "C" void fn_800A8058();
extern "C" void fn_800A80F8();
extern "C" void fn_800A8240();
extern "C" void fn_800A8308();
extern "C" void fn_800A8394();
extern "C" void fn_800A8804();
extern "C" void fn_800A8858();
extern "C" void fn_800A88E4();
extern "C" void fn_800A8910();
extern "C" void fn_800A8960();
extern "C" void fn_800A8968();
extern "C" void fn_800A8970();
extern "C" void fn_800A89D8();
extern "C" void fn_800A89FC();
extern "C" void fn_800A8A7C();
extern "C" void fn_800A8AB8();
extern "C" void fn_800A8B1C();
extern "C" void fn_800A8B90();
extern "C" void fn_800A8D1C();
extern "C" void fn_800A8D50();
extern "C" void fn_800A8D74();
extern "C" void fn_800A8EB0();
extern "C" void fn_800A8F10();
extern "C" void fn_800A8F48();
extern "C" void fn_800A8FC4();
extern "C" void fn_800A9098();
extern "C" void fn_800A90DC();
extern "C" void fn_800A914C();
extern "C" void fn_800A92C4();
extern "C" void fn_800A9318();
extern "C" void fn_800A9B44();
extern "C" void fn_800A9BB0();
extern "C" void fn_800A9C90();
extern "C" void fn_800A9CE8();
extern "C" void fn_800A9D28();
extern "C" void fn_800AA25C();
extern "C" void fn_800AA310();
extern "C" void fn_800AA384();
extern "C" void fn_800AA400();
extern "C" void fn_800AA4AC();
extern "C" void fn_800AA720();
extern "C" void fn_800AA780();
extern "C" void fn_800AA7CC();
extern "C" void fn_800AA8F8();
extern "C" void fn_800AA954();
extern "C" void fn_800AA9DC();
extern "C" void fn_800AAA60();
extern "C" void fn_800AAB04();
extern "C" void fn_800AAB30();
extern "C" void fn_800AABA8();
extern "C" void fn_800AABE8();
extern "C" void fn_800AB0CC();
extern "C" void fn_800AB128();
extern "C" void fn_800AB154();
extern "C" void fn_800AB1E0();
extern "C" void fn_800AB20C();
extern "C" void fn_800AB83C();
extern "C" void fn_800AC080();
extern "C" void fn_800AC268();
extern "C" void fn_800AC6E4();
extern "C" void fn_800AC728();
extern "C" void fn_800AC960();
extern "C" void fn_800ACD48();
extern "C" void fn_800ACDAC();
extern "C" void fn_800AD1A0();
extern "C" void fn_800AD254();
extern "C" void fn_800AD3EC();
extern "C" void fn_800AD4F8();
extern "C" void fn_800AD58C();
extern "C" void fn_800AD6DC();
extern "C" void fn_800ADCCC();
extern "C" void fn_800AE094();
extern "C" void fn_800AE428();
extern "C" void fn_800AE478();
extern "C" void fn_800AE4CC();
extern "C" void fn_800AE534();
extern "C" void fn_801648C4();
extern "C" void fn_8016499C();
extern "C" void fn_80165C74();
extern "C" void fn_80168818();
extern "C" void fn_80168908();
extern "C" void fn_80168968();
extern "C" void fn_80168978();
extern "C" void fn_80168ADC();
extern "C" void fn_80168B54();
extern "C" void fn_80168B8C();
extern "C" void fn_80168C28();
extern "C" void fn_80168C30();
extern "C" void fn_80168C90();
extern "C" void fn_80168D1C();
extern "C" void fn_80168EE0();
extern "C" void fn_80169014();
extern "C" void fn_80169024();
extern "C" void fn_80169034();
extern "C" void fn_80169048();
extern "C" void fn_8016910C();
extern "C" void fn_80169138();
extern "C" void fn_80169148();
extern "C" void fn_8016915C();
extern "C" void fn_80169278();
extern "C" void fn_801693A4();
extern "C" void fn_80169518();
extern "C" void fn_8016CC1C();
extern "C" void fn_8016CC2C();
extern "C" void fn_8016CE8C();
extern "C" void fn_8016D61C();
extern "C" void fn_8016D6C0();
extern "C" void fn_8016D710();
extern "C" void fn_8016D7A8();
extern "C" void fn_8016D81C();
extern "C" void fn_8016D8B4();
extern "C" void fn_8016D9F4();
extern "C" void fn_8016DB34();
extern "C" void fn_8016DB98();
extern "C" void fn_8016DC30();
extern "C" void fn_8016DCF0();
extern "C" void fn_8016DE44();
extern "C" void fn_8016DF00();
extern "C" void fn_8016F85C();
extern "C" void fn_8016F948();
extern "C" void fn_80171928();
extern "C" void fn_801725B0();
extern "C" void fn_801725D4();
extern "C" void fn_801728DC();
extern "C" void fn_801773E0();
extern "C" void fn_80179FF8();
extern "C" void fn_8017A008();
extern "C" void __div2i();
extern "C" void strcmp();
extern "C" void fn_80324614();
extern "C" void memcpy();
extern "C" void memset();
extern "C" void sprintf();
extern "C" void strcpy();

// ----------------------------------------------------------------------------
// fn_800A50A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A50A4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r30, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r31, 0x0
    lis r3, lbl_80395728@ha
    addi r29, r3, lbl_80395728@l
    lwz r3, 0x4(r29)
    subi r0, r3, 0x14
    cmplwi r0, 0xa
    ble lbl_800A5150
    cmplwi r3, 0xc
    beq lbl_800A5150
    bl fn_8005CFCC
    cmpwi r3, 0x0
    beq lbl_800A5138
    lwz r3, 0xc08(r29)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A5150
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_800A5120
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A5120:
    lwz r0, 0xc98(r29)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800A5150
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A5138:
    lwz r0, 0xc98(r29)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800A5150
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A5150:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0xc
    beq lbl_800A516C
    cmplwi r0, 0x1e
    bne lbl_800A51B4
lbl_800A516C:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800A51B4
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc98(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800A51B4
    mr r3, r30
    li r4, -0x1
    bl fn_800A7018
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A51B4:
    lwz r3, 0x0(r30)
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800A51CC
    clrlwi r0, r3, 1
    stw r0, 0x0(r30)
lbl_800A51CC:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    bge lbl_800A51EC
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A51EC:
    cmpwi r0, 0x9
    blt lbl_800A51FC
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A51FC:
    lwz r4, 0x0(r30)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800A5214
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A5214:
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A5228
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A5228:
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800A523C
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A523C:
    lwz r0, 0x70(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A5254
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A5254:
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A5270
    lwz r0, 0x78(r30)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x78(r30)
lbl_800A5270:
    lwz r4, 0x78(r30)
    rlwinm r0, r4, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_800A529C
    lwz r3, 0x38f0(r30)
    subi r0, r3, 0x1
    stw r0, 0x38f0(r30)
    cmpwi r0, 0x0
    bgt lbl_800A529C
    rlwinm r0, r4, 0, 5, 2
    stw r0, 0x78(r30)
lbl_800A529C:
    mr r3, r30
    bl fn_800A6F54
    lwz r0, 0x0(r30)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A52BC
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A52BC:
    lwz r3, 0x50(r30)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 0, 1
    cmpwi r0, 0x0
    beq lbl_800A52D8
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A52D8:
    lwz r0, 0x78(r30)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_800A52F0
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A52F0:
    lwz r0, 0x1640(r30)
    cmpwi r0, 0x0
    bne lbl_800A5308
    lwz r0, 0x163c(r30)
    cmpwi r0, 0x0
    beq lbl_800A5310
lbl_800A5308:
    li r3, 0x0
    b lbl_800A6CF8
lbl_800A5310:
    lwz r0, 0x18(r30)
    cmplwi r0, 0x31
    bgt lbl_800A6CD8
    lis r3, jumptable_8034D038@ha
    addi r3, r3, jumptable_8034D038@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A538C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A538C:
    lwz r0, 0x68(r30)
    ori r0, r0, 0x40
    stw r0, 0x68(r30)
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5434
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5434:
    lwz r0, 0x68(r30)
    ori r0, r0, 0x40
    stw r0, 0x68(r30)
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A54DC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A54DC:
    li r0, 0x8
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5578
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5578:
    li r0, 0x8
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5614
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5614:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A56B4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A56B4:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5758
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5758:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A57FC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A57FC:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A589C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A589C:
    lwz r0, 0x74(r30)
    oris r0, r0, 0x10
    stw r0, 0x74(r30)
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5944
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5944:
    lwz r0, 0x5c(r30)
    oris r0, r0, 0x200
    stw r0, 0x5c(r30)
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A59EC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A59EC:
    li r29, 0x0
    li r31, 0x0
lbl_800A59F4:
    mr r3, r30
    mr r4, r29
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_800A5A30
    lwz r4, 0x18(r3)
    subi r0, r4, 0xc
    cmplwi r0, 0x1
    bgt lbl_800A5A28
    stw r31, 0x38f0(r3)
    lwz r0, 0x0(r3)
    oris r0, r0, 0x8000
    stw r0, 0x0(r3)
lbl_800A5A28:
    addi r29, r29, 0x1
    b lbl_800A59F4
lbl_800A5A30:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5AD0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5AD0:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    lis r3, 0xf
    addi r0, r3, 0x4240
    stw r0, 0x48(r30)
    stw r0, 0x4c(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5B84
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5B84:
    li r0, 0x6
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5C24
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5C24:
    li r0, 0x1
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5CC4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5CC4:
    li r29, 0x0
lbl_800A5CC8:
    mr r3, r30
    mr r4, r29
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_800A5D08
    lwz r0, 0x18(r3)
    cmplwi r0, 0x10
    bne lbl_800A5D00
    li r0, 0x0
    stw r0, 0x38f0(r3)
    lwz r0, 0x0(r3)
    oris r0, r0, 0x8000
    stw r0, 0x0(r3)
    b lbl_800A5D08
lbl_800A5D00:
    addi r29, r29, 0x1
    b lbl_800A5CC8
lbl_800A5D08:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5DAC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5DAC:
    lwz r0, 0x5c(r30)
    oris r0, r0, 0x100
    stw r0, 0x5c(r30)
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5E5C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5E5C:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5EFC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5EFC:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A5F98
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A5F98:
    lwz r0, 0x5c(r30)
    oris r0, r0, 0x200
    stw r0, 0x5c(r30)
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6040
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6040:
    li r0, 0x1
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A60DC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A60DC:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6178
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6178:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6214
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6214:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A62B0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A62B0:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6350
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6350:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A63F4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A63F4:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6498
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6498:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6538
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6538:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A65D4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A65D4:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6670
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6670:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A670C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A670C:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A67A8
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A67A8:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6844
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6844:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A68E0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A68E0:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A697C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A697C:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6A1C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6A1C:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6ABC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6ABC:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6B58
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6B58:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6BF4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6BF4:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F628
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
    b lbl_800A6CD8
    lwz r0, 0x28(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_800A6C94
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A6CD8
lbl_800A6C94:
    li r0, 0x0
    stw r0, 0x38f0(r30)
    li r31, 0x1
    la r3, lbl_8049F628
    lwz r0, 0x24(r30)
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_803A2008@ha
    addi r3, r3, lbl_803A2008@l
    stfsx f0, r3, r0
lbl_800A6CD8:
    cmpwi r31, 0x0
    beq lbl_800A6CF4
    lwz r0, 0x0(r30)
    oris r0, r0, 0x8000
    stw r0, 0x0(r30)
    mr r3, r30
    bl fn_800A6EE4
lbl_800A6CF4:
    mr r3, r31
lbl_800A6CF8:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800A6D10
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A6D10() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    mr r30, r4
    lwz r5, 0x3860(r3)
    cmpwi r5, 0x0
    beq lbl_800A6E90
    lwz r0, 0x18(r5)
    cmplwi r0, 0x2f
    bne lbl_800A6E90
    lwz r0, 0x0(r5)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A6E90
    lwz r0, 0x68(r5)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_800A6E90
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800A6E0C
    bl fn_8005E4A4
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_800A6E90
    lwz r4, 0x28(r3)
    lwz r0, 0x2c(r3)
    add r0, r4, r0
    cmpwi r0, 0x0
    ble lbl_800A6E90
    cmpwi r30, 0x0
    ble lbl_800A6E90
    neg r0, r30
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    bl fn_8006A020
    lwz r3, 0x28(r31)
    lwz r0, 0x2c(r31)
    add r0, r3, r0
    cmpwi r0, 0x0
    bgt lbl_800A6DFC
    subfic r0, r3, 0x1
    stw r0, 0x2c(r31)
    lwz r0, 0x5c(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x5c(r31)
    b lbl_800A6E90
lbl_800A6DFC:
    lwz r0, 0x5c(r31)
    oris r0, r0, 0x2000
    stw r0, 0x5c(r31)
    b lbl_800A6E90
lbl_800A6E0C:
    lwz r5, 0x28(r3)
    lwz r0, 0x2c(r3)
    add r0, r5, r0
    cmpwi r0, 0x0
    ble lbl_800A6E90
    cmpwi r4, 0x0
    ble lbl_800A6E90
    neg r0, r4
    lfd f1, lbl_8049F620
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    bl fn_8006A020
    lwz r3, 0x28(r31)
    lwz r0, 0x2c(r31)
    add r0, r3, r0
    cmpwi r0, 0x0
    bgt lbl_800A6E84
    subfic r0, r3, 0x1
    stw r0, 0x2c(r31)
    lwz r0, 0x5c(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x5c(r31)
    b lbl_800A6E90
lbl_800A6E84:
    lwz r0, 0x5c(r31)
    oris r0, r0, 0x2000
    stw r0, 0x5c(r31)
lbl_800A6E90:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A6EA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A6EA8() {
    nofralloc
    lwz r4, 0x38f0(r3)
    subi r0, r4, 0x1
    stw r0, 0x38f0(r3)
    cmpwi r0, 0x0
    bgt lbl_800A6EDC
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 1
    stw r0, 0x0(r3)
    lwz r0, 0x78(r3)
    oris r0, r0, 0x800
    stw r0, 0x78(r3)
    li r3, 0x0
    blr
lbl_800A6EDC:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_800A6EE4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A6EE4() {
    nofralloc
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beqlr
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bnelr
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bnelr
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bnelr
    lwz r0, 0x78(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bnelr
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    beqlr
    li r4, 0x0
    li r5, 0x43
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    b fn_8008396C
    blr
}

// ----------------------------------------------------------------------------
// fn_800A6F54
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A6F54() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x5c(r3)
    rlwinm r0, r4, 0, 2, 2
    cmpwi r0, 0x0
    beq lbl_800A6F80
    rlwinm r0, r4, 0, 3, 1
    stw r0, 0x5c(r3)
lbl_800A6F80:
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A7004
    lwz r0, 0x18(r3)
    cmplwi r0, 0x1
    beq lbl_800A6FA4
    cmplwi r0, 0x9
    bne lbl_800A6FE0
lbl_800A6FA4:
    mr r3, r31
    slwi r0, r0, 2
    lis r4, lbl_803A2008@ha
    addi r4, r4, lbl_803A2008@l
    lfsx f0, r4, r0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    bl fn_800A7018
    cmpwi r3, 0x0
    bne lbl_800A7004
    lwz r0, 0x5c(r31)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x5c(r31)
    b lbl_800A7004
lbl_800A6FE0:
    mr r3, r31
    slwi r0, r0, 2
    lis r4, lbl_803A2008@ha
    addi r4, r4, lbl_803A2008@l
    lfsx f0, r4, r0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    bl fn_800A7018
lbl_800A7004:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7018
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7018() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r5, 0x28(r3)
    lwz r0, 0x2c(r3)
    add r0, r5, r0
    cmpw r0, r4
    blt lbl_800A7140
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x6c(r4)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800A7140
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 1
    stw r0, 0x0(r3)
    lwz r0, 0x18(r3)
    cmplwi r0, 0xb
    bne lbl_800A70B4
    li r30, 0x0
lbl_800A707C:
    mr r3, r31
    mr r4, r30
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_800A7138
    lwz r4, 0x18(r3)
    subi r0, r4, 0xc
    cmplwi r0, 0x1
    bgt lbl_800A70AC
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_800A70AC:
    addi r30, r30, 0x1
    b lbl_800A707C
lbl_800A70B4:
    cmplwi r0, 0x2c
    bne lbl_800A70F8
    li r30, 0x0
lbl_800A70C0:
    mr r3, r31
    mr r4, r30
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_800A7138
    lwz r4, 0x18(r3)
    subi r0, r4, 0x2d
    cmplwi r0, 0x1
    bgt lbl_800A70F0
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_800A70F0:
    addi r30, r30, 0x1
    b lbl_800A70C0
lbl_800A70F8:
    cmplwi r0, 0xf
    bne lbl_800A7138
    li r30, 0x0
lbl_800A7104:
    mr r3, r31
    mr r4, r30
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_800A7138
    lwz r0, 0x18(r3)
    cmplwi r0, 0x10
    bne lbl_800A7130
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_800A7130:
    addi r30, r30, 0x1
    b lbl_800A7104
lbl_800A7138:
    li r3, 0x0
    b lbl_800A7144
lbl_800A7140:
    li r3, 0x1
lbl_800A7144:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A715C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A715C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x1
    bl fn_80168B8C
    bl fn_80168B8C
    cmpwi r3, 0x0
    bne lbl_800A71AC
    bl fn_800AB0CC
    mr r3, r31
    bl fn_80168818
    lis r3, fn_800A914C@ha
    addi r3, r3, fn_800A914C@l
    bl fn_80169048
    li r3, 0x4
    li r4, 0xa
    li r5, 0x3c
    bl fn_8016D61C
lbl_800A71AC:
    li r0, 0x1
    stw r0, lbl_8049D5E0
    bl fn_8008D5A8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A71CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A71CC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r5, r3
    mr r31, r4
    lwz r0, lbl_8049D61C
    cmpwi r0, 0x0
    bne lbl_800A7270
    addi r4, r1, 0x4
    li r3, 0x0
    li r0, 0x8
    mtctr r0
lbl_800A7200:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_800A7200
    addi r3, r1, 0x8
    mr r4, r5
    bl strcpy
    cmpwi r31, 0x0
    beq lbl_800A7234
    addi r3, r1, 0x8
    li r4, 0x5
    li r5, 0x0
    bl fn_801648C4
    b lbl_800A7244
lbl_800A7234:
    addi r3, r1, 0x8
    li r4, 0x5
    li r5, 0x0
    bl fn_8016499C
lbl_800A7244:
    cmpwi r3, 0x0
    bne lbl_800A7258
    li r0, 0x0
    stw r0, 0x1(r0)
    b lbl_800A7270
lbl_800A7258:
    lwz r4, 0x24(r3)
    lwz r4, 0xc(r4)
    lwz r0, 0x0(r4)
    ori r0, r0, 0x1
    stw r0, 0x0(r4)
    bl fn_801773E0
lbl_800A7270:
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7284
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7284() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016D6C0
    bl fn_80168ADC
    bl fn_80179FF8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A72AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A72AC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8017A008
    li r3, 0x4
    bl fn_80168B8C
    bl fn_80168B8C
    cmpwi r3, 0x0
    bne lbl_800A72D4
    bl fn_80168908
lbl_800A72D4:
    li r0, 0x2
    stw r0, lbl_8049D5E0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A72EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A72EC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, 0x8
    bl fn_80168B8C
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A733C
    li r3, 0x4
    bl fn_80168B8C
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A7324
    bl fn_80169024
lbl_800A7324:
    bl fn_80168968
    li r0, 0x4
    stw r0, lbl_8049D5E0
    li r0, 0x0
    stw r0, lbl_8049D5E4
    b lbl_800A7344
lbl_800A733C:
    li r0, 0x5
    stw r0, lbl_8049D5E0
lbl_800A7344:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7354
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7354() {
    nofralloc
    b fn_80168B54
}

// ----------------------------------------------------------------------------
// fn_800A7358
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7358() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049D5E0
    cmplwi r0, 0x1f
    bgt lbl_800A7740
    lis r3, jumptable_8034D290@ha
    addi r3, r3, jumptable_8034D290@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x4
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A7748
    li r3, 0x10
    bl fn_80168B8C
    cmpwi r3, 0x0
    bne lbl_800A73BC
    bl fn_80169014
    li r0, 0x3
    stw r0, lbl_8049D5E0
    b lbl_800A7748
lbl_800A73BC:
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800A774C
    li r3, 0x10
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A7748
    li r3, 0x400
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A73F8
    li r0, 0x8
    stw r0, lbl_8049D5E0
    b lbl_800A7748
lbl_800A73F8:
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800A774C
    bl fn_8016CE8C
    cmpwi r3, 0x0
    bne lbl_800A7748
    bl fn_800AC268
    bl fn_800ACDAC
    li r0, 0x9
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AD6DC
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A7448
    bl fn_800AC960
    li r0, 0xa
    stw r0, lbl_8049D5E0
    b lbl_800A7748
lbl_800A7448:
    cmpwi r3, 0x11
    beq lbl_800A7748
    li r0, 0x9
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AD58C
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A7474
    li r3, 0x0
    b lbl_800A774C
lbl_800A7474:
    cmpwi r3, 0x11
    beq lbl_800A7748
    li r0, 0xa
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AD6DC
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A74AC
    bl fn_800AB154
    bl fn_800AC960
    li r0, 0xc
    stw r0, lbl_8049D5E0
    b lbl_800A7748
lbl_800A74AC:
    cmpwi r3, 0x11
    beq lbl_800A7748
    li r0, 0xb
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AD58C
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A74D8
    li r3, 0x0
    b lbl_800A774C
lbl_800A74D8:
    cmpwi r3, 0x11
    beq lbl_800A7748
    li r0, 0xc
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AD6DC
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A7510
    bl fn_800AB20C
    bl fn_800AC960
    li r0, 0xe
    stw r0, lbl_8049D5E0
    b lbl_800A7748
lbl_800A7510:
    cmpwi r3, 0x11
    beq lbl_800A7748
    li r0, 0xd
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AD58C
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A7558
    bl fn_800AA780
    lwz r0, lbl_8049D5E0
    cmpwi r0, 0x1
    bne lbl_800A754C
    li r3, 0x0
    b lbl_800A774C
lbl_800A754C:
    li r0, 0x1f
    stw r0, lbl_8049D5E0
    b lbl_800A7748
lbl_800A7558:
    cmpwi r3, 0x11
    beq lbl_800A7748
    li r0, 0xe
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AD58C
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A7748
    li r3, 0x0
    b lbl_800A774C
    bl fn_800AD6DC
    stw r3, lbl_8049D5E0
    cmpwi r3, 0x1
    bne lbl_800A7748
    li r3, 0x0
    b lbl_800A774C
    bl fn_800A8EB0
    b lbl_800A7748
    li r3, 0x100
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A75C4
    li r0, 0x17
    stw r0, lbl_8049D5E0
    bl fn_800A92C4
    b lbl_800A7748
lbl_800A75C4:
    li r3, 0x200
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A7748
    bl fn_80169138
    li r0, 0x16
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    li r3, 0x200
    bl fn_80168B8C
    cmpwi r3, 0x0
    bne lbl_800A7748
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x2
    beq lbl_800A7634
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x3
    beq lbl_800A7634
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x6
    beq lbl_800A7634
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x7
    bne lbl_800A765C
lbl_800A7634:
    lwz r0, lbl_8049F638
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x4
    bl fn_800ACD48
    bl fn_800AC960
    li r31, -0x1
    bl fn_800914D8
    stw r31, 0x194(r3)
    b lbl_800A7748
lbl_800A765C:
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r31, -0x1
    bl fn_800914D8
    stw r31, 0x194(r3)
    li r3, 0x0
    b lbl_800A774C
    bl fn_800A9318
    b lbl_800A7748
    bl fn_800A7980
    cmpwi r3, 0x0
    bne lbl_800A7748
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800A774C
    bl fn_800A7E38
    cmpwi r3, 0x0
    bne lbl_800A7748
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800A774C
    bl fn_800A80F8
    cmpwi r3, 0x0
    bne lbl_800A7748
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800A774C
    li r3, 0x2000
    bl fn_80168B8C
    cmpwi r3, 0x0
    bne lbl_800A76F0
    lwz r0, lbl_8049D5E4
    cmpwi r0, 0x96
    ble lbl_800A7748
lbl_800A76F0:
    bl fn_80168978
    li r0, 0x5
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_800AA384
    b lbl_800A7748
    bl fn_800AA400
    b lbl_800A7748
    bl fn_800AA7CC
    b lbl_800A7748
    bl fn_800AA8F8
    cmpwi r3, 0x0
    bne lbl_800A7748
    li r0, 0x1
    stw r0, lbl_8049D5E0
    b lbl_800A7748
    bl fn_80179FF8
    li r0, 0x6
    stw r0, lbl_8049D5E0
    b lbl_800A7748
lbl_800A7740:
    li r3, 0x0
    b lbl_800A774C
lbl_800A7748:
    li r3, 0x1
lbl_800A774C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7760
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7760() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80168D1C
    cmpwi r3, 0x0
    bne lbl_800A7784
    li r0, 0x7
    stw r0, lbl_8049D5E0
    b lbl_800A77E8
lbl_800A7784:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800A77A4
    li r0, 0x4
    stw r0, lbl_8049D5E0
    li r0, 0x0
    stw r0, lbl_8049D5E4
    b lbl_800A77E8
lbl_800A77A4:
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_800A77BC
    li r0, 0x1
    stw r0, lbl_8049D5E0
    b lbl_800A77E8
lbl_800A77BC:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A77D4
    li r0, 0x1
    stw r0, lbl_8049D5E0
    b lbl_800A77E8
lbl_800A77D4:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800A77E8
    li r0, 0x1
    stw r0, lbl_8049D5E0
lbl_800A77E8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A77F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A77F8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    lis r3, lbl_803A2070@ha
    addi r31, r3, lbl_803A2070@l
    lwz r3, lbl_8049C300
    cmpwi r4, 0x0
    beq lbl_800A7830
    cmpwi r4, 0x1
    beq lbl_800A7844
    b lbl_800A7854
lbl_800A7830:
    addi r0, r3, 0x18
    stw r0, 0x8(r1)
    addi r0, r3, 0x108
    stw r0, 0xc(r1)
    b lbl_800A7854
lbl_800A7844:
    addi r0, r3, 0x90
    stw r0, 0x8(r1)
    addi r0, r3, 0x180
    stw r0, 0xc(r1)
lbl_800A7854:
    li r27, 0x0
    stw r27, lbl_8049D5E8
    stw r27, lbl_8049D5EC
    bl fn_800AE478
    lis r3, 0x4443
    addi r0, r3, 0x4331
    stw r0, 0x0(r31)
    stw r27, 0x4(r31)
    stw r26, 0x8(r31)
    li r26, 0x0
    addi r28, r1, 0x8
lbl_800A7880:
    lwzx r29, r28, r27
    bl fn_800914D8
    lwz r0, 0x10(r29)
    slwi r0, r0, 1
    add r3, r3, r0
    lhz r3, 0xb8(r3)
    li r4, 0x1
    li r5, 0x0
    li r6, 0x270f
    bl fn_801728DC
    clrlwi r30, r3, 16
    bl fn_800914D8
    lwz r0, 0x10(r29)
    slwi r0, r0, 1
    add r3, r3, r0
    sth r30, 0xb8(r3)
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmpwi r26, 0x2
    blt lbl_800A7880
    li r3, 0x0
    li r4, 0x0
    addi r5, r1, 0x8
    li r0, 0x2
    mtctr r0
lbl_800A78E4:
    lwzx r6, r5, r4
    add r7, r31, r3
    lwz r0, 0x0(r6)
    stw r0, 0x10(r7)
    lwz r0, 0x10(r6)
    stw r0, 0x14(r7)
    lwz r0, 0x14(r6)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r6)
    stw r0, 0x1c(r7)
    addi r3, r3, 0x10
    addi r4, r4, 0x4
    bdnz lbl_800A78E4
    bl fn_800AE428
    stw r3, 0x30(r31)
    li r0, 0x0
    stw r0, 0x3c(r31)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0xc08(r3)
    stw r4, 0x40(r31)
    li r0, 0x19
    stw r0, lbl_8049D5E0
    lis r3, lbl_8039A0D0@ha
    addi r3, r3, lbl_8039A0D0@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_800A7960
    ori r0, r4, 0x200
    stw r0, 0x40(r31)
    b lbl_800A7968
lbl_800A7960:
    rlwinm r0, r4, 0, 23, 21
    stw r0, 0x40(r31)
lbl_800A7968:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7980
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7980() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_803A2070@ha
    addi r31, r3, lbl_803A2070@l
    lis r3, lbl_803A20B8@ha
    addi r30, r3, lbl_803A20B8@l
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0x21
    lwz r4, lbl_8049D5E8
    opword 0x4CC63182
    bl fn_80165C74
    lwz r0, lbl_8049D5EC
    cmpwi r0, 0x0
    beq lbl_800A79D4
    cmpwi r0, 0x3
    beq lbl_800A7AA4
    b lbl_800A7AAC
lbl_800A79D4:
    lwz r4, lbl_8049D5E8
    li r3, 0x96
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x0
    bne lbl_800A7A08
    bl fn_8016915C
    cmpwi r3, -0x1
    beq lbl_800A7A08
    mr r3, r31
    li r4, 0x44
    bl fn_80169278
lbl_800A7A08:
    lwz r3, lbl_8049D5E8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5E8
    mr r3, r30
    li r4, 0x110
    bl fn_801693A4
    cmplwi r3, 0x44
    bne lbl_800A7AAC
    lwz r3, 0x0(r30)
    subis r0, r3, 0x4443
    cmplwi r0, 0x4331
    bne lbl_800A7AAC
    lwz r3, 0x8(r30)
    lwz r0, 0x8(r31)
    cmpw r3, r0
    bne lbl_800A7AAC
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    beq lbl_800A7A74
    bl fn_8016915C
    cmpwi r3, -0x1
    beq lbl_800A7AAC
    li r0, 0x1
    stw r0, 0x4(r31)
    mr r3, r31
    li r4, 0x44
    bl fn_80169278
lbl_800A7A74:
    mr r3, r31
    mr r4, r30
    bl fn_800A7AC8
    lwz r0, 0x8(r31)
    cmpwi r0, 0x2
    bne lbl_800A7A94
    li r3, 0x3
    bl fn_8008D6C4
lbl_800A7A94:
    li r0, 0x3
    stw r0, lbl_8049D5EC
    li r3, 0x0
    b lbl_800A7AB0
lbl_800A7AA4:
    li r3, 0x0
    b lbl_800A7AB0
lbl_800A7AAC:
    li r3, 0x1
lbl_800A7AB0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7AC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7AC8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r30, r4
    lwz r31, lbl_8049C300
    bl fn_80169518
    cmpwi r3, 0x0
    beq lbl_800A7B00
    cmpwi r3, 0x1
    beq lbl_800A7B14
    b lbl_800A7B24
lbl_800A7B00:
    addi r0, r31, 0x90
    stw r0, 0x8(r1)
    addi r0, r31, 0x180
    stw r0, 0xc(r1)
    b lbl_800A7B24
lbl_800A7B14:
    addi r0, r31, 0x18
    stw r0, 0x8(r1)
    addi r0, r31, 0x108
    stw r0, 0xc(r1)
lbl_800A7B24:
    li r4, 0x0
    li r5, 0x0
    addi r6, r1, 0x8
    li r0, 0x2
    mtctr r0
lbl_800A7B38:
    add r7, r30, r4
    lwzx r8, r6, r5
    lwz r0, 0x10(r7)
    stw r0, 0x0(r8)
    lwz r0, 0x14(r7)
    stw r0, 0x10(r8)
    lwz r0, 0x18(r7)
    stw r0, 0x14(r8)
    lwz r0, 0x1c(r7)
    stw r0, 0x18(r8)
    addi r4, r4, 0x10
    addi r5, r5, 0x4
    bdnz lbl_800A7B38
    mr r4, r29
    mr r5, r30
    cmpwi r3, 0x0
    beq lbl_800A7B84
    mr r4, r30
    mr r5, r29
lbl_800A7B84:
    lwz r3, 0x30(r4)
    lwz r0, 0x30(r5)
    xor r0, r3, r0
    clrlwi r0, r0, 1
    stw r0, 0x30(r4)
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    bne lbl_800A7BAC
    li r0, 0x1
    stw r0, 0x30(r4)
lbl_800A7BAC:
    li r0, 0x0
    stw r0, 0x30(r5)
    lwz r3, 0x30(r29)
    lwz r0, 0x30(r30)
    cmpw r3, r0
    bge lbl_800A7BD4
    lwz r0, 0x40(r30)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc08(r3)
lbl_800A7BD4:
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0xc08(r4)
    lwz r0, 0x40(r30)
    rlwinm r0, r0, 0, 22, 22
    or r0, r3, r0
    stw r0, 0xc08(r4)
    li r27, 0x0
    li r28, 0x0
lbl_800A7BF8:
    add r3, r31, r28
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_800A7C10
    addi r3, r3, 0x18
    bl fn_800A7CDC
lbl_800A7C10:
    addi r27, r27, 0x1
    addi r28, r28, 0x78
    cmpwi r27, 0x19
    blt lbl_800A7BF8
    li r11, 0x0
    li r3, 0x0
    li r5, 0x0
    li r6, 0x1
    li r0, 0x2
lbl_800A7C34:
    li r4, 0x0
    mulli r7, r3, 0x78
    add r9, r31, r7
    mtctr r0
lbl_800A7C44:
    mulli r7, r4, 0x78
    add r10, r31, r7
    lwz r8, 0x28(r9)
    lwz r7, 0xa0(r10)
    cmpw r8, r7
    bne lbl_800A7C90
    lwz r8, 0x2c(r9)
    lwz r7, 0xa4(r10)
    cmpw r8, r7
    bne lbl_800A7C90
    addi r7, r4, 0x1
    mulli r7, r7, 0x78
    add r8, r31, r7
    lwz r7, 0x2c(r8)
    cmpwi r7, 0x0
    bne lbl_800A7C8C
    stw r6, 0x2c(r8)
    b lbl_800A7C90
lbl_800A7C8C:
    stw r5, 0x2c(r8)
lbl_800A7C90:
    addi r4, r4, 0x2
    bdnz lbl_800A7C44
    addi r11, r11, 0x1
    addi r3, r3, 0x2
    cmpwi r11, 0x2
    blt lbl_800A7C34
    lwz r3, 0x30(r29)
    lwz r0, 0x30(r30)
    xor r27, r3, r0
    mr r3, r27
    bl fn_800A8968
    mr r3, r27
    bl fn_8005CEE8
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7CDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7CDC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    stw r31, 0x0(r3)
    lwz r3, 0x10(r3)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x32
    bl fn_801728DC
    stw r3, 0x10(r30)
    bl fn_8008BBD8
    mr r6, r3
    lwz r3, 0x14(r30)
    li r4, 0x0
    li r5, 0x0
    bl fn_801728DC
    stw r3, 0x14(r30)
    li r0, 0x64
    stw r0, 0x18(r30)
    stw r31, 0x1c(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7D54
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7D54() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80169518
    cmpwi r3, 0x0
    beq lbl_800A7D78
    subfic r31, r31, 0x1
lbl_800A7D78:
    mulli r4, r31, 0x58
    lis r3, lbl_803A2560@ha
    addi r0, r3, lbl_803A2560@l
    add r3, r0, r4
    addi r3, r3, 0x10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7DA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7DA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r30, lbl_8049C300
    li r0, 0x0
    stw r0, lbl_8049D5E8
    stw r0, lbl_8049D5EC
    bl fn_800AE478
    lis r3, 0x4443
    addi r0, r3, 0x5337
    lis r3, lbl_803A21C8@ha
    stw r0, lbl_803A21C8@l(r3)
    li r0, 0x2
    addi r31, r3, lbl_803A21C8@l
    stw r0, 0x4(r31)
    stw r29, 0x8(r31)
    bl fn_800AE428
    stw r3, 0x1c(r31)
    lwz r0, 0xbe4(r30)
    stw r0, 0x10(r31)
    lwz r0, 0xbe8(r30)
    stw r0, 0x14(r31)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc08(r3)
    rlwinm r0, r0, 0, 24, 25
    stw r0, 0x18(r31)
    li r0, 0x1a
    stw r0, lbl_8049D5E0
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7E38
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7E38() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_803A21C8@ha
    addi r31, r3, lbl_803A21C8@l
    lis r3, lbl_803A21E8@ha
    addi r30, r3, lbl_803A21E8@l
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0x3c
    lwz r4, lbl_8049D5E8
    opword 0x4CC63182
    bl fn_80165C74
    lwz r0, lbl_8049D5EC
    cmpwi r0, 0x0
    beq lbl_800A7E8C
    cmpwi r0, 0x3
    beq lbl_800A7F5C
    b lbl_800A7F64
lbl_800A7E8C:
    lwz r4, lbl_8049D5E8
    li r3, 0x96
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x0
    bne lbl_800A7EC0
    bl fn_8016915C
    cmpwi r3, -0x1
    beq lbl_800A7EC0
    mr r3, r31
    li r4, 0x20
    bl fn_80169278
lbl_800A7EC0:
    lwz r3, lbl_8049D5E8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5E8
    mr r3, r30
    li r4, 0x110
    bl fn_801693A4
    cmplwi r3, 0x20
    bne lbl_800A7F64
    lwz r3, 0x0(r30)
    subis r0, r3, 0x4443
    cmplwi r0, 0x5337
    bne lbl_800A7F64
    lwz r3, 0x8(r30)
    lwz r0, 0x8(r31)
    cmpw r3, r0
    bne lbl_800A7F64
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    beq lbl_800A7F2C
    bl fn_8016915C
    cmpwi r3, -0x1
    beq lbl_800A7F64
    li r0, 0x3
    stw r0, 0x4(r31)
    mr r3, r31
    li r4, 0x20
    bl fn_80169278
lbl_800A7F2C:
    mr r3, r31
    mr r4, r30
    bl fn_800A7F80
    lwz r0, 0x8(r31)
    cmpwi r0, 0x2
    bne lbl_800A7F4C
    li r3, 0x3
    bl fn_8008D6C4
lbl_800A7F4C:
    li r0, 0x3
    stw r0, lbl_8049D5EC
    li r3, 0x0
    b lbl_800A7F68
lbl_800A7F5C:
    li r3, 0x0
    b lbl_800A7F68
lbl_800A7F64:
    li r3, 0x1
lbl_800A7F68:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A7F80
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A7F80() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lwz r31, lbl_8049C300
    bl fn_80169518
    mr r4, r29
    mr r5, r30
    cmpwi r3, 0x0
    beq lbl_800A7FBC
    mr r4, r30
    mr r5, r29
lbl_800A7FBC:
    lwz r3, 0x1c(r4)
    lwz r0, 0x1c(r5)
    xor r0, r3, r0
    clrlwi r0, r0, 1
    stw r0, 0x1c(r4)
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    bne lbl_800A7FE4
    li r0, 0x1
    stw r0, 0x1c(r4)
lbl_800A7FE4:
    li r0, 0x0
    stw r0, 0x1c(r5)
    lwz r3, 0x1c(r29)
    lwz r0, 0x1c(r30)
    cmpw r3, r0
    bge lbl_800A8028
    lwz r0, 0x10(r30)
    stw r0, 0xbe4(r31)
    lwz r0, 0x14(r30)
    stw r0, 0xbe8(r31)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0xc08(r4)
    lwz r0, 0x18(r30)
    rlwinm r0, r0, 0, 24, 25
    or r0, r3, r0
    stw r0, 0xc08(r4)
lbl_800A8028:
    lwz r3, 0xbe4(r31)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x18
    bl fn_801728DC
    stw r3, 0xbe4(r31)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8058
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8058() {
    nofralloc
    lis r5, lbl_803A22F8@ha
    addi r8, r5, lbl_803A22F8@l
    lwz r5, lbl_8049C300
    cmpwi r4, 0x0
    beq lbl_800A8078
    cmpwi r4, 0x1
    beq lbl_800A8084
    b lbl_800A808C
lbl_800A8078:
    addi r6, r5, 0x18
    addi r7, r5, 0x108
    b lbl_800A808C
lbl_800A8084:
    addi r6, r5, 0x90
    addi r7, r5, 0x180
lbl_800A808C:
    li r5, 0x0
    stw r5, lbl_8049D5E8
    stw r5, lbl_8049D5EC
    lis r4, 0x4443
    addi r0, r4, 0x4838
    stw r0, 0x0(r8)
    li r0, 0x4
    stw r0, 0x4(r8)
    stw r3, 0x8(r8)
    li r0, 0x4
    mtctr r0
lbl_800A80B8:
    add r4, r8, r5
    add r3, r6, r5
    lwz r0, 0x28(r3)
    stw r0, 0x10(r4)
    add r3, r7, r5
    lwz r0, 0x28(r3)
    stw r0, 0x24(r4)
    addi r5, r5, 0x4
    bdnz lbl_800A80B8
    lwz r0, 0x6c(r6)
    stw r0, 0x20(r8)
    lwz r0, 0x6c(r7)
    stw r0, 0x34(r8)
    li r0, 0x1b
    stw r0, lbl_8049D5E0
    blr
}

// ----------------------------------------------------------------------------
// fn_800A80F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A80F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_803A22F8@ha
    addi r31, r3, lbl_803A22F8@l
    lis r3, lbl_803A2330@ha
    addi r30, r3, lbl_803A2330@l
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0x55
    lwz r4, lbl_8049D5E8
    opword 0x4CC63182
    bl fn_80165C74
    lwz r0, lbl_8049D5EC
    cmpwi r0, 0x0
    beq lbl_800A814C
    cmpwi r0, 0x3
    beq lbl_800A821C
    b lbl_800A8224
lbl_800A814C:
    lwz r4, lbl_8049D5E8
    li r3, 0x96
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x0
    bne lbl_800A8180
    bl fn_8016915C
    cmpwi r3, -0x1
    beq lbl_800A8180
    mr r3, r31
    li r4, 0x38
    bl fn_80169278
lbl_800A8180:
    lwz r3, lbl_8049D5E8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5E8
    mr r3, r30
    li r4, 0x110
    bl fn_801693A4
    cmplwi r3, 0x38
    bne lbl_800A8224
    lwz r3, 0x0(r30)
    subis r0, r3, 0x4443
    cmplwi r0, 0x4838
    bne lbl_800A8224
    lwz r3, 0x8(r30)
    lwz r0, 0x8(r31)
    cmpw r3, r0
    bne lbl_800A8224
    lwz r0, 0x4(r30)
    cmpwi r0, 0x5
    beq lbl_800A81EC
    bl fn_8016915C
    cmpwi r3, -0x1
    beq lbl_800A8224
    li r0, 0x5
    stw r0, 0x4(r31)
    mr r3, r31
    li r4, 0x38
    bl fn_80169278
lbl_800A81EC:
    mr r3, r31
    mr r4, r30
    bl fn_800A8240
    lwz r0, 0x8(r31)
    cmpwi r0, 0x2
    bne lbl_800A820C
    li r3, 0x3
    bl fn_8008D6C4
lbl_800A820C:
    li r0, 0x3
    stw r0, lbl_8049D5EC
    li r3, 0x0
    b lbl_800A8228
lbl_800A821C:
    li r3, 0x0
    b lbl_800A8228
lbl_800A8224:
    li r3, 0x1
lbl_800A8228:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8240
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8240() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r4
    lwz r30, lbl_8049C300
    bl fn_80169518
    cmpwi r3, 0x0
    beq lbl_800A8274
    cmpwi r3, 0x1
    beq lbl_800A8288
    b lbl_800A8298
lbl_800A8274:
    addi r0, r30, 0x90
    stw r0, 0x8(r1)
    addi r0, r30, 0x180
    stw r0, 0xc(r1)
    b lbl_800A8298
lbl_800A8288:
    addi r0, r30, 0x18
    stw r0, 0x8(r1)
    addi r0, r30, 0x108
    stw r0, 0xc(r1)
lbl_800A8298:
    li r11, 0x0
    li r3, 0x0
    li r4, 0x0
    addi r8, r1, 0x8
    li r0, 0x4
lbl_800A82AC:
    li r5, 0x0
    add r9, r31, r3
    lwzx r10, r8, r4
    mtctr r0
lbl_800A82BC:
    add r6, r9, r5
    lwz r7, 0x10(r6)
    add r6, r10, r5
    stw r7, 0x28(r6)
    addi r5, r5, 0x4
    bdnz lbl_800A82BC
    lwz r5, 0x20(r9)
    stw r5, 0x6c(r10)
    addi r11, r11, 0x1
    addi r3, r3, 0x14
    addi r4, r4, 0x4
    cmpwi r11, 0x2
    blt lbl_800A82AC
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8308
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8308() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r31, lbl_8049D5D8
    bl fn_8005D018
    cmpwi r3, 0x0
    bne lbl_800A8338
    li r0, 0x6
    stw r0, lbl_8049D5D0
    b lbl_800A837C
lbl_800A8338:
    li r3, 0x3
    bl fn_8008D6C4
    stw r31, lbl_8049D5D0
    lwz r3, lbl_8049D5F4
    lwz r0, lbl_8049D5F0
    slwi r0, r0, 5
    divw r3, r3, r0
    addi r0, r3, 0x1
    stw r0, lbl_8049D5DC
    cmpwi r0, 0x14
    ble lbl_800A836C
    li r0, 0x14
    stw r0, lbl_8049D5DC
lbl_800A836C:
    cmpwi r0, 0x3
    bge lbl_800A837C
    li r0, 0x3
    stw r0, lbl_8049D5DC
lbl_800A837C:
    li r3, 0x1
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8394
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8394() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D5D0
    cmpwi r0, 0x6
    bge lbl_800A83F0
    bl fn_80168C90
    cmpwi r3, 0x0
    beq lbl_800A83CC
    lwz r0, lbl_8049D5D0
    stw r0, lbl_8049D5D4
    li r0, 0x7
    stw r0, lbl_8049D5D0
    b lbl_800A83F0
lbl_800A83CC:
    lis r3, 0x4
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A83F0
    li r3, 0x2717
    li r4, 0x5
    bl fn_80168C30
    li r3, 0x1
    b lbl_800A87F4
lbl_800A83F0:
    lwz r0, lbl_8049D5D0
    cmplwi r0, 0xa
    bgt lbl_800A87F0
    lis r3, jumptable_8034D310@ha
    addi r3, r3, jumptable_8034D310@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0x76
    opword 0x4CC63182
    bl fn_80165C74
    bl fn_80169518
    subic r0, r3, 0x1
    subfe r3, r0, r0
    addi r0, r3, 0x2
    stw r0, lbl_8049D5D0
    li r0, 0x0
    stw r0, lbl_8049D5D8
    b lbl_800A87F0
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0x8c
    opword 0x4CC63182
    bl fn_80165C74
    lwz r4, lbl_8049D5D8
    li r3, 0x78
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x0
    bne lbl_800A8490
    bl fn_8016915C
    cmpwi r3, -0x1
    beq lbl_800A8524
    li r3, 0x2
    bl fn_800A8804
    b lbl_800A8524
lbl_800A8490:
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_800A8858
    cmpwi r3, 0x0
    beq lbl_800A84F8
    bge lbl_800A84B8
    li r0, 0x7
    stw r0, lbl_8049D5D0
    li r3, 0x1
    b lbl_800A87F4
lbl_800A84B8:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x3
    bne lbl_800A8524
    li r3, 0x3
    bl fn_800A8804
    cmpwi r3, 0x0
    bge lbl_800A84E4
    li r0, 0x7
    stw r0, lbl_8049D5D0
    li r3, 0x1
    b lbl_800A87F4
lbl_800A84E4:
    li r0, 0x4
    stw r0, lbl_8049D5D0
    li r0, 0x0
    stw r0, lbl_8049D5D8
    b lbl_800A8524
lbl_800A84F8:
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0xe10
    ble lbl_800A8524
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x7
    stw r0, lbl_8049D5D0
    stw r0, lbl_8049D5D4
    li r3, 0x1
    b lbl_800A87F4
lbl_800A8524:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    b lbl_800A87F0
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0xa2
    opword 0x4CC63182
    bl fn_80165C74
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_800A8858
    cmpwi r3, 0x0
    beq lbl_800A87F0
    bge lbl_800A8570
    li r0, 0x7
    stw r0, lbl_8049D5D0
    li r3, 0x1
    b lbl_800A87F4
lbl_800A8570:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x3
    bne lbl_800A87F0
    li r0, 0x5
    stw r0, lbl_8049D5D0
    li r0, 0x0
    stw r0, lbl_8049D5D8
    b lbl_800A87F0
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0xb7
    opword 0x4CC63182
    bl fn_80165C74
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_800A8858
    cmpwi r3, 0x0
    beq lbl_800A8604
    bge lbl_800A85CC
    li r0, 0x7
    stw r0, lbl_8049D5D0
    li r3, 0x1
    b lbl_800A87F4
lbl_800A85CC:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x2
    bne lbl_800A87F0
    li r3, 0x3
    bl fn_800A8804
    cmpwi r3, 0x0
    bge lbl_800A85F8
    li r0, 0x7
    stw r0, lbl_8049D5D0
    li r3, 0x1
    b lbl_800A87F4
lbl_800A85F8:
    li r0, 0x3
    stw r0, lbl_8049D5D0
    b lbl_800A87F0
lbl_800A8604:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    cmpwi r0, 0xe10
    ble lbl_800A87F0
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x7
    stw r0, lbl_8049D5D0
    stw r0, lbl_8049D5D4
    li r3, 0x1
    b lbl_800A87F4
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0xd2
    opword 0x4CC63182
    bl fn_80165C74
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_800A8858
    cmpwi r3, 0x0
    beq lbl_800A86B4
    bge lbl_800A8674
    li r0, 0x7
    stw r0, lbl_8049D5D0
    li r3, 0x1
    b lbl_800A87F4
lbl_800A8674:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x3
    bne lbl_800A87F0
    li r3, 0x3
    bl fn_800A8804
    cmpwi r3, 0x0
    bge lbl_800A86A0
    li r0, 0x7
    stw r0, lbl_8049D5D0
    li r3, 0x1
    b lbl_800A87F4
lbl_800A86A0:
    li r0, 0x5
    stw r0, lbl_8049D5D0
    li r0, 0x0
    stw r0, lbl_8049D5D8
    b lbl_800A87F0
lbl_800A86B4:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    cmpwi r0, 0xe10
    ble lbl_800A87F0
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x7
    stw r0, lbl_8049D5D0
    stw r0, lbl_8049D5D4
    li r3, 0x1
    b lbl_800A87F4
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0xe7
    opword 0x4CC63182
    bl fn_80165C74
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    bl fn_80171928
    cmpwi r3, 0x0
    bne lbl_800A87F0
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0x2
    blt lbl_800A87F0
    li r3, 0x2
    bl fn_8008D6C4
    li r3, 0x0
    b lbl_800A87F4
    bl fn_80171928
    cmpwi r3, 0x0
    bne lbl_800A87F0
    li r3, 0x0
    bl fn_8008D6C4
    li r3, 0x0
    b lbl_800A87F4
    li r0, 0x0
    stw r0, lbl_8049D5D8
    bl fn_8008D7F0
    li r0, 0x8
    stw r0, lbl_8049D5D0
    lwz r3, lbl_8049D5D8
    addi r4, r3, 0x1
    stw r4, lbl_8049D5D8
    lis r3, lbl_803BE030@ha
    addi r3, r3, lbl_803BE030@l
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800A87F0
    cmpwi r4, 0xf
    ble lbl_800A87F0
    bl fn_800A7760
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A87A8
    li r0, 0x9
    stw r0, lbl_8049D5D0
    b lbl_800A87F0
lbl_800A87A8:
    li r0, 0xa
    stw r0, lbl_8049D5D0
    b lbl_800A87F0
    bl fn_800A7358
    cmpwi r3, 0x0
    bne lbl_800A87F0
    lwz r0, lbl_8049D5D4
    stw r0, lbl_8049D5D0
    li r0, 0x0
    stw r0, lbl_8049D5D8
    li r3, 0x3
    bl fn_8008D6C4
    b lbl_800A87F0
    bl fn_800A7358
    cmpwi r3, 0x0
    bne lbl_800A87F0
    li r3, -0x1
    b lbl_800A87F4
lbl_800A87F0:
    li r3, 0x1
lbl_800A87F4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8804
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8804() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r4, 0x444d
    addi r0, r4, 0x4832
    lis r4, lbl_803A2440@ha
    stw r0, lbl_803A2440@l(r4)
    li r0, 0x6
    addi r4, r4, lbl_803A2440@l
    stw r0, 0x4(r4)
    stw r3, 0x8(r4)
    mr r3, r4
    li r4, 0x10
    bl fn_80169278
    cntlzw r0, r3
    srwi r0, r0, 5
    neg r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8858
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8858() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    li r0, 0x0
    stw r0, 0x0(r3)
    li r30, 0x0
    lis r31, lbl_803A2450@ha
    addi r29, r31, lbl_803A2450@l
lbl_800A8888:
    addi r3, r31, lbl_803A2450@l
    li r4, 0x110
    bl fn_801693A4
    cmpwi r3, 0x0
    ble lbl_800A88C8
    cmplwi r3, 0x10
    bne lbl_800A88C0
    lwz r4, 0x0(r29)
    subis r0, r4, 0x444d
    cmplwi r0, 0x4832
    bne lbl_800A88C0
    lwz r0, 0x8(r29)
    stw r0, 0x0(r27)
    mr r30, r3
lbl_800A88C0:
    cmpwi r28, 0x0
    bne lbl_800A8888
lbl_800A88C8:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A88E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A88E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, lbl_8049D5D8
    bl fn_8008D7F0
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8910
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8910() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lis r3, lbl_80339948@ha
    addi r4, r3, lbl_80339948@l
    lwz r3, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    li r4, 0x10
    bl fn_80169278
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8960
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8960() {
    nofralloc
    lwz r3, lbl_8049D618
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8968
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8968() {
    nofralloc
    stw r3, lbl_8049D618
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8970
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8970() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_800A89B4
lbl_800A8990:
    addi r3, r1, 0x8
    bl fn_80324614
    cmpwi r3, 0x0
    beq lbl_800A89A8
    lbz r31, 0x8(r1)
    b lbl_800A89C0
lbl_800A89A8:
    lbz r3, 0x8(r1)
    addi r0, r3, 0x1
    stb r0, 0x8(r1)
lbl_800A89B4:
    clrlwi r0, r0, 24
    cmplwi r0, 0xff
    blt lbl_800A8990
lbl_800A89C0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A89D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A89D8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800914D8
    lwz r3, 0x190(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A89FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A89FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    and r31, r4, r3
    cmpwi r31, 0x0
    beq lbl_800A8A64
    bl fn_800914D8
    lwz r0, 0x190(r3)
    and r0, r30, r0
    cmpw r31, r0
    beq lbl_800A8A64
    bl fn_800914D8
    lwz r0, 0x190(r3)
    andc r0, r0, r30
    stw r0, 0x190(r3)
    bl fn_800914D8
    lwz r0, 0x190(r3)
    or r0, r0, r31
    stw r0, 0x190(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800A8A64:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8A7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8A7C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r3, 0xc
    bl fn_800A89FC
    li r3, 0x3
    mr r4, r31
    bl fn_800A89FC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8AB8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8AB8() {
    nofralloc
    li r8, 0x0
    li r6, 0x0
    lis r7, lbl_8034D340@ha
    addi r7, r7, lbl_8034D340@l
    li r0, 0x5
    mtctr r0
lbl_800A8AD0:
    slwi r0, r6, 2
    lwzx r0, r7, r0
    cmpw r3, r0
    bge lbl_800A8AEC
    addi r8, r8, 0x1
    addi r6, r6, 0x3
    bdnz lbl_800A8AD0
lbl_800A8AEC:
    mulli r6, r8, 0x3
    addi r0, r6, 0x1
    slwi r0, r0, 2
    lis r3, lbl_8034D340@ha
    addi r3, r3, lbl_8034D340@l
    lwzx r0, r3, r0
    stw r0, 0x0(r4)
    addi r0, r6, 0x2
    slwi r0, r0, 2
    lwzx r0, r3, r0
    stw r0, 0x0(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8B1C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8B1C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_800914D8
    lwz r0, 0x128(r3)
    cmpw r30, r0
    bne lbl_800A8B58
    bl fn_800914D8
    lwz r0, 0x12c(r3)
    cmpw r31, r0
    beq lbl_800A8B78
lbl_800A8B58:
    bl fn_800914D8
    stw r30, 0x128(r3)
    bl fn_800914D8
    stw r31, 0x12c(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800A8B78:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8B90
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8B90() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    bl fn_800914D8
    lwz r0, 0x190(r3)
    or r28, r28, r0
    lis r3, lbl_8034D110@ha
    addi r31, r3, lbl_8034D110@l
    li r0, 0x0
    stw r0, lbl_8049D610
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800A8BE8
    rlwinm r28, r28, 0, 27, 27
    subfic r0, r28, 0x0
    subfe r3, r0, r0
    addi r0, r3, 0x5
    stw r0, 0x24(r31)
    b lbl_800A8BF8
lbl_800A8BE8:
    rlwinm r28, r28, 0, 27, 27
    cntlzw r0, r28
    srwi r0, r0, 5
    stw r0, 0x24(r31)
lbl_800A8BF8:
    lwz r30, 0x24(r31)
    bl fn_800914D8
    stw r30, 0x194(r3)
    bl fn_800AE4CC
    slwi r29, r3, 2
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0xac(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0xf
    addi r6, r30, 0x423f
    bl fn_801728DC
    stw r3, 0x3c(r31)
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0xac(r3)
    li r4, -0x4e20
    li r5, 0x0
    addi r6, r30, 0x423f
    bl fn_801728DC
    stw r3, 0x40(r31)
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0xac(r3)
    li r4, 0x4e20
    li r5, 0x0
    addi r6, r30, 0x423f
    bl fn_801728DC
    stw r3, 0x44(r31)
    bl fn_800914D8
    lwz r3, 0xb4(r3)
    bl fn_800AD4F8
    mr r29, r3
    li r4, 0x0
    li r5, -0xc8
    li r6, 0xc8
    bl fn_801728DC
    stw r3, 0x54(r31)
    mr r3, r29
    addi r4, r31, 0x5c
    addi r5, r31, 0x58
    bl fn_800A8AB8
    cmpwi r28, 0x0
    bne lbl_800A8CD4
    li r4, 0x3e8
    stw r4, 0x3c(r31)
    li r3, 0x0
    stw r3, 0x40(r31)
    li r0, 0x7d0
    stw r0, 0x44(r31)
    stw r4, 0x54(r31)
    stw r3, 0x58(r31)
    stw r0, 0x5c(r31)
    b lbl_800A8CEC
lbl_800A8CD4:
    li r0, 0x3e8
    stw r0, 0x54(r31)
    li r0, 0x0
    stw r0, 0x58(r31)
    li r0, 0x7d0
    stw r0, 0x5c(r31)
lbl_800A8CEC:
    bl fn_800A8970
    stw r3, 0x84(r31)
    li r0, 0x13
    stw r0, lbl_8049D5E0
    li r0, 0x0
    stw r0, lbl_8049D614
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8D1C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8D1C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D5E0
    cmpwi r0, 0x14
    bne lbl_800A8D40
    bl fn_8016910C
    li r0, 0x15
    stw r0, lbl_8049D5E0
lbl_800A8D40:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8D50
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8D50() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800914D8
    lwz r3, 0x194(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8D74
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8D74() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    bl fn_800AE4CC
    mr r30, r3
    lis r3, lbl_803A2A80@ha
    addi r3, r3, lbl_803A2A80@l
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_800A8DB4
    li r0, 0x1
    stw r0, lbl_8049D5E0
    b lbl_800A8E98
lbl_800A8DB4:
    li r31, 0x2
    stw r31, lbl_8049D610
    lis r3, lbl_8034D1E8@ha
    addi r28, r3, lbl_8034D1E8@l
    rlwinm r29, r29, 0, 26, 26
    cmpwi r29, 0x0
    beq lbl_800A8DE0
    li r31, 0x6
    bl fn_800914D8
    stw r31, 0x194(r3)
    b lbl_800A8DE8
lbl_800A8DE0:
    bl fn_800914D8
    stw r31, 0x194(r3)
lbl_800A8DE8:
    li r5, 0x0
    lis r3, lbl_803A2A80@ha
    addi r4, r3, lbl_803A2A80@l
    lwz r0, 0x4(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A8E50
lbl_800A8E04:
    add r3, r4, r5
    lbz r3, 0x8(r3)
    cmpwi r3, 0x40
    bge lbl_800A8E48
    bl fn_800AC6E4
    cmpwi r3, 0x0
    beq lbl_800A8E50
    cmpwi r29, 0x0
    beq lbl_800A8E38
    li r31, 0x7
    bl fn_800914D8
    stw r31, 0x194(r3)
    b lbl_800A8E50
lbl_800A8E38:
    li r31, 0x3
    bl fn_800914D8
    stw r31, 0x194(r3)
    b lbl_800A8E50
lbl_800A8E48:
    addi r5, r5, 0x1
    bdnz lbl_800A8E04
lbl_800A8E50:
    bl fn_800914D8
    lwz r0, 0x194(r3)
    stw r0, 0x24(r28)
    bl fn_800914D8
    slwi r0, r30, 2
    add r3, r3, r0
    lwz r0, 0xac(r3)
    stw r0, 0x3c(r28)
    bl fn_800914D8
    lwz r3, 0xb4(r3)
    bl fn_800AD4F8
    stw r3, 0x54(r28)
    bl fn_800A8970
    stw r3, 0x6c(r28)
    li r0, 0x13
    stw r0, lbl_8049D5E0
    li r0, 0x9
    stw r0, lbl_8049D614
lbl_800A8E98:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8EB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8EB0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016CE8C
    cmpwi r3, 0x0
    bne lbl_800A8F00
    lwz r0, lbl_8049D610
    cmpwi r0, 0x2
    beq lbl_800A8EE4
    lis r3, lbl_8034D110@ha
    addi r3, r3, lbl_8034D110@l
    bl fn_800AE534
    b lbl_800A8EF8
lbl_800A8EE4:
    lis r3, lbl_8034D1E8@ha
    addi r3, r3, lbl_8034D1E8@l
    lis r4, lbl_803A2A80@ha
    addi r4, r4, lbl_803A2A80@l
    bl fn_80169034
lbl_800A8EF8:
    li r0, 0x14
    stw r0, lbl_8049D5E0
lbl_800A8F00:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8F10
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8F10() {
    nofralloc
    li r0, 0x0
    lis r3, lbl_803A2A80@ha
    addi r5, r3, lbl_803A2A80@l
    stw r0, 0x4(r5)
    stw r0, lbl_803A2A80@l(r3)
    li r6, 0x0
    li r4, 0xff
    li r0, 0x40
    mtctr r0
lbl_800A8F34:
    add r3, r5, r6
    stb r4, 0x8(r3)
    addi r6, r6, 0x1
    bdnz lbl_800A8F34
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8F48
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8F48() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    b lbl_800A8F9C
lbl_800A8F68:
    mr r3, r31
    bl fn_800A90DC
    cmpwi r3, 0x0
    beq lbl_800A8F98
    mr r3, r31
    mr r4, r30
    bl fn_800AC728
    cmpwi r3, 0x0
    beq lbl_800A8F98
    mr r3, r31
    li r4, 0x1
    bl fn_800A8FC4
lbl_800A8F98:
    addi r31, r31, 0x1
lbl_800A8F9C:
    bl fn_800914D8
    lwz r0, 0x1d8(r3)
    cmpw r31, r0
    blt lbl_800A8F68
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A8FC4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A8FC4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_800A9098
    cmpwi r31, 0x0
    beq lbl_800A9038
    cmpwi r3, 0x0
    blt lbl_800A8FFC
    li r3, 0x1
    b lbl_800A9080
lbl_800A8FFC:
    mr r3, r30
    bl fn_800A90DC
    cmpwi r3, 0x0
    beq lbl_800A907C
    clrlwi r5, r30, 24
    lis r3, lbl_803A2A80@ha
    addi r4, r3, lbl_803A2A80@l
    lwz r0, 0x4(r4)
    add r3, r4, r0
    stb r5, 0x8(r3)
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
    li r3, 0x1
    b lbl_800A9080
lbl_800A9038:
    cmpwi r3, 0x0
    blt lbl_800A907C
    lis r4, lbl_803A2A80@ha
    addi r5, r4, lbl_803A2A80@l
    lwz r4, 0x4(r5)
    subi r0, r4, 0x1
    stw r0, 0x4(r5)
    add r4, r5, r0
    lbz r0, 0x8(r4)
    add r3, r5, r3
    stb r0, 0x8(r3)
    li r4, 0xff
    lwz r0, 0x4(r5)
    add r3, r5, r0
    stb r4, 0x8(r3)
    li r3, 0x1
    b lbl_800A9080
lbl_800A907C:
    li r3, 0x0
lbl_800A9080:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A9098
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A9098() {
    nofralloc
    li r6, 0x0
    lis r4, lbl_803A2A80@ha
    addi r5, r4, lbl_803A2A80@l
    lwz r0, 0x4(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A90D4
lbl_800A90B4:
    add r4, r5, r6
    lbz r0, 0x8(r4)
    cmpw r3, r0
    bne lbl_800A90CC
    mr r3, r6
    blr
lbl_800A90CC:
    addi r6, r6, 0x1
    bdnz lbl_800A90B4
lbl_800A90D4:
    li r3, -0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_800A90DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A90DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800914D8
    slwi r0, r30, 3
    add r31, r3, r0
    bl fn_800914D8
    mulli r0, r30, 0x5c
    add r3, r3, r0
    lwz r0, 0x4dc(r31)
    cmpwi r0, 0x3
    blt lbl_800A9130
    lwz r0, 0x6dc(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800A9130
    li r3, 0x1
    b lbl_800A9134
lbl_800A9130:
    li r3, 0x0
lbl_800A9134:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A914C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A914C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 24
    cmpwi r0, 0x4
    beq lbl_800A9188
    cmpwi r0, 0x3
    beq lbl_800A91DC
    b lbl_800A92A8
lbl_800A9188:
    lwz r3, 0x8(r3)
    lis r4, lbl_8034D4D0@ha
    addi r4, r4, lbl_8034D4D0@l
    addi r4, r4, 0xd
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_800A92A8
    lwz r3, 0xc(r29)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_800A91C0
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    bgt lbl_800A92A8
lbl_800A91C0:
    lwz r0, 0x0(r30)
    cmpw r3, r0
    beq lbl_800A92A8
    lis r3, 0xff67
    addi r0, r3, 0x6980
    stw r0, 0x0(r31)
    b lbl_800A92A8
lbl_800A91DC:
    lwz r3, 0x8(r3)
    lis r4, lbl_8034D4D0@ha
    addi r4, r4, lbl_8034D4D0@l
    addi r4, r4, 0x12
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_800A9238
    lwz r0, 0x0(r30)
    lwz r3, 0xc(r29)
    subf r0, r0, r3
    srawi r3, r0, 31
    xor r0, r3, r0
    subf r0, r3, r0
    mulli r3, r0, 0x3e8
    li r0, 0x4e20
    divw r0, r3, r0
    subfic r3, r0, 0x3e8
    cmpwi r3, 0x1
    bge lbl_800A922C
    li r3, 0x1
lbl_800A922C:
    lwz r0, 0x0(r31)
    add r0, r0, r3
    stw r0, 0x0(r31)
lbl_800A9238:
    lwz r3, 0x8(r29)
    lis r4, lbl_8034D4D0@ha
    addi r4, r4, lbl_8034D4D0@l
    addi r4, r4, 0x15
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_800A92A8
    lwz r0, 0x0(r30)
    lwz r3, 0xc(r29)
    subf r0, r0, r3
    srawi r3, r0, 31
    xor r0, r3, r0
    subf r29, r3, r0
    bl fn_801725B0
    li r4, 0xa
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    subfic r0, r29, 0x3e8
    srawi r0, r0, 2
    addze r0, r0
    add r3, r0, r3
    cmpwi r3, 0x1
    bge lbl_800A929C
    li r3, 0x1
lbl_800A929C:
    lwz r0, 0x0(r31)
    add r0, r0, r3
    stw r0, 0x0(r31)
lbl_800A92A8:
    li r3, 0x0
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A92C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A92C4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r0, 0x0
    stw r0, lbl_8049D604
    stw r0, lbl_8049D608
    stw r0, lbl_8049D60C
    lis r31, lbl_803A2AC8@ha
    addi r3, r31, lbl_803A2AC8@l
    addi r3, r3, 0x4
    li r4, 0x80
    bl fn_800A9BB0
    lis r3, 0x4446
    addi r0, r3, 0x4378
    stw r0, lbl_803A2AC8@l(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800A9318
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A9318() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    bl fn_80168C28
    cmpwi r3, 0x0
    bne lbl_800A9B2C
    lis r3, 0x4
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A938C
    lwz r0, lbl_8049D604
    cmpwi r0, 0x6
    bne lbl_800A9368
    li r0, 0x5a
    stw r0, lbl_8049D604
    li r0, 0x0
    stw r0, lbl_8049D5D8
    b lbl_800A938C
lbl_800A9368:
    cmpwi r0, 0x5a
    beq lbl_800A938C
    cmpwi r0, 0x5b
    beq lbl_800A938C
    li r3, 0x2717
    li r4, 0x5
    bl fn_80168C30
    b lbl_800A9B2C
    b lbl_800A9B2C
lbl_800A938C:
    lwz r0, lbl_8049D604
    cmpwi r0, 0x7
    beq lbl_800A99D8
    bge lbl_800A93C4
    cmpwi r0, 0x4
    beq lbl_800A954C
    bge lbl_800A93B8
    cmpwi r0, 0x0
    beq lbl_800A93E8
    bge lbl_800A9414
    b lbl_800A9B2C
lbl_800A93B8:
    cmpwi r0, 0x6
    bge lbl_800A9680
    b lbl_800A95BC
lbl_800A93C4:
    cmpwi r0, 0x5a
    beq lbl_800A9AC0
    bge lbl_800A93DC
    cmpwi r0, 0x9
    bge lbl_800A9B2C
    b lbl_800A9A00
lbl_800A93DC:
    cmpwi r0, 0x5c
    bge lbl_800A9B2C
    b lbl_800A9AFC
lbl_800A93E8:
    lis r3, lbl_803A2AC8@ha
    addi r3, r3, lbl_803A2AC8@l
    li r4, 0x84
    bl fn_80169278
    lwz r3, lbl_8049D604
    addi r0, r3, 0x1
    stw r0, lbl_8049D604
    li r0, 0x0
    stw r0, lbl_8049D5D8
    stw r0, lbl_8049D608
    b lbl_800A9B2C
lbl_800A9414:
    lis r25, lbl_803A2B4C@ha
    addi r24, r25, lbl_803A2B4C@l
    lis r3, lbl_803A2AC8@ha
    addi r30, r3, lbl_803A2AC8@l
    lis r29, 0x4446
    li r28, 0x2
    li r27, 0x1
    li r26, 0x0
    li r22, 0x4
    lis r31, lbl_803A2BD0@ha
    addi r23, r31, lbl_803A2BD0@l
lbl_800A9440:
    addi r3, r31, lbl_803A2BD0@l
    li r4, 0x88
    bl fn_801693A4
    cmpwi r3, 0x0
    beq lbl_800A94FC
    cmplwi r3, 0x84
    bne lbl_800A9440
    lwz r3, lbl_803A2BD0@l(r31)
    subis r0, r3, 0x4446
    cmplwi r0, 0x4378
    bne lbl_800A9498
    addi r3, r24, 0x4
    addi r4, r23, 0x4
    addi r5, r30, 0x4
    li r6, 0x80
    bl fn_800A9C90
    addi r0, r29, 0x4379
    stw r0, lbl_803A2B4C@l(r25)
    stw r28, lbl_8049D604
    stw r27, lbl_8049D608
    stw r26, lbl_8049D5D8
    b lbl_800A9440
lbl_800A9498:
    cmplwi r0, 0x4379
    bne lbl_800A9440
    lwz r0, lbl_8049D604
    cmpwi r0, 0x2
    blt lbl_800A9440
    addi r3, r24, 0x4
    addi r4, r23, 0x4
    li r5, 0x80
    bl fn_800A9CE8
    cmpwi r3, 0x0
    beq lbl_800A94D0
    stw r22, lbl_8049D604
    stw r26, lbl_8049D5D8
    b lbl_800A9440
lbl_800A94D0:
    stw r26, lbl_8049D604
    stw r26, lbl_8049D5D8
    lwz r3, lbl_8049D60C
    addi r0, r3, 0x1
    stw r0, lbl_8049D60C
    cmpwi r0, 0x5
    ble lbl_800A9440
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    b lbl_800A9440
lbl_800A94FC:
    lwz r0, lbl_8049D608
    cmpwi r0, 0x1
    bne lbl_800A9520
    lis r3, lbl_803A2B4C@ha
    addi r3, r3, lbl_803A2B4C@l
    li r4, 0x84
    bl fn_80169278
    li r0, 0x0
    stw r0, lbl_8049D608
lbl_800A9520:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    cmpwi r0, 0x708
    ble lbl_800A9B2C
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x63
    stw r0, lbl_8049D604
    b lbl_800A9B2C
lbl_800A954C:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    bl fn_8016915C
    cmpwi r3, 0x1
    bne lbl_800A9598
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0x2
    ble lbl_800A9598
    lis r3, lbl_803A2B4C@ha
    addi r3, r3, lbl_803A2B4C@l
    addi r3, r3, 0x4
    li r4, 0x80
    bl fn_80169148
    li r0, 0x0
    stw r0, lbl_8049D5D8
    lwz r3, lbl_8049D604
    addi r0, r3, 0x1
    stw r0, lbl_8049D604
lbl_800A9598:
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0x708
    ble lbl_800A9B2C
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x63
    stw r0, lbl_8049D604
    b lbl_800A9B2C
lbl_800A95BC:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    li r3, 0x4000
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A965C
    lis r3, 0x444d
    addi r0, r3, 0x5335
    lis r3, lbl_803A2610@ha
    stw r0, lbl_803A2610@l(r3)
    li r0, 0x7
    addi r23, r3, lbl_803A2610@l
    stw r0, 0x4(r23)
    li r22, 0x0
    stw r22, 0x8(r23)
    stw r22, 0xc(r23)
    stw r22, 0x10(r23)
    stw r22, 0x1c(r23)
    stw r22, 0x18(r23)
    stw r22, 0x24(r23)
    stw r22, 0x20(r23)
    bl OSGetTime
    stw r4, 0x2c(r23)
    stw r3, 0x28(r23)
    stw r22, 0x34(r23)
    stw r22, 0x30(r23)
    lis r3, lbl_803A2648@ha
    addi r3, r3, lbl_803A2648@l
    stw r22, 0x8(r3)
    stw r22, 0xc(r3)
    stw r22, 0x10(r3)
    stw r22, lbl_8049D5F4
    stw r22, lbl_8049D5F0
    mr r3, r23
    li r4, 0x38
    bl fn_80169278
    lwz r3, lbl_8049D604
    addi r0, r3, 0x1
    stw r0, lbl_8049D604
lbl_800A965C:
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0x708
    ble lbl_800A9B2C
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x63
    stw r0, lbl_8049D604
    b lbl_800A9B2C
lbl_800A9680:
    lis r3, lbl_803A2610@ha
    addi r3, r3, lbl_803A2610@l
    lwz r4, 0x8(r3)
    li r0, 0x14
    srawi r3, r4, 31
    li r5, 0x0
    subfc r0, r0, r4
    adde r26, r3, r5
    lis r27, lbl_803A2648@ha
    addi r28, r27, lbl_803A2648@l
    lwz r4, 0xc(r28)
    li r0, 0x5a
    srawi r3, r4, 31
    subfc r0, r0, r4
    adde r25, r3, r5
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    cmpwi r0, 0x708
    ble lbl_800A96E8
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x63
    stw r0, lbl_8049D604
    b lbl_800A9B2C
lbl_800A96E8:
    lis r29, lbl_803A2BD0@ha
    lis r30, 0x8000
    li r31, 0x3e8
    li r23, 0x1
    addi r24, r29, lbl_803A2BD0@l
    b lbl_800A97D8
lbl_800A9700:
    addi r3, r29, lbl_803A2BD0@l
    li r4, 0x88
    bl fn_801693A4
    cmpwi r3, 0x0
    beq lbl_800A97E0
    lwz r4, 0x0(r24)
    subis r0, r4, 0x444d
    cmplwi r0, 0x5335
    bne lbl_800A97D8
    cmplwi r3, 0x38
    bne lbl_800A97D8
    addi r3, r27, lbl_803A2648@l
    mr r4, r24
    bl fn_800A9B44
    bl OSGetTime
    stw r4, 0x34(r28)
    stw r3, 0x30(r28)
    lwz r0, 0x10(r28)
    cmpwi r0, 0x0
    beq lbl_800A97C4
    lwz r0, 0xf8(r30)
    srwi r0, r0, 2
    divwu r21, r0, r31
    lwz r0, 0x18(r28)
    lwz r5, 0x1c(r28)
    subfc r4, r5, r4
    subfe r3, r0, r3
    li r5, 0x0
    mr r6, r21
    bl __div2i
    mr r22, r4
    lwz r5, 0x28(r28)
    lwz r4, 0x2c(r28)
    lwz r0, 0x20(r28)
    lwz r3, 0x24(r28)
    subfc r4, r3, r4
    subfe r3, r0, r5
    li r5, 0x0
    mr r6, r21
    bl __div2i
    subf r3, r4, r22
    cmpwi r3, 0x0
    ble lbl_800A97C4
    lwz r0, lbl_8049D5F4
    add r0, r0, r3
    stw r0, lbl_8049D5F4
    lwz r3, lbl_8049D5F0
    addi r0, r3, 0x1
    stw r0, lbl_8049D5F0
lbl_800A97C4:
    stw r23, 0x10(r28)
    lwz r0, 0xc(r28)
    cmpwi r0, 0x5a
    blt lbl_800A97D8
    li r25, 0x1
lbl_800A97D8:
    cmpwi r25, 0x0
    beq lbl_800A9700
lbl_800A97E0:
    cmpwi r26, 0x0
    bne lbl_800A997C
    lwz r4, lbl_8049D5D8
    li r3, 0x3
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x0
    bne lbl_800A997C
    lis r3, lbl_803A2610@ha
    addi r4, r3, lbl_803A2610@l
    lwz r3, 0x8(r4)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    cmpwi r0, 0x14
    bne lbl_800A98F8
    li r21, 0x14d
    lwz r3, lbl_8049D5F0
    cmpwi r3, 0x0
    beq lbl_800A983C
    lwz r0, lbl_8049D5F4
    divw r21, r0, r3
    b lbl_800A984C
lbl_800A983C:
    li r0, 0x14d
    stw r0, lbl_8049D5F4
    li r0, 0x1
    stw r0, lbl_8049D5F0
lbl_800A984C:
    lwz r3, lbl_8049D614
    addi r22, r3, 0x1
    stw r22, lbl_8049D614
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x2
    beq lbl_800A98D4
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x3
    beq lbl_800A98D4
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x6
    beq lbl_800A98D4
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x7
    beq lbl_800A98D4
    bl fn_800914D8
    lwz r0, 0x190(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A98D4
    cmpwi r21, 0x96
    bge lbl_800A98B8
    addi r22, r22, 0x2
lbl_800A98B8:
    cmpwi r21, 0xc8
    bge lbl_800A98C4
    addi r22, r22, 0x1
lbl_800A98C4:
    cmpwi r21, 0x12c
    bge lbl_800A98D8
    addi r22, r22, 0x1
    b lbl_800A98D8
lbl_800A98D4:
    addi r22, r22, 0x3
lbl_800A98D8:
    cmpwi r22, 0x8
    ble lbl_800A98E4
    li r22, 0x8
lbl_800A98E4:
    addi r0, r22, 0x5a
    lis r3, lbl_803A2610@ha
    addi r3, r3, lbl_803A2610@l
    stw r0, 0xc(r3)
    li r26, 0x1
lbl_800A98F8:
    lis r3, lbl_803A2648@ha
    addi r5, r3, lbl_803A2648@l
    lwz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_800A9940
    li r0, 0x1
    lis r3, lbl_803A2610@ha
    addi r4, r3, lbl_803A2610@l
    stw r0, 0x10(r4)
    lwz r0, 0x28(r5)
    lwz r3, 0x2c(r5)
    stw r3, 0x1c(r4)
    stw r0, 0x18(r4)
    lwz r0, 0x30(r5)
    lwz r3, 0x34(r5)
    stw r3, 0x24(r4)
    stw r0, 0x20(r4)
    b lbl_800A9950
lbl_800A9940:
    li r0, 0x0
    lis r3, lbl_803A2610@ha
    addi r3, r3, lbl_803A2610@l
    stw r0, 0x10(r3)
lbl_800A9950:
    bl OSGetTime
    lis r5, lbl_803A2610@ha
    addi r5, r5, lbl_803A2610@l
    stw r4, 0x2c(r5)
    stw r3, 0x28(r5)
    li r0, 0x0
    stw r0, 0x34(r5)
    stw r0, 0x30(r5)
    mr r3, r5
    li r4, 0x38
    bl fn_80169278
lbl_800A997C:
    cmpwi r26, 0x0
    beq lbl_800A9B2C
    cmpwi r25, 0x0
    beq lbl_800A9B2C
    lis r3, lbl_803A2648@ha
    addi r3, r3, lbl_803A2648@l
    lwz r4, 0xc(r3)
    lis r3, lbl_803A2610@ha
    addi r3, r3, lbl_803A2610@l
    lwz r0, 0xc(r3)
    add r3, r4, r0
    subi r0, r3, 0xb4
    cmpwi r0, 0x7
    ble lbl_800A99C4
    lwz r3, lbl_8049D604
    addi r0, r3, 0x1
    stw r0, lbl_8049D604
    b lbl_800A9B2C
lbl_800A99C4:
    li r0, 0x5a
    stw r0, lbl_8049D604
    li r0, 0x0
    stw r0, lbl_8049D5D8
    b lbl_800A9B2C
lbl_800A99D8:
    lis r24, lbl_803A2560@ha
    addi r3, r24, lbl_803A2560@l
    bl fn_800A9D28
    addi r3, r24, lbl_803A2560@l
    li r4, 0x58
    bl fn_80169278
    lwz r3, lbl_8049D604
    addi r0, r3, 0x1
    stw r0, lbl_8049D604
    b lbl_800A9B2C
lbl_800A9A00:
    lwz r3, lbl_8049D5D8
    addi r4, r3, 0x1
    stw r4, lbl_8049D5D8
    li r3, 0x1e
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x0
    bne lbl_800A9A34
    lis r3, lbl_803A2560@ha
    addi r3, r3, lbl_803A2560@l
    li r4, 0x58
    bl fn_80169278
lbl_800A9A34:
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0x708
    ble lbl_800A9A58
    li r3, 0x2714
    li r4, 0x5
    bl fn_80168C30
    li r0, 0x63
    stw r0, lbl_8049D604
    b lbl_800A9B2C
lbl_800A9A58:
    lis r25, lbl_803A2BD0@ha
    addi r3, r25, lbl_803A2BD0@l
    li r4, 0x88
    bl fn_801693A4
    cmplwi r3, 0x58
    bne lbl_800A9B2C
    lwz r3, lbl_803A2BD0@l(r25)
    subis r0, r3, 0x444d
    cmplwi r0, 0x5636
    bne lbl_800A9B2C
    lis r3, lbl_803A2560@ha
    addi r24, r3, lbl_803A2560@l
    addi r3, r24, 0x58
    addi r4, r25, lbl_803A2BD0@l
    li r5, 0x58
    bl memcpy
    li r3, 0x1
    stw r3, lbl_8049D5E0
    lwz r0, 0x60(r24)
    cmpwi r0, 0x0
    bne lbl_800A9B2C
    stw r3, 0x8(r24)
    mr r3, r24
    li r4, 0x58
    bl fn_80169278
    b lbl_800A9B2C
lbl_800A9AC0:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    bl fn_8016915C
    cmpwi r3, 0x1
    beq lbl_800A9AE4
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0xa
    blt lbl_800A9B2C
lbl_800A9AE4:
    bl fn_80169138
    li r0, 0x5b
    stw r0, lbl_8049D604
    li r0, 0x0
    stw r0, lbl_8049D5D8
    b lbl_800A9B2C
lbl_800A9AFC:
    lwz r3, lbl_8049D5D8
    addi r0, r3, 0x1
    stw r0, lbl_8049D5D8
    li r3, 0x100
    bl fn_80168B8C
    cmpwi r3, 0x0
    beq lbl_800A9B24
    lwz r0, lbl_8049D5D8
    cmpwi r0, 0xa
    blt lbl_800A9B2C
lbl_800A9B24:
    li r0, 0x13
    stw r0, lbl_8049D5E0
lbl_800A9B2C:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_800A9B44
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A9B44() {
    nofralloc
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lwz r0, 0x18(r4)
    lwz r5, 0x1c(r4)
    stw r5, 0x1c(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x20(r4)
    lwz r5, 0x24(r4)
    stw r5, 0x24(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x28(r4)
    lwz r5, 0x2c(r4)
    stw r5, 0x2c(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x30(r4)
    lwz r4, 0x34(r4)
    stw r4, 0x34(r3)
    stw r0, 0x30(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800A9BB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A9BB0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    bl fn_80169518
    cmpwi r3, 0x0
    bne lbl_800A9BF4
    li r30, 0x0
lbl_800A9BDC:
    li r3, 0x1
    li r4, 0x100
    bl fn_801725D4
    addi r30, r30, 0x1
    cmpwi r30, 0x80
    blt lbl_800A9BDC
lbl_800A9BF4:
    li r30, 0x0
    mr r31, r27
    b lbl_800A9C1C
lbl_800A9C00:
    li r3, 0x1
    li r4, 0x11
    bl fn_801725D4
    extsb r0, r3
    stb r0, 0x0(r31)
    addi r30, r30, 0x1
    addi r31, r31, 0x1
lbl_800A9C1C:
    cmpw r30, r28
    blt lbl_800A9C00
    li r31, 0x0
    b lbl_800A9C70
lbl_800A9C2C:
    lbz r29, 0x0(r27)
    extsb r29, r29
    li r30, 0x0
    b lbl_800A9C4C
lbl_800A9C3C:
    li r3, 0x0
    li r4, 0x100
    bl fn_801725D4
    addi r30, r30, 0x1
lbl_800A9C4C:
    cmpw r30, r29
    blt lbl_800A9C3C
    li r3, 0x0
    li r4, 0x100
    bl fn_801725D4
    extsb r0, r3
    stb r0, 0x0(r27)
    addi r31, r31, 0x1
    addi r27, r27, 0x1
lbl_800A9C70:
    cmpw r31, r28
    blt lbl_800A9C2C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800A9C90
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A9C90() {
    nofralloc
    mtctr r6
    cmpwi r6, 0x0
    blelr
lbl_800A9C9C:
    lbz r7, 0x0(r5)
    lbz r8, 0x0(r4)
    extsb r6, r8
    extsb r0, r7
    cmpw r6, r0
    beq lbl_800A9CC8
    xor r0, r8, r7
    xori r0, r0, 0x55
    extsb r0, r0
    stb r0, 0x0(r3)
    b lbl_800A9CD4
lbl_800A9CC8:
    xori r0, r8, 0xaa
    extsb r0, r0
    stb r0, 0x0(r3)
lbl_800A9CD4:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_800A9C9C
    blr
}

// ----------------------------------------------------------------------------
// fn_800A9CE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A9CE8() {
    nofralloc
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_800A9D20
lbl_800A9CF4:
    lbz r0, 0x0(r3)
    extsb r5, r0
    lbz r0, 0x0(r4)
    extsb r0, r0
    cmpw r5, r0
    beq lbl_800A9D14
    li r3, 0x0
    blr
lbl_800A9D14:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_800A9CF4
lbl_800A9D20:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_800A9D28
// ----------------------------------------------------------------------------
extern "C" asm void fn_800A9D28() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lis r4, 0x444d
    addi r0, r4, 0x5636
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    addi r3, r3, 0x2c
    lis r4, lbl_8034D100@ha
    addi r4, r4, lbl_8034D100@l
    li r5, 0x10
    bl memcpy
    bl fn_8016CC1C
    mr r6, r4
    mr r5, r3
    addi r3, r31, 0x3c
    lis r4, lbl_8034D4D0@ha
    addi r4, r4, lbl_8034D4D0@l
    addi r4, r4, 0xfc
    opword 0x4CC63182
    bl sprintf
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmplwi r0, 0x7
    bgt lbl_800AA1AC
    lis r3, jumptable_8034D388@ha
    addi r3, r3, jumptable_8034D388@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl fn_800914D8
    lwz r3, 0x8c(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x94(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0x9c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0xa4(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
    bl fn_800914D8
    lwz r3, 0x120(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x4c(r31)
    b lbl_800AA1AC
    bl fn_800914D8
    lwz r3, 0x90(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x98(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0xa0(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0xa8(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
    bl fn_800914D8
    lwz r3, 0x124(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x4c(r31)
    b lbl_800AA1AC
    bl fn_800914D8
    lwz r3, 0x130(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x138(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0x140(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0x148(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
    b lbl_800AA1AC
    bl fn_800914D8
    lwz r3, 0x134(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x13c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0x144(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0x14c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
    b lbl_800AA1AC
    bl fn_800914D8
    lwz r3, 0x150(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x158(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0x160(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0x168(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
    b lbl_800AA1AC
    bl fn_800914D8
    lwz r3, 0x154(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x15c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0x164(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0x16c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
    b lbl_800AA1AC
    bl fn_800914D8
    lwz r3, 0x170(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x178(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0x180(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0x188(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
    b lbl_800AA1AC
    bl fn_800914D8
    lwz r3, 0x174(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    bl fn_800914D8
    lwz r3, 0x17c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    bl fn_800914D8
    lwz r3, 0x184(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x18(r31)
    bl fn_800914D8
    lwz r3, 0x18c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1c(r31)
lbl_800AA1AC:
    bl fn_800914D8
    lwz r3, 0x128(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x50(r31)
    bl fn_800914D8
    lwz r3, 0x12c(r3)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x54(r31)
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x4
    bne lbl_800AA218
    bl fn_800914D8
    lwz r3, 0xb0(r3)
    li r4, 0x0
    li r5, 0x0
    lis r6, 0xf
    addi r6, r6, 0x423f
    bl fn_801728DC
    b lbl_800AA234
lbl_800AA218:
    bl fn_800914D8
    lwz r3, 0xac(r3)
    li r4, 0x0
    li r5, 0x0
    lis r6, 0xf
    addi r6, r6, 0x423f
    bl fn_801728DC
lbl_800AA234:
    stw r3, 0x20(r31)
    stw r3, 0x24(r31)
    li r0, 0x0
    stw r0, 0x28(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA25C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA25C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x3
    bl fn_800AA954
    addi r3, r1, 0x14
    li r4, 0x0
    li r5, 0x2
    bl fn_800AA954
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x1
    bl fn_800AA954
    addi r3, r1, 0x2c
    li r4, 0x0
    li r5, 0x0
    bl fn_800AA954
    addi r3, r1, 0x2c
    bl fn_8016D9F4
    cmpwi r3, 0x0
    beq lbl_800AA2F8
    addi r3, r1, 0x20
    bl fn_8016D9F4
    cmpwi r3, 0x0
    beq lbl_800AA2F8
    addi r3, r1, 0x14
    bl fn_8016D9F4
    cmpwi r3, 0x0
    beq lbl_800AA2F8
    addi r3, r1, 0x8
    bl fn_8016D9F4
    cmpwi r3, 0x0
    beq lbl_800AA2F8
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800AA300
lbl_800AA2F8:
    bl fn_800AA400
    li r3, 0x1
lbl_800AA300:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA310
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA310() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    li r5, 0x4
    bl fn_800AA954
    addi r3, r1, 0x14
    li r4, 0x0
    li r5, 0x4
    bl fn_800AA954
    addi r3, r1, 0x14
    bl fn_8016D9F4
    cmpwi r3, 0x0
    beq lbl_800AA36C
    addi r3, r1, 0x8
    bl fn_8016D9F4
    cmpwi r3, 0x0
    beq lbl_800AA36C
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800AA374
lbl_800AA36C:
    bl fn_800AA384
    li r3, 0x1
lbl_800AA374:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA384
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA384() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r3, 0x2
    bl fn_8016DF00
    cmpwi r3, 0x0
    beq lbl_800AA3AC
    li r0, 0x1d
    stw r0, lbl_8049D5E0
    b lbl_800AA3F0
lbl_800AA3AC:
    addi r3, r1, 0x14
    li r4, 0x0
    li r5, 0x4
    bl fn_800AA954
    addi r3, r1, 0x8
    li r4, 0x1
    li r5, 0x4
    bl fn_800AA954
    bl fn_8016D710
    addi r3, r1, 0x14
    bl fn_8016D8B4
    addi r3, r1, 0x8
    bl fn_8016D8B4
    li r3, 0x0
    bl fn_8016D7A8
    li r0, 0x1f
    stw r0, lbl_8049D5E0
lbl_800AA3F0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA400
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA400() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r3, 0x2
    bl fn_8016DF00
    cmpwi r3, 0x0
    beq lbl_800AA428
    li r0, 0x1c
    stw r0, lbl_8049D5E0
    b lbl_800AA49C
lbl_800AA428:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x3
    bl fn_800AA954
    addi r3, r1, 0x14
    li r4, 0x0
    li r5, 0x2
    bl fn_800AA954
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x1
    bl fn_800AA954
    addi r3, r1, 0x2c
    li r4, 0x0
    li r5, 0x0
    bl fn_800AA954
    bl fn_8016D710
    addi r3, r1, 0x2c
    bl fn_8016D8B4
    addi r3, r1, 0x20
    bl fn_8016D8B4
    addi r3, r1, 0x14
    bl fn_8016D8B4
    addi r3, r1, 0x8
    bl fn_8016D8B4
    li r3, 0x0
    bl fn_8016D7A8
    li r0, 0x1f
    stw r0, lbl_8049D5E0
lbl_800AA49C:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA4AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA4AC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r23, r3
    mr r24, r4
    mr r31, r5
    addi r3, r1, 0xc
    li r4, 0x0
    mr r5, r23
    bl fn_800AA954
    li r0, 0x0
    stw r0, 0x0(r31)
    cmpwi r23, 0x1
    beq lbl_800AA4F4
    cmpwi r23, 0x3
    bne lbl_800AA4F8
lbl_800AA4F4:
    li r0, 0x1
lbl_800AA4F8:
    cmpwi r0, 0x0
    beq lbl_800AA50C
    addi r3, r1, 0xc
    bl fn_8016DCF0
    b lbl_800AA510
lbl_800AA50C:
    li r3, 0x1
lbl_800AA510:
    mr r28, r3
    addi r3, r1, 0xc
    li r4, 0x0
    bl fn_8016DC30
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_800AA534
    li r3, 0x0
    b lbl_800AA708
lbl_800AA534:
    li r27, 0x0
    lwz r3, 0x10(r3)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0xf
    addi r6, r30, 0x423f
    bl fn_801728DC
    mr r26, r3
    li r25, 0x1
    b lbl_800AA5B4
lbl_800AA55C:
    addi r3, r1, 0xc
    mr r4, r25
    bl fn_8016DC30
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_800AA57C
    li r3, 0x0
    b lbl_800AA708
lbl_800AA57C:
    lwz r3, 0x10(r3)
    li r4, 0x0
    li r5, 0x0
    addi r6, r30, 0x423f
    bl fn_801728DC
    cmpw r3, r26
    bge lbl_800AA5AC
    add r4, r28, r27
    addi r28, r4, 0x1
    li r27, 0x0
    mr r26, r3
    b lbl_800AA5B0
lbl_800AA5AC:
    addi r27, r27, 0x1
lbl_800AA5B0:
    addi r25, r25, 0x1
lbl_800AA5B4:
    cmpw r25, r24
    ble lbl_800AA55C
    stw r28, 0x4(r31)
    cmplwi r23, 0x1
    ble lbl_800AA5D8
    subi r0, r23, 0x2
    cmplwi r0, 0x1
    ble lbl_800AA5E4
    b lbl_800AA5EC
lbl_800AA5D8:
    bl fn_800914D8
    stw r28, 0x120(r3)
    b lbl_800AA5EC
lbl_800AA5E4:
    bl fn_800914D8
    stw r28, 0x124(r3)
lbl_800AA5EC:
    lwz r3, 0x0(r29)
    li r4, 0x0
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x8(r31)
    lwz r3, 0x4(r29)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0xc(r31)
    lwz r3, 0x8(r29)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x10(r31)
    lwz r3, 0xc(r29)
    li r4, 0x0
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x14(r31)
    lwz r3, 0x10(r29)
    li r4, 0x0
    li r5, 0x0
    lis r6, 0xf
    addi r6, r6, 0x423f
    bl fn_801728DC
    stw r3, 0x18(r31)
    lwz r3, 0x14(r29)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x33
    bl fn_801728DC
    stw r3, 0x1c(r31)
    lwz r3, 0x18(r29)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x33
    bl fn_801728DC
    stw r3, 0x20(r31)
    addi r3, r1, 0xc
    bl fn_8016DE44
    cmpw r24, r3
    bne lbl_800AA6B8
    lwz r0, 0x0(r31)
    ori r0, r0, 0x2
    stw r0, 0x0(r31)
lbl_800AA6B8:
    li r0, 0xf
    stw r0, 0x8(r1)
    addi r3, r31, 0x24
    addi r4, r1, 0x8
    addi r5, r29, 0x1c
    li r6, 0x0
    bl fn_8016F948
    addi r3, r31, 0x24
    bl fn_800ADCCC
    cmpwi r3, 0x0
    bne lbl_800AA6F8
    addi r3, r31, 0x24
    lis r4, lbl_8034D4D0@ha
    addi r4, r4, lbl_8034D4D0@l
    addi r4, r4, 0x104
    bl strcpy
lbl_800AA6F8:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x1
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_800AA708:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA720
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA720() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0x4
    bl fn_800AA954
    addi r3, r1, 0x8
    bl fn_8016DCF0
    mr r31, r3
    bl fn_800914D8
    slwi r0, r30, 2
    add r3, r3, r0
    stw r31, 0x120(r3)
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA780
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA780() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_800AA7B8
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x4
    beq lbl_800AA7B8
    li r0, 0x1
    stw r0, lbl_8049D5E0
    b lbl_800AA7BC
lbl_800AA7B8:
    bl fn_800AA7CC
lbl_800AA7BC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA7CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA7CC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r3, 0x1
    bl fn_8016DF00
    cmpwi r3, 0x0
    beq lbl_800AA7FC
    li r0, 0x1e
    stw r0, lbl_8049D5E0
    b lbl_800AA8E0
lbl_800AA7FC:
    bl fn_800AE4CC
    mr r30, r3
    addi r3, r1, 0x8
    mr r4, r30
    li r5, -0x1
    bl fn_800AA954
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800AA828
    bl fn_800AD1A0
    bl fn_800AD254
lbl_800AA828:
    slwi r30, r30, 2
    bl fn_800914D8
    add r3, r3, r30
    lwz r0, 0x8c(r3)
    lis r31, lbl_803A2C58@ha
    stw r0, lbl_803A2C58@l(r31)
    bl fn_800914D8
    add r3, r3, r30
    lwz r0, 0x94(r3)
    addi r31, r31, lbl_803A2C58@l
    stw r0, 0x4(r31)
    bl fn_800914D8
    add r3, r3, r30
    lwz r0, 0x9c(r3)
    stw r0, 0x8(r31)
    bl fn_800914D8
    add r3, r3, r30
    lwz r0, 0xa4(r3)
    stw r0, 0xc(r31)
    bl fn_800914D8
    add r3, r3, r30
    lwz r0, 0xac(r3)
    stw r0, 0x10(r31)
    bl fn_800914D8
    lwz r0, 0x128(r3)
    stw r0, 0x14(r31)
    bl fn_800914D8
    lwz r0, 0x12c(r3)
    stw r0, 0x18(r31)
    bl fn_800914D8
    mr r4, r3
    addi r3, r31, 0x1c
    addi r4, r4, 0x2c
    li r5, 0x20
    bl memcpy
    bl fn_8016D710
    bl fn_800914D8
    add r4, r3, r30
    addi r3, r1, 0x8
    lwz r4, 0xac(r4)
    mr r5, r31
    bl fn_8016D81C
    li r3, 0x0
    bl fn_8016D7A8
    li r0, 0x1f
    stw r0, lbl_8049D5E0
lbl_800AA8E0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA8F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA8F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016DB34
    cmpwi r3, 0x0
    bne lbl_800AA918
    li r3, 0x0
    b lbl_800AA944
lbl_800AA918:
    bl fn_8016DB98
    lis r4, 0x1
    subi r0, r4, 0x15a0
    cmpw r3, r0
    ble lbl_800AA940
    li r3, 0x2719
    li r4, 0x6
    bl fn_80168C30
    li r3, -0x1
    b lbl_800AA944
lbl_800AA940:
    li r3, 0x1
lbl_800AA944:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA954
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA954() {
    nofralloc
    stw r4, 0x0(r3)
    li r0, 0x4
    stw r0, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_800AA98C
    cmpwi r5, 0x1
    beq lbl_800AA9A0
    cmpwi r5, 0x2
    beq lbl_800AA9B0
    cmpwi r5, 0x3
    beq lbl_800AA9C0
    cmpwi r5, 0x4
    beq lbl_800AA9D0
    blr
lbl_800AA98C:
    li r0, 0x1
    stw r0, 0x8(r3)
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
lbl_800AA9A0:
    stw r0, 0x8(r3)
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
lbl_800AA9B0:
    li r0, 0x1
    stw r0, 0x8(r3)
    stw r0, 0x0(r3)
    blr
lbl_800AA9C0:
    stw r0, 0x8(r3)
    li r0, 0x1
    stw r0, 0x0(r3)
    blr
lbl_800AA9D0:
    li r0, 0x0
    stw r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800AA9DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AA9DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_800914D8
    li r4, 0x0
    li r5, 0x1de0
    bl memset
    li r31, 0x1
    bl fn_800914D8
    stw r31, 0x10(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1b
    stw r0, 0xc(r3)
    li r31, 0x109
    bl fn_800914D8
    stw r31, 0x8(r3)
    li r31, 0xa
    bl fn_800914D8
    stw r31, 0x190(r3)
    bl fn_800AD1A0
    bl fn_800AD254
    bl fn_800AB0CC
    li r31, 0x40
    bl fn_800914D8
    stw r31, 0x1d8(r3)
    li r3, 0x1
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AAA60
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AAA60() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r3, 0x2
    bl fn_80168B8C
    cmpwi r3, 0x0
    bne lbl_800AAAEC
    bl fn_800AAB04
    la r3, lbl_8049D600
    li r4, 0x0
    li r5, 0x4
    bl memset
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x20
    stw r0, 0xc(r3)
    li r30, 0x0
    li r31, 0x0
lbl_800AAAB0:
    bl fn_800914D8
    add r3, r3, r31
    lwz r0, 0x6dc(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x6dc(r3)
    addi r30, r30, 0x1
    addi r31, r31, 0x5c
    cmpwi r30, 0x40
    blt lbl_800AAAB0
    bl fn_800914D8
    addi r3, r3, 0x28
    bl fn_80168EE0
    bl fn_800914D8
    addi r3, r3, 0x1d4
    bl fn_8016CC2C
lbl_800AAAEC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AAB04
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AAB04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800AE094
    cmpwi r3, 0x0
    bne lbl_800AAB20
    bl fn_800AA9DC
lbl_800AAB20:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AAB30
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AAB30() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r4, r3
    lis r31, lbl_8034D100@ha
    addi r3, r31, lbl_8034D100@l
    li r5, 0x10
    bl memcpy
    li r0, 0x10
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    addi r5, r31, lbl_8034D100@l
    li r6, 0x0
    bl fn_8016F85C
    bl fn_800914D8
    addi r3, r3, 0x2c
    addi r4, r1, 0x10
    li r5, 0x20
    bl memcpy
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x3
    stw r0, 0xc(r3)
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_800AABA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AABA8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800AAB04
    mr r3, r31
    lis r4, lbl_8034D100@ha
    addi r4, r4, lbl_8034D100@l
    li r5, 0x10
    bl memcpy
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AABE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AABE8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    addi r3, r3, 0x110
    lis r4, lbl_8034D100@ha
    addi r4, r4, lbl_8034D100@l
    li r5, 0x10
    bl memcpy
    li r30, 0x0
    li r28, 0x0
lbl_800AAC1C:
    add r31, r29, r28
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x8c(r3)
    stw r0, 0x8(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x94(r3)
    stw r0, 0x10(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x9c(r3)
    stw r0, 0x18(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0xa4(r3)
    stw r0, 0x20(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0xac(r3)
    stw r0, 0x28(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x198(r3)
    stw r0, 0x30(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x130(r3)
    stw r0, 0x38(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x138(r3)
    stw r0, 0x40(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x140(r3)
    stw r0, 0x48(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x148(r3)
    stw r0, 0x50(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x150(r3)
    stw r0, 0x58(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x158(r3)
    stw r0, 0x60(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x160(r3)
    stw r0, 0x68(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x168(r3)
    stw r0, 0x70(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x170(r3)
    stw r0, 0x78(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x178(r3)
    stw r0, 0x80(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x180(r3)
    stw r0, 0x88(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x188(r3)
    stw r0, 0x90(r31)
    bl fn_800914D8
    add r3, r3, r28
    lwz r0, 0x120(r3)
    stw r0, 0x0(r31)
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x2
    blt lbl_800AAC1C
    bl fn_800914D8
    lwz r28, 0x90(r3)
    bl fn_800914D8
    lwz r0, 0x8c(r3)
    add r0, r0, r28
    stw r0, 0xc8(r29)
    bl fn_800914D8
    lwz r28, 0x98(r3)
    bl fn_800914D8
    lwz r0, 0x94(r3)
    add r0, r0, r28
    stw r0, 0xcc(r29)
    bl fn_800914D8
    lwz r28, 0xa0(r3)
    bl fn_800914D8
    lwz r0, 0x9c(r3)
    add r0, r0, r28
    stw r0, 0xd0(r29)
    bl fn_800914D8
    lwz r28, 0xa8(r3)
    bl fn_800914D8
    lwz r0, 0xa4(r3)
    add r0, r0, r28
    stw r0, 0xd4(r29)
    bl fn_800914D8
    lwz r28, 0x174(r3)
    bl fn_800914D8
    lwz r0, 0x170(r3)
    add r0, r0, r28
    stw r0, 0xd8(r29)
    bl fn_800914D8
    lwz r28, 0x17c(r3)
    bl fn_800914D8
    lwz r0, 0x178(r3)
    add r0, r0, r28
    stw r0, 0xdc(r29)
    bl fn_800914D8
    lwz r28, 0x184(r3)
    bl fn_800914D8
    lwz r0, 0x180(r3)
    add r0, r0, r28
    stw r0, 0xe0(r29)
    bl fn_800914D8
    lwz r28, 0x18c(r3)
    bl fn_800914D8
    lwz r0, 0x188(r3)
    add r0, r0, r28
    stw r0, 0xe4(r29)
    bl fn_800914D8
    lwz r28, 0x134(r3)
    bl fn_800914D8
    lwz r0, 0x130(r3)
    add r0, r0, r28
    stw r0, 0xe8(r29)
    bl fn_800914D8
    lwz r28, 0x13c(r3)
    bl fn_800914D8
    lwz r0, 0x138(r3)
    add r0, r0, r28
    stw r0, 0xec(r29)
    bl fn_800914D8
    lwz r28, 0x144(r3)
    bl fn_800914D8
    lwz r0, 0x140(r3)
    add r0, r0, r28
    stw r0, 0xf0(r29)
    bl fn_800914D8
    lwz r28, 0x14c(r3)
    bl fn_800914D8
    lwz r0, 0x148(r3)
    add r0, r0, r28
    stw r0, 0xf4(r29)
    bl fn_800914D8
    lwz r28, 0x154(r3)
    bl fn_800914D8
    lwz r0, 0x150(r3)
    add r0, r0, r28
    stw r0, 0xf8(r29)
    bl fn_800914D8
    lwz r28, 0x15c(r3)
    bl fn_800914D8
    lwz r0, 0x158(r3)
    add r0, r0, r28
    stw r0, 0xfc(r29)
    bl fn_800914D8
    lwz r28, 0x164(r3)
    bl fn_800914D8
    lwz r0, 0x160(r3)
    add r0, r0, r28
    stw r0, 0x100(r29)
    bl fn_800914D8
    lwz r28, 0x16c(r3)
    bl fn_800914D8
    lwz r0, 0x168(r3)
    add r0, r0, r28
    stw r0, 0x104(r29)
    bl fn_800914D8
    lwz r31, 0x170(r3)
    bl fn_800914D8
    lwz r28, 0x8c(r3)
    bl fn_800914D8
    lwz r30, 0x130(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x150(r3)
    add r0, r30, r28
    add r0, r3, r0
    stw r0, 0xa8(r29)
    bl fn_800914D8
    lwz r31, 0x178(r3)
    bl fn_800914D8
    lwz r28, 0x94(r3)
    bl fn_800914D8
    lwz r30, 0x138(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x158(r3)
    add r0, r30, r28
    add r0, r3, r0
    stw r0, 0xac(r29)
    bl fn_800914D8
    lwz r31, 0x180(r3)
    bl fn_800914D8
    lwz r28, 0x9c(r3)
    bl fn_800914D8
    lwz r30, 0x140(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x160(r3)
    add r0, r30, r28
    add r0, r3, r0
    stw r0, 0xb0(r29)
    bl fn_800914D8
    lwz r31, 0x188(r3)
    bl fn_800914D8
    lwz r28, 0xa4(r3)
    bl fn_800914D8
    lwz r30, 0x148(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x168(r3)
    add r0, r30, r28
    add r0, r3, r0
    stw r0, 0xb4(r29)
    bl fn_800914D8
    lwz r31, 0x174(r3)
    bl fn_800914D8
    lwz r28, 0x90(r3)
    bl fn_800914D8
    lwz r30, 0x134(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x154(r3)
    add r0, r30, r28
    add r0, r3, r0
    stw r0, 0xb8(r29)
    bl fn_800914D8
    lwz r31, 0x17c(r3)
    bl fn_800914D8
    lwz r28, 0x98(r3)
    bl fn_800914D8
    lwz r30, 0x13c(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x15c(r3)
    add r0, r30, r28
    add r0, r3, r0
    stw r0, 0xbc(r29)
    bl fn_800914D8
    lwz r31, 0x184(r3)
    bl fn_800914D8
    lwz r28, 0xa0(r3)
    bl fn_800914D8
    lwz r30, 0x144(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x164(r3)
    add r0, r30, r28
    add r0, r3, r0
    stw r0, 0xc0(r29)
    bl fn_800914D8
    lwz r31, 0x18c(r3)
    bl fn_800914D8
    lwz r28, 0xa8(r3)
    bl fn_800914D8
    lwz r30, 0x14c(r3)
    add r28, r28, r31
    bl fn_800914D8
    lwz r3, 0x16c(r3)
    add r0, r30, r28
    add r4, r3, r0
    stw r4, 0xc4(r29)
    lwz r3, 0xa8(r29)
    lwz r0, 0xb8(r29)
    add r0, r3, r0
    stw r0, 0x98(r29)
    lwz r3, 0xac(r29)
    lwz r0, 0xbc(r29)
    add r0, r3, r0
    stw r0, 0x9c(r29)
    lwz r3, 0xb0(r29)
    lwz r0, 0xc0(r29)
    add r0, r3, r0
    stw r0, 0xa0(r29)
    lwz r0, 0xb4(r29)
    add r0, r0, r4
    stw r0, 0xa4(r29)
    bl fn_800914D8
    lwz r0, 0x128(r3)
    stw r0, 0x108(r29)
    bl fn_800914D8
    lwz r0, 0x12c(r3)
    stw r0, 0x10c(r29)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800AB0CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AB0CC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    bl fn_800961EC
    mr r4, r3
    lis r31, lbl_8034D100@ha
    addi r3, r31, lbl_8034D100@l
    li r5, 0x10
    bl memcpy
    li r0, 0x10
    stw r0, 0x8(r1)
    bl fn_800914D8
    addi r3, r3, 0x2c
    addi r4, r1, 0x8
    addi r5, r31, lbl_8034D100@l
    li r6, 0x0
    bl fn_8016F85C
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800AB128
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AB128() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800ACDAC
    li r0, 0xb
    stw r0, lbl_8049D5E0
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AB154
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AB154() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800914D8
    lwz r3, 0x194(r3)
    bl fn_800AB83C
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x2
    beq lbl_800AB1B8
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x6
    beq lbl_800AB1B8
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x3
    beq lbl_800AB1B8
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x7
    beq lbl_800AB1B8
    li r3, -0x2
    bl fn_800AC080
    b lbl_800AB1CC
lbl_800AB1B8:
    lwz r0, lbl_8049F63C
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x4
    bl fn_800ACD48
lbl_800AB1CC:
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800AB1E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800AB1E0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800ACDAC
    li r0, 0xd
    stw r0, lbl_8049D5E0
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

