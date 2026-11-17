#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

void __HBMSYNClearVoiceReferences();
void __HBMSYNSetVoiceToRelease();
void __HBMSYNServiceVoice();

void __HBMSYNClearVoiceReferences(s8 *arg0);

void __HBMSYNSetVoiceToRelease(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 3;
}

void __HBMSYNServiceVoice(s32 arg0);

void __HBMSYNClearVoiceReferences();
void __HBMSYNServiceVoice();
