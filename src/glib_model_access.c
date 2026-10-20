#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXSetVtxAttrFmtv();              /* extern */
M2C_UNK GXSetVtxDescv();                            /* extern */
M2C_UNK fn_80027CAC();                              /* extern */
extern M2C_UNK lbl_8033AD70;
extern M2C_UNK lbl_80347C50;
extern M2C_UNK lbl_80347C88;
extern M2C_UNK lbl_80347CA0;
extern s32 lbl_8035EB08;
extern s32 lbl_8035EB18;
extern M2C_UNK lbl_803C22B0;
extern s32 lbl_8049D4B0;
extern f32 lbl_8049E880;

s32 fn_80033A0C();
void fn_80033ACC();
s32 fn_80033BB4();
s32 fn_80033CE4();
void fn_80033D2C();
void fn_80033DE4();
s32 fn_80033E58();
void fn_80033EA0();
s32 fn_80033F08();
s32 fn_80033F50();
void fn_80034064();
void fn_800340D8();
void fn_80034128();
void fn_80034178();
s32 fn_800341DC();
s32 fn_8003421C();
void fn_8003426C();
s32 fn_80034304();
s32 fn_80034470();
void fn_800344B0();
void fn_800344D4();
void fn_800344F8();
s32 fn_8003452C();
void fn_8003456C();
s32 * fn_80034638();
void fn_8003467C();
void fn_800346B8();
void fn_800346FC();
s32 fn_80034754();
void fn_80034784();
void fn_800347E4();
void fn_80034834();
void fn_80034884();
void fn_800348D4();
void fn_80034924();
s32 fn_80034974();
s32 fn_800349B8();
s32 fn_800349FC();
s32 fn_80034A40();
s32 fn_80034A84();
s32 fn_80034AC8();
void fn_80034AD0();
void fn_80034AE0();
void fn_80034AE8();
void fn_80034AF0();
void fn_80034B38();
void fn_80034B88();

// fn_80033A0C: definicion C reemplazada por asm (ver abajo)


// fn_80033ACC: definicion C reemplazada por asm (ver abajo)


s32 fn_80033BB4(s32 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 arg_sp8, s32 arg_spC);

s32 fn_80033CE4(s32 arg0);

void fn_80033D2C(s32 *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);

void fn_80033DE4(s32 arg0);

s32 fn_80033E58(s32 *arg0);

void fn_80033EA0(s32 *arg0, s32 *arg1);

s32 fn_80033F08(s32 *arg0);

s32 fn_80033F50(s8 *arg0, s32 arg1, s32 arg2, f32 *arg3);

void fn_80034064(s32 *arg0);

/*
Decompilation failure in function fn_800340BC:

Cannot find branch target fn_80186638
*/

void fn_800340D8(s32 *arg0, s32 arg1);

void fn_80034128(s32 *arg0, s8 *arg1);

void fn_80034178(s32 *arg0, s32 arg1);

s32 fn_800341DC(s32 *arg0);

s32 fn_8003421C(s32 *arg0, s32 arg1);


// fn_80034304: definicion C reemplazada por asm (ver abajo)


// fn_80034470: definicion C reemplazada por asm (ver abajo)


void fn_800344B0(void);

void fn_800344D4(void);

void fn_800344F8(s32 arg0);

s32 fn_8003452C(s32 *arg0);

// fn_8003456C: definicion C reemplazada por asm (ver abajo)


s32 *fn_80034638(s32 *arg0, s32 arg1);

void fn_8003467C(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = *arg0;
    *fn_80034638(&sp8, arg1) = arg2;
}

void fn_800346B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 *temp_r3;

    sp8 = *arg0;
    temp_r3 = fn_80034638(&sp8, arg1);
    *temp_r3 |= arg2;
}


s32 fn_80034754(s32 *arg0, s32 arg1);







s32 fn_80034974(s32 *arg0, s32 arg1, s32 arg2);

s32 fn_800349B8(s32 *arg0, s32 arg1, s32 arg2);

s32 fn_800349FC(s32 *arg0, s32 arg1, s32 arg2);

s32 fn_80034A40(s32 *arg0, s32 arg1, s32 arg2);

s32 fn_80034A84(s32 *arg0, s32 arg1, s32 arg2);

s32 fn_80034AC8(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void fn_80034AD0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~arg1);
}

void fn_80034AE0(s8 *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s8 **, 0x2C) = arg1;
}

void fn_80034AE8(s8 *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s8 **, 0x30) = arg1;
}

void fn_80034AF0(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = fn_8002AE3C(arg0);
    PSMTXInverse(fn_80018B90(arg1), temp_r31);
}

void fn_80034B38(s32 arg0, s32 arg1) {
    GXGetVtxDescv(arg0);
    GXGetVtxAttrFmtv(arg1, arg0 + 0xD8);
    fn_802E1D14(arg0 + 0x288, arg0 + 0x28C);
}

void fn_80034B88(s8 *arg0, s32 arg1) {
    GXSetVtxDescv();
    GXSetVtxAttrFmtv(arg1, arg0 + 0xD8);
    GXSetLineWidth((s32) M2C_FIELD(arg0, u8 *, 0x288), M2C_FIELD(arg0, s32 *, 0x28C));
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34();
extern void SetCurrentCamera__Q34nw4r3g3d7ScnRootFi();
extern void SetPriorityDrawOpa__Q34nw4r3g3d6ScnObjFi();
extern void SetPriorityDrawXlu__Q34nw4r3g3d6ScnObjFi();
extern void _restgpr_22();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_22();
extern void _savegpr_28();
extern void _savegpr_29();
extern void fn_8002AB78();
extern void fn_8002AE40();
extern void fn_8002E9E8();
extern void fn_80030788();
extern void fn_8003094C();
extern void fn_80031208();
s32 fn_80033A0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80033ACC(s8 *arg0);
s32 fn_80033BB4();
s32 fn_80033CE4();
void fn_80033D2C();
void fn_80033DE4();
s32 fn_80033E58();
void fn_80033EA0();
s32 fn_80033F08();
s32 fn_80033F50();
void fn_80034064();
extern int fn_800340BC();
void fn_800340D8();
void fn_80034128();
void fn_80034178();
s32 fn_800341DC();
s32 fn_8003421C();
void fn_8003426C();
s32 fn_80034304(void);
s32 fn_80034470(void);
void fn_800344B0();
void fn_800344D4();
void fn_800344F8();
s32 fn_8003452C();
void fn_8003456C(s32 *arg0, M2C_UNK arg_sp0);
s32 * fn_80034638();
void fn_800346FC();
s32 fn_80034754();
void fn_80034784();
void fn_800347E4();
void fn_80034834();
void fn_80034884();
void fn_800348D4();
void fn_80034924();
s32 fn_80034974();
s32 fn_800349B8();
s32 fn_800349FC();
s32 fn_80034A40();
s32 fn_80034A84();
extern void fn_8003C110();
extern void fn_8003D5A4();
extern void fn_801734E4();
extern void fn_801735E8();
extern void fn_801736E0();
extern void fn_80173740();
extern void fn_80173754();
extern void fn_8017375C();
extern void fn_80173760();
extern void fn_80190874();
extern void fn_801A9384();

// asm_to_cpp: fn_80033A0C
asm s32 fn_80033A0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8049D4B0
    li r6, 0x0
    clrrwi r5, r31, 24
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_80033A88
    clrrwi r4, r31, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80033A88
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80033A88
    addis r0, r5, 0x4000
    cmplwi r0, 0x0
    beq lbl_80033A88
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80033A88
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80033A88
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_80033A8C
lbl_80033A88:
    li r6, 0x1
lbl_80033A8C:
    cmpwi r6, 0x0
    bne lbl_80033AB4
    lis r3, lbl_80347C88@ha
    addi r3, r3, lbl_80347C88@l
    li r4, 0x2c
    lis r5, lbl_80347C50@ha
    addi r5, r5, lbl_80347C50@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80033AB4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80033ACC
asm void fn_80033ACC(s8 *arg0) {
    nofralloc
    li r0, 0x1
    stw r0, 0x0(r3)
    lfs f1, lbl_8049E880
    stfs f1, 0xc(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x10(r3)
    la r4, lbl_8049E880
    lfs f0, 0x4(r4)
    stfs f0, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x20(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x2c(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x44(r3)
    li r0, 0xff
    stb r0, 0x4b(r3)
    stb r0, 0x4a(r3)
    stb r0, 0x49(r3)
    stb r0, 0x48(r3)
    li r0, 0x3
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    li r6, 0x0
    stw r6, 0x54(r3)
    stfs f1, 0x58(r3)
    stfs f1, 0x5c(r3)
    lis r4, 0x1
    subi r5, r4, 0x1
    li r0, 0x1c
    mtctr r0
lbl_80033B64:
    add r4, r3, r6
    stw r5, 0x60(r4)
    addi r6, r6, 0x4
    bdnz lbl_80033B64
    li r4, 0x0
    stw r4, 0xd0(r3)
    stw r4, 0xd4(r3)
    stw r4, 0xd8(r3)
    stw r4, 0xdc(r3)
    stw r4, 0xe0(r3)
    sth r4, 0xe6(r3)
    sth r4, 0xe8(r3)
    li r0, 0x2
    stw r0, 0xec(r3)
    stb r4, 0xe4(r3)
    stb r4, 0xe5(r3)
    stw r4, 0xf0(r3)
    stw r4, 0xf4(r3)
    stw r4, 0xfc(r3)
    blr
}

// asm_to_cpp: fn_80033BB4
asm s32 fn_80033BB4() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    lwz r29, 0x68(r1)
    lwz r30, 0x6c(r1)
    bl fn_80033A0C
    mr r31, r3
    li r0, 0x0
    stw r0, 0x2c(r1)
    addi r3, r1, 0x28
    mr r4, r22
    bl fn_80016E44
    addi r3, r1, 0x28
    bl GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv
    cmplw r23, r3
    bge lbl_80033CC8
    addi r3, r1, 0x28
    mr r4, r23
    bl GetResMdl__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x20(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    bl fn_8002E628
    lwz r0, 0x24(r1)
    stw r0, 0x18(r1)
    stw r24, 0x8(r1)
    li r0, 0x1
    stw r0, 0xc(r1)
    subic r0, r30, 0x1
    subfe r0, r0, r30
    stw r0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x18
    subic r0, r25, 0x1
    subfe r5, r0, r25
    subic r0, r26, 0x1
    subfe r6, r0, r26
    subic r0, r27, 0x1
    subfe r7, r0, r27
    subic r0, r28, 0x1
    subfe r8, r0, r28
    subic r0, r29, 0x1
    subfe r9, r0, r29
    li r10, 0x1
    bl fn_80030A80
    stw r3, 0x1c(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x1c
    bl fn_8002AB78
    lwz r0, 0x2c(r1)
    cmpwi r0, 0x0
    bne lbl_80033CC0
    lis r3, lbl_80347CA0@ha
    addi r3, r3, lbl_80347CA0@l
    li r4, 0xb1
    addi r5, r3, 0x16
    opword 0x4CC63182
    bl fn_801A9384
lbl_80033CC0:
    lwz r3, 0x2c(r1)
    b lbl_80033CCC
lbl_80033CC8:
    lwz r3, 0x2c(r1)
lbl_80033CCC:
    addi r11, r1, 0x60
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80033CE4
asm s32 fn_80033CE4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80033A0C
    mr r4, r31
    lwz r12, 0x4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80033D2C
asm void fn_80033D2C() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_800389F4
    bl fn_8002ADF8
    mr r31, r3
    mr r4, r29
    bl SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
    mr r3, r31
    bl GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_8002AFB4
    lwz r0, 0x14(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_8003D5A4
    addi r3, r1, 0x18
    bl fn_8002AE40
    addi r3, r1, 0x14
    addi r4, r1, 0x18
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    lwz r0, 0x0(r28)
    stw r0, 0x8(r1)
    bl fn_80033A0C
    addi r4, r1, 0x8
    bl fn_8002AB84
    addi r4, r1, 0x18
    li r5, 0x2
    subic r0, r30, 0x1
    subfe r6, r0, r30
    bl fn_8002E9E8
    addi r11, r1, 0x60
    bl _restgpr_28
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80033DE4
asm void fn_80033DE4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_800389F4
    bl fn_8002ADF8
    mr r31, r3
    mr r4, r30
    bl SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
    mr r3, r31
    bl GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_8002AFB4
    lwz r0, 0x10(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8003D5A4
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80033E58
asm s32 fn_80033E58() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80033A0C
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    li r4, 0x1
    bl fn_80031208
    li r3, 0x1
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80033EA0
asm void fn_80033EA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80033A0C
    lwz r0, 0x0(r31)
    stw r0, 0xc(r1)
    addi r4, r1, 0xc
    bl fn_8002AB84
    bl fn_8002AD70
    mr r31, r3
    bl fn_800389F4
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_800379D4
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80033F08
asm s32 fn_80033F08() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80033A0C
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    li r4, 0x1
    bl fn_80034AD0
    li r3, 0x1
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80033F50
asm s32 fn_80033F50() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r6
    lwz r3, 0xd0(r3)
    mulli r0, r4, 0x280
    add r31, r3, r0
    addi r3, r31, 0x40
    mr r4, r31
    bl fn_80190874
    lwz r0, 0x40(r31)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80033FA4
    mr r3, r30
    mr r4, r30
    addi r5, r31, 0x120
    bl fn_8017375C
    b lbl_80034048
lbl_80033FA4:
    addi r3, r1, 0x48
    mr r4, r30
    bl fn_801734E4
    addi r3, r1, 0x48
    mr r4, r3
    bl fn_80173760
    addi r3, r1, 0x8
    lfs f1, lbl_8049E880
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x48
    li r4, 0x3
    addi r5, r1, 0x8
    bl fn_801735E8
    addi r3, r1, 0x48
    mr r4, r3
    bl fn_80173754
    addi r3, r1, 0x48
    mr r4, r30
    mr r5, r3
    bl fn_8017375C
    addi r3, r1, 0x8
    lfs f1, 0x48(r1)
    lfs f2, 0x5c(r1)
    lfs f3, 0x70(r1)
    bl fn_80018B0C
    addi r3, r1, 0x18
    lis r4, lbl_8033AD70@ha
    addi r4, r4, lbl_8033AD70@l
    addi r5, r1, 0x8
    bl fn_80173740
    addi r3, r1, 0x18
    li r4, 0x3
    mr r5, r30
    li r6, 0x3
    bl fn_801736E0
    mr r3, r30
    addi r4, r1, 0x18
    addi r5, r31, 0x120
    bl fn_8017375C
lbl_80034048:
    li r3, 0x1
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_80034064
asm void fn_80034064() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80033A0C
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    mr r31, r3
    lis r4, fn_80033F50@ha
    addi r4, r4, fn_80033F50@l
    bl fn_8002ED44
    mr r3, r31
    li r4, 0x400
    bl fn_80031208
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800340BC
asm int fn_800340BC() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800340D0
    b fn_80186638
lbl_800340D0:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_800340D8
asm void fn_800340D8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80033A0C
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    mr r4, r31
    bl fn_80031208
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034128
asm void fn_80034128() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80033A0C
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    mr r4, r31
    bl fn_80034AD0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034178
asm void fn_80034178() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    mr r30, r4
    bl fn_80033A0C
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    bl fn_8002AD70
    mr r31, r3
    mr r4, r30
    bl SetPriorityDrawOpa__Q34nw4r3g3d6ScnObjFi
    mr r3, r31
    mr r4, r30
    bl SetPriorityDrawXlu__Q34nw4r3g3d6ScnObjFi
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800341DC
asm s32 fn_800341DC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80033A0C
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    bl fn_800314AC
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003421C
asm s32 fn_8003421C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80033A0C
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    mr r4, r31
    bl fn_8002EF2C
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003426C
asm void fn_8003426C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80033A0C
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    mr r30, r3
    bl fn_800389F4
    bl fn_80034AC8
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_800342EC
    mr r3, r30
    bl fn_8002AD70
    mr r5, r3
    mr r3, r31
    mr r4, r29
    lfs f1, lbl_8049E880
    bl fn_8003C110
    clrlwi r31, r29, 16
    mr r3, r30
    bl fn_800314AC
    sth r31, 0xe6(r3)
    mr r3, r30
    lis r4, 0x100
    bl fn_80031208
lbl_800342EC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034304
asm s32 fn_80034304(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049D4B0
    cmpwi r0, 0x0
    bne lbl_80034458
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    addi r31, r3, 0x60
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x400
    bl fn_80030590
    stw r3, lbl_8049D4B0
    cmpwi r31, 0x0
    beq lbl_80034450
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    li r11, 0x1
    mr r6, r3
    clrrwi r12, r3, 24
    addis r0, r12, 0x8000
    cmplwi r0, 0x0
    beq lbl_80034388
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80034388
    li r11, 0x0
lbl_80034388:
    cmpwi r11, 0x0
    bne lbl_800343A4
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_800343A4
    li r10, 0x0
lbl_800343A4:
    cmpwi r10, 0x0
    bne lbl_800343BC
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_800343BC
    li r9, 0x0
lbl_800343BC:
    cmpwi r9, 0x0
    bne lbl_800343D8
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800343D8
    li r8, 0x0
lbl_800343D8:
    cmpwi r8, 0x0
    bne lbl_800343F4
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_800343F4
    li r7, 0x0
lbl_800343F4:
    cmpwi r7, 0x0
    bne lbl_80034410
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80034410
    li r5, 0x0
lbl_80034410:
    cmpwi r5, 0x0
    bne lbl_80034430
    lis r3, lbl_80347CA0@ha
    addi r3, r3, lbl_80347CA0@l
    li r4, 0x5c2
    addi r5, r3, 0x106
    opword 0x4CC63182
    bl fn_801A9384
lbl_80034430:
    lwz r3, lbl_8049D4B0
    lis r4, lbl_8035EB08@ha
    addi r4, r4, lbl_8035EB08@l
    bl fn_80034AE8
    lwz r3, lbl_8049D4B0
    lis r4, lbl_8035EB18@ha
    addi r4, r4, lbl_8035EB18@l
    bl fn_80034AE0
lbl_80034450:
    li r3, 0x1
    b lbl_8003445C
lbl_80034458:
    li r3, 0x0
lbl_8003445C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034470
asm s32 fn_80034470(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049D4B0
    cmpwi r3, 0x0
    beq lbl_8003449C
    bl fn_80027CAC
    li r0, 0x0
    stw r0, lbl_8049D4B0
    li r3, 0x1
    b lbl_800344A0
lbl_8003449C:
    li r3, 0x0
lbl_800344A0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800344B0
asm void fn_800344B0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80033A0C
    bl fn_80030788
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800344D4
asm void fn_800344D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80033A0C
    bl fn_8003094C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800344F8
asm void fn_800344F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80033A0C
    mr r4, r31
    bl fn_80034AE0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003452C
asm s32 fn_8003452C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80033A0C
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    bl fn_8002AD70
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003456C
asm void fn_8003456C(s32 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r29, r3
    addi r3, r1, 0x20
    li r4, 0x0
    bl fn_8002AEE0
    lwz r0, 0x0(r29)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800341DC
    mr r30, r3
    lwz r0, 0x0(r29)
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x10(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x10
    bl fn_80029A90
    li r29, 0x0
    li r31, 0x0
    b lbl_80034614
lbl_800345D4:
    addi r3, r1, 0x20
    mr r4, r29
    bl GetResNode__Q34nw4r3g3d6ResMdlCFi
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80030FB0
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0xc
    bl fn_80030E44
    lwz r0, 0xd8(r30)
    add r3, r0, r31
    addi r4, r1, 0x1c
    bl fn_80186078
    addi r29, r29, 0x1
    addi r31, r31, 0xd0
lbl_80034614:
    lwz r0, 0xdc(r30)
    cmplw r29, r0
    blt lbl_800345D4
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80034638
asm s32 * fn_80034638() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    lwz r3, 0xd8(r3)
    mulli r0, r31, 0xd0
    add r3, r3, r0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800346FC
asm void fn_800346FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    srwi r0, r31, 24
    stb r0, 0xc(r3)
    extrwi r0, r31, 8, 8
    stb r0, 0xd(r3)
    extrwi r0, r31, 8, 16
    stb r0, 0xe(r3)
    clrlwi r0, r31, 24
    stb r0, 0xf(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034754
asm s32 fn_80034754() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    addi r3, r3, 0xc
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80034784
asm void fn_80034784() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    stfd f30, 0x20(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    fmr f30, f1
    fmr f31, f2
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    stfs f30, 0x30(r3)
    stfs f31, 0x50(r3)
    lfd f31, 0x28(r1)
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800347E4
asm void fn_800347E4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r5
    fmr f31, f1
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    stfs f31, 0x30(r3)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034834
asm void fn_80034834() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r5
    fmr f31, f1
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    stfs f31, 0x50(r3)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034884
asm void fn_80034884() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r5
    fmr f31, f1
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    stfs f31, 0x70(r3)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800348D4
asm void fn_800348D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r5
    fmr f31, f1
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    stfs f31, 0x90(r3)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034924
asm void fn_80034924() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    mr r31, r5
    fmr f31, f1
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    stfs f31, 0xb0(r3)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034974
asm s32 fn_80034974() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    addi r3, r3, 0x30
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800349B8
asm s32 fn_800349B8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    addi r3, r3, 0x50
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800349FC
asm s32 fn_800349FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    addi r3, r3, 0x70
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034A40
asm s32 fn_80034A40() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    addi r3, r3, 0x90
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80034A84
asm s32 fn_80034A84() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80034638
    slwi r0, r31, 2
    add r3, r3, r0
    addi r3, r3, 0xb0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
