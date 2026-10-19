#include "types.h"

// Translation unit: src/revolution/dvd/dvd_broadway.cpp
// Total functions: 32

// Small Data symbols (@sda21)
extern float DiFD;
extern float diCommand_8049E134;
extern float freeCommandBuf_8049E11C;
extern float freeDvdContext_8049E120;
extern float lbl_8049D030;
extern float lbl_8049E119;
extern float lbl_8049E124;
extern float lbl_8049E125;
extern float lbl_8049E12C;
extern float lbl_8049E130;
extern float lbl_8049E138;
extern float requestInProgress_8049E118;
extern float spinUpValue_8049E128;

// Global data symbols (@ha/@l)
extern u8 at_3872_80379890[];
extern u8 diRegValCache_80461260[];
extern u8 dvdContexts_804611E0[];
extern u8 lbl_803798F0[];
extern u8 lbl_80461280[];
extern u8 lbl_804612A0[];
extern u8 lbl_80461360[];
extern u8 lbl_80461380[];

// Forward declarations
extern void DVDLowAudioBufferConfig();
extern void DVDLowClearCoverInterrupt();
extern void DVDLowClosePartition();
extern void DVDLowFinalize();
extern void DVDLowGetControlRegister();
extern void DVDLowGetCoverRegister();
extern void DVDLowGetImmBufferReg();
extern void DVDLowGetNoDiscOpenPartitionParams();
extern void DVDLowGetStatusRegister();
extern void DVDLowInit();
extern void DVDLowMaskCoverInterrupt();
extern void DVDLowOpenPartition();
extern void DVDLowOpenPartitionWithTmdAndTicketView();
extern void DVDLowPrepareCoverRegister();
extern void DVDLowPrepareStatusRegister();
extern void DVDLowRead();
extern void DVDLowReadDiskID();
extern void DVDLowReportKey();
extern void DVDLowRequestError();
extern void DVDLowReset();
extern void DVDLowSeek();
extern void DVDLowSetMaximumRotation();
extern void DVDLowSetSpinupFlag();
extern void DVDLowStopMotor();
extern void DVDLowUnencryptedRead();
extern void DVDLowUnmaskStatusInterrupts();
extern void IOS_Close();
extern void IOS_IoctlAsync();
extern void IOS_IoctlvAsync();
extern void IOS_Open();
extern void IPCCltInit();
extern void IPCGetBufferHi();
extern void IPCGetBufferLo();
extern void IPCSetBufferLo();
extern void OSReport();
extern void __DVDLowTestAlarm();
extern void _restgpr_24();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_27();
extern void doPrepareCoverRegisterCallback();
extern void doTransactionCallback();
extern void fn_802D75F8();
extern void fn_802D7A9C();
extern void fn_802D8B7C();
extern void strncpy();

// ----------------------------------------------------------------------------
// doTransactionCallback
// ----------------------------------------------------------------------------
asm void doTransactionCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r5, 0xc(r4)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D6BC0
    lis r3, at_3872_80379890@ha
    addi r3, r3, at_3872_80379890@l
    opword 0x4CC63182
    bl OSReport
    lis r3, 0xfeec
    subi r0, r3, 0x2513
    stw r0, 0xc(r31)
    b lbl_802D6C14
lbl_802D6BC0:
    li r6, 0x0
    stb r6, requestInProgress_8049E118
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802D6C14
    lbz r0, lbl_8049E138
    li r5, 0x1
    stb r5, lbl_8049E119
    cmplwi r0, 0x1
    bne lbl_802D6BF0
    stb r6, lbl_8049E138
    ori r3, r3, 0x8
lbl_802D6BF0:
    clrlwi. r0, r3, 31
    beq lbl_802D6C00
    li r0, 0x0
    stw r0, lbl_8049E12C
lbl_802D6C00:
    lwz r12, 0x0(r4)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, lbl_8049E119
lbl_802D6C14:
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// doPrepareCoverRegisterCallback
// ----------------------------------------------------------------------------
asm void doPrepareCoverRegisterCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, diRegValCache_80461260@ha
    lis r6, lbl_80461280@ha
    stw r0, 0x14(r1)
    addi r5, r5, diRegValCache_80461260@l
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r0, lbl_80461280@l(r6)
    li r6, 0x0
    stb r6, requestInProgress_8049E118
    stw r0, 0x4(r5)
    lwz r5, 0xc(r4)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D6C94
    lis r3, at_3872_80379890@ha
    addi r3, r3, at_3872_80379890@l
    opword 0x4CC63182
    bl OSReport
    lis r3, 0xfeec
    subi r0, r3, 0x2513
    stw r0, 0xc(r31)
    b lbl_802D6CD0
lbl_802D6C94:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802D6CD0
    lbz r0, lbl_8049E138
    li r5, 0x1
    stb r5, lbl_8049E119
    cmplwi r0, 0x1
    bne lbl_802D6CBC
    stb r6, lbl_8049E138
    ori r3, r3, 0x8
lbl_802D6CBC:
    lwz r12, 0x0(r4)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, lbl_8049E119
lbl_802D6CD0:
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowFinalize
// ----------------------------------------------------------------------------
asm void DVDLowFinalize() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, DiFD
    bl IOS_Close
    cmpwi r3, 0x0
    beq lbl_802D6D24
    lis r3, lbl_803798F0@ha
    addi r3, r3, lbl_803798F0@l
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D6D30
lbl_802D6D24:
    li r0, 0x0
    li r3, 0x1
    stb r0, lbl_8049E125
lbl_802D6D30:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowInit
// ----------------------------------------------------------------------------
asm void DVDLowInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lbz r0, lbl_8049E125
    cmpwi r0, 0x0
    bne lbl_802D6EE8
    li r0, 0x1
    stb r0, lbl_8049E125
    bl IPCCltInit
    cmpwi r3, 0x0
    beq lbl_802D6D94
    mr r4, r3
    addi r3, r31, 0x88
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D6F8C
lbl_802D6D94:
    bl IPCGetBufferLo
    mr r30, r3
    bl IPCGetBufferHi
    clrlwi. r0, r30, 27
    beq lbl_802D6DB0
    addi r0, r30, 0x1f
    clrlwi r30, r0, 27
lbl_802D6DB0:
    addi r0, r30, 0x80
    cmplw r0, r3
    ble lbl_802D6DCC
    addi r3, r31, 0xa8
    li r4, 0x80
    opword 0x4CC63182
    bl OSReport
lbl_802D6DCC:
    addi r3, r30, 0x80
    bl IPCSetBufferLo
    cmpwi r30, 0x0
    stw r30, diCommand_8049E134
    bne lbl_802D6DF4
    addi r3, r31, 0xe4
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    b lbl_802D6E58
lbl_802D6DF4:
    bl IPCGetBufferLo
    mr r30, r3
    bl IPCGetBufferHi
    clrlwi. r0, r30, 27
    beq lbl_802D6E10
    addi r0, r30, 0x1f
    clrlwi r30, r0, 27
lbl_802D6E10:
    addi r0, r30, 0x20
    cmplw r0, r3
    ble lbl_802D6E2C
    addi r3, r31, 0xa8
    li r4, 0x20
    opword 0x4CC63182
    bl OSReport
lbl_802D6E2C:
    addi r3, r30, 0x20
    bl IPCSetBufferLo
    cmpwi r30, 0x0
    stw r30, lbl_8049E130
    bne lbl_802D6E54
    addi r3, r31, 0x10c
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    b lbl_802D6E58
lbl_802D6E54:
    li r0, 0x1
lbl_802D6E58:
    cmpwi r0, 0x0
    bne lbl_802D6E68
    li r3, 0x0
    b lbl_802D6F8C
lbl_802D6E68:
    lbz r0, lbl_8049E124
    cmpwi r0, 0x0
    bne lbl_802D6EE8
    li r5, 0x0
    lis r4, dvdContexts_804611E0@ha
    stwu r5, dvdContexts_804611E0@l(r4)
    lis r3, 0xfeec
    li r0, 0x1
    li r6, 0x2
    stw r5, 0x4(r4)
    subi r3, r3, 0x2513
    stb r5, 0x8(r4)
    stw r3, 0xc(r4)
    stw r5, 0x10(r4)
    stw r5, 0x20(r4)
    stw r5, 0x24(r4)
    stb r5, 0x28(r4)
    stw r3, 0x2c(r4)
    stw r0, 0x30(r4)
    stw r5, 0x40(r4)
    stw r5, 0x44(r4)
    stb r5, 0x48(r4)
    stw r3, 0x4c(r4)
    stw r6, 0x50(r4)
    li r6, 0x3
    stw r5, 0x60(r4)
    stw r5, 0x64(r4)
    stb r5, 0x68(r4)
    stw r3, 0x6c(r4)
    stw r6, 0x70(r4)
    stw r5, freeDvdContext_8049E120
    stb r0, lbl_8049E124
lbl_802D6EE8:
    lwz r3, lbl_8049E130
    la r4, lbl_8049D030
    li r5, 0x20
    bl strncpy
    lwz r3, lbl_8049E130
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, DiFD
    blt lbl_802D6F18
    li r3, 0x1
    b lbl_802D6F8C
lbl_802D6F18:
    cmpwi r3, -0x5
    beq lbl_802D6F64
    bge lbl_802D6F30
    cmpwi r3, -0x6
    bge lbl_802D6F3C
    b lbl_802D6F78
lbl_802D6F30:
    cmpwi r3, -0x1
    beq lbl_802D6F50
    b lbl_802D6F78
lbl_802D6F3C:
    addi r3, r31, 0x12c
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D6F8C
lbl_802D6F50:
    addi r3, r31, 0x178
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D6F8C
lbl_802D6F64:
    addi r3, r31, 0x1c0
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D6F8C
lbl_802D6F78:
    mr r4, r3
    addi r3, r31, 0x20c
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
lbl_802D6F8C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowReadDiskID
// ----------------------------------------------------------------------------
asm void DVDLowReadDiskID() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, dvdContexts_804611E0@ha
    li r10, 0x1
    stw r0, 0x24(r1)
    addi r7, r7, dvdContexts_804611E0@l
    stw r31, 0x1c(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r9, freeDvdContext_8049E120
    stb r10, requestInProgress_8049E118
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D701C
    mr r4, r9
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D7018:
    b lbl_802D7018
lbl_802D701C:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D703C
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D7038:
    b lbl_802D7038
lbl_802D703C:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D7060
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D7060:
    lis r4, dvdContexts_804611E0@ha
    cmpwi r3, 0x0
    slwi r0, r9, 5
    addi r4, r4, dvdContexts_804611E0@l
    add r29, r4, r0
    bne lbl_802D7084
    addi r3, r31, 0x2e8
    opword 0x4CC63182
    bl OSReport
lbl_802D7084:
    lwz r3, freeCommandBuf_8049E11C
    addi r0, r3, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    blt lbl_802D70A0
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D70A0:
    lwz r3, diCommand_8049E134
    lis r9, doTransactionCallback@ha
    slwi r0, r0, 5
    li r4, 0x70
    stbx r4, r3, r0
    mr r7, r30
    mr r10, r29
    addi r9, r9, doTransactionCallback@l
    lwz r0, freeCommandBuf_8049E11C
    li r4, 0x70
    lwz r5, diCommand_8049E134
    li r6, 0x20
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D710C
    mr r4, r3
    addi r3, r31, 0x324
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r29)
    b lbl_802D7110
lbl_802D710C:
    li r3, 0x1
lbl_802D7110:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// DVDLowOpenPartition
// ----------------------------------------------------------------------------
asm void DVDLowOpenPartition() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r9, dvdContexts_804611E0@ha
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    addi r9, r9, dvdContexts_804611E0@l
    stw r31, 0x1c(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_802D717C
    clrlwi. r0, r4, 27
    beq lbl_802D717C
    addi r3, r31, 0x360
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D7374
lbl_802D717C:
    cmpwi r6, 0x0
    beq lbl_802D71A0
    clrlwi. r0, r6, 27
    beq lbl_802D71A0
    addi r3, r31, 0x398
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D7374
lbl_802D71A0:
    cmpwi r7, 0x0
    beq lbl_802D71C4
    clrlwi. r0, r7, 27
    beq lbl_802D71C4
    addi r3, r31, 0x398
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D7374
lbl_802D71C4:
    lwz r29, freeDvdContext_8049E120
    li r28, 0x1
    addi r12, r9, 0x0
    stb r28, requestInProgress_8049E118
    slwi r30, r29, 5
    add r11, r12, r30
    lbz r10, 0x8(r11)
    neg r0, r10
    or r0, r0, r10
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D7214
    mr r4, r29
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D7210:
    b lbl_802D7210
lbl_802D7214:
    lwz r10, 0xc(r11)
    addis r0, r10, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D7234
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D7230:
    b lbl_802D7230
lbl_802D7234:
    stwx r8, r12, r30
    addi r0, r29, 0x1
    cmpwi r0, 0x4
    stw r28, 0x4(r11)
    stb r28, 0x8(r11)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D7258
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D7258:
    lwz r8, freeCommandBuf_8049E11C
    slwi r11, r29, 5
    addi r10, r9, 0x0
    addi r0, r8, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r10, r11
    blt lbl_802D7280
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D7280:
    lwz r8, diCommand_8049E134
    slwi r0, r0, 5
    li r10, 0x8b
    cmpwi r4, 0x0
    stbx r10, r8, r0
    addi r8, r9, 0xc0
    li r0, 0x20
    lwz r10, freeCommandBuf_8049E11C
    lwz r11, diCommand_8049E134
    slwi r10, r10, 5
    add r10, r11, r10
    stw r3, 0x4(r10)
    lwz r3, freeCommandBuf_8049E11C
    lwz r10, diCommand_8049E134
    slwi r3, r3, 5
    stw r0, 0x4(r8)
    add r0, r10, r3
    stw r0, 0xc0(r9)
    stw r4, 0x8(r8)
    bne lbl_802D72DC
    li r0, 0x0
    stw r0, 0xc(r8)
    b lbl_802D72E4
lbl_802D72DC:
    li r0, 0x2a4
    stw r0, 0xc(r8)
lbl_802D72E4:
    addi r3, r9, 0xc0
    cmpwi r6, 0x0
    stw r6, 0x10(r3)
    bne lbl_802D7300
    li r0, 0x0
    stw r0, 0x14(r3)
    b lbl_802D7304
lbl_802D7300:
    stw r5, 0x14(r3)
lbl_802D7304:
    addi r10, r9, 0xc0
    addi r5, r9, 0x120
    li r4, 0x49e4
    li r0, 0x20
    stw r7, 0x18(r10)
    lis r8, doTransactionCallback@ha
    lwz r3, DiFD
    mr r7, r10
    stw r4, 0x1c(r10)
    mr r9, r30
    addi r8, r8, doTransactionCallback@l
    li r4, 0x8b
    stw r5, 0x20(r10)
    li r5, 0x3
    li r6, 0x2
    stw r0, 0x24(r10)
    bl IOS_IoctlvAsync
    cmpwi r3, 0x0
    beq lbl_802D7370
    mr r4, r3
    addi r3, r31, 0x3d0
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D7374
lbl_802D7370:
    li r3, 0x1
lbl_802D7374:
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
// DVDLowOpenPartitionWithTmdAndTicketView
// ----------------------------------------------------------------------------
asm void DVDLowOpenPartitionWithTmdAndTicketView() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r8, 0x0
    lis r10, dvdContexts_804611E0@ha
    lis r31, at_3872_80379890@ha
    addi r10, r10, dvdContexts_804611E0@l
    addi r31, r31, at_3872_80379890@l
    beq lbl_802D73D0
    clrlwi. r0, r8, 27
    beq lbl_802D73D0
    li r3, 0x0
    b lbl_802D75E0
lbl_802D73D0:
    cmpwi r6, 0x0
    bne lbl_802D73F0
    addi r3, r31, 0x458
    addi r4, r31, 0x4c8
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D75E0
lbl_802D73F0:
    clrlwi. r0, r6, 27
    beq lbl_802D7410
    addi r3, r31, 0x47c
    addi r4, r31, 0x4c8
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D75E0
lbl_802D7410:
    cmpwi r4, 0x0
    bne lbl_802D7430
    addi r3, r31, 0x4f0
    addi r4, r31, 0x4c8
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D75E0
lbl_802D7430:
    clrlwi. r0, r4, 27
    beq lbl_802D7450
    addi r3, r31, 0x51c
    addi r4, r31, 0x4c8
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D75E0
lbl_802D7450:
    lwz r28, freeDvdContext_8049E120
    li r27, 0x1
    addi r29, r10, 0x0
    stb r27, requestInProgress_8049E118
    slwi r30, r28, 5
    add r12, r29, r30
    lbz r11, 0x8(r12)
    neg r0, r11
    or r0, r0, r11
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D74A0
    mr r4, r28
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D749C:
    b lbl_802D749C
lbl_802D74A0:
    lwz r11, 0xc(r12)
    addis r0, r11, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D74C0
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D74BC:
    b lbl_802D74BC
lbl_802D74C0:
    stwx r9, r29, r30
    addi r0, r28, 0x1
    cmpwi r0, 0x4
    stw r27, 0x4(r12)
    stb r27, 0x8(r12)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D74E4
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D74E4:
    lwz r9, freeCommandBuf_8049E11C
    slwi r12, r28, 5
    addi r11, r10, 0x0
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r11, r12
    blt lbl_802D750C
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D750C:
    lwz r9, diCommand_8049E134
    slwi r0, r0, 5
    li r11, 0x94
    cmpwi r8, 0x0
    stbx r11, r9, r0
    addi r9, r10, 0xc0
    li r11, 0x20
    li r0, 0xd8
    lwz r12, freeCommandBuf_8049E11C
    lwz r29, diCommand_8049E134
    slwi r12, r12, 5
    add r12, r29, r12
    stw r3, 0x4(r12)
    lwz r3, freeCommandBuf_8049E11C
    lwz r12, diCommand_8049E134
    slwi r3, r3, 5
    stw r11, 0x4(r9)
    add r3, r12, r3
    stw r3, 0xc0(r10)
    stw r4, 0x8(r9)
    stw r0, 0xc(r9)
    stw r6, 0x10(r9)
    stw r5, 0x14(r9)
    stw r8, 0x18(r9)
    bne lbl_802D757C
    li r0, 0x0
    stw r0, 0x1c(r9)
    b lbl_802D7580
lbl_802D757C:
    stw r7, 0x1c(r9)
lbl_802D7580:
    addi r7, r10, 0xc0
    addi r3, r10, 0x120
    li r0, 0x20
    lis r8, doTransactionCallback@ha
    stw r3, 0x20(r7)
    mr r9, r30
    lwz r3, DiFD
    addi r8, r8, doTransactionCallback@l
    stw r0, 0x24(r7)
    li r4, 0x94
    li r5, 0x4
    li r6, 0x1
    bl IOS_IoctlvAsync
    cmpwi r3, 0x0
    beq lbl_802D75DC
    mr r4, r3
    addi r3, r31, 0x3d0
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D75E0
lbl_802D75DC:
    li r3, 0x1
lbl_802D75E0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802D75F8
// ----------------------------------------------------------------------------
asm void fn_802D75F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    beq lbl_802D7624
    cmpwi r5, 0x0
    bne lbl_802D763C
lbl_802D7624:
    addi r3, r31, 0x560
    addi r4, r31, 0x544
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D77EC
lbl_802D763C:
    clrlwi. r0, r4, 27
    beq lbl_802D765C
    addi r3, r31, 0x584
    addi r4, r31, 0x544
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D77EC
lbl_802D765C:
    clrlwi. r0, r5, 27
    beq lbl_802D767C
    addi r3, r31, 0x5ac
    addi r4, r31, 0x544
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D77EC
lbl_802D767C:
    lwz r11, freeDvdContext_8049E120
    lis r9, dvdContexts_804611E0@ha
    li r12, 0x1
    slwi r10, r11, 5
    addi r9, r9, dvdContexts_804611E0@l
    add r8, r9, r10
    stb r12, requestInProgress_8049E118
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D76D0
    mr r4, r11
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D76CC:
    b lbl_802D76CC
lbl_802D76D0:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D76F0
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D76EC:
    b lbl_802D76EC
lbl_802D76F0:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D7714
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D7714:
    lwz r6, freeCommandBuf_8049E11C
    lis r7, dvdContexts_804611E0@ha
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r7, r8
    blt lbl_802D7740
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D7740:
    lwz r6, diCommand_8049E134
    lis r8, doTransactionCallback@ha
    slwi r0, r0, 5
    li r7, 0x92
    stbx r7, r6, r0
    lis r11, lbl_804612A0@ha
    addi r7, r11, lbl_804612A0@l
    li r10, 0x20
    lwz r6, freeCommandBuf_8049E11C
    li r0, 0x4
    lwz r12, diCommand_8049E134
    mr r9, r30
    slwi r6, r6, 5
    addi r8, r8, doTransactionCallback@l
    add r6, r12, r6
    stw r3, 0x4(r6)
    li r6, 0x2
    lwz r3, freeCommandBuf_8049E11C
    lwz r12, diCommand_8049E134
    slwi r3, r3, 5
    stw r4, 0x8(r7)
    add r12, r12, r3
    lwz r3, DiFD
    stw r5, 0x10(r7)
    li r4, 0x92
    li r5, 0x1
    stw r12, lbl_804612A0@l(r11)
    stw r10, 0x4(r7)
    stw r0, 0xc(r7)
    stw r0, 0x14(r7)
    bl IOS_IoctlvAsync
    cmpwi r3, 0x0
    beq lbl_802D77E8
    mr r5, r3
    addi r3, r31, 0x5d4
    addi r4, r31, 0x544
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D77EC
lbl_802D77E8:
    li r3, 0x1
lbl_802D77EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowGetNoDiscOpenPartitionParams
// ----------------------------------------------------------------------------
asm void DVDLowGetNoDiscOpenPartitionParams() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r4, 0x0
    lis r31, at_3872_80379890@ha
    lwz r28, 0x38(r1)
    addi r31, r31, at_3872_80379890@l
    beq lbl_802D785C
    cmpwi r5, 0x0
    beq lbl_802D785C
    cmpwi r6, 0x0
    beq lbl_802D785C
    cmpwi r7, 0x0
    beq lbl_802D785C
    cmpwi r8, 0x0
    beq lbl_802D785C
    cmpwi r9, 0x0
    beq lbl_802D785C
    cmpwi r10, 0x0
    bne lbl_802D7874
lbl_802D785C:
    addi r3, r31, 0x560
    addi r4, r31, 0x604
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D7A84
lbl_802D7874:
    clrlwi. r0, r4, 27
    bne lbl_802D78AC
    clrlwi. r0, r5, 27
    bne lbl_802D78AC
    clrlwi. r0, r6, 27
    bne lbl_802D78AC
    clrlwi. r0, r7, 27
    bne lbl_802D78AC
    clrlwi. r0, r8, 27
    bne lbl_802D78AC
    clrlwi. r0, r9, 27
    bne lbl_802D78AC
    clrlwi. r0, r10, 27
    beq lbl_802D78C4
lbl_802D78AC:
    addi r3, r31, 0x628
    addi r4, r31, 0x604
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D7A84
lbl_802D78C4:
    lwz r26, freeDvdContext_8049E120
    lis r24, dvdContexts_804611E0@ha
    li r27, 0x1
    slwi r25, r26, 5
    addi r24, r24, dvdContexts_804611E0@l
    add r12, r24, r25
    stb r27, requestInProgress_8049E118
    lbz r11, 0x8(r12)
    neg r0, r11
    or r0, r0, r11
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D7918
    mr r4, r26
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D7914:
    b lbl_802D7914
lbl_802D7918:
    lwz r11, 0xc(r12)
    addis r0, r11, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D7938
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D7934:
    b lbl_802D7934
lbl_802D7938:
    stwx r28, r24, r25
    addi r0, r26, 0x1
    cmpwi r0, 0x4
    stw r27, 0x4(r12)
    stb r27, 0x8(r12)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D795C
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D795C:
    lwz r11, freeCommandBuf_8049E11C
    lis r12, dvdContexts_804611E0@ha
    slwi r24, r26, 5
    addi r0, r11, 0x1
    addi r12, r12, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r12, r24
    blt lbl_802D7988
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D7988:
    lwz r11, diCommand_8049E134
    lis r26, lbl_804612A0@ha
    slwi r0, r0, 5
    li r12, 0x90
    stbx r12, r11, r0
    addi r28, r26, lbl_804612A0@l
    li r27, 0x20
    li r29, 0x4
    lwz r0, freeCommandBuf_8049E11C
    li r12, 0x2a4
    lwz r24, diCommand_8049E134
    lis r11, 0x2
    slwi r25, r0, 5
    add r25, r24, r25
    addi r0, r11, -0x8000
    stw r3, 0x4(r25)
    lis r11, doTransactionCallback@ha
    lwz r3, freeCommandBuf_8049E11C
    lwz r25, diCommand_8049E134
    slwi r3, r3, 5
    stw r4, 0x18(r28)
    add r25, r25, r3
    lwz r3, DiFD
    stw r6, 0x28(r28)
    li r4, 0x90
    li r6, 0x7
    stw r25, lbl_804612A0@l(r26)
    stw r27, 0x4(r28)
    stw r5, 0x8(r28)
    stw r29, 0xc(r28)
    stw r7, 0x10(r28)
    stw r29, 0x14(r28)
    stw r12, 0x1c(r28)
    stw r5, 0x20(r28)
    stw r29, 0x24(r28)
    lwz r12, 0x0(r5)
    li r5, 0x3
    stw r8, 0x38(r28)
    addi r8, r11, doTransactionCallback@l
    stw r12, 0x2c(r28)
    stw r7, 0x30(r28)
    stw r29, 0x34(r28)
    lwz r11, 0x0(r7)
    mr r7, r28
    stw r9, 0x40(r28)
    mr r9, r30
    stw r11, 0x3c(r28)
    stw r29, 0x44(r28)
    stw r10, 0x48(r28)
    stw r0, 0x4c(r28)
    bl IOS_IoctlvAsync
    cmpwi r3, 0x0
    beq lbl_802D7A80
    mr r5, r3
    addi r3, r31, 0x5d4
    addi r4, r31, 0x604
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D7A84
lbl_802D7A80:
    li r3, 0x1
lbl_802D7A84:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802D7A9C
// ----------------------------------------------------------------------------
asm void fn_802D7A9C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r4, freeCommandBuf_8049E11C
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    blt lbl_802D7AD4
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D7AD4:
    lwz r4, diCommand_8049E134
    lis r7, dvdContexts_804611E0@ha
    slwi r0, r0, 5
    li r5, 0x8c
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    lwz r4, freeDvdContext_8049E120
    stb r9, requestInProgress_8049E118
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D7B34
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D7B30:
    b lbl_802D7B30
lbl_802D7B34:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D7B54
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D7B50:
    b lbl_802D7B50
lbl_802D7B54:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D7B78
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D7B78:
    lwz r0, freeCommandBuf_8049E11C
    lis r3, dvdContexts_804611E0@ha
    slwi r5, r4, 5
    lwz r4, diCommand_8049E134
    addi r3, r3, dvdContexts_804611E0@l
    lis r9, doTransactionCallback@ha
    add r30, r3, r5
    slwi r0, r0, 5
    add r5, r4, r0
    lwz r3, DiFD
    mr r10, r30
    addi r9, r9, doTransactionCallback@l
    li r4, 0x8c
    li r6, 0x20
    li r7, 0x0
    li r8, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D7BE4
    mr r4, r3
    addi r3, r31, 0x668
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D7BE8
lbl_802D7BE4:
    li r3, 0x1
lbl_802D7BE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowUnencryptedRead
// ----------------------------------------------------------------------------
asm void DVDLowUnencryptedRead() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r9, dvdContexts_804611E0@ha
    li r12, 0x1
    stw r0, 0x14(r1)
    addi r9, r9, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r11, freeDvdContext_8049E120
    stb r12, requestInProgress_8049E118
    slwi r10, r11, 5
    add r8, r9, r10
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D7C70
    mr r4, r11
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D7C6C:
    b lbl_802D7C6C
lbl_802D7C70:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D7C90
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D7C8C:
    b lbl_802D7C8C
lbl_802D7C90:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D7CB4
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D7CB4:
    lwz r6, freeCommandBuf_8049E11C
    lis r7, dvdContexts_804611E0@ha
    stw r4, lbl_8049E12C
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r7, r8
    blt lbl_802D7CE4
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D7CE4:
    lwz r6, diCommand_8049E134
    lis r9, doTransactionCallback@ha
    slwi r0, r0, 5
    li r7, 0x8d
    stbx r7, r6, r0
    mr r7, r3
    mr r8, r4
    mr r10, r30
    lwz r0, freeCommandBuf_8049E11C
    addi r9, r9, doTransactionCallback@l
    lwz r3, diCommand_8049E134
    li r6, 0x20
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x4(r3)
    li r4, 0x8d
    lwz r0, freeCommandBuf_8049E11C
    lwz r3, diCommand_8049E134
    slwi r0, r0, 5
    add r3, r3, r0
    stw r5, 0x8(r3)
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D7D78
    mr r4, r3
    addi r3, r31, 0x6a8
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D7D7C
lbl_802D7D78:
    li r3, 0x1
lbl_802D7D7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowStopMotor
// ----------------------------------------------------------------------------
asm void DVDLowStopMotor() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, dvdContexts_804611E0@ha
    li r11, 0x1
    stw r0, 0x14(r1)
    addi r8, r8, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r10, freeDvdContext_8049E120
    stb r11, requestInProgress_8049E118
    slwi r9, r10, 5
    add r7, r8, r9
    lbz r6, 0x8(r7)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D7E04
    mr r4, r10
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D7E00:
    b lbl_802D7E00
lbl_802D7E04:
    lwz r6, 0xc(r7)
    addis r0, r6, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D7E24
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D7E20:
    b lbl_802D7E20
lbl_802D7E24:
    stwx r5, r8, r9
    addi r0, r10, 0x1
    cmpwi r0, 0x4
    stw r11, 0x4(r7)
    stb r11, 0x8(r7)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D7E48
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D7E48:
    lwz r5, freeCommandBuf_8049E11C
    lis r6, dvdContexts_804611E0@ha
    slwi r7, r10, 5
    addi r0, r5, 0x1
    addi r6, r6, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r6, r7
    blt lbl_802D7E74
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D7E74:
    lwz r5, diCommand_8049E134
    lis r7, diRegValCache_80461260@ha
    slwi r0, r0, 5
    li r6, 0xe3
    stbx r6, r5, r0
    lis r9, doTransactionCallback@ha
    mr r10, r30
    addi r7, r7, diRegValCache_80461260@l
    lwz r0, freeCommandBuf_8049E11C
    addi r9, r9, doTransactionCallback@l
    lwz r5, diCommand_8049E134
    li r6, 0x20
    slwi r0, r0, 5
    li r8, 0x20
    add r5, r5, r0
    stw r3, 0x4(r5)
    lwz r0, freeCommandBuf_8049E11C
    lwz r3, diCommand_8049E134
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x8(r3)
    li r4, 0xe3
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D7F0C
    mr r4, r3
    addi r3, r31, 0x6e8
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D7F10
lbl_802D7F0C:
    li r3, 0x1
lbl_802D7F10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowClosePartition
// ----------------------------------------------------------------------------
asm void DVDLowClosePartition() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, dvdContexts_804611E0@ha
    li r10, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r9, freeDvdContext_8049E120
    stb r10, requestInProgress_8049E118
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D7F98
    mr r4, r9
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D7F94:
    b lbl_802D7F94
lbl_802D7F98:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D7FB8
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D7FB4:
    b lbl_802D7FB4
lbl_802D7FB8:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D7FDC
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D7FDC:
    lwz r4, freeCommandBuf_8049E11C
    lis r5, dvdContexts_804611E0@ha
    slwi r6, r9, 5
    addi r0, r4, 0x1
    addi r5, r5, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r5, r6
    blt lbl_802D8008
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8008:
    lwz r4, diCommand_8049E134
    lis r9, doTransactionCallback@ha
    slwi r0, r0, 5
    li r5, 0x12
    stbx r5, r4, r0
    mr r7, r3
    mr r10, r30
    addi r9, r9, doTransactionCallback@l
    lwz r0, freeCommandBuf_8049E11C
    li r4, 0x12
    lwz r5, diCommand_8049E134
    li r6, 0x20
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D8074
    mr r4, r3
    addi r3, r31, 0x768
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8078
lbl_802D8074:
    li r3, 0x1
lbl_802D8078:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowRequestError
// ----------------------------------------------------------------------------
asm void DVDLowRequestError() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, dvdContexts_804611E0@ha
    li r9, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r4, freeDvdContext_8049E120
    stb r9, requestInProgress_8049E118
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D80FC
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D80F8:
    b lbl_802D80F8
lbl_802D80FC:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D811C
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D8118:
    b lbl_802D8118
lbl_802D811C:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D8140
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D8140:
    lwz r3, freeCommandBuf_8049E11C
    lis r5, dvdContexts_804611E0@ha
    slwi r4, r4, 5
    addi r0, r3, 0x1
    addi r5, r5, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r5, r4
    blt lbl_802D816C
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D816C:
    lwz r3, diCommand_8049E134
    lis r7, diRegValCache_80461260@ha
    slwi r0, r0, 5
    li r4, 0xe0
    stbx r4, r3, r0
    lis r9, doTransactionCallback@ha
    mr r10, r30
    addi r7, r7, diRegValCache_80461260@l
    lwz r0, freeCommandBuf_8049E11C
    addi r9, r9, doTransactionCallback@l
    lwz r5, diCommand_8049E134
    li r4, 0xe0
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D81DC
    mr r4, r3
    addi r3, r31, 0x7a0
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D81E0
lbl_802D81DC:
    li r3, 0x1
lbl_802D81E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowSetSpinupFlag
// ----------------------------------------------------------------------------
asm void DVDLowSetSpinupFlag() {
    nofralloc
    stw r3, spinUpValue_8049E128
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// DVDLowReset
// ----------------------------------------------------------------------------
asm void DVDLowReset() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, dvdContexts_804611E0@ha
    li r9, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r4, freeDvdContext_8049E120
    stb r9, requestInProgress_8049E118
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D8270
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D826C:
    b lbl_802D826C
lbl_802D8270:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D8290
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D828C:
    b lbl_802D828C
lbl_802D8290:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D82B4
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D82B4:
    lwz r3, freeCommandBuf_8049E11C
    lis r5, dvdContexts_804611E0@ha
    slwi r4, r4, 5
    addi r0, r3, 0x1
    addi r5, r5, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r5, r4
    blt lbl_802D82E0
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D82E0:
    lwz r3, diCommand_8049E134
    lis r9, doTransactionCallback@ha
    slwi r0, r0, 5
    li r4, 0x8a
    stbx r4, r3, r0
    mr r10, r30
    addi r9, r9, doTransactionCallback@l
    li r4, 0x8a
    lwz r0, freeCommandBuf_8049E11C
    li r6, 0x20
    lwz r3, diCommand_8049E134
    li r7, 0x0
    slwi r0, r0, 5
    lwz r5, spinUpValue_8049E128
    add r3, r3, r0
    li r8, 0x0
    stw r5, 0x4(r3)
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D8364
    mr r4, r3
    addi r3, r31, 0x860
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8368
lbl_802D8364:
    li r3, 0x1
lbl_802D8368:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowAudioBufferConfig
// ----------------------------------------------------------------------------
asm void DVDLowAudioBufferConfig() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, dvdContexts_804611E0@ha
    li r11, 0x1
    stw r0, 0x14(r1)
    addi r8, r8, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r10, freeDvdContext_8049E120
    stb r11, requestInProgress_8049E118
    slwi r9, r10, 5
    add r7, r8, r9
    lbz r6, 0x8(r7)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D83F0
    mr r4, r10
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D83EC:
    b lbl_802D83EC
lbl_802D83F0:
    lwz r6, 0xc(r7)
    addis r0, r6, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D8410
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D840C:
    b lbl_802D840C
lbl_802D8410:
    stwx r5, r8, r9
    addi r0, r10, 0x1
    cmpwi r0, 0x4
    stw r11, 0x4(r7)
    stb r11, 0x8(r7)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D8434
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D8434:
    lwz r5, freeCommandBuf_8049E11C
    lis r6, dvdContexts_804611E0@ha
    slwi r7, r10, 5
    addi r0, r5, 0x1
    addi r6, r6, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r6, r7
    blt lbl_802D8460
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8460:
    lwz r5, diCommand_8049E134
    lis r7, diRegValCache_80461260@ha
    slwi r0, r0, 5
    li r6, 0xe4
    stbx r6, r5, r0
    lis r9, doTransactionCallback@ha
    mr r10, r30
    addi r7, r7, diRegValCache_80461260@l
    lwz r0, freeCommandBuf_8049E11C
    addi r9, r9, doTransactionCallback@l
    lwz r5, diCommand_8049E134
    li r6, 0x20
    slwi r0, r0, 5
    li r8, 0x20
    add r5, r5, r0
    stw r3, 0x4(r5)
    lwz r0, freeCommandBuf_8049E11C
    lwz r3, diCommand_8049E134
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x8(r3)
    li r4, 0xe4
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D84F8
    mr r4, r3
    addi r3, r31, 0x898
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D84FC
lbl_802D84F8:
    li r3, 0x1
lbl_802D84FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowReportKey
// ----------------------------------------------------------------------------
asm void DVDLowReportKey() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r9, dvdContexts_804611E0@ha
    li r12, 0x1
    stw r0, 0x14(r1)
    addi r9, r9, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r11, freeDvdContext_8049E120
    stb r12, requestInProgress_8049E118
    slwi r10, r11, 5
    add r8, r9, r10
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D8584
    mr r4, r11
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D8580:
    b lbl_802D8580
lbl_802D8584:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D85A4
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D85A0:
    b lbl_802D85A0
lbl_802D85A4:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D85C8
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D85C8:
    lwz r6, freeCommandBuf_8049E11C
    lis r7, dvdContexts_804611E0@ha
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r7, r8
    blt lbl_802D85F4
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D85F4:
    lwz r6, diCommand_8049E134
    srwi r11, r4, 16
    slwi r0, r0, 5
    li r4, 0xa4
    stbx r4, r6, r0
    mr r7, r3
    lis r9, doTransactionCallback@ha
    mr r10, r30
    lwz r0, freeCommandBuf_8049E11C
    addi r9, r9, doTransactionCallback@l
    lwz r3, diCommand_8049E134
    li r4, 0xa4
    slwi r0, r0, 5
    li r6, 0x20
    add r3, r3, r0
    li r8, 0x20
    stw r11, 0x4(r3)
    lwz r0, freeCommandBuf_8049E11C
    lwz r3, diCommand_8049E134
    slwi r0, r0, 5
    add r3, r3, r0
    stw r5, 0x8(r3)
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D868C
    mr r4, r3
    addi r3, r31, 0xa98
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8690
lbl_802D868C:
    li r3, 0x1
lbl_802D8690:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowSetMaximumRotation
// ----------------------------------------------------------------------------
asm void DVDLowSetMaximumRotation() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, dvdContexts_804611E0@ha
    li r10, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r9, freeDvdContext_8049E120
    stb r10, requestInProgress_8049E118
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D8718
    mr r4, r9
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D8714:
    b lbl_802D8714
lbl_802D8718:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D8738
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D8734:
    b lbl_802D8734
lbl_802D8738:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D875C
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D875C:
    lwz r4, freeCommandBuf_8049E11C
    lis r5, dvdContexts_804611E0@ha
    slwi r6, r9, 5
    addi r0, r4, 0x1
    addi r5, r5, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r5, r6
    blt lbl_802D8788
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8788:
    lwz r4, diCommand_8049E134
    lis r9, doTransactionCallback@ha
    slwi r0, r0, 5
    li r5, 0xdd
    stbx r5, r4, r0
    extrwi r5, r3, 2, 14
    mr r10, r30
    addi r9, r9, doTransactionCallback@l
    lwz r0, freeCommandBuf_8049E11C
    li r4, 0xdd
    lwz r3, diCommand_8049E134
    li r6, 0x20
    slwi r0, r0, 5
    li r7, 0x0
    add r3, r3, r0
    li r8, 0x0
    stw r5, 0x4(r3)
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D880C
    mr r4, r3
    addi r3, r31, 0xc4c
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8810
lbl_802D880C:
    li r3, 0x1
lbl_802D8810:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowRead
// ----------------------------------------------------------------------------
asm void DVDLowRead() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    clrlwi. r0, r3, 27
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    beq lbl_802D8860
    addi r3, r31, 0xc8c
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D89C0
lbl_802D8860:
    lwz r11, freeDvdContext_8049E120
    lis r9, dvdContexts_804611E0@ha
    li r12, 0x1
    slwi r10, r11, 5
    addi r9, r9, dvdContexts_804611E0@l
    add r8, r9, r10
    stb r12, requestInProgress_8049E118
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D88B4
    mr r4, r11
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D88B0:
    b lbl_802D88B0
lbl_802D88B4:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D88D4
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D88D0:
    b lbl_802D88D0
lbl_802D88D4:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D88F8
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D88F8:
    lwz r6, freeCommandBuf_8049E11C
    lis r7, dvdContexts_804611E0@ha
    stw r4, lbl_8049E12C
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r7, r8
    blt lbl_802D8928
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8928:
    lwz r6, diCommand_8049E134
    lis r9, doTransactionCallback@ha
    slwi r0, r0, 5
    li r7, 0x71
    stbx r7, r6, r0
    mr r7, r3
    mr r8, r4
    mr r10, r30
    lwz r0, freeCommandBuf_8049E11C
    addi r9, r9, doTransactionCallback@l
    lwz r3, diCommand_8049E134
    li r6, 0x20
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x4(r3)
    li r4, 0x71
    lwz r0, freeCommandBuf_8049E11C
    lwz r3, diCommand_8049E134
    slwi r0, r0, 5
    add r3, r3, r0
    stw r5, 0x8(r3)
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D89BC
    mr r4, r3
    addi r3, r31, 0xccc
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D89C0
lbl_802D89BC:
    li r3, 0x1
lbl_802D89C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowSeek
// ----------------------------------------------------------------------------
asm void DVDLowSeek() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, dvdContexts_804611E0@ha
    li r10, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, dvdContexts_804611E0@l
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r9, freeDvdContext_8049E120
    stb r10, requestInProgress_8049E118
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D8A48
    mr r4, r9
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D8A44:
    b lbl_802D8A44
lbl_802D8A48:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D8A68
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D8A64:
    b lbl_802D8A64
lbl_802D8A68:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D8A8C
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D8A8C:
    lwz r4, freeCommandBuf_8049E11C
    lis r5, dvdContexts_804611E0@ha
    slwi r6, r9, 5
    addi r0, r4, 0x1
    addi r5, r5, dvdContexts_804611E0@l
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    add r30, r5, r6
    blt lbl_802D8AB8
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8AB8:
    lwz r4, diCommand_8049E134
    lis r9, doTransactionCallback@ha
    slwi r0, r0, 5
    li r5, 0xab
    stbx r5, r4, r0
    mr r10, r30
    addi r9, r9, doTransactionCallback@l
    li r4, 0xab
    lwz r0, freeCommandBuf_8049E11C
    li r6, 0x20
    lwz r5, diCommand_8049E134
    li r7, 0x0
    slwi r0, r0, 5
    li r8, 0x0
    add r5, r5, r0
    stw r3, 0x4(r5)
    lwz r0, freeCommandBuf_8049E11C
    lwz r5, diCommand_8049E134
    slwi r0, r0, 5
    lwz r3, DiFD
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D8B38
    mr r4, r3
    addi r3, r31, 0xd00
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8B3C
lbl_802D8B38:
    li r3, 0x1
lbl_802D8B3C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowGetCoverRegister
// ----------------------------------------------------------------------------
asm void DVDLowGetCoverRegister() {
    nofralloc
    lis r3, diRegValCache_80461260@ha
    addi r3, r3, diRegValCache_80461260@l
    lwz r3, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// DVDLowGetStatusRegister
// ----------------------------------------------------------------------------
asm void DVDLowGetStatusRegister() {
    nofralloc
    lis r3, lbl_80461360@ha
    lwz r3, lbl_80461360@l(r3)
    blr
}

// ----------------------------------------------------------------------------
// DVDLowGetControlRegister
// ----------------------------------------------------------------------------
asm void DVDLowGetControlRegister() {
    nofralloc
    lis r3, lbl_80461380@ha
    lwz r3, lbl_80461380@l(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802D8B7C
// ----------------------------------------------------------------------------
asm void fn_802D8B7C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r4, freeCommandBuf_8049E11C
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    blt lbl_802D8BB4
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8BB4:
    lwz r4, diCommand_8049E134
    lis r7, dvdContexts_804611E0@ha
    slwi r0, r0, 5
    li r5, 0x7a
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    lwz r4, freeDvdContext_8049E120
    stb r9, requestInProgress_8049E118
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D8C14
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D8C10:
    b lbl_802D8C10
lbl_802D8C14:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D8C34
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D8C30:
    b lbl_802D8C30
lbl_802D8C34:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D8C58
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D8C58:
    lwz r0, freeCommandBuf_8049E11C
    lis r3, dvdContexts_804611E0@ha
    slwi r5, r4, 5
    lwz r4, diCommand_8049E134
    addi r3, r3, dvdContexts_804611E0@l
    lis r7, lbl_80461280@ha
    add r30, r3, r5
    slwi r0, r0, 5
    lis r9, doPrepareCoverRegisterCallback@ha
    lwz r3, DiFD
    add r5, r4, r0
    mr r10, r30
    addi r7, r7, lbl_80461280@l
    addi r9, r9, doPrepareCoverRegisterCallback@l
    li r4, 0x7a
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D8CC8
    mr r4, r3
    addi r3, r31, 0xdb0
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8CCC
lbl_802D8CC8:
    li r3, 0x1
lbl_802D8CCC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowPrepareStatusRegister
// ----------------------------------------------------------------------------
asm void DVDLowPrepareStatusRegister() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r4, freeCommandBuf_8049E11C
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    blt lbl_802D8D1C
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8D1C:
    lwz r4, diCommand_8049E134
    lis r7, dvdContexts_804611E0@ha
    slwi r0, r0, 5
    li r5, 0x95
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    lwz r4, freeDvdContext_8049E120
    stb r9, requestInProgress_8049E118
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D8D7C
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D8D78:
    b lbl_802D8D78
lbl_802D8D7C:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D8D9C
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D8D98:
    b lbl_802D8D98
lbl_802D8D9C:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D8DC0
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D8DC0:
    lwz r0, freeCommandBuf_8049E11C
    lis r3, dvdContexts_804611E0@ha
    slwi r5, r4, 5
    lwz r4, diCommand_8049E134
    addi r3, r3, dvdContexts_804611E0@l
    lis r7, lbl_80461360@ha
    add r30, r3, r5
    slwi r0, r0, 5
    lis r9, doTransactionCallback@ha
    lwz r3, DiFD
    add r5, r4, r0
    mr r10, r30
    addi r7, r7, lbl_80461360@l
    addi r9, r9, doTransactionCallback@l
    li r4, 0x95
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D8E30
    mr r4, r3
    addi r3, r31, 0xdf4
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8E34
lbl_802D8E30:
    li r3, 0x1
lbl_802D8E34:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowPrepareCoverRegister
// ----------------------------------------------------------------------------
asm void DVDLowPrepareCoverRegister() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r4, freeCommandBuf_8049E11C
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    blt lbl_802D8E84
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D8E84:
    lwz r4, diCommand_8049E134
    lis r7, dvdContexts_804611E0@ha
    slwi r0, r0, 5
    li r5, 0x96
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    lwz r4, freeDvdContext_8049E120
    stb r9, requestInProgress_8049E118
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D8EE4
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D8EE0:
    b lbl_802D8EE0
lbl_802D8EE4:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D8F04
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D8F00:
    b lbl_802D8F00
lbl_802D8F04:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D8F28
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D8F28:
    lwz r0, freeCommandBuf_8049E11C
    lis r3, dvdContexts_804611E0@ha
    slwi r5, r4, 5
    lwz r4, diCommand_8049E134
    addi r3, r3, dvdContexts_804611E0@l
    lis r7, lbl_80461380@ha
    add r30, r3, r5
    slwi r0, r0, 5
    lis r9, doTransactionCallback@ha
    lwz r3, DiFD
    add r5, r4, r0
    mr r10, r30
    addi r7, r7, lbl_80461380@l
    addi r9, r9, doTransactionCallback@l
    li r4, 0x96
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D8F98
    mr r4, r3
    addi r3, r31, 0xe3c
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D8F9C
lbl_802D8F98:
    li r3, 0x1
lbl_802D8F9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// DVDLowGetImmBufferReg
// ----------------------------------------------------------------------------
asm void DVDLowGetImmBufferReg() {
    nofralloc
    lis r3, diRegValCache_80461260@ha
    lwz r3, diRegValCache_80461260@l(r3)
    blr
}

// ----------------------------------------------------------------------------
// DVDLowUnmaskStatusInterrupts
// ----------------------------------------------------------------------------
asm void DVDLowUnmaskStatusInterrupts() {
    nofralloc
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// DVDLowMaskCoverInterrupt
// ----------------------------------------------------------------------------
asm void DVDLowMaskCoverInterrupt() {
    nofralloc
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// DVDLowClearCoverInterrupt
// ----------------------------------------------------------------------------
asm void DVDLowClearCoverInterrupt() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_3872_80379890@ha
    addi r31, r31, at_3872_80379890@l
    stw r30, 0x8(r1)
    lwz r4, freeCommandBuf_8049E11C
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r0, freeCommandBuf_8049E11C
    blt lbl_802D9008
    li r0, 0x0
    stw r0, freeCommandBuf_8049E11C
lbl_802D9008:
    lwz r4, diCommand_8049E134
    lis r7, dvdContexts_804611E0@ha
    slwi r0, r0, 5
    li r5, 0x86
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, dvdContexts_804611E0@l
    lwz r4, freeDvdContext_8049E120
    stb r9, requestInProgress_8049E118
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802D9068
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0x278
    opword 0x4CC63182
    bl OSReport
lbl_802D9064:
    b lbl_802D9064
lbl_802D9068:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_802D9088
    addi r3, r31, 0x2a8
    opword 0x4CC63182
    bl OSReport
lbl_802D9084:
    b lbl_802D9084
lbl_802D9088:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, freeDvdContext_8049E120
    blt lbl_802D90AC
    li r0, 0x0
    stw r0, freeDvdContext_8049E120
lbl_802D90AC:
    lwz r0, freeCommandBuf_8049E11C
    lis r3, dvdContexts_804611E0@ha
    slwi r5, r4, 5
    lwz r4, diCommand_8049E134
    addi r3, r3, dvdContexts_804611E0@l
    lis r9, doTransactionCallback@ha
    add r30, r3, r5
    slwi r0, r0, 5
    add r5, r4, r0
    lwz r3, DiFD
    mr r10, r30
    addi r9, r9, doTransactionCallback@l
    li r4, 0x86
    li r6, 0x20
    li r7, 0x0
    li r8, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_802D9118
    mr r4, r3
    addi r3, r31, 0xe84
    opword 0x4CC63182
    bl OSReport
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8(r30)
    b lbl_802D911C
lbl_802D9118:
    li r3, 0x1
lbl_802D911C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __DVDLowTestAlarm
// ----------------------------------------------------------------------------
asm void __DVDLowTestAlarm() {
    nofralloc
    li r3, 0x0
    blr
}

