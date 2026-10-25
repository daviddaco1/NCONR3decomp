#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s8 *lbl_8049E180;
extern void (*lbl_8049E184)(void);

void GDInitGDLObj();
void GDFlushCurrToMem();
void GDPadCurr32();

void GDInitGDLObj(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 + arg2);
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void GDFlushCurrToMem(void) {
    DCFlushRange(M2C_FIELD(lbl_8049E180, s32 *, 0), M2C_FIELD(lbl_8049E180, u32 *, 4));
}

void GDPadCurr32(void);

void GDOverflowed(void) {
    if (lbl_8049E184 != NULL) {
        lbl_8049E184();
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----
void GDOverflowed(void);
void GDPadCurr32();

// asm_to_cpp: GDPadCurr32
asm void GDPadCurr32() {
    nofralloc
    lwz r3, lbl_8049E180
    lwz r0, 0x8(r3)
    clrlwi. r3, r0, 27
    beqlr
    cmplwi cr1, r3, 0x20
    bgelr cr1
    subfic r0, r3, 0x20
    cmplwi r0, 0x8
    ble lbl_802DD1E0
    bgt cr1, lbl_802DD1E0
    subfic r0, r3, 0x1f
    li r6, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x18
    bge lbl_802DD1E0
lbl_802DD138:
    lwz r5, lbl_8049E180
    addi r3, r3, 0x8
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    bdnz lbl_802DD138
lbl_802DD1E0:
    subfic r0, r3, 0x20
    li r5, 0x0
    mtctr r0
    cmplwi r3, 0x20
    bgelr
lbl_802DD1F4:
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    bdnz lbl_802DD1F4
    blr
}

