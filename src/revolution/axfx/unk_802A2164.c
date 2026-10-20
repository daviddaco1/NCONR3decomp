#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s32 lbl_80372650;
extern M2C_UNK lbl_80372850;
extern s32 lbl_8049CF40;
extern s32 lbl_8049CF44;
extern s32 lbl_8049D1D8;

s32 * fn_802A2164();
s8 * fn_802A2170();
void fn_802A2184();
void fn_802A2190();
void fn_802A219C();
void fn_802A21A8();

// fn_802A2164: definicion C reemplazada por asm (ver abajo)


// fn_802A2170: definicion C reemplazada por asm (ver abajo)


void fn_802A2184(s32 arg0) {
    OSAllocFromHeap(lbl_8049D1D8, arg0);
}

void fn_802A2190(s32 arg0) {
    OSFreeToHeap(lbl_8049D1D8, arg0);
}

void fn_802A219C(s32 arg0, s32 arg1) {
    lbl_8049CF40 = arg0;
    lbl_8049CF44 = arg1;
}

void fn_802A21A8(s32 *arg0, s32 *arg1) {
    *arg0 = lbl_8049CF40;
    *arg1 = lbl_8049CF44;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
s32 *fn_802A2164(void);
s8 *fn_802A2170(s32 arg0);

// asm_to_cpp: fn_802A2164
asm s32 *fn_802A2164(void) {
    nofralloc
    lis r3, lbl_80372650@ha
    addi r3, r3, lbl_80372650@l
    blr
}

// asm_to_cpp: fn_802A2170
asm s8 *fn_802A2170(s32 arg0) {
    nofralloc
    lis r4, lbl_80372850@ha
    slwi r0, r3, 4
    addi r4, r4, lbl_80372850@l
    add r3, r4, r0
    blr
}
