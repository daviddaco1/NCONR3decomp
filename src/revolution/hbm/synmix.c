#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_8037ECD8;

void __HBMSYNSetupVolume();
void __HBMSYNSetupPan();
s32 __HBMSYNGetVoiceInput();
s32 __HBMSYNGetVoiceFader();
void __HBMSYNUpdateMix();

// __HBMSYNSetupVolume: definicion C reemplazada por asm (ver abajo)


void __HBMSYNSetupPan(s8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD((M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, u8 *, 0xC)), u8 *, 0xEC);
}

s32 __HBMSYNGetVoiceInput(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x34)) >> 0x10;
}

s32 __HBMSYNGetVoiceFader(s8 *arg0) {
    s8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, s8 **, 8);
    return (s32) (M2C_FIELD(temp_r4, s32 *, 0x68) + M2C_FIELD((temp_r4 + (M2C_FIELD(arg0, u8 *, 0xC) * 4)), s32 *, 0x6C)) >> 0x10;
}

void __HBMSYNUpdateMix(s8 *arg0) {
    s32 temp_r5_2;
    s8 *temp_r5;

    fn_80302BD0(M2C_FIELD(arg0, s8 **, 4), (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x34)) >> 0x10);
    fn_80302C08(M2C_FIELD(arg0, s8 **, 4), (s32) M2C_FIELD((M2C_FIELD(arg0, s8 **, 8) + (M2C_FIELD(arg0, u8 *, 0xC) * 4)), s32 *, 0xAC) >> 0x10);
    temp_r5 = M2C_FIELD(arg0, s8 **, 8);
    temp_r5_2 = M2C_FIELD(temp_r5, s32 *, 0x68);
    fn_80302CC0(M2C_FIELD(arg0, s8 **, 4), (s32) (temp_r5_2 + M2C_FIELD((temp_r5 + (M2C_FIELD(arg0, u8 *, 0xC) * 4)), s32 *, 0x6C)) >> 0x10, temp_r5_2);
    fn_80302C40(M2C_FIELD(arg0, s8 **, 4), (s32) M2C_FIELD((M2C_FIELD(arg0, s8 **, 8) + M2C_FIELD(arg0, u8 *, 0xC)), u8 *, 0xEC));
}

// ---- Funciones aun sin C que matchee (asm generado) ----
void __HBMSYNSetupVolume(s8 *arg0);

// asm_to_cpp: __HBMSYNSetupVolume
asm void __HBMSYNSetupVolume(s8 *arg0) {
    nofralloc
    lbz r0, 0xe(r3)
    lis r4, lbl_8037ECD8@ha
    lwz r5, 0x10(r3)
    addi r4, r4, lbl_8037ECD8@l
    slwi r0, r0, 2
    lwz r5, 0x4(r5)
    lwzx r0, r4, r0
    add r0, r5, r0
    stw r0, 0x2c(r3)
    blr
}
