#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();                       /* extern */
extern s32 lbl_803725C0[];
extern s32 lbl_803725E0[];
extern s32 (*lbl_8049CF40)(s32);
extern M2C_UNK (*lbl_8049CF44)(s32);
extern const f32 lbl_804A2498;
extern const f32 lbl_804A249C;

s32 AXFXReverbStdExpGetMemSize();
s32 AXFXReverbStdExpInit();
s32 AXFXReverbStdExpSettings();
s32 AXFXReverbStdExpSettingsUpdate();
void AXFXReverbStdExpShutdown();
void AXFXReverbStdExpCallback();
s32 __AllocDelayLine();
void __BzeroDelayLines();
void __FreeDelayLine();
s32 __InitParams();

void AXFXReverbStdExpShutdown(s8 *arg0) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    __FreeDelayLine(arg0);
    OSRestoreInterrupts(temp_r31);
}

void AXFXReverbStdExpCallback(s8 *arg0, s8 *arg1, M2C_UNK arg_sp0);

void AXFXReverbStdExpCallback();
s32 AXFXReverbStdExpGetMemSize(s8 *arg0);
s32 AXFXReverbStdExpInit(s8 *arg0);
s32 AXFXReverbStdExpSettings(s8 *arg0);
s32 AXFXReverbStdExpSettingsUpdate(s8 *arg0);
s32 __AllocDelayLine(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
void __BzeroDelayLines(s8 *arg0, M2C_UNK arg_sp0);
void __FreeDelayLine(s8 *arg0, M2C_UNK arg_sp0);
s32 __InitParams(s8 *arg0);

s32 AXFXReverbStdExpGetMemSize(s8* self) {
 s32 a=lbl_803725C0[7];
 s32 b=lbl_803725E0[24];
 s32 c=lbl_803725E0[25];
 s32 d=lbl_803725E0[26];
 s32 e=lbl_803725E0[27];
 s32 preDelay=(s32)(lbl_804A2498*M2C_FIELD(self,f32*,0xB8));
 s32 total=a+preDelay;
 total+=b;total+=c;total+=d;total+=e;
 return total*12;
}

s32 AXFXReverbStdExpInit(s8 *arg0) {
    f32 temp_f1;
    s32 tableValue;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r29_3;
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB8);
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    if (temp_f1 < lbl_804A249C) {
        temp_r29 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
        ((s32(*)(s8*))__FreeDelayLine)(arg0);
        OSRestoreInterrupts(temp_r29);
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    tableValue=lbl_803725C0[7];
    M2C_FIELD(arg0, s32 *, 0x14) = tableValue;
    M2C_FIELD(arg0, u32 *, 0x30) = (u32) (lbl_804A2498 * temp_f1);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(&lbl_803725E0, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(&lbl_803725E0, s32 *, 0x64);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(&lbl_803725E0, s32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) M2C_FIELD(&lbl_803725E0, s32 *, 0x6C);
    if (((s32(*)(s8*,s32))__AllocDelayLine)(arg0, (s32)&lbl_803725E0) == 0) {
        temp_r29_2 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
        ((s32(*)(s8*))__FreeDelayLine)(arg0);
        OSRestoreInterrupts(temp_r29_2);
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    ((s32(*)(s8*))__BzeroDelayLines)(arg0);
    if (((s32(*)(s8*))__InitParams)(arg0) == 0) {
        temp_r29_3 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
        ((s32(*)(s8*))__FreeDelayLine)(arg0);
        OSRestoreInterrupts(temp_r29_3);
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    OSRestoreInterrupts(temp_r31);
    return 1;
}
s32 AXFXReverbStdExpSettings(s8 *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;

    temp_r30 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    temp_r31 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    ((s32(*)(s8*))__FreeDelayLine)(arg0);
    OSRestoreInterrupts(temp_r31);
    if (AXFXReverbStdExpInit(arg0) == 0) {
        temp_r31_2 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
        ((s32(*)(s8*))__FreeDelayLine)(arg0);
        OSRestoreInterrupts(temp_r31_2);
        OSRestoreInterrupts(temp_r30);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xB0) | 2) & 0xFFFFFFFE);
    OSRestoreInterrupts(temp_r30);
    return 1;
}
s32 AXFXReverbStdExpSettingsUpdate(s8 *arg0) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r30 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    ((s32(*)(s8*))__BzeroDelayLines)(arg0);
    if (((s32(*)(s8*))__InitParams)(arg0) == 0) {
        temp_r31 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
        ((s32(*)(s8*))__FreeDelayLine)(arg0);
        OSRestoreInterrupts(temp_r31);
        OSRestoreInterrupts(temp_r30);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xB0) | 2) & 0xFFFFFFFE);
    OSRestoreInterrupts(temp_r30);
    return 1;
}
s32 __AllocDelayLine(s8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    s8 *var_r30;
    s8 *var_r29;
    s8 *var_r28;
    s8 *var_r28_2;
    s8 *var_r27;
    s8 *var_r27_2;
    u32 var_r26;
    u32 var_r26_2;
    u32 var_r25;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;

    var_r25 = 0U;
    var_r30 = arg0;
    var_r29 = arg0;
loop_1:
    temp_r3 = lbl_8049CF40(M2C_FIELD(arg0, s32 *, 0x14) * 4);
    M2C_FIELD(var_r30, s32 *, 0) = temp_r3;
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r0 != 0) {
        temp_r3_2 = lbl_8049CF40(temp_r0 * 4);
        M2C_FIELD(var_r30, s32 *, 0x1C) = temp_r3_2;
        if (temp_r3_2 == 0) {
            return 0;
        }
        goto block_7;
    }
    M2C_FIELD(var_r30, s32 *, 0x1C) = 0;
block_7:
    var_r27 = arg0;
    var_r28 = var_r29;
    var_r26 = 0U;
loop_8:
    temp_r3_3 = lbl_8049CF40(M2C_FIELD(var_r27, s32 *, 0x5C) * 4);
    M2C_FIELD(var_r28, s32 *, 0x34) = temp_r3_3;
    if (temp_r3_3 == 0) {
        return 0;
    }
    var_r26 += 1;
    var_r27 += 4;
    var_r28 += 4;
    if (var_r26 >= 2U) {
        var_r28_2 = arg0;
        var_r27_2 = var_r29;
        var_r26_2 = 0U;
loop_12:
        temp_r3_4 = lbl_8049CF40(M2C_FIELD(var_r28_2, s32 *, 0x94) * 4);
        M2C_FIELD(var_r27_2, s32 *, 0x6C) = temp_r3_4;
        if (temp_r3_4 == 0) {
            return 0;
        }
        var_r26_2 += 1;
        var_r28_2 += 4;
        var_r27_2 += 4;
        if (var_r26_2 >= 2U) {
            var_r25 += 1;
            var_r30 += 4;
            var_r29 += 8;
            if (var_r25 >= 3U) {
                return 1;
            }
            goto loop_1;
        }
        goto loop_12;
    }
    goto loop_8;
}
void __BzeroDelayLines(s8 *arg0, M2C_UNK arg_sp0) {
    s8 *var_r31;
    s8 *var_r30;
    s8 *var_r29;
    s8 *var_r29_2;
    s8 *var_r28;
    s8 *var_r28_2;
    u32 var_r27;
    u32 var_r27_2;
    u32 var_r26;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;

    var_r26 = 0U;
    var_r31 = arg0;
    var_r30 = arg0;
    do {
        temp_r3 = M2C_FIELD(var_r31, s32 *, 0);
        if (temp_r3 != 0) {
            memset(temp_r3, 0, M2C_FIELD(arg0, s32 *, 0x14) * 4);
        }
        temp_r3_2 = M2C_FIELD(var_r31, s32 *, 0x1C);
        if (temp_r3_2 != 0) {
            memset(temp_r3_2, 0, M2C_FIELD(arg0, s32 *, 0x30) * 4);
        }
        var_r28 = var_r30;
        var_r29 = arg0;
        var_r27 = 0U;
loop_6:
        temp_r3_3 = M2C_FIELD(var_r28, s32 *, 0x34);
        if (temp_r3_3 != 0) {
            memset(temp_r3_3, 0, M2C_FIELD(var_r29, s32 *, 0x5C) * 4);
        }
        var_r27 += 1;
        var_r28 += 4;
        var_r29 += 4;
        if (var_r27 < 2U) {
            goto loop_6;
        }
        var_r29_2 = var_r30;
        var_r28_2 = arg0;
        var_r27_2 = 0U;
loop_10:
        temp_r3_4 = M2C_FIELD(var_r29_2, s32 *, 0x6C);
        if (temp_r3_4 != 0) {
            memset(temp_r3_4, 0, M2C_FIELD(var_r28_2, s32 *, 0x94) * 4);
        }
        var_r27_2 += 1;
        var_r29_2 += 4;
        var_r28_2 += 4;
        if (var_r27_2 < 2U) {
            goto loop_10;
        }
        var_r26 += 1;
        var_r31 += 4;
        var_r30 += 8;
    } while (var_r26 < 3U);
}
void __FreeDelayLine(s8 *arg0, M2C_UNK arg_sp0) {
    s8 *var_r30;
    s8 *var_r29;
    s8 *var_r28;
    s8 *var_r28_2;
    u32 var_r27;
    u32 var_r27_2;
    u32 var_r26;

    var_r26 = 0U;
    var_r30 = arg0;
    var_r29 = arg0;
    do {
        if ((s32) M2C_FIELD(var_r30, s32 *, 0) != 0) {
            lbl_8049CF44(M2C_FIELD(var_r30, s32 *, 0));
            M2C_FIELD(var_r30, s32 *, 0) = 0;
        }
        if ((s32) M2C_FIELD(var_r30, s32 *, 0x1C) != 0) {
            lbl_8049CF44(M2C_FIELD(var_r30, s32 *, 0x1C));
            M2C_FIELD(var_r30, s32 *, 0x1C) = 0;
        }
        var_r28 = var_r29;
        var_r27 = 0U;
loop_6:
        if ((s32) M2C_FIELD(var_r28, s32 *, 0x34) != 0) {
            lbl_8049CF44(M2C_FIELD(var_r28, s32 *, 0x34));
            M2C_FIELD(var_r28, s32 *, 0x34) = 0;
        }
        var_r27 += 1;
        var_r28 += 4;
        if (var_r27 < 2U) {
            goto loop_6;
        }
        var_r28_2 = var_r29;
        var_r27_2 = 0U;
loop_10:
        if ((s32) M2C_FIELD(var_r28_2, s32 *, 0x6C) != 0) {
            lbl_8049CF44(M2C_FIELD(var_r28_2, s32 *, 0x6C));
            M2C_FIELD(var_r28_2, s32 *, 0x6C) = 0;
        }
        var_r27_2 += 1;
        var_r28_2 += 4;
        if (var_r27_2 < 2U) {
            goto loop_10;
        }
        var_r26 += 1;
        var_r30 += 4;
        var_r29 += 8;
    } while (var_r26 < 3U);
}
