#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXInitTexObj(); /* extern */
M2C_UNK GXSetTexCoordGen2(); /* extern */
M2C_UNK GXSetVtxAttrFmt(); /* extern */
M2C_UNK GXSetVtxDesc();             /* extern */
extern f32 lbl_80341EE0;
extern f32 lbl_80341EE4;
extern f32 lbl_80341EF0;
extern M2C_UNK lbl_8037DCF0;
extern M2C_UNK lbl_80462460;
extern M2C_UNK lbl_80462478;

s8 * fn_802FD684();
s32 fn_802FD8B0();
void fn_802FD8F0();
s32 fn_802FD8F8();
void fn_802FD900();
void fn_802FE378();
void fn_802FE3BC();
void fn_802FE50C();
void fn_802FE66C();
f32 fn_802FE7EC();
f32 fn_802FE7F4();
void fn_802FE7FC();
f32 fn_802FE8CC();
f32 fn_802FE930();
f32 fn_802FE994();
u8 fn_802FE9F8();
f32 fn_802FEA00();
f32 fn_802FEA08();
void fn_802FEB44();
void fn_802FEB50();
void fn_802FEB58();
void fn_802FEB60();
void fn_802FEB70();
f32 fn_802FEB80();
f32 fn_802FEB88();
void fn_802FEB90();
void fn_802FEE14();
void fn_802FF174();
s8 * fn_802FF21C();
s32 * fn_802FF2A0();
s32 fn_802FF2E8();

// fn_802FD684: definicion C reemplazada por asm (ver abajo)


s32 fn_802FD8B0(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

void fn_802FD8F0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

s32 fn_802FD8F8(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

// fn_802FD900: definicion C reemplazada por asm (ver abajo)


// fn_802FE378: definicion C reemplazada por asm (ver abajo)


// fn_802FE3BC: definicion C reemplazada por asm (ver abajo)


// fn_802FE50C: definicion C reemplazada por asm (ver abajo)


// fn_802FE66C: definicion C reemplazada por asm (ver abajo)


f32 fn_802FE7EC(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

f32 fn_802FE7F4(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x28);
}


// fn_802FE8CC: definicion C reemplazada por asm (ver abajo)


// fn_802FE930: definicion C reemplazada por asm (ver abajo)


// fn_802FE994: definicion C reemplazada por asm (ver abajo)


u8 fn_802FE9F8(s8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x43);
}

f32 fn_802FEA00(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x44);
}

f32 fn_802FEA08(s8 *arg0, s32 arg1);






f32 fn_802FEB80(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

f32 fn_802FEB88(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}


// fn_802FEE14: definicion C reemplazada por asm (ver abajo)


// fn_802FF174: definicion C reemplazada por asm (ver abajo)


// fn_802FF21C: definicion C reemplazada por asm (ver abajo)


s32 *fn_802FF2A0(s32 *arg0, s32 **arg1);

s32 fn_802FF2E8(s32 *arg0, s8 *arg1, s32 arg2, s32 *arg3);

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_80341EE8[];
extern u8 lbl_80341EF8[];
extern void GXClearVtxDesc();
extern void GXInitTexObjLOD();
extern void GXLoadTexObj();
extern void GXSetBlendMode();
extern void GXSetChanCtrl();
extern void GXSetFog();
extern void GXSetNumChans();
extern void GXSetNumTexGens();
extern void GXSetTexCoordScaleManually();
extern void __register_global_object();
extern void _restgpr_24();
extern void _savegpr_24();
extern void fn_802E430C();
extern void fn_802E432C();
extern void fn_802E43CC();
extern void fn_802E4460();
extern void fn_802E44A0();
extern void fn_802E44E0();
extern void fn_802E4538();
extern void fn_802E4590();
extern void fn_802E4750();
extern void fn_802E4840();
extern void fn_802E48CC();
extern void fn_802E4A28();
s8 *fn_802FD684(s8 *arg0);
void fn_802FD900(s8 *arg0);
void fn_802FE378(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4);
void fn_802FE3BC(s8 *arg0, s32 arg1);
void fn_802FE50C(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_802FE66C(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_802FE7FC();
f32 fn_802FE8CC(s8 *arg0);
f32 fn_802FE930(s8 *arg0);
f32 fn_802FE994(s8 *arg0);
f32 fn_802FEA08();
void fn_802FEB44();
void fn_802FEB50();
void fn_802FEB58();
void fn_802FEB60();
void fn_802FEB70();
void fn_802FEB90();
void fn_802FEE14(u8 *arg0, u8 *arg1);
void fn_802FF174(s8 *arg0, s32 arg1);
s8 *fn_802FF21C(s8 *arg0, s32 arg1);
s32 * fn_802FF2A0();
s32 fn_802FF2E8();

// asm_to_cpp: fn_802FD684
asm s8 *fn_802FD684(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80341EE0@ha
    lis r7, lbl_80462478@ha
    stw r0, 0x24(r1)
    li r8, -0x1
    lfs f0, lbl_80341EE0@l(r4)
    li r0, 0xff
    stw r31, 0x1c(r1)
    addi r6, r7, lbl_80462478@l
    mr r31, r3
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    li r30, 0x0
    addi r5, r1, 0xc
    stw r8, 0x0(r3)
    stw r8, 0x4(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stw r8, 0x10(r3)
    stw r8, 0x14(r3)
    stw r8, 0x18(r3)
    stw r8, 0x1c(r3)
    stb r0, 0x42(r3)
    stb r30, 0x43(r3)
    stfs f0, 0x44(r3)
    stw r30, 0x48(r3)
    stw r0, lbl_80462478@l(r7)
    stw r30, 0x4(r6)
    stw r30, 0x8(r1)
    stw r8, 0xc(r1)
    bl fn_802FE378
    lbz r5, 0x18(r31)
    cmpwi r30, 0x1
    lbz r4, 0x19(r31)
    lbz r3, 0x1a(r31)
    lbz r0, 0x1b(r31)
    stw r30, 0x20(r31)
    stb r5, 0x8(r31)
    stb r4, 0x9(r31)
    stb r3, 0xa(r31)
    stb r0, 0xb(r31)
    beq lbl_802FD738
    addi r4, r31, 0x18
    b lbl_802FD73C
lbl_802FD738:
    addi r4, r31, 0x1c
lbl_802FD73C:
    lbz r3, 0x0(r4)
    lwz r0, 0x20(r31)
    stb r3, 0xc(r31)
    cmpwi r0, 0x2
    lbz r0, 0x1(r4)
    stb r0, 0xd(r31)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r31)
    lbz r0, 0x3(r4)
    stb r0, 0xf(r31)
    beq lbl_802FD770
    addi r4, r31, 0x18
    b lbl_802FD774
lbl_802FD770:
    addi r4, r31, 0x1c
lbl_802FD774:
    lbz r3, 0x0(r4)
    lwz r0, 0x20(r31)
    stb r3, 0x10(r31)
    cmpwi r0, 0x0
    lbz r0, 0x1(r4)
    stb r0, 0x11(r31)
    lbz r0, 0x2(r4)
    stb r0, 0x12(r31)
    lbz r0, 0x3(r4)
    stb r0, 0x13(r31)
    bne lbl_802FD7A8
    addi r10, r31, 0x18
    b lbl_802FD7AC
lbl_802FD7A8:
    addi r10, r31, 0x1c
lbl_802FD7AC:
    lbz r0, 0x0(r10)
    lis r3, 0x8081
    subi r12, r3, 0x7f7f
    lbz r5, 0xb(r31)
    stb r0, 0x14(r31)
    li r0, -0x1
    lbz r9, 0x42(r31)
    mr r3, r31
    lbz r7, 0x1(r10)
    addi r4, r1, 0x10
    lbz r6, 0xf(r31)
    mullw r8, r5, r9
    stb r7, 0x15(r31)
    lbz r5, 0x13(r31)
    lbz r7, 0x2(r10)
    stb r7, 0x16(r31)
    mullw r6, r6, r9
    lbz r10, 0x3(r10)
    mullw r7, r5, r9
    mullw r5, r10, r9
    mulhw r10, r12, r8
    mulhw r9, r12, r6
    add r8, r10, r8
    srawi r10, r8, 7
    mulhw r8, r12, r7
    srwi r11, r10, 31
    add r6, r9, r6
    add r10, r10, r11
    srawi r9, r6, 7
    stb r10, 0xb(r31)
    add r7, r8, r7
    srwi r8, r9, 31
    mulhw r6, r12, r5
    add r9, r9, r8
    srawi r7, r7, 7
    stb r9, 0xf(r31)
    srwi r8, r7, 31
    add r5, r6, r5
    srawi r5, r5, 7
    add r7, r7, r8
    srwi r6, r5, 31
    stb r7, 0x13(r31)
    add r5, r5, r6
    stb r5, 0x17(r31)
    stw r0, 0x10(r1)
    bl fn_802FE50C
    lis r4, lbl_80341EE4@ha
    lis r3, lbl_80341EE0@ha
    lfs f0, lbl_80341EE0@l(r3)
    li r0, 0x1
    lfs f1, lbl_80341EE4@l(r4)
    mr r3, r31
    stfs f0, 0x2c(r31)
    stfs f1, 0x24(r31)
    stfs f1, 0x28(r31)
    stfs f0, 0x30(r31)
    stfs f0, 0x34(r31)
    stw r0, 0x38(r31)
    stw r0, 0x3c(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802FD900
asm void fn_802FD900(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0xff
    stw r31, 0x2c(r1)
    lis r31, lbl_80462460@ha
    addi r31, r31, lbl_80462460@l
    stw r30, 0x28(r1)
    li r30, 0x0
    addi r4, r31, 0x18
    stw r0, 0x18(r31)
    stw r30, 0x4(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802FD94C
    lwz r4, 0x4(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_802FD99C
lbl_802FD94C:
    lbz r0, 0x0(r3)
    addi r4, r1, 0x1c
    stb r0, 0x20(r1)
    lbz r0, 0x1(r3)
    stb r0, 0x21(r1)
    lbz r0, 0x2(r3)
    stb r0, 0x22(r1)
    lbz r0, 0x3(r3)
    stb r0, 0x23(r1)
    lbz r0, 0x4(r3)
    stb r0, 0x1c(r1)
    lbz r0, 0x5(r3)
    stb r0, 0x1d(r1)
    lbz r0, 0x6(r3)
    stb r0, 0x1e(r1)
    lbz r0, 0x7(r3)
    addi r3, r1, 0x20
    stb r0, 0x1f(r1)
    bl fn_802FEE14
    b lbl_802FE360
lbl_802FD99C:
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_802FE190
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x4
    bge lbl_802FD9D4
    cmpwi r3, 0x2
    bge lbl_802FDC10
    cmpwi r3, 0x0
    bge lbl_802FD9E0
    b lbl_802FDFB8
lbl_802FD9D4:
    cmpwi r3, 0x7
    bge lbl_802FDFB8
    b lbl_802FDDE4
lbl_802FD9E0:
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_802FDA0C
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r30, 0x10(r31)
    addi r3, r31, 0x10
    addi r5, r31, 0x4
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    bl __register_global_object
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_802FDA0C:
    lis r3, lbl_80341EE0@ha
    addi r6, r31, 0x10
    lfs f1, lbl_80341EE0@l(r3)
    addi r4, r1, 0x18
    lbz r3, 0x10(r31)
    lbz r7, 0x1(r6)
    fmr f2, f1
    lbz r5, 0x2(r6)
    fmr f3, f1
    lbz r0, 0x3(r6)
    fmr f4, f1
    stb r3, 0x18(r1)
    li r3, 0x0
    stb r7, 0x19(r1)
    stb r5, 0x1a(r1)
    stb r0, 0x1b(r1)
    bl GXSetFog
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xa
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl GXSetVtxAttrFmt
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    b lbl_802FE360
lbl_802FDC10:
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_802FDC3C
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r30, 0x10(r31)
    addi r3, r31, 0x10
    addi r5, r31, 0x4
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    bl __register_global_object
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_802FDC3C:
    lis r3, lbl_80341EE0@ha
    addi r6, r31, 0x10
    lfs f1, lbl_80341EE0@l(r3)
    addi r4, r1, 0x14
    lbz r3, 0x10(r31)
    lbz r7, 0x1(r6)
    fmr f2, f1
    lbz r5, 0x2(r6)
    fmr f3, f1
    lbz r0, 0x3(r6)
    fmr f4, f1
    stb r3, 0x14(r1)
    li r3, 0x0
    stb r7, 0x15(r1)
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
    bl GXSetFog
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x0
    bl fn_802E43CC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl GXSetVtxAttrFmt
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    b lbl_802FE360
lbl_802FDDE4:
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_802FDE10
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r30, 0x10(r31)
    addi r3, r31, 0x10
    addi r5, r31, 0x4
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    bl __register_global_object
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_802FDE10:
    lis r3, lbl_80341EE0@ha
    addi r6, r31, 0x10
    lfs f1, lbl_80341EE0@l(r3)
    addi r4, r1, 0x10
    lbz r3, 0x10(r31)
    lbz r7, 0x1(r6)
    fmr f2, f1
    lbz r5, 0x2(r6)
    fmr f3, f1
    lbz r0, 0x3(r6)
    fmr f4, f1
    stb r3, 0x10(r1)
    li r3, 0x0
    stb r7, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    bl GXSetFog
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x0
    bl fn_802E43CC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl GXSetVtxAttrFmt
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    b lbl_802FE360
lbl_802FDFB8:
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_802FDFE8
    li r0, 0x0
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r0, 0x10(r31)
    addi r3, r31, 0x10
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    addi r5, r31, 0x4
    bl __register_global_object
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_802FDFE8:
    lis r3, lbl_80341EE0@ha
    addi r6, r31, 0x10
    lfs f1, lbl_80341EE0@l(r3)
    addi r4, r1, 0xc
    lbz r3, 0x10(r31)
    lbz r7, 0x1(r6)
    fmr f2, f1
    lbz r5, 0x2(r6)
    fmr f3, f1
    lbz r0, 0x3(r6)
    fmr f4, f1
    stb r3, 0xc(r1)
    li r3, 0x0
    stb r7, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    bl GXSetFog
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x0
    bl fn_802E43CC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl GXSetVtxAttrFmt
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    b lbl_802FE360
lbl_802FE190:
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_802FE1BC
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r30, 0x10(r31)
    addi r3, r31, 0x10
    addi r5, r31, 0x4
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    bl __register_global_object
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_802FE1BC:
    lis r3, lbl_80341EE0@ha
    addi r6, r31, 0x10
    lfs f1, lbl_80341EE0@l(r3)
    addi r4, r1, 0x8
    lbz r3, 0x10(r31)
    lbz r7, 0x1(r6)
    fmr f2, f1
    lbz r5, 0x2(r6)
    fmr f3, f1
    lbz r0, 0x3(r6)
    fmr f4, f1
    stb r3, 0x8(r1)
    li r3, 0x0
    stb r7, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    bl GXSetFog
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x0
    bl fn_802E43CC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl GXSetVtxAttrFmt
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_802FE360:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802FE378
asm void fn_802FE378(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4) {
    nofralloc
    lbz r11, 0x0(r4)
    lbz r10, 0x1(r4)
    lbz r9, 0x2(r4)
    lbz r8, 0x3(r4)
    lbz r7, 0x0(r5)
    lbz r6, 0x1(r5)
    lbz r4, 0x2(r5)
    lbz r0, 0x3(r5)
    stb r11, 0x0(r3)
    stb r10, 0x1(r3)
    stb r9, 0x2(r3)
    stb r8, 0x3(r3)
    stb r7, 0x4(r3)
    stb r6, 0x5(r3)
    stb r4, 0x6(r3)
    stb r0, 0x7(r3)
    blr
}

// asm_to_cpp: fn_802FE3BC
asm void fn_802FE3BC(s8 *arg0, s32 arg1) {
    nofralloc
    lbz r7, 0x18(r3)
    cmpwi r4, 0x1
    lbz r6, 0x19(r3)
    lbz r5, 0x1a(r3)
    lbz r0, 0x1b(r3)
    stw r4, 0x20(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r0, 0xb(r3)
    beq lbl_802FE3F0
    addi r5, r3, 0x18
    b lbl_802FE3F4
lbl_802FE3F0:
    addi r5, r3, 0x1c
lbl_802FE3F4:
    lbz r4, 0x0(r5)
    lwz r0, 0x20(r3)
    stb r4, 0xc(r3)
    cmpwi r0, 0x2
    lbz r0, 0x1(r5)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r5)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xf(r3)
    beq lbl_802FE428
    addi r5, r3, 0x18
    b lbl_802FE42C
lbl_802FE428:
    addi r5, r3, 0x1c
lbl_802FE42C:
    lbz r4, 0x0(r5)
    lwz r0, 0x20(r3)
    stb r4, 0x10(r3)
    cmpwi r0, 0x0
    lbz r0, 0x1(r5)
    stb r0, 0x11(r3)
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_802FE460
    addi r8, r3, 0x18
    b lbl_802FE464
lbl_802FE460:
    addi r8, r3, 0x1c
lbl_802FE464:
    lbz r5, 0x0(r8)
    lis r4, 0x8081
    subi r10, r4, 0x7f7f
    lbz r0, 0xb(r3)
    stb r5, 0x14(r3)
    lbz r7, 0x42(r3)
    lbz r5, 0x1(r8)
    lbz r4, 0xf(r3)
    mullw r6, r0, r7
    stb r5, 0x15(r3)
    lbz r0, 0x13(r3)
    lbz r5, 0x2(r8)
    stb r5, 0x16(r3)
    mullw r4, r4, r7
    lbz r8, 0x3(r8)
    mullw r5, r0, r7
    mullw r0, r8, r7
    mulhw r8, r10, r6
    mulhw r7, r10, r4
    add r6, r8, r6
    srawi r8, r6, 7
    mulhw r6, r10, r5
    srwi r9, r8, 31
    add r4, r7, r4
    add r8, r8, r9
    srawi r7, r4, 7
    stb r8, 0xb(r3)
    add r5, r6, r5
    srwi r6, r7, 31
    mulhw r4, r10, r0
    add r7, r7, r6
    srawi r5, r5, 7
    stb r7, 0xf(r3)
    srwi r6, r5, 31
    add r0, r4, r0
    srawi r0, r0, 7
    add r5, r5, r6
    srwi r4, r0, 31
    stb r5, 0x13(r3)
    add r0, r0, r4
    stb r0, 0x17(r3)
    blr
}

// asm_to_cpp: fn_802FE50C
asm void fn_802FE50C(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    lwz r0, 0x20(r3)
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    cmpwi r0, 0x1
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x18(r3)
    stb r6, 0x19(r3)
    stb r5, 0x1a(r3)
    stb r0, 0x1b(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r0, 0xb(r3)
    beq lbl_802FE550
    addi r5, r3, 0x18
    b lbl_802FE554
lbl_802FE550:
    addi r5, r3, 0x1c
lbl_802FE554:
    lbz r4, 0x0(r5)
    lwz r0, 0x20(r3)
    stb r4, 0xc(r3)
    cmpwi r0, 0x2
    lbz r0, 0x1(r5)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r5)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xf(r3)
    beq lbl_802FE588
    addi r5, r3, 0x18
    b lbl_802FE58C
lbl_802FE588:
    addi r5, r3, 0x1c
lbl_802FE58C:
    lbz r4, 0x0(r5)
    lwz r0, 0x20(r3)
    stb r4, 0x10(r3)
    cmpwi r0, 0x0
    lbz r0, 0x1(r5)
    stb r0, 0x11(r3)
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_802FE5C0
    addi r8, r3, 0x18
    b lbl_802FE5C4
lbl_802FE5C0:
    addi r8, r3, 0x1c
lbl_802FE5C4:
    lbz r5, 0x0(r8)
    lis r4, 0x8081
    subi r10, r4, 0x7f7f
    lbz r0, 0xb(r3)
    stb r5, 0x14(r3)
    lbz r7, 0x42(r3)
    lbz r5, 0x1(r8)
    lbz r4, 0xf(r3)
    mullw r6, r0, r7
    stb r5, 0x15(r3)
    lbz r0, 0x13(r3)
    lbz r5, 0x2(r8)
    stb r5, 0x16(r3)
    mullw r4, r4, r7
    lbz r8, 0x3(r8)
    mullw r5, r0, r7
    mullw r0, r8, r7
    mulhw r8, r10, r6
    mulhw r7, r10, r4
    add r6, r8, r6
    srawi r8, r6, 7
    mulhw r6, r10, r5
    srwi r9, r8, 31
    add r4, r7, r4
    add r8, r8, r9
    srawi r7, r4, 7
    stb r8, 0xb(r3)
    add r5, r6, r5
    srwi r6, r7, 31
    mulhw r4, r10, r0
    add r7, r7, r6
    srawi r5, r5, 7
    stb r7, 0xf(r3)
    srwi r6, r5, 31
    add r0, r4, r0
    srawi r0, r0, 7
    add r5, r5, r6
    srwi r4, r0, 31
    stb r5, 0x13(r3)
    add r0, r0, r4
    stb r0, 0x17(r3)
    blr
}

// asm_to_cpp: fn_802FE66C
asm void fn_802FE66C(s8 *arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    lwz r0, 0x20(r3)
    lbz r11, 0x0(r4)
    lbz r10, 0x1(r4)
    cmpwi r0, 0x1
    lbz r9, 0x2(r4)
    lbz r8, 0x3(r4)
    lbz r7, 0x0(r5)
    lbz r6, 0x1(r5)
    lbz r4, 0x2(r5)
    lbz r0, 0x3(r5)
    stb r11, 0x18(r3)
    stb r10, 0x19(r3)
    stb r9, 0x1a(r3)
    stb r8, 0x1b(r3)
    stb r7, 0x1c(r3)
    stb r6, 0x1d(r3)
    stb r4, 0x1e(r3)
    stb r0, 0x1f(r3)
    stb r11, 0x8(r3)
    stb r10, 0x9(r3)
    stb r9, 0xa(r3)
    stb r8, 0xb(r3)
    beq lbl_802FE6D0
    addi r5, r3, 0x18
    b lbl_802FE6D4
lbl_802FE6D0:
    addi r5, r3, 0x1c
lbl_802FE6D4:
    lbz r4, 0x0(r5)
    lwz r0, 0x20(r3)
    stb r4, 0xc(r3)
    cmpwi r0, 0x2
    lbz r0, 0x1(r5)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r5)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xf(r3)
    beq lbl_802FE708
    addi r5, r3, 0x18
    b lbl_802FE70C
lbl_802FE708:
    addi r5, r3, 0x1c
lbl_802FE70C:
    lbz r4, 0x0(r5)
    lwz r0, 0x20(r3)
    stb r4, 0x10(r3)
    cmpwi r0, 0x0
    lbz r0, 0x1(r5)
    stb r0, 0x11(r3)
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_802FE740
    addi r8, r3, 0x18
    b lbl_802FE744
lbl_802FE740:
    addi r8, r3, 0x1c
lbl_802FE744:
    lbz r5, 0x0(r8)
    lis r4, 0x8081
    subi r10, r4, 0x7f7f
    lbz r0, 0xb(r3)
    stb r5, 0x14(r3)
    lbz r7, 0x42(r3)
    lbz r5, 0x1(r8)
    lbz r4, 0xf(r3)
    mullw r6, r0, r7
    stb r5, 0x15(r3)
    lbz r0, 0x13(r3)
    lbz r5, 0x2(r8)
    stb r5, 0x16(r3)
    mullw r4, r4, r7
    lbz r8, 0x3(r8)
    mullw r5, r0, r7
    mullw r0, r8, r7
    mulhw r8, r10, r6
    mulhw r7, r10, r4
    add r6, r8, r6
    srawi r8, r6, 7
    mulhw r6, r10, r5
    srwi r9, r8, 31
    add r4, r7, r4
    add r8, r8, r9
    srawi r7, r4, 7
    stb r8, 0xb(r3)
    add r5, r6, r5
    srwi r6, r7, 31
    mulhw r4, r10, r0
    add r7, r7, r6
    srawi r5, r5, 7
    stb r7, 0xf(r3)
    srwi r6, r5, 31
    add r0, r4, r0
    srawi r0, r0, 7
    add r5, r5, r6
    srwi r4, r0, 31
    stb r5, 0x13(r3)
    add r0, r0, r4
    stb r0, 0x17(r3)
    blr
}

// asm_to_cpp: fn_802FE7FC
asm void fn_802FE7FC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    fmr f30, f1
    fmr f31, f2
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    lis r31, 0x4330
    stw r0, 0xc(r1)
    lis r30, lbl_80341EE8@ha
    lwz r3, 0x48(r29)
    stw r31, 0x8(r1)
    lfd f1, lbl_80341EE8@l(r30)
    lfd f0, 0x8(r1)
    lwz r12, 0x0(r3)
    fsubs f0, f0, f1
    lwz r12, 0xc(r12)
    fdivs f31, f31, f0
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r31, 0x10(r1)
    lfd f1, lbl_80341EE8@l(r30)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    stfs f31, 0x28(r29)
    fsubs f0, f0, f1
    fdivs f0, f30, f0
    stfs f0, 0x24(r29)
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_802FE8CC
asm f32 fn_802FE8CC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r3, lbl_80341EE8@ha
    lfs f0, 0x24(r31)
    stw r0, 0x8(r1)
    lfd f2, lbl_80341EE8@l(r3)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802FE930
asm f32 fn_802FE930(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r3, lbl_80341EE8@ha
    lfs f0, 0x28(r31)
    stw r0, 0x8(r1)
    lfd f2, lbl_80341EE8@l(r3)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802FE994
asm f32 fn_802FE994(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r3, lbl_80341EE8@ha
    lfs f0, 0x28(r31)
    stw r0, 0x8(r1)
    lfd f2, lbl_80341EE8@l(r3)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802FEA08
asm f32 fn_802FEA08() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    lis r0, 0x4330
    mr r5, r4
    addi r4, r1, 0x8
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    stw r0, 0x20(r1)
    lwz r12, 0x0(r3)
    stw r0, 0x28(r1)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_802FEAB8
    lbz r4, 0xe(r1)
    lis r5, lbl_80341EE8@ha
    lbz r0, 0xc(r1)
    lis r3, lbl_80341EF0@ha
    extsb r4, r4
    lfd f4, lbl_80341EE8@l(r5)
    xoris r4, r4, 0x8000
    extsb r0, r0
    stw r4, 0x24(r1)
    xoris r0, r0, 0x8000
    lfs f3, 0x24(r31)
    lfd f0, 0x20(r1)
    stw r0, 0x2c(r1)
    fsubs f2, f0, f4
    lfs f31, 0x44(r31)
    lfd f0, 0x28(r1)
    lfs f1, lbl_80341EF0@l(r3)
    fmuls f2, f2, f3
    fsubs f0, f0, f4
    fsubs f2, f31, f2
    fmuls f0, f0, f3
    fmuls f1, f2, f1
    fadds f1, f1, f0
    b lbl_802FEAFC
lbl_802FEAB8:
    lbz r4, 0xe(r1)
    lis r3, lbl_80341EE8@ha
    lbz r0, 0xc(r1)
    extsb r4, r4
    lfd f3, lbl_80341EE8@l(r3)
    extsb r0, r0
    lfs f1, 0x24(r31)
    xoris r3, r4, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0x24(r1)
    stw r0, 0x2c(r1)
    lfd f2, 0x20(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f2, f3
    fsubs f0, f0, f3
    fmuls f31, f2, f1
    fmuls f1, f0, f1
lbl_802FEAFC:
    lfs f0, 0x2c(r31)
    mr r3, r31
    lfs f2, 0x30(r31)
    addi r4, r1, 0x8
    fadds f1, f0, f1
    lfs f3, 0x34(r31)
    bl fn_802FEB90
    lfs f0, 0x2c(r31)
    fmr f1, f31
    fadds f0, f0, f31
    stfs f0, 0x2c(r31)
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_802FEB44
asm void fn_802FEB44() {
    nofralloc
    stfs f1, 0x2c(r3)
    stfs f2, 0x30(r3)
    blr
}

// asm_to_cpp: fn_802FEB50
asm void fn_802FEB50() {
    nofralloc
    stfs f1, 0x2c(r3)
    blr
}

// asm_to_cpp: fn_802FEB58
asm void fn_802FEB58() {
    nofralloc
    stfs f1, 0x30(r3)
    blr
}

// asm_to_cpp: fn_802FEB60
asm void fn_802FEB60() {
    nofralloc
    lfs f0, 0x2c(r3)
    fadds f0, f0, f1
    stfs f0, 0x2c(r3)
    blr
}

// asm_to_cpp: fn_802FEB70
asm void fn_802FEB70() {
    nofralloc
    lfs f0, 0x30(r3)
    fadds f0, f0, f1
    stfs f0, 0x30(r3)
    blr
}

// asm_to_cpp: fn_802FEB90
asm void fn_802FEB90() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    stfd f27, 0x70(r1)
    opword 0xF3610078
    addi r11, r1, 0x70
    bl _savegpr_24
    lbz r25, 0x5(r4)
    lis r31, 0x4330
    lhz r6, 0x10(r4)
    li r11, 0x0
    lbz r24, 0x7(r4)
    lis r26, lbl_80341EF8@ha
    add r0, r6, r25
    lhz r8, 0x12(r4)
    lhz r5, 0xc(r4)
    slwi r6, r6, 15
    add r7, r8, r24
    slwi r8, r8, 15
    divwu r30, r6, r5
    lhz r6, 0xe(r4)
    slwi r27, r0, 15
    lwz r0, 0x0(r4)
    slwi r12, r7, 15
    lwz r10, 0x38(r3)
    divwu r29, r8, r6
    lis r8, lbl_80462478@ha
    lwz r7, lbl_80462478@l(r8)
    fmr f29, f3
    lwz r9, 0x3c(r3)
    fmr f27, f1
    divwu r28, r27, r5
    cmpw r11, r7
    stw r25, 0x3c(r1)
    fmr f28, f2
    lfd f5, lbl_80341EF8@l(r26)
    mr r27, r3
    stw r31, 0x38(r1)
    divwu r7, r12, r6
    lfd f0, 0x38(r1)
    stw r31, 0x40(r1)
    clrlwi r31, r30, 16
    fsubs f3, f0, f5
    lfs f0, 0x24(r3)
    fmuls f4, f3, f0
    stw r24, 0x44(r1)
    clrlwi r30, r29, 16
    clrlwi r29, r28, 16
    lfd f3, 0x40(r1)
    clrlwi r28, r7, 16
    fadds f31, f1, f4
    lfs f0, 0x28(r3)
    fsubs f1, f3, f5
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    fmuls f0, f1, f0
    stw r10, 0x10(r1)
    fadds f30, f2, f0
    stw r9, 0x14(r1)
    bne lbl_802FECC8
    addi r7, r8, lbl_80462478@l
    lwz r3, 0x4(r7)
    cmplw r0, r3
    bne lbl_802FECC8
    lwz r3, 0x8(r7)
    cmpw r10, r3
    bne lbl_802FECC8
    lwz r3, 0xc(r7)
    cmpw r9, r3
    beq lbl_802FECCC
lbl_802FECC8:
    li r11, 0x1
lbl_802FECCC:
    cmpwi r11, 0x0
    beq lbl_802FED50
    lwz r7, 0x8(r4)
    mr r4, r0
    addi r3, r1, 0x18
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    lis r3, lbl_80341EE0@ha
    lwz r4, 0x38(r27)
    lfs f1, lbl_80341EE0@l(r3)
    addi r3, r1, 0x18
    lwz r5, 0x3c(r27)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    fmr f3, f1
    li r8, 0x0
    bl GXInitTexObjLOD
    addi r3, r1, 0x18
    li r4, 0x0
    bl GXLoadTexObj
    lis r6, lbl_80462478@ha
    lwz r7, 0x8(r1)
    lwz r5, 0xc(r1)
    addi r4, r6, lbl_80462478@l
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r7, lbl_80462478@l(r6)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
lbl_802FED50:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lis r3, 0xcc01
    stfs f27, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x8(r27)
    stw r0, -0x8000(r3)
    sth r31, -0x8000(r3)
    sth r30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0xc(r27)
    stw r0, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x14(r27)
    stw r0, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r28, -0x8000(r3)
    stfs f27, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x10(r27)
    stw r0, -0x8000(r3)
    sth r31, -0x8000(r3)
    sth r28, -0x8000(r3)
    opword 0xE3E100B8
    lfd f31, 0xb0(r1)
    opword 0xE3C100A8
    lfd f30, 0xa0(r1)
    opword 0xE3A10098
    lfd f29, 0x90(r1)
    opword 0xE3810088
    lfd f28, 0x80(r1)
    opword 0xE3610078
    addi r11, r1, 0x70
    lfd f27, 0x70(r1)
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_802FEE14
asm void fn_802FEE14(u8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    lis r30, lbl_80462460@ha
    addi r30, r30, lbl_80462460@l
    stw r29, 0x24(r1)
    mr r29, r3
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_802FEE6C
    li r0, 0x0
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r0, 0x10(r30)
    addi r3, r30, 0x10
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    addi r5, r30, 0x4
    bl __register_global_object
    li r0, 0x1
    stb r0, 0x0(r30)
lbl_802FEE6C:
    lis r3, lbl_80341EE0@ha
    addi r6, r30, 0x10
    lfs f1, lbl_80341EE0@l(r3)
    addi r4, r1, 0x8
    lbz r3, 0x10(r30)
    lbz r7, 0x1(r6)
    fmr f2, f1
    lbz r5, 0x2(r6)
    fmr f3, f1
    lbz r0, 0x3(r6)
    fmr f4, f1
    stb r3, 0x8(r1)
    li r3, 0x0
    stb r7, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    bl GXSetFog
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
    li r3, 0x2
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    lbz r7, 0x0(r29)
    addi r4, r1, 0x10
    lbz r6, 0x1(r29)
    li r3, 0x1
    lbz r5, 0x2(r29)
    lbz r0, 0x3(r29)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    bl fn_802E4590
    lbz r7, 0x0(r31)
    addi r4, r1, 0xc
    lbz r6, 0x1(r31)
    li r3, 0x2
    lbz r5, 0x2(r31)
    lbz r0, 0x3(r31)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    bl fn_802E4590
    li r3, 0x0
    li r4, 0x2
    li r5, 0x4
    li r6, 0x8
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x1
    li r5, 0x2
    li r6, 0x4
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl GXSetVtxAttrFmt
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802FF174
asm void fn_802FF174(s8 *arg0, s32 arg1) {
    nofralloc
    cmpwi r4, 0x2
    lis r5, lbl_8037DCF0@ha
    addi r5, r5, lbl_8037DCF0@l
    beq lbl_802FF1DC
    bge lbl_802FF1FC
    cmpwi r4, 0x0
    beq lbl_802FF19C
    bge lbl_802FF1BC
    b lbl_802FF1FC
    b lbl_802FF1FC
lbl_802FF19C:
    addi r4, r5, 0x0
    lwz r5, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_802FF1BC:
    addi r4, r5, 0xc
    lwz r5, 0xc(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_802FF1DC:
    addi r4, r5, 0x18
    lwz r5, 0x18(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
lbl_802FF1FC:
    addi r4, r5, 0x24
    lwz r5, 0x24(r5)
    lwz r0, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r3)
    blr
}

// asm_to_cpp: fn_802FF21C
asm s8 *fn_802FF21C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802FF288
    lwz r7, 0x4(r3)
    addi r6, r3, 0x4
    li r0, 0x0
    b lbl_802FF270
lbl_802FF248:
    lwz r8, 0x0(r7)
    lwz r5, 0x4(r7)
    stw r5, 0x4(r8)
    stw r8, 0x0(r5)
    lwz r5, 0x0(r3)
    subi r5, r5, 0x1
    stw r5, 0x0(r3)
    stw r0, 0x0(r7)
    stw r0, 0x4(r7)
    mr r7, r8
lbl_802FF270:
    cmplw r7, r6
    bne lbl_802FF248
    cmpwi r4, 0x0
    ble lbl_802FF288
    mr r3, r31
    bl dtor_80136CFC
lbl_802FF288:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802FF2A0
asm s32 * fn_802FF2A0() {
    nofralloc
    lwz r6, 0x0(r4)
    li r0, 0x0
    lwz r5, 0x0(r6)
    b lbl_802FF2D8
lbl_802FF2B0:
    lwz r7, 0x0(r6)
    lwz r4, 0x4(r6)
    stw r4, 0x4(r7)
    stw r7, 0x0(r4)
    lwz r4, 0x0(r3)
    subi r4, r4, 0x1
    stw r4, 0x0(r3)
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    mr r6, r7
lbl_802FF2D8:
    cmplw r6, r5
    bne lbl_802FF2B0
    mr r3, r5
    blr
}

// asm_to_cpp: fn_802FF2E8
asm s32 fn_802FF2E8() {
    nofralloc
    lwz r4, 0x0(r4)
    lwz r6, 0x4(r4)
    stw r4, 0x0(r5)
    stw r6, 0x4(r5)
    stw r5, 0x4(r4)
    stw r5, 0x0(r6)
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    mr r3, r5
    blr
}
