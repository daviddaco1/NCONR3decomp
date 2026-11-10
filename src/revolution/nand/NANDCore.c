#include <revolution/ESP/esp.h>
#include <revolution/NAND.h>
#include <revolution/OS.h>

#include <cstdio>
#include <cstring>
#include <wchar_t.h>

#define NAND_BANNER_MAGIC 'WIBN'

typedef enum {
    NAND_LIB_UNINITIALIZED,
    NAND_LIB_INITIALIZING,
    NAND_LIB_INITIALIZED
} NANDLibState;

void nandShutdownCallback(s32 result, void* arg);
static void nandGetTypeCallback(s32 result, void* arg);
BOOL nandOnShutdown(BOOL final, u32 event);
static s32 _ES_InitLib(s32* fd);
static s32 _ES_GetDataDir(s32* fd, u64 tid, char* dirOut) DECOMP_DONT_INLINE;
static s32 _ES_GetTitleId(s32* fd, u64* tidOut);
static s32 _ES_CloseLib(s32* fd);

const char* __NANDVersion =
    "<< RVL_SDK - NAND \trelease build: May  8 2007 13:01:45 (0x4199_60831) >>";

static NANDLibState s_libState = NAND_LIB_UNINITIALIZED;
static char s_currentDir[64] ALIGN(32) = "/";
static OSShutdownFunctionInfo s_shutdownFuncInfo = {nandOnShutdown, 255};

static char s_homeDir[64] ALIGN(32);

void nandRemoveTailToken(char* newp, const char* oldp) {
    int i;

    if (oldp[0] == '/' && oldp[1] == '\0') {
        newp[0] = '/';
        newp[1] = '\0';
    } else {
        for (i = strlen(oldp) - 1; i >= 0; i--) {
            if (oldp[i] == '/') {
                if (i != 0) {
                    strncpy(newp, oldp, i);
                    newp[i] = '\0';
                    break;
                } else {
                    newp[0] = '/';
                    newp[1] = '\0';
                    break;
                }
            }
        }
    }
}

void nandGetHeadToken(char* head, char* rest, const char* path) {
    int i;

    for (i = 0; i <= strlen(path); i++) {
        if (path[i] == '/') {
            strncpy(head, path, i);
            head[i] = '\0';

            if (path[i + 1] == '\0') {
                *rest = '\0';
            } else {
                strcpy(rest, path + i + 1);
            }
            break;
        } else if (path[i] == '\0') {
            strncpy(head, path, i);
            head[i] = '\0';
            *rest = '\0';
            break;
        }
    }
}

void nandGetRelativeName(char* name, const char* path) {
    int i;

    if (strcmp("/", path) == 0) {
        strcpy(name, "");
    } else {
        for (i = strlen(path) - 1; i >= 0; i--) {
            if (path[i] == '/') {
                break;
            }
        }

        strcpy(name, path + i + 1);
    }
}

void nandConvertPath(char* abs, const char* dir, const char* rel) {
    char head[128];
    char rest[128];
    char notail[128];
    char newdir[128];

    if (strlen(rel) == 0) {
        strcpy(abs, dir);
        return;
    }

    nandGetHeadToken(head, rest, rel);

    if (strcmp(head, ".") == 0) {
        nandConvertPath(abs, dir, rest);
    } else if (strcmp(head, "..") == 0) {
        nandRemoveTailToken(notail, dir);
        nandConvertPath(abs, notail, rest);
    } else if (head[0] != '\0') {
        if (strcmp(dir, "/") == 0) {
            sprintf(newdir, "/%s", head);
        } else {
            sprintf(newdir, "%s/%s", dir, head);
        }
        nandConvertPath(abs, newdir, rest);
    } else {
        strcpy(abs, dir);
    }
}

BOOL nandIsRelativePath(const char* path) {
    return *path == '/' ? FALSE : TRUE;
}

BOOL nandIsPrivatePath(const char* path) {
    size_t len = sizeof("/shared2") - 1;
    return strncmp(path, "/shared2", len) == 0;
}

BOOL nandIsUnderPrivatePath(const char* path) {
    size_t len = sizeof("/shared2/") - 1;

    if (strncmp(path, "/shared2/", len) == 0 && path[len] != '\0') {
        return TRUE;
    }

    return FALSE;
}

BOOL nandIsInitialized(void) {
    return s_libState == NAND_LIB_INITIALIZED ? TRUE : FALSE;
}

// Stubbed for release
void nandReportErrorCode(s32 result) {
#pragma unused(result)
}

// nandConvertErrorCode: definicion C reemplazada por asm (ver abajo)
s32 nandConvertErrorCode(s32 result);


void nandGenerateAbsPath(char* abs, const char* rel) {
    s32 len;

    if (strlen(rel) == 0) {
        strcpy(abs, "");
    } else if (nandIsRelativePath(rel)) {
        nandConvertPath(abs, s_currentDir, rel);
    } else {
        strcpy(abs, rel);
        len = strlen(abs);
        if (len != 0 && abs[len - 1] == '/' && len - 1 != 0) {
            abs[len - 1] = '\0';
        }
    }
}

void nandGetParentDirectory(char* dir, const char* path) {
    int i;

    for (i = strlen(path); i >= 0; i--) {
        if (path[i] == '/') {
            break;
        }
    }

    if (i == 0) {
        strcpy(dir, "/");
    } else {
        strncpy(dir, path, i);
        dir[i] = '\0';
    }
}

// NANDInit: definicion C reemplazada por asm (ver abajo)
s32 NANDInit(void);


// nandOnShutdown: definicion C reemplazada por asm (ver abajo)
BOOL nandOnShutdown(BOOL final, u32 event);


// nandShutdownCallback: definicion C reemplazada por asm (ver abajo)
void nandShutdownCallback(s32 result, void* arg);


s32 NANDGetCurrentDir(char* out) {
    BOOL enabled;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    enabled = OSDisableInterrupts();
    strcpy(out, s_currentDir);
    OSRestoreInterrupts(enabled);
    return NAND_RESULT_OK;
}

s32 NANDGetHomeDir(char* out) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    strcpy(out, s_homeDir);
    return NAND_RESULT_OK;
}

// nandCallback: definicion C reemplazada por asm (ver abajo)
void nandCallback(s32 result, void* arg);


static s32 nandGetType(const char* path, u8* type, NANDCommandBlock* block,
                       BOOL async, BOOL priv) {
    char absPath[64];
    u32 numFiles;
    s32 result;

    if (strlen(path) == 0) {
        return IPC_RESULT_INVALID;
    }

    if (async) {
        nandGenerateAbsPath(block->path, path);

        if (!priv && nandIsUnderPrivatePath(block->path)) {
            return IPC_RESULT_ACCESS;
        }

        block->type = type;
        return ISFS_ReadDirAsync(block->path, NULL, &block->dirFileCount,
                                 nandGetTypeCallback, block);
    } else {
        MEMCLR(&absPath);
        nandGenerateAbsPath(absPath, path);

        if (!priv && nandIsUnderPrivatePath(absPath)) {
            return IPC_RESULT_ACCESS;
        }

        numFiles = 0;
        result = ISFS_ReadDir(absPath, NULL, &numFiles);
        if (result == IPC_RESULT_OK || result == IPC_RESULT_ACCESS) {
            *type = NAND_FILE_TYPE_DIR;
            return IPC_RESULT_OK;
        } else if (result == IPC_RESULT_INVALID) {
            *type = NAND_FILE_TYPE_FILE;
            return IPC_RESULT_OK;
        }

        return result;
    }
}

// NANDGetType: definicion C reemplazada por asm (ver abajo)
s32 NANDGetType(const char* path, u8* type);


// NANDPrivateGetTypeAsync: definicion C reemplazada por asm (ver abajo)
s32 NANDPrivateGetTypeAsync(const char* path, u8* type,
                            NANDAsyncCallback callback,
                            NANDCommandBlock* block);


// nandGetTypeCallback: definicion C reemplazada por asm (ver abajo)
void nandGetTypeCallback(s32 result, void* arg);


const char* nandGetHomeDir(void) {
    return s_homeDir;
}

void NANDInitBanner(NANDBanner* banner, u32 flags, const wchar_t* title,
                    const wchar_t* subtitle) {
    memset(banner, 0, sizeof(NANDBanner));
    banner->flags = flags;
    banner->magic = NAND_BANNER_MAGIC;

    if (wcscmp(title, L"") == 0) {
        wcsncpy(banner->title, L" ", NAND_BANNER_TITLE_MAX);
    } else {
        wcsncpy(banner->title, title, NAND_BANNER_TITLE_MAX);
    }

    if (wcscmp(subtitle, L"") == 0) {
        wcsncpy(banner->subtitle, L" ", NAND_BANNER_TITLE_MAX);
    } else {
        wcsncpy(banner->subtitle, subtitle, NAND_BANNER_TITLE_MAX);
    }
}

/**
 * These were actually re(?)implemented in NANDCore/OSExec according to BBA
 */

static s32 _ES_InitLib(s32* fd) {
    s32 result;

    *fd = -1;
    result = IPC_RESULT_OK;

    *fd = IOS_Open("/dev/es", IPC_OPEN_NONE);
    if (*fd < 0) {
        result = *fd;
    }

    return result;
}

static s32 _ES_GetDataDir(s32* fd, u64 tid, char* dirOut) {
    // TODO(kiwi) Hacky solution
    u8 tidWork[256] ALIGN(32);
    u8 vectorWork[32] ALIGN(32);
    IPCIOVector* pVectors = (IPCIOVector*)vectorWork;
    u64* pTid = (u64*)tidWork;

    // Cast is necessary
    if (*fd < 0 || dirOut == ((void*)NULL)) {
        return -0x3F9;
    }

    if ((u32)dirOut % 32 != 0) {
        return -0x3F9;
    }

    *pTid = tid;

    pVectors[0].base = pTid;
    pVectors[0].length = sizeof(u64);
    pVectors[1].base = dirOut;
    pVectors[1].length = 30;

    return IOS_Ioctlv(*fd, ES_IOCTLV_GET_DATA_DIR, 1, 1, pVectors);
}

static s32 _ES_GetTitleId(s32* fd, u64* tidOut) {
    s32 result;
    u64* pTid;
    // TODO(kiwi) Hacky solution
    u8 tidWork[256] ALIGN(32);
    u8 vectorWork[32] ALIGN(32);
    IPCIOVector* pVectors = (IPCIOVector*)vectorWork;

    // Cast is necessary
    if (*fd < 0 || tidOut == ((void*)NULL)) {
        return -0x3F9;
    }

    pTid = (u64*)tidWork;
    pVectors[0].base = pTid;
    pVectors[0].length = sizeof(u64);

    result = IOS_Ioctlv(*fd, ES_IOCTLV_GET_TITLE_ID, 0, 1, pVectors);
    if (result == IPC_RESULT_OK) {
        *tidOut = *pTid;
    }

    return result;
}

static s32 _ES_CloseLib(s32* fd) {
    s32 result = IPC_RESULT_OK;

    if (*fd >= 0 && (result = IOS_Close(*fd)) == IPC_RESULT_OK) {
        *fd = -1;
    }

    return result;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float at_3775_8049D170;
extern float s_libState_8049E260;
extern u8 at_2834_8037F5A0[];
extern u8 at_3094_80341F90[];
extern u8 lbl_8037F650[];
extern u8 s_currentDir_8037F600[];
extern u8 s_homeDir_804648E0[];
extern void ESP_CloseLib();
extern void ESP_GetDataDir();
extern void ESP_GetTitleId();
extern void ESP_InitLib();
extern int NANDChangeDir();
extern int NANDChangeDirAsync();
s32 NANDGetType(const char* path, u8* type);
s32 NANDInit(void);
extern void NANDLoggingAddMessageAsync();
s32 NANDPrivateGetTypeAsync(const char* path, u8* type,
                            NANDAsyncCallback callback,
                            NANDCommandBlock* block);
extern void OSRegisterShutdownFunction();
extern void OSRegisterVersion();
extern void __div2i();
extern void _restgpr_26();
extern void _savegpr_26();
extern int fn_80311898();
extern int fn_80311D38();
void nandCallback(s32 result, void* arg);
extern int nandChangeDir();
extern int nandChangeDirCallback();
s32 nandConvertErrorCode(s32 result);
static void nandGetTypeCallback(s32 result, void* arg);
BOOL nandOnShutdown(BOOL final, u32 event);
void nandShutdownCallback(s32 result, void* arg);

// asm_to_cpp: NANDChangeDir
asm int NANDChangeDir() {
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

// asm_to_cpp: NANDChangeDirAsync
asm int NANDChangeDirAsync() {
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

// asm_to_cpp: NANDGetType
asm s32 NANDGetType(const char* path, u8* type) {
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

// asm_to_cpp: NANDInit
asm s32 NANDInit(void) {
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

// asm_to_cpp: NANDPrivateGetTypeAsync
asm s32 NANDPrivateGetTypeAsync(const char* path, u8* type,
                            NANDAsyncCallback callback,
                            NANDCommandBlock* block) {
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

// asm_to_cpp: fn_80311898
asm int fn_80311898() {
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

// asm_to_cpp: fn_80311D38
asm int fn_80311D38() {
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

// asm_to_cpp: nandCallback
asm void nandCallback(s32 result, void* arg) {
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

// asm_to_cpp: nandChangeDir
asm int nandChangeDir() {
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

// asm_to_cpp: nandChangeDirCallback
asm int nandChangeDirCallback() {
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

// asm_to_cpp: nandConvertErrorCode
asm s32 nandConvertErrorCode(s32 result) {
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

// asm_to_cpp: nandGetTypeCallback
asm void nandGetTypeCallback(s32 result, void* arg) {
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

// asm_to_cpp: nandOnShutdown
asm BOOL nandOnShutdown(BOOL final, u32 event) {
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

// asm_to_cpp: nandShutdownCallback
asm void nandShutdownCallback(s32 result, void* arg) {
    nofralloc
    li r0, 0x1
    stw r0, 0x0(r4)
    blr
}

