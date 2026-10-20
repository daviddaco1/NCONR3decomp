#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

u8 *ISFS_Read();                       /* extern */
u8 *ISFS_Write();                           /* extern */
extern M2C_UNK lbl_8037F570;
extern s32 lbl_8037F57C;
extern M2C_UNK lbl_8037F588;
extern s32 lbl_8049D158;
extern s32 lbl_8049D160;
extern s32 lbl_8049E258;

s32 NANDOpen();
s32 NANDPrivateOpen();
s32 NANDOpenAsync();
s32 NANDPrivateOpenAsync();
void nandOpenCallback_8030FBF0();
s32 NANDClose();
s32 NANDCloseAsync();
void NANDSimpleSafeOpen();
s32 nandSafeOpen();
void NANDPrivateSafeOpenAsync();
s32 nandSafeClose();
void fn_803102EC();
s32 fn_80310318();
void fn_80310480();
void fn_80310870();
void fn_80310908();
s32 fn_80310910();
void fn_80310A0C();
void nandReadCloseCallback();

s32 NANDOpen(s32 arg0, s8 *arg1, s32 arg2);

s32 NANDPrivateOpen(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);

s32 NANDOpenAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4, M2C_UNK arg_sp0);

s32 NANDPrivateOpenAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4, M2C_UNK arg_sp0);

void nandOpenCallback_8030FBF0(s32 arg0, s8 *arg1);

s32 NANDClose(s8 *arg0);

s32 NANDCloseAsync(s8 *arg0, s32 arg1, s8 *arg2);

// NANDSimpleSafeOpen: definicion C reemplazada por asm (ver abajo)



void NANDPrivateSafeOpenAsync(s32 arg0) {
    nandSafeClose(arg0, 0);
}

s32 nandSafeClose(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

// fn_803102EC: definicion C reemplazada por asm (ver abajo)



// fn_80310480: definicion C reemplazada por asm (ver abajo)


void fn_80310870(s32 arg0, s8 *arg1);

void fn_80310908(s32 arg0, s32 arg1, s32 arg2) {
    fn_80310910(arg0, arg1, arg2, 0);
}

s32 fn_80310910(s8 *arg0, s32 arg1, s8 *arg2, s32 arg3);

// fn_80310A0C: definicion C reemplazada por asm (ver abajo)


// nandReadCloseCallback: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
s32 NANDClose();
s32 NANDCloseAsync();
s32 NANDOpen();
s32 NANDOpenAsync();
s32 NANDPrivateOpen();
s32 NANDPrivateOpenAsync();
void NANDSimpleSafeOpen(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void OSReport();
extern void _restgpr_23();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _savegpr_23();
extern void _savegpr_25();
extern void _savegpr_27();
void fn_803102EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_80310318();
void fn_80310480(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80310870();
s32 fn_80310910();
void fn_80310A0C(s32 arg0, s8 *arg1);
extern void nandGenerateAbsPath();
extern void nandGetParentDirectory();
extern void nandGetRelativeName();
void nandOpenCallback_8030FBF0();
void nandReadCloseCallback(s32 arg0, s8 *arg1);
s32 nandSafeClose();
s32 nandSafeOpen();

// asm_to_cpp: NANDOpen
asm s32 NANDOpen() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030FA20
    li r3, -0x80
    b lbl_8030FA58
lbl_8030FA20:
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl nandOpen_8030F8D4
    cmpwi r3, 0x0
    blt lbl_8030FA54
    li r0, 0x1
    stw r3, 0x0(r30)
    li r3, 0x0
    stb r0, 0x8a(r30)
    b lbl_8030FA58
lbl_8030FA54:
    bl nandConvertErrorCode
lbl_8030FA58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDPrivateOpen
asm s32 NANDPrivateOpen() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030FAAC
    li r3, -0x80
    b lbl_8030FAE4
lbl_8030FAAC:
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl nandOpen_8030F8D4
    cmpwi r3, 0x0
    blt lbl_8030FAE0
    li r0, 0x1
    stw r3, 0x0(r30)
    li r3, 0x0
    stb r0, 0x8a(r30)
    b lbl_8030FAE4
lbl_8030FAE0:
    bl nandConvertErrorCode
lbl_8030FAE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDOpenAsync
asm s32 NANDOpenAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030FB3C
    li r3, -0x80
    b lbl_8030FB60
lbl_8030FB3C:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r29
    mr r5, r31
    stw r28, 0x8(r31)
    li r6, 0x1
    li r7, 0x0
    bl nandOpen_8030F8D4
    bl nandConvertErrorCode
lbl_8030FB60:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDPrivateOpenAsync
asm s32 NANDPrivateOpenAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030FBB4
    li r3, -0x80
    b lbl_8030FBD8
lbl_8030FBB4:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r29
    mr r5, r31
    stw r28, 0x8(r31)
    li r6, 0x1
    li r7, 0x1
    bl nandOpen_8030F8D4
    bl nandConvertErrorCode
lbl_8030FBD8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: nandOpenCallback_8030FBF0
asm void nandOpenCallback_8030FBF0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    blt lbl_8030FC40
    lwz r5, 0x8(r4)
    li r6, 0x2
    li r0, 0x1
    stw r3, 0x0(r5)
    li r3, 0x0
    lwz r5, 0x8(r4)
    stb r6, 0x89(r5)
    lwz r5, 0x8(r4)
    stb r0, 0x8a(r5)
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    b lbl_8030FC54
lbl_8030FC40:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_8030FC54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: NANDClose
asm s32 NANDClose() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030FC90
    li r3, -0x80
    b lbl_8030FCC0
lbl_8030FC90:
    lbz r0, 0x8a(r31)
    cmplwi r0, 0x1
    beq lbl_8030FCA4
    li r3, -0x8
    b lbl_8030FCC0
lbl_8030FCA4:
    lwz r3, 0x0(r31)
    bl ISFS_Close
    cmpwi r3, 0x0
    bne lbl_8030FCBC
    li r0, 0x2
    stb r0, 0x8a(r31)
lbl_8030FCBC:
    bl nandConvertErrorCode
lbl_8030FCC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: NANDCloseAsync
asm s32 NANDCloseAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030FD0C
    li r3, -0x80
    b lbl_8030FD40
lbl_8030FD0C:
    lbz r0, 0x8a(r29)
    cmplwi r0, 0x1
    beq lbl_8030FD20
    li r3, -0x8
    b lbl_8030FD40
lbl_8030FD20:
    stw r30, 0x4(r31)
    lis r4, nandCloseCallback@ha
    mr r5, r31
    stw r29, 0x8(r31)
    addi r4, r4, nandCloseCallback@l
    lwz r3, 0x0(r29)
    bl ISFS_CloseAsync
    bl nandConvertErrorCode
lbl_8030FD40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: NANDSimpleSafeOpen
asm void NANDSimpleSafeOpen(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    li r8, 0x0
    li r9, 0x0
    b nandSafeOpen
}

// asm_to_cpp: nandSafeOpen
asm s32 nandSafeOpen() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_25
    mr r25, r3
    mr r28, r4
    mr r27, r5
    mr r29, r6
    mr r30, r7
    mr r26, r8
    mr r31, r9
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030FDAC
    li r3, -0x80
    b lbl_803100F8
lbl_8030FDAC:
    cmpwi r31, 0x0
    beq lbl_8030FDC4
    clrlwi. r0, r30, 18
    beq lbl_8030FDC4
    li r3, -0x8
    b lbl_803100F8
lbl_8030FDC4:
    li r0, 0x0
    stb r27, 0x88(r28)
    mr r4, r25
    addi r3, r28, 0x8
    stb r0, 0x89(r28)
    bl nandGenerateAbsPath
    cmpwi r26, 0x0
    bne lbl_8030FDFC
    addi r3, r28, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030FDFC
    li r3, -0x1
    b lbl_803100F8
lbl_8030FDFC:
    cmplwi r27, 0x1
    bne lbl_8030FE50
    addi r3, r28, 0x8
    li r4, 0x1
    bl ISFS_Open
    cmpwi r3, 0x0
    blt lbl_8030FE48
    li r0, 0x2
    cmpwi r31, 0x0
    stw r3, 0x0(r28)
    stb r0, 0x89(r28)
    bne lbl_8030FE38
    li r0, 0x3
    stb r0, 0x8a(r28)
    b lbl_8030FE40
lbl_8030FE38:
    li r0, 0x5
    stb r0, 0x8a(r28)
lbl_8030FE40:
    li r3, 0x0
    b lbl_803100F8
lbl_8030FE48:
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_8030FE50:
    addi r0, r27, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_803100F4
    li r0, 0x0
    lis r3, lbl_8037F570@ha
    stw r0, 0x20(r1)
    addi r3, r3, lbl_8037F570@l
    li r26, -0x1
    li r4, 0x0
    stw r0, 0x24(r1)
    li r5, 0x3
    li r6, 0x3
    li r7, 0x3
    stw r0, 0x28(r1)
    stb r0, 0x2c(r1)
    bl ISFS_CreateDir
    cmpwi r3, 0x0
    beq lbl_8030FEAC
    cmpwi r3, -0x69
    beq lbl_8030FEAC
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_8030FEAC:
    li r0, 0x1
    addi r3, r28, 0x8
    stb r0, 0x89(r28)
    addi r4, r1, 0x1c
    addi r5, r1, 0x8
    addi r6, r1, 0x18
    addi r7, r1, 0x14
    addi r8, r1, 0x10
    addi r9, r1, 0xc
    bl ISFS_GetAttr
    cmpwi r3, 0x0
    beq lbl_8030FEE4
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_8030FEE4:
    addi r3, r28, 0x8
    li r4, 0x1
    bl ISFS_Open
    cmpwi r3, 0x0
    stw r3, 0x4(r28)
    bge lbl_8030FF04
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_8030FF04:
    li r0, 0x2
    cmpwi r31, 0x0
    stb r0, 0x89(r28)
    bne lbl_8030FF74
    bl OSDisableInterrupts
    lwz r26, lbl_8049E258
    addi r0, r26, 0x1
    stw r0, lbl_8049E258
    bl OSRestoreInterrupts
    lis r5, lbl_8037F570@ha
    mr r6, r26
    addi r3, r1, 0x30
    la r4, lbl_8049D158
    addi r5, r5, lbl_8037F570@l
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x30
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    li r7, 0x0
    bl ISFS_CreateDir
    cmpwi r3, 0x0
    beq lbl_8030FF6C
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_8030FF6C:
    li r0, 0x3
    stb r0, 0x89(r28)
lbl_8030FF74:
    addi r3, r1, 0x20
    addi r4, r28, 0x8
    bl nandGetRelativeName
    cmpwi r31, 0x0
    bne lbl_8030FFB0
    lis r4, lbl_8037F57C@ha
    lis r5, lbl_8037F570@ha
    mr r6, r26
    addi r3, r28, 0x48
    addi r4, r4, lbl_8037F57C@l
    addi r5, r5, lbl_8037F570@l
    addi r7, r1, 0x20
    opword 0x4CC63182
    bl sprintf
    b lbl_8030FFCC
lbl_8030FFB0:
    lis r5, lbl_8037F570@ha
    addi r3, r28, 0x48
    addi r5, r5, lbl_8037F570@l
    addi r6, r1, 0x20
    la r4, lbl_8049D160
    opword 0x4CC63182
    bl sprintf
lbl_8030FFCC:
    lwz r4, 0x18(r1)
    addi r3, r28, 0x48
    lwz r5, 0x14(r1)
    lwz r6, 0x10(r1)
    lwz r7, 0xc(r1)
    bl ISFS_CreateFile
    cmpwi r3, 0x0
    beq lbl_8030FFF4
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_8030FFF4:
    li r0, 0x4
    cmplwi r27, 0x2
    stb r0, 0x89(r28)
    bne lbl_80310018
    addi r3, r28, 0x48
    li r4, 0x2
    bl ISFS_Open
    stw r3, 0x0(r28)
    b lbl_80310030
lbl_80310018:
    cmplwi r27, 0x3
    bne lbl_80310030
    addi r3, r28, 0x48
    li r4, 0x3
    bl ISFS_Open
    stw r3, 0x0(r28)
lbl_80310030:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    bge lbl_80310044
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_80310044:
    li r0, 0x5
    lwz r26, 0x4(r28)
    stb r0, 0x89(r28)
    mr r27, r3
lbl_80310054:
    mr r3, r26
    mr r4, r29
    mr r5, r30
    bl ISFS_Read
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_80310078
    li r5, 0x0
    b lbl_80310098
lbl_80310078:
    bge lbl_80310080
    b lbl_80310098
lbl_80310080:
    mr r3, r27
    mr r4, r29
    bl ISFS_Write
    cmpwi r3, 0x0
    bge lbl_80310054
    mr r5, r3
lbl_80310098:
    cmpwi r5, 0x0
    beq lbl_803100AC
    mr r3, r5
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_803100AC:
    lwz r3, 0x0(r28)
    li r4, 0x0
    li r5, 0x0
    bl ISFS_Seek
    cmpwi r3, 0x0
    beq lbl_803100CC
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_803100CC:
    cmpwi r31, 0x0
    beq lbl_803100E0
    li r0, 0x5
    stb r0, 0x8a(r28)
    b lbl_803100E8
lbl_803100E0:
    li r0, 0x3
    stb r0, 0x8a(r28)
lbl_803100E8:
    li r3, 0x0
    bl nandConvertErrorCode
    b lbl_803100F8
lbl_803100F4:
    li r3, -0x8
lbl_803100F8:
    addi r11, r1, 0x90
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: nandSafeClose
asm s32 nandSafeClose() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
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
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_80310190
    li r3, -0x80
    b lbl_803102D0
lbl_80310190:
    lbz r0, 0x8a(r29)
    cmplwi r0, 0x3
    bne lbl_803101A4
    cmpwi r30, 0x0
    beq lbl_803101BC
lbl_803101A4:
    cmplwi r0, 0x5
    bne lbl_803101B4
    cmpwi r30, 0x0
    bne lbl_803101BC
lbl_803101B4:
    li r3, -0x8
    b lbl_803102D0
lbl_803101BC:
    lbz r3, 0x88(r29)
    cmplwi r3, 0x1
    bne lbl_80310204
    lwz r3, 0x0(r29)
    bl ISFS_Close
    cmpwi r3, 0x0
    bne lbl_803101FC
    li r0, 0x7
    cmpwi r30, 0x0
    stb r0, 0x89(r29)
    bne lbl_803101F4
    li r0, 0x4
    stb r0, 0x8a(r29)
    b lbl_803101FC
lbl_803101F4:
    li r0, 0x6
    stb r0, 0x8a(r29)
lbl_803101FC:
    bl nandConvertErrorCode
    b lbl_803102D0
lbl_80310204:
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_803102BC
    lwz r3, 0x0(r29)
    bl ISFS_Close
    cmpwi r3, 0x0
    beq lbl_8031022C
    bl nandConvertErrorCode
    b lbl_803102D0
lbl_8031022C:
    li r31, 0x6
    lwz r3, 0x4(r29)
    stb r31, 0x89(r29)
    bl ISFS_Close
    cmpwi r3, 0x0
    beq lbl_8031024C
    bl nandConvertErrorCode
    b lbl_803102D0
lbl_8031024C:
    li r0, 0x7
    addi r3, r29, 0x48
    stb r0, 0x89(r29)
    addi r4, r29, 0x8
    bl ISFS_Rename
    cmpwi r3, 0x0
    beq lbl_80310270
    bl nandConvertErrorCode
    b lbl_803102D0
lbl_80310270:
    li r0, 0x8
    cmpwi r30, 0x0
    stb r0, 0x89(r29)
    bne lbl_803102B0
    addi r3, r1, 0x8
    addi r4, r29, 0x48
    bl nandGetParentDirectory
    addi r3, r1, 0x8
    bl ISFS_Delete
    cmpwi r3, 0x0
    bne lbl_803102B4
    li r4, 0x9
    li r0, 0x4
    stb r4, 0x89(r29)
    stb r0, 0x8a(r29)
    b lbl_803102B4
lbl_803102B0:
    stb r31, 0x8a(r29)
lbl_803102B4:
    bl nandConvertErrorCode
    b lbl_803102D0
lbl_803102BC:
    lis r3, lbl_8037F588@ha
    addi r3, r3, lbl_8037F588@l
    opword 0x4CC63182
    bl OSReport
    li r3, -0x8
lbl_803102D0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_803102EC
asm void fn_803102EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r10, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    bl fn_80310318
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80310318
asm s32 fn_80310318() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r31, 0x38(r1)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_80310364
    li r3, -0x80
    b lbl_80310468
lbl_80310364:
    cmpwi r31, 0x0
    beq lbl_8031037C
    clrlwi. r0, r27, 18
    beq lbl_8031037C
    li r3, -0x8
    b lbl_80310468
lbl_8031037C:
    li r0, 0x0
    stb r25, 0x88(r24)
    mr r4, r23
    addi r3, r24, 0x8
    stb r0, 0x89(r24)
    stw r31, 0xb8(r29)
    bl nandGenerateAbsPath
    cmpwi r30, 0x0
    bne lbl_803103B8
    addi r3, r24, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_803103B8
    li r3, -0x1
    b lbl_80310468
lbl_803103B8:
    cmplwi r25, 0x1
    bne lbl_803103F8
    lis r5, fn_80310870@ha
    stw r24, 0x8(r29)
    mr r6, r29
    addi r3, r24, 0x8
    stw r28, 0x4(r29)
    addi r5, r5, fn_80310870@l
    li r4, 0x1
    bl ISFS_OpenAsync
    cmpwi r3, 0x0
    bne lbl_803103F0
    li r3, 0x0
    b lbl_80310468
lbl_803103F0:
    bl nandConvertErrorCode
    b lbl_80310468
lbl_803103F8:
    addi r0, r25, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_80310464
    li r31, 0x0
    lis r3, lbl_8037F570@ha
    lis r8, fn_80310480@ha
    stw r24, 0x8(r29)
    mr r9, r29
    addi r3, r3, lbl_8037F570@l
    stw r28, 0x4(r29)
    addi r8, r8, fn_80310480@l
    li r4, 0x0
    li r5, 0x3
    stw r31, 0x7c(r29)
    li r6, 0x3
    li r7, 0x3
    stw r26, 0x80(r29)
    stw r27, 0x84(r29)
    bl ISFS_CreateDirAsync
    cmpwi r3, 0x0
    bne lbl_80310454
    b lbl_8031045C
lbl_80310454:
    bl nandConvertErrorCode
    mr r31, r3
lbl_8031045C:
    mr r3, r31
    b lbl_80310468
lbl_80310464:
    li r3, -0x8
lbl_80310468:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80310480
asm void fn_80310480(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r4
    bge lbl_803104B4
    cmpwi r3, -0x69
    bne lbl_80310844
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_80310844
lbl_803104B4:
    lwz r0, 0x7c(r4)
    li r6, -0x75
    lwz r31, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_803104D0
    li r0, 0x1
    stb r0, 0x89(r31)
lbl_803104D0:
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x2
    bne lbl_803104E8
    stw r3, 0x4(r31)
    li r0, 0x2
    stb r0, 0x89(r31)
lbl_803104E8:
    lwz r5, 0x7c(r4)
    cmpwi r5, 0x2
    bne lbl_8031050C
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    beq lbl_8031050C
    addi r0, r5, 0x2
    stw r0, 0x7c(r4)
    b lbl_80310518
lbl_8031050C:
    lwz r5, 0x7c(r4)
    addi r0, r5, 0x1
    stw r0, 0x7c(r4)
lbl_80310518:
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x1
    bne lbl_80310558
    lis r10, fn_80310480@ha
    stw r4, 0x8(r1)
    addi r3, r31, 0x8
    addi r5, r4, 0x1c
    addi r6, r4, 0x20
    addi r7, r4, 0x24
    addi r8, r4, 0x28
    addi r9, r4, 0x2c
    addi r10, r10, fn_80310480@l
    addi r4, r4, 0x18
    bl ISFS_GetAttrAsync
    mr r6, r3
    b lbl_80310820
lbl_80310558:
    cmpwi r0, 0x2
    bne lbl_80310580
    lis r5, fn_80310480@ha
    mr r6, r30
    addi r3, r31, 0x8
    li r4, 0x1
    addi r5, r5, fn_80310480@l
    bl ISFS_OpenAsync
    mr r6, r3
    b lbl_80310820
lbl_80310580:
    cmpwi r0, 0x3
    bne lbl_803105E8
    bl OSDisableInterrupts
    lwz r31, lbl_8049E258
    addi r0, r31, 0x1
    stw r0, lbl_8049E258
    bl OSRestoreInterrupts
    lis r5, lbl_8037F570@ha
    stw r31, 0x8c(r30)
    mr r6, r31
    addi r3, r1, 0x20
    addi r5, r5, lbl_8037F570@l
    la r4, lbl_8049D158
    opword 0x4CC63182
    bl sprintf
    lis r8, fn_80310480@ha
    mr r9, r30
    addi r3, r1, 0x20
    li r4, 0x0
    addi r8, r8, fn_80310480@l
    li r5, 0x3
    li r6, 0x0
    li r7, 0x0
    bl ISFS_CreateDirAsync
    mr r6, r3
    b lbl_80310820
lbl_803105E8:
    cmpwi r0, 0x4
    bne lbl_80310680
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    bl nandGetRelativeName
    lwz r0, 0xb8(r30)
    cmpwi r0, 0x0
    bne lbl_80310638
    li r0, 0x3
    lis r4, lbl_8037F57C@ha
    stb r0, 0x89(r31)
    lis r5, lbl_8037F570@ha
    addi r3, r31, 0x48
    addi r4, r4, lbl_8037F57C@l
    lwz r6, 0x8c(r30)
    addi r5, r5, lbl_8037F570@l
    addi r7, r1, 0x10
    opword 0x4CC63182
    bl sprintf
    b lbl_80310654
lbl_80310638:
    lis r5, lbl_8037F570@ha
    addi r3, r31, 0x48
    addi r5, r5, lbl_8037F570@l
    addi r6, r1, 0x10
    la r4, lbl_8049D160
    opword 0x4CC63182
    bl sprintf
lbl_80310654:
    lis r8, fn_80310480@ha
    lwz r4, 0x20(r30)
    lwz r5, 0x24(r30)
    mr r9, r30
    lwz r6, 0x28(r30)
    addi r3, r31, 0x48
    lwz r7, 0x2c(r30)
    addi r8, r8, fn_80310480@l
    bl ISFS_CreateFileAsync
    mr r6, r3
    b lbl_80310820
lbl_80310680:
    cmpwi r0, 0x5
    bne lbl_803106EC
    li r0, 0x4
    stb r0, 0x89(r31)
    lbz r0, 0x88(r31)
    cmplwi r0, 0x2
    bne lbl_803106BC
    lis r5, fn_80310480@ha
    mr r6, r30
    addi r3, r31, 0x48
    li r4, 0x2
    addi r5, r5, fn_80310480@l
    bl ISFS_OpenAsync
    mr r6, r3
    b lbl_80310820
lbl_803106BC:
    cmplwi r0, 0x3
    bne lbl_803106E4
    lis r5, fn_80310480@ha
    mr r6, r30
    addi r3, r31, 0x48
    li r4, 0x3
    addi r5, r5, fn_80310480@l
    bl ISFS_OpenAsync
    mr r6, r3
    b lbl_80310820
lbl_803106E4:
    li r6, -0x75
    b lbl_80310820
lbl_803106EC:
    cmpwi r0, 0x6
    bne lbl_8031072C
    stw r3, 0x0(r31)
    li r3, 0x5
    lis r6, fn_80310480@ha
    li r0, 0x7
    stb r3, 0x89(r31)
    mr r7, r30
    addi r6, r6, fn_80310480@l
    stw r0, 0x7c(r4)
    lwz r4, 0x80(r4)
    lwz r3, 0x4(r31)
    lwz r5, 0x84(r30)
    bl ISFS_ReadAsync
    mr r6, r3
    b lbl_80310820
lbl_8031072C:
    cmpwi r0, 0x7
    bne lbl_80310758
    lis r6, fn_80310480@ha
    lwz r3, 0x4(r31)
    lwz r4, 0x80(r4)
    mr r7, r30
    lwz r5, 0x84(r30)
    addi r6, r6, fn_80310480@l
    bl ISFS_ReadAsync
    mr r6, r3
    b lbl_80310820
lbl_80310758:
    cmpwi r0, 0x8
    bne lbl_803107BC
    cmpwi r3, 0x0
    ble lbl_80310794
    li r0, 0x6
    lis r6, fn_80310480@ha
    stw r0, 0x7c(r4)
    mr r5, r3
    lwz r4, 0x80(r4)
    mr r7, r30
    lwz r3, 0x0(r31)
    addi r6, r6, fn_80310480@l
    bl ISFS_WriteAsync
    mr r6, r3
    b lbl_80310820
lbl_80310794:
    bne lbl_80310820
    lis r6, fn_80310480@ha
    lwz r3, 0x0(r31)
    mr r7, r30
    li r4, 0x0
    addi r6, r6, fn_80310480@l
    li r5, 0x0
    bl ISFS_SeekAsync
    mr r6, r3
    b lbl_80310820
lbl_803107BC:
    cmpwi r0, 0x9
    bne lbl_80310820
    cmpwi r3, 0x0
    bne lbl_80310808
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    bne lbl_803107E4
    li r0, 0x3
    stb r0, 0x8a(r31)
    b lbl_803107EC
lbl_803107E4:
    li r0, 0x5
    stb r0, 0x8a(r31)
lbl_803107EC:
    li r3, 0x0
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
    b lbl_80310858
lbl_80310808:
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
    b lbl_80310858
lbl_80310820:
    cmpwi r6, 0x0
    beq lbl_80310858
    mr r3, r6
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
    b lbl_80310858
lbl_80310844:
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_80310858:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_80310870
asm void fn_80310870() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    blt lbl_803108E0
    lwz r5, 0x8(r4)
    li r0, 0x2
    stw r3, 0x0(r5)
    lwz r3, 0x8(r4)
    stb r0, 0x89(r3)
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    bne lbl_803108BC
    lwz r3, 0x8(r4)
    li r0, 0x3
    stb r0, 0x8a(r3)
    b lbl_803108C8
lbl_803108BC:
    lwz r3, 0x8(r4)
    li r0, 0x5
    stb r0, 0x8a(r3)
lbl_803108C8:
    lwz r12, 0x4(r31)
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_803108F4
lbl_803108E0:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_803108F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80310910
asm s32 fn_80310910() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_80310950
    li r3, -0x80
    b lbl_803109EC
lbl_80310950:
    lbz r0, 0x8a(r28)
    cmplwi r0, 0x3
    bne lbl_80310964
    cmpwi r31, 0x0
    beq lbl_8031097C
lbl_80310964:
    cmplwi r0, 0x5
    bne lbl_80310974
    cmpwi r31, 0x0
    bne lbl_8031097C
lbl_80310974:
    li r3, -0x8
    b lbl_803109EC
lbl_8031097C:
    stw r31, 0xb8(r30)
    lbz r3, 0x88(r28)
    cmplwi r3, 0x1
    bne lbl_803109AC
    stw r28, 0x8(r30)
    lis r4, nandReadCloseCallback@ha
    mr r5, r30
    stw r29, 0x4(r30)
    addi r4, r4, nandReadCloseCallback@l
    lwz r3, 0x0(r28)
    bl ISFS_CloseAsync
    b lbl_803109E8
lbl_803109AC:
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_803109E4
    li r0, 0xa
    lis r4, fn_80310A0C@ha
    stw r28, 0x8(r30)
    mr r5, r30
    addi r4, r4, fn_80310A0C@l
    stw r29, 0x4(r30)
    stw r0, 0x7c(r30)
    lwz r3, 0x0(r28)
    bl ISFS_CloseAsync
    b lbl_803109E8
lbl_803109E4:
    li r3, -0x65
lbl_803109E8:
    bl nandConvertErrorCode
lbl_803109EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80310A0C
asm void fn_80310A0C(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    bne lbl_80310BA8
    lwz r0, 0x7c(r4)
    li r6, -0x75
    lwz r7, 0x8(r4)
    cmpwi r0, 0xc
    bne lbl_80310A44
    li r0, 0x8
    stb r0, 0x89(r7)
lbl_80310A44:
    lwz r5, 0x7c(r4)
    cmpwi r5, 0xc
    bne lbl_80310A68
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    beq lbl_80310A68
    addi r0, r5, 0x2
    stw r0, 0x7c(r4)
    b lbl_80310A74
lbl_80310A68:
    lwz r5, 0x7c(r4)
    addi r0, r5, 0x1
    stw r0, 0x7c(r4)
lbl_80310A74:
    lwz r0, 0x7c(r4)
    cmpwi r0, 0xb
    bne lbl_80310AA4
    li r0, 0x6
    lis r4, fn_80310A0C@ha
    stb r0, 0x89(r7)
    mr r5, r31
    addi r4, r4, fn_80310A0C@l
    lwz r3, 0x4(r7)
    bl ISFS_CloseAsync
    mr r6, r3
    b lbl_80310B84
lbl_80310AA4:
    cmpwi r0, 0xc
    bne lbl_80310AD4
    li r0, 0x7
    lis r5, fn_80310A0C@ha
    stb r0, 0x89(r7)
    mr r6, r31
    addi r3, r7, 0x48
    addi r4, r7, 0x8
    addi r5, r5, fn_80310A0C@l
    bl ISFS_RenameAsync
    mr r6, r3
    b lbl_80310B84
lbl_80310AD4:
    cmpwi r0, 0xd
    bne lbl_80310B48
    li r0, 0x0
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    addi r4, r7, 0x48
    stw r0, 0xc(r1)
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
    bl nandGetParentDirectory
    lis r4, fn_80310A0C@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, fn_80310A0C@l
    bl ISFS_DeleteAsync
    mr r6, r3
    b lbl_80310B84
lbl_80310B48:
    cmpwi r0, 0xe
    bne lbl_80310B84
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    bne lbl_80310B64
    li r0, 0x9
    stb r0, 0x89(r7)
lbl_80310B64:
    li r0, 0x4
    stb r0, 0x8a(r7)
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_80310BBC
lbl_80310B84:
    cmpwi r6, 0x0
    beq lbl_80310BBC
    mr r3, r6
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_80310BBC
lbl_80310BA8:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_80310BBC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: nandReadCloseCallback
asm void nandReadCloseCallback(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_80310C04
    lwz r5, 0x8(r4)
    li r6, 0x7
    li r0, 0x4
    stb r6, 0x89(r5)
    lwz r4, 0x8(r4)
    stb r0, 0x8a(r4)
lbl_80310C04:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
