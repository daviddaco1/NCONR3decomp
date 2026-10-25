#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s32 CheckBuffer_804611C0;
extern void (*FatalFunc_8049E108)();
extern M2C_UNK __DVDDeviceErrorMessage;
extern M2C_UNK lbl_803419D8;
extern M2C_UNK lbl_803419F4;
extern M2C_UNK lbl_8049D018;
extern u8 lbl_804A2560;
extern u8 lbl_804A2561;
extern u8 lbl_804A2562;
extern u8 lbl_804A2563;
extern s32 lowDone_8049D020;
extern s32 lowIntType_8049E110;

s32 fn_802D6678();
void __DVDShowFatalMessage();
s32 DVDSetAutoFatalMessaging();
s32 fn_802D68B8();
void lowCallback();
s32 __DVDCheckDevice();

// fn_802D6678: definicion C reemplazada por asm (ver abajo)


// __DVDShowFatalMessage: definicion C reemplazada por asm (ver abajo)


// DVDSetAutoFatalMessaging: definicion C reemplazada por asm (ver abajo)


s32 fn_802D68B8(void) {
    return FatalFunc_8049E108 != NULL;
}

/*
Decompilation failure in function fn_802D68CC:

Unable to determine jump table for bctr instruction at unk_802D6678.s line 195.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void lowCallback(s32 arg0) {
    lowIntType_8049E110 = arg0;
    lowDone_8049D020 = 1;
}

s32 __DVDCheckDevice(void);

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float at_834_8049D024;
s32 DVDSetAutoFatalMessaging(s32 arg0, s32 arg1, s32 arg2);
extern void OSFatal();
s32 __DVDCheckDevice();
void __DVDShowFatalMessage(void);
extern void __OSGetIOSRev();
s32 fn_802D6678(s8 *arg0, s8 *arg1);
void fn_802D68CC(void);

// asm_to_cpp: fn_802D6678
asm s32 fn_802D6678(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, 0x0(r3)
    stw r31, 0xc(r1)
    mr r31, r4
    extsb. r0, r0
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802D66C4
    lbz r0, 0x0(r4)
    extsb. r0, r0
    beq lbl_802D66C4
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_802D66C4
    li r3, 0x0
    b lbl_802D6750
lbl_802D66C4:
    lbz r0, 0x4(r30)
    extsb. r0, r0
    beq lbl_802D66F4
    lbz r0, 0x4(r31)
    extsb. r0, r0
    beq lbl_802D66F4
    addi r3, r30, 0x4
    addi r4, r31, 0x4
    li r5, 0x2
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_802D66FC
lbl_802D66F4:
    li r3, 0x0
    b lbl_802D6750
lbl_802D66FC:
    lbz r3, 0x6(r30)
    cmplwi r3, 0xff
    beq lbl_802D6724
    lbz r0, 0x6(r31)
    cmplwi r0, 0xff
    beq lbl_802D6724
    cmplw r3, r0
    beq lbl_802D6724
    li r3, 0x0
    b lbl_802D6750
lbl_802D6724:
    lbz r3, 0x7(r30)
    cmplwi r3, 0xff
    beq lbl_802D674C
    lbz r0, 0x7(r31)
    cmplwi r0, 0xff
    beq lbl_802D674C
    cmplw r3, r0
    beq lbl_802D674C
    li r3, 0x0
    b lbl_802D6750
lbl_802D674C:
    li r3, 0x1
lbl_802D6750:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __DVDShowFatalMessage
asm void __DVDShowFatalMessage(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lbz r5, lbl_804A2560
    lbz r4, lbl_804A2561
    lbz r3, lbl_804A2562
    lbz r0, lbl_804A2563
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r3, 0x12(r1)
    stb r0, 0x13(r1)
    bl SCGetLanguage
    clrlwi. r0, r3, 24
    bne lbl_802D67B8
    li r3, 0x1
    bl OSSetFontEncode
    b lbl_802D67C0
lbl_802D67B8:
    li r3, 0x0
    bl OSSetFontEncode
lbl_802D67C0:
    bl fn_803249E8
    extsb r0, r3
    cmpwi r0, 0x3
    beq lbl_802D67EC
    bge lbl_802D67E0
    cmpwi r0, 0x2
    bge lbl_802D67F8
    b lbl_802D67EC
lbl_802D67E0:
    cmpwi r0, 0x6
    bge lbl_802D67EC
    b lbl_802D6804
lbl_802D67EC:
    lis r30, lbl_803419D8@ha
    addi r30, r30, lbl_803419D8@l
    b lbl_802D6808
lbl_802D67F8:
    lis r30, lbl_803419F4@ha
    addi r30, r30, lbl_803419F4@l
    b lbl_802D6808
lbl_802D6804:
    la r30, lbl_8049D018
lbl_802D6808:
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 0x6
    ble lbl_802D6820
    lwz r5, 0x4(r30)
    b lbl_802D682C
lbl_802D6820:
    bl SCGetLanguage
    clrlslwi r0, r3, 24, 2
    lwzx r5, r30, r0
lbl_802D682C:
    lwz r0, 0x10(r1)
    addi r3, r1, 0xc
    stw r31, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl OSFatal
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: DVDSetAutoFatalMessaging
asm s32 DVDSetAutoFatalMessaging(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r5, FatalFunc_8049E108
    cmpwi r31, 0x0
    li r4, 0x0
    neg r0, r5
    or r0, r0, r5
    srwi r31, r0, 31
    beq lbl_802D6898
    lis r4, __DVDShowFatalMessage@ha
    addi r4, r4, __DVDShowFatalMessage@l
lbl_802D6898:
    stw r4, FatalFunc_8049E108
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_802D68CC(void) {
    if (FatalFunc_8049E108 != NULL) {
        FatalFunc_8049E108();
    }
}

// asm_to_cpp: __DVDCheckDevice
asm s32 __DVDCheckDevice() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, 0x460a
    bl OSGetPhysicalMem2Size
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_802D6924
    li r3, 0x1
    b lbl_802D6B64
lbl_802D6924:
    addi r3, r1, 0x18
    bl __OSGetIOSRev
    lbz r0, 0x19(r1)
    cmplwi r0, 0x1e
    blt lbl_802D6940
    cmplwi r0, 0xfe
    blt lbl_802D6948
lbl_802D6940:
    li r3, 0x1
    b lbl_802D6B64
lbl_802D6948:
    lis r3, 0x8000
    lbz r0, 0x319c(r3)
    cmplwi r0, 0x81
    bne lbl_802D695C
    lis r30, 0x7ed4
lbl_802D695C:
    li r0, 0x0
    lis r3, CheckBuffer_804611C0@ha
    lis r6, lowCallback@ha
    stw r0, lowDone_8049D020
    mr r5, r30
    addi r3, r3, CheckBuffer_804611C0@l
    addi r6, r6, lowCallback@l
    li r4, 0x20
    bl DVDLowUnencryptedRead
lbl_802D6980:
    lwz r0, lowDone_8049D020
    cmpwi r0, 0x0
    beq lbl_802D6980
    lwz r0, lowIntType_8049E110
    cmpwi r0, 0x2
    beq lbl_802D69A8
    bge lbl_802D6B5C
    cmpwi r0, 0x1
    bge lbl_802D6AC4
    b lbl_802D6B5C
lbl_802D69A8:
    li r0, 0x0
    lis r3, lowCallback@ha
    stw r0, lowDone_8049D020
    addi r3, r3, lowCallback@l
    bl DVDLowRequestError
lbl_802D69BC:
    lwz r0, lowDone_8049D020
    cmpwi r0, 0x0
    beq lbl_802D69BC
    bl DVDLowGetImmBufferReg
    lwz r0, lowIntType_8049E110
    cmpwi r0, 0x1
    beq lbl_802D69DC
    b lbl_802D6B5C
lbl_802D69DC:
    bl DVDLowGetImmBufferReg
    clrrwi. r0, r3, 24
    bne lbl_802D6B54
    bl DVDLowGetImmBufferReg
    lis r4, 0x5
    clrlwi r3, r3, 8
    addi r0, r4, 0x2100
    cmpw r3, r0
    beq lbl_802D6A04
    b lbl_802D6AC4
lbl_802D6A04:
    li r0, 0x0
    lis r3, CheckBuffer_804611C0@ha
    lis r6, lowCallback@ha
    stw r0, lowDone_8049D020
    addi r3, r3, CheckBuffer_804611C0@l
    lis r4, 0x4
    addi r6, r6, lowCallback@l
    li r5, 0x0
    bl DVDLowReportKey
lbl_802D6A28:
    lwz r0, lowDone_8049D020
    cmpwi r0, 0x0
    beq lbl_802D6A28
    lwz r0, lowIntType_8049E110
    cmpwi r0, 0x2
    beq lbl_802D6A50
    bge lbl_802D6B5C
    cmpwi r0, 0x1
    bge lbl_802D6AC4
    b lbl_802D6B5C
lbl_802D6A50:
    li r0, 0x0
    lis r3, lowCallback@ha
    stw r0, lowDone_8049D020
    addi r3, r3, lowCallback@l
    bl DVDLowRequestError
lbl_802D6A64:
    lwz r0, lowDone_8049D020
    cmpwi r0, 0x0
    beq lbl_802D6A64
    bl DVDLowGetImmBufferReg
    lwz r0, lowIntType_8049E110
    cmpwi r0, 0x1
    beq lbl_802D6A84
    b lbl_802D6B5C
lbl_802D6A84:
    bl DVDLowGetImmBufferReg
    clrrwi. r0, r3, 24
    bne lbl_802D6B54
    bl DVDLowGetImmBufferReg
    lis r4, 0x5
    clrlwi r3, r3, 8
    addi r0, r4, 0x3100
    cmpw r3, r0
    beq lbl_802D6ABC
    bge lbl_802D6AC4
    addi r0, r4, 0x2000
    cmpw r3, r0
    beq lbl_802D6ABC
    b lbl_802D6AC4
lbl_802D6ABC:
    li r3, 0x1
    b lbl_802D6B64
lbl_802D6AC4:
    lbz r5, at_834_8049D024
    li r31, 0x0
    lbz r4, at_834_8049D024+0x1
    lbz r3, at_834_8049D024+0x2
    lbz r0, at_834_8049D024+0x3
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    bl SCGetLanguage
    clrlwi. r0, r3, 24
    bne lbl_802D6B00
    li r3, 0x1
    bl OSSetFontEncode
    b lbl_802D6B08
lbl_802D6B00:
    li r3, 0x0
    bl OSSetFontEncode
lbl_802D6B08:
    lis r30, __DVDDeviceErrorMessage@ha
    addi r30, r30, __DVDDeviceErrorMessage@l
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 0x6
    ble lbl_802D6B28
    lwz r5, 0x4(r30)
    b lbl_802D6B34
lbl_802D6B28:
    bl SCGetLanguage
    clrlslwi r0, r3, 24, 2
    lwzx r5, r30, r0
lbl_802D6B34:
    lwz r0, 0x8(r1)
    addi r4, r1, 0x10
    stw r31, 0x10(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl OSFatal
    li r3, 0x0
    b lbl_802D6B64
lbl_802D6B54:
    li r3, 0x0
    b lbl_802D6B64
lbl_802D6B5C:
    bl __DVDShowFatalMessage
    li r3, 0x0
lbl_802D6B64:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
