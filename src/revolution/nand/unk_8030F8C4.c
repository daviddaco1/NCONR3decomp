#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

void NANDSetUserData();
s32 NANDGetUserData();
s32 nandOpen_8030F8D4();

void NANDSetUserData(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 NANDGetUserData(s32 *arg0) {
    return *arg0;
}

// nandOpen_8030F8D4: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void _restgpr_27();
extern void _savegpr_27();
extern void nandGenerateAbsPath();
s32 nandOpen_8030F8D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);

// asm_to_cpp: nandOpen_8030F8D4
asm s32 nandOpen_8030F8D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    li r0, 0x0
    mr r27, r4
    stw r0, 0x8(r1)
    mr r4, r3
    mr r28, r5
    mr r29, r6
    stw r0, 0xc(r1)
    mr r30, r7
    addi r3, r1, 0x8
    li r31, 0x0
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl nandGenerateAbsPath
    cmpwi r30, 0x0
    bne lbl_8030F96C
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030F96C
    li r3, -0x66
    b lbl_8030F9D0
lbl_8030F96C:
    cmpwi r27, 0x2
    beq lbl_8030F99C
    bge lbl_8030F984
    cmpwi r27, 0x1
    bge lbl_8030F994
    b lbl_8030F9A0
lbl_8030F984:
    cmpwi r27, 0x4
    bge lbl_8030F9A0
    li r31, 0x3
    b lbl_8030F9A0
lbl_8030F994:
    li r31, 0x1
    b lbl_8030F9A0
lbl_8030F99C:
    li r31, 0x2
lbl_8030F9A0:
    cmpwi r29, 0x0
    beq lbl_8030F9C4
    lis r5, nandOpenCallback_8030FBF0@ha
    mr r4, r31
    mr r6, r28
    addi r3, r1, 0x8
    addi r5, r5, nandOpenCallback_8030FBF0@l
    bl ISFS_OpenAsync
    b lbl_8030F9D0
lbl_8030F9C4:
    mr r4, r31
    addi r3, r1, 0x8
    bl ISFS_Open
lbl_8030F9D0:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
