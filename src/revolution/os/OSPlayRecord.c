#include <revolution/NAND.h>
#include <revolution/OS.h>

// Why?!? :(
#define MY_SEC_TO_TICKS(x) (x * (s64)OS_SEC_TO_TICKS(1))

typedef enum {
    PLAY_RECORD_STATE_STARTED,   //!< __OSStartPlayRecord
    PLAY_RECORD_STATE_OPEN,      //!< Open play record
    PLAY_RECORD_STATE_READ,      //!< Read play record
    PLAY_RECORD_STATE_SEEK,      //!< Seek play record
    PLAY_RECORD_STATE_SET_ALARM, //!< Set alarm callback
    PLAY_RECORD_STATE_WRITE,     //!< Save play record
    PLAY_RECORD_STATE_CLOSE,     //!< Close play record
    PLAY_RECORD_STATE_CLOSED,    //!< Play record was closed
    PLAY_RECORD_STATE_TIMEOUT,   //!< Play record could not be closed
    PLAY_RECORD_STATE_STOPPED    //!< __OSStopPlayRecord
} OSPlayRecordState;

typedef struct OSPlayRecord {
    u32 checksum;          // at 0x0
    wchar_t titleName[40]; // at 0x4
    char UNK_0x54[0x4];
    s64 startTime;   // at 0x58
    s64 stopTime;    // at 0x60
    char titleId[6]; // at 0x68
    char UNK_0x6E[0x80 - 0x6E];
} OSPlayRecord;

static OSPlayRecordState PlayRecordState = PLAY_RECORD_STATE_STOPPED;

static s64 PlayRecordLastCloseTime;
static s32 PlayRecordLastError;
static BOOL PlayRecordRetry;
static BOOL PlayRecordTerminated;
static BOOL PlayRecordTerminate;
static BOOL PlayRecordError;
static BOOL PlayRecordGet;

static OSPlayRecord PlayRecord ALIGN(32);
static NANDFileInfo FileInfo;
static NANDCommandBlock Block;
static OSAlarm PlayRecordAlarm;

static void PlayRecordCallback(s32 result, NANDCommandBlock* block);

static u32 RecordCheckSum(const OSPlayRecord* playRec) {
    int i;
    const u32* ptr = (const u32*)&playRec->titleName;
    u32 checksum = 0;

    for (i = 0; i < (sizeof(OSPlayRecord) / sizeof(u32)) - 1; i++) {
        checksum += *ptr++;
    }

    return checksum;
}

//unused
void __OSCreatePlayRecord(){
}

DECOMP_FORCEACTIVE(OSPlayRecord_c, PlayRecord);

//unused
void __OSReadPlayRecord(){
}

static void PlayRecordAlarmCallback(OSAlarm* alarm, OSContext* ctx) {
#pragma unused(alarm)
#pragma unused(ctx)

    PlayRecordCallback(NAND_RESULT_OK, NULL);
}

static void PlayRecordCallback(s32 result, NANDCommandBlock* block) {
#pragma unused(block)

    s32 error = NAND_RESULT_OK;
    PlayRecordLastError = result;

    if (PlayRecordTerminate) {
        PlayRecordTerminated = TRUE;
        return;
    }

    if (!PlayRecordRetry) {
        switch (PlayRecordState) {
        case PLAY_RECORD_STATE_STARTED:
            PlayRecordState = PLAY_RECORD_STATE_OPEN;
            break;
        case PLAY_RECORD_STATE_OPEN:
            if (result == NAND_RESULT_MAXFD) {
                PlayRecordRetry = TRUE;
                OSCreateAlarm(&PlayRecordAlarm);
                OSSetAlarm(&PlayRecordAlarm, MY_SEC_TO_TICKS(1),
                           PlayRecordAlarmCallback);
                return;
            } else if (result == NAND_RESULT_OK) {
                if (!PlayRecordGet) {
                    PlayRecordState = PLAY_RECORD_STATE_READ;
                } else {
                    PlayRecordState = PLAY_RECORD_STATE_SET_ALARM;
                }
                break;
            } else {
                PlayRecordError = TRUE;
                PlayRecordState = PLAY_RECORD_STATE_CLOSED;
                return;
            }
        case PLAY_RECORD_STATE_READ:
            if (result == sizeof(OSPlayRecord)) {
                PlayRecordGet = TRUE;
                PlayRecordLastCloseTime = PlayRecord.stopTime;
                PlayRecordState = PLAY_RECORD_STATE_SEEK;
            } else {
                PlayRecordError = TRUE;
                PlayRecordState = PLAY_RECORD_STATE_CLOSE;
            }
            break;
        case PLAY_RECORD_STATE_SEEK:
            if (result == NAND_RESULT_OK) {
                PlayRecordState = PLAY_RECORD_STATE_SET_ALARM;
            } else {
                PlayRecordError = TRUE;
                PlayRecordState = PLAY_RECORD_STATE_CLOSE;
            }
            break;
        case PLAY_RECORD_STATE_SET_ALARM:
            PlayRecordState = PLAY_RECORD_STATE_WRITE;
            break;
        case PLAY_RECORD_STATE_WRITE:
            if (result == sizeof(OSPlayRecord)) {
                if (OSGetTime() - PlayRecordLastCloseTime >
                    MY_SEC_TO_TICKS(300)) {
                    PlayRecordState = PLAY_RECORD_STATE_CLOSE;
                } else {
                    PlayRecordState = PLAY_RECORD_STATE_SEEK;
                }
            } else {
                PlayRecordError = TRUE;
                PlayRecordState = PLAY_RECORD_STATE_CLOSE;
            }
            break;
        case PLAY_RECORD_STATE_CLOSE:
            if (PlayRecordError) {
                PlayRecordState = PLAY_RECORD_STATE_CLOSED;
                return;
            } else if (result == NAND_RESULT_OK) {
                PlayRecordLastCloseTime = PlayRecord.stopTime;
                PlayRecordState = PLAY_RECORD_STATE_OPEN;
            } else {
                PlayRecordState = PLAY_RECORD_STATE_CLOSED;
                PlayRecordError = TRUE;
                return;
            }
            break;
        default:
            PlayRecordState = PLAY_RECORD_STATE_CLOSED;
            PlayRecordError = TRUE;
            return;
        }
    }

    PlayRecordRetry = FALSE;

    switch (PlayRecordState) {
    case PLAY_RECORD_STATE_OPEN: {
        error = NANDOpenAsync("/title/00000001/00000002/data/play_rec.dat",
                              &FileInfo, NAND_ACCESS_RW, PlayRecordCallback,
                              &Block);
        break;
    }

    case PLAY_RECORD_STATE_READ: {
        error = NANDReadAsync(&FileInfo, &PlayRecord, sizeof(OSPlayRecord),
                              PlayRecordCallback, &Block);
        break;
    }

    case PLAY_RECORD_STATE_SEEK: {
        error = NANDSeekAsync(&FileInfo, 0, NAND_SEEK_BEG, PlayRecordCallback,
                              &Block);
        break;
    }

    case PLAY_RECORD_STATE_SET_ALARM: {
        OSCreateAlarm(&PlayRecordAlarm);
        OSSetAlarm(&PlayRecordAlarm, MY_SEC_TO_TICKS(60),
                   PlayRecordAlarmCallback);
        break;
    }

    case PLAY_RECORD_STATE_WRITE: {
        PlayRecord.stopTime = OSGetTime();
        PlayRecord.checksum = RecordCheckSum(&PlayRecord);
        error = NANDWriteAsync(&FileInfo, &PlayRecord, sizeof(OSPlayRecord),
                               PlayRecordCallback, &Block);
        break;
    }

    case PLAY_RECORD_STATE_CLOSE: {
        error = NANDCloseAsync(&FileInfo, PlayRecordCallback, &Block);
        break;
    }

    default: {
        break;
    }
    }

    if (error != NAND_RESULT_OK) {
        if (error == NAND_RESULT_BUSY) {
            OSCreateAlarm(&PlayRecordAlarm);
            OSSetAlarm(&PlayRecordAlarm, MY_SEC_TO_TICKS(1),
                       PlayRecordAlarmCallback);
            PlayRecordRetry = TRUE;
        } else {
            PlayRecordError = TRUE;

            switch (PlayRecordState) {
            case PLAY_RECORD_STATE_READ:
            case PLAY_RECORD_STATE_SEEK:
            case PLAY_RECORD_STATE_WRITE:
                PlayRecordState = PLAY_RECORD_STATE_CLOSE;
                error = NANDCloseAsync(&FileInfo, PlayRecordCallback, &Block);
                if (error == NAND_RESULT_BUSY) {
                    PlayRecordRetry = TRUE;
                    OSCreateAlarm(&PlayRecordAlarm);
                    OSSetAlarm(&PlayRecordAlarm, MY_SEC_TO_TICKS(1),
                               PlayRecordAlarmCallback);
                }
                break;
            default:
                PlayRecordState = PLAY_RECORD_STATE_CLOSED;
                break;
            }
        }
    }

    PlayRecordLastError = error;
}

// __OSStartPlayRecord: definicion C reemplazada por asm (ver abajo)


// __OSStopPlayRecord: definicion C reemplazada por asm (ver abajo)


//unused
void __OSGetPlayRecordState(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float PlayRecordError_8049E37C;
extern float PlayRecordGet_8049E378;
extern float PlayRecordLastError_8049E38C;
extern float PlayRecordRetry_8049E388;
extern float PlayRecordState_8049D228;
extern float PlayRecordTerminate_8049E380;
extern float PlayRecordTerminated_8049E384;
extern float lbl_8049E390;
extern float lbl_8049E394;
extern u8 jumptable_8038D2D4[];
extern u8 lbl_8038D2A8[];
extern u8 lbl_80465B20[];
extern void OSCancelAlarm();
extern void PlayRecordCallback_8031EBA8();
extern void _restgpr_26();
extern void _savegpr_26();

// asm_to_cpp: PlayRecordCallback_8031EBA8
asm void PlayRecordCallback_8031EBA8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80465B20@ha
    addi r31, r31, lbl_80465B20@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lwz r0, PlayRecordTerminate_8049E380
    stw r3, PlayRecordLastError_8049E38C
    cmpwi r0, 0x0
    beq lbl_8031EBE8
    li r0, 0x1
    stw r0, PlayRecordTerminated_8049E384
    b lbl_8031F03C
lbl_8031EBE8:
    lwz r0, PlayRecordRetry_8049E388
    cmpwi r0, 0x0
    bne lbl_8031EE08
    lwz r0, PlayRecordState_8049D228
    cmplwi r0, 0x6
    bgt lbl_8031EDF4
    lis r4, jumptable_8038D2D4@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8038D2D4@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r0, 0x1
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
    cmpwi r3, -0xa
    bne lbl_8031EC60
    li r0, 0x1
    addi r3, r31, 0x80
    stw r0, PlayRecordRetry_8049E388
    bl OSCreateAlarm
    lis r3, 0x8000
    lis r7, PlayRecordAlarmCallback@ha
    lwz r0, 0xf8(r3)
    addi r3, r31, 0x80
    addi r7, r7, PlayRecordAlarmCallback@l
    li r5, 0x0
    srwi r6, r0, 2
    bl OSSetAlarm
    b lbl_8031F03C
lbl_8031EC60:
    cmpwi r3, 0x0
    bne lbl_8031EC8C
    lwz r0, PlayRecordGet_8049E378
    cmpwi r0, 0x0
    bne lbl_8031EC80
    li r0, 0x2
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
lbl_8031EC80:
    li r0, 0x4
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
lbl_8031EC8C:
    li r3, 0x1
    li r0, 0x7
    stw r3, PlayRecordError_8049E37C
    stw r0, PlayRecordState_8049D228
    b lbl_8031F03C
    cmplwi r3, 0x80
    bne lbl_8031ECD0
    addi r4, r31, 0x0
    li r5, 0x1
    lwz r3, 0x60(r4)
    li r0, 0x3
    lwz r4, 0x64(r4)
    stw r5, PlayRecordGet_8049E378
    stw r4, lbl_8049E394
    stw r3, lbl_8049E390
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
lbl_8031ECD0:
    li r3, 0x1
    li r0, 0x6
    stw r3, PlayRecordError_8049E37C
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
    cmpwi r3, 0x0
    bne lbl_8031ECF8
    li r0, 0x4
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
lbl_8031ECF8:
    li r3, 0x1
    li r0, 0x6
    stw r3, PlayRecordError_8049E37C
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
    li r0, 0x5
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
    cmplwi r3, 0x80
    bne lbl_8031ED8C
    bl OSGetTime
    lis r5, 0x8000
    lwz r8, lbl_8049E394
    lwz r0, 0xf8(r5)
    li r5, 0x12c
    lwz r9, lbl_8049E390
    subfc r8, r8, r4
    srwi r7, r0, 2
    li r6, 0x0
    subfe r3, r9, r3
    xoris r4, r3, 0x8000
    mulhwu r0, r7, r5
    mullw r3, r6, r5
    add r0, r0, r3
    mulli r5, r7, 0x12c
    xoris r0, r0, 0x8000
    subfc r3, r8, r5
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    beq lbl_8031ED80
    li r0, 0x6
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
lbl_8031ED80:
    li r0, 0x3
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
lbl_8031ED8C:
    li r3, 0x1
    li r0, 0x6
    stw r3, PlayRecordError_8049E37C
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
    lwz r0, PlayRecordError_8049E37C
    cmpwi r0, 0x0
    beq lbl_8031EDB8
    li r0, 0x7
    stw r0, PlayRecordState_8049D228
    b lbl_8031F03C
lbl_8031EDB8:
    cmpwi r3, 0x0
    bne lbl_8031EDE0
    addi r4, r31, 0x0
    li r0, 0x1
    lwz r3, 0x60(r4)
    lwz r4, 0x64(r4)
    stw r3, lbl_8049E390
    stw r4, lbl_8049E394
    stw r0, PlayRecordState_8049D228
    b lbl_8031EE08
lbl_8031EDE0:
    li r3, 0x7
    li r0, 0x1
    stw r3, PlayRecordState_8049D228
    stw r0, PlayRecordError_8049E37C
    b lbl_8031F03C
lbl_8031EDF4:
    li r3, 0x7
    li r0, 0x1
    stw r3, PlayRecordState_8049D228
    stw r0, PlayRecordError_8049E37C
    b lbl_8031F03C
lbl_8031EE08:
    lwz r0, PlayRecordState_8049D228
    li r29, 0x0
    stw r29, PlayRecordRetry_8049E388
    cmpwi r0, 0x4
    beq lbl_8031EEB8
    bge lbl_8031EE38
    cmpwi r0, 0x2
    beq lbl_8031EE70
    bge lbl_8031EE94
    cmpwi r0, 0x1
    bge lbl_8031EE48
    b lbl_8031EF64
lbl_8031EE38:
    cmpwi r0, 0x6
    beq lbl_8031EF4C
    bge lbl_8031EF64
    b lbl_8031EEF4
lbl_8031EE48:
    lis r3, lbl_8038D2A8@ha
    lis r6, PlayRecordCallback_8031EBA8@ha
    addi r3, r3, lbl_8038D2A8@l
    addi r4, r31, 0xb0
    addi r6, r6, PlayRecordCallback_8031EBA8@l
    addi r7, r31, 0x13c
    li r5, 0x3
    bl NANDOpenAsync
    mr r30, r3
    b lbl_8031EF64
lbl_8031EE70:
    lis r6, PlayRecordCallback_8031EBA8@ha
    addi r3, r31, 0xb0
    addi r4, r31, 0x0
    addi r7, r31, 0x13c
    addi r6, r6, PlayRecordCallback_8031EBA8@l
    li r5, 0x80
    bl NANDReadAsync
    mr r30, r3
    b lbl_8031EF64
lbl_8031EE94:
    lis r6, PlayRecordCallback_8031EBA8@ha
    addi r3, r31, 0xb0
    addi r6, r6, PlayRecordCallback_8031EBA8@l
    addi r7, r31, 0x13c
    li r4, 0x0
    li r5, 0x0
    bl NANDSeekAsync
    mr r30, r3
    b lbl_8031EF64
lbl_8031EEB8:
    addi r3, r31, 0x80
    bl OSCreateAlarm
    lis r3, 0x8000
    li r0, 0x3c
    lwz r3, 0xf8(r3)
    lis r7, PlayRecordAlarmCallback@ha
    mullw r4, r29, r0
    srwi r5, r3, 2
    addi r3, r31, 0x80
    addi r7, r7, PlayRecordAlarmCallback@l
    mulhwu r0, r5, r0
    mulli r6, r5, 0x3c
    add r5, r0, r4
    bl OSSetAlarm
    b lbl_8031EF64
lbl_8031EEF4:
    bl OSGetTime
    addi r5, r31, 0x0
    li r0, 0x1f
    stw r4, 0x64(r5)
    addi r6, r5, 0x4
    li r4, 0x0
    stw r3, 0x60(r5)
    mtctr r0
lbl_8031EF14:
    lwz r0, 0x0(r6)
    addi r6, r6, 0x4
    add r4, r4, r0
    bdnz lbl_8031EF14
    lis r6, PlayRecordCallback_8031EBA8@ha
    stw r4, 0x0(r31)
    addi r3, r31, 0xb0
    addi r4, r31, 0x0
    addi r6, r6, PlayRecordCallback_8031EBA8@l
    addi r7, r31, 0x13c
    li r5, 0x80
    bl NANDWriteAsync
    mr r30, r3
    b lbl_8031EF64
lbl_8031EF4C:
    lis r4, PlayRecordCallback_8031EBA8@ha
    addi r3, r31, 0xb0
    addi r4, r4, PlayRecordCallback_8031EBA8@l
    addi r5, r31, 0x13c
    bl NANDCloseAsync
    mr r30, r3
lbl_8031EF64:
    cmpwi r30, 0x0
    beq lbl_8031F038
    cmpwi r30, -0x3
    bne lbl_8031EFA8
    addi r3, r31, 0x80
    bl OSCreateAlarm
    lis r3, 0x8000
    lis r7, PlayRecordAlarmCallback@ha
    lwz r0, 0xf8(r3)
    addi r3, r31, 0x80
    addi r7, r7, PlayRecordAlarmCallback@l
    li r5, 0x0
    srwi r6, r0, 2
    bl OSSetAlarm
    li r0, 0x1
    stw r0, PlayRecordRetry_8049E388
    b lbl_8031F038
lbl_8031EFA8:
    lwz r0, PlayRecordState_8049D228
    li r3, 0x1
    stw r3, PlayRecordError_8049E37C
    cmpwi r0, 0x4
    beq lbl_8031F030
    bge lbl_8031EFCC
    cmpwi r0, 0x2
    bge lbl_8031EFD4
    b lbl_8031F030
lbl_8031EFCC:
    cmpwi r0, 0x6
    bge lbl_8031F030
lbl_8031EFD4:
    li r0, 0x6
    lis r4, PlayRecordCallback_8031EBA8@ha
    stw r0, PlayRecordState_8049D228
    addi r3, r31, 0xb0
    addi r4, r4, PlayRecordCallback_8031EBA8@l
    addi r5, r31, 0x13c
    bl NANDCloseAsync
    cmpwi r3, -0x3
    mr r30, r3
    bne lbl_8031F038
    li r0, 0x1
    addi r3, r31, 0x80
    stw r0, PlayRecordRetry_8049E388
    bl OSCreateAlarm
    lis r3, 0x8000
    lis r7, PlayRecordAlarmCallback@ha
    lwz r0, 0xf8(r3)
    addi r3, r31, 0x80
    addi r7, r7, PlayRecordAlarmCallback@l
    li r5, 0x0
    srwi r6, r0, 2
    bl OSSetAlarm
    b lbl_8031F038
lbl_8031F030:
    li r0, 0x7
    stw r0, PlayRecordState_8049D228
lbl_8031F038:
    stw r30, PlayRecordLastError_8049E38C
lbl_8031F03C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __OSStartPlayRecord
asm void __OSStartPlayRecord(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl NANDInit
    cmpwi r3, 0x0
    bne lbl_8031F09C
    li r0, 0x0
    li r3, 0x0
    stw r0, PlayRecordTerminate_8049E380
    li r4, 0x0
    stw r0, PlayRecordGet_8049E378
    stw r0, PlayRecordState_8049D228
    stw r0, PlayRecordError_8049E37C
    stw r0, PlayRecordRetry_8049E388
    stw r0, PlayRecordTerminated_8049E384
    stw r0, PlayRecordLastError_8049E38C
    bl PlayRecordCallback_8031EBA8
lbl_8031F09C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __OSStopPlayRecord
asm void __OSStopPlayRecord(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_80465B20@ha
    addi r29, r29, lbl_80465B20@l
    bl OSDisableInterrupts
    lwz r0, PlayRecordState_8049D228
    li r4, 0x1
    stw r4, PlayRecordTerminate_8049E380
    mr r26, r3
    cmpwi r0, 0x7
    beq lbl_8031F0FC
    cmpwi r0, 0x0
    beq lbl_8031F0FC
    cmpwi r0, 0x9
    beq lbl_8031F0FC
    cmpwi r0, 0x8
    bne lbl_8031F108
lbl_8031F0FC:
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_8031F274
lbl_8031F108:
    cmpwi r0, 0x4
    bne lbl_8031F170
    addi r3, r29, 0x80
    bl OSCancelAlarm
    mr r3, r26
    bl OSRestoreInterrupts
    bl OSGetTime
    addi r5, r29, 0x0
    li r0, 0x1f
    stw r4, 0x64(r5)
    addi r6, r5, 0x4
    li r4, 0x0
    stw r3, 0x60(r5)
    mtctr r0
lbl_8031F140:
    lwz r0, 0x0(r6)
    addi r6, r6, 0x4
    add r4, r4, r0
    bdnz lbl_8031F140
    stw r4, 0x0(r29)
    addi r3, r29, 0xb0
    addi r4, r29, 0x0
    li r5, 0x80
    bl NANDWrite
    addi r3, r29, 0xb0
    bl NANDClose
    b lbl_8031F274
lbl_8031F170:
    lwz r0, PlayRecordRetry_8049E388
    cmpwi r0, 0x0
    beq lbl_8031F190
    addi r3, r29, 0x80
    bl OSCancelAlarm
    mr r3, r26
    bl OSRestoreInterrupts
    b lbl_8031F204
lbl_8031F190:
    bl OSRestoreInterrupts
    bl OSGetTime
    lis r5, 0x1062
    li r0, 0x0
    mr r30, r4
    mr r31, r3
    addi r26, r5, 0x4dd3
    xoris r28, r0, 0x8000
    lis r27, 0x8000
lbl_8031F1B4:
    lwz r0, PlayRecordTerminated_8049E384
    cmpwi r0, 0x0
    bne lbl_8031F204
    bl OSGetTime
    lwz r0, 0xf8(r27)
    subfc r4, r30, r4
    subfe r3, r31, r3
    srwi r0, r0, 2
    mulhwu r0, r26, r0
    xoris r3, r3, 0x8000
    srwi r0, r0, 6
    mulli r0, r0, 0x1f4
    subfc r0, r4, r0
    subfe r3, r3, r28
    subfe r3, r28, r28
    neg. r3, r3
    beq lbl_8031F1B4
    li r0, 0x8
    stw r0, PlayRecordState_8049D228
    b lbl_8031F27C
lbl_8031F204:
    lwz r0, PlayRecordState_8049D228
    cmpwi r0, 0x4
    beq lbl_8031F274
    bge lbl_8031F224
    cmpwi r0, 0x1
    beq lbl_8031F23C
    bge lbl_8031F230
    b lbl_8031F274
lbl_8031F224:
    cmpwi r0, 0x6
    beq lbl_8031F260
    bge lbl_8031F274
lbl_8031F230:
    addi r3, r29, 0xb0
    bl NANDClose
    b lbl_8031F274
lbl_8031F23C:
    lwz r0, PlayRecordLastError_8049E38C
    cmpwi r0, 0x0
    bne lbl_8031F274
    lwz r0, PlayRecordRetry_8049E388
    cmpwi r0, 0x0
    bne lbl_8031F274
    addi r3, r29, 0xb0
    bl NANDClose
    b lbl_8031F274
lbl_8031F260:
    lwz r0, PlayRecordRetry_8049E388
    cmpwi r0, 0x0
    beq lbl_8031F274
    addi r3, r29, 0xb0
    bl NANDClose
lbl_8031F274:
    li r0, 0x9
    stw r0, PlayRecordState_8049D228
lbl_8031F27C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
