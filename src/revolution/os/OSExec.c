#include <revolution/ESP.h>
#include <revolution/IPC.h>
#include <revolution/OS.h>

#include <string.h>

#define MENU_TITLE_ID 0x0000000100000002
#define TICKET_VIEW_SIZE 0xD8

static u8 views[0xBD00] ALIGN(32);

BOOL __OSInReboot;

static s32 _ES_InitLib(s32* fd);
static s32 _ES_GetTicketViews(s32* fd, u64 tid, void* pViews, u32* count);
static s32 _ES_LaunchTitle(s32* fd, u64 tid, void* pViews) DECOMP_DONT_INLINE;

void __OSGetExecParams(OSExecParams* out) {
    if ((void*)OS_DOL_EXEC_PARAMS >= (void*)0x80000000) {
        memcpy(out, OS_DOL_EXEC_PARAMS, sizeof(OSExecParams));
    } else {
        out->WORD_0x0 = 0;
    }
}

//unused
void __OSSetExecParams(){
}

// __OSLaunchMenu: definicion C reemplazada por asm (ver abajo)


/**
 * These were actually re(?)implemented in NANDCore/OSExec according to BBA
 */

static s32 _ES_InitLib(s32* fd) {
    s32 result;

    // Had to remove fd initialization to match __OSLaunchMenu
    // *fd = -1;

    result = IPC_RESULT_OK;

    *fd = IOS_Open("/dev/es", IPC_OPEN_NONE);
    if (*fd < 0) {
        result = *fd;
    }

    return result;
}

static s32 _ES_GetTicketViews(s32* fd, u64 tid, void* pViews, u32* count) {
    s32 result;
    // TODO(kiwi) Hacky solution
    u8 work[0x120] ALIGN(32);
    IPCIOVector* pVectors = (IPCIOVector*)(work + 0x0);
    u64* pTid = (u64*)(work + 0x20);
    u32* pCount = (u32*)(work + 0x40);

    // Cast is necessary
    if (*fd < 0 || count == ((void*)NULL)) {
        return -0x3F9;
    }

    if ((u32)pViews % 32 != 0) {
        return -0x3F9;
    }

    *pTid = tid;

    // NULL views ptr = get num views
    if (pViews == (void*)NULL) {
        pVectors[0].base = pTid;
        pVectors[0].length = sizeof(u64);
        pVectors[1].base = pCount;
        pVectors[1].length = sizeof(u32);

        result =
            IOS_Ioctlv(*fd, ES_IOCTLV_GET_NUM_TICKET_VIEWS, 1, 1, pVectors);
        if (result == IPC_RESULT_OK) {
            *count = *pCount;
        }

        return result;
    }

    if (*count == 0) {
        return -0x3F9;
    }

    *pCount = *count;

    pVectors[0].base = pTid;
    pVectors[0].length = sizeof(u64);
    pVectors[1].base = pCount;
    pVectors[1].length = sizeof(u32);
    pVectors[2].base = pViews;
    pVectors[2].length = *count * TICKET_VIEW_SIZE;
    return IOS_Ioctlv(*fd, ES_IOCTLV_GET_TICKET_VIEWS, 2, 1, pVectors);
}

static s32 _ES_LaunchTitle(s32* fd, u64 tid, void* pViews) {
    // TODO(kiwi) Hacky solution
    u8 tidWork[256] ALIGN(32);
    u8 vectorWork[32] ALIGN(32);
    IPCIOVector* pVectors = (IPCIOVector*)vectorWork;
    u64* pTid = (u64*)tidWork;

    if (*fd < 0) {
        return -0x3F9;
    }

    if ((u32)pViews % 32 != 0) {
        return -0x3F9;
    }

    *pTid = tid;

    pVectors[0].base = pTid;
    pVectors[0].length = sizeof(u64);
    pVectors[1].base = pViews;
    pVectors[1].length = TICKET_VIEW_SIZE;

    return IOS_IoctlvReboot(*fd, ES_IOCTLV_LAUNCH_TITLE, 2, 0, pVectors);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049D1F0;
extern float lbl_8049D1F8;
extern float lbl_8049E2D8;
extern float lbl_8049E2DC;
extern s32 lbl_8049E2E0;
extern s32 lbl_8049E2E8;
extern float lbl_804A2760;
extern float lbl_804A2761;
extern float lbl_804A2762;
extern float lbl_804A2763;
extern u8 lbl_803804F8[];
extern u8 lbl_8038051C[];
extern u8 lbl_80380558[];
extern u8 lbl_80464D00[];
extern void DCInvalidateRange();
extern void DVDInit();
extern void DVDLowFinalize();
extern void DVDLowInit();
extern void DVDLowOpenPartition();
extern void DVDLowOpenPartitionWithTmdAndTicketView();
extern void DVDLowReadDiskID();
extern void DVDLowUnencryptedRead();
extern void DVDResume();
extern void DVDSetAutoInvalidation();
extern void ICFlashInvalidate();
extern void ICInvalidateRange();
extern void IPCReInit();
extern void OSPlayTimeIsLimited();
extern void OSSetArenaHi();
extern void OSSetArenaLo();
extern void PackArgs();
extern void PackInstallerArgs();
extern void Run();
extern void Utf16ToArg();
extern void __DVDPrepareResetAsync();
extern void __OSBootDol();
extern void __OSBootDolSimple();
extern void __OSGetPlayTime();
extern void __OSInitIPCBuffer();
extern void __OSInitMemoryProtection();
extern void __OSWriteExpiredFlag();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_25();
extern void callback();
extern void fn_802D7A9C();
extern void fn_802D926C();
extern void fn_803150C4();
extern void fn_80316B20();
extern void fn_80317288();
extern void fn_8031ABB0();
extern void fn_8031B034();
extern void fn_8031B930();
extern void fn_8031B9D4();
extern void snprintf();
extern void sprintf();
extern void wcscpy();

// asm_to_cpp: PackArgs
asm void PackArgs() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r4
    mr r29, r5
    mr r30, r3
    li r4, 0x0
    li r5, 0x2000
    bl memset
    cmpwi r25, 0x0
    bne lbl_80316680
    li r0, 0x0
    stw r0, 0x8(r30)
    b lbl_803167A4
lbl_80316680:
    slwi r0, r25, 2
    mr r31, r25
    addi r26, r30, 0x2000
    add r28, r29, r0
    b lbl_803166BC
lbl_80316694:
    lwz r27, 0x0(r28)
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    mr r4, r27
    subf r26, r0, r26
    mr r3, r26
    bl strcpy
    subf r0, r30, r26
    stw r0, 0x0(r28)
lbl_803166BC:
    subic. r25, r25, 0x1
    subi r28, r28, 0x4
    bge lbl_80316694
    addic. r3, r31, 0x1
    subf r0, r30, r26
    clrrwi r4, r0, 2
    li r7, 0x0
    add r6, r30, r4
    slwi r0, r3, 2
    subf r6, r0, r6
    beq lbl_80316794
    cmplwi r3, 0x8
    subi r3, r31, 0x7
    ble lbl_80316760
    addi r0, r3, 0x7
    mr r4, r29
    srwi r0, r0, 3
    mr r5, r6
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_80316760
lbl_80316710:
    lwz r0, 0x0(r4)
    addi r7, r7, 0x8
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x1c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_80316710
lbl_80316760:
    addi r3, r31, 0x1
    slwi r5, r7, 2
    subf r0, r7, r3
    add r4, r29, r5
    add r5, r6, r5
    mtctr r0
    cmplw r7, r3
    bge lbl_80316794
lbl_80316780:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_80316780
lbl_80316794:
    subi r0, r6, 0x4
    stw r31, -0x4(r6)
    subf r0, r30, r0
    stw r0, 0x8(r30)
lbl_803167A4:
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: Utf16ToArg
asm void Utf16ToArg() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_80316910
    mr r9, r3
    li r5, 0x4
    li r0, 0x2
    b lbl_803168E8
lbl_803167D8:
    li r10, 0x0
    mtctr r0
lbl_803167E0:
    clrlwi. r8, r10, 31
    li r7, 0xf0
    beq lbl_803167F0
    li r7, 0xf
lbl_803167F0:
    neg r3, r8
    lbz r6, 0x0(r4)
    or r3, r3, r8
    srawi r3, r3, 31
    extsb r6, r6
    andc r3, r5, r3
    and r6, r6, r7
    clrlwi r3, r3, 24
    sraw. r3, r6, r3
    blt lbl_8031682C
    cmpwi r3, 0xa
    bge lbl_8031682C
    addi r3, r3, 0x30
    stb r3, 0x0(r9)
    b lbl_80316850
lbl_8031682C:
    cmpwi r3, 0xa
    blt lbl_80316848
    cmpwi r3, 0x10
    bge lbl_80316848
    addi r3, r3, 0x57
    stb r3, 0x0(r9)
    b lbl_80316850
lbl_80316848:
    li r3, 0x0
    blr
lbl_80316850:
    cmpwi r8, 0x0
    beq lbl_8031685C
    addi r4, r4, 0x1
lbl_8031685C:
    addi r10, r10, 0x1
    li r7, 0xf0
    clrlwi. r8, r10, 31
    beq lbl_80316870
    li r7, 0xf
lbl_80316870:
    neg r3, r8
    lbz r6, 0x0(r4)
    or r3, r3, r8
    srawi r3, r3, 31
    extsb r6, r6
    andc r3, r5, r3
    and r6, r6, r7
    clrlwi r3, r3, 24
    sraw. r3, r6, r3
    blt lbl_803168AC
    cmpwi r3, 0xa
    bge lbl_803168AC
    addi r3, r3, 0x30
    stb r3, 0x1(r9)
    b lbl_803168D0
lbl_803168AC:
    cmpwi r3, 0xa
    blt lbl_803168C8
    cmpwi r3, 0x10
    bge lbl_803168C8
    addi r3, r3, 0x57
    stb r3, 0x1(r9)
    b lbl_803168D0
lbl_803168C8:
    li r3, 0x0
    blr
lbl_803168D0:
    cmpwi r8, 0x0
    addi r9, r9, 0x2
    beq lbl_803168E0
    addi r4, r4, 0x1
lbl_803168E0:
    addi r10, r10, 0x1
    bdnz lbl_803167E0
lbl_803168E8:
    lbz r3, 0x0(r4)
    extsb. r3, r3
    bne lbl_803167D8
    lbz r3, 0x1(r4)
    extsb. r3, r3
    bne lbl_803167D8
    li r0, 0x0
    li r3, 0x1
    stb r0, 0x0(r9)
    blr
lbl_80316910:
    li r3, 0x0
    blr
}

// asm_to_cpp: PackInstallerArgs
asm void PackInstallerArgs() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r30, r3
    li r4, 0x0
    li r5, 0x2000
    bl memset
    cmpwi r27, 0x0
    bne lbl_80316958
    li r0, 0x0
    stw r0, 0x8(r30)
    b lbl_80316AC8
lbl_80316958:
    slwi r0, r27, 2
    mr r31, r27
    addi r29, r30, 0x2000
    add r26, r28, r0
    b lbl_803169E0
lbl_8031696C:
    cmpwi r27, 0x2
    blt lbl_80316988
    srwi r3, r27, 31
    clrlwi r0, r27, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    beq lbl_803169B4
lbl_80316988:
    lwz r25, 0x0(r26)
    mr r3, r25
    bl strlen
    addi r0, r3, 0x1
    mr r4, r25
    subf r29, r0, r29
    mr r3, r29
    bl strcpy
    subf r0, r30, r29
    stw r0, 0x0(r26)
    b lbl_803169E0
lbl_803169B4:
    lwz r25, 0x0(r26)
    mr r3, r25
    bl wcscpy
    slwi r3, r3, 2
    mr r4, r25
    addi r0, r3, 0x1
    subf r29, r0, r29
    mr r3, r29
    bl Utf16ToArg
    subf r0, r30, r29
    stw r0, 0x0(r26)
lbl_803169E0:
    subic. r27, r27, 0x1
    subi r26, r26, 0x4
    bge lbl_8031696C
    addic. r3, r31, 0x1
    subf r0, r30, r29
    clrrwi r4, r0, 2
    li r7, 0x0
    add r6, r30, r4
    slwi r0, r3, 2
    subf r6, r0, r6
    beq lbl_80316AB8
    cmplwi r3, 0x8
    subi r3, r31, 0x7
    ble lbl_80316A84
    addi r0, r3, 0x7
    mr r4, r28
    srwi r0, r0, 3
    mr r5, r6
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_80316A84
lbl_80316A34:
    lwz r0, 0x0(r4)
    addi r7, r7, 0x8
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x1c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_80316A34
lbl_80316A84:
    addi r3, r31, 0x1
    slwi r5, r7, 2
    subf r0, r7, r3
    add r4, r28, r5
    add r5, r6, r5
    mtctr r0
    cmplw r7, r3
    bge lbl_80316AB8
lbl_80316AA4:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_80316AA4
lbl_80316AB8:
    subi r0, r6, 0x4
    stw r31, -0x4(r6)
    subf r0, r30, r0
    stw r0, 0x8(r30)
lbl_80316AC8:
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: Run
asm void Run() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl ICFlashInvalidate
    sync
    isync
    mtctr r31
    bctr
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80316B20(void) {
    lbl_8049E2E8 = 1;
}

void callback(s32 arg0) {
    lbl_8049E2E0 = arg0;
}

// asm_to_cpp: __OSBootDolSimple
asm void __OSBootDolSimple() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14(r1)
    li r31, -0x1
    li r3, 0x20
    li r4, 0x20
    stw r0, 0x10(r1)
    bl OSAllocFromMEM1ArenaLo
    mr r28, r3
    li r3, 0x800
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    mr r29, r3
    li r3, 0x4a00
    li r4, 0x40
    bl OSAllocFromMEM1ArenaLo
    mr r26, r3
    li r3, 0xe0
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lis r4, 0x8000
    lwz r5, lbl_8049E2D8
    lwz r0, 0x3194(r4)
    mr r30, r3
    cmplw r5, r0
    bne lbl_80316C74
    lwz r0, 0x3198(r4)
    cmpwi r0, 0x0
    beq lbl_80316C74
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80316C00
    mr r4, r30
    li r3, 0x0
    bl ESP_DiGetTicketView
    mr r31, r3
lbl_80316C00:
    cmpwi r31, 0x0
    bne lbl_80316C18
    addi r4, r1, 0x10
    li r3, 0x0
    bl ESP_DiGetTmd
    mr r31, r3
lbl_80316C18:
    cmpwi r31, 0x0
    bne lbl_80316C30
    mr r3, r26
    addi r4, r1, 0x10
    bl ESP_DiGetTmd
    mr r31, r3
lbl_80316C30:
    bl ESP_CloseLib
    bl OSPlayTimeIsLimited
    cmpwi r3, 0x0
    beq lbl_80316C74
    li r3, 0x0
    li r0, -0x1
    stw r3, 0xc(r1)
    mr r3, r30
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    bl __OSGetPlayTime
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_80316C74
    bl __OSWriteExpiredFlag
    bl fn_8031B930
lbl_80316C74:
    cmpwi r31, 0x0
    bne lbl_80316C98
    lis r3, 0x8000
    mr r27, r29
    lwz r0, 0x3194(r3)
    stw r0, 0x4(r29)
    lwz r0, 0x3198(r3)
    stw r0, 0x0(r29)
    b lbl_80316F0C
lbl_80316C98:
    li r0, 0x0
    lis r3, callback@ha
    stw r0, lbl_8049E2E0
    addi r3, r3, callback@l
    bl fn_802D7A9C
lbl_80316CAC:
    lwz r0, lbl_8049E2E0
    cmpwi r0, 0x0
    beq lbl_80316CAC
    lwz r0, lbl_8049E2E0
    cmplwi r0, 0x1
    beq lbl_80316CE0
    lis r3, lbl_803804F8@ha
    lwz r4, lbl_8049E2E0
    addi r3, r3, lbl_803804F8@l
    li r5, 0x398
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80316CE0:
    li r0, 0x0
    lis r6, callback@ha
    stw r0, lbl_8049E2E0
    mr r3, r28
    addi r6, r6, callback@l
    li r4, 0x20
    lis r5, 0x1
    bl DVDLowUnencryptedRead
lbl_80316D00:
    lwz r0, lbl_8049E2E0
    cmpwi r0, 0x0
    beq lbl_80316D00
    lwz r0, lbl_8049E2E0
    cmplwi r0, 0x1
    beq lbl_80316D34
    lis r3, lbl_803804F8@ha
    lwz r4, lbl_8049E2E0
    addi r3, r3, lbl_803804F8@l
    li r5, 0x3a2
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80316D34:
    li r0, 0x0
    lis r6, callback@ha
    stw r0, lbl_8049E2E0
    mr r3, r29
    addi r6, r6, callback@l
    li r4, 0x800
    lwz r5, 0x4(r28)
    bl DVDLowUnencryptedRead
lbl_80316D54:
    lwz r0, lbl_8049E2E0
    cmpwi r0, 0x0
    beq lbl_80316D54
    lwz r0, lbl_8049E2E0
    cmplwi r0, 0x1
    beq lbl_80316D88
    lis r3, lbl_803804F8@ha
    lwz r4, lbl_8049E2E0
    addi r3, r3, lbl_803804F8@l
    li r5, 0x3ae
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80316D88:
    lwz r4, lbl_8049E2D8
    mr r6, r29
    li r27, 0x0
    li r5, 0x0
    b lbl_80316DB4
lbl_80316D9C:
    lwz r0, 0x4(r6)
    cmplw r0, r4
    bne lbl_80316DAC
    mr r27, r6
lbl_80316DAC:
    addi r6, r6, 0x8
    addi r5, r5, 0x1
lbl_80316DB4:
    lwz r0, 0x0(r28)
    clrlwi r3, r5, 24
    cmplw r3, r0
    blt lbl_80316D9C
    cmpwi r27, 0x0
    bne lbl_80316E04
    lwz r4, lbl_8049E2D8
    addi r6, r29, 0x20
    li r5, 0x0
    b lbl_80316DF4
lbl_80316DDC:
    lwz r0, 0x4(r6)
    cmplw r0, r4
    bne lbl_80316DEC
    mr r27, r6
lbl_80316DEC:
    addi r6, r6, 0x8
    addi r5, r5, 0x1
lbl_80316DF4:
    lwz r0, 0x8(r28)
    clrlwi r3, r5, 24
    cmplw r3, r0
    blt lbl_80316DDC
lbl_80316E04:
    cmpwi r27, 0x0
    bne lbl_80316E20
    lis r3, lbl_8038051C@ha
    addi r3, r3, lbl_8038051C@l
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80316E20:
    lwz r3, 0x4(r27)
    lis r4, 0x8000
    li r0, 0x0
    stw r3, 0x3194(r4)
    lwz r3, 0x0(r27)
    stw r3, 0x3198(r4)
    stw r0, lbl_8049E2E0
    lbz r0, 0x3187(r4)
    cmplwi r0, 0x80
    bne lbl_80316E70
    lis r9, callback@ha
    lwz r3, 0x0(r27)
    lwz r5, 0x10(r1)
    mr r4, r30
    mr r6, r26
    addi r9, r9, callback@l
    li r7, 0x0
    li r8, 0x0
    bl DVDLowOpenPartitionWithTmdAndTicketView
    b lbl_80316E90
lbl_80316E70:
    lis r8, callback@ha
    lwz r3, 0x0(r27)
    mr r7, r26
    li r4, 0x0
    addi r8, r8, callback@l
    li r5, 0x0
    li r6, 0x0
    bl DVDLowOpenPartition
lbl_80316E90:
    lwz r0, lbl_8049E2E0
    cmpwi r0, 0x0
    beq lbl_80316E90
    lwz r0, lbl_8049E2E0
    cmplwi r0, 0x1
    beq lbl_80316EC4
    lis r3, lbl_803804F8@ha
    lwz r4, lbl_8049E2E0
    addi r3, r3, lbl_803804F8@l
    li r5, 0x3eb
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80316EC4:
    li r0, 0x0
    lis r3, callback@ha
    stw r0, lbl_8049E2E0
    addi r3, r3, callback@l
    bl fn_802D7A9C
lbl_80316ED8:
    lwz r0, lbl_8049E2E0
    cmpwi r0, 0x0
    beq lbl_80316ED8
    lwz r0, lbl_8049E2E0
    cmplwi r0, 0x1
    beq lbl_80316F0C
    lis r3, lbl_803804F8@ha
    lwz r4, lbl_8049E2E0
    addi r3, r3, lbl_803804F8@l
    li r5, 0x3f5
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80316F0C:
    lwz r24, 0x184(r26)
    lwz r23, 0x188(r26)
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80316F40
    lis r3, lbl_803804F8@ha
    mr r4, r31
    addi r3, r3, lbl_803804F8@l
    li r5, 0x400
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B9D4
lbl_80316F40:
    mr r4, r23
    mr r3, r24
    addi r6, r1, 0x14
    li r5, 0x0
    bl fn_802D926C
    lwz r0, 0x14(r1)
    mr r31, r3
    cmplwi r0, 0x1
    bne lbl_80316F6C
    cmpwi r3, 0x0
    beq lbl_80316F88
lbl_80316F6C:
    lis r3, lbl_803804F8@ha
    mr r4, r31
    addi r3, r3, lbl_803804F8@l
    li r5, 0x409
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B9D4
lbl_80316F88:
    lwz r0, 0x14(r1)
    li r4, 0x20
    mulli r3, r0, 0xd8
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    mr r25, r3
    mr r4, r23
    mr r3, r24
    addi r6, r1, 0x14
    mr r5, r25
    bl fn_802D926C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80316FE0
    lis r3, lbl_803804F8@ha
    mr r4, r31
    addi r3, r3, lbl_803804F8@l
    li r5, 0x412
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B9D4
lbl_80316FE0:
    bl DVDLowFinalize
    lis r5, 0x8000
    li r4, 0x100
    lwz r29, 0x311c(r5)
    addi r3, r5, 0x3100
    lwz r28, 0x3120(r5)
    bl fn_803150C4
    mr r4, r23
    mr r3, r24
    mr r5, r25
    bl ESP_LaunchTitle
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80317034
    lis r3, lbl_803804F8@ha
    mr r4, r31
    addi r3, r3, lbl_803804F8@l
    li r5, 0x422
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B9D4
lbl_80317034:
    bl ESP_CloseLib
    lis r31, 0x8000
    li r4, 0x100
    addi r3, r31, 0x3100
    bl DCInvalidateRange
    lwz r3, 0x311c(r31)
    cmplw r29, r3
    bge lbl_803170A4
    lwz r0, 0x3120(r31)
    subf r0, r0, r3
    subf r0, r0, r29
    stw r0, 0x3120(r31)
    lwz r3, 0x3128(r31)
    lwz r0, 0x311c(r31)
    subf r0, r3, r0
    subf r0, r0, r29
    stw r0, 0x3128(r31)
    lwz r3, 0x3130(r31)
    lwz r0, 0x311c(r31)
    subf r0, r3, r0
    subf r0, r0, r29
    stw r0, 0x3130(r31)
    lwz r3, 0x3134(r31)
    lwz r0, 0x311c(r31)
    subf r0, r3, r0
    subf r0, r0, r29
    stw r0, 0x3134(r31)
    stw r29, 0x311c(r31)
lbl_803170A4:
    lis r3, 0x8000
    lwz r0, 0x3120(r3)
    cmplw r28, r0
    bge lbl_803170B8
    bl __OSInitMemoryProtection
lbl_803170B8:
    bl __OSInitIPCBuffer
    bl IPCReInit
    bl IPCCltReInit
    bl DVDLowInit
    li r0, 0x0
    lis r3, lbl_80464D00@ha
    lis r4, callback@ha
    stw r0, lbl_8049E2E0
    addi r3, r3, lbl_80464D00@l
    addi r4, r4, callback@l
    bl DVDLowReadDiskID
lbl_803170E4:
    lwz r0, lbl_8049E2E0
    cmpwi r0, 0x0
    beq lbl_803170E4
    lwz r0, lbl_8049E2E0
    cmplwi r0, 0x1
    beq lbl_80317118
    lis r3, lbl_803804F8@ha
    lwz r4, lbl_8049E2E0
    addi r3, r3, lbl_803804F8@l
    li r5, 0x44e
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_80317118:
    li r0, 0x0
    lis r3, 0x8000
    stw r0, lbl_8049E2E0
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_80317158
    lis r9, callback@ha
    lwz r3, 0x0(r27)
    lwz r5, 0x10(r1)
    mr r4, r30
    mr r6, r26
    addi r9, r9, callback@l
    li r7, 0x0
    li r8, 0x0
    bl DVDLowOpenPartitionWithTmdAndTicketView
    b lbl_80317178
lbl_80317158:
    lis r8, callback@ha
    lwz r3, 0x0(r27)
    mr r7, r26
    li r4, 0x0
    addi r8, r8, callback@l
    li r5, 0x0
    li r6, 0x0
    bl DVDLowOpenPartition
lbl_80317178:
    lwz r0, lbl_8049E2E0
    cmpwi r0, 0x0
    beq lbl_80317178
    lwz r0, lbl_8049E2E0
    cmplwi r0, 0x1
    beq lbl_803171AC
    lis r3, lbl_803804F8@ha
    lwz r4, lbl_8049E2E0
    addi r3, r3, lbl_803804F8@l
    li r5, 0x465
    opword 0x4CC63182
    bl OSReport
    bl fn_8031B930
lbl_803171AC:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: __OSLaunchMenu
asm void __OSLaunchMenu(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x8128
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r0, 0x8(r1)
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    bl ESP_InitLib
    cmpwi r3, 0x0
    bne lbl_80317274
    addi r6, r1, 0x8
    li r4, 0x2
    li r3, 0x1
    li r5, 0x0
    bl fn_802D926C
    lwz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_80317274
    cmpwi r3, 0x0
    beq lbl_80317224
    b lbl_80317274
lbl_80317224:
    mulli r3, r0, 0xd8
    li r4, 0x20
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    mr r31, r3
    addi r6, r1, 0x8
    mr r5, r31
    li r4, 0x2
    li r3, 0x1
    bl fn_802D926C
    cmpwi r3, 0x0
    bne lbl_80317274
    mr r5, r31
    li r4, 0x2
    li r3, 0x1
    bl ESP_LaunchTitle
    cmpwi r3, 0x0
    bne lbl_80317274
lbl_80317270:
    b lbl_80317270
lbl_80317274:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80317288
asm void fn_80317288() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x220
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_24
    mr r27, r3
    mr r24, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    mr r26, r8
    mr r25, r9
    bl OSDisableInterrupts
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_803172E0
    lis r3, 0x8000
    lwz r0, 0x3194(r3)
    stw r0, lbl_8049E2D8
lbl_803172E0:
    lis r3, 0xc
    subi r3, r3, 0x5d31
    bl fn_8031ABB0
    li r3, 0x1c
    li r4, 0x1
    bl OSAllocFromMEM1ArenaLo
    li r0, 0x1
    cmpwi r31, 0x0
    stw r0, 0x0(r3)
    mr r30, r3
    stw r24, 0x4(r3)
    stw r28, 0xc(r3)
    stw r29, 0x10(r3)
    stw r31, 0x14(r3)
    bne lbl_80317368
    li r3, 0x2000
    li r4, 0x1
    bl OSAllocFromMEM1ArenaLo
    stw r3, 0x18(r30)
    lwz r0, lbl_8049E2D8
    cmplwi r0, 0x2
    bne lbl_80317358
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    bne lbl_80317358
    lwz r3, 0x18(r30)
    mr r4, r26
    mr r5, r25
    bl PackInstallerArgs
    b lbl_80317368
lbl_80317358:
    lwz r3, 0x18(r30)
    mr r4, r26
    mr r5, r25
    bl PackArgs
lbl_80317368:
    bl DVDInit
    li r3, 0x1
    bl DVDSetAutoInvalidation
    bl DVDResume
    li r0, 0x0
    lis r3, fn_80316B20@ha
    stw r0, lbl_8049E2E8
    addi r3, r3, fn_80316B20@l
    bl __DVDPrepareResetAsync
    li r3, -0x10
    bl __OSMaskInterrupts
    li r3, 0x10
    bl __OSUnmaskInterrupts
    bl OSEnableInterrupts
lbl_803173A0:
    lwz r0, lbl_8049E2E8
    cmpwi r0, 0x1
    bne lbl_803173A0
    bl __OSBootDolSimple
    addis r0, r24, 0x6000
    cmplwi r0, 0x0
    bne lbl_80317414
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    bne lbl_80317414
    bl ESP_InitLib
    cmpwi r3, 0x0
    bne lbl_80317AC0
    addi r3, r1, 0x60
    bl ESP_GetTitleId
    cmpwi r3, 0x0
    bne lbl_80317AC0
    bl ESP_CloseLib
    cmpwi r3, 0x0
    bne lbl_80317AC0
    lwz r3, 0x18(r30)
    li r4, 0x11
    lwz r0, 0x4(r25)
    la r5, lbl_8049D1F0
    lwz r7, 0x60(r1)
    lwz r8, 0x64(r1)
    add r3, r3, r0
    opword 0x4CC63182
    bl snprintf
lbl_80317414:
    li r3, 0x20
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lwz r6, lbl_8049E2DC
    mr r31, r3
    cmpwi r6, 0x0
    beq lbl_80317434
    b lbl_803174F0
lbl_80317434:
    lis r26, 0x8000
    lwz r0, 0x30f4(r26)
    cmpwi r0, 0x0
    beq lbl_803174E8
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lbz r6, lbl_804A2760
    mr r25, r3
    lbz r10, lbl_804A2761
    mr r4, r25
    lbz r9, lbl_804A2762
    addi r3, r1, 0x140
    lbz r0, lbl_804A2763
    li r5, 0x40
    lwz r8, 0x30f4(r26)
    li r7, 0x0
    stb r6, 0x48(r1)
    srawi r6, r8, 2
    li r8, 0x0
    stb r10, 0x49(r1)
    stb r9, 0x4a(r1)
    stb r0, 0x4b(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_803174BC
lbl_80317498:
    addi r3, r1, 0x140
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_803174B8
    addi r3, r1, 0x140
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_803174BC
lbl_803174B8:
    bl fn_8031B930
lbl_803174BC:
    addi r3, r1, 0x140
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_80317498
    lis r3, 0x8000
    lwz r4, 0x38(r25)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8049E2DC
    b lbl_803174F0
lbl_803174E8:
    li r6, 0x910
    stw r6, lbl_8049E2DC
lbl_803174F0:
    lbz r7, lbl_804A2760
    mr r4, r31
    lbz r10, lbl_804A2761
    addi r3, r1, 0x170
    lbz r9, lbl_804A2762
    li r5, 0x20
    lbz r0, lbl_804A2763
    li r8, 0x0
    stb r7, 0x4c(r1)
    li r7, 0x0
    stb r10, 0x4d(r1)
    stb r9, 0x4e(r1)
    stb r0, 0x4f(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_80317550
lbl_8031752C:
    addi r3, r1, 0x170
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_8031754C
    addi r3, r1, 0x170
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_80317550
lbl_8031754C:
    bl fn_8031B930
lbl_80317550:
    addi r3, r1, 0x170
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_8031752C
    lwz r6, lbl_8049E2DC
    cmpwi r6, 0x0
    beq lbl_80317570
    b lbl_8031762C
lbl_80317570:
    lis r26, 0x8000
    lwz r0, 0x30f4(r26)
    cmpwi r0, 0x0
    beq lbl_80317624
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lbz r6, lbl_804A2760
    mr r25, r3
    lbz r10, lbl_804A2761
    mr r4, r25
    lbz r9, lbl_804A2762
    addi r3, r1, 0x1a0
    lbz r0, lbl_804A2763
    li r5, 0x40
    lwz r8, 0x30f4(r26)
    li r7, 0x0
    stb r6, 0x50(r1)
    srawi r6, r8, 2
    li r8, 0x0
    stb r10, 0x51(r1)
    stb r9, 0x52(r1)
    stb r0, 0x53(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_803175F8
lbl_803175D4:
    addi r3, r1, 0x1a0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_803175F4
    addi r3, r1, 0x1a0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_803175F8
lbl_803175F4:
    bl fn_8031B930
lbl_803175F8:
    addi r3, r1, 0x1a0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_803175D4
    lis r3, 0x8000
    lwz r4, 0x38(r25)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8049E2DC
    b lbl_8031762C
lbl_80317624:
    li r6, 0x910
    stw r6, lbl_8049E2DC
lbl_8031762C:
    lwz r4, 0x14(r31)
    addi r3, r1, 0x1d0
    lbz r7, lbl_804A2760
    addi r6, r6, 0x8
    addi r0, r4, 0x1f
    lbz r10, lbl_804A2761
    lbz r9, lbl_804A2762
    clrrwi r5, r0, 5
    lbz r0, lbl_804A2763
    lis r4, 0x8120
    stb r7, 0x54(r1)
    li r7, 0x0
    li r8, 0x0
    stb r10, 0x55(r1)
    stb r9, 0x56(r1)
    stb r0, 0x57(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_80317698
lbl_80317674:
    addi r3, r1, 0x1d0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_80317694
    addi r3, r1, 0x1d0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_80317698
lbl_80317694:
    bl fn_8031B930
lbl_80317698:
    addi r3, r1, 0x1d0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_80317674
    lwz r4, 0x14(r31)
    lis r3, 0x8120
    addi r0, r4, 0x1f
    clrrwi r4, r0, 5
    bl ICInvalidateRange
    lis r4, lbl_80380558@ha
    mr r3, r31
    addi r4, r4, lbl_80380558@l
    li r5, 0xa
    bl strncmp
    cmpwi r3, 0x0
    ble lbl_803176E0
    li r0, 0x1
    b lbl_803176E4
lbl_803176E0:
    li r0, 0x0
lbl_803176E4:
    cmpwi r0, 0x0
    beq lbl_80317934
    addis r0, r27, 0x1
    cmplwi r0, 0xffff
    bne lbl_803177D4
    lwz r6, lbl_8049E2DC
    cmpwi r6, 0x0
    beq lbl_80317708
    b lbl_803177C4
lbl_80317708:
    lis r27, 0x8000
    lwz r0, 0x30f4(r27)
    cmpwi r0, 0x0
    beq lbl_803177BC
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lbz r6, lbl_804A2760
    mr r25, r3
    lbz r10, lbl_804A2761
    mr r4, r25
    lbz r9, lbl_804A2762
    addi r3, r1, 0x110
    lbz r0, lbl_804A2763
    li r5, 0x40
    lwz r8, 0x30f4(r27)
    li r7, 0x0
    stb r6, 0x44(r1)
    srawi r6, r8, 2
    li r8, 0x0
    stb r10, 0x45(r1)
    stb r9, 0x46(r1)
    stb r0, 0x47(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_80317790
lbl_8031776C:
    addi r3, r1, 0x110
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_8031778C
    addi r3, r1, 0x110
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_80317790
lbl_8031778C:
    bl fn_8031B930
lbl_80317790:
    addi r3, r1, 0x110
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_8031776C
    lis r3, 0x8000
    lwz r4, 0x38(r25)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8049E2DC
    b lbl_803177C4
lbl_803177BC:
    li r6, 0x910
    stw r6, lbl_8049E2DC
lbl_803177C4:
    lwz r3, 0x14(r31)
    addi r0, r3, 0x20
    srwi r0, r0, 2
    add r27, r0, r6
lbl_803177D4:
    stw r27, 0x8(r30)
    addi r3, r1, 0x28
    addi r4, r1, 0x2c
    addi r5, r1, 0x30
    lwz r12, 0x10(r31)
    mtctr r12
    bctrl
    li r3, 0x1c
    li r4, 0x1
    bl OSAllocFromMEM1ArenaLo
    mr r25, r3
    mr r4, r30
    li r5, 0x1c
    bl memcpy
    lis r4, 0x8000
    lis r3, OSReport@ha
    stw r25, 0x30f0(r4)
    addi r3, r3, OSReport@l
    lwz r12, 0x28(r1)
    mtctr r12
    bctrl
    mr r3, r25
    bl OSSetArenaLo
    b lbl_803178B0
lbl_80317834:
    lbz r5, lbl_804A2760
    addi r3, r1, 0xe0
    lbz r4, lbl_804A2761
    li r7, 0x0
    lbz r9, lbl_804A2762
    li r8, 0x0
    lbz r0, lbl_804A2763
    stb r5, 0x40(r1)
    lwz r10, 0x3c(r1)
    lwz r6, __DVDLayoutFormat
    stb r4, 0x41(r1)
    lwz r5, 0x38(r1)
    srw r6, r10, r6
    lwz r4, 0x34(r1)
    stb r9, 0x42(r1)
    stb r0, 0x43(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_803178A0
lbl_8031787C:
    addi r3, r1, 0xe0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_8031789C
    addi r3, r1, 0xe0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_803178A0
lbl_8031789C:
    bl fn_8031B930
lbl_803178A0:
    addi r3, r1, 0xe0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_8031787C
lbl_803178B0:
    lwz r12, 0x2c(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80317834
    lwz r12, 0x30(r1)
    mtctr r12
    bctrl
    lis r6, 0x8000
    mr r26, r3
    lwz r5, 0x0(r6)
    li r0, 0x80
    li r3, 0x1c
    li r4, 0x1
    stw r5, 0x3180(r6)
    stb r0, 0x3184(r6)
    bl OSAllocFromMEM1ArenaLo
    mr r25, r3
    mr r4, r30
    li r5, 0x1c
    bl memcpy
    lis r3, 0x8000
    li r0, 0x7
    stw r25, 0x30f0(r3)
    lis r3, 0xcc00
    stw r0, 0x3024(r3)
    bl OSDisableInterrupts
    mr r3, r26
    bl Run
    b lbl_80317AC0
lbl_80317934:
    lis r3, 0x8130
    lwz r6, lbl_8049E2DC
    stw r28, -0x2010(r3)
    li r0, 0x1
    cmpwi r6, 0x0
    lis r27, 0x8000
    stw r29, -0x2014(r3)
    stb r0, 0x30e2(r27)
    beq lbl_8031795C
    b lbl_80317A14
lbl_8031795C:
    lwz r0, 0x30f4(r27)
    cmpwi r0, 0x0
    beq lbl_80317A0C
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lbz r6, lbl_804A2760
    mr r25, r3
    lbz r10, lbl_804A2761
    mr r4, r25
    lbz r9, lbl_804A2762
    addi r3, r1, 0xb0
    lbz r0, lbl_804A2763
    li r5, 0x40
    lwz r8, 0x30f4(r27)
    li r7, 0x0
    stb r6, 0x24(r1)
    srawi r6, r8, 2
    li r8, 0x0
    stb r10, 0x25(r1)
    stb r9, 0x26(r1)
    stb r0, 0x27(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_803179E0
lbl_803179BC:
    addi r3, r1, 0xb0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_803179DC
    addi r3, r1, 0xb0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_803179E0
lbl_803179DC:
    bl fn_8031B930
lbl_803179E0:
    addi r3, r1, 0xb0
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_803179BC
    lis r3, 0x8000
    lwz r4, 0x38(r25)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8049E2DC
    b lbl_80317A14
lbl_80317A0C:
    li r6, 0x910
    stw r6, lbl_8049E2DC
lbl_80317A14:
    lwz r8, 0x14(r31)
    addi r3, r1, 0x80
    lwz r7, 0x18(r31)
    lis r4, 0x8133
    addi r0, r8, 0x20
    lbz r5, lbl_804A2760
    srwi r8, r0, 2
    lbz r10, lbl_804A2761
    lbz r9, lbl_804A2762
    add r6, r8, r6
    lbz r0, lbl_804A2763
    addi r7, r7, 0x1f
    stb r5, 0x20(r1)
    clrrwi r5, r7, 5
    li r7, 0x0
    li r8, 0x0
    stb r10, 0x21(r1)
    stb r9, 0x22(r1)
    stb r0, 0x23(r1)
    bl DVDReadAbsAsyncPrio
    b lbl_80317A8C
lbl_80317A68:
    addi r3, r1, 0x80
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x2
    bgt lbl_80317A88
    addi r3, r1, 0x80
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bge lbl_80317A8C
lbl_80317A88:
    bl fn_8031B930
lbl_80317A8C:
    addi r3, r1, 0x80
    bl DVDGetCommandBlockStatus
    cmpwi r3, 0x0
    bne lbl_80317A68
    lwz r4, 0x18(r31)
    lis r3, 0x8133
    addi r0, r4, 0x1f
    clrrwi r4, r0, 5
    bl ICInvalidateRange
    bl OSDisableInterrupts
    bl ICFlashInvalidate
    lis r3, 0x8133
    bl Run
lbl_80317AC0:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: __OSBootDol
asm void __OSBootDol() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    addi r4, r1, 0x8
    bl fn_8031B034
    mr r5, r31
    addi r3, r1, 0x10
    la r4, lbl_8049D1F8
    opword 0x4CC63182
    bl sprintf
    cmpwi r30, 0x0
    li r31, 0x0
    beq lbl_80317B48
    mr r3, r30
    b lbl_80317B3C
lbl_80317B34:
    addi r3, r3, 0x4
    addi r31, r31, 0x1
lbl_80317B3C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80317B34
lbl_80317B48:
    addi r0, r31, 0x2
    li r4, 0x1
    slwi r3, r0, 2
    bl OSAllocFromMEM1ArenaLo
    addi r6, r31, 0x1
    addi r0, r1, 0x10
    cmpwi cr1, r6, 0x1
    stw r0, 0x0(r3)
    li r4, 0x1
    ble cr1, lbl_80317C80
    cmpwi r31, 0x8
    subi r7, r31, 0x7
    ble lbl_80317C4C
    li r8, 0x0
    li r9, 0x0
    blt cr1, lbl_80317B9C
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r6, r0
    bgt lbl_80317B9C
    li r9, 0x1
lbl_80317B9C:
    cmpwi r9, 0x0
    beq lbl_80317BD8
    addi r0, r31, 0x1
    li r5, 0x1
    clrrwi r6, r0, 31
    addis r0, r6, 0x8000
    cmplwi r0, 0x0
    bne lbl_80317BCC
    clrrwi r0, r31, 31
    cmpw r6, r0
    beq lbl_80317BCC
    li r5, 0x0
lbl_80317BCC:
    cmpwi r5, 0x0
    beq lbl_80317BD8
    li r8, 0x1
lbl_80317BD8:
    cmpwi r8, 0x0
    beq lbl_80317C4C
    addi r0, r7, 0x6
    addi r5, r30, 0x4
    srwi r0, r0, 3
    addi r6, r3, 0x4
    mtctr r0
    cmpwi r7, 0x1
    ble lbl_80317C4C
lbl_80317BFC:
    lwz r0, -0x4(r5)
    addi r4, r4, 0x8
    stw r0, 0x0(r6)
    lwz r0, 0x0(r5)
    stw r0, 0x4(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x8(r6)
    lwz r0, 0x8(r5)
    stw r0, 0xc(r6)
    lwz r0, 0xc(r5)
    stw r0, 0x10(r6)
    lwz r0, 0x10(r5)
    stw r0, 0x14(r6)
    lwz r0, 0x14(r5)
    stw r0, 0x18(r6)
    lwz r0, 0x18(r5)
    addi r5, r5, 0x20
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_80317BFC
lbl_80317C4C:
    addi r5, r31, 0x1
    slwi r7, r4, 2
    subf r0, r4, r5
    add r6, r30, r7
    add r7, r3, r7
    mtctr r0
    cmpw r4, r5
    bge lbl_80317C80
lbl_80317C6C:
    lwz r0, -0x4(r6)
    addi r6, r6, 0x4
    stw r0, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_80317C6C
lbl_80317C80:
    lwz r5, 0xc(r1)
    mr r9, r3
    lwz r6, 0x8(r1)
    mr r4, r29
    addi r8, r31, 0x1
    li r3, -0x1
    li r7, 0x0
    bl fn_80317288
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
