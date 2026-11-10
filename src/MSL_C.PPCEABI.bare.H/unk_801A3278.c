#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

f32 fn_801A3278();
f32 fn_801A32A0();
f32 fn_801A32CC();
f32 fn_801A32F4();
f32 fn_801A331C();
f32 fn_801A3344();

f32 fn_801A3278(f64 farg0);

f32 fn_801A32A0(f64 farg0, f64 farg1);

f32 fn_801A32CC(f64 farg0) {
    return (f32) cos((f64) (f32) farg0);
}

f32 fn_801A32F4(f64 farg0) {
    return (f32) sin((f64) (f32) farg0);
}

// fn_801A331C: definicion C reemplazada por asm (ver abajo)
f32 fn_801A331C(f64 farg0, s32 arg1);


f32 fn_801A3344(f64 farg0) {
    return (f32) tan((f64) (f32) farg0);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void acos();
extern void atan2();
f32 fn_801A3278();
f32 fn_801A32A0();
f32 fn_801A331C(f64 farg0, s32 arg1);

// asm_to_cpp: fn_801A331C
asm f32 fn_801A331C(f64 farg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    stw r0, 0x14(r1)
    bl sqrt
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801A32A0
asm f32 fn_801A32A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    frsp f2, f2
    stw r0, 0x14(r1)
    bl atan2
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801A3278
asm f32 fn_801A3278() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    frsp f1, f1
    stw r0, 0x14(r1)
    bl acos
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}
