#include "types.h"

// Translation unit: src/revolution/bte/gki/unk_80297DF4.cpp
// Total functions: 47

// Small Data symbols (@sda21)
extern float __OSInIPL;
extern float lbl_8049CED0;
extern float lbl_8049CF18;
extern float lbl_8049DE20;
extern float lbl_8049DE24;
extern float lbl_8049DE2C;
extern float lbl_8049DE3D;
extern float lbl_8049DE3E;
extern float lbl_8049DE40;
extern float lbl_8049DE44;
extern float lbl_8049DE48;
extern float lbl_8049DE4C;
extern float lbl_8049DE4E;
extern float lbl_8049DE4F;
extern float lbl_8049DE88;
extern float lbl_804A2410;
extern float lbl_804A2411;
extern float lbl_804A2412;
extern float lbl_804A2413;
extern float lbl_804A2414;
extern float lbl_804A2415;
extern float lbl_804A2416;

// Global data symbols (@ha/@l)
extern u8 jumptable_8036EB58[];
extern u8 jumptable_8036F240[];
extern u8 lbl_8036DE80[];
extern u8 lbl_8036E0E8[];
extern u8 lbl_8036E6CC[];
extern u8 lbl_8036E6E8[];
extern u8 lbl_8036E704[];
extern u8 lbl_8036E790[];
extern u8 lbl_8036E7A8[];
extern u8 lbl_8036E7E4[];
extern u8 lbl_8036E8DC[];
extern u8 lbl_8036ECAC[];
extern u8 lbl_8036ECD4[];
extern u8 lbl_8036F028[];
extern u8 lbl_8036F280[];
extern u8 lbl_8036F298[];
extern u8 lbl_8036F2AC[];
extern u8 lbl_8040FC00[];
extern u8 lbl_80410350[];
extern u8 lbl_80410458[];
extern u8 lbl_804104B8[];
extern u8 lbl_804109C0[];
extern u8 lbl_80411D68[];
extern u8 lbl_80411D88[];

// Forward declarations
extern void AIRegisterDMACallback();
extern void ARCFastOpen();
extern void ARCGetStartAddrInMem();
extern void ARCOpen();
extern void BTA_CleanUp();
extern void BTA_DmAddDevice();
extern void BTA_DmPinReply();
extern void BTA_DmRemoveDevice();
extern void BTA_DmSetDeviceName();
extern void BTA_DmSetVisibility();
extern void BTA_HhAddDev();
extern void BTA_HhEnable();
extern void BTA_HhRemoveDev();
extern void BTM_DeviceReset();
extern void BTM_PmRegister();
extern void BTM_RegisterForDeviceStatusNotif();
extern void BTM_RegisterForVSEvents();
extern void BTM_SetDefaultLinkPolicy();
extern void BTM_SetDefaultLinkSuperTout();
extern void BTM_SetDeviceClass();
extern void BTM_VendorSpecificCommand();
extern void BTM_WritePageTimeout();
extern void GKI_start_timer();
extern void OSCreateAlarm();
extern void OSDisableInterrupts();
extern void OSGetTime();
extern void OSPanic();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSSetPeriodicAlarm();
extern void SCFlushAsync();
extern void SCSetBtDeviceInfoArray();
extern void _restgpr_20();
extern void _restgpr_21();
extern void _restgpr_22();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_20();
extern void _savegpr_21();
extern void _savegpr_22();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btm_remove_acl();
extern void fn_802943B0();
extern void fn_802960D0();
extern void fn_80296350();
extern void fn_802979C8();
extern void fn_80297DF4();
extern void fn_80297E50();
extern void fn_80297EAC();
extern void fn_80297F04();
extern void fn_80297F34();
extern void fn_80298024();
extern void fn_80298278();
extern void fn_8029842C();
extern void fn_80298488();
extern void fn_80298584();
extern void fn_80298714();
extern void fn_80298868();
extern void fn_802989E8();
extern void fn_80298AC0();
extern void fn_80298BD8();
extern void fn_80298CF0();
extern void fn_80298E48();
extern void fn_80298F60();
extern void fn_80299078();
extern void fn_80299200();
extern void fn_80299398();
extern void fn_8029940C();
extern void fn_80299440();
extern void fn_80299994();
extern void fn_80299E98();
extern void fn_8029A1F0();
extern void fn_8029A32C();
extern void fn_8029A380();
extern void fn_8029A3DC();
extern void fn_8029A438();
extern void fn_8029A474();
extern void fn_8029A480();
extern void fn_8029A4F4();
extern void fn_8029A548();
extern void fn_8029A5A8();
extern void fn_8029A5BC();
extern void fn_8029A5D0();
extern void fn_8029A5E4();
extern void fn_8029AB68();
extern void fn_8029ABA4();
extern void fn_8029ABB4();
extern void fn_8029ABC4();
extern void fn_8029ABCC();
extern void memcmp();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// fn_80297DF4
// ----------------------------------------------------------------------------
asm void fn_80297DF4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8036E6CC@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r4, lbl_8036E6CC@l
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    addi r4, r4, lbl_8040FC00@l
    lwz r31, 0x6ec(r4)
    stw r30, 0x6ec(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80297E50
// ----------------------------------------------------------------------------
asm void fn_80297E50() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8036E6E8@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r4, lbl_8036E6E8@l
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    addi r4, r4, lbl_8040FC00@l
    lwz r31, 0x6f0(r4)
    stw r30, 0x6f0(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80297EAC
// ----------------------------------------------------------------------------
asm void fn_80297EAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    addi r4, r4, lbl_8040FC00@l
    stb r30, 0x6eb(r4)
    stb r31, 0x6ea(r4)
    bl OSRestoreInterrupts
    mr r3, r30
    mr r4, r31
    bl BTA_DmSetVisibility
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80297F04
// ----------------------------------------------------------------------------
asm void fn_80297F04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8036E704@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_8036E704@l
    opword 0x4CC63182
    bl fn_8029ABCC
    bl fn_80298584
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80297F34
// ----------------------------------------------------------------------------
asm void fn_80297F34() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    lbz r5, lbl_8049DE3D
    lbz r0, lbl_8049DE3E
    cmplw r0, r5
    bne lbl_80297F6C
    cmpwi r3, 0x0
    bne lbl_80297F74
lbl_80297F6C:
    cmpwi r3, 0x0
    bne lbl_80297F90
lbl_80297F74:
    addi r3, r31, 0x8b0
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, fn_80297F04@ha
    addi r3, r3, fn_80297F04@l
    bl BTM_DeviceReset
    b lbl_80298008
lbl_80297F90:
    subf r0, r5, r0
    li r3, 0x13
    cmpwi r0, 0x13
    bge lbl_80297FA4
    mr r3, r0
lbl_80297FA4:
    clrlwi r30, r3, 24
    stb r3, 0x8(r1)
    mulli r0, r5, 0xd
    addi r4, r31, 0x1a4
    addi r3, r1, 0x9
    mulli r29, r30, 0xd
    add r4, r4, r0
    mr r5, r29
    addi r4, r4, 0x1
    bl memcpy
    lbz r0, lbl_8049DE3D
    addi r3, r31, 0x8c0
    add r0, r0, r30
    stb r0, lbl_8049DE3D
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    addi r0, r29, 0x1
    subi r3, r3, 0x3b1
    lis r6, fn_80297F34@ha
    clrlwi r3, r3, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    addi r6, r6, fn_80297F34@l
    bl BTM_VendorSpecificCommand
lbl_80298008:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// ----------------------------------------------------------------------------
// fn_80298024
// ----------------------------------------------------------------------------
asm void fn_80298024() {
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x218(r1)
    stw r29, 0x214(r1)
    beq lbl_80298244
    lwz r4, lbl_8049DE44
    lwz r0, lbl_8049DE48
    cmplw r0, r4
    bne lbl_802980DC
    lbz r3, 0x1a4(r31)
    li r0, 0x0
    stb r0, lbl_8049DE3D
    li r0, 0x13
    cmpwi r3, 0x13
    stb r3, lbl_8049DE3E
    bge lbl_8029807C
    mr r0, r3
lbl_8029807C:
    clrlwi r30, r0, 24
    addi r4, r31, 0x1a4
    mulli r29, r30, 0xd
    stb r0, 0x108(r1)
    addi r3, r1, 0x109
    addi r4, r4, 0x1
    mr r5, r29
    bl memcpy
    lbz r0, lbl_8049DE3D
    addi r3, r31, 0x8c0
    add r0, r0, r30
    stb r0, lbl_8049DE3D
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    addi r0, r29, 0x1
    subi r3, r3, 0x3b1
    lis r6, fn_80297F34@ha
    clrlwi r3, r3, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x108
    addi r6, r6, fn_80297F34@l
    bl BTM_VendorSpecificCommand
    b lbl_8029825C
lbl_802980DC:
    subf r0, r4, r0
    li r3, 0xfb
    cmplwi r0, 0xfb
    bge lbl_802980F0
    mr r3, r0
lbl_802980F0:
    lwz r0, lbl_8049DE40
    clrlwi r30, r3, 24
    cmpwi cr6, r30, 0x0
    li r5, 0x0
    add r0, r0, r4
    extrwi r4, r0, 8, 16
    stb r0, 0x8(r1)
    extrwi r3, r0, 8, 8
    srwi r0, r0, 24
    stb r4, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    ble cr6, lbl_80298204
    cmpwi r30, 0x8
    subi r6, r30, 0x8
    ble lbl_802981C8
    li r4, 0x0
    blt cr6, lbl_8029814C
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r30, r0
    bgt lbl_8029814C
    li r4, 0x1
lbl_8029814C:
    cmpwi r4, 0x0
    beq lbl_802981C8
    addi r0, r6, 0x7
    lwz r4, lbl_8049DE44
    addi r3, r31, 0xe8
    addi r7, r1, 0x8
    srwi r0, r0, 3
    add r8, r3, r4
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_802981C8
lbl_80298178:
    add r4, r8, r5
    addi r5, r5, 0x8
    lbz r3, 0x8(r4)
    lbz r0, 0x9(r4)
    stb r3, 0x4(r7)
    lbz r3, 0xa(r4)
    stb r0, 0x5(r7)
    lbz r0, 0xb(r4)
    stb r3, 0x6(r7)
    lbz r3, 0xc(r4)
    stb r0, 0x7(r7)
    lbz r0, 0xd(r4)
    stb r3, 0x8(r7)
    lbz r3, 0xe(r4)
    stb r0, 0x9(r7)
    lbz r0, 0xf(r4)
    stb r3, 0xa(r7)
    stb r0, 0xb(r7)
    addi r7, r7, 0x8
    bdnz lbl_80298178
lbl_802981C8:
    lwz r4, lbl_8049DE44
    addi r6, r1, 0x8
    addi r3, r31, 0xe8
    subf r0, r5, r30
    add r6, r6, r5
    add r4, r3, r4
    mtctr r0
    cmpw r5, r30
    bge lbl_80298204
lbl_802981EC:
    add r3, r4, r5
    addi r5, r5, 0x1
    lbz r0, 0x8(r3)
    stb r0, 0x4(r6)
    addi r6, r6, 0x1
    bdnz lbl_802981EC
lbl_80298204:
    lwz r0, lbl_8049DE44
    addi r3, r31, 0x8d8
    add r4, r0, r30
    stw r4, lbl_8049DE44
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    addi r0, r30, 0x4
    subi r3, r3, 0x3b4
    lis r6, fn_80298024@ha
    clrlwi r3, r3, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    addi r6, r6, fn_80298024@l
    bl BTM_VendorSpecificCommand
    b lbl_8029825C
lbl_80298244:
    addi r3, r31, 0x8b0
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, fn_80297F04@ha
    addi r3, r3, fn_80297F04@l
    bl BTM_DeviceReset
lbl_8029825C:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

// ----------------------------------------------------------------------------
// fn_80298278
// ----------------------------------------------------------------------------
asm void fn_80298278() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x108(r1)
    mr r30, r3
    addi r3, r31, 0x8f8
    opword 0x4CC63182
    bl fn_8029ABCC
    cmpwi r30, 0x0
    beq lbl_802983FC
    lwz r3, lbl_8049DE48
    li r0, 0xfb
    cmplwi r3, 0xfb
    bge lbl_802982C0
    mr r0, r3
lbl_802982C0:
    lwz r5, lbl_8049DE40
    clrlwi r30, r0, 24
    cmpwi cr6, r30, 0x0
    li r6, 0x0
    extrwi r4, r5, 8, 16
    extrwi r3, r5, 8, 8
    srwi r0, r5, 24
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    ble cr6, lbl_802983C0
    cmpwi r30, 0x8
    subi r4, r30, 0x8
    ble lbl_8029838C
    li r5, 0x0
    blt cr6, lbl_80298318
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r30, r0
    bgt lbl_80298318
    li r5, 0x1
lbl_80298318:
    cmpwi r5, 0x0
    beq lbl_8029838C
    addi r0, r4, 0x7
    addi r7, r1, 0x8
    srwi r0, r0, 3
    addi r5, r31, 0xe8
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_8029838C
lbl_8029833C:
    add r4, r5, r6
    addi r6, r6, 0x8
    lbz r3, 0x8(r4)
    lbz r0, 0x9(r4)
    stb r3, 0x4(r7)
    lbz r3, 0xa(r4)
    stb r0, 0x5(r7)
    lbz r0, 0xb(r4)
    stb r3, 0x6(r7)
    lbz r3, 0xc(r4)
    stb r0, 0x7(r7)
    lbz r0, 0xd(r4)
    stb r3, 0x8(r7)
    lbz r3, 0xe(r4)
    stb r0, 0x9(r7)
    lbz r0, 0xf(r4)
    stb r3, 0xa(r7)
    stb r0, 0xb(r7)
    addi r7, r7, 0x8
    bdnz lbl_8029833C
lbl_8029838C:
    addi r5, r1, 0x8
    subf r0, r6, r30
    add r5, r5, r6
    addi r4, r31, 0xe8
    mtctr r0
    cmpw r6, r30
    bge lbl_802983C0
lbl_802983A8:
    add r3, r4, r6
    addi r6, r6, 0x1
    lbz r0, 0x8(r3)
    stb r0, 0x4(r5)
    addi r5, r5, 0x1
    bdnz lbl_802983A8
lbl_802983C0:
    stw r30, lbl_8049DE44
    mr r4, r30
    addi r3, r31, 0x8d8
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    addi r0, r30, 0x4
    subi r3, r3, 0x3b4
    lis r6, fn_80298024@ha
    clrlwi r3, r3, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    addi r6, r6, fn_80298024@l
    bl BTM_VendorSpecificCommand
    b lbl_80298414
lbl_802983FC:
    addi r3, r31, 0x8b0
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, fn_80297F04@ha
    addi r3, r3, fn_80297F04@l
    bl BTM_DeviceReset
lbl_80298414:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_8029842C
// ----------------------------------------------------------------------------
asm void fn_8029842C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8036E790@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_8036E790@l
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, lbl_8036E7A8@ha
    addi r3, r3, lbl_8036E7A8@l
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    lis r6, fn_80298278@ha
    subi r0, r3, 0x3b1
    li r4, 0x1
    clrlwi r3, r0, 16
    addi r6, r6, fn_80298278@l
    la r5, lbl_8049DE2C
    bl BTM_VendorSpecificCommand
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80298488
// ----------------------------------------------------------------------------
asm void fn_80298488() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    addi r3, r31, 0x938
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r8, r31, 0xe8
    lwz r0, __OSInIPL
    lbz r5, 0x3(r8)
    lbz r3, 0x7(r8)
    cmpwi r0, 0x0
    lbz r4, 0x2(r8)
    slwi r5, r5, 8
    lbz r0, 0x6(r8)
    slwi r3, r3, 8
    add r4, r5, r4
    lbz r6, 0x1(r8)
    add r0, r3, r0
    lbz r3, 0x5(r8)
    slwi r7, r4, 8
    lbz r4, 0xe8(r31)
    slwi r5, r0, 8
    lbz r0, 0x4(r8)
    add r3, r5, r3
    add r6, r7, r6
    slwi r5, r6, 8
    slwi r3, r3, 8
    add r4, r5, r4
    add r0, r3, r0
    stw r4, lbl_8049DE40
    stw r0, lbl_8049DE48
    beq lbl_80298544
    addi r3, r31, 0x954
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    lis r6, fn_8029842C@ha
    subi r0, r3, 0x3f6
    addi r5, r31, 0xdc
    clrlwi r3, r0, 16
    addi r6, r6, fn_8029842C@l
    li r4, 0x9
    bl BTM_VendorSpecificCommand
    b lbl_80298570
lbl_80298544:
    addi r3, r31, 0x928
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    lis r6, fn_80298278@ha
    subi r0, r3, 0x3b1
    li r4, 0x1
    clrlwi r3, r0, 16
    addi r6, r6, fn_80298278@l
    la r5, lbl_8049DE2C
    bl BTM_VendorSpecificCommand
lbl_80298570:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80298584
// ----------------------------------------------------------------------------
asm void fn_80298584() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_8036E7E4@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_8036E7E4@l
    stw r31, 0x1c(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r9, lbl_804A2410
    lbz r8, lbl_804A2411
    lbz r7, lbl_804A2412
    lbz r6, lbl_804A2413
    lbz r5, lbl_804A2414
    lbz r4, lbl_804A2415
    lbz r0, lbl_804A2416
    stb r9, 0xc(r1)
    stb r8, 0xd(r1)
    stb r7, 0xe(r1)
    stb r6, 0xf(r1)
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r0, 0xa(r1)
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r3, r1, 0xc
    bl BTA_DmSetDeviceName
    addi r3, r1, 0x8
    bl BTM_SetDeviceClass
    lis r3, ARCOpen@ha
    addi r3, r3, ARCOpen@l
    bl BTM_RegisterForVSEvents
    lis r3, ARCFastOpen@ha
    addi r3, r3, ARCFastOpen@l
    bl BTM_RegisterForDeviceStatusNotif
    lis r5, fn_8029A1F0@ha
    addi r4, r31, 0x70a
    addi r5, r5, fn_8029A1F0@l
    li r3, 0x3
    bl BTM_PmRegister
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl BTM_WritePageTimeout
    li r3, 0x5
    bl BTM_SetDefaultLinkPolicy
    li r3, 0xc80
    bl BTM_SetDefaultLinkSuperTout
    mr r29, r31
    addi r30, r31, 0x124
    li r28, 0x0
lbl_80298658:
    lbz r0, 0x13d(r29)
    cmplwi r0, 0x1
    bne lbl_8029866C
    mr r3, r30
    bl fn_80298714
lbl_8029866C:
    addi r28, r28, 0x1
    addi r30, r30, 0x60
    cmpwi r28, 0xa
    addi r29, r29, 0x60
    blt lbl_80298658
    mr r30, r31
    addi r29, r31, 0x4e4
    li r28, 0x0
lbl_8029868C:
    lbz r0, 0x4fd(r30)
    cmplwi r0, 0x1
    bne lbl_802986A0
    mr r3, r29
    bl fn_80298714
lbl_802986A0:
    addi r28, r28, 0x1
    addi r29, r29, 0x60
    cmpwi r28, 0x6
    addi r30, r30, 0x60
    blt lbl_8029868C
    bl OSDisableInterrupts
    li r0, 0x3
    li r30, 0x1
    stb r0, 0x708(r31)
    stw r30, lbl_8049DE24
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    li r0, 0x0
    addi r4, r4, lbl_8040FC00@l
    stb r0, 0x6eb(r4)
    stb r30, 0x6ea(r4)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x1
    bl BTA_DmSetVisibility
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
// fn_80298714
// ----------------------------------------------------------------------------
asm void fn_80298714() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x28(r1)
    lis r30, lbl_8040FC00@ha
    addi r30, r30, lbl_8040FC00@l
    stw r29, 0x24(r1)
    mr r29, r3
    stw r28, 0x20(r1)
    bl OSDisableInterrupts
    mr r28, r3
    mr r3, r29
    bl fn_802989E8
    mr r29, r3
    addi r4, r3, 0x46
    li r5, 0x0
    li r6, 0x0
    addi r3, r3, 0x40
    bl BTA_DmAddDevice
    mr r0, r3
    addi r3, r31, 0x97c
    clrlwi r4, r0, 24
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r29
    addi r4, r31, 0x268
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802987BC
    mr r3, r29
    addi r4, r31, 0x27c
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298800
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80298800
lbl_802987BC:
    addi r0, r31, 0x0
    li r3, 0xd9
    sth r3, 0x10(r1)
    addi r3, r31, 0x998
    stw r0, 0x14(r1)
    opword 0x4CC63182
    bl fn_8029ABCC
    lwz r4, 0x10(r1)
    addi r3, r29, 0x40
    lwz r0, 0x14(r1)
    addi r7, r1, 0x8
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    lhz r4, 0x5e(r29)
    lbz r5, 0x57(r29)
    lbz r6, 0x58(r29)
    bl BTA_HhAddDev
lbl_80298800:
    lbz r0, 0x5b(r29)
    cmpwi r0, 0x0
    beq lbl_80298824
    cmplwi r0, 0x4
    beq lbl_80298824
    cmplwi r0, 0x2
    beq lbl_80298824
    cmplwi r0, 0x5
    bne lbl_80298834
lbl_80298824:
    lbz r3, 0x12(r30)
    addi r0, r3, 0x1
    stb r0, 0x12(r30)
    b lbl_80298840
lbl_80298834:
    lbz r3, 0x13(r30)
    addi r0, r3, 0x1
    stb r0, 0x13(r30)
lbl_80298840:
    mr r3, r28
    bl OSRestoreInterrupts
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
// fn_80298868
// ----------------------------------------------------------------------------
asm void fn_80298868() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x18(r1)
    lis r30, lbl_8040FC00@ha
    addi r30, r30, lbl_8040FC00@l
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    bl OSDisableInterrupts
    mr r28, r3
    addi r3, r31, 0x9a8
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r29
    bl fn_802989E8
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802989C0
    lbz r4, 0x56(r29)
    addi r3, r31, 0x9c0
    lbz r5, 0x40(r29)
    lbz r6, 0x41(r29)
    lbz r7, 0x42(r29)
    lbz r8, 0x43(r29)
    lbz r9, 0x44(r29)
    lbz r10, 0x45(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r3, r31, 0x9f8
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r29
    addi r4, r31, 0x268
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80298930
    mr r3, r29
    addi r4, r31, 0x27c
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298954
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80298954
lbl_80298930:
    addi r3, r31, 0xa1c
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x56(r29)
    addi r3, r31, 0xa30
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r3, 0x56(r29)
    bl BTA_HhRemoveDev
lbl_80298954:
    addi r3, r29, 0x40
    bl BTA_DmRemoveDevice
    mr r0, r3
    addi r3, r31, 0xa40
    clrlwi r4, r0, 24
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r3, 0x5b(r29)
    cmpwi r3, 0x0
    beq lbl_80298994
    cmplwi r3, 0x2
    beq lbl_80298994
    addi r0, r3, 0xfc
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_802989A4
lbl_80298994:
    lbz r3, 0x12(r30)
    subi r0, r3, 0x1
    stb r0, 0x12(r30)
    b lbl_802989B0
lbl_802989A4:
    lbz r3, 0x13(r30)
    subi r0, r3, 0x1
    stb r0, 0x13(r30)
lbl_802989B0:
    mr r3, r29
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_802989C0:
    mr r3, r28
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
// fn_802989E8
// ----------------------------------------------------------------------------
asm void fn_802989E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_8040FC00@ha
    mr r26, r3
    addi r29, r29, lbl_8040FC00@l
    li r28, 0x0
    bl OSDisableInterrupts
    mr r27, r3
    addi r31, r29, 0x124
    li r30, 0x0
lbl_80298A1C:
    mr r3, r31
    mr r4, r26
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298A44
    mulli r0, r30, 0x60
    add r3, r29, r0
    addi r28, r3, 0xe4
    b lbl_80298A54
lbl_80298A44:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0xa
    blt lbl_80298A1C
lbl_80298A54:
    cmpwi r28, 0x0
    bne lbl_80298A9C
    addi r31, r29, 0x4e4
    li r30, 0x0
lbl_80298A64:
    mr r3, r31
    mr r4, r26
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298A8C
    mulli r0, r30, 0x60
    add r3, r29, r0
    addi r28, r3, 0x4a4
    b lbl_80298A9C
lbl_80298A8C:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0x6
    blt lbl_80298A64
lbl_80298A9C:
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    mr r3, r28
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80298AC0
// ----------------------------------------------------------------------------
asm void fn_80298AC0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8040FC00@ha
    mr r27, r3
    addi r30, r30, lbl_8040FC00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_80298AF0:
    lwz r3, 0x1c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298BA8
    mulli r28, r31, 0xc
    lwz r3, 0x14(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r4, r30, r28
    addi r31, r4, 0x1c
    lwz r4, 0x1c(r4)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80298BB8
    add r28, r30, r28
    li r5, 0x6
    lwz r0, 0x24(r28)
    lwz r3, 0x20(r28)
    stw r0, 0x8(r3)
    lwz r4, 0x18(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298B7C
    lwz r0, 0x20(r28)
    stw r0, 0x18(r30)
    b lbl_80298B88
lbl_80298B7C:
    lwz r0, 0x20(r28)
    lwz r3, 0x24(r28)
    stw r0, 0x4(r3)
lbl_80298B88:
    lwz r3, 0x14(r30)
    li r0, 0x0
    stw r3, 0x24(r28)
    lwz r3, 0x14(r30)
    stw r31, 0x4(r3)
    stw r31, 0x14(r30)
    stw r0, 0x20(r28)
    b lbl_80298BB8
lbl_80298BA8:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0x6
    blt lbl_80298AF0
lbl_80298BB8:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80298BD8
// ----------------------------------------------------------------------------
asm void fn_80298BD8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8040FC00@ha
    mr r27, r3
    addi r30, r30, lbl_8040FC00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_80298C08:
    lwz r3, 0x1c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298CC0
    mulli r28, r31, 0xc
    lwz r3, 0x18(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r4, r30, r28
    addi r31, r4, 0x1c
    lwz r4, 0x1c(r4)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80298CD0
    add r28, r30, r28
    li r5, 0x6
    lwz r0, 0x20(r28)
    lwz r3, 0x24(r28)
    stw r0, 0x4(r3)
    lwz r4, 0x14(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298C94
    lwz r0, 0x24(r28)
    stw r0, 0x14(r30)
    b lbl_80298CA0
lbl_80298C94:
    lwz r0, 0x24(r28)
    lwz r3, 0x20(r28)
    stw r0, 0x8(r3)
lbl_80298CA0:
    lwz r3, 0x18(r30)
    li r0, 0x0
    stw r3, 0x20(r28)
    lwz r3, 0x18(r30)
    stw r31, 0x8(r3)
    stw r31, 0x18(r30)
    stw r0, 0x24(r28)
    b lbl_80298CD0
lbl_80298CC0:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0x6
    blt lbl_80298C08
lbl_80298CD0:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80298CF0
// ----------------------------------------------------------------------------
asm void fn_80298CF0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r29, lbl_8040FC00@ha
    mr r25, r3
    addi r29, r29, lbl_8040FC00@l
    bl OSDisableInterrupts
    mr r27, r3
    mr r31, r29
    addi r30, r29, 0x1c
    li r28, 0x0
lbl_80298D24:
    lwz r3, 0x1c(r31)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r23, r3, 0x40
    mr r3, r23
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298E14
    lwz r22, 0x14(r29)
    mr r26, r22
    b lbl_80298E0C
lbl_80298D50:
    lwz r24, 0x0(r26)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r3, r24, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80298E08
    lbz r0, 0x59(r24)
    cmplwi r0, 0x1
    bgt lbl_80298E08
    lwz r3, 0x0(r22)
    mr r4, r23
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298DAC
    lwz r0, 0x8(r22)
    cmplw r26, r0
    beq lbl_80298E14
    lwz r0, 0x24(r31)
    stw r0, 0x14(r29)
    b lbl_80298DB8
lbl_80298DAC:
    lwz r0, 0x24(r31)
    lwz r3, 0x20(r31)
    stw r0, 0x8(r3)
lbl_80298DB8:
    lwz r0, 0x20(r31)
    lwz r3, 0x24(r31)
    stw r0, 0x4(r3)
    lwz r0, 0x14(r29)
    cmplw r26, r0
    beq lbl_80298DEC
    lwz r0, 0x4(r26)
    stw r0, 0x20(r31)
    stw r26, 0x24(r31)
    lwz r3, 0x4(r26)
    stw r30, 0x8(r3)
    stw r30, 0x4(r26)
    b lbl_80298E14
lbl_80298DEC:
    stw r26, 0x20(r31)
    lwz r0, 0x8(r26)
    stw r0, 0x24(r31)
    lwz r3, 0x8(r26)
    stw r30, 0x4(r3)
    stw r30, 0x8(r26)
    b lbl_80298E14
lbl_80298E08:
    lwz r26, 0x8(r26)
lbl_80298E0C:
    cmpwi r26, 0x0
    bne lbl_80298D50
lbl_80298E14:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0x6
    addi r31, r31, 0xc
    blt lbl_80298D24
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80298E48
// ----------------------------------------------------------------------------
asm void fn_80298E48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8040FC00@ha
    mr r27, r3
    addi r30, r30, lbl_8040FC00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_80298E78:
    lwz r3, 0x6c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298F30
    mulli r28, r31, 0xc
    lwz r3, 0x64(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r4, r30, r28
    addi r31, r4, 0x6c
    lwz r4, 0x6c(r4)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80298F40
    add r28, r30, r28
    li r5, 0x6
    lwz r0, 0x74(r28)
    lwz r3, 0x70(r28)
    stw r0, 0x8(r3)
    lwz r4, 0x68(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80298F04
    lwz r0, 0x70(r28)
    stw r0, 0x68(r30)
    b lbl_80298F10
lbl_80298F04:
    lwz r0, 0x70(r28)
    lwz r3, 0x74(r28)
    stw r0, 0x4(r3)
lbl_80298F10:
    lwz r3, 0x64(r30)
    li r0, 0x0
    stw r3, 0x74(r28)
    lwz r3, 0x64(r30)
    stw r31, 0x4(r3)
    stw r31, 0x64(r30)
    stw r0, 0x70(r28)
    b lbl_80298F40
lbl_80298F30:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0xa
    blt lbl_80298E78
lbl_80298F40:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80298F60
// ----------------------------------------------------------------------------
asm void fn_80298F60() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8040FC00@ha
    mr r27, r3
    addi r30, r30, lbl_8040FC00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_80298F90:
    lwz r3, 0x6c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80299048
    mulli r28, r31, 0xc
    lwz r3, 0x68(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r4, r30, r28
    addi r31, r4, 0x6c
    lwz r4, 0x6c(r4)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80299058
    add r28, r30, r28
    li r5, 0x6
    lwz r0, 0x70(r28)
    lwz r3, 0x74(r28)
    stw r0, 0x4(r3)
    lwz r4, 0x64(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029901C
    lwz r0, 0x74(r28)
    stw r0, 0x64(r30)
    b lbl_80299028
lbl_8029901C:
    lwz r0, 0x74(r28)
    lwz r3, 0x70(r28)
    stw r0, 0x8(r3)
lbl_80299028:
    lwz r3, 0x68(r30)
    li r0, 0x0
    stw r3, 0x70(r28)
    lwz r3, 0x68(r30)
    stw r31, 0x8(r3)
    stw r31, 0x68(r30)
    stw r0, 0x74(r28)
    b lbl_80299058
lbl_80299048:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0xa
    blt lbl_80298F90
lbl_80299058:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80299078
// ----------------------------------------------------------------------------
asm void fn_80299078() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r28, lbl_8040FC00@ha
    mr r24, r3
    addi r28, r28, lbl_8040FC00@l
    bl OSDisableInterrupts
    mr r26, r3
    mr r30, r28
    addi r29, r28, 0x6c
    li r27, 0x0
    lis r31, lbl_8036E0E8@ha
lbl_802990B0:
    lwz r3, 0x6c(r30)
    addi r4, r24, 0x40
    li r5, 0x6
    addi r21, r3, 0x40
    mr r3, r21
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802991CC
    lwz r20, 0x64(r28)
    lwz r23, lbl_8049CED0
    mr r25, r20
    b lbl_802991C4
lbl_802990E0:
    lwz r22, 0x0(r25)
    addi r4, r24, 0x40
    li r5, 0x6
    addi r3, r22, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802991C0
    lbz r0, 0x59(r22)
    cmplwi r0, 0x1
    beq lbl_80299130
    cmpwi r0, 0x0
    beq lbl_80299130
    mr r3, r22
    addi r4, r31, lbl_8036E0E8@l
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802991C0
    cmpwi r23, 0x0
    beq lbl_802991C0
lbl_80299130:
    lwz r3, 0x0(r20)
    mr r4, r21
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80299164
    lwz r0, 0x8(r20)
    cmplw r25, r0
    beq lbl_802991CC
    lwz r0, 0x74(r30)
    stw r0, 0x64(r28)
    b lbl_80299170
lbl_80299164:
    lwz r0, 0x74(r30)
    lwz r3, 0x70(r30)
    stw r0, 0x8(r3)
lbl_80299170:
    lwz r0, 0x70(r30)
    lwz r3, 0x74(r30)
    stw r0, 0x4(r3)
    lwz r0, 0x64(r28)
    cmplw r25, r0
    beq lbl_802991A4
    lwz r0, 0x4(r25)
    stw r0, 0x70(r30)
    stw r25, 0x74(r30)
    lwz r3, 0x4(r25)
    stw r29, 0x8(r3)
    stw r29, 0x4(r25)
    b lbl_802991CC
lbl_802991A4:
    stw r25, 0x70(r30)
    lwz r0, 0x8(r25)
    stw r0, 0x74(r30)
    lwz r3, 0x8(r25)
    stw r29, 0x4(r3)
    stw r29, 0x8(r25)
    b lbl_802991CC
lbl_802991C0:
    lwz r25, 0x8(r25)
lbl_802991C4:
    cmpwi r25, 0x0
    bne lbl_802990E0
lbl_802991CC:
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0xa
    addi r30, r30, 0xc
    blt lbl_802990B0
    mr r3, r26
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80299200
// ----------------------------------------------------------------------------
asm void fn_80299200() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r29, lbl_8040FC00@ha
    mr r25, r3
    addi r29, r29, lbl_8040FC00@l
    bl OSDisableInterrupts
    mr r27, r3
    mr r31, r29
    addi r30, r29, 0x6c
    li r28, 0x0
    li r24, 0x0
lbl_80299238:
    lwz r3, 0x6c(r31)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r22, r3, 0x40
    mr r3, r22
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80299364
    lwz r21, 0x64(r29)
    mr r26, r21
    b lbl_8029935C
lbl_80299264:
    lwz r23, 0x0(r26)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r3, r23, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80299358
    lbz r0, 0x59(r23)
    cmpwi r0, 0x0
    beq lbl_80299298
    lwz r0, 0x68(r29)
    cmplw r26, r0
    bne lbl_80299358
lbl_80299298:
    lwz r3, 0x0(r21)
    mr r4, r22
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802992CC
    lwz r0, 0x8(r21)
    cmplw r26, r0
    beq lbl_80299364
    lwz r0, 0x74(r31)
    stw r0, 0x64(r29)
    b lbl_802992D8
lbl_802992CC:
    lwz r0, 0x74(r31)
    lwz r3, 0x70(r31)
    stw r0, 0x8(r3)
lbl_802992D8:
    lwz r0, 0x70(r31)
    lwz r3, 0x74(r31)
    stw r0, 0x4(r3)
    lwz r0, 0x68(r29)
    cmplw r26, r0
    bne lbl_80299314
    lwz r3, 0x0(r26)
    lbz r0, 0x59(r3)
    cmpwi r0, 0x0
    beq lbl_80299314
    stw r26, 0x70(r31)
    stw r24, 0x74(r31)
    stw r30, 0x8(r26)
    stw r30, 0x68(r29)
    b lbl_80299364
lbl_80299314:
    lwz r0, 0x64(r29)
    cmplw r26, r0
    beq lbl_8029933C
    lwz r0, 0x4(r26)
    stw r0, 0x70(r31)
    stw r26, 0x74(r31)
    lwz r3, 0x4(r26)
    stw r30, 0x8(r3)
    stw r30, 0x4(r26)
    b lbl_80299364
lbl_8029933C:
    stw r26, 0x70(r31)
    lwz r0, 0x8(r26)
    stw r0, 0x74(r31)
    lwz r3, 0x8(r26)
    stw r30, 0x4(r3)
    stw r30, 0x8(r26)
    b lbl_80299364
lbl_80299358:
    lwz r26, 0x8(r26)
lbl_8029935C:
    cmpwi r26, 0x0
    bne lbl_80299264
lbl_80299364:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0xa
    addi r31, r31, 0xc
    blt lbl_80299238
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80299398
// ----------------------------------------------------------------------------
asm void fn_80299398() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    bl OSDisableInterrupts
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_802993F0
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    bne lbl_802993F0
    lbz r0, 0xf(r31)
    cmplwi r0, 0x4
    bne lbl_802993F0
    lbz r0, 0x10(r31)
    cmplwi r0, 0x6
    bne lbl_802993F0
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802993F8
lbl_802993F0:
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802993F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029940C
// ----------------------------------------------------------------------------
asm void fn_8029940C() {
    nofralloc
    cmpwi r3, 0x0
    lis r3, lbl_8040FC00@ha
    addi r3, r3, lbl_8040FC00@l
    bne lbl_8029942C
    li r0, 0x0
    stw r0, lbl_8049DE20
    stb r0, 0x708(r3)
    blr
lbl_8029942C:
    lis r3, lbl_8036E8DC@ha
    addi r3, r3, lbl_8036E8DC@l
    opword 0x4CC63182
    b fn_8029ABCC
    blr
}

// ----------------------------------------------------------------------------
// fn_80299440
// ----------------------------------------------------------------------------
asm void fn_80299440() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lis r30, lbl_8036DE80@ha
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    mr r25, r3
    addi r30, r30, lbl_8036DE80@l
    mr r28, r4
    addi r29, r31, 0x0
    addi r3, r30, 0xa7c
    opword 0x4CC63182
    bl fn_8029ABCC
    cmplwi r25, 0x8
    bgt lbl_8029997C
    lis r3, jumptable_8036EB58@ha
    slwi r0, r25, 2
    addi r3, r3, jumptable_8036EB58@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r4, r28
    addi r3, r29, 0x702
    li r5, 0x6
    bl memcpy
    addi r3, r30, 0xa98
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x702(r29)
    addi r3, r30, 0xaa8
    lbz r5, 0x703(r29)
    lbz r6, 0x704(r29)
    lbz r7, 0x705(r29)
    lbz r8, 0x706(r29)
    lbz r9, 0x707(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r4, fn_8029A5E4@ha
    li r3, 0x12
    addi r4, r4, fn_8029A5E4@l
    bl BTA_HhEnable
    li r0, 0x1
    addi r3, r29, 0x710
    stb r0, 0xf(r29)
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_80296350@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_80296350@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r29, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0xa
    bl OSSetPeriodicAlarm
    li r0, 0x2
    stb r0, 0x708(r29)
    b lbl_8029997C
    addi r3, r30, 0xad0
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, fn_8029940C@ha
    addi r3, r3, fn_8029940C@l
    bl BTA_CleanUp
    b lbl_8029997C
    addi r3, r30, 0xae4
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x6e9(r29)
    cmpwi r0, 0x0
    bne lbl_80299584
    addi r29, r29, 0x702
    b lbl_80299588
lbl_80299584:
    mr r29, r28
lbl_80299588:
    addi r27, r31, 0x858
    lbz r0, 0x5b(r27)
    cmplwi r0, 0x4
    bne lbl_802995A8
    addi r3, r27, 0x40
    bl fn_80298868
    addi r3, r27, 0x40
    bl btm_remove_acl
lbl_802995A8:
    addi r3, r31, 0x858
    li r0, 0x1
    stb r0, 0x5a(r3)
    bl OSDisableInterrupts
    lbz r0, 0x5(r29)
    stb r0, 0x30(r1)
    lbz r0, 0x4(r29)
    stb r0, 0x31(r1)
    lbz r0, 0x3(r29)
    stb r0, 0x32(r1)
    lbz r0, 0x2(r29)
    stb r0, 0x33(r1)
    lbz r0, 0x1(r29)
    stb r0, 0x34(r1)
    lbz r0, 0x0(r29)
    stb r0, 0x35(r1)
    bl OSRestoreInterrupts
    mr r3, r28
    addi r6, r1, 0x30
    li r4, 0x1
    li r5, 0x6
    bl BTA_DmPinReply
    b lbl_8029997C
    addi r3, r30, 0xaf8
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x0(r28)
    addi r3, r30, 0xb10
    lbz r5, 0x1(r28)
    lbz r6, 0x2(r28)
    lbz r7, 0x3(r28)
    lbz r8, 0x4(r28)
    lbz r9, 0x5(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x106(r28)
    addi r3, r30, 0xb38
    stw r0, 0x8(r1)
    lbz r0, 0x107(r28)
    stw r0, 0xc(r1)
    lbz r0, 0x108(r28)
    stw r0, 0x10(r1)
    lbz r0, 0x109(r28)
    stw r0, 0x14(r1)
    lbz r0, 0x10a(r28)
    stw r0, 0x18(r1)
    lbz r0, 0x10b(r28)
    stw r0, 0x1c(r1)
    lbz r0, 0x10c(r28)
    stw r0, 0x20(r1)
    lbz r0, 0x10d(r28)
    stw r0, 0x24(r1)
    lbz r0, 0x10e(r28)
    stw r0, 0x28(r1)
    lbz r4, 0xff(r28)
    lbz r5, 0x100(r28)
    lbz r6, 0x101(r28)
    lbz r7, 0x102(r28)
    lbz r8, 0x103(r28)
    lbz r9, 0x104(r28)
    lbz r10, 0x105(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x10f(r28)
    addi r3, r30, 0xb94
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x10f(r28)
    cmpwi r0, 0x0
    beq lbl_8029997C
    mr r3, r28
    bl fn_802989E8
    addi r27, r31, 0x858
    mr r26, r3
    mr r4, r28
    li r5, 0x6
    addi r3, r27, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802996FC
    li r0, 0xc
    cmpwi r26, 0x0
    stb r0, 0x59(r27)
    bne lbl_802996FC
    mr r26, r27
lbl_802996FC:
    addi r3, r26, 0x46
    addi r4, r28, 0xff
    li r5, 0x10
    bl memcpy
    b lbl_8029997C
    addi r3, r30, 0xba4
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029997C
    addi r3, r30, 0xbbc
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x0(r28)
    addi r3, r30, 0xbd0
    lbz r5, 0x1(r28)
    lbz r6, 0x2(r28)
    lbz r7, 0x3(r28)
    lbz r8, 0x4(r28)
    lbz r9, 0x5(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r28
    bl fn_802989E8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_80299784
    addi r27, r31, 0x858
    mr r3, r28
    addi r4, r27, 0x40
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80299784
    mr r26, r27
lbl_80299784:
    cmpwi r26, 0x0
    beq lbl_802997A4
    bl OSDisableInterrupts
    addi r4, r31, 0x0
    lbz r27, 0x6e5(r4)
    bl OSRestoreInterrupts
    cmplwi r27, 0x4
    bne lbl_802997E4
lbl_802997A4:
    mr r3, r28
    bl btm_remove_acl
    cmpwi r26, 0x0
    addi r3, r30, 0xbfc
    addi r4, r30, 0xc30
    bne lbl_802997C0
    addi r4, r30, 0xc24
lbl_802997C0:
    lbz r5, 0x0(r28)
    lbz r6, 0x1(r28)
    lbz r7, 0x2(r28)
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029997C
lbl_802997E4:
    lbz r0, 0x59(r26)
    li r3, 0x3
    cmplwi r0, 0x2
    bne lbl_802997F8
    li r3, 0xc
lbl_802997F8:
    stb r3, 0x59(r26)
    lbz r3, 0x6e5(r29)
    addi r0, r3, 0x1
    stb r0, 0x6e5(r29)
    b lbl_8029997C
    addi r3, r30, 0xc40
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x0(r28)
    addi r3, r30, 0xbd0
    lbz r5, 0x1(r28)
    lbz r6, 0x2(r28)
    lbz r7, 0x3(r28)
    lbz r8, 0x4(r28)
    lbz r9, 0x5(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x6(r28)
    addi r3, r30, 0xc58
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r28
    bl fn_802989E8
    cmpwi r3, 0x0
    beq lbl_802998FC
    li r0, 0x1
    addi r5, r31, 0x858
    stb r0, 0x59(r3)
    addi r3, r5, 0x40
    mr r4, r28
    li r5, 0x6
    lbz r6, 0x6e5(r29)
    subi r0, r6, 0x1
    stb r0, 0x6e5(r29)
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80299894
    li r0, 0xff
    stb r0, 0xc(r29)
lbl_80299894:
    lbz r0, 0x6(r28)
    cmplwi r0, 0x15
    bne lbl_8029993C
    addi r27, r31, 0x8b8
    li r25, 0x0
    li r31, 0x1
lbl_802998AC:
    clrlwi r3, r25, 24
    mr r4, r28
    addi r0, r3, 0xa
    li r5, 0x6
    mulli r0, r0, 0x46
    add r3, r27, r0
    addi r26, r3, 0x1
    mr r3, r26
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802998EC
    mr r3, r26
    li r4, 0x0
    li r5, 0x46
    bl memset
    stb r31, lbl_8049DE4C
lbl_802998EC:
    addi r25, r25, 0x1
    cmplwi r25, 0x4
    blt lbl_802998AC
    b lbl_8029993C
lbl_802998FC:
    addi r3, r31, 0x858
    mr r4, r28
    addi r3, r3, 0x40
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80299930
    lbz r3, 0x6e5(r29)
    li r0, 0xff
    stb r0, 0xc(r29)
    subi r0, r3, 0x1
    stb r0, 0x6e5(r29)
    b lbl_8029993C
lbl_80299930:
    addi r3, r30, 0xc64
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_8029993C:
    lbz r0, 0x6e5(r29)
    cmplwi r0, 0xfa
    blt lbl_8029997C
    addi r3, r30, 0xc80
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    stb r0, 0x6e5(r29)
    b lbl_8029997C
    addi r3, r30, 0xca4
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029997C
    addi r3, r30, 0xcc0
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_8029997C:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_80299994
// ----------------------------------------------------------------------------
asm void fn_80299994() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x2
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_8036DE80@ha
    addi r29, r29, lbl_8036DE80@l
    stw r28, 0x20(r1)
    mr r28, r4
    beq lbl_80299A90
    bge lbl_802999D8
    cmpwi r3, 0x0
    beq lbl_802999E8
    bge lbl_80299A80
    b lbl_80299B70
lbl_802999D8:
    cmpwi r3, 0x4
    beq lbl_80299B18
    bge lbl_80299B70
    b lbl_80299AF8
lbl_802999E8:
    lbz r0, 0x7(r4)
    addi r3, r29, 0xcfc
    stw r0, 0x8(r1)
    lbz r0, 0x8(r4)
    stw r0, 0xc(r1)
    lbz r0, 0x9(r4)
    extsb r0, r0
    stw r0, 0x10(r1)
    lbz r4, 0x0(r4)
    lbz r5, 0x1(r28)
    lbz r6, 0x2(r28)
    lbz r7, 0x3(r28)
    lbz r8, 0x4(r28)
    lbz r9, 0x5(r28)
    lbz r10, 0x6(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r30, lbl_8040FC00@ha
    lbz r0, 0x9(r28)
    addi r30, r30, lbl_8040FC00@l
    lbz r3, 0x6e7(r30)
    stb r0, lbl_8049DE4E
    cmplwi r3, 0x1
    beq lbl_80299A64
    cmpwi r3, 0x0
    bne lbl_80299A6C
    bl OSDisableInterrupts
    lbz r29, 0x6e5(r30)
    bl OSRestoreInterrupts
    cmplwi r29, 0x3
    bge lbl_80299A6C
lbl_80299A64:
    li r0, 0x1900
    b lbl_80299A74
lbl_80299A6C:
    lis r3, 0x1
    addi r0, r3, -0x8000
lbl_80299A74:
    clrlwi r3, r0, 16
    bl BTM_WritePageTimeout
    b lbl_80299B7C
lbl_80299A80:
    addi r3, r29, 0xd40
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_80299B7C
lbl_80299A90:
    lis r30, lbl_80410350@ha
    li r5, 0x6
    addi r3, r30, lbl_80410350@l
    bl memcpy
    addi r31, r30, lbl_80410350@l
    addi r4, r28, 0x6
    addi r3, r31, 0x6
    li r5, 0x40
    bl memcpy
    lbz r4, lbl_8049DE4F
    addi r3, r29, 0xd54
    lwz r5, 0x100(r28)
    addi r10, r31, 0x6
    addi r0, r4, 0x1
    stw r5, 0x100(r31)
    stb r0, lbl_8049DE4F
    stw r5, 0x8(r1)
    lbz r4, lbl_80410350@l(r30)
    lbz r5, 0x1(r31)
    lbz r6, 0x2(r31)
    lbz r7, 0x3(r31)
    lbz r8, 0x4(r31)
    lbz r9, 0x5(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_80299B7C
lbl_80299AF8:
    addi r3, r29, 0xd94
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, lbl_8040FC00@ha
    li r0, 0x4
    addi r3, r3, lbl_8040FC00@l
    stb r0, 0xc(r3)
    b lbl_80299B7C
lbl_80299B18:
    addi r3, r29, 0xda8
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    addi r5, r29, 0x200
    subi r0, r3, 0x3b4
    li r4, 0x1c
    clrlwi r3, r0, 16
    li r6, 0x0
    bl BTM_VendorSpecificCommand
    li r0, 0x0
    lis r3, lbl_80410350@ha
    stb r0, lbl_8049DE4F
    addi r3, r3, lbl_80410350@l
    li r4, 0x0
    li r5, 0x108
    bl memset
    lis r3, lbl_8040FC00@ha
    li r0, 0x4
    addi r3, r3, lbl_8040FC00@l
    stb r0, 0xc(r3)
    b lbl_80299B7C
lbl_80299B70:
    addi r3, r29, 0xdb8
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_80299B7C:
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
// ARCOpen
// ----------------------------------------------------------------------------
asm void ARCOpen() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lis r28, lbl_8040FC00@ha
    addi r28, r28, lbl_8040FC00@l
    lbz r0, 0x0(r4)
    cmpwi r0, 0xa
    beq lbl_80299E08
    bge lbl_80299BE8
    cmpwi r0, 0x8
    beq lbl_80299BF4
    bge lbl_80299C94
    b lbl_80299E28
lbl_80299BE8:
    cmpwi r0, 0x10
    beq lbl_80299E14
    b lbl_80299E28
lbl_80299BF4:
    addi r3, r31, 0xde8
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    lbz r0, 0xc(r28)
    cmpwi r0, 0x0
    bne lbl_80299C40
    lbz r0, 0xd(r28)
    cmpwi r0, 0x0
    bne lbl_80299C40
    lbz r0, 0xf(r28)
    cmplwi r0, 0x4
    bne lbl_80299C40
    lbz r0, 0x10(r28)
    cmplwi r0, 0x6
    bne lbl_80299C40
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_80299C48
lbl_80299C40:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_80299C48:
    cmpwi r0, 0x0
    bne lbl_80299E28
    bl OSDisableInterrupts
    lwz r31, 0x0(r28)
    bl OSRestoreInterrupts
    cmpwi r31, 0x0
    beq lbl_80299C7C
    mr r12, r31
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_80299E28
lbl_80299C7C:
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    li r6, 0x0
    bl GKI_start_timer
    b lbl_80299E28
lbl_80299C94:
    addi r3, r31, 0xe00
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    lwz r29, 0x8(r28)
    mr r30, r3
    bl OSDisableInterrupts
    lbz r0, 0xc(r28)
    cmpwi r0, 0x0
    bne lbl_80299CEC
    lbz r0, 0xd(r28)
    cmpwi r0, 0x0
    bne lbl_80299CEC
    lbz r0, 0xf(r28)
    cmplwi r0, 0x4
    bne lbl_80299CEC
    lbz r0, 0x10(r28)
    cmplwi r0, 0x6
    bne lbl_80299CEC
    bl OSRestoreInterrupts
    li r4, 0x0
    b lbl_80299CF4
lbl_80299CEC:
    bl OSRestoreInterrupts
    li r4, 0x1
lbl_80299CF4:
    neg r0, r4
    mr r3, r30
    or r0, r0, r4
    srwi r0, r0, 31
    neg r30, r0
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    beq lbl_80299D28
    mr r12, r29
    mr r3, r30
    mtctr r12
    bctrl
    b lbl_80299E28
lbl_80299D28:
    lis r30, lbl_8040FC00@ha
    addi r3, r31, 0x800
    addi r30, r30, lbl_8040FC00@l
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    lbz r31, 0x708(r30)
    extsb r31, r31
    bl OSRestoreInterrupts
    cmplwi r31, 0x3
    bne lbl_80299E28
    bl OSDisableInterrupts
    lbz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_80299D94
    lbz r0, 0xd(r30)
    cmpwi r0, 0x0
    bne lbl_80299D94
    lbz r0, 0xf(r30)
    cmplwi r0, 0x4
    bne lbl_80299D94
    lbz r0, 0x10(r30)
    cmplwi r0, 0x6
    bne lbl_80299D94
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_80299D9C
lbl_80299D94:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_80299D9C:
    cmpwi r0, 0x0
    bne lbl_80299E28
    bl OSDisableInterrupts
    li r0, 0x1
    mr r29, r3
    stb r0, 0xd(r30)
    addi r3, r30, 0x710
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_802960D0@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_802960D0@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r30, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x14
    bl OSSetPeriodicAlarm
    mr r3, r29
    bl OSRestoreInterrupts
    b lbl_80299E28
lbl_80299E08:
    lbz r0, 0x1(r4)
    stb r0, 0x709(r28)
    b lbl_80299E28
lbl_80299E14:
    addi r5, r31, 0xe18
    la r3, lbl_8049CF18
    li r4, 0x14db
    opword 0x4CC63182
    bl OSPanic
lbl_80299E28:
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
// ARCFastOpen
// ----------------------------------------------------------------------------
asm void ARCFastOpen() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8036ECAC@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r4, lbl_8036ECAC@l
    opword 0x4CC63182
    bl fn_8029ABCC
    cmplwi r31, 0x2
    bne lbl_80299E84
    lis r3, lbl_8036ECD4@ha
    addi r3, r3, lbl_8036ECD4@l
    opword 0x4CC63182
    bl OSReport
lbl_80299E84:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80299E98
// ----------------------------------------------------------------------------
asm void fn_80299E98() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_20
    lbz r0, 0x0(r3)
    lis r30, lbl_8036DE80@ha
    lis r4, lbl_8040FC00@ha
    mr r26, r3
    cmpwi r0, 0x3
    addi r30, r30, lbl_8036DE80@l
    addi r28, r4, lbl_8040FC00@l
    beq lbl_8029A154
    bge lbl_80299EE0
    cmpwi r0, 0x1
    beq lbl_80299EEC
    bge lbl_8029A124
    b lbl_8029A1C4
lbl_80299EE0:
    cmpwi r0, 0x5
    bge lbl_8029A1C4
    b lbl_8029A180
lbl_80299EEC:
    addi r3, r30, 0xe7c
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r29, r26, 0x2
    li r27, 0x0
    li r22, 0x1
    li r23, 0x3
    li r24, 0xa
    li r25, 0x6
    b lbl_8029A114
lbl_80299F14:
    mr r3, r29
    bl fn_802989E8
    lbz r4, 0x0(r29)
    mr r31, r3
    lbz r5, 0x1(r29)
    addi r3, r30, 0xe9c
    lbz r6, 0x2(r29)
    lbz r7, 0x3(r29)
    lbz r8, 0x4(r29)
    lbz r9, 0x5(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0xd(r29)
    addi r3, r30, 0xec8
    stw r0, 0x8(r1)
    lbz r0, 0xe(r29)
    stw r0, 0xc(r1)
    lbz r0, 0xf(r29)
    stw r0, 0x10(r1)
    lbz r0, 0x10(r29)
    stw r0, 0x14(r1)
    lbz r0, 0x11(r29)
    stw r0, 0x18(r1)
    lbz r0, 0x12(r29)
    stw r0, 0x1c(r1)
    lbz r0, 0x13(r29)
    stw r0, 0x20(r1)
    lbz r0, 0x14(r29)
    stw r0, 0x24(r1)
    lbz r0, 0x15(r29)
    stw r0, 0x28(r1)
    lbz r4, 0x6(r29)
    lbz r5, 0x7(r29)
    lbz r6, 0x8(r29)
    lbz r7, 0x9(r29)
    lbz r8, 0xa(r29)
    lbz r9, 0xb(r29)
    lbz r10, 0xc(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    cmpwi r31, 0x0
    bne lbl_8029A0A8
    addi r3, r30, 0xf24
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r28)
    mr r21, r3
    cmpwi r0, 0x0
    bne lbl_8029A028
    mr r3, r28
    li r20, 0x0
    li r31, 0x0
    mtctr r24
lbl_80299FEC:
    lbz r0, 0x13d(r3)
    cmpwi r0, 0x0
    bne lbl_8029A018
    mr r4, r31
    addi r3, r30, 0x2cc
    opword 0x4CC63182
    bl fn_8029ABCC
    mulli r0, r31, 0x60
    add r3, r28, r0
    addi r20, r3, 0xe4
    b lbl_8029A030
lbl_8029A018:
    addi r3, r3, 0x60
    addi r31, r31, 0x1
    bdnz lbl_80299FEC
    b lbl_8029A030
lbl_8029A028:
    lwz r3, 0x18(r28)
    lwz r20, 0x0(r3)
lbl_8029A030:
    mr r3, r21
    bl OSRestoreInterrupts
    cmpwi r20, 0x0
    bne lbl_8029A074
    mr r3, r28
    li r27, 0x0
    mtctr r25
lbl_8029A04C:
    lbz r0, 0x4fd(r3)
    cmpwi r0, 0x0
    bne lbl_8029A068
    mulli r0, r27, 0x60
    add r3, r28, r0
    addi r20, r3, 0x4a4
    b lbl_8029A074
lbl_8029A068:
    addi r3, r3, 0x60
    addi r27, r27, 0x1
    bdnz lbl_8029A04C
lbl_8029A074:
    cmpwi r20, 0x0
    beq lbl_8029A10C
    stb r22, 0x5c(r20)
    mr r4, r29
    addi r3, r20, 0x40
    li r5, 0x6
    stb r22, 0x59(r20)
    bl memcpy
    addi r3, r20, 0x46
    addi r4, r29, 0x6
    li r5, 0x10
    bl memcpy
    b lbl_8029A10C
lbl_8029A0A8:
    mr r4, r29
    addi r3, r31, 0x40
    li r5, 0x6
    bl memcpy
    addi r3, r31, 0x46
    addi r4, r29, 0x6
    li r5, 0x10
    bl memcpy
    lbz r0, 0x5c(r31)
    cmplwi r0, 0x2
    bne lbl_8029A0D8
    stb r23, 0x5c(r31)
lbl_8029A0D8:
    mr r4, r29
    addi r3, r28, 0x6fc
    li r5, 0x6
    bl memcpy
    lbz r4, 0x6fc(r28)
    addi r3, r30, 0xf48
    lbz r5, 0x6fd(r28)
    lbz r6, 0x6fe(r28)
    lbz r7, 0x6ff(r28)
    lbz r8, 0x700(r28)
    lbz r9, 0x701(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_8029A10C:
    addi r29, r29, 0x16
    addi r27, r27, 0x1
lbl_8029A114:
    lbz r0, 0x1(r26)
    cmpw r27, r0
    blt lbl_80299F14
    b lbl_8029A1D8
lbl_8029A124:
    addi r3, r30, 0xf70
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x1(r26)
    addi r3, r30, 0xf94
    lhz r5, 0x2(r26)
    lhz r6, 0x4(r26)
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x0
    stb r0, 0xe(r28)
    b lbl_8029A1D8
lbl_8029A154:
    addi r3, r30, 0xfc0
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x1(r26)
    addi r3, r30, 0xfe4
    lbz r5, 0x2(r26)
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x0
    stb r0, 0xe(r28)
    b lbl_8029A1D8
lbl_8029A180:
    addi r3, r30, 0x1000
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x1(r26)
    addi r3, r30, 0xfe4
    lhz r5, 0x2(r26)
    opword 0x4CC63182
    bl fn_8029ABCC
    lhz r0, 0x2(r26)
    cmpwi r0, 0x0
    bne lbl_8029A1B8
    addi r3, r30, 0x1024
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_8029A1B8:
    li r0, 0x0
    stb r0, 0xe(r28)
    b lbl_8029A1D8
lbl_8029A1C4:
    addi r5, r30, 0x1044
    la r3, lbl_8049CF18
    li r4, 0x1577
    opword 0x4CC63182
    bl OSPanic
lbl_8029A1D8:
    addi r11, r1, 0x60
    bl _restgpr_20
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A1F0
// ----------------------------------------------------------------------------
asm void fn_8029A1F0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r31, 0x1054
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r4, r30
    addi r3, r31, 0x1078
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r28
    bl fn_802989E8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8029A2AC
    lis r30, lbl_80410458@ha
    mr r4, r28
    addi r30, r30, lbl_80410458@l
    li r5, 0x6
    addi r3, r30, 0x40
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029A274
    b lbl_8029A2AC
lbl_8029A274:
    addi r3, r31, 0x108c
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x0(r28)
    mr r10, r29
    lbz r5, 0x1(r28)
    addi r3, r31, 0x10d0
    lbz r6, 0x2(r28)
    lbz r7, 0x3(r28)
    lbz r8, 0x4(r28)
    lbz r9, 0x5(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029A30C
lbl_8029A2AC:
    cmpwi r29, 0x1
    beq lbl_8029A2E4
    bge lbl_8029A2C4
    cmpwi r29, 0x0
    bge lbl_8029A2D0
    b lbl_8029A2E4
lbl_8029A2C4:
    cmpwi r29, 0x3
    bge lbl_8029A2E4
    b lbl_8029A2DC
lbl_8029A2D0:
    li r0, 0x8
    stb r0, 0x59(r30)
    b lbl_8029A2E4
lbl_8029A2DC:
    li r0, 0x9
    stb r0, 0x59(r30)
lbl_8029A2E4:
    lbz r4, 0x40(r30)
    addi r3, r31, 0x10d0
    lbz r5, 0x41(r30)
    lbz r6, 0x42(r30)
    lbz r7, 0x43(r30)
    lbz r8, 0x44(r30)
    lbz r9, 0x45(r30)
    lbz r10, 0x59(r30)
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_8029A30C:
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
// fn_8029A32C
// ----------------------------------------------------------------------------
asm void fn_8029A32C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    cmplwi r31, 0x10
    bge lbl_8029A360
    lis r4, lbl_804109C0@ha
    clrlslwi r0, r31, 24, 2
    addi r4, r4, lbl_804109C0@l
    lwzx r31, r4, r0
    b lbl_8029A364
lbl_8029A360:
    li r31, 0x0
lbl_8029A364:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A380
// ----------------------------------------------------------------------------
asm void fn_8029A380() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    extsb. r0, r31
    blt lbl_8029A3BC
    cmpwi r0, 0x10
    bge lbl_8029A3BC
    lis r4, lbl_80411D68@ha
    clrlslwi r0, r31, 24, 1
    addi r4, r4, lbl_80411D68@l
    lhzx r31, r4, r0
    b lbl_8029A3C0
lbl_8029A3BC:
    li r31, 0x0
lbl_8029A3C0:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A3DC
// ----------------------------------------------------------------------------
asm void fn_8029A3DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    extsb. r0, r31
    blt lbl_8029A418
    cmpwi r0, 0x10
    bge lbl_8029A418
    lis r4, lbl_80411D88@ha
    clrlslwi r0, r31, 24, 1
    addi r4, r4, lbl_80411D88@l
    lhzx r31, r4, r0
    b lbl_8029A41C
lbl_8029A418:
    li r31, 0x0
lbl_8029A41C:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A438
// ----------------------------------------------------------------------------
asm void fn_8029A438() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    addi r4, r4, lbl_8040FC00@l
    lbz r31, 0x6e5(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A474
// ----------------------------------------------------------------------------
asm void fn_8029A474() {
    nofralloc
    lis r3, lbl_80410458@ha
    addi r3, r3, lbl_80410458@l
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A480
// ----------------------------------------------------------------------------
asm void fn_8029A480() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    bne lbl_8029A4BC
    addi r0, r3, 0xa
    lis r3, lbl_804104B8@ha
    mulli r0, r0, 0x46
    li r4, 0x0
    addi r3, r3, lbl_804104B8@l
    li r5, 0x46
    add r3, r3, r0
    addi r3, r3, 0x1
    bl memset
    b lbl_8029A4DC
lbl_8029A4BC:
    addi r0, r3, 0xa
    lis r3, lbl_804104B8@ha
    mulli r0, r0, 0x46
    li r5, 0x6
    addi r3, r3, lbl_804104B8@l
    add r3, r3, r0
    addi r3, r3, 0x1
    bl memcpy
lbl_8029A4DC:
    li r0, 0x1
    stb r0, lbl_8049DE4C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A4F4
// ----------------------------------------------------------------------------
asm void fn_8029A4F4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    bne lbl_8029A510
    li r3, 0x0
    b lbl_8029A538
lbl_8029A510:
    addi r0, r3, 0xa
    lis r3, lbl_804104B8@ha
    mulli r0, r0, 0x46
    li r5, 0x6
    addi r3, r3, lbl_804104B8@l
    add r3, r3, r0
    addi r3, r3, 0x1
    bl memcmp
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_8029A538:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A548
// ----------------------------------------------------------------------------
asm void fn_8029A548() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_8049DE4C
    cmpwi r0, 0x0
    beq lbl_8029A584
    lis r3, lbl_804104B8@ha
    addi r3, r3, lbl_804104B8@l
    bl SCSetBtDeviceInfoArray
    cmpwi r3, 0x0
    beq lbl_8029A584
    li r3, 0x0
    bl SCFlushAsync
    li r0, 0x0
    stb r0, lbl_8049DE4C
lbl_8029A584:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ARCGetStartAddrInMem
// ----------------------------------------------------------------------------
asm void ARCGetStartAddrInMem() {
    nofralloc
    lis r5, lbl_804109C0@ha
    clrlslwi r0, r3, 24, 2
    addi r5, r5, lbl_804109C0@l
    stwx r4, r5, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A5A8
// ----------------------------------------------------------------------------
asm void fn_8029A5A8() {
    nofralloc
    lis r4, lbl_804109C0@ha
    clrlslwi r0, r3, 24, 2
    addi r4, r4, lbl_804109C0@l
    lwzx r3, r4, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A5BC
// ----------------------------------------------------------------------------
asm void fn_8029A5BC() {
    nofralloc
    lis r5, lbl_80411D68@ha
    clrlslwi r0, r3, 24, 1
    addi r5, r5, lbl_80411D68@l
    sthx r4, r5, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A5D0
// ----------------------------------------------------------------------------
asm void fn_8029A5D0() {
    nofralloc
    lis r5, lbl_80411D88@ha
    clrlslwi r0, r3, 24, 1
    addi r5, r5, lbl_80411D88@l
    sthx r4, r5, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_8029A5E4
// ----------------------------------------------------------------------------
asm void fn_8029A5E4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r3, 0xf
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8036F028@ha
    addi r31, r31, lbl_8036F028@l
    stw r30, 0x18(r1)
    lis r30, lbl_8040FC00@ha
    addi r30, r30, lbl_8040FC00@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    bgt lbl_8029AB48
    lis r5, jumptable_8036F240@ha
    slwi r0, r3, 2
    addi r5, r5, jumptable_8036F240@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r3, r31, 0x0
    opword 0x4CC63182
    bl fn_8029ABCC
    lwz r0, 0x740(r30)
    ori r0, r0, 0x1
    stw r0, 0x740(r30)
    b lbl_8029AB48
    addi r3, r31, 0x14
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x28
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x7(r29)
    addi r3, r31, 0x3c
    lbz r5, 0x0(r29)
    lbz r6, 0x1(r29)
    lbz r7, 0x2(r29)
    lbz r8, 0x3(r29)
    lbz r9, 0x4(r29)
    lbz r10, 0x5(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x6(r29)
    cmpwi r4, 0x0
    bne lbl_8029A7DC
    bl fn_8029A474
    mr r28, r3
    mr r4, r29
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_8029A6CC
    mr r3, r29
    bl fn_802989E8
    mr r28, r3
lbl_8029A6CC:
    lbz r0, 0x59(r28)
    cmpwi r0, 0xc
    beq lbl_8029A6E8
    bge lbl_8029A6FC
    cmpwi r0, 0x2
    beq lbl_8029A6F4
    b lbl_8029A6FC
lbl_8029A6E8:
    li r0, 0x12
    stb r0, 0xc(r30)
    b lbl_8029A6FC
lbl_8029A6F4:
    li r0, 0x17
    stb r0, 0xc(r30)
lbl_8029A6FC:
    li r0, 0x8
    mr r3, r29
    stb r0, 0x59(r28)
    lbz r0, 0x7(r29)
    stb r0, 0x56(r28)
    lbz r4, 0x6e4(r30)
    addi r0, r4, 0x1
    stb r0, 0x6e4(r30)
    bl fn_802989E8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_8029A734
    bl fn_8029A474
    mr r28, r3
lbl_8029A734:
    lbz r3, 0x7(r29)
    addi r4, r28, 0x40
    bl ARCGetStartAddrInMem
    lbz r3, 0x7(r29)
    li r4, 0x0
    bl fn_8029A5BC
    lbz r3, 0x7(r29)
    li r4, 0x0
    bl fn_8029A5D0
    lbz r0, 0x5b(r28)
    cmplwi r0, 0x3
    beq lbl_8029A76C
    cmplwi r0, 0x1
    bne lbl_8029A778
lbl_8029A76C:
    mr r3, r28
    bl fn_80298AC0
    b lbl_8029A7B0
lbl_8029A778:
    bl fn_802943B0
    cmpwi r3, 0x0
    beq lbl_8029A7A8
    bl fn_802943B0
    cmpwi r3, 0x0
    beq lbl_8029A7B0
    mr r3, r28
    addi r4, r31, 0x70
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029A7B0
lbl_8029A7A8:
    mr r3, r28
    bl fn_80298E48
lbl_8029A7B0:
    addi r3, r28, 0x40
    li r4, 0x8
    bl fn_802979C8
    lwz r12, 0x6f0(r30)
    cmpwi r12, 0x0
    beq lbl_8029AB48
    mr r3, r28
    li r4, 0x1
    mtctr r12
    bctrl
    b lbl_8029AB48
lbl_8029A7DC:
    addi r3, r31, 0x88
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_8029A85C
    bl fn_8029A474
    mr r31, r3
    mr r3, r29
    addi r4, r31, 0x40
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029AB48
    lbz r0, 0x59(r31)
    cmplwi r0, 0x2
    bne lbl_8029AB48
    mr r3, r29
    bl fn_802989E8
    cmpwi r3, 0x0
    beq lbl_8029A850
    lbz r0, 0x6(r29)
    cmplwi r0, 0xc
    bne lbl_8029A850
    mr r3, r29
    bl fn_80298868
    lbz r3, 0x6e5(r30)
    subi r0, r3, 0x1
    stb r0, 0x6e5(r30)
lbl_8029A850:
    li r0, 0xff
    stb r0, 0xc(r30)
    b lbl_8029AB48
lbl_8029A85C:
    mr r3, r29
    bl fn_802989E8
    cmpwi r3, 0x0
    beq lbl_8029AB48
    lbz r0, 0x6(r29)
    cmplwi r0, 0xc
    bne lbl_8029AB48
    mr r3, r29
    bl fn_802989E8
    cmpwi r3, 0x0
    beq lbl_8029A8A8
    lbz r0, 0x5b(r3)
    cmplwi r0, 0x3
    beq lbl_8029A89C
    cmplwi r0, 0x1
    bne lbl_8029A8A4
lbl_8029A89C:
    bl fn_80298BD8
    b lbl_8029A8A8
lbl_8029A8A4:
    bl fn_80298F60
lbl_8029A8A8:
    mr r3, r29
    bl fn_80298868
    lbz r3, 0x6e5(r30)
    subi r0, r3, 0x1
    stb r0, 0x6e5(r30)
    b lbl_8029AB48
    addi r3, r31, 0x98
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x6e4(r30)
    addi r3, r31, 0xac
    subi r0, r4, 0x1
    stb r0, 0x6e4(r30)
    lbz r4, 0x1(r29)
    lbz r5, 0x0(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r3, 0x1(r29)
    bl fn_8029A5A8
    bl fn_802989E8
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_8029A95C
    lbz r0, 0x5b(r3)
    cmplwi r0, 0x3
    beq lbl_8029A918
    cmplwi r0, 0x1
    bne lbl_8029A924
lbl_8029A918:
    mr r3, r28
    bl fn_80298CF0
    b lbl_8029A95C
lbl_8029A924:
    bl fn_802943B0
    cmpwi r3, 0x0
    beq lbl_8029A954
    bl fn_802943B0
    cmpwi r3, 0x0
    beq lbl_8029A95C
    mr r3, r28
    addi r4, r31, 0x70
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029A95C
lbl_8029A954:
    mr r3, r28
    bl fn_80299078
lbl_8029A95C:
    lbz r3, 0x1(r29)
    li r4, 0x0
    bl ARCGetStartAddrInMem
    lbz r3, 0x1(r29)
    li r4, 0x0
    bl fn_8029A5BC
    lbz r3, 0x1(r29)
    li r4, 0x0
    bl fn_8029A5D0
    lwz r12, 0x6f0(r30)
    cmpwi r12, 0x0
    beq lbl_8029AB48
    mr r3, r28
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_8029AB48
    addi r3, r31, 0xd0
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x5(r29)
    addi r3, r31, 0xe4
    stw r0, 0x8(r1)
    lbz r4, 0x6(r29)
    lbz r5, 0x7(r29)
    lbz r6, 0x0(r29)
    lbz r7, 0x1(r29)
    lbz r8, 0x2(r29)
    lbz r9, 0x3(r29)
    lbz r10, 0x4(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r29
    bl fn_802989E8
    lbz r0, 0x7(r29)
    addi r4, r3, 0x40
    stb r0, 0x56(r3)
    lbz r3, 0x7(r29)
    bl ARCGetStartAddrInMem
    lbz r3, 0x7(r29)
    li r4, 0x0
    bl fn_8029A5BC
    lbz r3, 0x7(r29)
    li r4, 0x0
    bl fn_8029A5D0
    b lbl_8029AB48
    addi r3, r31, 0x124
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x5(r29)
    addi r3, r31, 0xe4
    stw r0, 0x8(r1)
    lbz r4, 0x6(r29)
    lbz r5, 0x7(r29)
    lbz r6, 0x0(r29)
    lbz r7, 0x1(r29)
    lbz r8, 0x2(r29)
    lbz r9, 0x3(r29)
    lbz r10, 0x4(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    lhz r0, 0x0(r4)
    lbz r3, 0x6e5(r30)
    sth r0, 0x744(r30)
    lhz r0, 0x2(r4)
    sth r0, 0x746(r30)
    lhz r0, 0x4(r4)
    cmpw r3, r0
    bge lbl_8029AA88
    addi r3, r31, 0x138
    opword 0x4CC63182
    bl OSReport
    lhz r0, 0x4(r29)
    stb r0, 0x6e5(r30)
lbl_8029AA88:
    mr r30, r29
    li r28, 0x0
    b lbl_8029AABC
lbl_8029AA94:
    lbz r3, 0x6(r30)
    cmplwi r3, 0x10
    bge lbl_8029AAB4
    lhz r4, 0x8(r30)
    bl fn_8029A5BC
    lbz r3, 0x6(r30)
    lhz r4, 0xa(r30)
    bl fn_8029A5D0
lbl_8029AAB4:
    addi r30, r30, 0x6
    addi r28, r28, 0x1
lbl_8029AABC:
    lhz r0, 0x4(r29)
    cmpw r28, r0
    blt lbl_8029AA94
    b lbl_8029AB48
    addi r3, r31, 0x160
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x174
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x188
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x1a0
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x1b8
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x1d0
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x1e8
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_8029AB48
    addi r3, r31, 0x200
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_8029AB48:
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
// fn_8029AB68
// ----------------------------------------------------------------------------
asm void fn_8029AB68() {
    nofralloc
    cmplwi r8, 0x3
    lis r6, lbl_8040FC00@ha
    addi r6, r6, lbl_8040FC00@l
    bne lbl_8029AB8C
    lwz r12, 0x6ec(r6)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
lbl_8029AB8C:
    lis r3, lbl_8036F280@ha
    mr r4, r8
    addi r3, r3, lbl_8036F280@l
    opword 0x4CC63182
    b fn_8029ABCC
    blr
}

// ----------------------------------------------------------------------------
// fn_8029ABA4
// ----------------------------------------------------------------------------
asm void fn_8029ABA4() {
    nofralloc
    lis r3, lbl_8036F298@ha
    addi r3, r3, lbl_8036F298@l
    opword 0x4CC63182
    b fn_8029ABCC
}

// ----------------------------------------------------------------------------
// fn_8029ABB4
// ----------------------------------------------------------------------------
asm void fn_8029ABB4() {
    nofralloc
    lis r3, lbl_8036F2AC@ha
    addi r3, r3, lbl_8036F2AC@l
    opword 0x4CC63182
    b fn_8029ABCC
}

// ----------------------------------------------------------------------------
// fn_8029ABC4
// ----------------------------------------------------------------------------
asm void fn_8029ABC4() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8029ABCC
// ----------------------------------------------------------------------------
asm void fn_8029ABCC() {
    nofralloc
    stwu r1, -0x70(r1)
    bne cr1, lbl_8029ABF4
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_8029ABF4:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// AIRegisterDMACallback
// ----------------------------------------------------------------------------
asm void AIRegisterDMACallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8049DE88
    bl OSDisableInterrupts
    stw r30, lbl_8049DE88
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

