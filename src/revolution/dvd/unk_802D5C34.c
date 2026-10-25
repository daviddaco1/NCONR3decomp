#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s32 fn_802D5C34();

s32 fn_802D5C34(s8 *arg0) {
    s32 temp_r3;
    s8 **temp_r4;
    s8 *temp_r5;

    temp_r3 = OSDisableInterrupts();
    temp_r4 = M2C_FIELD(arg0, s8 ***, 4);
    temp_r5 = M2C_FIELD(arg0, s8 **, 0);
    if ((temp_r4 == NULL) || (temp_r5 == NULL)) {
        OSRestoreInterrupts(temp_r3);
        return 0;
    }
    *temp_r4 = temp_r5;
    M2C_FIELD(temp_r5, s8 ***, 4) = temp_r4;
    OSRestoreInterrupts(temp_r3);
    return 1;
}

// ---- Funciones aun sin C que matchee (asm generado) ----


