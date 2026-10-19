#include "types.h"

// Translation unit: src/revolution/sc/scsystem.cpp
// Total functions: 22

// Small Data symbols (@sda21)
extern float BgJobStatus_8049E3E8;
extern float Initialized_8049E3FE;
extern float IsDevKit_8049E3FC;
extern float ItemIDOffsetTblOffset_8049E3F8;
extern float ItemNumTotal_8049E3F0;
extern float ItemRestSize_8049E3EC;
extern float __SCVersion;
extern float at_2159_8049D358;
extern float at_2160_8049D360;
extern float lbl_8049E3F4;
extern float lbl_8049E3FD;

// Global data symbols (@ha/@l)
extern u8 ConfBuf_80465FC0[];
extern u8 ConfFileName_803420E8[];
extern u8 Control_80465E20[];
extern u8 ProductInfoFileName_80342100[];
extern u8 jumptable_8038DA08[];
extern u8 lbl_803420D8[];
extern u8 lbl_8038D8E8[];
extern u8 lbl_80469FC0[];

// Forward declarations
extern void CloseCallbackFromReload();
extern void CloseCallbackFromReloadError();
extern void CreateItemByID();
extern void DeleteItemByID();
extern void FinishFromReload();
extern void MyNandCallback();
extern void NANDCloseAsync();
extern void NANDInit();
extern void NANDPrivateDeleteAsync();
extern void NANDPrivateGetStatusAsync();
extern void NANDPrivateGetTypeAsync();
extern void NANDPrivateOpenAsync();
extern void NANDReadAsync();
extern void NANDWriteAsync();
extern void OSDisableInterrupts();
extern void OSGetConsoleType();
extern void OSInitThreadQueue();
extern void OSRegisterVersion();
extern void OSRestoreInterrupts();
extern void OpenCallbackFromReload();
extern void ParseConfBuf();
extern void ReadCallbackFromReload();
extern void SCCheckStatus();
extern void SCFindByteArrayItem();
extern void SCFindS8Item();
extern void SCFindU32Item();
extern void SCFindU8Item();
extern void SCFlushAsync();
extern void SCInit();
extern void SCReloadConfFileAsync();
extern void SCReplaceByteArrayItem();
extern void SCReplaceIntegerItem();
extern void SCReplaceU8Item();
extern void UnpackItem();
extern void __SCFlushSyncCallback();
extern void _restgpr_21();
extern void _restgpr_22();
extern void _restgpr_24();
extern void _restgpr_27();
extern void _savegpr_21();
extern void _savegpr_22();
extern void _savegpr_24();
extern void _savegpr_27();
extern void fn_8030E618();
extern void fn_8030F048();
extern void fn_8031D978();
extern void memcmp();
extern void memcpy();
extern void memmove();
extern void memset();
extern void strlen();

// ----------------------------------------------------------------------------
// SCInit
// ----------------------------------------------------------------------------
asm void SCInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r0, Initialized_8049E3FE
    cmpwi r0, 0x0
    beq lbl_803228A8
    bl OSRestoreInterrupts
    b lbl_8032290C
lbl_803228A8:
    li r31, 0x1
    stb r31, Initialized_8049E3FE
    stb r31, BgJobStatus_8049E3E8
    bl OSRestoreInterrupts
    lwz r3, __SCVersion
    bl OSRegisterVersion
    lis r3, Control_80465E20@ha
    addi r3, r3, Control_80465E20@l
    bl OSInitThreadQueue
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 3, 3
    beq lbl_803228DC
    stb r31, IsDevKit_8049E3FC
lbl_803228DC:
    bl NANDInit
    cmpwi r3, 0x0
    bne lbl_80322904
    lis r3, ConfBuf_80465FC0@ha
    li r4, 0x4000
    addi r3, r3, ConfBuf_80465FC0@l
    li r5, 0x0
    bl SCReloadConfFileAsync
    cmpwi r3, 0x0
    beq lbl_8032290C
lbl_80322904:
    li r0, 0x2
    stb r0, BgJobStatus_8049E3E8
lbl_8032290C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SCCheckStatus
// ----------------------------------------------------------------------------
asm void SCCheckStatus() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lbz r29, BgJobStatus_8049E3E8
    cmplwi r29, 0x3
    bne lbl_80322A18
    li r0, 0x1
    stb r0, BgJobStatus_8049E3E8
    bl OSRestoreInterrupts
    lis r31, Control_80465E20@ha
    addi r31, r31, Control_80465E20@l
    lwz r3, 0x16c(r31)
    lwz r4, 0x17c(r31)
    bl ParseConfBuf
    cmpwi r3, 0x0
    bne lbl_803229AC
    bl OSDisableInterrupts
    lis r5, ConfBuf_80465FC0@ha
    lwz r4, 0x16c(r31)
    addi r5, r5, ConfBuf_80465FC0@l
    mr r29, r3
    cmplw r5, r4
    beq lbl_80322998
    mr r3, r5
    li r5, 0x4000
    bl memcpy
lbl_80322998:
    li r0, 0x0
    mr r3, r29
    stb r0, lbl_8049E3FD
    bl OSRestoreInterrupts
    b lbl_80322A0C
lbl_803229AC:
    bl OSDisableInterrupts
    lwz r31, 0x16c(r31)
    mr r29, r3
    li r30, 0x4000
    li r4, 0x0
    mr r3, r31
    li r5, 0x4000
    bl memset
    cmplwi r30, 0xc
    ble lbl_803229FC
    mr r3, r31
    la r4, at_2159_8049D358
    li r5, 0x4
    bl memcpy
    addi r3, r31, 0x3ffc
    la r4, at_2160_8049D360
    li r5, 0x4
    bl memcpy
    li r0, 0x8
    sth r0, 0x6(r31)
lbl_803229FC:
    li r0, 0x0
    mr r3, r29
    stb r0, lbl_8049E3FD
    bl OSRestoreInterrupts
lbl_80322A0C:
    li r29, 0x0
    stb r29, BgJobStatus_8049E3E8
    b lbl_80322A1C
lbl_80322A18:
    bl OSRestoreInterrupts
lbl_80322A1C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SCReloadConfFileAsync
// ----------------------------------------------------------------------------
asm void SCReloadConfFileAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x4000
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bge lbl_80322A68
    li r3, -0x80
    b lbl_80322B34
lbl_80322A68:
    lis r30, Control_80465E20@ha
    lis r9, ConfFileName_803420E8@ha
    addi r30, r30, Control_80465E20@l
    li r31, 0x0
    lis r8, ProductInfoFileName_80342100@ha
    lis r4, 0x8000
    addi r7, r4, 0x3800
    addi r9, r9, ConfFileName_803420E8@l
    li r10, 0x1
    addi r8, r8, ProductInfoFileName_80342100@l
    li r6, 0x4000
    li r0, 0x100
    stw r5, 0x15c(r30)
    li r4, 0x0
    li r5, 0x4000
    stb r10, BgJobStatus_8049E3E8
    stw r31, 0x160(r30)
    stb r31, 0x15a(r30)
    stw r31, 0x17c(r30)
    stw r31, 0x180(r30)
    stw r9, 0x164(r30)
    stw r8, 0x168(r30)
    stw r3, 0x16c(r30)
    stw r7, 0x170(r30)
    stw r6, 0x174(r30)
    stw r0, 0x178(r30)
    bl memset
    mr r3, r29
    la r4, at_2159_8049D358
    li r5, 0x4
    bl memcpy
    addi r3, r29, 0x3ffc
    la r4, at_2160_8049D360
    li r5, 0x4
    bl memcpy
    li r0, 0x8
    lis r6, OpenCallbackFromReload@ha
    sth r0, 0x6(r29)
    addi r4, r30, 0x8
    addi r6, r6, OpenCallbackFromReload@l
    addi r7, r30, 0x94
    lbz r0, 0x15a(r30)
    li r5, 0x1
    stb r31, 0x159(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    stw r31, ItemIDOffsetTblOffset_8049E3F8
    lwz r3, 0x164(r3)
    stw r31, ItemNumTotal_8049E3F0
    stw r31, ItemRestSize_8049E3EC
    bl NANDPrivateOpenAsync
lbl_80322B34:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OpenCallbackFromReload
// ----------------------------------------------------------------------------
asm void OpenCallbackFromReload() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_80322BAC
    lis r4, Control_80465E20@ha
    lis r6, ReadCallbackFromReload@ha
    addi r4, r4, Control_80465E20@l
    li r5, 0x1
    lbz r0, 0x15a(r4)
    addi r3, r4, 0x8
    stb r5, 0x159(r4)
    addi r7, r4, 0x94
    slwi r0, r0, 2
    addi r6, r6, ReadCallbackFromReload@l
    add r5, r4, r0
    lwz r4, 0x16c(r5)
    lwz r5, 0x174(r5)
    bl NANDReadAsync
    cmpwi r3, 0x0
    beq lbl_80322C0C
lbl_80322BAC:
    lis r3, Control_80465E20@ha
    addi r3, r3, Control_80465E20@l
    lbz r0, 0x15a(r3)
    cmpwi r0, 0x0
    bne lbl_80322BC4
    stw r31, 0x160(r3)
lbl_80322BC4:
    lis r5, Control_80465E20@ha
    li r4, 0x0
    addi r5, r5, Control_80465E20@l
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x17c(r3)
    lbz r0, 0x159(r5)
    cmpwi r0, 0x0
    beq lbl_80322C08
    lis r4, CloseCallbackFromReloadError@ha
    addi r3, r5, 0x8
    addi r4, r4, CloseCallbackFromReloadError@l
    addi r5, r5, 0x94
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_80322C0C
lbl_80322C08:
    bl FinishFromReload
lbl_80322C0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ReadCallbackFromReload
// ----------------------------------------------------------------------------
asm void ReadCallbackFromReload() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, Control_80465E20@ha
    stw r0, 0x14(r1)
    addi r5, r5, Control_80465E20@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    lwz r0, 0x174(r4)
    cmplw r3, r0
    bne lbl_80322C7C
    stw r3, 0x17c(r4)
    li r0, 0x0
    lis r4, CloseCallbackFromReload@ha
    addi r3, r5, 0x8
    stb r0, 0x159(r5)
    addi r4, r4, CloseCallbackFromReload@l
    addi r5, r5, 0x94
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_80322CF4
lbl_80322C7C:
    lis r3, Control_80465E20@ha
    addi r3, r3, Control_80465E20@l
    lbz r0, 0x15a(r3)
    cmpwi r0, 0x0
    bne lbl_80322CAC
    cmpwi r31, 0x0
    li r0, -0x80
    beq lbl_80322CA0
    mr r0, r31
lbl_80322CA0:
    lis r3, Control_80465E20@ha
    addi r3, r3, Control_80465E20@l
    stw r0, 0x160(r3)
lbl_80322CAC:
    lis r5, Control_80465E20@ha
    li r4, 0x0
    addi r5, r5, Control_80465E20@l
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x17c(r3)
    lbz r0, 0x159(r5)
    cmpwi r0, 0x0
    beq lbl_80322CF0
    lis r4, CloseCallbackFromReloadError@ha
    addi r3, r5, 0x8
    addi r4, r4, CloseCallbackFromReloadError@l
    addi r5, r5, 0x94
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_80322CF4
lbl_80322CF0:
    bl FinishFromReload
lbl_80322CF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// CloseCallbackFromReload
// ----------------------------------------------------------------------------
asm void CloseCallbackFromReload() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    bne lbl_80322D24
    bl FinishFromReload
    b lbl_80322D84
lbl_80322D24:
    lis r4, Control_80465E20@ha
    addi r4, r4, Control_80465E20@l
    lbz r0, 0x15a(r4)
    cmpwi r0, 0x0
    bne lbl_80322D3C
    stw r3, 0x160(r4)
lbl_80322D3C:
    lis r5, Control_80465E20@ha
    li r4, 0x0
    addi r5, r5, Control_80465E20@l
    lbz r0, 0x15a(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x17c(r3)
    lbz r0, 0x159(r5)
    cmpwi r0, 0x0
    beq lbl_80322D80
    lis r4, CloseCallbackFromReloadError@ha
    addi r3, r5, 0x8
    addi r4, r4, CloseCallbackFromReloadError@l
    addi r5, r5, 0x94
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_80322D84
lbl_80322D80:
    bl FinishFromReload
lbl_80322D84:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// FinishFromReload
// ----------------------------------------------------------------------------
asm void FinishFromReload() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lis r30, OpenCallbackFromReload@ha
    stw r29, 0x14(r1)
    lis r29, Control_80465E20@ha
    addi r29, r29, Control_80465E20@l
    stw r28, 0x10(r1)
lbl_80322DC0:
    lbz r3, 0x15a(r29)
    addi r3, r3, 0x1
    clrlwi r0, r3, 24
    stb r3, 0x15a(r29)
    cmplwi r0, 0x2
    bge lbl_80322E08
    clrlslwi r0, r3, 24, 2
    stb r31, 0x159(r29)
    add r3, r29, r0
    addi r4, r29, 0x8
    lwz r3, 0x164(r3)
    addi r6, r30, OpenCallbackFromReload@l
    addi r7, r29, 0x94
    li r5, 0x1
    bl NANDPrivateOpenAsync
    cmpwi r3, 0x0
    bne lbl_80322DC0
    b lbl_80322EB0
lbl_80322E08:
    lwz r0, 0x160(r29)
    cmpwi r0, 0x0
    beq lbl_80322E24
    bge lbl_80322E2C
    cmpwi r0, -0xc
    beq lbl_80322E2C
    b lbl_80322E2C
lbl_80322E24:
    li r28, 0x3
    b lbl_80322E7C
lbl_80322E2C:
    lis r30, Control_80465E20@ha
    li r4, 0x0
    addi r30, r30, Control_80465E20@l
    li r5, 0x4000
    lwz r29, 0x16c(r30)
    mr r3, r29
    bl memset
    mr r3, r29
    la r4, at_2159_8049D358
    li r5, 0x4
    bl memcpy
    addi r3, r29, 0x3ffc
    la r4, at_2160_8049D360
    li r5, 0x4
    bl memcpy
    li r0, 0x8
    li r28, 0x3
    sth r0, 0x6(r29)
    lwz r0, 0x174(r30)
    stw r0, 0x17c(r30)
lbl_80322E7C:
    li r30, 0x0
    lis r3, 0x8000
    lis r31, Control_80465E20@ha
    stb r30, 0x38ff(r3)
    addi r31, r31, Control_80465E20@l
    lwz r12, 0x15c(r31)
    cmpwi r12, 0x0
    beq lbl_80322EAC
    lwz r3, 0x160(r31)
    mtctr r12
    bctrl
    stw r30, 0x15c(r31)
lbl_80322EAC:
    stb r28, BgJobStatus_8049E3E8
lbl_80322EB0:
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
// CloseCallbackFromReloadError
// ----------------------------------------------------------------------------
asm void CloseCallbackFromReloadError() {
    nofralloc
    b FinishFromReload
}

// ----------------------------------------------------------------------------
// ParseConfBuf
// ----------------------------------------------------------------------------
asm void ParseConfBuf() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_21
    cmplwi r4, 0xc
    lis r27, lbl_8038D8E8@ha
    mr r25, r3
    mr r26, r4
    addi r27, r27, lbl_8038D8E8@l
    blt lbl_80323104
    cmplwi r4, 0x4000
    bgt lbl_80323104
    li r0, 0x24
    add r31, r3, r4
    stw r0, lbl_8049E3F4
    la r4, at_2159_8049D358
    li r5, 0x4
    subi r31, r31, 0x4
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80323104
    mr r3, r31
    la r4, at_2160_8049D360
    li r5, 0x4
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80323104
    cmplwi r26, 0x4000
    bge lbl_80322F74
    subfic r22, r26, 0x4000
    mr r3, r31
    mr r5, r22
    li r4, 0x0
    bl memset
    add r31, r31, r22
    la r4, at_2160_8049D360
    mr r3, r31
    li r5, 0x4
    bl memcpy
lbl_80322F74:
    addi r0, r25, 0x6
    cmplw r0, r31
    ble lbl_80322F88
    li r0, 0x0
    b lbl_80322F98
lbl_80322F88:
    lbz r3, 0x4(r25)
    li r0, 0x1
    lbz r30, 0x5(r25)
    rlwimi r30, r3, 8, 16, 23
lbl_80322F98:
    cmpwi r0, 0x0
    beq lbl_80323104
    addi r29, r25, 0x6
    slwi r0, r30, 1
    add r3, r29, r0
    li r23, 0x0
    addi r0, r3, 0x2
    mr r24, r29
    subf r28, r25, r0
    b lbl_80323004
lbl_80322FC0:
    cmplw r28, r26
    bgt lbl_80323104
    subf r0, r25, r24
    cmplw r0, r26
    bgt lbl_80323104
    lhz r0, 0x0(r24)
    cmplw r28, r0
    bne lbl_80323104
    add r3, r25, r28
    addi r4, r1, 0x8
    bl UnpackItem
    cmpwi r3, 0x0
    beq lbl_80323104
    lwz r0, 0x24(r1)
    addi r24, r24, 0x2
    addi r23, r23, 0x1
    add r28, r28, r0
lbl_80323004:
    cmplw r23, r30
    blt lbl_80322FC0
    cmplw r28, r26
    bgt lbl_80323104
    slwi r0, r23, 1
    lhzx r0, r29, r0
    cmplw r28, r0
    bne lbl_80323104
    subi r3, r31, 0x46
    add r0, r25, r28
    cmplw r0, r3
    bgt lbl_80323104
    subf r28, r0, r3
    subf r5, r3, r31
    li r4, 0x0
    bl memset
    lwz r0, lbl_8049E3F4
    subi r31, r31, 0x2
    slwi r0, r0, 3
    add r26, r27, r0
    b lbl_803230D8
lbl_80323058:
    mr r3, r22
    bl strlen
    mr r21, r3
    mr r24, r29
    li r23, 0x0
    b lbl_803230CC
lbl_80323070:
    lhz r0, 0x0(r24)
    add r4, r25, r0
    lbzx r0, r25, r0
    clrlwi r3, r0, 27
    addi r0, r3, 0x1
    cmplw r21, r0
    bne lbl_803230C4
    mr r3, r22
    mr r5, r21
    addi r4, r4, 0x1
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_803230C4
    lwz r0, 0x4(r27)
    slwi r3, r23, 1
    add r3, r29, r3
    neg r0, r0
    subf r3, r25, r3
    slwi r0, r0, 1
    sthx r3, r31, r0
    b lbl_803230D4
lbl_803230C4:
    addi r24, r24, 0x2
    addi r23, r23, 0x1
lbl_803230CC:
    cmplw r23, r30
    blt lbl_80323070
lbl_803230D4:
    addi r27, r27, 0x8
lbl_803230D8:
    cmplw r27, r26
    bge lbl_803230EC
    lwz r22, 0x0(r27)
    cmpwi r22, 0x0
    bne lbl_80323058
lbl_803230EC:
    subf r0, r25, r31
    stw r30, ItemNumTotal_8049E3F0
    li r3, 0x0
    stw r0, ItemIDOffsetTblOffset_8049E3F8
    stw r28, ItemRestSize_8049E3EC
    b lbl_80323108
lbl_80323104:
    li r3, 0x2
lbl_80323108:
    addi r11, r1, 0x60
    bl _restgpr_21
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// UnpackItem
// ----------------------------------------------------------------------------
asm void UnpackItem() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl memset
    lbz r4, 0x0(r30)
    addi r0, r30, 0x1
    stw r0, 0x14(r31)
    clrlwi r3, r4, 27
    rlwinm r6, r4, 0, 24, 26
    addi r0, r3, 0x1
    add r3, r30, r0
    cmpwi r6, 0x80
    addi r3, r3, 0x1
    stw r0, 0xc(r31)
    stw r3, 0x18(r31)
    beq lbl_803231D4
    bge lbl_803231A4
    cmpwi r6, 0x40
    beq lbl_803231F8
    bge lbl_80323198
    cmpwi r6, 0x20
    beq lbl_8032321C
    b lbl_80323290
lbl_80323198:
    cmpwi r6, 0x60
    beq lbl_803231C8
    b lbl_80323290
lbl_803231A4:
    cmpwi r6, 0xc0
    beq lbl_803231EC
    bge lbl_803231BC
    cmpwi r6, 0xa0
    beq lbl_803231E0
    b lbl_80323290
lbl_803231BC:
    cmpwi r6, 0xe0
    beq lbl_803231C8
    b lbl_80323290
lbl_803231C8:
    li r0, 0x1
    stw r0, 0x10(r31)
    b lbl_80323244
lbl_803231D4:
    li r0, 0x2
    stw r0, 0x10(r31)
    b lbl_80323244
lbl_803231E0:
    li r0, 0x4
    stw r0, 0x10(r31)
    b lbl_80323244
lbl_803231EC:
    li r0, 0x8
    stw r0, 0x10(r31)
    b lbl_80323244
lbl_803231F8:
    lbz r4, 0x0(r3)
    addi r0, r3, 0x1
    lwz r3, 0x1c(r31)
    addi r4, r4, 0x1
    stw r0, 0x18(r31)
    addi r0, r3, 0x1
    stw r4, 0x10(r31)
    stw r0, 0x1c(r31)
    b lbl_80323244
lbl_8032321C:
    lbz r5, 0x0(r3)
    addi r0, r3, 0x2
    lbz r4, 0x1(r3)
    rlwimi r4, r5, 8, 16, 23
    lwz r3, 0x1c(r31)
    addi r4, r4, 0x1
    stw r0, 0x18(r31)
    addi r0, r3, 0x2
    stw r4, 0x10(r31)
    stw r0, 0x1c(r31)
lbl_80323244:
    cmplwi r6, 0x40
    beq lbl_80323254
    cmplwi r6, 0x20
    bne lbl_80323260
lbl_80323254:
    li r0, 0x40
    stb r0, 0x9(r31)
    b lbl_80323274
lbl_80323260:
    stb r6, 0x8(r31)
    mr r3, r31
    lwz r4, 0x18(r31)
    lwz r5, 0x10(r31)
    bl memcpy
lbl_80323274:
    lwz r3, 0xc(r31)
    lwz r0, 0x10(r31)
    lwz r4, 0x1c(r31)
    add r0, r3, r0
    add r3, r0, r4
    addi r0, r3, 0x1
    stw r0, 0x1c(r31)
lbl_80323290:
    lwz r3, 0x10(r31)
    lwz r31, 0xc(r1)
    neg r0, r3
    lwz r30, 0x8(r1)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DeleteItemByID
// ----------------------------------------------------------------------------
asm void DeleteItemByID() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r0, lbl_8049E3F4
    lis r31, ConfBuf_80465FC0@ha
    addi r31, r31, ConfBuf_80465FC0@l
    cmplw r3, r0
    bge lbl_80323430
    lwz r4, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r4, 0x0
    beq lbl_80323430
    neg r0, r3
    add r28, r31, r4
    slwi r0, r0, 1
    lhzx r30, r28, r0
    cmpwi r30, 0x0
    beq lbl_80323430
    lwz r0, ItemNumTotal_8049E3F0
    cmpwi r0, 0x0
    beq lbl_80323430
    add r27, r31, r30
    addi r25, r31, 0x6
    slwi r0, r0, 1
    lhzx r5, r31, r30
    add r24, r25, r0
    lhz r3, 0x2(r27)
    mr r4, r27
    addi r0, r30, 0x2
    subf r6, r5, r3
    lhz r26, 0x0(r24)
    mr r3, r27
    subf r5, r0, r5
    addi r29, r6, 0x2
    addi r4, r4, 0x2
    bl memmove
    subi r4, r24, 0x2
    addi r0, r4, 0x2
    subf r0, r25, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r4, r25
    blt lbl_80323394
lbl_80323368:
    cmplw r4, r27
    bge lbl_80323380
    lhz r3, 0x0(r4)
    subi r0, r3, 0x2
    sth r0, 0x0(r4)
    b lbl_8032338C
lbl_80323380:
    lhz r0, 0x0(r4)
    subf r0, r29, r0
    sth r0, 0x0(r4)
lbl_8032338C:
    subi r4, r4, 0x2
    bdnz lbl_80323368
lbl_80323394:
    lhz r5, 0x0(r27)
    add r4, r31, r29
    add r0, r5, r29
    add r3, r31, r5
    add r4, r5, r4
    subf r5, r0, r26
    bl memmove
    subf r0, r29, r26
    mr r5, r29
    add r3, r31, r0
    li r4, 0x0
    bl memset
    lwz r0, lbl_8049E3F4
    li r6, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_8032340C
lbl_803233DC:
    neg r0, r6
    slwi r5, r0, 1
    lhzx r4, r28, r5
    cmplw r4, r30
    blt lbl_80323404
    ble lbl_80323400
    subi r0, r4, 0x2
    sthx r0, r28, r5
    b lbl_80323404
lbl_80323400:
    sthx r3, r28, r5
lbl_80323404:
    addi r6, r6, 0x1
    bdnz lbl_803233DC
lbl_8032340C:
    lwz r4, ItemRestSize_8049E3EC
    li r0, 0x1
    lwz r3, ItemNumTotal_8049E3F0
    add r4, r4, r29
    stb r0, lbl_8049E3FD
    subi r0, r3, 0x1
    stw r4, ItemRestSize_8049E3EC
    stw r0, ItemNumTotal_8049E3F0
    sth r0, 0x4(r31)
lbl_80323430:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// CreateItemByID
// ----------------------------------------------------------------------------
asm void CreateItemByID() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r0, lbl_8049E3F4
    lis r31, ConfBuf_80465FC0@ha
    lis r7, lbl_8038D8E8@ha
    mr r23, r3
    cmplw r3, r0
    mr r24, r4
    mr r25, r5
    mr r26, r6
    addi r31, r31, ConfBuf_80465FC0@l
    addi r7, r7, lbl_8038D8E8@l
    li r29, 0x1
    bge lbl_803236A4
    li r0, 0x0
    cmplw r5, r0
    beq lbl_803236A4
    lwz r0, ItemNumTotal_8049E3F0
    cmplwi r0, 0xffff
    bge lbl_803236A4
    lwz r0, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r0, 0x0
    beq lbl_803236A4
    cmpwi r4, 0xa0
    beq lbl_80323508
    bge lbl_803234E0
    cmpwi r4, 0x60
    beq lbl_803234F8
    bge lbl_803234D4
    cmpwi r4, 0x40
    beq lbl_80323518
    b lbl_803236A4
lbl_803234D4:
    cmpwi r4, 0x80
    beq lbl_80323500
    b lbl_803236A4
lbl_803234E0:
    cmpwi r4, 0xe0
    beq lbl_803234F8
    bge lbl_803236A4
    cmpwi r4, 0xc0
    beq lbl_80323510
    b lbl_803236A4
lbl_803234F8:
    li r26, 0x1
    b lbl_80323544
lbl_80323500:
    li r26, 0x2
    b lbl_80323544
lbl_80323508:
    li r26, 0x4
    b lbl_80323544
lbl_80323510:
    li r26, 0x8
    b lbl_80323544
lbl_80323518:
    cmpwi r6, 0x0
    beq lbl_803236A4
    lis r0, 0x1
    cmplw r6, r0
    bgt lbl_803236A4
    cmplwi r6, 0x100
    ble lbl_80323540
    li r24, 0x20
    li r29, 0x3
    b lbl_80323544
lbl_80323540:
    li r29, 0x2
lbl_80323544:
    add r29, r29, r26
    li r0, 0x0
    b lbl_80323560
lbl_80323550:
    lwz r4, 0x4(r7)
    cmpw r4, r3
    beq lbl_8032356C
    addi r7, r7, 0x8
lbl_80323560:
    lwz r28, 0x0(r7)
    cmplw r28, r0
    bne lbl_80323550
lbl_8032356C:
    li r0, 0x0
    cmplw r28, r0
    beq lbl_803236A4
    mr r3, r28
    bl strlen
    cmplwi r3, 0x20
    mr r30, r3
    bgt lbl_803236A4
    add r29, r29, r3
    lwz r3, ItemRestSize_8049E3EC
    addi r0, r29, 0x2
    cmplw r3, r0
    blt lbl_803236A4
    lwz r3, ItemNumTotal_8049E3F0
    addi r22, r31, 0x6
    lhz r0, 0x6(r31)
    slwi r3, r3, 1
    lhzx r5, r22, r3
    add r4, r0, r31
    add r27, r22, r3
    addi r3, r4, 0x2
    subf r5, r0, r5
    bl memmove
lbl_803235C8:
    lhz r3, 0x0(r22)
    addi r0, r3, 0x2
    sth r0, 0x0(r22)
    addi r22, r22, 0x2
    cmplw r22, r27
    ble lbl_803235C8
    lhz r5, 0x0(r27)
    subi r0, r30, 0x1
    mr r4, r28
    add r28, r31, r5
    or r0, r24, r0
    stb r0, 0x0(r28)
    mr r5, r30
    addi r3, r28, 0x1
    bl memcpy
    cmplwi r24, 0x40
    add r3, r30, r28
    addi r28, r3, 0x1
    bne lbl_80323624
    subi r0, r26, 0x1
    stb r0, 0x0(r28)
    addi r28, r28, 0x1
    b lbl_80323640
lbl_80323624:
    cmplwi r24, 0x20
    bne lbl_80323640
    subi r3, r26, 0x1
    extrwi r0, r3, 8, 16
    stb r0, 0x0(r28)
    stb r3, 0x1(r28)
    addi r28, r28, 0x2
lbl_80323640:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl memcpy
    lwz r5, ItemIDOffsetTblOffset_8049E3F8
    li r0, 0x1
    neg r4, r23
    subf r6, r31, r27
    add r7, r31, r5
    lwz r3, ItemNumTotal_8049E3F0
    slwi r5, r4, 1
    stb r0, lbl_8049E3FD
    addi r4, r3, 0x1
    li r3, 0x1
    sthx r6, r7, r5
    addi r6, r29, 0x2
    lwz r5, ItemRestSize_8049E3EC
    lhz r7, 0x0(r27)
    subf r5, r6, r5
    stw r4, ItemNumTotal_8049E3F0
    add r6, r7, r29
    sth r6, 0x2(r27)
    stw r5, ItemRestSize_8049E3EC
    sth r4, 0x4(r31)
    b lbl_803236A8
lbl_803236A4:
    li r3, 0x0
lbl_803236A8:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SCFindByteArrayItem
// ----------------------------------------------------------------------------
asm void SCFindByteArrayItem() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r31, 0x0
    bl OSDisableInterrupts
    li r0, 0x0
    mr r30, r3
    cmplw r27, r0
    beq lbl_8032377C
    lwz r0, lbl_8049E3F4
    lis r5, ConfBuf_80465FC0@ha
    addi r5, r5, ConfBuf_80465FC0@l
    cmplw r29, r0
    bge lbl_80323744
    lwz r3, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r3, 0x0
    beq lbl_80323744
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80323744
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl UnpackItem
    b lbl_80323748
lbl_80323744:
    li r3, 0x0
lbl_80323748:
    cmpwi r3, 0x0
    beq lbl_8032377C
    lbz r0, 0x11(r1)
    cmpwi r0, 0x0
    beq lbl_8032377C
    lwz r0, 0x18(r1)
    cmplw r0, r28
    bne lbl_8032377C
    lwz r4, 0x20(r1)
    mr r3, r27
    mr r5, r28
    bl memcpy
    li r31, 0x1
lbl_8032377C:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SCReplaceByteArrayItem
// ----------------------------------------------------------------------------
asm void SCReplaceByteArrayItem() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r31, 0x0
    bl OSDisableInterrupts
    li r0, 0x0
    mr r30, r3
    cmplw r27, r0
    beq lbl_803238A0
    lwz r0, lbl_8049E3F4
    lis r5, ConfBuf_80465FC0@ha
    addi r5, r5, ConfBuf_80465FC0@l
    cmplw r29, r0
    bge lbl_80323824
    lwz r3, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r3, 0x0
    beq lbl_80323824
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80323824
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl UnpackItem
    b lbl_80323828
lbl_80323824:
    li r3, 0x0
lbl_80323828:
    cmpwi r3, 0x0
    beq lbl_80323888
    lbz r0, 0x11(r1)
    cmpwi r0, 0x0
    beq lbl_80323880
    lwz r0, 0x18(r1)
    cmplw r0, r28
    bne lbl_80323880
    lwz r3, 0x20(r1)
    mr r4, r27
    mr r5, r28
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80323878
    lwz r3, 0x20(r1)
    mr r4, r27
    mr r5, r28
    bl memcpy
    li r0, 0x1
    stb r0, lbl_8049E3FD
lbl_80323878:
    li r31, 0x1
    b lbl_803238A0
lbl_80323880:
    mr r3, r29
    bl DeleteItemByID
lbl_80323888:
    mr r3, r29
    mr r5, r27
    mr r6, r28
    li r4, 0x40
    bl CreateItemByID
    mr r31, r3
lbl_803238A0:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SCReplaceIntegerItem
// ----------------------------------------------------------------------------
asm void SCReplaceIntegerItem() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E3F4
    lis r5, ConfBuf_80465FC0@ha
    mr r30, r3
    cmplw r29, r0
    addi r5, r5, ConfBuf_80465FC0@l
    bge lbl_80323940
    lwz r3, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r3, 0x0
    beq lbl_80323940
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80323940
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl UnpackItem
    b lbl_80323944
lbl_80323940:
    li r3, 0x0
lbl_80323944:
    cmpwi r3, 0x0
    beq lbl_80323998
    lbz r0, 0x10(r1)
    cmplw r0, r31
    bne lbl_80323990
    lwz r3, 0x20(r1)
    mr r4, r28
    lwz r5, 0x18(r1)
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80323988
    lwz r3, 0x20(r1)
    mr r4, r28
    lwz r5, 0x18(r1)
    bl memcpy
    li r0, 0x1
    stb r0, lbl_8049E3FD
lbl_80323988:
    li r31, 0x1
    b lbl_803239B0
lbl_80323990:
    mr r3, r29
    bl DeleteItemByID
lbl_80323998:
    mr r3, r29
    mr r4, r31
    mr r5, r28
    li r6, 0x0
    bl CreateItemByID
    mr r31, r3
lbl_803239B0:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SCFindU8Item
// ----------------------------------------------------------------------------
asm void SCFindU8Item() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E3F4
    lis r5, ConfBuf_80465FC0@ha
    mr r31, r3
    cmplw r29, r0
    addi r5, r5, ConfBuf_80465FC0@l
    bge lbl_80323A58
    lwz r3, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r3, 0x0
    beq lbl_80323A58
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80323A58
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl UnpackItem
    b lbl_80323A5C
lbl_80323A58:
    li r3, 0x0
lbl_80323A5C:
    cmpwi r3, 0x0
    beq lbl_80323A84
    lbz r0, 0x10(r1)
    cmplwi r0, 0x60
    bne lbl_80323A84
    lwz r4, 0x20(r1)
    mr r3, r28
    lwz r5, 0x18(r1)
    bl memcpy
    li r30, 0x1
lbl_80323A84:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SCFindS8Item
// ----------------------------------------------------------------------------
asm void SCFindS8Item() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E3F4
    lis r5, ConfBuf_80465FC0@ha
    mr r31, r3
    cmplw r29, r0
    addi r5, r5, ConfBuf_80465FC0@l
    bge lbl_80323B2C
    lwz r3, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r3, 0x0
    beq lbl_80323B2C
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80323B2C
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl UnpackItem
    b lbl_80323B30
lbl_80323B2C:
    li r3, 0x0
lbl_80323B30:
    cmpwi r3, 0x0
    beq lbl_80323B58
    lbz r0, 0x10(r1)
    cmplwi r0, 0x60
    bne lbl_80323B58
    lwz r4, 0x20(r1)
    mr r3, r28
    lwz r5, 0x18(r1)
    bl memcpy
    li r30, 0x1
lbl_80323B58:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SCFindU32Item
// ----------------------------------------------------------------------------
asm void SCFindU32Item() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E3F4
    lis r5, ConfBuf_80465FC0@ha
    mr r31, r3
    cmplw r29, r0
    addi r5, r5, ConfBuf_80465FC0@l
    bge lbl_80323C00
    lwz r3, ItemIDOffsetTblOffset_8049E3F8
    cmpwi r3, 0x0
    beq lbl_80323C00
    neg r0, r29
    add r3, r5, r3
    slwi r0, r0, 1
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80323C00
    lhzx r0, r5, r0
    addi r4, r1, 0x8
    add r3, r5, r0
    bl UnpackItem
    b lbl_80323C04
lbl_80323C00:
    li r3, 0x0
lbl_80323C04:
    cmpwi r3, 0x0
    beq lbl_80323C2C
    lbz r0, 0x10(r1)
    cmplwi r0, 0xa0
    bne lbl_80323C2C
    lwz r4, 0x20(r1)
    mr r3, r28
    lwz r5, 0x18(r1)
    bl memcpy
    li r30, 0x1
lbl_80323C2C:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SCReplaceU8Item
// ----------------------------------------------------------------------------
asm void SCReplaceU8Item() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x60
    stw r0, 0x14(r1)
    stb r3, 0x8(r1)
    addi r3, r1, 0x8
    bl SCReplaceIntegerItem
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __SCFlushSyncCallback
// ----------------------------------------------------------------------------
asm void __SCFlushSyncCallback() {
    nofralloc
    lis r3, Control_80465E20@ha
    addi r3, r3, Control_80465E20@l
    b fn_8031D978
}

// ----------------------------------------------------------------------------
// SCFlushAsync
// ----------------------------------------------------------------------------
asm void SCFlushAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lis r29, Control_80465E20@ha
    addi r29, r29, Control_80465E20@l
    stw r28, 0x10(r1)
    addi r28, r29, 0x0
    bl OSDisableInterrupts
    lbz r0, BgJobStatus_8049E3E8
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80323E5C
    li r0, 0x0
    li r3, 0x1
    cmplw r30, r0
    stb r3, BgJobStatus_8049E3E8
    bne lbl_80323CEC
    lis r30, __SCFlushSyncCallback@ha
    addi r30, r30, __SCFlushSyncCallback@l
lbl_80323CEC:
    lbz r0, lbl_8049E3FD
    li r4, 0x0
    li r3, 0x4000
    stw r30, 0x184(r28)
    cmpwi r0, 0x0
    stw r4, 0x188(r28)
    stb r4, 0x159(r28)
    stw r3, 0x18c(r28)
    beq lbl_80323D18
    li r0, 0x1
    b lbl_80323D1C
lbl_80323D18:
    li r0, 0x0
lbl_80323D1C:
    cmpwi r0, 0x0
    bne lbl_80323D84
    mr r3, r31
    bl OSRestoreInterrupts
    addi r29, r29, 0x0
    lwz r0, 0x188(r29)
    cmpwi r0, 0x0
    beq lbl_80323D44
    li r0, 0x1
    stb r0, lbl_8049E3FD
lbl_80323D44:
    lwz r12, 0x184(r29)
    cmpwi r12, 0x0
    beq lbl_80323D78
    li r30, 0x0
    lwz r3, 0x188(r29)
    stw r30, 0x184(r29)
    mtctr r12
    bctrl
    lwz r0, 0x0(r29)
    cmplw r0, r30
    beq lbl_80323D78
    mr r3, r29
    bl fn_8031D978
lbl_80323D78:
    lwz r0, 0x188(r29)
    stb r0, BgJobStatus_8049E3E8
    b lbl_80323E8C
lbl_80323D84:
    li r30, 0x0
    addi r3, r29, 0x41a0
    stb r30, lbl_8049E3FD
    addi r4, r29, 0x1a0
    li r5, 0x4000
    bl memcpy
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, ConfFileName_803420E8@ha
    lis r31, MyNandCallback@ha
    stb r30, 0x158(r28)
    addi r3, r3, ConfFileName_803420E8@l
    addi r4, r28, 0x150
    addi r5, r31, MyNandCallback@l
    addi r6, r28, 0x94
    bl NANDPrivateGetTypeAsync
    cmpwi r3, 0x0
    beq lbl_80323E8C
    addi r5, r29, 0x0
    li r3, 0x2
    lbz r0, 0x159(r5)
    stw r3, 0x188(r5)
    cmpwi r0, 0x0
    beq lbl_80323E04
    li r0, 0x9
    addi r3, r5, 0x8
    stb r0, 0x158(r5)
    addi r4, r31, MyNandCallback@l
    addi r5, r5, 0x94
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_80323E8C
lbl_80323E04:
    addi r29, r29, 0x0
    lwz r0, 0x188(r29)
    cmpwi r0, 0x0
    beq lbl_80323E1C
    li r0, 0x1
    stb r0, lbl_8049E3FD
lbl_80323E1C:
    lwz r12, 0x184(r29)
    cmpwi r12, 0x0
    beq lbl_80323E50
    li r31, 0x0
    lwz r3, 0x188(r29)
    stw r31, 0x184(r29)
    mtctr r12
    bctrl
    lwz r0, 0x0(r29)
    cmplw r0, r31
    beq lbl_80323E50
    mr r3, r29
    bl fn_8031D978
lbl_80323E50:
    lwz r0, 0x188(r29)
    stb r0, BgJobStatus_8049E3E8
    b lbl_80323E8C
lbl_80323E5C:
    cmpwi r30, 0x0
    beq lbl_80323E84
    cmplwi r0, 0x1
    bne lbl_80323E70
    b lbl_80323E74
lbl_80323E70:
    li r0, 0x2
lbl_80323E74:
    mr r12, r30
    mr r3, r0
    mtctr r12
    bctrl
lbl_80323E84:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80323E8C:
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
// MyNandCallback
// ----------------------------------------------------------------------------
asm void MyNandCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, Control_80465E20@ha
    stw r0, 0x14(r1)
    addi r7, r7, Control_80465E20@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, 0x158(r7)
    cmplwi r0, 0x9
    bgt lbl_803241CC
    lis r4, jumptable_8038DA08@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8038DA08@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r3, 0x0
    bne lbl_80323F44
    lbz r0, 0x150(r7)
    cmplwi r0, 0x1
    bne lbl_80323F44
    li r0, 0x1
    lis r3, ConfFileName_803420E8@ha
    lis r5, MyNandCallback@ha
    stb r0, 0x158(r7)
    addi r3, r3, ConfFileName_803420E8@l
    addi r4, r7, 0x150
    addi r5, r5, MyNandCallback@l
    addi r6, r7, 0x94
    bl NANDPrivateGetStatusAsync
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
    cmpwi r3, 0x0
    bne lbl_80323F44
    lbz r0, 0x157(r7)
    cmplwi r0, 0x3f
    beq lbl_8032401C
lbl_80323F44:
    li r0, 0x2
    lis r3, ConfFileName_803420E8@ha
    lis r4, MyNandCallback@ha
    stb r0, 0x158(r7)
    addi r3, r3, ConfFileName_803420E8@l
    addi r5, r7, 0x94
    addi r4, r4, MyNandCallback@l
    bl NANDPrivateDeleteAsync
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
    li r0, 0x3
    lis r3, lbl_803420D8@ha
    lis r5, MyNandCallback@ha
    stb r0, 0x158(r7)
    addi r3, r3, lbl_803420D8@l
    addi r4, r7, 0x150
    addi r5, r5, MyNandCallback@l
    addi r6, r7, 0x94
    bl NANDPrivateGetTypeAsync
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
    cmpwi r3, 0x0
    bne lbl_80323FB4
    lbz r0, 0x150(r7)
    cmplwi r0, 0x2
    beq lbl_80323FE8
lbl_80323FB4:
    li r0, 0x4
    lis r3, lbl_803420D8@ha
    lis r6, MyNandCallback@ha
    stb r0, 0x158(r7)
    addi r3, r3, lbl_803420D8@l
    addi r7, r7, 0x94
    addi r6, r6, MyNandCallback@l
    li r4, 0x3f
    li r5, 0x0
    bl fn_8030F048
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
lbl_80323FE8:
    li r0, 0x5
    lis r3, ConfFileName_803420E8@ha
    lis r6, MyNandCallback@ha
    stb r0, 0x158(r7)
    addi r3, r3, ConfFileName_803420E8@l
    addi r7, r7, 0x94
    addi r6, r6, MyNandCallback@l
    li r4, 0x3f
    li r5, 0x0
    bl fn_8030E618
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
lbl_8032401C:
    li r0, 0x6
    lis r3, ConfFileName_803420E8@ha
    lis r6, MyNandCallback@ha
    stb r0, 0x158(r7)
    addi r4, r7, 0x8
    addi r3, r3, ConfFileName_803420E8@l
    addi r6, r6, MyNandCallback@l
    addi r7, r7, 0x94
    li r5, 0x2
    bl NANDPrivateOpenAsync
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
    cmpwi r3, 0x0
    bne lbl_80324134
    li r3, 0x1
    li r0, 0x7
    lis r4, lbl_80469FC0@ha
    lis r6, MyNandCallback@ha
    stb r3, 0x159(r7)
    addi r3, r7, 0x8
    lwz r5, 0x18c(r7)
    addi r4, r4, lbl_80469FC0@l
    stb r0, 0x158(r7)
    addi r6, r6, MyNandCallback@l
    addi r7, r7, 0x94
    bl NANDWriteAsync
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
    lwz r0, 0x18c(r7)
    cmplw r3, r0
    bne lbl_80324134
    li r3, 0x0
    li r0, 0x8
    lis r4, MyNandCallback@ha
    stb r3, 0x159(r7)
    addi r3, r7, 0x8
    addi r5, r7, 0x94
    stb r0, 0x158(r7)
    addi r4, r4, MyNandCallback@l
    bl NANDCloseAsync
    cmpwi r3, 0x0
    bne lbl_80324134
    b lbl_803241CC
    cmpwi r3, 0x0
    bne lbl_80324134
    lis r30, Control_80465E20@ha
    addi r30, r30, Control_80465E20@l
    lwz r0, 0x188(r30)
    cmpwi r0, 0x0
    beq lbl_803240F4
    li r0, 0x1
    stb r0, lbl_8049E3FD
lbl_803240F4:
    lwz r12, 0x184(r30)
    cmpwi r12, 0x0
    beq lbl_80324128
    li r31, 0x0
    lwz r3, 0x188(r30)
    stw r31, 0x184(r30)
    mtctr r12
    bctrl
    lwz r0, 0x0(r30)
    cmplw r0, r31
    beq lbl_80324128
    mr r3, r30
    bl fn_8031D978
lbl_80324128:
    lwz r0, 0x188(r30)
    stb r0, BgJobStatus_8049E3E8
    b lbl_803241CC
lbl_80324134:
    lis r5, Control_80465E20@ha
    li r3, 0x2
    addi r5, r5, Control_80465E20@l
    lbz r0, 0x159(r5)
    stw r3, 0x188(r5)
    cmpwi r0, 0x0
    beq lbl_80324174
    li r0, 0x9
    lis r4, MyNandCallback@ha
    stb r0, 0x158(r5)
    addi r3, r5, 0x8
    addi r4, r4, MyNandCallback@l
    addi r5, r5, 0x94
    bl NANDCloseAsync
    cmpwi r3, 0x0
    beq lbl_803241CC
lbl_80324174:
    lis r30, Control_80465E20@ha
    addi r30, r30, Control_80465E20@l
    lwz r0, 0x188(r30)
    cmpwi r0, 0x0
    beq lbl_80324190
    li r0, 0x1
    stb r0, lbl_8049E3FD
lbl_80324190:
    lwz r12, 0x184(r30)
    cmpwi r12, 0x0
    beq lbl_803241C4
    li r31, 0x0
    lwz r3, 0x188(r30)
    stw r31, 0x184(r30)
    mtctr r12
    bctrl
    lwz r0, 0x0(r30)
    cmplw r0, r31
    beq lbl_803241C4
    mr r3, r30
    bl fn_8031D978
lbl_803241C4:
    lwz r0, 0x188(r30)
    stb r0, BgJobStatus_8049E3E8
lbl_803241CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

