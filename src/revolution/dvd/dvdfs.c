/**
 * Based on ARC decompilation by riidefi
 */

#include <revolution/DVD.h>
#include <revolution/OS.h>

#include <ctype.h>

typedef struct DVDNode {
    union {
        struct {
            u32 is_folder : 8;
            u32 name : 24;
        };
        u32 packed_type_name;
    }; // at 0x0

    union {
        struct {
            u32 offset;
            u32 size;
        };

        struct {
            u32 parent;
            u32 sibling_next;
        } folder;
    }; // at 0x4
} DVDNode;

#define DVDNodeIsFolder(node) (((node).packed_type_name & 0xFF000000))
#define DVDNodeGetName(node) ((node).packed_type_name & 0x00FFFFFF)

static OSBootInfo* BootInfo;
static const DVDNode* FstStart;
static char* FstStringStart;
static u32 MaxEntryNum;

OSThreadQueue __DVDThreadQueue;
BOOL __DVDLongFileNameFlag = TRUE;

static u32 currentDirectory = 0;

static void cbForReadAsync(s32 result, DVDCommandBlock* block);
static void cbForReadSync(s32 result, DVDCommandBlock* block);

// __DVDFSInit: definicion C reemplazada por asm (ver abajo)


static BOOL isSame(const char* lhs, const char* rhs) {
    while (*rhs != '\0') {
        if (tolower(*lhs++) != tolower(*rhs++)) {
            return FALSE;
        }
    }

    if (*lhs == '/' || *lhs == '\0') {
        return TRUE;
    }

    return FALSE;
}

// DVDConvertPathToEntrynum: definicion C reemplazada por asm (ver abajo)


//unused
BOOL DVDEntrynumIsDir(){
}

BOOL DVDFastOpen(s32 entrynum, DVDFileInfo* info) {
    if (entrynum < 0 || entrynum >= MaxEntryNum ||
        DVDNodeIsFolder(FstStart[entrynum])) {
        return FALSE;
    }

    info->offset = FstStart[entrynum].offset >> __DVDLayoutFormat;
    info->size = FstStart[entrynum].size;
    info->callback = NULL;
    info->block.state = DVD_STATE_IDLE;

    return TRUE;
}


// DVDOpen: definicion C reemplazada por asm (ver abajo)


BOOL DVDClose(DVDFileInfo* info) {
    DVDCancel(&info->block);
    return TRUE;
}

static u32 myStrncpy(char* dst, const char* src, u32 maxlen) {
    u32 i;
    for (i = maxlen; i != 0 && *src != '\0'; --i) {
        *dst++ = *src++;
    }

    return maxlen - i;
}

static u32 entryToPath(s32 entrynum, char* string, u32 maxlen) {
    const char* name;
    u32 written;

    if (entrynum == 0) {
        return 0;
    }

    name = FstStringStart + FstStart[entrynum].name;

    written = entryToPath(FstStart[entrynum].folder.parent, string, maxlen);
    if (written == maxlen) {
        return written;
    }

    string[written++] = '/';
    return written + myStrncpy(string + written, name, maxlen - written);
}

static BOOL DVDConvertEntrynumToPath(s32 entrynum, char* string, u32 maxlen) {
    u32 written = entryToPath(entrynum, string, maxlen);

    if (written == maxlen) {
        string[maxlen - 1] = '\0';
        return FALSE;
    }

    if (DVDNodeIsFolder(FstStart[entrynum])) {
        if (written == maxlen - 1) {
            string[written] = '\0';
            return FALSE;
        }

        string[written++] = '/';
    }

    string[written] = '\0';
    return TRUE;
}

//unused
BOOL DVDGetCurrentDir(char* buffer, u32 maxlen) {
    return DVDConvertEntrynumToPath(currentDirectory, buffer, maxlen);
}

//unused
void DVDChangeDir(){
}

BOOL DVDReadAsyncPrio(DVDFileInfo* info, void* dst, s32 size, s32 offset,
                      DVDAsyncCallback callback, s32 prio) {
    // clang-format off
#line 823
    OS_ASSERT(offset >= 0 && offset <= info->size, "DVDReadAsync(): specified area is out of the file  ");
    // clang-format on

    // clang-format off
#line 829
    OS_ASSERT(offset + size >= 0 && offset + size < info->size + 32, "DVDReadAsync(): specified area is out of the file  ");
    // clang-format on

    info->callback = callback;

    DVDReadAbsAsyncPrio(&info->block, dst, size, info->offset + (offset >> 2),
                        cbForReadAsync, prio);

    return TRUE;
}

static void cbForReadAsync(s32 result, DVDCommandBlock* block) {
    DVDFileInfo* info = (DVDFileInfo*)block;

    if (info->callback != NULL) {
        info->callback(result, info);
    }
}

s32 DVDReadPrio(DVDFileInfo* info, void* dst, s32 size, s32 offset, s32 prio) {
    DVDCommandBlock* block;
    BOOL enabled;
    s32 ret;

    // clang-format off
#line 893
    OS_ASSERT(offset >= 0 && offset <= info->size, "DVDRead(): specified area is out of the file  ");
    // clang-format on

    // clang-format off
#line 899
    OS_ASSERT(offset + size >= 0 && offset + size < info->size + 32, "DVDRead(): specified area is out of the file  ");
    // clang-format on

    block = &info->block;
    if (!DVDReadAbsAsyncPrio(block, dst, size, info->offset + (offset >> 2),
                             cbForReadSync, prio)) {
        return DVD_RESULT_FATAL_ERROR;
    }

    enabled = OSDisableInterrupts();

    while (TRUE) {
        s32 state = block->state;

        if (state == DVD_STATE_IDLE) {
            ret = block->transferTotal;
            break;
        } else if (state == DVD_STATE_FATAL) {
            ret = DVD_RESULT_FATAL_ERROR;
            break;
        } else if (state == DVD_STATE_CANCELED) {
            ret = DVD_RESULT_CANCELED;
            break;
        }

        OSSleepThread(&__DVDThreadQueue);
    }

    OSRestoreInterrupts(enabled);
    return ret;
}

static void cbForReadSync(s32 result, DVDCommandBlock* block) {
#pragma unused(result)
#pragma unused(block)

    OSWakeupThread(&__DVDThreadQueue);
}

//unused
void DVDSeekAsyncPrio(){
}

//unused
void cbForSeekAsync(){
}

//unused
void DVDSeekPrio(){
}

//unused
void cbForSeekSync(){
}

//unused
void DVDGetFileInfoStatus(){
}

//unused
void DVDFastOpenDir(){
}

//unused
BOOL DVDOpenDir(const char* dirName, DVDDir* dir) {
}

//unused
BOOL DVDReadDir(DVDDir* dir, DVDDirEntry* dirent) {
}

BOOL DVDCloseDir(DVDDir* dir) {
    return TRUE;
}

//unused
void DVDRewindDir(){
}

//unused
void DVDGetFSTLocation(){
}

u32 DVDGetTransferredSize(DVDCommandBlock* block){
    s32 size;

    switch(block->state){
        case DVD_STATE_FATAL:
        case DVD_STATE_IDLE:
        case DVD_STATE_COVER_CLOSED:
        case DVD_STATE_NO_DISK:
        case DVD_STATE_COVER_OPENED:
        case DVD_STATE_WRONG_DISK_ID:
        case DVD_STATE_7:
        case DVD_STATE_CANCELED:
        case DVD_STATE_DISK_ERROR:
        case DVD_STATE_MOTOR_STOPPED:
        size = block->transferTotal;
        break;
        case DVD_STATE_WAITING:
        size = 0;
        break;
        case DVD_STATE_BUSY:
        size = block->transferTotal;
        break;
        default:
        break;
    }

    return size;

}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float BootInfo_8049E04C;
extern float FstStart_8049E048;
extern float FstStringStart_8049E044;
extern float MaxEntryNum_8049E040;
extern float lbl_8049CFF8;
extern float lbl_8049E030;
extern u8 lbl_8035FBD8[];
extern u8 lbl_80378A28[];
extern u8 lbl_80378AF0[];
extern void _restgpr_24();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_27();
extern void fn_802D0B90();

// asm_to_cpp: __DVDFSInit
asm void __DVDFSInit(void) {
    nofralloc
    lis r3, 0x8000
    stw r3, BootInfo_8049E04C
    lwz r4, 0x38(r3)
    cmpwi r4, 0x0
    stw r4, FstStart_8049E048
    beqlr
    lwz r3, 0x8(r4)
    mulli r0, r3, 0xc
    stw r3, MaxEntryNum_8049E040
    add r0, r4, r0
    stw r0, FstStringStart_8049E044
    blr
}

// asm_to_cpp: DVDConvertPathToEntrynum
asm s32 DVDConvertPathToEntrynum(const char* path) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r26, r3
    lis r31, lbl_8035FBD8@ha
    lwz r29, lbl_8049E030
    mr r28, r26
    addi r31, r31, lbl_8035FBD8@l
    lis r30, lbl_80378A28@ha
lbl_802D057C:
    lbz r0, 0x0(r26)
    extsb. r0, r0
    bne lbl_802D0590
    mr r3, r29
    b lbl_802D0840
lbl_802D0590:
    cmpwi r0, 0x2f
    bne lbl_802D05A4
    li r29, 0x0
    addi r26, r26, 0x1
    b lbl_802D057C
lbl_802D05A4:
    cmpwi r0, 0x2e
    bne lbl_802D0620
    lbz r0, 0x1(r26)
    extsb r0, r0
    cmpwi r0, 0x2e
    bne lbl_802D0600
    lbz r0, 0x2(r26)
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_802D05E4
    mulli r0, r29, 0xc
    lwz r3, FstStart_8049E048
    addi r26, r26, 0x3
    add r3, r3, r0
    lwz r29, 0x4(r3)
    b lbl_802D057C
lbl_802D05E4:
    cmpwi r0, 0x0
    bne lbl_802D0620
    mulli r0, r29, 0xc
    lwz r3, FstStart_8049E048
    add r3, r3, r0
    lwz r3, 0x4(r3)
    b lbl_802D0840
lbl_802D0600:
    cmpwi r0, 0x2f
    bne lbl_802D0610
    addi r26, r26, 0x2
    b lbl_802D057C
lbl_802D0610:
    cmpwi r0, 0x0
    bne lbl_802D0620
    mr r3, r29
    b lbl_802D0840
lbl_802D0620:
    lwz r0, __DVDLongFileNameFlag
    cmpwi r0, 0x0
    bne lbl_802D06D0
    mr r24, r26
    li r5, 0x0
    li r4, 0x0
    b lbl_802D0680
lbl_802D063C:
    extsb r0, r3
    cmpwi r0, 0x2e
    bne lbl_802D0670
    subf r0, r26, r24
    cmpwi r0, 0x8
    bgt lbl_802D065C
    cmpwi r5, 0x1
    bne lbl_802D0664
lbl_802D065C:
    li r4, 0x1
    b lbl_802D0694
lbl_802D0664:
    addi r27, r24, 0x1
    li r5, 0x1
    b lbl_802D067C
lbl_802D0670:
    cmpwi r0, 0x20
    bne lbl_802D067C
    li r4, 0x1
lbl_802D067C:
    addi r24, r24, 0x1
lbl_802D0680:
    lbz r3, 0x0(r24)
    extsb. r0, r3
    beq lbl_802D0694
    cmpwi r0, 0x2f
    bne lbl_802D063C
lbl_802D0694:
    cmpwi r5, 0x1
    bne lbl_802D06AC
    subf r0, r27, r24
    cmpwi r0, 0x3
    ble lbl_802D06AC
    li r4, 0x1
lbl_802D06AC:
    cmpwi r4, 0x0
    beq lbl_802D06F0
    mr r6, r28
    addi r5, r30, lbl_80378A28@l
    la r3, lbl_8049CFF8
    li r4, 0x1bb
    opword 0x4CC63182
    bl OSPanic
    b lbl_802D06F0
lbl_802D06D0:
    mr r24, r26
    b lbl_802D06DC
lbl_802D06D8:
    addi r24, r24, 0x1
lbl_802D06DC:
    lbz r0, 0x0(r24)
    extsb. r0, r0
    beq lbl_802D06F0
    cmpwi r0, 0x2f
    bne lbl_802D06D8
lbl_802D06F0:
    lbz r3, 0x0(r24)
    mulli r0, r29, 0xc
    lwz r8, FstStart_8049E048
    subf r9, r26, r24
    extsb r6, r3
    lwz r4, FstStringStart_8049E044
    neg r5, r6
    add r3, r8, r0
    lwz r12, 0x38(r31)
    or r0, r5, r6
    lwz r5, 0x8(r3)
    srwi r0, r0, 31
    addi r3, r29, 0x1
    b lbl_802D0814
lbl_802D0728:
    mulli r6, r3, 0xc
    lwzux r10, r6, r8
    clrrwi. r7, r10, 24
    bne lbl_802D0740
    cmpwi r0, 0x1
    beq lbl_802D0800
lbl_802D0740:
    clrlwi r10, r10, 8
    mr r29, r26
    add r25, r4, r10
    b lbl_802D07C8
lbl_802D0750:
    lbz r11, 0x0(r25)
    li r10, 0x0
    addi r25, r25, 0x1
    extsb. r24, r11
    blt lbl_802D076C
    cmpwi r24, 0x100
    blt lbl_802D0770
lbl_802D076C:
    li r10, 0x1
lbl_802D0770:
    cmpwi r10, 0x0
    beq lbl_802D077C
    b lbl_802D0784
lbl_802D077C:
    lwz r10, 0x10(r12)
    lbzx r24, r10, r24
lbl_802D0784:
    lbz r11, 0x0(r29)
    li r10, 0x0
    addi r29, r29, 0x1
    extsb. r11, r11
    blt lbl_802D07A0
    cmpwi r11, 0x100
    blt lbl_802D07A4
lbl_802D07A0:
    li r10, 0x1
lbl_802D07A4:
    cmpwi r10, 0x0
    beq lbl_802D07B0
    b lbl_802D07B8
lbl_802D07B0:
    lwz r10, 0x10(r12)
    lbzx r11, r10, r11
lbl_802D07B8:
    cmpw r11, r24
    beq lbl_802D07C8
    li r10, 0x0
    b lbl_802D07F8
lbl_802D07C8:
    lbz r10, 0x0(r25)
    extsb. r10, r10
    bne lbl_802D0750
    lbz r10, 0x0(r29)
    extsb r10, r10
    cmpwi r10, 0x2f
    beq lbl_802D07EC
    cmpwi r10, 0x0
    bne lbl_802D07F4
lbl_802D07EC:
    li r10, 0x1
    b lbl_802D07F8
lbl_802D07F4:
    li r10, 0x0
lbl_802D07F8:
    cmpwi r10, 0x1
    beq lbl_802D0824
lbl_802D0800:
    cmpwi r7, 0x0
    beq lbl_802D0810
    lwz r3, 0x8(r6)
    b lbl_802D0814
lbl_802D0810:
    addi r3, r3, 0x1
lbl_802D0814:
    cmplw r3, r5
    blt lbl_802D0728
    li r3, -0x1
    b lbl_802D0840
lbl_802D0824:
    cmpwi r0, 0x0
    bne lbl_802D0830
    b lbl_802D0840
lbl_802D0830:
    add r4, r9, r26
    mr r29, r3
    addi r26, r4, 0x1
    b lbl_802D057C
lbl_802D0840:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: DVDOpen
asm BOOL DVDOpen(const char* path, DVDFileInfo* info) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    bl DVDConvertPathToEntrynum
    cmpwi r3, 0x0
    bge lbl_802D0B04
    lwz r29, lbl_8049E030
    cmpwi r29, 0x0
    bne lbl_802D08FC
    li r4, 0x0
    b lbl_802D0A88
lbl_802D08FC:
    lwz r8, FstStart_8049E048
    mulli r0, r29, 0xc
    lwz r7, FstStringStart_8049E044
    addi r6, r8, 0x4
    lwzx r3, r6, r0
    lwzx r0, r8, r0
    cmpwi r3, 0x0
    clrlwi r0, r0, 8
    add r30, r7, r0
    bne lbl_802D092C
    li r4, 0x0
    b lbl_802D0A2C
lbl_802D092C:
    mulli r0, r3, 0xc
    lwzx r3, r6, r0
    lwzx r0, r8, r0
    cmpwi r3, 0x0
    clrlwi r0, r0, 8
    add r31, r7, r0
    bne lbl_802D0950
    li r4, 0x0
    b lbl_802D09D0
lbl_802D0950:
    mulli r3, r3, 0xc
    addi r4, r1, 0x8
    li r5, 0x80
    lwzx r0, r8, r3
    lwzx r3, r6, r3
    clrlwi r0, r0, 8
    add r27, r7, r0
    bl fn_802D0B90
    cmplwi r3, 0x80
    mr r4, r3
    bne lbl_802D0980
    b lbl_802D09D0
lbl_802D0980:
    addi r4, r3, 0x1
    addi r5, r1, 0x8
    li r0, 0x2f
    stbx r0, r5, r3
    subfic r6, r4, 0x80
    mr r3, r6
    add r5, r5, r4
    b lbl_802D09B4
lbl_802D09A0:
    lbz r0, 0x0(r27)
    subi r3, r3, 0x1
    addi r27, r27, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_802D09B4:
    cmpwi r3, 0x0
    beq lbl_802D09C8
    lbz r0, 0x0(r27)
    extsb. r0, r0
    bne lbl_802D09A0
lbl_802D09C8:
    subf r0, r3, r6
    add r4, r4, r0
lbl_802D09D0:
    cmplwi r4, 0x80
    bne lbl_802D09DC
    b lbl_802D0A2C
lbl_802D09DC:
    addi r5, r4, 0x1
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    subfic r6, r5, 0x80
    mr r4, r6
    add r3, r3, r5
    b lbl_802D0A10
lbl_802D09FC:
    lbz r0, 0x0(r31)
    subi r4, r4, 0x1
    addi r31, r31, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_802D0A10:
    cmpwi r4, 0x0
    beq lbl_802D0A24
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_802D09FC
lbl_802D0A24:
    subf r0, r4, r6
    add r4, r5, r0
lbl_802D0A2C:
    cmplwi r4, 0x80
    bne lbl_802D0A38
    b lbl_802D0A88
lbl_802D0A38:
    addi r5, r4, 0x1
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    subfic r6, r5, 0x80
    mr r4, r6
    add r3, r3, r5
    b lbl_802D0A6C
lbl_802D0A58:
    lbz r0, 0x0(r30)
    subi r4, r4, 0x1
    addi r30, r30, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_802D0A6C:
    cmpwi r4, 0x0
    beq lbl_802D0A80
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_802D0A58
lbl_802D0A80:
    subf r0, r4, r6
    add r4, r5, r0
lbl_802D0A88:
    cmplwi r4, 0x80
    bne lbl_802D0A9C
    li r0, 0x0
    stb r0, 0x87(r1)
    b lbl_802D0AE4
lbl_802D0A9C:
    mulli r0, r29, 0xc
    lwz r3, FstStart_8049E048
    lwzx r0, r3, r0
    clrrwi. r0, r0, 24
    beq lbl_802D0AD8
    cmplwi r4, 0x7f
    bne lbl_802D0AC8
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r4
    b lbl_802D0AE4
lbl_802D0AC8:
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    addi r4, r4, 0x1
lbl_802D0AD8:
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r4
lbl_802D0AE4:
    lis r3, lbl_80378AF0@ha
    mr r4, r28
    addi r3, r3, lbl_80378AF0@l
    addi r5, r1, 0x8
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_802D0B54
lbl_802D0B04:
    mulli r6, r3, 0xc
    lwz r3, FstStart_8049E048
    lwzx r0, r3, r6
    clrrwi. r0, r0, 24
    beq lbl_802D0B20
    li r3, 0x0
    b lbl_802D0B54
lbl_802D0B20:
    add r3, r3, r6
    lwz r4, __DVDLayoutFormat
    lwz r5, 0x4(r3)
    li r0, 0x0
    li r3, 0x1
    srw r4, r5, r4
    stw r4, 0x30(r27)
    lwz r4, FstStart_8049E048
    add r4, r4, r6
    lwz r4, 0x8(r4)
    stw r4, 0x34(r27)
    stw r0, 0x38(r27)
    stw r0, 0xc(r27)
lbl_802D0B54:
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_802D0B90
asm void fn_802D0B90() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r28, r4
    mr r29, r5
    bne lbl_802D0BBC
    li r3, 0x0
    b lbl_802D0D38
lbl_802D0BBC:
    lwz r8, FstStart_8049E048
    mulli r0, r3, 0xc
    lwz r7, FstStringStart_8049E044
    addi r6, r8, 0x4
    lwzx r3, r6, r0
    lwzx r0, r8, r0
    cmpwi r3, 0x0
    clrlwi r0, r0, 8
    add r30, r7, r0
    bne lbl_802D0BEC
    li r4, 0x0
    b lbl_802D0CDC
lbl_802D0BEC:
    mulli r0, r3, 0xc
    lwzx r3, r6, r0
    lwzx r0, r8, r0
    cmpwi r3, 0x0
    clrlwi r0, r0, 8
    add r31, r7, r0
    bne lbl_802D0C10
    li r4, 0x0
    b lbl_802D0C84
lbl_802D0C10:
    mulli r3, r3, 0xc
    lwzx r0, r8, r3
    lwzx r3, r6, r3
    clrlwi r0, r0, 8
    add r27, r7, r0
    bl fn_802D0B90
    cmplw r3, r29
    mr r4, r3
    bne lbl_802D0C38
    b lbl_802D0C84
lbl_802D0C38:
    addi r4, r3, 0x1
    li r0, 0x2f
    subf r6, r4, r29
    stbx r0, r28, r3
    add r3, r28, r4
    mr r5, r6
    b lbl_802D0C68
lbl_802D0C54:
    lbz r0, 0x0(r27)
    subi r5, r5, 0x1
    addi r27, r27, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_802D0C68:
    cmpwi r5, 0x0
    beq lbl_802D0C7C
    lbz r0, 0x0(r27)
    extsb. r0, r0
    bne lbl_802D0C54
lbl_802D0C7C:
    subf r0, r5, r6
    add r4, r4, r0
lbl_802D0C84:
    cmplw r4, r29
    bne lbl_802D0C90
    b lbl_802D0CDC
lbl_802D0C90:
    addi r3, r4, 0x1
    li r0, 0x2f
    subf r6, r3, r29
    stbx r0, r28, r4
    add r4, r28, r3
    mr r5, r6
    b lbl_802D0CC0
lbl_802D0CAC:
    lbz r0, 0x0(r31)
    subi r5, r5, 0x1
    addi r31, r31, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_802D0CC0:
    cmpwi r5, 0x0
    beq lbl_802D0CD4
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_802D0CAC
lbl_802D0CD4:
    subf r0, r5, r6
    add r4, r3, r0
lbl_802D0CDC:
    cmplw r4, r29
    bne lbl_802D0CEC
    mr r3, r4
    b lbl_802D0D38
lbl_802D0CEC:
    addi r6, r4, 0x1
    li r0, 0x2f
    subf r5, r6, r29
    stbx r0, r28, r4
    add r3, r28, r6
    mr r4, r5
    b lbl_802D0D1C
lbl_802D0D08:
    lbz r0, 0x0(r30)
    subi r4, r4, 0x1
    addi r30, r30, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_802D0D1C:
    cmpwi r4, 0x0
    beq lbl_802D0D30
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_802D0D08
lbl_802D0D30:
    subf r0, r4, r5
    add r3, r6, r0
lbl_802D0D38:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
