#include "pad.h"

#include <rvl/os/os.h>
#include <rvl/os/osContext.h>

#include <stdlib.h>

// TODO: Move to osMisc.h
typedef int (*OSResetFunction)(int final);
typedef struct OSResetFunctionInfo {
  OSResetFunction func; // 0x00
  u32 priority;         // 0x04
  u32 unk_08;
  u32 unk_0A;
} OSResetFunctionInfo;

void OSRegisterShutdownFunction(OSResetFunctionInfo* info);

// Broadway / IOS global locations: https://wiibrew.org/wiki/Memory_Map
u8 oslow_30e3 AT_ADDRESS(0x800030e3);
u16 oslow_30e0 AT_ADDRESS(0x800030e0);

#include "rvl/si/si.h"

#include <string.h>

static const char* __PAD_VERSION =
    "<< RVL_SDK - PAD \trelease build: Oct  3 2007 01:00:54 (0x4199_60831) >>";

static u32 PADInitialized;
static u32 PADEnabledBits;
static u32 PADResetBits;
static s32 PADResetChan = 32;
static u32 PADUnk803869b4;
static u32 PADUnk803869b0;
static u32 PADUnk803869ac;
static u32 PADUnk803869a8;
static u32 PADUnk803869a4;

static u32 PAD_StickXResetBit = 0xf0000000;
static u32 PAD_AnalogMode = 0x00000300u;

static void SPEC0_MakeStatus(s32 chan, PADStatus *status, u32 data[2]);
static void SPEC1_MakeStatus(s32 chan, PADStatus *status, u32 data[2]);
static void SPEC2_MakeStatus(s32 chan, PADStatus *status, u32 data[2]);

u32 PAD_Spec;
// From rvl/si/siBios.c
extern u32 __PADFixBits;
static u32 Spec = 5;
static void (*PAD_MakeStatus)(s32, PADStatus*, u32[2]) = SPEC2_MakeStatus;

static u32 Type[4];
static PADStatus Origin[4];

static u32 unk_padding = 0;
static u32 PAD_Unk80385b20 = 0x41u << 24;
static u32 PAD_Unk80385b24 = 0x42u << 24;
static u32 PAD_Unk803481f0[4];

static PADStatus PAD_AltStatus[4];

static OSResetFunctionInfo PAD_ResetFunctionInfo = {PAD_OnReset, 127};

static void (*PAD_SamplingCallback)(void);

void PAD_UpdateOrigin(s32 chan) {
  PADStatus* orig;
  u32 chanBit = 0x80000000 >> chan;
  orig = &Origin[chan];
  switch (PAD_AnalogMode & 0x00000700u) {
  case 0x00000000u:
  case 0x00000500u:
  case 0x00000600u:
  case 0x00000700u:
    orig->triggerL &= ~15;
    orig->triggerR &= ~15;
    orig->analogA &= ~15;
    orig->analogB &= ~15;
    break;
  case 0x00000100u:
    orig->substickX &= ~15;
    orig->substickY &= ~15;
    orig->analogA &= ~15;
    orig->analogB &= ~15;
    break;
  case 0x00000200u:
    orig->substickX &= ~15;
    orig->substickY &= ~15;
    orig->triggerL &= ~15;
    orig->triggerR &= ~15;
    break;
  case 0x00000300u:
    break;
  case 0x00000400u:
    break;
  }
  orig->stickX -= 128;
  orig->stickY -= 128;
  orig->substickX -= 128;
  orig->substickY -= 128;
  if (PAD_StickXResetBit & chanBit) {
    if (64 < orig->stickX &&
        (SIGetType(chan) & 0xffff0000) == (0x08000000u | 0x01000000u)) {
      orig->stickX = 0;
    }
  }
}

inline static void PADEnable(s32 chan) {
  u32 cmd;
  u32 chanBit;
  u32 resp[2];
  chanBit = 0x80000000 >> chan;
  PADEnabledBits |= chanBit;
  SIGetResponse(chan, resp);
  cmd = (0x40u << 16) | PAD_AnalogMode;
  SISetCommand(chan, cmd);
  SIEnablePolling(PADEnabledBits);
}

int OSDisableInterrupts(void);
int OSEnableInterrupts(void);
int OSRestoreInterrupts(int);

void OSSetWirelessID(s32, u16);

inline static void PADDisable(s32 chan) {
  int interrupts;
  u32 chanBit;
  interrupts = OSDisableInterrupts();
  chanBit = 0x80000000 >> chan;
  SIDisablePolling(chanBit);
  PADEnabledBits &= ~chanBit;
  PADUnk803869b0 &= ~chanBit;
  PADUnk803869ac &= ~chanBit;
  PADUnk803869a8 &= ~chanBit;
  PADUnk803869a4 &= ~chanBit;
  OSSetWirelessID(chan, 0);
  OSRestoreInterrupts(interrupts);
}

inline static void DoReset(void) {
  u32 chanBit;
  PADResetChan = __cntlzw(PADResetBits);
  if (PADResetChan == 32)
    return;
  chanBit = 0x80000000 >> PADResetChan;
  PADResetBits &= ~chanBit;
  memset(&Origin[PADResetChan], 0, sizeof(PADStatus));
  SIGetTypeAsync(PADResetChan, PADTypeAndStatusCallback);
}

void PADOriginCallback(s32 chan, u32 error, void* context) {
#pragma unused(chan, context)
  if (!(error & (0x0001 | 0x0002 | 0x0008 | 0x0004))) {
    PAD_UpdateOrigin(PADResetChan);
    PADEnable(PADResetChan);
  }
  DoReset();
}

void PADOriginUpdateCallback(s32 chan, u32 error, void* context) {
#pragma unused(context)
  if (!(PADEnabledBits & (0x80000000 >> chan)))
    return;
  if (!(error & (0x0001 | 0x0002 | 0x0008 | 0x0004)))
    PAD_UpdateOrigin(chan);
  if (error & 0x0008)
    PADDisable(chan);
}

void PADProbeCallback(s32 chan, u32 error, void* context) {
#pragma unused(chan, context)
  if (!(error & (0x0001 | 0x0002 | 0x0008 | 0x0004))) {
    PADEnable(PADResetChan);
    PADUnk803869b0 |= 0x80000000 >> PADResetChan;
  }
  DoReset();
}

void PADTypeAndStatusCallback(s32 chan, u32 type) {
#pragma unused(chan)
  u32 chanBit;
  u32 variant1;
  int ok = true;
  u32 error;
  chanBit = 0x80000000 >> PADResetChan;
  error = type & 0xff;
  variant1 = PADUnk803869b4 & chanBit;
  PADUnk803869b4 &= ~chanBit;
  if (error & (0x0001 | 0x0002 | 0x0008 | 0x0004)) {
    DoReset();
    return;
  }
  type &= ~0xff;
  Type[PADResetChan] = type;
  if ((type & 0x18000000u) != 0x08000000u || !(type & 0x01000000u)) {
    DoReset();
    return;
  }
  if (Spec < 2) {
    PADEnable(PADResetChan);
    DoReset();
    return;
  }
  if (!(type & 0x80000000u) || (type & 0x04000000u)) {
    if (variant1) {
      ok = SITransfer(PADResetChan, &PAD_Unk80385b24, 3, &Origin[PADResetChan],
                      10, PADOriginCallback, 0);
    } else {
      ok = SITransfer(PADResetChan, &PAD_Unk80385b20, 1, &Origin[PADResetChan],
                      10, PADOriginCallback, 0);
    }
  } else if ((type & 0x00100000u) && (type & 0x00080000u) == 0x00000000u &&
             !(type & 0x00040000u)) {
    if (type & 0x40000000u) {
      ok = SITransfer(PADResetChan, &PAD_Unk80385b20, 1, &Origin[PADResetChan],
                      10, PADOriginCallback, 0);
    } else {
      ok = SITransfer(PADResetChan, &PAD_Unk803481f0[PADResetChan], 3,
                      &Origin[PADResetChan], 8, PADProbeCallback, 0);
    }
  }
  if (!ok) {
    PADUnk803869a8 |= chanBit;
    DoReset();
    return;
  }
}

static void PADReceiveCheckCallback(s32 chan, u32 type) {
  u32 error;
  u32 chanBit;
  chanBit = 0x80000000 >> chan;
  if (!(PADEnabledBits & chanBit)) {
    return;
  }
  error = type & 0xff;
  type &= ~0xff;
  PADUnk803869b0 &= ~chanBit;
  PADUnk803869ac &= ~chanBit;
  if (!(error & 0x000f) && (type & 0x80000000u) && (type & 0x00100000u) &&
      (type & 0x40000000u) && !(type & 0x04000000u) &&
      (type & 0x00080000u) == 0x00000000u && !(type & 0x00040000u)) {
    SITransfer(chan, &PAD_Unk80385b20, 1, &Origin[chan], 10,
               PADOriginUpdateCallback, 0);
  } else {
    PADDisable(chan);
  }
}

int PADReset(u32 mask) {
  int enabled;
  u32 disableBits;
  enabled = OSDisableInterrupts();
  mask |= PADUnk803869a8;
  PADUnk803869a8 = 0;
  mask &= ~(PADUnk803869b0 | PADUnk803869ac);
  PADResetBits |= mask;
  disableBits = PADResetBits & PADEnabledBits;
  PADEnabledBits &= ~mask;
  PADUnk803869a4 &= ~mask;
  if (Spec == 4) {
    PADUnk803869b4 |= mask;
  }
  SIDisablePolling(disableBits);
  if (PADResetChan == 32)
    DoReset();
  OSRestoreInterrupts(enabled);
  return true;
}

int PADRecalibrate(u32 mask) {
  int interrupts;
  u32 disableBits;
  interrupts = OSDisableInterrupts();
  mask |= PADUnk803869a8;
  PADUnk803869a8 = 0;
  mask &= ~(PADUnk803869b0 | PADUnk803869ac);
  PADResetBits |= mask;
  disableBits = PADResetBits & PADEnabledBits;
  PADEnabledBits &= ~mask;
  PADUnk803869a4 &= ~mask;
  if (!(oslow_30e3 & 0x40))
    PADUnk803869b4 |= mask;
  SIDisablePolling(disableBits);
  if (PADResetChan == 32)
    DoReset();
  OSRestoreInterrupts(interrupts);
  return true;
}

// PADInit: definicion C reemplazada por asm (ver abajo)
int PADInit(void);


void sub_801BB0D0(void);

u32 PADRead(PADStatus* status) {
  int interrupts;
  s32 i;
  u32 data[2];
  u32 chanBit;
  u32 statusNum;
  int chanShift;
  u32 motor;
  interrupts = OSDisableInterrupts();
  motor = 0;
  for (i = 0; i < 4; i++, status++) {
    chanBit = 0x80000000 >> i;
    chanShift = 8 * (4 - 1 - i);
    if (PADUnk803869a8 & chanBit) {
      PADReset(0);
      status->err = -2;
      memset(status, 0, 0xa);
      continue;
    }
    if ((PADResetBits & chanBit) || PADResetChan == i) {
      status->err = -2;
      memset(status, 0, 0xa);
      continue;
    }
    if (!(PADEnabledBits & chanBit)) {
      status->err = (s8)-1;
      memset(status, 0, 0xa);
      continue;
    }
    if (SIIsChanBusy(i)) {
      status->err = -3;
      memset(status, 0, 0xa);
      continue;
    }
    statusNum = SIGetStatus(i);
    if (statusNum & 0x0008) {
      SIGetResponse(i, data);
      if (PADUnk803869b0 & chanBit) {
        status->err = (s8)0;
        memset(status, 0, 0xa);
        if (!(PADUnk803869ac & chanBit)) {
          PADUnk803869ac |= chanBit;
          SIGetTypeAsync(i, PADReceiveCheckCallback);
        }
        continue;
      }
      PADDisable(i);
      status->err = (s8)-1;
      memset(status, 0, 0xa);
      continue;
    }
    if (!(SIGetType(i) & 0x20000000u)) {
      motor |= chanBit;
    }
    if (!SIGetResponse(i, data)) {
      status->err = -3;
      memset(status, 0, 0xa);
      continue;
    }
    if (data[0] & 0x80000000) {
      status->err = -3;
      memset(status, 0, 0xa);
      continue;
    }
    // 0x801af690
    PAD_MakeStatus(i, status, data);
    s32 thres;
    if (((Type[i] & 0xffff0000) == 0x09000000u) &&
        ((status->button & 0x0080) ^ 0x0080)) {
      thres = 10;
    } else {
      thres = 3;
    }
    if ((abs(abs(status->stickX) - abs(PAD_AltStatus[i].stickX))) >= thres ||
        (abs(abs(status->stickY) - abs(PAD_AltStatus[i].stickY))) >= thres ||
        (abs(abs(status->substickX) - abs(PAD_AltStatus[i].substickX))) >=
            thres ||
        (abs(abs(status->substickY) - abs(PAD_AltStatus[i].substickY))) >=
            thres ||
        (abs(abs(status->triggerL) - abs(PAD_AltStatus[i].triggerL))) >=
            thres ||
        (abs(abs(status->triggerR) - abs(PAD_AltStatus[i].triggerR))) >=
            thres ||
        status->button != PAD_AltStatus[i].button) {
      sub_801BB0D0();
    }
#undef abs
    memcpy(&PAD_AltStatus[i], status, 0xc);
    if (status->button & 0x2000) {
      status->err = -3;
      memset(status, 0, 0xa);
      SITransfer(i, &PAD_Unk80385b20, 1, &Origin[i], 10,
                 PADOriginUpdateCallback, 0);
      continue;
    }
    status->err = 0;
    status->button &= ~0x0080;
  }
  OSRestoreInterrupts(interrupts);
  return motor;
}

void PADControlMotor(s32 chan, u32 command) {
  int interrupts;
  u32 chanBit;
  interrupts = OSDisableInterrupts();
  chanBit = 0x80000000 >> chan;
  if ((PADEnabledBits & chanBit) && !(SIGetType(chan) & 0x20000000u)) {
    if (Spec < 2 && command == 2) {
      command = 0;
    }
    if (oslow_30e3 & 0x20) {
      command = 0;
    }
    SISetCommand(chan, (0x40u << 16) | PAD_AnalogMode |
                           (command & (0x00000001u | 0x00000002u)));
    SITransferCommands();
  }
  OSRestoreInterrupts(interrupts);
}

inline void PADSetSpec(u32 spec) {
  PAD_Spec = 0;
  switch (spec) {
  case 0:
    PAD_MakeStatus = SPEC0_MakeStatus;
    break;
  case 1:
    PAD_MakeStatus = SPEC1_MakeStatus;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    PAD_MakeStatus = SPEC2_MakeStatus;
    break;
  }
  Spec = spec;
}

static void SPEC0_MakeStatus(s32 chan, PADStatus* status, u32 data[2]) {
#pragma unused(chan)
  status->button = 0;
  status->button |= ((data[0] >> 16) & 0x0008) ? 0x0100 : 0;
  status->button |= ((data[0] >> 16) & 0x0020) ? 0x0200 : 0;
  status->button |= ((data[0] >> 16) & 0x0100) ? 0x0400 : 0;
  status->button |= ((data[0] >> 16) & 0x0001) ? 0x0800 : 0;
  status->button |= ((data[0] >> 16) & 0x0010) ? 0x1000 : 0;
  status->stickX = (s8)(data[1] >> 16);
  status->stickY = (s8)(data[1] >> 24);
  status->substickX = (s8)(data[1]);
  status->substickY = (s8)(data[1] >> 8);
  status->triggerL = (u8)(data[0] >> 8);
  status->triggerR = (u8)data[0];
  status->analogA = 0;
  status->analogB = 0;
  if (170u <= status->triggerL) {
    status->button |= 0x0040;
  }
  if (170u <= status->triggerR) {
    status->button |= 0x0020;
  }
  status->stickX -= 128;
  status->stickY -= 128;
  status->substickX -= 128;
  status->substickY -= 128;
}

static void SPEC1_MakeStatus(s32 chan, PADStatus* status, u32 data[2]) {
#pragma unused(chan)
  status->button = 0;
  status->button |= ((data[0] >> 16) & 0x0080) ? 0x0100 : 0;
  status->button |= ((data[0] >> 16) & 0x0100) ? 0x0200 : 0;
  status->button |= ((data[0] >> 16) & 0x0020) ? 0x0400 : 0;
  status->button |= ((data[0] >> 16) & 0x0010) ? 0x0800 : 0;
  status->button |= ((data[0] >> 16) & 0x0200) ? 0x1000 : 0;
  status->stickX = (s8)(data[1] >> 16);
  status->stickY = (s8)(data[1] >> 24);
  status->substickX = (s8)(data[1]);
  status->substickY = (s8)(data[1] >> 8);
  status->triggerL = (u8)(data[0] >> 8);
  status->triggerR = (u8)data[0];
  status->analogA = 0;
  status->analogB = 0;
  if (170u <= status->triggerL) {
    status->button |= 0x0040;
  }
  if (170u <= status->triggerR) {
    status->button |= 0x0020;
  }
  status->stickX -= 128;
  status->stickY -= 128;
  status->substickX -= 128;
  status->substickY -= 128;
}

inline static s8 ClampS8(s8 arg1, s8 arg2) {
  if (0 < arg2) {
    s8 min = (s8)(-128 + arg2);
    if (arg1 < min) {
      arg1 = min;
    }
  } else if (arg2 < 0) {
    s8 max = (s8)(127 + arg2);
    if (max < arg1) {
      arg1 = max;
    }
  }
  return arg1 -= arg2;
}

inline static u8 ClampU8(u8 arg1, u8 arg2) {
  if (arg1 < arg2) {
    arg1 = arg2;
  }
  return arg1 -= arg2;
}

static void SPEC2_MakeStatus(s32 chan, PADStatus* status, u32 data[2]) {
  PADStatus* origin;
  status->button = (u16)((data[0] >> 16) & 0x00003fff);
  status->stickX = (s8)(data[0] >> 8);
  status->stickY = (s8)(data[0]);
  switch (PAD_AnalogMode & 0x00000700u) {
  case 0x00000000u:
  case 0x00000500u:
  case 0x00000600u:
  case 0x00000700u:
    status->substickX = (s8)(data[1] >> 24);
    status->substickY = (s8)(data[1] >> 16);
    status->triggerL = (u8)(((data[1] >> 12) & 0x0f) << 4);
    status->triggerR = (u8)(((data[1] >> 8) & 0x0f) << 4);
    status->analogA = (u8)(((data[1] >> 4) & 0x0f) << 4);
    status->analogB = (u8)(((data[1] >> 0) & 0x0f) << 4);
    break;
  case 0x00000100u:
    status->substickX = (s8)(((data[1] >> 28) & 0x0f) << 4);
    status->substickY = (s8)(((data[1] >> 24) & 0x0f) << 4);
    status->triggerL = (u8)(data[1] >> 16);
    status->triggerR = (u8)(data[1] >> 8);
    status->analogA = (u8)(((data[1] >> 4) & 0x0f) << 4);
    status->analogB = (u8)(((data[1] >> 0) & 0x0f) << 4);
    break;
  case 0x00000200u:
    status->substickX = (s8)(((data[1] >> 28) & 0x0f) << 4);
    status->substickY = (s8)(((data[1] >> 24) & 0x0f) << 4);
    status->triggerL = (u8)(((data[1] >> 20) & 0x0f) << 4);
    status->triggerR = (u8)(((data[1] >> 16) & 0x0f) << 4);
    status->analogA = (u8)(data[1] >> 8);
    status->analogB = (u8)(data[1] >> 0);
    break;
  case 0x00000300u:
    status->substickX = (s8)(data[1] >> 24);
    status->substickY = (s8)(data[1] >> 16);
    status->triggerL = (u8)(data[1] >> 8);
    status->triggerR = (u8)(data[1] >> 0);
    status->analogA = 0;
    status->analogB = 0;
    break;
  case 0x00000400u:
    status->substickX = (s8)(data[1] >> 24);
    status->substickY = (s8)(data[1] >> 16);
    status->triggerL = 0;
    status->triggerR = 0;
    status->analogA = (u8)(data[1] >> 8);
    status->analogB = (u8)(data[1] >> 0);
    break;
  }
  status->stickX -= 128;
  status->stickY -= 128;
  status->substickX -= 128;
  status->substickY -= 128;
  if (((Type[chan] & 0xffff0000) == 0x09000000u) &&
      ((status->button & 0x0080) ^ 0x0080)) {
    PADUnk803869a4 |= (0x80000000 >> chan);
    status->stickX = 0;
    status->stickY = 0;
    status->substickX = 0;
    status->substickY = 0;
    return;
  } else {
    PADUnk803869a4 &= ~(0x80000000 >> chan);
  }
  origin = &Origin[chan];
  status->stickX = ClampS8(status->stickX, origin->stickX);
  status->stickY = ClampS8(status->stickY, origin->stickY);
  status->substickX = ClampS8(status->substickX, origin->substickX);
  status->substickY = ClampS8(status->substickY, origin->substickY);
  status->triggerL = ClampU8(status->triggerL, origin->triggerL);
  status->triggerR = ClampU8(status->triggerR, origin->triggerR);
}

inline int PADSync(void) {
  return PADResetBits == 0 && PADResetChan == 32 && !SIBusy();
}

static PADSamplingCallback PADSetSamplingCallback(PADSamplingCallback);

int PAD_OnReset(int final) {
  // PAL: 0x80386998
  static int isCalibrated = false;
  int sync;
  if (PAD_SamplingCallback)
    PADSetSamplingCallback(NULL);
  if (!final) {
    sync = PADSync();
    if (!isCalibrated && sync) {
      isCalibrated = PADRecalibrate(0xf0000000);
      return false;
    }
    return sync;
  } else {
    isCalibrated = false;
  }
  return true;
}

void PAD_SamplingHandler(s32 interrupt, OSContext* context) {
#pragma unused(interrupt)
  OSContext context2;
  if (PAD_SamplingCallback) {
    OSClearContext(&context2);
    OSSetCurrentContext(&context2);
    PAD_SamplingCallback();
    OSClearContext(&context2);
    OSSetCurrentContext(context);
  }
}

inline static PADSamplingCallback
PADSetSamplingCallback(PADSamplingCallback callback) {
  PADSamplingCallback prev;
  prev = PAD_SamplingCallback;
  PAD_SamplingCallback = callback;
  if (callback) {
    // Never used.
    // SIRegisterPollingHandler(PAD_SamplingHandler);
  } else {
    SIUnregisterPollingHandler(PAD_SamplingHandler);
  }
  return prev;
}

int __PADDisableRecalibration(int disable) {
  int interrupts;
  int prev;
  interrupts = OSDisableInterrupts();
  prev = (oslow_30e3 & 0x40) ? true : false;
  oslow_30e3 &= ~0x40;
  if (disable)
    oslow_30e3 |= 0x40;
  OSRestoreInterrupts(interrupts);
  return prev;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float __PADSpec;
extern float lbl_8049D240;
extern float lbl_8049D244;
extern float lbl_8049D248;
extern float lbl_8049D24C;
extern float lbl_8049D250;
extern float lbl_8049D254;
extern float lbl_8049D258;
extern float lbl_8049E3B8;
extern float lbl_8049E3BC;
extern float lbl_8049E3C4;
extern float lbl_8049E3C8;
extern float lbl_8049E3CC;
extern float lbl_8049E3D0;
extern float lbl_8049E3D4;
extern float lbl_8049E3D8;
extern float lbl_8049E3DC;
extern float lbl_8049E3E0;
extern float lbl_8049E414;
extern u8 lbl_8038D848[];
extern u8 lbl_80465D70[];
extern u8 lbl_80465DB0[];
extern void OSRegisterVersion();
int PADInit(void);
extern void SIRefreshSamplingRate();
extern int SamplingHandler();
extern int UpdateOrigin();
extern void __VIResetSIIdle();
extern void _restgpr_16();
extern void _savegpr_16();
extern int fn_80321B4C();
extern int fn_803226FC();

// asm_to_cpp: PADInit
asm int PADInit(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049E3E0
    cmpwi r0, 0x0
    beq lbl_80321A10
    li r3, 0x1
    b lbl_80321B3C
lbl_80321A10:
    lwz r3, lbl_8049D240
    bl OSRegisterVersion
    lwz r4, __PADSpec
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_80321A7C
    li r0, 0x0
    cmpwi r4, 0x1
    stw r0, __PADSpec
    beq lbl_80321A5C
    bge lbl_80321A40
    bge cr1, lbl_80321A4C
    b lbl_80321A78
lbl_80321A40:
    cmpwi r4, 0x6
    bge lbl_80321A78
    b lbl_80321A6C
lbl_80321A4C:
    lis r3, SPEC0_MakeStatus@ha
    addi r3, r3, SPEC0_MakeStatus@l
    stw r3, lbl_8049D254
    b lbl_80321A78
lbl_80321A5C:
    lis r3, SPEC1_MakeStatus@ha
    addi r3, r3, SPEC1_MakeStatus@l
    stw r3, lbl_8049D254
    b lbl_80321A78
lbl_80321A6C:
    lis r3, SPEC2_MakeStatus@ha
    addi r3, r3, SPEC2_MakeStatus@l
    stw r3, lbl_8049D254
lbl_80321A78:
    stw r4, lbl_8049D250
lbl_80321A7C:
    lwz r0, lbl_8049E414
    li r3, 0x1
    stw r3, lbl_8049E3E0
    cmpwi r0, 0x0
    beq lbl_80321AF0
    bl OSGetTime
    srawi r8, r3, 16
    lis r5, 0x1
    srawi r0, r3, 31
    li r6, 0x0
    subi r7, r5, 0x1
    rotlwi r5, r4, 16
    srawi r0, r3, 31
    rlwimi r5, r3, 16, 0, 15
    and r4, r4, r7
    srawi r0, r3, 16
    and r0, r5, r7
    and r5, r3, r7
    addc r0, r4, r0
    and r7, r8, r7
    adde r4, r6, r6
    lis r3, 0x8000
    addc r5, r5, r0
    lis r0, 0xf000
    adde r4, r6, r4
    addc r4, r7, r5
    clrlwi r4, r4, 18
    sth r4, 0x30e0(r3)
    stw r0, lbl_8049E3D4
lbl_80321AF0:
    lis r3, 0x8000
    lis r6, lbl_80465DB0@ha
    lhz r0, 0x30e0(r3)
    addi r4, r6, lbl_80465DB0@l
    clrlslwi r0, r0, 18, 8
    oris r7, r0, 0x4d00
    oris r5, r0, 0x4d40
    oris r3, r0, 0x4d80
    oris r0, r0, 0x4dc0
    stw r7, lbl_80465DB0@l(r6)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    bl SIRefreshSamplingRate
    lis r3, lbl_8038D848@ha
    addi r3, r3, lbl_8038D848@l
    bl OSRegisterShutdownFunction
    lis r3, 0xf000
    bl PADReset
lbl_80321B3C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: SamplingHandler
asm int SamplingHandler() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    mr r31, r4
    lwz r0, lbl_8049E3BC
    cmpwi r0, 0x0
    beq lbl_80322810
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8049E3BC
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
lbl_80322810:
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// asm_to_cpp: UpdateOrigin
asm int UpdateOrigin() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80465D70@ha
    lis r7, 0x8000
    stw r0, 0x14(r1)
    mulli r6, r3, 0xc
    addi r5, r5, lbl_80465D70@l
    stw r31, 0xc(r1)
    add r31, r5, r6
    lwz r0, lbl_8049D24C
    rlwinm r4, r0, 0, 21, 23
    srw r0, r7, r3
    cmpwi r4, 0x400
    beq lbl_803210A8
    bge lbl_80320FEC
    cmpwi r4, 0x200
    beq lbl_80321078
    bge lbl_80320FE0
    cmpwi r4, 0x100
    beq lbl_80321044
    bge lbl_803210A8
    cmpwi r4, 0x0
    beq lbl_80321010
    b lbl_803210A8
lbl_80320FE0:
    cmpwi r4, 0x300
    beq lbl_803210A8
    b lbl_803210A8
lbl_80320FEC:
    cmpwi r4, 0x600
    beq lbl_80321010
    bge lbl_80321004
    cmpwi r4, 0x500
    beq lbl_80321010
    b lbl_803210A8
lbl_80321004:
    cmpwi r4, 0x700
    beq lbl_80321010
    b lbl_803210A8
lbl_80321010:
    lbz r4, 0x6(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x6(r31)
    lbz r4, 0x7(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x7(r31)
    lbz r4, 0x8(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x8(r31)
    lbz r4, 0x9(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x9(r31)
    b lbl_803210A8
lbl_80321044:
    lbz r4, 0x4(r31)
    clrrwi r4, r4, 4
    stb r4, 0x4(r31)
    lbz r4, 0x5(r31)
    clrrwi r4, r4, 4
    stb r4, 0x5(r31)
    lbz r4, 0x8(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x8(r31)
    lbz r4, 0x9(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x9(r31)
    b lbl_803210A8
lbl_80321078:
    lbz r4, 0x4(r31)
    clrrwi r4, r4, 4
    stb r4, 0x4(r31)
    lbz r4, 0x5(r31)
    clrrwi r4, r4, 4
    stb r4, 0x5(r31)
    lbz r4, 0x6(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x6(r31)
    lbz r4, 0x7(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x7(r31)
lbl_803210A8:
    lbz r5, 0x2(r31)
    lwz r4, lbl_8049D248
    subi r5, r5, 0x80
    stb r5, 0x2(r31)
    and. r0, r4, r0
    lbz r4, 0x3(r31)
    subi r0, r4, 0x80
    stb r0, 0x3(r31)
    lbz r4, 0x4(r31)
    subi r0, r4, 0x80
    stb r0, 0x4(r31)
    lbz r4, 0x5(r31)
    subi r0, r4, 0x80
    stb r0, 0x5(r31)
    beq lbl_80321110
    lbz r0, 0x2(r31)
    extsb r0, r0
    cmpwi r0, 0x40
    ble lbl_80321110
    bl SIGetType
    clrrwi r3, r3, 16
    subis r0, r3, 0x900
    cmplwi r0, 0x0
    bne lbl_80321110
    li r0, 0x0
    stb r0, 0x2(r31)
lbl_80321110:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80321B4C
asm int fn_80321B4C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_16
    lis r17, lbl_80465D70@ha
    mr r16, r3
    addi r17, r17, lbl_80465D70@l
    bl OSDisableInterrupts
    mr r19, r3
    addi r23, r17, 0x30
    addi r22, r17, 0x50
    addi r21, r17, 0x0
    li r17, 0x0
    li r18, 0x0
    li r26, -0x2
    li r27, -0x1
    li r28, -0x3
    li r29, 0x0
    lis r30, PADReceiveCheckCallback@ha
    lis r31, PADOriginUpdateCallback@ha
    lis r25, 0x8000
lbl_80321BA4:
    lwz r0, lbl_8049E3C8
    srw r20, r25, r18
    and. r0, r0, r20
    beq lbl_80321BD4
    li r3, 0x0
    bl PADReset
    stb r26, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321BD4:
    lwz r0, lbl_8049E3D8
    and. r0, r0, r20
    bne lbl_80321BEC
    lwz r0, lbl_8049D244
    cmpw r0, r18
    bne lbl_80321C04
lbl_80321BEC:
    stb r26, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321C04:
    lwz r0, lbl_8049E3DC
    and. r0, r0, r20
    bne lbl_80321C28
    stb r27, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321C28:
    mr r3, r18
    bl SIIsChanBusy
    cmpwi r3, 0x0
    beq lbl_80321C50
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321C50:
    mr r3, r18
    bl SIGetStatus
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_80321D2C
    mr r3, r18
    addi r4, r1, 0x8
    bl SIGetResponse
    lwz r0, lbl_8049E3D0
    and. r0, r0, r20
    beq lbl_80321CB0
    stb r29, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    lwz r3, lbl_8049E3CC
    and. r0, r3, r20
    bne lbl_80321FC8
    or r0, r3, r20
    mr r3, r18
    stw r0, lbl_8049E3CC
    addi r4, r30, PADReceiveCheckCallback@l
    bl SIGetTypeAsync
    b lbl_80321FC8
lbl_80321CB0:
    bl OSDisableInterrupts
    mr r24, r3
    mr r3, r20
    bl SIDisablePolling
    lwz r4, lbl_8049E3DC
    nor r9, r20, r20
    lwz r0, lbl_8049E3D0
    mr r3, r18
    and r8, r4, r9
    lwz r5, lbl_8049E3CC
    and r7, r0, r9
    lwz r0, lbl_8049E3C4
    and r6, r5, r9
    lwz r4, lbl_8049E3C8
    and r0, r0, r9
    stw r8, lbl_8049E3DC
    and r5, r4, r9
    li r4, 0x0
    stw r7, lbl_8049E3D0
    stw r6, lbl_8049E3CC
    stw r5, lbl_8049E3C8
    stw r0, lbl_8049E3C4
    bl OSSetWirelessID
    mr r3, r24
    bl OSRestoreInterrupts
    stb r27, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321D2C:
    mr r3, r18
    bl SIGetType
    rlwinm. r0, r3, 0, 2, 2
    bne lbl_80321D40
    or r17, r17, r20
lbl_80321D40:
    mr r3, r18
    addi r4, r1, 0x8
    bl SIGetResponse
    cmpwi r3, 0x0
    bne lbl_80321D6C
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321D6C:
    lwz r0, 0x8(r1)
    clrrwi. r0, r0, 31
    beq lbl_80321D90
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321D90:
    lwz r12, lbl_8049D254
    mr r3, r18
    mr r4, r16
    addi r5, r1, 0x8
    mtctr r12
    bctrl
    lwz r0, 0x0(r23)
    clrrwi r3, r0, 16
    subis r0, r3, 0x900
    cmplwi r0, 0x0
    bne lbl_80321DD8
    lhz r0, 0x0(r16)
    rlwinm r0, r0, 0, 24, 24
    xori r0, r0, 0x80
    cmpwi r0, 0x0
    beq lbl_80321DD8
    li r0, 0xa
    b lbl_80321DDC
lbl_80321DD8:
    li r0, 0x3
lbl_80321DDC:
    lbz r4, 0x2(r22)
    lbz r3, 0x2(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r4, 0x3(r22)
    lbz r3, 0x3(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r4, 0x4(r22)
    lbz r3, 0x4(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r4, 0x5(r22)
    lbz r3, 0x5(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r5, 0x6(r22)
    lbz r3, 0x6(r16)
    srawi r6, r5, 31
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r5, 0x7(r22)
    lbz r3, 0x7(r16)
    srawi r6, r5, 31
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lhz r3, 0x0(r16)
    lhz r0, 0x0(r22)
    cmplw r3, r0
    beq lbl_80321F60
lbl_80321F5C:
    bl __VIResetSIIdle
lbl_80321F60:
    mr r3, r22
    mr r4, r16
    li r5, 0xc
    bl memcpy
    lhz r0, 0x0(r16)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_80321FB8
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    mr r3, r18
    mr r6, r21
    addi r8, r31, PADOriginUpdateCallback@l
    la r4, lbl_8049D258
    li r5, 0x1
    li r7, 0xa
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80321FC8
lbl_80321FB8:
    stb r29, 0xa(r16)
    lhz r0, 0x0(r16)
    rlwinm r0, r0, 0, 25, 23
    sth r0, 0x0(r16)
lbl_80321FC8:
    addi r18, r18, 0x1
    addi r22, r22, 0xc
    cmpwi r18, 0x4
    addi r21, r21, 0xc
    addi r16, r16, 0xc
    addi r23, r23, 0x4
    blt lbl_80321BA4
    mr r3, r19
    bl OSRestoreInterrupts
    addi r11, r1, 0x50
    mr r3, r17
    bl _restgpr_16
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_803226FC
asm int fn_803226FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8049E3BC
    cmpwi r0, 0x0
    beq lbl_80322730
    li r0, 0x0
    lis r3, SamplingHandler@ha
    stw r0, lbl_8049E3BC
    addi r3, r3, SamplingHandler@l
    bl SIUnregisterPollingHandler
lbl_80322730:
    cmpwi r31, 0x0
    bne lbl_803227A4
    lwz r0, lbl_8049E3D8
    li r31, 0x0
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_8032275C
    lwz r0, lbl_8049D244
    cmpwi r0, 0x20
    bne lbl_8032275C
    li r3, 0x1
lbl_8032275C:
    cmpwi r3, 0x0
    beq lbl_80322774
    bl SIBusy
    cmpwi r3, 0x0
    bne lbl_80322774
    li r31, 0x1
lbl_80322774:
    lwz r0, lbl_8049E3B8
    cmpwi r0, 0x0
    bne lbl_8032279C
    cmpwi r31, 0x0
    beq lbl_8032279C
    lis r3, 0xf000
    bl PADRecalibrate
    stw r3, lbl_8049E3B8
    li r3, 0x0
    b lbl_803227B0
lbl_8032279C:
    mr r3, r31
    b lbl_803227B0
lbl_803227A4:
    li r0, 0x0
    li r3, 0x1
    stw r0, lbl_8049E3B8
lbl_803227B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
