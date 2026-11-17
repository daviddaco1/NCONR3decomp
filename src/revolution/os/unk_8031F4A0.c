#include <revolution/NAND.h>
#include <revolution/OS.h>

extern void __OSGetIOSRev(OSIOSRev*);
extern s32 NWC24iPrepareShutdown(void);
extern s32 NWC24SuspendScheduler(void);
extern s32 NWC24iSynchronizeRtcCounter(BOOL);
extern BOOL __OSInIPL;

void __OSInitNet(void) {
    s32 error;
    OSIOSRev rev;

    __OSGetIOSRev(&rev);

    if (rev.idLo <= 4 || rev.idLo == 9) {
        return;
    }

    error = NWC24iPrepareShutdown();
    if (error != 0) {
        if (error < 0) {
            OSReport("Failed to register network shutdown function. %d\n", error);
        }

        error = NWC24SuspendScheduler();
        if (error < 0) {
            OSReport("Failed to suspend the WiiConnect24 scheduler. %d\n", error);
        }
    }

    if (!__OSInIPL) {
        error = NWC24iSynchronizeRtcCounter(FALSE);
        if (error != 0) {
            OSReport(
                "Failed to synchronize time with network resource managers. %d\n",
                error);
        }
    }
}

char __OSNandbootInfoPath[] = "/shared2/sys/NANDBOOTINFO";

BOOL __OSCreateNandbootInfo(void) {
    NANDStatus status;
    s32 result;

    result = NANDPrivateGetStatus(__OSNandbootInfoPath, &status);
    if (result == NAND_RESULT_OK && status.perm == NAND_PERM_RWALL) {
        return TRUE;
    }

    if (result == NAND_RESULT_OK && status.perm != NAND_PERM_RWALL) {
        if (NANDPrivateDelete(__OSNandbootInfoPath) != NAND_RESULT_OK) {
            return FALSE;
        }
    } else if (result != NAND_RESULT_NOEXISTS) {
        return FALSE;
    }

    result = NANDPrivateCreate(__OSNandbootInfoPath, NAND_PERM_RWALL, 0);
    if (result != NAND_RESULT_OK) {
        return FALSE;
    }

    return TRUE;
}

static u32 CheckSum(const OSNandbootInfo* info) {
    u32 i;
    const u32* ptr = (const u32*)&info->argsoff;
    u32 checksum = 0;

    for (i = 0; i < (sizeof(OSNandbootInfo) / sizeof(u32)) - 1; i++) {
        checksum += *ptr++;
    }

    return checksum;
}

BOOL __OSWriteNandbootInfo(OSNandbootInfo* info) {
    NANDFileInfo file;

    info->checksum = CheckSum(info);

    if (NANDPrivateOpen(__OSNandbootInfoPath, &file, NAND_ACCESS_WRITE) == NAND_RESULT_OK) {
        if (NANDWrite(&file, info, sizeof(OSNandbootInfo)) != sizeof(OSNandbootInfo)) {
            NANDClose(&file);
            return FALSE;
        }
        if (NANDClose(&file) != NAND_RESULT_OK) {
            return FALSE;
        }
    } else {
        return FALSE;
    }

    return TRUE;
}


