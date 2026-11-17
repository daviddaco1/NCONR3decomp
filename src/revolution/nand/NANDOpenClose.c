// Adaptado de SMGCommunity/Petari, CC0, commit 50c1eae28478c8b1b1c8708ab8ce9a3b845ee6c6.
#include <nand_compat/NANDOpenClose.h>

#include <stdio.h>

static void  nandOpenCallback_8030FBF0(ISFSError, void *);
static void nandReadCloseCallback(ISFSError, void *);
static void nandCloseCallback(ISFSError, void *);
static void nandSafeCloseCallback(ISFSError, void *);
static void nandSafeOpenCallback(const ISFSError, void *);
void nandReadOpenCallback(ISFSError, void *);
s32 nandSafeCloseAsync(NANDFileInfo *, NANDCallback, NANDCommandBlock *, BOOL);
s32 nandSafeOpenAsync(const char *, NANDFileInfo *, const u8, void *, const u32, NANDCallback, NANDCommandBlock *, BOOL, BOOL);

static u32 nandGetUniqueNumber(void) {
    static u32 s_counter = 0;
    u32 ret;
    BOOL enabled = OSDisableInterrupts();
    ret = s_counter++;
    OSRestoreInterrupts(enabled);
    return ret;
}

IOSFd nandOpen(const char* path, const u8 accType, NANDCommandBlock* block, const BOOL async_flag, const BOOL privilege_flag) {
    IOSFd fd = -117;
    char absPath[64] = "";
    u32 access = 0;

    nandGenerateAbsPath(absPath, path);

    if (!privilege_flag && nandIsPrivatePath(absPath)) {
        return ISFS_ERROR_ACCESS;
    }
    else {
        switch (accType) {
            case 3:
                access = 3;
                break;
            case 1:
                access = 1;
                break;
            case 2:
                access = 2;
                break;
            default:
                break;
        }

        if (async_flag) {
            fd = ISFS_OpenAsync((const u8*)absPath, access, nandOpenCallback_8030FBF0, block);
        }
        else {
            fd = ISFS_Open((const u8*)absPath, access);
        }

        return fd;
    }
}

s32 NANDOpen(const char* path, NANDFileInfo* info, const u8 accType) {
    IOSFd fd = ISFS_ERROR_UNKNOWN;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    fd = nandOpen(path, accType, NULL, FALSE, FALSE);

    if (fd >= 0) {
        info->fileDescriptor = fd;
        info->mark = 1;
        return NAND_RESULT_OK;
    }
    else {
        return nandConvertErrorCode(fd);
    }
}

s32 NANDPrivateOpen(const char* path, NANDFileInfo* info, const u8 accType) {
    IOSFd fd = ISFS_ERROR_UNKNOWN;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    fd = nandOpen(path, accType, NULL, FALSE, TRUE);

    if (fd >= 0) {
        info->fileDescriptor = fd;
        info->mark = 1;
        return NAND_RESULT_OK;
    }
    else {
        return nandConvertErrorCode(fd);
    }
}

s32 NANDOpenAsync(const char* path, NANDFileInfo* info, const u8 accType, NANDCallback cb, NANDCommandBlock* block) {
    IOSFd fd = ISFS_ERROR_UNKNOWN;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = cb;
    block->fileInfo = info;
    fd = nandOpen(path, accType, block, TRUE, FALSE);
    return nandConvertErrorCode(fd);
}

s32 NANDPrivateOpenAsync(const char* path, NANDFileInfo* info, const u8 accType, NANDCallback cb, NANDCommandBlock* block) {
    IOSFd fd = ISFS_ERROR_UNKNOWN;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    block->callback = cb;
    block->fileInfo = info;
    fd = nandOpen(path, accType, block, TRUE, TRUE);
    return nandConvertErrorCode(fd);
}

void nandOpenCallback_8030FBF0(ISFSError result, void* ctxt) {
    NANDCommandBlock* b = (NANDCommandBlock*)ctxt;

    if (result >= 0) {
        ((NANDFileInfo*)(b->fileInfo))->fileDescriptor = result;
        ((NANDFileInfo*)(b->fileInfo))->stage = 2;
        ((NANDFileInfo*)(b->fileInfo))->mark = 1;
        ((NANDCallback)(b->callback))(NAND_RESULT_OK, b);
    }
    else {
        ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
    }
}

s32 NANDClose(NANDFileInfo* info) {
    ISFSError err = ISFS_ERROR_UNKNOWN;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    if (info->mark != 1) {
        return NAND_RESULT_INVALID;
    }

    err = ISFS_Close(info->fileDescriptor);

    if (err == ISFS_ERROR_OK) {
        info->mark = 2;
    }

    return nandConvertErrorCode(err);
}

s32 NANDCloseAsync(NANDFileInfo* info, NANDCallback cb, NANDCommandBlock* block) {
    ISFSError err = ISFS_ERROR_UNKNOWN;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    if (info->mark != 1) {
        return NAND_RESULT_INVALID;
    }

    block->callback = cb;
    block->fileInfo = info;
    err = ISFS_CloseAsync(info->fileDescriptor, nandCloseCallback, block);
    return nandConvertErrorCode(err);
}

s32 NANDPrivateSafeOpenAsync(const char* path, NANDFileInfo* info, const u8 accType, void* buf, const u32 length, NANDCallback cb, NANDCommandBlock* block) {
    return nandSafeOpenAsync(path, info, accType, buf, length, cb, block, TRUE, FALSE);
}

s32 nandSafeOpenAsync(const char* path, NANDFileInfo* info, const u8 accType, void* buf, const u32 length, NANDCallback cb, NANDCommandBlock* block, BOOL privilege_flag, BOOL simple_flag) {
    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    if (simple_flag && ((length & 0x3FFF) != 0)) {
        return NAND_RESULT_INVALID;
    }
    
    info->accType = accType;
    info->stage = 0;
    block->simpleFlag = simple_flag;
    nandGenerateAbsPath(info->origPath, path);

    if (!privilege_flag && nandIsPrivatePath(info->origPath)) {
        return NAND_RESULT_ACCESS;
    }

    if (accType == 1) {
        IOSFd fd = -1;
        block->fileInfo = info;
        block->callback = cb;
        fd = ISFS_OpenAsync((u8*)(info->origPath), 1, nandReadOpenCallback, block);

        if (fd == ISFS_ERROR_OK) {
            return NAND_RESULT_OK;
        }
        else {
            return nandConvertErrorCode(fd);
        }
    }
    else if (accType == 2 || accType == 3) {
        ISFSError ret = ISFS_ERROR_UNKNOWN;
        block->fileInfo = info;
        block->callback = cb;
        block->state = 0;
        block->copyBuf = buf;
        block->bufLength = length;
        ret = ISFS_CreateDirAsync((u8*)"/tmp/sys", 0, 3, 3, 3, nandSafeOpenCallback, block);
    
        if (ret == ISFS_ERROR_OK) {
            return NAND_RESULT_OK;
        }
        else {
            return nandConvertErrorCode(ret);
        }
    }
    else {
        return NAND_RESULT_INVALID;
    }
}

void nandSafeOpenCallback(const ISFSError result, void* ctxt) {
    NANDCommandBlock* b = (NANDCommandBlock*)ctxt;

    if ((result >= 0) || ((result == ISFS_ERROR_EXISTS) && b->state == 0)) {
        NANDFileInfo* info = b->fileInfo;
        ISFSError ret = ISFS_ERROR_UNKNOWN;

        if (b->state == 0) {
            info->stage = 1;
        }

        if (b->state == 2) {
            info->origFd = result;
            info->stage = 2;
        }

        if ((b->state == 2) && b->simpleFlag) {
            b->state += 2;
        }
        else {
            ++b->state;
        }

        if (b->state == 1) {
            ret = ISFS_GetAttrAsync((u8*)(info->origPath), &b->ownerId, &b->groupId, &b->attr, &b->ownerAcc, &b->groupAcc, &b->othersAcc, nandSafeOpenCallback, ctxt);
        }
        else if (b->state == 2) {
            ret = ISFS_OpenAsync((u8*)(info->origPath), 1, nandSafeOpenCallback, ctxt);
        }
        else if (b->state == 3) {
            char tmpDir[64];
            b->uniqNo = nandGetUniqueNumber();
            sprintf(tmpDir, "%s/%08x", "/tmp/sys", b->uniqNo);
            ret = ISFS_CreateDirAsync((u8*)tmpDir, 0, 3, 0, 0, nandSafeOpenCallback, ctxt);
        }
        else if (b->state == 4) {
            char filename[13];
            nandGetRelativeName(filename, info->origPath);

            if (!b->simpleFlag) {
                info->stage = 3;
                sprintf(info->tmpPath, "%s/%08x/%s", "/tmp/sys", b->uniqNo, filename);
            }
            else {
                sprintf(info->tmpPath, "%s/%s", "/tmp/sys", filename);
            }

            ret = ISFS_CreateFileAsync((u8*)info->tmpPath, b->attr, b->ownerAcc, b->groupAcc, b->othersAcc, nandSafeOpenCallback, ctxt);
        }
        else if (b->state == 5) {
            info->stage = 4;

            if (info->accType == 2) {
                ret = ISFS_OpenAsync((u8*)info->tmpPath, 2, nandSafeOpenCallback, ctxt);
            }
            else if (info->accType == 3) {
                ret = ISFS_OpenAsync((u8*)info->tmpPath, 3, nandSafeOpenCallback, ctxt);
            }
            else {
                ret = ISFS_ERROR_UNKNOWN;
            }
        }
        else if (b->state == 6) {
            info->fileDescriptor = result;
            info->stage = 5;
            b->state = 7;
            ret = ISFS_ReadAsync(info->origFd, b->copyBuf, b->bufLength, nandSafeOpenCallback, ctxt);
        }
        else if (b->state == 7) {
            ret = ISFS_ReadAsync(info->origFd, b->copyBuf, b->bufLength, nandSafeOpenCallback, ctxt);
        }
        else if (b->state == 8) {
            if (result > 0) {
                b->state = 6;
                ret = ISFS_WriteAsync(info->fileDescriptor, b->copyBuf, (u32)result, nandSafeOpenCallback, ctxt);
            }
            else if (result == 0) {
                ret = ISFS_SeekAsync(info->fileDescriptor, 0, 0, nandSafeOpenCallback, ctxt);
            }
        }
        else if (b->state == 9) {
            if (result == 0) {
                if (!b->simpleFlag) {
                    info->mark = 3;
                }
                else {
                    info->mark = 5;
                }

                ((NANDCallback)(b->callback))(nandConvertErrorCode(ISFS_ERROR_OK), b);
            }
            else {
                ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
            }

            return;
        }

        if (ret != ISFS_ERROR_OK) {
            ((NANDCallback)(b->callback))(nandConvertErrorCode(ret), b);
        }
    }
    else {
        ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
    }
}

void nandReadOpenCallback(ISFSError result, void* ctxt) {
    NANDCommandBlock* b = (NANDCommandBlock*)ctxt;

    if (result >= 0) {
        ((NANDFileInfo*)(b->fileInfo))->fileDescriptor = result;
        ((NANDFileInfo*)(b->fileInfo))->stage = 2;

        if (!(b->simpleFlag)) {
            ((NANDFileInfo*)(b->fileInfo))->mark = 3;
        }
        else {
            ((NANDFileInfo*)(b->fileInfo))->mark = 5;
        }

        ((NANDCallback)(b->callback))(NAND_RESULT_OK, b);
    }
    else {
        ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
    }
}

s32 NANDSafeCloseAsync(NANDFileInfo* info, NANDCallback cb, NANDCommandBlock* block) {
    return nandSafeCloseAsync(info, cb, block, FALSE);
}

s32 nandSafeCloseAsync(NANDFileInfo* info, NANDCallback cb, NANDCommandBlock* block, BOOL simple_flag) {
    ISFSError err = ISFS_ERROR_UNKNOWN;

    if (!nandIsInitialized()) {
        return NAND_RESULT_FATAL_ERROR;
    }

    if (!(((info->mark == 3) && !simple_flag) || ((info->mark == 5) && simple_flag))) {
        return NAND_RESULT_INVALID;
    }

    block->simpleFlag = simple_flag;
    if (info->accType == 1) {
        block->fileInfo = info;
        block->callback = cb;
        err = ISFS_CloseAsync(info->fileDescriptor, nandReadCloseCallback, block);
    }
    else if ((info->accType == 2) || (info->accType == 3)) {
        block->fileInfo = info;
        block->callback = cb;
        block->state = 10;
        err = ISFS_CloseAsync(info->fileDescriptor, nandSafeCloseCallback, block);
    }
    else {
        err = ISFS_ERROR_INVALID;
    }

    return nandConvertErrorCode(err);
}

void nandSafeCloseCallback(ISFSError result, void* ctxt) {
    NANDCommandBlock* b = (NANDCommandBlock*)ctxt;

    if (result == 0) {
        NANDFileInfo* info = b->fileInfo;
        ISFSError ret = ISFS_ERROR_UNKNOWN;

        if (b->state == 12) {
            info->stage = 8;
        }

        if ((b->state == 12) && b->simpleFlag) {
            b->state += 2;
        }
        else {
            ++b->state;
        }

        if (b->state == 11) {
            info->stage = 6;
            ret = ISFS_CloseAsync(info->origFd, nandSafeCloseCallback, ctxt);
        }
        else if (b->state == 12) {
            info->stage = 7;
            ret = ISFS_RenameAsync((u8*)(info->tmpPath), (u8*)(info->origPath), nandSafeCloseCallback, ctxt);
        }
        else if (b->state == 13) {
            char tmpdir[64] = "";
            nandGetParentDirectory(tmpdir, info->tmpPath);
            ret = ISFS_DeleteAsync((u8*)tmpdir, nandSafeCloseCallback, ctxt);
        }
        else if (b->state == 14) {
            if (!(b->simpleFlag)) {
                info->stage = 9;
            }

            info->mark = 4;
            ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
            return;
        }

        if (ret != 0) {
            ((NANDCallback)(b->callback))(nandConvertErrorCode(ret), b);
        }
    }
    else {
        ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
    }
}

static void nandReadCloseCallback(ISFSError result, void* ctxt) {
    NANDCommandBlock* b = (NANDCommandBlock*)ctxt;

    if (result == 0) {
        ((NANDFileInfo*)(b->fileInfo))->stage = 7;
        ((NANDFileInfo*)(b->fileInfo))->mark = 4;
    }
    
    ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
}

static void nandCloseCallback(ISFSError result, void* ctxt) {
    NANDCommandBlock* b = (NANDCommandBlock*)ctxt;

    if (result == 0) {
        ((NANDFileInfo*)(b->fileInfo))->stage = 7;
        ((NANDFileInfo*)(b->fileInfo))->mark = 2;
    }
    
    ((NANDCallback)(b->callback))(nandConvertErrorCode(result), b);
}
// Wrapper sincrono conservado, con firma y nombre corregidos por su cuerpo.
s32 nandSafeClose(NANDFileInfo* info, BOOL simpleFlag);
s32 NANDSafeClose(NANDFileInfo* info) { return nandSafeClose(info, FALSE); }

// RNEPDA: variante publica (privilegio FALSE) del wrapper asincrono.
s32 NANDSafeOpenAsync(const char* path, NANDFileInfo* info, u8 access, void* buffer, u32 size, NANDCallback callback, NANDCommandBlock* block) {
 return nandSafeOpenAsync(path, info, access, buffer, size, callback, block, FALSE, FALSE);
}

// RNEPDA: wrapper sincrono publico (ambos flags FALSE), conservado del C previo.
s32 nandSafeOpen(const char* path, NANDFileInfo* info, u8 access, void* buffer, u32 size, BOOL privilege, BOOL simpleFlag);
s32 NANDSafeOpen(const char* path, NANDFileInfo* info, u8 access, void* buffer, u32 size) { return nandSafeOpen(path, info, access, buffer, size, FALSE, FALSE); }

extern float lbl_8049D158;
extern float lbl_8049D160;
extern u32 lbl_8049E258;
extern u8 lbl_8037F570[];
extern u8 lbl_8037F57C[];
extern u8 lbl_8037F588[];
extern void _restgpr_25();
extern void _savegpr_25();
s32 nandSafeClose(NANDFileInfo* info, BOOL simpleFlag);
s32 nandSafeOpen(const char* path, NANDFileInfo* info, u8 access, void* buffer, u32 size, BOOL privilege, BOOL simpleFlag);

s32 nandSafeClose(NANDFileInfo* info,BOOL simpleFlag) {
 char tmpDir[64]={0};
 s32 ret;
 if(!nandIsInitialized())return -128;
 if(!((info->mark==3 && !simpleFlag)||(info->mark==5 && simpleFlag)))return -8;
 if(info->accType==1){
 ret=ISFS_Close(info->fileDescriptor);
 if(ret==0){info->stage=7;if(!simpleFlag)info->mark=4;else info->mark=6;}
 return nandConvertErrorCode(ret);
 }
 if(info->accType==2||info->accType==3){
 ret=ISFS_Close(info->fileDescriptor);if(ret!=0)return nandConvertErrorCode(ret);
 info->stage=6;
 ret=ISFS_Close(info->origFd);if(ret!=0)return nandConvertErrorCode(ret);
 info->stage=7;
 ret=ISFS_Rename((u8*)info->tmpPath,(u8*)info->origPath);if(ret!=0)return nandConvertErrorCode(ret);
 info->stage=8;
 if(!simpleFlag){
 nandGetParentDirectory(tmpDir,info->tmpPath);
 ret=ISFS_Delete((u8*)tmpDir);
 if(ret==0){info->stage=9;info->mark=4;}
 }else info->mark=6;
 return nandConvertErrorCode(ret);
 }
 OSReport((const char*)lbl_8037F588);
 return -8;
}

static inline s32 NconNandCopy(s32 dst,s32 src,void* buf,u32 size) {
 s32 ret;
 for(;;) {
 ret=ISFS_Read(src,buf,size);
 if(ret==0)return 0;
 if(ret<0)return ret;
 ret=ISFS_Write(dst,buf,ret);
 if(ret<0)return ret;
 }
}
s32 nandSafeOpen(const char* path,NANDFileInfo* info,u8 access,void* buffer,u32 size,BOOL privilege,BOOL simpleFlag) {
 s32 ret;
 if(!nandIsInitialized())return -128;
 if(simpleFlag && (size&0x3fff))return -8;
 info->accType=access; info->stage=0;
 nandGenerateAbsPath(info->origPath,path);
 if(!privilege && nandIsPrivatePath(info->origPath))return -1;
 if(access==1){
 ret=ISFS_Open((u8*)info->origPath,1);
 if(ret>=0){ info->fileDescriptor=ret;info->stage=2;
 if(!simpleFlag)info->mark=3;else info->mark=5;
 return 0;}
 return nandConvertErrorCode(ret);
 }
 if(access==2 || access==3){
 char tmpDir[64];
 char relative[13]={0};
 u32 owner,attr,ownerPerm,groupPerm,otherPerm;
 u16 group;
 u32 unique=-1;
 ret=ISFS_CreateDir((u8*)"/tmp/sys",0,3,3,3);
 if(ret!=0 && ret!=-105)return nandConvertErrorCode(ret);
 info->stage=1;
 ret=ISFS_GetAttr((u8*)info->origPath,&owner,&group,&attr,&ownerPerm,&groupPerm,&otherPerm);
 if(ret!=0)return nandConvertErrorCode(ret);
 info->origFd=ISFS_Open((u8*)info->origPath,1);
 if(info->origFd<0)return nandConvertErrorCode(info->origFd);
 info->stage=2;
 if(!simpleFlag){
 BOOL enabled=OSDisableInterrupts();
 unique=lbl_8049E258++;
 OSRestoreInterrupts(enabled);
 sprintf(tmpDir,"%s/%08x","/tmp/sys",unique);
 ret=ISFS_CreateDir((u8*)tmpDir,0,3,0,0);
 if(ret!=0)return nandConvertErrorCode(ret);
 info->stage=3;
 }
 nandGetRelativeName(relative,info->origPath);
 if(!simpleFlag)sprintf(info->tmpPath,"%s/%08x/%s","/tmp/sys",unique,relative);
 else sprintf(info->tmpPath,"%s/%s","/tmp/sys",relative);
 ret=ISFS_CreateFile((u8*)info->tmpPath,attr,ownerPerm,groupPerm,otherPerm);
 if(ret!=0)return nandConvertErrorCode(ret);
 info->stage=4;
 if(access==2)info->fileDescriptor=ISFS_Open((u8*)info->tmpPath,2);
 else if(access==3)info->fileDescriptor=ISFS_Open((u8*)info->tmpPath,3);
 if(info->fileDescriptor<0)return nandConvertErrorCode(info->fileDescriptor);
 info->stage=5;
 ret=NconNandCopy(info->fileDescriptor,info->origFd,buffer,size);
 if(ret!=0)return nandConvertErrorCode(ret);
 ret=ISFS_Seek(info->fileDescriptor,0,0);
 if(ret!=0)return nandConvertErrorCode(ret);
 if(simpleFlag)info->mark=5;else info->mark=3;
 return nandConvertErrorCode(0);
 }
 return -8;
}
