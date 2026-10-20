#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s32 GXGetTexBufferSize();      /* extern */
M2C_UNK GXInitTexObj(); /* extern */
M2C_UNK fn_80027CAC();                              /* extern */
extern M2C_UNK lbl_80347DE0;
extern M2C_UNK lbl_80347E0C;
extern M2C_UNK lbl_80347E38;
extern f32 lbl_8049E890;

s32 fn_80034BD8();
void fn_80034E28();
void fn_80034F44();
void fn_80035050();
s8 * fn_80035124();
s8 * fn_800352C0();
s32 fn_8003531C();
void fn_800358B8();
s32 fn_80035A30();
s32 fn_80035A58();
s32 fn_80035A80();
s8 * fn_80035AC0();
s8 * fn_80035AE4();
s8 * fn_80035B44();
s8 * fn_80035CA0();
s32 fn_80035D9C();
u32 fn_80035DAC();









s32 fn_80035A30(s8 *arg0, u32 arg1);

s32 fn_80035A58(s8 *arg0, u32 arg1);

// fn_80035A80: definicion C reemplazada por asm (ver abajo)


s8 *fn_80035AC0(s8 *arg0, u32 arg1);

s8 *fn_80035AE4(s8 *arg0, u32 arg1);

s8 *fn_80035B44(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, M2C_UNK arg_sp0);


s32 fn_80035D9C(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
}

u32 fn_80035DAC(s8 *arg0, u32 arg1);

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GXCopyTex();
extern void GXInitTexObjLOD();
extern void GXInvalidateTexAll();
extern void GXSetCopyFilter();
extern void GXSetTexCopyDst();
extern void GXSetTexCopySrc();
extern void __throw();
extern void _restgpr_14();
extern void _restgpr_19();
extern void _restgpr_20();
extern void _restgpr_22();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_19();
extern void _savegpr_20();
extern void _savegpr_22();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_27();
extern void fn_80027AF8();
extern void fn_80027B74();
s32 fn_80034BD8();
void fn_80034E28();
void fn_80034F44();
void fn_80035050();
s8 * fn_80035124();
s8 * fn_800352C0();
s32 fn_8003531C();
void fn_800358B8();
s32 fn_80035A30();
s32 fn_80035A58();
s32 fn_80035A80(s8 *arg0, u32 arg1, s32 arg2);
s8 * fn_80035AC0();
s8 * fn_80035AE4();
s8 * fn_80035B44();
s8 * fn_80035CA0();
u32 fn_80035DAC();
extern void fn_801A9384();
extern void fn_802E151C();

// asm_to_cpp: fn_80034BD8
asm s32 fn_80034BD8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_19
    mr r31, r1
    mr r19, r3
    mr r20, r4
    mr r21, r5
    mr r22, r6
    mr r23, r7
    mr r24, r8
    mr r25, r9
    mr r26, r10
    lwz r27, 0x68(r31)
    li r29, 0x0
    clrlwi r3, r5, 16
    clrlwi r4, r6, 16
    mr r5, r23
    clrlwi r6, r10, 24
    subfic r0, r6, 0x0
    subfe r7, r0, r0
    li r0, 0x4
    and r7, r0, r7
    clrlwi r7, r7, 24
    bl GXGetTexBufferSize
    mr r28, r3
    li r3, 0x2c
    bl fn_8002B958
    mr r30, r3
    add r3, r3, r28
    bl fn_8002B958
    mr r28, r3
    cmpwi r20, 0x0
    beq lbl_80034D50
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r20, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80034CA0
    clrrwi r3, r20, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80034CA0
    li r9, 0x0
lbl_80034CA0:
    cmpwi r9, 0x0
    bne lbl_80034CBC
    clrrwi r3, r20, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80034CBC
    li r8, 0x0
lbl_80034CBC:
    cmpwi r8, 0x0
    bne lbl_80034CD4
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80034CD4
    li r7, 0x0
lbl_80034CD4:
    cmpwi r7, 0x0
    bne lbl_80034CF0
    clrrwi r3, r20, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80034CF0
    li r6, 0x0
lbl_80034CF0:
    cmpwi r6, 0x0
    bne lbl_80034D0C
    clrrwi r3, r20, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80034D0C
    li r5, 0x0
lbl_80034D0C:
    cmpwi r5, 0x0
    bne lbl_80034D28
    clrrwi r3, r20, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80034D28
    li r4, 0x0
lbl_80034D28:
    cmpwi r4, 0x0
    bne lbl_80034D4C
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0x3e
    addi r5, r3, 0x16
    mr r6, r20
    opword 0x4CC63182
    bl fn_801A9384
lbl_80034D4C:
    stw r28, 0x0(r20)
lbl_80034D50:
    cmpwi r19, 0x0
    beq lbl_80034E04
    mr r3, r19
    mr r4, r28
    bl fn_80027B04
    mr r20, r3
    clrlwi r0, r20, 27
    cmpwi r0, 0x0
    beq lbl_80034D8C
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0x4a
    addi r5, r3, 0x4a
    opword 0x4CC63182
    bl fn_801A9384
lbl_80034D8C:
    cmpwi r20, 0x0
    bne lbl_80034D9C
    li r3, 0x0
    b lbl_80034E08
lbl_80034D9C:
    li r3, 0x2c
    mr r4, r20
    bl fn_80027AFC
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_80034E04
    stw r1, 0x24(r31)
    clrlwi r0, r26, 24
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    mr r4, r19
    add r5, r20, r30
    clrlwi r6, r21, 16
    clrlwi r7, r22, 16
    mr r8, r23
    mr r9, r24
    mr r10, r25
    bl fn_80035124
    b lbl_80034E04
    mr r3, r29
    mr r4, r20
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_80034E04:
    mr r3, r29
lbl_80034E08:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_19
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_80034E28
asm void fn_80034E28() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r26, r3
    mr r20, r4
    mr r21, r5
    mr r22, r6
    mr r23, r7
    mr r24, r8
    mr r25, r9
    bl GXGetTexObjWidth
    mr r29, r3
    mr r3, r26
    bl GXGetTexObjHeight
    mr r30, r3
    mr r3, r26
    bl GXGetTexObjFmt
    mr r28, r3
    mr r3, r26
    bl GXGetTexObjData
    addis r27, r3, 0x8000
    clrlwi r3, r29, 16
    clrlwi r0, r22, 16
    cmplw r3, r0
    bne lbl_80034EA4
    clrlwi r3, r30, 16
    clrlwi r0, r23, 16
    cmplw r3, r0
    beq lbl_80034EAC
lbl_80034EA4:
    li r26, 0x1
    b lbl_80034EB0
lbl_80034EAC:
    li r26, 0x0
lbl_80034EB0:
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r31, r3
    clrlwi r0, r25, 24
    cmplwi r0, 0x1
    beq lbl_80034ED8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl GXSetCopyFilter
lbl_80034ED8:
    clrlwi r3, r20, 16
    clrlwi r4, r21, 16
    clrlwi r5, r22, 16
    clrlwi r6, r23, 16
    bl GXSetTexCopySrc
    clrlwi r3, r29, 16
    clrlwi r4, r30, 16
    mr r5, r28
    mr r6, r26
    bl GXSetTexCopyDst
    mr r3, r27
    clrlwi r4, r24, 24
    bl GXCopyTex
    clrlwi r0, r25, 24
    cmplwi r0, 0x1
    beq lbl_80034F2C
    lbz r3, 0x19(r31)
    addi r4, r31, 0x1a
    li r5, 0x1
    addi r6, r31, 0x32
    bl GXSetCopyFilter
lbl_80034F2C:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80034F44
asm void fn_80034F44() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r20, r3
    mr r21, r4
    mr r22, r5
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r26, r9
    mr r27, r10
    addi r3, r3, 0x8
    bl GXGetTexObjWidth
    mr r29, r3
    addi r3, r20, 0x8
    bl GXGetTexObjHeight
    mr r30, r3
    clrlwi r4, r29, 16
    clrlwi r0, r23, 16
    cmplw r4, r0
    bne lbl_80034FB0
    clrlwi r3, r3, 16
    clrlwi r0, r24, 16
    cmplw r3, r0
    beq lbl_80034FB8
lbl_80034FB0:
    li r28, 0x1
    b lbl_80034FBC
lbl_80034FB8:
    li r28, 0x0
lbl_80034FBC:
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r31, r3
    clrlwi r0, r27, 24
    cmplwi r0, 0x1
    beq lbl_80034FE4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl GXSetCopyFilter
lbl_80034FE4:
    clrlwi r3, r21, 16
    clrlwi r4, r22, 16
    clrlwi r5, r23, 16
    clrlwi r6, r24, 16
    bl GXSetTexCopySrc
    clrlwi r3, r29, 16
    clrlwi r4, r30, 16
    mr r5, r25
    mr r6, r28
    bl GXSetTexCopyDst
    lwz r3, 0x28(r20)
    clrlwi r4, r26, 24
    bl GXCopyTex
    clrlwi r0, r27, 24
    cmplwi r0, 0x1
    beq lbl_80035038
    lbz r3, 0x19(r31)
    addi r4, r31, 0x1a
    li r5, 0x1
    addi r6, r31, 0x32
    bl GXSetCopyFilter
lbl_80035038:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80035050
asm void fn_80035050() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r3, r3, 0x8
    bl GXGetTexObjWidth
    mr r29, r3
    addi r3, r24, 0x8
    bl GXGetTexObjHeight
    mr r30, r3
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r31, r3
    clrlwi r0, r28, 24
    cmplwi r0, 0x1
    beq lbl_800350B8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl GXSetCopyFilter
lbl_800350B8:
    li r3, 0x0
    li r4, 0x0
    clrlwi r5, r29, 16
    clrlwi r6, r30, 16
    bl GXSetTexCopySrc
    clrlwi r3, r29, 16
    clrlwi r4, r30, 16
    mr r5, r25
    clrlwi r6, r26, 24
    bl GXSetTexCopyDst
    lwz r3, 0x28(r24)
    clrlwi r4, r27, 24
    bl GXCopyTex
    clrlwi r0, r28, 24
    cmplwi r0, 0x1
    beq lbl_8003510C
    lbz r3, 0x19(r31)
    addi r4, r31, 0x1a
    li r5, 0x1
    addi r6, r31, 0x32
    bl GXSetCopyFilter
lbl_8003510C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80035124
asm s8 * fn_80035124() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r23, r3
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    lbz r30, 0x3b(r1)
    lwz r31, 0x3c(r1)
    bl fn_80027B84
    lis r3, lbl_80347E0C@ha
    addi r0, r3, lbl_80347E0C@l
    stw r0, 0x4(r23)
    stw r24, 0x28(r23)
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r24, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_800351AC
    clrrwi r3, r24, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800351AC
    li r9, 0x0
lbl_800351AC:
    cmpwi r9, 0x0
    bne lbl_800351C8
    clrrwi r3, r24, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800351C8
    li r8, 0x0
lbl_800351C8:
    cmpwi r8, 0x0
    bne lbl_800351E0
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_800351E0
    li r7, 0x0
lbl_800351E0:
    cmpwi r7, 0x0
    bne lbl_800351FC
    clrrwi r3, r24, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800351FC
    li r6, 0x0
lbl_800351FC:
    cmpwi r6, 0x0
    bne lbl_80035218
    clrrwi r3, r24, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80035218
    li r5, 0x0
lbl_80035218:
    cmpwi r5, 0x0
    bne lbl_80035234
    clrrwi r3, r24, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80035234
    li r4, 0x0
lbl_80035234:
    cmpwi r4, 0x0
    bne lbl_80035258
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0xce
    addi r5, r3, 0x79
    mr r6, r24
    opword 0x4CC63182
    bl fn_801A9384
lbl_80035258:
    addi r3, r23, 0x8
    lwz r4, 0x28(r23)
    clrlwi r5, r25, 16
    clrlwi r6, r26, 16
    mr r7, r27
    mr r8, r28
    mr r9, r29
    mr r10, r30
    bl GXInitTexObj
    addi r3, r23, 0x8
    mr r4, r31
    mr r5, r31
    lfs f1, lbl_8049E890
    fmr f2, f1
    fmr f3, f1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    mr r3, r23
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800352C0
asm s8 * fn_800352C0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80035300
    li r4, 0x0
    bl dtor_80027B08
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80035300
    mr r3, r30
    bl fn_80027B74
lbl_80035300:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003531C
asm s32 fn_8003531C() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_14
    mr r31, r1
    mr r22, r3
    mr r16, r4
    mr r23, r5
    mr r24, r6
    mr r14, r7
    sth r8, 0x10(r31)
    mr r25, r9
    mr r26, r10
    lbz r27, 0x8b(r31)
    lbz r28, 0x8f(r31)
    lwz r29, 0x90(r31)
    lwz r30, 0x94(r31)
    li r18, 0x0
    slwi r15, r5, 2
    li r20, 0x0
    stw r20, 0x8(r1)
    li r3, 0x0
    addi r4, r31, 0x18
    clrlwi r5, r7, 16
    clrlwi r6, r8, 16
    mr r7, r25
    mr r8, r26
    mr r9, r26
    clrlwi r10, r27, 24
    bl fn_80034BD8
    lwz r3, 0x18(r31)
    bl fn_8002B958
    mullw r0, r24, r3
    stw r0, 0x18(r31)
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r19, r3
    cmpwi r28, 0x0
    beq lbl_800353FC
    mr r17, r15
    stw r20, 0x8(r1)
    li r3, 0x0
    addi r4, r31, 0x14
    lhz r5, 0x4(r19)
    lhz r6, 0x6(r19)
    mr r7, r29
    mr r8, r30
    mr r9, r30
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    lwz r3, 0x14(r31)
    bl fn_8002B958
    mullw r0, r24, r3
    stw r0, 0x14(r31)
    b lbl_80035404
lbl_800353FC:
    li r17, 0x0
    stw r20, 0x14(r31)
lbl_80035404:
    li r3, 0x24
    bl fn_80027CCC
    mr r20, r3
    add r3, r3, r15
    bl fn_80027CCC
    mr r15, r3
    add r3, r3, r17
    bl fn_80027CCC
    mr r21, r3
    add r3, r3, r23
    bl fn_80027CCC
    mr r17, r3
    cmpwi r16, 0x0
    beq lbl_80035538
    li r0, 0x1
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    clrrwi r8, r16, 24
    addis r9, r8, 0x8000
    cmplwi r9, 0x0
    beq lbl_80035478
    clrrwi r9, r16, 23
    addis r9, r9, 0x7f00
    cmplwi r9, 0x0
    beq lbl_80035478
    li r7, 0x0
lbl_80035478:
    cmpwi r7, 0x0
    bne lbl_80035494
    clrrwi r7, r16, 27
    addis r7, r7, 0x7000
    cmplwi r7, 0x0
    beq lbl_80035494
    li r6, 0x0
lbl_80035494:
    cmpwi r6, 0x0
    bne lbl_800354AC
    addis r6, r8, 0x4000
    cmplwi r6, 0x0
    beq lbl_800354AC
    li r5, 0x0
lbl_800354AC:
    cmpwi r5, 0x0
    bne lbl_800354C8
    clrrwi r5, r16, 23
    addis r5, r5, 0x3f00
    cmplwi r5, 0x0
    beq lbl_800354C8
    li r4, 0x0
lbl_800354C8:
    cmpwi r4, 0x0
    bne lbl_800354E4
    clrrwi r4, r16, 27
    addis r4, r4, 0x3000
    cmplwi r4, 0x0
    beq lbl_800354E4
    li r3, 0x0
lbl_800354E4:
    cmpwi r3, 0x0
    bne lbl_80035500
    clrrwi r3, r16, 14
    addis r3, r3, 0x2000
    cmplwi r3, 0x0
    beq lbl_80035500
    li r0, 0x0
lbl_80035500:
    cmpwi r0, 0x0
    bne lbl_80035524
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0x11b
    addi r5, r3, 0x16
    mr r6, r16
    opword 0x4CC63182
    bl fn_801A9384
lbl_80035524:
    lwz r0, 0x14(r31)
    lwz r3, 0x18(r31)
    add r0, r0, r17
    add r0, r3, r0
    stw r0, 0x0(r16)
lbl_80035538:
    cmpwi r22, 0x0
    beq lbl_80035894
    mr r3, r22
    mr r4, r17
    bl fn_80027B04
    mr r17, r3
    clrlwi r0, r17, 27
    cmpwi r0, 0x0
    beq lbl_80035574
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0x127
    addi r5, r3, 0x4a
    opword 0x4CC63182
    bl fn_801A9384
lbl_80035574:
    cmpwi r17, 0x0
    bne lbl_80035584
    li r3, 0x0
    b lbl_80035898
lbl_80035584:
    add r20, r17, r20
    add r16, r17, r21
    li r18, 0x0
    b lbl_800356D8
lbl_80035594:
    cmplw r18, r24
    bge lbl_800356C0
    slwi r21, r18, 2
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r22
    li r4, 0x0
    clrlwi r5, r14, 16
    lhz r0, 0x10(r31)
    clrlwi r6, r0, 16
    mr r7, r25
    mr r8, r26
    mr r9, r26
    clrlwi r10, r27, 24
    bl fn_80034BD8
    stwx r3, r20, r21
    li r0, 0x1
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    lwzx r6, r20, r21
    clrrwi r9, r6, 24
    addis r10, r9, 0x8000
    cmplwi r10, 0x0
    beq lbl_80035614
    clrrwi r10, r6, 23
    addis r10, r10, 0x7f00
    cmplwi r10, 0x0
    beq lbl_80035614
    li r8, 0x0
lbl_80035614:
    cmpwi r8, 0x0
    bne lbl_80035630
    clrrwi r8, r6, 27
    addis r8, r8, 0x7000
    cmplwi r8, 0x0
    beq lbl_80035630
    li r7, 0x0
lbl_80035630:
    cmpwi r7, 0x0
    bne lbl_80035648
    addis r7, r9, 0x4000
    cmplwi r7, 0x0
    beq lbl_80035648
    li r5, 0x0
lbl_80035648:
    cmpwi r5, 0x0
    bne lbl_80035664
    clrrwi r5, r6, 23
    addis r5, r5, 0x3f00
    cmplwi r5, 0x0
    beq lbl_80035664
    li r4, 0x0
lbl_80035664:
    cmpwi r4, 0x0
    bne lbl_80035680
    clrrwi r4, r6, 27
    addis r4, r4, 0x3000
    cmplwi r4, 0x0
    beq lbl_80035680
    li r3, 0x0
lbl_80035680:
    cmpwi r3, 0x0
    bne lbl_8003569C
    clrrwi r3, r6, 14
    addis r3, r3, 0x2000
    cmplwi r3, 0x0
    beq lbl_8003569C
    li r0, 0x0
lbl_8003569C:
    cmpwi r0, 0x0
    bne lbl_800356CC
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0x134
    addi r5, r3, 0xb3
    opword 0x4CC63182
    bl fn_801A9384
    b lbl_800356CC
lbl_800356C0:
    li r3, 0x0
    slwi r0, r18, 2
    stwx r3, r20, r0
lbl_800356CC:
    li r0, 0x0
    stbx r0, r16, r18
    addi r18, r18, 0x1
lbl_800356D8:
    cmplw r18, r23
    blt lbl_80035594
    cmpwi r28, 0x0
    beq lbl_8003583C
    add r14, r17, r15
    li r15, 0x0
    b lbl_80035830
lbl_800356F4:
    cmplw r15, r24
    bge lbl_80035820
    slwi r18, r15, 2
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r22
    li r4, 0x0
    lhz r5, 0x4(r19)
    lhz r6, 0x6(r19)
    mr r7, r29
    mr r8, r30
    mr r9, r30
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    stwx r3, r14, r18
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwzx r6, r14, r18
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80035774
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80035774
    li r10, 0x0
lbl_80035774:
    cmpwi r10, 0x0
    bne lbl_80035790
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80035790
    li r9, 0x0
lbl_80035790:
    cmpwi r9, 0x0
    bne lbl_800357A8
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800357A8
    li r8, 0x0
lbl_800357A8:
    cmpwi r8, 0x0
    bne lbl_800357C4
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800357C4
    li r7, 0x0
lbl_800357C4:
    cmpwi r7, 0x0
    bne lbl_800357E0
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800357E0
    li r5, 0x0
lbl_800357E0:
    cmpwi r5, 0x0
    bne lbl_800357FC
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800357FC
    li r4, 0x0
lbl_800357FC:
    cmpwi r4, 0x0
    bne lbl_8003582C
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0x144
    addi r5, r3, 0xf2
    opword 0x4CC63182
    bl fn_801A9384
    b lbl_8003582C
lbl_80035820:
    li r3, 0x0
    slwi r0, r15, 2
    stwx r3, r14, r0
lbl_8003582C:
    addi r15, r15, 0x1
lbl_80035830:
    cmplw r15, r23
    blt lbl_800356F4
    b lbl_80035840
lbl_8003583C:
    li r14, 0x0
lbl_80035840:
    li r3, 0x24
    mr r4, r17
    bl fn_80027AFC
    mr r18, r3
    cmpwi r3, 0x0
    beq lbl_80035894
    stw r1, 0x34(r31)
    mr r4, r22
    mr r5, r20
    mr r6, r14
    mr r7, r16
    mr r8, r23
    bl fn_80035B44
    b lbl_80035894
    mr r3, r18
    mr r4, r17
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_80035894:
    mr r3, r18
lbl_80035898:
    mr r10, r31
    addi r11, r10, 0x80
    bl _restgpr_14
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_800358B8
asm void fn_800358B8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    bl fn_80035AC0
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80035A18
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r31, r3
    mr r3, r22
    mr r4, r23
    bl fn_80035DAC
    cmplwi r3, 0x1
    beq lbl_80035A18
    cmpwi r31, 0x0
    beq lbl_80035A18
    mr r3, r30
    bl fn_8002B99C
    mr r29, r3
    bl GXGetTexObjFmt
    mr r28, r3
    cmpwi r3, 0x1
    bne lbl_80035938
    li r28, 0x27
lbl_80035938:
    cmplwi r25, 0x1
    beq lbl_80035980
    mr r3, r29
    bl GXGetTexObjHeight
    mr r31, r3
    mr r3, r29
    bl GXGetTexObjWidth
    mr r0, r3
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r0, 16
    clrlwi r7, r31, 16
    mr r8, r28
    clrlwi r9, r24, 24
    li r10, 0x0
    bl fn_80034F44
    b lbl_800359A4
lbl_80035980:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    lhz r6, 0x4(r31)
    lhz r7, 0x6(r31)
    mr r8, r28
    clrlwi r9, r24, 24
    li r10, 0x0
    bl fn_80034F44
lbl_800359A4:
    cmpwi r26, 0x0
    beq lbl_80035A08
    mr r3, r22
    mr r4, r23
    bl fn_80035AE4
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80035A08
    bl fn_8002B99C
    bl GXGetTexObjFmt
    cmpwi r3, 0x1
    beq lbl_800359E0
    cmpwi r3, 0x3
    beq lbl_800359E8
    b lbl_800359F0
lbl_800359E0:
    li r4, 0x11
    b lbl_800359F4
lbl_800359E8:
    li r4, 0x13
    b lbl_800359F4
lbl_800359F0:
    li r4, 0x16
lbl_800359F4:
    mr r3, r31
    li r5, 0x0
    clrlwi r6, r24, 24
    li r7, 0x0
    bl fn_80035050
lbl_80035A08:
    cmpwi r27, 0x0
    beq lbl_80035A18
    bl fn_802E151C
    bl GXInvalidateTexAll
lbl_80035A18:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80035A30
asm s32 fn_80035A30() {
    nofralloc
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bge lbl_80035A50
    li r0, 0x1
    lwz r3, 0x10(r3)
    stbx r0, r3, r4
    li r3, 0x1
    blr
lbl_80035A50:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80035A58
asm s32 fn_80035A58() {
    nofralloc
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bge lbl_80035A78
    li r0, 0x0
    lwz r3, 0x10(r3)
    stbx r0, r3, r4
    li r3, 0x1
    blr
lbl_80035A78:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80035A80
asm s32 fn_80035A80(s8 *arg0, u32 arg1, s32 arg2) {
    nofralloc
    cmpwi r5, 0x0
    beq lbl_80035AB8
    add r5, r4, r5
    subi r5, r5, 0x1
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bge lbl_80035AB8
    cmplw r5, r0
    bge lbl_80035AB8
    stw r4, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r4, 0x20(r3)
    li r3, 0x1
    blr
lbl_80035AB8:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80035AC0
asm s8 * fn_80035AC0() {
    nofralloc
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bge lbl_80035ADC
    lwz r3, 0x8(r3)
    slwi r0, r4, 2
    lwzx r3, r3, r0
    blr
lbl_80035ADC:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80035AE4
asm s8 * fn_80035AE4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80035D9C
    cmpwi r3, 0x0
    beq lbl_80035B28
    lwz r0, 0x14(r30)
    cmplw r31, r0
    bge lbl_80035B28
    lwz r3, 0xc(r30)
    slwi r0, r31, 2
    lwzx r3, r3, r0
    b lbl_80035B2C
lbl_80035B28:
    li r3, 0x0
lbl_80035B2C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80035B44
asm s8 * fn_80035B44() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    mr r31, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    bl fn_80027B84
    lis r3, lbl_80347DE0@ha
    addi r0, r3, lbl_80347DE0@l
    stw r0, 0x4(r30)
    stw r31, 0x8(r30)
    stw r27, 0xc(r30)
    stw r28, 0x10(r30)
    stw r29, 0x14(r30)
    li r0, 0x0
    stw r0, 0x18(r30)
    stw r29, 0x1c(r30)
    stw r0, 0x20(r30)
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r31, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80035BD8
    clrrwi r3, r31, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80035BD8
    li r9, 0x0
lbl_80035BD8:
    cmpwi r9, 0x0
    bne lbl_80035BF4
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80035BF4
    li r8, 0x0
lbl_80035BF4:
    cmpwi r8, 0x0
    bne lbl_80035C0C
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80035C0C
    li r7, 0x0
lbl_80035C0C:
    cmpwi r7, 0x0
    bne lbl_80035C28
    clrrwi r3, r31, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80035C28
    li r6, 0x0
lbl_80035C28:
    cmpwi r6, 0x0
    bne lbl_80035C44
    clrrwi r3, r31, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80035C44
    li r5, 0x0
lbl_80035C44:
    cmpwi r5, 0x0
    bne lbl_80035C60
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80035C60
    li r4, 0x0
lbl_80035C60:
    cmpwi r4, 0x0
    bne lbl_80035C84
    lis r3, lbl_80347E38@ha
    addi r3, r3, lbl_80347E38@l
    li r4, 0x2fe
    addi r5, r3, 0x1fd
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80035C84:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80035CA0
asm s8 * fn_80035CA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    cmpwi r3, 0x0
    beq lbl_80035D80
    lis r4, lbl_80347DE0@ha
    addi r0, r4, lbl_80347DE0@l
    stw r0, 0x4(r3)
    li r29, 0x0
    li r31, 0x0
    mr r30, r31
    b lbl_80035D04
lbl_80035CE0:
    lwz r3, 0x8(r27)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_80035CFC
    bl fn_80027CAC
    lwz r3, 0x8(r27)
    stwx r30, r3, r31
lbl_80035CFC:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_80035D04:
    lwz r0, 0x14(r27)
    cmplw r29, r0
    blt lbl_80035CE0
    mr r3, r27
    bl fn_80035D9C
    cmpwi r3, 0x0
    beq lbl_80035D60
    li r29, 0x0
    li r31, 0x0
    li r30, 0x0
    b lbl_80035D54
lbl_80035D30:
    lwz r3, 0xc(r27)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_80035D4C
    bl fn_80027CAC
    lwz r3, 0xc(r27)
    stwx r30, r3, r31
lbl_80035D4C:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_80035D54:
    lwz r0, 0x14(r27)
    cmplw r29, r0
    blt lbl_80035D30
lbl_80035D60:
    mr r3, r27
    li r4, 0x0
    bl dtor_80027B08
    extsh r0, r28
    cmpwi r0, 0x0
    ble lbl_80035D80
    mr r3, r27
    bl fn_80027B74
lbl_80035D80:
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80035DAC
asm u32 fn_80035DAC() {
    nofralloc
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bge lbl_80035DD0
    lwz r3, 0x10(r3)
    lbzx r3, r3, r4
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_80035DD0:
    li r3, 0x0
    blr
}
