#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

void fn_802A6134();

void fn_802A6134(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        GKI_freebuf(temp_r0);
        *arg0 = 0;
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----


