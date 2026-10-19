#include "types.h"

// Translation unit: src/gamespy/GP/unk_802590E8.cpp
// Total functions: 16

// Small Data symbols (@sda21)
extern float lbl_8049C808;
extern float lbl_8049C80C;
extern float lbl_8049C814;
extern float lbl_8049C81C;
extern float lbl_8049C824;
extern float lbl_8049C82C;
extern float lbl_8049C834;
extern float lbl_8049C83C;
extern float lbl_8049C848;
extern float lbl_8049C850;
extern float lbl_8049C858;
extern float lbl_8049C85C;
extern float lbl_8049C864;
extern float lbl_8049C86C;
extern float lbl_8049C870;
extern float lbl_8049C878;
extern float lbl_8049C880;
extern float lbl_8049C888;
extern float lbl_8049C88C;
extern float lbl_8049C894;
extern float lbl_8049C898;
extern float lbl_8049C8A0;
extern float lbl_8049C8A8;
extern float lbl_8049C8B0;
extern float lbl_8049C8B8;
extern float lbl_8049C8C0;
extern float lbl_8049C8C8;
extern float lbl_8049C8D0;
extern float lbl_8049C8D8;
extern float lbl_8049C8DC;
extern float lbl_8049C8E0;
extern float lbl_8049C8E8;
extern float lbl_8049C8EC;
extern float lbl_8049C8F4;

// Global data symbols (@ha/@l)
extern u8 gpiStatusInfoKeyFree[];
extern u8 lbl_80368A40[];
extern u8 lbl_80368AC0[];
extern u8 lbl_80368AF0[];
extern u8 lbl_80368B88[];
extern u8 lbl_80368B94[];
extern u8 lbl_80368BA8[];

// Forward declarations
extern void fn_8025B7B8();
extern void TableFree();
extern void _restgpr_20();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_20();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void atoi();
extern void fn_802592B4();
extern void fn_8019B578();
extern void fn_80253528();
extern void fn_802535C4();
extern void fn_80256120();
extern void fn_8025651C();
extern void fn_802565E8();
extern void fn_802565F0();
extern void fn_80256638();
extern void fn_80256700();
extern void fn_80256C4C();
extern void fn_80256C5C();
extern void fn_80256C70();
extern void fn_802590E8();
extern void fn_80259310();
extern void fn_80259338();
extern void fn_80259588();
extern void fn_80259940();
extern void fn_80259AE4();
extern void fn_8025A5DC();
extern void fn_8025AC94();
extern void fn_8025AEDC();
extern void fn_8025AFD0();
extern void fn_8025B188();
extern void fn_8025B22C();
extern void fn_8025B648();
extern void fn_8025B804();
extern void fn_80262A78();
extern void fn_80263228();
extern void fn_80263290();
extern void fn_80265904();
extern void fn_80265ED0();
extern void fn_80336B28();
extern void fn_80336B2C();
extern void gpiAddCallback();
extern void gpiAddLocalInfo();
extern void gpiAddPeer();
extern void gpiAppendIntToBuffer();
extern void gpiAppendStringToBuffer();
extern void gpiCallErrorCallback();
extern void gpiCheckConnect();
extern void gpiCheckForError();
extern void gpiDisconnect();
extern void gpiFailedOpCallback();
extern void gpiFindOperationByID();
extern void gpiGetPeerByProfile();
extern void gpiGetProfile();
extern void gpiOperationsAreBlocking();
extern void gpiPeerAddMessage();
extern void gpiPeerAddOp();
extern void gpiPeerGetSig();
extern void gpiPeerRemoveOp();
extern void gpiPeerStartConnect();
extern void gpiProcessCallbacks();
extern void gpiProcessOperation();
extern void gpiProcessPeers();
extern void gpiProfileListAdd();
extern void gpiProfileMap();
extern void gpiReadKeyAndValue();
extern void gpiRecvToBuffer();
extern void gpiRemoveBuddyStatus();
extern void gpiRemoveBuddyStatusInfo();
extern void gpiRemoveOperation();
extern void gpiRemoveProfile();
extern void gpiSaveKeysToBuffer();
extern void gpiSendFromBuffer();
extern void gpiSetError();
extern void gpiSetErrorString();
extern void gpiStatusInfoAddKey();
extern void gpiStatusInfoCheckKey();
extern void gpiStatusInfoKeysDestroy();
extern void gpiStatusInfoKeysInit();
extern void gpiStatusInfoSetKey();
extern void gpiValueForKey();
extern void memcpy();
extern void memmove();
extern void memset();
extern void strcmp();
extern void strcpy();
extern void strlen();
extern void strncmp();
extern void strstr();
extern void strzcpy();

// ----------------------------------------------------------------------------
// fn_802590E8
// ----------------------------------------------------------------------------
asm void fn_802590E8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r31, 0x0
    mr r30, r3
    stw r31, 0x0(r3)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    li r3, 0x638
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80259130
    li r3, 0x1
    b lbl_8025929C
lbl_80259130:
    li r4, 0x0
    li r5, 0x638
    bl memset
    lwz r4, 0x8(r1)
    li r0, 0x1
    addi r3, r1, 0x8
    stb r31, 0x0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5b8(r4)
    lwz r4, 0x8(r1)
    stw r0, 0x100(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x104(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x108(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x10c(r4)
    lwz r4, 0x8(r1)
    stw r27, 0x60c(r4)
    lwz r4, 0x8(r1)
    stw r28, 0x610(r4)
    lwz r4, 0x8(r1)
    stw r29, 0x1a4(r4)
    bl fn_80262A78
    cmpwi r3, 0x0
    bne lbl_802591A8
    lwz r3, 0x8(r1)
    bl fn_80256C70
    li r3, 0x1
    b lbl_8025929C
lbl_802591A8:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x8
    stw r31, 0x5c0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1a8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1ac(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1bc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1cc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1dc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1ec(r4)
    bl fn_80259338
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80259284
    lwz r30, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl gpiDisconnect
    addi r3, r1, 0x8
    bl gpiStatusInfoKeysDestroy
    lwz r3, 0x5c8(r30)
    bl TableFree
    mr r3, r30
    bl fn_80256C70
    mr r3, r31
    b lbl_8025929C
lbl_80259284:
    bl fn_802565E8
    bl fn_802565F0
    bl fn_8019B578
    lwz r0, 0x8(r1)
    li r3, 0x0
    stw r0, 0x0(r30)
lbl_8025929C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802592B4
// ----------------------------------------------------------------------------
asm void fn_802592B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x0(r3)
    bl gpiDisconnect
    mr r3, r30
    bl gpiStatusInfoKeysDestroy
    lwz r3, 0x5c8(r31)
    bl TableFree
    mr r3, r31
    bl fn_80256C70
    li r0, 0x0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80259310
// ----------------------------------------------------------------------------
asm void fn_80259310() {
    nofralloc
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x14(r4)
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    stw r0, 0x20(r4)
    stw r0, 0x28(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_80259338
// ----------------------------------------------------------------------------
asm void fn_80259338() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, -0x1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, 0x0(r3)
    stw r4, 0x8(r1)
    stb r31, 0x110(r4)
    lwz r3, 0x8(r1)
    stb r31, 0x12f(r3)
    lwz r3, 0x8(r1)
    stb r31, 0x144(r3)
    lwz r3, 0x8(r1)
    stw r0, 0x1f0(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1f4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x200(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x204(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1fc(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x1f8(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x1f8(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1f8(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x20c(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x208(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x208(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x208(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x218(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x21c(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x214(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x210(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x210(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x210(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5ec(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5f0(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5e8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x5e4(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x5e4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5e4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5fc(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x600(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5f8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x5f4(r3)
    bl fn_80256C70
    lwz r4, 0x8(r1)
    mr r3, r30
    stw r31, 0x5f4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5f4(r4)
    bl gpiStatusInfoKeysDestroy
    addi r3, r1, 0x8
    bl gpiStatusInfoKeysInit
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802594C4
    lwz r30, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl gpiDisconnect
    addi r3, r1, 0x8
    bl gpiStatusInfoKeysDestroy
    lwz r3, 0x5c8(r30)
    bl TableFree
    mr r3, r30
    bl fn_80256C70
    mr r3, r31
    b lbl_80259570
lbl_802594C4:
    lwz r3, 0x8(r1)
    li r0, 0x2
    stw r0, 0x234(r3)
    b lbl_802594DC
lbl_802594D4:
    mr r3, r30
    bl gpiRemoveOperation
lbl_802594DC:
    lwz r3, 0x8(r1)
    lwz r4, 0x5c4(r3)
    cmpwi r4, 0x0
    bne lbl_802594D4
    li r31, 0x0
    lis r4, fn_80259310@ha
    stw r31, 0x5c4(r3)
    mr r3, r30
    addi r4, r4, fn_80259310@l
    li r5, 0x0
    lwz r6, 0x8(r1)
    stw r31, 0x5d0(r6)
    lwz r6, 0x8(r1)
    stw r31, 0x5d4(r6)
    bl gpiProfileMap
    lwz r4, 0x8(r1)
    li r0, -0x1
    li r3, 0x0
    stw r31, 0x19c(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1a0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x198(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x238(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5bc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5d8(r4)
    lwz r4, 0x8(r1)
    stw r0, 0x23c(r4)
    lwz r4, 0x8(r1)
    stb r31, 0x3b8(r4)
    lwz r4, 0x8(r1)
    stb r31, 0x4b8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x634(r4)
lbl_80259570:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80259588
// ----------------------------------------------------------------------------
asm void fn_80259588() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    li r30, 0x0
    lis r29, lbl_80368A40@ha
    stw r30, 0x8(r1)
    mr r27, r3
    addi r29, r29, lbl_80368A40@l
    lwz r28, 0x0(r3)
    bl fn_802565F0
    mr r31, r3
lbl_802595BC:
    mr r3, r27
    addi r4, r28, 0x210
    bl gpiAddLocalInfo
    lwz r0, 0x218(r28)
    cmpwi r0, 0x0
    ble lbl_802595D8
    stw r31, 0x634(r28)
lbl_802595D8:
    lwz r4, 0x1f0(r28)
    mr r3, r27
    addi r5, r28, 0x210
    addi r6, r1, 0x8
    li r7, 0x1
    la r8, lbl_8049C808
    bl gpiSendFromBuffer
    cmpwi r3, 0x0
    beq lbl_80259600
    b lbl_80259928
lbl_80259600:
    lwz r4, 0x1f0(r28)
    mr r3, r27
    addi r5, r28, 0x1f8
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    la r8, lbl_8049C808
    bl gpiRecvToBuffer
    cmpwi r3, 0x0
    beq lbl_8025987C
    cmpwi r3, 0x3
    bne lbl_80259928
    mr r3, r27
    addi r5, r29, 0x0
    li r4, 0x5
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80259928
    b lbl_80259928
    b lbl_8025987C
lbl_8025965C:
    stw r31, 0x634(r28)
    stb r30, 0x0(r3)
    lwz r0, 0x1f8(r28)
    subf r4, r0, r3
    stw r4, 0xc(r1)
    lwz r0, 0x20c(r28)
    cmpw r4, r0
    ble lbl_802596C4
    cmpwi r4, 0x4000
    li r3, 0x4000
    blt lbl_8025968C
    mr r3, r4
lbl_8025968C:
    lwz r0, 0x20c(r28)
    add r3, r0, r3
    stw r3, 0x20c(r28)
    addi r4, r3, 0x1
    lwz r3, 0x208(r28)
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_802596C0
    mr r3, r27
    addi r4, r29, 0x2c
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80259928
lbl_802596C0:
    stw r3, 0x208(r28)
lbl_802596C4:
    lwz r5, 0xc(r1)
    lwz r3, 0x208(r28)
    lwz r4, 0x1f8(r28)
    addi r5, r5, 0x1
    bl memcpy
    lwz r3, 0x1f8(r28)
    addi r4, r26, 0x7
    lwz r0, 0x200(r28)
    subf r3, r3, r4
    subf r3, r3, r0
    stw r3, 0x200(r28)
    addi r5, r3, 0x1
    lwz r3, 0x1f8(r28)
    bl memmove
    lwz r26, 0x208(r28)
    la r4, lbl_8049C80C
    mr r3, r26
    bl strstr
    cmpwi r3, 0x0
    beq lbl_80259750
    addi r3, r3, 0x4
    bl atoi
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x10
    bl gpiFindOperationByID
    cmpwi r3, 0x0
    beq lbl_8025987C
    lwz r4, 0x10(r1)
    mr r3, r27
    lwz r5, 0x208(r28)
    bl gpiProcessOperation
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_80259750:
    mr r3, r27
    mr r4, r26
    li r5, 0x1
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_80259770
    li r3, 0x4
    b lbl_80259928
lbl_80259770:
    lwz r26, 0x208(r28)
    la r4, lbl_8049C814
    li r5, 0x4
    mr r3, r26
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802597A4
    mr r3, r27
    mr r4, r26
    bl fn_80259AE4
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_802597A4:
    mr r3, r26
    la r4, lbl_8049C81C
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_8025987C
    mr r3, r26
    la r4, lbl_8049C824
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802597EC
    mr r3, r26
    addi r5, r28, 0x614
    la r4, lbl_8049C824
    li r6, 0x19
    bl gpiValueForKey
    b lbl_8025987C
lbl_802597EC:
    mr r3, r26
    la r4, lbl_8049C82C
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8025981C
    mr r3, r27
    mr r4, r26
    bl fn_8025A5DC
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_8025981C:
    mr r3, r26
    la r4, lbl_8049C834
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8025984C
    mr r3, r27
    mr r4, r26
    bl fn_8025AC94
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_8025984C:
    mr r3, r26
    la r4, lbl_8049C83C
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8025987C
    mr r3, r27
    mr r4, r26
    bl fn_80263290
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_8025987C:
    lwz r3, 0x1f8(r28)
    la r4, lbl_8049C848
    bl strstr
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_8025965C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_802598D4
    lwz r0, 0x1f4(r28)
    cmpwi r0, 0x5
    beq lbl_802598D4
    mr r3, r27
    addi r5, r29, 0x3c
    li r4, 0x7
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x0
    b lbl_80259928
lbl_802598D4:
    mr r3, r27
    bl gpiOperationsAreBlocking
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_802598F0
    li r3, 0xa
    bl fn_80256638
lbl_802598F0:
    cmpwi r26, 0x0
    bne lbl_802595BC
    lwz r4, 0x634(r28)
    lis r3, 0x2
    subi r0, r3, 0x2b40
    subf r3, r4, r31
    cmplw r3, r0
    ble lbl_80259924
    mr r3, r27
    addi r4, r28, 0x210
    addi r5, r29, 0x64
    bl gpiAppendStringToBuffer
    stw r31, 0x634(r28)
lbl_80259924:
    li r3, 0x0
lbl_80259928:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80259940
// ----------------------------------------------------------------------------
asm void fn_80259940() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r30, 0x0(r3)
    mr r31, r3
    mr r27, r4
    li r29, 0x0
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x1
    bne lbl_802599EC
lbl_80259970:
    mr r3, r31
    bl gpiCheckConnect
    cmpwi r3, 0x0
    mr r29, r3
    li r3, 0x0
    bne lbl_802599A0
    cmpwi r27, 0x0
    beq lbl_802599A0
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x1
    bne lbl_802599A0
    li r3, 0x1
lbl_802599A0:
    neg r0, r3
    or r0, r0, r3
    srwi. r28, r0, 31
    beq lbl_802599B8
    li r3, 0xa
    bl fn_80256638
lbl_802599B8:
    cmpwi r28, 0x0
    bne lbl_80259970
    cmpwi r29, 0x0
    beq lbl_802599EC
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    bl gpiFindOperationByID
    cmpwi r3, 0x0
    beq lbl_802599EC
    lwz r3, 0x8(r1)
    li r0, 0x4
    stw r0, 0x1c(r3)
lbl_802599EC:
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x3
    beq lbl_80259A08
    cmpwi r0, 0x2
    beq lbl_80259A08
    cmpwi r0, 0x5
    bne lbl_80259A30
lbl_80259A08:
    cmpwi r29, 0x0
    bne lbl_80259A1C
    mr r3, r31
    bl fn_80259588
    mr r29, r3
lbl_80259A1C:
    cmpwi r29, 0x0
    bne lbl_80259A30
    mr r3, r31
    bl gpiProcessPeers
    mr r29, r3
lbl_80259A30:
    cmpwi r29, 0x0
    bne lbl_80259A44
    mr r3, r31
    bl fn_80265904
    mr r29, r3
lbl_80259A44:
    lwz r0, 0x5c4(r30)
    stw r0, 0x8(r1)
    b lbl_80259A84
lbl_80259A50:
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    beq lbl_80259A7C
    mr r3, r31
    bl gpiFailedOpCallback
    lwz r4, 0x8(r1)
    mr r3, r31
    lwz r0, 0x20(r4)
    stw r0, 0x8(r1)
    bl gpiRemoveOperation
    b lbl_80259A84
lbl_80259A7C:
    lwz r0, 0x20(r4)
    stw r0, 0x8(r1)
lbl_80259A84:
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_80259A50
    mr r3, r31
    mr r4, r27
    bl gpiProcessCallbacks
    cmpwi r3, 0x0
    beq lbl_80259AA8
    b lbl_80259ACC
lbl_80259AA8:
    lwz r0, 0x5bc(r30)
    cmpwi r0, 0x0
    beq lbl_80259AC8
    mr r3, r31
    li r4, 0x0
    bl gpiDisconnect
    mr r3, r31
    bl fn_80259338
lbl_80259AC8:
    mr r3, r29
lbl_80259ACC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80259AE4
// ----------------------------------------------------------------------------
asm void fn_80259AE4() {
    nofralloc
    stwu r1, -0x11b0(r1)
    mflr r0
    stw r0, 0x11b4(r1)
    addi r11, r1, 0x11b0
    bl _savegpr_24
    mr r27, r4
    lis r30, lbl_80368AC0@ha
    lwz r28, 0x0(r3)
    mr r26, r3
    mr r3, r27
    addi r30, r30, lbl_80368AC0@l
    addi r5, r1, 0x188
    la r4, lbl_8049C850
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80259B50
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_80259B50:
    addi r3, r1, 0x188
    bl atoi
    mr r24, r3
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C858
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80259BA0
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_80259BA0:
    addi r3, r1, 0x188
    bl atoi
    mr r29, r3
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C85C
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    beq lbl_80259BD8
    addi r3, r1, 0x188
    bl atoi
    mr r31, r3
    b lbl_80259BE4
lbl_80259BD8:
    li r3, 0x0
    bl fn_80256120
    mr r31, r4
lbl_80259BE4:
    cmpwi r24, 0x6
    beq lbl_8025A044
    bge lbl_80259C18
    cmpwi r24, 0x3
    beq lbl_8025A5C0
    bge lbl_80259C0C
    cmpwi r24, 0x1
    beq lbl_80259C3C
    bge lbl_80259E2C
    b lbl_8025A5C0
lbl_80259C0C:
    cmpwi r24, 0x5
    bge lbl_80259D34
    b lbl_80259FCC
lbl_80259C18:
    cmpwi r24, 0x65
    beq lbl_8025A3E4
    bge lbl_80259C30
    cmpwi r24, 0x64
    bge lbl_8025A0BC
    b lbl_8025A5C0
lbl_80259C30:
    cmpwi r24, 0x67
    bge lbl_8025A5C0
    b lbl_8025A560
lbl_80259C3C:
    lwz r3, 0x1c0(r28)
    lwz r0, 0x1c4(r28)
    cmpwi r3, 0x0
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    beq lbl_8025A5C0
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_80259C7C
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_80259C7C:
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C864
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80259CC0
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_80259CC0:
    addi r3, r1, 0x188
    bl strlen
    addi r3, r3, 0x1
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r24)
    bne lbl_80259CF0
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_80259CF0:
    addi r4, r1, 0x188
    bl strcpy
    stw r29, 0x0(r24)
    mr r3, r26
    lwz r7, 0x70(r1)
    mr r5, r24
    stw r31, 0x4(r24)
    addi r4, r1, 0x68
    lwz r0, 0x74(r1)
    li r6, 0x0
    stw r7, 0x68(r1)
    li r7, 0x2
    stw r0, 0x6c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025A5C0
    b lbl_8025A5C4
lbl_80259D34:
    lwz r3, 0x1c8(r28)
    lwz r0, 0x1cc(r28)
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_8025A5C0
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_80259D74
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_80259D74:
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C864
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80259DB8
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_80259DB8:
    addi r3, r1, 0x188
    bl strlen
    addi r3, r3, 0x1
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r24)
    bne lbl_80259DE8
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_80259DE8:
    addi r4, r1, 0x188
    bl strcpy
    stw r29, 0x0(r24)
    mr r3, r26
    lwz r7, 0x8(r1)
    mr r5, r24
    stw r31, 0x4(r24)
    addi r4, r1, 0x60
    lwz r0, 0xc(r1)
    li r6, 0x0
    stw r7, 0x60(r1)
    li r7, 0xb
    stw r0, 0x64(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025A5C0
    b lbl_8025A5C4
lbl_80259E2C:
    mr r3, r26
    mr r4, r29
    bl gpiProfileListAdd
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_80259E58
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_80259E58:
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C864
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80259E9C
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_80259E9C:
    addi r3, r1, 0x188
    addi r4, r30, 0x40
    bl strstr
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_80259EDC
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_80259EDC:
    li r25, 0x0
    stb r25, 0x0(r3)
    addi r3, r3, 0x8
    bl strlen
    cmplwi r3, 0x20
    beq lbl_80259F1C
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_80259F1C:
    lwz r3, 0x14(r24)
    bl fn_80256C70
    stw r25, 0x14(r24)
    addi r3, r27, 0x8
    bl fn_8025651C
    stw r3, 0x14(r24)
    lwz r3, 0x18(r24)
    addi r0, r3, 0x1
    stw r0, 0x18(r24)
    lwz r3, 0x1b0(r28)
    lwz r0, 0x1b4(r28)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_8025A5C0
    li r3, 0x40c
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_80259F80
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_80259F80:
    addi r4, r1, 0x188
    li r5, 0x401
    addi r3, r3, 0x8
    bl strzcpy
    stw r29, 0x0(r24)
    mr r3, r26
    lwz r7, 0x10(r1)
    mr r5, r24
    stw r31, 0x4(r24)
    addi r4, r1, 0x58
    lwz r0, 0x14(r1)
    li r6, 0x0
    stw r7, 0x58(r1)
    li r7, 0x6
    stw r0, 0x5c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025A5C0
    b lbl_8025A5C4
lbl_80259FCC:
    lwz r3, 0x1e0(r28)
    lwz r0, 0x1e4(r28)
    cmpwi r3, 0x0
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_8025A5C0
    li r3, 0x8
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_8025A008
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A008:
    stw r29, 0x0(r3)
    mr r5, r3
    lwz r7, 0x18(r1)
    addi r4, r1, 0x50
    stw r31, 0x4(r3)
    mr r3, r26
    lwz r0, 0x1c(r1)
    li r6, 0x0
    stw r7, 0x50(r1)
    li r7, 0xa
    stw r0, 0x54(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025A5C0
    b lbl_8025A5C4
lbl_8025A044:
    lwz r3, 0x1e8(r28)
    lwz r0, 0x1ec(r28)
    cmpwi r3, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_8025A5C0
    li r3, 0x8
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_8025A080
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A080:
    stw r29, 0x0(r3)
    mr r5, r3
    lwz r7, 0x20(r1)
    addi r4, r1, 0x48
    stw r31, 0x4(r3)
    mr r3, r26
    lwz r0, 0x24(r1)
    li r6, 0x0
    stw r7, 0x48(r1)
    li r7, 0xc
    stw r0, 0x4c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025A5C0
    b lbl_8025A5C4
lbl_8025A0BC:
    mr r3, r26
    mr r4, r29
    bl gpiProfileListAdd
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_8025A0E8
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A0E8:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_8025A5C0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_8025A174
    li r3, 0x1c
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r25)
    bne lbl_8025A128
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A128:
    li r4, 0x0
    li r5, 0x1c
    bl memset
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    beq lbl_8025A160
    lwz r0, 0x0(r3)
    lwz r3, 0x8(r25)
    stw r0, 0x0(r3)
    lwz r3, 0xc(r25)
    bl gpiRemoveBuddyStatusInfo
    li r0, 0x0
    stw r0, 0xc(r25)
    b lbl_8025A174
lbl_8025A160:
    lwz r4, 0x5d0(r28)
    lwz r3, 0x8(r25)
    addi r0, r4, 0x1
    stw r4, 0x0(r3)
    stw r0, 0x5d0(r28)
lbl_8025A174:
    lwz r24, 0x8(r25)
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C864
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A1BC
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_8025A1BC:
    addi r3, r1, 0x188
    addi r5, r1, 0x78
    la r4, lbl_8049C86C
    li r6, 0x10
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A200
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_8025A200:
    addi r3, r1, 0x78
    bl atoi
    stw r3, 0x4(r24)
    lwz r3, 0x8(r24)
    bl fn_80256C70
    li r27, 0x0
    addi r3, r1, 0x188
    stw r27, 0x8(r24)
    addi r5, r1, 0x88
    la r4, lbl_8049C870
    li r6, 0x100
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A23C
    stb r27, 0x88(r1)
lbl_8025A23C:
    addi r3, r1, 0x88
    bl fn_8025651C
    cmpwi r3, 0x0
    stw r3, 0x8(r24)
    bne lbl_8025A264
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A264:
    lwz r3, 0xc(r24)
    bl fn_80256C70
    li r27, 0x0
    addi r3, r1, 0x188
    stw r27, 0xc(r24)
    addi r5, r1, 0x88
    la r4, lbl_8049C878
    li r6, 0x100
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A294
    stb r27, 0x88(r1)
lbl_8025A294:
    addi r3, r1, 0x88
    bl fn_8025651C
    cmpwi r3, 0x0
    stw r3, 0xc(r24)
    bne lbl_8025A2BC
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A2BC:
    addi r3, r1, 0x188
    addi r5, r1, 0x78
    la r4, lbl_8049C880
    li r6, 0x10
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A2E4
    li r0, 0x0
    stw r0, 0x10(r24)
    b lbl_8025A2F4
lbl_8025A2E4:
    addi r3, r1, 0x78
    bl atoi
    bl fn_80336B28
    stw r3, 0x10(r24)
lbl_8025A2F4:
    addi r3, r1, 0x188
    addi r5, r1, 0x78
    la r4, lbl_8049C888
    li r6, 0x10
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A31C
    li r0, 0x0
    sth r0, 0x14(r24)
    b lbl_8025A330
lbl_8025A31C:
    addi r3, r1, 0x78
    bl atoi
    clrlwi r3, r3, 16
    bl fn_80336B2C
    sth r3, 0x14(r24)
lbl_8025A330:
    addi r3, r1, 0x188
    addi r5, r1, 0x78
    la r4, lbl_8049C88C
    li r6, 0x10
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A358
    li r0, 0x0
    stw r0, 0x18(r24)
    b lbl_8025A364
lbl_8025A358:
    addi r3, r1, 0x78
    bl atoi
    stw r3, 0x18(r24)
lbl_8025A364:
    lwz r3, 0x1b8(r28)
    lwz r0, 0x1bc(r28)
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_8025A5C0
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_8025A3A0
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A3A0:
    stw r29, 0x0(r3)
    mr r5, r3
    lwz r8, 0x28(r1)
    addi r4, r1, 0x40
    lwz r9, 0x0(r24)
    li r6, 0x0
    lwz r0, 0x2c(r1)
    li r7, 0x5
    stw r9, 0x8(r3)
    stw r31, 0x4(r3)
    mr r3, r26
    stw r8, 0x40(r1)
    stw r0, 0x44(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025A5C0
    b lbl_8025A5C4
lbl_8025A3E4:
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C864
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A428
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_8025A428:
    addi r3, r1, 0x188
    la r4, lbl_8049C888
    bl strstr
    cmpwi r3, 0x0
    bne lbl_8025A464
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_8025A464:
    lbz r0, 0x3(r3)
    extsb. r0, r0
    bne lbl_8025A498
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_8025A498:
    addi r3, r3, 0x3
    bl atoi
    mr r27, r3
    addi r3, r1, 0x188
    la r4, lbl_8049C894
    bl strstr
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_8025A4D0
    addi r3, r1, 0x88
    addi r4, r4, 0x3
    li r5, 0x100
    bl strzcpy
    b lbl_8025A4D8
lbl_8025A4D0:
    li r0, 0x0
    stb r0, 0x88(r1)
lbl_8025A4D8:
    lwz r3, 0x1d0(r28)
    lwz r0, 0x1d4(r28)
    cmpwi r3, 0x0
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_8025A5C0
    li r3, 0x108
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_8025A518
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025A5C4
lbl_8025A518:
    stw r29, 0x0(r3)
    addi r4, r1, 0x88
    stw r27, 0x4(r3)
    addi r3, r3, 0x8
    bl strcpy
    lwz r4, 0x30(r1)
    mr r3, r26
    lwz r0, 0x34(r1)
    mr r5, r24
    stw r4, 0x38(r1)
    addi r4, r1, 0x38
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x3c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025A5C0
    b lbl_8025A5C4
lbl_8025A560:
    mr r3, r27
    addi r5, r1, 0x188
    la r4, lbl_8049C864
    li r6, 0x1000
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A5A4
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025A5C4
lbl_8025A5A4:
    mr r3, r26
    mr r4, r29
    li r5, 0x67
    la r6, lbl_8049C898
    li r7, 0x0
    li r8, 0x0
    bl fn_8025AFD0
lbl_8025A5C0:
    li r3, 0x0
lbl_8025A5C4:
    addi r11, r1, 0x11b0
    bl _restgpr_24
    lwz r0, 0x11b4(r1)
    mtlr r0
    addi r1, r1, 0x11b0
    blr
}

// ----------------------------------------------------------------------------
// fn_8025A5DC
// ----------------------------------------------------------------------------
asm void fn_8025A5DC() {
    nofralloc
    stwu r1, -0x440(r1)
    mflr r0
    stw r0, 0x444(r1)
    addi r11, r1, 0x440
    bl _savegpr_24
    lis r30, lbl_80368AC0@ha
    lwz r28, 0x0(r3)
    mr r26, r3
    mr r27, r4
    addi r30, r30, lbl_80368AC0@l
    li r3, 0x0
    bl fn_80256120
    mr r31, r4
    mr r3, r27
    addi r4, r30, 0x4c
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A654
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A654:
    addi r3, r1, 0x18
    bl atoi
    mr r29, r3
    mr r3, r26
    mr r4, r29
    bl gpiProfileListAdd
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_8025A68C
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025AC7C
lbl_8025A68C:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_8025AC78
    lwz r24, 0xc(r3)
    cmpwi r24, 0x0
    bne lbl_8025A758
    li r3, 0x3c
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0xc(r25)
    bne lbl_8025A6CC
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025AC7C
lbl_8025A6CC:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    lwz r3, 0x8(r25)
    cmpwi r3, 0x0
    beq lbl_8025A704
    lwz r0, 0x0(r3)
    lwz r3, 0xc(r25)
    stw r0, 0x0(r3)
    lwz r3, 0x8(r25)
    bl gpiRemoveBuddyStatus
    li r0, 0x0
    stw r0, 0x8(r25)
    b lbl_8025A718
lbl_8025A704:
    lwz r4, 0x5d0(r28)
    lwz r3, 0xc(r25)
    addi r0, r4, 0x1
    stw r4, 0x0(r3)
    stw r0, 0x5d0(r28)
lbl_8025A718:
    lis r5, gpiStatusInfoKeyFree@ha
    li r3, 0x8
    addi r5, r5, gpiStatusInfoKeyFree@l
    li r4, 0x1
    bl fn_80253528
    lwz r4, 0xc(r25)
    stw r3, 0x38(r4)
    lwz r24, 0xc(r25)
    lwz r0, 0x38(r24)
    cmpwi r0, 0x0
    bne lbl_8025A758
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025AC7C
lbl_8025A758:
    mr r3, r27
    addi r5, r1, 0x18
    la r4, lbl_8049C8A0
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A79C
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A79C:
    addi r3, r1, 0x18
    bl atoi
    stw r3, 0x4(r24)
    mr r3, r27
    addi r5, r1, 0x18
    la r4, lbl_8049C8A8
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A7EC
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A7EC:
    addi r3, r1, 0x18
    bl atoi
    bl fn_80336B28
    stw r3, 0x1c(r24)
    mr r3, r27
    addi r5, r1, 0x18
    la r4, lbl_8049C8B0
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A840
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A840:
    addi r3, r1, 0x18
    bl atoi
    sth r3, 0x20(r24)
    mr r3, r27
    addi r4, r30, 0x58
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A890
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A890:
    addi r3, r1, 0x18
    bl atoi
    bl fn_80336B28
    stw r3, 0x24(r24)
    mr r3, r27
    addi r4, r30, 0x64
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A8E4
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A8E4:
    addi r3, r1, 0x18
    bl atoi
    bl fn_80336B28
    stw r3, 0x28(r24)
    mr r3, r27
    addi r5, r1, 0x18
    la r4, lbl_8049C8B8
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A938
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A938:
    addi r3, r1, 0x18
    bl atoi
    sth r3, 0x2c(r24)
    mr r3, r27
    addi r5, r1, 0x18
    la r4, lbl_8049C8C0
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A988
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A988:
    addi r3, r1, 0x18
    bl atoi
    sth r3, 0x2e(r24)
    mr r3, r27
    addi r4, r30, 0x70
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025A9D8
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025A9D8:
    addi r3, r1, 0x18
    bl atoi
    stw r3, 0x18(r24)
    lwz r3, 0x8(r24)
    bl fn_80256C70
    li r25, 0x0
    mr r3, r27
    stw r25, 0x8(r24)
    addi r4, r30, 0x7c
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025AA38
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025AA38:
    addi r3, r1, 0x18
    bl fn_8025651C
    stw r3, 0x8(r24)
    lwz r3, 0xc(r24)
    bl fn_80256C70
    stw r25, 0xc(r24)
    mr r3, r27
    addi r4, r30, 0x88
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025AA94
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025AA94:
    addi r3, r1, 0x18
    bl fn_8025651C
    stw r3, 0xc(r24)
    lwz r3, 0x10(r24)
    bl fn_80256C70
    stw r25, 0x10(r24)
    mr r3, r27
    addi r4, r30, 0x94
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025AAF0
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025AAF0:
    addi r3, r1, 0x18
    bl fn_8025651C
    stw r3, 0x10(r24)
    lwz r3, 0x14(r24)
    bl fn_80256C70
    stw r25, 0x14(r24)
    mr r3, r27
    addi r4, r30, 0xa0
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025AB4C
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025AB4C:
    addi r3, r1, 0x18
    bl fn_8025651C
    stw r3, 0x14(r24)
    mr r3, r27
    addi r4, r30, 0xac
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025AB9C
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025AB9C:
    addi r3, r1, 0x18
    bl atoi
    stw r3, 0x34(r24)
    mr r3, r27
    addi r4, r30, 0xb8
    addi r5, r1, 0x18
    li r6, 0x400
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025ABEC
    mr r3, r26
    addi r5, r30, 0x0
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AC7C
lbl_8025ABEC:
    addi r3, r1, 0x18
    bl atoi
    stw r3, 0x30(r24)
    lwz r3, 0x1b8(r28)
    lwz r0, 0x1bc(r28)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_8025AC78
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_8025AC34
    mr r3, r26
    addi r4, r30, 0x30
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025AC7C
lbl_8025AC34:
    stw r31, 0x4(r3)
    mr r5, r3
    lwz r8, 0x10(r1)
    addi r4, r1, 0x8
    lwz r9, 0x0(r24)
    li r6, 0x0
    lwz r0, 0x14(r1)
    li r7, 0x0
    stw r9, 0x8(r3)
    stw r29, 0x0(r3)
    mr r3, r26
    stw r8, 0x8(r1)
    stw r0, 0xc(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025AC78
    b lbl_8025AC7C
lbl_8025AC78:
    li r3, 0x0
lbl_8025AC7C:
    addi r11, r1, 0x440
    bl _restgpr_24
    lwz r0, 0x444(r1)
    mtlr r0
    addi r1, r1, 0x440
    blr
}

// ----------------------------------------------------------------------------
// fn_8025AC94
// ----------------------------------------------------------------------------
asm void fn_8025AC94() {
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_23
    li r29, 0x0
    mr r25, r3
    stw r29, 0x8(r1)
    mr r26, r4
    li r5, 0x1
    lwz r27, 0x0(r3)
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_8025ACD4
    li r3, 0x4
    b lbl_8025AEC4
lbl_8025ACD4:
    mr r3, r26
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    la r4, lbl_8049C8C8
    li r7, 0x200
    bl fn_80265ED0
    cmpwi r3, 0x0
    bne lbl_8025AD20
    lis r5, lbl_80368AC0@ha
    mr r3, r25
    addi r5, r5, lbl_80368AC0@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r25
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AEC4
lbl_8025AD20:
    addi r3, r1, 0x10
    bl atoi
    mr r30, r3
    mr r3, r26
    la r4, lbl_8049C8D0
    bl strstr
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8025AD70
    lis r5, lbl_80368AC0@ha
    mr r3, r25
    addi r5, r5, lbl_80368AC0@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r25
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AEC4
lbl_8025AD70:
    lwz r3, 0x8(r1)
    addi r23, r1, 0x10
    li r28, 0x0
    addi r0, r3, 0x6
    stw r0, 0x8(r1)
    b lbl_8025AEB8
lbl_8025AD88:
    cmpwi r28, 0x0
    bne lbl_8025ADDC
    addi r4, r1, 0x10
    li r5, 0x0
    b lbl_8025ADA8
lbl_8025AD9C:
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
lbl_8025ADA8:
    cmplwi r5, 0x200
    bge lbl_8025ADC8
    add r3, r31, r5
    lbz r3, 0x6(r3)
    extsb. r0, r3
    beq lbl_8025ADC8
    cmpwi r0, 0x2c
    bne lbl_8025AD9C
lbl_8025ADC8:
    lwz r0, 0x8(r1)
    stbx r29, r23, r5
    add r0, r0, r5
    stw r0, 0x8(r1)
    b lbl_8025AE28
lbl_8025ADDC:
    mr r3, r26
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    la r4, lbl_8049C8D8
    li r7, 0x200
    bl fn_80265ED0
    cmpwi r3, 0x0
    bne lbl_8025AE28
    lis r5, lbl_80368AC0@ha
    mr r3, r25
    addi r5, r5, lbl_80368AC0@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r25
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025AEC4
lbl_8025AE28:
    addi r3, r1, 0x10
    bl atoi
    mr r4, r3
    mr r3, r25
    bl gpiProfileListAdd
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_8025AE60
    lis r4, lbl_80368AF0@ha
    mr r3, r25
    addi r4, r4, lbl_80368AF0@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025AEC4
lbl_8025AE60:
    li r3, 0x1c
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r24)
    bne lbl_8025AE8C
    lis r4, lbl_80368AF0@ha
    mr r3, r25
    addi r4, r4, lbl_80368AF0@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025AEC4
lbl_8025AE8C:
    li r4, 0x0
    li r5, 0x1c
    bl memset
    lwz r4, 0x5d0(r27)
    addi r28, r28, 0x1
    lwz r3, 0x8(r24)
    addi r0, r4, 0x1
    stw r4, 0x0(r3)
    stw r0, 0x5d0(r27)
    lwz r3, 0x8(r24)
    stw r29, 0x4(r3)
lbl_8025AEB8:
    cmpw r28, r30
    blt lbl_8025AD88
    li r3, 0x0
lbl_8025AEC4:
    addi r11, r1, 0x240
    bl _restgpr_23
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

// ----------------------------------------------------------------------------
// fn_8025AEDC
// ----------------------------------------------------------------------------
asm void fn_8025AEDC() {
    nofralloc
    stwu r1, -0xdd0(r1)
    mflr r0
    stw r0, 0xdd4(r1)
    stw r31, 0xdcc(r1)
    stw r30, 0xdc8(r1)
    mr r30, r5
    li r5, 0xdad
    stw r29, 0xdc4(r1)
    mr r29, r4
    mr r4, r6
    stw r28, 0xdc0(r1)
    mr r28, r3
    lwz r31, 0x0(r3)
    addi r3, r1, 0x8
    bl strzcpy
    mr r3, r28
    addi r4, r31, 0x210
    la r5, lbl_8049C850
    bl gpiAppendStringToBuffer
    mr r3, r28
    mr r5, r30
    addi r4, r31, 0x210
    bl gpiAppendIntToBuffer
    lis r5, lbl_80368B88@ha
    mr r3, r28
    addi r4, r31, 0x210
    addi r5, r5, lbl_80368B88@l
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r31)
    mr r3, r28
    addi r4, r31, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x210
    la r5, lbl_8049C8DC
    bl gpiAppendStringToBuffer
    mr r3, r28
    mr r5, r29
    addi r4, r31, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x210
    la r5, lbl_8049C864
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x210
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x210
    la r5, lbl_8049C8E0
    bl gpiAppendStringToBuffer
    lwz r31, 0xdcc(r1)
    li r3, 0x0
    lwz r30, 0xdc8(r1)
    lwz r29, 0xdc4(r1)
    lwz r28, 0xdc0(r1)
    lwz r0, 0xdd4(r1)
    mtlr r0
    addi r1, r1, 0xdd0
    blr
}

// ----------------------------------------------------------------------------
// fn_8025AFD0
// ----------------------------------------------------------------------------
asm void fn_8025AFD0() {
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
    mr r29, r7
    mr r30, r8
    bl gpiGetPeerByProfile
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8025B0CC
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x8
    bl gpiGetProfile
    cmpwi r3, 0x0
    beq lbl_8025B040
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8025B040
    lhz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_8025B068
lbl_8025B040:
    cmpwi r29, 0xb00
    bne lbl_8025B050
    li r3, 0x3
    b lbl_8025B170
lbl_8025B050:
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_8025AEDC
    b lbl_8025B170
lbl_8025B068:
    mr r3, r25
    mr r4, r26
    li r5, 0x1
    bl gpiAddPeer
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8025B08C
    li r3, 0x1
    b lbl_8025B170
lbl_8025B08C:
    lwz r3, 0x8(r1)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_8025B0B4
    mr r3, r25
    mr r4, r31
    bl gpiPeerGetSig
    cmpwi r3, 0x0
    beq lbl_8025B138
    b lbl_8025B170
lbl_8025B0B4:
    mr r3, r25
    mr r4, r31
    bl gpiPeerStartConnect
    cmpwi r3, 0x0
    beq lbl_8025B138
    b lbl_8025B170
lbl_8025B0CC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x6a
    bne lbl_8025B138
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x8
    bl gpiGetProfile
    cmpwi r3, 0x0
    beq lbl_8025B138
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8025B108
    li r0, 0x0
    sth r0, 0x20(r3)
lbl_8025B108:
    cmpwi r29, 0xb00
    bne lbl_8025B118
    li r3, 0x3
    b lbl_8025B170
lbl_8025B118:
    cmpwi r27, 0x64
    bge lbl_8025B138
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_8025AEDC
    b lbl_8025B170
lbl_8025B138:
    cmpwi r30, 0x0
    beq lbl_8025B14C
    mr r3, r31
    mr r4, r30
    bl gpiPeerAddOp
lbl_8025B14C:
    mr r3, r25
    mr r4, r31
    mr r5, r27
    mr r6, r28
    bl gpiPeerAddMessage
    cmpwi r3, 0x0
    beq lbl_8025B16C
    b lbl_8025B170
lbl_8025B16C:
    li r3, 0x0
lbl_8025B170:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8025B188
// ----------------------------------------------------------------------------
asm void fn_8025B188() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    bl gpiSaveKeysToBuffer
    cmpwi r3, 0x0
    beq lbl_8025B1B8
    b lbl_8025B214
lbl_8025B1B8:
    lwz r6, 0x8(r1)
    cmpwi r6, 0x0
    bne lbl_8025B1CC
    la r6, lbl_8049C8E8
    stw r6, 0x8(r1)
lbl_8025B1CC:
    lwz r4, 0x10(r31)
    mr r3, r30
    li r5, 0x69
    li r7, 0xb00
    li r8, 0x0
    bl fn_8025AFD0
    cmpwi r3, 0x0
    beq lbl_8025B1F0
    b lbl_8025B214
lbl_8025B1F0:
    lwz r31, 0x8(r1)
    la r4, lbl_8049C8E8
    mr r3, r31
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_8025B210
    mr r3, r31
    bl fn_80256C70
lbl_8025B210:
    li r3, 0x0
lbl_8025B214:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8025B22C
// ----------------------------------------------------------------------------
asm void fn_8025B22C() {
    nofralloc
    stwu r1, -0x880(r1)
    mflr r0
    stw r0, 0x884(r1)
    addi r11, r1, 0x880
    bl _savegpr_20
    mr r21, r4
    lwz r4, 0x10(r4)
    mr r22, r5
    mr r20, r3
    addi r5, r1, 0x14
    bl gpiGetProfile
    cmpwi r3, 0x0
    bne lbl_8025B278
    lis r4, lbl_80368B94@ha
    mr r3, r20
    addi r4, r4, lbl_80368B94@l
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025B630
lbl_8025B278:
    mr r3, r22
    la r4, lbl_8049C8E8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8025B334
    lwz r22, 0x4c(r21)
    b lbl_8025B2A4
lbl_8025B294:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    beq lbl_8025B2AC
    lwz r22, 0xc(r22)
lbl_8025B2A4:
    cmpwi r22, 0x0
    bne lbl_8025B294
lbl_8025B2AC:
    cmpwi r22, 0x0
    bne lbl_8025B2BC
    li r3, 0x0
    b lbl_8025B630
lbl_8025B2BC:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    bne lbl_8025B62C
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_8025B62C
    li r3, 0x10
    bl fn_80256C4C
    lwz r9, 0x8(r22)
    li r0, 0x0
    lwz r8, 0x4(r22)
    mr r5, r3
    stw r9, 0x40(r1)
    addi r4, r1, 0x28
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r21)
    stw r8, 0x44(r1)
    stw r0, 0x0(r3)
    mr r3, r20
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    bl gpiAddCallback
    mr r3, r21
    mr r4, r22
    bl gpiPeerRemoveOp
    b lbl_8025B62C
lbl_8025B334:
    li r28, 0x0
    mr r3, r20
    stw r28, 0x10(r1)
    mr r4, r22
    addi r5, r1, 0xc
    addi r6, r1, 0x648
    stw r28, 0xc(r1)
    addi r7, r1, 0x448
    stw r28, 0x8(r1)
    bl gpiReadKeyAndValue
    addi r3, r1, 0x648
    la r4, lbl_8049C8EC
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_8025B39C
    lis r5, lbl_80368BA8@ha
    mr r3, r20
    addi r5, r5, lbl_80368BA8@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r20
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025B630
lbl_8025B39C:
    addi r3, r1, 0x448
    bl atoi
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8025B458
    lwz r22, 0x4c(r21)
    b lbl_8025B3C8
lbl_8025B3B8:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    beq lbl_8025B3D0
    lwz r22, 0xc(r22)
lbl_8025B3C8:
    cmpwi r22, 0x0
    bne lbl_8025B3B8
lbl_8025B3D0:
    cmpwi r22, 0x0
    bne lbl_8025B3E0
    li r3, 0x0
    b lbl_8025B630
lbl_8025B3E0:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    bne lbl_8025B62C
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_8025B62C
    li r3, 0x10
    bl fn_80256C4C
    lwz r9, 0x8(r22)
    li r0, 0x0
    lwz r8, 0x4(r22)
    mr r5, r3
    stw r9, 0x38(r1)
    addi r4, r1, 0x20
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r21)
    stw r8, 0x3c(r1)
    stw r0, 0x0(r3)
    mr r3, r20
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    bl gpiAddCallback
    mr r3, r21
    mr r4, r22
    bl gpiPeerRemoveOp
    b lbl_8025B62C
lbl_8025B458:
    slwi r23, r3, 2
    mr r3, r23
    bl fn_80256C4C
    mr r24, r3
    mr r3, r23
    bl fn_80256C4C
    mr r23, r3
    mr r27, r24
    mr r26, r23
    addi r30, r1, 0x248
    addi r31, r1, 0x48
    li r25, 0x0
    b lbl_8025B584
lbl_8025B48C:
    mr r3, r20
    mr r4, r22
    addi r5, r1, 0xc
    addi r6, r1, 0x648
    addi r7, r1, 0x448
    bl gpiReadKeyAndValue
    addi r3, r1, 0x648
    bl strlen
    mr r5, r3
    addi r3, r1, 0x648
    addi r4, r1, 0x248
    addi r6, r1, 0x10
    li r7, 0x2
    bl fn_80256700
    lwz r0, 0x10(r1)
    addi r3, r1, 0x448
    stbx r28, r30, r0
    bl strlen
    mr r5, r3
    addi r3, r1, 0x448
    addi r4, r1, 0x48
    addi r6, r1, 0x10
    li r7, 0x2
    bl fn_80256700
    lwz r0, 0x10(r1)
    mr r3, r30
    stbx r28, r31, r0
    bl fn_8025651C
    stw r3, 0x0(r27)
    mr r3, r31
    bl fn_8025651C
    stw r3, 0x0(r26)
    mr r3, r20
    mr r5, r30
    addi r6, r1, 0x8
    lwz r4, 0x14(r1)
    lwz r4, 0xc(r4)
    lwz r4, 0x38(r4)
    bl gpiStatusInfoCheckKey
    cmpwi r3, 0x0
    bne lbl_8025B55C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_8025B55C
    lwz r4, 0x14(r1)
    mr r3, r20
    mr r5, r30
    mr r6, r31
    lwz r4, 0xc(r4)
    lwz r4, 0x38(r4)
    bl gpiStatusInfoAddKey
    b lbl_8025B578
lbl_8025B55C:
    lwz r4, 0x14(r1)
    mr r3, r20
    addi r5, r1, 0x248
    addi r6, r1, 0x48
    lwz r4, 0xc(r4)
    lwz r4, 0x38(r4)
    bl gpiStatusInfoSetKey
lbl_8025B578:
    addi r27, r27, 0x4
    addi r26, r26, 0x4
    addi r25, r25, 0x1
lbl_8025B584:
    cmpw r25, r29
    blt lbl_8025B48C
    lwz r22, 0x4c(r21)
    b lbl_8025B5A4
lbl_8025B594:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    beq lbl_8025B5AC
    lwz r22, 0xc(r22)
lbl_8025B5A4:
    cmpwi r22, 0x0
    bne lbl_8025B594
lbl_8025B5AC:
    cmpwi r22, 0x0
    bne lbl_8025B5BC
    li r3, 0x0
    b lbl_8025B630
lbl_8025B5BC:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    bne lbl_8025B62C
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_8025B62C
    li r3, 0x10
    bl fn_80256C4C
    lwz r9, 0x8(r22)
    mr r5, r3
    lwz r8, 0x4(r22)
    addi r4, r1, 0x18
    stw r9, 0x30(r1)
    li r6, 0x0
    li r7, 0xe
    stw r29, 0xc(r3)
    stw r24, 0x4(r3)
    stw r23, 0x8(r3)
    lwz r0, 0x10(r21)
    stw r8, 0x34(r1)
    stw r0, 0x0(r3)
    mr r3, r20
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    bl gpiAddCallback
    mr r3, r21
    mr r4, r22
    bl gpiPeerRemoveOp
lbl_8025B62C:
    li r3, 0x0
lbl_8025B630:
    addi r11, r1, 0x880
    bl _restgpr_20
    lwz r0, 0x884(r1)
    mtlr r0
    addi r1, r1, 0x880
    blr
}

// ----------------------------------------------------------------------------
// fn_8025B648
// ----------------------------------------------------------------------------
asm void fn_8025B648() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_80368AC0@ha
    lwz r28, 0x0(r3)
    mr r27, r3
    addi r5, r1, 0x8
    addi r31, r31, lbl_80368AC0@l
    bl gpiGetProfile
    cmpwi r3, 0x0
    bne lbl_8025B690
    mr r3, r27
    addi r4, r31, 0xd4
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025B7A0
lbl_8025B690:
    lwz r29, 0x8(r1)
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_8025B6B4
    mr r3, r27
    addi r4, r31, 0xd4
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025B7A0
lbl_8025B6B4:
    lwz r30, 0x0(r27)
    mr r3, r27
    addi r5, r31, 0x10c
    addi r4, r30, 0x210
    bl gpiAppendStringToBuffer
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0xc8
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r27
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x118
    bl gpiAppendStringToBuffer
    lwz r5, 0x0(r29)
    mr r3, r27
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r27
    addi r4, r30, 0x210
    la r5, lbl_8049C8F4
    bl gpiAppendStringToBuffer
    lwz r5, 0x14(r29)
    mr r3, r27
    addi r4, r30, 0x210
    bl gpiAppendStringToBuffer
    mr r3, r27
    addi r4, r30, 0x210
    la r5, lbl_8049C8E0
    bl gpiAppendStringToBuffer
    b lbl_8025B740
    b lbl_8025B7A0
lbl_8025B740:
    lwz r4, 0x8(r1)
    lwz r3, 0x18(r4)
    subi r0, r3, 0x1
    stw r0, 0x18(r4)
    lwz r0, 0x100(r28)
    cmpwi r0, 0x0
    bne lbl_8025B79C
    lwz r3, 0x8(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bgt lbl_8025B79C
    lwz r3, 0x14(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x14(r3)
    lwz r3, 0x8(r1)
    bl fn_80263228
    cmpwi r3, 0x0
    beq lbl_8025B79C
    lwz r4, 0x8(r1)
    mr r3, r27
    bl gpiRemoveProfile
lbl_8025B79C:
    li r3, 0x0
lbl_8025B7A0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8025B7B8
// ----------------------------------------------------------------------------
asm void fn_8025B7B8() {
    nofralloc
    lwz r6, 0x8(r4)
    cmpwi r6, 0x0
    beq lbl_8025B7DC
    lwz r3, 0x0(r6)
    cmpw r3, r5
    ble lbl_8025B7DC
    subi r0, r3, 0x1
    stw r0, 0x0(r6)
    b lbl_8025B7FC
lbl_8025B7DC:
    lwz r4, 0xc(r4)
    cmpwi r4, 0x0
    beq lbl_8025B7FC
    lwz r3, 0x0(r4)
    cmpw r3, r5
    ble lbl_8025B7FC
    subi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_8025B7FC:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_8025B804
// ----------------------------------------------------------------------------
asm void fn_8025B804() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r5, r1, 0x8
    stw r30, 0x18(r1)
    lis r30, lbl_80368AC0@ha
    addi r30, r30, lbl_80368AC0@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r29, 0x0(r3)
    bl gpiGetProfile
    cmpwi r3, 0x0
    bne lbl_8025B858
    mr r3, r28
    addi r4, r30, 0xd4
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025BA54
lbl_8025B858:
    cmpwi r31, 0x1
    bne lbl_8025B8C4
    mr r3, r28
    addi r4, r29, 0x210
    addi r5, r30, 0x128
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r29, 0x210
    addi r5, r30, 0xc8
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r29)
    mr r3, r28
    addi r4, r29, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r29, 0x210
    addi r5, r30, 0x134
    bl gpiAppendStringToBuffer
    lwz r5, 0x8(r1)
    mr r3, r28
    addi r4, r29, 0x210
    lwz r5, 0x0(r5)
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r29, 0x210
    la r5, lbl_8049C8E0
    bl gpiAppendStringToBuffer
lbl_8025B8C4:
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_8025B95C
    lwz r31, 0x0(r3)
    lwz r3, 0x8(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    li r30, 0x0
    lwz r3, 0x8(r3)
    stw r30, 0x8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    lwz r3, 0xc(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    stw r30, 0xc(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r30, 0x8(r3)
    lwz r3, 0x8(r1)
    bl fn_80263228
    cmpwi r3, 0x0
    beq lbl_8025B93C
    lwz r4, 0x8(r1)
    mr r3, r28
    bl gpiRemoveProfile
lbl_8025B93C:
    lwz r6, 0x5d0(r29)
    lis r4, fn_8025B7B8@ha
    mr r3, r28
    mr r5, r31
    subi r0, r6, 0x1
    addi r4, r4, fn_8025B7B8@l
    stw r0, 0x5d0(r29)
    bl gpiProfileMap
lbl_8025B95C:
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8025BA50
    lwz r30, 0x0(r3)
    lwz r3, 0x8(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    li r31, 0x0
    lwz r3, 0xc(r3)
    stw r31, 0x8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0xc(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    stw r31, 0xc(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0x10(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    stw r31, 0x10(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0x14(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    stw r31, 0x14(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0xc(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0x38(r3)
    cmpwi r3, 0x0
    beq lbl_8025BA14
    bl fn_802535C4
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    stw r31, 0x38(r3)
lbl_8025BA14:
    lwz r3, 0x8(r1)
    bl fn_80263228
    cmpwi r3, 0x0
    beq lbl_8025BA30
    lwz r4, 0x8(r1)
    mr r3, r28
    bl gpiRemoveProfile
lbl_8025BA30:
    lwz r6, 0x5d0(r29)
    lis r4, fn_8025B7B8@ha
    mr r3, r28
    mr r5, r30
    subi r0, r6, 0x1
    addi r4, r4, fn_8025B7B8@l
    stw r0, 0x5d0(r29)
    bl gpiProfileMap
lbl_8025BA50:
    li r3, 0x0
lbl_8025BA54:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

