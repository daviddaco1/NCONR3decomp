#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s32 _restgpr_26();                           /* extern */
s8 *_savegpr_26();                                /* extern */
s8 *getTiming();                          /* static */
extern M2C_UNK lbl_8036B630;
extern M2C_UNK lbl_8040BD60;
extern M2C_UNK lbl_8040BDD8;
extern s32 lbl_8040BE50;
extern s32 lbl_8040BEA8[];
extern s32 lbl_8049CE94;
extern M2C_UNK lbl_8049CEA8;
extern s32 lbl_8049DCA8;
extern s32 lbl_8049DCC8;
extern s32 lbl_8049DCD4;
extern s16 lbl_8049DCE4;
extern s16 lbl_8049DCE6;
extern s32 lbl_8049DCE8;
extern s32 lbl_8049DCF0;
extern s32 lbl_8049DCF4;
extern s32 lbl_8049DCF8;
extern s32 lbl_8049DD00;
extern s32 lbl_8049DD04;
extern s32 lbl_8049DD08;
extern u32 lbl_8049DD10;
extern s32 lbl_8049DD1C;
extern s32 lbl_8049DD24;
extern s8 *lbl_8049DD2C;
extern s32 lbl_8049DD30;
extern s32 lbl_8049DD34;
extern s32 lbl_8049DD38;
extern M2C_UNK lbl_8049DD40;
extern s32 lbl_8049DD4C;
extern s32 lbl_8049DD58;
extern s32 lbl_8049DD5C;
extern s32 lbl_8049DD60;
extern u32 lbl_8049DD64;

s32 OnShutdown();
s32 fn_80281E00();
s32 fn_80281EAC();
s32 VISetPreRetraceCallback();
s32 VISetPostRetraceCallback();
void __VIInit();
void VIWaitForRetrace();
void setFbbRegs();
void setHorizontalRegs();
void setVerticalRegs();
void fn_802836CC();
void VIConfigurePan();
void VIFlush();
void VISetNextFrameBuffer();
void VISetBlack();
u32 VIGetRetraceCount();
s32 VIGetNextField();
u32 VIGetCurrentLine();
s32 VIGetScanMode();
s32 VIGetDTVStatus();
void __VIDisplayPositionToXY();
s32 VIGetDimmingCount();
s32 VIEnableDimming();
s32 VIResetDimmingCount();
s32 __VIResetRFIdle();


s32 fn_80281E00(s8 *arg0);

// fn_80281EAC: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function __VIRetraceHandler:

Found bctr instruction at vi.s line 526, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s32 VISetPreRetraceCallback(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = lbl_8049DD38;
    temp_r3 = OSDisableInterrupts();
    lbl_8049DD38 = arg0;
    OSRestoreInterrupts(temp_r3);
    return temp_r31;
}

s32 VISetPostRetraceCallback(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = lbl_8049DD34;
    temp_r3 = OSDisableInterrupts();
    lbl_8049DD34 = arg0;
    OSRestoreInterrupts(temp_r3);
    return temp_r31;
}

/*
Decompilation failure in function getTiming:

Found bctr instruction at vi.s line 935, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// __VIInit: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function VIInit:

Found bctr instruction at vi.s line 1445, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// VIWaitForRetrace: definicion C reemplazada por asm (ver abajo)


// setFbbRegs: definicion C reemplazada por asm (ver abajo)




// fn_802836CC: definicion C reemplazada por asm (ver abajo)



// VIFlush: definicion C reemplazada por asm (ver abajo)


// VISetNextFrameBuffer: definicion C reemplazada por asm (ver abajo)


// VISetBlack: definicion C reemplazada por asm (ver abajo)


u32 VIGetRetraceCount(void) {
    return lbl_8049DD64;
}

// VIGetNextField: definicion C reemplazada por asm (ver abajo)


// VIGetCurrentLine: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function VIGetTvFormat:

Unable to determine jump table for bctr instruction at vi.s line 2839.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

// VIGetScanMode: definicion C reemplazada por asm (ver abajo)


// VIGetDTVStatus: definicion C reemplazada por asm (ver abajo)


// __VIDisplayPositionToXY: definicion C reemplazada por asm (ver abajo)


// VIGetDimmingCount: definicion C reemplazada por asm (ver abajo)


s32 VIEnableDimming(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = arg0;
    temp_r31 = lbl_8049DD58;
    if ((arg0 == 1) && (SCGetScreenSaverMode() == 0)) {
        var_r30 = 0;
    }
    lbl_8049DD58 = var_r30;
    return temp_r31;
}

/*
Decompilation failure in function VISetTimeToDimming:

Found bctr instruction at vi.s line 3121, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// VIResetDimmingCount: definicion C reemplazada por asm (ver abajo)


// __VIResetRFIdle: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float CurrTvMode_8049DD28;
extern float lbl_8049CE90;
extern float lbl_8049CE98;
extern float lbl_8049CE9C;
extern float lbl_8049CEA0;
extern float lbl_8049CEA4;
extern float lbl_8049DCB8;
extern float lbl_8049DCBC;
extern float lbl_8049DCC0;
extern float lbl_8049DCC4;
extern float lbl_8049DCCC;
extern float lbl_8049DCD0;
extern float lbl_8049DCD8;
extern float lbl_8049DCDC;
extern float lbl_8049DCE0;
extern float lbl_8049DD0C;
extern float lbl_8049DD14;
extern float lbl_8049DD18;
extern float lbl_8049DD20;
extern float lbl_8049DD48;
extern float lbl_8049DD50;
extern float lbl_8049DD54;
extern float lbl_8049DD70;
extern u8 at_4022_8036BB40[];
extern u8 jumptable_8036B918[];
extern u8 jumptable_8036B93C[];
extern u8 jumptable_8036B9C8[];
extern u8 jumptable_8036BB64[];
extern u8 lbl_8036B678[];
extern u8 lbl_8036B81C[];
extern u8 lbl_8036B908[];
extern u8 lbl_80460ED0[];
extern void OSClearContext();
extern void OSInitThreadQueue();
extern void OSPanic();
extern void OSRegisterShutdownFunction();
extern void OSRegisterVersion();
extern void OSReport();
extern void OSSetCurrentContext();
extern void OSSleepThread();
s32 OnShutdown();
extern void SBServerFree();
extern void SBServerSetFlags();
void VIConfigurePan();
void VIFlush(M2C_UNK arg_sp0);
u32 VIGetCurrentLine(void);
s32 VIGetDTVStatus(void);
s32 VIGetDimmingCount(void);
s32 VIGetNextField(void);
s32 VIGetScanMode(s32 arg0);
extern int VIGetTvFormat();
extern int VIInit();
s32 VIResetDimmingCount(void);
void VISetBlack(s32 arg0);
void VISetNextFrameBuffer(s32 arg0);
extern void VISetRGBModeImm();
extern int VISetTimeToDimming();
void VIWaitForRetrace(void);
extern void __DVDRestartMotor();
void __VIDisplayPositionToXY(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3);
void __VIInit(u32 arg0);
s32 __VIResetRFIdle(void);
extern int __VIRetraceHandler();
extern void __VISetCGMS();
extern void __VISetClosedCaption();
extern void __VISetFilter4EURGB60();
extern void __VISetGamma();
extern void __VISetGamma1_0();
extern void __VISetMacrovision();
extern void __VISetRGBModeImm();
extern void __VISetRGBOverDrive();
extern void __VISetTrapFilter();
extern void __VISetWSS();
extern void __VISetYUVSEL();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_27();
extern void fn_80253690();
s32 fn_80281E00();
s32 fn_80281EAC(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_802836CC(s8 *arg0, M2C_UNK arg_sp0);
extern void fn_802864A0();
extern void fn_8031D978();
extern void fn_803260C4();
s8 * getTiming();
void setFbbRegs(s32 *arg0, u32 *arg1, u32 *arg2, u32 *arg3, u32 *arg4);
void setHorizontalRegs();
void setVerticalRegs();

// asm_to_cpp: OnShutdown
asm s32 OnShutdown() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x640
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_26
    li r0, 0x8
    mr r26, r3
    stw r0, 0x24(r1)
    b lbl_80281D88
lbl_80281C98:
    lwz r3, 0x6b4(r26)
    addi r4, r1, 0x40
    addi r7, r1, 0x28
    addi r8, r1, 0x24
    li r5, 0x5db
    li r6, 0x0
    bl recvfrom
    cmpwi r3, -0x1
    beq lbl_80281D88
    lhz r29, 0x2a(r1)
    lwz r30, 0x2c(r1)
    lwz r3, 0x4(r26)
    bl fn_80253658
    mr r31, r3
    li r28, 0x0
    b lbl_80281D14
lbl_80281CD8:
    lwz r3, 0x4(r26)
    mr r4, r28
    bl fn_80253660
    lwz r27, 0x0(r3)
    mr r3, r27
    bl SBServerGetPublicInetAddress
    cmplw r30, r3
    bne lbl_80281D10
    mr r3, r27
    bl SBServerGetPublicQueryPortNBO
    clrlwi r0, r3, 16
    cmplw r29, r0
    bne lbl_80281D10
    b lbl_80281D20
lbl_80281D10:
    addi r28, r28, 0x1
lbl_80281D14:
    cmpw r28, r31
    blt lbl_80281CD8
    li r28, -0x1
lbl_80281D20:
    cmpwi r28, -0x1
    bne lbl_80281D88
    lwz r4, 0x2c(r1)
    mr r3, r26
    lhz r5, 0x2a(r1)
    bl SBAllocServer
    mr r27, r3
    bl SBIsNullServer
    cmpwi r3, 0x0
    beq lbl_80281D50
    li r3, 0x5
    b lbl_80281DE4
lbl_80281D50:
    mr r3, r27
    li r4, 0x11
    bl SBServerSetFlags
    stw r27, 0x20(r1)
    addi r4, r1, 0x20
    lwz r3, 0x4(r26)
    bl fn_80253690
    lwz r12, 0x488(r26)
    mr r3, r26
    lwz r5, 0x20(r1)
    li r4, 0x0
    lwz r6, 0x494(r26)
    mtctr r12
    bctrl
lbl_80281D88:
    lwz r3, 0x6b4(r26)
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_80281C98
    bl fn_802565F0
    lwz r0, 0x6b8(r26)
    subf r0, r0, r3
    cmplwi r0, 0x7d0
    ble lbl_80281DE0
    lwz r3, 0x6b4(r26)
    bl closesocket
    li r3, -0x1
    li r0, 0x1
    stw r3, 0x6b4(r26)
    mr r3, r26
    lwz r12, 0x488(r26)
    li r4, 0x3
    stw r0, 0x0(r26)
    lwz r6, 0x494(r26)
    lwz r5, lbl_8049DCA8
    mtctr r12
    bctrl
lbl_80281DE0:
    li r3, 0x0
lbl_80281DE4:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80281E00
asm s32 fn_80281E00() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, 0x7d8(r3)
    cmpwi r31, 0x0
    beq lbl_80281E54
    stw r31, 0x8(r1)
    b lbl_80281E40
lbl_80281E2C:
    bl SBServerGetNext
    mr r31, r3
    addi r3, r1, 0x8
    bl SBServerFree
    stw r31, 0x8(r1)
lbl_80281E40:
    cmpwi r31, 0x0
    mr r3, r31
    bne lbl_80281E2C
    li r0, 0x0
    stw r0, 0x7d8(r30)
lbl_80281E54:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    beq lbl_80281E90
    bge lbl_80281E70
    cmpwi r0, 0x0
    bge lbl_80281E84
    b lbl_80281E90
lbl_80281E70:
    cmpwi r0, 0x4
    bge lbl_80281E90
    mr r3, r30
    bl fn_802817E4
    b lbl_80281E94
lbl_80281E84:
    mr r3, r30
    bl OnShutdown
    b lbl_80281E94
lbl_80281E90:
    li r3, 0x0
lbl_80281E94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80281EAC
asm s32 fn_80281EAC(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_8040BD60@ha
    addi r31, r31, lbl_8040BD60@l
    bne lbl_80282028
    cmpwi r4, 0x4
    bge lbl_80281EE8
    cmpwi r4, 0x0
    beq lbl_8028201C
    bge lbl_80281EF4
    b lbl_8028202C
lbl_80281EE8:
    cmpwi r4, 0x7
    bge lbl_8028202C
    b lbl_8028201C
lbl_80281EF4:
    lwz r0, lbl_8049CE94
    cmpwi r0, 0x0
    beq lbl_80281FFC
    bl VISetRGBModeImm
    bl OSDisableInterrupts
    lwz r5, lbl_8049DCF8
    li r0, 0x0
    lwz r4, lbl_8049DCE8
    mr r30, r3
    addi r28, r31, 0x78
    addi r29, r31, 0x0
    or r3, r5, r4
    li r27, -0x1
    stw r3, lbl_8049DCF8
    stw r0, lbl_8049DCE8
    lwz r4, lbl_8049DD00
    lwz r5, lbl_8049DD04
    lwz r0, lbl_8049DCF0
    lwz r3, lbl_8049DCF4
    or r0, r4, r0
    or r3, r5, r3
    stw r3, lbl_8049DD04
    stw r0, lbl_8049DD00
    b lbl_80281FB4
lbl_80281F54:
    lwz r0, lbl_8049DCF0
    lwz r3, lbl_8049DCF4
    cntlzw r4, r0
    cmpwi r4, 0x20
    and r0, r3, r27
    bge lbl_80281F70
    b lbl_80281F78
lbl_80281F70:
    cntlzw r3, r0
    addi r4, r3, 0x20
lbl_80281F78:
    slwi r6, r4, 1
    subfic r5, r4, 0x3f
    lhzx r0, r28, r6
    li r4, 0x1
    li r3, 0x0
    sthx r0, r29, r6
    bl __shl2i
    lwz r0, lbl_8049DCF0
    nor r5, r3, r3
    lwz r3, lbl_8049DCF4
    nor r4, r4, r4
    and r0, r0, r5
    and r3, r3, r4
    stw r3, lbl_8049DCF4
    stw r0, lbl_8049DCF0
lbl_80281FB4:
    lwz r0, lbl_8049DCF0
    lwz r3, lbl_8049DCF4
    or. r0, r3, r0
    bne lbl_80281F54
    addi r3, r31, 0xf0
    li r4, 0x1
    lwz r0, 0x30(r3)
    mr r3, r30
    stw r4, lbl_8049DD60
    stw r4, lbl_8049DD5C
    stw r0, lbl_8049DD24
    bl OSRestoreInterrupts
    lwz r4, lbl_8049DD64
    li r0, 0x0
    stw r0, lbl_8049CE94
    li r3, 0x0
    stw r4, lbl_8049DD10
    b lbl_8028202C
lbl_80281FFC:
    lwz r3, lbl_8049DD10
    lwz r0, lbl_8049DD64
    cmplw r3, r0
    bne lbl_80282014
    li r3, 0x0
    b lbl_8028202C
lbl_80282014:
    li r3, 0x1
    b lbl_8028202C
lbl_8028201C:
    bl __VISetGamma1_0
    li r3, 0x1
    b lbl_8028202C
lbl_80282028:
    li r3, 0x1
lbl_8028202C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __VIRetraceHandler
asm int __VIRetraceHandler() {
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_26
    lis r5, 0xcc00
    lis r30, lbl_8040BD60@ha
    lhz r3, 0x2030(r5)
    mr r28, r4
    addi r30, r30, lbl_8040BD60@l
    li r6, 0x0
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_80282084
    clrlwi r0, r3, 17
    ori r6, r6, 0x1
    sth r0, 0x2030(r5)
lbl_80282084:
    lis r4, 0xcc00
    lhz r3, 0x2034(r4)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_802820A0
    clrlwi r0, r3, 17
    ori r6, r6, 0x2
    sth r0, 0x2034(r4)
lbl_802820A0:
    lis r4, 0xcc00
    lhz r3, 0x2038(r4)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_802820BC
    clrlwi r0, r3, 17
    ori r6, r6, 0x4
    sth r0, 0x2038(r4)
lbl_802820BC:
    lis r4, 0xcc00
    lhz r3, 0x203c(r4)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_802820D8
    clrlwi r0, r3, 17
    ori r6, r6, 0x8
    sth r0, 0x203c(r4)
lbl_802820D8:
    rlwinm. r0, r6, 0, 29, 29
    lis r3, 0xcc00
    lhz r0, 0x203c(r3)
    bne lbl_802820F0
    rlwinm. r0, r6, 0, 28, 28
    beq lbl_80282168
lbl_802820F0:
    addi r3, r1, 0x10
    bl OSClearContext
    addi r3, r1, 0x10
    bl OSSetCurrentContext
    lwz r0, lbl_8049DCE0
    cmpwi r0, 0x0
    beq lbl_80282154
    lis r5, 0xcc00
    lhz r0, 0x202c(r5)
    clrlwi r4, r0, 21
lbl_80282118:
    lhz r3, 0x202e(r5)
    mr r6, r4
    lhz r0, 0x202c(r5)
    clrlwi r3, r3, 21
    clrlwi r4, r0, 21
    cmplw r6, r4
    bne lbl_80282118
    addi r5, r1, 0xa
    addi r6, r1, 0x8
    bl __VIDisplayPositionToXY
    lwz r12, lbl_8049DCE0
    lha r3, 0xa(r1)
    lha r4, 0x8(r1)
    mtctr r12
    bctrl
lbl_80282154:
    addi r3, r1, 0x10
    bl OSClearContext
    mr r3, r28
    bl OSSetCurrentContext
    b lbl_8028283C
lbl_80282168:
    lwz r4, lbl_8049DD64
    addi r3, r1, 0x10
    addi r0, r4, 0x1
    stw r0, lbl_8049DD64
    bl OSClearContext
    addi r3, r1, 0x10
    bl OSSetCurrentContext
    lwz r12, lbl_8049DD38
    cmpwi r12, 0x0
    beq lbl_8028219C
    lwz r3, lbl_8049DD64
    mtctr r12
    bctrl
lbl_8028219C:
    lwz r0, lbl_8049DCC0
    cmpwi r0, 0x0
    beq lbl_802821F8
    lis r3, 0xcc00
    lhz r0, 0x202c(r3)
    clrlwi r4, r0, 21
lbl_802821B4:
    lhz r0, 0x202e(r3)
    mr r5, r4
    lhz r0, 0x202c(r3)
    clrlwi r4, r0, 21
    cmplw r5, r4
    bne lbl_802821B4
    cmplwi r4, 0x1
    beq lbl_802821F8
    lwz r3, lbl_8049DD2C
    lhz r0, 0x18(r3)
    srwi r3, r0, 1
    addi r0, r3, 0x1
    cmplw r4, r0
    beq lbl_802821F8
    lwz r3, lbl_8049DCBC
    addi r0, r3, 0x1
    stw r0, lbl_8049DCBC
lbl_802821F8:
    lwz r0, lbl_8049DD60
    cmpwi r0, 0x0
    beq lbl_80282334
    lwz r0, lbl_8049DCF8
    cmplwi r0, 0x1
    bne lbl_8028226C
    lis r4, 0xcc00
    lhz r0, 0x202c(r4)
    clrlwi r7, r0, 21
lbl_8028221C:
    lhz r3, 0x202e(r4)
    mr r6, r7
    lhz r0, 0x202c(r4)
    clrlwi r5, r3, 21
    clrlwi r7, r0, 21
    cmplw r6, r7
    bne lbl_8028221C
    lwz r6, lbl_8049DD2C
    subi r4, r5, 0x1
    subi r3, r7, 0x1
    lhz r0, 0x1a(r6)
    slwi r5, r3, 1
    lhz r3, 0x18(r6)
    divwu r0, r4, r0
    add r0, r5, r0
    xor r0, r3, r0
    cntlzw r0, r0
    slw r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_8028231C
lbl_8028226C:
    addi r26, r30, 0x0
    li r31, -0x1
    lis r27, 0xcc00
    b lbl_802822E0
lbl_8028227C:
    lwz r0, lbl_8049DD00
    lwz r3, lbl_8049DD04
    cntlzw r4, r0
    cmpwi r4, 0x20
    and r0, r3, r31
    bge lbl_80282298
    b lbl_802822A0
lbl_80282298:
    cntlzw r3, r0
    addi r4, r3, 0x20
lbl_802822A0:
    slwi r3, r4, 1
    subfic r5, r4, 0x3f
    lhzx r0, r26, r3
    add r6, r27, r3
    li r4, 0x1
    li r3, 0x0
    sth r0, 0x2000(r6)
    bl __shl2i
    lwz r0, lbl_8049DD00
    nor r5, r3, r3
    lwz r3, lbl_8049DD04
    nor r4, r4, r4
    and r0, r0, r5
    and r3, r3, r4
    stw r3, lbl_8049DD04
    stw r0, lbl_8049DD00
lbl_802822E0:
    lwz r0, lbl_8049DD00
    lwz r3, lbl_8049DD04
    or. r0, r3, r0
    bne lbl_8028227C
    addi r3, r30, 0xf0
    lwz r0, lbl_8049DD24
    lwz r4, 0x54(r3)
    li r5, 0x0
    lwz r3, 0x28(r3)
    li r6, 0x1
    stw r5, lbl_8049DCF8
    stw r4, lbl_8049DD2C
    stw r3, CurrTvMode_8049DD28
    stw r0, lbl_8049DD20
    b lbl_80282320
lbl_8028231C:
    li r6, 0x0
lbl_80282320:
    cmpwi r6, 0x0
    beq lbl_80282334
    li r0, 0x0
    stw r0, lbl_8049DD60
    bl fn_803260C4
lbl_80282334:
    bl OSDisableInterrupts
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    clrlwi r26, r0, 30
    bl OSRestoreInterrupts
    lwz r0, lbl_8049CE98
    clrlwi r26, r26, 31
    cmplw r26, r0
    beq lbl_80282360
    mr r3, r26
    bl __VISetYUVSEL
lbl_80282360:
    stw r26, lbl_8049CE98
    bl OSDisableInterrupts
    lwz r5, CurrTvMode_8049DD28
    cmplwi r5, 0x8
    bgt lbl_802823A0
    lis r4, jumptable_8036B918@ha
    slwi r0, r5, 2
    addi r4, r4, jumptable_8036B918@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r29, 0x0
    b lbl_802823A0
    li r29, 0x1
    b lbl_802823A0
    mr r29, r5
lbl_802823A0:
    bl OSRestoreInterrupts
    lwz r0, lbl_8049CE9C
    cmplw r29, r0
    beq lbl_80282484
    cmplwi r29, 0x5
    bne lbl_802823C4
    li r3, 0x1
    bl __VISetFilter4EURGB60
    b lbl_802823CC
lbl_802823C4:
    li r3, 0x0
    bl __VISetFilter4EURGB60
lbl_802823CC:
    cmpwi r29, 0x1
    beq lbl_802823D8
    b lbl_80282428
lbl_802823D8:
    lwz r0, lbl_8049DD50
    cmpwi r0, 0x2
    beq lbl_80282400
    bge lbl_80282410
    cmpwi r0, 0x1
    bge lbl_802823F4
    b lbl_80282410
lbl_802823F4:
    li r0, 0x7530
    stw r0, lbl_8049DCCC
    b lbl_80282418
lbl_80282400:
    lis r3, 0x1
    subi r0, r3, 0x5038
    stw r0, lbl_8049DCCC
    b lbl_80282418
lbl_80282410:
    li r0, 0x3a98
    stw r0, lbl_8049DCCC
lbl_80282418:
    lis r3, 0x1
    addi r0, r3, 0x5f90
    stw r0, lbl_8049DCD0
    b lbl_80282478
lbl_80282428:
    lwz r0, lbl_8049DD50
    cmpwi r0, 0x2
    beq lbl_80282454
    bge lbl_80282464
    cmpwi r0, 0x1
    bge lbl_80282444
    b lbl_80282464
lbl_80282444:
    lis r3, 0x1
    subi r0, r3, 0x7360
    stw r0, lbl_8049DCCC
    b lbl_8028246C
lbl_80282454:
    lis r3, 0x1
    subi r0, r3, 0x2d10
    stw r0, lbl_8049DCCC
    b lbl_8028246C
lbl_80282464:
    li r0, 0x4650
    stw r0, lbl_8049DCCC
lbl_8028246C:
    lis r3, 0x2
    subi r0, r3, 0x5a20
    stw r0, lbl_8049DCD0
lbl_80282478:
    li r0, 0x0
    stw r0, lbl_8049DCD4
    stw r0, lbl_8049DCD8
lbl_80282484:
    lwz r0, lbl_8049DD5C
    stw r29, lbl_8049CE9C
    cmpwi r0, 0x0
    beq lbl_80282568
    li r29, 0x1
    b lbl_80282554
lbl_8028249C:
    lwz r0, lbl_8049DD70
    cntlzw r0, r0
    subfic r0, r0, 0x1f
    slw r26, r29, r0
    cmpwi r26, 0x10
    beq lbl_8028252C
    bge lbl_802824E8
    cmpwi r26, 0x4
    beq lbl_8028251C
    bge lbl_802824DC
    cmpwi r26, 0x2
    beq lbl_80282514
    bge lbl_80282548
    cmpwi r26, 0x1
    bge lbl_8028250C
    b lbl_80282548
lbl_802824DC:
    cmpwi r26, 0x8
    beq lbl_80282524
    b lbl_80282548
lbl_802824E8:
    cmpwi r26, 0x40
    beq lbl_8028253C
    bge lbl_80282500
    cmpwi r26, 0x20
    beq lbl_80282534
    b lbl_80282548
lbl_80282500:
    cmpwi r26, 0x80
    beq lbl_80282544
    b lbl_80282548
lbl_8028250C:
    bl __VISetCGMS
    b lbl_80282548
lbl_80282514:
    bl __VISetWSS
    b lbl_80282548
lbl_8028251C:
    bl __VISetClosedCaption
    b lbl_80282548
lbl_80282524:
    bl __VISetMacrovision
    b lbl_80282548
lbl_8028252C:
    bl __VISetGamma
    b lbl_80282548
lbl_80282534:
    bl __VISetTrapFilter
    b lbl_80282548
lbl_8028253C:
    bl __VISetRGBOverDrive
    b lbl_80282548
lbl_80282544:
    bl __VISetRGBModeImm
lbl_80282548:
    lwz r0, lbl_8049DD70
    andc r0, r0, r26
    stw r0, lbl_8049DD70
lbl_80282554:
    lwz r0, lbl_8049DD70
    cmpwi r0, 0x0
    bne lbl_8028249C
    li r0, 0x0
    stw r0, lbl_8049DD5C
lbl_80282568:
    lwz r0, lbl_8049DD34
    cmpwi r0, 0x0
    beq lbl_8028258C
    addi r3, r1, 0x10
    bl OSClearContext
    lwz r12, lbl_8049DD34
    lwz r3, lbl_8049DD64
    mtctr r12
    bctrl
lbl_8028258C:
    la r3, lbl_8049DD40
    bl fn_8031D978
    addi r3, r1, 0x10
    bl OSClearContext
    mr r3, r28
    bl OSSetCurrentContext
    lwz r0, lbl_8049DCC4
    cmpwi r0, 0x1
    bne lbl_802825D4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __OSSetVIForceDimming
    cmpwi r3, 0x1
    bne lbl_802825D4
    li r0, 0x0
    stw r0, lbl_8049DCC4
    stw r0, lbl_8049DCD4
lbl_802825D4:
    li r0, 0xa
    addi r3, r30, 0x148
    mtctr r0
lbl_802825E0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802825F8
    li r0, 0x0
    stw r0, 0x148(r30)
    b lbl_80282600
lbl_802825F8:
    addi r3, r3, 0x4
    bdnz lbl_802825E0
lbl_80282600:
    lwz r0, lbl_8049DD4C
    cmpwi r0, 0x0
    beq lbl_80282678
    lwz r0, lbl_8049DD48
    cmpwi r0, 0x0
    beq lbl_80282678
    lwz r0, 0x148(r30)
    cmpwi r0, 0x0
    beq lbl_80282678
    lwz r0, lbl_8049DD58
    cmpwi r0, 0x1
    bne lbl_8028264C
    lwz r3, lbl_8049DCD4
    li r0, -0x1
    cmplw r3, r0
    bge lbl_8028264C
    lwz r3, lbl_8049DCD4
    addi r0, r3, 0x1
    stw r0, lbl_8049DCD4
lbl_8028264C:
    lwz r0, lbl_8049DD54
    cmpwi r0, 0x1
    bne lbl_802826B8
    lwz r3, lbl_8049DCD8
    li r0, -0x1
    cmplw r3, r0
    bge lbl_802826B8
    lwz r3, lbl_8049DCD8
    addi r0, r3, 0x1
    stw r0, lbl_8049DCD8
    b lbl_802826B8
lbl_80282678:
    lwz r3, lbl_8049DCD4
    lwz r0, lbl_8049DCC8
    cmplw r3, r0
    blt lbl_80282690
    li r0, 0x1
    stw r0, lbl_8049DD18
lbl_80282690:
    lwz r3, lbl_8049DCD8
    lwz r0, lbl_8049DCD0
    cmplw r3, r0
    blt lbl_802826A4
    bl __DVDRestartMotor
lbl_802826A4:
    li r0, 0x0
    stw r0, lbl_8049DCD4
    stw r0, lbl_8049DCD8
    lwz r0, lbl_8049DCCC
    stw r0, lbl_8049DCC8
lbl_802826B8:
    lwz r3, lbl_8049CEA0
    lwz r0, lbl_8049DD58
    cmpw r3, r0
    beq lbl_802826FC
    lwz r0, lbl_8049DD58
    cmpwi r0, 0x0
    bne lbl_802826EC
    lwz r3, lbl_8049DCD4
    lwz r0, lbl_8049DCC8
    cmplw r3, r0
    blt lbl_802826EC
    li r0, 0x1
    stw r0, lbl_8049DD18
lbl_802826EC:
    li r0, 0x0
    stw r0, lbl_8049DCD4
    lwz r0, lbl_8049DCCC
    stw r0, lbl_8049DCC8
lbl_802826FC:
    lwz r3, lbl_8049DCD4
    lwz r0, lbl_8049DCC8
    cmplw r3, r0
    bne lbl_80282714
    li r0, 0x1
    stw r0, lbl_8049DD14
lbl_80282714:
    lwz r0, lbl_8049DD18
    cmpwi r0, 0x0
    beq lbl_80282744
    li r3, 0x0
    li r4, 0x2
    li r5, 0x2
    bl __OSSetVIForceDimming
    cmpwi r3, 0x1
    bne lbl_80282744
    li r0, 0x0
    stw r0, lbl_8049DD18
    stw r0, lbl_8049DCDC
lbl_80282744:
    lwz r0, lbl_8049DD14
    cmpwi r0, 0x0
    beq lbl_80282778
    li r3, 0x1
    li r4, 0x2
    li r5, 0x2
    bl __OSSetVIForceDimming
    cmpwi r3, 0x1
    bne lbl_80282778
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8049DD14
    stw r0, lbl_8049DCDC
lbl_80282778:
    lwz r3, lbl_8049CEA4
    lwz r0, lbl_8049DD54
    cmpw r3, r0
    beq lbl_802827B0
    lwz r0, lbl_8049DD54
    cmpwi r0, 0x0
    bne lbl_802827A8
    lwz r3, lbl_8049DCD8
    lwz r0, lbl_8049DCD0
    cmplw r3, r0
    blt lbl_802827A8
    bl __DVDRestartMotor
lbl_802827A8:
    li r0, 0x0
    stw r0, lbl_8049DCD8
lbl_802827B0:
    lwz r3, lbl_8049DCD8
    lwz r0, lbl_8049DCD0
    cmplw r3, r0
    bne lbl_802827D0
    lis r3, lbl_80460ED0@ha
    li r4, 0x0
    addi r3, r3, lbl_80460ED0@l
    bl __DVDStopMotorAsync
lbl_802827D0:
    li r0, 0x1
    addi r3, r30, 0x148
    stw r0, lbl_8049DD4C
    stw r0, lbl_8049DD48
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r5, lbl_8049DD58
    lwz r4, lbl_8049DD54
    lwz r3, lbl_8049DCCC
    lwz r0, lbl_8049DCD4
    stw r5, lbl_8049CEA0
    cmplw r3, r0
    stw r4, lbl_8049CEA4
    ble lbl_8028283C
    lwz r0, lbl_8049DCDC
    cmpwi r0, 0x0
    bne lbl_8028283C
    lwz r0, lbl_8049DCCC
    stw r0, lbl_8049DCC8
lbl_8028283C:
    addi r11, r1, 0x2f0
    bl _restgpr_26
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

// asm_to_cpp: getTiming
asm s8 * getTiming() {
    nofralloc
    cmplwi r3, 0x22
    bgt lbl_802829EC
    lis r4, jumptable_8036B93C@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_8036B93C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x26
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x4c
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x72
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x26
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x98
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0xbe
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0xe4
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x10a
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x4c
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x72
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x130
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x156
    blr
    lis r3, lbl_8036B678@ha
    addi r3, r3, lbl_8036B678@l
    addi r3, r3, 0x17c
    blr
    lwz r3, lbl_8049DD0C
    blr
lbl_802829EC:
    li r3, 0x0
    blr
}

// asm_to_cpp: __VIInit
asm void __VIInit(u32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    clrlwi r31, r3, 30
    stw r30, 0x18(r1)
    srwi r30, r3, 2
    stw r30, 0xcc(r4)
    bl getTiming
    li r5, 0x2
    lis r4, 0xcc00
    li r0, 0x0
    sth r5, 0x2002(r4)
    stw r0, 0x8(r1)
    b lbl_80282A40
lbl_80282A34:
    lwz r4, 0x8(r1)
    addi r0, r4, 0x1
    stw r0, 0x8(r1)
lbl_80282A40:
    lwz r0, 0x8(r1)
    cmplwi r0, 0x3e8
    blt lbl_80282A34
    lis r5, 0xcc00
    li r0, 0x0
    sth r0, 0x2002(r5)
    lhz r0, 0x1a(r3)
    sth r0, 0x2006(r5)
    lbz r4, 0x1d(r3)
    lbz r0, 0x1e(r3)
    rlwimi r0, r4, 8, 16, 23
    sth r0, 0x2004(r5)
    lbz r0, 0x1f(r3)
    lbz r4, 0x1c(r3)
    slwi r0, r0, 7
    or r0, r4, r0
    sth r0, 0x200a(r5)
    lhz r0, 0x20(r3)
    clrlslwi r0, r0, 17, 1
    sth r0, 0x2008(r5)
    lwz r0, lbl_8049DD30
    cmpwi r0, 0x0
    bne lbl_80282AB0
    lbz r0, 0x22(r3)
    ori r0, r0, 0x8000
    sth r0, 0x2072(r5)
    lhz r0, 0x24(r3)
    sth r0, 0x2074(r5)
lbl_80282AB0:
    lbz r0, 0x0(r3)
    lis r4, 0xcc00
    li r6, 0x2828
    li r5, 0x1
    sth r0, 0x2000(r4)
    li r0, 0x1001
    cmpwi r30, 0x4
    lhz r8, 0x2(r3)
    lhz r7, 0x4(r3)
    slwi r8, r8, 1
    add r7, r7, r8
    subi r7, r7, 0x2
    sth r7, 0x200e(r4)
    lhz r7, 0x8(r3)
    addi r7, r7, 0x2
    sth r7, 0x200c(r4)
    lhz r8, 0x2(r3)
    lhz r7, 0x6(r3)
    slwi r8, r8, 1
    add r7, r7, r8
    subi r7, r7, 0x2
    sth r7, 0x2012(r4)
    lhz r7, 0xa(r3)
    addi r7, r7, 0x2
    sth r7, 0x2010(r4)
    lhz r7, 0x10(r3)
    lbz r8, 0xc(r3)
    slwi r7, r7, 5
    or r7, r8, r7
    sth r7, 0x2016(r4)
    lhz r7, 0x14(r3)
    lbz r8, 0xe(r3)
    slwi r7, r7, 5
    or r7, r8, r7
    sth r7, 0x2014(r4)
    lhz r7, 0x12(r3)
    lbz r8, 0xd(r3)
    slwi r7, r7, 5
    or r7, r8, r7
    sth r7, 0x201a(r4)
    lhz r7, 0x16(r3)
    lbz r8, 0xf(r3)
    slwi r7, r7, 5
    or r7, r8, r7
    sth r7, 0x2018(r4)
    sth r6, 0x2048(r4)
    sth r5, 0x2036(r4)
    sth r0, 0x2034(r4)
    lhz r0, 0x18(r3)
    lhz r3, 0x1a(r3)
    srwi r5, r0, 1
    addi r0, r3, 0x1
    addi r5, r5, 0x1
    sth r0, 0x2032(r4)
    clrlwi r3, r5, 16
    ori r0, r3, 0x1000
    sth r0, 0x2030(r4)
    bge lbl_80282BA8
    cmpwi r30, 0x1
    bge lbl_80282BAC
    b lbl_80282BA8
    b lbl_80282BAC
lbl_80282BA8:
    li r30, 0x0
lbl_80282BAC:
    cmplwi r31, 0x1
    bgt lbl_80282BD4
    slwi r0, r30, 8
    lis r3, 0xcc00
    ori r4, r0, 0x1
    rlwimi r4, r31, 2, 29, 29
    li r0, 0x0
    sth r4, 0x2002(r3)
    sth r0, 0x206c(r3)
    b lbl_80282BEC
lbl_80282BD4:
    slwi r0, r30, 8
    lis r3, 0xcc00
    ori r4, r0, 0x5
    sth r4, 0x2002(r3)
    li r0, 0x1
    sth r0, 0x206c(r3)
lbl_80282BEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: VIInit
asm int VIInit() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r0, lbl_8049DCB8
    cmpwi r0, 0x0
    bne lbl_80283134
    lwz r3, lbl_8049CE90
    bl OSRegisterVersion
    li r0, 0x1
    lis r3, 0xcc00
    stw r0, lbl_8049DCB8
    lhz r0, 0x2002(r3)
    clrlwi. r0, r0, 31
    bne lbl_80282C4C
    li r3, 0x0
    bl __VIInit
lbl_80282C4C:
    lis r4, lbl_8036B81C@ha
    li r29, 0x0
    addi r3, r4, lbl_8036B81C@l
    stw r29, lbl_8049DD64
    lhz r5, 0x2(r3)
    lis r30, 0xcc00
    lhz r4, lbl_8036B81C@l(r4)
    clrlslwi r0, r5, 26, 10
    stw r29, lbl_8049DCF4
    or r0, r4, r0
    srawi r4, r5, 6
    stw r29, lbl_8049DCF0
    stw r29, lbl_8049DD04
    stw r29, lbl_8049DD00
    stw r29, lbl_8049DCE8
    stw r29, lbl_8049DCF8
    stw r29, lbl_8049DD60
    stw r29, lbl_8049DD5C
    sth r0, 0x204e(r30)
    lhz r0, 0x4(r3)
    slwi r0, r0, 4
    or r0, r4, r0
    sth r0, 0x204c(r30)
    lhz r4, 0x8(r3)
    lhz r5, 0x6(r3)
    clrlslwi r0, r4, 26, 10
    srawi r4, r4, 6
    or r0, r5, r0
    sth r0, 0x2052(r30)
    lhz r0, 0xa(r3)
    slwi r0, r0, 4
    or r0, r4, r0
    sth r0, 0x2050(r30)
    lhz r4, 0xe(r3)
    lhz r5, 0xc(r3)
    clrlslwi r0, r4, 26, 10
    srawi r4, r4, 6
    or r0, r5, r0
    sth r0, 0x2056(r30)
    lhz r0, 0x10(r3)
    slwi r0, r0, 4
    or r0, r4, r0
    sth r0, 0x2054(r30)
    lhz r0, 0x14(r3)
    lhz r4, 0x12(r3)
    slwi r0, r0, 8
    or r0, r4, r0
    sth r0, 0x205a(r30)
    lhz r0, 0x18(r3)
    lhz r4, 0x16(r3)
    slwi r0, r0, 8
    or r0, r4, r0
    sth r0, 0x2058(r30)
    lhz r4, 0x1c(r3)
    li r0, 0x280
    lhz r5, 0x1a(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x205e(r30)
    lhz r4, 0x20(r3)
    lhz r5, 0x1e(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x205c(r30)
    lhz r4, 0x24(r3)
    lhz r5, 0x22(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x2062(r30)
    lhz r4, 0x28(r3)
    lhz r5, 0x26(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x2060(r30)
    lhz r4, 0x2c(r3)
    lhz r5, 0x2a(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x2066(r30)
    lhz r4, 0x30(r3)
    lhz r5, 0x2e(r3)
    slwi r3, r4, 8
    or r3, r5, r3
    sth r3, 0x2064(r30)
    sth r0, 0x2070(r30)
    bl SCGetDisplayOffsetH
    extsb r0, r3
    sth r29, lbl_8049DCE6
    lis r3, 0x8000
    sth r0, lbl_8049DCE4
    lwz r24, 0xcc(r3)
    lhz r29, 0x2002(r30)
    bl OSDisableInterrupts
    lhz r0, 0x206c(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_80282DD8
    li r27, 0x2
    b lbl_80282DEC
lbl_80282DD8:
    lhz r0, 0x2002(r30)
    extrwi r4, r0, 1, 29
    neg r0, r4
    or r0, r0, r4
    srwi r27, r0, 31
lbl_80282DEC:
    bl OSRestoreInterrupts
    lis r3, lbl_8040BE50@ha
    cmplwi r24, 0x5
    addi r3, r3, lbl_8040BE50@l
    extrwi r0, r29, 2, 22
    stw r27, 0x24(r3)
    stw r0, 0x28(r3)
    beq lbl_80282E1C
    cmplwi r24, 0x1
    bne lbl_80282E2C
    cmpwi r0, 0x0
    bne lbl_80282E2C
lbl_80282E1C:
    lis r3, lbl_8040BE50@ha
    li r0, 0x5
    addi r3, r3, lbl_8040BE50@l
    stw r0, 0x28(r3)
lbl_80282E2C:
    lis r30, lbl_8040BE50@ha
    addi r31, r30, lbl_8040BE50@l
    lwz r5, 0x28(r31)
    lwz r0, 0x24(r31)
    subi r4, r5, 0x3
    subfic r3, r5, 0x3
    nor r3, r4, r3
    srawi r3, r3, 31
    andc r3, r5, r3
    slwi r3, r3, 2
    add r3, r3, r0
    bl getTiming
    li r7, 0x280
    lwz r8, 0x28(r31)
    lis r4, lbl_8040BDD8@ha
    stw r3, 0x54(r31)
    subfic r6, r7, 0x2d0
    lha r0, lbl_8049DCE4
    addi r4, r4, lbl_8040BDD8@l
    stw r3, lbl_8049DD2C
    srwi r5, r6, 31
    sth r29, 0x2(r4)
    add r5, r5, r6
    srawi r5, r5, 1
    li r4, 0x0
    stw r8, CurrTvMode_8049DD28
    add r6, r5, r0
    subfic r9, r7, 0x2d0
    sth r7, 0x4(r31)
    cmpw r6, r9
    lhz r0, 0x2(r3)
    clrlslwi r0, r0, 17, 1
    sth r5, lbl_8040BE50@l(r30)
    sth r0, 0x6(r31)
    sth r4, 0x2(r31)
    lhz r7, 0x2(r3)
    ble lbl_80282EC4
    b lbl_80282ECC
lbl_80282EC4:
    srawi r0, r6, 31
    andc r9, r6, r0
lbl_80282ECC:
    lis r5, lbl_8040BE50@ha
    lha r8, lbl_8049DCE6
    addi r5, r5, lbl_8040BE50@l
    lhz r6, 0x2(r5)
    lwz r4, 0x20(r5)
    extsh r0, r6
    clrlwi r6, r6, 31
    add r10, r0, r8
    sth r9, 0x8(r5)
    cntlzw r0, r4
    srwi r4, r0, 5
    cmpw r10, r6
    mr r0, r6
    addi r5, r4, 0x1
    ble lbl_80282F0C
    mr r0, r10
lbl_80282F0C:
    lis r4, lbl_8040BE50@ha
    extsh r7, r7
    addi r4, r4, lbl_8040BE50@l
    li r9, 0x280
    lhz r10, 0x2(r4)
    slwi r30, r7, 1
    lhz r7, 0x6(r4)
    subf r26, r6, r30
    extsh r10, r10
    lha r11, 0x2(r4)
    add r27, r8, r10
    extsh r12, r7
    add r12, r12, r27
    lha r10, 0x6(r4)
    add r11, r11, r8
    subf r25, r6, r27
    subf r8, r26, r12
    add r10, r10, r27
    neg r12, r8
    sth r0, 0xa(r4)
    andc r12, r12, r8
    subf r24, r26, r10
    srawi r27, r12, 31
    subf r26, r6, r11
    srawi r10, r25, 31
    neg r6, r24
    srawi r12, r26, 31
    and r8, r8, r27
    and r31, r25, r10
    andc r6, r6, r24
    srawi r10, r6, 31
    and r30, r26, r12
    srawi r6, r25, 31
    add r7, r7, r31
    subf r0, r8, r7
    and r26, r24, r10
    and r6, r25, r6
    sth r0, 0xc(r4)
    divw r10, r6, r5
    lhz r11, 0x1c(r4)
    lhz r12, 0x18(r4)
    li r29, 0x0
    sth r9, 0x12(r4)
    li r6, 0x28
    divw r8, r30, r5
    add r7, r11, r10
    li r0, 0x1
    divw r5, r26, r5
    subf r8, r8, r12
    sth r8, 0xe(r4)
    subf r5, r5, r7
    sth r5, 0x10(r4)
    lhz r5, 0x2(r3)
    clrlslwi r5, r5, 17, 1
    sth r29, 0x16(r4)
    sth r5, 0x14(r4)
    sth r29, 0x18(r4)
    sth r9, 0x1a(r4)
    lhz r5, 0x2(r3)
    la r3, lbl_8049DD40
    clrlslwi r5, r5, 17, 1
    stw r29, 0x20(r4)
    sth r5, 0x1c(r4)
    stb r6, 0x2c(r4)
    stb r6, 0x2d(r4)
    stb r6, 0x2e(r4)
    stb r29, 0x3c(r4)
    stw r0, 0x40(r4)
    stw r29, 0x44(r4)
    bl OSInitThreadQueue
    lis r5, 0xcc00
    lis r4, __VIRetraceHandler@ha
    lhz r0, 0x2030(r5)
    addi r4, r4, __VIRetraceHandler@l
    li r3, 0x18
    clrlwi r0, r0, 17
    sth r0, 0x2030(r5)
    lhz r0, 0x2034(r5)
    clrlwi r0, r0, 17
    sth r0, 0x2034(r5)
    stw r29, lbl_8049DD38
    stw r29, lbl_8049DD34
    bl __OSSetInterruptHandler
    li r3, 0x80
    bl __OSUnmaskInterrupts
    lis r3, lbl_8036B908@ha
    addi r3, r3, lbl_8036B908@l
    bl OSRegisterShutdownFunction
    bl OSDisableInterrupts
    lwz r5, CurrTvMode_8049DD28
    cmplwi r5, 0x8
    bgt lbl_802830A8
    lis r4, jumptable_8036B9C8@ha
    slwi r0, r5, 2
    addi r4, r4, jumptable_8036B9C8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r28, 0x0
    b lbl_802830A8
    li r28, 0x1
    b lbl_802830A8
    mr r28, r5
lbl_802830A8:
    bl OSRestoreInterrupts
    cmpwi r28, 0x1
    beq lbl_802830B8
    b lbl_802830D4
lbl_802830B8:
    lis r3, 0x1
    li r4, 0x3a98
    addi r0, r3, 0x5f90
    stw r4, lbl_8049DCC8
    stw r4, lbl_8049DCCC
    stw r0, lbl_8049DCD0
    b lbl_802830EC
lbl_802830D4:
    lis r3, 0x2
    li r4, 0x4650
    subi r0, r3, 0x5a20
    stw r4, lbl_8049DCC8
    stw r4, lbl_8049DCCC
    stw r0, lbl_8049DCD0
lbl_802830EC:
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8049DCD4
    li r27, 0x1
    stw r3, lbl_8049DCD8
    stw r3, lbl_8049DD50
    stw r0, lbl_8049DCC4
    stw r3, lbl_8049DCDC
    lwz r0, lbl_8049DD58
    bl SCGetScreenSaverMode
    clrlwi. r0, r3, 24
    bne lbl_80283120
    li r27, 0x0
lbl_80283120:
    stw r27, lbl_8049DD58
    li r0, 0x0
    lwz r3, lbl_8049DD54
    stw r0, lbl_8049DD54
    bl fn_802864A0
lbl_80283134:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: VIWaitForRetrace
asm void VIWaitForRetrace(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    mr r31, r3
    lwz r30, lbl_8049DD64
lbl_8028316C:
    la r3, lbl_8049DD40
    bl OSSleepThread
    lwz r0, lbl_8049DD64
    cmplw r30, r0
    beq lbl_8028316C
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: setFbbRegs
asm void setFbbRegs(s32 *arg0, u32 *arg1, u32 *arg2, u32 *arg3, u32 *arg4) {
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    lbz r8, 0x2c(r3)
    lhz r0, 0xe(r3)
    slwi r31, r8, 5
    lwz r11, 0x20(r3)
    mullw r8, r31, r0
    lhz r9, 0x16(r3)
    lwz r10, 0x30(r3)
    cmpwi r11, 0x0
    extlwi r0, r9, 27, 1
    lhz r12, 0xa(r3)
    add r0, r10, r0
    add r9, r8, r0
    stw r9, 0x0(r4)
    bne lbl_802831E4
    b lbl_802831E8
lbl_802831E4:
    add r9, r9, r31
lbl_802831E8:
    srwi r8, r12, 31
    clrlwi r0, r12, 31
    xor r0, r0, r8
    stw r9, 0x0(r5)
    subf r0, r8, r0
    cmpwi r0, 0x1
    bne lbl_80283210
    lwz r0, 0x0(r4)
    stw r9, 0x0(r4)
    stw r0, 0x0(r5)
lbl_80283210:
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 2
    stw r0, 0x0(r4)
    lwz r0, 0x0(r5)
    clrlwi r0, r0, 2
    stw r0, 0x0(r5)
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_802832B4
    lbz r8, 0x2c(r3)
    lhz r0, 0xe(r3)
    slwi r31, r8, 5
    lwz r11, 0x20(r3)
    mullw r8, r31, r0
    lhz r9, 0x16(r3)
    lwz r10, 0x48(r3)
    cmpwi r11, 0x0
    extlwi r0, r9, 27, 1
    lhz r12, 0xa(r3)
    add r0, r10, r0
    add r9, r8, r0
    stw r9, 0x0(r6)
    bne lbl_80283270
    b lbl_80283274
lbl_80283270:
    add r9, r9, r31
lbl_80283274:
    srwi r8, r12, 31
    clrlwi r0, r12, 31
    xor r0, r0, r8
    stw r9, 0x0(r7)
    subf r0, r8, r0
    cmpwi r0, 0x1
    bne lbl_8028329C
    lwz r0, 0x0(r6)
    stw r9, 0x0(r6)
    stw r0, 0x0(r7)
lbl_8028329C:
    lwz r0, 0x0(r6)
    clrlwi r0, r0, 2
    stw r0, 0x0(r6)
    lwz r0, 0x0(r7)
    clrlwi r0, r0, 2
    stw r0, 0x0(r7)
lbl_802832B4:
    lwz r0, 0x0(r4)
    lis r8, 0x100
    cmplw r0, r8
    bge lbl_802832F0
    lwz r0, 0x0(r5)
    cmplw r0, r8
    bge lbl_802832F0
    lwz r0, 0x0(r6)
    cmplw r0, r8
    bge lbl_802832F0
    lwz r0, 0x0(r7)
    cmplw r0, r8
    bge lbl_802832F0
    li r11, 0x0
    b lbl_802832F4
lbl_802832F0:
    li r11, 0x1
lbl_802832F4:
    cmpwi r11, 0x0
    beq lbl_8028332C
    lwz r0, 0x0(r4)
    srwi r0, r0, 5
    stw r0, 0x0(r4)
    lwz r0, 0x0(r5)
    srwi r0, r0, 5
    stw r0, 0x0(r5)
    lwz r0, 0x0(r6)
    srwi r0, r0, 5
    stw r0, 0x0(r6)
    lwz r0, 0x0(r7)
    srwi r0, r0, 5
    stw r0, 0x0(r7)
lbl_8028332C:
    lwz r0, lbl_8049DCF0
    lis r8, lbl_8040BDD8@ha
    lwz r10, 0x0(r4)
    addi r8, r8, lbl_8040BDD8@l
    lwz r9, lbl_8049DCF4
    oris r0, r0, 0x1
    sth r10, 0x1e(r8)
    slwi r11, r11, 12
    stw r9, lbl_8049DCF4
    stw r0, lbl_8049DCF0
    lwz r4, 0x0(r4)
    lwz r0, lbl_8049DCF0
    srwi r10, r4, 16
    lbz r9, 0x3c(r3)
    lwz r4, lbl_8049DCF4
    oris r0, r0, 0x2
    or r10, r11, r10
    slwi r9, r9, 8
    stw r4, lbl_8049DCF4
    or r4, r10, r9
    stw r0, lbl_8049DCF0
    sth r4, 0x1c(r8)
    lwz r0, lbl_8049DCF0
    lwz r9, 0x0(r5)
    lwz r4, lbl_8049DCF4
    ori r0, r0, 0x1000
    sth r9, 0x26(r8)
    stw r4, lbl_8049DCF4
    stw r0, lbl_8049DCF0
    lwz r0, lbl_8049DCF0
    lwz r5, 0x0(r5)
    lwz r4, lbl_8049DCF4
    ori r0, r0, 0x2000
    srwi r5, r5, 16
    stw r4, lbl_8049DCF4
    sth r5, 0x24(r8)
    stw r0, lbl_8049DCF0
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_8028344C
    lwz r4, lbl_8049DCF0
    lis r3, 0x1
    lwz r9, 0x0(r6)
    addi r0, r3, -0x8000
    lwz r5, lbl_8049DCF4
    ori r3, r4, 0x4000
    sth r9, 0x22(r8)
    stw r5, lbl_8049DCF4
    stw r3, lbl_8049DCF0
    lwz r3, lbl_8049DCF0
    lwz r5, 0x0(r6)
    lwz r4, lbl_8049DCF4
    or r0, r3, r0
    srwi r3, r5, 16
    stw r4, lbl_8049DCF4
    stw r0, lbl_8049DCF0
    sth r3, 0x20(r8)
    lwz r0, lbl_8049DCF0
    lwz r4, 0x0(r7)
    lwz r3, lbl_8049DCF4
    ori r0, r0, 0x400
    sth r4, 0x2a(r8)
    stw r3, lbl_8049DCF4
    stw r0, lbl_8049DCF0
    lwz r0, lbl_8049DCF0
    lwz r4, 0x0(r7)
    lwz r3, lbl_8049DCF4
    ori r0, r0, 0x800
    srwi r4, r4, 16
    stw r3, lbl_8049DCF4
    sth r4, 0x28(r8)
    stw r0, lbl_8049DCF0
lbl_8028344C:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: setHorizontalRegs
asm void setHorizontalRegs() {
    nofralloc
    lwz r0, lbl_8049DCF0
    lis r9, lbl_8040BDD8@ha
    lis r6, lbl_8040BE50@ha
    lhz r10, 0x1a(r3)
    lwz r8, lbl_8049DCF4
    addi r9, r9, lbl_8040BDD8@l
    oris r7, r0, 0x1000
    addi r6, r6, lbl_8040BE50@l
    stw r8, lbl_8049DCF4
    lwz r0, 0x28(r6)
    sth r10, 0x6(r9)
    cmplwi r0, 0x8
    stw r7, lbl_8049DCF0
    lwz r0, lbl_8049DCF0
    lbz r8, 0x1d(r3)
    lbz r7, 0x1e(r3)
    oris r0, r0, 0x2000
    lwz r6, lbl_8049DCF4
    rlwimi r7, r8, 8, 16, 23
    sth r7, 0x4(r9)
    stw r6, lbl_8049DCF4
    stw r0, lbl_8049DCF0
    bne lbl_802834C4
    lbz r4, 0x1f(r3)
    lhz r10, 0x20(r3)
    addi r9, r4, 0xac
    b lbl_802834E4
lbl_802834C4:
    lhz r0, 0x20(r3)
    subfic r6, r5, 0x2d0
    lbz r7, 0x1f(r3)
    add r5, r4, r0
    add r4, r4, r7
    addi r0, r5, 0x28
    subi r9, r4, 0x28
    subf r10, r6, r0
lbl_802834E4:
    lwz r0, lbl_8049DCF0
    lis r6, lbl_8040BDD8@ha
    lbz r8, 0x1c(r3)
    clrlslwi r7, r9, 23, 7
    lwz r4, lbl_8049DCF4
    oris r5, r0, 0x400
    srwi r3, r9, 9
    slwi r0, r10, 1
    stw r4, lbl_8049DCF4
    or r4, r3, r0
    addi r6, r6, lbl_8040BDD8@l
    or r7, r8, r7
    stw r5, lbl_8049DCF0
    lwz r0, lbl_8049DCF0
    lwz r3, lbl_8049DCF4
    oris r0, r0, 0x800
    sth r7, 0xa(r6)
    stw r3, lbl_8049DCF4
    sth r4, 0x8(r6)
    stw r0, lbl_8049DCF0
    blr
}

// asm_to_cpp: setVerticalRegs
asm void setVerticalRegs() {
    nofralloc
    stwu r1, -0x10(r1)
    lis r11, lbl_8040BE50@ha
    addi r11, r11, lbl_8040BE50@l
    stw r31, 0xc(r1)
    lwz r12, 0x18(r1)
    stw r30, 0x8(r1)
    lwz r11, 0x24(r11)
    subi r0, r11, 0x2
    cmplwi r0, 0x1
    bgt lbl_8028356C
    li r11, 0x1
    li r30, 0x2
    b lbl_80283574
lbl_8028356C:
    li r11, 0x2
    li r30, 0x1
lbl_80283574:
    srwi r31, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r31
    subf. r0, r31, r0
    bne lbl_802835C0
    mullw r0, r11, r6
    subf r0, r4, r0
    subf r0, r3, r0
    mullw r31, r30, r0
    mullw r3, r30, r3
    add r6, r9, r31
    clrlwi r6, r6, 16
    add r0, r7, r3
    add r7, r10, r31
    add r3, r8, r3
    clrlwi r0, r0, 16
    clrlwi r7, r7, 16
    clrlwi r3, r3, 16
    b lbl_802835F4
lbl_802835C0:
    mullw r0, r11, r6
    subf r0, r4, r0
    subf r0, r3, r0
    mullw r31, r30, r0
    mullw r3, r30, r3
    add r6, r10, r31
    clrlwi r6, r6, 16
    add r0, r8, r3
    add r3, r7, r3
    add r7, r9, r31
    clrlwi r0, r0, 16
    clrlwi r3, r3, 16
    clrlwi r7, r7, 16
lbl_802835F4:
    divw r4, r4, r11
    cmpwi r12, 0x0
    clrlwi r10, r4, 16
    beq lbl_80283630
    clrlslwi r4, r10, 16, 1
    addi r6, r6, 0x2
    subi r8, r4, 0x2
    li r10, 0x0
    addi r4, r7, 0x2
    clrlwi r6, r6, 16
    add r0, r0, r8
    add r3, r3, r8
    clrlwi r7, r4, 16
    clrlwi r0, r0, 16
    clrlwi r3, r3, 16
lbl_80283630:
    lwz r8, lbl_8049DCF0
    lis r4, 0x8000
    lwz r9, lbl_8049DCF4
    clrlslwi r11, r10, 16, 4
    or r4, r8, r4
    lis r10, lbl_8040BDD8@ha
    stw r9, lbl_8049DCF4
    addi r8, r10, lbl_8040BDD8@l
    or r9, r5, r11
    stw r4, lbl_8049DCF0
    lwz r4, lbl_8049DCF0
    lwz r5, lbl_8049DCF4
    oris r4, r4, 0x100
    sth r0, 0xe(r8)
    stw r5, lbl_8049DCF4
    stw r4, lbl_8049DCF0
    lwz r4, lbl_8049DCF0
    lwz r5, lbl_8049DCF4
    oris r4, r4, 0x200
    sth r9, lbl_8040BDD8@l(r10)
    stw r5, lbl_8049DCF4
    stw r4, lbl_8049DCF0
    lwz r0, lbl_8049DCF0
    lwz r4, lbl_8049DCF4
    oris r0, r0, 0x40
    sth r6, 0xc(r8)
    stw r4, lbl_8049DCF4
    stw r0, lbl_8049DCF0
    lwz r0, lbl_8049DCF0
    lwz r4, lbl_8049DCF4
    oris r0, r0, 0x80
    sth r3, 0x12(r8)
    stw r4, lbl_8049DCF4
    sth r7, 0x10(r8)
    stw r0, lbl_8049DCF0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802836CC
asm void fn_802836CC(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r28, lbl_8036B630@ha
    mr r30, r3
    addi r28, r28, lbl_8036B630@l
    bl OSDisableInterrupts
    lis r4, lbl_8040BE50@ha
    lwz r5, 0x0(r30)
    addi r4, r4, lbl_8040BE50@l
    mr r29, r3
    lwz r0, 0x24(r4)
    clrlwi r3, r5, 30
    cmplw r0, r3
    beq lbl_8028371C
    li r0, 0x1
    stw r3, 0x24(r4)
    stw r0, lbl_8049DCE8
lbl_8028371C:
    lwz r0, 0x0(r30)
    lis r3, 0x8000
    lwz r25, 0xcc(r3)
    srwi r26, r0, 2
    cmplwi r26, 0x4
    bne lbl_8028379C
    lwz r0, lbl_8049DD1C
    cmpwi r0, 0x0
    bne lbl_8028379C
    li r0, 0x1
    addi r3, r28, 0x3bc
    stw r0, lbl_8049DD1C
    opword 0x4CC63182
    bl OSReport
    addi r3, r28, 0x3e8
    opword 0x4CC63182
    bl OSReport
    addi r3, r28, 0x414
    opword 0x4CC63182
    bl OSReport
    addi r3, r28, 0x440
    opword 0x4CC63182
    bl OSReport
    addi r3, r28, 0x46c
    opword 0x4CC63182
    bl OSReport
    addi r3, r28, 0x498
    opword 0x4CC63182
    bl OSReport
    addi r3, r28, 0x3bc
    opword 0x4CC63182
    bl OSReport
lbl_8028379C:
    cmplwi r25, 0x1
    beq lbl_802837BC
    cmplwi r25, 0x5
    beq lbl_802837BC
    cmplwi r26, 0x1
    beq lbl_802837DC
    cmplwi r26, 0x5
    beq lbl_802837DC
lbl_802837BC:
    cmplwi r25, 0x1
    beq lbl_802837CC
    cmplwi r25, 0x5
    bne lbl_802837F8
lbl_802837CC:
    cmplwi r26, 0x1
    beq lbl_802837F8
    cmplwi r26, 0x5
    beq lbl_802837F8
lbl_802837DC:
    mr r6, r25
    mr r7, r26
    addi r5, r28, 0x4c4
    la r3, lbl_8049CEA8
    li r4, 0xa5b
    opword 0x4CC63182
    bl OSPanic
lbl_802837F8:
    cmpwi r26, 0x0
    beq lbl_80283808
    cmplwi r26, 0x2
    bne lbl_80283818
lbl_80283808:
    lis r3, lbl_8040BE50@ha
    addi r3, r3, lbl_8040BE50@l
    stw r25, 0x28(r3)
    b lbl_80283824
lbl_80283818:
    lis r3, lbl_8040BE50@ha
    addi r3, r3, lbl_8040BE50@l
    stw r26, 0x28(r3)
lbl_80283824:
    lis r4, lbl_8040BE50@ha
    lhz r5, 0xa(r30)
    addi r3, r4, lbl_8040BE50@l
    lwz r0, 0x24(r3)
    sth r5, lbl_8040BE50@l(r4)
    cmplwi r0, 0x1
    bne lbl_8028384C
    lhz r0, 0xc(r30)
    clrlslwi r8, r0, 17, 1
    b lbl_80283850
lbl_8028384C:
    lhz r8, 0xc(r30)
lbl_80283850:
    lis r7, lbl_8040BE50@ha
    lhz r6, 0xe(r30)
    addi r7, r7, lbl_8040BE50@l
    lhz r4, 0x4(r30)
    lwz r9, 0x24(r7)
    li r0, 0x0
    lhz r5, 0x8(r30)
    lwz r3, 0x14(r30)
    cmplwi r9, 0x2
    sth r8, 0x2(r7)
    sth r6, 0x4(r7)
    sth r4, 0x12(r7)
    sth r5, 0x14(r7)
    stw r3, 0x20(r7)
    sth r4, 0x1a(r7)
    sth r5, 0x1c(r7)
    sth r0, 0x16(r7)
    sth r0, 0x18(r7)
    bne lbl_802838A0
    b lbl_802838B8
lbl_802838A0:
    cmplwi r9, 0x3
    bne lbl_802838AC
    b lbl_802838B8
lbl_802838AC:
    cmpwi r3, 0x0
    bne lbl_802838B8
    clrlslwi r5, r5, 17, 1
lbl_802838B8:
    lis r31, lbl_8040BE50@ha
    addi r28, r31, lbl_8040BE50@l
    lwz r4, 0x24(r28)
    lwz r0, 0x28(r28)
    subi r3, r4, 0x3
    sth r5, 0x6(r28)
    cntlzw r3, r3
    slwi r0, r0, 2
    srwi r3, r3, 5
    stw r3, 0x44(r28)
    add r3, r0, r4
    bl getTiming
    lhz r0, 0x4(r28)
    mr r30, r3
    lha r5, lbl_8040BE50@l(r31)
    lha r4, lbl_8049DCE4
    subfic r8, r0, 0x2d0
    stw r3, 0x54(r28)
    add r4, r5, r4
    cmpw r4, r8
    lhz r7, 0x2(r3)
    ble lbl_80283914
    b lbl_8028391C
lbl_80283914:
    srawi r0, r4, 31
    andc r8, r4, r0
lbl_8028391C:
    lis r5, lbl_8040BE50@ha
    lha r9, lbl_8049DCE6
    addi r5, r5, lbl_8040BE50@l
    lhz r6, 0x2(r5)
    lwz r4, 0x20(r5)
    extsh r0, r6
    clrlwi r6, r6, 31
    add r10, r0, r9
    sth r8, 0x8(r5)
    cntlzw r0, r4
    srwi r4, r0, 5
    cmpw r10, r6
    mr r0, r6
    addi r5, r4, 0x1
    ble lbl_8028395C
    mr r0, r10
lbl_8028395C:
    lis r4, lbl_8040BE50@ha
    extsh r7, r7
    addi r4, r4, lbl_8040BE50@l
    lhz r10, 0x2(r4)
    slwi r8, r7, 1
    lhz r7, 0x6(r4)
    subf r31, r6, r8
    extsh r8, r10
    lha r11, 0x2(r4)
    add r28, r9, r8
    lha r10, 0x6(r4)
    extsh r8, r7
    add r11, r11, r9
    add r8, r8, r28
    add r9, r10, r28
    subf r8, r31, r8
    subf r26, r6, r11
    neg r12, r8
    subf r25, r31, r9
    subf r27, r6, r28
    sth r0, 0xa(r4)
    andc r10, r12, r8
    neg r6, r25
    srawi r28, r10, 31
    lhz r9, 0x1c(r4)
    srawi r10, r27, 31
    andc r6, r6, r25
    srawi r12, r26, 31
    and r8, r8, r28
    and r31, r27, r10
    srawi r10, r6, 31
    srawi r6, r27, 31
    and r12, r26, r12
    and r6, r27, r6
    add r7, r7, r31
    subf r0, r8, r7
    and r10, r25, r10
    divw r6, r6, r5
    sth r0, 0xc(r4)
    lhz r11, 0x18(r4)
    divw r7, r12, r5
    add r0, r9, r6
    divw r5, r10, r5
    subf r6, r7, r11
    sth r6, 0xe(r4)
    subf r0, r5, r0
    sth r0, 0x10(r4)
    lhz r5, 0x18(r3)
    srwi r4, r5, 31
    clrlwi r0, r5, 31
    xor r0, r0, r4
    extrwi r7, r5, 16, 15
    subf r0, r4, r0
    clrlwi. r0, r0, 16
    beq lbl_80283A40
    lhz r6, 0x1a(r3)
    b lbl_80283A44
lbl_80283A40:
    li r6, 0x0
lbl_80283A44:
    lwz r0, lbl_8049DCF0
    lis r3, lbl_8040BE50@ha
    lwz r5, lbl_8049DCF4
    addi r3, r3, lbl_8040BE50@l
    ori r4, r0, 0x40
    addi r0, r7, 0x1
    stw r5, lbl_8049DCF4
    lis r7, lbl_8040BDD8@ha
    lwz r9, 0x24(r3)
    clrlwi r5, r0, 16
    stw r4, lbl_8049DCF0
    addi r8, r6, 0x1
    subi r0, r9, 0x2
    ori r6, r5, 0x1000
    addi r7, r7, lbl_8040BDD8@l
    lwz r4, lbl_8049DCF0
    lwz r5, lbl_8049DCF4
    cmplwi r0, 0x1
    ori r0, r4, 0x80
    sth r8, 0x32(r7)
    lhz r4, 0x2(r7)
    stw r5, lbl_8049DCF4
    lhz r5, 0x6c(r7)
    sth r6, 0x30(r7)
    stw r0, lbl_8049DCF0
    bgt lbl_80283AD4
    lwz r0, 0x28(r3)
    rlwinm r3, r4, 0, 30, 28
    ori r4, r3, 0x4
    cmplwi r0, 0x8
    bne lbl_80283AC8
    clrrwi r10, r5, 1
    b lbl_80283AE0
lbl_80283AC8:
    clrrwi r0, r5, 1
    ori r10, r0, 0x1
    b lbl_80283AE0
lbl_80283AD4:
    rlwinm r4, r4, 0, 30, 28
    clrrwi r10, r5, 1
    rlwimi r4, r9, 2, 29, 29
lbl_80283AE0:
    lis r3, lbl_8040BE50@ha
    rlwinm r4, r4, 0, 29, 27
    addi r3, r3, lbl_8040BE50@l
    lwz r5, 0x28(r3)
    lwz r8, 0x44(r3)
    subi r0, r5, 0x1
    slwi r3, r8, 3
    or r3, r4, r3
    cmplwi r0, 0x2
    rlwinm r7, r3, 0, 24, 21
    bgt lbl_80283B14
    slwi r0, r5, 8
    or r7, r7, r0
lbl_80283B14:
    lwz r0, lbl_8049DCF0
    lis r3, lbl_8040BE50@ha
    lwz r4, lbl_8049DCF4
    addi r3, r3, lbl_8040BE50@l
    oris r0, r0, 0x4000
    lis r6, lbl_8040BDD8@ha
    stw r4, lbl_8049DCF4
    addi r6, r6, lbl_8040BDD8@l
    lhz r4, 0x1a(r3)
    cmpwi r8, 0x0
    stw r0, lbl_8049DCF0
    lhz r5, 0x4(r3)
    lwz r3, lbl_8049DCF0
    lwz r0, lbl_8049DCF4
    sth r7, 0x2(r6)
    ori r0, r0, 0x200
    stw r0, lbl_8049DCF4
    sth r10, 0x6c(r6)
    stw r3, lbl_8049DCF0
    beq lbl_80283B68
    clrlslwi r4, r4, 16, 1
lbl_80283B68:
    clrlwi r7, r4, 16
    cmplw r7, r5
    bge lbl_80283BC4
    clrlslwi r0, r7, 16, 8
    lwz r3, lbl_8049DCF0
    add r4, r5, r0
    lwz r0, lbl_8049DCF4
    subi r6, r4, 0x1
    divwu r6, r6, r5
    oris r0, r0, 0x400
    stw r0, lbl_8049DCF4
    lis r4, lbl_8040BDD8@ha
    stw r3, lbl_8049DCF0
    addi r4, r4, lbl_8040BDD8@l
    lwz r3, lbl_8049DCF0
    ori r6, r6, 0x1000
    lwz r0, lbl_8049DCF4
    sth r6, 0x4a(r4)
    ori r0, r0, 0x80
    stw r0, lbl_8049DCF4
    sth r7, 0x70(r4)
    stw r3, lbl_8049DCF0
    b lbl_80283BE8
lbl_80283BC4:
    lwz r3, lbl_8049DCF0
    lis r4, lbl_8040BDD8@ha
    lwz r0, lbl_8049DCF4
    addi r4, r4, lbl_8040BDD8@l
    li r6, 0x100
    oris r0, r0, 0x400
    sth r6, 0x4a(r4)
    stw r0, lbl_8049DCF4
    stw r3, lbl_8049DCF0
lbl_80283BE8:
    lis r31, lbl_8040BE50@ha
    mr r3, r30
    addi r31, r31, lbl_8040BE50@l
    lhz r4, 0x8(r31)
    bl setHorizontalRegs
    lhz r4, 0x10(r30)
    lis r3, lbl_8040BDD8@ha
    lwz r0, lbl_8049DCF0
    addi r3, r3, lbl_8040BDD8@l
    lbz r7, 0xc(r30)
    slwi r4, r4, 5
    lwz r6, lbl_8049DCF4
    oris r5, r0, 0x10
    or r7, r7, r4
    lhz r4, 0x12(r31)
    stw r6, lbl_8049DCF4
    lwz r6, 0x20(r31)
    addi r0, r4, 0xf
    stw r5, lbl_8049DCF0
    srawi r4, r0, 4
    cmpwi r6, 0x0
    lhz r0, 0x1a(r31)
    sth r7, 0x16(r3)
    addze r4, r4
    lwz r5, lbl_8049DCF0
    lhz r6, 0x14(r30)
    lbz r8, 0xe(r30)
    oris r5, r5, 0x20
    slwi r7, r6, 5
    lwz r6, lbl_8049DCF4
    or r7, r8, r7
    lhz r9, 0x16(r31)
    stw r6, lbl_8049DCF4
    stw r5, lbl_8049DCF0
    sth r7, 0x14(r3)
    lwz r5, lbl_8049DCF0
    lhz r6, 0x12(r30)
    lbz r8, 0xd(r30)
    oris r5, r5, 0x4
    slwi r7, r6, 5
    lwz r6, lbl_8049DCF4
    or r7, r8, r7
    stw r6, lbl_8049DCF4
    stw r5, lbl_8049DCF0
    sth r7, 0x1a(r3)
    lwz r5, lbl_8049DCF0
    lhz r6, 0x16(r30)
    lbz r8, 0xf(r30)
    oris r5, r5, 0x8
    slwi r7, r6, 5
    lwz r6, lbl_8049DCF4
    or r7, r8, r7
    stb r4, 0x2c(r31)
    stw r6, lbl_8049DCF4
    sth r7, 0x18(r3)
    stw r5, lbl_8049DCF0
    bne lbl_80283CD4
    clrlwi r10, r4, 24
    b lbl_80283CD8
lbl_80283CD4:
    clrlslwi r10, r4, 25, 1
lbl_80283CD8:
    slwi r3, r9, 28
    srwi r4, r9, 31
    subf r3, r4, r3
    lwz r5, lbl_8049DCF0
    rotlwi r3, r3, 4
    lwz r6, lbl_8049DCF4
    add r9, r3, r4
    lwz r4, lbl_8049DD08
    clrlwi r7, r9, 24
    lis r3, lbl_8040BE50@ha
    add r8, r0, r7
    cmpwi r4, 0x0
    addi r0, r8, 0xf
    addi r3, r3, lbl_8040BE50@l
    srawi r8, r0, 4
    lis r7, lbl_8040BDD8@ha
    oris r0, r6, 0x800
    stb r10, 0x2d(r3)
    addze r6, r8
    addi r7, r7, lbl_8040BDD8@l
    stw r0, lbl_8049DCF4
    mr r0, r10
    rlwimi r0, r6, 8, 16, 23
    stb r9, 0x3c(r3)
    stb r6, 0x2e(r3)
    sth r0, 0x48(r7)
    stw r5, lbl_8049DCF0
    beq lbl_80283D5C
    addi r4, r3, 0x34
    addi r5, r3, 0x38
    addi r6, r3, 0x4c
    addi r7, r3, 0x50
    bl setFbbRegs
lbl_80283D5C:
    lis r4, lbl_8040BE50@ha
    addi r4, r4, lbl_8040BE50@l
    lwz r0, 0x40(r4)
    stw r0, 0x8(r1)
    lhz r3, 0xa(r4)
    lhz r4, 0xc(r4)
    lbz r5, 0x0(r30)
    lhz r6, 0x2(r30)
    lhz r7, 0x4(r30)
    lhz r8, 0x6(r30)
    lhz r9, 0x8(r30)
    lhz r10, 0xa(r30)
    bl setVerticalRegs
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: VIConfigurePan
asm void VIConfigurePan() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r29, r3
    mr r28, r4
    mr r27, r5
    mr r26, r6
    bl OSDisableInterrupts
    lis r4, lbl_8040BE50@ha
    mr r31, r3
    addi r4, r4, lbl_8040BE50@l
    lwz r0, 0x24(r4)
    sth r29, 0x16(r4)
    cmplwi r0, 0x2
    sth r28, 0x18(r4)
    sth r27, 0x1a(r4)
    sth r26, 0x1c(r4)
    bne lbl_80283E04
    b lbl_80283E20
lbl_80283E04:
    cmplwi r0, 0x3
    bne lbl_80283E10
    b lbl_80283E20
lbl_80283E10:
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    bne lbl_80283E20
    clrlslwi r26, r26, 17, 1
lbl_80283E20:
    lis r4, lbl_8040BE50@ha
    lha r3, lbl_8049DCE4
    addi r5, r4, lbl_8040BE50@l
    lha r4, lbl_8040BE50@l(r4)
    lhz r0, 0x4(r5)
    sth r26, 0x6(r5)
    add r3, r4, r3
    subfic r6, r0, 0x2d0
    lwz r30, 0x54(r5)
    cmpw r3, r6
    lhz r5, 0x2(r30)
    ble lbl_80283E54
    b lbl_80283E5C
lbl_80283E54:
    srawi r0, r3, 31
    andc r6, r3, r0
lbl_80283E5C:
    lis r4, lbl_8040BE50@ha
    lha r9, lbl_8049DCE6
    addi r4, r4, lbl_8040BE50@l
    lhz r7, 0x2(r4)
    lwz r3, 0x20(r4)
    extsh r0, r7
    clrlwi r12, r7, 31
    add r7, r0, r9
    sth r6, 0x8(r4)
    cntlzw r0, r3
    srwi r3, r0, 5
    cmpw r7, r12
    mr r0, r12
    addi r4, r3, 0x1
    ble lbl_80283E9C
    mr r0, r7
lbl_80283E9C:
    lis r3, lbl_8040BE50@ha
    extsh r5, r5
    addi r3, r3, lbl_8040BE50@l
    lhz r7, 0x2(r3)
    slwi r6, r5, 1
    lhz r5, 0x6(r3)
    subf r26, r12, r6
    extsh r6, r7
    lha r8, 0x2(r3)
    add r11, r9, r6
    lha r7, 0x6(r3)
    extsh r6, r5
    add r9, r8, r9
    add r6, r6, r11
    subf r27, r12, r11
    subf r6, r26, r6
    add r7, r7, r11
    neg r8, r6
    subf r12, r12, r9
    andc r10, r8, r6
    subf r26, r26, r7
    srawi r28, r10, 31
    lwz r8, 0x44(r3)
    srawi r11, r27, 31
    neg r9, r26
    srawi r10, r12, 31
    sth r0, 0xa(r3)
    and r29, r27, r11
    andc r9, r9, r26
    srawi r11, r9, 31
    and r12, r12, r10
    srawi r9, r27, 31
    lhz r10, 0x1c(r3)
    and r9, r27, r9
    and r27, r6, r28
    and r26, r26, r11
    add r0, r5, r29
    divw r9, r9, r4
    lhz r11, 0x18(r3)
    subf r0, r27, r0
    lhz r7, 0x1a(r3)
    sth r0, 0xc(r3)
    cmpwi r8, 0x0
    divw r6, r12, r4
    add r5, r10, r9
    lhz r28, 0x4(r3)
    mr r0, r7
    divw r4, r26, r4
    subf r6, r6, r11
    sth r6, 0xe(r3)
    subf r4, r4, r5
    sth r4, 0x10(r3)
    beq lbl_80283F74
    clrlslwi r0, r7, 16, 1
lbl_80283F74:
    clrlwi r6, r0, 16
    cmplw r6, r28
    bge lbl_80283FD0
    clrlslwi r0, r6, 16, 8
    lwz r3, lbl_8049DCF0
    add r4, r28, r0
    lwz r0, lbl_8049DCF4
    subi r5, r4, 0x1
    divwu r5, r5, r28
    oris r0, r0, 0x400
    stw r0, lbl_8049DCF4
    lis r4, lbl_8040BDD8@ha
    stw r3, lbl_8049DCF0
    addi r4, r4, lbl_8040BDD8@l
    lwz r3, lbl_8049DCF0
    ori r5, r5, 0x1000
    lwz r0, lbl_8049DCF4
    sth r5, 0x4a(r4)
    ori r0, r0, 0x80
    stw r0, lbl_8049DCF4
    sth r6, 0x70(r4)
    stw r3, lbl_8049DCF0
    b lbl_80283FF4
lbl_80283FD0:
    lwz r3, lbl_8049DCF0
    lis r4, lbl_8040BDD8@ha
    lwz r0, lbl_8049DCF4
    addi r4, r4, lbl_8040BDD8@l
    li r5, 0x100
    oris r0, r0, 0x400
    sth r5, 0x4a(r4)
    stw r0, lbl_8049DCF4
    stw r3, lbl_8049DCF0
lbl_80283FF4:
    lis r4, lbl_8040BE50@ha
    addi r4, r4, lbl_8040BE50@l
    lhz r3, 0x12(r4)
    lwz r5, 0x20(r4)
    addi r0, r3, 0xf
    lhz r3, 0x16(r4)
    srawi r0, r0, 4
    cmpwi r5, 0x0
    addze r0, r0
    stb r0, 0x2c(r4)
    bne lbl_80284028
    clrlwi r9, r0, 24
    b lbl_8028402C
lbl_80284028:
    clrlslwi r9, r0, 25, 1
lbl_8028402C:
    slwi r0, r3, 28
    srwi r3, r3, 31
    subf r0, r3, r0
    lwz r5, lbl_8049DCF0
    rotlwi r0, r0, 4
    lwz r4, lbl_8049DCF4
    add r8, r0, r3
    lwz r0, lbl_8049DD08
    clrlwi r6, r8, 24
    lis r3, lbl_8040BE50@ha
    add r7, r7, r6
    oris r4, r4, 0x800
    addi r7, r7, 0xf
    addi r3, r3, lbl_8040BE50@l
    srawi r7, r7, 4
    stw r4, lbl_8049DCF4
    lis r6, lbl_8040BDD8@ha
    mr r4, r9
    addze r7, r7
    cmpwi r0, 0x0
    addi r6, r6, lbl_8040BDD8@l
    stb r9, 0x2d(r3)
    rlwimi r4, r7, 8, 16, 23
    stb r8, 0x3c(r3)
    stb r7, 0x2e(r3)
    sth r4, 0x48(r6)
    stw r5, lbl_8049DCF0
    beq lbl_802840B0
    addi r4, r3, 0x34
    addi r5, r3, 0x38
    addi r6, r3, 0x4c
    addi r7, r3, 0x50
    bl setFbbRegs
lbl_802840B0:
    lis r4, lbl_8040BE50@ha
    addi r4, r4, lbl_8040BE50@l
    lwz r0, 0x40(r4)
    stw r0, 0x8(r1)
    lhz r3, 0xa(r4)
    lhz r4, 0x6(r4)
    lbz r5, 0x0(r30)
    lhz r6, 0x2(r30)
    lhz r7, 0x4(r30)
    lhz r8, 0x6(r30)
    lhz r9, 0x8(r30)
    lhz r10, 0xa(r30)
    bl setVerticalRegs
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: VIFlush
asm void VIFlush(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8040BD60@ha
    addi r31, r31, lbl_8040BD60@l
    bl OSDisableInterrupts
    lwz r5, lbl_8049DCF8
    li r0, 0x0
    lwz r4, lbl_8049DCE8
    mr r30, r3
    addi r28, r31, 0x78
    addi r29, r31, 0x0
    or r3, r5, r4
    li r27, -0x1
    stw r3, lbl_8049DCF8
    stw r0, lbl_8049DCE8
    lwz r4, lbl_8049DD00
    lwz r5, lbl_8049DD04
    lwz r0, lbl_8049DCF0
    lwz r3, lbl_8049DCF4
    or r0, r4, r0
    or r3, r5, r3
    stw r3, lbl_8049DD04
    stw r0, lbl_8049DD00
    b lbl_802841D0
lbl_80284170:
    lwz r0, lbl_8049DCF0
    lwz r3, lbl_8049DCF4
    cntlzw r0, r0
    cmpwi r0, 0x20
    and r3, r3, r27
    bge lbl_8028418C
    b lbl_80284194
lbl_8028418C:
    cntlzw r3, r3
    addi r0, r3, 0x20
lbl_80284194:
    slwi r6, r0, 1
    subfic r5, r0, 0x3f
    lhzx r0, r28, r6
    li r4, 0x1
    li r3, 0x0
    sthx r0, r29, r6
    bl __shl2i
    lwz r0, lbl_8049DCF0
    nor r5, r3, r3
    lwz r3, lbl_8049DCF4
    nor r4, r4, r4
    and r0, r0, r5
    and r3, r3, r4
    stw r3, lbl_8049DCF4
    stw r0, lbl_8049DCF0
lbl_802841D0:
    lwz r0, lbl_8049DCF0
    lwz r3, lbl_8049DCF4
    or. r0, r3, r0
    bne lbl_80284170
    addi r3, r31, 0xf0
    li r4, 0x1
    lwz r0, 0x30(r3)
    mr r3, r30
    stw r4, lbl_8049DD60
    stw r4, lbl_8049DD5C
    stw r0, lbl_8049DD24
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: VISetNextFrameBuffer
asm void VISetNextFrameBuffer(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r7, lbl_8040BE50@ha
    li r0, 0x1
    addi r7, r7, lbl_8040BE50@l
    mr r31, r3
    stw r30, 0x30(r7)
    mr r3, r7
    addi r4, r7, 0x34
    addi r5, r7, 0x38
    addi r6, r7, 0x4c
    stw r0, lbl_8049DD08
    addi r7, r7, 0x50
    bl setFbbRegs
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: VISetBlack
asm void VISetBlack(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8040BE50@ha
    mr r31, r3
    addi r4, r4, lbl_8040BE50@l
    stw r30, 0x40(r4)
    lwz r10, 0x54(r4)
    stw r30, 0x8(r1)
    lhz r3, 0xa(r4)
    lhz r4, 0x6(r4)
    lbz r5, 0x0(r10)
    lhz r6, 0x2(r10)
    lhz r7, 0x4(r10)
    lhz r8, 0x6(r10)
    lhz r9, 0x8(r10)
    lhz r10, 0xa(r10)
    bl setVerticalRegs
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: VIGetNextField
asm s32 VIGetNextField(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r5, 0xcc00
    lhz r0, 0x202c(r5)
    clrlwi r6, r0, 21
lbl_80284324:
    lhz r4, 0x202e(r5)
    mr r7, r6
    lhz r0, 0x202c(r5)
    clrlwi r8, r4, 21
    clrlwi r6, r0, 21
    cmplw r7, r6
    bne lbl_80284324
    lwz r7, lbl_8049DD2C
    subi r4, r6, 0x1
    slwi r6, r4, 1
    subi r5, r8, 0x1
    lhz r0, 0x1a(r7)
    lhz r4, 0x18(r7)
    divwu r0, r5, r0
    add r0, r6, r0
    xor r0, r4, r0
    cntlzw r0, r0
    slw r0, r4, r0
    srwi r31, r0, 31
    bl OSRestoreInterrupts
    lis r3, lbl_8040BE50@ha
    xori r4, r31, 0x1
    addi r3, r3, lbl_8040BE50@l
    lwz r31, 0xc(r1)
    lhz r0, 0xa(r3)
    clrlwi r0, r0, 31
    xor r3, r4, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: VIGetCurrentLine
asm u32 VIGetCurrentLine(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, lbl_8049DD2C
    bl OSDisableInterrupts
    lis r5, 0xcc00
    lhz r0, 0x202c(r5)
    clrlwi r8, r0, 21
lbl_802843C8:
    lhz r4, 0x202e(r5)
    mr r6, r8
    lhz r0, 0x202c(r5)
    clrlwi r7, r4, 21
    clrlwi r8, r0, 21
    cmplw r6, r8
    bne lbl_802843C8
    lwz r4, lbl_8049DD2C
    subi r5, r7, 0x1
    subi r6, r8, 0x1
    lhz r0, 0x1a(r4)
    slwi r4, r6, 1
    divwu r0, r5, r0
    add r31, r4, r0
    bl OSRestoreInterrupts
    lhz r0, 0x18(r30)
    cmplw r31, r0
    blt lbl_80284414
    subf r31, r0, r31
lbl_80284414:
    srwi r3, r31, 1
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: VIGetTvFormat
asm int VIGetTvFormat() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r31, CurrTvMode_8049DD28
    cmplwi r31, 0x8
    bgt lbl_80284474
    lis r4, at_4022_8036BB40@ha
    slwi r0, r31, 2
    addi r4, r4, at_4022_8036BB40@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r31, 0x0
    b lbl_80284474
    li r31, 0x1
lbl_80284474:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: VIGetScanMode
asm s32 VIGetScanMode(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, 0xcc00
    lhz r0, 0x206c(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_802844C0
    li r31, 0x2
    b lbl_802844D4
lbl_802844C0:
    lhz r0, 0x2002(r4)
    extrwi r4, r0, 1, 29
    neg r0, r4
    or r0, r0, r4
    srwi r31, r0, 31
lbl_802844D4:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: VIGetDTVStatus
asm s32 VIGetDTVStatus(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    clrlwi r31, r0, 30
    bl OSRestoreInterrupts
    clrlwi r3, r31, 31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __VIDisplayPositionToXY
asm void __VIDisplayPositionToXY(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3) {
    nofralloc
    lwz r7, lbl_8049DD2C
    subi r9, r4, 0x1
    lis r8, lbl_8040BE50@ha
    subi r4, r3, 0x1
    lhz r0, 0x1a(r7)
    addi r8, r8, lbl_8040BE50@l
    lwz r10, 0x24(r8)
    slwi r8, r9, 1
    divwu r0, r4, r0
    cmpwi r10, 0x0
    add r0, r8, r0
    bne lbl_80284620
    lhz r9, 0x18(r7)
    cmplw r0, r9
    bge lbl_802845C0
    lbz r8, 0x0(r7)
    lhz r10, 0x4(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_80284590
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284590:
    lhz r4, 0x8(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_802845AC
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_802845AC:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r0, r0, 1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_802845C0:
    lbz r8, 0x0(r7)
    subf r0, r9, r0
    lhz r10, 0x6(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_802845EC
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_802845EC:
    lhz r4, 0xa(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_80284608
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284608:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r4, r0, 1
    addi r0, r4, 0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284620:
    cmplwi r10, 0x1
    bne lbl_80284694
    lhz r9, 0x18(r7)
    cmplw r0, r9
    blt lbl_80284638
    subf r0, r9, r0
lbl_80284638:
    lwz r4, lbl_8049DD2C
    lbz r8, 0x0(r4)
    lhz r10, 0x4(r4)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_80284664
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284664:
    lhz r4, 0x8(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_80284680
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284680:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r0, r0, 1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284694:
    cmplwi r10, 0x2
    bne lbl_80284754
    lhz r9, 0x18(r7)
    cmplw r0, r9
    bge lbl_802846FC
    lbz r8, 0x0(r7)
    lhz r10, 0x4(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_802846D0
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_802846D0:
    lhz r4, 0x8(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_802846EC
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_802846EC:
    subf r0, r8, r0
    subf r0, r10, r0
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_802846FC:
    lbz r8, 0x0(r7)
    subf r0, r9, r0
    lhz r10, 0x6(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_80284728
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284728:
    lhz r4, 0xa(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_80284744
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_80284754
lbl_80284744:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r0, r0, 1
    sth r0, 0x0(r6)
lbl_80284754:
    subi r0, r3, 0x1
    sth r0, 0x0(r5)
    blr
}

// asm_to_cpp: VIGetDimmingCount
asm s32 VIGetDimmingCount(void) {
    nofralloc
    lwz r0, lbl_8049DCD4
    lwz r5, lbl_8049DCC8
    lwz r3, lbl_8049DCD4
    subfc r0, r5, r0
    lwz r0, lbl_8049DCC8
    addze r4, r5
    subf r4, r4, r5
    subf r0, r3, r0
    andc r3, r0, r4
    blr
}

// asm_to_cpp: VISetTimeToDimming
asm int VISetTimeToDimming() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, lbl_8049DD50
    stw r3, lbl_8049DD50
    bl OSDisableInterrupts
    lwz r31, CurrTvMode_8049DD28
    cmplwi r31, 0x8
    bgt lbl_8028482C
    lis r4, jumptable_8036BB64@ha
    slwi r0, r31, 2
    addi r4, r4, jumptable_8036BB64@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r31, 0x0
    b lbl_8028482C
    li r31, 0x1
lbl_8028482C:
    bl OSRestoreInterrupts
    cmpwi r31, 0x1
    beq lbl_8028483C
    b lbl_80284880
lbl_8028483C:
    lwz r0, lbl_8049DD50
    cmpwi r0, 0x2
    beq lbl_80284864
    bge lbl_80284874
    cmpwi r0, 0x1
    bge lbl_80284858
    b lbl_80284874
lbl_80284858:
    li r0, 0x7530
    stw r0, lbl_8049DCCC
    b lbl_802848C4
lbl_80284864:
    lis r3, 0x1
    subi r0, r3, 0x5038
    stw r0, lbl_8049DCCC
    b lbl_802848C4
lbl_80284874:
    li r0, 0x3a98
    stw r0, lbl_8049DCCC
    b lbl_802848C4
lbl_80284880:
    lwz r0, lbl_8049DD50
    cmpwi r0, 0x2
    beq lbl_802848AC
    bge lbl_802848BC
    cmpwi r0, 0x1
    bge lbl_8028489C
    b lbl_802848BC
lbl_8028489C:
    lis r3, 0x1
    subi r0, r3, 0x7360
    stw r0, lbl_8049DCCC
    b lbl_802848C4
lbl_802848AC:
    lis r3, 0x1
    subi r0, r3, 0x2d10
    stw r0, lbl_8049DCCC
    b lbl_802848C4
lbl_802848BC:
    li r0, 0x4650
    stw r0, lbl_8049DCCC
lbl_802848C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}


// asm_to_cpp: VIResetDimmingCount
asm s32 VIResetDimmingCount(void) {
    nofralloc
    li r0, 0x0
    lis r3, lbl_8040BEA8@ha
    stw r0, lbl_8040BEA8@l(r3)
    li r3, 0x1
    blr
}

// asm_to_cpp: __VIResetRFIdle
asm s32 __VIResetRFIdle(void) {
    nofralloc
    li r0, 0x0
    li r3, 0x1
    stw r0, lbl_8049DD4C
    blr
}
