#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

void HBMSYNInit();
void HBMSYNRunAudioFrame();
void HBMSYNInitSynth();
void HBMSYNQuitSynth();
void HBMSYNMidiInput();
void HBMSYNSetMasterVolume();

void HBMSYNRunAudioFrame(void);

void HBMSYNQuitSynth(s8 *arg0, M2C_UNK arg_sp0);

void HBMSYNSetMasterVolume(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (arg1 << 0x10);
}

void HBMSYNInit(void);
void HBMSYNInitSynth(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3);
void HBMSYNMidiInput(s8 *arg0, s8 *arg1);
void HBMSYNQuitSynth();
void HBMSYNRunAudioFrame();
