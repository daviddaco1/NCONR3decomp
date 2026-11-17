// Adaptado de Xenoblade RVL SDK OS.c.
#include <revolution/BASE.h>
#include <revolution/DB.h>
#include <revolution/DVD.h>
#include <revolution/EXI.h>
#include <revolution/IPC.h>
#include <revolution/OS.h>
#include <revolution/PAD.h>
#include <revolution/SC.h>
#include <revolution/SI.h>

#include <PowerPC_EABI_Support/MetroTRK/dolphin_trk.h>
#include <string.h>

#define INVALID_NAME_CHAR(c) ('0' > c || ('9' < c && c < 'A') || c > 'Z')

static u32 ReadHollywoodRevision(void) { return *(u32*)OSPhysicalToCached(OS_PHYS_HOLLYWOOD_REV); }
extern OSExecParams __OSRebootParams;
extern OSBootInfo* BootInfo_8049E2A8;
#define BootInfo BootInfo_8049E2A8

static void MemClear(void* mem, u32 size) {
    void* flush = (0x40000 < size) ? (u8*)((u32)mem + (size - 0x40000)) : mem;
    DCZeroRange(mem, size);
    DCFlushRange(flush, 0x40000);
}

void __OSGetIOSRev(OSIOSRev* rev) {
    u32 version = *(u32*)OSPhysicalToUncached(OS_PHYS_IOS_VERSION);
    u32 builddate = *(u32*)OSPhysicalToUncached(OS_PHYS_IOS_BUILD_DATE);

    rev->idHi = version >> 24 & 0xFF;
    rev->idLo = version >> 16 & 0xFF;
    rev->verMajor = version >> 8 & 0xFF;
    rev->verMinor = version >> 0 & 0xFF;

    rev->buildMon = (builddate >> 16 & 0xF) + (builddate >> 20 & 0xF) * 10;
    rev->buildDay = (builddate >> 8 & 0xF) + (builddate >> 12 & 0xF) * 10;
    rev->buildYear =
        (builddate >> 0 & 0xF) + (builddate >> 4 & 0xF) * 10 + 2000;
}

u32 OSGetConsoleType(void) {
    u32 hollywood;
    u32 mem2size;

    if (BootInfo == NULL || BootInfo->consoleType == 0) {
        return 0x10000002;
    }

    hollywood = ReadHollywoodRevision();

    if (OS_DVD_DEVICE_CODE & DVD_DEVICE_CODE_READ) {
        switch (OS_DVD_DEVICE_CODE & ~DVD_DEVICE_CODE_READ) {
        case 0x0002:
        case 0x0003:
        case 0x0203:
            switch (hollywood) {
            case 0x00000000:
                return 0x00000010;
            case 0x00000001:
                return OS_CONSOLE_RVL_PP_1;
            case 0x00000002:
                return OS_CONSOLE_RVL_PP_2_1;
            case 0x00000010:
                return 0x00000020;
            case 0x00000011:
                return 0x00000021;
            }

            if (hollywood > 0x00000011) {
                return 0x00000021;
            }

        case 0x0202:
        case 0x0201:
            switch (hollywood) {
            case 0x00000000:
                return OS_CONSOLE_NDEV_1_0;
            case 0x00000001:
                return OS_CONSOLE_NDEV_1_1;
            case 0x00000002:
                return OS_CONSOLE_NDEV_1_2;
            case 0x00000010:
                return OS_CONSOLE_NDEV_2_0;
            case 0x00000011:
                return OS_CONSOLE_NDEV_2_1;
            }

            if (hollywood > 0x00000011) {
                return OS_CONSOLE_NDEV_2_1;
            }
        case 0x0300:
            return 0x00000100;
        }
    }

    mem2size = OSGetPhysicalMem2Size();

    switch (hollywood) {
    case 0x00000000:
        if (mem2size == OS_MEM_MB_TO_B(64)) {
            return 0x00000010;
        }
        return 0x10000010;
    case 0x00000001:
        if (mem2size == OS_MEM_MB_TO_B(64)) {
            return OS_CONSOLE_RVL_PP_1;
        }
        return 0x10000011;
    case 0x00000002:
        if (mem2size == OS_MEM_MB_TO_B(64)) {
            return OS_CONSOLE_RVL_PP_2_1;
        }
        return 0x10000012;
    case 0x00000010:
        if (mem2size == OS_MEM_MB_TO_B(64)) {
            return 0x00000020;
        }
        return 0x10000020;
    case 0x00000011:
        if (mem2size == OS_MEM_MB_TO_B(64)) {
            return 0x00000021;
        }
        return OS_CONSOLE_NDEV_2_1;
    }

    if (hollywood > 0x00000011) {
        if (mem2size == OS_MEM_MB_TO_B(64)) {
            return 0x00000021;
        }
        return OS_CONSOLE_NDEV_2_1;
    }

    return BootInfo->consoleType;
}

void ClearArena(void) DECOMP_DONT_INLINE {
    // System reset
    if (!((OSGetResetCode() >> 31) & 1)) {
        MemClear(OSGetArenaLo(), (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
    }
    // Region doesn't exist, or begins somewhere outside of MEM1
    else if (__OSRebootParams.regionStart == NULL ||
             !OSIsMEM1Region(__OSRebootParams.regionStart)) {
        MemClear(OSGetArenaLo(), (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
    }
    // Region begins after arena begins
    else if (OSGetArenaLo() < __OSRebootParams.regionStart) {
        // Region is outside of arena
        if (OSGetArenaHi() <= __OSRebootParams.regionStart) {
            MemClear(OSGetArenaLo(), (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
        }
        // Region begins in arena
        else {
            // Clear arena area before region
            MemClear(OSGetArenaLo(),
                     (u32)__OSRebootParams.regionStart - (u32)OSGetArenaLo());

            // Region ends inside arena
            if (OSGetArenaHi() > __OSRebootParams.regionEnd) {
                // Clear arena area after region
                MemClear(__OSRebootParams.regionEnd,
                         (u32)OSGetArenaHi() - (u32)__OSRebootParams.regionEnd);
            }
        }
    }
}

void ClearMEM2Arena(void) DECOMP_DONT_INLINE {
    // System reset
    if (!((OSGetResetCode() >> 31) & 1)) {
        MemClear(OSGetMEM2ArenaLo(),
                 (u32)OSGetMEM2ArenaHi() - (u32)OSGetMEM2ArenaLo());
    }
    // Region doesn't exist, or begins somewhere outside of MEM2
    else if (__OSRebootParams.regionStart == NULL ||
             !OSIsMEM2Region(__OSRebootParams.regionStart)) {
        MemClear(OSGetMEM2ArenaLo(),
                 (u32)OSGetMEM2ArenaHi() - (u32)OSGetMEM2ArenaLo());
    }
    // Region begins after arena begins
    else if (OSGetMEM2ArenaLo() < __OSRebootParams.regionStart) {
        // Region is outside of arena
        if (OSGetMEM2ArenaHi() <= __OSRebootParams.regionStart) {
            MemClear(OSGetMEM2ArenaLo(),
                     (u32)OSGetMEM2ArenaHi() - (u32)OSGetMEM2ArenaLo());
        }
        // Region begins in arena
        else {
            // Clear arena area before region
            MemClear(OSGetMEM2ArenaLo(), (u32)__OSRebootParams.regionStart -
                                             (u32)OSGetMEM2ArenaLo());
            // Region ends inside arena
            if (OSGetMEM2ArenaHi() > __OSRebootParams.regionEnd) {
                // Clear arena area after region
                MemClear(__OSRebootParams.regionEnd,
                         (u32)OSGetMEM2ArenaHi() -
                             (u32)__OSRebootParams.regionEnd);
            }
        }
    }
}

