#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();                  /* extern */
extern s32 (*lbl_8049CF40)(s32);
extern M2C_UNK (*lbl_8049CF44)(s32);
extern const f32 lbl_804A2480;
extern const f32 lbl_804A2484;

s32 fn_8029FEDC();
s32 fn_8029FF04();
s32 fn_802A01C8();
s32 fn_802A0348();
void fn_802A044C();
void fn_802A04F8();
s32 fn_802A0770();

s32 fn_8029FEDC(s8 *arg0) {
    return (s32) (lbl_804A2480 * M2C_FIELD(arg0, f32 *, 0x38)) * 0xC;
}

void fn_802A04F8(s32 **arg0, s8 *arg1, s32 *arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6, M2C_UNK arg_sp0);

s32 fn_8029FF04(s8 *arg0);
s32 fn_802A01C8(s8 *arg0);
s32 fn_802A0348(s8 *arg0);
void fn_802A044C(s8 *arg0);
void fn_802A04F8();
s32 fn_802A0770(s8 *arg0);

s32 fn_8029FF04(s8 *arg0) {
    f32 temp_f1;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r29_3;
    s32 temp_r31;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 var_r0;
    u32 temp_r3;

    temp_r31 = OSDisableInterrupts();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    if (temp_f1 <= lbl_804A2484) {
        temp_r29 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 0));
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
        OSRestoreInterrupts(temp_r29);
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    temp_r3 = (u32) (lbl_804A2480 * temp_f1);
    M2C_FIELD(arg0, u32 *, 0x14) = temp_r3;
    if ((s32) temp_r3 == 0) {
        M2C_FIELD(arg0, u32 *, 0x14) = 1U;
    }
    temp_r3_2 = lbl_8049CF40(M2C_FIELD(arg0, u32 *, 0x14) * 4);
    M2C_FIELD(arg0, s32 *, 0) = temp_r3_2;
    if (temp_r3_2 == 0) {
        var_r0 = 0;
    } else {
        temp_r3_3 = lbl_8049CF40(M2C_FIELD(arg0, u32 *, 0x14) * 4);
        M2C_FIELD(arg0, s32 *, 4) = temp_r3_3;
        if (temp_r3_3 == 0) {
            var_r0 = 0;
        } else {
            temp_r3_4 = lbl_8049CF40(M2C_FIELD(arg0, u32 *, 0x14) * 4);
            M2C_FIELD(arg0, s32 *, 8) = temp_r3_4;
            var_r0 = temp_r3_4 != 0;
        }
    }
    if (var_r0 == 0) {
        temp_r29_2 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 0));
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
        OSRestoreInterrupts(temp_r29_2);
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    if (fn_802A0770(arg0) == 0) {
        temp_r29_3 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 0));
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
        OSRestoreInterrupts(temp_r29_3);
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((M2C_FIELD(arg0, s32 *, 0x34) | 2) & 0xFFFFFFFE);
    OSRestoreInterrupts(temp_r31);
    return 1;
}

s32 fn_802A01C8(s8 *arg0) {
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r29;

    temp_r29 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
    temp_r30 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
        lbl_8049CF44(M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
        lbl_8049CF44(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        lbl_8049CF44(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    OSRestoreInterrupts(temp_r30);
    if (fn_8029FF04(arg0) == 0) {
        temp_r30_2 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 0));
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
        OSRestoreInterrupts(temp_r30_2);
        OSRestoreInterrupts(temp_r29);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((M2C_FIELD(arg0, s32 *, 0x34) | 2) & 0xFFFFFFFE);
    OSRestoreInterrupts(temp_r29);
    return 1;
}

s32 fn_802A0348(s8 *arg0) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r30 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
    if (fn_802A0770(arg0) == 0) {
        temp_r31 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 0));
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
            lbl_8049CF44(M2C_FIELD(arg0, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
        OSRestoreInterrupts(temp_r31);
        OSRestoreInterrupts(temp_r30);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((M2C_FIELD(arg0, s32 *, 0x34) | 2) & 0xFFFFFFFE);
    OSRestoreInterrupts(temp_r30);
    return 1;
}

void fn_802A044C(s8 *arg0) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
        lbl_8049CF44(M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
        lbl_8049CF44(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        lbl_8049CF44(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    OSRestoreInterrupts(temp_r31);
}
