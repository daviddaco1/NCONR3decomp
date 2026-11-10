#include <revolution/FS.h>
#include <revolution/NAND.h>

#include <cstdio>
#include <cstring>

static void nandSplitPerm(u8 perm, u32* ownerPerm, u32* groupPerm,
                          u32* otherPerm) DECOMP_DONT_INLINE;
static void nandGetStatusCallback(s32 result, void* arg);
static void nandGetFileStatusAsyncCallback(s32 result, void* arg);
static BOOL nandInspectPermission(u8 perm);

static s32 nandCreate(const char* path, u8 perm, u8 attr,
                      NANDCommandBlock* block, BOOL async, BOOL priv) {
    char absPath[64];
    u32 ownerPerm, groupPerm, otherPerm;

    MEMCLR(&absPath);

    ownerPerm = 0;
    groupPerm = 0;
    otherPerm = 0;

    nandGenerateAbsPath(absPath, path);

    if (!priv && nandIsPrivatePath(absPath)) {
        return IPC_RESULT_ACCESS;
    }

    if (!nandInspectPermission(perm)) {
        return IPC_RESULT_INVALID;
    }

    nandSplitPerm(perm, &ownerPerm, &groupPerm, &otherPerm);

    if (async) {
        return ISFS_CreateFileAsync(absPath, attr, ownerPerm, groupPerm,
                                    otherPerm, nandCallback, block);
    } else {
        return ISFS_CreateFile(absPath, attr, ownerPerm, groupPerm, otherPerm);
    }
}

s32 NANDCreate(const char* path, u8 perm, u8 attr) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(
        nandCreate(path, perm, attr, NULL, FALSE, FALSE));
}

s32 NANDPrivateCreate(const char* path, u8 perm, u8 attr) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(
        nandCreate(path, perm, attr, NULL, FALSE, TRUE));
}

s32 NANDPrivateCreateAsync(const char* path, u8 perm, u8 attr,
                           NANDAsyncCallback callback,
                           NANDCommandBlock* block) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = callback;
    return nandConvertErrorCode(
        nandCreate(path, perm, attr, block, TRUE, TRUE));
}

static s32 nandDelete(const char* path, NANDCommandBlock* block, BOOL async,
                      BOOL priv) {
    char absPath[64];

    MEMCLR(&absPath);
    nandGenerateAbsPath(absPath, path);

    if (!priv && nandIsPrivatePath(absPath)) {
        return IPC_RESULT_ACCESS;
    }

    if (async) {
        return ISFS_DeleteAsync(absPath, nandCallback, block);
    } else {
        return ISFS_Delete(absPath);
    }
}

s32 NANDDelete(const char* path) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(nandDelete(path, NULL, FALSE, FALSE));
}

s32 NANDPrivateDelete(const char* path) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(nandDelete(path, NULL, FALSE, TRUE));
}

s32 NANDPrivateDeleteAsync(const char* path, NANDAsyncCallback callback,
                           NANDCommandBlock* block) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = callback;
    return nandConvertErrorCode(nandDelete(path, block, TRUE, TRUE));
}

s32 NANDRead(NANDFileInfo* info, void* buf, u32 len) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(ISFS_Read(info->fd, buf, len));
}

s32 NANDReadAsync(NANDFileInfo* info, void* buf, u32 len,
                  NANDAsyncCallback callback, NANDCommandBlock* block) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = callback;
    return nandConvertErrorCode(
        ISFS_ReadAsync(info->fd, buf, len, nandCallback, block));
}

// NANDWrite: definicion C reemplazada por asm (ver abajo)
s32 NANDWrite(NANDFileInfo* info, const void* buf, u32 len);


// NANDWriteAsync: definicion C reemplazada por asm (ver abajo)
s32 NANDWriteAsync(NANDFileInfo* info, const void* buf, u32 len,
                   NANDAsyncCallback callback, NANDCommandBlock* block);


static s32 nandSeek(s32 fd, s32 offset, NANDSeekMode whence,
                    NANDCommandBlock* block, BOOL async) {
    IPCSeekMode mode = (IPCSeekMode)-1;

    switch (whence) {
    case NAND_SEEK_BEG:
        mode = IPC_SEEK_BEG;
        break;
    case NAND_SEEK_CUR:
        mode = IPC_SEEK_CUR;
        break;
    case NAND_SEEK_END:
        mode = IPC_SEEK_END;
        break;
    }

    if (async) {
        return ISFS_SeekAsync(fd, offset, mode, nandCallback, block);
    } else {
        return ISFS_Seek(fd, offset, mode);
    }
}

s32 NANDSeek(NANDFileInfo* info, s32 offset, NANDSeekMode whence) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(
        nandSeek(info->fd, offset, whence, NULL, FALSE));
}

s32 NANDSeekAsync(NANDFileInfo* info, s32 offset, NANDSeekMode whence,
                  NANDAsyncCallback callback, NANDCommandBlock* block) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = callback;
    return nandConvertErrorCode(
        nandSeek(info->fd, offset, whence, block, TRUE));
}

static s32 nandCreateDir(const char* path, u8 perm, u8 attr,
                         NANDCommandBlock* block, BOOL async, BOOL priv) {
    char absPath[64];
    u32 ownerPerm, groupPerm, otherPerm;

    MEMCLR(&absPath);
    nandGenerateAbsPath(absPath, path);

    if (!priv && nandIsPrivatePath(absPath)) {
        return IPC_RESULT_ACCESS;
    }

    if (!nandInspectPermission(perm)) {
        return IPC_RESULT_INVALID;
    }

    ownerPerm = 0;
    groupPerm = 0;
    otherPerm = 0;
    nandSplitPerm(perm, &ownerPerm, &groupPerm, &otherPerm);

    if (async) {
        return ISFS_CreateDirAsync(absPath, attr, ownerPerm, groupPerm,
                                   otherPerm, nandCallback, block);
    } else {
        return ISFS_CreateDir(absPath, attr, ownerPerm, groupPerm, otherPerm);
    }
}

// NANDPrivateCreateDir: definicion C reemplazada por asm (ver abajo)
s32 NANDPrivateCreateDir(const char* path, u8 perm, u8 attr);


// NANDPrivateCreateDirAsync: definicion C reemplazada por asm (ver abajo)
s32 NANDPrivateCreateDirAsync(const char* path, u8 perm, u8 attr,
                              NANDAsyncCallback callback,
                              NANDCommandBlock* block);


static s32 nandMove(const char* from, const char* to, NANDCommandBlock* block,
                    BOOL async, BOOL priv) {
    char absPathFrom[64];
    char absPathTo[64];
    char relativeName[13];

    MEMCLR(&absPathFrom);
    MEMCLR(&absPathTo);
    MEMCLR(&relativeName);

    relativeName[12] = '\0';

    nandGenerateAbsPath(absPathFrom, from);
    nandGetRelativeName(relativeName, absPathFrom);
    nandGenerateAbsPath(absPathTo, to);

    if (strcmp(absPathTo, "/") == 0) {
        sprintf(absPathTo, "/%s", relativeName);
    } else {
        strcat(absPathTo, "/");
        strcat(absPathTo, relativeName);
    }

    if (!priv &&
        (nandIsPrivatePath(absPathFrom) || nandIsPrivatePath(absPathTo))) {
        return IPC_RESULT_ACCESS;
    }

    if (async) {
        return ISFS_RenameAsync(absPathFrom, absPathTo, nandCallback, block);
    } else {
        return ISFS_Rename(absPathFrom, absPathTo);
    }
}

s32 NANDMove(const char* from, const char* to) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(nandMove(from, to, NULL, FALSE, FALSE));
}

static s32 nandGetFileStatus(s32 fd, u32* lengthOut, u32* positionOut) {
    FSFileStats stats;
    s32 result;

    result = ISFS_GetFileStats(fd, &stats);
    if (result == IPC_RESULT_OK) {
        if (lengthOut != NULL) {
            *lengthOut = stats.length;
        }

        if (positionOut != NULL) {
            *positionOut = stats.position;
        }
    }

    return result;
}

s32 NANDGetLength(NANDFileInfo* info, u32* length) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(nandGetFileStatus(info->fd, length, NULL));
}

static s32 nandGetFileStatusAsync(s32 fd, NANDCommandBlock* block) {
    // Work buffer???
    return ISFS_GetFileStatsAsync(fd,
                                  (FSFileStats*)ROUND_UP_PTR(block->path, 32),
                                  nandGetFileStatusAsyncCallback, block);
}

static void nandGetFileStatusAsyncCallback(s32 result, void* arg) {
    // Implicit cast required
    NANDCommandBlock* block = arg;
    // Work buffer???
    FSFileStats* stats = (FSFileStats*)ROUND_UP_PTR(block->path, 32);

    if (result == IPC_RESULT_OK) {
        if (block->length != NULL) {
            *block->length = stats->length;
        }

        if (block->position != NULL) {
            *block->position = stats->position;
        }
    }

    block->callback(nandConvertErrorCode(result), arg);
}

s32 NANDGetLengthAsync(NANDFileInfo* info, u32* lengthOut,
                       NANDAsyncCallback callback, NANDCommandBlock* block) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = callback;
    block->length = lengthOut;
    block->position = NULL;
    return nandConvertErrorCode(nandGetFileStatusAsync(info->fd, block));
}

static void nandComposePerm(u8* out, u32 ownerPerm, u32 groupPerm,
                            u32 otherPerm) DECOMP_DONT_INLINE {
    u32 perm = 0;

    if (ownerPerm & NAND_ACCESS_READ) {
        perm |= NAND_PERM_RUSR;
    }

    if (ownerPerm & NAND_ACCESS_WRITE) {
        perm |= NAND_PERM_WUSR;
    }

    if (groupPerm & NAND_ACCESS_READ) {
        perm |= NAND_PERM_RGRP;
    }

    if (groupPerm & NAND_ACCESS_WRITE) {
        perm |= NAND_PERM_WGRP;
    }

    if (otherPerm & NAND_ACCESS_READ) {
        perm |= NAND_PERM_ROTH;
    }

    if (otherPerm & NAND_ACCESS_WRITE) {
        perm |= NAND_PERM_WOTH;
    }

    *out = perm;
}

static void nandSplitPerm(u8 perm, u32* ownerPerm, u32* groupPerm,
                          u32* otherPerm) {
    *ownerPerm = 0;
    *groupPerm = 0;
    *otherPerm = 0;

    if (perm & NAND_PERM_RUSR) {
        *ownerPerm |= NAND_ACCESS_READ;
    }

    if (perm & NAND_PERM_WUSR) {
        *ownerPerm |= NAND_ACCESS_WRITE;
    }

    if (perm & NAND_PERM_RGRP) {
        *groupPerm |= NAND_ACCESS_READ;
    }

    if (perm & NAND_PERM_WGRP) {
        *groupPerm |= NAND_ACCESS_WRITE;
    }

    if (perm & NAND_PERM_ROTH) {
        *otherPerm |= NAND_ACCESS_READ;
    }

    if (perm & NAND_PERM_WOTH) {
        *otherPerm |= NAND_ACCESS_WRITE;
    }
}

static s32 nandGetStatus(const char* path, NANDStatus* status,
                         NANDCommandBlock* block, BOOL async, BOOL priv) {
    s32 result;
    u32 attr;
    u32 ownerPerm, groupPerm, otherPerm;
    char absPath[64];

    MEMCLR(&absPath);
    nandGenerateAbsPath(absPath, path);

    if (!priv && nandIsUnderPrivatePath(absPath)) {
        return IPC_RESULT_ACCESS;
    }

    if (async) {
        return ISFS_GetAttrAsync(absPath, &status->ownerId, &status->groupId,
                                 &block->attr, &block->ownerPerm,
                                 &block->groupPerm, &block->otherPerm,
                                 nandGetStatusCallback, block);
    } else {
        attr = 0;
        ownerPerm = 0;
        groupPerm = 0;
        otherPerm = 0;

        result = ISFS_GetAttr(absPath, &status->ownerId, &status->groupId,
                              &attr, &ownerPerm, &groupPerm, &otherPerm);

        if (result == IPC_RESULT_OK) {
            nandComposePerm(&status->perm, ownerPerm, groupPerm, otherPerm);
            status->attr = attr;
        }

        return result;
    }
}

static void nandGetStatusCallback(s32 result, void* arg) {
    NANDCommandBlock* block = (NANDCommandBlock*)arg;
    NANDStatus* status;

    if (result == IPC_RESULT_OK) {
        status = block->status;
        status->attr = block->attr;
        nandComposePerm(&status->perm, block->ownerPerm, block->groupPerm,
                        block->otherPerm);
    }

    block->callback(nandConvertErrorCode(result), block);
}

s32 NANDGetStatus(const char* path, NANDStatus* status) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    return nandConvertErrorCode(
        nandGetStatus(path, status, NULL, FALSE, FALSE));
}

s32 NANDPrivateGetStatusAsync(const char* path, NANDStatus* status,
                              NANDAsyncCallback callback,
                              NANDCommandBlock* block) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = callback;
    block->status = status;
    return nandConvertErrorCode(nandGetStatus(path, status, block, TRUE, TRUE));
}

void NANDSetUserData(NANDCommandBlock* block, void* data) {
    block->userData = data;
}

void* NANDGetUserData(NANDCommandBlock* block) {
    return block->userData;
}

static BOOL nandInspectPermission(u8 perm) {
    return perm & NAND_PERM_RUSR;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern int NANDDeleteAsync();
extern int NANDMoveAsync();
s32 NANDPrivateCreateDir(const char* path, u8 perm, u8 attr);
s32 NANDPrivateCreateDirAsync(const char* path, u8 perm, u8 attr,
                              NANDAsyncCallback callback,
                              NANDCommandBlock* block);
s32 NANDPrivateGetStatus(const char* path, NANDStatus* status);
extern int NANDReadDirAsync();
extern int NANDTellAsync();
s32 NANDWrite(NANDFileInfo* info, const void* buf, u32 len);
s32 NANDWriteAsync(NANDFileInfo* info, const void* buf, u32 len,
                   NANDAsyncCallback callback, NANDCommandBlock* block);
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_802DBB9C();
extern void fn_802DBC70();
extern int fn_8030EC80();
extern int fn_8030F048();
extern int fn_8030F3DC();
extern int fn_8030F458();
extern int fn_8030F7DC();

// asm_to_cpp: NANDDeleteAsync
asm int NANDDeleteAsync() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030E810
    li r3, -0x80
    b lbl_8030E894
lbl_8030E810:
    stw r30, 0x4(r31)
    li r0, 0x0
    mr r4, r29
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030E87C
    li r3, -0x66
    b lbl_8030E890
lbl_8030E87C:
    lis r4, nandCallback@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, nandCallback@l
    bl ISFS_DeleteAsync
lbl_8030E890:
    bl nandConvertErrorCode
lbl_8030E894:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: NANDMoveAsync
asm int NANDMoveAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F30C
    li r3, -0x80
    b lbl_8030F32C
lbl_8030F30C:
    stw r30, 0x4(r31)
    mr r3, r28
    mr r4, r29
    mr r5, r31
    li r6, 0x1
    li r7, 0x0
    bl nandMove
    bl nandConvertErrorCode
lbl_8030F32C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDPrivateCreateDir
asm s32 NANDPrivateCreateDir(const char* path, u8 perm, u8 attr) {
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
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030EFB0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl nandCreateDir
    bl nandConvertErrorCode
    b lbl_8030EFB4
lbl_8030EFB0:
    li r3, -0x80
lbl_8030EFB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDPrivateCreateDirAsync
asm s32 NANDPrivateCreateDirAsync(const char* path, u8 perm, u8 attr,
                              NANDAsyncCallback callback,
                              NANDCommandBlock* block) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F00C
    li r3, -0x80
    b lbl_8030F030
lbl_8030F00C:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x0
    bl nandCreateDir
    bl nandConvertErrorCode
lbl_8030F030:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDPrivateGetStatus
asm s32 NANDPrivateGetStatus(const char* path, NANDStatus* status) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030F7C0
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl nandGetStatus
    bl nandConvertErrorCode
    b lbl_8030F7C4
lbl_8030F7C0:
    li r3, -0x80
lbl_8030F7C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: NANDReadDirAsync
asm int NANDReadDirAsync() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030ED8C
    li r3, -0x80
    b lbl_8030EE18
lbl_8030ED8C:
    stw r30, 0x4(r31)
    li r0, 0x0
    mr r4, r27
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030EDF8
    li r3, -0x66
    b lbl_8030EE14
lbl_8030EDF8:
    lis r6, nandCallback@ha
    mr r4, r28
    mr r5, r29
    mr r7, r31
    addi r3, r1, 0x8
    addi r6, r6, nandCallback@l
    bl ISFS_ReadDirAsync
lbl_8030EE14:
    bl nandConvertErrorCode
lbl_8030EE18:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: NANDTellAsync
asm int NANDTellAsync() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x60
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    stw r30, -0x8(r12)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F388
    li r3, -0x80
    b lbl_8030F3C0
lbl_8030F388:
    addi r3, r1, 0x20
    bl fn_802DBB9C
    cmpwi r3, 0x0
    bne lbl_8030F3BC
    cmpwi r30, 0x0
    beq lbl_8030F3AC
    lwz r0, 0x24(r1)
    slwi r0, r0, 14
    stw r0, 0x0(r30)
lbl_8030F3AC:
    cmpwi r31, 0x0
    beq lbl_8030F3BC
    lwz r0, 0x34(r1)
    stw r0, 0x0(r31)
lbl_8030F3BC:
    bl nandConvertErrorCode
lbl_8030F3C0:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: NANDWrite
asm s32 NANDWrite(NANDFileInfo* info, const void* buf, u32 len) {
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
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030EA98
    lwz r3, 0x0(r29)
    mr r4, r30
    mr r5, r31
    bl ISFS_Write
    bl nandConvertErrorCode
    b lbl_8030EA9C
lbl_8030EA98:
    li r3, -0x80
lbl_8030EA9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDWriteAsync
asm s32 NANDWriteAsync(NANDFileInfo* info, const void* buf, u32 len,
                   NANDAsyncCallback callback, NANDCommandBlock* block) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030EAF4
    li r3, -0x80
    b lbl_8030EB18
lbl_8030EAF4:
    stw r30, 0x4(r31)
    lis r6, nandCallback@ha
    mr r4, r28
    mr r5, r29
    lwz r3, 0x0(r27)
    mr r7, r31
    addi r6, r6, nandCallback@l
    bl ISFS_WriteAsync
    bl nandConvertErrorCode
lbl_8030EB18:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8030EC80
asm int fn_8030EC80() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030ECB8
    li r3, -0x80
    b lbl_8030ED34
lbl_8030ECB8:
    li r0, 0x0
    mr r4, r29
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030ED20
    li r3, -0x66
    b lbl_8030ED30
lbl_8030ED20:
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl ISFS_ReadDir
lbl_8030ED30:
    bl nandConvertErrorCode
lbl_8030ED34:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8030F048
asm int fn_8030F048() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F084
    li r3, -0x80
    b lbl_8030F0A8
lbl_8030F084:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x1
    bl nandCreateDir
    bl nandConvertErrorCode
lbl_8030F0A8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8030F3DC
asm int fn_8030F3DC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    addi r0, r6, 0x53
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    clrrwi r31, r0, 5
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F41C
    li r3, -0x80
    b lbl_8030F440
lbl_8030F41C:
    lis r4, fn_8030F458@ha
    stw r29, 0x4(r30)
    mr r3, r31
    mr r5, r30
    stw r27, 0xc(r30)
    addi r4, r4, fn_8030F458@l
    stw r28, 0x10(r30)
    bl fn_802DBC70
    bl nandConvertErrorCode
lbl_8030F440:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8030F458
asm int fn_8030F458() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    addi r0, r4, 0x53
    clrrwi r5, r0, 5
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_8030F4A8
    lwz r6, 0xc(r4)
    lwz r4, 0x10(r4)
    cmpwi r6, 0x0
    beq lbl_8030F498
    lwz r0, 0x4(r5)
    slwi r0, r0, 14
    stw r0, 0x0(r6)
lbl_8030F498:
    cmpwi r4, 0x0
    beq lbl_8030F4A8
    lwz r0, 0x14(r5)
    stw r0, 0x0(r4)
lbl_8030F4A8:
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

// asm_to_cpp: fn_8030F7DC
asm int fn_8030F7DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030F824
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl nandGetStatus
    bl nandConvertErrorCode
    b lbl_8030F828
lbl_8030F824:
    li r3, -0x80
lbl_8030F828:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
