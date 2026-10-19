#include "types.h"

// Translation unit: src/revolution/usb/unk_8032B024.cpp
// Total functions: 171

// Small Data symbols (@sda21)
extern float lbl_8049D3B8;
extern float lbl_8049D3C0;
extern float lbl_8049D3C8;
extern float lbl_8049D3D0;
extern float lbl_8049D3D8;
extern float lbl_8049D3E0;
extern float lbl_8049D3E8;
extern float lbl_8049D3F0;
extern float lbl_8049D3F4;
extern float lbl_8049D3FC;
extern float lbl_8049D400;
extern float lbl_8049D408;
extern float lbl_8049D40C;
extern float lbl_8049D410;
extern float lbl_8049D418;
extern float lbl_8049D41C;
extern float lbl_8049D420;
extern float lbl_8049D428;
extern float lbl_8049D430;
extern float lbl_8049D438;
extern float lbl_8049D43C;
extern float lbl_8049D448;
extern float lbl_8049D450;
extern float lbl_8049D454;
extern float lbl_8049D458;
extern float lbl_8049D460;
extern float lbl_8049E558;
extern float lbl_8049E55C;
extern float lbl_8049E560;
extern float lbl_8049E564;
extern float lbl_8049E568;
extern float lbl_8049E56C;
extern float lbl_8049E570;
extern float lbl_8049E578;
extern float lbl_8049E57C;

// Global data symbols (@ha/@l)
extern u8 lbl_803421C0[];
extern u8 lbl_803421E0[];
extern u8 lbl_803421F8[];
extern u8 lbl_80342220[];
extern u8 lbl_80342294[];
extern u8 lbl_8038E4B8[];
extern u8 lbl_8038E4D0[];
extern u8 lbl_8038E4E8[];
extern u8 lbl_8038E4FC[];
extern u8 lbl_8038E518[];
extern u8 lbl_8038E524[];
extern u8 lbl_8038E560[];
extern u8 lbl_8038E5B8[];
extern u8 lbl_8038E6B8[];
extern u8 lbl_8038E778[];
extern u8 lbl_8038E7D0[];
extern u8 lbl_8038E818[];
extern u8 lbl_8038E858[];
extern u8 lbl_8038E874[];
extern u8 lbl_8038E8B0[];
extern u8 lbl_8038E8F0[];
extern u8 lbl_8038E900[];
extern u8 lbl_8038E948[];
extern u8 lbl_8038E9A4[];
extern u8 lbl_8038EA18[];
extern u8 lbl_8038EB10[];
extern u8 lbl_8038EB28[];
extern u8 lbl_8038EB58[];
extern u8 lbl_8038ED10[];
extern u8 lbl_8046F360[];
extern u8 lbl_8046F380[];
extern u8 lbl_8046F3C0[];
extern u8 lbl_8046F400[];

// Forward declarations
extern void GetPaneRect__Q34nw4r3lyt4PaneCFv();
extern void IOS_Close();
extern void IOS_Ioctlv();
extern void IOS_Open();
extern void IPCGetBufferHi();
extern void IPCGetBufferLo();
extern void IPCSetBufferLo();
extern void NWC24ResumeScheduler();
extern void NWC24SuspendScheduler();
extern void NWC24iRequestGenerateUserId();
extern void OSDisableInterrupts();
extern void OSInitMessageQueue();
extern void OSInitMutex();
extern void OSLockMutex();
extern void OSPanic();
extern void OSReceiveMessage();
extern void OSRegisterVersion();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSSendMessage();
extern void OSUnlockMutex();
extern void SetPlayerPriority__Q44nw4r3snd6detail9WaveSoundFi();
extern void _restgpr_16();
extern void _restgpr_19();
extern void _restgpr_21();
extern void _restgpr_22();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_16();
extern void _savegpr_19();
extern void _savegpr_21();
extern void _savegpr_22();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_8019AFCC();
extern void fn_803150C4();
extern void fn_8031AFC0();
extern void fn_8031AFC4();
extern void fn_8031C81C();
extern void fn_8031CDF0();
extern void fn_8031D320();
extern void fn_8031D460();
extern void fn_8032B024();
extern void fn_8032B11C();
extern void fn_8032B274();
extern void fn_8032B378();
extern void fn_8032B4A0();
extern void fn_8032B61C();
extern void fn_8032B7B0();
extern void fn_8032B8A0();
extern void fn_8032BB18();
extern void fn_8032BB98();
extern void fn_8032BD10();
extern void fn_8032BD18();
extern void fn_8032BD1C();
extern void fn_8032C0C4();
extern void fn_8032C1C4();
extern void fn_8032C204();
extern void fn_8032C2F4();
extern void fn_8032C41C();
extern void fn_8032C428();
extern void fn_8032C8F0();
extern void fn_8032CB2C();
extern void fn_8032CB3C();
extern void fn_8032CCE0();
extern void fn_8032CD10();
extern void fn_8032CD6C();
extern void fn_8032CDB0();
extern void fn_8032CDB8();
extern void fn_8032CDC0();
extern void fn_8032CDC8();
extern void fn_8032CF58();
extern void fn_8032D048();
extern void fn_8032D184();
extern void fn_8032D1CC();
extern void fn_8032D1EC();
extern void fn_8032D378();
extern void fn_8032D388();
extern void fn_8032D454();
extern void fn_8032D570();
extern void fn_8032D5C4();
extern void fn_8032D5C8();
extern void fn_8032D5D4();
extern void fn_8032D614();
extern void fn_8032D618();
extern void fn_8032D61C();
extern void fn_8032D620();
extern void fn_8032D6B4();
extern void fn_8032D6FC();
extern void fn_8032D724();
extern void fn_8032D730();
extern void fn_8032D7C8();
extern void fn_8032D7EC();
extern void fn_8032D9E4();
extern void fn_8032DADC();
extern void fn_8032DCCC();
extern void fn_8032DE10();
extern void fn_8032DE2C();
extern void fn_8032DE4C();
extern void fn_8032DE88();
extern void fn_8032DE94();
extern void fn_8032E4BC();
extern void fn_8032E5C0();
extern void fn_8032E698();
extern void fn_8032E758();
extern void fn_8032E81C();
extern void fn_8032E8C4();
extern void fn_8032E990();
extern void fn_8032EAC4();
extern void fn_8032EB1C();
extern void fn_8032EBF0();
extern void fn_8032EC5C();
extern void fn_8032ED1C();
extern void fn_8032EECC();
extern void fn_8032EFD8();
extern void fn_8032F0B4();
extern void fn_8032F24C();
extern void fn_8032F2F8();
extern void fn_8032F34C();
extern void fn_8032F3C0();
extern void fn_8032F3C4();
extern void fn_8032F3C8();
extern void fn_8032F3CC();
extern void fn_8032F3D8();
extern void fn_8032F4A4();
extern void fn_8032F514();
extern void fn_8032F588();
extern void fn_8032F628();
extern void fn_8032F74C();
extern void fn_8032F7EC();
extern void fn_8032F968();
extern void fn_8032FA1C();
extern void fn_8032FAAC();
extern void fn_8032FB58();
extern void fn_8032FD34();
extern void fn_8032FD40();
extern void fn_8032FD4C();
extern void fn_8032FD54();
extern void fn_8032FE1C();
extern void fn_8032FEFC();
extern void fn_80330000();
extern void fn_80330190();
extern void fn_8033025C();
extern void fn_80330308();
extern void fn_803305B0();
extern void fn_803307A8();
extern void fn_803308A0();
extern void fn_80330A28();
extern void fn_80330DCC();
extern void fn_80331090();
extern void fn_80331210();
extern void fn_803312C8();
extern void fn_8033141C();
extern void fn_803315D8();
extern void fn_8033172C();
extern void fn_80331BC8();
extern void fn_80331DB4();
extern void fn_803320E4();
extern void fn_803326D4();
extern void fn_803328D8();
extern void fn_80332A20();
extern void fn_80332AAC();
extern void fn_80332B48();
extern void fn_80332BBC();
extern void fn_80332C08();
extern void fn_80332C94();
extern void fn_80332CC8();
extern void fn_80332CEC();
extern void fn_80332ED0();
extern void fn_80332FA0();
extern void fn_80333024();
extern void fn_803330E8();
extern void fn_803331AC();
extern void fn_80333208();
extern void fn_80333248();
extern void fn_803332CC();
extern void fn_80333334();
extern void fn_80333394();
extern void fn_803333F0();
extern void fn_80333560();
extern void fn_80333688();
extern void fn_803336E8();
extern void fn_80333758();
extern void fn_803338E4();
extern void fn_80333914();
extern void fn_80333944();
extern void fn_8033397C();
extern void fn_803339B4();
extern void fn_803339BC();
extern void fn_803339C4();
extern void fn_803339CC();
extern void fn_80333A10();
extern void fn_80333A54();
extern void fn_80333B5C();
extern void fn_80333C74();
extern void fn_80333D8C();
extern void fn_80333DE4();
extern void fn_80333E4C();
extern void fn_80333E50();
extern void fn_80333E58();
extern void fn_80333E60();
extern void fn_80333E68();
extern void fn_80333E70();
extern void fn_80333E80();
extern void fn_80333E98();
extern void fn_80333EF8();
extern void fn_80334060();
extern void fn_80334098();
extern void fn_803340AC();
extern void fn_803340C0();
extern void fn_803340D4();
extern void fn_80334850();
extern void fn_803360B0();
extern void fn_80336274();
extern void fn_80336400();
extern void fn_8033660C();
extern void fn_80336658();
extern void fn_803367AC();
extern void fn_80336B2C();
extern void fn_803371D0();
extern void fn_803374B4();
extern void fn_80337518();
extern void fn_803377F8();
extern void fn_80337950();
extern void fn_80337A18();
extern void fn_80337AC4();
extern void fn_80337D94();
extern void fn_80338054();
extern void fn_80338100();
extern void fn_8033826C();
extern void fn_803383B4();
extern void fn_8033847C();
extern void memcpy();
extern void memset();
extern void strcmp();
extern void strlen();

// ----------------------------------------------------------------------------
// fn_8032B024
// ----------------------------------------------------------------------------
asm void fn_8032B024() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    cmplw r3, r31
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_8032B054
    li r3, -0x3
    b lbl_8032B100
lbl_8032B054:
    bl fn_8032B7B0
    lis r3, lbl_8038E4B8@ha
    li r4, 0x0
    addi r3, r3, lbl_8038E4B8@l
    li r5, 0x3
    bl fn_8032B61C
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8032B0F0
    lis r3, lbl_8046F380@ha
    lwz r30, lbl_8049E55C
    addi r3, r3, lbl_8046F380@l
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    blt lbl_8032B098
    cmpwi r0, 0x3
    blt lbl_8032B0A0
lbl_8032B098:
    li r31, -0x7
    b lbl_8032B0F0
lbl_8032B0A0:
    mulli r0, r0, 0x91c
    add r4, r30, r0
    lbz r0, 0x8(r4)
    clrlwi. r0, r0, 31
    beq lbl_8032B0D0
    li r0, 0x2
    addi r3, r29, 0x2
    stb r0, 0x0(r29)
    addi r4, r4, 0x7c8
    li r5, 0x4
    bl memcpy
    b lbl_8032B0E8
lbl_8032B0D0:
    li r0, 0x1
    addi r3, r29, 0x2
    stb r0, 0x0(r29)
    addi r4, r4, 0x7c8
    li r5, 0x15c
    bl memcpy
lbl_8032B0E8:
    lbz r0, 0x6(r30)
    stb r0, 0x1(r29)
lbl_8032B0F0:
    lis r3, lbl_8046F360@ha
    addi r3, r3, lbl_8046F360@l
    bl OSUnlockMutex
    mr r3, r31
lbl_8032B100:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032B11C
// ----------------------------------------------------------------------------
asm void fn_8032B11C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    cmplw r3, r30
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bne lbl_8032B150
    li r3, -0x3
    b lbl_8032B254
lbl_8032B150:
    bl fn_8032B7B0
    lis r3, lbl_8038E4D0@ha
    li r4, 0x0
    addi r3, r3, lbl_8038E4D0@l
    li r5, 0x3
    bl fn_8032B61C
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8032B244
    lis r3, lbl_8046F380@ha
    lwz r29, lbl_8049E55C
    addi r3, r3, lbl_8046F380@l
    lwz r28, 0x4(r3)
    cmpwi r28, 0x0
    blt lbl_8032B194
    cmpwi r28, 0x3
    blt lbl_8032B19C
lbl_8032B194:
    li r30, -0x7
    b lbl_8032B244
lbl_8032B19C:
    mulli r0, r28, 0x91c
    addi r3, r31, 0x1c
    li r5, 0xc
    add r4, r29, r0
    addi r4, r4, 0x20
    bl memcpy
    mulli r0, r28, 0x91c
    add r4, r29, r0
    lbz r0, 0x8(r4)
    rlwinm. r0, r0, 0, 29, 30
    beq lbl_8032B1E4
    li r0, 0x1
    addi r3, r31, 0x8
    stw r0, 0x0(r31)
    addi r4, r4, 0xc
    li r5, 0x14
    bl memcpy
    b lbl_8032B1FC
lbl_8032B1E4:
    li r0, 0x0
    addi r3, r31, 0x8
    stw r0, 0x0(r31)
    addi r4, r4, 0xc
    li r5, 0x14
    bl memcpy
lbl_8032B1FC:
    mulli r0, r28, 0x91c
    add r4, r29, r0
    lbz r0, 0x8(r4)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_8032B22C
    li r0, 0x1
    addi r3, r31, 0x28
    stw r0, 0x4(r31)
    addi r4, r4, 0x2c
    li r5, 0x79c
    bl memcpy
    b lbl_8032B244
lbl_8032B22C:
    li r0, 0x0
    addi r3, r31, 0x28
    stw r0, 0x4(r31)
    li r4, 0x0
    li r5, 0x79c
    bl memset
lbl_8032B244:
    lis r3, lbl_8046F360@ha
    addi r3, r3, lbl_8046F360@l
    bl OSUnlockMutex
    mr r3, r30
lbl_8032B254:
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
// fn_8032B274
// ----------------------------------------------------------------------------
asm void fn_8032B274() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8046F360@ha
    addi r30, r30, lbl_8046F360@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_8031C81C
    cmpwi r3, 0x0
    bne lbl_8032B2AC
    li r3, -0x5
    b lbl_8032B358
lbl_8032B2AC:
    bl fn_8032B7B0
    lis r3, lbl_8038E4E8@ha
    li r4, 0x0
    addi r3, r3, lbl_8038E4E8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r28, r3
    bge lbl_8032B2E4
    cmpwi r3, -0x6
    bne lbl_8032B2DC
    li r29, -0x8
    b lbl_8032B34C
lbl_8032B2DC:
    li r29, -0x2
    b lbl_8032B34C
lbl_8032B2E4:
    addi r31, r30, 0x20
    addi r7, r30, 0x40
    li r0, 0x20
    stw r31, 0x40(r30)
    li r4, 0x7
    li r5, 0x0
    stw r0, 0x4(r7)
    li r6, 0x1
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_8032B318
    li r29, -0x2
    b lbl_8032B338
lbl_8032B318:
    lwz r29, 0x20(r30)
    cmpwi r29, 0x0
    bne lbl_8032B338
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    blt lbl_8032B334
    b lbl_8032B338
lbl_8032B334:
    li r29, -0x1
lbl_8032B338:
    mr r3, r28
    bl IOS_Close
    cmpwi r3, 0x0
    bge lbl_8032B34C
    li r29, -0x1
lbl_8032B34C:
    addi r3, r30, 0x0
    bl OSUnlockMutex
    mr r3, r29
lbl_8032B358:
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
// fn_8032B378
// ----------------------------------------------------------------------------
asm void fn_8032B378() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8046F360@ha
    addi r31, r31, lbl_8046F360@l
    stw r30, 0x18(r1)
    li r30, 0x0
    cmplw r3, r30
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_8032B3B4
    li r3, -0x3
    b lbl_8032B480
lbl_8032B3B4:
    bl fn_8031C81C
    cmpwi r3, 0x0
    bne lbl_8032B3C8
    li r3, -0x5
    b lbl_8032B480
lbl_8032B3C8:
    bl fn_8032B7B0
    lis r3, lbl_8038E4E8@ha
    li r4, 0x0
    addi r3, r3, lbl_8038E4E8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_8032B400
    cmpwi r3, -0x6
    bne lbl_8032B3F8
    li r30, -0x8
    b lbl_8032B474
lbl_8032B3F8:
    li r30, -0x2
    b lbl_8032B474
lbl_8032B400:
    lwz r8, lbl_8049E55C
    addi r7, r31, 0x40
    addi r4, r31, 0x20
    li r5, 0x20
    li r0, 0x6
    stw r4, 0x40(r31)
    li r4, 0x8
    li r6, 0x2
    stw r5, 0x4(r7)
    li r5, 0x0
    stw r8, 0x8(r7)
    stw r0, 0xc(r7)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_8032B444
    li r30, -0x2
    b lbl_8032B460
lbl_8032B444:
    lwz r30, 0x20(r31)
    cmpwi r30, 0x0
    bne lbl_8032B460
    lwz r4, lbl_8049E55C
    mr r3, r28
    li r5, 0x6
    bl memcpy
lbl_8032B460:
    mr r3, r29
    bl IOS_Close
    cmpwi r3, 0x0
    bge lbl_8032B474
    li r30, -0x1
lbl_8032B474:
    addi r3, r31, 0x0
    bl OSUnlockMutex
    mr r3, r30
lbl_8032B480:
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
// fn_8032B4A0
// ----------------------------------------------------------------------------
asm void fn_8032B4A0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    bl fn_8032B7B0
    lis r3, lbl_8038E4FC@ha
    li r4, 0x0
    addi r3, r3, lbl_8038E4FC@l
    li r5, 0x3
    bl fn_8032B61C
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_8032B5D0
    lwz r4, lbl_8049E55C
    li r6, 0x0
    li r3, 0x1
    lbz r5, 0x8(r4)
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_8032B538
    clrlwi. r0, r5, 31
    beq lbl_8032B518
    slw r27, r3, r6
    b lbl_8032B538
lbl_8032B518:
    lbz r0, 0x7ca(r4)
    cmplwi r0, 0x1
    beq lbl_8032B528
    slw r26, r3, r6
lbl_8032B528:
    lbz r0, 0x7ca(r4)
    cmplwi r0, 0x1
    bne lbl_8032B538
    slw r25, r3, r6
lbl_8032B538:
    lbz r5, 0x924(r4)
    li r6, 0x1
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_8032B584
    clrlwi. r0, r5, 31
    beq lbl_8032B55C
    slw r0, r3, r6
    or r27, r27, r0
    b lbl_8032B584
lbl_8032B55C:
    lbz r0, 0x10e6(r4)
    cmplwi r0, 0x1
    beq lbl_8032B570
    slw r0, r3, r6
    or r26, r26, r0
lbl_8032B570:
    lbz r0, 0x10e6(r4)
    cmplwi r0, 0x1
    bne lbl_8032B584
    slw r0, r3, r6
    or r25, r25, r0
lbl_8032B584:
    lbz r5, 0x1240(r4)
    li r6, 0x2
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_8032B5D0
    clrlwi. r0, r5, 31
    beq lbl_8032B5A8
    slw r0, r3, r6
    or r27, r27, r0
    b lbl_8032B5D0
lbl_8032B5A8:
    lbz r0, 0x1a02(r4)
    cmplwi r0, 0x1
    beq lbl_8032B5BC
    slw r0, r3, r6
    or r26, r26, r0
lbl_8032B5BC:
    lbz r0, 0x1a02(r4)
    cmplwi r0, 0x1
    bne lbl_8032B5D0
    slw r0, r3, r6
    or r25, r25, r0
lbl_8032B5D0:
    lis r3, lbl_8046F360@ha
    addi r3, r3, lbl_8046F360@l
    bl OSUnlockMutex
    cmpwi r29, 0x0
    beq lbl_8032B5E8
    stw r27, 0x0(r29)
lbl_8032B5E8:
    cmpwi r30, 0x0
    beq lbl_8032B5F4
    stw r26, 0x0(r30)
lbl_8032B5F4:
    cmpwi r31, 0x0
    beq lbl_8032B600
    stw r25, 0x0(r31)
lbl_8032B600:
    addi r11, r1, 0x30
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8032B61C
// ----------------------------------------------------------------------------
asm void fn_8032B61C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8046F360@ha
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    addi r31, r31, lbl_8046F360@l
    bl fn_8031C81C
    cmpwi r3, 0x0
    bne lbl_8032B658
    li r3, -0x5
    b lbl_8032B798
lbl_8032B658:
    bl fn_8032B7B0
    lis r3, lbl_8038E4E8@ha
    li r4, 0x0
    addi r3, r3, lbl_8038E4E8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_8032B690
    cmpwi r3, -0x6
    bne lbl_8032B688
    li r30, -0x8
    b lbl_8032B78C
lbl_8032B688:
    li r30, -0x2
    b lbl_8032B78C
lbl_8032B690:
    lwz r6, lbl_8049E55C
    cmpwi r28, 0x5
    addi r4, r31, 0x40
    addi r3, r31, 0x20
    li r5, 0x1b5c
    li r0, 0x20
    stw r6, 0x40(r31)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    beq lbl_8032B6DC
    bge lbl_8032B6D0
    cmpwi r28, 0x3
    beq lbl_8032B6DC
    bge lbl_8032B730
    b lbl_8032B778
lbl_8032B6D0:
    cmpwi r28, 0x7
    bge lbl_8032B778
    b lbl_8032B730
lbl_8032B6DC:
    mr r3, r29
    mr r4, r28
    addi r7, r31, 0x40
    li r5, 0x0
    li r6, 0x2
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_8032B704
    li r30, -0x2
    b lbl_8032B778
lbl_8032B704:
    lwz r30, 0x20(r31)
    cmpwi r30, 0x0
    bne lbl_8032B778
    li r0, 0x0
    cmplw r27, r0
    beq lbl_8032B778
    lwz r4, lbl_8049E55C
    mr r3, r27
    li r5, 0x1b5c
    bl memcpy
    b lbl_8032B778
lbl_8032B730:
    li r0, 0x0
    cmplw r27, r0
    beq lbl_8032B74C
    lwz r3, lbl_8049E55C
    mr r4, r27
    li r5, 0x1b5c
    bl memcpy
lbl_8032B74C:
    mr r3, r29
    mr r4, r28
    addi r7, r31, 0x40
    li r5, 0x1
    li r6, 0x1
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_8032B774
    li r30, -0x2
    b lbl_8032B778
lbl_8032B774:
    lwz r30, 0x20(r31)
lbl_8032B778:
    mr r3, r29
    bl IOS_Close
    cmpwi r3, 0x0
    bge lbl_8032B78C
    li r30, -0x1
lbl_8032B78C:
    addi r3, r31, 0x0
    bl OSUnlockMutex
    mr r3, r30
lbl_8032B798:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032B7B0
// ----------------------------------------------------------------------------
asm void fn_8032B7B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8046F360@ha
    addi r31, r31, lbl_8046F360@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8049E558
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_8032B874
    lwz r3, lbl_8049D3B8
    bl OSRegisterVersion
    addi r3, r31, 0x0
    bl OSInitMutex
    bl IPCGetBufferLo
    addi r0, r3, 0x1f
    clrrwi r29, r0, 5
    bl IPCGetBufferHi
    subf r0, r29, r3
    cmplwi r0, 0x1b60
    bge lbl_8032B82C
    lis r3, lbl_8038E518@ha
    lis r5, lbl_8038E524@ha
    addi r3, r3, lbl_8038E518@l
    li r4, 0x5dc
    addi r5, r5, lbl_8038E524@l
    opword 0x4CC63182
    bl OSPanic
lbl_8032B82C:
    addi r3, r29, 0x1b60
    bl IPCSetBufferLo
    stw r29, lbl_8049E55C
    mr r3, r29
    li r4, 0x0
    li r5, 0x1b60
    bl memset
    addi r3, r31, 0x20
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_8049E558
    ori r0, r0, 0x1
    stw r0, lbl_8049E558
lbl_8032B874:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r3, r31, 0x0
    bl OSLockMutex
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032B8A0
// ----------------------------------------------------------------------------
asm void fn_8032B8A0() {
    nofralloc
    cmpwi r3, 0x0
    li r0, 0x63
    beq lbl_8032B97C
    cmpwi r4, 0x0
    bne lbl_8032BB10
    cmpwi r5, 0x0
    bne lbl_8032BB10
    li r0, 0x4
    li r5, 0x0
    li r4, 0x1
    mtctr r0
lbl_8032B8CC:
    and. r0, r3, r4
    beq lbl_8032B8D8
    b lbl_8032B974
lbl_8032B8D8:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_8032B8EC
    b lbl_8032B974
lbl_8032B8EC:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_8032B900
    b lbl_8032B974
lbl_8032B900:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_8032B914
    b lbl_8032B974
lbl_8032B914:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_8032B928
    b lbl_8032B974
lbl_8032B928:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_8032B93C
    b lbl_8032B974
lbl_8032B93C:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_8032B950
    b lbl_8032B974
lbl_8032B950:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_8032B964
    b lbl_8032B974
lbl_8032B964:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    bdnz lbl_8032B8CC
    li r5, -0x1
lbl_8032B974:
    addi r0, r5, 0x14
    b lbl_8032BB10
lbl_8032B97C:
    cmpwi r4, 0x0
    beq lbl_8032BA4C
    cmpwi r5, 0x0
    bne lbl_8032BB10
    li r0, 0x4
    li r5, 0x0
    li r3, 0x1
    mtctr r0
lbl_8032B99C:
    and. r0, r4, r3
    beq lbl_8032B9A8
    b lbl_8032BA44
lbl_8032B9A8:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_8032B9BC
    b lbl_8032BA44
lbl_8032B9BC:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_8032B9D0
    b lbl_8032BA44
lbl_8032B9D0:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_8032B9E4
    b lbl_8032BA44
lbl_8032B9E4:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_8032B9F8
    b lbl_8032BA44
lbl_8032B9F8:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_8032BA0C
    b lbl_8032BA44
lbl_8032BA0C:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_8032BA20
    b lbl_8032BA44
lbl_8032BA20:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_8032BA34
    b lbl_8032BA44
lbl_8032BA34:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    bdnz lbl_8032B99C
    li r5, -0x1
lbl_8032BA44:
    addi r0, r5, 0x1e
    b lbl_8032BB10
lbl_8032BA4C:
    cmpwi r5, 0x0
    beq lbl_8032BB10
    li r0, 0x4
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_8032BA64:
    and. r0, r5, r3
    beq lbl_8032BA70
    b lbl_8032BB0C
lbl_8032BA70:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_8032BA84
    b lbl_8032BB0C
lbl_8032BA84:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_8032BA98
    b lbl_8032BB0C
lbl_8032BA98:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_8032BAAC
    b lbl_8032BB0C
lbl_8032BAAC:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_8032BAC0
    b lbl_8032BB0C
lbl_8032BAC0:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_8032BAD4
    b lbl_8032BB0C
lbl_8032BAD4:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_8032BAE8
    b lbl_8032BB0C
lbl_8032BAE8:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_8032BAFC
    b lbl_8032BB0C
lbl_8032BAFC:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    bdnz lbl_8032BA64
    li r4, -0x1
lbl_8032BB0C:
    addi r0, r4, 0x28
lbl_8032BB10:
    mr r3, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_8032BB18
// ----------------------------------------------------------------------------
asm void fn_8032BB18() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x10
    stw r31, 0x1c(r1)
    li r31, 0x63
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    bl fn_8032B4A0
    cmpwi r3, 0x0
    blt lbl_8032BB60
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x10(r1)
    bl fn_8032B8A0
    mr r31, r3
lbl_8032BB60:
    cmpwi r31, 0x0
    bge lbl_8032BB70
    lis r30, 0x8000
    li r31, 0x63
lbl_8032BB70:
    mr r3, r30
    mr r4, r31
    bl fn_8032BB98
    subf r3, r31, r3
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032BB98
// ----------------------------------------------------------------------------
asm void fn_8032BB98() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    mr r5, r3
    stw r0, 0x14(r1)
    blt lbl_8032BBB8
    li r3, 0x0
    b lbl_8032BD00
lbl_8032BBB8:
    cmpwi r3, -0x3e
    beq lbl_8032BC64
    bge lbl_8032BC1C
    cmpwi r3, -0x6f
    beq lbl_8032BC70
    bge lbl_8032BBFC
    cmpwi r3, -0x79
    beq lbl_8032BC7C
    bge lbl_8032BBF0
    lis r4, 0x8000
    addi r0, r4, 0x1
    cmpw r3, r0
    bge lbl_8032BCE4
    b lbl_8032BCD8
lbl_8032BBF0:
    cmpwi r3, -0x70
    bge lbl_8032BCA4
    b lbl_8032BCE4
lbl_8032BBFC:
    cmpwi r3, -0x4c
    beq lbl_8032BCA4
    bge lbl_8032BCE4
    cmpwi r3, -0x63
    bge lbl_8032BCE4
    cmpwi r3, -0x66
    bge lbl_8032BCCC
    b lbl_8032BCE4
lbl_8032BC1C:
    cmpwi r3, -0x27
    beq lbl_8032BCA4
    bge lbl_8032BC40
    cmpwi r3, -0x2d
    beq lbl_8032BC4C
    bge lbl_8032BCE4
    cmpwi r3, -0x30
    beq lbl_8032BCA4
    b lbl_8032BCE4
lbl_8032BC40:
    cmpwi r3, -0x1c
    beq lbl_8032BC58
    b lbl_8032BCE4
lbl_8032BC4C:
    lis r3, 0xffff
    addi r3, r3, 0x3be8
    b lbl_8032BD00
lbl_8032BC58:
    lis r3, 0xffff
    addi r3, r3, 0x3b84
    b lbl_8032BD00
lbl_8032BC64:
    lis r3, 0xffff
    addi r3, r3, 0x3b20
    b lbl_8032BD00
lbl_8032BC70:
    lis r3, 0xffff
    addi r3, r3, 0x3224
    b lbl_8032BD00
lbl_8032BC7C:
    cmpwi r4, 0x14
    blt lbl_8032BC98
    cmpwi r4, 0x1e
    bge lbl_8032BC98
    lis r3, 0xffff
    addi r3, r3, 0x3738
    b lbl_8032BD00
lbl_8032BC98:
    lis r3, 0xffff
    addi r3, r3, 0x38c8
    b lbl_8032BD00
lbl_8032BCA4:
    cmpwi r4, 0x14
    blt lbl_8032BCC0
    cmpwi r4, 0x1e
    bge lbl_8032BCC0
    lis r3, 0xffff
    addi r3, r3, 0x3738
    b lbl_8032BD00
lbl_8032BCC0:
    lis r3, 0xffff
    addi r3, r3, 0x379c
    b lbl_8032BD00
lbl_8032BCCC:
    lis r3, 0xffff
    addi r3, r3, 0x34e0
    b lbl_8032BD00
lbl_8032BCD8:
    lis r3, 0xffff
    addi r3, r3, 0x3c4c
    b lbl_8032BD00
lbl_8032BCE4:
    lis r3, lbl_8038E560@ha
    mr r4, r5
    addi r3, r3, lbl_8038E560@l
    opword 0x4CC63182
    bl OSReport
    lis r3, 0xffff
    addi r3, r3, 0x3c4c
lbl_8032BD00:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032BD10
// ----------------------------------------------------------------------------
asm void fn_8032BD10() {
    nofralloc
    lwz r3, lbl_8049D3C0
    blr
}

// ----------------------------------------------------------------------------
// fn_8032BD18
// ----------------------------------------------------------------------------
asm void fn_8032BD18() {
    nofralloc
    b fn_8032B378
}

// ----------------------------------------------------------------------------
// fn_8032BD1C
// ----------------------------------------------------------------------------
asm void fn_8032BD1C() {
    nofralloc
    cmplw r3, r4
    beqlr
    ble lbl_8032BD70
    add r6, r4, r5
    cmplw r3, r6
    bge lbl_8032BD70
    clrlwi. r0, r5, 30
    add r7, r3, r5
    srwi r4, r5, 2
    beq lbl_8032BD54
    mtctr r0
lbl_8032BD48:
    lbzu r0, -0x1(r6)
    stbu r0, -0x1(r7)
    bdnz lbl_8032BD48
lbl_8032BD54:
    cmpwi r4, 0x0
    beqlr
    mtctr r4
lbl_8032BD60:
    lwzu r0, -0x4(r6)
    stwu r0, -0x4(r7)
    bdnz lbl_8032BD60
    blr
lbl_8032BD70:
    subi r0, r4, 0x20
    cmplw r3, r0
    ble lbl_8032BD84
    cmplw r3, r4
    blt lbl_8032C078
lbl_8032BD84:
    cmplwi r5, 0x40
    blt lbl_8032C078
    clrlwi. r9, r3, 27
    beq lbl_8032BDF0
    subfic r9, r9, 0x20
    mr r7, r4
    srwi. r0, r9, 2
    mr r8, r3
    clrlwi r6, r9, 30
    beq lbl_8032BDC4
    mtctr r0
lbl_8032BDB0:
    lwz r0, 0x0(r7)
    addi r7, r7, 0x4
    stw r0, 0x0(r8)
    addi r8, r8, 0x4
    bdnz lbl_8032BDB0
lbl_8032BDC4:
    cmpwi r6, 0x0
    beq lbl_8032BDE4
    mtctr r6
lbl_8032BDD0:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r8)
    addi r8, r8, 0x1
    bdnz lbl_8032BDD0
lbl_8032BDE4:
    add r3, r3, r9
    add r4, r4, r9
    subf r5, r9, r5
lbl_8032BDF0:
    clrlwi r0, r4, 30
    mr r7, r4
    cmpwi r0, 0x2
    mr r6, r3
    clrrwi r12, r5, 5
    srwi r8, r5, 5
    beq lbl_8032BF28
    bge lbl_8032BE20
    cmpwi r0, 0x0
    beq lbl_8032BE2C
    bge lbl_8032BE84
    b lbl_8032C06C
lbl_8032BE20:
    cmpwi r0, 0x4
    bge lbl_8032C06C
    b lbl_8032BFCC
lbl_8032BE2C:
    mtctr r8
lbl_8032BE30:
    dcbz r0, r6
    lwz r11, 0x0(r7)
    lwz r10, 0x4(r7)
    stw r11, 0x0(r6)
    stw r10, 0x4(r6)
    lwz r11, 0x8(r7)
    lwz r10, 0xc(r7)
    stw r11, 0x8(r6)
    stw r10, 0xc(r6)
    lwz r11, 0x10(r7)
    lwz r10, 0x14(r7)
    stw r11, 0x10(r6)
    stw r10, 0x14(r6)
    lwz r11, 0x18(r7)
    lwz r10, 0x1c(r7)
    addi r7, r7, 0x20
    stw r11, 0x18(r6)
    stw r10, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_8032BE30
    b lbl_8032C06C
lbl_8032BE84:
    lwz r9, -0x1(r4)
    mtctr r8
    addi r7, r4, 0x3
    slwi r9, r9, 8
lbl_8032BE94:
    dcbz r0, r6
    lwz r11, 0x0(r7)
    lwz r10, 0x4(r7)
    rlwimi r9, r11, 8, 24, 31
    slwi r0, r11, 8
    stw r9, 0x0(r6)
    rlwimi r0, r10, 8, 24, 31
    slwi r8, r10, 8
    lwz r11, 0x8(r7)
    stw r0, 0x4(r6)
    rlwimi r8, r11, 8, 24, 31
    slwi r0, r11, 8
    lwz r10, 0xc(r7)
    stw r8, 0x8(r6)
    rlwimi r0, r10, 8, 24, 31
    slwi r9, r10, 8
    lwz r11, 0x10(r7)
    stw r0, 0xc(r6)
    rlwimi r9, r11, 8, 24, 31
    slwi r0, r11, 8
    lwz r10, 0x14(r7)
    stw r9, 0x10(r6)
    rlwimi r0, r10, 8, 24, 31
    slwi r8, r10, 8
    lwz r11, 0x18(r7)
    stw r0, 0x14(r6)
    rlwimi r8, r11, 8, 24, 31
    slwi r0, r11, 8
    lwz r10, 0x1c(r7)
    addi r7, r7, 0x20
    stw r8, 0x18(r6)
    rlwimi r0, r10, 8, 24, 31
    slwi r9, r10, 8
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_8032BE94
    b lbl_8032C06C
lbl_8032BF28:
    lwz r9, -0x2(r4)
    mtctr r8
    addi r7, r4, 0x2
    slwi r9, r9, 16
lbl_8032BF38:
    dcbz r0, r6
    lwz r11, 0x0(r7)
    lwz r10, 0x4(r7)
    rlwimi r9, r11, 16, 16, 31
    slwi r0, r11, 16
    stw r9, 0x0(r6)
    rlwimi r0, r10, 16, 16, 31
    slwi r8, r10, 16
    lwz r11, 0x8(r7)
    stw r0, 0x4(r6)
    rlwimi r8, r11, 16, 16, 31
    slwi r0, r11, 16
    lwz r10, 0xc(r7)
    stw r8, 0x8(r6)
    rlwimi r0, r10, 16, 16, 31
    slwi r9, r10, 16
    lwz r11, 0x10(r7)
    stw r0, 0xc(r6)
    rlwimi r9, r11, 16, 16, 31
    slwi r0, r11, 16
    lwz r10, 0x14(r7)
    stw r9, 0x10(r6)
    rlwimi r0, r10, 16, 16, 31
    slwi r8, r10, 16
    lwz r11, 0x18(r7)
    stw r0, 0x14(r6)
    rlwimi r8, r11, 16, 16, 31
    slwi r0, r11, 16
    lwz r10, 0x1c(r7)
    addi r7, r7, 0x20
    stw r8, 0x18(r6)
    rlwimi r0, r10, 16, 16, 31
    slwi r9, r10, 16
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_8032BF38
    b lbl_8032C06C
lbl_8032BFCC:
    lwz r9, -0x3(r4)
    mtctr r8
    addi r7, r4, 0x1
    slwi r9, r9, 24
lbl_8032BFDC:
    dcbz r0, r6
    lwz r11, 0x0(r7)
    lwz r10, 0x4(r7)
    rlwimi r9, r11, 24, 8, 31
    slwi r0, r11, 24
    stw r9, 0x0(r6)
    rlwimi r0, r10, 24, 8, 31
    slwi r8, r10, 24
    lwz r11, 0x8(r7)
    stw r0, 0x4(r6)
    rlwimi r8, r11, 24, 8, 31
    slwi r0, r11, 24
    lwz r10, 0xc(r7)
    stw r8, 0x8(r6)
    rlwimi r0, r10, 24, 8, 31
    slwi r9, r10, 24
    lwz r11, 0x10(r7)
    stw r0, 0xc(r6)
    rlwimi r9, r11, 24, 8, 31
    slwi r0, r11, 24
    lwz r10, 0x14(r7)
    stw r9, 0x10(r6)
    rlwimi r0, r10, 24, 8, 31
    slwi r8, r10, 24
    lwz r11, 0x18(r7)
    stw r0, 0x14(r6)
    rlwimi r8, r11, 24, 8, 31
    slwi r0, r11, 24
    lwz r10, 0x1c(r7)
    addi r7, r7, 0x20
    stw r8, 0x18(r6)
    rlwimi r0, r10, 24, 8, 31
    slwi r9, r10, 24
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_8032BFDC
lbl_8032C06C:
    add r3, r3, r12
    add r4, r4, r12
    subf r5, r12, r5
lbl_8032C078:
    srwi. r0, r5, 2
    mr r6, r3
    clrlwi r5, r5, 30
    beq lbl_8032C0A0
    mtctr r0
lbl_8032C08C:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_8032C08C
lbl_8032C0A0:
    cmpwi r5, 0x0
    beqlr
    mtctr r5
lbl_8032C0AC:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
    bdnz lbl_8032C0AC
    blr
}

// ----------------------------------------------------------------------------
// fn_8032C0C4
// ----------------------------------------------------------------------------
asm void fn_8032C0C4() {
    nofralloc
    cmpwi r5, 0x0
    beqlr
    cmplwi r5, 0x40
    rlwimi r4, r4, 8, 16, 23
    rlwimi r4, r4, 16, 0, 15
    blt lbl_8032C188
    clrlwi. r8, r3, 27
    beq lbl_8032C128
    subfic r8, r8, 0x20
    mr r7, r3
    srwi. r6, r8, 2
    clrlwi r0, r8, 30
    beq lbl_8032C108
    mtctr r6
lbl_8032C0FC:
    stw r4, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_8032C0FC
lbl_8032C108:
    cmpwi r0, 0x0
    beq lbl_8032C120
    mtctr r0
lbl_8032C114:
    stb r4, 0x0(r7)
    addi r7, r7, 0x1
    bdnz lbl_8032C114
lbl_8032C120:
    add r3, r3, r8
    subf r5, r8, r5
lbl_8032C128:
    cmpwi r4, 0x0
    mr r6, r3
    clrrwi r7, r5, 5
    srwi r0, r5, 5
    bne lbl_8032C150
    mtctr r0
lbl_8032C140:
    dcbz r0, r6
    addi r6, r6, 0x20
    bdnz lbl_8032C140
    b lbl_8032C180
lbl_8032C150:
    mtctr r0
lbl_8032C154:
    dcbz r0, r6
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    stw r4, 0x8(r6)
    stw r4, 0xc(r6)
    stw r4, 0x10(r6)
    stw r4, 0x14(r6)
    stw r4, 0x18(r6)
    stw r4, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_8032C154
lbl_8032C180:
    add r3, r3, r7
    subf r5, r7, r5
lbl_8032C188:
    srwi. r6, r5, 2
    mr r7, r3
    clrlwi r0, r5, 30
    beq lbl_8032C1A8
    mtctr r6
lbl_8032C19C:
    stw r4, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_8032C19C
lbl_8032C1A8:
    cmpwi r0, 0x0
    beqlr
    mtctr r0
lbl_8032C1B4:
    stb r4, 0x0(r7)
    addi r7, r7, 0x1
    bdnz lbl_8032C1B4
    blr
}

// ----------------------------------------------------------------------------
// fn_8032C1C4
// ----------------------------------------------------------------------------
asm void fn_8032C1C4() {
    nofralloc
    lis r7, 0x6745
    lis r6, 0xefce
    li r0, 0x0
    lis r5, 0x98bb
    lis r4, 0x1032
    addi r7, r7, 0x2301
    subi r6, r6, 0x5477
    subi r5, r5, 0x2302
    addi r4, r4, 0x5476
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x14(r3)
    stw r0, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032C204
// ----------------------------------------------------------------------------
asm void fn_8032C204() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r7, 0x14(r3)
    lwz r0, 0x10(r3)
    addc r6, r7, r5
    clrlwi r7, r7, 26
    addze r0, r0
    stw r6, 0x14(r3)
    subfic r31, r7, 0x40
    cmplw r31, r5
    stw r0, 0x10(r3)
    ble lbl_8032C26C
    cmpwi r5, 0x0
    beq lbl_8032C2D4
    add r3, r3, r7
    addi r3, r3, 0x18
    bl memcpy
    b lbl_8032C2D4
lbl_8032C26C:
    add r3, r3, r7
    mr r5, r31
    addi r3, r3, 0x18
    bl memcpy
    mr r3, r28
    bl fn_8032C428
    subf r29, r31, r29
    add r30, r30, r31
    srwi r31, r29, 6
    b lbl_8032C2B4
lbl_8032C294:
    mr r4, r30
    addi r3, r28, 0x18
    li r5, 0x40
    bl memcpy
    mr r3, r28
    addi r30, r30, 0x40
    bl fn_8032C428
    subi r31, r31, 0x1
lbl_8032C2B4:
    cmpwi r31, 0x0
    bgt lbl_8032C294
    clrlwi. r29, r29, 26
    beq lbl_8032C2D4
    mr r4, r30
    mr r5, r29
    addi r3, r28, 0x18
    bl memcpy
lbl_8032C2D4:
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
// fn_8032C2F4
// ----------------------------------------------------------------------------
asm void fn_8032C2F4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    la r4, lbl_8049D3C8
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x10(r3)
    lwz r6, 0x14(r3)
    slwi r29, r0, 3
    slwi r28, r6, 3
    rlwimi r29, r6, 3, 29, 31
    bl fn_8032C204
    lwz r0, 0x14(r30)
    clrlwi r0, r0, 26
    subfic r5, r0, 0x40
    cmplwi r5, 0x8
    bge lbl_8032C36C
    add r3, r30, r0
    li r4, 0x0
    addi r3, r3, 0x18
    bl memset
    mr r3, r30
    bl fn_8032C428
    li r0, 0x0
    li r5, 0x40
lbl_8032C36C:
    cmplwi r5, 0x8
    ble lbl_8032C388
    add r3, r30, r0
    subi r5, r5, 0x8
    addi r3, r3, 0x18
    li r4, 0x0
    bl memset
lbl_8032C388:
    rlwinm r5, r28, 8, 8, 15
    rlwinm r4, r28, 24, 16, 23
    rlwinm r3, r29, 8, 8, 15
    rlwinm r0, r29, 24, 16, 23
    rlwimi r5, r28, 24, 0, 7
    rlwimi r4, r28, 8, 24, 31
    or r4, r5, r4
    rlwimi r3, r29, 24, 0, 7
    rlwimi r0, r29, 8, 24, 31
    stw r4, 0x50(r30)
    or r0, r3, r0
    mr r3, r30
    stw r0, 0x54(r30)
    bl fn_8032C428
    lwz r0, 0x0(r30)
    stwbrx r0, r0, r31
    addi r0, r31, 0x4
    lwz r3, 0x4(r30)
    stwbrx r3, r0, r0
    addi r0, r31, 0x8
    lwz r3, 0x8(r30)
    stwbrx r3, r0, r0
    addi r0, r31, 0xc
    lwz r3, 0xc(r30)
    stwbrx r3, r0, r0
    mr r3, r30
    li r4, 0x0
    li r5, 0x58
    bl memset
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
// fn_8032C41C
// ----------------------------------------------------------------------------
asm void fn_8032C41C() {
    nofralloc
    lis r3, lbl_803421C0@ha
    addi r3, r3, lbl_803421C0@l
    blr
}

// ----------------------------------------------------------------------------
// fn_8032C428
// ----------------------------------------------------------------------------
asm void fn_8032C428() {
    nofralloc
    stwu r1, -0x20(r1)
    addi r8, r3, 0x18
    lis r9, lbl_8038E5B8@ha
    li r10, 0x4
    stw r31, 0x1c(r1)
    mr r4, r8
    addi r9, r9, lbl_8038E5B8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x0(r3)
    lwz r5, 0x4(r3)
    lwz r6, 0x8(r3)
    lwz r7, 0xc(r3)
    mtctr r10
lbl_8032C460:
    lwz r12, 0x0(r9)
    lwbrx r30, r0, r4
    lwbrx r31, r0, r4
    and r11, r5, r6
    andc r10, r7, r5
    addi r4, r4, 0x4
    or r11, r11, r10
    add r11, r0, r11
    add r10, r31, r12
    add r0, r12, r11
    lwz r31, 0x4(r9)
    add r0, r30, r0
    add r10, r11, r10
    srwi r0, r0, 25
    rlwimi r0, r10, 7, 0, 24
    add r0, r5, r0
    lwbrx r30, r0, r4
    lwbrx r12, r0, r4
    and r11, r0, r5
    andc r10, r6, r0
    addi r4, r4, 0x4
    or r11, r11, r10
    add r11, r7, r11
    add r10, r12, r31
    add r7, r31, r11
    lwz r12, 0x8(r9)
    add r7, r30, r7
    add r10, r11, r10
    srwi r7, r7, 20
    rlwimi r7, r10, 12, 0, 19
    add r7, r0, r7
    lwbrx r30, r0, r4
    lwbrx r31, r0, r4
    and r11, r7, r0
    andc r10, r5, r7
    addi r4, r4, 0x4
    or r11, r11, r10
    add r11, r6, r11
    add r10, r31, r12
    add r6, r12, r11
    lwz r31, 0xc(r9)
    add r6, r30, r6
    add r10, r11, r10
    srwi r6, r6, 15
    rlwimi r6, r10, 17, 0, 14
    add r6, r7, r6
    lwbrx r12, r0, r4
    lwbrx r30, r0, r4
    and r11, r6, r7
    andc r10, r0, r6
    addi r9, r9, 0x10
    or r11, r11, r10
    addi r4, r4, 0x4
    add r11, r5, r11
    add r10, r30, r31
    add r5, r31, r11
    add r5, r12, r5
    add r10, r11, r10
    srwi r5, r5, 10
    rlwimi r5, r10, 22, 0, 9
    add r5, r6, r5
    bdnz lbl_8032C460
    lis r4, lbl_8038E6B8@ha
    li r10, 0x4
    addi r4, r4, lbl_8038E6B8@l
    mtctr r10
lbl_8032C568:
    lwz r10, 0x0(r4)
    lwz r31, 0x0(r9)
    slwi r10, r10, 2
    add r10, r8, r10
    lwbrx r30, r0, r10
    lwbrx r29, r0, r10
    and r12, r5, r7
    andc r11, r6, r7
    lwz r10, 0x4(r4)
    or r12, r12, r11
    add r12, r0, r12
    add r11, r29, r31
    slwi r0, r10, 2
    add r10, r31, r12
    add r11, r12, r11
    add r10, r30, r10
    add r12, r8, r0
    srwi r10, r10, 27
    lwz r31, 0x4(r9)
    rlwimi r10, r11, 5, 0, 26
    add r0, r5, r10
    lwbrx r29, r0, r12
    lwbrx r30, r0, r12
    and r12, r0, r6
    andc r11, r5, r6
    lwz r10, 0x8(r4)
    or r12, r12, r11
    add r12, r7, r12
    add r11, r30, r31
    slwi r7, r10, 2
    add r10, r31, r12
    add r11, r12, r11
    add r10, r29, r10
    add r12, r8, r7
    srwi r10, r10, 23
    lwz r31, 0x8(r9)
    rlwimi r10, r11, 9, 0, 22
    add r7, r0, r10
    lwbrx r29, r0, r12
    lwbrx r30, r0, r12
    and r12, r7, r5
    andc r11, r0, r5
    lwz r10, 0xc(r4)
    or r12, r12, r11
    add r12, r6, r12
    add r11, r30, r31
    slwi r6, r10, 2
    add r10, r31, r12
    add r11, r12, r11
    add r10, r29, r10
    add r12, r8, r6
    srwi r10, r10, 18
    lwz r31, 0xc(r9)
    rlwimi r10, r11, 14, 0, 17
    add r6, r7, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    and r11, r6, r0
    andc r10, r7, r0
    addi r9, r9, 0x10
    or r11, r11, r10
    addi r4, r4, 0x10
    add r11, r5, r11
    add r10, r12, r31
    add r5, r31, r11
    add r5, r29, r5
    add r10, r11, r10
    srwi r5, r5, 12
    rlwimi r5, r10, 20, 0, 11
    add r5, r6, r5
    bdnz lbl_8032C568
    li r10, 0x4
    mtctr r10
lbl_8032C68C:
    lwz r10, 0x0(r4)
    lwz r31, 0x0(r9)
    slwi r10, r10, 2
    add r10, r8, r10
    lwbrx r29, r0, r10
    lwbrx r12, r0, r10
    xor r10, r7, r5
    xor r11, r10, r6
    lwz r10, 0x4(r4)
    add r30, r0, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r0, r10, 2
    add r10, r29, r11
    lwz r31, 0x4(r9)
    add r11, r30, r12
    add r12, r8, r0
    srwi r10, r10, 28
    rlwimi r10, r11, 4, 0, 27
    add r0, r5, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    xor r10, r6, r0
    xor r11, r10, r5
    lwz r10, 0x8(r4)
    add r30, r7, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r7, r10, 2
    add r10, r29, r11
    lwz r31, 0x8(r9)
    add r11, r30, r12
    add r12, r8, r7
    srwi r10, r10, 21
    rlwimi r10, r11, 11, 0, 20
    add r7, r0, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    xor r10, r5, r7
    xor r11, r10, r0
    lwz r10, 0xc(r4)
    add r30, r6, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r6, r10, 2
    add r10, r29, r11
    add r11, r30, r12
    add r12, r8, r6
    srwi r10, r10, 16
    rlwimi r10, r11, 16, 0, 15
    lwz r11, 0xc(r9)
    add r6, r7, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    xor r10, r0, r6
    xor r10, r10, r7
    addi r9, r9, 0x10
    add r30, r5, r10
    addi r4, r4, 0x10
    add r10, r12, r11
    add r5, r11, r30
    add r5, r29, r5
    add r10, r30, r10
    srwi r5, r5, 9
    rlwimi r5, r10, 23, 0, 8
    add r5, r6, r5
    bdnz lbl_8032C68C
    li r10, 0x4
    mtctr r10
lbl_8032C7A0:
    lwz r10, 0x0(r4)
    lwz r31, 0x0(r9)
    slwi r10, r10, 2
    add r10, r8, r10
    lwbrx r29, r0, r10
    lwbrx r12, r0, r10
    orc r10, r5, r7
    xor r11, r6, r10
    lwz r10, 0x4(r4)
    add r30, r0, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r0, r10, 2
    add r10, r29, r11
    lwz r31, 0x4(r9)
    add r11, r30, r12
    add r12, r8, r0
    srwi r10, r10, 26
    rlwimi r10, r11, 6, 0, 25
    add r0, r5, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    orc r10, r0, r6
    xor r11, r5, r10
    lwz r10, 0x8(r4)
    add r30, r7, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r7, r10, 2
    add r10, r29, r11
    lwz r31, 0x8(r9)
    add r11, r30, r12
    add r12, r8, r7
    srwi r10, r10, 22
    rlwimi r10, r11, 10, 0, 21
    add r7, r0, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    orc r10, r7, r5
    xor r11, r0, r10
    lwz r10, 0xc(r4)
    add r30, r6, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r6, r10, 2
    add r10, r29, r11
    add r11, r30, r12
    add r12, r8, r6
    srwi r10, r10, 17
    rlwimi r10, r11, 15, 0, 16
    lwz r11, 0xc(r9)
    add r6, r7, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    orc r10, r6, r0
    xor r10, r7, r10
    addi r9, r9, 0x10
    add r30, r5, r10
    addi r4, r4, 0x10
    add r10, r12, r11
    add r5, r11, r30
    add r5, r29, r5
    add r10, r30, r10
    srwi r5, r5, 11
    rlwimi r5, r10, 21, 0, 10
    add r5, r6, r5
    bdnz lbl_8032C7A0
    lwz r9, 0x0(r3)
    lwz r8, 0x4(r3)
    add r9, r9, r0
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    add r5, r8, r5
    add r4, r4, r6
    stw r9, 0x0(r3)
    add r0, r0, r7
    stw r5, 0x4(r3)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032C8F0
// ----------------------------------------------------------------------------
asm void fn_8032C8F0() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r8, 0x8(r4)
    mr r27, r5
    lwz r10, 0x0(r4)
    lis r31, lbl_8038E778@ha
    lwz r9, 0x4(r4)
    cmplwi r8, 0x70
    lwz r7, 0xc(r4)
    mr r30, r3
    lwz r12, 0x10(r4)
    mr r28, r6
    lwz r5, 0x14(r4)
    addi r31, r31, lbl_8038E778@l
    lwz r0, 0x18(r4)
    addi r29, r3, 0x20
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r12, 0x10(r3)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    bgt lbl_8032C964
    cmplwi r9, 0x40
    ble lbl_8032C998
lbl_8032C964:
    addi r3, r31, 0xc
    addi r6, r31, 0x0
    la r4, lbl_8049D3D0
    li r5, 0x64
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x28
    opword 0x4CC63182
    bl OSReport
    la r3, lbl_8049D3D8
    opword 0x4CC63182
    bl OSReport
    b lbl_8032CB14
lbl_8032C998:
    cmplw r6, r9
    bgt lbl_8032C9B8
    mr r4, r27
    mr r5, r28
    addi r3, r3, 0x90
    bl memcpy
    stw r28, 0x1c(r30)
    b lbl_8032C9F8
lbl_8032C9B8:
    mr r3, r29
    mtctr r12
    bctrl
    lwz r12, 0x14(r30)
    mr r3, r29
    mr r4, r27
    mr r5, r28
    mtctr r12
    bctrl
    lwz r12, 0x18(r30)
    mr r3, r29
    addi r4, r30, 0x90
    mtctr r12
    bctrl
    lwz r0, 0x0(r30)
    stw r0, 0x1c(r30)
lbl_8032C9F8:
    lwz r5, 0x1c(r30)
    addi r31, r30, 0x20
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_8032CAD4
    cmplwi r5, 0x8
    subi r3, r5, 0x8
    ble lbl_8032CAA0
    addi r0, r3, 0x7
    addi r6, r1, 0x8
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_8032CAA0
lbl_8032CA30:
    add r3, r30, r4
    addi r4, r4, 0x8
    lbz r0, 0x90(r3)
    xori r0, r0, 0x36
    stb r0, 0x0(r6)
    lbz r0, 0x91(r3)
    xori r0, r0, 0x36
    stb r0, 0x1(r6)
    lbz r0, 0x92(r3)
    xori r0, r0, 0x36
    stb r0, 0x2(r6)
    lbz r0, 0x93(r3)
    xori r0, r0, 0x36
    stb r0, 0x3(r6)
    lbz r0, 0x94(r3)
    xori r0, r0, 0x36
    stb r0, 0x4(r6)
    lbz r0, 0x95(r3)
    xori r0, r0, 0x36
    stb r0, 0x5(r6)
    lbz r0, 0x96(r3)
    xori r0, r0, 0x36
    stb r0, 0x6(r6)
    lbz r0, 0x97(r3)
    xori r0, r0, 0x36
    stb r0, 0x7(r6)
    addi r6, r6, 0x8
    bdnz lbl_8032CA30
lbl_8032CAA0:
    addi r6, r1, 0x8
    subf r0, r4, r5
    add r6, r6, r4
    mtctr r0
    cmplw r4, r5
    bge lbl_8032CAD4
lbl_8032CAB8:
    add r3, r30, r4
    addi r4, r4, 0x1
    lbz r0, 0x90(r3)
    xori r0, r0, 0x36
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
    bdnz lbl_8032CAB8
lbl_8032CAD4:
    lwz r0, 0x4(r30)
    addi r3, r1, 0x8
    add r3, r3, r5
    li r4, 0x36
    subf r5, r5, r0
    bl memset
    lwz r12, 0x10(r30)
    mr r3, r31
    mtctr r12
    bctrl
    lwz r12, 0x14(r30)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r5, 0x4(r30)
    mtctr r12
    bctrl
lbl_8032CB14:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CB2C
// ----------------------------------------------------------------------------
asm void fn_8032CB2C() {
    nofralloc
    lwz r12, 0x14(r3)
    mtctr r12
    addi r3, r3, 0x20
    bctr
}

// ----------------------------------------------------------------------------
// fn_8032CB3C
// ----------------------------------------------------------------------------
asm void fn_8032CB3C() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    addi r30, r3, 0x20
    stw r29, 0x94(r1)
    mr r29, r4
    addi r4, r1, 0x48
    stw r28, 0x90(r1)
    mr r28, r3
    lwz r12, 0x18(r3)
    mr r3, r30
    mtctr r12
    bctrl
    lwz r5, 0x1c(r28)
    mr r31, r30
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_8032CC54
    cmplwi r5, 0x8
    subi r3, r5, 0x8
    ble lbl_8032CC20
    addi r0, r3, 0x7
    addi r6, r1, 0x8
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_8032CC20
lbl_8032CBB0:
    add r3, r28, r4
    addi r4, r4, 0x8
    lbz r0, 0x90(r3)
    xori r0, r0, 0x5c
    stb r0, 0x0(r6)
    lbz r0, 0x91(r3)
    xori r0, r0, 0x5c
    stb r0, 0x1(r6)
    lbz r0, 0x92(r3)
    xori r0, r0, 0x5c
    stb r0, 0x2(r6)
    lbz r0, 0x93(r3)
    xori r0, r0, 0x5c
    stb r0, 0x3(r6)
    lbz r0, 0x94(r3)
    xori r0, r0, 0x5c
    stb r0, 0x4(r6)
    lbz r0, 0x95(r3)
    xori r0, r0, 0x5c
    stb r0, 0x5(r6)
    lbz r0, 0x96(r3)
    xori r0, r0, 0x5c
    stb r0, 0x6(r6)
    lbz r0, 0x97(r3)
    xori r0, r0, 0x5c
    stb r0, 0x7(r6)
    addi r6, r6, 0x8
    bdnz lbl_8032CBB0
lbl_8032CC20:
    addi r6, r1, 0x8
    subf r0, r4, r5
    add r6, r6, r4
    mtctr r0
    cmplw r4, r5
    bge lbl_8032CC54
lbl_8032CC38:
    add r3, r28, r4
    addi r4, r4, 0x1
    lbz r0, 0x90(r3)
    xori r0, r0, 0x5c
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
    bdnz lbl_8032CC38
lbl_8032CC54:
    lwz r0, 0x4(r28)
    addi r3, r1, 0x8
    add r3, r3, r5
    li r4, 0x5c
    subf r5, r5, r0
    bl memset
    lwz r12, 0x10(r28)
    mr r3, r31
    mtctr r12
    bctrl
    lwz r12, 0x14(r28)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r5, 0x4(r28)
    mtctr r12
    bctrl
    lwz r12, 0x14(r28)
    mr r3, r30
    addi r4, r1, 0x48
    lwz r5, 0x0(r28)
    mtctr r12
    bctrl
    lwz r12, 0x18(r28)
    mr r3, r30
    mr r4, r29
    mtctr r12
    bctrl
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CCE0
// ----------------------------------------------------------------------------
asm void fn_8032CCE0() {
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x7d4(r3)
    stw r4, 0x7d8(r3)
    stw r4, 0x7c4(r3)
    stw r4, 0x7c8(r3)
    stw r4, 0x7cc(r3)
    stw r0, 0x7d0(r3)
    stw r4, 0x7dc(r3)
    stw r4, 0x7e0(r3)
    stw r4, 0x7e4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CD10
// ----------------------------------------------------------------------------
asm void fn_8032CD10() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80333DE4
    lwz r12, 0x7c4(r3)
    cmpwi r12, 0x0
    beq lbl_8032CD50
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_8032CD54
lbl_8032CD50:
    li r3, 0x0
lbl_8032CD54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CD6C
// ----------------------------------------------------------------------------
asm void fn_8032CD6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    lwz r12, 0x7c8(r3)
    cmpwi r12, 0x0
    beq lbl_8032CD9C
    mr r3, r31
    mtctr r12
    bctrl
lbl_8032CD9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CDB0
// ----------------------------------------------------------------------------
asm void fn_8032CDB0() {
    nofralloc
    stw r4, 0x7d8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CDB8
// ----------------------------------------------------------------------------
asm void fn_8032CDB8() {
    nofralloc
    stw r4, 0x7d4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CDC0
// ----------------------------------------------------------------------------
asm void fn_8032CDC0() {
    nofralloc
    lwz r3, 0x7d4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CDC8
// ----------------------------------------------------------------------------
asm void fn_8032CDC8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r30, lbl_8038E7D0@ha
    mr r31, r3
    mr r25, r4
    mr r23, r5
    mr r24, r6
    addi r30, r30, lbl_8038E7D0@l
    bl fn_80333E4C
    mr r29, r3
    mr r3, r31
    bl fn_80333E50
    mr r28, r3
    mr r3, r31
    bl fn_80333E58
    mr r27, r3
    mr r3, r31
    bl fn_80333E68
    mr r26, r3
    mr r3, r31
    bl fn_80333E60
    stw r25, 0x7c4(r29)
    mr r25, r3
    li r31, 0x0
    mr r3, r28
    stw r23, 0x7c8(r29)
    stw r31, 0x7d8(r29)
    stw r31, 0x7d4(r29)
    stw r31, 0x7dc(r29)
    bl fn_8032D378
    mr r3, r27
    bl fn_8032DE88
    mr r3, r26
    bl fn_8032D5D4
    bl fn_80333E98
    li r0, -0x1
    stw r0, 0x7d0(r29)
    bl fn_80333DE4
    lwz r12, 0x7c4(r3)
    cmpwi r12, 0x0
    beq lbl_8032CE8C
    li r3, 0x2000
    li r4, 0x8
    mtctr r12
    bctrl
    mr r31, r3
lbl_8032CE8C:
    cmpwi r31, 0x0
    stw r31, 0x7e0(r29)
    bne lbl_8032CEAC
    li r0, 0x1
    stw r0, 0x7d8(r29)
    bl fn_8032D614
    li r3, 0x0
    b lbl_8032CF40
lbl_8032CEAC:
    mr r3, r25
    mr r4, r24
    mr r5, r31
    bl fn_8032D620
    cmpwi r3, 0x0
    bne lbl_8032CF00
    li r0, 0x9
    stw r0, 0x7d8(r29)
    lwz r30, 0x7e0(r29)
    bl fn_80333DE4
    lwz r12, 0x7c8(r3)
    cmpwi r12, 0x0
    beq lbl_8032CEEC
    mr r3, r30
    mtctr r12
    bctrl
lbl_8032CEEC:
    li r0, 0x0
    stw r0, 0x7e0(r29)
    bl fn_8032D614
    li r3, 0x0
    b lbl_8032CF40
lbl_8032CF00:
    mr r3, r29
    bl fn_8032B11C
    cmpwi r3, 0x0
    bge lbl_8032CF34
    mr r4, r3
    addi r3, r30, 0x0
    opword 0x4CC63182
    bl OSReport
    addi r3, r30, 0x20
    addi r5, r30, 0x30
    li r4, 0xe6
    opword 0x4CC63182
    bl OSPanic
lbl_8032CF34:
    li r0, 0x1
    li r3, 0x1
    stw r0, 0x7cc(r29)
lbl_8032CF40:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8032CF58
// ----------------------------------------------------------------------------
asm void fn_8032CF58() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80333E4C
    mr r30, r3
    mr r3, r28
    bl fn_80333E60
    mr r31, r3
    li r4, 0x1
    bl fn_8032D730
    mr r3, r28
    bl fn_8032E81C
    mr r3, r31
    mr r4, r30
    bl fn_8032D6B4
    lwz r31, 0x7e0(r30)
    bl fn_80333DE4
    lwz r12, 0x7c8(r3)
    cmpwi r12, 0x0
    beq lbl_8032CFCC
    mr r3, r31
    mtctr r12
    bctrl
lbl_8032CFCC:
    li r31, 0x0
    stw r31, 0x7e0(r30)
    bl fn_8032D614
    cmpwi r29, 0x0
    stw r31, 0x7cc(r30)
    beq lbl_8032CFF0
    mr r12, r29
    mtctr r12
    bctrl
lbl_8032CFF0:
    bl fn_80333A54
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_8032D010
    lis r3, lbl_8038E818@ha
    addi r3, r3, lbl_8038E818@l
    opword 0x4CC63182
    bl fn_8019AFCC
lbl_8032D010:
    lwz r3, 0x7d0(r30)
    cmpwi r3, 0x0
    blt lbl_8032D028
    bl fn_80336274
    li r0, -0x1
    stw r0, 0x7d0(r30)
lbl_8032D028:
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
// fn_8032D048
// ----------------------------------------------------------------------------
asm void fn_8032D048() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r30, 0x0(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r30, 0x0
    mr r29, r6
    li r31, 0x0
    beq lbl_8032D0CC
    lwz r4, 0x8(r30)
    mr r3, r28
    bl fn_8032F968
    cmpwi r3, 0x0
    beq lbl_8032D0C8
    lwz r30, 0x4(r30)
    b lbl_8032D0B8
lbl_8032D098:
    lwz r4, 0x8(r30)
    mr r3, r28
    bl fn_8032F968
    cmpwi r3, 0x0
    bne lbl_8032D0B4
    li r31, 0x1
    b lbl_8032D0CC
lbl_8032D0B4:
    lwz r30, 0x4(r30)
lbl_8032D0B8:
    lwz r0, 0x0(r26)
    cmplw r30, r0
    bne lbl_8032D098
    b lbl_8032D0CC
lbl_8032D0C8:
    li r31, 0x1
lbl_8032D0CC:
    cmpwi r31, 0x0
    beq lbl_8032D0DC
    stw r29, 0xc(r30)
    b lbl_8032D168
lbl_8032D0DC:
    li r3, 0x18
    li r4, 0x4
    bl fn_8032CD10
    cmpwi r3, 0x0
    bne lbl_8032D114
    lis r3, lbl_8038E858@ha
    addi r3, r3, lbl_8038E858@l
    opword 0x4CC63182
    bl fn_8019AFCC
    mr r3, r27
    li r4, 0x1
    bl fn_8032CDB0
    li r3, 0x0
    b lbl_8032D16C
lbl_8032D114:
    stw r28, 0x8(r3)
    li r0, 0x0
    stw r29, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_8032D15C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x0(r26)
    stw r0, 0x4(r3)
    lwz r4, 0x0(r26)
    lwz r4, 0x0(r4)
    stw r3, 0x4(r4)
    lwz r4, 0x0(r26)
    stw r3, 0x0(r4)
    b lbl_8032D168
lbl_8032D15C:
    stw r3, 0x4(r3)
    stw r3, 0x0(r3)
    stw r3, 0x0(r26)
lbl_8032D168:
    li r3, 0x1
lbl_8032D16C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D184
// ----------------------------------------------------------------------------
asm void fn_8032D184() {
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_8032D1C4
    lwz r4, 0x0(r5)
    cmplw r5, r4
    beq lbl_8032D1BC
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lwz r0, 0x0(r5)
    lwz r4, 0x4(r5)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x0(r3)
    b lbl_8032D1C4
lbl_8032D1BC:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_8032D1C4:
    mr r3, r5
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D1CC
// ----------------------------------------------------------------------------
asm void fn_8032D1CC() {
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8032D1E0
    li r3, 0x0
    blr
lbl_8032D1E0:
    addi r3, r3, 0x30
    b fn_8032D048
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D1EC
// ----------------------------------------------------------------------------
asm void fn_8032D1EC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lwz r0, 0x4(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    mr r21, r6
    li r31, 0x0
    li r30, 0x0
    beq lbl_8032D22C
    li r3, 0x0
    b lbl_8032D360
lbl_8032D22C:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_8032D250
    lis r3, lbl_8038E874@ha
    addi r3, r3, lbl_8038E874@l
    opword 0x4CC63182
    bl fn_8019AFCC
    li r3, 0x0
    b lbl_8032D360
lbl_8032D250:
    cmpwi r6, 0x0
    beq lbl_8032D264
    mr r3, r21
    bl fn_8032F3C4
    mr r30, r3
lbl_8032D264:
    mr r3, r21
    mr r4, r30
    addi r5, r27, 0x3a
    li r6, 0x12
    bl fn_8032FAAC
    cmpwi r3, 0x0
    bge lbl_8032D288
    li r0, 0x1
    b lbl_8032D328
lbl_8032D288:
    lis r3, lbl_803421E0@ha
    li r24, 0x13
    addi r3, r3, lbl_803421E0@l
    addi r23, r3, 0x13
lbl_8032D298:
    add r22, r27, r24
    lbz r0, 0x0(r23)
    lbz r25, 0x38(r22)
    extsb r26, r0
lbl_8032D2A8:
    clrlwi r3, r25, 24
    addi r3, r3, 0x1
    clrlwi r0, r3, 24
    cmplwi r0, 0x7b
    bne lbl_8032D2C4
    li r3, 0x30
    b lbl_8032D2E0
lbl_8032D2C4:
    cmplwi r0, 0x5b
    bne lbl_8032D2D4
    li r3, 0x61
    b lbl_8032D2E0
lbl_8032D2D4:
    cmplwi r0, 0x3a
    bne lbl_8032D2E0
    li r3, 0x41
lbl_8032D2E0:
    extsb r25, r3
    stb r3, 0x38(r22)
    cmpw r25, r26
    beq lbl_8032D314
    mr r3, r21
    mr r4, r30
    addi r5, r27, 0x3a
    li r6, 0x12
    bl fn_8032FAAC
    cmpwi r3, 0x0
    bge lbl_8032D2A8
    li r0, 0x1
    b lbl_8032D328
lbl_8032D314:
    subi r24, r24, 0x1
    subi r23, r23, 0x1
    cmpwi r24, 0x2
    bge lbl_8032D298
    li r0, 0x0
lbl_8032D328:
    cmpwi r0, 0x0
    beq lbl_8032D35C
    mr r4, r28
    mr r5, r29
    mr r6, r21
    addi r3, r27, 0x34
    bl fn_8032D048
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_8032D35C
    lwz r3, 0x34(r27)
    lwz r3, 0x0(r3)
    stw r30, 0x10(r3)
lbl_8032D35C:
    mr r3, r31
lbl_8032D360:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D378
// ----------------------------------------------------------------------------
asm void fn_8032D378() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D388
// ----------------------------------------------------------------------------
asm void fn_8032D388() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, -0x1
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x14
    bl fn_8032CD10
    cmpwi r3, 0x0
    beq lbl_8032D434
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_8032D3F4
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x0(r29)
    stw r0, 0x4(r3)
    lwz r4, 0x0(r29)
    lwz r4, 0x0(r4)
    stw r3, 0x4(r4)
    lwz r4, 0x0(r29)
    stw r3, 0x0(r4)
    b lbl_8032D400
lbl_8032D3F4:
    stw r3, 0x0(r3)
    stw r3, 0x4(r3)
    stw r3, 0x0(r29)
lbl_8032D400:
    lwz r4, 0x4(r29)
    li r0, -0x1
    stw r4, 0x8(r3)
    addi r4, r4, 0x1
    stw r4, 0x4(r29)
    stw r30, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x4(r29)
    lwz r31, 0x8(r3)
    cmpwi r0, 0x0
    bge lbl_8032D434
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_8032D434:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D454
// ----------------------------------------------------------------------------
asm void fn_8032D454() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_8032D4C0
    lwz r0, 0x8(r6)
    cmpw r0, r5
    bne lbl_8032D498
    mr r31, r6
    b lbl_8032D4C0
lbl_8032D498:
    lwz r4, 0x4(r6)
    b lbl_8032D4B8
lbl_8032D4A0:
    lwz r0, 0x8(r4)
    cmpw r0, r5
    bne lbl_8032D4B4
    mr r31, r4
    b lbl_8032D4C0
lbl_8032D4B4:
    lwz r4, 0x4(r4)
lbl_8032D4B8:
    cmplw r4, r6
    bne lbl_8032D4A0
lbl_8032D4C0:
    cmpwi r31, 0x0
    beq lbl_8032D550
    lwz r0, 0x0(r6)
    cmplw r6, r0
    beq lbl_8032D504
    lwz r0, 0x4(r31)
    lwz r4, 0x0(r31)
    stw r0, 0x4(r4)
    lwz r0, 0x0(r31)
    lwz r4, 0x4(r31)
    stw r0, 0x0(r4)
    lwz r0, 0x0(r3)
    cmplw r0, r31
    bne lbl_8032D50C
    lwz r0, 0x4(r31)
    stw r0, 0x0(r3)
    b lbl_8032D50C
lbl_8032D504:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_8032D50C:
    lwz r4, 0xc(r31)
    mr r3, r29
    bl fn_803339B4
    lwz r4, 0xc(r31)
    mr r30, r3
    mr r3, r29
    bl fn_8032E5C0
    mr r3, r31
    bl fn_8032CD6C
    cmpwi r30, 0x0
    beq lbl_8032D54C
    li r0, 0x8
    mr r3, r29
    stw r0, 0x4(r30)
    mr r4, r30
    bl fn_80333D8C
lbl_8032D54C:
    li r7, 0x1
lbl_8032D550:
    lwz r31, 0x1c(r1)
    mr r3, r7
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D570
// ----------------------------------------------------------------------------
asm void fn_8032D570() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_8032D5A0
lbl_8032D590:
    lwz r5, 0x8(r3)
    mr r3, r30
    mr r4, r31
    bl fn_8032D454
lbl_8032D5A0:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    bne lbl_8032D590
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D5C4
// ----------------------------------------------------------------------------
asm void fn_8032D5C4() {
    nofralloc
    b fn_8032D184
}

// ----------------------------------------------------------------------------
// fn_8032D5C8
// ----------------------------------------------------------------------------
asm void fn_8032D5C8() {
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D5D4
// ----------------------------------------------------------------------------
asm void fn_8032D5D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_8032D600
    bl OSInitMutex
    li r0, 0x1
    stw r0, 0x18(r31)
lbl_8032D600:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D614
// ----------------------------------------------------------------------------
asm void fn_8032D614() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D618
// ----------------------------------------------------------------------------
asm void fn_8032D618() {
    nofralloc
    b OSLockMutex
}

// ----------------------------------------------------------------------------
// fn_8032D61C
// ----------------------------------------------------------------------------
asm void fn_8032D61C() {
    nofralloc
    b OSUnlockMutex
}

// ----------------------------------------------------------------------------
// fn_8032D620
// ----------------------------------------------------------------------------
asm void fn_8032D620() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8032FD4C
    cmpwi r3, 0x0
    bne lbl_8032D668
    mr r3, r29
    addi r4, r29, 0x20
    li r5, 0x3
    bl OSInitMessageQueue
    mr r3, r29
    bl fn_8032FD40
lbl_8032D668:
    lis r4, fn_8032D7C8@ha
    mr r8, r30
    addi r3, r29, 0x30
    addi r6, r31, 0x2000
    addi r4, r4, fn_8032D7C8@l
    li r5, 0x0
    li r7, 0x2000
    li r9, 0x0
    bl fn_8031CDF0
    addi r3, r29, 0x30
    bl fn_8031D460
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D6B4
// ----------------------------------------------------------------------------
asm void fn_8032D6B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x7dc(r4)
    li r4, 0x0
    bl OSSendMessage
    addi r3, r31, 0x30
    li r4, 0x0
    bl fn_8031D320
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D6FC
// ----------------------------------------------------------------------------
asm void fn_8032D6FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    bl OSReceiveMessage
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D724
// ----------------------------------------------------------------------------
asm void fn_8032D724() {
    nofralloc
    li r4, 0x0
    li r5, 0x0
    b OSSendMessage
}

// ----------------------------------------------------------------------------
// fn_8032D730
// ----------------------------------------------------------------------------
asm void fn_8032D730() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8038E8B0@ha
    addi r31, r31, lbl_8038E8B0@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8031C81C
    cmpwi r3, 0x0
    addi r0, r29, 0x30
    beq lbl_8032D7AC
    cmpwi r30, 0x0
    bne lbl_8032D778
    cmplw r3, r0
    bne lbl_8032D788
lbl_8032D778:
    cmpwi r30, 0x0
    beq lbl_8032D7AC
    cmplw r3, r0
    bne lbl_8032D7AC
lbl_8032D788:
    addi r3, r31, 0x1c
    addi r4, r31, 0x0
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x30
    li r4, 0xdf
    la r5, lbl_8049D3E0
    opword 0x4CC63182
    bl OSPanic
lbl_8032D7AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D7C8
// ----------------------------------------------------------------------------
asm void fn_8032D7C8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_803326D4
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D7EC
// ----------------------------------------------------------------------------
asm void fn_8032D7EC() {
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r6, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_8032D808
    li r0, -0x1
    stw r0, 0x0(r6)
lbl_8032D808:
    cmpw r4, r5
    bge lbl_8032D9D0
    cmpwi r4, 0x400
    li r10, -0x1
    li r30, 0x0
    bge lbl_8032D82C
    mr r31, r4
    li r12, 0x0
    b lbl_8032D888
lbl_8032D82C:
    subi r0, r4, 0x400
    lwz r12, 0x34(r3)
    srawi. r8, r0, 9
    beq lbl_8032D880
    srwi. r0, r8, 3
    mtctr r0
    beq lbl_8032D874
lbl_8032D848:
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    bdnz lbl_8032D848
    andi. r8, r8, 0x7
    beq lbl_8032D880
lbl_8032D874:
    mtctr r8
lbl_8032D878:
    lwz r12, 0x0(r12)
    bdnz lbl_8032D878
lbl_8032D880:
    subi r0, r4, 0x400
    clrlwi r31, r0, 23
lbl_8032D888:
    subf r0, r4, r5
    li r8, 0x1
    mtctr r0
    cmpw r4, r5
    bge lbl_8032D9D0
lbl_8032D89C:
    cmpwi r12, 0x0
    bne lbl_8032D8CC
    cmpwi r31, 0x400
    bge lbl_8032D8C0
    add r9, r3, r31
    addi r31, r31, 0x1
    lbz r0, 0x38(r9)
    extsb r11, r0
    b lbl_8032D8E8
lbl_8032D8C0:
    lwz r12, 0x34(r3)
    li r31, 0x0
    b lbl_8032D8DC
lbl_8032D8CC:
    cmpwi r31, 0x200
    bne lbl_8032D8DC
    li r31, 0x0
    lwz r12, 0x0(r12)
lbl_8032D8DC:
    add r9, r12, r31
    addi r31, r31, 0x1
    lbz r11, 0x4(r9)
lbl_8032D8E8:
    extsb r0, r11
    cmpwi r0, 0x3a
    bne lbl_8032D90C
    cmpwi r6, 0x0
    beq lbl_8032D90C
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bge lbl_8032D90C
    stw r4, 0x0(r6)
lbl_8032D90C:
    cmpwi r30, 0x0
    beq lbl_8032D954
    extsb r0, r11
    cmpwi r0, 0xa
    bne lbl_8032D94C
    subi r3, r5, 0x1
    cmpwi r7, 0x0
    subf r5, r3, r4
    addi r0, r4, 0x1
    subf r3, r4, r3
    nor r3, r5, r3
    srawi r3, r3, 31
    andc r10, r0, r3
    beq lbl_8032D94C
    li r0, 0x2
    stw r0, 0x0(r7)
lbl_8032D94C:
    mr r3, r10
    b lbl_8032D9D4
lbl_8032D954:
    extsb r0, r11
    cmpwi r0, 0xd
    bne lbl_8032D98C
    subi r9, r5, 0x1
    cmpwi r7, 0x0
    subf r10, r9, r4
    addi r0, r4, 0x1
    subf r9, r4, r9
    li r30, 0x1
    nor r9, r10, r9
    srawi r9, r9, 31
    andc r10, r0, r9
    beq lbl_8032D98C
    stw r8, 0x0(r7)
lbl_8032D98C:
    extsb r0, r11
    cmpwi r0, 0xa
    bne lbl_8032D9C8
    subi r3, r5, 0x1
    cmpwi r7, 0x0
    subf r5, r3, r4
    addi r0, r4, 0x1
    subf r3, r4, r3
    nor r3, r5, r3
    srawi r3, r3, 31
    andc r3, r0, r3
    beq lbl_8032D9D4
    li r0, 0x1
    stw r0, 0x0(r7)
    b lbl_8032D9D4
lbl_8032D9C8:
    addi r4, r4, 0x1
    bdnz lbl_8032D89C
lbl_8032D9D0:
    li r3, -0x1
lbl_8032D9D4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032D9E4
// ----------------------------------------------------------------------------
asm void fn_8032D9E4() {
    nofralloc
    cmpw r4, r5
    bge lbl_8032DAD4
    cmpwi r4, 0x400
    bge lbl_8032DA00
    mr r6, r4
    li r7, 0x0
    b lbl_8032DA5C
lbl_8032DA00:
    subi r0, r4, 0x400
    lwz r7, 0x34(r3)
    srawi. r6, r0, 9
    beq lbl_8032DA54
    srwi. r0, r6, 3
    mtctr r0
    beq lbl_8032DA48
lbl_8032DA1C:
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    bdnz lbl_8032DA1C
    andi. r6, r6, 0x7
    beq lbl_8032DA54
lbl_8032DA48:
    mtctr r6
lbl_8032DA4C:
    lwz r7, 0x0(r7)
    bdnz lbl_8032DA4C
lbl_8032DA54:
    subi r0, r4, 0x400
    clrlwi r6, r0, 23
lbl_8032DA5C:
    subf r0, r4, r5
    mtctr r0
    cmpw r4, r5
    bge lbl_8032DAD4
lbl_8032DA6C:
    cmpwi r7, 0x0
    bne lbl_8032DA9C
    cmpwi r6, 0x400
    bge lbl_8032DA90
    add r5, r3, r6
    addi r6, r6, 0x1
    lbz r0, 0x38(r5)
    extsb r0, r0
    b lbl_8032DAB8
lbl_8032DA90:
    lwz r7, 0x34(r3)
    li r6, 0x0
    b lbl_8032DAAC
lbl_8032DA9C:
    cmpwi r6, 0x200
    bne lbl_8032DAAC
    li r6, 0x0
    lwz r7, 0x0(r7)
lbl_8032DAAC:
    add r5, r7, r6
    addi r6, r6, 0x1
    lbz r0, 0x4(r5)
lbl_8032DAB8:
    extsb r0, r0
    cmpwi r0, 0x20
    beq lbl_8032DACC
    mr r3, r4
    blr
lbl_8032DACC:
    addi r4, r4, 0x1
    bdnz lbl_8032DA6C
lbl_8032DAD4:
    li r3, -0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_8032DADC
// ----------------------------------------------------------------------------
asm void fn_8032DADC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpw r4, r5
    bge lbl_8032DCB0
    cmpwi r4, 0x400
    bge lbl_8032DB0C
    mr r9, r4
    li r8, 0x0
    b lbl_8032DB68
lbl_8032DB0C:
    subi r0, r4, 0x400
    lwz r8, 0x34(r3)
    srawi. r9, r0, 9
    beq lbl_8032DB60
    srwi. r0, r9, 3
    mtctr r0
    beq lbl_8032DB54
lbl_8032DB28:
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    bdnz lbl_8032DB28
    andi. r9, r9, 0x7
    beq lbl_8032DB60
lbl_8032DB54:
    mtctr r9
lbl_8032DB58:
    lwz r8, 0x0(r8)
    bdnz lbl_8032DB58
lbl_8032DB60:
    subi r0, r4, 0x400
    clrlwi r9, r0, 23
lbl_8032DB68:
    cmpwi r8, 0x0
    bne lbl_8032DB98
    cmpwi r9, 0x400
    bge lbl_8032DB8C
    add r10, r3, r9
    addi r9, r9, 0x1
    lbz r0, 0x38(r10)
    extsb r25, r0
    b lbl_8032DBB4
lbl_8032DB8C:
    lwz r8, 0x34(r3)
    li r9, 0x0
    b lbl_8032DBA8
lbl_8032DB98:
    cmpwi r9, 0x200
    bne lbl_8032DBA8
    li r9, 0x0
    lwz r8, 0x0(r8)
lbl_8032DBA8:
    add r10, r8, r9
    addi r9, r9, 0x1
    lbz r25, 0x4(r10)
lbl_8032DBB4:
    extsb r7, r7
    subi r0, r5, 0x1
    li r28, 0x41
    li r29, 0x0
    li r31, 0x5a
    b lbl_8032DC48
lbl_8032DBCC:
    extsb. r5, r5
    beq lbl_8032DBEC
    cmpwi r5, 0x20
    beq lbl_8032DBEC
    cmpw r5, r7
    beq lbl_8032DBEC
    cmpw r4, r0
    bne lbl_8032DBF4
lbl_8032DBEC:
    li r3, 0x0
    b lbl_8032DCB4
lbl_8032DBF4:
    cmpwi r8, 0x0
    bne lbl_8032DC24
    cmpwi r9, 0x400
    bge lbl_8032DC18
    add r5, r3, r9
    addi r9, r9, 0x1
    lbz r5, 0x38(r5)
    extsb r25, r5
    b lbl_8032DC40
lbl_8032DC18:
    lwz r8, 0x34(r3)
    li r9, 0x0
    b lbl_8032DC34
lbl_8032DC24:
    cmpwi r9, 0x200
    bne lbl_8032DC34
    li r9, 0x0
    lwz r8, 0x0(r8)
lbl_8032DC34:
    add r5, r8, r9
    addi r9, r9, 0x1
    lbz r25, 0x4(r5)
lbl_8032DC40:
    addi r4, r4, 0x1
    addi r6, r6, 0x1
lbl_8032DC48:
    lbz r5, 0x0(r6)
    extsb r30, r5
    srawi r12, r30, 31
    subfc r10, r28, r30
    srwi r11, r30, 31
    adde r27, r12, r29
    addi r26, r30, 0x20
    srawi r12, r31, 31
    subfc r10, r30, r31
    adde r10, r12, r11
    and. r10, r27, r10
    bne lbl_8032DC7C
    mr r26, r30
lbl_8032DC7C:
    extsb r27, r25
    srawi r12, r27, 31
    subfc r10, r28, r27
    srwi r11, r27, 31
    adde r30, r12, r29
    srawi r12, r31, 31
    subfc r10, r27, r31
    adde r10, r12, r11
    and. r10, r30, r10
    beq lbl_8032DCA8
    addi r27, r27, 0x20
lbl_8032DCA8:
    cmpw r27, r26
    beq lbl_8032DBCC
lbl_8032DCB0:
    li r3, -0x1
lbl_8032DCB4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8032DCCC
// ----------------------------------------------------------------------------
asm void fn_8032DCCC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x0(r3)
    add r7, r5, r6
    mr r30, r3
    mr r27, r4
    cmpw r7, r0
    mr r28, r5
    mr r29, r6
    bgt lbl_8032DDF4
    cmpwi r6, 0x0
    beq lbl_8032DDEC
    cmpwi r5, 0x400
    bge lbl_8032DD44
    subfic r0, r5, 0x400
    mr r31, r29
    cmpw r6, r0
    ble lbl_8032DD24
    mr r31, r0
lbl_8032DD24:
    add r4, r30, r5
    mr r3, r27
    mr r5, r31
    addi r4, r4, 0x38
    bl fn_8032F3C0
    add r28, r28, r31
    subf r29, r31, r29
    add r27, r27, r31
lbl_8032DD44:
    cmpwi r29, 0x0
    beq lbl_8032DDEC
    subi r28, r28, 0x400
    lwz r30, 0x34(r30)
    srawi. r3, r28, 9
    clrlwi r28, r28, 23
    beq lbl_8032DDE4
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_8032DD98
lbl_8032DD6C:
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    bdnz lbl_8032DD6C
    andi. r3, r3, 0x7
    beq lbl_8032DDE4
lbl_8032DD98:
    mtctr r3
lbl_8032DD9C:
    lwz r30, 0x0(r30)
    bdnz lbl_8032DD9C
    b lbl_8032DDE4
lbl_8032DDA8:
    subfic r0, r28, 0x200
    mr r31, r29
    cmpw r29, r0
    ble lbl_8032DDBC
    mr r31, r0
lbl_8032DDBC:
    add r4, r30, r28
    mr r3, r27
    mr r5, r31
    addi r4, r4, 0x4
    bl fn_8032F3C0
    add r28, r28, r31
    lwz r30, 0x0(r30)
    clrlwi r28, r28, 23
    subf r29, r31, r29
    add r27, r27, r31
lbl_8032DDE4:
    cmpwi r29, 0x0
    bne lbl_8032DDA8
lbl_8032DDEC:
    li r3, 0x1
    b lbl_8032DDF8
lbl_8032DDF4:
    li r3, 0x0
lbl_8032DDF8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032DE10
// ----------------------------------------------------------------------------
asm void fn_8032DE10() {
    nofralloc
    lwz r3, 0x1c(r3)
    subf r0, r3, r4
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_8032DE2C
// ----------------------------------------------------------------------------
asm void fn_8032DE2C() {
    nofralloc
    lwz r9, 0x2c(r4)
    mr r8, r7
    mr r10, r6
    lwz r7, 0x28(r9)
    lwz r0, 0x1c(r9)
    add r6, r7, r6
    subf r7, r10, r0
    b fn_8032EFD8
}

// ----------------------------------------------------------------------------
// fn_8032DE4C
// ----------------------------------------------------------------------------
asm void fn_8032DE4C() {
    nofralloc
    lwz r10, 0x2c(r4)
    lwz r0, 0x1c(r10)
    cmplw r0, r6
    bgt lbl_8032DE64
    li r3, -0x3eb
    blr
lbl_8032DE64:
    lwz r9, 0x1c(r10)
    lwz r0, 0x28(r10)
    subf r9, r6, r9
    cmpw r7, r9
    add r6, r0, r6
    ble lbl_8032DE80
    mr r7, r9
lbl_8032DE80:
    b fn_8032EFD8
    blr
}

// ----------------------------------------------------------------------------
// fn_8032DE88
// ----------------------------------------------------------------------------
asm void fn_8032DE88() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032DE94
// ----------------------------------------------------------------------------
asm void fn_8032DE94() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_19
    cmpwi r5, 0x3
    mr r20, r3
    mr r28, r4
    mr r21, r5
    mr r27, r6
    mr r26, r7
    mr r22, r8
    mr r24, r9
    mr r19, r10
    addi r25, r1, 0x8
    li r23, 0x0
    bge lbl_8032DEE0
    cmpwi r5, 0x0
    bge lbl_8032DEF0
lbl_8032DEE0:
    mr r3, r20
    li r4, 0xb
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032DEF0:
    li r3, 0x258
    li r4, 0x4
    bl fn_8032CD10
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_8032DF18
    mr r3, r20
    li r4, 0x1
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032DF18:
    li r4, 0x258
    bl fn_8032F3CC
    li r3, 0x43c
    li r4, 0x4
    bl fn_8032CD10
    cmpwi r3, 0x0
    stw r3, 0x2c(r23)
    bne lbl_8032DF48
    mr r3, r20
    li r4, 0x1
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032DF48:
    li r4, 0x43c
    bl fn_8032F3CC
    lwz r4, 0x2c(r23)
    mr r3, r28
    stw r27, 0x28(r4)
    lwz r4, 0x2c(r23)
    stw r26, 0x1c(r4)
    lwz r4, 0x2c(r23)
    stw r24, 0x2c(r4)
    lwz r4, 0x2c(r23)
    stw r19, 0x30(r4)
    bl fn_8032F3C4
    cmpwi r3, 0x7
    mr r19, r3
    bgt lbl_8032DF94
    mr r3, r20
    li r4, 0x4
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032DF94:
    addi r3, r3, 0x1
    cmpwi r3, 0x100
    ble lbl_8032DFC4
    li r4, 0x4
    bl fn_8032CD10
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_8032DFC4
    mr r3, r20
    li r4, 0x4
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032DFC4:
    mr r3, r25
    mr r4, r19
    bl fn_8032F3CC
    mr r3, r25
    mr r4, r28
    mr r5, r19
    bl fn_8032F3C0
    li r0, 0x50
    mr r3, r25
    stw r0, 0x20(r23)
    li r29, 0x7
    la r4, lbl_8049D3E8
    li r5, 0x7
    bl fn_8032F3D8
    cmpwi r3, 0x0
    beq lbl_8032E044
    lis r4, lbl_8038E8F0@ha
    mr r3, r25
    addi r4, r4, lbl_8038E8F0@l
    li r5, 0x8
    bl fn_8032F3D8
    cmpwi r3, 0x0
    beq lbl_8032E030
    mr r3, r20
    li r4, 0x4
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032E030:
    li r3, 0x1
    li r0, 0x1bb
    stw r3, 0x8(r23)
    li r29, 0x8
    stw r0, 0x20(r23)
lbl_8032E044:
    subf. r28, r29, r19
    add r24, r25, r29
    bgt lbl_8032E060
    mr r3, r20
    li r4, 0x4
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032E060:
    mr r19, r24
    li r26, 0x0
    li r27, 0x0
    li r30, 0x0
    b lbl_8032E0E4
lbl_8032E074:
    cmpwi r30, 0x2
    bne lbl_8032E084
    subi r30, r30, 0x1
    b lbl_8032E0DC
lbl_8032E084:
    cmpwi r30, 0x1
    bne lbl_8032E0C8
    add r3, r26, r24
    li r4, 0x2
    subi r3, r3, 0x1
    bl fn_8032F628
    extsb. r0, r3
    subi r30, r30, 0x1
    bge lbl_8032E0B8
    mr r3, r20
    li r4, 0x4
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032E0B8:
    cmpwi r0, 0x2f
    bne lbl_8032E0DC
    subi r27, r27, 0x1
    b lbl_8032E0F8
lbl_8032E0C8:
    extsb r0, r3
    cmpwi r0, 0x25
    bne lbl_8032E0DC
    li r30, 0x2
    addi r27, r27, 0x1
lbl_8032E0DC:
    addi r26, r26, 0x1
    addi r19, r19, 0x1
lbl_8032E0E4:
    cmpw r26, r28
    bge lbl_8032E0F8
    lbz r3, 0x0(r19)
    cmpwi r3, 0x2f
    bne lbl_8032E074
lbl_8032E0F8:
    cmpwi r30, 0x0
    beq lbl_8032E110
    mr r3, r20
    li r4, 0x4
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032E110:
    slwi r3, r27, 1
    add r0, r29, r28
    subf r3, r3, r0
    li r4, 0x4
    addi r19, r3, 0x1
    mr r3, r19
    bl fn_8032CD10
    cmpwi r3, 0x0
    stw r3, 0x24(r23)
    bne lbl_8032E148
    mr r3, r20
    li r4, 0x1
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032E148:
    mr r4, r19
    bl fn_8032F3CC
    lwz r3, 0x24(r23)
    mr r4, r25
    mr r5, r29
    bl fn_8032F3C0
    mr r19, r24
    li r31, 0x0
    li r27, 0x0
    li r30, 0x0
    li r26, 0x0
    b lbl_8032E218
lbl_8032E178:
    cmpwi r30, 0x2
    bne lbl_8032E188
    subi r30, r30, 0x1
    b lbl_8032E210
lbl_8032E188:
    cmpwi r30, 0x1
    bne lbl_8032E1C8
    add r3, r31, r24
    li r4, 0x2
    subi r3, r3, 0x1
    bl fn_8032F628
    lwz r4, 0x24(r23)
    extsb r5, r3
    add r0, r27, r29
    subi r30, r30, 0x1
    add r4, r4, r0
    cmpwi r5, 0x2f
    stb r3, -0x1(r4)
    bne lbl_8032E210
    li r26, 0x1
    b lbl_8032E210
lbl_8032E1C8:
    lbz r5, 0x0(r19)
    cmpwi r5, 0x2f
    bne lbl_8032E1D8
    li r26, 0x1
lbl_8032E1D8:
    extsb r3, r5
    cntlzw r4, r26
    subi r0, r3, 0x25
    cntlzw r0, r0
    srwi r3, r4, 5
    srwi r0, r0, 5
    and. r0, r3, r0
    beq lbl_8032E200
    li r30, 0x2
    b lbl_8032E20C
lbl_8032E200:
    lwz r3, 0x24(r23)
    add r0, r27, r29
    stbx r5, r3, r0
lbl_8032E20C:
    addi r27, r27, 0x1
lbl_8032E210:
    addi r31, r31, 0x1
    addi r19, r19, 0x1
lbl_8032E218:
    cmpw r31, r28
    blt lbl_8032E178
    lwz r3, 0x24(r23)
    add r0, r29, r27
    li r4, 0x0
    li r5, 0x0
    stbx r4, r3, r0
    lwz r0, 0x24(r23)
    add r4, r0, r29
    mr r3, r4
    mtctr r27
    cmpwi r27, 0x0
    ble lbl_8032E27C
lbl_8032E24C:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x2f
    beq lbl_8032E264
    cmpwi r0, 0x3a
    bne lbl_8032E270
lbl_8032E264:
    add r0, r5, r29
    stw r0, 0x14(r23)
    b lbl_8032E27C
lbl_8032E270:
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    bdnz lbl_8032E24C
lbl_8032E27C:
    cmpw cr1, r5, r27
    bne cr1, lbl_8032E294
    add r0, r5, r29
    stw r0, 0x14(r23)
    stw r0, 0x18(r23)
    b lbl_8032E354
lbl_8032E294:
    lbzx r0, r4, r5
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_8032E2B0
    lwz r0, 0x14(r23)
    stw r0, 0x18(r23)
    b lbl_8032E354
lbl_8032E2B0:
    cmpwi r0, 0x3a
    bne lbl_8032E354
    subf r0, r5, r27
    add r3, r4, r5
    mtctr r0
    bge cr1, lbl_8032E2EC
lbl_8032E2C8:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    bne lbl_8032E2E0
    add r0, r5, r29
    stw r0, 0x18(r23)
    b lbl_8032E2EC
lbl_8032E2E0:
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    bdnz lbl_8032E2C8
lbl_8032E2EC:
    cmpw r5, r27
    bne lbl_8032E300
    add r0, r5, r29
    stw r0, 0x18(r23)
    b lbl_8032E354
lbl_8032E300:
    lwz r4, 0x14(r23)
    lwz r3, 0x24(r23)
    addi r4, r4, 0x1
    lwz r0, 0x18(r23)
    add r3, r3, r4
    subf r4, r4, r0
    bl fn_8032FA1C
    cmpwi r3, 0x0
    bge lbl_8032E32C
    lwz r3, 0x20(r23)
    b lbl_8032E34C
lbl_8032E32C:
    lis r4, 0x1
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_8032E34C
    mr r3, r20
    li r4, 0x4
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032E34C:
    clrlwi r0, r3, 16
    stw r0, 0x20(r23)
lbl_8032E354:
    lwz r5, 0x8(r23)
    li r4, 0x4
    lwz r0, 0x14(r23)
    neg r3, r5
    or r3, r3, r5
    srwi r3, r3, 31
    addi r3, r3, 0x7
    subf r19, r3, r0
    addi r3, r19, 0x1
    bl fn_8032CD10
    cmpwi r3, 0x0
    stw r3, 0x28(r23)
    bne lbl_8032E398
    mr r3, r20
    li r4, 0x1
    bl fn_8032CDB0
    b lbl_8032E444
lbl_8032E398:
    addi r4, r19, 0x1
    bl fn_8032F3CC
    lwz r4, 0x8(r23)
    mr r5, r19
    lwz r6, 0x24(r23)
    neg r0, r4
    lwz r3, 0x28(r23)
    or r0, r0, r4
    srwi r4, r0, 31
    addi r0, r4, 0x7
    add r4, r6, r0
    bl fn_8032F3C0
    lis r4, lbl_803421E0@ha
    addi r3, r23, 0x38
    addi r4, r4, lbl_803421E0@l
    li r5, 0x14
    bl fn_8032F3C0
    stw r21, 0x1c(r23)
    li r0, 0x0
    cmpwi r25, 0x0
    stw r0, 0xac(r23)
    stw r0, 0xb0(r23)
    stw r0, 0xb4(r23)
    stw r0, 0xb8(r23)
    stw r0, 0xbc(r23)
    stw r0, 0xc0(r23)
    stw r0, 0xc4(r23)
    stw r0, 0xc8(r23)
    stw r0, 0xcc(r23)
    stw r0, 0xd4(r23)
    lwz r3, 0x2c(r23)
    stw r22, 0x438(r3)
    stw r0, 0xc(r23)
    stw r0, 0x244(r23)
    stw r0, 0x248(r23)
    beq lbl_8032E43C
    addi r0, r1, 0x8
    cmplw r25, r0
    beq lbl_8032E43C
    mr r3, r25
    bl fn_8032CD6C
lbl_8032E43C:
    mr r3, r23
    b lbl_8032E4A4
lbl_8032E444:
    cmpwi r23, 0x0
    beq lbl_8032E484
    lwz r3, 0x24(r23)
    cmpwi r3, 0x0
    beq lbl_8032E45C
    bl fn_8032CD6C
lbl_8032E45C:
    lwz r3, 0x28(r23)
    cmpwi r3, 0x0
    beq lbl_8032E46C
    bl fn_8032CD6C
lbl_8032E46C:
    lwz r3, 0x2c(r23)
    cmpwi r3, 0x0
    beq lbl_8032E47C
    bl fn_8032CD6C
lbl_8032E47C:
    mr r3, r23
    bl fn_8032CD6C
lbl_8032E484:
    cmpwi r25, 0x0
    beq lbl_8032E4A0
    addi r0, r1, 0x8
    cmplw r25, r0
    beq lbl_8032E4A0
    mr r3, r25
    bl fn_8032CD6C
lbl_8032E4A0:
    li r3, 0x0
lbl_8032E4A4:
    addi r11, r1, 0x140
    bl _restgpr_19
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// fn_8032E4BC
// ----------------------------------------------------------------------------
asm void fn_8032E4BC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_80333E68
    mr r30, r3
    mr r4, r29
    bl fn_803339B4
    cmpwi r3, 0x0
    beq lbl_8032E4F8
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_8032E4F8:
    lwz r3, 0x2c(r29)
    bl fn_8032CD6C
    mr r3, r30
    mr r4, r29
    bl fn_803339B4
    cmpwi r3, 0x0
    beq lbl_8032E51C
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_8032E51C:
    lwz r31, 0x30(r29)
    b lbl_8032E54C
lbl_8032E524:
    lwz r3, 0x0(r31)
    cmplw r31, r3
    beq lbl_8032E540
    lwz r30, 0x0(r3)
    bl fn_8032CD6C
    stw r30, 0x0(r31)
    b lbl_8032E54C
lbl_8032E540:
    mr r3, r31
    bl fn_8032CD6C
    li r31, 0x0
lbl_8032E54C:
    cmpwi r31, 0x0
    bne lbl_8032E524
    lwz r30, 0x34(r29)
    b lbl_8032E584
lbl_8032E55C:
    lwz r3, 0x0(r30)
    cmplw r30, r3
    beq lbl_8032E578
    lwz r31, 0x0(r3)
    bl fn_8032CD6C
    stw r31, 0x0(r30)
    b lbl_8032E584
lbl_8032E578:
    mr r3, r30
    bl fn_8032CD6C
    li r30, 0x0
lbl_8032E584:
    cmpwi r30, 0x0
    bne lbl_8032E55C
    lwz r3, 0x24(r29)
    bl fn_8032CD6C
    lwz r3, 0x28(r29)
    bl fn_8032CD6C
    mr r3, r29
    bl fn_8032CD6C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032E5C0
// ----------------------------------------------------------------------------
asm void fn_8032E5C0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_803339B4
    cmpwi r3, 0x0
    beq lbl_8032E5F0
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_8032E5F0:
    lwz r31, 0x30(r29)
    b lbl_8032E620
lbl_8032E5F8:
    lwz r3, 0x0(r31)
    cmplw r31, r3
    beq lbl_8032E614
    lwz r30, 0x0(r3)
    bl fn_8032CD6C
    stw r30, 0x0(r31)
    b lbl_8032E620
lbl_8032E614:
    mr r3, r31
    bl fn_8032CD6C
    li r31, 0x0
lbl_8032E620:
    cmpwi r31, 0x0
    bne lbl_8032E5F8
    lwz r30, 0x34(r29)
    b lbl_8032E658
lbl_8032E630:
    lwz r3, 0x0(r30)
    cmplw r30, r3
    beq lbl_8032E64C
    lwz r31, 0x0(r3)
    bl fn_8032CD6C
    stw r31, 0x0(r30)
    b lbl_8032E658
lbl_8032E64C:
    mr r3, r30
    bl fn_8032CD6C
    li r30, 0x0
lbl_8032E658:
    cmpwi r30, 0x0
    bne lbl_8032E630
    lwz r3, 0x24(r29)
    bl fn_8032CD6C
    lwz r3, 0x28(r29)
    bl fn_8032CD6C
    mr r3, r29
    bl fn_8032CD6C
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032E698
// ----------------------------------------------------------------------------
asm void fn_8032E698() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    bl fn_80333E4C
    mr r31, r3
    mr r3, r28
    bl fn_80333E60
    mr r30, r3
    mr r3, r28
    bl fn_80333E68
    lwz r0, 0x4(r27)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_8032E6F4
    mr r3, r31
    li r4, 0xb
    bl fn_8032CDB0
    li r3, -0x1
    b lbl_8032E740
lbl_8032E6F4:
    bl fn_8032D618
    mr r3, r28
    bl fn_80333E50
    mr r4, r27
    bl fn_8032D388
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_8032E728
    li r0, 0x1
    mr r3, r30
    stw r0, 0x4(r27)
    bl fn_8032D724
    b lbl_8032E734
lbl_8032E728:
    mr r3, r31
    li r4, 0x1
    bl fn_8032CDB0
lbl_8032E734:
    mr r3, r29
    bl fn_8032D61C
    mr r3, r28
lbl_8032E740:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032E758
// ----------------------------------------------------------------------------
asm void fn_8032E758() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    bl fn_80333E58
    mr r31, r3
    mr r3, r27
    bl fn_80333E68
    lwz r29, 0x0(r31)
    mr r31, r3
    bl fn_8032D618
    cmpwi r29, 0x0
    beq lbl_8032E7D8
    lwz r0, 0x8(r29)
    cmpw r0, r28
    bne lbl_8032E7D8
    lwz r3, 0xc(r29)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8032E7D8
    lwz r4, 0xc(r29)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x0(r4)
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_8032F2F8
    li r30, 0x1
lbl_8032E7D8:
    cmpwi r30, 0x0
    bne lbl_8032E7F8
    mr r3, r27
    bl fn_80333E50
    mr r4, r31
    mr r5, r28
    bl fn_8032D454
    mr r30, r3
lbl_8032E7F8:
    mr r3, r31
    bl fn_8032D61C
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032E81C
// ----------------------------------------------------------------------------
asm void fn_8032E81C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80333E58
    mr r31, r3
    mr r3, r29
    bl fn_80333E50
    mr r30, r3
    mr r3, r29
    bl fn_80333E68
    lwz r29, 0x0(r31)
    mr r31, r3
    bl fn_8032D618
    cmpwi r29, 0x0
    beq lbl_8032E894
    lwz r3, 0xc(r29)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8032E894
    lwz r4, 0xc(r29)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x0(r4)
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_8032F2F8
lbl_8032E894:
    mr r3, r30
    mr r4, r31
    bl fn_8032D570
    mr r3, r31
    bl fn_8032D61C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032E8C4
// ----------------------------------------------------------------------------
asm void fn_8032E8C4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_8032E8F4
lbl_8032E8E8:
    lwz r31, 0x0(r3)
    bl fn_8032CD6C
    stw r31, 0x34(r30)
lbl_8032E8F4:
    lwz r3, 0x34(r30)
    cmpwi r3, 0x0
    bne lbl_8032E8E8
    lwz r3, 0x20(r30)
    cmpwi r3, 0x0
    beq lbl_8032E910
    bl fn_8032CD6C
lbl_8032E910:
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    beq lbl_8032E920
    bl fn_8032CD6C
lbl_8032E920:
    lwz r12, 0x30(r30)
    cmpwi r12, 0x0
    beq lbl_8032E950
    lis r4, fn_8032CD6C@ha
    lwz r3, 0x28(r30)
    addi r4, r4, fn_8032CD6C@l
    lwz r5, 0x438(r30)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r30)
    stw r0, 0x1c(r30)
lbl_8032E950:
    mr r3, r29
    mr r4, r30
    bl fn_803339BC
    cmpwi r3, 0x0
    beq lbl_8032E96C
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_8032E96C:
    mr r3, r30
    bl fn_8032CD6C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032E990
// ----------------------------------------------------------------------------
asm void fn_8032E990() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r0, 0x0
    mr r29, r5
    stw r0, 0x8(r1)
    mr r28, r4
    lwz r5, 0x0(r3)
    mr r27, r3
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r4, 0xc
    bl fn_8032D7EC
    mr r31, r3
    b lbl_8032EAA0
lbl_8032E9D4:
    lwz r5, 0x0(r27)
    mr r3, r27
    mr r4, r31
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    bl fn_8032D7EC
    lwz r5, 0xc(r1)
    mr r30, r3
    cmpwi r5, 0x0
    ble lbl_8032EA9C
    mr r3, r27
    mr r4, r31
    mr r6, r28
    li r7, 0x0
    bl fn_8032DADC
    cmpwi r3, 0x0
    bne lbl_8032EA9C
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r27)
    addi r4, r3, 0x1
    cmpw r4, r0
    bge lbl_8032EA94
    lwz r5, 0x0(r27)
    mr r3, r27
    addi r7, r1, 0x8
    li r6, 0x0
    bl fn_8032D7EC
    cmpwi r3, 0x0
    bgt lbl_8032EA50
    lwz r30, 0x0(r27)
    b lbl_8032EA68
lbl_8032EA50:
    lwz r0, 0x8(r1)
    cmpw r3, r0
    bge lbl_8032EA64
    li r3, -0x1
    b lbl_8032EAAC
lbl_8032EA64:
    subf r30, r0, r3
lbl_8032EA68:
    lwz r4, 0xc(r1)
    mr r3, r27
    mr r5, r30
    addi r4, r4, 0x1
    bl fn_8032D9E4
    cmpwi r3, 0x0
    bge lbl_8032EA88
    mr r3, r30
lbl_8032EA88:
    stw r3, 0x0(r29)
    subf r3, r3, r30
    b lbl_8032EAAC
lbl_8032EA94:
    li r3, 0x0
    b lbl_8032EAAC
lbl_8032EA9C:
    mr r31, r30
lbl_8032EAA0:
    cmpwi r31, 0x0
    bgt lbl_8032E9D4
    li r3, -0x1
lbl_8032EAAC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8032EAC4
// ----------------------------------------------------------------------------
asm void fn_8032EAC4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, -0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    bne lbl_8032EAE8
    li r31, -0x1
    b lbl_8032EB04
lbl_8032EAE8:
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0x4
    bl fn_8033660C
    cmpwi r3, -0x6
    beq lbl_8032EB04
    li r31, -0x1
lbl_8032EB04:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032EB1C
// ----------------------------------------------------------------------------
asm void fn_8032EB1C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_803360B0
    li r4, 0x0
    cmpwi r30, 0x0
    stw r4, 0xc(r1)
    mr r31, r3
    li r0, 0x0
    stw r4, 0x8(r1)
    beq lbl_8032EB68
    lwz r0, 0x244(r30)
    stw r0, 0xc(r1)
lbl_8032EB68:
    cmpwi r3, 0x0
    blt lbl_8032EB94
    cmpwi r0, 0x0
    beq lbl_8032EB94
    lis r4, 0x1
    mr r3, r31
    subi r4, r4, 0x1
    addi r6, r1, 0xc
    li r5, 0x1002
    li r7, 0x4
    bl fn_80337518
lbl_8032EB94:
    cmpwi r30, 0x0
    beq lbl_8032EBA4
    lwz r0, 0x248(r30)
    stw r0, 0x8(r1)
lbl_8032EBA4:
    cmpwi r31, 0x0
    blt lbl_8032EBD4
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8032EBD4
    lis r4, 0x1
    mr r3, r31
    subi r4, r4, 0x1
    addi r6, r1, 0x8
    li r5, 0x1001
    li r7, 0x4
    bl fn_80337518
lbl_8032EBD4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032EBF0
// ----------------------------------------------------------------------------
asm void fn_8032EBF0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8032D618
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    ble lbl_8032EC30
    bl fn_80338054
    li r0, -0x1
    stw r0, 0xac(r30)
lbl_8032EC30:
    mr r3, r29
    bl fn_8032D61C
    mr r3, r31
    bl fn_80336274
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032EC5C
// ----------------------------------------------------------------------------
asm void fn_8032EC5C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r9, 0x8
    li r0, 0x2
    stb r9, 0x8(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    stb r0, 0x9(r1)
    mr r30, r6
    mr r31, r7
    clrlwi r3, r8, 16
    bl fn_80336B2C
    sth r3, 0xa(r1)
    mr r3, r30
    addi r4, r1, 0x8
    stw r31, 0xc(r1)
    bl fn_80336400
    cmpwi r3, 0x0
    bge lbl_8032ECD0
    lwz r0, 0x0(r29)
    li r3, -0x3e9
    cmpwi r0, 0x0
    beq lbl_8032ED04
    li r3, -0x3ea
    b lbl_8032ED04
lbl_8032ECD0:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_8032ED00
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_8032ED00
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_8032ED1C
    b lbl_8032ED04
lbl_8032ED00:
    li r3, 0x0
lbl_8032ED04:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8032ED1C
// ----------------------------------------------------------------------------
asm void fn_8032ED1C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    lwz r3, 0xcc(r5)
    mr r28, r5
    lwz r4, 0x28(r5)
    mr r29, r6
    li r30, 0x0
    bl fn_803377F8
    stw r3, 0xac(r28)
    lwz r12, 0x7e4(r26)
    cmpwi r12, 0x0
    beq lbl_8032ED74
    lwz r4, 0xd4(r28)
    cmpwi r4, 0x0
    beq lbl_8032ED74
    mtctr r12
    bctrl
lbl_8032ED74:
    lwz r0, 0xc8(r28)
    cmpwi r0, 0x1
    bne lbl_8032ED9C
    lwz r3, 0xac(r28)
    lwz r4, 0xdc(r28)
    bl fn_8033847C
    cmpwi r3, 0x0
    beq lbl_8032EDD4
    li r3, -0x3ed
    b lbl_8032EEB4
lbl_8032ED9C:
    lwz r4, 0xb0(r28)
    cmpwi r4, 0x0
    beq lbl_8032EDD4
    lwz r6, 0xb8(r28)
    cmpwi r6, 0x0
    beq lbl_8032EDD4
    lwz r3, 0xac(r28)
    lwz r5, 0xb4(r28)
    lwz r7, 0xbc(r28)
    bl fn_80338100
    cmpwi r3, 0x0
    beq lbl_8032EDD4
    li r3, -0x3ed
    b lbl_8032EEB4
lbl_8032EDD4:
    lwz r4, 0xc0(r28)
    cmpwi r4, 0x0
    beq lbl_8032EDFC
    lwz r3, 0xac(r28)
    lwz r5, 0xc4(r28)
    bl fn_8033826C
    cmpwi r3, 0x0
    beq lbl_8032EE18
    li r3, -0x3ec
    b lbl_8032EEB4
lbl_8032EDFC:
    lwz r3, 0xac(r28)
    lwz r4, 0xd8(r28)
    bl fn_803383B4
    cmpwi r3, 0x0
    beq lbl_8032EE18
    li r3, -0x3ec
    b lbl_8032EEB4
lbl_8032EE18:
    lwz r3, 0xac(r28)
    mr r4, r29
    bl fn_80337950
    cmpwi r3, -0x1
    bge lbl_8032EEA8
    li r3, -0x3e9
    b lbl_8032EEB4
    b lbl_8032EEA8
lbl_8032EE38:
    mr r3, r27
    mr r4, r28
    bl fn_803339B4
    mr r31, r3
    lwz r3, 0xac(r28)
    bl fn_80337A18
    mr r29, r3
    mr r3, r26
    mr r4, r29
    bl fn_8032CDB8
    cmpwi r31, 0x0
    beq lbl_8032EE6C
    stw r29, 0x8(r31)
lbl_8032EE6C:
    cmpwi r29, -0x1
    beq lbl_8032EEA0
    bge lbl_8032EE90
    cmpwi r29, -0x7
    beq lbl_8032EEA8
    blt lbl_8032EEA0
    cmpwi r29, -0x3
    bge lbl_8032EEA8
    b lbl_8032EEA0
lbl_8032EE90:
    cmpwi r29, 0x1
    bge lbl_8032EEA0
    li r30, 0x1
    b lbl_8032EEA8
lbl_8032EEA0:
    li r3, -0x3e9
    b lbl_8032EEB4
lbl_8032EEA8:
    cmpwi r30, 0x0
    beq lbl_8032EE38
    li r3, 0x0
lbl_8032EEB4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032EECC
// ----------------------------------------------------------------------------
asm void fn_8032EECC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r6, 0x0
    mr r30, r3
    mr r27, r5
    mr r31, r6
    addi r29, r3, 0x40
    li r28, 0x0
    ble lbl_8032EFBC
    addis r3, r3, 0x1
    lwz r0, -0x7fbc(r3)
    cmpwi r0, 0x0
    bne lbl_8032EF44
    lis r5, 0x1
    mr r3, r4
    mr r4, r29
    mr r6, r7
    addi r5, r5, -0x8000
    bl fn_8033660C
    cmpwi r3, 0x0
    ble lbl_8032EFC0
    addis r4, r30, 0x1
    li r0, 0x0
    stw r3, -0x7fbc(r4)
    stw r0, -0x7fc0(r4)
    b lbl_8032EF44
    b lbl_8032EFC0
lbl_8032EF44:
    addis r3, r30, 0x1
    lwz r0, -0x7fbc(r3)
    cmpwi r0, 0x0
    beq lbl_8032EFBC
    cmplw r31, r0
    ble lbl_8032EF60
    mr r31, r0
lbl_8032EF60:
    addis r3, r30, 0x1
    mr r5, r31
    lwz r0, -0x7fc0(r3)
    mr r3, r27
    add r4, r29, r0
    bl fn_8032F3C0
    addis r3, r30, 0x1
    lwz r0, -0x7fbc(r3)
    subf. r0, r31, r0
    stw r0, -0x7fbc(r3)
    bne lbl_8032EFAC
    lis r4, 0x1
    mr r3, r29
    addi r4, r4, -0x8000
    bl fn_8032F3CC
    addis r3, r30, 0x1
    li r0, 0x0
    stw r0, -0x7fc0(r3)
    b lbl_8032EFB8
lbl_8032EFAC:
    lwz r0, -0x7fc0(r3)
    add r0, r0, r31
    stw r0, -0x7fc0(r3)
lbl_8032EFB8:
    mr r28, r31
lbl_8032EFBC:
    mr r3, r28
lbl_8032EFC0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032EFD8
// ----------------------------------------------------------------------------
asm void fn_8032EFD8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0xac(r4)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    cmpwi r0, 0x0
    mr r30, r7
    mr r31, r8
    ble lbl_8032F020
    mr r3, r0
    mr r4, r29
    mr r5, r30
    bl fn_80337AC4
    b lbl_8032F04C
lbl_8032F020:
    bl fn_803339B4
    cmpwi r3, 0x0
    beq lbl_8032F044
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_8032EECC
    b lbl_8032F04C
lbl_8032F044:
    li r3, -0x3e9
    b lbl_8032F09C
lbl_8032F04C:
    cmpwi r3, 0x0
    bge lbl_8032F09C
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_8032F068
    li r3, -0x3ea
    b lbl_8032F09C
lbl_8032F068:
    lwz r0, 0xac(r27)
    cmpwi r0, 0x0
    ble lbl_8032F088
    addi r0, r3, 0x7
    cmplwi r0, 0x1
    bgt lbl_8032F098
    li r3, 0x0
    b lbl_8032F09C
lbl_8032F088:
    cmpwi r3, -0x38
    bne lbl_8032F098
    li r3, 0x0
    b lbl_8032F09C
lbl_8032F098:
    li r3, -0x3e9
lbl_8032F09C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F0B4
// ----------------------------------------------------------------------------
asm void fn_8032F0B4() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x60
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_26
    clrlwi. r0, r4, 27
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    beq lbl_8032F0F4
    subfic r31, r0, 0x20
    b lbl_8032F0F8
lbl_8032F0F4:
    li r31, 0x0
lbl_8032F0F8:
    addi r3, r1, 0x20
    li r30, 0x0
    li r4, 0x20
    bl fn_8032F3CC
    cmpwi r31, 0x0
    beq lbl_8032F168
    cmplw r31, r28
    ble lbl_8032F11C
    mr r31, r28
lbl_8032F11C:
    mr r4, r27
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_8032F3C0
    mr r3, r26
    mr r5, r31
    mr r6, r29
    addi r4, r1, 0x20
    bl fn_80336658
    cmpwi r3, 0x0
    ble lbl_8032F230
    cmplw r3, r31
    mr r30, r3
    bge lbl_8032F158
    b lbl_8032F230
lbl_8032F158:
    add r27, r27, r3
    subf r28, r3, r28
    b lbl_8032F168
    b lbl_8032F230
lbl_8032F168:
    cmpwi r28, 0x0
    ble lbl_8032F1C8
    clrrwi. r31, r28, 5
    beq lbl_8032F1C8
    mr r3, r26
    mr r4, r27
    mr r5, r31
    mr r6, r29
    bl fn_80336658
    cmpwi r3, 0x0
    ble lbl_8032F1B4
    cmplw r3, r31
    add r30, r30, r3
    bge lbl_8032F1A8
    mr r3, r30
    b lbl_8032F230
lbl_8032F1A8:
    add r27, r27, r3
    subf r28, r3, r28
    b lbl_8032F1C8
lbl_8032F1B4:
    cmpwi r30, 0x0
    ble lbl_8032F230
    mr r3, r30
    b lbl_8032F230
    b lbl_8032F230
lbl_8032F1C8:
    cmpwi r28, 0x0
    ble lbl_8032F22C
    clrlwi. r31, r28, 27
    beq lbl_8032F22C
    addi r3, r1, 0x20
    li r4, 0x20
    bl fn_8032F3CC
    mr r4, r27
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_8032F3C0
    mr r3, r26
    mr r5, r31
    mr r6, r29
    addi r4, r1, 0x20
    bl fn_80336658
    cmpwi r3, 0x0
    ble lbl_8032F218
    add r30, r30, r3
    b lbl_8032F22C
lbl_8032F218:
    cmpwi r30, 0x0
    ble lbl_8032F230
    mr r3, r30
    b lbl_8032F230
    b lbl_8032F230
lbl_8032F22C:
    mr r3, r30
lbl_8032F230:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F24C
// ----------------------------------------------------------------------------
asm void fn_8032F24C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0xac(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    ble lbl_8032F280
    mr r4, r5
    mr r3, r0
    mr r5, r6
    bl fn_80337D94
    b lbl_8032F294
lbl_8032F280:
    mr r3, r4
    mr r4, r5
    mr r5, r6
    mr r6, r7
    bl fn_8032F0B4
lbl_8032F294:
    cmpwi r3, 0x0
    bge lbl_8032F2E4
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_8032F2B0
    li r3, -0x3ea
    b lbl_8032F2E4
lbl_8032F2B0:
    lwz r0, 0xac(r31)
    cmpwi r0, 0x0
    ble lbl_8032F2D0
    addi r0, r3, 0x7
    cmplwi r0, 0x1
    bgt lbl_8032F2E0
    li r3, 0x0
    b lbl_8032F2E4
lbl_8032F2D0:
    cmpwi r3, -0x38
    bne lbl_8032F2E0
    li r3, 0x0
    b lbl_8032F2E4
lbl_8032F2E0:
    li r3, -0x3e9
lbl_8032F2E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F2F8
// ----------------------------------------------------------------------------
asm void fn_8032F2F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8032D618
    cmpwi r31, 0x0
    blt lbl_8032F32C
    mr r3, r31
    li r4, 0x2
    bl fn_803367AC
lbl_8032F32C:
    mr r3, r30
    bl fn_8032D61C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F34C
// ----------------------------------------------------------------------------
asm void fn_8032F34C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r4
    li r4, 0x0
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    li r5, 0x0
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r31, 0xc(r1)
    bl fn_803371D0
    cmpwi r3, 0x0
    bne lbl_8032F3A4
    lwz r4, 0x8(r1)
    addi r3, r1, 0xc
    li r5, 0x4
    lwz r4, 0x18(r4)
    addi r4, r4, 0x4
    bl fn_8032F3C0
    lwz r3, 0x8(r1)
    bl fn_803374B4
    b lbl_8032F3A8
lbl_8032F3A4:
    stw r31, 0xc(r1)
lbl_8032F3A8:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    lwz r3, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F3C0
// ----------------------------------------------------------------------------
asm void fn_8032F3C0() {
    nofralloc
    b memcpy
}

// ----------------------------------------------------------------------------
// fn_8032F3C4
// ----------------------------------------------------------------------------
asm void fn_8032F3C4() {
    nofralloc
    b strlen
}

// ----------------------------------------------------------------------------
// fn_8032F3C8
// ----------------------------------------------------------------------------
asm void fn_8032F3C8() {
    nofralloc
    b strcmp
}

// ----------------------------------------------------------------------------
// fn_8032F3CC
// ----------------------------------------------------------------------------
asm void fn_8032F3CC() {
    nofralloc
    mr r5, r4
    li r4, 0x0
    b memset
}

// ----------------------------------------------------------------------------
// fn_8032F3D8
// ----------------------------------------------------------------------------
asm void fn_8032F3D8() {
    nofralloc
    stwu r1, -0x10(r1)
    li r11, 0x41
    li r10, 0x0
    li r9, 0x5a
    stw r31, 0xc(r1)
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_8032F494
lbl_8032F3F8:
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r12, r6
    extsb r31, r0
    beq lbl_8032F41C
    cmpwi r31, 0x0
    bne lbl_8032F434
lbl_8032F41C:
    cmpwi r12, 0x0
    bne lbl_8032F434
    cmpwi r31, 0x0
    bne lbl_8032F434
    li r5, 0x0
    b lbl_8032F494
lbl_8032F434:
    srawi r7, r31, 31
    srwi r6, r31, 31
    subfc r0, r11, r31
    adde r8, r7, r10
    srawi r7, r9, 31
    subfc r0, r31, r9
    adde r0, r7, r6
    and. r0, r8, r0
    beq lbl_8032F45C
    addi r31, r31, 0x20
lbl_8032F45C:
    srawi r7, r12, 31
    srwi r6, r12, 31
    subfc r0, r11, r12
    adde r8, r7, r10
    srawi r7, r9, 31
    subfc r0, r12, r9
    adde r0, r7, r6
    and. r0, r8, r0
    beq lbl_8032F484
    addi r12, r12, 0x20
lbl_8032F484:
    cmpw r12, r31
    bne lbl_8032F494
    subi r5, r5, 0x1
    bdnz lbl_8032F3F8
lbl_8032F494:
    lwz r31, 0xc(r1)
    mr r3, r5
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F4A4
// ----------------------------------------------------------------------------
asm void fn_8032F4A4() {
    nofralloc
    lbz r0, 0x0(r3)
    addi r4, r3, 0x1
    li r3, 0x0
    extsb r0, r0
    b lbl_8032F508
lbl_8032F4B8:
    cmpwi r0, 0x30
    blt lbl_8032F4C8
    cmpwi r0, 0x39
    ble lbl_8032F4F0
lbl_8032F4C8:
    cmpwi r0, 0x41
    blt lbl_8032F4D8
    cmpwi r0, 0x5a
    ble lbl_8032F4F0
lbl_8032F4D8:
    cmpwi r0, 0x61
    blt lbl_8032F4E8
    cmpwi r0, 0x7a
    ble lbl_8032F4F0
lbl_8032F4E8:
    cmpwi r0, 0x20
    bne lbl_8032F4F8
lbl_8032F4F0:
    addi r3, r3, 0x1
    b lbl_8032F4FC
lbl_8032F4F8:
    addi r3, r3, 0x3
lbl_8032F4FC:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    extsb r0, r0
lbl_8032F508:
    cmpwi r0, 0x0
    bne lbl_8032F4B8
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F514
// ----------------------------------------------------------------------------
asm void fn_8032F514() {
    nofralloc
    lbz r0, 0x0(r3)
    addi r5, r3, 0x1
    li r3, 0x0
    extsb r0, r0
    mtctr r4
    cmpwi r4, 0x0
    blelr
lbl_8032F530:
    cmpwi r0, 0x30
    blt lbl_8032F540
    cmpwi r0, 0x39
    ble lbl_8032F568
lbl_8032F540:
    cmpwi r0, 0x41
    blt lbl_8032F550
    cmpwi r0, 0x5a
    ble lbl_8032F568
lbl_8032F550:
    cmpwi r0, 0x61
    blt lbl_8032F560
    cmpwi r0, 0x7a
    ble lbl_8032F568
lbl_8032F560:
    cmpwi r0, 0x20
    bne lbl_8032F570
lbl_8032F568:
    addi r3, r3, 0x1
    b lbl_8032F574
lbl_8032F570:
    addi r3, r3, 0x3
lbl_8032F574:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    extsb r0, r0
    bdnz lbl_8032F530
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F588
// ----------------------------------------------------------------------------
asm void fn_8032F588() {
    nofralloc
    extsb r0, r4
    cmpwi r0, 0x20
    bne lbl_8032F5A4
    li r0, 0x2b
    stb r0, 0x0(r3)
    li r3, 0x1
    blr
lbl_8032F5A4:
    cmpwi r0, 0x30
    blt lbl_8032F5B4
    cmpwi r0, 0x39
    ble lbl_8032F5DC
lbl_8032F5B4:
    extsb r0, r4
    cmpwi r0, 0x41
    blt lbl_8032F5C8
    cmpwi r0, 0x5a
    ble lbl_8032F5DC
lbl_8032F5C8:
    extsb r0, r4
    cmpwi r0, 0x61
    blt lbl_8032F5E8
    cmpwi r0, 0x7a
    bgt lbl_8032F5E8
lbl_8032F5DC:
    stb r4, 0x0(r3)
    li r3, 0x1
    blr
lbl_8032F5E8:
    extrwi r5, r4, 4, 24
    li r0, 0x25
    cmpwi r5, 0xa
    stb r0, 0x0(r3)
    clrlwi r4, r4, 28
    addi r0, r5, 0x37
    bge lbl_8032F608
    addi r0, r5, 0x30
lbl_8032F608:
    cmpwi r4, 0xa
    stb r0, 0x1(r3)
    addi r0, r4, 0x37
    bge lbl_8032F61C
    addi r0, r4, 0x30
lbl_8032F61C:
    stb r0, 0x2(r3)
    li r3, 0x3
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F628
// ----------------------------------------------------------------------------
asm void fn_8032F628() {
    nofralloc
    cmpwi r4, 0x8
    ble lbl_8032F638
    li r3, -0x1
    blr
lbl_8032F638:
    lbz r0, 0x0(r3)
    subi r5, r4, 0x8
    cntlzw r5, r5
    extsb r6, r0
    xori r0, r6, 0x37
    srwi r7, r5, 5
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    and. r0, r7, r0
    beq lbl_8032F670
    li r3, -0x1
    blr
lbl_8032F670:
    li r11, 0x0
    li r12, 0x0
    li r9, 0x41
    li r8, 0x0
    li r6, 0x5a
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_8032F744
lbl_8032F690:
    lbz r0, 0x0(r3)
    extsb r10, r0
    srawi r5, r10, 31
    subfc r0, r9, r10
    srwi r4, r10, 31
    adde r7, r5, r8
    srawi r5, r6, 31
    subfc r0, r10, r6
    adde r0, r5, r4
    and. r0, r7, r0
    beq lbl_8032F6C0
    addi r10, r10, 0x20
lbl_8032F6C0:
    extsb r4, r10
    cmpwi r4, 0x30
    blt lbl_8032F6E8
    cmpwi r4, 0x39
    bgt lbl_8032F6E8
    slwi r0, r11, 4
    li r12, 0x1
    add r4, r4, r0
    subi r11, r4, 0x30
    b lbl_8032F73C
lbl_8032F6E8:
    cmpwi r4, 0x61
    blt lbl_8032F70C
    cmpwi r4, 0x66
    bgt lbl_8032F70C
    slwi r0, r11, 4
    li r12, 0x1
    add r4, r4, r0
    subi r11, r4, 0x57
    b lbl_8032F73C
lbl_8032F70C:
    cmpwi r12, 0x0
    beq lbl_8032F724
    cmpwi r4, 0x20
    beq lbl_8032F744
    cmpwi r4, 0x0
    beq lbl_8032F744
lbl_8032F724:
    cmpwi r12, 0x0
    bne lbl_8032F734
    cmpwi r4, 0x20
    beq lbl_8032F73C
lbl_8032F734:
    li r3, -0x1
    blr
lbl_8032F73C:
    addi r3, r3, 0x1
    bdnz lbl_8032F690
lbl_8032F744:
    mr r3, r11
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F74C
// ----------------------------------------------------------------------------
asm void fn_8032F74C() {
    nofralloc
    cmpwi r4, 0xa
    ble lbl_8032F75C
    li r3, -0x1
    blr
lbl_8032F75C:
    li r5, 0x0
    li r6, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_8032F7E4
lbl_8032F770:
    lbz r0, 0x0(r3)
    cmpwi r6, 0x0
    extsb r4, r0
    beq lbl_8032F790
    cmpwi r4, 0x20
    beq lbl_8032F7E4
    cmpwi r4, 0x0
    beq lbl_8032F7E4
lbl_8032F790:
    cmpwi r6, 0x0
    bne lbl_8032F7A0
    cmpwi r4, 0x20
    beq lbl_8032F7DC
lbl_8032F7A0:
    cmpwi r4, 0x30
    blt lbl_8032F7B0
    cmpwi r4, 0x39
    ble lbl_8032F7B8
lbl_8032F7B0:
    li r3, -0x1
    blr
lbl_8032F7B8:
    mulli r0, r5, 0xa
    mr r7, r5
    li r6, 0x1
    add r4, r4, r0
    subi r5, r4, 0x30
    cmpw r7, r5
    ble lbl_8032F7DC
    li r3, -0x1
    blr
lbl_8032F7DC:
    addi r3, r3, 0x1
    bdnz lbl_8032F770
lbl_8032F7E4:
    mr r3, r5
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F7EC
// ----------------------------------------------------------------------------
asm void fn_8032F7EC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    lis r7, lbl_803421F8@ha
    lwzu r29, lbl_803421F8@l(r7)
    li r0, 0x3
    mr r5, r3
    lwz r30, 0x4(r7)
    addi r28, r1, 0x8
    lwz r31, 0x8(r7)
    li r25, 0x0
    lwz r12, 0xc(r7)
    li r26, 0x0
    lwz r11, 0x10(r7)
    li r27, 0x0
    lwz r10, 0x14(r7)
    li r6, 0x30
    lwz r9, 0x18(r7)
    lwz r8, 0x1c(r7)
    lwz r7, 0x20(r7)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    mtctr r0
lbl_8032F86C:
    lwz r0, 0x0(r28)
    cmplw r4, r0
    blt lbl_8032F89C
    divwu r8, r4, r0
    li r26, 0x1
    addi r25, r25, 0x1
    mullw r7, r8, r0
    addi r0, r8, 0x30
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    subf r4, r7, r4
    b lbl_8032F8B0
lbl_8032F89C:
    cmpwi r26, 0x0
    beq lbl_8032F8B0
    stb r6, 0x0(r5)
    addi r25, r25, 0x1
    addi r5, r5, 0x1
lbl_8032F8B0:
    lwz r0, 0x4(r28)
    cmplw r4, r0
    blt lbl_8032F8E0
    divwu r8, r4, r0
    li r26, 0x1
    addi r25, r25, 0x1
    mullw r7, r8, r0
    addi r0, r8, 0x30
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    subf r4, r7, r4
    b lbl_8032F8F4
lbl_8032F8E0:
    cmpwi r26, 0x0
    beq lbl_8032F8F4
    stb r6, 0x0(r5)
    addi r25, r25, 0x1
    addi r5, r5, 0x1
lbl_8032F8F4:
    lwz r0, 0x8(r28)
    cmplw r4, r0
    blt lbl_8032F924
    divwu r8, r4, r0
    li r26, 0x1
    addi r25, r25, 0x1
    mullw r7, r8, r0
    addi r0, r8, 0x30
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    subf r4, r7, r4
    b lbl_8032F938
lbl_8032F924:
    cmpwi r26, 0x0
    beq lbl_8032F938
    stb r6, 0x0(r5)
    addi r25, r25, 0x1
    addi r5, r5, 0x1
lbl_8032F938:
    addi r28, r28, 0xc
    addi r27, r27, 0x2
    bdnz lbl_8032F86C
    addi r0, r4, 0x30
    addi r11, r1, 0x50
    stbx r0, r3, r25
    addi r3, r25, 0x1
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_8032F968
// ----------------------------------------------------------------------------
asm void fn_8032F968() {
    nofralloc
    stwu r1, -0x10(r1)
    li r10, 0x41
    li r9, 0x0
    li r7, 0x5a
    stw r31, 0xc(r1)
    b lbl_8032F9A0
lbl_8032F980:
    extsb. r0, r31
    beq lbl_8032F990
    cmpwi r0, 0x20
    bne lbl_8032F998
lbl_8032F990:
    li r3, 0x0
    b lbl_8032FA10
lbl_8032F998:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_8032F9A0:
    lbz r0, 0x0(r4)
    extsb r11, r0
    srawi r6, r11, 31
    subfc r0, r10, r11
    srwi r5, r11, 31
    adde r8, r6, r9
    addi r12, r11, 0x20
    srawi r6, r7, 31
    subfc r0, r11, r7
    adde r0, r6, r5
    and. r0, r8, r0
    bne lbl_8032F9D4
    mr r12, r11
lbl_8032F9D4:
    lbz r31, 0x0(r3)
    extsb r11, r31
    srawi r6, r11, 31
    subfc r0, r10, r11
    srwi r5, r11, 31
    adde r8, r6, r9
    srawi r6, r7, 31
    subfc r0, r11, r7
    adde r0, r6, r5
    and. r0, r8, r0
    beq lbl_8032FA04
    addi r11, r11, 0x20
lbl_8032FA04:
    cmpw r11, r12
    beq lbl_8032F980
    li r3, -0x1
lbl_8032FA10:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FA1C
// ----------------------------------------------------------------------------
asm void fn_8032FA1C() {
    nofralloc
    li r12, 0x0
    li r11, 0x0
    li r9, 0x30
    li r8, 0x0
    li r6, 0x39
    mtctr r4
    cmpwi r4, 0x0
    beq lbl_8032FA98
lbl_8032FA3C:
    lbz r0, 0x0(r3)
    extsb r10, r0
    cmpwi r10, 0x20
    beq lbl_8032FA90
    srawi r5, r10, 31
    srwi r4, r10, 31
    subfc r0, r9, r10
    adde r7, r5, r8
    srawi r5, r6, 31
    subfc r0, r10, r6
    adde r0, r5, r4
    and. r0, r7, r0
    beq lbl_8032FA90
    mulli r0, r11, 0xa
    addi r12, r12, 0x1
    cmpwi r12, 0x9
    add r4, r10, r0
    subi r11, r4, 0x30
    ble lbl_8032FA90
    li r3, -0x1
    blr
lbl_8032FA90:
    addi r3, r3, 0x1
    bdnz lbl_8032FA3C
lbl_8032FA98:
    cmpwi r12, 0x0
    li r3, -0x1
    beqlr
    mr r3, r11
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FAAC
// ----------------------------------------------------------------------------
asm void fn_8032FAAC() {
    nofralloc
    cmpw r4, r6
    bge lbl_8032FABC
    li r3, -0x1
    blr
lbl_8032FABC:
    subf r7, r6, r4
    mr r4, r3
    addi r10, r7, 0x1
    li r11, 0x0
    b lbl_8032FB48
lbl_8032FAD0:
    lbz r7, 0x0(r5)
    lbz r0, 0x0(r4)
    extsb r7, r7
    extsb r0, r0
    cmpw r7, r0
    bne lbl_8032FB40
    add r7, r3, r11
    subi r0, r6, 0x1
    addi r8, r7, 0x1
    li r12, 0x1
    addi r7, r5, 0x1
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_8032FB30
lbl_8032FB08:
    lbz r9, 0x0(r8)
    lbz r0, 0x0(r7)
    extsb r9, r9
    extsb r0, r0
    cmpw r9, r0
    bne lbl_8032FB30
    addi r12, r12, 0x1
    addi r7, r7, 0x1
    addi r8, r8, 0x1
    bdnz lbl_8032FB08
lbl_8032FB30:
    cmpw r12, r6
    bne lbl_8032FB40
    li r3, 0x0
    blr
lbl_8032FB40:
    addi r11, r11, 0x1
    addi r4, r4, 0x1
lbl_8032FB48:
    cmpw r11, r10
    blt lbl_8032FAD0
    li r3, -0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FB58
// ----------------------------------------------------------------------------
asm void fn_8032FB58() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    lis r31, lbl_8038E900@ha
    mr r30, r28
    mr r3, r29
    addi r31, r31, lbl_8038E900@l
    bl strlen
    addi r4, r3, 0x2
    li r0, 0x3
    divwu r4, r4, r0
    cmpwi r3, 0x0
    li r27, 0x0
    ble lbl_8032FCDC
    srwi. r0, r4, 1
    mulli r27, r4, 0x3
    mtctr r0
    beq lbl_8032FC74
lbl_8032FBB0:
    lbz r12, 0x0(r29)
    lbz r10, 0x1(r29)
    extsb r11, r12
    clrlslwi r9, r12, 30, 4
    srawi r11, r11, 2
    lbz r7, 0x2(r29)
    lbzx r11, r31, r11
    extsb r5, r10
    clrlslwi r8, r10, 28, 2
    add r9, r31, r9
    stb r11, 0x0(r30)
    srawi r10, r5, 4
    extsb r6, r7
    clrlwi r0, r7, 26
    lbzx r9, r10, r9
    add r5, r31, r8
    lbz r12, 0x3(r29)
    srawi r6, r6, 6
    stb r9, 0x1(r30)
    extsb r11, r12
    lbz r10, 0x4(r29)
    lbzx r5, r6, r5
    clrlslwi r9, r12, 30, 4
    lbz r7, 0x5(r29)
    srawi r11, r11, 2
    stb r5, 0x2(r30)
    extsb r5, r10
    clrlslwi r8, r10, 28, 2
    add r9, r31, r9
    lbzx r0, r31, r0
    srawi r10, r5, 4
    extsb r6, r7
    add r5, r31, r8
    stb r0, 0x3(r30)
    srawi r6, r6, 6
    clrlwi r0, r7, 26
    addi r29, r29, 0x6
    lbzx r11, r31, r11
    stb r11, 0x4(r30)
    lbzx r9, r10, r9
    stb r9, 0x5(r30)
    lbzx r5, r6, r5
    stb r5, 0x6(r30)
    lbzx r0, r31, r0
    stb r0, 0x7(r30)
    addi r30, r30, 0x8
    bdnz lbl_8032FBB0
    andi. r4, r4, 0x1
    beq lbl_8032FCDC
lbl_8032FC74:
    mtctr r4
lbl_8032FC78:
    lbz r12, 0x0(r29)
    lbz r10, 0x1(r29)
    extsb r11, r12
    lbz r7, 0x2(r29)
    srawi r11, r11, 2
    clrlslwi r9, r12, 30, 4
    lbzx r11, r31, r11
    extsb r5, r10
    clrlslwi r8, r10, 28, 2
    add r9, r31, r9
    stb r11, 0x0(r30)
    srawi r10, r5, 4
    extsb r6, r7
    add r5, r31, r8
    lbzx r9, r10, r9
    srawi r6, r6, 6
    clrlwi r0, r7, 26
    addi r29, r29, 0x3
    stb r9, 0x1(r30)
    lbzx r5, r6, r5
    stb r5, 0x2(r30)
    lbzx r0, r31, r0
    stb r0, 0x3(r30)
    addi r30, r30, 0x4
    bdnz lbl_8032FC78
lbl_8032FCDC:
    addi r0, r3, 0x1
    cmpw r27, r0
    bne lbl_8032FCF4
    li r0, 0x3d
    stb r0, -0x1(r30)
    b lbl_8032FD0C
lbl_8032FCF4:
    addi r0, r3, 0x2
    cmpw r27, r0
    bne lbl_8032FD0C
    li r0, 0x3d
    stb r0, -0x2(r30)
    stb r0, -0x1(r30)
lbl_8032FD0C:
    li r0, 0x0
    mr r3, r28
    stb r0, 0x0(r30)
    bl strlen
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FD34
// ----------------------------------------------------------------------------
asm void fn_8032FD34() {
    nofralloc
    li r0, 0x0
    stw r0, 0x348(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FD40
// ----------------------------------------------------------------------------
asm void fn_8032FD40() {
    nofralloc
    li r0, 0x1
    stw r0, 0x348(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FD4C
// ----------------------------------------------------------------------------
asm void fn_8032FD4C() {
    nofralloc
    lwz r3, 0x348(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FD54
// ----------------------------------------------------------------------------
asm void fn_8032FD54() {
    nofralloc
    subi r0, r4, 0x2
    clrlwi r0, r0, 30
    lbzx r5, r3, r0
    extsb r0, r5
    cmpwi r0, 0xd
    bne lbl_8032FD8C
    subi r0, r4, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xd
    bne lbl_8032FD8C
    li r3, 0x1
    blr
lbl_8032FD8C:
    extsb r0, r5
    cmpwi r0, 0xa
    bne lbl_8032FDB8
    subi r0, r4, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_8032FDB8
    li r3, 0x1
    blr
lbl_8032FDB8:
    subi r0, r4, 0x4
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xd
    bne lbl_8032FE14
    subi r0, r4, 0x3
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_8032FE14
    extsb r0, r5
    cmpwi r0, 0xd
    bne lbl_8032FE14
    subi r0, r4, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_8032FE14
    li r3, 0x1
    blr
lbl_8032FE14:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FE1C
// ----------------------------------------------------------------------------
asm void fn_8032FE1C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r29, r8
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r30, r29
    b lbl_8032FED8
lbl_8032FE50:
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_8032FE64
    li r3, -0x1
    b lbl_8032FEE4
lbl_8032FE64:
    lwz r0, 0x0(r27)
    mr r31, r30
    subfic r3, r0, 0x100
    cmpw r30, r3
    ble lbl_8032FE7C
    mr r31, r3
lbl_8032FE7C:
    mr r4, r28
    mr r5, r31
    add r3, r25, r0
    bl fn_8032F3C0
    lwz r0, 0x0(r27)
    add r28, r28, r31
    subf r30, r31, r30
    add r0, r0, r31
    cmpwi r0, 0x100
    stw r0, 0x0(r27)
    bne lbl_8032FED8
    mr r3, r24
    mr r4, r26
    mr r5, r25
    li r6, 0x100
    li r7, 0x0
    bl fn_8032F24C
    cmpwi r3, 0x0
    bgt lbl_8032FECC
    b lbl_8032FEE4
lbl_8032FECC:
    lwz r0, 0x0(r27)
    subf r0, r3, r0
    stw r0, 0x0(r27)
lbl_8032FED8:
    cmpwi r30, 0x0
    bgt lbl_8032FE50
    mr r3, r29
lbl_8032FEE4:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8032FEFC
// ----------------------------------------------------------------------------
asm void fn_8032FEFC() {
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
    li r30, 0x0
    bl fn_803339B4
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8032FF40
    li r3, 0x0
    b lbl_8032FFE8
lbl_8032FF40:
    li r31, 0x0
    stw r31, 0x24(r3)
lbl_8032FF48:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_8032FF5C
    li r3, 0x0
    b lbl_8032FFE8
lbl_8032FF5C:
    stw r31, 0x28(r29)
    mr r3, r24
    mr r4, r29
    mr r5, r26
    mr r6, r30
    bl SetPlayerPriority__Q44nw4r3snd6detail9WaveSoundFi
    cmpwi r3, 0x0
    bge lbl_8032FF84
    li r3, 0x0
    b lbl_8032FFE8
lbl_8032FF84:
    lwz r4, 0x28(r29)
    lwz r3, 0x24(r29)
    cmpwi r4, 0x0
    beq lbl_8032FFE4
    cmpwi r3, 0x0
    bne lbl_8032FFA4
    li r3, 0x0
    b lbl_8032FFE8
lbl_8032FFA4:
    cmpwi r28, 0x2
    add r30, r30, r4
    beq lbl_8032FFD0
    bge lbl_8032FF48
    cmpwi r28, 0x0
    bge lbl_8032FFC0
    b lbl_8032FF48
lbl_8032FFC0:
    lwz r0, 0x0(r27)
    add r0, r0, r4
    stw r0, 0x0(r27)
    b lbl_8032FF48
lbl_8032FFD0:
    bl fn_8032F514
    lwz r0, 0x0(r27)
    add r0, r0, r3
    stw r0, 0x0(r27)
    b lbl_8032FF48
lbl_8032FFE4:
    li r3, 0x1
lbl_8032FFE8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80330000
// ----------------------------------------------------------------------------
asm void fn_80330000() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_19
    mr r19, r3
    mr r20, r4
    mr r21, r5
    mr r22, r6
    mr r23, r7
    mr r24, r8
    mr r25, r9
    li r29, 0x0
    bl fn_803339B4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_8033004C
    li r3, 0x3
    b lbl_80330178
lbl_8033004C:
    li r30, 0x0
    stw r30, 0x24(r3)
lbl_80330054:
    lwz r0, 0x0(r20)
    cmpwi r0, 0x0
    beq lbl_80330068
    li r3, 0x3
    b lbl_80330178
lbl_80330068:
    stw r30, 0x28(r26)
    mr r3, r19
    mr r4, r26
    mr r5, r22
    mr r6, r29
    bl SetPlayerPriority__Q44nw4r3snd6detail9WaveSoundFi
    cmpwi r3, 0x0
    bge lbl_80330090
    li r3, 0x3
    b lbl_80330178
lbl_80330090:
    lwz r28, 0x28(r26)
    lwz r7, 0x24(r26)
    cmpwi r28, 0x0
    beq lbl_80330174
    cmpwi r7, 0x0
    bne lbl_803300B0
    li r3, 0x3
    b lbl_80330178
lbl_803300B0:
    cmpwi r25, 0x2
    add r29, r29, r28
    beq lbl_80330100
    bge lbl_80330054
    cmpwi r25, 0x0
    bge lbl_803300CC
    b lbl_80330054
lbl_803300CC:
    mr r3, r20
    mr r4, r21
    mr r5, r23
    mr r6, r24
    mr r8, r28
    bl fn_8032FE1C
    cmpwi r3, 0x0
    bge lbl_803300F4
    li r3, 0x1
    b lbl_80330178
lbl_803300F4:
    bne lbl_80330054
    li r3, 0x2
    b lbl_80330178
lbl_80330100:
    mr r31, r7
    li r27, 0x0
    b lbl_80330168
lbl_8033010C:
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_8032F3CC
    lbz r0, 0x0(r31)
    addi r3, r1, 0x8
    extsb r4, r0
    bl fn_8032F588
    mr r8, r3
    mr r3, r20
    mr r4, r21
    mr r5, r23
    mr r6, r24
    addi r7, r1, 0x8
    bl fn_8032FE1C
    cmpwi r3, 0x0
    bge lbl_80330154
    li r3, 0x1
    b lbl_80330178
lbl_80330154:
    bne lbl_80330160
    li r3, 0x2
    b lbl_80330178
lbl_80330160:
    addi r27, r27, 0x1
    addi r31, r31, 0x1
lbl_80330168:
    cmplw r27, r28
    blt lbl_8033010C
    b lbl_80330054
lbl_80330174:
    li r3, 0x0
lbl_80330178:
    addi r11, r1, 0x50
    bl _restgpr_19
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80330190
// ----------------------------------------------------------------------------
asm void fn_80330190() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lwz r4, 0x4(r4)
    bl fn_8032DE10
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_803301E0
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_803301E0
    cmpwi r3, 0x0
    beq lbl_80330234
lbl_803301E0:
    mr r3, r29
    mr r4, r30
    bl fn_803339BC
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_8033023C
    mr r3, r29
    bl fn_80333B5C
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_8033023C
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_8033023C
    lwz r4, 0x4(r30)
    mr r3, r30
    bl fn_8032DE10
    cmpwi r3, 0x0
    bne lbl_8033023C
    li r31, 0x1
    b lbl_8033023C
lbl_80330234:
    bne lbl_8033023C
    li r31, 0x1
lbl_8033023C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8033025C
// ----------------------------------------------------------------------------
asm void fn_8033025C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    bl fn_80333DE4
    mr r29, r3
    bl fn_80333E4C
    mr r30, r3
    mr r3, r29
    bl fn_80333E60
    mr r31, r3
    mr r3, r29
    bl fn_80333E58
    lwz r3, 0x0(r3)
    cmpwi r28, 0x0
    addi r4, r31, 0x360
    lwz r3, 0xc(r3)
    bne lbl_803302BC
    li r3, 0x0
    b lbl_803302F0
lbl_803302BC:
    lwz r5, 0x7d0(r30)
    mr r7, r27
    mr r8, r28
    addi r6, r26, 0x324
    bl fn_8032FE1C
    cmpwi r3, 0x0
    bge lbl_803302E0
    li r3, 0x1
    b lbl_803302F0
lbl_803302E0:
    cntlzw r0, r3
    extrwi r0, r0, 1, 26
    neg r0, r0
    rlwinm r3, r0, 0, 30, 30
lbl_803302F0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80330308
// ----------------------------------------------------------------------------
asm void fn_80330308() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r28, lbl_8038E948@ha
    mr r31, r3
    addi r28, r28, lbl_8038E948@l
    bl fn_80333DE4
    mr r30, r3
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r30
    lwz r27, 0xc(r4)
    bl fn_80333E60
    mr r29, r3
    mr r3, r30
    bl fn_80333E4C
    lwz r4, 0x20(r27)
    mr r30, r3
    addi r26, r29, 0x360
    addi r3, r1, 0x8
    bl fn_8032F7EC
    mr r29, r3
    mr r3, r31
    addi r4, r28, 0x0
    li r5, 0x8
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330384
    b lbl_80330598
lbl_80330384:
    lwz r4, 0x24(r27)
    mr r3, r31
    lwz r5, 0x14(r27)
    addi r4, r4, 0x8
    subi r5, r5, 0x8
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803303A8
    b lbl_80330598
lbl_803303A8:
    mr r3, r31
    la r4, lbl_8049D3F0
    li r5, 0x1
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803303C4
    b lbl_80330598
lbl_803303C4:
    mr r3, r31
    mr r5, r29
    addi r4, r1, 0x8
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803303E0
    b lbl_80330598
lbl_803303E0:
    mr r3, r31
    addi r4, r28, 0xc
    li r5, 0xb
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803303FC
    b lbl_80330598
lbl_803303FC:
    mr r3, r31
    la r4, lbl_8049D3F4
    li r5, 0x6
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330418
    b lbl_80330598
lbl_80330418:
    lwz r4, 0x24(r27)
    mr r3, r31
    lwz r5, 0x14(r27)
    addi r4, r4, 0x8
    subi r5, r5, 0x8
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_8033043C
    b lbl_80330598
lbl_8033043C:
    mr r3, r31
    la r4, lbl_8049D3F0
    li r5, 0x1
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330458
    b lbl_80330598
lbl_80330458:
    mr r3, r31
    mr r5, r29
    addi r4, r1, 0x8
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330474
    b lbl_80330598
lbl_80330474:
    mr r3, r31
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330490
    b lbl_80330598
lbl_80330490:
    mr r3, r31
    addi r4, r28, 0x18
    li r5, 0x25
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803304AC
    b lbl_80330598
lbl_803304AC:
    bl fn_80333DE4
    bl fn_80333E58
    lwz r3, 0x0(r3)
    lwz r29, 0xc(r3)
    lwz r0, 0x240(r29)
    cmpwi r0, 0x0
    bne lbl_803304D0
    li r3, 0x0
    b lbl_80330528
lbl_803304D0:
    mr r3, r31
    addi r4, r28, 0x40
    li r5, 0x1b
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803304EC
    b lbl_80330528
lbl_803304EC:
    lwz r5, 0x240(r29)
    mr r3, r31
    addi r4, r29, 0x1e4
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330508
    b lbl_80330528
lbl_80330508:
    mr r3, r31
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_80330528:
    cmpwi r3, 0x0
    beq lbl_80330534
    b lbl_80330598
lbl_80330534:
    mr r3, r31
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    lwz r6, 0x324(r31)
    cmpwi r6, 0x0
    ble lbl_80330580
    lwz r4, 0x7d0(r30)
    mr r3, r27
    mr r5, r26
    li r7, 0x0
    bl fn_8032F24C
    cmpwi r3, 0x0
    bge lbl_80330574
    li r3, 0x1
    b lbl_80330598
lbl_80330574:
    bne lbl_80330580
    li r3, 0x2
    b lbl_80330598
lbl_80330580:
    li r0, 0x0
    mr r3, r26
    stw r0, 0x324(r31)
    li r4, 0x100
    bl fn_8032F3CC
    li r3, 0x0
lbl_80330598:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_803305B0
// ----------------------------------------------------------------------------
asm void fn_803305B0() {
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_24
    bl fn_80333DE4
    mr r26, r3
    bl fn_80333E58
    mr r25, r3
    mr r3, r26
    bl fn_80333E60
    mr r24, r3
    mr r3, r26
    bl fn_80333E4C
    mr r30, r3
    mr r3, r26
    bl fn_80333E68
    lwz r4, 0x0(r25)
    addi r28, r24, 0x360
    mr r29, r3
    li r25, 0x0
    lwz r27, 0xc(r4)
    li r24, 0x0
    lwz r26, 0x2c(r27)
lbl_80330610:
    addi r6, r1, 0x8
    lwz r5, 0x7d0(r30)
    mr r3, r29
    mr r4, r27
    add r6, r6, r24
    subfic r7, r24, 0x200
    li r8, 0x0
    bl fn_8032EFD8
    mr r31, r3
    add r24, r24, r3
    addi r3, r1, 0x11
    li r4, 0x3
    bl fn_8032F74C
    stw r3, 0x18(r26)
    addi r3, r1, 0x8
    la r4, lbl_8049D400
    li r5, 0x5
    bl fn_8032F3D8
    cmpwi r3, 0x0
    bne lbl_8033067C
    lbz r0, 0x10(r1)
    cmpwi r0, 0x20
    bne lbl_8033067C
    lwz r0, 0x18(r26)
    cmpwi r0, 0xc8
    bne lbl_8033067C
    li r25, 0x1
lbl_8033067C:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r24
    cmpwi r24, 0x0
    ble lbl_8033072C
lbl_80330694:
    cmpwi r4, 0x1
    ble lbl_803306BC
    lbz r0, -0x1(r3)
    cmpwi r0, 0xd
    bne lbl_803306BC
    lbz r0, 0x0(r3)
    cmpwi r0, 0xd
    bne lbl_803306BC
    li r5, 0x1
    b lbl_80330720
lbl_803306BC:
    cmpwi r4, 0x1
    ble lbl_803306E4
    lbz r0, -0x1(r3)
    cmpwi r0, 0xa
    bne lbl_803306E4
    lbz r0, 0x0(r3)
    cmpwi r0, 0xa
    bne lbl_803306E4
    li r5, 0x1
    b lbl_80330720
lbl_803306E4:
    cmpwi r4, 0x3
    ble lbl_80330720
    lbz r0, -0x3(r3)
    cmpwi r0, 0xd
    bne lbl_80330720
    lbz r0, -0x2(r3)
    cmpwi r0, 0xa
    bne lbl_80330720
    lbz r0, -0x1(r3)
    cmpwi r0, 0xd
    bne lbl_80330720
    lbz r0, 0x0(r3)
    cmpwi r0, 0xa
    bne lbl_80330720
    li r5, 0x1
lbl_80330720:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    bdnz lbl_80330694
lbl_8033072C:
    cmpwi r5, 0x0
    beq lbl_80330744
    neg r0, r25
    or r0, r0, r25
    srwi r3, r0, 31
    b lbl_80330790
lbl_80330744:
    cmpwi r31, 0x0
    bge lbl_80330754
    li r3, 0x0
    b lbl_80330790
lbl_80330754:
    cmpwi r24, 0x200
    blt lbl_80330610
    lwz r5, 0x7d0(r30)
    mr r3, r29
    mr r4, r27
    mr r6, r28
    li r7, 0x1
    li r8, 0x0
    bl fn_8032EFD8
    cmpwi r3, 0x0
    bge lbl_80330788
    li r3, 0x0
    b lbl_80330790
lbl_80330788:
    beq lbl_80330610
    li r3, 0x0
lbl_80330790:
    addi r11, r1, 0x230
    bl _restgpr_24
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

// ----------------------------------------------------------------------------
// fn_803307A8
// ----------------------------------------------------------------------------
asm void fn_803307A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80333DE4
    bl fn_80333E58
    lwz r3, 0x0(r3)
    lwz r31, 0xc(r3)
    addi r3, r31, 0x30
    bl fn_8032D184
    mr r30, r3
    b lbl_80330878
lbl_803307E4:
    lwz r3, 0x8(r30)
    bl fn_8032F3C4
    lwz r4, 0x8(r30)
    mr r5, r3
    mr r3, r29
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330808
    b lbl_80330884
lbl_80330808:
    mr r3, r29
    la r4, lbl_8049D408
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330824
    b lbl_80330884
lbl_80330824:
    lwz r3, 0xc(r30)
    bl fn_8032F3C4
    lwz r4, 0xc(r30)
    mr r5, r3
    mr r3, r29
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330848
    b lbl_80330884
lbl_80330848:
    mr r3, r29
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330864
    b lbl_80330884
lbl_80330864:
    mr r3, r30
    bl fn_8032CD6C
    addi r3, r31, 0x30
    bl fn_8032D184
    mr r30, r3
lbl_80330878:
    cmpwi r30, 0x0
    bne lbl_803307E4
    li r3, 0x0
lbl_80330884:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803308A0
// ----------------------------------------------------------------------------
asm void fn_803308A0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    bl fn_80333DE4
    mr r31, r3
    bl fn_80333E68
    mr r29, r3
    mr r3, r31
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r31
    lwz r28, 0xc(r4)
    bl fn_80333E60
    mr r30, r3
    mr r3, r31
    bl fn_80333E4C
    li r0, 0x0
    mr r31, r3
    stw r0, 0x8(r1)
    addi r30, r30, 0x360
    lwz r0, 0x24c(r28)
    cmpwi r0, 0x0
    bne lbl_80330930
    mr r3, r29
    mr r4, r28
    addi r6, r1, 0x8
    li r5, 0x0
    li r7, 0x0
    bl fn_8032FEFC
    cmpwi r3, 0x0
    bne lbl_80330938
    li r3, 0x3
    b lbl_80330A10
lbl_80330930:
    lwz r0, 0x250(r28)
    stw r0, 0x8(r1)
lbl_80330938:
    lwz r4, 0x8(r1)
    addi r3, r1, 0xc
    bl fn_8032F7EC
    lis r4, lbl_8038E9A4@ha
    mr r27, r3
    mr r3, r26
    li r5, 0x10
    addi r4, r4, lbl_8038E9A4@l
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330968
    b lbl_80330A10
lbl_80330968:
    mr r3, r26
    mr r5, r27
    addi r4, r1, 0xc
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330984
    b lbl_80330A10
lbl_80330984:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803309A0
    b lbl_80330A10
lbl_803309A0:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803309BC
    b lbl_80330A10
lbl_803309BC:
    lwz r4, 0x24c(r28)
    cmpwi r4, 0x0
    bne lbl_803309F4
    lwz r7, 0x7d0(r31)
    mr r3, r29
    mr r4, r28
    mr r5, r30
    addi r8, r26, 0x324
    li r6, 0x0
    li r9, 0x0
    bl fn_80330000
    cmpwi r3, 0x0
    beq lbl_80330A0C
    b lbl_80330A10
lbl_803309F4:
    lwz r5, 0x250(r28)
    mr r3, r26
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330A0C
    b lbl_80330A10
lbl_80330A0C:
    li r3, 0x0
lbl_80330A10:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80330A28
// ----------------------------------------------------------------------------
asm void fn_80330A28() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r30, lbl_80342220@ha
    mr r26, r3
    addi r30, r30, lbl_80342220@l
    bl fn_80333DE4
    mr r25, r3
    bl fn_80333E68
    mr r29, r3
    mr r3, r25
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r25
    lwz r28, 0xc(r4)
    bl fn_80333E60
    mr r27, r3
    mr r3, r25
    bl fn_80333E4C
    li r4, 0x0
    mr r31, r3
    stw r4, 0x8(r1)
    addi r27, r27, 0x360
    lwz r25, 0x34(r28)
    b lbl_80330B2C
lbl_80330A94:
    addi r4, r4, 0x16
    stw r4, 0x8(r1)
    lwz r3, 0x8(r25)
    bl fn_8032F3C4
    lwz r0, 0x8(r1)
    add r3, r3, r0
    addi r4, r3, 0x29
    stw r4, 0x8(r1)
    lwz r0, 0x14(r25)
    cmpwi r0, 0x0
    beq lbl_80330AC4
    addi r4, r4, 0x4b
lbl_80330AC4:
    addi r3, r4, 0x2
    stw r3, 0x8(r1)
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_80330B00
    lwz r5, 0x8(r25)
    mr r3, r29
    mr r4, r28
    addi r6, r1, 0x8
    li r7, 0x1
    bl fn_8032FEFC
    cmpwi r3, 0x0
    bne lbl_80330B0C
    li r3, 0x3
    b lbl_80330DB4
lbl_80330B00:
    lwz r0, 0x10(r25)
    add r4, r3, r0
    stw r4, 0x8(r1)
lbl_80330B0C:
    lwz r3, 0x8(r1)
    addi r4, r3, 0x2
    stw r4, 0x8(r1)
    lwz r3, 0x34(r28)
    lwz r0, 0x0(r3)
    cmplw r25, r0
    beq lbl_80330B34
    lwz r25, 0x4(r25)
lbl_80330B2C:
    cmpwi r25, 0x0
    bne lbl_80330A94
lbl_80330B34:
    addi r4, r4, 0x18
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    bl fn_8032F7EC
    mr r25, r3
    mr r3, r26
    addi r4, r30, 0xa8
    li r5, 0x2c
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330B64
    b lbl_80330DB4
lbl_80330B64:
    mr r3, r26
    addi r4, r28, 0x3a
    li r5, 0x12
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330B80
    b lbl_80330DB4
lbl_80330B80:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330B9C
    b lbl_80330DB4
lbl_80330B9C:
    lis r4, lbl_8038E9A4@ha
    mr r3, r26
    addi r4, r4, lbl_8038E9A4@l
    li r5, 0x10
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330BBC
    b lbl_80330DB4
lbl_80330BBC:
    mr r3, r26
    mr r5, r25
    addi r4, r1, 0xc
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330BD8
    b lbl_80330DB4
lbl_80330BD8:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330BF4
    b lbl_80330DB4
lbl_80330BF4:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330C10
    b lbl_80330DB4
lbl_80330C10:
    lwz r25, 0x34(r28)
    b lbl_80330D70
lbl_80330C18:
    mr r3, r26
    addi r4, r28, 0x38
    li r5, 0x14
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330C34
    b lbl_80330DB4
lbl_80330C34:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330C50
    b lbl_80330DB4
lbl_80330C50:
    mr r3, r26
    addi r4, r30, 0x0
    li r5, 0x26
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330C6C
    b lbl_80330DB4
lbl_80330C6C:
    lwz r3, 0x8(r25)
    bl fn_8032F3C4
    lwz r4, 0x8(r25)
    mr r5, r3
    mr r3, r26
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330C90
    b lbl_80330DB4
lbl_80330C90:
    mr r3, r26
    la r4, lbl_8049D40C
    li r5, 0x3
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330CAC
    b lbl_80330DB4
lbl_80330CAC:
    lwz r0, 0x14(r25)
    cmpwi r0, 0x0
    beq lbl_80330CD4
    mr r3, r26
    addi r4, r30, 0x28
    li r5, 0x4b
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330CD4
    b lbl_80330DB4
lbl_80330CD4:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330CF0
    b lbl_80330DB4
lbl_80330CF0:
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    bne lbl_80330D28
    lwz r6, 0x8(r25)
    mr r3, r29
    lwz r7, 0x7d0(r31)
    mr r4, r28
    mr r5, r27
    addi r8, r26, 0x324
    li r9, 0x1
    bl fn_80330000
    cmpwi r3, 0x0
    beq lbl_80330D40
    b lbl_80330DB4
lbl_80330D28:
    lwz r5, 0x10(r25)
    mr r3, r26
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330D40
    b lbl_80330DB4
lbl_80330D40:
    mr r3, r26
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330D5C
    b lbl_80330DB4
lbl_80330D5C:
    lwz r3, 0x34(r28)
    lwz r0, 0x0(r3)
    cmplw r25, r0
    beq lbl_80330D78
    lwz r25, 0x4(r25)
lbl_80330D70:
    cmpwi r25, 0x0
    bne lbl_80330C18
lbl_80330D78:
    mr r3, r26
    addi r4, r28, 0x38
    li r5, 0x14
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330D94
    b lbl_80330DB4
lbl_80330D94:
    mr r3, r26
    la r4, lbl_8049D410
    li r5, 0x4
    bl fn_8033025C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_80330DB4:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80330DCC
// ----------------------------------------------------------------------------
asm void fn_80330DCC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r27, r3
    bl fn_80333DE4
    mr r25, r3
    bl fn_80333E68
    mr r30, r3
    mr r3, r25
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r25
    lwz r29, 0xc(r4)
    bl fn_80333E60
    mr r28, r3
    mr r3, r25
    bl fn_80333E4C
    li r0, 0x0
    mr r31, r3
    stw r0, 0x8(r1)
    addi r28, r28, 0x360
    lwz r25, 0x34(r29)
    b lbl_80330EAC
lbl_80330E30:
    lwz r3, 0x8(r25)
    bl fn_8032F4A4
    lwz r0, 0x8(r1)
    add r3, r0, r3
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    bne lbl_80330E7C
    lwz r5, 0x8(r25)
    mr r3, r30
    mr r4, r29
    addi r6, r1, 0x8
    li r7, 0x2
    bl fn_8032FEFC
    cmpwi r3, 0x0
    bne lbl_80330E8C
    li r3, 0x3
    b lbl_80331078
lbl_80330E7C:
    bl fn_8032F4A4
    lwz r0, 0x8(r1)
    add r0, r0, r3
    stw r0, 0x8(r1)
lbl_80330E8C:
    lwz r3, 0x34(r29)
    lwz r0, 0x0(r3)
    cmplw r25, r0
    beq lbl_80330EB4
    lwz r3, 0x8(r1)
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
    lwz r25, 0x4(r25)
lbl_80330EAC:
    cmpwi r25, 0x0
    bne lbl_80330E30
lbl_80330EB4:
    lwz r4, 0x8(r1)
    addi r3, r1, 0xc
    bl fn_8032F7EC
    lis r4, lbl_80342294@ha
    mr r25, r3
    mr r3, r27
    li r5, 0x31
    addi r4, r4, lbl_80342294@l
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330EE4
    b lbl_80331078
lbl_80330EE4:
    lis r4, lbl_8038E9A4@ha
    mr r3, r27
    addi r4, r4, lbl_8038E9A4@l
    li r5, 0x10
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330F04
    b lbl_80331078
lbl_80330F04:
    mr r3, r27
    mr r5, r25
    addi r4, r1, 0xc
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330F20
    b lbl_80331078
lbl_80330F20:
    mr r3, r27
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330F3C
    b lbl_80331078
lbl_80330F3C:
    mr r3, r27
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330F58
    b lbl_80331078
lbl_80330F58:
    lwz r26, 0x34(r29)
    b lbl_8033106C
lbl_80330F60:
    li r25, 0x0
    b lbl_80330F94
lbl_80330F68:
    addi r3, r1, 0xc
    extsb r4, r4
    bl fn_8032F588
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0xc
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330F90
    b lbl_80331078
lbl_80330F90:
    addi r25, r25, 0x1
lbl_80330F94:
    lwz r3, 0x8(r26)
    lbzx r4, r3, r25
    extsb. r0, r4
    bne lbl_80330F68
    mr r3, r27
    la r4, lbl_8049D418
    li r5, 0x1
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80330FC0
    b lbl_80331078
lbl_80330FC0:
    lwz r0, 0xc(r26)
    cmpwi r0, 0x0
    bne lbl_80330FF8
    lwz r6, 0x8(r26)
    mr r3, r30
    lwz r7, 0x7d0(r31)
    mr r4, r29
    mr r5, r28
    addi r8, r27, 0x324
    li r9, 0x2
    bl fn_80330000
    cmpwi r3, 0x0
    beq lbl_8033103C
    b lbl_80331078
lbl_80330FF8:
    li r25, 0x0
    b lbl_8033102C
lbl_80331000:
    addi r3, r1, 0xc
    extsb r4, r4
    bl fn_8032F588
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0xc
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80331028
    b lbl_80331078
lbl_80331028:
    addi r25, r25, 0x1
lbl_8033102C:
    lwz r3, 0xc(r26)
    lbzx r4, r3, r25
    extsb. r0, r4
    bne lbl_80331000
lbl_8033103C:
    lwz r3, 0x34(r29)
    lwz r0, 0x0(r3)
    cmplw r26, r0
    beq lbl_80331074
    mr r3, r27
    la r4, lbl_8049D41C
    li r5, 0x1
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80331068
    b lbl_80331078
lbl_80331068:
    lwz r26, 0x4(r26)
lbl_8033106C:
    cmpwi r26, 0x0
    bne lbl_80330F60
lbl_80331074:
    li r3, 0x0
lbl_80331078:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80331090
// ----------------------------------------------------------------------------
asm void fn_80331090() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r26, r3
    bl fn_80333DE4
    mr r25, r3
    bl fn_80333E4C
    mr r24, r3
    mr r3, r25
    bl fn_80333E58
    mr r31, r3
    mr r3, r25
    bl fn_80333E68
    lwz r4, 0x0(r31)
    mr r30, r3
    lwz r29, 0xc(r4)
    lwz r28, 0x2c(r29)
    mr r4, r29
    bl fn_803339B4
    lwz r0, 0x0(r29)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_80331104
    li r3, 0x8
    li r0, 0x0
    stw r3, 0x330(r26)
    stw r0, 0x338(r26)
lbl_80331104:
    lwz r0, 0x338(r26)
    cmpwi r0, 0x0
    bne lbl_80331140
    lwz r5, 0x7d0(r24)
    cmpwi r5, 0x0
    blt lbl_80331140
    mr r3, r30
    mr r4, r29
    bl fn_8032EBF0
    cmpwi r3, 0x0
    bge lbl_80331138
    li r0, 0xa
    stw r0, 0x330(r26)
lbl_80331138:
    li r0, -0x1
    stw r0, 0x7d0(r24)
lbl_80331140:
    lwz r0, 0x330(r26)
    cmpwi r0, 0x0
    bne lbl_80331158
    li r0, 0x1
    stw r0, 0x10(r28)
    b lbl_80331184
lbl_80331158:
    li r25, 0x0
    mr r3, r24
    stw r25, 0x10(r28)
    lwz r4, 0x330(r26)
    bl fn_8032CDB0
    lwz r3, 0x28(r28)
    addi r0, r26, 0x104
    cmplw r3, r0
    bne lbl_80331184
    stw r25, 0x28(r28)
    stw r25, 0x1c(r28)
lbl_80331184:
    cmpwi r27, 0x0
    beq lbl_80331194
    lwz r0, 0x330(r26)
    stw r0, 0x4(r27)
lbl_80331194:
    mr r3, r30
    bl fn_8032D618
    lwz r3, 0x0(r31)
    bl fn_8032CD6C
    li r0, 0x0
    mr r3, r30
    stw r0, 0x0(r31)
    bl fn_8032D61C
    mr r3, r30
    mr r4, r29
    bl fn_8032E5C0
    cmpwi r27, 0x0
    beq lbl_803311DC
    lwz r0, 0x10(r28)
    cmpwi r0, 0x0
    beq lbl_803311DC
    li r0, 0x5
    stw r0, 0x0(r27)
lbl_803311DC:
    mr r3, r30
    mr r4, r27
    bl fn_80333D8C
    cmpwi r27, 0x0
    beq lbl_803311F8
    mr r3, r27
    bl fn_80333758
lbl_803311F8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80331210
// ----------------------------------------------------------------------------
asm void fn_80331210() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80333DE4
    mr r30, r3
    bl fn_80333E68
    mr r29, r3
    bl fn_8032D618
    mr r3, r30
    bl fn_80333E50
    bl fn_8032D5C4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80331274
    mr r3, r30
    bl fn_80333E58
    lwz r0, 0x8(r31)
    stw r0, 0x0(r28)
    stw r31, 0x0(r3)
    b lbl_8033127C
lbl_80331274:
    li r0, -0x1
    stw r0, 0x0(r28)
lbl_8033127C:
    mr r3, r29
    bl fn_8032D61C
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bge lbl_803312A4
    mr r3, r30
    bl fn_80333E60
    bl fn_8032D6FC
    li r3, 0x0
    b lbl_803312A8
lbl_803312A4:
    li r3, 0x1
lbl_803312A8:
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
// fn_803312C8
// ----------------------------------------------------------------------------
asm void fn_803312C8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_80333DE4
    bl fn_80333E58
    lwz r3, 0x0(r3)
    lwz r30, 0xc(r3)
    lwz r0, 0xc(r30)
    lwz r29, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_80331308
    addi r29, r30, 0xe0
lbl_80331308:
    mr r3, r29
    bl fn_8032F3C4
    cmpwi r3, 0x0
    beq lbl_8033132C
    mr r3, r29
    addi r4, r31, 0x4
    bl fn_8032F3C8
    cmpwi r3, 0x0
    beq lbl_80331370
lbl_8033132C:
    mr r3, r30
    mr r4, r29
    bl fn_8032F34C
    cmpwi r3, 0x0
    stw r3, 0x314(r31)
    bne lbl_80331378
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_80331360
    li r0, 0xc
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_80331400
lbl_80331360:
    li r0, 0x4
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_80331400
lbl_80331370:
    lwz r0, 0x318(r31)
    stw r0, 0x314(r31)
lbl_80331378:
    addi r3, r31, 0x4
    li r4, 0x100
    bl fn_8032F3CC
    mr r3, r29
    bl fn_8032F3C4
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x4
    bl fn_8032F3C0
    lwz r0, 0x20(r30)
    stw r0, 0x31c(r31)
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_803313B8
    lwz r0, 0x1e0(r30)
    stw r0, 0x31c(r31)
lbl_803313B8:
    lwz r3, 0x314(r31)
    lwz r0, 0x318(r31)
    cmplw r3, r0
    bne lbl_803313E4
    lwz r3, 0x31c(r31)
    lwz r0, 0x320(r31)
    cmpw r3, r0
    bne lbl_803313E4
    lwz r0, 0x8(r30)
    cmpwi r0, 0x1
    bne lbl_803313EC
lbl_803313E4:
    li r0, 0x0
    stw r0, 0x338(r31)
lbl_803313EC:
    lwz r4, 0x314(r31)
    li r3, 0x1
    lwz r0, 0x31c(r31)
    stw r4, 0x318(r31)
    stw r0, 0x320(r31)
lbl_80331400:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8033141C
// ----------------------------------------------------------------------------
asm void fn_8033141C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    bl fn_80333DE4
    mr r29, r3
    bl fn_80333E4C
    mr r28, r3
    mr r3, r29
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r30, r3
    mr r3, r29
    lwz r29, 0xc(r4)
    bl fn_80333E68
    lwz r0, 0x338(r31)
    mr r27, r3
    li r26, 0x0
    cmpwi r0, 0x1
    bne lbl_80331490
    lwz r3, 0x7d0(r28)
    bl fn_8032EAC4
    cmpwi r3, -0x1
    bne lbl_80331490
    li r0, 0x0
    li r26, 0x1
    stw r0, 0x338(r31)
lbl_80331490:
    lwz r0, 0x338(r31)
    cmpwi r0, 0x0
    bne lbl_803315A0
    lwz r5, 0x7d0(r28)
    cmpwi r5, 0x0
    blt lbl_803314DC
    mr r3, r27
    mr r4, r29
    bl fn_8032EBF0
    cmpwi r3, 0x0
    bge lbl_803314DC
    cmpwi r26, 0x0
    bne lbl_803314DC
    li r3, -0x1
    li r0, 0xa
    stw r3, 0x7d0(r28)
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_803315C0
lbl_803314DC:
    mr r3, r29
    bl fn_8032EB1C
    cmpwi r3, 0x0
    stw r3, 0x7d0(r28)
    bge lbl_80331500
    li r0, 0x3
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_803315C0
lbl_80331500:
    mr r3, r27
    bl fn_8032D618
    lwz r0, 0x7d0(r28)
    mr r3, r27
    lwz r4, 0x0(r30)
    stw r0, 0x10(r4)
    bl fn_8032D61C
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_80331530
    li r3, 0x0
    b lbl_803315C0
lbl_80331530:
    lwz r6, 0x7d0(r28)
    mr r3, r28
    lwz r7, 0x314(r31)
    mr r4, r27
    lwz r8, 0x31c(r31)
    mr r5, r29
    bl fn_8032EC5C
    cmpwi r3, 0x0
    bge lbl_803315BC
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_80331570
    li r0, 0xd
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_803315C0
lbl_80331570:
    mr r3, r28
    bl fn_8032CDC0
    cmpwi r3, 0x0
    beq lbl_80331590
    li r0, 0xe
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_803315C0
lbl_80331590:
    li r0, 0x5
    li r3, 0x0
    stw r0, 0x330(r31)
    b lbl_803315C0
lbl_803315A0:
    mr r3, r27
    bl fn_8032D618
    lwz r0, 0x7d0(r28)
    mr r3, r27
    lwz r4, 0x0(r30)
    stw r0, 0x10(r4)
    bl fn_8032D61C
lbl_803315BC:
    li r3, 0x1
lbl_803315C0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803315D8
// ----------------------------------------------------------------------------
asm void fn_803315D8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80333DE4
    mr r30, r3
    bl fn_80333E4C
    mr r29, r3
    mr r3, r30
    bl fn_80333E58
    mr r31, r3
    mr r3, r30
    bl fn_80333E68
    lwz r5, 0x0(r31)
    li r4, 0xa
    li r0, 0x0
    mr r30, r3
    lwz r31, 0xc(r5)
    stw r4, 0x330(r28)
    stw r0, 0x324(r28)
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_80331708
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_80331708
    mr r3, r28
    bl fn_80330308
    cmpwi r3, 0x0
    beq lbl_80331664
    b lbl_8033170C
lbl_80331664:
    mr r3, r28
    bl fn_803305B0
    cmpwi r3, 0x0
    bne lbl_8033167C
    li r3, 0x1
    b lbl_8033170C
lbl_8033167C:
    lwz r6, 0x7d0(r29)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_8032ED1C
    cmpwi r3, 0x0
    beq lbl_80331708
    cmpwi r3, -0x3ec
    bne lbl_803316C0
    mr r3, r29
    bl fn_8032CDC0
    cmpwi r3, 0x0
    beq lbl_803316B8
    li r0, 0x10
    stw r0, 0x330(r28)
lbl_803316B8:
    li r3, 0x1
    b lbl_8033170C
lbl_803316C0:
    cmpwi r3, -0x3ed
    bne lbl_803316E8
    mr r3, r29
    bl fn_8032CDC0
    cmpwi r3, 0x0
    beq lbl_803316E0
    li r0, 0x11
    stw r0, 0x330(r28)
lbl_803316E0:
    li r3, 0x1
    b lbl_8033170C
lbl_803316E8:
    mr r3, r29
    bl fn_8032CDC0
    cmpwi r3, 0x0
    beq lbl_80331700
    li r0, 0xe
    stw r0, 0x330(r28)
lbl_80331700:
    li r3, 0x1
    b lbl_8033170C
lbl_80331708:
    li r3, 0x0
lbl_8033170C:
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
// fn_8033172C
// ----------------------------------------------------------------------------
asm void fn_8033172C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r30, lbl_8038E948@ha
    mr r27, r3
    addi r30, r30, lbl_8038E948@l
    bl fn_80333DE4
    mr r28, r3
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r28
    lwz r29, 0xc(r4)
    bl fn_80333E68
    mr r26, r3
    mr r3, r28
    bl fn_80333E4C
    mr r31, r3
    mr r3, r26
    mr r4, r29
    bl fn_803339B4
    mr r26, r3
    mr r3, r28
    bl fn_80333E60
    addi r28, r3, 0x360
    lwz r3, 0x24(r29)
    bl fn_8032F3C4
    li r0, 0xa
    cmpwi r26, 0x0
    stw r0, 0x330(r27)
    mr r25, r3
    li r3, 0x0
    beq lbl_803317BC
    li r0, 0x2
    stw r0, 0x0(r26)
lbl_803317BC:
    li r0, 0x0
    stw r0, 0x324(r27)
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x1
    beq lbl_80331800
    bge lbl_803317E0
    cmpwi r0, 0x0
    bge lbl_803317EC
    b lbl_80331824
lbl_803317E0:
    cmpwi r0, 0x3
    bge lbl_80331824
    b lbl_80331814
lbl_803317EC:
    mr r3, r27
    la r4, lbl_8049D420
    li r5, 0x4
    bl fn_8033025C
    b lbl_80331824
lbl_80331800:
    mr r3, r27
    la r4, lbl_8049D428
    li r5, 0x5
    bl fn_8033025C
    b lbl_80331824
lbl_80331814:
    mr r3, r27
    la r4, lbl_8049D430
    li r5, 0x5
    bl fn_8033025C
lbl_80331824:
    cmpwi r3, 0x0
    beq lbl_80331830
    b lbl_80331BB0
lbl_80331830:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_80331864
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_80331864
    lwz r4, 0x24(r29)
    mr r3, r27
    mr r5, r25
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803318AC
    b lbl_80331BB0
lbl_80331864:
    lwz r4, 0x18(r29)
    cmpw r25, r4
    ble lbl_80331890
    lwz r0, 0x24(r29)
    subf r5, r4, r25
    mr r3, r27
    add r4, r0, r4
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803318AC
    b lbl_80331BB0
lbl_80331890:
    mr r3, r27
    la r4, lbl_8049D438
    li r5, 0x1
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803318AC
    b lbl_80331BB0
lbl_803318AC:
    mr r3, r27
    addi r4, r30, 0xc
    li r5, 0xb
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803318C8
    b lbl_80331BB0
lbl_803318C8:
    lwz r6, 0x8(r29)
    mr r3, r27
    la r4, lbl_8049D3F4
    li r5, 0x6
    neg r0, r6
    or r0, r0, r6
    srwi r6, r0, 31
    addi r26, r6, 0x7
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803318F8
    b lbl_80331BB0
lbl_803318F8:
    lwz r4, 0x24(r29)
    mr r3, r27
    lwz r0, 0x14(r29)
    add r4, r4, r26
    subf r5, r26, r0
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_8033191C
    b lbl_80331BB0
lbl_8033191C:
    mr r3, r27
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80331938
    b lbl_80331BB0
lbl_80331938:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_803319D8
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_803319D8
    bl fn_80333DE4
    bl fn_80333E58
    lwz r3, 0x0(r3)
    lwz r26, 0xc(r3)
    lwz r0, 0x240(r26)
    cmpwi r0, 0x0
    bne lbl_80331974
    li r3, 0x0
    b lbl_803319CC
lbl_80331974:
    mr r3, r27
    addi r4, r30, 0x40
    li r5, 0x1b
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80331990
    b lbl_803319CC
lbl_80331990:
    lwz r5, 0x240(r26)
    mr r3, r27
    addi r4, r26, 0x1e4
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_803319AC
    b lbl_803319CC
lbl_803319AC:
    mr r3, r27
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_803319CC:
    cmpwi r3, 0x0
    beq lbl_803319D8
    b lbl_80331BB0
lbl_803319D8:
    bl fn_80333DE4
    bl fn_80333E58
    lwz r3, 0x0(r3)
    lwz r26, 0xc(r3)
    lwz r0, 0xa8(r26)
    cmpwi r0, 0x0
    bne lbl_803319FC
    li r3, 0x0
    b lbl_80331A54
lbl_803319FC:
    mr r3, r27
    addi r4, r30, 0x70
    li r5, 0x15
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80331A18
    b lbl_80331A54
lbl_80331A18:
    lwz r5, 0xa8(r26)
    mr r3, r27
    addi r4, r26, 0x4c
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80331A34
    b lbl_80331A54
lbl_80331A34:
    mr r3, r27
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_80331A54:
    cmpwi r3, 0x0
    beq lbl_80331A60
    b lbl_80331BB0
lbl_80331A60:
    mr r3, r27
    bl fn_803307A8
    cmpwi r3, 0x0
    beq lbl_80331A74
    b lbl_80331BB0
lbl_80331A74:
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x1
    bne lbl_80331B28
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_80331A98
    mr r3, r27
    bl fn_803308A0
    b lbl_80331B0C
lbl_80331A98:
    lwz r3, 0xd0(r29)
    cmpwi r3, 0x0
    bne lbl_80331AE4
    lwz r3, 0x34(r29)
    li r4, 0x0
    mr r5, r3
    b lbl_80331AD8
lbl_80331AB4:
    lwz r0, 0x14(r5)
    cmpwi r0, 0x0
    beq lbl_80331AC8
    li r4, 0x1
    b lbl_80331AF0
lbl_80331AC8:
    lwz r0, 0x0(r3)
    cmplw r5, r0
    beq lbl_80331AF0
    lwz r5, 0x4(r5)
lbl_80331AD8:
    cmpwi r5, 0x0
    bne lbl_80331AB4
    b lbl_80331AF0
lbl_80331AE4:
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r4, r0, 5
lbl_80331AF0:
    cmpwi r4, 0x0
    beq lbl_80331B04
    mr r3, r27
    bl fn_80330A28
    b lbl_80331B0C
lbl_80331B04:
    mr r3, r27
    bl fn_80330DCC
lbl_80331B0C:
    cmpwi r3, 0x0
    beq lbl_80331B44
    cmpwi r3, 0x3
    bne lbl_80331BB0
    li r0, 0x3
    stw r0, 0x330(r27)
    b lbl_80331BB0
lbl_80331B28:
    mr r3, r27
    la r4, lbl_8049D3FC
    li r5, 0x2
    bl fn_8033025C
    cmpwi r3, 0x0
    beq lbl_80331B44
    b lbl_80331BB0
lbl_80331B44:
    lwz r6, 0x324(r27)
    li r26, 0x0
    cmpwi r6, 0x0
    ble lbl_80331B98
    lwz r4, 0x7d0(r31)
    mr r3, r29
    mr r5, r28
    li r7, 0x0
    bl fn_8032F24C
    li r0, 0x0
    mr r29, r3
    stw r0, 0x324(r27)
    mr r3, r28
    li r4, 0x100
    bl fn_8032F3CC
    cmpwi r29, 0x0
    bge lbl_80331B8C
    li r26, 0x1
lbl_80331B8C:
    cmpwi r29, 0x0
    bne lbl_80331B98
    li r26, 0x2
lbl_80331B98:
    li r0, 0x0
    mr r3, r28
    stw r0, 0x324(r27)
    li r4, 0x100
    bl fn_8032F3CC
    mr r3, r26
lbl_80331BB0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80331BC8
// ----------------------------------------------------------------------------
asm void fn_80331BC8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r25, r3
    bl fn_80333DE4
    mr r23, r3
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r23
    lwz r29, 0xc(r4)
    lwz r28, 0x2c(r29)
    bl fn_80333E68
    mr r27, r3
    mr r4, r29
    bl fn_803339B4
    mr r24, r3
    mr r3, r23
    bl fn_80333E4C
    li r0, 0x0
    cmpwi r24, 0x0
    stw r0, 0x8(r1)
    mr r30, r3
    beq lbl_80331C34
    li r0, 0x3
    stw r0, 0x0(r24)
lbl_80331C34:
    li r31, 0x0
    addi r3, r25, 0x304
    stw r31, 0x0(r28)
    li r4, 0xe
    bl fn_8032F3CC
    lwz r26, 0x34(r28)
    addi r24, r1, 0x8
    stw r31, 0x328(r25)
lbl_80331C54:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_80331C68
    li r3, 0x0
    b lbl_80331D9C
lbl_80331C68:
    lwz r0, 0x328(r25)
    cmpwi r0, 0x400
    bge lbl_80331CB0
    add r6, r28, r0
    lwz r5, 0x7d0(r30)
    mr r3, r27
    mr r4, r29
    addi r6, r6, 0x38
    li r7, 0x1
    li r8, 0x0
    bl fn_8032EFD8
    lwz r0, 0x328(r25)
    mr r4, r3
    add r3, r28, r0
    clrlwi r0, r0, 30
    lbz r3, 0x38(r3)
    stbx r3, r24, r0
    b lbl_80331D40
lbl_80331CB0:
    clrlwi. r23, r0, 23
    bne lbl_80331D08
    cmpwi r26, 0x0
    beq lbl_80331CD8
    li r3, 0x204
    li r4, 0x4
    bl fn_8032CD10
    stw r3, 0x0(r26)
    mr r26, r3
    b lbl_80331CEC
lbl_80331CD8:
    li r3, 0x204
    li r4, 0x4
    bl fn_8032CD10
    mr r26, r3
    stw r3, 0x34(r28)
lbl_80331CEC:
    cmpwi r26, 0x0
    bne lbl_80331D04
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x330(r25)
    b lbl_80331D9C
lbl_80331D04:
    stw r31, 0x0(r26)
lbl_80331D08:
    add r3, r26, r23
    lwz r5, 0x7d0(r30)
    addi r23, r3, 0x4
    mr r4, r29
    mr r3, r27
    li r7, 0x1
    mr r6, r23
    li r8, 0x0
    bl fn_8032EFD8
    lwz r0, 0x328(r25)
    mr r4, r3
    lbz r3, 0x0(r23)
    clrlwi r0, r0, 30
    stbx r3, r24, r0
lbl_80331D40:
    cmpwi r4, 0x0
    bgt lbl_80331D58
    li r0, 0xa
    li r3, 0x0
    stw r0, 0x330(r25)
    b lbl_80331D9C
lbl_80331D58:
    lwz r0, 0x328(r25)
    addi r3, r1, 0x8
    add r4, r0, r4
    stw r4, 0x328(r25)
    bl fn_8032FD54
    cmpwi r3, 0x0
    beq lbl_80331C54
    lwz r0, 0x328(r25)
    stw r0, 0x0(r28)
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_80331D98
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r25)
    b lbl_80331D9C
lbl_80331D98:
    li r3, 0x1
lbl_80331D9C:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80331DB4
// ----------------------------------------------------------------------------
asm void fn_80331DB4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r28, lbl_8038E948@ha
    mr r30, r3
    addi r28, r28, lbl_8038E948@l
    bl fn_80333DE4
    mr r29, r3
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r29
    lwz r29, 0xc(r4)
    lwz r31, 0x2c(r29)
    bl fn_80333E60
    addi r27, r3, 0x360
    mr r3, r31
    addi r4, r30, 0x304
    li r5, 0x0
    li r6, 0xe
    bl fn_8032DCCC
    cmpwi r3, 0x0
    bne lbl_80331E24
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331E24:
    addi r3, r30, 0x304
    la r4, lbl_8049D400
    li r5, 0x5
    bl fn_8032F3D8
    cmpwi r3, 0x0
    beq lbl_80331E4C
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331E4C:
    lbz r0, 0x30c(r30)
    cmpwi r0, 0x20
    beq lbl_80331E68
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331E68:
    addi r3, r30, 0x30d
    li r4, 0x3
    bl fn_8032F74C
    cmpwi r3, 0x0
    stw r3, 0x18(r31)
    bge lbl_80331E90
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331E90:
    lwz r5, 0x0(r31)
    mr r3, r31
    addi r6, r1, 0xc
    li r4, 0xc
    li r7, 0x0
    bl fn_8032D7EC
    cmpwi r3, 0x0
    bge lbl_80331EC0
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331EC0:
    mr r3, r31
    addi r4, r28, 0x88
    addi r5, r1, 0x8
    bl fn_8032E990
    cmpwi cr1, r3, 0x0
    stw r3, 0x32c(r30)
    mr r6, r3
    bne cr1, lbl_80331EF0
    li r0, 0x0
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331EF0:
    cmpwi r3, 0x100
    ble lbl_80331F08
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331F08:
    ble cr1, lbl_80331F64
    lwz r5, 0x8(r1)
    mr r3, r31
    mr r4, r27
    bl fn_8032DCCC
    cmpwi r3, 0x0
    bne lbl_80331F34
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331F34:
    lwz r4, 0x32c(r30)
    mr r3, r27
    bl fn_8032F74C
    cmpwi r3, 0x0
    stw r3, 0x32c(r30)
    bge lbl_80331F5C
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80331F5C:
    stw r3, 0xc(r31)
    b lbl_80331F6C
lbl_80331F64:
    li r0, -0x1
    stw r0, 0xc(r31)
lbl_80331F6C:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_80331F84
    li r0, 0x0
    stw r0, 0x338(r30)
    b lbl_80332044
lbl_80331F84:
    mr r3, r31
    addi r4, r28, 0x98
    addi r5, r1, 0x8
    bl fn_8032E990
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_80331FB8
    li r3, 0x7
    li r0, 0x0
    stw r3, 0x330(r30)
    li r3, 0x0
    stw r0, 0x338(r30)
    b lbl_803320CC
lbl_80331FB8:
    addi r3, r30, 0x304
    addi r4, r28, 0xa4
    li r5, 0x8
    bl fn_8032F3D8
    cmpwi r3, 0x0
    bne lbl_80331FDC
    li r0, 0x1
    stw r0, 0x338(r30)
    b lbl_80331FE4
lbl_80331FDC:
    li r0, 0x0
    stw r0, 0x338(r30)
lbl_80331FE4:
    cmpwi r29, 0x100
    bgt lbl_80332044
    cmpwi r29, 0x0
    ble lbl_80332044
    lwz r4, 0x8(r1)
    mr r3, r31
    addi r6, r28, 0xb0
    li r7, 0x0
    add r5, r4, r29
    bl fn_8032DADC
    cmpwi r3, 0x0
    bne lbl_8033201C
    li r0, 0x1
    stw r0, 0x338(r30)
lbl_8033201C:
    lwz r4, 0x8(r1)
    mr r3, r31
    la r6, lbl_8049D43C
    li r7, 0x0
    add r5, r4, r29
    bl fn_8032DADC
    cmpwi r3, 0x0
    bne lbl_80332044
    li r0, 0x0
    stw r0, 0x338(r30)
lbl_80332044:
    mr r3, r31
    addi r4, r28, 0xbc
    addi r5, r1, 0x8
    bl fn_8032E990
    cmpwi cr1, r3, 0x0
    stw r3, 0x33c(r30)
    mr r0, r3
    bne cr1, lbl_80332074
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r30)
    b lbl_803320CC
lbl_80332074:
    cmpwi r3, 0x100
    ble lbl_80332088
    li r0, 0x0
    stw r0, 0x33c(r30)
    b lbl_803320B8
lbl_80332088:
    ble cr1, lbl_803320B0
    lwz r4, 0x8(r1)
    mr r3, r31
    la r6, lbl_8049D448
    li r7, 0x3b
    add r5, r4, r0
    bl fn_8032DADC
    cntlzw r0, r3
    srwi r0, r0, 5
    b lbl_803320B4
lbl_803320B0:
    li r0, 0x0
lbl_803320B4:
    stw r0, 0x33c(r30)
lbl_803320B8:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x330(r30)
    li r3, 0x1
    stw r0, 0x14(r31)
lbl_803320CC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_803320E4
// ----------------------------------------------------------------------------
asm void fn_803320E4() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_16
    mr r16, r3
    bl fn_80333DE4
    mr r17, r3
    bl fn_80333E58
    lwz r4, 0x0(r3)
    mr r3, r17
    lwz r22, 0xc(r4)
    lwz r21, 0x2c(r22)
    bl fn_80333E4C
    mr r27, r3
    mr r3, r17
    bl fn_80333E68
    mr r20, r3
    mr r4, r22
    bl fn_803339B4
    mr r19, r3
    mr r3, r17
    bl fn_80333E60
    lwz r0, 0x1c(r22)
    addi r18, r3, 0x360
    cmpwi r0, 0x2
    beq lbl_80332174
    lwz r0, 0x18(r21)
    cmpwi r0, 0xcc
    beq lbl_80332174
    cmpwi r0, 0x130
    beq lbl_80332174
    cmpwi r0, 0x64
    blt lbl_8033217C
    cmpwi r0, 0xc8
    bge lbl_8033217C
lbl_80332174:
    li r3, 0x1
    b lbl_803326BC
lbl_8033217C:
    mr r3, r19
    li r4, 0x0
    bl fn_80333E70
    cmpwi r19, 0x0
    beq lbl_80332198
    li r0, 0x4
    stw r0, 0x0(r19)
lbl_80332198:
    lwz r4, 0x32c(r16)
    cmpwi r4, 0x0
    blt lbl_803322C8
    mr r3, r19
    bl fn_80333E70
    li r18, 0x6
    li r17, 0x200
    b lbl_80332274
lbl_803321B8:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_803321E8
    mr r3, r20
    mr r4, r21
    bl fn_80330190
    cmpwi r3, 0x0
    bne lbl_803321E8
    stw r18, 0x330(r16)
    addi r0, r16, 0x104
    stw r0, 0x28(r21)
    stw r17, 0x1c(r21)
lbl_803321E8:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    bne lbl_80332214
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r7, 0x32c(r16)
    mr r4, r22
    li r6, 0x0
    li r8, 0x0
    bl fn_8032DE4C
    b lbl_80332230
lbl_80332214:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r6, 0x4(r21)
    mr r4, r22
    lwz r7, 0x32c(r16)
    li r8, 0x0
    bl fn_8032DE4C
lbl_80332230:
    cmpwi r3, 0x0
    bge lbl_80332240
    li r3, 0x0
    b lbl_803326BC
lbl_80332240:
    beq lbl_80332280
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_80332268
    lwz r0, 0x4(r21)
    add r0, r0, r3
    stw r0, 0x4(r21)
    lwz r0, 0x8(r21)
    add r0, r0, r3
    stw r0, 0x8(r21)
lbl_80332268:
    lwz r0, 0x32c(r16)
    subf r0, r3, r0
    stw r0, 0x32c(r16)
lbl_80332274:
    lwz r0, 0x32c(r16)
    cmpwi r0, 0x0
    bgt lbl_803321B8
lbl_80332280:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_8033268C
    lwz r0, 0x32c(r16)
    cmpwi r0, 0x0
    beq lbl_803322BC
    lwz r4, 0x4(r21)
    mr r3, r21
    bl fn_8032DE10
    cmpwi r3, 0x0
    li r0, 0xa
    beq lbl_803322B4
    li r0, 0x6
lbl_803322B4:
    stw r0, 0x330(r16)
    b lbl_8033268C
lbl_803322BC:
    li r0, 0x0
    stw r0, 0x330(r16)
    b lbl_8033268C
lbl_803322C8:
    lwz r0, 0x33c(r16)
    li r3, 0xa
    stw r3, 0x330(r16)
    cmpwi r0, 0x0
    beq lbl_803325D8
    addi r29, r1, 0xc
    addi r23, r1, 0x10
    li r24, -0x1
    li r30, 0x6
    li r31, 0x200
    li r28, 0x0
lbl_803322F4:
    stb r28, 0x10(r1)
    stb r28, 0x11(r1)
    stw r28, 0x328(r16)
    b lbl_80332440
lbl_80332304:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    add r6, r18, r0
    li r7, 0x1
    li r8, 0x0
    bl fn_8032EFD8
    cmpwi r3, 0x0
    bge lbl_80332330
    li r3, 0x0
    b lbl_803326BC
lbl_80332330:
    lwz r17, 0x328(r16)
    lbzx r3, r18, r17
    clrlwi r4, r17, 31
    extsb r0, r3
    stbx r3, r23, r4
    cmpwi r0, 0x3b
    beq lbl_8033236C
    cmpwi r0, 0xa
    bne lbl_80332434
    subi r0, r17, 0x1
    clrlwi r0, r0, 31
    lbzx r0, r23, r0
    extsb r0, r0
    cmpwi r0, 0xd
    bne lbl_80332434
lbl_8033236C:
    extsb r0, r3
    cmpwi r0, 0xa
    bne lbl_80332380
    subi r17, r17, 0x1
    b lbl_80332404
lbl_80332380:
    lwz r26, 0x7d0(r27)
    li r25, 0x0
    li r24, 0x0
    stb r25, 0xc(r1)
    stb r25, 0xd(r1)
    b lbl_803323C4
lbl_80332398:
    mr r3, r20
    mr r4, r22
    mr r5, r26
    li r7, 0x1
    li r8, 0x0
    bl fn_8032EFD8
    cmpwi r3, 0x0
    bgt lbl_803323BC
    b lbl_803323F4
lbl_803323BC:
    add r25, r25, r3
    addi r24, r24, 0x1
lbl_803323C4:
    clrlwi r0, r24, 31
    addi r6, r1, 0xc
    lbzux r0, r6, r0
    cmpwi r0, 0xd
    bne lbl_80332398
    subi r0, r24, 0x1
    clrlwi r0, r0, 31
    lbzx r0, r29, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_80332398
    mr r3, r25
lbl_803323F4:
    cmpwi r3, 0x0
    bgt lbl_80332404
    li r3, 0x0
    b lbl_803326BC
lbl_80332404:
    cmpwi r17, 0x0
    bne lbl_80332414
    li r3, 0x0
    b lbl_803326BC
lbl_80332414:
    mr r3, r18
    mr r4, r17
    bl fn_8032F628
    cmpwi r3, 0x0
    mr r24, r3
    bge lbl_8033244C
    li r3, 0x0
    b lbl_803326BC
lbl_80332434:
    lwz r3, 0x328(r16)
    addi r0, r3, 0x1
    stw r0, 0x328(r16)
lbl_80332440:
    lwz r0, 0x328(r16)
    cmpwi r0, 0x100
    blt lbl_80332304
lbl_8033244C:
    lwz r0, 0x328(r16)
    cmpwi r0, 0x100
    bne lbl_80332468
    li r0, 0x7
    li r3, 0x0
    stw r0, 0x330(r16)
    b lbl_803326BC
lbl_80332468:
    cmpwi r24, 0x0
    ble lbl_80332560
    mr r3, r19
    mr r4, r24
    bl fn_80333E70
    b lbl_80332554
lbl_80332480:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_803324B0
    mr r3, r20
    mr r4, r21
    bl fn_80330190
    cmpwi r3, 0x0
    bne lbl_803324B0
    stw r30, 0x330(r16)
    addi r0, r16, 0x104
    stw r0, 0x28(r21)
    stw r31, 0x1c(r21)
lbl_803324B0:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    bne lbl_803324DC
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    mr r7, r24
    li r6, 0x0
    li r8, 0x0
    bl fn_8032DE4C
    b lbl_803324F8
lbl_803324DC:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r6, 0x4(r21)
    mr r4, r22
    mr r7, r24
    li r8, 0x0
    bl fn_8032DE4C
lbl_803324F8:
    cmpwi r3, 0x0
    bgt lbl_80332508
    li r3, 0x0
    b lbl_803326BC
lbl_80332508:
    lwz r0, 0x4(r21)
    subf. r24, r3, r24
    add r0, r0, r3
    stw r0, 0x4(r21)
    lwz r0, 0x8(r21)
    add r0, r0, r3
    stw r0, 0x8(r21)
    bne lbl_80332554
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    mr r6, r18
    li r7, 0x2
    li r8, 0x0
    bl fn_8032EFD8
    cmpwi r3, 0x0
    bgt lbl_80332554
    li r3, 0x0
    b lbl_803326BC
lbl_80332554:
    cmpwi r24, 0x0
    bgt lbl_80332480
    b lbl_803322F4
lbl_80332560:
    lwz r18, 0x7d0(r27)
    li r0, 0x0
    addi r17, r1, 0x8
    li r19, 0x0
    stb r0, 0x8(r1)
    stb r0, 0x9(r1)
    b lbl_803325A0
lbl_8033257C:
    mr r3, r20
    mr r4, r22
    mr r5, r18
    li r7, 0x1
    li r8, 0x0
    bl fn_8032EFD8
    cmpwi r3, 0x0
    ble lbl_803325CC
    addi r19, r19, 0x1
lbl_803325A0:
    clrlwi r0, r19, 31
    addi r6, r1, 0x8
    lbzux r0, r6, r0
    cmpwi r0, 0xd
    bne lbl_8033257C
    subi r0, r19, 0x1
    clrlwi r0, r0, 31
    lbzx r0, r17, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_8033257C
lbl_803325CC:
    li r0, 0x0
    stw r0, 0x330(r16)
    b lbl_8033268C
lbl_803325D8:
    li r18, 0x6
    li r17, 0x200
lbl_803325E0:
    mr r3, r20
    mr r4, r21
    bl fn_80330190
    cmpwi r3, 0x0
    bne lbl_80332604
    stw r18, 0x330(r16)
    addi r0, r16, 0x104
    stw r0, 0x28(r21)
    stw r17, 0x1c(r21)
lbl_80332604:
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    bne lbl_8033262C
    lwz r5, 0x7d0(r27)
    mr r3, r20
    mr r4, r22
    li r6, 0x0
    li r7, 0x0
    bl fn_8032DE2C
    b lbl_80332644
lbl_8033262C:
    lwz r5, 0x7d0(r27)
    mr r3, r20
    lwz r6, 0x4(r21)
    mr r4, r22
    li r7, 0x0
    bl fn_8032DE2C
lbl_80332644:
    cmpwi r3, 0x0
    bge lbl_80332654
    li r3, 0x0
    b lbl_803326BC
lbl_80332654:
    bne lbl_80332670
    lwz r0, 0x330(r16)
    cmpwi r0, 0x6
    beq lbl_8033268C
    li r0, 0x0
    stw r0, 0x330(r16)
    b lbl_8033268C
lbl_80332670:
    lwz r0, 0x4(r21)
    add r0, r0, r3
    stw r0, 0x4(r21)
    lwz r0, 0x8(r21)
    add r0, r0, r3
    stw r0, 0x8(r21)
    b lbl_803325E0
lbl_8033268C:
    mr r3, r20
    mr r4, r21
    bl fn_803339BC
    lwz r0, 0x330(r16)
    mr r4, r3
    cmpwi r0, 0x0
    bne lbl_803326B8
    cmpwi r3, 0x0
    beq lbl_803326B8
    mr r3, r20
    bl fn_80333C74
lbl_803326B8:
    li r3, 0x1
lbl_803326BC:
    addi r11, r1, 0x60
    bl _restgpr_16
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_803326D4
// ----------------------------------------------------------------------------
asm void fn_803326D4() {
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    stw r0, 0x364(r1)
    addi r11, r1, 0x360
    bl _savegpr_27
    bl fn_80333DE4
    mr r28, r3
    bl fn_80333E4C
    mr r27, r3
    mr r3, r28
    bl fn_80333E58
    li r29, -0x1
    mr r28, r3
    stw r29, 0x8(r1)
    addi r3, r1, 0xc
    li r4, 0x100
    bl fn_8032F3CC
    addi r3, r1, 0x10c
    li r4, 0x200
    bl fn_8032F3CC
    li r30, 0x0
    stw r29, 0x31c(r1)
    li r31, 0x1
    stw r29, 0x320(r1)
    stw r30, 0x32c(r1)
    stw r30, 0x340(r1)
    stw r30, 0x344(r1)
    stw r30, 0x33c(r1)
    stw r30, 0x334(r1)
    stw r30, 0x338(r1)
    b lbl_803328B4
lbl_80332750:
    lwz r0, 0x33c(r1)
    cmpwi r0, 0x0
    bne lbl_803327A8
    addi r3, r1, 0x8
    bl fn_80331210
    cmpwi r3, 0x0
    beq lbl_803328B4
    lwz r3, 0x0(r28)
    lwz r3, 0xc(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8033278C
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_8033278C:
    addi r3, r1, 0x8
    bl fn_803312C8
    cmpwi r3, 0x0
    bne lbl_803327A8
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_803327A8:
    lwz r0, 0x33c(r1)
    cmpwi r0, 0x1
    bne lbl_803327B8
    stw r30, 0x33c(r1)
lbl_803327B8:
    addi r3, r1, 0x8
    bl fn_8033141C
    cmpwi r3, 0x0
    bne lbl_803327D4
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_803327D4:
    addi r3, r1, 0x8
    bl fn_803315D8
    cmpwi r3, 0x1
    beq lbl_803327FC
    bge lbl_803327EC
    b lbl_80332808
lbl_803327EC:
    cmpwi r3, 0x3
    bge lbl_80332808
    stw r31, 0x33c(r1)
    b lbl_803328B4
lbl_803327FC:
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_80332808:
    addi r3, r1, 0x8
    bl fn_8033172C
    cmpwi r3, 0x2
    beq lbl_80332838
    bge lbl_8033282C
    cmpwi r3, 0x0
    beq lbl_8033284C
    bge lbl_80332840
    b lbl_8033284C
lbl_8033282C:
    cmpwi r3, 0x4
    bge lbl_8033284C
    b lbl_80332840
lbl_80332838:
    stw r31, 0x33c(r1)
    b lbl_803328B4
lbl_80332840:
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_8033284C:
    lwz r3, 0x0(r28)
    lwz r3, 0xc(r3)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8033286C
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_8033286C:
    addi r3, r1, 0x8
    bl fn_80331BC8
    cmpwi r3, 0x0
    bne lbl_80332888
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_80332888:
    addi r3, r1, 0x8
    bl fn_80331DB4
    cmpwi r3, 0x0
    bne lbl_803328A4
    addi r3, r1, 0x8
    bl fn_80331090
    b lbl_803328B4
lbl_803328A4:
    addi r3, r1, 0x8
    bl fn_803320E4
    addi r3, r1, 0x8
    bl fn_80331090
lbl_803328B4:
    lwz r0, 0x7dc(r27)
    cmpwi r0, 0x0
    beq lbl_80332750
    addi r11, r1, 0x360
    bl _restgpr_27
    lwz r0, 0x364(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}

// ----------------------------------------------------------------------------
// fn_803328D8
// ----------------------------------------------------------------------------
asm void fn_803328D8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    bl fn_80333DE4
    mr r29, r3
    bl fn_80333E4C
    mr r31, r3
    mr r3, r29
    bl fn_80333E68
    lis r30, 0x1
    mr r28, r3
    subi r3, r30, 0x7fa0
    li r4, 0x20
    bl fn_8032CD10
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_80332950
    mr r3, r31
    li r4, 0x1
    bl fn_8032CDB0
    li r3, 0x0
    b lbl_80332A08
lbl_80332950:
    subi r4, r30, 0x7fa0
    bl fn_8032F3CC
    mr r3, r31
    mr r4, r22
    mr r5, r23
    mr r6, r24
    mr r7, r25
    mr r8, r27
    li r9, 0x0
    li r10, 0x0
    bl fn_8032DE94
    cmpwi r3, 0x0
    stw r3, 0x10(r29)
    bne lbl_80332998
    mr r3, r29
    bl fn_8032CD6C
    li r3, 0x0
    b lbl_80332A08
lbl_80332998:
    lwz r4, 0x2c(r3)
    li r31, 0x0
    li r0, -0x1
    mr r3, r28
    stw r4, 0x14(r29)
    mr r4, r29
    stw r31, 0x0(r29)
    stw r26, 0x1c(r29)
    stw r31, 0x24(r29)
    stw r31, 0x28(r29)
    stw r0, 0x18(r29)
    bl fn_803338E4
    li r3, 0xf
    li r0, 0x1
    stw r3, 0x4(r29)
    mr r3, r29
    li r4, 0x0
    stw r31, 0x8(r29)
    stw r0, 0xc(r29)
    bl fn_80333E70
    stw r31, 0x30(r29)
    addis r5, r29, 0x1
    addi r3, r29, 0x40
    addi r4, r30, -0x8000
    stw r31, -0x7fc0(r5)
    stw r31, -0x7fbc(r5)
    bl fn_8032F3CC
    mr r3, r29
lbl_80332A08:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80332A20
// ----------------------------------------------------------------------------
asm void fn_80332A20() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_80333DE4
    mr r30, r3
    bl fn_80333E68
    mr r4, r31
    bl fn_803339C4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80332A60
    li r3, -0x1
    b lbl_80332A94
lbl_80332A60:
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    bne lbl_80332A74
    li r3, -0x1
    b lbl_80332A94
lbl_80332A74:
    mr r3, r30
    bl fn_8032E698
    cmpwi r3, 0x0
    stw r3, 0x18(r31)
    blt lbl_80332A90
    li r0, 0x1
    stw r0, 0x0(r31)
lbl_80332A90:
    li r3, 0x0
lbl_80332A94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80332AAC
// ----------------------------------------------------------------------------
asm void fn_80332AAC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r31, r3
    mr r4, r28
    bl fn_803339C4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_80332B24
    mr r3, r31
    bl fn_8033397C
    cmpwi r3, 0x0
    beq lbl_80332B1C
    lwz r0, 0x28(r3)
    stw r0, 0x0(r29)
    lwz r0, 0x1c(r3)
    stw r0, 0x0(r30)
    lwz r3, 0x4(r3)
    b lbl_80332B28
lbl_80332B1C:
    li r3, -0x1
    b lbl_80332B28
lbl_80332B24:
    li r3, -0x1
lbl_80332B28:
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
// fn_80332B48
// ----------------------------------------------------------------------------
asm void fn_80332B48() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r31, r3
    mr r4, r30
    bl fn_803339C4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_80332BA0
    mr r3, r31
    bl fn_8033397C
    cmpwi r3, 0x0
    beq lbl_80332B98
    lwz r3, 0x438(r3)
    b lbl_80332BA4
lbl_80332B98:
    li r3, 0x0
    b lbl_80332BA4
lbl_80332BA0:
    li r3, 0x0
lbl_80332BA4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80332BBC
// ----------------------------------------------------------------------------
asm void fn_80332BBC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r31
    bl fn_803339C4
    cmpwi r3, 0x0
    beq lbl_80332BF0
    lwz r3, 0x4(r3)
    b lbl_80332BF4
lbl_80332BF0:
    li r3, -0x1
lbl_80332BF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80332C08
// ----------------------------------------------------------------------------
asm void fn_80332C08() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80333DE4
    lwz r0, lbl_8049E560
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80332C54
    lwz r3, lbl_8049D450
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_8049E560
lbl_80332C54:
    mr r3, r31
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_8032CDC8
    cntlzw r0, r3
    lwz r31, 0x1c(r1)
    srwi r0, r0, 5
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    neg r3, r0
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80332C94
// ----------------------------------------------------------------------------
asm void fn_80332C94() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    mr r4, r31
    bl fn_8032CF58
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80332CC8
// ----------------------------------------------------------------------------
asm void fn_80332CC8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80333DE4
    bl fn_8032CDC0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80332CEC
// ----------------------------------------------------------------------------
asm void fn_80332CEC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r30, r3
    mr r4, r28
    bl fn_803339C4
    cmpwi r31, 0x3
    mr r28, r3
    li r0, 0x0
    beq lbl_80332EAC
    bge lbl_80332D4C
    cmpwi r31, 0x1
    beq lbl_80332D58
    bge lbl_80332DB8
    b lbl_80332EAC
lbl_80332D4C:
    cmpwi r31, 0x5
    bge lbl_80332EAC
    b lbl_80332E50
lbl_80332D58:
    cmpwi r3, 0x0
    beq lbl_80332DAC
    mr r3, r30
    mr r4, r28
    bl fn_80333944
    cmpwi r3, 0x0
    beq lbl_80332DAC
    lwz r31, 0x254(r3)
    cmpwi r31, 0x0
    beq lbl_80332DAC
    mr r3, r28
    bl fn_80332B48
    mr r12, r31
    mr r7, r3
    addi r4, r29, 0x4
    addi r5, r29, 0x8
    lwz r3, 0x0(r29)
    lwz r6, 0xc(r29)
    mtctr r12
    bctrl
    b lbl_80332DB0
lbl_80332DAC:
    li r3, -0x1
lbl_80332DB0:
    mr r0, r3
    b lbl_80332EAC
lbl_80332DB8:
    cmpwi r3, 0x0
    beq lbl_80332E48
    mr r3, r30
    mr r4, r28
    bl fn_8033397C
    cmpwi r3, 0x0
    beq lbl_80332E48
    lwz r30, 0x2c(r3)
    cmpwi r30, 0x0
    beq lbl_80332E48
    lwz r0, 0x0(r29)
    mr r3, r28
    stw r0, 0x8(r1)
    bl fn_80333E80
    mr r31, r3
    mr r3, r28
    bl fn_80332B48
    lis r6, fn_8032CD10@ha
    lis r7, fn_8032CD6C@ha
    mr r8, r3
    mr r12, r30
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r29, 0x4
    addi r6, r6, fn_8032CD10@l
    addi r7, r7, fn_8032CD6C@l
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r29)
    beq lbl_80332E48
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_80332E48
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_80332E48:
    li r0, 0x0
    b lbl_80332EAC
lbl_80332E50:
    cmpwi r3, 0x0
    beq lbl_80332EA8
    lwz r29, 0x30(r3)
    cmpwi r29, 0x0
    beq lbl_80332EA8
    mr r3, r30
    mr r4, r28
    bl fn_8033397C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80332EA8
    mr r3, r28
    bl fn_80332BBC
    mr r30, r3
    mr r3, r28
    bl fn_80332B48
    mr r12, r29
    mr r5, r3
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
lbl_80332EA8:
    li r0, 0x0
lbl_80332EAC:
    lwz r31, 0x1c(r1)
    mr r3, r0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80332ED0
// ----------------------------------------------------------------------------
asm void fn_80332ED0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r11, fn_80332CEC@ha
    mr r26, r7
    mr r27, r9
    mr r28, r10
    addi r7, r11, fn_80332CEC@l
    bl fn_803328D8
    cmpwi r3, 0x0
    mr r31, r3
    li r4, 0x0
    beq lbl_80332F84
    bl fn_80333DE4
    mr r30, r3
    bl fn_80333E68
    mr r29, r3
    mr r4, r31
    bl fn_803339C4
    mr r31, r3
    mr r3, r29
    mr r4, r31
    bl fn_80333944
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_80332F84
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_80332F64
    stw r26, 0x30(r31)
    lwz r4, 0x2c(r3)
    stw r27, 0x2c(r4)
    lwz r4, 0x2c(r3)
    stw r28, 0x30(r4)
    b lbl_80332F88
lbl_80332F64:
    mr r3, r30
    bl fn_8032E4BC
    mr r3, r29
    mr r4, r31
    bl fn_80333914
    mr r3, r31
    bl fn_8032CD6C
    li r4, 0x0
lbl_80332F84:
    mr r3, r4
lbl_80332F88:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80332FA0
// ----------------------------------------------------------------------------
asm void fn_80332FA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, lbl_8049E564
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r0, 0x0
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_80332FE8
    lwz r3, lbl_8049D454
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_8049E564
lbl_80332FE8:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    li r9, 0x0
    li r10, 0x0
    bl fn_80332ED0
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80333024
// ----------------------------------------------------------------------------
asm void fn_80333024() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl fn_80333DE4
    mr r31, r3
    bl fn_80333E68
    mr r4, r30
    bl fn_803339CC
    mr r30, r3
    mr r3, r31
    bl fn_80333E4C
    cmpwi r30, 0x0
    mr r4, r3
    bne lbl_80333080
    li r3, -0x1
    b lbl_803330C8
lbl_80333080:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_803330AC
    lis r3, lbl_8038EB28@ha
    lis r4, lbl_8038EB10@ha
    addi r3, r3, lbl_8038EB28@l
    addi r4, r4, lbl_8038EB10@l
    opword 0x4CC63182
    bl fn_8019AFCC
    li r3, -0x1
    b lbl_803330C8
lbl_803330AC:
    mr r3, r30
    mr r5, r28
    mr r6, r29
    bl fn_8032D1CC
    cntlzw r0, r3
    srwi r0, r0, 5
    neg r3, r0
lbl_803330C8:
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
// fn_803330E8
// ----------------------------------------------------------------------------
asm void fn_803330E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl fn_80333DE4
    mr r31, r3
    bl fn_80333E68
    mr r4, r30
    bl fn_803339CC
    mr r30, r3
    mr r3, r31
    bl fn_80333E4C
    cmpwi r30, 0x0
    mr r4, r3
    bne lbl_80333144
    li r3, -0x1
    b lbl_8033318C
lbl_80333144:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_80333170
    lis r3, lbl_8038EB28@ha
    lis r4, lbl_8038EB58@ha
    addi r3, r3, lbl_8038EB28@l
    addi r4, r4, lbl_8038EB58@l
    opword 0x4CC63182
    bl fn_8019AFCC
    li r3, -0x1
    b lbl_8033318C
lbl_80333170:
    mr r3, r30
    mr r5, r28
    mr r6, r29
    bl fn_8032D1EC
    cntlzw r0, r3
    srwi r0, r0, 5
    neg r3, r0
lbl_8033318C:
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
// fn_803331AC
// ----------------------------------------------------------------------------
asm void fn_803331AC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r31
    bl fn_803339B4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_803331F0
    bl fn_80332A20
    cmpwi r3, 0x0
    bne lbl_803331F0
    lwz r3, 0x18(r31)
    b lbl_803331F4
lbl_803331F0:
    li r3, -0x1
lbl_803331F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333208
// ----------------------------------------------------------------------------
asm void fn_80333208() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    mr r4, r31
    bl fn_8032E758
    cntlzw r0, r3
    lwz r31, 0xc(r1)
    srwi r0, r0, 5
    neg r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333248
// ----------------------------------------------------------------------------
asm void fn_80333248() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r31, r3
    mr r4, r30
    bl fn_803339BC
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_803332B4
    mr r3, r31
    mr r4, r30
    bl fn_8033397C
    cmpwi r3, 0x0
    beq lbl_803332A0
    lwz r4, 0x14(r30)
    mr r3, r31
    bl fn_8032E8C4
lbl_803332A0:
    mr r3, r31
    mr r4, r30
    bl fn_80333914
    mr r3, r30
    bl fn_8032CD6C
lbl_803332B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_803332CC
// ----------------------------------------------------------------------------
asm void fn_803332CC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r30
    bl fn_803339BC
    cmpwi r3, 0x0
    beq lbl_80333318
    li r0, 0x0
    mr r4, r31
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    bl fn_80332AAC
    b lbl_8033331C
lbl_80333318:
    li r3, -0x1
lbl_8033331C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80333334
// ----------------------------------------------------------------------------
asm void fn_80333334() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r31
    bl fn_80333A10
    cmpwi r3, 0x0
    bne lbl_80333368
    li r3, -0x1
    b lbl_80333380
lbl_80333368:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_8033337C
    lwz r3, 0x18(r3)
    b lbl_80333380
lbl_8033337C:
    li r3, -0x1
lbl_80333380:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333394
// ----------------------------------------------------------------------------
asm void fn_80333394() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r30
    bl fn_803339CC
    cmpwi r3, 0x0
    bne lbl_803333D0
    li r3, -0x1
    b lbl_803333D8
lbl_803333D0:
    stw r31, 0xcc(r3)
    li r3, 0x0
lbl_803333D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_803333F0
// ----------------------------------------------------------------------------
asm void fn_803333F0() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lis r30, lbl_8038EA18@ha
    mr r31, r3
    mr r29, r4
    mr r28, r5
    mr r26, r6
    mr r27, r7
    addi r30, r30, lbl_8038EA18@l
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r31
    bl fn_803339CC
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80333444
    cmpwi r29, 0x0
    bne lbl_8033344C
lbl_80333444:
    li r3, -0x1
    b lbl_80333548
lbl_8033344C:
    mr r3, r29
    bl fn_8032F3C4
    cmpwi r3, 0x100
    ble lbl_80333470
    addi r3, r30, 0x1f8
    opword 0x4CC63182
    bl fn_8019AFCC
    li r3, -0x1
    b lbl_80333548
lbl_80333470:
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xe0
    bl fn_8032F3C0
    cmpwi r26, 0x0
    stw r28, 0x1e0(r31)
    beq lbl_8033353C
    cmpwi r27, 0x0
    beq lbl_8033353C
    mr r3, r26
    bl fn_8032F3C4
    mr r29, r3
    mr r3, r27
    bl fn_8032F3C4
    cmpwi r29, 0x20
    mr r28, r3
    ble lbl_803334C8
    addi r3, r30, 0x220
    opword 0x4CC63182
    bl fn_8019AFCC
    li r3, -0x1
    b lbl_80333548
lbl_803334C8:
    cmpwi r3, 0x20
    ble lbl_803334E4
    addi r3, r30, 0x244
    opword 0x4CC63182
    bl fn_8019AFCC
    li r3, -0x1
    b lbl_80333548
lbl_803334E4:
    addi r3, r1, 0x8
    li r4, 0x41
    bl fn_8032F3CC
    mr r4, r26
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_8032F3C0
    addi r3, r1, 0x8
    la r4, lbl_8049D458
    add r3, r3, r29
    li r5, 0x1
    bl fn_8032F3C0
    addi r3, r1, 0x8
    mr r4, r27
    add r3, r29, r3
    mr r5, r28
    addi r3, r3, 0x1
    bl fn_8032F3C0
    addi r3, r31, 0x1e4
    addi r4, r1, 0x8
    bl fn_8032FB58
    stw r3, 0x240(r31)
lbl_8033353C:
    li r0, 0x1
    li r3, 0x0
    stw r0, 0xc(r31)
lbl_80333548:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_80333560
// ----------------------------------------------------------------------------
asm void fn_80333560() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8038EA18@ha
    mr r27, r3
    addi r31, r31, lbl_8038EA18@l
    bl fn_80333DE4
    mr r30, r3
    bl fn_80333E68
    mr r4, r27
    bl fn_803339CC
    mr r29, r3
    mr r3, r30
    bl fn_80333E4C
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_803335B4
    addi r30, r3, 0x170
    b lbl_803335B8
lbl_803335B4:
    addi r30, r3, 0x28
lbl_803335B8:
    lbz r0, 0x0(r30)
    cmplwi r0, 0x1
    bne lbl_8033366C
    lbz r0, 0x1(r30)
    li r28, 0x0
    li r27, 0x0
    cmplwi r0, 0x1
    bne lbl_803335E0
    addi r28, r30, 0x106
    addi r27, r30, 0x127
lbl_803335E0:
    cmpwi r27, 0x0
    beq lbl_803335F0
    mr r7, r27
    b lbl_803335F4
lbl_803335F0:
    addi r7, r31, 0x268
lbl_803335F4:
    cmpwi r28, 0x0
    lhz r5, 0x104(r30)
    addi r3, r31, 0x274
    addi r4, r30, 0x4
    beq lbl_80333610
    mr r6, r28
    b lbl_80333614
lbl_80333610:
    addi r6, r31, 0x268
lbl_80333614:
    opword 0x4CC63182
    bl OSReport
    lhz r5, 0x104(r30)
    mr r3, r29
    mr r6, r28
    mr r7, r27
    addi r4, r30, 0x4
    bl fn_803333F0
    cmpwi r3, 0x0
    bge lbl_80333664
    mr r4, r3
    addi r3, r31, 0x298
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x2b4
    addi r5, r31, 0x2c0
    li r4, 0x3dc
    opword 0x4CC63182
    bl OSPanic
    b lbl_8033366C
lbl_80333664:
    li r3, 0x0
    b lbl_80333670
lbl_8033366C:
    li r3, -0x1
lbl_80333670:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80333688
// ----------------------------------------------------------------------------
asm void fn_80333688() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r31
    bl fn_803339CC
    cmpwi r3, 0x0
    bne lbl_803336BC
    li r4, -0x1
    b lbl_803336D0
lbl_803336BC:
    li r0, 0x0
    li r4, 0x0
    stw r0, 0xd8(r3)
    stw r0, 0xc0(r3)
    stw r0, 0xc4(r3)
lbl_803336D0:
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_803336E8
// ----------------------------------------------------------------------------
asm void fn_803336E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80333DE4
    bl fn_80333E68
    mr r4, r31
    bl fn_803339CC
    cmpwi r3, 0x0
    bne lbl_8033371C
    li r5, -0x1
    b lbl_80333740
lbl_8033371C:
    li r4, 0x0
    li r0, 0x1
    stw r4, 0xdc(r3)
    li r5, 0x0
    stw r0, 0xc8(r3)
    stw r4, 0xb0(r3)
    stw r4, 0xb4(r3)
    stw r4, 0xb8(r3)
    stw r4, 0xbc(r3)
lbl_80333740:
    lwz r31, 0xc(r1)
    mr r3, r5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333758
// ----------------------------------------------------------------------------
asm void fn_80333758() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8046F3C0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r4, lbl_8046F3C0@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8046F3C0@l(r4)
    cmpwi r0, 0x0
    bne lbl_8033379C
    addi r3, r31, 0x4
    bl OSInitMutex
    addi r3, r31, 0x1c
    bl fn_8031AFC0
    li r0, 0x1
    stw r0, 0x0(r31)
lbl_8033379C:
    addi r3, r31, 0x4
    bl OSLockMutex
    li r0, 0x0
    addi r3, r31, 0x1c
    stw r0, 0xc(r30)
    bl fn_8031AFC4
    addi r3, r31, 0x4
    bl OSUnlockMutex
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetPaneRect__Q34nw4r3lyt4PaneCFv
// ----------------------------------------------------------------------------
asm void GetPaneRect__Q34nw4r3lyt4PaneCFv() {
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
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8032D618
    cmplwi r30, 0x3
    bne lbl_80333820
    lwz r0, lbl_8049E568
    mr r31, r29
    stw r0, 0x20(r29)
    stw r29, lbl_8049E568
    b lbl_803338B8
lbl_80333820:
    la r4, lbl_8049E568
    b lbl_803338AC
lbl_80333828:
    cmpwi r30, 0x2
    beq lbl_80333874
    bge lbl_80333844
    cmpwi r30, 0x0
    beq lbl_80333850
    bge lbl_80333860
    b lbl_8033389C
lbl_80333844:
    cmpwi r30, 0x4
    beq lbl_80333888
    b lbl_8033389C
lbl_80333850:
    cmplw r3, r29
    bne lbl_8033389C
    mr r31, r3
    b lbl_8033389C
lbl_80333860:
    lwz r0, 0x10(r3)
    cmplw r0, r29
    bne lbl_8033389C
    mr r31, r3
    b lbl_8033389C
lbl_80333874:
    lwz r0, 0x14(r3)
    cmplw r0, r29
    bne lbl_8033389C
    mr r31, r3
    b lbl_8033389C
lbl_80333888:
    cmplw r3, r29
    bne lbl_8033389C
    lwz r0, 0x20(r3)
    mr r31, r3
    stw r0, 0x0(r4)
lbl_8033389C:
    cmpwi r31, 0x0
    bne lbl_803338B8
    lwz r3, 0x0(r4)
    addi r4, r3, 0x20
lbl_803338AC:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    bne lbl_80333828
lbl_803338B8:
    mr r3, r28
    bl fn_8032D61C
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
// fn_803338E4
// ----------------------------------------------------------------------------
asm void fn_803338E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x3
    stw r0, 0x14(r1)
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    neg r0, r3
    nor r0, r3, r0
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333914
// ----------------------------------------------------------------------------
asm void fn_80333914() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x4
    stw r0, 0x14(r1)
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    neg r0, r3
    nor r0, r3, r0
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333944
// ----------------------------------------------------------------------------
asm void fn_80333944() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333968
    lwz r3, 0x10(r3)
    b lbl_8033396C
lbl_80333968:
    li r3, 0x0
lbl_8033396C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8033397C
// ----------------------------------------------------------------------------
asm void fn_8033397C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_803339A0
    lwz r3, 0x14(r3)
    b lbl_803339A4
lbl_803339A0:
    li r3, 0x0
lbl_803339A4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_803339B4
// ----------------------------------------------------------------------------
asm void fn_803339B4() {
    nofralloc
    li r5, 0x1
    b GetPaneRect__Q34nw4r3lyt4PaneCFv
}

// ----------------------------------------------------------------------------
// fn_803339BC
// ----------------------------------------------------------------------------
asm void fn_803339BC() {
    nofralloc
    li r5, 0x2
    b GetPaneRect__Q34nw4r3lyt4PaneCFv
}

// ----------------------------------------------------------------------------
// fn_803339C4
// ----------------------------------------------------------------------------
asm void fn_803339C4() {
    nofralloc
    li r5, 0x0
    b GetPaneRect__Q34nw4r3lyt4PaneCFv
}

// ----------------------------------------------------------------------------
// fn_803339CC
// ----------------------------------------------------------------------------
asm void fn_803339CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_803339F8
    lwz r3, 0x10(r3)
    b lbl_803339FC
lbl_803339F8:
    mr r3, r31
lbl_803339FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333A10
// ----------------------------------------------------------------------------
asm void fn_80333A10() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333A3C
    lwz r3, 0x14(r3)
    b lbl_80333A40
lbl_80333A3C:
    mr r3, r31
lbl_80333A40:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333A54
// ----------------------------------------------------------------------------
asm void fn_80333A54() {
    nofralloc
    lwz r4, lbl_8049E568
    li r3, 0x0
    b lbl_80333A68
lbl_80333A60:
    lwz r4, 0x20(r4)
    addi r3, r3, 0x1
lbl_80333A68:
    cmpwi r4, 0x0
    bne lbl_80333A60
    blr
}

// ----------------------------------------------------------------------------
// SetPlayerPriority__Q44nw4r3snd6detail9WaveSoundFi
// ----------------------------------------------------------------------------
asm void SetPlayerPriority__Q44nw4r3snd6detail9WaveSoundFi() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r5
    mr r27, r3
    mr r28, r4
    mr r30, r6
    li r29, -0x1
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333B40
    mr r3, r27
    mr r4, r28
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333ACC
    lwz r0, 0x14(r3)
    b lbl_80333AD0
lbl_80333ACC:
    li r0, 0x0
lbl_80333AD0:
    cmpwi r0, 0x0
    beq lbl_80333B40
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    beq lbl_80333B40
    stw r31, 0x8(r1)
    mr r3, r28
    addi r5, r1, 0x8
    li r4, 0x1
    lwz r0, 0x24(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x28(r28)
    stw r0, 0x10(r1)
    stw r30, 0x14(r1)
    lwz r12, 0x1c(r28)
    mtctr r12
    bctrl
    lwz r30, 0x10(r1)
    mr r29, r3
    lwz r31, 0xc(r1)
    mr r3, r27
    mr r4, r28
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333B40
    stw r31, 0x24(r3)
    stw r30, 0x28(r3)
lbl_80333B40:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80333B5C
// ----------------------------------------------------------------------------
asm void fn_80333B5C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333C54
    mr r3, r28
    mr r4, r31
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333BB0
    lwz r6, 0x14(r3)
    b lbl_80333BB4
lbl_80333BB0:
    li r6, 0x0
lbl_80333BB4:
    cmpwi r6, 0x0
    beq lbl_80333C54
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_80333C54
    lwz r0, 0x28(r6)
    mr r3, r31
    addi r5, r1, 0x8
    li r4, 0x2
    stw r0, 0x8(r1)
    lwz r0, 0x1c(r6)
    stw r0, 0xc(r1)
    lwz r0, 0x4(r6)
    stw r0, 0x10(r1)
    lwz r12, 0x1c(r31)
    mtctr r12
    bctrl
    mr r4, r31
    lwz r29, 0x10(r1)
    lwz r30, 0xc(r1)
    mr r3, r28
    lwz r31, 0x8(r1)
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_80333C54
    mr r3, r28
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333C3C
    lwz r3, 0x14(r3)
    b lbl_80333C40
lbl_80333C3C:
    li r3, 0x0
lbl_80333C40:
    cmpwi r3, 0x0
    beq lbl_80333C54
    stw r31, 0x28(r3)
    stw r30, 0x1c(r3)
    stw r29, 0x4(r3)
lbl_80333C54:
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
// fn_80333C74
// ----------------------------------------------------------------------------
asm void fn_80333C74() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333D6C
    mr r3, r28
    mr r4, r31
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333CC8
    lwz r6, 0x14(r3)
    b lbl_80333CCC
lbl_80333CC8:
    li r6, 0x0
lbl_80333CCC:
    cmpwi r6, 0x0
    beq lbl_80333D6C
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_80333D6C
    lwz r0, 0x28(r6)
    mr r3, r31
    addi r5, r1, 0x8
    li r4, 0x3
    stw r0, 0x8(r1)
    lwz r0, 0x1c(r6)
    stw r0, 0xc(r1)
    lwz r0, 0x4(r6)
    stw r0, 0x10(r1)
    lwz r12, 0x1c(r31)
    mtctr r12
    bctrl
    mr r4, r31
    lwz r29, 0x10(r1)
    lwz r30, 0xc(r1)
    mr r3, r28
    lwz r31, 0x8(r1)
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_80333D6C
    mr r3, r28
    li r5, 0x0
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333D54
    lwz r3, 0x14(r3)
    b lbl_80333D58
lbl_80333D54:
    li r3, 0x0
lbl_80333D58:
    cmpwi r3, 0x0
    beq lbl_80333D6C
    stw r31, 0x28(r3)
    stw r30, 0x1c(r3)
    stw r29, 0x4(r3)
lbl_80333D6C:
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
// fn_80333D8C
// ----------------------------------------------------------------------------
asm void fn_80333D8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl GetPaneRect__Q34nw4r3lyt4PaneCFv
    cmpwi r3, 0x0
    beq lbl_80333DD0
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_80333DD0
    mr r3, r31
    li r4, 0x4
    li r5, 0x0
    mtctr r12
    bctrl
lbl_80333DD0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333DE4
// ----------------------------------------------------------------------------
asm void fn_80333DE4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8049E56C
    cmpwi r0, 0x0
    bne lbl_80333E34
    lis r31, lbl_8046F400@ha
    addi r31, r31, lbl_8046F400@l
    stw r31, lbl_8049E56C
    mr r3, r31
    bl fn_8032CCE0
    addi r3, r31, 0x800
    bl fn_8032D378
    addi r3, r31, 0x808
    bl fn_8032DE88
    addi r3, r31, 0x80c
    bl fn_8032D5C8
    addi r3, r31, 0x840
    bl fn_8032FD34
lbl_80333E34:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8049E56C
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E4C
// ----------------------------------------------------------------------------
asm void fn_80333E4C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E50
// ----------------------------------------------------------------------------
asm void fn_80333E50() {
    nofralloc
    addi r3, r3, 0x800
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E58
// ----------------------------------------------------------------------------
asm void fn_80333E58() {
    nofralloc
    addi r3, r3, 0x808
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E60
// ----------------------------------------------------------------------------
asm void fn_80333E60() {
    nofralloc
    addi r3, r3, 0x840
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E68
// ----------------------------------------------------------------------------
asm void fn_80333E68() {
    nofralloc
    addi r3, r3, 0x80c
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E70
// ----------------------------------------------------------------------------
asm void fn_80333E70() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    stw r4, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E80
// ----------------------------------------------------------------------------
asm void fn_80333E80() {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_80333E90
    lwz r3, 0x2c(r3)
    blr
lbl_80333E90:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80333E98
// ----------------------------------------------------------------------------
asm void fn_80333E98() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049E568
    cmpwi r3, 0x0
    beq lbl_80333EE0
    li r4, 0x0
    b lbl_80333EC0
lbl_80333EB8:
    lwz r3, 0x20(r3)
    addi r4, r4, 0x1
lbl_80333EC0:
    cmpwi r3, 0x0
    bne lbl_80333EB8
    cmpwi r4, 0x0
    beq lbl_80333EE0
    lis r3, lbl_8038ED10@ha
    addi r3, r3, lbl_8038ED10@l
    opword 0x4CC63182
    bl fn_8019AFCC
lbl_80333EE0:
    li r0, 0x0
    stw r0, lbl_8049E568
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80333EF8
// ----------------------------------------------------------------------------
asm void fn_80333EF8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_80334098
    cmpwi r3, 0x0
    bne lbl_80333F2C
    bl fn_803340AC
    cmpwi r3, 0x0
    beq lbl_80333F44
lbl_80333F2C:
    lwz r3, lbl_8049E570
    lwz r0, 0x8(r3)
    lwz r3, 0xc(r3)
    stw r3, 0x4(r30)
    stw r0, 0x0(r30)
    b lbl_80334044
lbl_80333F44:
    lis r4, 0x8000
    lwz r3, 0x31c0(r4)
    lwz r4, 0x31c4(r4)
    or. r0, r4, r3
    stw r4, 0x4(r30)
    stw r3, 0x0(r30)
    bne lbl_80333F68
    li r3, -0x5
    b lbl_80333F6C
lbl_80333F68:
    bl fn_80334850
lbl_80333F6C:
    cmpwi r3, 0x0
    bne lbl_80333F78
    b lbl_80334048
lbl_80333F78:
    bl NWC24SuspendScheduler
    cmpwi r3, 0x0
    bge lbl_80333F88
    b lbl_80334048
lbl_80333F88:
    li r3, 0x1
    bl fn_803340D4
    cmpwi r3, 0x0
    bge lbl_80333F9C
    b lbl_80334014
lbl_80333F9C:
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x8(r1)
    bne lbl_80333FB4
    li r31, -0x3
    b lbl_80333FFC
lbl_80333FB4:
    lis r3, 0x6fc1
    lis r4, 0x24
    subi r5, r3, 0x1
    subi r0, r4, 0x790e
    stw r5, 0x4(r30)
    mr r3, r30
    addi r4, r1, 0x8
    stw r0, 0x0(r30)
    bl NWC24iRequestGenerateUserId
    lwz r0, 0x0(r30)
    lis r5, 0x8000
    lwz r6, 0x4(r30)
    mr r31, r3
    addi r3, r5, 0x31c0
    li r4, 0x20
    stw r6, 0x31c4(r5)
    stw r0, 0x31c0(r5)
    bl fn_803150C4
lbl_80333FFC:
    li r3, 0x0
    bl fn_803340D4
    cmpwi r31, 0x0
    blt lbl_80334010
    mr r31, r3
lbl_80334010:
    mr r3, r31
lbl_80334014:
    addi r0, r3, 0x24
    mr r31, r3
    cmplwi r0, 0x1
    bgt lbl_80334028
    li r31, 0x0
lbl_80334028:
    bl NWC24ResumeScheduler
    cmpwi r3, 0x0
    bge lbl_80334044
    cmpwi r31, 0x0
    beq lbl_80334040
    mr r3, r31
lbl_80334040:
    mr r31, r3
lbl_80334044:
    mr r3, r31
lbl_80334048:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80334060
// ----------------------------------------------------------------------------
asm void fn_80334060() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049E57C
    cmpwi r0, 0x0
    bne lbl_80334088
    lwz r3, lbl_8049D460
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_8049E57C
lbl_80334088:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80334098
// ----------------------------------------------------------------------------
asm void fn_80334098() {
    nofralloc
    lwz r3, lbl_8049E578
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_803340AC
// ----------------------------------------------------------------------------
asm void fn_803340AC() {
    nofralloc
    lwz r3, lbl_8049E578
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_803340C0
// ----------------------------------------------------------------------------
asm void fn_803340C0() {
    nofralloc
    lwz r3, lbl_8049E578
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_803340D4
// ----------------------------------------------------------------------------
asm void fn_803340D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    cmpwi r30, 0x0
    beq lbl_8033412C
    lwz r0, lbl_8049E578
    cmpwi r0, 0x0
    bne lbl_80334114
    li r0, 0x3
    stw r0, lbl_8049E578
    b lbl_80334154
lbl_80334114:
    cmpwi r0, 0x1
    bne lbl_80334124
    li r31, -0xa
    b lbl_80334154
lbl_80334124:
    li r31, -0x1a
    b lbl_80334154
lbl_8033412C:
    lwz r4, lbl_8049E578
    subi r0, r4, 0x3
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_80334148
    li r0, 0x0
    stw r0, lbl_8049E578
lbl_80334148:
    cmpwi r4, 0x0
    bne lbl_80334154
    li r31, -0x9
lbl_80334154:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

