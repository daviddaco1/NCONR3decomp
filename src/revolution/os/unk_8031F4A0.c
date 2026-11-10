#include <revolution/NAND.h>
#include <revolution/OS.h>

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

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 at_1040_8038D318[];
extern void NWC24SuspendScheduler();
extern void NWC24iPrepareShutdown();
extern void NWC24iSynchronizeRtcCounter();
extern void __OSGetIOSRev();
void __OSInitNet(void);

// asm_to_cpp: __OSInitNet
asm void __OSInitNet(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    lis r31, at_1040_8038D318@ha
    addi r31, r31, at_1040_8038D318@l
    bl __OSGetIOSRev
    lbz r0, 0x9(r1)
    cmplwi r0, 0x4
    ble lbl_8031F540
    cmplwi r0, 0x9
    bne lbl_8031F4D8
    b lbl_8031F540
lbl_8031F4D8:
    bl NWC24iPrepareShutdown
    cmpwi r3, 0x0
    beq lbl_8031F514
    bge lbl_8031F4F8
    mr r4, r3
    addi r3, r31, 0x0
    opword 0x4CC63182
    bl OSReport
lbl_8031F4F8:
    bl NWC24SuspendScheduler
    cmpwi r3, 0x0
    bge lbl_8031F514
    mr r4, r3
    addi r3, r31, 0x34
    opword 0x4CC63182
    bl OSReport
lbl_8031F514:
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_8031F540
    li r3, 0x0
    bl NWC24iSynchronizeRtcCounter
    cmpwi r3, 0x0
    beq lbl_8031F540
    mr r4, r3
    addi r3, r31, 0x68
    opword 0x4CC63182
    bl OSReport
lbl_8031F540:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
