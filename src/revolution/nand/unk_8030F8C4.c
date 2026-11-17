#include <nand_compat/NANDOpenClose.h>

void NANDSetUserData(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 NANDGetUserData(s32 *arg0) {
    return *arg0;
}

extern void nandOpenCallback_8030FBF0(ISFSError, void *);

IOSFd nandOpen_8030F8D4(const char* path, const u8 accType, NANDCommandBlock* block, const BOOL async_flag, const BOOL privilege_flag) {
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
