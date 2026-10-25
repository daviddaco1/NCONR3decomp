#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

void OSReport();
void fn_80315F98();

// OSReport: definicion C reemplazada por asm (ver abajo)


void fn_80315F98(s32 arg0, s32 arg1, s32 arg2) {
    vprintf((s32 *) arg0, (s32 *) arg1, arg2);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
void OSReport(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);

// asm_to_cpp: OSReport
asm void OSReport(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    bne cr1, lbl_80315F40
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80315F40:
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x100
    stw r3, 0x8(r1)
    addi r31, r1, 0x68
    stw r4, 0xc(r1)
    mr r4, r31
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl vprintf
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
