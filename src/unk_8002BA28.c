#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXSetTexCoordGen2();        /* extern */
M2C_UNK GXSetVtxAttrFmt(); /* extern */
M2C_UNK GXSetVtxDesc();             /* extern */
extern f32 lbl_8049E858;

void fn_8002BA28();
void fn_8002BCD0();
s32 fn_8002BD2C();
void fn_8002D7B0();
void fn_8002D7B4();
void fn_8002D7C0();
void fn_8002D7D8();
s32 fn_8002D7E8();
s32 fn_8002D7FC();
s32 fn_8002D80C();

// fn_8002BA28: definicion C reemplazada por asm (ver abajo)


void fn_8002BCD0(s8 *arg0) {
    if ((fn_8002D7FC(arg0) != 0) && (fn_8002D7E8(arg0, 1) != 0)) {
        fn_8002BA28(arg0 + 0xC, fn_8002B99C(M2C_FIELD(arg0, s8 **, 8)));
    }
}

s32 fn_8002BD2C(s8 *arg0, s32 arg1);

void fn_8002D7B0(void) {

}

// fn_8002D7B4: definicion C reemplazada por asm (ver abajo)




s32 fn_8002D7E8(s8 *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0xC) & arg1) != 0;
}

s32 fn_8002D7FC(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) != 0;
}

s32 fn_8002D80C(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C) != 0;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049E848;
extern float lbl_8049E850;
extern void DCInvalidateRange();
extern void GXClearVtxDesc();
extern void GXInvalidateTexAll();
extern void GXLoadTexObj();
extern void GXSetAlphaUpdate();
extern void GXSetBlendMode();
extern void GXSetDither();
extern void GXSetNumChans();
extern void GXSetNumTexGens();
extern void GXSetZMode();
extern void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern void _restgpr_23();
extern void _savegpr_23();
void fn_8002BA28(s8 *arg0, s32 arg1);
s32 fn_8002BD2C();
void fn_8002D7B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8002D7C0();
void fn_8002D7D8();
extern void fn_80034F44();
extern void fn_8003D62C();
extern void fn_802E151C();
extern void fn_802E430C();
extern void fn_802E432C();
extern void fn_802E4460();
extern void fn_802E44A0();
extern void fn_802E44E0();
extern void fn_802E4538();
extern void fn_802E4654();
extern void fn_802E46B0();
extern void fn_802E4700();
extern void fn_802E4750();
extern void fn_802E4808();
extern void fn_802E48CC();
extern void fn_802E4A28();

// asm_to_cpp: fn_8002BA28
asm void fn_8002BA28(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x0
    bl fn_8003D62C
    mr r3, r31
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8002D7B4
    li r3, 0x1
    bl fn_802E4A28
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_8002BAC0
    li r31, 0x0
    b lbl_8002BAD0
lbl_8002BAC0:
    cmplwi r0, 0x1
    li r31, 0x2
    bne lbl_8002BAD0
    li r31, 0x1
lbl_8002BAD0:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    mr r6, r31
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x1
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    li r4, 0x4
    beq lbl_8002BBA0
    li r4, 0x1
lbl_8002BBA0:
    li r5, 0x1
    li r6, 0x0
    bl GXSetBlendMode
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    lhz r0, 0xe(r3)
    lfd f1, lbl_8049E848
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f31, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f30, f0, f1
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E858
    fmr f2, f1
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f31
    lfs f2, lbl_8049E858
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f31
    fmr f2, f30
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x1
    bl fn_8002D7C0
    lfs f1, lbl_8049E858
    fmr f2, f30
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x1
    bl fn_8002D7C0
    bl fn_8002D7B0
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8002BD2C
asm s32 fn_8002BD2C() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    stfd f29, 0xc0(r1)
    opword 0xF3A100C8
    stfd f28, 0xb0(r1)
    opword 0xF38100B8
    stfd f27, 0xa0(r1)
    opword 0xF36100A8
    stfd f26, 0x90(r1)
    opword 0xF3410098
    addi r11, r1, 0x90
    bl _savegpr_23
    mr r27, r3
    mr r23, r4
    bl fn_8002D7FC
    cmpwi r3, 0x0
    beq lbl_8002D74C
    mr r3, r27
    li r4, 0x1
    bl fn_8002D7E8
    cmpwi r3, 0x0
    beq lbl_8002D74C
    addi r29, r27, 0xc
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x1
    bl GXSetDither
    li r3, 0x0
    bl fn_8003D62C
    mr r3, r23
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x2
    bl fn_802E432C
    li r3, 0x3
    bl fn_802E432C
    li r3, 0x4
    bl fn_802E432C
    li r3, 0x5
    bl fn_802E432C
    li r3, 0x6
    bl fn_802E432C
    li r3, 0x7
    bl fn_802E432C
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8002D7B4
    mr r3, r27
    li r4, 0x4
    bl fn_8002D7E8
    cmpwi r3, 0x0
    beq lbl_8002C1CC
    lwz r0, 0x1d(r29)
    stw r0, 0x20(r1)
    li r3, 0x0
    addi r4, r1, 0x20
    bl fn_802E4654
    li r3, 0x6
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x9
    li r5, 0xf
    li r6, 0xc
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0xe
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x0
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x4
    li r5, 0x7
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0x0
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0xc
    bl fn_802E46B0
    li r3, 0x2
    li r4, 0x8
    li r5, 0xe
    li r6, 0xc
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x2
    li r4, 0xe
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x2
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x2
    li r4, 0x7
    li r5, 0x6
    li r6, 0x1
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x3
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x3
    li r4, 0x0
    li r5, 0xf
    li r6, 0xc
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x3
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x3
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x4
    li r4, 0xf
    li r5, 0x8
    li r6, 0x0
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x4
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x5
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x5
    li r4, 0xf
    li r5, 0x0
    li r6, 0x3
    li r7, 0x2
    bl fn_802E4460
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x5
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    b lbl_8002C4DC
lbl_8002C1CC:
    mr r3, r27
    li r4, 0x2
    bl fn_8002D7E8
    cmpwi r3, 0x0
    beq lbl_8002C304
    li r3, 0x2
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x9
    li r5, 0xf
    li r6, 0xc
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0xe
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0x0
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    b lbl_8002C4DC
lbl_8002C304:
    lwz r0, 0x1d(r29)
    stw r0, 0x1c(r1)
    li r3, 0x0
    addi r4, r1, 0x1c
    bl fn_802E4654
    li r3, 0x3
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xc
    bl fn_802E46B0
    li r3, 0x0
    li r4, 0x8
    li r5, 0xe
    li r6, 0xc
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0xe
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x6
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0x0
    li r5, 0xf
    li r6, 0xc
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0xf
    li r5, 0x8
    li r6, 0x0
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x2
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
lbl_8002C4DC:
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl GXSetBlendMode
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    lhz r0, 0xe(r3)
    srwi r0, r0, 3
    lfd f1, lbl_8049E850
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lis r4, 0x4330
    stw r4, 0x58(r1)
    lfd f0, 0x58(r1)
    fsubs f28, f0, f1
    lhz r0, 0x10(r3)
    srwi r0, r0, 3
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    stw r4, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f27, f0, f1
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E858
    fmr f2, f1
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    lfs f2, lbl_8049E858
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x1
    bl fn_8002D7C0
    lfs f1, lbl_8049E858
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x1
    bl fn_8002D7C0
    bl fn_8002D7B0
    lwz r3, 0x8(r27)
    bl fn_8002B99C
    mr r24, r3
    bl GXGetTexObjWidth
    mr r30, r3
    mr r3, r24
    bl GXGetTexObjHeight
    mr r31, r3
    mr r3, r24
    bl GXGetTexObjFmt
    mr r28, r3
    lwz r3, 0x8(r27)
    bl fn_8002B9A4
    clrlwi r4, r31, 16
    clrlwi r0, r30, 16
    slwi r0, r0, 2
    mullw r4, r4, r0
    bl DCInvalidateRange
    lwz r3, 0x8(r27)
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    mr r8, r28
    li r9, 0x0
    li r10, 0x1
    bl fn_80034F44
    bl fn_802E151C
    bl GXInvalidateTexAll
    mr r3, r24
    li r4, 0x0
    bl GXLoadTexObj
    lfs f0, lbl_8049E858
    stfs f0, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x2c(r1)
    la r24, lbl_8049E858
    lfs f30, 0x4(r24)
    stfs f30, 0x3c(r1)
    stfs f30, 0x28(r1)
    lwz r0, 0x4(r29)
    cmplwi r0, 0x1
    beq lbl_8002D214
    li r3, 0x7
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8002D7B4
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_8002D7B4
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x21
    bl fn_8002D7B4
    li r3, 0x3
    li r4, 0x1
    li r5, 0x4
    li r6, 0x24
    bl fn_8002D7B4
    li r3, 0x4
    li r4, 0x1
    li r5, 0x4
    li r6, 0x27
    bl fn_8002D7B4
    li r3, 0x5
    li r4, 0x1
    li r5, 0x4
    li r6, 0x2a
    bl fn_8002D7B4
    li r3, 0x6
    li r4, 0x1
    li r5, 0x4
    li r6, 0x2d
    bl fn_8002D7B4
    lbz r0, 0x10(r29)
    stb r0, 0x24(r1)
    lbz r0, 0x11(r29)
    stb r0, 0x25(r1)
    lbz r0, 0x12(r29)
    stb r0, 0x26(r1)
    lbz r0, 0x13(r29)
    stb r0, 0x27(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x18(r1)
    li r3, 0x0
    addi r4, r1, 0x18
    bl fn_802E4654
    li r3, 0x7
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x10
    bl fn_802E46B0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x10
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0x14
    bl fn_802E46B0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x14
    bl fn_802E4700
    li r3, 0x1
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x2
    li r4, 0x2
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0x14
    bl fn_802E46B0
    li r3, 0x2
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x2
    li r4, 0x14
    bl fn_802E4700
    li r3, 0x2
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x3
    li r4, 0x3
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x3
    li r4, 0x18
    bl fn_802E46B0
    li r3, 0x3
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x3
    li r4, 0x18
    bl fn_802E4700
    li r3, 0x3
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x4
    li r4, 0x4
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x4
    li r4, 0x18
    bl fn_802E46B0
    li r3, 0x4
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x4
    li r4, 0x18
    bl fn_802E4700
    li r3, 0x4
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x5
    li r4, 0x5
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x5
    li r4, 0x1c
    bl fn_802E46B0
    li r3, 0x5
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x5
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x5
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x6
    li r4, 0x6
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x6
    li r4, 0x1c
    bl fn_802E46B0
    li r3, 0x6
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x6
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x6
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    lfs f0, lbl_8049E858
    stfs f0, 0x44(r1)
    fneg f0, f30
    fdivs f0, f0, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f30, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x21
    li r5, 0x1
    bl GXLoadTexMtxImm
    fmr f0, f30
    fadds f30, f30, f0
    fneg f0, f30
    fdivs f0, f0, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x24
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f30, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x27
    li r5, 0x1
    bl GXLoadTexMtxImm
    lfs f0, 0x4(r24)
    fadds f30, f30, f0
    fneg f0, f30
    fdivs f0, f0, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x2a
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f30, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x2d
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E858
    fmr f2, f1
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    lfs f2, lbl_8049E858
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x1
    bl fn_8002D7C0
    lfs f1, lbl_8049E858
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x1
    bl fn_8002D7C0
    bl fn_8002D7B0
    lwz r3, 0x8(r27)
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    mr r8, r28
    li r9, 0x0
    li r10, 0x1
    bl fn_80034F44
    bl fn_802E151C
    bl GXInvalidateTexAll
    lbz r0, 0x10(r29)
    stb r0, 0x24(r1)
    lbz r0, 0x11(r29)
    stb r0, 0x25(r1)
    lbz r0, 0x12(r29)
    stb r0, 0x26(r1)
    lbz r0, 0x13(r29)
    stb r0, 0x27(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x14(r1)
    li r3, 0x0
    addi r4, r1, 0x14
    bl fn_802E4654
    lfs f0, lbl_8049E858
    stfs f0, 0x34(r1)
    lfs f29, 0x4(r24)
    fneg f0, f29
    fdivs f0, f0, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x21
    li r5, 0x1
    bl GXLoadTexMtxImm
    fmr f0, f29
    fadds f29, f29, f0
    fneg f0, f29
    fdivs f0, f0, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x24
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x27
    li r5, 0x1
    bl GXLoadTexMtxImm
    lfs f0, 0x4(r24)
    fadds f29, f29, f0
    fneg f0, f29
    fdivs f0, f0, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x2a
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x2d
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E858
    fmr f2, f1
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    lfs f2, lbl_8049E858
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x1
    bl fn_8002D7C0
    lfs f1, lbl_8049E858
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x1
    bl fn_8002D7C0
    bl fn_8002D7B0
    lwz r3, 0x8(r27)
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    mr r8, r28
    li r9, 0x0
    li r10, 0x1
    bl fn_80034F44
    bl fn_802E151C
    bl GXInvalidateTexAll
    lwz r0, 0x8(r29)
    cmplwi r0, 0x3
    li r24, 0x3
    bgt lbl_8002CF14
    mr r24, r0
lbl_8002CF14:
    la r3, lbl_8049E858
    lfs f29, 0x8(r3)
    li r23, 0x0
    li r26, 0x0
    li r25, 0xff
    lfs f30, lbl_8049E858
    lfs f31, 0x4(r3)
    b lbl_8002D208
lbl_8002CF34:
    stb r25, 0x24(r1)
    add r3, r29, r26
    lbz r0, 0x14(r3)
    stb r0, 0x25(r1)
    lbz r0, 0x15(r3)
    stb r0, 0x26(r1)
    lbz r0, 0x16(r3)
    stb r0, 0x27(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x10(r1)
    li r3, 0x0
    addi r4, r1, 0x10
    bl fn_802E4654
    fmr f26, f29
    fneg f0, f29
    fdivs f0, f0, f28
    stfs f0, 0x34(r1)
    stfs f30, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x21
    li r5, 0x1
    bl GXLoadTexMtxImm
    fadds f29, f29, f31
    fneg f0, f29
    fdivs f0, f0, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x24
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x27
    li r5, 0x1
    bl GXLoadTexMtxImm
    fadds f29, f29, f31
    fneg f0, f29
    fdivs f0, f0, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x2a
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x2d
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E858
    fmr f2, f1
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    lfs f2, lbl_8049E858
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x1
    bl fn_8002D7C0
    lfs f1, lbl_8049E858
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x1
    bl fn_8002D7C0
    bl fn_8002D7B0
    lwz r3, 0x8(r27)
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    mr r8, r28
    li r9, 0x0
    li r10, 0x1
    bl fn_80034F44
    bl fn_802E151C
    bl GXInvalidateTexAll
    stfs f30, 0x34(r1)
    fneg f0, f26
    fdivs f0, f0, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f26, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x21
    li r5, 0x1
    bl GXLoadTexMtxImm
    fadds f29, f26, f31
    fneg f0, f29
    fdivs f0, f0, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x24
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x27
    li r5, 0x1
    bl GXLoadTexMtxImm
    fadds f29, f29, f31
    fneg f0, f29
    fdivs f0, f0, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x2a
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x2d
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E858
    fmr f2, f1
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    lfs f2, lbl_8049E858
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x1
    bl fn_8002D7C0
    lfs f1, lbl_8049E858
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x1
    bl fn_8002D7C0
    bl fn_8002D7B0
    lwz r3, 0x8(r27)
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    mr r8, r28
    li r9, 0x0
    li r10, 0x1
    bl fn_80034F44
    bl fn_802E151C
    bl GXInvalidateTexAll
    addi r23, r23, 0x1
    addi r26, r26, 0x3
    fadds f29, f29, f31
lbl_8002D208:
    cmplw r23, r24
    blt lbl_8002CF34
    b lbl_8002D744
lbl_8002D214:
    li r3, 0x5
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8002D7B4
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_8002D7B4
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x21
    bl fn_8002D7B4
    li r3, 0x3
    li r4, 0x1
    li r5, 0x4
    li r6, 0x24
    bl fn_8002D7B4
    li r3, 0x4
    li r4, 0x1
    li r5, 0x4
    li r6, 0x27
    bl fn_8002D7B4
    li r3, 0x5
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x11
    bl fn_802E46B0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x11
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0x10
    bl fn_802E46B0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x10
    bl fn_802E4700
    li r3, 0x1
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x2
    li r4, 0x2
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0x14
    bl fn_802E46B0
    li r3, 0x2
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x2
    li r4, 0x14
    bl fn_802E4700
    li r3, 0x2
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x3
    li r4, 0x3
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x3
    li r4, 0x18
    bl fn_802E46B0
    li r3, 0x3
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x3
    li r4, 0x18
    bl fn_802E4700
    li r3, 0x3
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x4
    li r4, 0x4
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x4
    li r4, 0x1c
    bl fn_802E46B0
    li r3, 0x4
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x4
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x4
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r23, 0x0
    fmr f29, f30
    b lbl_8002D738
lbl_8002D5C8:
    add r3, r29, r23
    lbz r0, 0x11(r3)
    stb r0, 0x27(r1)
    stb r0, 0x26(r1)
    stb r0, 0x25(r1)
    stb r0, 0x24(r1)
    lwz r0, 0x24(r1)
    stw r0, 0xc(r1)
    li r3, 0x0
    addi r4, r1, 0xc
    bl fn_802E4654
    cmpwi r23, 0x0
    beq lbl_8002D604
    li r0, 0xff
    b lbl_8002D608
lbl_8002D604:
    lbz r0, 0x10(r29)
lbl_8002D608:
    stb r0, 0x24(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x8(r1)
    li r3, 0x1
    addi r4, r1, 0x8
    bl fn_802E4654
    fneg f1, f30
    fdivs f0, f1, f28
    stfs f0, 0x34(r1)
    fdivs f0, f1, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f30, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x21
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f30, f27
    stfs f0, 0x44(r1)
    addi r3, r1, 0x28
    li r4, 0x24
    li r5, 0x1
    bl GXLoadTexMtxImm
    fneg f0, f30
    fdivs f0, f0, f28
    stfs f0, 0x34(r1)
    addi r3, r1, 0x28
    li r4, 0x27
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E858
    fmr f2, f1
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    lfs f2, lbl_8049E858
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x0
    bl fn_8002D7C0
    fmr f1, f28
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x1
    li r4, 0x1
    bl fn_8002D7C0
    lfs f1, lbl_8049E858
    fmr f2, f27
    bl fn_8002D7D8
    li r3, 0x0
    li r4, 0x1
    bl fn_8002D7C0
    bl fn_8002D7B0
    lwz r3, 0x8(r27)
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    mr r8, r28
    li r9, 0x0
    li r10, 0x1
    bl fn_80034F44
    bl fn_802E151C
    bl GXInvalidateTexAll
    addi r23, r23, 0x1
    fadds f30, f30, f29
lbl_8002D738:
    lwz r0, 0x8(r29)
    cmplw r23, r0
    blt lbl_8002D5C8
lbl_8002D744:
    li r3, 0x1
    b lbl_8002D750
lbl_8002D74C:
    li r3, 0x0
lbl_8002D750:
    li r0, 0xe8
    opword 0x13E1000C
    lfd f31, 0xe0(r1)
    li r0, 0xd8
    opword 0x13C1000C
    lfd f30, 0xd0(r1)
    li r0, 0xc8
    opword 0x13A1000C
    lfd f29, 0xc0(r1)
    li r0, 0xb8
    opword 0x1381000C
    lfd f28, 0xb0(r1)
    li r0, 0xa8
    opword 0x1361000C
    lfd f27, 0xa0(r1)
    li r0, 0x98
    opword 0x1341000C
    lfd f26, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_23
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// asm_to_cpp: fn_8002D7B4
asm void fn_8002D7B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    li r7, 0x0
    li r8, 0x7d
    b GXSetTexCoordGen2
}

// asm_to_cpp: fn_8002D7C0
asm void fn_8002D7C0() {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    blr
}

// asm_to_cpp: fn_8002D7D8
asm void fn_8002D7D8() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}
