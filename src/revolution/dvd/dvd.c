#include <revolution/DVD.h>
#include <revolution/ESP.h>
#include <revolution/OS.h>

#include <string.h>

#define DISK_TOC_OFFSET 0x40000
#define DISK_TOC_SIZE ROUND_UP(sizeof(DVDGameToc), 32)

#define DISK_PART_OFFSET (DISK_TOC_OFFSET + DISK_TOC_SIZE)
#define DISK_PART_SIZE ROUND_UP(sizeof(DVDPartInfo), 32)

#define MAX_TRANSFER_SIZE 0x80000

typedef void (*DVDOptionalCommandChecker)(DVDCommandBlock* block,
                                          DVDLowCallback callback);

typedef void (*DVDCommandState)(DVDCommandBlock* block);

enum {
    NAND_ERROR_GENERIC = 0x01234567,
    NAND_ERROR_TIMEOUT = 0x01234568,
    NAND_ERROR_SECURITY = 0x01234569
};

// High 8 bits of command result DIIMMVAL
enum {
    REQUEST_STATE_OK = (0 << 24),
    REQUEST_STATE_COVER_OPENED = (1 << 24),
    REQUEST_STATE_DISK_CHANGED = (2 << 24),
    REQUEST_STATE_NO_DISK = (3 << 24),
    REQUEST_STATE_MOTOR_STOPPED = (4 << 24),
    REQUEST_STATE_DISK_ERROR = (5 << 24)
};

// Lower 24 bits of command result DIIMMVAL
enum {
    REQUEST_ERROR_OK = 0x000000,
    REQUEST_ERROR_MOTOR_STOPPED = 0x020400,
    REQUEST_ERROR_ID_NOT_READ = 0x020401,
    REQUEST_ERROR_COVER_OPENED = 0x023A00,
    REQUEST_ERROR_SEEK_FAIL = 0x030200,
    REQUEST_ERROR_READ_FAIL = 0x031100,
    REQUEST_ERROR_XFER_FAIL = 0x040800,
    REQUEST_ERROR_BAD_OPCODE = 0x052000,
    REQUEST_ERROR_BAD_AUDIO_BUF = 0x052001,
    REQUEST_ERROR_OUT_OF_RANGE = 0x052100,
    REQUEST_ERROR_BAD_FIELD = 0x052400,
    REQUEST_ERROR_BAD_AUDIO_CMD = 0x052401,
    REQUEST_ERROR_BAD_PERIOD = 0x052402,
    REQUEST_ERROR_053000h = 0x053000,
    REQUEST_ERROR_END_OF_USER = 0x056300,
    REQUEST_ERROR_MEDIUM_CHANGED = 0x062800,
    REQUEST_ERROR_MEDIUM_REMOVAL = 0x0B5A01
};

enum { ERROR_TYPE_OK, ERROR_TYPE_ERROR, ERROR_TYPE_FATAL, ERROR_TYPE_UNKNOWN };

enum {
    COMMAND_NONE,
    COMMAND_READ,
    COMMAND_SEEK,
    COMMAND_CHANGE_DISK,
    COMMAND_BSREAD,
    COMMAND_READID,
    COMMAND_INITSTREAM,
    COMMAND_CANCELSTREAM,
    COMMAND_STOP_STREAM_AT_END,
    COMMAND_REQUEST_AUDIO_ERROR,
    COMMAND_REQUEST_PLAY_ADDR,
    COMMAND_REQUEST_START_ADDR,
    COMMAND_REQUEST_LENGTH,
    COMMAND_AUDIO_BUFFER_CONFIG,
    COMMAND_INQUIRY,
    COMMAND_BS_CHANGE_DISK,
    COMMAND_STOP_MOTOR,

    COMMAND_RESET = 32,
    COMMAND_READ_UNENCRYPTED,
    COMMAND_OPEN_PARTITION,
    COMMAND_CLOSE_PARTITION,
    COMMAND_GET_COVER_READY,
    COMMAND_SET_MAX_ROTATION,
    COMMAND_GET_COVER_STATUS,
    COMMAND_REQUEST_ERROR,
    COMMAND_GET_DISK_ID_VALID,
    COMMAND_29h,
    COMMAND_OPEN_PARTITION_WITH_TMD
};

enum {
    RESUME_POINT_NONE,
    RESUME_POINT_WRONG_DISK_ID,
    RESUME_POINT_DISK_ERROR,
    RESUME_POINT_NO_DISK,
    RESUME_POINT_COVER_OPENED,
    RESUME_POINT_OK,
    RESUME_POINT_DISK_CHANGED,
    RESUME_POINT_7 // Waiting for motor to stop with no pending DVD tasks?
};

enum { MOTOR_STATE_WORKING, MOTOR_STATE_PENDING_STOP, MOTOR_STATE_STOPPED };

enum { PART_TYPE_DATA, PART_TYPE_UPDATE, PART_TYPE_CHANNEL };

typedef struct DVDBB2 {
    u32 dolOffset; // at 0x0
    u32 fstOffset; // at 0x4
    u32 fstSize;   // at 0x8
    u32 fstLimit;  // at 0xC
    char UNK_0x30[0x40 - 0x30];
} DVDBB2;

typedef struct DVDDiskHeader {
    DVDDiskID diskID;           // at 0x0
    char name[64];              // at 0x20
    u8 disableVerifyHash;       // at 0x60
    u8 disableDiscEncrypt;      // at 0x61
    char padding[0x400 - 0x62]; // at 0x62
    char UNK_0x400[0x20];
    DVDBB2 bb2; // at 0x420
} DVDDiskHeader;

typedef struct DVDPartInfo {
    u32 offset; // at 0x0
    u32 type;   // at 0x4
} DVDPartInfo;

typedef struct DVDGameToc {
    u32 numPartition; // at 0x0
    u8 UNK_0x4[0x20 - 0x4];
} DVDGameToc;


typedef struct DVDPartitionParams {
    ESTicket ticket;
    u8 padding0[ROUND_UP(sizeof(ESTicket), 32) - sizeof(ESTicket)];
    ESTicketView ticketView;
    u8 padding1[ROUND_UP(sizeof(ESTicketView), 32) - sizeof(ESTicketView)];
    u32 numTmdBytes;
    u8 padding2[28];
    ESTitleMeta tmd;
    u8 padding3[ROUND_UP(sizeof(ESTitleMeta), 32) - sizeof(ESTitleMeta)];
    u32 numCertBytes;
    u8 padding4[28];
    u8 certificates[4096];
    u32 dataWordOffset;
    u8 padding5[28];
    u8 h3Hash[H3_HASH_TABLE_SIZE];
} DVDPartitionParams;

static void defaultOptionalCommandChecker(DVDCommandBlock* block,
                                          DVDLowCallback callback);


const char* __DVDVersion =
    "<< RVL_SDK - DVD \trelease build: Feb 27 2009 10:01:59 (0x4302_145) >>";

static volatile u32 CommandInfoCounter = 0;
static volatile BOOL PauseFlag = FALSE;
static volatile BOOL PausingFlag = FALSE;
static volatile BOOL FatalErrorFlag = FALSE;
static volatile BOOL Canceling = FALSE;
static volatile u32 ResumeFromHere = 0;
static volatile s32 NumInternalRetry = 0;
static volatile BOOL FirstTimeInBootrom = FALSE;
static volatile BOOL Breaking = FALSE;
static volatile BOOL WaitingForCoverOpen = FALSE;
static volatile BOOL WaitingForCoverClose = FALSE;
static volatile BOOL MotorStopped = FALSE;
static volatile BOOL ChangedDisc = FALSE;
static volatile BOOL PreparingCover = FALSE;
volatile u32 __DVDLayoutFormat = 0;
static BOOL DVDInitialized = FALSE;
static volatile u32 __BS2DVDLowIntType = FALSE;
static volatile BOOL Prepared = FALSE;
static DVDPartInfo* BootGameInfo = NULL;
static DVDPartInfo* PartInfo = NULL;
static DVDGameToc* GameToc = NULL;
static u32 __DVDNumTmdBytes ALIGN(32) = 0;
static volatile s64 LastResetEnd = 0;
static u32 MotorState = 0;
static volatile BOOL ResetRequired = FALSE;
static volatile u32 LastError = 0;
static volatile u32 CancelLastError = 0;
static DVDCommandCallback CancelCallback = NULL;
static volatile u32 CurrCommand = 0;
static OSBootInfo* bootInfo = NULL;
static DVDDiskID* IDShouldBe = NULL;
static DVDCommandBlock* executing = NULL;
DVDCommandState LastState = NULL;

static ESTitleMeta* Tmd;
static volatile BOOL AutoFinishing = FALSE;
static volatile u32 CoverState;

static BOOL autoInvalidation = TRUE;
static DVDOptionalCommandChecker checkOptionalCommand =
    defaultOptionalCommandChecker;

static DVDBB2 BB2 ALIGN(32);
static DVDDiskID CurrDiskID ALIGN(32);

static OSAlarm FatalAlarm;
static OSAlarm ResetAlarm;
static OSAlarm CoverAlarm;
extern BOOL __OSInIPL;

static u8  __DVDGameTocBuffer[DISK_TOC_SIZE] ALIGN(32);
static u8  __DVDPartInfoBuffer[DISK_PART_SIZE] ALIGN(32);
static u8 __DVDTmdBuffer[ROUND_UP(sizeof(ESTitleMeta), 32)] ALIGN(64);
static u8 __DVDTicketViewBuffer[ROUND_UP(sizeof(ESTicketView), 32)] ALIGN(64);

static DVDCommandBlock DummyCommandBlock;
DVDCommandBlock __DVDStopMotorCommandBlock;
DVDCommandBlock __DVDRestartMotorCommandBlock;

static void stateReadingFST(void);
static void stateError(u32 error);
static void stateTimeout(void);
static void stateSecurityError(void);
static void stateGettingError(void);
static void stateGoToRetry(void);
static void stateReadingTOC(DVDCommandBlock* block);
static void stateReadingPartitionInfo(DVDCommandBlock* block);
static void stateOpenPartition(DVDCommandBlock* block);
static void stateOpenPartition2(DVDCommandBlock* block);
static void stateCheckID2(DVDCommandBlock* block);
static void stateCheckID2a(DVDCommandBlock* block);
static void stateCheckID3(DVDCommandBlock* block);
static void stateCoverClosed(void);
static void stateDownRotation(DVDCommandBlock* block);
static void stateCoverClosed_CMD(DVDCommandBlock* block);
static void stateMotorStopped(DVDCommandBlock* block);
static void stateReady(void);
static void stateBusy(DVDCommandBlock* block);

static void cbForStateReadingFST(u32 intType);
static void cbForStateError(u32 intType);
static void cbForStoreErrorCode1(s32 result, s32 arg1);
static void cbForStoreErrorCode2(s32 result, s32 arg1);
static void cbForStoreErrorCode3(s32 result, s32 arg1);
static void cbForStateGettingError(u32 intType);
static void cbForUnrecoveredError(u32 intType);
static void cbForUnrecoveredErrorRetry(u32 intType);
static void cbForStateGoToRetry(u32 intType);
static void cbForStateOpenPartition(u32 intType);
static void cbForStateCheckID1(u32 intType);
static void cbForStateCheckID2(u32 intType);
static void cbForStateCheckID2a(u32 intType);
static void cbForStateCheckID3(u32 intType);
static void cbForStateReset(u32 intType);
static void cbForStateDownRotation(u32 intType);
static void cbForStateCoverClosed(u32 intType);
static void cbForStateMotorStopped(u32 intType);
static void cbForStateBusy(u32 intType);

static void cbForCancelSync(s32 result, DVDCommandBlock* block);

static void CoverAlarmHandler(OSAlarm*, OSContext*);
static void ResetAlarmHandler(OSAlarm*, OSContext*);

static void StampCommand(u32 command, u32 param1, u32 param2) {
    BOOL enabled = OSDisableInterrupts();

    if (CommandInfoCounter >= DVD_ERROR_CMD_MAX) {
        CommandInfoCounter = 0;
    }

    __ErrorInfo.info[CommandInfoCounter].command = command;
    __ErrorInfo.info[CommandInfoCounter].param1 = param1;
    __ErrorInfo.info[CommandInfoCounter].param2 = param2;
    __ErrorInfo.info[CommandInfoCounter].tick = OSGetTick();

    CommandInfoCounter++;
    OSRestoreInterrupts(enabled);
}

inline void StampIntType(u32 intType) {
    BOOL enabled = OSDisableInterrupts();

    if (CommandInfoCounter <= 0) {
        __ErrorInfo.info[DVD_ERROR_CMD_MAX - 1].intType = intType;
    } else {
        __ErrorInfo.info[CommandInfoCounter - 1].intType = intType;
    }

    OSRestoreInterrupts(enabled);
}

static void defaultOptionalCommandChecker(DVDCommandBlock* block,
                                          DVDLowCallback callback) {
#pragma unused(block)
#pragma unused(callback)
}

//unused
void __DVDSetOptionalCommandChecker(){
}

// DVDInit: definicion C reemplazada por asm (ver abajo)
void DVDInit(void);


// stateReadingFST: definicion C reemplazada por asm (ver abajo)
void stateReadingFST(void);


// cbForStateReadingFST: definicion C reemplazada por asm (ver abajo)
void cbForStateReadingFST(u32 intType);


static void FatalAlarmHandler(OSAlarm* alarm, OSContext* ctx) {
#pragma unused(alarm)
#pragma unused(ctx)

    __DVDPrintFatalMessage();
}

// cbForStateError: definicion C reemplazada por asm (ver abajo)
void cbForStateError(u32 intType);


static void cbForStoreErrorCode1(s32 result, s32 arg1) {
#pragma unused(result)
#pragma unused(arg1)

    DVDLowStopMotor(FALSE, FALSE, cbForStateError);
}

static void stateError(u32 error) {
    __DVDStoreErrorCode(error, cbForStoreErrorCode1);
}

static void cbForStoreErrorCode2(s32 result, s32 arg1) {
#pragma unused(result)
#pragma unused(arg1)

    DVDLowSetSpinupFlag(FALSE);
    DVDLowReset(cbForStateError);
    ResetRequired = FALSE;
    ResumeFromHere = RESUME_POINT_NONE;
}

static void stateTimeout(void) {
    __DVDStoreErrorCode(NAND_ERROR_TIMEOUT, cbForStoreErrorCode2);
}

static void stateSecurityError(void) {
    __DVDStoreErrorCode(NAND_ERROR_SECURITY, cbForStoreErrorCode2);
}

static void stateGettingError(void) {
    StampCommand(COMMAND_REQUEST_ERROR, 0, 0);
    DVDLowRequestError(cbForStateGettingError);
}

static u32 CategorizeError(u32 diimmval) {
    if (diimmval == REQUEST_ERROR_MOTOR_STOPPED) {
        LastError = diimmval;
        return ERROR_TYPE_ERROR;
    }

    // Mask out state bits
    diimmval &= ~0xFF000000;

    if (diimmval == REQUEST_ERROR_MEDIUM_CHANGED ||
        diimmval == REQUEST_ERROR_COVER_OPENED ||
        diimmval == REQUEST_ERROR_053000h ||
        diimmval == REQUEST_ERROR_MEDIUM_REMOVAL) {
        return ERROR_TYPE_OK;
    }

    if (diimmval == REQUEST_ERROR_BAD_OPCODE &&
        (executing->command == COMMAND_SET_MAX_ROTATION ||
         LastState == stateDownRotation)) {
        return ERROR_TYPE_OK;
    }

    NumInternalRetry++;

    if (NumInternalRetry == 2) {
        if (diimmval == LastError) {
            LastError = diimmval;
            return ERROR_TYPE_ERROR;
        }

        LastError = diimmval;
        return ERROR_TYPE_FATAL;
    }

    LastError = diimmval;

    if (diimmval == REQUEST_ERROR_READ_FAIL ||
        executing->command == COMMAND_READID) {
        return ERROR_TYPE_FATAL;
    }

    return ERROR_TYPE_UNKNOWN;
}

static BOOL CheckCancel(u32 resume) {
    DVDCommandBlock* block;

    if (Canceling) {
        ResumeFromHere = resume;
        Canceling = FALSE;

        block = executing;
        executing = &DummyCommandBlock;

        block->state = DVD_STATE_CANCELED;
        if (block->callback != NULL) {
            block->callback(DVD_RESULT_CANCELED, block);
        }

        if (CancelCallback != NULL) {
            CancelCallback(DVD_RESULT_GOOD, block);
        }

        stateReady();
        return TRUE;
    }

    return FALSE;
}

static void cbForStoreErrorCode3(s32 result, s32 arg1) {
#pragma unused(result)
#pragma unused(arg1)

    stateGoToRetry();
}

// cbForStateGettingError: definicion C reemplazada por asm (ver abajo)
void cbForStateGettingError(u32 intType);


static void cbForUnrecoveredError(u32 intType) {
    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_TC) {
        stateGoToRetry();
    } else {
        StampCommand(COMMAND_REQUEST_ERROR, 0, 0);
        DVDLowRequestError(cbForUnrecoveredErrorRetry);
    }
}

static void cbForUnrecoveredErrorRetry(u32 intType) {
    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_DE) {
        stateError(NAND_ERROR_GENERIC);
    } else {
        stateError(DVDLowGetImmBufferReg());
    }
}

static void stateGoToRetry(void) {
    StampCommand(COMMAND_STOP_MOTOR, 0, 0);
    DVDLowStopMotor(FALSE, FALSE, cbForStateGoToRetry);
}

// cbForStateGoToRetry: definicion C reemplazada por asm (ver abajo)
void cbForStateGoToRetry(u32 intType);


// stateCheckID: definicion C reemplazada por asm (ver abajo)
void stateCheckID(void);


//unused
static void stateCheckID3(DVDCommandBlock* block) {
    StampCommand(COMMAND_AUDIO_BUFFER_CONFIG, IDShouldBe->strmEnable, 10);
    DVDLowAudioBufferConfig((BOOL)IDShouldBe->strmEnable, 10, cbForStateCheckID3);
}

//unused
static void stateCheckID2a(DVDCommandBlock* block) {
    StampCommand(COMMAND_AUDIO_BUFFER_CONFIG, IDShouldBe->strmEnable, 10);
    DVDLowAudioBufferConfig((BOOL)IDShouldBe->strmEnable, 10, cbForStateCheckID2a);
}

//unused
static void cbForStateCheckID2a(u32 intType) {
    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_TC) {
        NumInternalRetry = 0;
        stateCheckID2(executing);
    } else {
        stateGettingError();
    }
}

static void cbForStateReadingTOC(u32 intType) {
    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_TC) {
        NumInternalRetry = 0;
        GameToc = (DVDGameToc*)__DVDGameTocBuffer;
        stateReadingPartitionInfo(executing);
    } else {
        stateGettingError();
    }
}

static void stateReadingTOC(DVDCommandBlock* block) {
#pragma unused(block)

    DVDLowClearCoverInterrupt(NULL);

    StampCommand(COMMAND_READ_UNENCRYPTED, DVD_LOW_OFFSET(DISK_TOC_OFFSET),
                 DISK_TOC_SIZE);

    DVDLowUnencryptedRead(__DVDGameTocBuffer, DISK_TOC_SIZE,
                          DVD_LOW_OFFSET(DISK_TOC_OFFSET),
                          cbForStateReadingTOC);
}

static void cbForStateReadingPartitionInfo(u32 intType) {
    s16 i;

    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_TC) {
        NumInternalRetry = 0;
        PartInfo = (DVDPartInfo*)__DVDPartInfoBuffer;
        BootGameInfo = NULL;

        if (OS_BOOT_PARTITION_OFFSET != 0) {
            BootGameInfo = PartInfo;
            BootGameInfo->type = OS_BOOT_PARTITION_TYPE;
            BootGameInfo->offset = OS_BOOT_PARTITION_OFFSET;
        } else {
            for (i = 0; i < GameToc->numPartition; PartInfo++, i++) {
                if (PartInfo->type == OS_BOOT_PARTITION_TYPE) {
                    BootGameInfo = PartInfo;
                }
            }
        }

        if (BootGameInfo != NULL) {
            switch (CurrCommand) {
            case COMMAND_CHANGE_DISK:
                NumInternalRetry = 0;
                stateOpenPartition(executing);
                break;
            default:
                NumInternalRetry = 0;
                stateOpenPartition2(executing);
                break;
            }
        } else if (!CheckCancel(RESUME_POINT_WRONG_DISK_ID)) {
            executing->state = DVD_STATE_WRONG_DISK_ID;
            stateMotorStopped(executing);
        }
    } else {
        stateGettingError();
    }
}

static void stateReadingPartitionInfo(DVDCommandBlock* block) {
#pragma unused(block)

    DVDLowClearCoverInterrupt(NULL);

    StampCommand(COMMAND_READ_UNENCRYPTED, DVD_LOW_OFFSET(DISK_PART_OFFSET),
                 DISK_PART_SIZE);

    DVDLowUnencryptedRead(__DVDPartInfoBuffer, DISK_PART_SIZE,
                          DVD_LOW_OFFSET(DISK_PART_OFFSET),
                          cbForStateReadingPartitionInfo);
}

// cbForStateOpenPartition: definicion C reemplazada por asm (ver abajo)
void cbForStateOpenPartition(u32 intType);


static void stateOpenPartition(DVDCommandBlock* block) {
#pragma unused(block)

    DVDLowClearCoverInterrupt(NULL);
    StampCommand(COMMAND_OPEN_PARTITION, BootGameInfo->offset, 0);

    if (OS_LOCKED_FLAG == 0x80) {
        DVDLowOpenPartitionWithTmdAndTicketView(BootGameInfo->offset, (ESTicketView*)__DVDTicketViewBuffer,
        __DVDNumTmdBytes, (ESTitleMeta*)__DVDTmdBuffer, 0, NULL, cbForStateOpenPartition);
    } else {
        DVDLowOpenPartition(BootGameInfo->offset, NULL, 0, NULL, (ESTitleMeta*)__DVDTmdBuffer,
                            cbForStateOpenPartition);
    }
}

// cbForStateOpenPartition2: definicion C reemplazada por asm (ver abajo)
void cbForStateOpenPartition2(u32 intType);


static void stateOpenPartition2(DVDCommandBlock* block) {
#pragma unused(block)

    DVDLowClearCoverInterrupt(NULL);
    StampCommand(COMMAND_OPEN_PARTITION, BootGameInfo->offset, 0);

    if (OS_LOCKED_FLAG == 0x80) {
        DVDLowOpenPartitionWithTmdAndTicketView(BootGameInfo->offset, (ESTicketView*)__DVDTicketViewBuffer,
        __DVDNumTmdBytes, (ESTitleMeta*)__DVDTmdBuffer, 0, NULL, cbForStateOpenPartition2);
    } else {
        DVDLowOpenPartition(BootGameInfo->offset, NULL, 0, NULL, (ESTitleMeta*)__DVDTmdBuffer,
                            cbForStateOpenPartition2);
    }
}

static void stateCheckID2(DVDCommandBlock* block) {
#pragma unused(block)

    DVDLowClearCoverInterrupt(NULL);

    StampCommand(COMMAND_READ, DVD_LOW_OFFSET(offsetof(DVDDiskHeader, bb2)),
                 sizeof(DVDBB2));

    DVDLowRead(&BB2, sizeof(DVDBB2),
               DVD_LOW_OFFSET(offsetof(DVDDiskHeader, bb2)),
               cbForStateCheckID2);
}

// cbForStateCheckID1: definicion C reemplazada por asm (ver abajo)
void cbForStateCheckID1(u32 intType);


static void cbForStateCheckID2(u32 intType) {
    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_TC) {
        NumInternalRetry = 0;
        stateReadingFST();
    } else {
        stateGettingError();
    }
}

//unused
static void cbForStateCheckID3(u32 intType) {
    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_TC) {
        NumInternalRetry = 0;

        if (!CheckCancel(RESUME_POINT_NONE)) {
            executing->state = DVD_STATE_BUSY;
            stateBusy(executing);
        }
    } else {
        stateGettingError();
    }
}

//unused
//static
void AlarmHandler(){
}

// stateCoverClosed: definicion C reemplazada por asm (ver abajo)
void stateCoverClosed(void);


// ResetAlarmHandler: definicion C reemplazada por asm (ver abajo)
void ResetAlarmHandler(OSAlarm* alarm, OSContext* ctx);


// cbForStateReset: definicion C reemplazada por asm (ver abajo)
void cbForStateReset(u32 intType);


static void stateDownRotation(DVDCommandBlock* block) {
#pragma unused(block)

    DVDLowClearCoverInterrupt(NULL);
    StampCommand(COMMAND_SET_MAX_ROTATION, 0, 0);
    DVDLowSetMaximumRotation(DVD_LOW_SPEED(2), cbForStateDownRotation);
}

// cbForStateDownRotation: definicion C reemplazada por asm (ver abajo)
void cbForStateDownRotation(u32 intType);


// stateCoverClosed_CMD: definicion C reemplazada por asm (ver abajo)
void stateCoverClosed_CMD(DVDCommandBlock* block);


static void cbForStateCoverClosed(u32 intType) {
    StampIntType(intType);

    if (intType == DVD_INTTYPE_TIME) {
        stateTimeout();
    } else if (intType == DVD_INTTYPE_SERR) {
        stateSecurityError();
    } else if (intType & DVD_INTTYPE_TC) {
        NumInternalRetry = 0;
        stateCheckID();
    } else {
        stateGettingError();
    }
}

static void cbForPrepareCoverRegister(u32 intType) {
#pragma unused(intType)

    PreparingCover = FALSE;

    if (WaitingForCoverClose) {
        if ((DVDLowGetCoverRegister() & DVD_DICVR_CVR) == 0) {
            OSCancelAlarm(&CoverAlarm);
            WaitingForCoverClose = FALSE;
            cbForStateMotorStopped(DVD_INTTYPE_CVR);
        }
    } else if (DVDLowGetCoverRegister() & DVD_DICVR_CVR) {
        WaitingForCoverOpen = FALSE;
        WaitingForCoverClose = TRUE;

        if (MotorState == MOTOR_STATE_STOPPED) {
            executing->state = DVD_STATE_MOTOR_STOPPED;
        } else {
            executing->state = DVD_STATE_COVER_OPENED;
        }
    } else if (DVDLowGetCoverRegister() & DVD_DICVR_CVRINT) {
        OSCancelAlarm(&CoverAlarm);
        WaitingForCoverOpen = FALSE;
        DVDLowClearCoverInterrupt(NULL);
        cbForStateMotorStopped(DVD_INTTYPE_CVR);
    }
}

static void CoverAlarmHandler(OSAlarm* alarm, OSContext* ctx) {
#pragma unused(alarm)
#pragma unused(ctx)

    if (!PreparingCover) {
        PreparingCover = TRUE;
        DVDLowPrepareCoverRegister(cbForPrepareCoverRegister);
    }
}

static void stateMotorStopped(DVDCommandBlock* block) {
#pragma unused(block)

    MotorState = MOTOR_STATE_PENDING_STOP;

    if (WaitingForCoverOpen || WaitingForCoverClose) {
        return;
    }

    WaitingForCoverOpen = TRUE;

    OSCreateAlarm(&CoverAlarm);
    OSSetPeriodicAlarm(&CoverAlarm, OSGetTick(), OS_MSEC_TO_TICKS(100),
                       CoverAlarmHandler);
}

static void cbForStateMotorStopped(u32 intType) {
#pragma unused(intType)
    WaitingForCoverClose = FALSE;

    if (CurrCommand == COMMAND_CHANGE_DISK) {
        ChangedDisc = TRUE;
    }

    if (MotorState == MOTOR_STATE_STOPPED) {
        if (executing != NULL) {
            executing->state = DVD_STATE_MOTOR_STOPPED;
        }
    } else {
        DVDLowMaskCoverInterrupt();

        if (executing != NULL) {
            executing->state = DVD_STATE_COVER_CLOSED;
            stateCoverClosed();
        } else {
            ResumeFromHere = RESUME_POINT_7;
        }
    }
}

// stateReady: definicion C reemplazada por asm (ver abajo)
void stateReady(void);


// stateBusy: definicion C reemplazada por asm (ver abajo)
void stateBusy(DVDCommandBlock* block);


static u32 ImmCommand[] = {-1, -1, -1};

//unused
void __DVDSetImmCommand(){
}

//unused
void __DVDSetDmaCommand(){
}

static BOOL IsImmCommandWithResult(u32 command) {
    u32 i;

    if (command == COMMAND_REQUEST_AUDIO_ERROR ||
        command == COMMAND_REQUEST_PLAY_ADDR ||
        command == COMMAND_REQUEST_START_ADDR ||
        command == COMMAND_REQUEST_LENGTH) {
        return TRUE;
    }

    for (i = 0; i < ARRAY_SIZE(ImmCommand); i++) {
        if (command == ImmCommand[i]) {
            return TRUE;
        }
    }

    return FALSE;
}

static u32 DmaCommand[] = {-1};
static BOOL IsDmaCommand(u32 command) {
    u32 i;

    if (command == COMMAND_READ || command == COMMAND_BSREAD ||
        command == COMMAND_READID || command == COMMAND_READ_UNENCRYPTED ||
        command == COMMAND_INQUIRY) {
        return TRUE;
    }

    for (i = 0; i < ARRAY_SIZE(DmaCommand); i++) {
        if (command == DmaCommand[i]) {
            return TRUE;
        }
    }

    return FALSE;
}

// cbForStateBusy: definicion C reemplazada por asm (ver abajo)
void cbForStateBusy(u32 intType);


//unused
void __DVDGetIssueCommandAddr(){
}

static BOOL issueCommand(s32 prio, DVDCommandBlock* block) {
    BOOL enabled;
    BOOL success;

    if (autoInvalidation &&
        (block->command == COMMAND_READ || block->command == COMMAND_BSREAD ||
         block->command == COMMAND_READID ||
         block->command == COMMAND_READ_UNENCRYPTED ||
         block->command == COMMAND_INQUIRY)) {
        DCInvalidateRange(block->addr, block->length);
    }

    enabled = OSDisableInterrupts();

    block->state = DVD_STATE_WAITING;
    success = __DVDPushWaitingQueue(prio, block);

    if (executing == NULL && !PauseFlag) {
        stateReady();
    }

    OSRestoreInterrupts(enabled);
    return success;
}

// DVDReadAbsAsyncPrio: definicion C reemplazada por asm (ver abajo)
BOOL DVDReadAbsAsyncPrio(DVDCommandBlock* block, void* dst, u32 size,
                         u32 offset, DVDCommandCallback callback, s32 prio);


//unused
void DVDSeekAbsAsyncPrio(){
}

//unused
void DVDReadAbsAsyncForBS(){
}

//unused
void DVDReadDiskID(){
}

//unused
void __DVDAudioBufferConfig(){
}

//unused
void DVDChangeDiskAsyncForBS(){
}

//unused
void DVDChangeDiskAsync(){
}

//unused
void DVDChangeDisk(){
}

//unused
//static
void cbForChangeDiskSync(){
}

//unused
void DVDStopMotorAsync(){
}

//unused
void DVDStopMotor(){
}

//unused
//static
void cbForStopMotorSync(){
}

// DVDInquiryAsync: definicion C reemplazada por asm (ver abajo)
BOOL DVDInquiryAsync(DVDCommandBlock* block, DVDDriveInfo* info,
                     DVDCommandCallback callback);


//unused
void DVDInquiry(){
}

//unused
//static
void cbForInquirySync(){
}

//unused
void DVDResetAsync(){
}

//unused
void DVDReset(){
}

//unused
//static
void cbForResetSync(){
}

//unused
void DVDResetRequired(){
}


s32 DVDGetCommandBlockStatus(const DVDCommandBlock* block) {
    s32 state;
    DVDCommandBlock* next;
    BOOL enabled = OSDisableInterrupts();

    if (block->state == DVD_STATE_COVER_CLOSED) {
        state = DVD_STATE_BUSY;
    } else if (block->state == DVD_STATE_COVER_OPENED) {
        state = DVD_STATE_NO_DISK;
    } else if (executing == &__DVDStopMotorCommandBlock) {
        next = __DVDGetNextWaitingQueue();

        if (next != NULL) {
            if (block == next) {
                state = DVD_STATE_BUSY;
            } else {
                state = block->state;
            }
        } else if (block == &__DVDStopMotorCommandBlock) {
            state = DVD_STATE_IDLE;
        } else {
            state = block->state;
        }
    } else {
        state = block->state;
    }

    OSRestoreInterrupts(enabled);
    return state;
}

s32 DVDGetDriveStatus(void) {
    BOOL enabled;
    s32 state;

    enabled = OSDisableInterrupts();

    if (FatalErrorFlag) {
        state = DVD_STATE_FATAL;
    } else if (PausingFlag) {
        state = DVD_STATE_PAUSED;
    } else if (executing == NULL) {
        state = DVD_STATE_IDLE;
    } else if (executing == &DummyCommandBlock) {
        state = DVD_STATE_IDLE;
    } else {
        state = DVDGetCommandBlockStatus(executing);
    }

    OSRestoreInterrupts(enabled);
    return state;
}

//unused
void __DVDGetDriveStatus(){
}

BOOL DVDSetAutoInvalidation(BOOL autoInval) {
    BOOL prev = autoInvalidation;
    autoInvalidation = autoInval;
    return prev;
}

BOOL __DVDLowBreak(void) {
    Breaking = TRUE;
    return TRUE;
}

void DVDPause(void) {
    BOOL enabled = OSDisableInterrupts();

    PauseFlag = TRUE;

    if (executing == NULL) {
        PausingFlag = TRUE;
    }

    OSRestoreInterrupts(enabled);
}

// DVDResume: definicion C reemplazada por asm (ver abajo)
void DVDResume(void);


// DVDCancelAsync: definicion C reemplazada por asm (ver abajo)
BOOL DVDCancelAsync(DVDCommandBlock* block, DVDCommandCallback callback);


s32 DVDCancel(DVDCommandBlock* block) {
    BOOL enabled;

    if (!DVDCancelAsync(block, cbForCancelSync)) {
        return DVD_RESULT_FATAL_ERROR;
    }

    enabled = OSDisableInterrupts();

    while (TRUE) {
        s32 state = block->state;
        if (state == DVD_STATE_IDLE || state == DVD_STATE_FATAL ||
            state == DVD_STATE_CANCELED) {
            break;
        }

        if (state == DVD_STATE_COVER_CLOSED) {
            u32 command = block->command;
            if (command == COMMAND_BSREAD || command == COMMAND_READID ||
                command == COMMAND_AUDIO_BUFFER_CONFIG ||
                command == COMMAND_READ_UNENCRYPTED ||
                command == COMMAND_OPEN_PARTITION ||
                command == COMMAND_29h ||
                command == COMMAND_OPEN_PARTITION_WITH_TMD ||
                command == COMMAND_BS_CHANGE_DISK ||
                command == COMMAND_SET_MAX_ROTATION) {
                break;
            }
        }

        OSSleepThread(&__DVDThreadQueue);
    }

    OSRestoreInterrupts(enabled);
    return DVD_RESULT_GOOD;
}

static void cbForCancelSync(s32 result, DVDCommandBlock* block) {
#pragma unused(result)
#pragma unused(block)

    OSWakeupThread(&__DVDThreadQueue);
}

BOOL DVDCancelAllAsync(DVDCommandCallback callback) {
    BOOL success;
    DVDCommandBlock* block;
    BOOL enabled = OSDisableInterrupts();
    DVDPause();

    while ((block = __DVDPopWaitingQueue()) != NULL) {
        DVDCancelAsync(block, NULL);
    }

    if (executing != NULL) {
        success = DVDCancelAsync(executing, callback);
    } else {
        success = TRUE;
        if (callback != NULL) {
            callback(DVD_RESULT_GOOD, NULL);
        }
    }

    DVDResume();
    OSRestoreInterrupts(enabled);
    return success;
}

//unused
void DVDCancelAll(){
}

//unused
//static
void cbForCancelAllSync(){
}


const DVDDiskID* DVDGetCurrentDiskID(void) {
    return &((OSBootInfo*)OSPhysicalToCached(OS_PHYS_BOOT_INFO))->diskID;
}

//unused
void __DVDGetCoverStatusAsync(){
}

// __BS2DVDLowCallback: definicion C reemplazada por asm (ver abajo)
void __BS2DVDLowCallback(u32 intType);


// __DVDGetCoverStatus: definicion C reemplazada por asm (ver abajo)
u32 __DVDGetCoverStatus(void);


void __DVDResetWithNoSpinup(void) {
    __BS2DVDLowIntType = 0;
    DVDLowSetSpinupFlag(FALSE);
    DVDLowReset(__BS2DVDLowCallback);

    while (!__BS2DVDLowIntType) {
        ;
    }
}

//unused
BOOL DVDCheckDiskAsync(DVDCommandBlock* block, DVDCommandCallback callback) {
}

//unused
void DVDIsDiskIdentified(){
}

// __DVDPrepareResetAsync: definicion C reemplazada por asm (ver abajo)
void __DVDPrepareResetAsync(DVDCommandCallback callback);


static void Callback(s32 result, DVDCommandBlock* block) {
#pragma unused(result)
#pragma unused(block)

    Prepared = TRUE;
}

// __DVDPrepareReset: definicion C reemplazada por asm (ver abajo)
void __DVDPrepareReset(void);


BOOL __DVDTestAlarm(const OSAlarm* alarm) {
    if (alarm == &ResetAlarm) {
        return TRUE;
    }

    return __DVDLowTestAlarm(alarm);
}

//unused
void DVDOpenPartitionAsync(){
}

//unused
void DVDClosePartitionAsync(){
}

//unused
void DVDUnencryptedReadAbsAsyncForBS(){
}

BOOL __DVDStopMotorAsync(DVDCommandBlock* block, DVDCommandCallback callback) {
#pragma unused(block)
#pragma unused(callback)

    return TRUE;
}

void __DVDRestartMotor(void) {}

//unused
void DVDDownRotationAsync(){
}

//unused
void DVDPrepareDiskAsync(){
}

//unused
void DVDGetPartitionParamsAsync(){
}

//unused
void DVDOpenPartitionWithParamsAsync(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float CancelLastError_8049E0DC;
extern float CurrCommand_8049E0E4;
extern float DVDInitialized_8049E09C;
extern float FatalErrorFlag_8049E06C;
extern float FirstTimeInBootrom_8049E07C;
extern float IDShouldBe_8049E0EC;
extern float MotorState_8049E0D0;
extern float MotorStopped_8049E08C;
extern float PauseFlag_8049E064;
extern float PausingFlag_8049E068;
extern float ResumeFromHere_8049E074;
extern float WaitingForCoverClose_8049E088;
extern float WaitingForCoverOpen_8049E084;
extern float __DVDNumTmdBytes_8049E0C0;
extern float bootInfo_8049E0E8;
extern float executing_8049E0F0;
extern float lbl_8049D004;
extern float lbl_8049D008;
extern float lbl_8049D00C;
extern float lbl_8049D014;
extern float lbl_8049E060;
extern float lbl_8049E070;
extern float lbl_8049E078;
extern float lbl_8049E080;
extern float lbl_8049E090;
extern float lbl_8049E0A0;
extern float lbl_8049E0A4;
extern float lbl_8049E0A8;
extern float lbl_8049E0AC;
extern float lbl_8049E0B0;
extern float lbl_8049E0C8;
extern float lbl_8049E0CC;
extern float lbl_8049E0D4;
extern float lbl_8049E0E0;
extern float lbl_8049E0F4;
extern u8 CoverAlarm_80460E00[];
extern u8 DummyCommandBlock_80460DA0[];
extern u8 __DVDTicketViewBuffer_8045C280[];
extern u8 __DVDTmdBuffer_8045C380[];
extern u8 jumptable_80378C0C[];
extern u8 jumptable_80378CB8[];
extern u8 jumptable_80378D64[];
extern u8 jumptable_80378E1C[];
extern u8 jumptable_80378EC8[];
extern u8 lbl_80378BD8[];
extern u8 lbl_80378E10[];
extern u8 lbl_80460D80[];
extern u8 lbl_80460DD0[];
extern u8 lbl_80460E40[];
extern u8 lbl_80460EA0[];
BOOL DVDCancelAsync(DVDCommandBlock* block, DVDCommandCallback callback);
void DVDInit(void);
BOOL DVDInquiryAsync(DVDCommandBlock* block, DVDDriveInfo* info,
                     DVDCommandCallback callback);
BOOL DVDReadAbsAsyncPrio(DVDCommandBlock* block, void* dst, u32 size,
                         u32 offset, DVDCommandCallback callback, s32 prio);
void DVDResume(void);
extern void OSInitThreadQueue();
extern void OSRegisterVersion();
extern void OSSetAlarm();
static void ResetAlarmHandler(OSAlarm* alarm, OSContext* ctx);
static void __BS2DVDLowCallback(u32 intType);
extern void __DVDClearWaitingQueue();
extern void __DVDFSInit();
u32 __DVDGetCoverStatus(void);
void __DVDPrepareReset(void);
void __DVDPrepareResetAsync(DVDCommandCallback callback);
extern void _restgpr_26();
extern void _savegpr_26();
static void cbForStateBusy(u32 intType);
static void cbForStateCheckID1(u32 intType);
static void cbForStateDownRotation(u32 intType);
static void cbForStateError(u32 intType);
static void cbForStateGettingError(u32 intType);
static void cbForStateGoToRetry(u32 intType);
static void cbForStateOpenPartition(u32 intType);
static void cbForStateOpenPartition2(u32 intType);
static void cbForStateReadingFST(u32 intType);
static void cbForStateReset(u32 intType);
extern int fn_802D265C();
extern int fn_802D55B4();
extern int fn_802D56A0();
extern int fn_802D5770();
extern void fn_802D5C34();
extern void fn_802D6678();
extern void fn_802D68B8();
extern void fn_802D75F8();
extern void fn_802D7A9C();
extern void fn_802D8B7C();
static void stateBusy(DVDCommandBlock* block);
static void stateCheckID(void);
static void stateCoverClosed(void);
static void stateCoverClosed_CMD(DVDCommandBlock* block);
static void stateReadingFST(void);
static void stateReady(void);

// asm_to_cpp: DVDInit
asm void DVDInit(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, DVDInitialized_8049E09C
    cmpwi r0, 0x0
    bne lbl_802D115C
    lwz r3, __DVDVersion
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, DVDInitialized_8049E09C
    bl DVDLowInit
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_802D10BC
    lis r3, 0x8000
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_802D10BC
    bl ESP_InitLib
    cmpwi r3, 0x0
    bne lbl_802D108C
    lis r4, __DVDTicketViewBuffer_8045C280@ha
    li r3, 0x0
    addi r4, r4, __DVDTicketViewBuffer_8045C280@l
    bl ESP_DiGetTicketView
lbl_802D108C:
    cmpwi r3, 0x0
    bne lbl_802D10A0
    li r3, 0x0
    la r4, __DVDNumTmdBytes_8049E0C0
    bl ESP_DiGetTmd
lbl_802D10A0:
    cmpwi r3, 0x0
    bne lbl_802D10B8
    lis r3, __DVDTmdBuffer_8045C380@ha
    la r4, __DVDNumTmdBytes_8049E0C0
    addi r3, r3, __DVDTmdBuffer_8045C380@l
    bl ESP_DiGetTmd
lbl_802D10B8:
    bl ESP_CloseLib
lbl_802D10BC:
    bl __DVDFSInit
    bl __DVDClearWaitingQueue
    lis r0, 0x8000
    li r3, 0x0
    stw r3, MotorState_8049E0D0
    la r3, __DVDThreadQueue
    stw r0, bootInfo_8049E0E8
    stw r0, IDShouldBe_8049E0EC
    bl OSInitThreadQueue
    bl DVDLowUnmaskStatusInterrupts
    bl DVDLowMaskCoverInterrupt
    lwz r3, bootInfo_8049E0E8
    lwz r3, 0x20(r3)
    addis r0, r3, 0x1ae0
    cmplwi r0, 0x7c22
    beq lbl_802D1110
    subis r0, r3, 0xd15
    cmplwi r0, 0xea5e
    beq lbl_802D1110
    li r0, 0x1
    stw r0, FirstTimeInBootrom_8049E07C
lbl_802D1110:
    lis r31, __ErrorInfo@ha
    li r4, 0x0
    addi r3, r31, __ErrorInfo@l
    li r5, 0x80
    bl memset
    lis r30, 0x8000
    addi r3, r31, __ErrorInfo@l
    mr r4, r30
    li r5, 0x4
    bl memcpy
    lbz r4, 0x6(r30)
    addi r5, r31, __ErrorInfo@l
    li r0, 0x0
    li r3, 0x1
    stb r4, 0x4(r5)
    lbz r4, 0x7(r30)
    stb r4, 0x5(r5)
    stw r0, __DVDLayoutFormat
    bl DVDSetAutoFatalMessaging
lbl_802D115C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: stateReadingFST
asm static void stateReadingFST(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, stateReadingFST@ha
    lis r3, lbl_80460D80@ha
    stw r0, 0x24(r1)
    addi r5, r5, stateReadingFST@l
    addi r3, r3, lbl_80460D80@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r4, bootInfo_8049E0E8
    stw r5, lbl_8049E0F4
    lwz r0, 0x8(r3)
    lwz r3, 0x3c(r4)
    cmplw r3, r0
    bge lbl_802D11D0
    lis r5, lbl_80378BD8@ha
    la r3, lbl_8049D00C
    addi r5, r5, lbl_80378BD8@l
    li r4, 0x442
    opword 0x4CC63182
    bl OSPanic
lbl_802D11D0:
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lwz r3, __DVDLayoutFormat
    lis r6, lbl_80460D80@ha
    addi r6, r6, lbl_80460D80@l
    lwz r0, __DVDLayoutFormat
    nor r3, r3, r3
    lwz r5, 0x8(r6)
    rlwinm r4, r3, 0, 30, 30
    lwz r3, 0x4(r6)
    slw r4, r5, r4
    addi r4, r4, 0x1f
    srw r29, r3, r0
    clrrwi r28, r4, 5
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D1224
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D1224:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8049E060
    li r5, 0x1
    mulli r3, r3, 0x14
    add r4, r30, r4
    stw r5, 0x1c(r4)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r29, 0x20(r3)
    add r3, r30, r0
    stw r28, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, __DVDLayoutFormat
    lis r4, lbl_80460D80@ha
    addi r4, r4, lbl_80460D80@l
    lis r6, cbForStateReadingFST@ha
    nor r0, r0, r0
    lwz r3, 0x8(r4)
    rlwinm r0, r0, 0, 30, 30
    lwz r7, bootInfo_8049E0E8
    slw r3, r3, r0
    lwz r5, 0x4(r4)
    addi r4, r3, 0x1f
    lwz r0, __DVDLayoutFormat
    lwz r3, 0x38(r7)
    clrrwi r4, r4, 5
    srw r5, r5, r0
    addi r6, r6, cbForStateReadingFST@l
    bl DVDLowRead
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: cbForStateReadingFST
asm static void cbForStateReadingFST(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D1324
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r30, 0x78(r4)
    b lbl_802D133C
lbl_802D1324:
    lwz r0, lbl_8049E060
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r30, 0x14(r4)
lbl_802D133C:
    bl OSRestoreInterrupts
    cmplwi r30, 0x10
    bne lbl_802D1360
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D1458
lbl_802D1360:
    cmplwi r30, 0x20
    bne lbl_802D1380
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D1458
lbl_802D1380:
    clrlwi. r0, r30, 31
    beq lbl_802D13C8
    li r30, 0x0
    stw r30, lbl_8049E078
    bl __DVDFSInit
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r4, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r3, executing_8049E0F0
    stw r30, 0xc(r4)
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_802D13C0
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D13C0:
    bl stateReady
    b lbl_802D1458
lbl_802D13C8:
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D13E4
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D13E4:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x27
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, cbForStateGettingError@ha
    addi r3, r3, cbForStateGettingError@l
    bl DVDLowRequestError
lbl_802D1458:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: cbForStateError
asm static void cbForStateError(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802D68B8
    cmpwi r3, 0x0
    beq lbl_802D14BC
    lis r31, lbl_80460DD0@ha
    addi r3, r31, lbl_80460DD0@l
    bl OSCreateAlarm
    lis r7, FatalAlarmHandler@ha
    addi r3, r31, lbl_80460DD0@l
    addi r7, r7, FatalAlarmHandler@l
    li r6, 0x1
    li r5, 0x0
    bl OSSetAlarm
    b lbl_802D1570
lbl_802D14BC:
    lwz r3, executing_8049E0F0
    li r0, -0x1
    cmplwi r31, 0x10
    stw r0, 0xc(r3)
    bne lbl_802D14E8
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D1570
lbl_802D14E8:
    cmplwi r31, 0x20
    bne lbl_802D1508
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D1570
lbl_802D1508:
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r31, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    li r0, 0x1
    stw r0, FatalErrorFlag_8049E06C
    stw r3, executing_8049E0F0
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D153C
    mr r4, r31
    li r3, -0x1
    mtctr r12
    bctrl
lbl_802D153C:
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D156C
    lwz r12, lbl_8049E0E0
    li r0, 0x0
    stw r0, lbl_8049E070
    cmpwi r12, 0x0
    beq lbl_802D156C
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D156C:
    bl stateReady
lbl_802D1570:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: cbForStateGettingError
asm static void cbForStateGettingError(u32 intType) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D17CC
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r28, 0x78(r4)
    b lbl_802D17E4
lbl_802D17CC:
    lwz r0, lbl_8049E060
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r28, 0x14(r4)
lbl_802D17E4:
    bl OSRestoreInterrupts
    cmplwi r28, 0x10
    bne lbl_802D1808
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D1C70
lbl_802D1808:
    cmplwi r28, 0x20
    bne lbl_802D1828
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D1C70
lbl_802D1828:
    rlwinm. r0, r28, 0, 30, 30
    beq lbl_802D1848
    lis r3, 0x123
    lis r4, cbForStoreErrorCode1@ha
    addi r3, r3, 0x4567
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
    b lbl_802D1C70
lbl_802D1848:
    bl DVDLowGetImmBufferReg
    mr r29, r3
    clrrwi r28, r3, 24
    bl CategorizeError
    cmplwi r3, 0x1
    mr r30, r3
    bne lbl_802D1878
    lis r4, cbForStoreErrorCode1@ha
    mr r3, r29
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
    b lbl_802D1C70
lbl_802D1878:
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_802D188C
    li r5, 0x0
    b lbl_802D18F0
lbl_802D188C:
    subis r0, r28, 0x100
    cmplwi r0, 0x0
    bne lbl_802D18A0
    li r5, 0x4
    b lbl_802D18F0
lbl_802D18A0:
    subis r0, r28, 0x200
    cmplwi r0, 0x0
    bne lbl_802D18B4
    li r5, 0x6
    b lbl_802D18F0
lbl_802D18B4:
    subis r0, r28, 0x300
    cmplwi r0, 0x0
    bne lbl_802D18C8
    li r5, 0x3
    b lbl_802D18F0
lbl_802D18C8:
    cmpwi r28, 0x0
    bne lbl_802D18EC
    subis r0, r29, 0x5
    cmplwi r0, 0x3000
    bne lbl_802D18E4
    li r5, 0x1
    b lbl_802D18F0
lbl_802D18E4:
    li r5, 0x5
    b lbl_802D18F0
lbl_802D18EC:
    li r5, 0x5
lbl_802D18F0:
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D1964
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r31, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    li r4, 0x0
    stw r5, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D193C
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D193C:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D1958
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D1958:
    bl stateReady
    li r0, 0x1
    b lbl_802D1968
lbl_802D1964:
    li r0, 0x0
lbl_802D1968:
    cmpwi r0, 0x0
    bne lbl_802D1C70
    cmplwi r30, 0x2
    bne lbl_802D198C
    lis r4, cbForStoreErrorCode3@ha
    mr r3, r29
    addi r4, r4, cbForStoreErrorCode3@l
    bl __DVDStoreErrorCode
    b lbl_802D1C70
lbl_802D198C:
    cmplwi r30, 0x3
    bne lbl_802D1A5C
    clrlwi r3, r29, 8
    subis r0, r3, 0x3
    cmplwi r0, 0x1100
    bne lbl_802D1A48
    lwz r3, executing_8049E0F0
    lwz r29, 0x10(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D19C8
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D19C8:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x2
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r29, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r3, executing_8049E0F0
    lis r4, cbForUnrecoveredError@ha
    addi r4, r4, cbForUnrecoveredError@l
    lwz r3, 0x10(r3)
    bl DVDLowSeek
    b lbl_802D1C70
lbl_802D1A48:
    lwz r12, lbl_8049E0F4
    lwz r3, executing_8049E0F0
    mtctr r12
    bctrl
    b lbl_802D1C70
lbl_802D1A5C:
    subis r0, r28, 0x100
    cmplwi r0, 0x0
    bne lbl_802D1AE8
    lwz r4, executing_8049E0F0
    li r0, 0x5
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r3, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D1C70
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D1C70
    lis r30, CoverAlarm_80460E00@ha
    stw r3, WaitingForCoverOpen_8049E084
    addi r3, r30, CoverAlarm_80460E00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r30, CoverAlarm_80460E00@l
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
    b lbl_802D1C70
lbl_802D1AE8:
    subis r0, r28, 0x200
    cmplwi r0, 0x0
    bne lbl_802D1B08
    lwz r3, executing_8049E0F0
    li r0, 0x3
    stw r0, 0xc(r3)
    bl stateCoverClosed
    b lbl_802D1C70
lbl_802D1B08:
    subis r0, r28, 0x300
    cmplwi r0, 0x0
    bne lbl_802D1B94
    lwz r4, executing_8049E0F0
    li r0, 0x4
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r3, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D1C70
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D1C70
    lis r30, CoverAlarm_80460E00@ha
    stw r3, WaitingForCoverOpen_8049E084
    addi r3, r30, CoverAlarm_80460E00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r30, CoverAlarm_80460E00@l
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
    b lbl_802D1C70
lbl_802D1B94:
    cmpwi r28, 0x0
    bne lbl_802D1C5C
    subis r0, r29, 0x5
    cmplwi r0, 0x3000
    bne lbl_802D1C44
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D1BC4
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D1BC4:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r5, cbForStateCheckID1@ha
    li r3, 0x0
    addi r5, r5, cbForStateCheckID1@l
    li r4, 0x0
    bl DVDLowStopMotor
    b lbl_802D1C70
lbl_802D1C44:
    lis r3, 0x123
    lis r4, cbForStoreErrorCode1@ha
    addi r3, r3, 0x4567
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
    b lbl_802D1C70
lbl_802D1C5C:
    lis r3, 0x123
    lis r4, cbForStoreErrorCode1@ha
    addi r3, r3, 0x4567
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
lbl_802D1C70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: cbForStateGoToRetry
asm static void cbForStateGoToRetry(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D1F78
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_802D1F90
lbl_802D1F78:
    lwz r0, lbl_8049E060
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_802D1F90:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_802D1FB4
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2170
lbl_802D1FB4:
    cmplwi r31, 0x20
    bne lbl_802D1FD4
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2170
lbl_802D1FD4:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_802D1FF4
    lis r3, 0x123
    lis r4, cbForStoreErrorCode1@ha
    addi r3, r3, 0x4567
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
    b lbl_802D2170
lbl_802D1FF4:
    li r0, 0x0
    stw r0, lbl_8049E078
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x4
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x5
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xd
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x21
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x22
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x29
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x2a
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xf
    beq lbl_802D2068
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x25
    bne lbl_802D2070
lbl_802D2068:
    li r0, 0x1
    stw r0, lbl_8049E0D4
lbl_802D2070:
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D20E8
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r31, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    li r0, 0x2
    stw r0, ResumeFromHere_8049E074
    li r4, 0x0
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D20C0
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D20C0:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D20DC
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D20DC:
    bl stateReady
    li r0, 0x1
    b lbl_802D20EC
lbl_802D20E8:
    li r0, 0x0
lbl_802D20EC:
    cmpwi r0, 0x0
    bne lbl_802D2170
    lwz r4, executing_8049E0F0
    li r0, 0xb
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r3, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D2170
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D2170
    lis r31, CoverAlarm_80460E00@ha
    stw r3, WaitingForCoverOpen_8049E084
    addi r3, r31, CoverAlarm_80460E00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, CoverAlarm_80460E00@l
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
lbl_802D2170:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: stateCheckID
asm static void stateCheckID(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, __DVDTicketViewBuffer_8045C280@ha
    addi r30, r30, __DVDTicketViewBuffer_8045C280@l
    stw r29, 0x14(r1)
    lwz r0, CurrCommand_8049E0E4
    cmpwi r0, 0x3
    beq lbl_802D21B4
    b lbl_802D2340
lbl_802D21B4:
    li r31, 0x0
    lwz r4, executing_8049E0F0
    stw r31, lbl_8049E090
    addi r3, r30, 0x4bc0
    lwz r4, 0x24(r4)
    bl fn_802D6678
    cmpwi r3, 0x0
    beq lbl_802D22A8
    lwz r3, IDShouldBe_8049E0EC
    addi r4, r30, 0x4bc0
    li r5, 0x20
    bl memcpy
    lwz r5, executing_8049E0F0
    li r0, 0x1
    addi r3, r30, 0x4b00
    li r4, 0x20
    stw r0, 0xc(r5)
    bl DCInvalidateRange
    stw r31, lbl_8049E078
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_802D2220
    stw r31, lbl_8049E060
lbl_802D2220:
    lwz r0, lbl_8049E060
    lis r31, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r31, r31, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8049E060
    li r7, 0x21
    lis r5, 0x1
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r31, r6
    stw r7, 0x1c(r6)
    add r3, r31, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r31, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r31, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r6, cbForStateReadingTOC@ha
    addi r3, r30, 0x4be0
    addi r6, r6, cbForStateReadingTOC@l
    li r4, 0x20
    lis r5, 0x1
    bl DVDLowUnencryptedRead
    b lbl_802D24A0
lbl_802D22A8:
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_802D22C0
    stw r31, lbl_8049E060
lbl_802D22C0:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r5, cbForStateCheckID1@ha
    li r3, 0x0
    addi r5, r5, cbForStateCheckID1@l
    li r4, 0x0
    bl DVDLowStopMotor
    b lbl_802D24A0
lbl_802D2340:
    lwz r4, IDShouldBe_8049E0EC
    addi r3, r30, 0x4bc0
    li r5, 0x20
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802D23F4
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_802D2374
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D2374:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r5, cbForStateCheckID1@ha
    li r3, 0x0
    addi r5, r5, cbForStateCheckID1@l
    li r4, 0x0
    bl DVDLowStopMotor
    b lbl_802D24A0
lbl_802D23F4:
    li r31, 0x0
    li r3, 0x0
    stw r31, lbl_8049E078
    bl DVDLowClearCoverInterrupt
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_802D241C
    stw r31, lbl_8049E060
lbl_802D241C:
    lwz r0, lbl_8049E060
    lis r31, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r31, r31, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8049E060
    li r7, 0x21
    lis r5, 0x1
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r31, r6
    stw r7, 0x1c(r6)
    add r3, r31, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r31, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r31, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r6, cbForStateReadingTOC@ha
    addi r3, r30, 0x4be0
    addi r6, r6, cbForStateReadingTOC@l
    li r4, 0x20
    lis r5, 0x1
    bl DVDLowUnencryptedRead
lbl_802D24A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802D265C
asm int fn_802D265C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, __DVDTicketViewBuffer_8045C280@ha
    addi r31, r31, __DVDTicketViewBuffer_8045C280@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D26A4
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r28, 0x78(r4)
    b lbl_802D26C0
lbl_802D26A4:
    lwz r4, lbl_8049E060
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r28, 0x28(r4)
lbl_802D26C0:
    bl OSRestoreInterrupts
    cmplwi r28, 0x10
    bne lbl_802D26E4
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2AB4
lbl_802D26E4:
    cmplwi r28, 0x20
    bne lbl_802D2704
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2AB4
lbl_802D2704:
    clrlwi. r0, r28, 31
    beq lbl_802D2A98
    li r0, 0x0
    addi r6, r31, 0x4c00
    stw r0, lbl_8049E078
    lis r5, 0x8000
    stw r6, lbl_8049E0AC
    stw r0, lbl_8049E0A8
    lwz r0, 0x3198(r5)
    cmpwi r0, 0x0
    beq lbl_802D274C
    stw r6, lbl_8049E0A8
    lwz r0, 0x3194(r5)
    stw r0, 0x4(r6)
    lwz r0, 0x3198(r5)
    lwz r3, lbl_8049E0A8
    stw r0, 0x0(r3)
    b lbl_802D2788
lbl_802D274C:
    lwz r3, lbl_8049E0B0
    li r7, 0x0
    b lbl_802D2778
lbl_802D2758:
    lwz r4, 0x4(r6)
    lwz r0, 0x3194(r5)
    cmplw r4, r0
    bne lbl_802D276C
    stw r6, lbl_8049E0A8
lbl_802D276C:
    addi r6, r6, 0x8
    addi r7, r7, 0x1
    stw r6, lbl_8049E0AC
lbl_802D2778:
    lwz r0, 0x0(r3)
    extsh r4, r7
    cmplw r4, r0
    blt lbl_802D2758
lbl_802D2788:
    lwz r0, lbl_8049E0A8
    cmpwi r0, 0x0
    beq lbl_802D299C
    lwz r0, CurrCommand_8049E0E4
    cmpwi r0, 0x3
    beq lbl_802D27A4
    b lbl_802D28A0
lbl_802D27A4:
    li r29, 0x0
    li r3, 0x0
    stw r29, lbl_8049E078
    bl DVDLowClearCoverInterrupt
    lwz r3, lbl_8049E0A8
    lwz r28, 0x0(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r30, r3
    cmplwi r0, 0x5
    blt lbl_802D27D4
    stw r29, lbl_8049E060
lbl_802D27D4:
    lwz r0, lbl_8049E060
    lis r29, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r29, r29, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x22
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r29, r5
    stw r6, 0x1c(r5)
    add r3, r29, r3
    mulli r0, r0, 0x14
    stw r28, 0x20(r3)
    add r3, r29, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r29, r5
    stw r3, 0x2c(r4)
    mr r3, r30
    bl OSRestoreInterrupts
    lis r3, 0x8000
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_802D2878
    lwz r3, lbl_8049E0A8
    lis r9, cbForStateOpenPartition@ha
    lwz r5, __DVDNumTmdBytes_8049E0C0
    addi r4, r31, 0x0
    lwz r3, 0x0(r3)
    addi r6, r31, 0x100
    addi r9, r9, cbForStateOpenPartition@l
    li r7, 0x0
    li r8, 0x0
    bl DVDLowOpenPartitionWithTmdAndTicketView
    b lbl_802D2AB4
lbl_802D2878:
    lwz r3, lbl_8049E0A8
    lis r8, cbForStateOpenPartition@ha
    addi r7, r31, 0x100
    li r4, 0x0
    lwz r3, 0x0(r3)
    addi r8, r8, cbForStateOpenPartition@l
    li r5, 0x0
    li r6, 0x0
    bl DVDLowOpenPartition
    b lbl_802D2AB4
lbl_802D28A0:
    li r29, 0x0
    li r3, 0x0
    stw r29, lbl_8049E078
    bl DVDLowClearCoverInterrupt
    lwz r3, lbl_8049E0A8
    lwz r28, 0x0(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r30, r3
    cmplwi r0, 0x5
    blt lbl_802D28D0
    stw r29, lbl_8049E060
lbl_802D28D0:
    lwz r0, lbl_8049E060
    lis r29, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r29, r29, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x22
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r29, r5
    stw r6, 0x1c(r5)
    add r3, r29, r3
    mulli r0, r0, 0x14
    stw r28, 0x20(r3)
    add r3, r29, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r29, r5
    stw r3, 0x2c(r4)
    mr r3, r30
    bl OSRestoreInterrupts
    lis r3, 0x8000
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_802D2974
    lwz r3, lbl_8049E0A8
    lis r9, cbForStateOpenPartition2@ha
    lwz r5, __DVDNumTmdBytes_8049E0C0
    addi r4, r31, 0x0
    lwz r3, 0x0(r3)
    addi r6, r31, 0x100
    addi r9, r9, cbForStateOpenPartition2@l
    li r7, 0x0
    li r8, 0x0
    bl DVDLowOpenPartitionWithTmdAndTicketView
    b lbl_802D2AB4
lbl_802D2974:
    lwz r3, lbl_8049E0A8
    lis r8, cbForStateOpenPartition2@ha
    addi r7, r31, 0x100
    li r4, 0x0
    lwz r3, 0x0(r3)
    addi r8, r8, cbForStateOpenPartition2@l
    li r5, 0x0
    li r6, 0x0
    bl DVDLowOpenPartition
    b lbl_802D2AB4
lbl_802D299C:
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D2A10
    lwz r28, executing_8049E0F0
    addi r3, r31, 0x4b20
    li r0, 0x1
    li r4, 0x0
    stw r0, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r28)
    lwz r12, 0x28(r28)
    cmpwi r12, 0x0
    beq lbl_802D29E8
    mr r4, r28
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D29E8:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D2A04
    mr r4, r28
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D2A04:
    bl stateReady
    li r0, 0x1
    b lbl_802D2A14
lbl_802D2A10:
    li r0, 0x0
lbl_802D2A14:
    cmpwi r0, 0x0
    bne lbl_802D2AB4
    lwz r4, executing_8049E0F0
    li r0, 0x6
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r3, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D2AB4
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D2AB4
    stw r3, WaitingForCoverOpen_8049E084
    addi r3, r31, 0x4b80
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, 0x4b80
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
    b lbl_802D2AB4
lbl_802D2A98:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl StampCommand
    lis r3, cbForStateGettingError@ha
    addi r3, r3, cbForStateGettingError@l
    bl DVDLowRequestError
lbl_802D2AB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: cbForStateOpenPartition
asm static void cbForStateOpenPartition(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D2B0C
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r30, 0x78(r4)
    b lbl_802D2B28
lbl_802D2B0C:
    lwz r4, lbl_8049E060
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r30, 0x28(r4)
lbl_802D2B28:
    bl OSRestoreInterrupts
    cmplwi r30, 0x10
    bne lbl_802D2B4C
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2C44
lbl_802D2B4C:
    cmplwi r30, 0x20
    bne lbl_802D2B6C
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2C44
lbl_802D2B6C:
    clrlwi. r0, r30, 31
    beq lbl_802D2C28
    li r30, 0x0
    li r3, 0x0
    stw r30, lbl_8049E078
    bl DVDLowClearCoverInterrupt
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D2B9C
    stw r30, lbl_8049E060
lbl_802D2B9C:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8049E060
    li r7, 0x1
    li r5, 0x108
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_80460D80@ha
    lis r6, cbForStateCheckID2@ha
    addi r3, r3, lbl_80460D80@l
    li r4, 0x20
    addi r6, r6, cbForStateCheckID2@l
    li r5, 0x108
    bl DVDLowRead
    b lbl_802D2C44
lbl_802D2C28:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl StampCommand
    lis r3, cbForStateGettingError@ha
    addi r3, r3, cbForStateGettingError@l
    bl DVDLowRequestError
lbl_802D2C44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: cbForStateOpenPartition2
asm static void cbForStateOpenPartition2(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D2C90
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_802D2CA8
lbl_802D2C90:
    lwz r0, lbl_8049E060
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_802D2CA8:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_802D2CCC
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2DAC
lbl_802D2CCC:
    cmplwi r31, 0x20
    bne lbl_802D2CEC
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2DAC
lbl_802D2CEC:
    clrlwi. r0, r31, 31
    beq lbl_802D2D90
    li r4, 0x0
    stw r4, lbl_8049E078
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D2D6C
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r31, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r4, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D2D44
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D2D44:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D2D60
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D2D60:
    bl stateReady
    li r0, 0x1
    b lbl_802D2D70
lbl_802D2D6C:
    li r0, 0x0
lbl_802D2D70:
    cmpwi r0, 0x0
    bne lbl_802D2DAC
    lwz r3, executing_8049E0F0
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, executing_8049E0F0
    bl stateBusy
    b lbl_802D2DAC
lbl_802D2D90:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl StampCommand
    lis r3, cbForStateGettingError@ha
    addi r3, r3, cbForStateGettingError@l
    bl DVDLowRequestError
lbl_802D2DAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: cbForStateCheckID1
asm static void cbForStateCheckID1(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D2DF4
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_802D2E0C
lbl_802D2DF4:
    lwz r0, lbl_8049E060
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_802D2E0C:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_802D2E30
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2F74
lbl_802D2E30:
    cmplwi r31, 0x20
    bne lbl_802D2E50
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D2F74
lbl_802D2E50:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_802D2E70
    lis r3, 0x123
    lis r4, cbForStoreErrorCode1@ha
    addi r3, r3, 0x4567
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
    b lbl_802D2F74
lbl_802D2E70:
    li r4, 0x0
    stw r4, lbl_8049E078
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D2EEC
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r31, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    li r0, 0x1
    stw r0, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D2EC4
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D2EC4:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D2EE0
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D2EE0:
    bl stateReady
    li r0, 0x1
    b lbl_802D2EF0
lbl_802D2EEC:
    li r0, 0x0
lbl_802D2EF0:
    cmpwi r0, 0x0
    bne lbl_802D2F74
    lwz r4, executing_8049E0F0
    li r0, 0x6
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r3, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D2F74
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D2F74
    lis r31, CoverAlarm_80460E00@ha
    stw r3, WaitingForCoverOpen_8049E084
    addi r3, r31, CoverAlarm_80460E00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, CoverAlarm_80460E00@l
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
lbl_802D2F74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: stateCoverClosed
asm static void stateCoverClosed(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    lwz r0, CurrCommand_8049E0E4
    stw r3, MotorState_8049E0D0
    cmplwi r0, 0x2a
    bgt lbl_802D31B4
    lis r3, jumptable_80378C0C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80378C0C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl __DVDClearWaitingQueue
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r4, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r3, executing_8049E0F0
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_802D3180
    li r3, -0x4
    mtctr r12
    bctrl
lbl_802D3180:
    bl stateReady
    b lbl_802D31D0
    li r0, 0x0
    stw r0, MotorState_8049E0D0
    lwz r3, executing_8049E0F0
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, executing_8049E0F0
    bl stateBusy
    b lbl_802D31D0
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_802D31D0
lbl_802D31B4:
    li r0, 0x0
    li r3, 0x1
    stw r0, MotorState_8049E0D0
    bl DVDLowSetSpinupFlag
    lis r3, cbForStateReset@ha
    addi r3, r3, cbForStateReset@l
    bl DVDLowReset
lbl_802D31D0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ResetAlarmHandler
asm static void ResetAlarmHandler(OSAlarm* alarm, OSContext* ctx) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0x8000
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lhz r0, 0x30e6(r3)
    cmplwi r0, 0x8003
    bne lbl_802D32B0
    lis r4, stateDownRotation@ha
    li r3, 0x0
    addi r4, r4, stateDownRotation@l
    stw r4, lbl_8049E0F4
    bl DVDLowClearCoverInterrupt
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D3234
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D3234:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x25
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r4, cbForStateDownRotation@ha
    lis r3, 0x2
    addi r4, r4, cbForStateDownRotation@l
    bl DVDLowSetMaximumRotation
    b lbl_802D3418
lbl_802D32B0:
    lis r3, lbl_80460E40@ha
    li r4, 0x20
    addi r3, r3, lbl_80460E40@l
    bl DCInvalidateRange
    lwz r0, CurrCommand_8049E0E4
    lis r3, stateCoverClosed_CMD@ha
    addi r3, r3, stateCoverClosed_CMD@l
    cmplwi r0, 0x28
    stw r3, lbl_8049E0F4
    bne lbl_802D3374
    li r4, 0x0
    stw r4, lbl_8049E078
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D3350
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r30, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r4, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r30)
    lwz r12, 0x28(r30)
    cmpwi r12, 0x0
    beq lbl_802D3328
    mr r4, r30
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D3328:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D3344
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D3344:
    bl stateReady
    li r0, 0x1
    b lbl_802D3354
lbl_802D3350:
    li r0, 0x0
lbl_802D3354:
    cmpwi r0, 0x0
    bne lbl_802D3418
    lwz r3, executing_8049E0F0
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, executing_8049E0F0
    bl stateBusy
    b lbl_802D3418
lbl_802D3374:
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D3398
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D3398:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8049E060
    li r7, 0x5
    li r5, 0x0
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_80460E40@ha
    lis r4, cbForStateCoverClosed@ha
    addi r3, r3, lbl_80460E40@l
    addi r4, r4, cbForStateCoverClosed@l
    bl DVDLowReadDiskID
lbl_802D3418:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: cbForStateReset
asm static void cbForStateReset(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x10
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_802D3460
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D3500
lbl_802D3460:
    cmplwi r3, 0x20
    bne lbl_802D3480
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D3500
lbl_802D3480:
    clrlwi. r0, r3, 31
    beq lbl_802D34E4
    bl __OSGetSystemTime
    li r0, 0x0
    stw r4, lbl_8049E0CC
    lis r31, lbl_80460EA0@ha
    stw r3, lbl_8049E0C8
    addi r3, r31, lbl_80460EA0@l
    stw r0, lbl_8049E0D4
    stw r0, ResumeFromHere_8049E074
    bl OSCreateAlarm
    lis r4, 0x8000
    lis r7, ResetAlarmHandler@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, ResetAlarmHandler@l
    srwi r0, r0, 2
    addi r3, r31, lbl_80460EA0@l
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
    b lbl_802D3500
lbl_802D34E4:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl StampCommand
    lis r3, cbForStateGettingError@ha
    addi r3, r3, cbForStateGettingError@l
    bl DVDLowRequestError
lbl_802D3500:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: cbForStateDownRotation
asm static void cbForStateDownRotation(u32 intType) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D3614
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r30, 0x78(r4)
    b lbl_802D3630
lbl_802D3614:
    lwz r4, lbl_8049E060
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r30, 0x28(r4)
lbl_802D3630:
    bl OSRestoreInterrupts
    cmplwi r30, 0x10
    bne lbl_802D3654
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D3804
lbl_802D3654:
    cmplwi r30, 0x20
    bne lbl_802D3674
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D3804
lbl_802D3674:
    clrlwi. r0, r30, 31
    beq lbl_802D37E8
    lis r3, lbl_80460E40@ha
    li r4, 0x20
    addi r3, r3, lbl_80460E40@l
    bl DCInvalidateRange
    lwz r0, CurrCommand_8049E0E4
    lis r3, stateCoverClosed_CMD@ha
    addi r3, r3, stateCoverClosed_CMD@l
    cmplwi r0, 0x28
    stw r3, lbl_8049E0F4
    bne lbl_802D3740
    li r4, 0x0
    stw r4, lbl_8049E078
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D371C
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r30, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r4, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r30)
    lwz r12, 0x28(r30)
    cmpwi r12, 0x0
    beq lbl_802D36F4
    mr r4, r30
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D36F4:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D3710
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D3710:
    bl stateReady
    li r0, 0x1
    b lbl_802D3720
lbl_802D371C:
    li r0, 0x0
lbl_802D3720:
    cmpwi r0, 0x0
    bne lbl_802D3804
    lwz r3, executing_8049E0F0
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, executing_8049E0F0
    bl stateBusy
    b lbl_802D3804
lbl_802D3740:
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D3764
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D3764:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8049E060
    li r7, 0x5
    li r5, 0x0
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_80460E40@ha
    lis r4, cbForStateCoverClosed@ha
    addi r3, r3, lbl_80460E40@l
    addi r4, r4, cbForStateCoverClosed@l
    bl DVDLowReadDiskID
    b lbl_802D3804
lbl_802D37E8:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl StampCommand
    lis r3, cbForStateGettingError@ha
    addi r3, r3, cbForStateGettingError@l
    bl DVDLowRequestError
lbl_802D3804:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: stateCoverClosed_CMD
asm static void stateCoverClosed_CMD(DVDCommandBlock* block) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x28
    bne lbl_802D38D8
    li r4, 0x0
    stw r4, lbl_8049E078
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D38B4
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r30, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r4, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r30)
    lwz r12, 0x28(r30)
    cmpwi r12, 0x0
    beq lbl_802D388C
    mr r4, r30
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D388C:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D38A8
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D38A8:
    bl stateReady
    li r0, 0x1
    b lbl_802D38B8
lbl_802D38B4:
    li r0, 0x0
lbl_802D38B8:
    cmpwi r0, 0x0
    bne lbl_802D397C
    lwz r3, executing_8049E0F0
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, executing_8049E0F0
    bl stateBusy
    b lbl_802D397C
lbl_802D38D8:
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D38FC
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D38FC:
    lwz r0, lbl_8049E060
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8049E060
    li r7, 0x5
    li r5, 0x0
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_80460E40@ha
    lis r4, cbForStateCoverClosed@ha
    addi r3, r3, lbl_80460E40@l
    addi r4, r4, cbForStateCoverClosed@l
    bl DVDLowReadDiskID
lbl_802D397C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: stateReady
asm static void stateReady(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, PauseFlag_8049E064
    cmpwi r0, 0x0
    beq lbl_802D3C48
    li r3, 0x1
    li r0, 0x0
    stw r3, PausingFlag_8049E068
    stw r0, executing_8049E0F0
    b lbl_802D3F2C
lbl_802D3C48:
    bl __DVDCheckWaitingQueue
    cmpwi r3, 0x0
    bne lbl_802D3C60
    li r0, 0x0
    stw r0, executing_8049E0F0
    b lbl_802D3F2C
lbl_802D3C60:
    bl __DVDPopWaitingQueue
    lwz r0, FatalErrorFlag_8049E06C
    stw r3, executing_8049E0F0
    cmpwi r0, 0x0
    beq lbl_802D3CAC
    li r0, -0x1
    lis r5, DummyCommandBlock_80460DA0@ha
    stw r0, 0xc(r3)
    addi r5, r5, DummyCommandBlock_80460DA0@l
    lwz r4, executing_8049E0F0
    stw r5, executing_8049E0F0
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_802D3CA4
    li r3, -0x1
    mtctr r12
    bctrl
lbl_802D3CA4:
    bl stateReady
    b lbl_802D3F2C
lbl_802D3CAC:
    lwz r0, 0x8(r3)
    stw r0, CurrCommand_8049E0E4
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x20
    beq lbl_802D3CD8
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xe
    beq lbl_802D3CD8
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x23
    bne lbl_802D3CE0
lbl_802D3CD8:
    li r0, 0x0
    stw r0, ResumeFromHere_8049E074
lbl_802D3CE0:
    lwz r0, ResumeFromHere_8049E074
    cmpwi r0, 0x0
    beq lbl_802D3EC8
    lwz r0, ResumeFromHere_8049E074
    cmpwi r0, 0x4
    beq lbl_802D3E20
    bge lbl_802D3D14
    cmpwi r0, 0x2
    beq lbl_802D3D28
    bge lbl_802D3DA4
    cmpwi r0, 0x1
    bge lbl_802D3E9C
    b lbl_802D3EBC
lbl_802D3D14:
    cmpwi r0, 0x8
    bge lbl_802D3EBC
    cmpwi r0, 0x6
    bge lbl_802D3E9C
    b lbl_802D3EAC
lbl_802D3D28:
    li r0, 0xb
    li r4, 0x1
    stw r0, 0xc(r3)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r4, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D3EBC
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D3EBC
    lis r31, CoverAlarm_80460E00@ha
    stw r4, WaitingForCoverOpen_8049E084
    addi r3, r31, CoverAlarm_80460E00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, CoverAlarm_80460E00@l
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
    b lbl_802D3EBC
lbl_802D3DA4:
    li r0, 0x4
    li r4, 0x1
    stw r0, 0xc(r3)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r4, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D3EBC
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D3EBC
    lis r31, CoverAlarm_80460E00@ha
    stw r4, WaitingForCoverOpen_8049E084
    addi r3, r31, CoverAlarm_80460E00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, CoverAlarm_80460E00@l
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
    b lbl_802D3EBC
lbl_802D3E20:
    li r0, 0x5
    li r4, 0x1
    stw r0, 0xc(r3)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r4, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D3EBC
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D3EBC
    lis r31, CoverAlarm_80460E00@ha
    stw r4, WaitingForCoverOpen_8049E084
    addi r3, r31, CoverAlarm_80460E00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, CoverAlarm_80460E00@l
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
    b lbl_802D3EBC
lbl_802D3E9C:
    li r0, 0x3
    stw r0, 0xc(r3)
    bl stateCoverClosed
    b lbl_802D3EBC
lbl_802D3EAC:
    lis r4, cbForStoreErrorCode1@ha
    lwz r3, CancelLastError_8049E0DC
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
lbl_802D3EBC:
    li r0, 0x0
    stw r0, ResumeFromHere_8049E074
    b lbl_802D3F2C
lbl_802D3EC8:
    lwz r0, MotorState_8049E0D0
    cmpwi r0, 0x1
    beq lbl_802D3F28
    bge lbl_802D3EE4
    cmpwi r0, 0x0
    bge lbl_802D3F14
    b lbl_802D3F28
lbl_802D3EE4:
    cmpwi r0, 0x3
    bge lbl_802D3F28
    lwz r0, MotorStopped_8049E08C
    cmpwi r0, 0x0
    beq lbl_802D3F04
    li r0, 0xc
    stw r0, 0xc(r3)
    b lbl_802D3F2C
lbl_802D3F04:
    li r0, 0x3
    stw r0, 0xc(r3)
    bl stateCoverClosed
    b lbl_802D3F2C
lbl_802D3F14:
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, executing_8049E0F0
    bl stateBusy
    b lbl_802D3F2C
lbl_802D3F28:
    bl stateCoverClosed
lbl_802D3F2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: stateBusy
asm static void stateBusy(DVDCommandBlock* block) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r4, stateBusy@ha
    mr r29, r3
    addi r4, r4, stateBusy@l
    stw r4, lbl_8049E0F4
    lwz r30, 0x8(r3)
    cmplwi r30, 0x2a
    bgt lbl_802D400C
    lis r4, jumptable_80378D64@ha
    slwi r0, r30, 2
    addi r4, r4, jumptable_80378D64@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r26, 0x14(r3)
    lwz r27, 0x10(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D3FAC
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D3FAC:
    lwz r0, lbl_8049E060
    lis r28, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r28, r28, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8049E060
    mulli r3, r3, 0x14
    add r4, r28, r4
    stw r30, 0x1c(r4)
    add r3, r28, r3
    mulli r0, r0, 0x14
    stw r27, 0x20(r3)
    add r3, r28, r0
    stw r26, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r28, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
lbl_802D400C:
    lwz r0, 0x8(r29)
    cmplwi r0, 0x2a
    bgt lbl_802D44C0
    lis r3, jumptable_80378CB8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80378CB8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    li r0, 0x20
    lis r4, cbForStateBusy@ha
    stw r0, 0x1c(r29)
    addi r4, r4, cbForStateBusy@l
    lwz r3, 0x18(r29)
    bl DVDLowReadDiskID
    b lbl_802D44D8
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_802D4098
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r4, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    li r0, 0x0
    stw r3, executing_8049E0F0
    stw r0, 0xc(r4)
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_802D4090
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4090:
    bl stateReady
    b lbl_802D44D8
lbl_802D4098:
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lwz r4, 0x20(r29)
    lis r0, 0x8
    lwz r3, 0x14(r29)
    subf r30, r4, r3
    cmplw r30, r0
    ble lbl_802D40BC
    lis r30, 0x8
lbl_802D40BC:
    lwz r0, 0x20(r29)
    lwz r3, 0x10(r29)
    srwi r0, r0, 2
    stw r30, 0x1c(r29)
    lwz r26, 0x8(r29)
    add r27, r3, r0
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D40F0
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D40F0:
    lwz r0, lbl_8049E060
    lis r28, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r28, r28, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8049E060
    mulli r3, r3, 0x14
    add r4, r28, r4
    stw r26, 0x1c(r4)
    add r3, r28, r3
    mulli r0, r0, 0x14
    stw r27, 0x20(r3)
    add r3, r28, r0
    stw r30, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r28, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r3, 0x20(r29)
    lis r6, cbForStateBusy@ha
    lwz r7, 0x18(r29)
    addi r6, r6, cbForStateBusy@l
    srwi r0, r3, 2
    lwz r5, 0x10(r29)
    lwz r4, 0x1c(r29)
    add r3, r7, r3
    add r5, r5, r0
    bl DVDLowRead
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lis r4, cbForStateBusy@ha
    lwz r3, 0x10(r29)
    addi r4, r4, cbForStateBusy@l
    bl DVDLowSeek
    b lbl_802D44D8
    lis r5, cbForStateBusy@ha
    li r3, 0x0
    addi r5, r5, cbForStateBusy@l
    li r4, 0x0
    bl DVDLowStopMotor
    b lbl_802D44D8
    lis r5, cbForStateBusy@ha
    li r3, 0x0
    addi r5, r5, cbForStateBusy@l
    li r4, 0x0
    bl DVDLowStopMotor
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lis r5, cbForStateBusy@ha
    lwz r3, 0x10(r29)
    lwz r4, 0x14(r29)
    addi r5, r5, cbForStateBusy@l
    bl DVDLowAudioBufferConfig
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    li r0, 0x20
    lis r4, cbForStateBusy@ha
    stw r0, 0x1c(r29)
    addi r4, r4, cbForStateBusy@l
    lwz r3, 0x18(r29)
    bl DVDLowClosePartition
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lis r5, cbForStateBusy@ha
    li r3, 0x0
    addi r5, r5, cbForStateBusy@l
    li r4, 0x0
    bl DVDLowStopMotor
    b lbl_802D44D8
    li r3, 0x1
    bl DVDLowSetSpinupFlag
    lis r3, cbForStateBusy@ha
    addi r3, r3, cbForStateBusy@l
    bl DVDLowReset
    b lbl_802D44D8
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_802D4288
    lis r3, DummyCommandBlock_80460DA0@ha
    lwz r4, executing_8049E0F0
    addi r3, r3, DummyCommandBlock_80460DA0@l
    li r0, 0x0
    stw r3, executing_8049E0F0
    stw r0, 0xc(r4)
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_802D4280
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4280:
    bl stateReady
    b lbl_802D44D8
lbl_802D4288:
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lwz r4, 0x20(r29)
    lis r0, 0x8
    lwz r3, 0x14(r29)
    subf r30, r4, r3
    cmplw r30, r0
    ble lbl_802D42AC
    lis r30, 0x8
lbl_802D42AC:
    lwz r0, 0x20(r29)
    lwz r3, 0x10(r29)
    srwi r0, r0, 2
    stw r30, 0x1c(r29)
    lwz r26, 0x8(r29)
    add r27, r3, r0
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_802D42E0
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D42E0:
    lwz r0, lbl_8049E060
    lis r28, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r28, r28, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8049E060
    mulli r3, r3, 0x14
    add r4, r28, r4
    stw r26, 0x1c(r4)
    add r3, r28, r3
    mulli r0, r0, 0x14
    stw r27, 0x20(r3)
    add r3, r28, r0
    stw r30, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r28, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r3, 0x20(r29)
    lis r6, cbForStateBusy@ha
    lwz r7, 0x18(r29)
    addi r6, r6, cbForStateBusy@l
    srwi r0, r3, 2
    lwz r5, 0x10(r29)
    lwz r4, 0x1c(r29)
    add r3, r7, r3
    add r5, r5, r0
    bl DVDLowUnencryptedRead
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lis r8, cbForStateBusy@ha
    lwz r3, 0x10(r29)
    lwz r7, 0x18(r29)
    addi r8, r8, cbForStateBusy@l
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl DVDLowOpenPartition
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lis r3, cbForStateBusy@ha
    addi r3, r3, cbForStateBusy@l
    bl fn_802D7A9C
    b lbl_802D44D8
    lis r3, cbForStateBusy@ha
    addi r3, r3, cbForStateBusy@l
    bl fn_802D8B7C
    b lbl_802D44D8
    lis r3, cbForStateBusy@ha
    addi r3, r3, cbForStateBusy@l
    bl fn_802D8B7C
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lis r4, cbForStateBusy@ha
    lis r3, 0x2
    addi r4, r4, cbForStateBusy@l
    bl DVDLowSetMaximumRotation
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lis r3, lbl_80460E40@ha
    li r0, 0x20
    addi r3, r3, lbl_80460E40@l
    lis r4, cbForStateBusy@ha
    stw r3, 0x18(r29)
    addi r4, r4, cbForStateBusy@l
    stw r0, 0x1c(r29)
    bl DVDLowReadDiskID
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lwz r10, 0x18(r29)
    lwz r0, 0x3a0(r10)
    cmpwi r0, 0x0
    bne lbl_802D4458
    lwz r0, 0x4dc0(r10)
    cmpwi r0, 0x0
    bne lbl_802D4458
    lis r6, cbForStateBusy@ha
    lwz r3, 0x10(r29)
    addi r4, r10, 0x3a0
    addi r5, r10, 0x4dc0
    addi r6, r6, cbForStateBusy@l
    bl fn_802D75F8
    b lbl_802D44D8
lbl_802D4458:
    lis r3, cbForStateBusy@ha
    mr r4, r10
    addi r3, r3, cbForStateBusy@l
    addi r5, r10, 0x3a0
    stw r3, 0x8(r1)
    addi r6, r10, 0x3c0
    addi r7, r10, 0x4dc0
    addi r8, r10, 0x4de0
    lwz r3, 0x10(r29)
    addi r9, r10, 0x5de0
    addi r10, r10, 0x5e00
    bl DVDLowGetNoDiscOpenPartitionParams
    b lbl_802D44D8
    li r3, 0x0
    bl DVDLowClearCoverInterrupt
    lwz r8, 0x18(r29)
    lis r9, cbForStateBusy@ha
    lwz r3, 0x10(r29)
    addi r9, r9, cbForStateBusy@l
    lwz r5, 0x3a0(r8)
    addi r4, r8, 0x2c0
    lwz r7, 0x4dc0(r8)
    addi r6, r8, 0x3c0
    addi r8, r8, 0x4de0
    bl DVDLowOpenPartitionWithTmdAndTicketView
    b lbl_802D44D8
lbl_802D44C0:
    lwz r12, lbl_8049D008
    lis r4, cbForStateBusy@ha
    mr r3, r29
    addi r4, r4, cbForStateBusy@l
    mtctr r12
    bctrl
lbl_802D44D8:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: cbForStateBusy
asm static void cbForStateBusy(u32 intType) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lis r30, __DVDTicketViewBuffer_8045C280@ha
    addi r30, r30, __DVDTicketViewBuffer_8045C280@l
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    cmpwi r0, 0x0
    bne lbl_802D4534
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_802D4550
lbl_802D4534:
    lwz r4, lbl_8049E060
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r31, 0x28(r4)
lbl_802D4550:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_802D4574
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4568
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D4EB4
lbl_802D4574:
    cmplwi r31, 0x20
    bne lbl_802D4594
    lis r3, 0x123
    lis r4, cbForStoreErrorCode2@ha
    addi r3, r3, 0x4569
    addi r4, r4, cbForStoreErrorCode2@l
    bl __DVDStoreErrorCode
    b lbl_802D4EB4
lbl_802D4594:
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x3
    beq lbl_802D45AC
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xf
    bne lbl_802D46F0
lbl_802D45AC:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_802D45CC
    lis r3, 0x123
    lis r4, cbForStoreErrorCode1@ha
    addi r3, r3, 0x4567
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
    b lbl_802D4EB4
lbl_802D45CC:
    li r0, 0x0
    stw r0, lbl_8049E078
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xf
    bne lbl_802D45E8
    li r0, 0x1
    stw r0, lbl_8049E0D4
lbl_802D45E8:
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D465C
    lwz r29, executing_8049E0F0
    addi r3, r30, 0x4b20
    li r0, 0x7
    li r4, 0x0
    stw r0, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r29)
    lwz r12, 0x28(r29)
    cmpwi r12, 0x0
    beq lbl_802D4634
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D4634:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D4650
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4650:
    bl stateReady
    li r0, 0x1
    b lbl_802D4660
lbl_802D465C:
    li r0, 0x0
lbl_802D4660:
    cmpwi r0, 0x0
    bne lbl_802D4EB4
    lwz r0, MotorState_8049E0D0
    cmplwi r0, 0x2
    beq lbl_802D4EB4
    lwz r4, executing_8049E0F0
    li r0, 0x7
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, WaitingForCoverOpen_8049E084
    stw r3, MotorState_8049E0D0
    cmpwi r0, 0x0
    bne lbl_802D4EB4
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D4EB4
    stw r3, WaitingForCoverOpen_8049E084
    addi r3, r30, 0x4b80
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, CoverAlarmHandler@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r30, 0x4b80
    mulhwu r0, r4, r0
    addi r9, r9, CoverAlarmHandler@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl OSSetPeriodicAlarm
    b lbl_802D4EB4
lbl_802D46F0:
    lwz r4, CurrCommand_8049E0E4
    cmplwi r4, 0x1
    beq lbl_802D471C
    cmplwi r4, 0x4
    beq lbl_802D471C
    cmplwi r4, 0x5
    beq lbl_802D471C
    cmplwi r4, 0x21
    beq lbl_802D471C
    cmplwi r4, 0xe
    bne lbl_802D4724
lbl_802D471C:
    li r0, 0x1
    b lbl_802D473C
lbl_802D4724:
    lwz r0, lbl_8049D014
    cmplw r4, r0
    bne lbl_802D4738
    li r0, 0x1
    b lbl_802D473C
lbl_802D4738:
    li r0, 0x0
lbl_802D473C:
    cmpwi r0, 0x0
    beq lbl_802D476C
    andi. r0, r31, 0x9
    beq lbl_802D4758
    lwz r3, executing_8049E0F0
    lwz r4, 0x1c(r3)
    b lbl_802D475C
lbl_802D4758:
    li r4, 0x0
lbl_802D475C:
    lwz r3, executing_8049E0F0
    lwz r0, 0x20(r3)
    add r0, r0, r4
    stw r0, 0x20(r3)
lbl_802D476C:
    lwz r0, lbl_8049E080
    cmpwi r0, 0x0
    beq lbl_802D47D8
    lwz r31, executing_8049E0F0
    li r4, 0x0
    addi r3, r30, 0x4b20
    stw r4, lbl_8049E080
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D47B4
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D47B4:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D47D0
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D47D0:
    bl stateReady
    b lbl_802D4EB4
lbl_802D47D8:
    clrlwi. r0, r31, 31
    beq lbl_802D4D74
    li r29, 0x0
    stw r29, lbl_8049E078
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x10
    bne lbl_802D4850
    lwz r3, executing_8049E0F0
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802D4810
    li r0, 0x2
    stw r0, MotorState_8049E0D0
    b lbl_802D4818
lbl_802D4810:
    li r0, 0x1
    stw r0, MotorState_8049E0D0
lbl_802D4818:
    lwz r31, executing_8049E0F0
    addi r3, r30, 0x4b20
    li r0, 0x0
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D4848
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4848:
    bl stateReady
    b lbl_802D4EB4
lbl_802D4850:
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x20
    bne lbl_802D48A4
    bl __OSGetSystemTime
    lwz r31, executing_8049E0F0
    addi r0, r30, 0x4b20
    stw r4, lbl_8049E0CC
    stw r3, lbl_8049E0C8
    stw r29, lbl_8049E0D4
    stw r29, ResumeFromHere_8049E074
    stw r0, executing_8049E0F0
    stw r29, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D489C
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D489C:
    bl stateReady
    b lbl_802D4EB4
lbl_802D48A4:
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D4910
    lwz r31, executing_8049E0F0
    addi r3, r30, 0x4b20
    stw r29, ResumeFromHere_8049E074
    li r0, 0xa
    stw r29, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D48E8
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D48E8:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D4904
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4904:
    bl stateReady
    li r0, 0x1
    b lbl_802D4914
lbl_802D4910:
    li r0, 0x0
lbl_802D4914:
    cmpwi r0, 0x0
    bne lbl_802D4EB4
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x26
    bne lbl_802D49D8
    bl DVDLowGetCoverRegister
    mr r31, r3
    bl __OSGetSystemTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r6, 0xf8(r6)
    addi r7, r5, 0x4dd3
    lwz r8, lbl_8049E0C8
    li r0, 0x0
    srwi r5, r6, 2
    lwz r9, lbl_8049E0CC
    mulhwu r6, r7, r5
    subfc r4, r9, r4
    xoris r5, r0, 0x8000
    subfe r0, r8, r3
    xoris r0, r0, 0x8000
    srwi r3, r6, 6
    mulli r3, r3, 0x64
    subfc r3, r3, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_802D498C
    li r3, 0x0
    b lbl_802D49A0
lbl_802D498C:
    clrlwi. r0, r31, 31
    beq lbl_802D499C
    li r3, 0x1
    b lbl_802D49A0
lbl_802D499C:
    li r3, 0x2
lbl_802D49A0:
    lwz r31, executing_8049E0F0
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, executing_8049E0F0
    stw r0, 0xc(r31)
    stw r3, 0x10(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D49D0
    mr r4, r31
    mtctr r12
    bctrl
lbl_802D49D0:
    bl stateReady
    b lbl_802D4EB4
lbl_802D49D8:
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x24
    bne lbl_802D4A50
    bl DVDLowGetCoverRegister
    extrwi. r0, r3, 1, 29
    bne lbl_802D49F8
    clrlwi. r0, r3, 31
    beq lbl_802D4A00
lbl_802D49F8:
    li r3, 0x0
    b lbl_802D4A18
lbl_802D4A00:
    lwz r0, ResumeFromHere_8049E074
    cmpwi r0, 0x0
    beq lbl_802D4A14
    li r3, 0x0
    b lbl_802D4A18
lbl_802D4A14:
    li r3, 0x1
lbl_802D4A18:
    lwz r31, executing_8049E0F0
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, executing_8049E0F0
    stw r0, 0xc(r31)
    stw r3, 0x10(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D4A48
    mr r4, r31
    mtctr r12
    bctrl
lbl_802D4A48:
    bl stateReady
    b lbl_802D4EB4
lbl_802D4A50:
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x28
    bne lbl_802D4B68
    lwz r4, executing_8049E0F0
    addi r3, r30, 0x4bc0
    lwz r4, 0x24(r4)
    bl fn_802D6678
    cmpwi r3, 0x0
    beq lbl_802D4ACC
    lwz r3, IDShouldBe_8049E0EC
    addi r4, r30, 0x4bc0
    li r5, 0x20
    bl memcpy
    lwz r31, executing_8049E0F0
    addi r4, r30, 0x4b20
    li r3, 0x0
    li r0, 0x1
    stw r4, executing_8049E0F0
    stw r3, 0xc(r31)
    stw r0, 0x10(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D4ABC
    mr r4, r31
    li r3, 0x1
    mtctr r12
    bctrl
lbl_802D4ABC:
    li r0, 0x0
    stw r0, lbl_8049E078
    bl stateReady
    b lbl_802D4EB4
lbl_802D4ACC:
    bl OSDisableInterrupts
    lwz r0, lbl_8049E060
    mr r30, r3
    cmplwi r0, 0x5
    blt lbl_802D4AE8
    li r0, 0x0
    stw r0, lbl_8049E060
lbl_802D4AE8:
    lwz r0, lbl_8049E060
    lis r31, __ErrorInfo@ha
    lwz r3, lbl_8049E060
    addi r31, r31, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8049E060
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r31, r5
    stw r6, 0x1c(r5)
    add r3, r31, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r31, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8049E060
    lwz r4, lbl_8049E060
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8049E060
    add r4, r31, r5
    stw r3, 0x2c(r4)
    mr r3, r30
    bl OSRestoreInterrupts
    lis r5, cbForStateCheckID1@ha
    li r3, 0x0
    addi r5, r5, cbForStateCheckID1@l
    li r4, 0x0
    bl DVDLowStopMotor
    b lbl_802D4EB4
lbl_802D4B68:
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x29
    bne lbl_802D4BC4
    lwz r3, executing_8049E0F0
    lwz r4, 0x18(r3)
    lwz r0, 0x5de0(r4)
    cmpwi r0, 0x0
    bne lbl_802D4B90
    bl stateBusy
    b lbl_802D4EB4
lbl_802D4B90:
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, executing_8049E0F0
    stw r0, 0xc(r3)
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_802D4BBC
    mr r4, r3
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4BBC:
    bl stateReady
    b lbl_802D4EB4
lbl_802D4BC4:
    lwz r4, CurrCommand_8049E0E4
    cmplwi r4, 0x1
    beq lbl_802D4BF0
    cmplwi r4, 0x4
    beq lbl_802D4BF0
    cmplwi r4, 0x5
    beq lbl_802D4BF0
    cmplwi r4, 0x21
    beq lbl_802D4BF0
    cmplwi r4, 0xe
    bne lbl_802D4BF8
lbl_802D4BF0:
    li r0, 0x1
    b lbl_802D4C10
lbl_802D4BF8:
    lwz r0, lbl_8049D014
    cmplw r4, r0
    bne lbl_802D4C0C
    li r0, 0x1
    b lbl_802D4C10
lbl_802D4C0C:
    li r0, 0x0
lbl_802D4C10:
    cmpwi r0, 0x0
    beq lbl_802D4C68
    lwz r3, executing_8049E0F0
    lwz r4, 0x20(r3)
    lwz r0, 0x14(r3)
    cmplw r4, r0
    beq lbl_802D4C34
    bl stateBusy
    b lbl_802D4EB4
lbl_802D4C34:
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, executing_8049E0F0
    stw r0, 0xc(r3)
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_802D4C60
    mr r4, r3
    lwz r3, 0x20(r3)
    mtctr r12
    bctrl
lbl_802D4C60:
    bl stateReady
    b lbl_802D4EB4
lbl_802D4C68:
    lwz r4, CurrCommand_8049E0E4
    cmplwi r4, 0x9
    beq lbl_802D4C8C
    cmplwi r4, 0xa
    beq lbl_802D4C8C
    cmplwi r4, 0xb
    beq lbl_802D4C8C
    cmplwi r4, 0xc
    bne lbl_802D4C94
lbl_802D4C8C:
    li r0, 0x1
    b lbl_802D4CD8
lbl_802D4C94:
    lis r3, lbl_80378E10@ha
    lwzu r0, lbl_80378E10@l(r3)
    cmplw r4, r0
    bne lbl_802D4CAC
    li r0, 0x1
    b lbl_802D4CD8
lbl_802D4CAC:
    lwz r0, 0x4(r3)
    cmplw r4, r0
    bne lbl_802D4CC0
    li r0, 0x1
    b lbl_802D4CD8
lbl_802D4CC0:
    lwz r0, 0x8(r3)
    cmplw r4, r0
    bne lbl_802D4CD4
    li r0, 0x1
    b lbl_802D4CD8
lbl_802D4CD4:
    li r0, 0x0
lbl_802D4CD8:
    cmpwi r0, 0x0
    beq lbl_802D4D3C
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xb
    beq lbl_802D4CF8
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xa
    bne lbl_802D4D04
lbl_802D4CF8:
    bl DVDLowGetImmBufferReg
    slwi r3, r3, 2
    b lbl_802D4D08
lbl_802D4D04:
    bl DVDLowGetImmBufferReg
lbl_802D4D08:
    lwz r31, executing_8049E0F0
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D4D34
    mr r4, r31
    mtctr r12
    bctrl
lbl_802D4D34:
    bl stateReady
    b lbl_802D4EB4
lbl_802D4D3C:
    lwz r31, executing_8049E0F0
    addi r3, r30, 0x4b20
    li r0, 0x0
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D4D6C
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4D6C:
    bl stateReady
    b lbl_802D4EB4
lbl_802D4D74:
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xe
    bne lbl_802D4D98
    lis r3, 0x123
    lis r4, cbForStoreErrorCode1@ha
    addi r3, r3, 0x4567
    addi r4, r4, cbForStoreErrorCode1@l
    bl __DVDStoreErrorCode
    b lbl_802D4EB4
lbl_802D4D98:
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x1
    beq lbl_802D4DD4
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x4
    beq lbl_802D4DD4
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x5
    beq lbl_802D4DD4
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0x21
    beq lbl_802D4DD4
    lwz r0, CurrCommand_8049E0E4
    cmplwi r0, 0xe
    bne lbl_802D4E98
lbl_802D4DD4:
    lwz r29, executing_8049E0F0
    lwz r3, 0x20(r29)
    lwz r0, 0x14(r29)
    cmplw r3, r0
    bne lbl_802D4E98
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D4E54
    li r4, 0x0
    addi r3, r30, 0x4b20
    stw r4, ResumeFromHere_8049E074
    li r0, 0xa
    stw r4, lbl_8049E070
    stw r3, executing_8049E0F0
    stw r0, 0xc(r29)
    lwz r12, 0x28(r29)
    cmpwi r12, 0x0
    beq lbl_802D4E2C
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D4E2C:
    lwz r12, lbl_8049E0E0
    cmpwi r12, 0x0
    beq lbl_802D4E48
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D4E48:
    bl stateReady
    li r0, 0x1
    b lbl_802D4E58
lbl_802D4E54:
    li r0, 0x0
lbl_802D4E58:
    cmpwi r0, 0x0
    bne lbl_802D4EB4
    lwz r31, executing_8049E0F0
    addi r3, r30, 0x4b20
    li r0, 0x0
    stw r3, executing_8049E0F0
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_802D4E90
    mr r4, r31
    lwz r3, 0x20(r31)
    mtctr r12
    bctrl
lbl_802D4E90:
    bl stateReady
    b lbl_802D4EB4
lbl_802D4E98:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl StampCommand
    lis r3, cbForStateGettingError@ha
    addi r3, r3, cbForStateGettingError@l
    bl DVDLowRequestError
lbl_802D4EB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: DVDReadAbsAsyncPrio
asm BOOL DVDReadAbsAsyncPrio(DVDCommandBlock* block, void* dst, u32 size,
                         u32 offset, DVDCommandCallback callback, s32 prio) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r9, 0x1
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r9, 0x8(r3)
    stw r4, 0x18(r3)
    stw r5, 0x14(r3)
    stw r6, 0x10(r3)
    stw r0, 0x20(r3)
    stw r7, 0x28(r3)
    lwz r0, lbl_8049D004
    cmpwi r0, 0x0
    beq lbl_802D4F50
    cmplwi r9, 0x1
    beq lbl_802D4F44
    cmplwi r9, 0x4
    beq lbl_802D4F44
    cmplwi r9, 0x5
    beq lbl_802D4F44
    cmplwi r9, 0x21
    beq lbl_802D4F44
    cmplwi r9, 0xe
    bne lbl_802D4F50
lbl_802D4F44:
    lwz r3, 0x18(r3)
    lwz r4, 0x14(r29)
    bl DCInvalidateRange
lbl_802D4F50:
    bl OSDisableInterrupts
    li r0, 0x2
    mr r30, r3
    stw r0, 0xc(r29)
    mr r3, r31
    mr r4, r29
    bl __DVDPushWaitingQueue
    lwz r0, executing_8049E0F0
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_802D4F8C
    lwz r0, PauseFlag_8049E064
    cmpwi r0, 0x0
    bne lbl_802D4F8C
    bl stateReady
lbl_802D4F8C:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: DVDInquiryAsync
asm BOOL DVDInquiryAsync(DVDCommandBlock* block, DVDDriveInfo* info,
                     DVDCommandCallback callback) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0xe
    li r6, 0x20
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r7, 0x8(r3)
    stw r4, 0x18(r3)
    stw r6, 0x14(r3)
    stw r0, 0x20(r3)
    stw r5, 0x28(r3)
    lwz r0, lbl_8049D004
    cmpwi r0, 0x0
    beq lbl_802D502C
    cmplwi r7, 0x1
    beq lbl_802D5020
    cmplwi r7, 0x4
    beq lbl_802D5020
    cmplwi r7, 0x5
    beq lbl_802D5020
    cmplwi r7, 0x21
    beq lbl_802D5020
    cmplwi r7, 0xe
    bne lbl_802D502C
lbl_802D5020:
    lwz r3, 0x18(r3)
    lwz r4, 0x14(r31)
    bl DCInvalidateRange
lbl_802D502C:
    bl OSDisableInterrupts
    li r0, 0x2
    mr r30, r3
    stw r0, 0xc(r31)
    mr r4, r31
    li r3, 0x2
    bl __DVDPushWaitingQueue
    lwz r0, executing_8049E0F0
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_802D5068
    lwz r0, PauseFlag_8049E064
    cmpwi r0, 0x0
    bne lbl_802D5068
    bl stateReady
lbl_802D5068:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: DVDResume
asm void DVDResume(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    li r4, 0x0
    mr r31, r3
    stw r4, PauseFlag_8049E064
    lwz r0, PausingFlag_8049E068
    cmpwi r0, 0x0
    beq lbl_802D5234
    stw r4, PausingFlag_8049E068
    bl stateReady
lbl_802D5234:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: DVDCancelAsync
asm BOOL DVDCancelAsync(DVDCommandBlock* block, DVDCommandCallback callback) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r4, 0xc(r29)
    mr r31, r3
    addi r0, r4, 0x1
    cmplwi r0, 0xd
    bgt lbl_802D558C
    lis r4, jumptable_80378EC8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80378EC8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r30, 0x0
    beq lbl_802D558C
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_802D558C
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D52D8
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802D5598
lbl_802D52D8:
    li r0, 0x1
    stw r30, lbl_8049E0E0
    stw r0, lbl_8049E070
    lwz r0, 0x8(r29)
    cmplwi r0, 0x4
    beq lbl_802D5318
    cmplwi r0, 0x21
    beq lbl_802D5318
    cmplwi r0, 0x22
    beq lbl_802D5318
    cmplwi r0, 0x29
    beq lbl_802D5318
    cmplwi r0, 0x2a
    beq lbl_802D5318
    cmplwi r0, 0x1
    bne lbl_802D558C
lbl_802D5318:
    li r0, 0x1
    stw r0, lbl_8049E080
    b lbl_802D558C
    mr r3, r29
    bl fn_802D5C34
    lwz r12, 0x28(r29)
    li r0, 0xa
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_802D5350
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D5350:
    cmpwi r30, 0x0
    beq lbl_802D558C
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_802D558C
    lwz r0, 0x8(r29)
    cmplwi r0, 0x2a
    bgt lbl_802D5414
    lis r3, jumptable_80378E1C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80378E1C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r30, 0x0
    beq lbl_802D558C
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_802D558C
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_802D5414
    lis r3, DummyCommandBlock_80460DA0@ha
    li r0, 0xa
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r3, executing_8049E0F0
    lwz r12, 0x28(r29)
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_802D53F0
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D53F0:
    cmpwi r30, 0x0
    beq lbl_802D540C
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D540C:
    bl stateReady
    b lbl_802D558C
lbl_802D5414:
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D5430
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802D5598
lbl_802D5430:
    li r0, 0x1
    stw r30, lbl_8049E0E0
    stw r0, lbl_8049E070
    b lbl_802D558C
    lwz r0, WaitingForCoverClose_8049E088
    cmpwi r0, 0x0
    bne lbl_802D5464
    lwz r0, WaitingForCoverOpen_8049E084
    cmpwi r0, 0x0
    bne lbl_802D5464
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802D5598
lbl_802D5464:
    lwz r0, WaitingForCoverOpen_8049E084
    cmpwi r0, 0x0
    beq lbl_802D5484
    lis r3, CoverAlarm_80460E00@ha
    addi r3, r3, CoverAlarm_80460E00@l
    bl OSCancelAlarm
    li r0, 0x0
    stw r0, WaitingForCoverOpen_8049E084
lbl_802D5484:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x4
    bne lbl_802D5498
    li r0, 0x3
    stw r0, ResumeFromHere_8049E074
lbl_802D5498:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x5
    bne lbl_802D54AC
    li r0, 0x4
    stw r0, ResumeFromHere_8049E074
lbl_802D54AC:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x6
    bne lbl_802D54C0
    li r0, 0x1
    stw r0, ResumeFromHere_8049E074
lbl_802D54C0:
    lwz r0, 0xc(r29)
    cmpwi r0, 0xb
    bne lbl_802D54D4
    li r0, 0x2
    stw r0, ResumeFromHere_8049E074
lbl_802D54D4:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x7
    bne lbl_802D54E8
    li r0, 0x7
    stw r0, ResumeFromHere_8049E074
lbl_802D54E8:
    lis r3, DummyCommandBlock_80460DA0@ha
    li r0, 0xa
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r3, executing_8049E0F0
    lwz r12, 0x28(r29)
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_802D5518
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D5518:
    cmpwi r30, 0x0
    beq lbl_802D5534
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D5534:
    bl stateReady
    b lbl_802D558C
    lis r3, DummyCommandBlock_80460DA0@ha
    li r0, 0xa
    addi r3, r3, DummyCommandBlock_80460DA0@l
    stw r3, executing_8049E0F0
    lwz r12, 0x28(r29)
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_802D556C
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl
lbl_802D556C:
    cmpwi r30, 0x0
    beq lbl_802D5588
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802D5588:
    bl stateReady
lbl_802D558C:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802D5598:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802D55B4
asm int fn_802D55B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, cbForCancelSync@ha
    stw r0, 0x14(r1)
    addi r4, r4, cbForCancelSync@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl DVDCancelAsync
    cmpwi r3, 0x0
    bne lbl_802D55E8
    li r3, -0x1
    b lbl_802D5678
lbl_802D55E8:
    bl OSDisableInterrupts
    mr r31, r3
lbl_802D55F0:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_802D566C
    cmpwi r0, -0x1
    beq lbl_802D566C
    cmpwi r0, 0xa
    beq lbl_802D566C
    cmpwi r0, 0x3
    bne lbl_802D5660
    lwz r0, 0x8(r30)
    cmplwi r0, 0x4
    beq lbl_802D566C
    cmplwi r0, 0x5
    beq lbl_802D566C
    cmplwi r0, 0xd
    beq lbl_802D566C
    cmplwi r0, 0x21
    beq lbl_802D566C
    cmplwi r0, 0x22
    beq lbl_802D566C
    cmplwi r0, 0x29
    beq lbl_802D566C
    cmplwi r0, 0x2a
    beq lbl_802D566C
    cmplwi r0, 0xf
    beq lbl_802D566C
    cmplwi r0, 0x25
    beq lbl_802D566C
lbl_802D5660:
    la r3, __DVDThreadQueue
    bl OSSleepThread
    b lbl_802D55F0
lbl_802D566C:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_802D5678:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __BS2DVDLowCallback
asm static void __BS2DVDLowCallback(u32 intType) {
    nofralloc
    lis r3, 0x8000
    blr
}

// asm_to_cpp: fn_802D56A0
asm int fn_802D56A0() {
    nofralloc
    stw r3, lbl_8049E0A0
    blr
}

// asm_to_cpp: __DVDGetCoverStatus
asm u32 __DVDGetCoverStatus(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, fn_802D56A0@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r3, r3, fn_802D56A0@l
    stw r31, 0xc(r1)
    stw r0, lbl_8049E0A0
    bl fn_802D8B7C
lbl_802D56CC:
    lwz r0, lbl_8049E0A0
    cmpwi r0, 0x0
    beq lbl_802D56CC
    lwz r0, lbl_8049E0A0
    clrlwi. r0, r0, 31
    bne lbl_802D56EC
    li r3, 0x0
    b lbl_802D575C
lbl_802D56EC:
    bl DVDLowGetCoverRegister
    mr r31, r3
    bl __OSGetSystemTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r6, 0xf8(r6)
    addi r7, r5, 0x4dd3
    lwz r8, lbl_8049E0C8
    li r0, 0x0
    srwi r5, r6, 2
    lwz r9, lbl_8049E0CC
    mulhwu r6, r7, r5
    subfc r4, r9, r4
    xoris r5, r0, 0x8000
    subfe r0, r8, r3
    xoris r0, r0, 0x8000
    srwi r3, r6, 6
    mulli r3, r3, 0x64
    subfc r3, r3, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_802D5750
    li r3, 0x0
    b lbl_802D575C
lbl_802D5750:
    clrlwi r0, r31, 31
    neg r3, r0
    addi r3, r3, 0x2
lbl_802D575C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802D5770
asm int fn_802D5770() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, lbl_8049E0A0
    bl DVDLowSetSpinupFlag
    lis r3, fn_802D56A0@ha
    addi r3, r3, fn_802D56A0@l
    bl DVDLowReset
lbl_802D5798:
    lwz r0, lbl_8049E0A0
    cmpwi r0, 0x0
    beq lbl_802D5798
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __DVDPrepareResetAsync
asm void __DVDPrepareResetAsync(DVDCommandCallback callback) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    mr r29, r3
    bl __DVDClearWaitingQueue
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D57F0
    stw r31, lbl_8049E0E0
    b lbl_802D58AC
lbl_802D57F0:
    lwz r3, executing_8049E0F0
    cmpwi r3, 0x0
    beq lbl_802D5804
    li r0, 0x0
    stw r0, 0x28(r3)
lbl_802D5804:
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, executing_8049E0F0
    li r4, 0x1
    stw r4, PauseFlag_8049E064
    cmpwi r0, 0x0
    bne lbl_802D5828
    stw r4, PausingFlag_8049E068
lbl_802D5828:
    bl OSRestoreInterrupts
    b lbl_802D5838
lbl_802D5830:
    li r4, 0x0
    bl DVDCancelAsync
lbl_802D5838:
    bl __DVDPopWaitingQueue
    cmpwi r3, 0x0
    bne lbl_802D5830
    lwz r3, executing_8049E0F0
    cmpwi r3, 0x0
    beq lbl_802D585C
    mr r4, r31
    bl DVDCancelAsync
    b lbl_802D5878
lbl_802D585C:
    cmpwi r31, 0x0
    beq lbl_802D5878
    mr r12, r31
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802D5878:
    bl OSDisableInterrupts
    li r4, 0x0
    mr r31, r3
    stw r4, PauseFlag_8049E064
    lwz r0, PausingFlag_8049E068
    cmpwi r0, 0x0
    beq lbl_802D589C
    stw r4, PausingFlag_8049E068
    bl stateReady
lbl_802D589C:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
lbl_802D58AC:
    mr r3, r29
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __DVDPrepareReset
asm void __DVDPrepareReset(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    li r31, 0x0
    stw r31, lbl_8049E0A4
    bl OSDisableInterrupts
    mr r29, r3
    bl __DVDClearWaitingQueue
    lwz r0, lbl_8049E070
    cmpwi r0, 0x0
    beq lbl_802D5928
    lis r3, Callback@ha
    addi r3, r3, Callback@l
    stw r3, lbl_8049E0E0
    b lbl_802D59DC
lbl_802D5928:
    lwz r3, executing_8049E0F0
    cmpwi r3, 0x0
    beq lbl_802D5938
    stw r31, 0x28(r3)
lbl_802D5938:
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, executing_8049E0F0
    li r4, 0x1
    stw r4, PauseFlag_8049E064
    cmpwi r0, 0x0
    bne lbl_802D595C
    stw r4, PausingFlag_8049E068
lbl_802D595C:
    bl OSRestoreInterrupts
    b lbl_802D596C
lbl_802D5964:
    li r4, 0x0
    bl DVDCancelAsync
lbl_802D596C:
    bl __DVDPopWaitingQueue
    cmpwi r3, 0x0
    bne lbl_802D5964
    lwz r3, executing_8049E0F0
    cmpwi r3, 0x0
    beq lbl_802D5994
    lis r4, Callback@ha
    addi r4, r4, Callback@l
    bl DVDCancelAsync
    b lbl_802D59A8
lbl_802D5994:
    lis r0, Callback@ha
    opword 0x340058D0
    beq lbl_802D59A8
    li r0, 0x1
    stw r0, lbl_8049E0A4
lbl_802D59A8:
    bl OSDisableInterrupts
    li r4, 0x0
    mr r30, r3
    stw r4, PauseFlag_8049E064
    lwz r0, PausingFlag_8049E068
    cmpwi r0, 0x0
    beq lbl_802D59CC
    stw r4, PausingFlag_8049E068
    bl stateReady
lbl_802D59CC:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
lbl_802D59DC:
    mr r3, r29
    bl OSRestoreInterrupts
    bl OSEnableInterrupts
lbl_802D59E8:
    lwz r0, lbl_8049E0A4
    cmpwi r0, 0x1
    bne lbl_802D59E8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
