#include "types.h"

// Translation unit: src/revolution/kpad/unk_802864A0.cpp
// Total functions: 90

// Small Data symbols (@sda21)
extern float lbl_8049CEBC;
extern float lbl_8049CEBD;
extern float lbl_8049CEBE;
extern float lbl_8049CEBF;
extern float lbl_8049CEC0;
extern float lbl_8049CEC1;
extern float lbl_8049CEC2;
extern float lbl_8049CEC3;
extern float lbl_8049CEC4;
extern float lbl_8049CEC5;
extern float lbl_8049CEC6;
extern float lbl_8049CEC8;
extern float lbl_8049CED8;
extern float lbl_8049CEDC;
extern float lbl_8049CEE0;
extern float lbl_8049CEE8;
extern float lbl_8049CEF0;
extern float lbl_8049CEF4;
extern float lbl_8049CEFC;
extern float lbl_8049DD70;
extern float lbl_8049DD74;
extern float lbl_8049DD78;
extern float lbl_8049DD84;
extern float lbl_8049DD88;
extern float lbl_8049DD8C;
extern float lbl_8049DD90;
extern float lbl_8049DD98;
extern float lbl_8049DDA0;
extern float lbl_8049DDA4;
extern float lbl_8049DDA5;
extern float lbl_8049DDA8;
extern float lbl_8049DDAA;
extern float lbl_8049DDAC;
extern float lbl_8049DDAE;
extern float lbl_8049DDB0;
extern float lbl_8049DDB4;
extern float lbl_8049DDB8;
extern float lbl_8049DDBC;
extern float lbl_8049DDC0;
extern float lbl_8049DDC4;
extern float lbl_8049DDC8;
extern float lbl_8049DDCC;
extern float lbl_8049DDD0;
extern float lbl_8049DDD4;
extern float lbl_8049DDD8;
extern float lbl_8049DDDC;
extern float lbl_8049DDE0;
extern float lbl_8049DDE4;
extern float lbl_8049DDE8;
extern float lbl_8049DDEC;
extern float lbl_8049DDED;
extern float lbl_8049DDEE;
extern float lbl_8049DDEF;
extern float lbl_8049DDF0;
extern float lbl_8049DDF4;
extern float lbl_8049DDF5;
extern float lbl_8049DDF6;
extern float lbl_8049DDF8;
extern float lbl_8049DDFC;
extern float lbl_8049E32C;
extern float lbl_804A2340;
extern float lbl_804A2342;
extern float lbl_804A2344;
extern float lbl_804A2348;
extern float lbl_804A234A;
extern float lbl_804A234C;
extern float lbl_804A2350;
extern float lbl_804A2358;
extern float lbl_804A2360;
extern float lbl_804A2368;
extern float lbl_804A2370;
extern float lbl_804A2378;
extern float lbl_804A2380;
extern float lbl_804A2388;
extern float lbl_804A2390;
extern float lbl_804A2398;
extern float lbl_804A23A0;
extern float lbl_804A23A8;
extern float lbl_804A23A9;
extern float lbl_804A23AA;
extern float lbl_804A23AB;
extern float lbl_804A23AC;
extern float lbl_804A23AD;
extern float lbl_804A23AE;

// Global data symbols (@ha/@l)
extern u8 jumptable_8036C2C4[];
extern u8 jumptable_8036C2F8[];
extern u8 jumptable_8036C560[];
extern u8 lbl_803414C8[];
extern u8 lbl_80341508[];
extern u8 lbl_80341538[];
extern u8 lbl_8036BB88[];
extern u8 lbl_8036C1E0[];
extern u8 lbl_8036C26C[];
extern u8 lbl_8036C298[];
extern u8 lbl_8036C2A8[];
extern u8 lbl_8036C380[];
extern u8 lbl_8036C38C[];
extern u8 lbl_8036C3C4[];
extern u8 lbl_8036C3D4[];
extern u8 lbl_8036C470[];
extern u8 lbl_8036C488[];
extern u8 lbl_8036C4BC[];
extern u8 lbl_8036C510[];
extern u8 lbl_8040BED0[];
extern u8 lbl_8040BEF0[];
extern u8 lbl_8040C2F0[];
extern u8 lbl_8040C308[];
extern u8 lbl_8040C320[];
extern u8 lbl_8040C400[];
extern u8 lbl_8040C420[];
extern u8 lbl_8040C450[];
extern u8 lbl_8040C460[];
extern u8 lbl_8040D460[];

// Forward declarations
extern void BTA_DmSendHciReset();
extern void BTA_HhClose();
extern void BTA_HhGetAclQueueInfo();
extern void BTA_HhSendData();
extern void DCInvalidateRange();
extern void GKI_add_to_timer_list();
extern void GKI_getbuf();
extern void GKI_init_timer_list();
extern void GKI_update_timer_list();
extern void OSCancelAlarm();
extern void OSCreateAlarm();
extern void OSDisableInterrupts();
extern void OSGetTime();
extern void OSInitThreadQueue();
extern void OSRegisterShutdownFunction();
extern void OSRegisterVersion();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSSetPeriodicAlarm();
extern void OSSwitchFiberEx();
extern void SCCheckStatus();
extern void SCFlushAsync();
extern void SCGetBtDpdSensibility();
extern void SCGetWpadMotorMode();
extern void SCGetWpadSensorBarPosition();
extern void SCGetWpadSpeakerVolume();
extern void SCSetWpadMotorMode();
extern void SCSetWpadSpeakerVolume();
extern void VIGetDTVStatus();
extern void WPADiHIDParser();
extern void WaitMicroTime();
extern void __OSGetSystemTime();
extern void __VIResetRFIdle();
extern void __VISendI2CData();
extern void __VISetGammaImm();
extern void __VISetYUVSEL();
extern void __div2i();
extern void _restgpr_14();
extern void _restgpr_17();
extern void _restgpr_18();
extern void _restgpr_22();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_17();
extern void _savegpr_18();
extern void _savegpr_22();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btm_remove_acl();
extern void fn_802864A0();
extern void fn_802868D4();
extern void fn_802869A4();
extern void fn_80286B28();
extern void fn_80286D04();
extern void fn_80286D40();
extern void fn_80286D8C();
extern void fn_80286E18();
extern void fn_80286EC0();
extern void fn_80286FC0();
extern void fn_802870B0();
extern void fn_80287118();
extern void fn_80287120();
extern void fn_8028717C();
extern void fn_802872A4();
extern void fn_80287314();
extern void fn_802873F8();
extern void fn_802876D0();
extern void fn_802876D8();
extern void fn_802876E0();
extern void fn_802876E8();
extern void fn_802876F0();
extern void fn_802876F8();
extern void fn_80287700();
extern void fn_802878C4();
extern void fn_80287A9C();
extern void fn_80287BAC();
extern void fn_80287C08();
extern void fn_80288510();
extern void fn_802885CC();
extern void fn_80288760();
extern void fn_8028913C();
extern void fn_8028915C();
extern void fn_802893D0();
extern void fn_80289630();
extern void fn_802896A0();
extern void fn_802896A4();
extern void fn_802896A8();
extern void fn_802896AC();
extern void fn_802896B0();
extern void fn_802896B4();
extern void fn_802896B8();
extern void fn_802896FC();
extern void fn_80289730();
extern void fn_802897FC();
extern void fn_802898E4();
extern void fn_8028A1D8();
extern void fn_8028A2F8();
extern void fn_8028A7AC();
extern void fn_8028A7FC();
extern void fn_8028A8D4();
extern void fn_8028A8F8();
extern void fn_8028A9B8();
extern void fn_8028AA44();
extern void fn_8028AACC();
extern void fn_8028AB54();
extern void fn_8028ABB0();
extern void fn_8028ABF4();
extern void fn_8028ACAC();
extern void fn_8028AD00();
extern void fn_8028AF20();
extern void fn_8028AFEC();
extern void fn_8028B020();
extern void fn_8028B054();
extern void fn_8028B23C();
extern void fn_8028B2E8();
extern void fn_8028B380();
extern void fn_8028B4DC();
extern void fn_8028B5FC();
extern void fn_8028B6F8();
extern void fn_8028B73C();
extern void fn_8028CD58();
extern void fn_8028CD8C();
extern void fn_8028CDDC();
extern void fn_8028CF14();
extern void fn_8028CF98();
extern void fn_8028D1A8();
extern void fn_8028D1DC();
extern void fn_8028D220();
extern void fn_8028D278();
extern void fn_8028D2B0();
extern void fn_8028E330();
extern void fn_8028E544();
extern void fn_8028E5DC();
extern void fn_8028E678();
extern void fn_8028E8E0();
extern void fn_8028EA94();
extern void fn_8028EC4C();
extern void fn_8028EDF8();
extern void fn_8028EE58();
extern void fn_8029419C();
extern void fn_802941C8();
extern void fn_80294294();
extern void fn_80294360();
extern void fn_802943B0();
extern void fn_802975B8();
extern void fn_802976D4();
extern void fn_80297720();
extern void fn_80297724();
extern void fn_80297944();
extern void fn_80297980();
extern void fn_80297A34();
extern void fn_80297C80();
extern void fn_80297DF4();
extern void fn_80297E50();
extern void fn_80297EAC();
extern void fn_80299398();
extern void fn_8029A32C();
extern void fn_8029A380();
extern void fn_8029A3DC();
extern void fn_8029A438();
extern void fn_8029A480();
extern void fn_8029A4F4();
extern void fn_8029A548();
extern void fn_80313ECC();
extern void fn_80313F50();
extern void fn_803248C0();
extern void memcmp();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// fn_802864A0
// ----------------------------------------------------------------------------
asm void fn_802864A0() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r3, 0xe0
    li r5, 0x2
    stw r0, 0x64(r1)
    li r0, 0x6a
    addi r4, r1, 0x1c
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    li r28, 0x1
    stb r0, 0x1c(r1)
    stb r28, 0x1d(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    li r0, 0x65
    stb r28, 0x19(r1)
    addi r4, r1, 0x18
    li r3, 0xe0
    stb r0, 0x18(r1)
    li r5, 0x2
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    bl VIGetDTVStatus
    clrlwi r3, r3, 24
    bl __VISetYUVSEL
    li r28, 0x0
    addi r4, r1, 0x14
    stb r28, 0x14(r1)
    li r3, 0xe0
    li r5, 0x2
    stb r28, 0x15(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    li r0, 0x8e
    li r3, 0x71
    stb r3, 0x28(r1)
    addi r4, r1, 0x28
    li r3, 0xe0
    li r5, 0x3
    stb r0, 0x29(r1)
    stb r0, 0x2a(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    li r3, 0x2
    li r0, 0x7
    stb r3, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0x11(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    li r0, 0x5
    stb r28, lbl_8049CEBC
    addi r4, r1, 0x24
    li r3, 0xe0
    stb r28, lbl_8049CEBD
    li r5, 0x3
    stb r28, lbl_8049CEBE
    stb r0, 0x24(r1)
    stb r28, 0x25(r1)
    stb r28, 0x26(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lbz r0, lbl_8049CEBF
    cmpwi r0, 0x0
    bne lbl_802865F0
    lbz r0, lbl_8049CEC0
    cmpwi r0, 0x0
    bne lbl_802865F0
    lbz r0, lbl_8049CEC1
    cmpwi r0, 0x0
    bne lbl_802865F0
    lbz r0, lbl_8049CEC2
    cmpwi r0, 0x0
    beq lbl_80286610
lbl_802865F0:
    lwz r0, lbl_8049DD70
    li r3, 0x0
    stb r3, lbl_8049CEBF
    ori r0, r0, 0x2
    stb r3, lbl_8049CEC0
    stb r3, lbl_8049CEC1
    stb r3, lbl_8049CEC2
    stw r0, lbl_8049DD70
lbl_80286610:
    lbz r3, lbl_8049CEBF
    li r7, 0x8
    lbz r0, lbl_8049CEC1
    addi r4, r1, 0x20
    clrlwi r5, r3, 28
    lbz r6, lbl_8049CEC0
    lbz r3, lbl_8049CEC2
    clrlwi r0, r0, 29
    rlwimi r5, r6, 4, 24, 27
    stb r7, 0x20(r1)
    rlwimi r0, r3, 3, 26, 28
    li r3, 0xe0
    stb r5, 0x21(r1)
    li r5, 0x3
    stb r0, 0x22(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lbz r0, lbl_8049CEC3
    cmpwi r0, 0x0
    bne lbl_80286688
    lbz r0, lbl_8049CEC4
    cmpwi r0, 0x0
    bne lbl_80286688
    lbz r0, lbl_8049CEC5
    cmpwi r0, 0x0
    bne lbl_80286688
    lbz r0, lbl_8049CEC6
    cmpwi r0, 0x0
    beq lbl_802866A8
lbl_80286688:
    lwz r0, lbl_8049DD70
    li r3, 0x0
    stb r3, lbl_8049CEC3
    ori r0, r0, 0x4
    stb r3, lbl_8049CEC4
    stb r3, lbl_8049CEC5
    stb r3, lbl_8049CEC6
    stw r0, lbl_8049DD70
lbl_802866A8:
    lbz r0, lbl_8049CEC3
    li r9, 0x7a
    lbz r5, lbl_8049CEC4
    addi r4, r1, 0x2c
    clrlwi r8, r0, 25
    lbz r3, lbl_8049CEC5
    lbz r0, lbl_8049CEC6
    clrlwi r7, r5, 25
    clrlwi r6, r3, 25
    stb r9, 0x2c(r1)
    clrlwi r0, r0, 25
    li r3, 0xe0
    stb r8, 0x2d(r1)
    li r5, 0x5
    stb r7, 0x2e(r1)
    stb r6, 0x2f(r1)
    stb r0, 0x30(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lis r29, lbl_8040BED0@ha
    lbzu r30, lbl_8040BED0@l(r29)
    li r28, 0x40
    addi r4, r1, 0x34
    lbz r31, 0x1(r29)
    li r3, 0xe0
    lbz r12, 0x2(r29)
    li r5, 0x1b
    lbz r11, 0x3(r29)
    lbz r10, 0x4(r29)
    lbz r9, 0x5(r29)
    lbz r8, 0x6(r29)
    lbz r7, 0x7(r29)
    stb r30, 0x35(r1)
    lbz r30, 0x8(r29)
    stb r31, 0x36(r1)
    lbz r31, 0x9(r29)
    stb r12, 0x37(r1)
    lbz r12, 0xa(r29)
    stb r11, 0x38(r1)
    lbz r11, 0xb(r29)
    stb r10, 0x39(r1)
    lbz r10, 0xc(r29)
    stb r9, 0x3a(r1)
    lbz r9, 0xd(r29)
    stb r8, 0x3b(r1)
    lbz r8, 0xe(r29)
    stb r7, 0x3c(r1)
    lbz r7, 0xf(r29)
    stb r30, 0x3d(r1)
    lbz r30, 0x10(r29)
    stb r31, 0x3e(r1)
    lbz r31, 0x11(r29)
    stb r12, 0x3f(r1)
    lbz r12, 0x12(r29)
    stb r11, 0x40(r1)
    lbz r11, 0x13(r29)
    stb r10, 0x41(r1)
    lbz r10, 0x14(r29)
    stb r9, 0x42(r1)
    lbz r9, 0x15(r29)
    stb r8, 0x43(r1)
    lbz r8, 0x16(r29)
    stb r7, 0x44(r1)
    lbz r7, 0x17(r29)
    lbz r6, 0x18(r29)
    lbz r0, 0x19(r29)
    stb r28, 0x34(r1)
    stb r30, 0x45(r1)
    stb r31, 0x46(r1)
    stb r12, 0x47(r1)
    stb r11, 0x48(r1)
    stb r10, 0x49(r1)
    stb r9, 0x4a(r1)
    stb r8, 0x4b(r1)
    stb r7, 0x4c(r1)
    stb r6, 0x4d(r1)
    stb r0, 0x4e(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, lbl_8049DD78
    cmpwi r0, 0x0
    beq lbl_8028680C
    lwz r0, lbl_8049DD70
    li r3, 0x0
    stw r3, lbl_8049DD78
    ori r0, r0, 0x40
    stw r0, lbl_8049DD70
lbl_8028680C:
    lwz r0, lbl_8049DD84
    cmpwi r0, 0x3
    bne lbl_8028684C
    lwz r0, lbl_8049DD78
    li r3, 0xa
    stb r3, 0xc(r1)
    addi r4, r1, 0xc
    slwi r0, r0, 1
    li r3, 0xe0
    ori r0, r0, 0x1
    li r5, 0x2
    stb r0, 0xd(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_80286874
lbl_8028684C:
    li r3, 0xa
    li r0, 0x0
    stb r3, 0xc(r1)
    addi r4, r1, 0xc
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0xd(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
lbl_80286874:
    li r3, 0x3
    li r0, 0x1
    stb r3, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0x9(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lis r3, lbl_8036BB88@ha
    addi r3, r3, lbl_8036BB88@l
    addi r3, r3, 0x154
    bl __VISetGammaImm
    li r0, 0x0
    stw r0, lbl_8049DD74
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_802868D4
// ----------------------------------------------------------------------------
asm void fn_802868D4() {
    nofralloc
    lis r4, lbl_8040BEF0@ha
    li r0, 0x100
    addi r4, r4, lbl_8040BEF0@l
    li r5, 0x0
    mtctr r0
lbl_802868E8:
    clrlwi. r0, r5, 31
    srwi r3, r5, 1
    beq lbl_802868FC
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_802868FC:
    clrlwi. r0, r3, 31
    srwi r3, r3, 1
    beq lbl_80286910
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_80286910:
    clrlwi. r0, r3, 31
    srwi r3, r3, 1
    beq lbl_80286924
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_80286924:
    clrlwi. r0, r3, 31
    srwi r3, r3, 1
    beq lbl_80286938
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_80286938:
    clrlwi. r0, r3, 31
    srwi r3, r3, 1
    beq lbl_8028694C
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_8028694C:
    clrlwi. r0, r3, 31
    srwi r3, r3, 1
    beq lbl_80286960
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_80286960:
    clrlwi. r0, r3, 31
    srwi r3, r3, 1
    beq lbl_80286974
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_80286974:
    clrlwi. r0, r3, 31
    srwi r3, r3, 1
    beq lbl_80286988
    xoris r3, r3, 0xedb8
    xori r3, r3, 0x8320
lbl_80286988:
    stw r3, 0x0(r4)
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    bdnz lbl_802868E8
    li r0, 0x1
    stw r0, lbl_8049DD8C
    blr
}

// ----------------------------------------------------------------------------
// fn_802869A4
// ----------------------------------------------------------------------------
asm void fn_802869A4() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_14
    lis r30, lbl_8040BEF0@ha
    lwz r15, lbl_8049DD8C
    addi r30, r30, lbl_8040BEF0@l
    addi r29, r1, 0x8
    addi r28, r30, 0x418
    lbz r14, 0x418(r30)
    addi r3, r30, 0x400
    lbz r0, 0x1(r28)
    lhz r17, 0x16(r3)
    cmpwi r15, 0x0
    stw r0, 0x24(r1)
    addi r15, r30, 0x418
    lbz r28, 0x2(r28)
    extrwi r0, r17, 8, 16
    stb r0, 0x1e(r1)
    lhz r16, 0x400(r30)
    lhz r27, 0x6(r3)
    lhz r26, 0xc(r3)
    extrwi r31, r16, 8, 16
    lhz r25, 0x12(r3)
    extrwi r12, r27, 8, 16
    lhz r24, 0x2(r3)
    extrwi r11, r26, 8, 16
    lhz r23, 0x8(r3)
    extrwi r10, r25, 8, 16
    lhz r22, 0xe(r3)
    extrwi r9, r24, 8, 16
    lhz r21, 0x14(r3)
    extrwi r8, r23, 8, 16
    lhz r20, 0x4(r3)
    extrwi r7, r22, 8, 16
    lhz r19, 0xa(r3)
    extrwi r6, r21, 8, 16
    lhz r18, 0x10(r3)
    extrwi r5, r20, 8, 16
    stw r28, 0x28(r1)
    extrwi r4, r19, 8, 16
    lwz r0, 0x24(r1)
    extrwi r3, r18, 8, 16
    lbz r15, 0x3(r15)
    li r28, 0x1c
    stb r0, 0x21(r1)
    lwz r0, 0x28(r1)
    stb r31, 0x8(r1)
    stb r16, 0x9(r1)
    stb r12, 0xa(r1)
    stb r27, 0xb(r1)
    stb r11, 0xc(r1)
    stb r26, 0xd(r1)
    stb r10, 0xe(r1)
    stb r25, 0xf(r1)
    stb r9, 0x10(r1)
    stb r24, 0x11(r1)
    stb r8, 0x12(r1)
    stb r23, 0x13(r1)
    stb r7, 0x14(r1)
    stb r22, 0x15(r1)
    stb r6, 0x16(r1)
    stb r21, 0x17(r1)
    stb r5, 0x18(r1)
    stb r20, 0x19(r1)
    stb r4, 0x1a(r1)
    stb r19, 0x1b(r1)
    stb r3, 0x1c(r1)
    stb r18, 0x1d(r1)
    stb r17, 0x1f(r1)
    stb r14, 0x20(r1)
    stb r0, 0x22(r1)
    stb r15, 0x23(r1)
    bne lbl_80286AD4
    bl fn_802868D4
lbl_80286AD4:
    addi r3, r30, 0x0
    li r5, -0x1
    b lbl_80286B00
lbl_80286AE0:
    lbz r0, 0x0(r29)
    clrlwi r4, r5, 24
    srwi r5, r5, 8
    addi r29, r29, 0x1
    xor r0, r4, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    xor r5, r5, r0
lbl_80286B00:
    subic. r28, r28, 0x1
    bge lbl_80286AE0
    li r0, -0x1
    addi r11, r1, 0x80
    xor r3, r5, r0
    bl _restgpr_14
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_80286B28
// ----------------------------------------------------------------------------
asm void fn_80286B28() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    lis r0, 0x4330
    cmpwi r4, 0x0
    lis r25, lbl_8040BEF0@ha
    stw r0, 0x18(r1)
    lhz r26, lbl_804A2340
    addi r25, r25, lbl_8040BEF0@l
    stw r0, 0x20(r1)
    lhz r27, lbl_804A2342
    lhz r28, lbl_804A2344
    lhz r29, lbl_804A2348
    lhz r30, lbl_804A234A
    lhz r31, lbl_804A234C
    bne lbl_80286CEC
    lbz r0, lbl_8049DDA4
    stb r0, 0x418(r25)
    bl fn_802869A4
    addi r8, r25, 0x418
    lwz r0, 0x4(r8)
    cmplw r0, r3
    bne lbl_80286CEC
    lfd f5, lbl_804A2358
    addi r9, r25, 0x400
    lfd f4, lbl_804A2350
    addi r10, r25, 0x430
    lfd f2, lbl_804A2360
    li r3, 0x0
    li r0, 0x2
lbl_80286BA8:
    lbz r6, 0x3(r8)
    lhz r5, 0x0(r9)
    cmplwi r6, 0x1
    bne lbl_80286BC0
    sth r29, 0x10(r1)
    b lbl_80286BC4
lbl_80286BC0:
    sth r26, 0x10(r1)
lbl_80286BC4:
    lhz r4, 0x0(r9)
    lbz r6, 0x3(r8)
    subf r4, r5, r4
    cmplwi r6, 0x1
    sth r4, 0x8(r1)
    bne lbl_80286BE4
    sth r30, 0x12(r1)
    b lbl_80286BE8
lbl_80286BE4:
    sth r27, 0x12(r1)
lbl_80286BE8:
    lhz r4, 0x2(r9)
    lbz r6, 0x3(r8)
    subf r4, r5, r4
    cmplwi r6, 0x1
    sth r4, 0xa(r1)
    bne lbl_80286C08
    sth r31, 0x14(r1)
    b lbl_80286C0C
lbl_80286C08:
    sth r28, 0x14(r1)
lbl_80286C0C:
    lhz r4, 0x4(r9)
    mr r25, r10
    addi r11, r1, 0x10
    addi r12, r1, 0x8
    subf r4, r5, r4
    addi r24, r10, 0x18
    sth r4, 0xc(r1)
    mtctr r0
lbl_80286C2C:
    lhz r7, 0x0(r11)
    lhz r4, 0x2(r11)
    lhz r5, 0x0(r12)
    subf r6, r7, r4
    lhz r4, 0x2(r12)
    xoris r6, r6, 0x8000
    stw r6, 0x1c(r1)
    subf r4, r5, r4
    xoris r4, r4, 0x8000
    lfd f0, 0x18(r1)
    stw r4, 0x24(r1)
    fsub f1, f0, f5
    lfd f0, 0x20(r1)
    fcmpu cr0, f4, f1
    fsub f0, f0, f5
    beq lbl_80286C74
    fcmpu cr0, f4, f0
    bne lbl_80286C90
lbl_80286C74:
    lhz r4, 0x0(r12)
    stfd f4, 0x0(r25)
    stw r4, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsub f0, f0, f2
    stfd f0, 0x0(r24)
    b lbl_80286CBC
lbl_80286C90:
    fdiv f3, f0, f1
    stw r7, 0x1c(r1)
    lfd f0, 0x18(r1)
    stw r5, 0x24(r1)
    lfd f1, 0x20(r1)
    fsub f0, f0, f2
    fsub f1, f1, f2
    stfd f3, 0x0(r25)
    fmul f0, f3, f0
    fsub f0, f1, f0
    stfd f0, 0x0(r24)
lbl_80286CBC:
    addi r11, r11, 0x2
    addi r12, r12, 0x2
    addi r25, r25, 0x8
    addi r24, r24, 0x8
    bdnz lbl_80286C2C
    addi r3, r3, 0x1
    addi r10, r10, 0x38
    cmpwi r3, 0x4
    addi r9, r9, 0x6
    blt lbl_80286BA8
    li r0, 0x1
    stw r0, lbl_8049DD88
lbl_80286CEC:
    addi r11, r1, 0x50
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80286D04
// ----------------------------------------------------------------------------
asm void fn_80286D04() {
    nofralloc
    cmpwi r4, 0x0
    bnelr
    lis r3, lbl_8040C308@ha
    lbz r4, lbl_8049DDA5
    addi r3, r3, lbl_8040C308@l
    li r0, 0x0
    stb r4, 0x1(r3)
    lis r6, fn_80286B28@ha
    addi r6, r6, fn_80286B28@l
    li r3, 0x3
    stb r0, lbl_8049DDA4
    la r4, lbl_8049DDA4
    li r5, 0x20
    b fn_8028E544
    blr
}

// ----------------------------------------------------------------------------
// fn_80286D40
// ----------------------------------------------------------------------------
asm void fn_80286D40() {
    nofralloc
    cmpwi r4, 0x0
    bnelr
    lis r4, lbl_8040C400@ha
    lis r7, lbl_8040C308@ha
    addi r3, r4, lbl_8040C400@l
    li r0, 0x0
    lbz r5, 0x1(r3)
    lis r6, fn_80286D04@ha
    lbz r4, lbl_8040C400@l(r4)
    addi r7, r7, lbl_8040C308@l
    stb r0, lbl_8049DDA5
    addi r6, r6, fn_80286D04@l
    li r3, 0x3
    stb r4, 0x2(r7)
    la r4, lbl_8049DDA5
    stb r5, 0x3(r7)
    li r5, 0x21
    b fn_8028E544
    blr
}

// ----------------------------------------------------------------------------
// fn_80286D8C
// ----------------------------------------------------------------------------
asm void fn_80286D8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_80286E04
    lis r3, lbl_8040C400@ha
    lis r6, lbl_8040C308@ha
    addi r31, r3, lbl_8040C400@l
    lbz r5, lbl_8040C400@l(r3)
    lbz r0, 0x1(r31)
    addi r6, r6, lbl_8040C308@l
    lbz r4, 0x2(r31)
    mr r3, r31
    lbz r7, 0x3(r31)
    slwi r0, r0, 16
    rlwimi r7, r4, 8, 16, 23
    li r4, 0x0
    rlwimi r0, r5, 24, 0, 7
    li r5, 0x10
    or r0, r7, r0
    stw r0, 0x4(r6)
    bl memset
    lis r7, fn_80286D40@ha
    mr r4, r31
    addi r7, r7, fn_80286D40@l
    li r3, 0x3
    li r5, 0x60
    li r6, 0x10
    bl fn_8028E5DC
lbl_80286E04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80286E18
// ----------------------------------------------------------------------------
asm void fn_80286E18() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_80286EAC
    lis r3, lbl_8040C400@ha
    lis r9, lbl_8040C2F0@ha
    addi r31, r3, lbl_8040C400@l
    lbz r3, lbl_8040C400@l(r3)
    lbz r0, 0x2(r31)
    addi r9, r9, lbl_8040C2F0@l
    lbz r8, 0x3(r31)
    li r4, 0x0
    rlwimi r8, r0, 8, 16, 23
    lbz r0, 0x4(r31)
    lbz r6, 0x6(r31)
    li r5, 0x4
    lbz r10, 0x1(r31)
    rlwimi r10, r3, 8, 16, 23
    lbz r7, 0x5(r31)
    rlwimi r7, r0, 8, 16, 23
    lbz r0, 0x7(r31)
    rlwimi r0, r6, 8, 16, 23
    sth r10, 0x4(r9)
    mr r3, r31
    sth r8, 0xa(r9)
    sth r7, 0x10(r9)
    sth r0, 0x16(r9)
    bl memset
    lis r7, fn_80286D8C@ha
    mr r4, r31
    addi r7, r7, fn_80286D8C@l
    li r3, 0x3
    li r5, 0x3c
    li r6, 0x4
    bl fn_8028E5DC
lbl_80286EAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80286EC0
// ----------------------------------------------------------------------------
asm void fn_80286EC0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bne lbl_80286FA0
    lis r3, lbl_8040C400@ha
    lis r29, lbl_8040C2F0@ha
    addi r31, r3, lbl_8040C400@l
    lbz r3, lbl_8040C400@l(r3)
    lbz r0, 0x2(r31)
    addi r12, r29, lbl_8040C2F0@l
    lbz r30, 0x3(r31)
    li r4, 0x0
    rlwimi r30, r0, 8, 16, 23
    lbz r0, 0x4(r31)
    lbz r11, 0x5(r31)
    li r5, 0x10
    rlwimi r11, r0, 8, 16, 23
    lbz r0, 0x6(r31)
    lbz r10, 0x7(r31)
    rlwimi r10, r0, 8, 16, 23
    lbz r0, 0x8(r31)
    lbz r9, 0x9(r31)
    rlwimi r9, r0, 8, 16, 23
    lbz r0, 0xa(r31)
    lbz r8, 0xb(r31)
    rlwimi r8, r0, 8, 16, 23
    lbz r0, 0xc(r31)
    lbz r6, 0xe(r31)
    lbz r28, 0x1(r31)
    rlwimi r28, r3, 8, 16, 23
    lbz r7, 0xd(r31)
    rlwimi r7, r0, 8, 16, 23
    lbz r0, 0xf(r31)
    rlwimi r0, r6, 8, 16, 23
    sth r28, lbl_8040C2F0@l(r29)
    mr r3, r31
    sth r30, 0x6(r12)
    sth r11, 0xc(r12)
    sth r10, 0x12(r12)
    sth r9, 0x2(r12)
    sth r8, 0x8(r12)
    sth r7, 0xe(r12)
    sth r0, 0x14(r12)
    bl memset
    lis r7, fn_80286E18@ha
    mr r4, r31
    addi r7, r7, fn_80286E18@l
    li r3, 0x3
    li r5, 0x34
    li r6, 0x8
    bl fn_8028E5DC
lbl_80286FA0:
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
// fn_80286FC0
// ----------------------------------------------------------------------------
asm void fn_80286FC0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049DD90
    cmpwi r0, 0x0
    bne lbl_80287030
    lis r3, lbl_8040C320@ha
    li r4, 0x0
    addi r3, r3, lbl_8040C320@l
    li r5, 0xe0
    bl memset
    lis r3, lbl_8040C2F0@ha
    li r0, 0x0
    addi r4, r3, lbl_8040C2F0@l
    sth r0, lbl_8040C2F0@l(r3)
    lwz r3, lbl_8049CEC8
    sth r0, 0x6(r4)
    sth r0, 0xc(r4)
    sth r0, 0x12(r4)
    sth r0, 0x2(r4)
    sth r0, 0x8(r4)
    sth r0, 0xe(r4)
    sth r0, 0x14(r4)
    sth r0, 0x4(r4)
    sth r0, 0xa(r4)
    sth r0, 0x10(r4)
    sth r0, 0x16(r4)
    bl OSRegisterVersion
lbl_80287030:
    li r0, 0x1
    stw r0, lbl_8049DD90
    bl fn_803248C0
    extsb r0, r3
    cmpwi r0, 0x5
    bge lbl_80287060
    cmpwi r0, 0x2
    beq lbl_80287080
    bge lbl_80287098
    cmpwi r0, 0x0
    bge lbl_80287074
    b lbl_80287098
lbl_80287060:
    cmpwi r0, 0xb
    beq lbl_8028708C
    bge lbl_80287098
    cmpwi r0, 0x7
    bge lbl_80287098
lbl_80287074:
    lfd f0, lbl_804A2368
    stfd f0, lbl_8049DD98
    b lbl_802870A0
lbl_80287080:
    lfd f0, lbl_804A2370
    stfd f0, lbl_8049DD98
    b lbl_802870A0
lbl_8028708C:
    lfd f0, lbl_804A2378
    stfd f0, lbl_8049DD98
    b lbl_802870A0
lbl_80287098:
    lfd f0, lbl_804A2368
    stfd f0, lbl_8049DD98
lbl_802870A0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802870B0
// ----------------------------------------------------------------------------
asm void fn_802870B0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r0, lbl_8049DD88
    bl fn_80286FC0
    lis r31, lbl_8040C400@ha
    li r4, 0x0
    addi r3, r31, lbl_8040C400@l
    li r5, 0x10
    bl memset
    lis r7, fn_80286EC0@ha
    addi r4, r31, lbl_8040C400@l
    addi r7, r7, fn_80286EC0@l
    li r3, 0x3
    li r5, 0x24
    li r6, 0x10
    bl fn_8028E5DC
    cntlzw r0, r3
    lwz r31, 0xc(r1)
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80287118
// ----------------------------------------------------------------------------
asm void fn_80287118() {
    nofralloc
    lwz r3, lbl_8049DD88
    blr
}

// ----------------------------------------------------------------------------
// fn_80287120
// ----------------------------------------------------------------------------
asm void fn_80287120() {
    nofralloc
    lwz r0, lbl_8049DD88
    cmpwi r0, 0x0
    bne lbl_80287134
    li r3, -0x2
    blr
lbl_80287134:
    cmplwi r4, 0x4
    blt lbl_80287144
    cmpwi r3, 0x0
    bne lbl_8028714C
lbl_80287144:
    li r3, -0x4
    blr
lbl_8028714C:
    lis r4, lbl_8040C320@ha
    lfd f0, 0x0(r3)
    addi r4, r4, lbl_8040C320@l
    stfd f0, 0x30(r4)
    lfd f0, 0x8(r3)
    stfd f0, 0x68(r4)
    lfd f0, 0x10(r3)
    stfd f0, 0xa0(r4)
    lfd f0, 0x18(r3)
    li r3, 0x0
    stfd f0, 0xd8(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_8028717C
// ----------------------------------------------------------------------------
asm void fn_8028717C() {
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, lbl_8049DD88
    cmpwi r0, 0x0
    bne lbl_80287194
    li r3, -0x2
    b lbl_8028729C
lbl_80287194:
    cmplwi r5, 0x4
    blt lbl_802871AC
    cmpwi r3, 0x0
    beq lbl_802871AC
    cmpwi r4, 0x0
    bne lbl_802871B4
lbl_802871AC:
    li r3, -0x4
    b lbl_8028729C
lbl_802871B4:
    lis r6, lbl_8040C2F0@ha
    lis r7, lbl_8040C320@ha
    li r0, 0x4
    lfd f4, lbl_804A2360
    addi r6, r6, lbl_8040C2F0@l
    addi r7, r7, lbl_8040C320@l
    lfd f2, lbl_804A2350
    li r9, 0x0
    lfd f1, lbl_804A2380
    lis r5, 0x4330
    mtctr r0
lbl_802871E0:
    lhz r10, 0x2a(r3)
    li r8, 0x0
    lhz r0, 0x2(r6)
    cmplw r10, r0
    ble lbl_802871F8
    li r8, 0x1
lbl_802871F8:
    lhz r0, 0x4(r6)
    cmplw r10, r0
    ble lbl_80287208
    addi r8, r8, 0x1
lbl_80287208:
    cmpwi r8, 0x2
    bne lbl_80287214
    subi r8, r8, 0x1
lbl_80287214:
    stw r10, 0xc(r1)
    slwi r0, r8, 3
    add r8, r7, r0
    lfdx f5, r7, r0
    stw r5, 0x8(r1)
    lfd f6, 0x18(r8)
    fcmpu cr0, f2, f5
    lfd f3, 0x8(r1)
    lfd f0, 0x30(r7)
    fsub f3, f3, f4
    fsub f3, f3, f6
    fsub f0, f3, f0
    beq lbl_80287250
    fcmpu cr0, f2, f0
    bne lbl_80287258
lbl_80287250:
    stfd f2, 0x0(r4)
    b lbl_80287264
lbl_80287258:
    fdiv f0, f0, f5
    fdiv f0, f0, f1
    stfd f0, 0x0(r4)
lbl_80287264:
    lhz r0, 0x0(r6)
    addi r3, r3, 0x2
    addi r6, r6, 0x6
    addi r7, r7, 0x38
    subf r0, r0, r10
    addi r4, r4, 0x8
    add r9, r9, r0
    bdnz lbl_802871E0
    xori r0, r9, 0x3e8
    stw r9, lbl_8049DDA0
    srawi r3, r0, 1
    and r0, r0, r9
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_8028729C:
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802872A4
// ----------------------------------------------------------------------------
asm void fn_802872A4() {
    nofralloc
    clrlslwi r0, r3, 24, 1
    cmpwi r0, 0x104
    blt lbl_802872B8
    li r3, 0x4
    blr
lbl_802872B8:
    bge lbl_802872CC
    cmpwi r0, 0xfa
    blt lbl_802872CC
    li r3, 0x3
    blr
lbl_802872CC:
    cmpwi r0, 0xfa
    bge lbl_802872E4
    cmpwi r0, 0xf0
    blt lbl_802872E4
    li r3, 0x2
    blr
lbl_802872E4:
    cmpwi r0, 0xf0
    bge lbl_802872FC
    cmpwi r0, 0xd4
    blt lbl_802872FC
    li r3, 0x1
    blr
lbl_802872FC:
    cmpwi r0, 0xd4
    bge lbl_8028730C
    li r3, 0x0
    blr
lbl_8028730C:
    li r3, -0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_80287314
// ----------------------------------------------------------------------------
asm void fn_80287314() {
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, lbl_8049DD88
    cmpwi r0, 0x0
    bne lbl_8028732C
    li r3, -0x2
    b lbl_802873F0
lbl_8028732C:
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_8028733C
    li r3, -0x4
    b lbl_802873F0
lbl_8028733C:
    lwz r0, lbl_8049DD88
    lfd f2, lbl_804A2350
    cmpwi r0, 0x0
    bne lbl_80287354
    li r4, -0x2
    b lbl_802873D0
lbl_80287354:
    bne cr1, lbl_80287360
    li r4, -0x4
    b lbl_802873D0
lbl_80287360:
    lbz r0, 0x32(r4)
    extsb r5, r0
    cmpwi r5, 0x7f
    beq lbl_80287378
    cmpwi r5, -0x80
    bne lbl_80287380
lbl_80287378:
    li r4, -0x3
    b lbl_802873D0
lbl_80287380:
    lis r4, lbl_8040C308@ha
    lis r0, 0x4330
    addi r4, r4, lbl_8040C308@l
    stw r0, 0x8(r1)
    lbz r0, 0x2(r4)
    li r4, 0x0
    lfd f5, lbl_804A2358
    extsb r0, r0
    lfd f3, lbl_804A2398
    subf r0, r0, r5
    lfd f2, lbl_804A2390
    xoris r0, r0, 0x8000
    lfd f0, lbl_804A2388
    stw r0, 0xc(r1)
    lfd f4, 0x8(r1)
    fsub f4, f4, f5
    fdiv f3, f4, f3
    fmul f2, f2, f3
    fsub f0, f0, f2
    fmul f2, f1, f0
lbl_802873D0:
    cmpwi r4, 0x0
    bge lbl_802873E0
    mr r3, r4
    b lbl_802873F0
lbl_802873E0:
    lfd f0, lbl_8049DD98
    fmul f0, f2, f0
    stfd f0, 0x0(r3)
    li r3, 0x0
lbl_802873F0:
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802873F8
// ----------------------------------------------------------------------------
asm void fn_802873F8() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_18
    lis r10, lbl_803414C8@ha
    lwzu r9, lbl_803414C8@l(r10)
    addi r11, r6, 0x1
    mr r25, r4
    srwi r4, r11, 31
    lwz r8, 0x4(r10)
    mr r31, r7
    lwz r0, 0x8(r10)
    add r4, r4, r11
    lwz r18, 0xc(r10)
    lwz r27, 0x10(r10)
    mr r30, r6
    lwz r26, 0x14(r10)
    mr r28, r3
    lwz r24, 0x18(r10)
    mr r29, r5
    lwz r23, 0x1c(r10)
    srawi r5, r4, 1
    lwz r22, 0x20(r10)
    mr r3, r31
    lwz r21, 0x24(r10)
    li r4, 0x0
    lwz r20, 0x28(r10)
    lwz r19, 0x2c(r10)
    lwz r12, 0x30(r10)
    lwz r11, 0x34(r10)
    lwz r7, 0x38(r10)
    lwz r6, 0x3c(r10)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r0, 0x10(r1)
    stw r18, 0x14(r1)
    stw r27, 0x18(r1)
    stw r26, 0x1c(r1)
    stw r24, 0x20(r1)
    stw r23, 0x24(r1)
    stw r22, 0x28(r1)
    stw r21, 0x2c(r1)
    stw r20, 0x30(r1)
    stw r19, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r7, 0x40(r1)
    stw r6, 0x44(r1)
    bl memset
    clrlwi. r0, r25, 31
    bne lbl_802874E4
    li r11, 0x0
    li r12, 0x7f
    li r5, 0x0
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_802874FC
lbl_802874E4:
    lwz r11, 0x0(r28)
    lwz r12, 0x4(r28)
    lwz r5, 0x8(r28)
    lwz r27, 0xc(r28)
    lwz r26, 0x10(r28)
    lwz r25, 0x14(r28)
lbl_802874FC:
    lis r3, 0x1
    addi r24, r1, 0x8
    lfd f2, lbl_804A23A0
    subi r4, r3, 0x1
    li r6, 0x0
    lis r0, 0xffff
    lis r23, 0x4330
    mtctr r30
    cmpwi r30, 0x0
    ble lbl_8028769C
lbl_80287524:
    lha r5, 0x0(r29)
    li r10, 0x0
    li r9, 0x0
    li r8, 0x0
    cmpw r5, r11
    li r7, 0x0
    addi r29, r29, 0x2
    bge lbl_80287548
    li r7, 0x1
lbl_80287548:
    subf r19, r11, r5
    srawi r5, r19, 31
    xor r27, r5, r19
    subf r27, r5, r27
    cmpw r27, r12
    blt lbl_80287568
    li r8, 0x1
    subf r27, r12, r27
lbl_80287568:
    srwi r5, r12, 31
    add r5, r5, r12
    srawi r26, r5, 1
    cmpw r27, r26
    blt lbl_80287584
    li r9, 0x1
    subf r27, r26, r27
lbl_80287584:
    srwi r5, r26, 31
    add r5, r5, r26
    srawi r25, r5, 1
    cmpw r27, r25
    blt lbl_802875A0
    li r10, 0x1
    subf r27, r25, r27
lbl_802875A0:
    mullw r20, r25, r10
    slwi r5, r7, 1
    srwi r19, r25, 31
    subfic r5, r5, 0x1
    add r19, r19, r25
    mullw r21, r12, r8
    srawi r19, r19, 1
    mullw r22, r26, r9
    add r21, r20, r21
    add r22, r19, r22
    add r22, r21, r22
    mullw r5, r5, r22
    cmpw r5, r4
    ble lbl_802875DC
    subi r5, r3, 0x1
lbl_802875DC:
    cmpw r5, r0
    bge lbl_802875E8
    lis r5, 0xffff
lbl_802875E8:
    add r11, r11, r5
    cmpwi r11, 0x7fff
    ble lbl_802875F8
    li r11, 0x7fff
lbl_802875F8:
    cmpwi r11, -0x8000
    bge lbl_80287604
    li r11, -0x8000
lbl_80287604:
    xoris r12, r12, 0x8000
    slwi r18, r8, 2
    stw r12, 0x4c(r1)
    clrlwi r22, r6, 31
    slwi r9, r9, 1
    add r8, r10, r18
    stw r23, 0x48(r1)
    add r8, r9, r8
    slwi r8, r8, 3
    srwi r12, r6, 31
    lfd f1, 0x48(r1)
    add r9, r9, r18
    lfdx f0, r24, r8
    add r8, r12, r6
    fsub f1, f1, f2
    srawi r12, r8, 1
    slwi r8, r7, 3
    add r7, r10, r9
    add r7, r8, r7
    subi r22, r22, 0x1
    fmul f0, f1, f0
    rlwinm r9, r22, 0, 29, 29
    clrlwi r7, r7, 24
    lbzx r8, r31, r12
    slw r7, r7, r9
    or r7, r8, r7
    fctiwz f0, f0
    stbx r7, r31, r12
    stfd f0, 0x50(r1)
    lwz r12, 0x54(r1)
    cmpwi r12, 0x7f
    bgt lbl_80287688
    li r12, 0x7f
lbl_80287688:
    cmpwi r12, 0x6000
    blt lbl_80287694
    li r12, 0x6000
lbl_80287694:
    addi r6, r6, 0x1
    bdnz lbl_80287524
lbl_8028769C:
    stw r11, 0x0(r28)
    addi r11, r1, 0x90
    mr r3, r30
    stw r12, 0x4(r28)
    stw r5, 0x8(r28)
    stw r27, 0xc(r28)
    stw r26, 0x10(r28)
    stw r25, 0x14(r28)
    bl _restgpr_18
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_802876D0
// ----------------------------------------------------------------------------
asm void fn_802876D0() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_802876D8
// ----------------------------------------------------------------------------
asm void fn_802876D8() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_802876E0
// ----------------------------------------------------------------------------
asm void fn_802876E0() {
    nofralloc
    lwz r3, lbl_8049DDD0
    blr
}

// ----------------------------------------------------------------------------
// fn_802876E8
// ----------------------------------------------------------------------------
asm void fn_802876E8() {
    nofralloc
    lwz r3, lbl_8049DDD4
    blr
}

// ----------------------------------------------------------------------------
// fn_802876F0
// ----------------------------------------------------------------------------
asm void fn_802876F0() {
    nofralloc
    lwz r3, lbl_8049DDD8
    blr
}

// ----------------------------------------------------------------------------
// fn_802876F8
// ----------------------------------------------------------------------------
asm void fn_802876F8() {
    nofralloc
    lwz r3, lbl_8049DDDC
    blr
}

// ----------------------------------------------------------------------------
// fn_80287700
// ----------------------------------------------------------------------------
asm void fn_80287700() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_80297944
    cmpwi r31, 0x0
    bne lbl_80287730
    cmpwi r3, 0x0
    bne lbl_80287738
lbl_80287730:
    li r3, 0x1
    b lbl_802878AC
lbl_80287738:
    cmpwi r3, 0x4
    beq lbl_8028774C
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_80287754
lbl_8028774C:
    li r3, 0x0
    b lbl_802878AC
lbl_80287754:
    bl fn_80299398
    cmpwi r3, 0x0
    beq lbl_8028776C
    bl GKI_update_timer_list
    li r3, 0x0
    b lbl_802878AC
lbl_8028776C:
    cmpwi r30, 0x4
    beq lbl_802877BC
    bge lbl_80287790
    cmpwi r30, 0x1
    beq lbl_802877BC
    bge lbl_802877B4
    cmpwi r30, 0x0
    bge lbl_802877A0
    b lbl_802877D4
lbl_80287790:
    cmpwi r30, 0x6
    beq lbl_802877BC
    bge lbl_802877D4
    b lbl_802877C4
lbl_802877A0:
    lis r3, fn_802876D0@ha
    lis r4, fn_802876D8@ha
    addi r3, r3, fn_802876D0@l
    addi r4, r4, fn_802876D8@l
    bl fn_802976D4
lbl_802877B4:
    li r0, 0x1
    b lbl_802877D4
lbl_802877BC:
    li r0, 0x0
    b lbl_802877D4
lbl_802877C4:
    lwz r3, lbl_8049E32C
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_802877D4:
    cmpwi r0, 0x0
    beq lbl_80287850
    bl OSDisableInterrupts
    lbz r0, lbl_8049DDED
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_802877F8
    bl OSRestoreInterrupts
    b lbl_802878A8
lbl_802877F8:
    li r0, 0x1
    li r3, 0x0
    stb r0, lbl_8049DDED
    li r4, 0x0
    bl fn_80297EAC
    li r31, 0x0
lbl_80287810:
    mr r3, r31
    li r4, 0x0
    bl fn_8029A480
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_80287810
    lis r3, lbl_8040C420@ha
    addi r3, r3, lbl_8040C420@l
    bl OSCancelAlarm
    li r3, 0x0
    bl fn_80297DF4
    li r3, 0x0
    bl fn_80297724
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_802878A8
lbl_80287850:
    bl OSDisableInterrupts
    lwz r0, lbl_8049DDB8
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_8028786C
    bl OSRestoreInterrupts
    b lbl_802878A8
lbl_8028786C:
    lbz r0, lbl_8049DDED
    cmpwi r0, 0x0
    beq lbl_80287880
    bl OSRestoreInterrupts
    b lbl_802878A8
lbl_80287880:
    li r0, 0x1
    lis r3, lbl_8036C26C@ha
    stb r0, lbl_8049DDED
    addi r3, r3, lbl_8036C26C@l
    lwz r4, lbl_8049DDBC
    stw r0, lbl_8049CEDC
    opword 0x4CC63182
    bl fn_80294360
    mr r3, r30
    bl OSRestoreInterrupts
lbl_802878A8:
    li r3, 0x0
lbl_802878AC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802878C4
// ----------------------------------------------------------------------------
asm void fn_802878C4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r5, lbl_8040C450@ha
    lwz r0, 0x0(r4)
    slwi r3, r3, 2
    lhz r25, 0x1a(r4)
    addi r5, r5, lbl_8040C450@l
    mr r24, r4
    lwzx r28, r5, r3
    clrlwi r27, r0, 24
    addi r26, r4, 0x4
    bl OSDisableInterrupts
    lbz r29, 0x8c3(r28)
    mr r31, r3
    lwz r4, 0x8bc(r28)
    extsb. r0, r29
    bge lbl_8028791C
    bl OSRestoreInterrupts
    b lbl_80287A84
lbl_8028791C:
    li r0, -0x2
    cmplwi r27, 0x10
    stw r0, 0x8bc(r28)
    lwz r3, 0x8d4(r28)
    lwz r0, lbl_8049DDF0
    and r30, r3, r0
    bne lbl_80287940
    stw r4, 0x8bc(r28)
    b lbl_802879F8
lbl_80287940:
    cmplwi r27, 0x18
    bne lbl_8028795C
    stw r4, 0x8bc(r28)
    lbz r3, 0x8cf(r28)
    subi r0, r3, 0x1
    stb r0, 0x8cf(r28)
    b lbl_802879F8
lbl_8028795C:
    cmpwi r27, 0x16
    beq lbl_802879C4
    bge lbl_80287974
    cmpwi r27, 0x15
    bge lbl_802879A0
    b lbl_802879B8
lbl_80287974:
    cmpwi r27, 0x18
    bge lbl_802879B8
    li r0, 0x0
    stw r0, 0x97c(r28)
    lwz r0, 0x24(r24)
    stw r0, 0x978(r28)
    lhz r0, 0x20(r24)
    sth r0, 0x980(r28)
    lwz r0, 0x1c(r24)
    stw r0, 0x974(r28)
    b lbl_802879C4
lbl_802879A0:
    stw r4, 0x8bc(r28)
    li r0, 0x1
    lwz r3, 0x28(r24)
    stw r3, 0x850(r28)
    stb r0, 0x8c0(r28)
    b lbl_802879C4
lbl_802879B8:
    lbz r0, 0x0(r26)
    ori r0, r0, 0x2
    stb r0, 0x0(r26)
lbl_802879C4:
    lwz r0, 0x2c(r24)
    stw r0, 0x89c(r28)
    stb r27, 0x987(r28)
    bl __OSGetSystemTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    rlwinm r0, r0, 31, 1, 30
    addc r0, r0, r4
    stw r0, 0x90c(r28)
    adde r0, r5, r3
    stw r0, 0x908(r28)
    stb r5, 0x910(r28)
lbl_802879F8:
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_8036C2A8@ha
    mr r5, r27
    addi r3, r3, lbl_8036C2A8@l
    extsb r4, r29
    opword 0x4CC63182
    bl fn_80294360
    addi r0, r25, 0x12
    clrlwi r3, r0, 24
    bl GKI_getbuf
    addi r4, r25, 0x1
    li r0, 0xa
    clrlwi r4, r4, 24
    addi r28, r3, 0x12
    sth r4, 0x2(r3)
    mr r24, r3
    mr r4, r26
    mr r5, r25
    sth r0, 0x4(r3)
    addi r3, r28, 0x1
    stb r27, 0x0(r28)
    bl memcpy
    cmpwi r30, 0x0
    beq lbl_80287A6C
    lbz r0, 0x1(r28)
    ori r0, r0, 0x1
    stb r0, 0x1(r28)
    b lbl_80287A78
lbl_80287A6C:
    lbz r0, 0x1(r28)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0x1(r28)
lbl_80287A78:
    mr r3, r29
    mr r4, r24
    bl BTA_HhSendData
lbl_80287A84:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80287A9C
// ----------------------------------------------------------------------------
asm void fn_80287A9C() {
    nofralloc
    lhz r0, lbl_8049DDAA
    lis r4, lbl_8040C450@ha
    slwi r3, r3, 2
    addi r4, r4, lbl_8040C450@l
    cmplwi r0, 0xa
    lwzx r7, r4, r3
    bnelr
    lhz r0, 0x984(r7)
    lis r3, 0x6666
    lbz r6, 0x983(r7)
    addi r4, r3, 0x6667
    mulli r3, r0, 0x64
    li r0, 0x64
    slwi r5, r6, 3
    add r5, r5, r6
    clrlwi r5, r5, 16
    extrwi r3, r3, 16, 15
    add r5, r5, r3
    clrlwi r3, r5, 16
    mulhw r3, r4, r3
    srawi r3, r3, 2
    srwi r4, r3, 31
    add r3, r3, r4
    clrlwi r5, r3, 16
    cmplwi r5, 0x64
    bgt lbl_80287B08
    mr r0, r5
lbl_80287B08:
    stb r0, 0x983(r7)
    li r4, 0x0
    clrlwi r3, r0, 16
    sth r4, 0x984(r7)
    lbz r0, 0x8cd(r7)
    cmpwi r0, 0x0
    beq lbl_80287B64
    cmplwi r3, 0x55
    ble lbl_80287B38
    stb r4, 0x8cd(r7)
    stb r4, 0x8ce(r7)
    blr
lbl_80287B38:
    cmplwi r3, 0x50
    blelr
    lbz r3, 0x8ce(r7)
    addi r3, r3, 0x1
    clrlwi r0, r3, 24
    stb r3, 0x8ce(r7)
    cmplwi r0, 0x14
    bltlr
    stb r4, 0x8cd(r7)
    stb r4, 0x8ce(r7)
    blr
lbl_80287B64:
    cmplwi r3, 0x4b
    bge lbl_80287B7C
    li r0, 0x1
    stb r0, 0x8cd(r7)
    stb r4, 0x8ce(r7)
    blr
lbl_80287B7C:
    cmplwi r3, 0x50
    bgelr
    lbz r3, 0x8ce(r7)
    addi r3, r3, 0x1
    clrlwi r0, r3, 24
    stb r3, 0x8ce(r7)
    cmplwi r0, 0x1
    bltlr
    li r0, 0x1
    stb r0, 0x8cd(r7)
    stb r4, 0x8ce(r7)
    blr
}

// ----------------------------------------------------------------------------
// fn_80287BAC
// ----------------------------------------------------------------------------
asm void fn_80287BAC() {
    nofralloc
    subi r0, r3, 0x3
    cmplwi r0, 0xc
    bgt lbl_80287C00
    lis r3, jumptable_8036C2C4@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8036C2C4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x32
    blr
    li r3, 0x36
    blr
    li r3, 0x2e
    blr
    li r3, 0x34
    blr
    li r3, 0x4a
    blr
    li r3, 0x5a
    blr
lbl_80287C00:
    li r3, 0x2a
    blr
}

// ----------------------------------------------------------------------------
// fn_80287C08
// ----------------------------------------------------------------------------
asm void fn_80287C08() {
    nofralloc
    stwu r1, -0x20(r1)
    li r10, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x8b8(r3)
    cmplwi r0, 0xe
    beq lbl_80287F58
    lbz r0, 0x29(r4)
    extsb. r0, r0
    beq lbl_80287C40
    cmpwi r0, -0x7
    bne lbl_80287F58
lbl_80287C40:
    lbz r0, 0x29(r5)
    extsb. r0, r0
    beq lbl_80287C54
    cmpwi r0, -0x7
    bne lbl_80287F58
lbl_80287C54:
    lha r9, 0x4(r5)
    lha r8, 0x4(r4)
    lhz r7, 0x0(r4)
    lhz r0, 0x0(r5)
    subf. r10, r9, r8
    subf r6, r7, r0
    subf r0, r0, r7
    or r0, r6, r0
    srwi r0, r0, 31
    bge lbl_80287C80
    subf r10, r8, r9
lbl_80287C80:
    lha r9, 0x2(r5)
    xori r6, r10, 0xc
    lha r8, 0x2(r4)
    srawi r7, r6, 1
    and r6, r6, r10
    subf r6, r6, r7
    subf. r11, r9, r8
    srwi r10, r6, 31
    bge lbl_80287CA8
    subf r11, r8, r9
lbl_80287CA8:
    lha r9, 0x6(r5)
    xori r6, r11, 0xc
    lha r8, 0x6(r4)
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    subf. r11, r9, r8
    srwi r6, r6, 31
    bge lbl_80287CD0
    subf r11, r8, r9
lbl_80287CD0:
    xori r7, r11, 0xc
    or r6, r6, r10
    srawi r8, r7, 1
    and r7, r7, r11
    subf r7, r7, r8
    srwi r7, r7, 31
    or. r6, r7, r6
    beq lbl_80287D20
    lhz r6, 0x8f8(r3)
    addi r6, r6, 0x1
    sth r6, 0x8f8(r3)
    clrlwi r7, r6, 16
    lhz r6, lbl_8049CEE0
    cmplw r7, r6
    ble lbl_80287D64
    li r6, 0x0
    li r7, 0x1
    sth r6, 0x8f8(r3)
    sth r6, 0x8fe(r3)
    b lbl_80287D68
lbl_80287D20:
    lhz r6, 0x8fe(r3)
    lhz r7, lbl_8049CEE8
    addi r8, r6, 0x1
    divw r6, r8, r7
    mullw r6, r6, r7
    subf r6, r6, r8
    sth r6, 0x8fe(r3)
    clrlwi r7, r6, 16
    lhz r6, lbl_8049CEE8
    subi r6, r6, 0x1
    cmpw r7, r6
    bne lbl_80287D64
    lhz r6, 0x8f8(r3)
    cmpwi r6, 0x0
    beq lbl_80287D64
    subi r6, r6, 0x1
    sth r6, 0x8f8(r3)
lbl_80287D64:
    li r7, 0x0
lbl_80287D68:
    lha r8, 0xa(r5)
    or r0, r0, r7
    lha r6, 0xa(r4)
    clrlwi r10, r0, 24
    subf. r9, r8, r6
    bge lbl_80287D84
    subf r9, r6, r8
lbl_80287D84:
    lha r8, 0x8(r5)
    xori r0, r9, 0x2
    lha r7, 0x8(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r0, r0, 31
    bge lbl_80287DAC
    subf r11, r7, r8
lbl_80287DAC:
    lha r9, 0x10(r5)
    xori r6, r11, 0x2
    lha r8, 0x10(r4)
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    subf. r12, r9, r8
    srwi r6, r6, 31
    bge lbl_80287DD4
    subf r12, r8, r9
lbl_80287DD4:
    lha r11, 0x12(r5)
    xori r7, r12, 0x2
    lha r9, 0x12(r4)
    srawi r8, r7, 1
    and r7, r7, r12
    subf r7, r7, r8
    subf. r29, r11, r9
    srwi r7, r7, 31
    bge lbl_80287DFC
    subf r29, r9, r11
lbl_80287DFC:
    lha r12, 0x18(r5)
    xori r8, r29, 0x2
    lha r11, 0x18(r4)
    srawi r9, r8, 1
    and r8, r8, r29
    subf r8, r8, r9
    subf. r29, r12, r11
    srwi r8, r8, 31
    bge lbl_80287E24
    subf r29, r11, r12
lbl_80287E24:
    lha r30, 0x1a(r5)
    xori r9, r29, 0x2
    lha r12, 0x1a(r4)
    srawi r11, r9, 1
    and r9, r9, r29
    subf r9, r9, r11
    subf. r29, r30, r12
    srwi r9, r9, 31
    bge lbl_80287E4C
    subf r29, r12, r30
lbl_80287E4C:
    lha r31, 0x20(r5)
    xori r11, r29, 0x2
    lha r30, 0x20(r4)
    srawi r12, r11, 1
    and r11, r11, r29
    subf r11, r11, r12
    subf. r28, r31, r30
    srwi r29, r11, 31
    bge lbl_80287E74
    subf r28, r30, r31
lbl_80287E74:
    lha r30, 0x22(r5)
    xori r11, r28, 0x2
    lha r31, 0x22(r4)
    srawi r12, r11, 1
    and r11, r11, r28
    subf r11, r11, r12
    subf. r28, r30, r31
    srwi r12, r11, 31
    bge lbl_80287E9C
    subf r28, r31, r30
lbl_80287E9C:
    or r6, r7, r6
    xori r11, r28, 0x2
    or r0, r8, r0
    or r6, r29, r6
    srawi r8, r11, 1
    and r7, r11, r28
    or r0, r9, r0
    subf r7, r7, r8
    or r6, r12, r6
    srwi r7, r7, 31
    or r0, r6, r0
    or. r0, r7, r0
    beq lbl_80287F04
    lhz r7, 0x8fa(r3)
    la r6, lbl_8049CEE0
    addi r0, r7, 0x1
    sth r0, 0x8fa(r3)
    clrlwi r7, r0, 16
    lhz r0, 0x2(r6)
    cmplw r7, r0
    ble lbl_80287F4C
    li r0, 0x0
    li r6, 0x1
    sth r0, 0x8fa(r3)
    sth r0, 0x900(r3)
    b lbl_80287F50
lbl_80287F04:
    la r8, lbl_8049CEE8
    lhz r7, 0x900(r3)
    lhz r6, 0x2(r8)
    addi r7, r7, 0x1
    divw r0, r7, r6
    mullw r0, r0, r6
    subf r0, r0, r7
    sth r0, 0x900(r3)
    clrlwi r7, r0, 16
    lhz r6, 0x2(r8)
    subi r0, r6, 0x1
    cmpw r7, r0
    bne lbl_80287F4C
    lhz r6, 0x8fa(r3)
    cmpwi r6, 0x0
    beq lbl_80287F4C
    subi r0, r6, 0x1
    sth r0, 0x8fa(r3)
lbl_80287F4C:
    li r6, 0x0
lbl_80287F50:
    or r0, r10, r6
    clrlwi r10, r0, 24
lbl_80287F58:
    lbz r0, 0x29(r4)
    extsb. r0, r0
    bne lbl_802884F4
    lbz r0, 0x29(r5)
    extsb. r0, r0
    bne lbl_802884F4
    lwz r6, 0x8b8(r3)
    subi r0, r6, 0x3
    cmplwi r0, 0xc
    bgt lbl_802884F4
    lis r6, jumptable_8036C2F8@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_8036C2F8@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lha r6, 0x2c(r5)
    lha r0, 0x2c(r4)
    subf. r9, r6, r0
    bge lbl_80287FAC
    subf r9, r0, r6
lbl_80287FAC:
    lha r8, 0x2a(r5)
    xori r0, r9, 0xc
    lha r7, 0x2a(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r9, r0, 31
    bge lbl_80287FD4
    subf r11, r7, r8
lbl_80287FD4:
    lha r8, 0x2e(r5)
    xori r0, r11, 0xc
    lha r7, 0x2e(r4)
    srawi r6, r0, 1
    and r0, r0, r11
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r0, r0, 31
    bge lbl_80287FFC
    subf r11, r7, r8
lbl_80287FFC:
    xori r6, r11, 0xc
    or r0, r0, r9
    srawi r7, r6, 1
    and r6, r6, r11
    subf r6, r6, r7
    srwi r6, r6, 31
    or. r0, r6, r0
    beq lbl_80288050
    lhz r7, 0x8fc(r3)
    la r6, lbl_8049CEE0
    addi r0, r7, 0x1
    sth r0, 0x8fc(r3)
    clrlwi r7, r0, 16
    lhz r0, 0x4(r6)
    cmplw r7, r0
    ble lbl_80288098
    li r0, 0x0
    li r6, 0x1
    sth r0, 0x8fc(r3)
    sth r0, 0x902(r3)
    b lbl_8028809C
lbl_80288050:
    la r8, lbl_8049CEE8
    lhz r7, 0x902(r3)
    lhz r6, 0x4(r8)
    addi r7, r7, 0x1
    divw r0, r7, r6
    mullw r0, r0, r6
    subf r0, r0, r7
    sth r0, 0x902(r3)
    clrlwi r7, r0, 16
    lhz r6, 0x4(r8)
    subi r0, r6, 0x1
    cmpw r7, r0
    bne lbl_80288098
    lhz r6, 0x8fc(r3)
    cmpwi r6, 0x0
    beq lbl_80288098
    subi r0, r6, 0x1
    sth r0, 0x8fc(r3)
lbl_80288098:
    li r6, 0x0
lbl_8028809C:
    lbz r7, 0x30(r5)
    or r0, r10, r6
    lbz r3, 0x30(r4)
    clrlwi r10, r0, 24
    extsb r7, r7
    extsb r3, r3
    subf. r6, r7, r3
    bge lbl_802880C0
    subf r6, r3, r7
lbl_802880C0:
    lbz r5, 0x31(r5)
    xori r0, r6, 0x1
    lbz r4, 0x31(r4)
    srawi r3, r0, 1
    and r0, r0, r6
    extsb r5, r5
    extsb r4, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    subf. r6, r5, r4
    or r10, r10, r0
    bge lbl_802880F4
    subf r6, r4, r5
lbl_802880F4:
    xori r0, r6, 0x1
    srawi r3, r0, 1
    and r0, r0, r6
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_802884F4
    lbz r0, 0x8c2(r3)
    cmpwi r0, 0x2
    beq lbl_80288158
    bge lbl_8028812C
    cmpwi r0, 0x1
    bge lbl_80288138
    b lbl_80288158
lbl_8028812C:
    cmpwi r0, 0x4
    bge lbl_80288158
    b lbl_80288148
lbl_80288138:
    li r28, 0x10
    li r0, 0x20
    li r3, 0x8
    b lbl_80288164
lbl_80288148:
    li r28, 0x4
    li r0, 0x4
    li r3, 0x1
    b lbl_80288164
lbl_80288158:
    li r28, 0x1
    li r0, 0x1
    li r3, 0x1
lbl_80288164:
    lha r7, 0x2c(r5)
    lhz r9, 0x2a(r4)
    divw r11, r7, r28
    lhz r7, 0x2a(r5)
    lha r6, 0x2c(r4)
    subf r8, r9, r7
    subf r7, r7, r9
    or r7, r8, r7
    divw r8, r6, r28
    srwi r6, r7, 31
    or r10, r10, r6
    subf. r12, r11, r8
    bge lbl_8028819C
    subf r12, r8, r11
lbl_8028819C:
    lha r7, 0x2e(r5)
    xori r9, r12, 0x1
    lha r6, 0x2e(r4)
    srawi r8, r9, 1
    divw r11, r7, r28
    and r7, r9, r12
    subf r7, r7, r8
    srwi r7, r7, 31
    or r10, r10, r7
    divw r6, r6, r28
    subf. r12, r11, r6
    bge lbl_802881D0
    subf r12, r6, r11
lbl_802881D0:
    lha r7, 0x30(r5)
    xori r9, r12, 0x1
    lha r6, 0x30(r4)
    srawi r8, r9, 1
    divw r11, r7, r0
    and r7, r9, r12
    subf r7, r7, r8
    srwi r7, r7, 31
    or r10, r10, r7
    divw r6, r6, r0
    subf. r12, r11, r6
    bge lbl_80288204
    subf r12, r6, r11
lbl_80288204:
    lha r7, 0x32(r5)
    xori r9, r12, 0x1
    lha r6, 0x32(r4)
    srawi r8, r9, 1
    divw r11, r7, r0
    and r7, r9, r12
    subf r7, r7, r8
    srwi r7, r7, 31
    or r10, r10, r7
    divw r0, r6, r0
    subf. r12, r11, r0
    bge lbl_80288238
    subf r12, r0, r11
lbl_80288238:
    lbz r6, 0x34(r5)
    xori r8, r12, 0x1
    lbz r0, 0x34(r4)
    srawi r7, r8, 1
    divw r9, r6, r3
    and r6, r8, r12
    subf r6, r6, r7
    srwi r6, r6, 31
    or r10, r10, r6
    divw r0, r0, r3
    subf. r8, r9, r0
    bge lbl_8028826C
    subf r8, r0, r9
lbl_8028826C:
    lbz r5, 0x35(r5)
    xori r7, r8, 0x1
    lbz r0, 0x35(r4)
    srawi r6, r7, 1
    divw r5, r5, r3
    and r4, r7, r8
    subf r4, r4, r6
    srwi r4, r4, 31
    or r10, r10, r4
    divw r0, r0, r3
    subf. r4, r5, r0
    bge lbl_802882A0
    subf r4, r0, r5
lbl_802882A0:
    xori r0, r4, 0x1
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_802884F4
    lhz r6, 0x2a(r4)
    lhz r0, 0x2a(r5)
    lbz r8, 0x2c(r5)
    subf r3, r6, r0
    subf r0, r0, r6
    lbz r7, 0x2c(r4)
    or r0, r3, r0
    srwi r0, r0, 31
    subf. r6, r8, r7
    or r10, r10, r0
    bge lbl_802882EC
    subf r6, r7, r8
lbl_802882EC:
    xori r0, r6, 0x1
    lbz r5, 0x2d(r5)
    srawi r3, r0, 1
    lbz r4, 0x2d(r4)
    and r0, r0, r6
    subf r0, r0, r3
    subf. r6, r5, r4
    srwi r0, r0, 31
    or r10, r10, r0
    bge lbl_80288318
    subf r6, r4, r5
lbl_80288318:
    xori r0, r6, 0x1
    srawi r3, r0, 1
    and r0, r0, r6
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    b lbl_802884F4
    lhz r6, 0x2c(r5)
    lhz r0, 0x2c(r4)
    subf. r9, r6, r0
    bge lbl_80288348
    subf r9, r0, r6
lbl_80288348:
    lhz r8, 0x2a(r5)
    xori r0, r9, 0x32
    lhz r7, 0x2a(r4)
    srawi r6, r0, 1
    and r0, r0, r9
    subf r0, r0, r6
    subf. r11, r8, r7
    srwi r9, r0, 31
    bge lbl_80288370
    subf r11, r7, r8
lbl_80288370:
    lhz r8, 0x2e(r5)
    xori r0, r11, 0x32
    lhz r7, 0x2e(r4)
    srawi r6, r0, 1
    and r0, r0, r11
    subf r0, r0, r6
    subf. r12, r8, r7
    srwi r11, r0, 31
    bge lbl_80288398
    subf r12, r7, r8
lbl_80288398:
    lhz r6, 0x30(r5)
    xori r0, r12, 0x32
    lhz r5, 0x30(r4)
    srawi r4, r0, 1
    and r0, r0, r12
    subf r0, r0, r4
    subf. r7, r6, r5
    srwi r0, r0, 31
    bge lbl_802883C0
    subf r7, r5, r6
lbl_802883C0:
    xori r4, r7, 0x32
    or r0, r0, r11
    srawi r5, r4, 1
    and r4, r4, r7
    or r0, r0, r9
    subf r4, r4, r5
    srwi r4, r4, 31
    or. r0, r4, r0
    beq lbl_80288418
    lhz r5, 0x8fc(r3)
    la r4, lbl_8049CEE0
    addi r0, r5, 0x1
    sth r0, 0x8fc(r3)
    clrlwi r5, r0, 16
    lhz r0, 0x4(r4)
    cmplw r5, r0
    ble lbl_80288460
    li r0, 0x0
    li r4, 0x1
    sth r0, 0x8fc(r3)
    sth r0, 0x902(r3)
    b lbl_80288464
lbl_80288418:
    la r6, lbl_8049CEE8
    lhz r5, 0x902(r3)
    lhz r4, 0x4(r6)
    addi r5, r5, 0x1
    divw r0, r5, r4
    mullw r0, r0, r4
    subf r0, r0, r5
    sth r0, 0x902(r3)
    clrlwi r5, r0, 16
    lhz r4, 0x4(r6)
    subi r0, r4, 0x1
    cmpw r5, r0
    bne lbl_80288460
    lhz r4, 0x8fc(r3)
    cmpwi r4, 0x0
    beq lbl_80288460
    subi r0, r4, 0x1
    sth r0, 0x8fc(r3)
lbl_80288460:
    li r4, 0x0
lbl_80288464:
    or r0, r10, r4
    clrlwi r10, r0, 24
    b lbl_802884F4
    lbz r6, 0x46(r4)
    lbz r0, 0x46(r5)
    lhz r7, 0x44(r5)
    subf r3, r6, r0
    subf r0, r0, r6
    lhz r5, 0x44(r4)
    or r0, r3, r0
    srwi r0, r0, 31
    subf. r6, r7, r5
    or r10, r10, r0
    bge lbl_802884A0
    subf r6, r5, r7
lbl_802884A0:
    xori r3, r6, 0x20
    li r0, 0x5
    srawi r5, r3, 1
    and r3, r3, r6
    subf r3, r3, r5
    srwi r3, r3, 31
    or r10, r10, r3
    mtctr r0
lbl_802884C0:
    lhz r3, 0x36(r4)
    lhz r0, 0x2a(r4)
    subf. r5, r3, r0
    bge lbl_802884D4
    subf r5, r0, r3
lbl_802884D4:
    xori r0, r5, 0x20
    addi r4, r4, 0x2
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    or r10, r10, r0
    bdnz lbl_802884C0
lbl_802884F4:
    lwz r31, 0x1c(r1)
    clrlwi r3, r10, 24
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80288510
// ----------------------------------------------------------------------------
asm void fn_80288510() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    slwi r6, r3, 2
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8040C450@l
    li r8, 0x0
    stw r31, 0xc(r1)
    lwzx r7, r5, r6
    lwz r3, 0x8b8(r7)
    subi r0, r3, 0x3
    cmplwi r0, 0x2
    bgt lbl_80288554
    lhz r0, 0x0(r4)
    cmplwi r0, 0x1c10
    bne lbl_80288554
    li r8, 0x1
lbl_80288554:
    subi r0, r3, 0x6
    cmplwi r0, 0x2
    bgt lbl_80288588
    lhz r0, 0x0(r4)
    cmplwi r0, 0x1c10
    beq lbl_80288584
    lhz r0, 0x2a(r4)
    cmplwi r0, 0x1450
    bne lbl_80288588
    lbz r0, 0x29(r4)
    extsb. r0, r0
    bne lbl_80288588
lbl_80288584:
    li r8, 0x1
lbl_80288588:
    lhz r0, 0x912(r7)
    add r3, r0, r8
    clrlwi r0, r3, 16
    sth r3, 0x912(r7)
    cmplwi r0, 0x258
    ble lbl_802885B8
    lwzx r31, r5, r6
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0x911(r31)
    sth r0, 0x912(r31)
    bl OSRestoreInterrupts
lbl_802885B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802885CC
// ----------------------------------------------------------------------------
asm void fn_802885CC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r0, lbl_8049DDAC
    lis r31, lbl_8040C450@ha
    slwi r30, r3, 2
    mr r25, r3
    addi r31, r31, lbl_8040C450@l
    cmplwi r0, 0x5
    lwzx r29, r31, r30
    li r28, 0x0
    bne lbl_80288748
    bl OSDisableInterrupts
    lbz r0, 0x8c8(r29)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r4, r29, r0
    addi r27, r4, 0xa0
    bl OSRestoreInterrupts
    mr r3, r29
    mr r4, r27
    addi r5, r29, 0x40
    bl fn_80287C08
    mr r26, r3
    mr r3, r25
    mr r4, r27
    bl fn_80288510
    cmpwi r26, 0x0
    beq lbl_80288670
    li r28, 0x1
    bl __OSGetSystemTime
    stw r4, 0x8f4(r29)
    mr r4, r27
    li r5, 0x60
    stw r3, 0x8f0(r29)
    addi r3, r29, 0x40
    bl memcpy
    b lbl_80288718
lbl_80288670:
    lbz r0, lbl_8049DDF6
    cmpwi r0, 0x0
    beq lbl_80288718
    bl __OSGetSystemTime
    lwz r6, 0x8f4(r29)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x8f0(r29)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lbz r0, lbl_8049DDF6
    mulli r0, r0, 0x3c
    cmpw r4, r0
    ble lbl_80288718
    lwzx r26, r31, r30
    bl OSDisableInterrupts
    lwz r26, 0x8bc(r26)
    bl OSRestoreInterrupts
    cmpwi r26, -0x1
    beq lbl_80288718
    lwzx r26, r31, r30
    bl OSDisableInterrupts
    lbz r26, 0x8c3(r26)
    bl OSRestoreInterrupts
    mr r3, r26
    bl fn_8029A32C
    cmpwi r3, 0x0
    beq lbl_80288700
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_80288710
lbl_80288700:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_80288710:
    addi r3, r1, 0x8
    bl btm_remove_acl
lbl_80288718:
    lbz r0, 0x69(r29)
    extsb. r0, r0
    beq lbl_8028873C
    cmpwi r0, -0x7
    beq lbl_8028873C
    mr r4, r27
    addi r3, r29, 0x40
    li r5, 0x60
    bl memcpy
lbl_8028873C:
    cmpwi r28, 0x0
    beq lbl_80288748
    bl __VIResetRFIdle
lbl_80288748:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80288760
// ----------------------------------------------------------------------------
asm void fn_80288760() {
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1e0
    bl _savegpr_17
    lis r18, lbl_8036C1E0@ha
    addi r18, r18, lbl_8036C1E0@l
    bl fn_80297944
    cmpwi r3, 0x3
    beq lbl_802887C8
    cmpwi r3, 0x2
    bne lbl_80289124
    lwz r0, lbl_8049DDE4
    cmpwi r0, 0x0
    bne lbl_80289124
    li r4, 0x1
    li r0, 0x32
    lis r3, fn_8028A2F8@ha
    stw r4, lbl_8049DDE4
    addi r3, r3, fn_8028A2F8@l
    stw r0, lbl_8049DDBC
    bl fn_80297E50
    lis r3, fn_8028A7AC@ha
    addi r3, r3, fn_8028A7AC@l
    bl fn_80297DF4
    b lbl_80289124
lbl_802887C8:
    lwz r17, lbl_8049CEDC
    cmpwi r17, 0x0
    blt lbl_80288818
    lwz r3, lbl_8049DDBC
    subic. r0, r3, 0x1
    stw r0, lbl_8049DDBC
    bgt lbl_80288810
    addi r3, r18, 0x14c
    opword 0x4CC63182
    bl fn_80294360
    bl BTA_DmSendHciReset
    lis r3, lbl_8040C420@ha
    addi r3, r3, lbl_8040C420@l
    bl OSCancelAlarm
    li r3, 0x0
    bl fn_80297DF4
    mr r3, r17
    bl fn_80297724
lbl_80288810:
    li r0, 0x1
    b lbl_8028881C
lbl_80288818:
    li r0, 0x0
lbl_8028881C:
    cmpwi r0, 0x0
    bne lbl_80289124
    lhz r0, lbl_8049DDAE
    cmplwi r0, 0xea60
    bne lbl_8028888C
    lis r17, 0x8000
    li r4, 0x1
    addi r3, r17, 0x31a2
    bl DCInvalidateRange
    addi r3, r18, 0x160
    opword 0x4CC63182
    bl fn_80294360
    lbz r4, 0x31a2(r17)
    addi r3, r18, 0x188
    opword 0x4CC63182
    bl fn_80294360
    lbz r3, lbl_8049DDEC
    lbz r0, 0x31a2(r17)
    extsb r3, r3
    cmpw r3, r0
    beq lbl_8028888C
    bl OSDisableInterrupts
    lbz r0, 0x31a2(r17)
    stb r0, lbl_8049DDEC
    bl OSRestoreInterrupts
    lbz r0, lbl_8049DDEC
    extsb r3, r0
    bl GKI_add_to_timer_list
lbl_8028888C:
    bl SCCheckStatus
    cmpwi r3, 0x0
    bne lbl_8028892C
    bl fn_8029A548
    lbz r0, lbl_8049DDEE
    cmpwi r0, 0x0
    beq lbl_8028892C
    bl SCGetBtDpdSensibility
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bge lbl_802888BC
    li r0, 0x1
lbl_802888BC:
    cmplwi r0, 0x5
    ble lbl_802888C8
    li r0, 0x5
lbl_802888C8:
    stb r0, lbl_8049DDF5
    bl SCGetWpadSensorBarPosition
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, lbl_8049DDF4
    bl SCGetWpadMotorMode
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, lbl_8049DDF0
    bl SCGetWpadSpeakerVolume
    clrlwi. r0, r3, 24
    mr r4, r3
    bne lbl_80288910
    li r4, 0x0
lbl_80288910:
    clrlwi r0, r3, 24
    cmplwi r0, 0x7f
    blt lbl_80288920
    li r4, 0x7f
lbl_80288920:
    li r0, 0x0
    stb r4, lbl_8049DDEF
    stb r0, lbl_8049DDEE
lbl_8028892C:
    lis r23, lbl_8040C450@ha
    li r20, 0x0
    addi r23, r23, lbl_8040C450@l
    la r22, lbl_8049DDB0
    la r21, lbl_8049DDB4
    lis r28, 0x8000
    li r29, 0x0
    li r30, 0x10
    li r31, 0x1
lbl_80288950:
    lwz r24, 0x0(r23)
    lwz r0, 0x8d8(r24)
    cmpwi r0, 0x0
    beq lbl_80289070
    lbz r0, 0x0(r22)
    li r26, 0x0
    cmplwi r0, 0x5
    bne lbl_80288C60
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r24)
    lbz r0, 0x5ed(r24)
    subf r0, r4, r0
    extsb. r17, r0
    bge lbl_80288994
    lwz r0, 0x5f4(r24)
    add r0, r17, r0
    extsb r17, r0
lbl_80288994:
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    bne lbl_802889A8
    li r0, 0x0
    b lbl_802889DC
lbl_802889A8:
    bl OSDisableInterrupts
    lbz r0, 0x5ec(r24)
    mr r17, r3
    lwz r4, 0x5f0(r24)
    addi r3, r1, 0x108
    extsb r0, r0
    li r5, 0x30
    mulli r0, r0, 0x30
    add r4, r4, r0
    bl memcpy
    mr r3, r17
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_802889DC:
    cmpwi r0, 0x0
    beq lbl_80288C60
    lwz r0, 0x108(r1)
    cmplwi r0, 0x12
    beq lbl_802889FC
    lwz r0, 0x840(r24)
    cmpwi r0, 0x0
    beq lbl_80288C60
lbl_802889FC:
    lwz r17, 0x108(r1)
    lwz r12, 0x10c(r1)
    lwz r11, 0x110(r1)
    lwz r10, 0x114(r1)
    lwz r9, 0x118(r1)
    lwz r8, 0x11c(r1)
    lwz r7, 0x120(r1)
    lwz r6, 0x124(r1)
    lwz r5, 0x128(r1)
    lwz r4, 0x12c(r1)
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r17, 0x138(r1)
    lwz r27, 0x0(r23)
    stw r12, 0x13c(r1)
    stw r11, 0x140(r1)
    stw r10, 0x144(r1)
    stw r9, 0x148(r1)
    stw r8, 0x14c(r1)
    stw r7, 0x150(r1)
    stw r6, 0x154(r1)
    stw r5, 0x158(r1)
    stw r4, 0x15c(r1)
    stw r3, 0x160(r1)
    stw r0, 0x164(r1)
    bl OSDisableInterrupts
    lbz r0, 0x8c0(r27)
    mr r17, r3
    cmpwi r0, 0x0
    beq lbl_80288A7C
    li r25, -0x2
    b lbl_80288A8C
lbl_80288A7C:
    lwz r18, 0x0(r23)
    bl OSDisableInterrupts
    lwz r25, 0x8bc(r18)
    bl OSRestoreInterrupts
lbl_80288A8C:
    mr r3, r17
    bl OSRestoreInterrupts
    cmpwi r25, 0x0
    bne lbl_80288B08
    lwz r19, 0x138(r1)
    mr r3, r20
    lwz r18, 0x13c(r1)
    addi r4, r1, 0x168
    lwz r17, 0x140(r1)
    lwz r12, 0x144(r1)
    lwz r11, 0x148(r1)
    lwz r10, 0x14c(r1)
    lwz r9, 0x150(r1)
    lwz r8, 0x154(r1)
    lwz r7, 0x158(r1)
    lwz r6, 0x15c(r1)
    lwz r5, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r19, 0x168(r1)
    stw r18, 0x16c(r1)
    stw r17, 0x170(r1)
    stw r12, 0x174(r1)
    stw r11, 0x178(r1)
    stw r10, 0x17c(r1)
    stw r9, 0x180(r1)
    stw r8, 0x184(r1)
    stw r7, 0x188(r1)
    stw r6, 0x18c(r1)
    stw r5, 0x190(r1)
    stw r0, 0x194(r1)
    bl fn_802878C4
lbl_80288B08:
    cmpwi r25, -0x2
    bne lbl_80288BB8
    bl __OSGetSystemTime
    lwz r6, 0x90c(r27)
    li r5, 0x0
    lwz r0, 0xf8(r28)
    subfc r4, r6, r4
    lwz r7, 0x908(r27)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    cmpwi r4, 0x1
    ble lbl_80288BB8
    lbz r0, lbl_8049DDF6
    cmpwi r0, 0x0
    beq lbl_80288BB8
    bl __OSGetSystemTime
    stw r4, 0x90c(r27)
    stw r3, 0x908(r27)
    lwz r17, 0x0(r23)
    bl OSDisableInterrupts
    lwz r17, 0x8bc(r17)
    bl OSRestoreInterrupts
    cmpwi r17, -0x1
    beq lbl_80288BB8
    lwz r17, 0x0(r23)
    bl OSDisableInterrupts
    lbz r17, 0x8c3(r17)
    bl OSRestoreInterrupts
    mr r3, r17
    bl fn_8029A32C
    cmpwi r3, 0x0
    beq lbl_80288BA0
    mr r4, r3
    addi r3, r1, 0x10
    li r5, 0x6
    bl memcpy
    b lbl_80288BB0
lbl_80288BA0:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_80288BB0:
    addi r3, r1, 0x10
    bl btm_remove_acl
lbl_80288BB8:
    cmpwi r25, 0x0
    bne lbl_80288C60
    bl OSDisableInterrupts
    mr r27, r3
    bl OSDisableInterrupts
    lbz r4, 0x5ec(r24)
    lbz r0, 0x5ed(r24)
    subf r0, r4, r0
    extsb. r17, r0
    bge lbl_80288BEC
    lwz r0, 0x5f4(r24)
    add r0, r17, r0
    extsb r17, r0
lbl_80288BEC:
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    bne lbl_80288C04
    mr r3, r27
    bl OSRestoreInterrupts
    b lbl_80288C58
lbl_80288C04:
    lbz r0, 0x5ec(r24)
    li r4, 0x0
    lwz r3, 0x5f0(r24)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x5ec(r24)
    mr r3, r27
    lwz r4, 0x5f4(r24)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x5ec(r24)
    bl OSRestoreInterrupts
lbl_80288C58:
    li r26, 0x1
    stb r29, 0x0(r22)
lbl_80288C60:
    lbz r3, 0x0(r22)
    cmplwi r3, 0x5
    addi r0, r3, 0x1
    bne lbl_80288C74
    mr r0, r3
lbl_80288C74:
    cmpwi r26, 0x0
    stb r0, 0x0(r22)
    lwz r25, 0x0(r23)
    beq lbl_80288C8C
    li r0, 0x1
    b lbl_80288F68
lbl_80288C8C:
    bl OSDisableInterrupts
    lbz r4, 0x160(r25)
    lbz r0, 0x161(r25)
    subf r0, r4, r0
    extsb. r17, r0
    bge lbl_80288CB0
    lwz r0, 0x168(r25)
    add r0, r17, r0
    extsb r17, r0
lbl_80288CB0:
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    bne lbl_80288CC4
    li r0, 0x0
    b lbl_80288CF8
lbl_80288CC4:
    bl OSDisableInterrupts
    lbz r0, 0x160(r25)
    mr r17, r3
    lwz r4, 0x164(r25)
    addi r3, r1, 0x78
    extsb r0, r0
    li r5, 0x30
    mulli r0, r0, 0x30
    add r4, r4, r0
    bl memcpy
    mr r3, r17
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_80288CF8:
    cmpwi r0, 0x0
    beq lbl_80288F64
    lwz r17, 0x78(r1)
    lwz r12, 0x7c(r1)
    lwz r11, 0x80(r1)
    lwz r10, 0x84(r1)
    lwz r9, 0x88(r1)
    lwz r8, 0x8c(r1)
    lwz r7, 0x90(r1)
    lwz r6, 0x94(r1)
    lwz r5, 0x98(r1)
    lwz r4, 0x9c(r1)
    lwz r3, 0xa0(r1)
    lwz r0, 0xa4(r1)
    stw r17, 0xa8(r1)
    lwz r27, 0x0(r23)
    stw r12, 0xac(r1)
    stw r11, 0xb0(r1)
    stw r10, 0xb4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r5, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    bl OSDisableInterrupts
    lbz r0, 0x8c0(r27)
    mr r17, r3
    cmpwi r0, 0x0
    beq lbl_80288D80
    li r24, -0x2
    b lbl_80288D90
lbl_80288D80:
    lwz r18, 0x0(r23)
    bl OSDisableInterrupts
    lwz r24, 0x8bc(r18)
    bl OSRestoreInterrupts
lbl_80288D90:
    mr r3, r17
    bl OSRestoreInterrupts
    cmpwi r24, 0x0
    bne lbl_80288E0C
    lwz r17, 0xa8(r1)
    mr r3, r20
    lwz r18, 0xac(r1)
    addi r4, r1, 0xd8
    lwz r19, 0xb0(r1)
    lwz r12, 0xb4(r1)
    lwz r11, 0xb8(r1)
    lwz r10, 0xbc(r1)
    lwz r9, 0xc0(r1)
    lwz r8, 0xc4(r1)
    lwz r7, 0xc8(r1)
    lwz r6, 0xcc(r1)
    lwz r5, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r17, 0xd8(r1)
    stw r18, 0xdc(r1)
    stw r19, 0xe0(r1)
    stw r12, 0xe4(r1)
    stw r11, 0xe8(r1)
    stw r10, 0xec(r1)
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r7, 0xf8(r1)
    stw r6, 0xfc(r1)
    stw r5, 0x100(r1)
    stw r0, 0x104(r1)
    bl fn_802878C4
lbl_80288E0C:
    cmpwi r24, -0x2
    bne lbl_80288EBC
    bl __OSGetSystemTime
    lwz r6, 0x90c(r27)
    li r5, 0x0
    lwz r0, 0xf8(r28)
    subfc r4, r6, r4
    lwz r7, 0x908(r27)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    cmpwi r4, 0x1
    ble lbl_80288EBC
    lbz r0, lbl_8049DDF6
    cmpwi r0, 0x0
    beq lbl_80288EBC
    bl __OSGetSystemTime
    stw r4, 0x90c(r27)
    stw r3, 0x908(r27)
    lwz r17, 0x0(r23)
    bl OSDisableInterrupts
    lwz r17, 0x8bc(r17)
    bl OSRestoreInterrupts
    cmpwi r17, -0x1
    beq lbl_80288EBC
    lwz r17, 0x0(r23)
    bl OSDisableInterrupts
    lbz r17, 0x8c3(r17)
    bl OSRestoreInterrupts
    mr r3, r17
    bl fn_8029A32C
    cmpwi r3, 0x0
    beq lbl_80288EA4
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_80288EB4
lbl_80288EA4:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_80288EB4:
    addi r3, r1, 0x8
    bl btm_remove_acl
lbl_80288EBC:
    cmpwi r24, 0x0
    bne lbl_80288F64
    bl OSDisableInterrupts
    mr r27, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r25)
    lbz r0, 0x161(r25)
    subf r0, r4, r0
    extsb. r17, r0
    bge lbl_80288EF0
    lwz r0, 0x168(r25)
    add r0, r17, r0
    extsb r17, r0
lbl_80288EF0:
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    bne lbl_80288F08
    mr r3, r27
    bl OSRestoreInterrupts
    b lbl_80288F5C
lbl_80288F08:
    lbz r0, 0x160(r25)
    li r4, 0x0
    lwz r3, 0x164(r25)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x160(r25)
    mr r3, r27
    lwz r4, 0x168(r25)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x160(r25)
    bl OSRestoreInterrupts
lbl_80288F5C:
    li r0, 0x1
    b lbl_80288F68
lbl_80288F64:
    li r0, 0x0
lbl_80288F68:
    or r0, r26, r0
    cmpwi r0, 0x1
    beq lbl_80288FA8
    lwz r24, 0x0(r23)
    bl OSDisableInterrupts
    lbz r4, 0x160(r24)
    lbz r0, 0x161(r24)
    subf r0, r4, r0
    extsb. r17, r0
    bge lbl_80288F9C
    lwz r0, 0x168(r24)
    add r0, r17, r0
    extsb r17, r0
lbl_80288F9C:
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    ble lbl_80288FB4
lbl_80288FA8:
    lwz r3, 0x0(r23)
    stw r29, 0x8d0(r3)
    b lbl_8028903C
lbl_80288FB4:
    lbz r0, 0x0(r21)
    cmplwi r0, 0x5
    bne lbl_8028903C
    sth r31, 0x32(r1)
    mr r3, r20
    lwz r5, 0x0(r23)
    addi r4, r1, 0x48
    stb r29, 0x1c(r1)
    lwz r12, 0x20(r1)
    stw r29, 0x8d0(r5)
    lwz r24, 0x1c(r1)
    lwz r11, 0x24(r1)
    lwz r10, 0x28(r1)
    lwz r9, 0x2c(r1)
    lwz r8, 0x30(r1)
    lwz r7, 0x34(r1)
    lwz r6, 0x38(r1)
    lwz r5, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r30, 0x18(r1)
    stw r29, 0x44(r1)
    stw r30, 0x48(r1)
    stw r24, 0x4c(r1)
    stw r12, 0x50(r1)
    stw r11, 0x54(r1)
    stw r10, 0x58(r1)
    stw r9, 0x5c(r1)
    stw r8, 0x60(r1)
    stw r7, 0x64(r1)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r29, 0x74(r1)
    bl fn_802878C4
lbl_8028903C:
    lwz r3, 0x0(r23)
    lwz r0, 0x8d0(r3)
    cmpwi r0, 0x0
    beq lbl_80289058
    lbz r3, 0x0(r21)
    addi r0, r3, 0x1
    b lbl_8028905C
lbl_80289058:
    li r0, 0x0
lbl_8028905C:
    stb r0, 0x0(r21)
    mr r3, r20
    bl fn_802885CC
    mr r3, r20
    bl fn_80287A9C
lbl_80289070:
    lwz r4, 0x0(r23)
    lbz r0, 0x991(r4)
    cmpwi r0, 0x0
    beq lbl_8028909C
    lha r3, 0x992(r4)
    subi r0, r3, 0x1
    cmpwi r3, 0x0
    sth r0, 0x992(r4)
    bge lbl_8028909C
    lwz r3, 0x0(r23)
    stb r29, 0x991(r3)
lbl_8028909C:
    addi r20, r20, 0x1
    addi r22, r22, 0x1
    cmpwi r20, 0x4
    addi r21, r21, 0x1
    addi r23, r23, 0x4
    blt lbl_80288950
    lhz r5, lbl_8049DDAA
    lis r3, 0x1
    subi r0, r3, 0x15a0
    lbz r8, lbl_8049DDAC
    subi r4, r5, 0xa
    subfic r3, r5, 0xa
    nor r3, r4, r3
    lhz r9, lbl_8049DDAE
    srawi r7, r3, 31
    addi r6, r5, 0x1
    clrlwi r0, r0, 16
    subi r4, r8, 0x5
    subfic r3, r8, 0x5
    andc r6, r6, r7
    nor r4, r4, r3
    sth r6, lbl_8049DDAA
    subf r3, r0, r9
    subf r0, r9, r0
    srawi r5, r4, 31
    addi r4, r8, 0x1
    nor r3, r3, r0
    addi r0, r9, 0x1
    srawi r3, r3, 31
    andc r4, r4, r5
    andc r0, r0, r3
    stb r4, lbl_8049DDAC
    sth r0, lbl_8049DDAE
    bl BTA_HhGetAclQueueInfo
lbl_80289124:
    addi r11, r1, 0x1e0
    bl _restgpr_17
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

// ----------------------------------------------------------------------------
// fn_8028913C
// ----------------------------------------------------------------------------
asm void fn_8028913C() {
    nofralloc
    lis r8, lbl_8040C460@ha
    lis r7, fn_80288760@ha
    addi r8, r8, lbl_8040C460@l
    li r5, 0x0
    addi r7, r7, fn_80288760@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b OSSwitchFiberEx
}

// ----------------------------------------------------------------------------
// fn_8028915C
// ----------------------------------------------------------------------------
asm void fn_8028915C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r4, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    li r28, 0x0
    lwzx r27, r4, r0
    li r29, -0x1
    li r30, 0xfd
    li r31, 0xc
    stw r28, 0x850(r27)
    mr r26, r3
    stw r28, 0x8d4(r27)
    stw r28, 0x89c(r27)
    stw r28, 0x8a0(r27)
    stw r28, 0x8a8(r27)
    stw r28, 0x8ac(r27)
    stw r28, 0x8b0(r27)
    stw r28, 0x8b4(r27)
    stw r28, 0x8b8(r27)
    stw r29, 0x8bc(r27)
    stb r30, 0x8c1(r27)
    stb r28, 0x8c2(r27)
    stb r28, 0x911(r27)
    sth r28, 0x912(r27)
    stb r28, 0x8c0(r27)
    stb r31, 0x8ca(r27)
    stb r28, 0x8cb(r27)
    stb r28, 0x8cc(r27)
    sth r28, 0x8f8(r27)
    sth r28, 0x8fe(r27)
    sth r28, 0x8fa(r27)
    sth r28, 0x900(r27)
    sth r28, 0x8fc(r27)
    sth r28, 0x902(r27)
    bl __OSGetSystemTime
    stw r4, 0x8f4(r27)
    stw r3, 0x8f0(r27)
    bl __OSGetSystemTime
    stw r4, 0x90c(r27)
    li r6, 0x1
    li r0, 0x4
    li r4, 0x0
    stw r3, 0x908(r27)
    addi r3, r27, 0x838
    li r5, 0x18
    stb r28, 0x910(r27)
    stb r28, 0x8c9(r27)
    stw r28, 0x8c4(r27)
    stw r28, 0x974(r27)
    stw r28, 0x978(r27)
    sth r28, 0x980(r27)
    stw r28, 0x97c(r27)
    stb r29, 0x8c3(r27)
    stw r28, 0x8d8(r27)
    stw r28, 0x8dc(r27)
    stw r28, 0x8e0(r27)
    stb r6, 0x8cd(r27)
    stb r28, 0x8ce(r27)
    stb r28, 0x8cf(r27)
    stb r28, 0x982(r27)
    stb r28, 0x983(r27)
    sth r28, 0x984(r27)
    stb r6, 0x986(r27)
    stb r28, 0x98c(r27)
    stw r28, 0x988(r27)
    stb r28, 0x98e(r27)
    stb r0, 0x98f(r27)
    stb r30, 0x990(r27)
    stb r28, 0x991(r27)
    sth r28, 0x992(r27)
    bl memset
    addi r3, r27, 0x934
    li r4, 0x0
    li r5, 0x40
    bl memset
    addi r3, r27, 0x854
    li r4, 0x0
    li r5, 0x2e
    bl memset
    addi r3, r27, 0x882
    li r4, 0x0
    li r5, 0x1a
    bl memset
    addi r3, r27, 0x914
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r27, 0x924
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r3, r27, 0x92c
    li r4, 0x0
    li r5, 0x8
    bl memset
    mr r3, r27
    li r4, 0x0
    li r5, 0x38
    bl memset
    stb r28, 0x8c8(r27)
    addi r3, r27, 0xa0
    li r4, 0x0
    li r5, 0xc0
    bl memset
    stb r29, 0xc9(r27)
    addi r3, r27, 0x40
    addi r4, r27, 0xa0
    li r5, 0x60
    stb r29, 0x129(r27)
    bl memcpy
    stw r29, 0x38(r27)
    addi r4, r27, 0x16c
    li r3, 0x18
    addi r0, r27, 0x5f8
    stw r29, 0x3c(r27)
    stw r4, 0x164(r27)
    stw r3, 0x168(r27)
    stw r0, 0x5f0(r27)
    stw r31, 0x5f4(r27)
    bl OSDisableInterrupts
    stb r28, 0x160(r27)
    mr r29, r3
    li r4, 0x0
    stb r28, 0x161(r27)
    lwz r0, 0x168(r27)
    lwz r3, 0x164(r27)
    mulli r5, r0, 0x30
    bl memset
    mr r3, r29
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    stb r28, 0x5ec(r27)
    mr r29, r3
    li r4, 0x0
    stb r28, 0x5ed(r27)
    lwz r0, 0x5f4(r27)
    lwz r3, 0x5f0(r27)
    mulli r5, r0, 0x30
    bl memset
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r26
    bl fn_8029419C
    la r4, lbl_8049DDB0
    la r3, lbl_8049DDB4
    stbx r28, r4, r26
    addi r11, r1, 0x20
    stbx r28, r3, r26
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802893D0
// ----------------------------------------------------------------------------
asm void fn_802893D0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r31, lbl_8040C420@ha
    addi r31, r31, lbl_8040C420@l
    bl OSDisableInterrupts
    lis r4, 0xcd00
    lwz r0, 0xc0(r4)
    ori r0, r0, 0x100
    stw r0, 0xc0(r4)
    bl OSRestoreInterrupts
    addi r4, r31, 0x1040
    li r0, -0x1
    stb r0, 0x0(r4)
    lis r3, lbl_8036C380@ha
    addi r3, r3, lbl_8036C380@l
    stb r0, 0x1(r4)
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
    stb r0, 0x4(r4)
    stb r0, 0x5(r4)
    stb r0, 0x6(r4)
    stb r0, 0x7(r4)
    stb r0, 0x8(r4)
    stb r0, 0x9(r4)
    stb r0, 0xa(r4)
    stb r0, 0xb(r4)
    stb r0, 0xc(r4)
    stb r0, 0xd(r4)
    stb r0, 0xe(r4)
    stb r0, 0xf(r4)
    opword 0x4CC63182
    bl fn_80294360
    addi r29, r31, 0x1060
    addi r28, r31, 0x30
    li r24, 0x0
    la r27, lbl_8049DDE8
    la r26, lbl_8049DDB0
    la r25, lbl_8049DDB4
    li r30, 0x0
lbl_80289478:
    stw r29, 0x0(r28)
    mr r3, r24
    stb r30, 0x0(r27)
    lwz r4, 0x0(r28)
    stw r30, 0x8a4(r4)
    bl fn_8028915C
    addi r3, r29, 0x8e4
    bl OSInitThreadQueue
    addi r24, r24, 0x1
    stb r30, 0x0(r26)
    cmpwi r24, 0x4
    addi r28, r28, 0x4
    stb r30, 0x0(r25)
    addi r27, r27, 0x1
    addi r26, r26, 0x1
    addi r25, r25, 0x1
    addi r29, r29, 0x9c0
    blt lbl_80289478
    li r0, 0x5
    stb r0, lbl_8049DDF6
    bl fn_80313ECC
    stw r3, lbl_8049DDF8
    bl fn_80313F50
    stb r3, lbl_8049DDFC
    bl SCGetBtDpdSensibility
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bge lbl_802894EC
    li r0, 0x1
lbl_802894EC:
    cmplwi r0, 0x5
    ble lbl_802894F8
    li r0, 0x5
lbl_802894F8:
    stb r0, lbl_8049DDF5
    bl SCGetWpadSensorBarPosition
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, lbl_8049DDF4
    bl SCGetWpadMotorMode
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, lbl_8049DDF0
    bl SCGetWpadSpeakerVolume
    clrlwi. r0, r3, 24
    mr r6, r3
    bne lbl_80289540
    li r6, 0x0
lbl_80289540:
    clrlwi r0, r3, 24
    cmplwi r0, 0x7f
    blt lbl_80289550
    li r6, 0x7f
lbl_80289550:
    li r5, 0x0
    li r4, 0x1
    li r0, -0x1
    stb r6, lbl_8049DDEF
    lwz r3, lbl_8049CED8
    sth r5, lbl_8049DDAA
    stb r5, lbl_8049DDAC
    sth r5, lbl_8049DDAE
    stb r5, lbl_8049DDED
    stb r4, lbl_8049DDEE
    stb r0, lbl_8049DDEC
    stw r5, lbl_8049DDE0
    bl OSRegisterVersion
    lwz r12, lbl_8049DDC0
    cmpwi r12, 0x0
    beq lbl_80289598
    mtctr r12
    bctrl
lbl_80289598:
    lwz r12, lbl_8049DDC4
    cmpwi r12, 0x0
    beq lbl_802895AC
    mtctr r12
    bctrl
lbl_802895AC:
    lwz r12, lbl_8049DDC8
    cmpwi r12, 0x0
    beq lbl_802895C0
    mtctr r12
    bctrl
lbl_802895C0:
    lwz r12, lbl_8049DDCC
    cmpwi r12, 0x0
    beq lbl_802895D4
    mtctr r12
    bctrl
lbl_802895D4:
    addi r3, r31, 0x0
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_8028913C@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_8028913C@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x0
    li r7, 0x0
    srwi r8, r0, 6
    bl OSSetPeriodicAlarm
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80289630
// ----------------------------------------------------------------------------
asm void fn_80289630() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    lbz r0, lbl_8049DDA8
    stw r31, lbl_8049DDB8
    cmpwi r0, 0x0
    bne lbl_80289664
    lis r3, lbl_8036C298@ha
    addi r3, r3, lbl_8036C298@l
    bl OSRegisterShutdownFunction
    stb r31, lbl_8049DDA8
lbl_80289664:
    bl fn_802975B8
    cmpwi r3, 0x0
    beq lbl_8028968C
    li r4, 0x0
    li r3, -0x1
    li r0, 0x32
    stw r4, lbl_8049DDE4
    stw r3, lbl_8049CEDC
    stw r0, lbl_8049DDBC
    bl fn_802893D0
lbl_8028968C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802896A0
// ----------------------------------------------------------------------------
asm void fn_802896A0() {
    nofralloc
    b GKI_init_timer_list
}

// ----------------------------------------------------------------------------
// fn_802896A4
// ----------------------------------------------------------------------------
asm void fn_802896A4() {
    nofralloc
    b fn_80297C80
}

// ----------------------------------------------------------------------------
// fn_802896A8
// ----------------------------------------------------------------------------
asm void fn_802896A8() {
    nofralloc
    b fn_80297A34
}

// ----------------------------------------------------------------------------
// fn_802896AC
// ----------------------------------------------------------------------------
asm void fn_802896AC() {
    nofralloc
    b fn_802976D4
}

// ----------------------------------------------------------------------------
// fn_802896B0
// ----------------------------------------------------------------------------
asm void fn_802896B0() {
    nofralloc
    b fn_80297720
}

// ----------------------------------------------------------------------------
// fn_802896B4
// ----------------------------------------------------------------------------
asm void fn_802896B4() {
    nofralloc
    b fn_80297944
}

// ----------------------------------------------------------------------------
// fn_802896B8
// ----------------------------------------------------------------------------
asm void fn_802896B8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lbz r31, 0x983(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802896FC
// ----------------------------------------------------------------------------
asm void fn_802896FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r31, lbl_8049DDF4
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80289730
// ----------------------------------------------------------------------------
asm void fn_80289730() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8040C450@ha
    addi r31, r31, lbl_8040C450@l
    stw r30, 0x18(r1)
    slwi r30, r3, 2
    stw r29, 0x14(r1)
    lwzx r29, r31, r30
    bne lbl_80289780
    li r0, 0x1
    stw r0, 0x8dc(r29)
    lwz r12, 0x8a4(r29)
    cmpwi r12, 0x0
    beq lbl_802897E0
    mtctr r12
    bctrl
    b lbl_802897E0
lbl_80289780:
    bl OSDisableInterrupts
    lwz r29, 0x8bc(r29)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_802897E0
    lwzx r30, r31, r30
    bl OSDisableInterrupts
    lbz r30, 0x8c3(r30)
    bl OSRestoreInterrupts
    mr r3, r30
    bl fn_8029A32C
    cmpwi r3, 0x0
    beq lbl_802897C8
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_802897D8
lbl_802897C8:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_802897D8:
    addi r3, r1, 0x8
    bl btm_remove_acl
lbl_802897E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802897FC
// ----------------------------------------------------------------------------
asm void fn_802897FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8040C450@ha
    addi r31, r31, lbl_8040C450@l
    stw r30, 0x18(r1)
    slwi r30, r3, 2
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwzx r28, r31, r30
    beq lbl_802898C4
    bl OSDisableInterrupts
    li r0, 0x0
    mr r29, r3
    stb r0, 0x160(r28)
    li r4, 0x0
    stb r0, 0x161(r28)
    lwz r0, 0x168(r28)
    lwz r3, 0x164(r28)
    mulli r5, r0, 0x30
    bl memset
    mr r3, r29
    bl OSRestoreInterrupts
    lwzx r29, r31, r30
    bl OSDisableInterrupts
    lwz r29, 0x8bc(r29)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_802898C4
    lwzx r29, r31, r30
    bl OSDisableInterrupts
    lbz r29, 0x8c3(r29)
    bl OSRestoreInterrupts
    mr r3, r29
    bl fn_8029A32C
    cmpwi r3, 0x0
    beq lbl_802898AC
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_802898BC
lbl_802898AC:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
lbl_802898BC:
    addi r3, r1, 0x8
    bl btm_remove_acl
lbl_802898C4:
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
// fn_802898E4
// ----------------------------------------------------------------------------
asm void fn_802898E4() {
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    addi r11, r1, 0x280
    bl _savegpr_26
    lis r5, lbl_8040C450@ha
    cmpwi r4, -0x1
    slwi r0, r3, 2
    mr r27, r3
    addi r5, r5, lbl_8040C450@l
    mr r26, r4
    lwzx r29, r5, r0
    beq lbl_8028A1C0
    bl OSDisableInterrupts
    cntlzw r4, r26
    li r0, 0x0
    srwi r4, r4, 5
    stw r4, 0x8e0(r29)
    stw r0, 0x8bc(r29)
    bl OSRestoreInterrupts
    cmpwi r26, 0x0
    li r31, 0x2a
    bne lbl_80289944
    li r31, 0x14
lbl_80289944:
    cntlzw r3, r26
    lwz r0, 0x8e0(r29)
    extrwi r4, r3, 1, 26
    neg r5, r4
    lis r3, lbl_8036C38C@ha
    cmpwi cr6, r0, 0x0
    lis r4, lbl_8036C3C4@ha
    andi. r28, r5, 0x176c
    addi r3, r3, lbl_8036C38C@l
    addi r4, r4, lbl_8036C3C4@l
    beq cr6, lbl_80289974
    la r4, lbl_8049CEF0
lbl_80289974:
    opword 0x4CC63182
    bl fn_80294360
    lbz r0, 0x8c1(r29)
    li r3, 0x1
    cmplwi r0, 0x3
    beq lbl_80289990
    slw r3, r3, r27
lbl_80289990:
    lis r30, fn_802897FC@ha
    lbz r5, 0x98e(r29)
    clrlwi r27, r3, 24
    addi r3, r29, 0x160
    addi r6, r30, fn_802897FC@l
    li r4, 0x0
    bl fn_8028E678
    li r3, 0x1
    li r0, 0x0
    sth r3, 0x21a(r1)
    addi r12, r30, fn_802897FC@l
    li r30, 0x1a
    lwz r10, 0x208(r1)
    stb r0, 0x204(r1)
    lwz r9, 0x20c(r1)
    lwz r11, 0x204(r1)
    lwz r8, 0x210(r1)
    lwz r7, 0x214(r1)
    lwz r6, 0x218(r1)
    lwz r5, 0x21c(r1)
    lwz r4, 0x220(r1)
    lwz r3, 0x224(r1)
    lwz r0, 0x228(r1)
    stw r30, 0x200(r1)
    stw r12, 0x22c(r1)
    stw r30, 0x230(r1)
    stw r11, 0x234(r1)
    stw r10, 0x238(r1)
    stw r9, 0x23c(r1)
    stw r8, 0x240(r1)
    stw r7, 0x244(r1)
    stw r6, 0x248(r1)
    stw r5, 0x24c(r1)
    stw r4, 0x250(r1)
    stw r3, 0x254(r1)
    stw r0, 0x258(r1)
    stw r12, 0x25c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_80289A50
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_80289A50:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_80289A70
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_80289AE4
lbl_80289A70:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x230
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_80289AE4:
    clrlslwi r0, r27, 28, 4
    li r3, 0x1
    sth r3, 0x1ba(r1)
    li r27, 0x11
    lwz r10, 0x1a8(r1)
    lis r12, fn_802897FC@ha
    stb r0, 0x1a4(r1)
    addi r12, r12, fn_802897FC@l
    lwz r9, 0x1ac(r1)
    lwz r11, 0x1a4(r1)
    lwz r8, 0x1b0(r1)
    lwz r7, 0x1b4(r1)
    lwz r6, 0x1b8(r1)
    lwz r5, 0x1bc(r1)
    lwz r4, 0x1c0(r1)
    lwz r3, 0x1c4(r1)
    lwz r0, 0x1c8(r1)
    stw r27, 0x1a0(r1)
    stw r12, 0x1cc(r1)
    stw r27, 0x1d0(r1)
    stw r11, 0x1d4(r1)
    stw r10, 0x1d8(r1)
    stw r9, 0x1dc(r1)
    stw r8, 0x1e0(r1)
    stw r7, 0x1e4(r1)
    stw r6, 0x1e8(r1)
    stw r5, 0x1ec(r1)
    stw r4, 0x1f0(r1)
    stw r3, 0x1f4(r1)
    stw r0, 0x1f8(r1)
    stw r12, 0x1fc(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_80289B8C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_80289B8C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_80289BAC
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_80289C20
lbl_80289BAC:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x1d0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_80289C20:
    lis r6, fn_802897FC@ha
    li r3, 0x2a
    addi r6, r6, fn_802897FC@l
    li r8, 0x38
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x18(r1)
    addi r3, r1, 0x144
    addi r4, r1, 0x18
    li r5, 0x4
    sth r8, 0xc(r1)
    stw r7, 0x140(r1)
    sth r0, 0x15a(r1)
    stw r6, 0x16c(r1)
    bl memcpy
    addi r3, r1, 0x148
    addi r4, r1, 0xc
    li r5, 0x2
    bl memcpy
    lhz r0, 0xc(r1)
    addi r27, r29, 0x934
    lwz r12, 0x18(r1)
    sth r0, 0x160(r1)
    lwz r11, 0x140(r1)
    lwz r10, 0x144(r1)
    lwz r9, 0x148(r1)
    lwz r8, 0x14c(r1)
    lwz r7, 0x150(r1)
    lwz r6, 0x154(r1)
    lwz r5, 0x158(r1)
    lwz r4, 0x160(r1)
    lwz r3, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r27, 0x15c(r1)
    stw r12, 0x164(r1)
    stw r11, 0x170(r1)
    stw r10, 0x174(r1)
    stw r9, 0x178(r1)
    stw r8, 0x17c(r1)
    stw r7, 0x180(r1)
    stw r6, 0x184(r1)
    stw r5, 0x188(r1)
    stw r27, 0x18c(r1)
    stw r4, 0x190(r1)
    stw r12, 0x194(r1)
    stw r3, 0x198(r1)
    stw r0, 0x19c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_80289D08
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_80289D08:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_80289D28
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_80289D9C
lbl_80289D28:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x170
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_80289D9C:
    lis r6, fn_802897FC@ha
    li r3, 0x62
    addi r6, r6, fn_802897FC@l
    li r8, 0x38
    li r7, 0x17
    li r0, 0x6
    stw r3, 0x14(r1)
    addi r3, r1, 0xe4
    addi r4, r1, 0x14
    li r5, 0x4
    sth r8, 0xa(r1)
    stw r7, 0xe0(r1)
    sth r0, 0xfa(r1)
    stw r6, 0x10c(r1)
    bl memcpy
    addi r3, r1, 0xe8
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    lhz r0, 0xa(r1)
    addi r27, r29, 0x934
    lwz r12, 0x14(r1)
    sth r0, 0x100(r1)
    lwz r11, 0xe0(r1)
    lwz r10, 0xe4(r1)
    lwz r9, 0xe8(r1)
    lwz r8, 0xec(r1)
    lwz r7, 0xf0(r1)
    lwz r6, 0xf4(r1)
    lwz r5, 0xf8(r1)
    lwz r4, 0x100(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r27, 0xfc(r1)
    stw r12, 0x104(r1)
    stw r11, 0x110(r1)
    stw r10, 0x114(r1)
    stw r9, 0x118(r1)
    stw r8, 0x11c(r1)
    stw r7, 0x120(r1)
    stw r6, 0x124(r1)
    stw r5, 0x128(r1)
    stw r27, 0x12c(r1)
    stw r4, 0x130(r1)
    stw r12, 0x134(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_80289E84
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_80289E84:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_80289EA4
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_80289F18
lbl_80289EA4:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x110
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_80289F18:
    lis r6, fn_80289730@ha
    li r7, 0x17
    addi r6, r6, fn_80289730@l
    li r0, 0x6
    stw r28, 0x10(r1)
    addi r3, r1, 0x84
    addi r4, r1, 0x10
    li r5, 0x4
    sth r31, 0x8(r1)
    stw r7, 0x80(r1)
    sth r0, 0x9a(r1)
    stw r6, 0xac(r1)
    bl memcpy
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    addi r27, r29, 0x934
    lwz r12, 0x10(r1)
    sth r0, 0xa0(r1)
    lwz r11, 0x80(r1)
    lwz r10, 0x84(r1)
    lwz r9, 0x88(r1)
    lwz r8, 0x8c(r1)
    lwz r7, 0x90(r1)
    lwz r6, 0x94(r1)
    lwz r5, 0x98(r1)
    lwz r4, 0xa0(r1)
    lwz r3, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r27, 0x9c(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xb0(r1)
    stw r10, 0xb4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r5, 0xc8(r1)
    stw r27, 0xcc(r1)
    stw r4, 0xd0(r1)
    stw r12, 0xd4(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    bl OSDisableInterrupts
    mr r26, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_80289FF8
    lwz r0, 0x168(r29)
    add r0, r27, r0
    extsb r27, r0
lbl_80289FF8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028A018
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_8028A08C
lbl_8028A018:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0xb0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r26
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028A08C:
    li r11, 0x0
    li r0, 0x1
    sth r0, 0x3a(r1)
    li r12, 0x15
    lwz r9, 0x28(r1)
    stb r11, 0x24(r1)
    lwz r8, 0x2c(r1)
    lwz r10, 0x24(r1)
    lwz r7, 0x30(r1)
    lwz r6, 0x34(r1)
    lwz r5, 0x38(r1)
    lwz r4, 0x3c(r1)
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r12, 0x20(r1)
    stw r11, 0x4c(r1)
    stw r11, 0x48(r1)
    stw r12, 0x50(r1)
    stw r10, 0x54(r1)
    stw r9, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    stw r11, 0x78(r1)
    stw r11, 0x7c(r1)
    bl OSDisableInterrupts
    mr r26, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028A12C
    lwz r0, 0x168(r29)
    add r0, r27, r0
    extsb r27, r0
lbl_8028A12C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028A14C
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_8028A1C0
lbl_8028A14C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x50
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r26
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028A1C0:
    addi r11, r1, 0x280
    bl _restgpr_26
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

// ----------------------------------------------------------------------------
// fn_8028A1D8
// ----------------------------------------------------------------------------
asm void fn_8028A1D8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    li r28, -0x1
    lbz r3, 0x56(r3)
    bl fn_8029A32C
    lis r4, lbl_8036C3D4@ha
    mr r30, r3
    mr r3, r29
    li r5, 0x10
    addi r4, r4, lbl_8036C3D4@l
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8028A250
    lis r3, lbl_8040C450@ha
    li r28, 0x3
    addi r3, r3, lbl_8040C450@l
    lwz r3, 0xc(r3)
    lwz r0, 0x8d8(r3)
    cmpwi r0, 0x0
    beq lbl_8028A2A8
    mr r3, r30
    bl btm_remove_acl
    li r3, -0x1
    b lbl_8028A2D8
lbl_8028A250:
    li r29, 0x0
    la r31, lbl_8049DDE8
lbl_8028A258:
    mr r3, r29
    mr r4, r30
    bl fn_8029A4F4
    cmpwi r3, 0x0
    beq lbl_8028A280
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_8028A280
    mr r28, r29
    b lbl_8028A2A8
lbl_8028A280:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_8028A298
    cmpwi r28, 0x0
    bge lbl_8028A298
    mr r28, r29
lbl_8028A298:
    addi r29, r29, 0x1
    addi r31, r31, 0x1
    cmpwi r29, 0x4
    blt lbl_8028A258
lbl_8028A2A8:
    mr r3, r28
    mr r4, r30
    bl fn_8029A4F4
    cmpwi r3, 0x0
    bne lbl_8028A2C8
    mr r3, r28
    mr r4, r30
    bl fn_8029A480
lbl_8028A2C8:
    li r0, 0x1
    la r3, lbl_8049DDE8
    stbx r0, r3, r28
    mr r3, r28
lbl_8028A2D8:
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
// fn_8028A2F8
// ----------------------------------------------------------------------------
asm void fn_8028A2F8() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_27
    lis r31, lbl_8036C1E0@ha
    cmpwi r4, 0x0
    addi r31, r31, lbl_8036C1E0@l
    lbz r27, 0x56(r3)
    mr r30, r3
    mr r28, r4
    addi r3, r31, 0x208
    la r4, lbl_8049CEFC
    beq lbl_8028A334
    la r4, lbl_8049CEF4
lbl_8028A334:
    opword 0x4CC63182
    bl fn_80294360
    cmpwi r28, 0x0
    beq lbl_8028A594
    mr r3, r30
    bl fn_8028A1D8
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_8028A794
    lis r4, lbl_8040D460@ha
    addi r4, r4, lbl_8040D460@l
    stbx r3, r4, r27
    bl fn_8028915C
    lis r4, lbl_8040C450@ha
    slwi r0, r28, 2
    addi r4, r4, lbl_8040C450@l
    mr r3, r30
    lwzx r29, r4, r0
    addi r4, r31, 0x21c
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8028A3A0
    li r0, 0x0
    stb r0, 0x8c1(r29)
    stw r0, 0x8b8(r29)
    b lbl_8028A3E8
lbl_8028A3A0:
    mr r3, r30
    addi r4, r31, 0x1f4
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8028A3D8
    bl fn_802943B0
    cmpwi r3, 0x0
    beq lbl_8028A3D8
    li r3, 0x3
    li r0, 0xc
    stb r3, 0x8c1(r29)
    stw r0, 0x8b8(r29)
    b lbl_8028A3E8
lbl_8028A3D8:
    li r3, 0xfb
    li r0, 0x0
    stb r3, 0x8c1(r29)
    stw r0, 0x8b8(r29)
lbl_8028A3E8:
    stb r27, 0x8c3(r29)
    li r10, 0x1
    lis r6, fn_802898E4@ha
    li r9, 0x0
    stw r10, 0x8d8(r29)
    li r4, 0x64
    addi r6, r6, fn_802898E4@l
    li r8, 0x1770
    stw r9, 0x8bc(r29)
    li r7, 0x17
    li r0, 0x6
    addi r3, r1, 0x14
    stb r4, 0x983(r29)
    addi r4, r1, 0xc
    li r5, 0x4
    stb r9, 0x986(r29)
    stb r9, 0x98d(r29)
    lbz r9, 0x8c1(r29)
    stb r9, 0x990(r29)
    stw r8, 0xc(r1)
    sth r10, 0x8(r1)
    stw r7, 0x10(r1)
    sth r0, 0x2a(r1)
    stw r6, 0x3c(r1)
    bl memcpy
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    addi r30, r29, 0x934
    lwz r12, 0xc(r1)
    sth r0, 0x30(r1)
    lwz r11, 0x10(r1)
    lwz r10, 0x14(r1)
    lwz r9, 0x18(r1)
    lwz r8, 0x1c(r1)
    lwz r7, 0x20(r1)
    lwz r6, 0x24(r1)
    lwz r5, 0x28(r1)
    lwz r4, 0x30(r1)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r30, 0x2c(r1)
    stw r12, 0x34(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r30, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r12, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r31, r0
    bge lbl_8028A4F8
    lwz r0, 0x168(r29)
    add r0, r31, r0
    extsb r31, r0
lbl_8028A4F8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r31
    bne lbl_8028A518
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028A58C
lbl_8028A518:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x40
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r30
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028A58C:
    bl __VIResetRFIdle
    b lbl_8028A794
lbl_8028A594:
    lis r3, lbl_8040D460@ha
    li r4, -0x1
    addi r3, r3, lbl_8040D460@l
    lbzx r30, r3, r27
    extsb r30, r30
    stbx r4, r3, r27
    cmpwi r30, -0x1
    beq lbl_8028A788
    lis r3, lbl_8040C450@ha
    slwi r0, r30, 2
    addi r3, r3, lbl_8040C450@l
    lwzx r29, r3, r0
    stw r4, 0x8bc(r29)
    lwz r12, 0x89c(r29)
    cmpwi r12, 0x0
    beq lbl_8028A5E8
    mr r3, r30
    li r4, -0x1
    mtctr r12
    bctrl
    b lbl_8028A6BC
lbl_8028A5E8:
    lwz r12, 0x9a8(r29)
    cmpwi r12, 0x0
    beq lbl_8028A6BC
    mr r3, r30
    li r4, -0x1
    mtctr r12
    bctrl
    b lbl_8028A6BC
lbl_8028A608:
    lwz r12, 0x9c(r1)
    cmpwi r12, 0x0
    beq lbl_8028A624
    mr r3, r30
    li r4, -0x1
    mtctr r12
    bctrl
lbl_8028A624:
    bl OSDisableInterrupts
    mr r27, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_8028A650
    lwz r0, 0x168(r29)
    add r0, r28, r0
    extsb r28, r0
lbl_8028A650:
    bl OSRestoreInterrupts
    cmpwi r28, 0x0
    bne lbl_8028A668
    mr r3, r27
    bl OSRestoreInterrupts
    b lbl_8028A6BC
lbl_8028A668:
    lbz r0, 0x160(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x160(r29)
    mr r3, r27
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x160(r29)
    bl OSRestoreInterrupts
lbl_8028A6BC:
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028A6E0
    lwz r0, 0x168(r29)
    add r0, r27, r0
    extsb r27, r0
lbl_8028A6E0:
    bl OSRestoreInterrupts
    cmpwi r27, 0x0
    bne lbl_8028A6F4
    li r0, 0x0
    b lbl_8028A728
lbl_8028A6F4:
    bl OSDisableInterrupts
    lbz r0, 0x160(r29)
    mr r27, r3
    lwz r4, 0x164(r29)
    addi r3, r1, 0x70
    extsb r0, r0
    li r5, 0x30
    mulli r0, r0, 0x30
    add r4, r4, r0
    bl memcpy
    mr r3, r27
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_8028A728:
    cmpwi r0, 0x0
    bne lbl_8028A608
    addi r3, r31, 0x230
    opword 0x4CC63182
    bl fn_80294360
    lwz r4, 0x8ac(r29)
    cmpwi r4, 0x0
    beq lbl_8028A754
    lwz r5, 0x8b4(r29)
    mr r3, r30
    bl fn_8028B380
lbl_8028A754:
    mr r3, r30
    bl fn_8028915C
    li r0, 0x0
    la r3, lbl_8049DDE8
    stbx r0, r3, r30
    lwz r12, 0x8a4(r29)
    cmpwi r12, 0x0
    beq lbl_8028A794
    mr r3, r30
    li r4, -0x1
    mtctr r12
    bctrl
    b lbl_8028A794
lbl_8028A788:
    addi r3, r31, 0x248
    opword 0x4CC63182
    bl fn_80294360
lbl_8028A794:
    addi r11, r1, 0xc0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// fn_8028A7AC
// ----------------------------------------------------------------------------
asm void fn_8028A7AC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8040D460@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8040D460@l
    lbzx r3, r5, r3
    cmplwi r3, 0x4
    bge lbl_8028A7EC
    bl WPADiHIDParser
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_8028A7EC
    lis r3, lbl_8036C470@ha
    addi r3, r3, lbl_8036C470@l
    opword 0x4CC63182
    bl fn_80294360
lbl_8028A7EC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028A7FC
// ----------------------------------------------------------------------------
asm void fn_8028A7FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8040C450@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwzx r30, r6, r0
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    beq lbl_8028A8B4
    cmpwi r29, 0x1
    beq lbl_8028A884
    bge lbl_8028A8B4
    cmpwi r29, 0x0
    bge lbl_8028A850
    b lbl_8028A8B4
lbl_8028A850:
    lha r4, 0x874(r30)
    lha r0, 0x87a(r30)
    subf r0, r4, r0
    sth r0, 0x0(r31)
    lha r4, 0x876(r30)
    lha r0, 0x87c(r30)
    subf r0, r4, r0
    sth r0, 0x2(r31)
    lha r4, 0x878(r30)
    lha r0, 0x87e(r30)
    subf r0, r4, r0
    sth r0, 0x4(r31)
    b lbl_8028A8B4
lbl_8028A884:
    lha r4, 0x88e(r30)
    lha r0, 0x894(r30)
    subf r0, r4, r0
    sth r0, 0x0(r31)
    lha r4, 0x890(r30)
    lha r0, 0x896(r30)
    subf r0, r4, r0
    sth r0, 0x2(r31)
    lha r4, 0x892(r30)
    lha r0, 0x898(r30)
    subf r0, r4, r0
    sth r0, 0x4(r31)
lbl_8028A8B4:
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028A8D4
// ----------------------------------------------------------------------------
asm void fn_8028A8D4() {
    nofralloc
    lis r5, lbl_8040C450@ha
    cmpwi r4, -0x1
    slwi r0, r3, 2
    addi r5, r5, lbl_8040C450@l
    lwzx r3, r5, r0
    beqlr
    lbz r3, 0x8c3(r3)
    b BTA_HhClose
    blr
}

// ----------------------------------------------------------------------------
// fn_8028A8F8
// ----------------------------------------------------------------------------
asm void fn_8028A8F8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8040C450@ha
    addi r31, r31, lbl_8040C450@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    slwi r29, r3, 2
    stw r28, 0x10(r1)
    mr r28, r3
    lwzx r30, r31, r29
    bl OSDisableInterrupts
    lwz r30, 0x8bc(r30)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_8028A998
    mr r3, r28
    li r4, 0x0
    bl fn_8029A480
    lwzx r31, r31, r29
    bl OSDisableInterrupts
    lwz r30, 0x8bc(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_8028A998
    bl OSDisableInterrupts
    lbz r0, 0x986(r31)
    cmpwi r0, 0x0
    beq lbl_8028A978
    bl OSRestoreInterrupts
    b lbl_8028A998
lbl_8028A978:
    li r0, 0x1
    stb r0, 0x986(r31)
    bl OSRestoreInterrupts
    lis r5, fn_8028A8D4@ha
    mr r3, r28
    addi r5, r5, fn_8028A8D4@l
    li r4, 0x0
    bl fn_8028B054
lbl_8028A998:
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
// fn_8028A9B8
// ----------------------------------------------------------------------------
asm void fn_8028A9B8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_8040C450@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    cmpwi r30, 0x0
    beq lbl_8028A9F4
    lbz r0, 0x8c1(r31)
    stw r0, 0x0(r30)
lbl_8028A9F4:
    lwz r30, 0x8bc(r31)
    cmpwi r30, -0x1
    beq lbl_8028AA24
    lbz r0, 0x8c1(r31)
    cmplwi r0, 0xfd
    bne lbl_8028AA14
    li r30, -0x1
    b lbl_8028AA24
lbl_8028AA14:
    lwz r0, 0x8dc(r31)
    cmpwi r0, 0x0
    bne lbl_8028AA24
    li r30, -0x2
lbl_8028AA24:
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028AA44
// ----------------------------------------------------------------------------
asm void fn_8028AA44() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    slwi r3, r3, 2
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, lbl_8049DDE0
    lwzx r31, r5, r3
    cmpwi r0, 0x0
    beq lbl_8028AA9C
    lis r3, lbl_8036C488@ha
    addi r3, r3, lbl_8036C488@l
    opword 0x4CC63182
    bl OSReport
    lis r3, lbl_8036C4BC@ha
    addi r3, r3, lbl_8036C4BC@l
    opword 0x4CC63182
    bl OSReport
lbl_8028AA9C:
    bl OSDisableInterrupts
    lwz r30, 0x8a8(r31)
    stw r29, 0x8a8(r31)
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028AACC
// ----------------------------------------------------------------------------
asm void fn_8028AACC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    slwi r3, r3, 2
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, lbl_8049DDE0
    lwzx r31, r5, r3
    cmpwi r0, 0x0
    beq lbl_8028AB24
    lis r3, lbl_8036C488@ha
    addi r3, r3, lbl_8036C488@l
    opword 0x4CC63182
    bl OSReport
    lis r3, lbl_8036C510@ha
    addi r3, r3, lbl_8036C510@l
    opword 0x4CC63182
    bl OSReport
lbl_8028AB24:
    bl OSDisableInterrupts
    lwz r30, 0x8a4(r31)
    stw r29, 0x8a4(r31)
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028AB54
// ----------------------------------------------------------------------------
asm void fn_8028AB54() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lwz r30, 0x8a0(r31)
    stw r29, 0x8a0(r31)
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028ABB0
// ----------------------------------------------------------------------------
asm void fn_8028ABB0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r31, 0x8b8(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028ABF4
// ----------------------------------------------------------------------------
asm void fn_8028ABF4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r5, r5, lbl_8040C450@l
    mr r27, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lwz r29, 0x8dc(r31)
    lwz r30, 0x8bc(r31)
    lwz r28, 0x8b8(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    bne lbl_8028AC40
    li r3, -0x1
    b lbl_8028AC94
lbl_8028AC40:
    cmpwi r29, 0x0
    bne lbl_8028AC50
    li r3, -0x2
    b lbl_8028AC94
lbl_8028AC50:
    cmplw r28, r27
    bne lbl_8028AC60
    li r3, 0x0
    b lbl_8028AC94
lbl_8028AC60:
    lbz r5, 0x98e(r31)
    mr r4, r27
    addi r3, r31, 0x160
    li r6, 0x0
    bl fn_8028E678
    cmpwi r3, 0x0
    beq lbl_8028AC90
    bl OSDisableInterrupts
    stw r27, 0x8b8(r31)
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028AC94
lbl_8028AC90:
    li r3, -0x2
lbl_8028AC94:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028ACAC
// ----------------------------------------------------------------------------
asm void fn_8028ACAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_8040C450@l
    stw r31, 0xc(r1)
    lwzx r31, r5, r0
    lwz r12, 0x988(r31)
    cmpwi r12, 0x0
    beq lbl_8028ACE0
    mtctr r12
    bctrl
lbl_8028ACE0:
    li r0, 0x0
    stw r0, 0x988(r31)
    stb r0, 0x98c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028AD00
// ----------------------------------------------------------------------------
asm void fn_8028AD00() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_25
    lis r6, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    mr r28, r3
    lwzx r30, r6, r0
    mr r31, r4
    mr r29, r5
    bl OSDisableInterrupts
    lwz r27, 0x8dc(r30)
    lwz r26, 0x8bc(r30)
    lbz r25, 0x98c(r30)
    bl OSRestoreInterrupts
    cmpwi r26, -0x1
    beq lbl_8028AEE0
    cmpwi r27, 0x0
    beq lbl_8028AD5C
    cmpwi r25, 0x0
    beq lbl_8028AD64
lbl_8028AD5C:
    li r26, -0x2
    b lbl_8028AEE0
lbl_8028AD64:
    bl OSDisableInterrupts
    li r27, 0x1
    stb r27, 0x98c(r30)
    stw r29, 0x988(r30)
    bl OSRestoreInterrupts
    li r0, 0x0
    li r12, 0x15
    stb r0, 0xc(r1)
    lis r11, fn_8028ACAC@ha
    addi r11, r11, fn_8028ACAC@l
    lwz r9, 0x10(r1)
    sth r27, 0x22(r1)
    lwz r8, 0x14(r1)
    lwz r10, 0xc(r1)
    lwz r7, 0x18(r1)
    lwz r6, 0x1c(r1)
    lwz r5, 0x20(r1)
    lwz r4, 0x24(r1)
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r12, 0x8(r1)
    stw r11, 0x34(r1)
    stw r31, 0x30(r1)
    stw r12, 0x38(r1)
    stw r10, 0x3c(r1)
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r31, 0x60(r1)
    stw r11, 0x64(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028AE1C
    lwz r0, 0x168(r30)
    add r0, r27, r0
    extsb r27, r0
lbl_8028AE1C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028AE40
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_8028AEB8
lbl_8028AE40:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x38
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_8028AEB8:
    cmpwi r0, 0x0
    beq lbl_8028AEC8
    li r26, 0x0
    b lbl_8028AEE0
lbl_8028AEC8:
    li r26, -0x2
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0x98c(r30)
    stw r0, 0x988(r30)
    bl OSRestoreInterrupts
lbl_8028AEE0:
    cmpwi r26, 0x0
    beq lbl_8028AF04
    cmpwi r29, 0x0
    beq lbl_8028AF04
    mr r12, r29
    mr r3, r28
    mr r4, r26
    mtctr r12
    bctrl
lbl_8028AF04:
    addi r11, r1, 0x90
    mr r3, r26
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_8028AF20
// ----------------------------------------------------------------------------
asm void fn_8028AF20() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_8040C450@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lwz r0, 0x8bc(r31)
    cmpwi r0, -0x1
    bne lbl_8028AF60
    bl OSRestoreInterrupts
    b lbl_8028AFD4
lbl_8028AF60:
    lwz r0, lbl_8049DDF0
    cmpwi r0, 0x0
    bne lbl_8028AF88
    cmpwi r30, 0x0
    bne lbl_8028AF80
    lwz r0, 0x8d4(r31)
    cmpwi r0, 0x1
    beq lbl_8028AF88
lbl_8028AF80:
    bl OSRestoreInterrupts
    b lbl_8028AFD4
lbl_8028AF88:
    cmpwi r30, 0x0
    bne lbl_8028AF9C
    lwz r0, 0x8d4(r31)
    cmpwi r0, 0x0
    beq lbl_8028AFB0
lbl_8028AF9C:
    cmplwi r30, 0x1
    bne lbl_8028AFB8
    lwz r0, 0x8d4(r31)
    cmpwi r0, 0x1
    bne lbl_8028AFB8
lbl_8028AFB0:
    bl OSRestoreInterrupts
    b lbl_8028AFD4
lbl_8028AFB8:
    neg r4, r30
    li r0, 0x1
    or r4, r4, r30
    srwi r4, r4, 31
    stw r4, 0x8d4(r31)
    stw r0, 0x8d0(r31)
    bl OSRestoreInterrupts
lbl_8028AFD4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028AFEC
// ----------------------------------------------------------------------------
asm void fn_8028AFEC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    stw r31, lbl_8049DDF0
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B020
// ----------------------------------------------------------------------------
asm void fn_8028B020() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r31, lbl_8049DDF0
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B054
// ----------------------------------------------------------------------------
asm void fn_8028B054() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lis r6, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    mr r28, r3
    lwzx r30, r6, r0
    mr r26, r4
    mr r29, r5
    bl OSDisableInterrupts
    lwz r31, 0x8bc(r30)
    lwz r27, 0x8dc(r30)
    bl OSRestoreInterrupts
    cmpwi r31, -0x1
    beq lbl_8028B1FC
    cmpwi r27, 0x0
    bne lbl_8028B0AC
    li r31, -0x2
    b lbl_8028B1FC
lbl_8028B0AC:
    clrlslwi r0, r26, 28, 4
    li r3, 0x1
    sth r3, 0x22(r1)
    li r12, 0x11
    lwz r10, 0x10(r1)
    stb r0, 0xc(r1)
    lwz r9, 0x14(r1)
    lwz r11, 0xc(r1)
    lwz r8, 0x18(r1)
    lwz r7, 0x1c(r1)
    lwz r6, 0x20(r1)
    lwz r5, 0x24(r1)
    lwz r4, 0x28(r1)
    lwz r3, 0x2c(r1)
    lwz r0, 0x30(r1)
    stw r12, 0x8(r1)
    stw r29, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r29, 0x64(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028B14C
    lwz r0, 0x168(r30)
    add r0, r27, r0
    extsb r27, r0
lbl_8028B14C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028B170
    mr r3, r31
    bl OSRestoreInterrupts
    li r4, 0x0
    b lbl_8028B1E8
lbl_8028B170:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x38
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r4, 0x1
lbl_8028B1E8:
    neg r3, r4
    li r0, -0x2
    or r3, r3, r4
    srawi r3, r3, 31
    andc r31, r0, r3
lbl_8028B1FC:
    cmpwi r31, 0x0
    beq lbl_8028B220
    cmpwi r29, 0x0
    beq lbl_8028B220
    mr r12, r29
    mr r3, r28
    mr r4, r31
    mtctr r12
    bctrl
lbl_8028B220:
    addi r11, r1, 0x80
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B23C
// ----------------------------------------------------------------------------
asm void fn_8028B23C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl SCCheckStatus
    cmpwi r3, 0x0
    beq lbl_8028B26C
    li r3, 0x0
    b lbl_8028B2CC
lbl_8028B26C:
    bl OSDisableInterrupts
    lwz r4, lbl_8049DDF0
    lbz r30, lbl_8049DDEF
    neg r0, r4
    or r0, r0, r4
    srwi r31, r0, 31
    bl OSRestoreInterrupts
    mr r3, r30
    bl SCSetWpadSpeakerVolume
    clrlwi r30, r3, 31
    mr r3, r31
    bl SCSetWpadMotorMode
    and. r30, r30, r3
    beq lbl_8028B2B0
    mr r3, r29
    bl SCFlushAsync
    b lbl_8028B2C8
lbl_8028B2B0:
    cmpwi r29, 0x0
    beq lbl_8028B2C8
    mr r12, r29
    li r3, 0x2
    mtctr r12
    bctrl
lbl_8028B2C8:
    mr r3, r30
lbl_8028B2CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B2E8
// ----------------------------------------------------------------------------
asm void fn_8028B2E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8040C450@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lbz r0, 0x8c8(r31)
    mr r30, r3
    lwz r3, 0x8b8(r31)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r4, r31, r0
    addi r31, r4, 0xa0
    bl fn_80287BAC
    lbz r0, 0x29(r31)
    mr r5, r3
    extsb. r0, r0
    beq lbl_8028B350
    li r5, 0x2a
lbl_8028B350:
    mr r3, r29
    mr r4, r31
    bl memcpy
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B380
// ----------------------------------------------------------------------------
asm void fn_8028B380() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    mr r26, r4
    lwzx r29, r6, r0
    mr r27, r5
    bl OSDisableInterrupts
    lwz r0, 0x8bc(r29)
    mr r28, r3
    li r30, -0x4
    cmpwi r0, -0x1
    bne lbl_8028B3C8
    li r30, -0x1
lbl_8028B3C8:
    lwz r3, 0x8b8(r29)
    bl fn_80287BAC
    cmpwi r26, 0x0
    mr r31, r3
    beq lbl_8028B4B8
    mullw r5, r31, r27
    mr r3, r26
    li r4, 0x0
    bl memset
    cmplwi r27, 0x0
    mr r3, r27
    li r4, 0x0
    ble lbl_8028B4AC
    srwi. r0, r27, 3
    mtctr r0
    beq lbl_8028B494
lbl_8028B408:
    mullw r0, r4, r31
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    addi r4, r4, 0x1
    stb r30, 0x29(r3)
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    stb r30, 0x29(r3)
    bdnz lbl_8028B408
    andi. r3, r27, 0x7
    beq lbl_8028B4AC
lbl_8028B494:
    mtctr r3
lbl_8028B498:
    mullw r0, r4, r31
    addi r4, r4, 0x1
    add r3, r26, r0
    stb r30, 0x29(r3)
    bdnz lbl_8028B498
lbl_8028B4AC:
    li r0, -0x1
    stw r0, 0x8b0(r29)
    stw r27, 0x8b4(r29)
lbl_8028B4B8:
    stw r26, 0x8ac(r29)
    mr r3, r28
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B4DC
// ----------------------------------------------------------------------------
asm void fn_8028B4DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lbz r0, 0x8c8(r31)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r6, r31, r0
    lhz r4, 0xa0(r6)
    clrlwi r0, r4, 30
    cmpwi r0, 0x3
    bne lbl_8028B52C
    rlwinm r0, r4, 0, 31, 29
    sth r0, 0xa0(r6)
lbl_8028B52C:
    lhz r4, 0xa0(r6)
    rlwinm r0, r4, 0, 28, 29
    cmpwi r0, 0xc
    bne lbl_8028B544
    rlwinm r0, r4, 0, 30, 28
    sth r0, 0xa0(r6)
lbl_8028B544:
    lwz r0, 0x8b8(r31)
    cmplwi r0, 0x6
    beq lbl_8028B570
    cmplwi r0, 0x7
    beq lbl_8028B570
    cmplwi r0, 0x8
    beq lbl_8028B570
    cmplwi r0, 0xb
    beq lbl_8028B570
    cmplwi r0, 0xf
    bne lbl_8028B5A4
lbl_8028B570:
    lhz r5, 0xca(r6)
    andi. r4, r5, 0x8002
    addis r0, r4, 0x0
    cmplwi r0, 0x8002
    bne lbl_8028B58C
    clrlwi r0, r5, 17
    sth r0, 0xca(r6)
lbl_8028B58C:
    lhz r4, 0xca(r6)
    andi. r0, r4, 0x4001
    cmpwi r0, 0x4001
    bne lbl_8028B5A4
    rlwinm r0, r4, 0, 18, 16
    sth r0, 0xca(r6)
lbl_8028B5A4:
    lwz r0, 0x8b8(r31)
    cmplwi r0, 0xa
    bne lbl_8028B5E4
    lhz r5, 0xca(r6)
    andi. r4, r5, 0x8002
    addis r0, r4, 0x0
    cmplwi r0, 0x8002
    bne lbl_8028B5CC
    clrlwi r0, r5, 17
    sth r0, 0xca(r6)
lbl_8028B5CC:
    lhz r4, 0xca(r6)
    andi. r0, r4, 0x4001
    cmpwi r0, 0x4001
    bne lbl_8028B5E4
    rlwinm r0, r4, 0, 18, 16
    sth r0, 0xca(r6)
lbl_8028B5E4:
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B5FC
// ----------------------------------------------------------------------------
asm void fn_8028B5FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lbz r0, 0x8c8(r31)
    mr r30, r3
    lwz r3, 0x8b8(r31)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r4, r31, r0
    addi r28, r4, 0xa0
    bl fn_80287BAC
    lwz r0, 0x8ac(r31)
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_8028B6AC
    lwz r4, 0x8b0(r31)
    addi r4, r4, 0x1
    stw r4, 0x8b0(r31)
    lwz r0, 0x8b4(r31)
    cmplw r4, r0
    blt lbl_8028B684
    li r0, 0x0
    stw r0, 0x8b0(r31)
lbl_8028B684:
    lwz r4, 0x8b0(r31)
    lbz r0, 0x29(r28)
    mullw r3, r4, r3
    lwz r4, 0x8ac(r31)
    extsb. r0, r0
    add r3, r4, r3
    beq lbl_8028B6A4
    li r5, 0x2a
lbl_8028B6A4:
    mr r4, r28
    bl memcpy
lbl_8028B6AC:
    lwz r12, 0x8a8(r31)
    cmpwi r12, 0x0
    beq lbl_8028B6C4
    mr r3, r29
    mtctr r12
    bctrl
lbl_8028B6C4:
    lhz r4, 0x984(r31)
    mr r3, r30
    addi r0, r4, 0x1
    sth r0, 0x984(r31)
    bl OSRestoreInterrupts
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
// fn_8028B6F8
// ----------------------------------------------------------------------------
asm void fn_8028B6F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r31, 0x83c(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028B73C
// ----------------------------------------------------------------------------
asm void fn_8028B73C() {
    nofralloc
    stwu r1, -0x600(r1)
    mflr r0
    stw r0, 0x604(r1)
    addi r11, r1, 0x600
    bl _savegpr_25
    lbz r11, lbl_804A23A8
    lis r6, lbl_8040C450@ha
    lbz r10, lbl_804A23A9
    mr r25, r4
    lbz r9, lbl_804A23AA
    slwi r0, r3, 2
    lbz r8, lbl_804A23AB
    mr r27, r3
    lbz r7, lbl_804A23AC
    addi r6, r6, lbl_8040C450@l
    lbz r4, lbl_804A23AD
    mr r28, r5
    lbz r3, lbl_804A23AE
    stb r11, 0x2c(r1)
    lwzx r31, r6, r0
    stb r10, 0x2d(r1)
    stb r9, 0x2e(r1)
    stb r8, 0x2f(r1)
    stb r7, 0x30(r1)
    stb r4, 0x31(r1)
    stb r3, 0x32(r1)
    bl OSDisableInterrupts
    lwz r29, 0x83c(r31)
    lwz r26, 0x8bc(r31)
    lwz r30, 0x8dc(r31)
    bl OSRestoreInterrupts
    cmpwi r26, -0x1
    beq lbl_8028CD20
    cmpwi r30, 0x0
    bne lbl_8028B7D0
    li r26, -0x2
    b lbl_8028CD20
lbl_8028B7D0:
    cmpwi r25, 0x0
    bne lbl_8028BEEC
    cmpwi r29, 0x0
    bne lbl_8028B7E8
    li r26, 0x0
    b lbl_8028CD20
lbl_8028B7E8:
    bl OSDisableInterrupts
    mr r29, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r30, r0
    bge lbl_8028B814
    lwz r0, 0x168(r31)
    add r0, r30, r0
    extsb r30, r0
lbl_8028B814:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    addi r4, r30, 0x5
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_8028BEDC
    li r3, 0x1
    li r0, 0x4
    sth r3, 0x592(r1)
    li r27, 0x19
    li r12, 0x0
    lwz r10, 0x580(r1)
    stb r0, 0x57c(r1)
    lwz r9, 0x584(r1)
    lwz r11, 0x57c(r1)
    lwz r8, 0x588(r1)
    lwz r7, 0x58c(r1)
    lwz r6, 0x590(r1)
    lwz r5, 0x594(r1)
    lwz r4, 0x598(r1)
    lwz r3, 0x59c(r1)
    lwz r0, 0x5a0(r1)
    stw r27, 0x578(r1)
    stw r12, 0x5a4(r1)
    stw r27, 0x5a8(r1)
    stw r11, 0x5ac(r1)
    stw r10, 0x5b0(r1)
    stw r9, 0x5b4(r1)
    stw r8, 0x5b8(r1)
    stw r7, 0x5bc(r1)
    stw r6, 0x5c0(r1)
    stw r5, 0x5c4(r1)
    stw r4, 0x5c8(r1)
    stw r3, 0x5cc(r1)
    stw r0, 0x5d0(r1)
    stw r12, 0x5d4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028B8D0
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028B8D0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028B8F0
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028B964
lbl_8028B8F0:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x5a8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028B964:
    lis r3, 0x4a2
    li r9, 0x1
    addi r8, r3, 0x1
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r9, 0x12(r1)
    addi r3, r1, 0x54c
    addi r4, r1, 0x28
    li r5, 0x4
    stw r8, 0x28(r1)
    stb r9, 0x11(r1)
    stw r7, 0x548(r1)
    sth r6, 0x562(r1)
    stw r0, 0x574(r1)
    bl memcpy
    addi r3, r1, 0x550
    addi r4, r1, 0x11
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x551
    addi r4, r1, 0x12
    li r5, 0x1
    bl memcpy
    lwz r27, 0x548(r1)
    lwz r12, 0x54c(r1)
    lwz r11, 0x550(r1)
    lwz r10, 0x554(r1)
    lwz r9, 0x558(r1)
    lwz r8, 0x55c(r1)
    lwz r7, 0x560(r1)
    lwz r6, 0x564(r1)
    lwz r5, 0x568(r1)
    lwz r4, 0x56c(r1)
    lwz r3, 0x570(r1)
    lwz r0, 0x574(r1)
    stw r27, 0x518(r1)
    stw r12, 0x51c(r1)
    stw r11, 0x520(r1)
    stw r10, 0x524(r1)
    stw r9, 0x528(r1)
    stw r8, 0x52c(r1)
    stw r7, 0x530(r1)
    stw r6, 0x534(r1)
    stw r5, 0x538(r1)
    stw r4, 0x53c(r1)
    stw r3, 0x540(r1)
    stw r0, 0x544(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028BA50
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028BA50:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028BA70
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028BAE4
lbl_8028BA70:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x518
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028BAE4:
    lis r3, 0x4a2
    li r9, 0x0
    addi r8, r3, 0x9
    li r7, 0x1
    li r6, 0x16
    li r0, 0x15
    stb r9, 0x10(r1)
    addi r3, r1, 0x4ec
    addi r4, r1, 0x24
    li r5, 0x4
    stw r8, 0x24(r1)
    stb r7, 0xf(r1)
    stw r6, 0x4e8(r1)
    sth r0, 0x502(r1)
    stw r9, 0x514(r1)
    bl memcpy
    addi r3, r1, 0x4f0
    addi r4, r1, 0xf
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x4f1
    addi r4, r1, 0x10
    li r5, 0x1
    bl memcpy
    lwz r27, 0x4e8(r1)
    lwz r12, 0x4ec(r1)
    lwz r11, 0x4f0(r1)
    lwz r10, 0x4f4(r1)
    lwz r9, 0x4f8(r1)
    lwz r8, 0x4fc(r1)
    lwz r7, 0x500(r1)
    lwz r6, 0x504(r1)
    lwz r5, 0x508(r1)
    lwz r4, 0x50c(r1)
    lwz r3, 0x510(r1)
    lwz r0, 0x514(r1)
    stw r27, 0x4b8(r1)
    stw r12, 0x4bc(r1)
    stw r11, 0x4c0(r1)
    stw r10, 0x4c4(r1)
    stw r9, 0x4c8(r1)
    stw r8, 0x4cc(r1)
    stw r7, 0x4d0(r1)
    stw r6, 0x4d4(r1)
    stw r5, 0x4d8(r1)
    stw r4, 0x4dc(r1)
    stw r3, 0x4e0(r1)
    stw r0, 0x4e4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028BBD0
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028BBD0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028BBF0
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028BC64
lbl_8028BBF0:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x4b8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028BC64:
    li r12, 0x0
    li r0, 0x1
    sth r0, 0x472(r1)
    li r27, 0x14
    lwz r10, 0x460(r1)
    stb r12, 0x45c(r1)
    lwz r9, 0x464(r1)
    lwz r11, 0x45c(r1)
    lwz r8, 0x468(r1)
    lwz r7, 0x46c(r1)
    lwz r6, 0x470(r1)
    lwz r5, 0x474(r1)
    lwz r4, 0x478(r1)
    lwz r3, 0x47c(r1)
    lwz r0, 0x480(r1)
    stw r27, 0x458(r1)
    stw r12, 0x484(r1)
    stw r27, 0x488(r1)
    stw r11, 0x48c(r1)
    stw r10, 0x490(r1)
    stw r9, 0x494(r1)
    stw r8, 0x498(r1)
    stw r7, 0x49c(r1)
    stw r6, 0x4a0(r1)
    stw r5, 0x4a4(r1)
    stw r4, 0x4a8(r1)
    stw r3, 0x4ac(r1)
    stw r0, 0x4b0(r1)
    stw r12, 0x4b4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028BD04
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028BD04:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028BD24
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028BD98
lbl_8028BD24:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x488
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028BD98:
    li r11, 0x0
    li r0, 0x1
    sth r0, 0x412(r1)
    li r12, 0x15
    lwz r9, 0x400(r1)
    stb r11, 0x3fc(r1)
    lwz r8, 0x404(r1)
    lwz r10, 0x3fc(r1)
    lwz r7, 0x408(r1)
    lwz r6, 0x40c(r1)
    lwz r5, 0x410(r1)
    lwz r4, 0x414(r1)
    lwz r3, 0x418(r1)
    lwz r0, 0x41c(r1)
    stw r12, 0x3f8(r1)
    stw r28, 0x424(r1)
    stw r11, 0x420(r1)
    stw r12, 0x428(r1)
    stw r10, 0x42c(r1)
    stw r9, 0x430(r1)
    stw r8, 0x434(r1)
    stw r7, 0x438(r1)
    stw r6, 0x43c(r1)
    stw r5, 0x440(r1)
    stw r4, 0x444(r1)
    stw r3, 0x448(r1)
    stw r0, 0x44c(r1)
    stw r11, 0x450(r1)
    stw r28, 0x454(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028BE38
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028BE38:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028BE58
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028BECC
lbl_8028BE58:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x428
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028BECC:
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028CD40
lbl_8028BEDC:
    mr r3, r29
    li r26, -0x2
    bl OSRestoreInterrupts
    b lbl_8028CD20
lbl_8028BEEC:
    cmpwi r25, 0x3
    beq lbl_8028CA30
    bge lbl_8028BF08
    cmpwi r25, 0x1
    beq lbl_8028BF18
    bge lbl_8028C8DC
    b lbl_8028CD20
lbl_8028BF08:
    cmpwi r25, 0x5
    beq lbl_8028BF18
    bge lbl_8028CD20
    b lbl_8028CB84
lbl_8028BF18:
    bl OSDisableInterrupts
    mr r29, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r30, r0
    bge lbl_8028BF44
    lwz r0, 0x168(r31)
    add r0, r30, r0
    extsb r30, r0
lbl_8028BF44:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    addi r4, r30, 0x7
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_8028C8CC
    li r3, 0x1
    li r0, 0x4
    sth r3, 0x3b2(r1)
    li r27, 0x14
    li r12, 0x0
    lwz r10, 0x3a0(r1)
    stb r0, 0x39c(r1)
    lwz r9, 0x3a4(r1)
    lwz r11, 0x39c(r1)
    lwz r8, 0x3a8(r1)
    lwz r7, 0x3ac(r1)
    lwz r6, 0x3b0(r1)
    lwz r5, 0x3b4(r1)
    lwz r4, 0x3b8(r1)
    lwz r3, 0x3bc(r1)
    lwz r0, 0x3c0(r1)
    stw r27, 0x398(r1)
    stw r12, 0x3c4(r1)
    stw r27, 0x3c8(r1)
    stw r11, 0x3cc(r1)
    stw r10, 0x3d0(r1)
    stw r9, 0x3d4(r1)
    stw r8, 0x3d8(r1)
    stw r7, 0x3dc(r1)
    stw r6, 0x3e0(r1)
    stw r5, 0x3e4(r1)
    stw r4, 0x3e8(r1)
    stw r3, 0x3ec(r1)
    stw r0, 0x3f0(r1)
    stw r12, 0x3f4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028C000
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028C000:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028C020
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028C094
lbl_8028C020:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x3c8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028C094:
    li r3, 0x1
    li r0, 0x4
    sth r3, 0x352(r1)
    li r27, 0x19
    li r12, 0x0
    lwz r10, 0x340(r1)
    stb r0, 0x33c(r1)
    lwz r9, 0x344(r1)
    lwz r11, 0x33c(r1)
    lwz r8, 0x348(r1)
    lwz r7, 0x34c(r1)
    lwz r6, 0x350(r1)
    lwz r5, 0x354(r1)
    lwz r4, 0x358(r1)
    lwz r3, 0x35c(r1)
    lwz r0, 0x360(r1)
    stw r27, 0x338(r1)
    stw r12, 0x364(r1)
    stw r27, 0x368(r1)
    stw r11, 0x36c(r1)
    stw r10, 0x370(r1)
    stw r9, 0x374(r1)
    stw r8, 0x378(r1)
    stw r7, 0x37c(r1)
    stw r6, 0x380(r1)
    stw r5, 0x384(r1)
    stw r4, 0x388(r1)
    stw r3, 0x38c(r1)
    stw r0, 0x390(r1)
    stw r12, 0x394(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028C138
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028C138:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028C158
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028C1CC
lbl_8028C158:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x368
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028C1CC:
    lis r3, 0x4a2
    li r9, 0x1
    addi r8, r3, 0x9
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r9, 0xe(r1)
    addi r3, r1, 0x30c
    addi r4, r1, 0x20
    li r5, 0x4
    stw r8, 0x20(r1)
    stb r9, 0xd(r1)
    stw r7, 0x308(r1)
    sth r6, 0x322(r1)
    stw r0, 0x334(r1)
    bl memcpy
    addi r3, r1, 0x310
    addi r4, r1, 0xd
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x311
    addi r4, r1, 0xe
    li r5, 0x1
    bl memcpy
    lwz r27, 0x308(r1)
    lwz r12, 0x30c(r1)
    lwz r11, 0x310(r1)
    lwz r10, 0x314(r1)
    lwz r9, 0x318(r1)
    lwz r8, 0x31c(r1)
    lwz r7, 0x320(r1)
    lwz r6, 0x324(r1)
    lwz r5, 0x328(r1)
    lwz r4, 0x32c(r1)
    lwz r3, 0x330(r1)
    lwz r0, 0x334(r1)
    stw r27, 0x2d8(r1)
    stw r12, 0x2dc(r1)
    stw r11, 0x2e0(r1)
    stw r10, 0x2e4(r1)
    stw r9, 0x2e8(r1)
    stw r8, 0x2ec(r1)
    stw r7, 0x2f0(r1)
    stw r6, 0x2f4(r1)
    stw r5, 0x2f8(r1)
    stw r4, 0x2fc(r1)
    stw r3, 0x300(r1)
    stw r0, 0x304(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028C2B8
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028C2B8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028C2D8
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028C34C
lbl_8028C2D8:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x2d8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028C34C:
    lis r3, 0x4a2
    li r4, 0x80
    addi r5, r3, 0x1
    li r8, 0x1
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r4, 0xc(r1)
    addi r3, r1, 0x2ac
    addi r4, r1, 0x1c
    stw r5, 0x1c(r1)
    li r5, 0x4
    stb r8, 0xb(r1)
    stw r7, 0x2a8(r1)
    sth r6, 0x2c2(r1)
    stw r0, 0x2d4(r1)
    bl memcpy
    addi r3, r1, 0x2b0
    addi r4, r1, 0xb
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x2b1
    addi r4, r1, 0xc
    li r5, 0x1
    bl memcpy
    lwz r27, 0x2a8(r1)
    lwz r12, 0x2ac(r1)
    lwz r11, 0x2b0(r1)
    lwz r10, 0x2b4(r1)
    lwz r9, 0x2b8(r1)
    lwz r8, 0x2bc(r1)
    lwz r7, 0x2c0(r1)
    lwz r6, 0x2c4(r1)
    lwz r5, 0x2c8(r1)
    lwz r4, 0x2cc(r1)
    lwz r3, 0x2d0(r1)
    lwz r0, 0x2d4(r1)
    stw r27, 0x278(r1)
    stw r12, 0x27c(r1)
    stw r11, 0x280(r1)
    stw r10, 0x284(r1)
    stw r9, 0x288(r1)
    stw r8, 0x28c(r1)
    stw r7, 0x290(r1)
    stw r6, 0x294(r1)
    stw r5, 0x298(r1)
    stw r4, 0x29c(r1)
    stw r3, 0x2a0(r1)
    stw r0, 0x2a4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028C43C
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028C43C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028C45C
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028C4D0
lbl_8028C45C:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x278
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028C4D0:
    lbz r4, lbl_8049DDEF
    lis r3, 0x4a2
    addi r5, r3, 0x1
    li r8, 0x7
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r4, 0x30(r1)
    addi r3, r1, 0x21c
    addi r4, r1, 0x18
    stw r5, 0x18(r1)
    li r5, 0x4
    stb r8, 0xa(r1)
    stw r7, 0x218(r1)
    sth r6, 0x232(r1)
    stw r0, 0x244(r1)
    bl memcpy
    addi r3, r1, 0x220
    addi r4, r1, 0xa
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x221
    addi r4, r1, 0x2c
    li r5, 0x7
    bl memcpy
    lwz r27, 0x218(r1)
    lwz r12, 0x21c(r1)
    lwz r11, 0x220(r1)
    lwz r10, 0x224(r1)
    lwz r9, 0x228(r1)
    lwz r8, 0x22c(r1)
    lwz r7, 0x230(r1)
    lwz r6, 0x234(r1)
    lwz r5, 0x238(r1)
    lwz r4, 0x23c(r1)
    lwz r3, 0x240(r1)
    lwz r0, 0x244(r1)
    stw r27, 0x248(r1)
    stw r12, 0x24c(r1)
    stw r11, 0x250(r1)
    stw r10, 0x254(r1)
    stw r9, 0x258(r1)
    stw r8, 0x25c(r1)
    stw r7, 0x260(r1)
    stw r6, 0x264(r1)
    stw r5, 0x268(r1)
    stw r4, 0x26c(r1)
    stw r3, 0x270(r1)
    stw r0, 0x274(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028C5C0
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028C5C0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028C5E0
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028C654
lbl_8028C5E0:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x248
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028C654:
    li r12, 0x0
    li r0, 0x1
    sth r0, 0x1d2(r1)
    li r27, 0x19
    lwz r10, 0x1c0(r1)
    stb r12, 0x1bc(r1)
    lwz r9, 0x1c4(r1)
    lwz r11, 0x1bc(r1)
    lwz r8, 0x1c8(r1)
    lwz r7, 0x1cc(r1)
    lwz r6, 0x1d0(r1)
    lwz r5, 0x1d4(r1)
    lwz r4, 0x1d8(r1)
    lwz r3, 0x1dc(r1)
    lwz r0, 0x1e0(r1)
    stw r27, 0x1b8(r1)
    stw r12, 0x1e4(r1)
    stw r27, 0x1e8(r1)
    stw r11, 0x1ec(r1)
    stw r10, 0x1f0(r1)
    stw r9, 0x1f4(r1)
    stw r8, 0x1f8(r1)
    stw r7, 0x1fc(r1)
    stw r6, 0x200(r1)
    stw r5, 0x204(r1)
    stw r4, 0x208(r1)
    stw r3, 0x20c(r1)
    stw r0, 0x210(r1)
    stw r12, 0x214(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028C6F4
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028C6F4:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028C714
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028C788
lbl_8028C714:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x1e8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028C788:
    li r11, 0x0
    li r0, 0x1
    sth r0, 0x172(r1)
    li r12, 0x15
    lwz r9, 0x160(r1)
    stb r11, 0x15c(r1)
    lwz r8, 0x164(r1)
    lwz r10, 0x15c(r1)
    lwz r7, 0x168(r1)
    lwz r6, 0x16c(r1)
    lwz r5, 0x170(r1)
    lwz r4, 0x174(r1)
    lwz r3, 0x178(r1)
    lwz r0, 0x17c(r1)
    stw r12, 0x158(r1)
    stw r28, 0x184(r1)
    stw r11, 0x180(r1)
    stw r12, 0x188(r1)
    stw r10, 0x18c(r1)
    stw r9, 0x190(r1)
    stw r8, 0x194(r1)
    stw r7, 0x198(r1)
    stw r6, 0x19c(r1)
    stw r5, 0x1a0(r1)
    stw r4, 0x1a4(r1)
    stw r3, 0x1a8(r1)
    stw r0, 0x1ac(r1)
    stw r11, 0x1b0(r1)
    stw r28, 0x1b4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_8028C828
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_8028C828:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_8028C848
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_8028C8BC
lbl_8028C848:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x188
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_8028C8BC:
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028CD40
lbl_8028C8CC:
    mr r3, r29
    li r26, -0x2
    bl OSRestoreInterrupts
    b lbl_8028CD20
lbl_8028C8DC:
    li r3, 0x1
    li r0, 0x4
    sth r3, 0x112(r1)
    li r12, 0x19
    lwz r10, 0x100(r1)
    stb r0, 0xfc(r1)
    lwz r9, 0x104(r1)
    lwz r11, 0xfc(r1)
    lwz r8, 0x108(r1)
    lwz r7, 0x10c(r1)
    lwz r6, 0x110(r1)
    lwz r5, 0x114(r1)
    lwz r4, 0x118(r1)
    lwz r3, 0x11c(r1)
    lwz r0, 0x120(r1)
    stw r12, 0xf8(r1)
    stw r28, 0x124(r1)
    stw r12, 0x128(r1)
    stw r11, 0x12c(r1)
    stw r10, 0x130(r1)
    stw r9, 0x134(r1)
    stw r8, 0x138(r1)
    stw r7, 0x13c(r1)
    stw r6, 0x140(r1)
    stw r5, 0x144(r1)
    stw r4, 0x148(r1)
    stw r3, 0x14c(r1)
    stw r0, 0x150(r1)
    stw r28, 0x154(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028C97C
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_8028C97C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028C9A0
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_8028CA18
lbl_8028C9A0:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x128
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_8028CA18:
    cmpwi r0, 0x0
    bne lbl_8028CA28
    li r26, -0x2
    b lbl_8028CD20
lbl_8028CA28:
    li r3, 0x0
    b lbl_8028CD40
lbl_8028CA30:
    li r3, 0x1
    li r0, 0x0
    sth r3, 0xb2(r1)
    li r12, 0x19
    lwz r10, 0xa0(r1)
    stb r0, 0x9c(r1)
    lwz r9, 0xa4(r1)
    lwz r11, 0x9c(r1)
    lwz r8, 0xa8(r1)
    lwz r7, 0xac(r1)
    lwz r6, 0xb0(r1)
    lwz r5, 0xb4(r1)
    lwz r4, 0xb8(r1)
    lwz r3, 0xbc(r1)
    lwz r0, 0xc0(r1)
    stw r12, 0x98(r1)
    stw r28, 0xc4(r1)
    stw r12, 0xc8(r1)
    stw r11, 0xcc(r1)
    stw r10, 0xd0(r1)
    stw r9, 0xd4(r1)
    stw r8, 0xd8(r1)
    stw r7, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r3, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r28, 0xf4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028CAD0
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_8028CAD0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028CAF4
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_8028CB6C
lbl_8028CAF4:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0xc8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_8028CB6C:
    cmpwi r0, 0x0
    bne lbl_8028CB7C
    li r26, -0x2
    b lbl_8028CD20
lbl_8028CB7C:
    li r3, 0x0
    b lbl_8028CD40
lbl_8028CB84:
    lis r3, 0x4a2
    li r7, 0x1
    addi r5, r3, 0x8
    li r6, 0x16
    li r0, 0x15
    stw r5, 0x14(r1)
    addi r3, r1, 0x6c
    addi r4, r1, 0x14
    stb r7, 0x9(r1)
    li r5, 0x4
    stb r7, 0x8(r1)
    stw r6, 0x68(r1)
    sth r0, 0x82(r1)
    stw r28, 0x94(r1)
    bl memcpy
    addi r3, r1, 0x70
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x71
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    lwz r29, 0x68(r1)
    lwz r12, 0x6c(r1)
    lwz r11, 0x70(r1)
    lwz r10, 0x74(r1)
    lwz r9, 0x78(r1)
    lwz r8, 0x7c(r1)
    lwz r7, 0x80(r1)
    lwz r6, 0x84(r1)
    lwz r5, 0x88(r1)
    lwz r4, 0x8c(r1)
    lwz r3, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r29, 0x38(r1)
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
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028CC6C
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_8028CC6C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028CC90
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_8028CD08
lbl_8028CC90:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x38
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_8028CD08:
    cmpwi r0, 0x0
    bne lbl_8028CD18
    li r26, -0x2
    b lbl_8028CD20
lbl_8028CD18:
    li r3, 0x0
    b lbl_8028CD40
lbl_8028CD20:
    cmpwi r28, 0x0
    beq lbl_8028CD3C
    mr r12, r28
    mr r3, r27
    mr r4, r26
    mtctr r12
    bctrl
lbl_8028CD3C:
    mr r3, r26
lbl_8028CD40:
    addi r11, r1, 0x600
    bl _restgpr_25
    lwz r0, 0x604(r1)
    mtlr r0
    addi r1, r1, 0x600
    blr
}

// ----------------------------------------------------------------------------
// fn_8028CD58
// ----------------------------------------------------------------------------
asm void fn_8028CD58() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r31, lbl_8049DDEF
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028CD8C
// ----------------------------------------------------------------------------
asm void fn_8028CD8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    mr r0, r31
    bne lbl_8028CDB4
    li r0, 0x0
lbl_8028CDB4:
    cmplwi r31, 0x7f
    blt lbl_8028CDC0
    li r0, 0x7f
lbl_8028CDC0:
    stb r0, lbl_8049DDEF
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028CDDC
// ----------------------------------------------------------------------------
asm void fn_8028CDDC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r27, lbl_8040C450@ha
    slwi r25, r3, 2
    addi r27, r27, lbl_8040C450@l
    lwzx r30, r27, r25
    bl OSDisableInterrupts
    lbz r29, 0x8cd(r30)
    mr r31, r3
    lbz r28, 0x8c1(r30)
    bl fn_80297980
    mr r26, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r24, r0
    bge lbl_8028CE3C
    lwz r0, 0x168(r30)
    add r0, r24, r0
    extsb r24, r0
lbl_8028CE3C:
    bl OSRestoreInterrupts
    lwzx r23, r27, r25
    bl OSDisableInterrupts
    lwz r22, 0x8bc(r23)
    lbz r23, 0x8c3(r23)
    bl OSRestoreInterrupts
    cmpwi r22, -0x1
    beq lbl_8028CE64
    extsb r3, r23
    bl fn_8029A380
lbl_8028CE64:
    lwzx r22, r27, r25
    bl OSDisableInterrupts
    lwz r23, 0x8bc(r22)
    lbz r22, 0x8c3(r22)
    bl OSRestoreInterrupts
    cmpwi r23, -0x1
    bne lbl_8028CE88
    li r27, 0x0
    b lbl_8028CE94
lbl_8028CE88:
    extsb r3, r22
    bl fn_8029A3DC
    mr r27, r3
lbl_8028CE94:
    lbz r22, 0x8cf(r30)
    bl fn_8029A438
    mr r30, r3
    mr r3, r31
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    bne lbl_8028CEF0
    clrlwi r0, r27, 16
    cmplwi r0, 0x3
    bgt lbl_8028CEF0
    clrlwi r4, r26, 24
    cmplwi r4, 0xa
    beq lbl_8028CEF0
    clrlslwi r3, r30, 24, 1
    addi r0, r3, 0x2
    cmpw r4, r0
    bge lbl_8028CEF0
    cmplwi r28, 0xff
    beq lbl_8028CEF0
    cmpwi r24, 0x15
    bge lbl_8028CEF0
    cmplwi r22, 0x1
    blt lbl_8028CEF8
lbl_8028CEF0:
    li r3, 0x1
    b lbl_8028CEFC
lbl_8028CEF8:
    li r3, 0x0
lbl_8028CEFC:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8028CF14
// ----------------------------------------------------------------------------
asm void fn_8028CF14() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r30, 0x8bc(r31)
    lwz r31, 0x8dc(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_8028CF70
    cmpwi r31, 0x0
    beq lbl_8028CF70
    mr r3, r29
    bl fn_8028CDDC
    cmpwi r3, 0x0
    beq lbl_8028CF78
lbl_8028CF70:
    li r3, 0x0
    b lbl_8028CF7C
lbl_8028CF78:
    li r3, 0x1
lbl_8028CF7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028CF98
// ----------------------------------------------------------------------------
asm void fn_8028CF98() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lis r6, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    mr r26, r3
    lwzx r31, r6, r0
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r30, 0x8bc(r31)
    lwz r29, 0x8dc(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    bne lbl_8028CFE8
    li r3, -0x1
    b lbl_8028D190
lbl_8028CFE8:
    cmpwi r29, 0x0
    bne lbl_8028CFF8
    li r3, -0x2
    b lbl_8028D190
lbl_8028CFF8:
    mr r3, r26
    bl fn_8028CDDC
    cmpwi r3, 0x0
    beq lbl_8028D010
    li r3, -0x2
    b lbl_8028D190
lbl_8028D010:
    clrlslwi r6, r28, 27, 3
    li r3, 0x18
    li r7, 0x15
    li r0, 0x0
    stw r3, 0x8(r1)
    mr r4, r27
    mr r5, r28
    addi r3, r1, 0xd
    sth r7, 0x22(r1)
    stb r6, 0xc(r1)
    stw r0, 0x34(r1)
    bl memcpy
    lwz r30, 0x8(r1)
    lwz r12, 0xc(r1)
    lwz r11, 0x10(r1)
    lwz r10, 0x14(r1)
    lwz r9, 0x18(r1)
    lwz r8, 0x1c(r1)
    lwz r7, 0x20(r1)
    lwz r6, 0x24(r1)
    lwz r5, 0x28(r1)
    lwz r4, 0x2c(r1)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r30, 0x38(r1)
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
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028D0CC
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_8028D0CC:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028D0F0
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_8028D168
lbl_8028D0F0:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x38
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_8028D168:
    cmpwi r0, 0x0
    bne lbl_8028D178
    li r3, -0x2
    b lbl_8028D190
lbl_8028D178:
    bl OSDisableInterrupts
    lbz r4, 0x8cf(r31)
    addi r0, r4, 0x1
    stb r0, 0x8cf(r31)
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_8028D190:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_8028D1A8
// ----------------------------------------------------------------------------
asm void fn_8028D1A8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r31, lbl_8049DDF5
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028D1DC
// ----------------------------------------------------------------------------
asm void fn_8028D1DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r31, 0x838(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028D220
// ----------------------------------------------------------------------------
asm void fn_8028D220() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8040C450@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r0, 0x838(r31)
    cmpwi r0, 0x0
    beq lbl_8028D258
    lbz r31, 0x8cb(r31)
    b lbl_8028D25C
lbl_8028D258:
    li r31, 0x0
lbl_8028D25C:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028D278
// ----------------------------------------------------------------------------
asm void fn_8028D278() {
    nofralloc
    lis r4, lbl_8040C450@ha
    slwi r3, r3, 2
    addi r4, r4, lbl_8040C450@l
    li r0, 0x0
    lwzx r4, r4, r3
    lbz r3, 0x8cc(r4)
    stb r3, 0x8cb(r4)
    stb r0, 0x994(r4)
    lbz r3, 0x8cc(r4)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stw r0, 0x838(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_8028D2B0
// ----------------------------------------------------------------------------
asm void fn_8028D2B0() {
    nofralloc
    stwu r1, -0x470(r1)
    mflr r0
    stw r0, 0x474(r1)
    addi r11, r1, 0x470
    bl _savegpr_24
    lis r6, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    mr r31, r3
    lwzx r29, r6, r0
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r26, 0x838(r29)
    lbz r25, 0x8cc(r29)
    lwz r24, 0x8bc(r29)
    lwz r30, 0x8dc(r29)
    bl OSRestoreInterrupts
    cmpwi r24, -0x1
    beq lbl_8028E2F8
    cmpwi r30, 0x0
    bne lbl_8028D310
    li r24, -0x2
    b lbl_8028E2F8
lbl_8028D310:
    cmpwi r27, 0x0
    bne lbl_8028D734
    cmpwi r26, 0x0
    bne lbl_8028D328
    li r24, 0x0
    b lbl_8028E2F8
lbl_8028D328:
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028D354
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028D354:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    addi r4, r26, 0x3
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_8028D724
    li r12, 0x0
    li r0, 0x1
    sth r0, 0x402(r1)
    li r31, 0x13
    lwz r10, 0x3f0(r1)
    stb r27, 0x8cc(r29)
    lwz r9, 0x3f4(r1)
    stb r12, 0x3ec(r1)
    lwz r8, 0x3f8(r1)
    lwz r11, 0x3ec(r1)
    lwz r7, 0x3fc(r1)
    lwz r6, 0x400(r1)
    lwz r5, 0x404(r1)
    lwz r4, 0x408(r1)
    lwz r3, 0x40c(r1)
    lwz r0, 0x410(r1)
    stw r31, 0x3e8(r1)
    stw r12, 0x414(r1)
    stw r31, 0x418(r1)
    stw r11, 0x41c(r1)
    stw r10, 0x420(r1)
    stw r9, 0x424(r1)
    stw r8, 0x428(r1)
    stw r7, 0x42c(r1)
    stw r6, 0x430(r1)
    stw r5, 0x434(r1)
    stw r4, 0x438(r1)
    stw r3, 0x43c(r1)
    stw r0, 0x440(r1)
    stw r12, 0x444(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028D410
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028D410:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028D430
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028D4A4
lbl_8028D430:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x418
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028D4A4:
    li r3, 0x1
    li r0, 0x0
    sth r3, 0x3a2(r1)
    li r27, 0x1a
    lwz r10, 0x390(r1)
    lis r12, fn_8028D278@ha
    stb r0, 0x38c(r1)
    addi r12, r12, fn_8028D278@l
    lwz r9, 0x394(r1)
    lwz r11, 0x38c(r1)
    lwz r8, 0x398(r1)
    lwz r7, 0x39c(r1)
    lwz r6, 0x3a0(r1)
    lwz r5, 0x3a4(r1)
    lwz r4, 0x3a8(r1)
    lwz r3, 0x3ac(r1)
    lwz r0, 0x3b0(r1)
    stw r27, 0x388(r1)
    stw r12, 0x3b4(r1)
    stw r27, 0x3b8(r1)
    stw r11, 0x3bc(r1)
    stw r10, 0x3c0(r1)
    stw r9, 0x3c4(r1)
    stw r8, 0x3c8(r1)
    stw r7, 0x3cc(r1)
    stw r6, 0x3d0(r1)
    stw r5, 0x3d4(r1)
    stw r4, 0x3d8(r1)
    stw r3, 0x3dc(r1)
    stw r0, 0x3e0(r1)
    stw r12, 0x3e4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028D54C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028D54C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028D56C
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028D5E0
lbl_8028D56C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x3b8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028D5E0:
    li r11, 0x0
    li r0, 0x1
    sth r0, 0x342(r1)
    li r12, 0x15
    lwz r9, 0x330(r1)
    stb r11, 0x32c(r1)
    lwz r8, 0x334(r1)
    lwz r10, 0x32c(r1)
    lwz r7, 0x338(r1)
    lwz r6, 0x33c(r1)
    lwz r5, 0x340(r1)
    lwz r4, 0x344(r1)
    lwz r3, 0x348(r1)
    lwz r0, 0x34c(r1)
    stw r12, 0x328(r1)
    stw r28, 0x354(r1)
    stw r11, 0x350(r1)
    stw r12, 0x358(r1)
    stw r10, 0x35c(r1)
    stw r9, 0x360(r1)
    stw r8, 0x364(r1)
    stw r7, 0x368(r1)
    stw r6, 0x36c(r1)
    stw r5, 0x370(r1)
    stw r4, 0x374(r1)
    stw r3, 0x378(r1)
    stw r0, 0x37c(r1)
    stw r11, 0x380(r1)
    stw r28, 0x384(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028D680
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028D680:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028D6A0
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028D714
lbl_8028D6A0:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x358
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028D714:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028E318
lbl_8028D724:
    mr r3, r30
    li r24, -0x2
    bl OSRestoreInterrupts
    b lbl_8028E2F8
lbl_8028D734:
    cmplw r27, r25
    beq lbl_8028E2F8
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028D768
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028D768:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    addi r4, r26, 0x8
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_8028E2EC
    li r3, 0x1
    li r0, 0x4
    stb r0, 0x2cc(r1)
    li r31, 0x13
    li r12, 0x0
    lwz r10, 0x2d0(r1)
    stb r27, 0x8cc(r29)
    lwz r9, 0x2d4(r1)
    stb r3, 0x994(r29)
    lwz r8, 0x2d8(r1)
    sth r3, 0x2e2(r1)
    lwz r7, 0x2dc(r1)
    lwz r11, 0x2cc(r1)
    lwz r6, 0x2e0(r1)
    lwz r5, 0x2e4(r1)
    lwz r4, 0x2e8(r1)
    lwz r3, 0x2ec(r1)
    lwz r0, 0x2f0(r1)
    stw r31, 0x2c8(r1)
    stw r12, 0x2f4(r1)
    stw r31, 0x2f8(r1)
    stw r11, 0x2fc(r1)
    stw r10, 0x300(r1)
    stw r9, 0x304(r1)
    stw r8, 0x308(r1)
    stw r7, 0x30c(r1)
    stw r6, 0x310(r1)
    stw r5, 0x314(r1)
    stw r4, 0x318(r1)
    stw r3, 0x31c(r1)
    stw r0, 0x320(r1)
    stw r12, 0x324(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028D82C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028D82C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028D84C
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028D8C0
lbl_8028D84C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x2f8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028D8C0:
    li r3, 0x1
    li r0, 0x4
    sth r3, 0x282(r1)
    li r31, 0x1a
    li r12, 0x0
    lwz r10, 0x270(r1)
    stb r0, 0x26c(r1)
    lwz r9, 0x274(r1)
    lwz r11, 0x26c(r1)
    lwz r8, 0x278(r1)
    lwz r7, 0x27c(r1)
    lwz r6, 0x280(r1)
    lwz r5, 0x284(r1)
    lwz r4, 0x288(r1)
    lwz r3, 0x28c(r1)
    lwz r0, 0x290(r1)
    stw r31, 0x268(r1)
    stw r12, 0x294(r1)
    stw r31, 0x298(r1)
    stw r11, 0x29c(r1)
    stw r10, 0x2a0(r1)
    stw r9, 0x2a4(r1)
    stw r8, 0x2a8(r1)
    stw r7, 0x2ac(r1)
    stw r6, 0x2b0(r1)
    stw r5, 0x2b4(r1)
    stw r4, 0x2b8(r1)
    stw r3, 0x2bc(r1)
    stw r0, 0x2c0(r1)
    stw r12, 0x2c4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028D964
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028D964:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028D984
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028D9F8
lbl_8028D984:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x298
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028D9F8:
    lis r3, 0x4b0
    li r9, 0x1
    addi r8, r3, 0x30
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r9, 0xf(r1)
    addi r3, r1, 0x23c
    addi r4, r1, 0x20
    li r5, 0x4
    stw r8, 0x20(r1)
    stb r9, 0xe(r1)
    stw r7, 0x238(r1)
    sth r6, 0x252(r1)
    stw r0, 0x264(r1)
    bl memcpy
    addi r3, r1, 0x240
    addi r4, r1, 0xe
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x241
    addi r4, r1, 0xf
    li r5, 0x1
    bl memcpy
    lwz r31, 0x238(r1)
    lwz r12, 0x23c(r1)
    lwz r11, 0x240(r1)
    lwz r10, 0x244(r1)
    lwz r9, 0x248(r1)
    lwz r8, 0x24c(r1)
    lwz r7, 0x250(r1)
    lwz r6, 0x254(r1)
    lwz r5, 0x258(r1)
    lwz r4, 0x25c(r1)
    lwz r3, 0x260(r1)
    lwz r0, 0x264(r1)
    stw r31, 0x208(r1)
    stw r12, 0x20c(r1)
    stw r11, 0x210(r1)
    stw r10, 0x214(r1)
    stw r9, 0x218(r1)
    stw r8, 0x21c(r1)
    stw r7, 0x220(r1)
    stw r6, 0x224(r1)
    stw r5, 0x228(r1)
    stw r4, 0x22c(r1)
    stw r3, 0x230(r1)
    stw r0, 0x234(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028DAE4
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028DAE4:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028DB04
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028DB78
lbl_8028DB04:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x208
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028DB78:
    lbz r5, lbl_8049DDF5
    lis r9, 0x4b0
    lis r4, lbl_80341508@ha
    li r3, 0x9
    subi r8, r5, 0x1
    li r5, 0x16
    slwi r7, r8, 3
    li r6, 0x15
    li r0, 0x0
    stb r3, 0xd(r1)
    add r7, r7, r8
    addi r4, r4, lbl_80341508@l
    stw r5, 0x1a8(r1)
    add r26, r4, r7
    addi r3, r1, 0x1ac
    addi r4, r1, 0x1c
    stw r9, 0x1c(r1)
    li r5, 0x4
    sth r6, 0x1c2(r1)
    stw r0, 0x1d4(r1)
    bl memcpy
    addi r3, r1, 0x1b0
    addi r4, r1, 0xd
    li r5, 0x1
    bl memcpy
    mr r4, r26
    addi r3, r1, 0x1b1
    li r5, 0x9
    bl memcpy
    lwz r31, 0x1a8(r1)
    lwz r12, 0x1ac(r1)
    lwz r11, 0x1b0(r1)
    lwz r10, 0x1b4(r1)
    lwz r9, 0x1b8(r1)
    lwz r8, 0x1bc(r1)
    lwz r7, 0x1c0(r1)
    lwz r6, 0x1c4(r1)
    lwz r5, 0x1c8(r1)
    lwz r4, 0x1cc(r1)
    lwz r3, 0x1d0(r1)
    lwz r0, 0x1d4(r1)
    stw r31, 0x1d8(r1)
    stw r12, 0x1dc(r1)
    stw r11, 0x1e0(r1)
    stw r10, 0x1e4(r1)
    stw r9, 0x1e8(r1)
    stw r8, 0x1ec(r1)
    stw r7, 0x1f0(r1)
    stw r6, 0x1f4(r1)
    stw r5, 0x1f8(r1)
    stw r4, 0x1fc(r1)
    stw r3, 0x200(r1)
    stw r0, 0x204(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028DC78
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028DC78:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028DC98
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028DD0C
lbl_8028DC98:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x1d8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028DD0C:
    lbz r3, lbl_8049DDF5
    lis r4, 0x4b0
    addi r8, r4, 0x1a
    li r5, 0x16
    subi r7, r3, 0x1
    lis r4, lbl_80341538@ha
    li r3, 0x2
    li r6, 0x15
    li r0, 0x0
    stb r3, 0xc(r1)
    slwi r7, r7, 1
    addi r4, r4, lbl_80341538@l
    stw r5, 0x148(r1)
    add r26, r4, r7
    addi r3, r1, 0x14c
    addi r4, r1, 0x18
    stw r8, 0x18(r1)
    li r5, 0x4
    sth r6, 0x162(r1)
    stw r0, 0x174(r1)
    bl memcpy
    addi r3, r1, 0x150
    addi r4, r1, 0xc
    li r5, 0x1
    bl memcpy
    mr r4, r26
    addi r3, r1, 0x151
    li r5, 0x2
    bl memcpy
    lwz r31, 0x148(r1)
    lwz r12, 0x14c(r1)
    lwz r11, 0x150(r1)
    lwz r10, 0x154(r1)
    lwz r9, 0x158(r1)
    lwz r8, 0x15c(r1)
    lwz r7, 0x160(r1)
    lwz r6, 0x164(r1)
    lwz r5, 0x168(r1)
    lwz r4, 0x16c(r1)
    lwz r3, 0x170(r1)
    lwz r0, 0x174(r1)
    stw r31, 0x178(r1)
    stw r12, 0x17c(r1)
    stw r11, 0x180(r1)
    stw r10, 0x184(r1)
    stw r9, 0x188(r1)
    stw r8, 0x18c(r1)
    stw r7, 0x190(r1)
    stw r6, 0x194(r1)
    stw r5, 0x198(r1)
    stw r4, 0x19c(r1)
    stw r3, 0x1a0(r1)
    stw r0, 0x1a4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028DE0C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028DE0C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028DE2C
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028DEA0
lbl_8028DE2C:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x178
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028DEA0:
    lis r3, 0x4b0
    li r8, 0x1
    addi r9, r3, 0x33
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r27, 0xb(r1)
    addi r3, r1, 0x11c
    addi r4, r1, 0x14
    li r5, 0x4
    stw r9, 0x14(r1)
    stb r8, 0xa(r1)
    stw r7, 0x118(r1)
    sth r6, 0x132(r1)
    stw r0, 0x144(r1)
    bl memcpy
    addi r3, r1, 0x120
    addi r4, r1, 0xa
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x121
    addi r4, r1, 0xb
    li r5, 0x1
    bl memcpy
    lwz r27, 0x118(r1)
    lwz r12, 0x11c(r1)
    lwz r11, 0x120(r1)
    lwz r10, 0x124(r1)
    lwz r9, 0x128(r1)
    lwz r8, 0x12c(r1)
    lwz r7, 0x130(r1)
    lwz r6, 0x134(r1)
    lwz r5, 0x138(r1)
    lwz r4, 0x13c(r1)
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r27, 0xe8(r1)
    stw r12, 0xec(r1)
    stw r11, 0xf0(r1)
    stw r10, 0xf4(r1)
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r6, 0x104(r1)
    stw r5, 0x108(r1)
    stw r4, 0x10c(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028DF8C
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028DF8C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028DFAC
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028E020
lbl_8028DFAC:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0xe8
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028E020:
    lis r3, 0x4b0
    lis r6, fn_8028D278@ha
    addi r9, r3, 0x30
    li r8, 0x1
    li r3, 0x8
    addi r6, r6, fn_8028D278@l
    li r7, 0x16
    li r0, 0x15
    stb r3, 0x9(r1)
    addi r3, r1, 0xbc
    addi r4, r1, 0x10
    li r5, 0x4
    stw r9, 0x10(r1)
    stb r8, 0x8(r1)
    stw r7, 0xb8(r1)
    sth r0, 0xd2(r1)
    stw r6, 0xe4(r1)
    bl memcpy
    addi r3, r1, 0xc0
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0xc1
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    lwz r27, 0xb8(r1)
    lwz r12, 0xbc(r1)
    lwz r11, 0xc0(r1)
    lwz r10, 0xc4(r1)
    lwz r9, 0xc8(r1)
    lwz r8, 0xcc(r1)
    lwz r7, 0xd0(r1)
    lwz r6, 0xd4(r1)
    lwz r5, 0xd8(r1)
    lwz r4, 0xdc(r1)
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r27, 0x88(r1)
    stw r12, 0x8c(r1)
    stw r11, 0x90(r1)
    stw r10, 0x94(r1)
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028E114
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028E114:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028E134
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028E1A8
lbl_8028E134:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x88
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028E1A8:
    li r11, 0x0
    li r0, 0x1
    sth r0, 0x42(r1)
    li r12, 0x15
    lwz r9, 0x30(r1)
    stb r11, 0x2c(r1)
    lwz r8, 0x34(r1)
    lwz r10, 0x2c(r1)
    lwz r7, 0x38(r1)
    lwz r6, 0x3c(r1)
    lwz r5, 0x40(r1)
    lwz r4, 0x44(r1)
    lwz r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r12, 0x28(r1)
    stw r28, 0x54(r1)
    stw r11, 0x50(r1)
    stw r12, 0x58(r1)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r11, 0x80(r1)
    stw r28, 0x84(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r29)
    lbz r0, 0x161(r29)
    subf r0, r4, r0
    extsb. r26, r0
    bge lbl_8028E248
    lwz r0, 0x168(r29)
    add r0, r26, r0
    extsb r26, r0
lbl_8028E248:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r29)
    subi r0, r3, 0x1
    cmplw r0, r26
    bne lbl_8028E268
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8028E2DC
lbl_8028E268:
    lbz r0, 0x161(r29)
    li r4, 0x0
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r29)
    addi r4, r1, 0x58
    lwz r3, 0x164(r29)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r29)
    mr r3, r31
    lwz r4, 0x168(r29)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r29)
    bl OSRestoreInterrupts
lbl_8028E2DC:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028E318
lbl_8028E2EC:
    mr r3, r30
    li r24, -0x2
    bl OSRestoreInterrupts
lbl_8028E2F8:
    cmpwi r28, 0x0
    beq lbl_8028E314
    mr r12, r28
    mr r3, r31
    mr r4, r24
    mtctr r12
    bctrl
lbl_8028E314:
    mr r3, r24
lbl_8028E318:
    addi r11, r1, 0x470
    bl _restgpr_24
    lwz r0, 0x474(r1)
    mtlr r0
    addi r1, r1, 0x470
    blr
}

// ----------------------------------------------------------------------------
// fn_8028E330
// ----------------------------------------------------------------------------
asm void fn_8028E330() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r6, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    mr r31, r3
    lwzx r28, r6, r0
    mr r26, r4
    mr r27, r5
    bl OSDisableInterrupts
    lwz r30, 0x8bc(r28)
    lwz r29, 0x8dc(r28)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_8028E50C
    cmpwi r29, 0x0
    beq lbl_8028E38C
    bl fn_802943B0
    cmpwi r3, 0x0
    bne lbl_8028E394
lbl_8028E38C:
    li r30, -0x2
    b lbl_8028E50C
lbl_8028E394:
    li r3, 0xaa
    li r0, 0x55
    stb r3, 0xa(r1)
    stb r3, 0x9(r1)
    stb r3, 0x8(r1)
    stb r0, 0xb(r1)
    stb r26, 0xe(r1)
    stb r26, 0xd(r1)
    stb r26, 0xc(r1)
    bl OSDisableInterrupts
    cmpwi r26, 0x55
    mr r29, r3
    beq lbl_8028E498
    bge lbl_8028E3D8
    cmpwi r26, 0x0
    beq lbl_8028E4CC
    b lbl_8028E500
lbl_8028E3D8:
    cmpwi r26, 0xaa
    beq lbl_8028E3E4
    b lbl_8028E500
lbl_8028E3E4:
    bl OSDisableInterrupts
    lbz r4, 0x160(r28)
    lbz r0, 0x161(r28)
    subf r0, r4, r0
    extsb. r30, r0
    bge lbl_8028E408
    lwz r0, 0x168(r28)
    add r0, r30, r0
    extsb r30, r0
lbl_8028E408:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r28)
    addi r4, r30, 0x4
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_8028E490
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x7
    li r6, 0xf1
    li r7, 0x0
    bl fn_802941C8
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xf1
    li r7, 0x0
    bl fn_802941C8
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xf1
    li r7, 0x0
    bl fn_802941C8
    mr r3, r31
    mr r7, r27
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xf1
    bl fn_802941C8
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028E52C
lbl_8028E490:
    li r30, -0x2
    b lbl_8028E504
lbl_8028E498:
    mr r3, r31
    mr r7, r27
    addi r4, r1, 0x8
    li r5, 0x7
    li r6, 0xf1
    bl fn_802941C8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8028E504
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028E52C
lbl_8028E4CC:
    mr r3, r31
    mr r7, r27
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0xf1
    bl fn_802941C8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8028E504
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028E52C
lbl_8028E500:
    li r30, -0x2
lbl_8028E504:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_8028E50C:
    cmpwi r27, 0x0
    beq lbl_8028E528
    mr r12, r27
    mr r3, r31
    mr r4, r30
    mtctr r12
    bctrl
lbl_8028E528:
    mr r3, r30
lbl_8028E52C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8028E544
// ----------------------------------------------------------------------------
asm void fn_8028E544() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r5, 0x20
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    blt lbl_8028E580
    cmplwi r5, 0x24
    blt lbl_8028E590
lbl_8028E580:
    cmplwi r5, 0xf1
    blt lbl_8028E5B8
    cmplwi r5, 0xf6
    bge lbl_8028E5B8
lbl_8028E590:
    bl fn_802943B0
    cmpwi r3, 0x0
    beq lbl_8028E5B8
    mr r3, r28
    mr r4, r29
    mr r6, r30
    mr r7, r31
    li r5, 0x1
    bl fn_80294294
    b lbl_8028E5BC
lbl_8028E5B8:
    li r3, -0x2
lbl_8028E5BC:
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
// fn_8028E5DC
// ----------------------------------------------------------------------------
asm void fn_8028E5DC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmplwi r5, 0x24
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    blt lbl_8028E61C
    add r3, r5, r6
    subi r0, r3, 0x1
    cmpwi r0, 0x40
    blt lbl_8028E634
lbl_8028E61C:
    cmplwi r5, 0x50
    blt lbl_8028E65C
    add r3, r5, r6
    subi r0, r3, 0x1
    cmpwi r0, 0x70
    bge lbl_8028E65C
lbl_8028E634:
    bl fn_802943B0
    cmpwi r3, 0x0
    beq lbl_8028E65C
    mr r3, r27
    mr r4, r28
    mr r5, r30
    mr r6, r29
    mr r7, r31
    bl fn_80294294
    b lbl_8028E660
lbl_8028E65C:
    li r3, -0x2
lbl_8028E660:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8028E678
// ----------------------------------------------------------------------------
asm void fn_8028E678() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r8, 0x12
    li r7, 0x2
    stw r0, 0x84(r1)
    neg r0, r5
    or r0, r0, r5
    cmplwi r4, 0xf
    stw r31, 0x7c(r1)
    srawi r5, r0, 31
    li r0, 0x4
    stw r30, 0x78(r1)
    andc r0, r0, r5
    mr r30, r3
    stw r29, 0x74(r1)
    stw r8, 0x38(r1)
    sth r7, 0x52(r1)
    stb r0, 0x3c(r1)
    stw r6, 0x64(r1)
    bgt lbl_8028E79C
    lis r3, jumptable_8036C560@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8036C560@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x30
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x31
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x33
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x32
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x32
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x3e
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x32
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x37
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x34
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x35
    stb r0, 0x3d(r1)
    b lbl_8028E79C
    li r0, 0x3d
    stb r0, 0x3d(r1)
lbl_8028E79C:
    lwz r31, 0x38(r1)
    lwz r12, 0x3c(r1)
    lwz r11, 0x40(r1)
    lwz r10, 0x44(r1)
    lwz r9, 0x48(r1)
    lwz r8, 0x4c(r1)
    lwz r7, 0x50(r1)
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r31, 0x8(r1)
    stw r12, 0xc(r1)
    stw r11, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r30)
    lbz r0, 0x1(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028E828
    lwz r0, 0x8(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_8028E828:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028E84C
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028E8C4
lbl_8028E84C:
    lbz r0, 0x1(r30)
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r30)
    addi r4, r1, 0x8
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r30)
    mr r3, r31
    lwz r4, 0x8(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8028E8C4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_8028E8E0
// ----------------------------------------------------------------------------
asm void fn_8028E8E0() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r8, 0x1
    li r7, 0x16
    stw r0, 0x84(r1)
    li r0, 0x15
    stw r31, 0x7c(r1)
    mr r31, r3
    addi r3, r1, 0x14
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stb r4, 0x8(r1)
    addi r4, r1, 0xc
    stw r5, 0xc(r1)
    li r5, 0x4
    stb r8, 0x9(r1)
    stw r7, 0x10(r1)
    sth r0, 0x2a(r1)
    stw r6, 0x3c(r1)
    bl memcpy
    addi r3, r1, 0x18
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x19
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    lwz r30, 0x10(r1)
    lwz r12, 0x14(r1)
    lwz r11, 0x18(r1)
    lwz r10, 0x1c(r1)
    lwz r9, 0x20(r1)
    lwz r8, 0x24(r1)
    lwz r7, 0x28(r1)
    lwz r6, 0x2c(r1)
    lwz r5, 0x30(r1)
    lwz r4, 0x34(r1)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r12, 0x44(r1)
    stw r11, 0x48(r1)
    stw r10, 0x4c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r31)
    lbz r0, 0x1(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028E9DC
    lwz r0, 0x8(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_8028E9DC:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028EA00
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028EA78
lbl_8028EA00:
    lbz r0, 0x1(r31)
    li r4, 0x0
    lwz r3, 0x4(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r31)
    addi r4, r1, 0x40
    lwz r3, 0x4(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r31)
    mr r3, r30
    lwz r4, 0x8(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r31)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8028EA78:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_8028EA94
// ----------------------------------------------------------------------------
asm void fn_8028EA94() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    clrlwi r9, r5, 27
    li r8, 0x16
    stw r0, 0x84(r1)
    li r0, 0x15
    stw r31, 0x7c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x44
    stw r29, 0x74(r1)
    mr r29, r5
    li r5, 0x4
    stw r6, 0x8(r1)
    stb r9, 0xc(r1)
    stw r8, 0x40(r1)
    sth r0, 0x5a(r1)
    stw r7, 0x6c(r1)
    bl memcpy
    addi r3, r1, 0x48
    addi r4, r1, 0xc
    li r5, 0x1
    bl memcpy
    mr r4, r31
    mr r5, r29
    addi r3, r1, 0x49
    bl memcpy
    lwz r31, 0x40(r1)
    lwz r12, 0x44(r1)
    lwz r11, 0x48(r1)
    lwz r10, 0x4c(r1)
    lwz r9, 0x50(r1)
    lwz r8, 0x54(r1)
    lwz r7, 0x58(r1)
    lwz r6, 0x5c(r1)
    lwz r5, 0x60(r1)
    lwz r4, 0x64(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r30)
    lbz r0, 0x1(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028EB94
    lwz r0, 0x8(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_8028EB94:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028EBB8
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028EC30
lbl_8028EBB8:
    lbz r0, 0x1(r30)
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r30)
    addi r4, r1, 0x10
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r30)
    mr r3, r31
    lwz r4, 0x8(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8028EC30:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_8028EC4C
// ----------------------------------------------------------------------------
asm void fn_8028EC4C() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r8, 0x17
    stw r0, 0x84(r1)
    li r0, 0x6
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x44
    stw r29, 0x74(r1)
    mr r29, r4
    addi r4, r1, 0xc
    sth r5, 0x8(r1)
    li r5, 0x4
    stw r6, 0xc(r1)
    stw r8, 0x40(r1)
    sth r0, 0x5a(r1)
    stw r7, 0x6c(r1)
    bl memcpy
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    lwz r12, 0xc(r1)
    sth r0, 0x60(r1)
    lwz r11, 0x40(r1)
    lwz r10, 0x44(r1)
    lwz r9, 0x48(r1)
    lwz r8, 0x4c(r1)
    lwz r7, 0x50(r1)
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x60(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r29, 0x5c(r1)
    stw r12, 0x64(r1)
    stw r11, 0x10(r1)
    stw r10, 0x14(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r29, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r12, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x0(r30)
    lbz r0, 0x1(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_8028ED40
    lwz r0, 0x8(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_8028ED40:
    bl OSRestoreInterrupts
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_8028ED64
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8028EDDC
lbl_8028ED64:
    lbz r0, 0x1(r30)
    li r4, 0x0
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x1(r30)
    addi r4, r1, 0x10
    lwz r3, 0x4(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x1(r30)
    mr r3, r31
    lwz r4, 0x8(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x1(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8028EDDC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_8028EDF8
// ----------------------------------------------------------------------------
asm void fn_8028EDF8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x8(r30)
    li r4, 0x0
    mr r31, r3
    stb r4, 0x0(r30)
    mulli r5, r0, 0x30
    lwz r3, 0x4(r30)
    stb r4, 0x1(r30)
    li r4, 0x0
    bl memset
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8028EE58
// ----------------------------------------------------------------------------
asm void fn_8028EE58() {
    nofralloc
    stw r3, lbl_8049DDE0
    blr
}

