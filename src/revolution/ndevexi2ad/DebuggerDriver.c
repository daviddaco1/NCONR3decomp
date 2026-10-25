#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK __DBIntrHandler();                          /* static */
M2C_UNK __DBMtrHandler();                           /* static */
extern u8 lbl_8049C428;
extern s32 lbl_8049D938;
extern M2C_UNK (*lbl_8049D93C)();
extern s8 lbl_8049D940;
extern u32 lbl_8049D944;
extern s32 lbl_8049D948;

/*
Decompilation failure in function __DBMtrHandler:

Unable to determine jump table for bctr instruction at DebuggerDriver.s line 17.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

/*
Decompilation failure in function __DBIntrHandler:

Unable to determine jump table for bctr instruction at DebuggerDriver.s line 30.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void DBInitComm();
void DBInitInterrupts();
s32 DBQueryData();
s32 DBRead();
s32 DBWrite();
void DBOpen();
void DBClose();

// DBInitComm: definicion C reemplazada por asm (ver abajo)


void DBInitInterrupts(void) {
    __OSMaskInterrupts(0x18000);
    __OSMaskInterrupts(0x40);
    lbl_8049D93C = __DBMtrHandler;
    __OSSetInterruptHandler(0x19, (s32) __DBIntrHandler);
    __OSUnmaskInterrupts(0x40);
}

// DBQueryData: definicion C reemplazada por asm (ver abajo)


// DBRead: definicion C reemplazada por asm (ver abajo)


// DBWrite: definicion C reemplazada por asm (ver abajo)


void DBOpen(void) {

}

void DBClose(void) {

}

// ---- Funciones aun sin C que matchee (asm generado) ----
void DBInitComm(s8 **arg0, s32 arg1);
s32 DBQueryData(void);
s32 DBRead(s32 arg0, s32 arg1);
s32 DBWrite(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
extern void __DBEXIInit();
M2C_UNK __DBIntrHandler();
M2C_UNK __DBMtrHandler();
extern void _restgpr_27();
extern void _savegpr_27();

// asm_to_cpp: __DBMtrHandler
asm M2C_UNK __DBMtrHandler() {
    nofralloc
    lwz r12, lbl_8049D938
    li r0, 0x1
    stb r0, lbl_8049D940
    cmpwi r12, 0x0
    beqlr
    li r3, 0x0
    mtctr r12
    bctr
    blr
}

// asm_to_cpp: __DBIntrHandler
asm M2C_UNK __DBIntrHandler() {
    nofralloc
    li r0, 0x1000
    lis r5, 0xcc00
    stw r0, 0x3000(r5)
    lwz r12, lbl_8049D93C
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

// asm_to_cpp: DBInitComm
asm void DBInitComm(s8 **arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    la r0, lbl_8049D940
    mr r31, r3
    stw r0, 0x0(r29)
    stw r30, lbl_8049D938
    bl __DBEXIInit
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: DBQueryData
asm s32 DBQueryData(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049D948
    stb r3, lbl_8049D940
    cmpwi r0, 0x0
    bne lbl_801A8708
    bl OSDisableInterrupts
    mr r31, r3
    addi r4, r1, 0x8
    lis r3, 0x3400
    li r5, 0x1
    bl __DBEXIReadReg
    lbz r0, 0x8(r1)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801A8700
    lis r3, 0x3400
    addi r4, r1, 0xc
    addi r3, r3, 0x200
    li r5, 0x4
    bl __DBEXIReadReg
    lwz r4, 0xc(r1)
    rlwinm r3, r4, 0, 3, 7
    subis r0, r3, 0x1f00
    cmplwi r0, 0x0
    bne lbl_801A8700
    clrlwi r3, r4, 19
    li r0, 0x1
    stw r4, lbl_8049D944
    stw r3, lbl_8049D948
    stb r0, lbl_8049D940
lbl_801A8700:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_801A8708:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8049D948
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: DBRead
asm s32 DBRead(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r5, lbl_8049D944
    addi r0, r31, 0x3
    mr r31, r3
    mr r4, r30
    extrwi r3, r5, 1, 15
    clrrwi r5, r0, 2
    neg r0, r3
    rlwinm r3, r0, 0, 20, 20
    addis r3, r3, 0xd1
    addi r0, r3, 0x1000
    rlwinm r3, r0, 6, 2, 23
    bl __DBEXIReadRam
    li r0, 0x0
    mr r3, r31
    stw r0, lbl_8049D948
    stb r0, lbl_8049D940
    bl OSRestoreInterrupts
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: DBWrite
asm s32 DBWrite(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    bl OSDisableInterrupts
    mr r31, r3
lbl_801A87C4:
    addi r4, r1, 0xa
    lis r3, 0x3400
    li r5, 0x1
    bl __DBEXIReadReg
    lbz r0, 0xa(r1)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801A87C4
    lbz r3, lbl_8049C428
    addi r0, r28, 0x3
    clrrwi r29, r0, 2
    addi r3, r3, 0x1
    clrlwi r0, r3, 31
    stb r3, lbl_8049C428
    neg r0, r0
    rlwinm r3, r0, 0, 20, 20
    addis r0, r3, 0xd1
    rlwinm r0, r0, 6, 2, 23
    oris r30, r0, 0x8000
lbl_801A880C:
    mr r3, r30
    mr r4, r27
    mr r5, r29
    bl __DBEXIWriteRam
    cmpwi r3, 0x0
    beq lbl_801A880C
lbl_801A8824:
    addi r4, r1, 0x9
    lis r3, 0x3400
    li r5, 0x1
    bl __DBEXIReadReg
    lbz r0, 0x9(r1)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801A8824
    lbz r3, lbl_8049C428
    clrlwi r0, r28, 19
    oris r29, r0, 0x1f00
    lis r30, 0xb400
    rlwimi r29, r3, 16, 8, 15
lbl_801A8854:
    stw r29, 0xc(r1)
    addi r3, r30, 0x100
    addi r4, r1, 0xc
    li r5, 0x4
    bl __DBEXIWriteReg
    cmpwi r3, 0x0
    beq lbl_801A8854
lbl_801A8870:
    addi r4, r1, 0x8
    lis r3, 0x3400
    li r5, 0x1
    bl __DBEXIReadReg
    lbz r0, 0x8(r1)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_801A8870
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
