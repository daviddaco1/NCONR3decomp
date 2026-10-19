#include "types.h"

// Translation unit: src/revolution/nand/NANDCore.cpp
// Total functions: 28

// Small Data symbols (@sda21)
extern float __NANDVersion;
extern float at_3775_8049D170;
extern float lbl_8049D16C;
extern float lbl_8049D174;
extern float lbl_8049D178;
extern float lbl_8049D17C;
extern float lbl_8049D180;
extern float lbl_8049D188;
extern float lbl_8049D18C;
extern float s_libState_8049E260;

// Global data symbols (@ha/@l)
extern u8 at_2834_8037F5A0[];
extern u8 at_3094_80341F90[];
extern u8 lbl_8037F650[];
extern u8 lbl_8037F65C[];
extern u8 s_currentDir_8037F600[];
extern u8 s_homeDir_804648E0[];

// Forward declarations
extern void ESP_CloseLib();
extern void ESP_GetDataDir();
extern void ESP_GetTitleId();
extern void ESP_InitLib();
extern void ISFS_OpenLib();
extern void ISFS_ReadDir();
extern void ISFS_ReadDirAsync();
extern void ISFS_ShutdownAsync();
extern void NANDChangeDir();
extern void NANDChangeDirAsync();
extern void NANDGetHomeDir();
extern void NANDGetType();
extern void NANDInit();
extern void NANDInitBanner();
extern void NANDLoggingAddMessageAsync();
extern void NANDPrivateGetTypeAsync();
extern void OSDisableInterrupts();
extern void OSGetTime();
extern void OSRegisterShutdownFunction();
extern void OSRegisterVersion();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void __div2i();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_80311898();
extern void fn_80311D38();
extern void memset();
extern void nandCallback();
extern void nandChangeDir();
extern void nandChangeDirCallback();
extern void nandConvertErrorCode();
extern void nandConvertPath();
extern void nandGenerateAbsPath();
extern void nandGetHeadToken();
extern void nandGetHomeDir();
extern void nandGetParentDirectory();
extern void nandGetRelativeName();
extern void nandGetType();
extern void nandGetTypeCallback();
extern void nandIsInitialized();
extern void nandIsPrivatePath();
extern void nandIsUnderPrivatePath();
extern void nandOnShutdown();
extern void nandRemoveTailToken();
extern void nandReportErrorCode();
extern void nandShutdownCallback();
extern void sprintf();
extern void strcmp();
extern void strcpy();
extern void strlen();
extern void strncmp();
extern void strncpy();
extern void wcscmp();
extern void wcsncpy();

// ----------------------------------------------------------------------------
// nandRemoveTailToken
// ----------------------------------------------------------------------------
asm void nandRemoveTailToken() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lbz r0, 0x0(r4)
    stw r31, 0x1c(r1)
    cmpwi r0, 0x2f
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_80310CD4
    lbz r0, 0x1(r4)
    extsb. r0, r0
    bne lbl_80310CD4
    li r4, 0x2f
    li r0, 0x0
    stb r4, 0x0(r3)
    stb r0, 0x1(r3)
    b lbl_80310D40
lbl_80310CD4:
    mr r3, r30
    bl strlen
    subic. r31, r3, 0x1
    addi r0, r31, 0x1
    add r3, r30, r31
    mtctr r0
    blt lbl_80310D40
lbl_80310CF0:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    bne lbl_80310D34
    cmpwi r31, 0x0
    beq lbl_80310D20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl strncpy
    li r0, 0x0
    stbx r0, r29, r31
    b lbl_80310D40
lbl_80310D20:
    li r3, 0x2f
    li r0, 0x0
    stb r3, 0x0(r29)
    stb r0, 0x1(r29)
    b lbl_80310D40
lbl_80310D34:
    subi r31, r31, 0x1
    subi r3, r3, 0x1
    bdnz lbl_80310CF0
lbl_80310D40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// nandGetHeadToken
// ----------------------------------------------------------------------------
asm void nandGetHeadToken() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r31, r5
    li r30, 0x0
    b lbl_80310E08
lbl_80310D88:
    lbz r0, 0x0(r31)
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_80310DD8
    mr r3, r27
    mr r4, r29
    mr r5, r30
    bl strncpy
    add r4, r30, r29
    li r3, 0x0
    lbz r0, 0x1(r4)
    stbx r3, r27, r30
    extsb. r0, r0
    bne lbl_80310DC8
    stb r3, 0x0(r28)
    b lbl_80310E18
lbl_80310DC8:
    mr r3, r28
    addi r4, r4, 0x1
    bl strcpy
    b lbl_80310E18
lbl_80310DD8:
    cmpwi r0, 0x0
    bne lbl_80310E00
    mr r3, r27
    mr r4, r29
    mr r5, r30
    bl strncpy
    li r0, 0x0
    stbx r0, r27, r30
    stb r0, 0x0(r28)
    b lbl_80310E18
lbl_80310E00:
    addi r30, r30, 0x1
    addi r31, r31, 0x1
lbl_80310E08:
    mr r3, r29
    bl strlen
    cmplw r30, r3
    ble lbl_80310D88
lbl_80310E18:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// nandGetRelativeName
// ----------------------------------------------------------------------------
asm void nandGetRelativeName() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    la r3, lbl_8049D16C
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80310E6C
    mr r3, r30
    la r4, at_3775_8049D170
    bl strcpy
    b lbl_80310EB0
lbl_80310E6C:
    mr r3, r31
    bl strlen
    subic. r4, r3, 0x1
    addi r0, r4, 0x1
    add r3, r31, r4
    mtctr r0
    blt lbl_80310EA0
lbl_80310E88:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    beq lbl_80310EA0
    subi r4, r4, 0x1
    subi r3, r3, 0x1
    bdnz lbl_80310E88
lbl_80310EA0:
    add r4, r31, r4
    mr r3, r30
    addi r4, r4, 0x1
    bl strcpy
lbl_80310EB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandConvertPath
// ----------------------------------------------------------------------------
asm void nandConvertPath() {
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r5
    stw r30, 0x218(r1)
    mr r30, r4
    stw r29, 0x214(r1)
    mr r29, r3
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    bne lbl_80310F0C
    mr r3, r29
    mr r4, r30
    bl strcpy
    b lbl_80310FE8
lbl_80310F0C:
    mr r5, r31
    addi r3, r1, 0x188
    addi r4, r1, 0x108
    bl nandGetHeadToken
    addi r3, r1, 0x188
    la r4, lbl_8049D174
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80310F44
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x108
    bl nandConvertPath
    b lbl_80310FE8
lbl_80310F44:
    addi r3, r1, 0x188
    la r4, lbl_8049D178
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80310F78
    mr r4, r30
    addi r3, r1, 0x88
    bl nandRemoveTailToken
    mr r3, r29
    addi r4, r1, 0x88
    addi r5, r1, 0x108
    bl nandConvertPath
    b lbl_80310FE8
lbl_80310F78:
    lbz r0, 0x188(r1)
    extsb. r0, r0
    beq lbl_80310FDC
    mr r3, r30
    la r4, lbl_8049D16C
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80310FB0
    addi r3, r1, 0x8
    addi r5, r1, 0x188
    la r4, lbl_8049D17C
    opword 0x4CC63182
    bl sprintf
    b lbl_80310FC8
lbl_80310FB0:
    mr r5, r30
    addi r3, r1, 0x8
    addi r6, r1, 0x188
    la r4, lbl_8049D180
    opword 0x4CC63182
    bl sprintf
lbl_80310FC8:
    mr r3, r29
    addi r4, r1, 0x8
    addi r5, r1, 0x108
    bl nandConvertPath
    b lbl_80310FE8
lbl_80310FDC:
    mr r3, r29
    mr r4, r30
    bl strcpy
lbl_80310FE8:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

// ----------------------------------------------------------------------------
// nandIsPrivatePath
// ----------------------------------------------------------------------------
asm void nandIsPrivatePath() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8037F650@ha
    li r5, 0x8
    stw r0, 0x14(r1)
    addi r4, r4, lbl_8037F650@l
    bl strncmp
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandIsUnderPrivatePath
// ----------------------------------------------------------------------------
asm void nandIsUnderPrivatePath() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8037F65C@ha
    li r5, 0x9
    stw r0, 0x14(r1)
    addi r4, r4, lbl_8037F65C@l
    stw r31, 0xc(r1)
    mr r31, r3
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80311078
    lbz r0, 0x9(r31)
    extsb. r0, r0
    beq lbl_80311078
    li r3, 0x1
    b lbl_8031107C
lbl_80311078:
    li r3, 0x0
lbl_8031107C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandIsInitialized
// ----------------------------------------------------------------------------
asm void nandIsInitialized() {
    nofralloc
    lwz r3, s_libState_8049E260
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// nandReportErrorCode
// ----------------------------------------------------------------------------
asm void nandReportErrorCode() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// nandConvertErrorCode
// ----------------------------------------------------------------------------
asm void nandConvertErrorCode() {
    nofralloc
    clrlwi r11, r1, 26
    mr r12, r1
    subfic r11, r11, -0x300
    stwux r1, r1, r11
    mflr r0
    lis r4, at_3094_80341F90@ha
    stw r0, 0x4(r12)
    addi r4, r4, at_3094_80341F90@l
    li r0, 0x29
    addi r6, r1, 0x13c
    stw r31, -0x4(r12)
    lis r31, at_2834_8037F5A0@ha
    addi r31, r31, at_2834_8037F5A0@l
    subi r5, r4, 0x4
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    mr r29, r3
    mtctr r0
lbl_803110F0:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_803110F0
    cmpwi r3, 0x0
    li r30, 0x0
    li r4, 0x0
    blt lbl_8031111C
    mr r3, r29
    b lbl_803111E8
lbl_8031111C:
    li r0, 0x29
    addi r5, r1, 0x140
    mtctr r0
lbl_80311128:
    lwzx r0, r5, r4
    cmpw r3, r0
    bne lbl_8031119C
    cmpwi r3, -0x72
    beq lbl_8031115C
    cmpwi r3, -0x74
    beq lbl_8031115C
    cmpwi r3, -0x75
    beq lbl_8031115C
    cmpwi r3, -0x9
    beq lbl_8031115C
    cmpwi r3, -0xc
    bne lbl_80311180
lbl_8031115C:
    mr r5, r29
    addi r3, r1, 0xc0
    addi r4, r31, 0xc8
    opword 0x4CC63182
    bl sprintf
    addi r4, r1, 0xc0
    li r3, 0x0
    opword 0x4CC63182
    bl NANDLoggingAddMessageAsync
lbl_80311180:
    mr r3, r29
    bl nandReportErrorCode
    addi r0, r30, 0x1
    addi r3, r1, 0x140
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_803111E8
lbl_8031119C:
    addi r30, r30, 0x2
    addi r4, r4, 0x8
    bdnz lbl_80311128
    mr r4, r29
    addi r3, r31, 0xdc
    opword 0x4CC63182
    bl OSReport
    mr r5, r29
    addi r3, r1, 0x40
    addi r4, r31, 0x110
    opword 0x4CC63182
    bl sprintf
    addi r4, r1, 0x40
    li r3, 0x0
    opword 0x4CC63182
    bl NANDLoggingAddMessageAsync
    mr r3, r29
    bl nandReportErrorCode
    li r3, -0x40
lbl_803111E8:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// nandGenerateAbsPath
// ----------------------------------------------------------------------------
asm void nandGenerateAbsPath() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    bne lbl_80311244
    mr r3, r30
    la r4, at_3775_8049D170
    bl strcpy
    b lbl_803112B8
lbl_80311244:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x2f
    bne lbl_80311258
    li r0, 0x0
    b lbl_8031125C
lbl_80311258:
    li r0, 0x1
lbl_8031125C:
    cmpwi r0, 0x0
    beq lbl_8031127C
    lis r4, s_currentDir_8037F600@ha
    mr r3, r30
    mr r5, r31
    addi r4, r4, s_currentDir_8037F600@l
    bl nandConvertPath
    b lbl_803112B8
lbl_8031127C:
    mr r3, r30
    mr r4, r31
    bl strcpy
    mr r3, r30
    bl strlen
    cmpwi r3, 0x0
    beq lbl_803112B8
    add r4, r3, r30
    lbz r0, -0x1(r4)
    cmpwi r0, 0x2f
    bne lbl_803112B8
    subic. r0, r3, 0x1
    beq lbl_803112B8
    li r0, 0x0
    stb r0, -0x1(r4)
lbl_803112B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandGetParentDirectory
// ----------------------------------------------------------------------------
asm void nandGetParentDirectory() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    bl strlen
    addi r0, r3, 0x1
    mr r31, r3
    add r4, r30, r3
    mtctr r0
    cmpwi r3, 0x0
    blt lbl_80311328
lbl_80311310:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x2f
    beq lbl_80311328
    subi r31, r31, 0x1
    subi r4, r4, 0x1
    bdnz lbl_80311310
lbl_80311328:
    cmpwi r31, 0x0
    bne lbl_80311340
    mr r3, r29
    la r4, lbl_8049D16C
    bl strcpy
    b lbl_80311358
lbl_80311340:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl strncpy
    li r0, 0x0
    stbx r0, r29, r31
lbl_80311358:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDInit
// ----------------------------------------------------------------------------
asm void NANDInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, at_2834_8037F5A0@ha
    addi r31, r31, at_2834_8037F5A0@l
    stw r30, 0x18(r1)
    bl OSDisableInterrupts
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x1
    bne lbl_803113AC
    bl OSRestoreInterrupts
    li r3, -0x3
    b lbl_80311488
lbl_803113AC:
    cmpwi r0, 0x2
    bne lbl_803113C0
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80311488
lbl_803113C0:
    li r0, 0x1
    stw r0, s_libState_8049E260
    bl OSRestoreInterrupts
    bl ISFS_OpenLib
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80311470
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_803113F8
    addi r3, r1, 0x8
    bl ESP_GetTitleId
    mr r30, r3
lbl_803113F8:
    cmpwi r30, 0x0
    bne lbl_80311418
    lis r5, s_homeDir_804648E0@ha
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    addi r5, r5, s_homeDir_804648E0@l
    bl ESP_GetDataDir
    mr r30, r3
lbl_80311418:
    cmpwi r30, 0x0
    bne lbl_80311430
    lis r4, s_homeDir_804648E0@ha
    addi r3, r31, 0x60
    addi r4, r4, s_homeDir_804648E0@l
    bl strcpy
lbl_80311430:
    bl ESP_CloseLib
    cmpwi r30, 0x0
    beq lbl_80311448
    addi r3, r31, 0x130
    opword 0x4CC63182
    bl OSReport
lbl_80311448:
    addi r3, r31, 0xa0
    bl OSRegisterShutdownFunction
    bl OSDisableInterrupts
    li r0, 0x2
    stw r0, s_libState_8049E260
    bl OSRestoreInterrupts
    lwz r3, __NANDVersion
    bl OSRegisterVersion
    li r3, 0x0
    b lbl_80311488
lbl_80311470:
    bl OSDisableInterrupts
    li r0, 0x0
    stw r0, s_libState_8049E260
    bl OSRestoreInterrupts
    mr r3, r30
    bl nandConvertErrorCode
lbl_80311488:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// nandOnShutdown
// ----------------------------------------------------------------------------
asm void nandOnShutdown() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    bne lbl_80311550
    cmplwi r4, 0x2
    bne lbl_80311548
    li r26, 0x0
    stw r26, 0x8(r1)
    bl OSGetTime
    lis r5, nandShutdownCallback@ha
    mr r27, r4
    mr r28, r3
    addi r4, r1, 0x8
    addi r3, r5, nandShutdownCallback@l
    bl ISFS_ShutdownAsync
    lis r3, 0x1062
    lis r30, 0x8000
    addi r29, r3, 0x4dd3
    li r31, 0x1f4
    b lbl_80311508
lbl_803114FC:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_80311548
lbl_80311508:
    bl OSGetTime
    lwz r0, 0xf8(r30)
    subfc r4, r27, r4
    subfe r3, r28, r3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r29, r0
    srwi r6, r0, 6
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r26, 0x8000
    subfc r3, r31, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_803114FC
lbl_80311548:
    li r3, 0x1
    b lbl_80311554
lbl_80311550:
    li r3, 0x1
lbl_80311554:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// nandShutdownCallback
// ----------------------------------------------------------------------------
asm void nandShutdownCallback() {
    nofralloc
    li r0, 0x1
    stw r0, 0x0(r4)
    blr
}

// ----------------------------------------------------------------------------
// nandChangeDir
// ----------------------------------------------------------------------------
asm void nandChangeDir() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    beq lbl_80311694
    bl strlen
    cmpwi r3, 0x0
    bne lbl_803115C0
    addi r3, r30, 0x34
    la r4, at_3775_8049D170
    bl strcpy
    b lbl_80311634
lbl_803115C0:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x2f
    bne lbl_803115D4
    li r0, 0x0
    b lbl_803115D8
lbl_803115D4:
    li r0, 0x1
lbl_803115D8:
    cmpwi r0, 0x0
    beq lbl_803115F8
    lis r4, s_currentDir_8037F600@ha
    mr r5, r29
    addi r3, r30, 0x34
    addi r4, r4, s_currentDir_8037F600@l
    bl nandConvertPath
    b lbl_80311634
lbl_803115F8:
    mr r4, r29
    addi r3, r30, 0x34
    bl strcpy
    addi r3, r30, 0x34
    bl strlen
    cmpwi r3, 0x0
    beq lbl_80311634
    add r4, r3, r30
    lbz r0, 0x33(r4)
    cmpwi r0, 0x2f
    bne lbl_80311634
    subic. r0, r3, 0x1
    beq lbl_80311634
    li r0, 0x0
    stb r0, 0x33(r4)
lbl_80311634:
    cmpwi r31, 0x0
    bne lbl_80311674
    lis r4, lbl_8037F650@ha
    addi r3, r30, 0x34
    addi r4, r4, lbl_8037F650@l
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80311660
    li r0, 0x1
    b lbl_80311664
lbl_80311660:
    li r0, 0x0
lbl_80311664:
    cmpwi r0, 0x0
    beq lbl_80311674
    li r3, -0x66
    b lbl_803117F0
lbl_80311674:
    lis r6, fn_80311898@ha
    mr r7, r30
    addi r3, r30, 0x34
    addi r5, r30, 0x30
    addi r6, r6, fn_80311898@l
    li r4, 0x0
    bl ISFS_ReadDirAsync
    b lbl_803117F0
lbl_80311694:
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    bl strlen
    cmpwi r3, 0x0
    bne lbl_803116F8
    addi r3, r1, 0x10
    la r4, at_3775_8049D170
    bl strcpy
    b lbl_80311770
lbl_803116F8:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x2f
    bne lbl_8031170C
    li r0, 0x0
    b lbl_80311710
lbl_8031170C:
    li r0, 0x1
lbl_80311710:
    cmpwi r0, 0x0
    beq lbl_80311730
    lis r4, s_currentDir_8037F600@ha
    mr r5, r29
    addi r3, r1, 0x10
    addi r4, r4, s_currentDir_8037F600@l
    bl nandConvertPath
    b lbl_80311770
lbl_80311730:
    mr r4, r29
    addi r3, r1, 0x10
    bl strcpy
    addi r3, r1, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_80311770
    addi r0, r1, 0x10
    add r4, r3, r0
    lbz r0, -0x1(r4)
    cmpwi r0, 0x2f
    bne lbl_80311770
    subic. r0, r3, 0x1
    beq lbl_80311770
    li r0, 0x0
    stb r0, -0x1(r4)
lbl_80311770:
    cmpwi r31, 0x0
    bne lbl_803117B0
    lis r4, lbl_8037F650@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_8037F650@l
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8031179C
    li r0, 0x1
    b lbl_803117A0
lbl_8031179C:
    li r0, 0x0
lbl_803117A0:
    cmpwi r0, 0x0
    beq lbl_803117B0
    li r3, -0x66
    b lbl_803117F0
lbl_803117B0:
    addi r3, r1, 0x10
    addi r5, r1, 0x8
    li r4, 0x0
    bl ISFS_ReadDir
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_803117EC
    bl OSDisableInterrupts
    lis r4, s_currentDir_8037F600@ha
    mr r30, r3
    addi r3, r4, s_currentDir_8037F600@l
    addi r4, r1, 0x10
    bl strcpy
    mr r3, r30
    bl OSRestoreInterrupts
lbl_803117EC:
    mr r3, r31
lbl_803117F0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// NANDChangeDir
// ----------------------------------------------------------------------------
asm void NANDChangeDir() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x2
    beq lbl_8031182C
    li r3, -0x80
    b lbl_80311840
lbl_8031182C:
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl nandChangeDir
    bl nandConvertErrorCode
lbl_80311840:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NANDChangeDirAsync
// ----------------------------------------------------------------------------
asm void NANDChangeDirAsync() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x2
    beq lbl_80311870
    li r3, -0x80
    b lbl_80311888
lbl_80311870:
    stw r4, 0x4(r5)
    mr r4, r5
    li r5, 0x1
    li r6, 0x0
    bl nandChangeDir
    bl nandConvertErrorCode
lbl_80311888:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80311898
// ----------------------------------------------------------------------------
asm void fn_80311898() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_803118E0
    bl OSDisableInterrupts
    lis r4, s_currentDir_8037F600@ha
    mr r30, r3
    addi r3, r4, s_currentDir_8037F600@l
    addi r4, r31, 0x34
    bl strcpy
    mr r3, r30
    bl OSRestoreInterrupts
lbl_803118E0:
    mr r3, r29
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// nandChangeDirCallback
// ----------------------------------------------------------------------------
asm void nandChangeDirCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x2
    bne lbl_80311940
    li r0, 0x1
    b lbl_80311944
lbl_80311940:
    li r0, 0x0
lbl_80311944:
    cmpwi r0, 0x0
    bne lbl_80311954
    li r3, -0x80
    b lbl_80311978
lbl_80311954:
    bl OSDisableInterrupts
    lis r4, s_currentDir_8037F600@ha
    mr r31, r3
    mr r3, r30
    addi r4, r4, s_currentDir_8037F600@l
    bl strcpy
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_80311978:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NANDGetHomeDir
// ----------------------------------------------------------------------------
asm void NANDGetHomeDir() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x2
    bne lbl_803119B0
    li r0, 0x1
    b lbl_803119B4
lbl_803119B0:
    li r0, 0x0
lbl_803119B4:
    cmpwi r0, 0x0
    bne lbl_803119C4
    li r3, -0x80
    b lbl_803119D4
lbl_803119C4:
    lis r4, s_homeDir_804648E0@ha
    addi r4, r4, s_homeDir_804648E0@l
    bl strcpy
    li r3, 0x0
lbl_803119D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandCallback
// ----------------------------------------------------------------------------
asm void nandCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandGetType
// ----------------------------------------------------------------------------
asm void nandGetType() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    mr r27, r3
    mr r30, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    bl strlen
    cmpwi r3, 0x0
    bne lbl_80311A5C
    li r3, -0x65
    b lbl_80311CDC
lbl_80311A5C:
    cmpwi r29, 0x0
    beq lbl_80311B68
    mr r3, r27
    bl strlen
    cmpwi r3, 0x0
    bne lbl_80311A84
    addi r3, r28, 0x34
    la r4, at_3775_8049D170
    bl strcpy
    b lbl_80311AF8
lbl_80311A84:
    lbz r0, 0x0(r27)
    cmpwi r0, 0x2f
    bne lbl_80311A98
    li r0, 0x0
    b lbl_80311A9C
lbl_80311A98:
    li r0, 0x1
lbl_80311A9C:
    cmpwi r0, 0x0
    beq lbl_80311ABC
    lis r4, s_currentDir_8037F600@ha
    mr r5, r27
    addi r3, r28, 0x34
    addi r4, r4, s_currentDir_8037F600@l
    bl nandConvertPath
    b lbl_80311AF8
lbl_80311ABC:
    mr r4, r27
    addi r3, r28, 0x34
    bl strcpy
    addi r3, r28, 0x34
    bl strlen
    cmpwi r3, 0x0
    beq lbl_80311AF8
    add r4, r3, r28
    lbz r0, 0x33(r4)
    cmpwi r0, 0x2f
    bne lbl_80311AF8
    subic. r0, r3, 0x1
    beq lbl_80311AF8
    li r0, 0x0
    stb r0, 0x33(r4)
lbl_80311AF8:
    cmpwi r31, 0x0
    bne lbl_80311B44
    lis r4, lbl_8037F65C@ha
    addi r3, r28, 0x34
    addi r4, r4, lbl_8037F65C@l
    li r5, 0x9
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80311B30
    lbz r0, 0x3d(r28)
    extsb. r0, r0
    beq lbl_80311B30
    li r0, 0x1
    b lbl_80311B34
lbl_80311B30:
    li r0, 0x0
lbl_80311B34:
    cmpwi r0, 0x0
    beq lbl_80311B44
    li r3, -0x66
    b lbl_80311CDC
lbl_80311B44:
    lis r6, nandGetTypeCallback@ha
    stw r30, 0x88(r28)
    mr r7, r28
    addi r3, r28, 0x34
    addi r5, r28, 0x30
    addi r6, r6, nandGetTypeCallback@l
    li r4, 0x0
    bl ISFS_ReadDirAsync
    b lbl_80311CDC
lbl_80311B68:
    li r0, 0x0
    mr r3, r27
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    bl strlen
    cmpwi r3, 0x0
    bne lbl_80311BCC
    addi r3, r1, 0x10
    la r4, at_3775_8049D170
    bl strcpy
    b lbl_80311C44
lbl_80311BCC:
    lbz r0, 0x0(r27)
    cmpwi r0, 0x2f
    bne lbl_80311BE0
    li r0, 0x0
    b lbl_80311BE4
lbl_80311BE0:
    li r0, 0x1
lbl_80311BE4:
    cmpwi r0, 0x0
    beq lbl_80311C04
    lis r4, s_currentDir_8037F600@ha
    mr r5, r27
    addi r3, r1, 0x10
    addi r4, r4, s_currentDir_8037F600@l
    bl nandConvertPath
    b lbl_80311C44
lbl_80311C04:
    mr r4, r27
    addi r3, r1, 0x10
    bl strcpy
    addi r3, r1, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_80311C44
    addi r0, r1, 0x10
    add r4, r3, r0
    lbz r0, -0x1(r4)
    cmpwi r0, 0x2f
    bne lbl_80311C44
    subic. r0, r3, 0x1
    beq lbl_80311C44
    li r0, 0x0
    stb r0, -0x1(r4)
lbl_80311C44:
    cmpwi r31, 0x0
    bne lbl_80311C90
    lis r4, lbl_8037F65C@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_8037F65C@l
    li r5, 0x9
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80311C7C
    lbz r0, 0x19(r1)
    extsb. r0, r0
    beq lbl_80311C7C
    li r0, 0x1
    b lbl_80311C80
lbl_80311C7C:
    li r0, 0x0
lbl_80311C80:
    cmpwi r0, 0x0
    beq lbl_80311C90
    li r3, -0x66
    b lbl_80311CDC
lbl_80311C90:
    li r0, 0x0
    addi r3, r1, 0x10
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    li r4, 0x0
    bl ISFS_ReadDir
    cmpwi r3, 0x0
    beq lbl_80311CB8
    cmpwi r3, -0x66
    bne lbl_80311CC8
lbl_80311CB8:
    li r0, 0x2
    li r3, 0x0
    stb r0, 0x0(r30)
    b lbl_80311CDC
lbl_80311CC8:
    cmpwi r3, -0x65
    bne lbl_80311CDC
    li r0, 0x1
    li r3, 0x0
    stb r0, 0x0(r30)
lbl_80311CDC:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// NANDGetType
// ----------------------------------------------------------------------------
asm void NANDGetType() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x2
    beq lbl_80311D14
    li r3, -0x80
    b lbl_80311D28
lbl_80311D14:
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl nandGetType
    bl nandConvertErrorCode
lbl_80311D28:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80311D38
// ----------------------------------------------------------------------------
asm void fn_80311D38() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x2
    beq lbl_80311D58
    li r3, -0x80
    b lbl_80311D70
lbl_80311D58:
    stw r5, 0x4(r6)
    mr r5, r6
    li r6, 0x1
    li r7, 0x0
    bl nandGetType
    bl nandConvertErrorCode
lbl_80311D70:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateGetTypeAsync
// ----------------------------------------------------------------------------
asm void NANDPrivateGetTypeAsync() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_8049E260
    cmpwi r0, 0x2
    beq lbl_80311DA0
    li r3, -0x80
    b lbl_80311DB8
lbl_80311DA0:
    stw r5, 0x4(r6)
    mr r5, r6
    li r6, 0x1
    li r7, 0x1
    bl nandGetType
    bl nandConvertErrorCode
lbl_80311DB8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandGetTypeCallback
// ----------------------------------------------------------------------------
asm void nandGetTypeCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    beq lbl_80311DEC
    cmpwi r3, -0x66
    bne lbl_80311E00
lbl_80311DEC:
    lwz r4, 0x88(r4)
    li r0, 0x2
    li r3, 0x0
    stb r0, 0x0(r4)
    b lbl_80311E18
lbl_80311E00:
    cmpwi r3, -0x65
    bne lbl_80311E18
    lwz r4, 0x88(r4)
    li r0, 0x1
    li r3, 0x0
    stb r0, 0x0(r4)
lbl_80311E18:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandGetHomeDir
// ----------------------------------------------------------------------------
asm void nandGetHomeDir() {
    nofralloc
    lis r3, s_homeDir_804648E0@ha
    addi r3, r3, s_homeDir_804648E0@l
    blr
}

// ----------------------------------------------------------------------------
// NANDInitBanner
// ----------------------------------------------------------------------------
asm void NANDInitBanner() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    subi r5, r7, 0xf60
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    bl memset
    lis r3, 0x5749
    stw r29, 0x4(r28)
    addi r0, r3, 0x424e
    la r4, lbl_8049D188
    stw r0, 0x0(r28)
    mr r3, r30
    bl wcscmp
    cmpwi r3, 0x0
    bne lbl_80311EC0
    addi r3, r28, 0x20
    la r4, lbl_8049D18C
    li r5, 0x20
    bl wcsncpy
    b lbl_80311ED0
lbl_80311EC0:
    mr r4, r30
    addi r3, r28, 0x20
    li r5, 0x20
    bl wcsncpy
lbl_80311ED0:
    mr r3, r31
    la r4, lbl_8049D188
    bl wcscmp
    cmpwi r3, 0x0
    bne lbl_80311EF8
    addi r3, r28, 0x60
    la r4, lbl_8049D18C
    li r5, 0x20
    bl wcsncpy
    b lbl_80311F08
lbl_80311EF8:
    mr r4, r31
    addi r3, r28, 0x60
    li r5, 0x20
    bl wcsncpy
lbl_80311F08:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

