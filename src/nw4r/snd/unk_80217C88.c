#include "types.h"
#include "m2c_macros.h"

void DetachGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv(void *arg0);
s32 IsAttachedGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv(void *arg0);

void detail_AttachSound__Q34nw4r3snd11SoundHandleFPQ44nw4r3snd6detail10BasicSound();
void DetachSound__Q34nw4r3snd11SoundHandleFv();

void detail_AttachSound__Q34nw4r3snd11SoundHandleFPQ44nw4r3snd6detail10BasicSound(s8 **arg0, s8 *arg1) {
    *arg0 = arg1;
    if (IsAttachedGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv(arg1) != 0) {
        DetachGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv(*arg0);
    }
    M2C_FIELD(*arg0, s8 ***, 8) = arg0;
}

void DetachSound__Q34nw4r3snd11SoundHandleFv(s8 **arg0);

void DetachSound__Q34nw4r3snd11SoundHandleFv();
