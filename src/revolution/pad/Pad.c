#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s32 OSGetTime();                                    /* extern */
M2C_UNK SIGetTypeAsync(s32, void (*)(s32, s32));    /* extern */
M2C_UNK memcpy();             /* extern */
M2C_UNK memset();      /* extern */
extern s32 __PADSpec;
extern M2C_UNK lbl_8038D848;
extern u32 lbl_80465D70;
extern M2C_UNK lbl_80465DA0;
extern M2C_UNK lbl_80465DB0;
extern s32 lbl_8049D240;
extern s32 lbl_8049D244;
extern s32 lbl_8049D248;
extern s32 lbl_8049D24C;
extern u32 lbl_8049D250;
extern void (*lbl_8049D254)(s32, s8 *, s8 *);
extern s32 lbl_8049D258;
extern s32 lbl_8049D25C;
extern s32 lbl_8049E3B8;
extern M2C_UNK (*lbl_8049E3BC)();
extern s32 lbl_8049E3C4;
extern s32 lbl_8049E3C8;
extern s32 lbl_8049E3CC;
extern s32 lbl_8049E3D0;
extern s32 lbl_8049E3D4;
extern s32 lbl_8049E3D8;
extern s32 lbl_8049E3DC;
extern s32 lbl_8049E3E0;
extern s32 lbl_8049E414;

void UpdateOrigin();
void PADOriginCallback();
void PADOriginUpdateCallback();
void PADProbeCallback();
void PADTypeAndStatusCallback();
void PADReceiveCheckCallback();
s32 PADReset();
s32 PADRecalibrate();
s32 PADInit();
s32 fn_80321B4C();
void PADControlMotor();
void SPEC0_MakeStatus();
void SPEC1_MakeStatus();
void fn_803222F0();
s32 fn_803226FC();
void SamplingHandler();
s32 __PADDisableRecalibration();

// UpdateOrigin: definicion C reemplazada por asm (ver abajo)


// PADOriginCallback: definicion C reemplazada por asm (ver abajo)


void PADOriginUpdateCallback(s32 arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r9;
    u32 temp_r30;

    temp_r30 = 0x80000000U >> arg0;
    if (lbl_8049E3DC & temp_r30) {
        if (!(arg1 & 0xF)) {
            UpdateOrigin(arg0);
        }
        if (arg1 & 8) {
            temp_r31 = OSDisableInterrupts();
            SIDisablePolling((s32) temp_r30);
            temp_r9 = ~(temp_r30 | temp_r30);
            lbl_8049E3DC &= temp_r9;
            lbl_8049E3D0 &= temp_r9;
            lbl_8049E3CC &= temp_r9;
            lbl_8049E3C8 &= temp_r9;
            lbl_8049E3C4 &= temp_r9;
            OSSetWirelessID(arg0, 0U);
            OSRestoreInterrupts(temp_r31);
        }
    }
}

// PADProbeCallback: definicion C reemplazada por asm (ver abajo)


// PADTypeAndStatusCallback: definicion C reemplazada por asm (ver abajo)


// PADReceiveCheckCallback: definicion C reemplazada por asm (ver abajo)


// PADReset: definicion C reemplazada por asm (ver abajo)


// PADRecalibrate: definicion C reemplazada por asm (ver abajo)


// PADInit: definicion C reemplazada por asm (ver abajo)


// fn_80321B4C: definicion C reemplazada por asm (ver abajo)


void PADControlMotor(s32 arg0, u32 arg1) {
    s32 temp_r31;
    u32 var_r30;

    var_r30 = arg1;
    temp_r31 = OSDisableInterrupts();
    if ((lbl_8049E3DC & (0x80000000U >> arg0)) && !(SIGetType(arg0) & 0x20000000)) {
        if (((u32) lbl_8049D250 < 2U) && (var_r30 == 2)) {
            var_r30 = 0;
        }
        if (*(u8 *)0x800030E3 & 0x20) {
            var_r30 = 0;
        }
        SISetCommand(arg0, lbl_8049D24C | 0x400000 | (var_r30 & 3));
        SITransferCommands();
    }
    OSRestoreInterrupts(temp_r31);
}

// SPEC0_MakeStatus: definicion C reemplazada por asm (ver abajo)


// SPEC1_MakeStatus: definicion C reemplazada por asm (ver abajo)


// fn_803222F0: definicion C reemplazada por asm (ver abajo)


// fn_803226FC: definicion C reemplazada por asm (ver abajo)


// SamplingHandler: definicion C reemplazada por asm (ver abajo)


// __PADDisableRecalibration: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void OSClearContext();
extern void OSRegisterShutdownFunction();
extern void OSRegisterVersion();
extern void OSSetCurrentContext();
s32 PADInit(void);
void PADOriginCallback(s32 arg0, s32 arg1);
void PADProbeCallback(s32 arg0, s32 arg1);
s32 PADRecalibrate(s32 arg0);
void PADReceiveCheckCallback(s32 arg0, s32 arg1);
s32 PADReset(s32 arg0);
void PADTypeAndStatusCallback(s32 arg0, s32 arg1);
void SPEC0_MakeStatus(s32 arg0, s8 *arg1, s8 *arg2);
void SPEC1_MakeStatus(s32 arg0, s8 *arg1, s8 *arg2);
void SamplingHandler(s32 arg0, s32 *arg1);
void UpdateOrigin(s32 arg0);
s32 __PADDisableRecalibration(s32 arg0);
extern void _restgpr_16();
extern void _savegpr_16();
s32 fn_80321B4C(s8 *arg0, M2C_UNK arg_sp0);
void fn_803222F0(s32 arg0, s8 *arg1, u32 *arg2);
s32 fn_803226FC(s32 arg0);
extern void fn_803260C4();

// asm_to_cpp: UpdateOrigin
asm void UpdateOrigin(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80465D70@ha
    lis r7, 0x8000
    stw r0, 0x14(r1)
    mulli r6, r3, 0xc
    addi r5, r5, lbl_80465D70@l
    stw r31, 0xc(r1)
    add r31, r5, r6
    lwz r0, lbl_8049D24C
    rlwinm r4, r0, 0, 21, 23
    srw r0, r7, r3
    cmpwi r4, 0x400
    beq lbl_803210A8
    bge lbl_80320FEC
    cmpwi r4, 0x200
    beq lbl_80321078
    bge lbl_80320FE0
    cmpwi r4, 0x100
    beq lbl_80321044
    bge lbl_803210A8
    cmpwi r4, 0x0
    beq lbl_80321010
    b lbl_803210A8
lbl_80320FE0:
    cmpwi r4, 0x300
    beq lbl_803210A8
    b lbl_803210A8
lbl_80320FEC:
    cmpwi r4, 0x600
    beq lbl_80321010
    bge lbl_80321004
    cmpwi r4, 0x500
    beq lbl_80321010
    b lbl_803210A8
lbl_80321004:
    cmpwi r4, 0x700
    beq lbl_80321010
    b lbl_803210A8
lbl_80321010:
    lbz r4, 0x6(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x6(r31)
    lbz r4, 0x7(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x7(r31)
    lbz r4, 0x8(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x8(r31)
    lbz r4, 0x9(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x9(r31)
    b lbl_803210A8
lbl_80321044:
    lbz r4, 0x4(r31)
    clrrwi r4, r4, 4
    stb r4, 0x4(r31)
    lbz r4, 0x5(r31)
    clrrwi r4, r4, 4
    stb r4, 0x5(r31)
    lbz r4, 0x8(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x8(r31)
    lbz r4, 0x9(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x9(r31)
    b lbl_803210A8
lbl_80321078:
    lbz r4, 0x4(r31)
    clrrwi r4, r4, 4
    stb r4, 0x4(r31)
    lbz r4, 0x5(r31)
    clrrwi r4, r4, 4
    stb r4, 0x5(r31)
    lbz r4, 0x6(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x6(r31)
    lbz r4, 0x7(r31)
    rlwinm r4, r4, 0, 24, 27
    stb r4, 0x7(r31)
lbl_803210A8:
    lbz r5, 0x2(r31)
    lwz r4, lbl_8049D248
    subi r5, r5, 0x80
    stb r5, 0x2(r31)
    and. r0, r4, r0
    lbz r4, 0x3(r31)
    subi r0, r4, 0x80
    stb r0, 0x3(r31)
    lbz r4, 0x4(r31)
    subi r0, r4, 0x80
    stb r0, 0x4(r31)
    lbz r4, 0x5(r31)
    subi r0, r4, 0x80
    stb r0, 0x5(r31)
    beq lbl_80321110
    lbz r0, 0x2(r31)
    extsb r0, r0
    cmpwi r0, 0x40
    ble lbl_80321110
    bl SIGetType
    clrrwi r3, r3, 16
    subis r0, r3, 0x900
    cmplwi r0, 0x0
    bne lbl_80321110
    li r0, 0x0
    stb r0, 0x2(r31)
lbl_80321110:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: PADOriginCallback
asm void PADOriginCallback(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    clrlwi. r0, r4, 28
    stw r31, 0x1c(r1)
    bne lbl_80321180
    lwz r3, lbl_8049D244
    bl UpdateOrigin
    lwz r31, lbl_8049D244
    lis r0, 0x8000
    lwz r5, lbl_8049E3DC
    addi r4, r1, 0x8
    srw r0, r0, r31
    mr r3, r31
    or r0, r5, r0
    stw r0, lbl_8049E3DC
    bl SIGetResponse
    lwz r0, lbl_8049D24C
    mr r3, r31
    oris r4, r0, 0x40
    bl SISetCommand
    lwz r3, lbl_8049E3DC
    bl SIEnablePolling
lbl_80321180:
    lwz r5, lbl_8049E3D8
    cntlzw r6, r5
    cmpwi r6, 0x20
    stw r6, lbl_8049D244
    beq lbl_803211D0
    lis r0, 0x8000
    lis r3, lbl_80465D70@ha
    srw r0, r0, r6
    li r4, 0x0
    andc r5, r5, r0
    addi r3, r3, lbl_80465D70@l
    mulli r0, r6, 0xc
    stw r5, lbl_8049E3D8
    li r5, 0xc
    add r3, r3, r0
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
lbl_803211D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: PADProbeCallback
asm void PADProbeCallback(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    clrlwi. r0, r4, 28
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    bne lbl_80321318
    lwz r30, lbl_8049D244
    lis r31, 0x8000
    lwz r5, lbl_8049E3DC
    addi r4, r1, 0x8
    srw r0, r31, r30
    mr r3, r30
    or r0, r5, r0
    stw r0, lbl_8049E3DC
    bl SIGetResponse
    lwz r0, lbl_8049D24C
    mr r3, r30
    oris r4, r0, 0x40
    bl SISetCommand
    lwz r3, lbl_8049E3DC
    bl SIEnablePolling
    lwz r0, lbl_8049D244
    lwz r3, lbl_8049E3D0
    srw r0, r31, r0
    or r0, r3, r0
    stw r0, lbl_8049E3D0
lbl_80321318:
    lwz r5, lbl_8049E3D8
    cntlzw r6, r5
    cmpwi r6, 0x20
    stw r6, lbl_8049D244
    beq lbl_80321368
    lis r0, 0x8000
    lis r3, lbl_80465D70@ha
    srw r0, r0, r6
    li r4, 0x0
    andc r5, r5, r0
    addi r3, r3, lbl_80465D70@l
    mulli r0, r6, 0xc
    stw r5, lbl_8049E3D8
    li r5, 0xc
    add r3, r3, r0
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
lbl_80321368:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: PADTypeAndStatusCallback
asm void PADTypeAndStatusCallback(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    clrlwi. r0, r4, 28
    stw r31, 0x1c(r1)
    lis r31, 0x8000
    stw r30, 0x18(r1)
    lis r30, lbl_80465D70@ha
    addi r30, r30, lbl_80465D70@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r28, lbl_8049D244
    lwz r3, lbl_8049E3D4
    srw r29, r31, r28
    andc r0, r3, r29
    stw r0, lbl_8049E3D4
    and r7, r3, r29
    li r3, 0x1
    beq lbl_80321418
    lwz r5, lbl_8049E3D8
    cntlzw r3, r5
    cmpwi r3, 0x20
    stw r3, lbl_8049D244
    beq lbl_80321680
    srw r4, r31, r3
    addi r0, r30, 0x0
    andc r4, r5, r4
    li r5, 0xc
    mulli r3, r3, 0xc
    stw r4, lbl_8049E3D8
    li r4, 0x0
    add r3, r0, r3
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
    b lbl_80321680
lbl_80321418:
    rlwinm r5, r4, 0, 3, 4
    clrrwi r8, r4, 8
    subis r0, r5, 0x800
    slwi r6, r28, 2
    addi r4, r30, 0x30
    cmplwi r0, 0x0
    stwx r8, r4, r6
    bne lbl_80321440
    rlwinm. r0, r8, 0, 7, 7
    bne lbl_80321490
lbl_80321440:
    lwz r7, lbl_8049E3D8
    cntlzw r5, r7
    cmpwi r5, 0x20
    stw r5, lbl_8049D244
    beq lbl_80321680
    lis r3, 0x8000
    addi r0, r30, 0x0
    srw r6, r3, r5
    li r4, 0x0
    mulli r3, r5, 0xc
    li r5, 0xc
    andc r6, r7, r6
    stw r6, lbl_8049E3D8
    add r3, r0, r3
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
    b lbl_80321680
lbl_80321490:
    lwz r0, lbl_8049D250
    cmplwi r0, 0x2
    bge lbl_80321518
    lwz r0, lbl_8049E3DC
    mr r3, r28
    addi r4, r1, 0x8
    or r0, r0, r29
    stw r0, lbl_8049E3DC
    bl SIGetResponse
    lwz r0, lbl_8049D24C
    mr r3, r28
    oris r4, r0, 0x40
    bl SISetCommand
    lwz r3, lbl_8049E3DC
    bl SIEnablePolling
    lwz r5, lbl_8049E3D8
    cntlzw r3, r5
    cmpwi r3, 0x20
    stw r3, lbl_8049D244
    beq lbl_80321680
    srw r4, r31, r3
    addi r0, r30, 0x0
    andc r4, r5, r4
    li r5, 0xc
    mulli r3, r3, 0xc
    stw r4, lbl_8049E3D8
    li r4, 0x0
    add r3, r0, r3
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
    b lbl_80321680
lbl_80321518:
    clrrwi. r0, r8, 31
    beq lbl_80321528
    rlwinm. r0, r8, 0, 5, 5
    beq lbl_80321598
lbl_80321528:
    cmpwi r7, 0x0
    beq lbl_80321564
    lwz r3, lbl_8049D244
    lis r8, PADOriginCallback@ha
    addi r0, r30, 0x0
    la r4, lbl_8049D25C
    mulli r6, r3, 0xc
    addi r8, r8, PADOriginCallback@l
    li r5, 0x3
    li r7, 0xa
    add r6, r0, r6
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80321620
lbl_80321564:
    lwz r3, lbl_8049D244
    lis r8, PADOriginCallback@ha
    addi r0, r30, 0x0
    la r4, lbl_8049D258
    mulli r6, r3, 0xc
    addi r8, r8, PADOriginCallback@l
    li r5, 0x1
    li r7, 0xa
    add r6, r0, r6
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80321620
lbl_80321598:
    rlwinm. r0, r8, 0, 11, 11
    beq lbl_80321620
    rlwinm. r0, r8, 0, 12, 12
    bne lbl_80321620
    rlwinm. r0, r8, 0, 13, 13
    bne lbl_80321620
    rlwinm. r0, r8, 0, 1, 1
    beq lbl_803215EC
    mulli r4, r28, 0xc
    addi r0, r30, 0x0
    lis r8, PADOriginCallback@ha
    mr r3, r28
    add r6, r0, r4
    addi r8, r8, PADOriginCallback@l
    la r4, lbl_8049D258
    li r5, 0x1
    li r7, 0xa
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80321620
lbl_803215EC:
    mulli r5, r28, 0xc
    addi r4, r30, 0x40
    lis r8, PADProbeCallback@ha
    addi r0, r30, 0x0
    add r4, r4, r6
    mr r3, r28
    add r6, r0, r5
    addi r8, r8, PADProbeCallback@l
    li r5, 0x3
    li r7, 0x8
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
lbl_80321620:
    cmpwi r3, 0x0
    bne lbl_80321680
    lwz r7, lbl_8049E3D8
    lwz r0, lbl_8049E3C8
    cntlzw r5, r7
    or r0, r0, r29
    stw r5, lbl_8049D244
    cmpwi r5, 0x20
    stw r0, lbl_8049E3C8
    beq lbl_80321680
    lis r3, 0x8000
    addi r0, r30, 0x0
    srw r6, r3, r5
    li r4, 0x0
    mulli r3, r5, 0xc
    li r5, 0xc
    andc r6, r7, r6
    stw r6, lbl_8049E3D8
    add r3, r0, r3
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
lbl_80321680:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: PADReceiveCheckCallback
asm void PADReceiveCheckCallback(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, 0x8000
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    srw r31, r5, r3
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r0, lbl_8049E3DC
    and. r0, r0, r31
    beq lbl_803217C0
    clrlwi. r0, r4, 28
    lwz r6, lbl_8049E3D0
    nor r7, r31, r31
    lwz r5, lbl_8049E3CC
    and r6, r6, r7
    clrrwi r4, r4, 8
    and r0, r5, r7
    stw r6, lbl_8049E3D0
    stw r0, lbl_8049E3CC
    bne lbl_8032175C
    clrrwi. r0, r4, 31
    beq lbl_8032175C
    rlwinm. r0, r4, 0, 11, 11
    beq lbl_8032175C
    rlwinm. r0, r4, 0, 1, 1
    beq lbl_8032175C
    rlwinm. r0, r4, 0, 5, 5
    bne lbl_8032175C
    rlwinm. r0, r4, 0, 12, 12
    bne lbl_8032175C
    rlwinm. r0, r4, 0, 13, 13
    bne lbl_8032175C
    mulli r0, r3, 0xc
    lis r4, lbl_80465D70@ha
    lis r8, PADOriginUpdateCallback@ha
    addi r4, r4, lbl_80465D70@l
    add r6, r4, r0
    addi r8, r8, PADOriginUpdateCallback@l
    la r4, lbl_8049D258
    li r5, 0x1
    li r7, 0xa
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_803217C0
lbl_8032175C:
    bl OSDisableInterrupts
    mr r29, r3
    mr r3, r31
    bl SIDisablePolling
    lwz r4, lbl_8049E3DC
    nor r9, r31, r31
    lwz r0, lbl_8049E3D0
    mr r3, r30
    and r8, r4, r9
    lwz r5, lbl_8049E3CC
    and r7, r0, r9
    lwz r0, lbl_8049E3C4
    and r6, r5, r9
    lwz r4, lbl_8049E3C8
    and r0, r0, r9
    stw r8, lbl_8049E3DC
    and r5, r4, r9
    li r4, 0x0
    stw r7, lbl_8049E3D0
    stw r6, lbl_8049E3CC
    stw r5, lbl_8049E3C8
    stw r0, lbl_8049E3C4
    bl OSSetWirelessID
    mr r3, r29
    bl OSRestoreInterrupts
lbl_803217C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: PADReset
asm s32 PADReset(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8049E3C8
    mr r31, r3
    lwz r4, lbl_8049E3D0
    li r7, 0x0
    lwz r3, lbl_8049E3CC
    or r30, r30, r0
    lwz r0, lbl_8049D250
    or r4, r4, r3
    lwz r3, lbl_8049E3D8
    andc r30, r30, r4
    lwz r5, lbl_8049E3DC
    or r6, r3, r30
    lwz r3, lbl_8049E3C4
    nor r8, r30, r30
    cmplwi r0, 0x4
    and r0, r3, r8
    stw r7, lbl_8049E3C8
    and r4, r5, r8
    and r3, r6, r5
    stw r6, lbl_8049E3D8
    stw r4, lbl_8049E3DC
    stw r0, lbl_8049E3C4
    bne lbl_80321860
    lwz r0, lbl_8049E3D4
    or r0, r0, r30
    stw r0, lbl_8049E3D4
lbl_80321860:
    bl SIDisablePolling
    lwz r0, lbl_8049D244
    cmpwi r0, 0x20
    bne lbl_803218C0
    lwz r5, lbl_8049E3D8
    cntlzw r6, r5
    cmpwi r6, 0x20
    stw r6, lbl_8049D244
    beq lbl_803218C0
    lis r0, 0x8000
    lis r3, lbl_80465D70@ha
    srw r0, r0, r6
    li r4, 0x0
    andc r5, r5, r0
    addi r3, r3, lbl_80465D70@l
    mulli r0, r6, 0xc
    stw r5, lbl_8049E3D8
    li r5, 0xc
    add r3, r3, r0
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
lbl_803218C0:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: PADRecalibrate
asm s32 PADRecalibrate(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r5, lbl_8049E3C8
    mr r31, r3
    lwz r6, lbl_8049E3D0
    li r7, 0x0
    lwz r0, lbl_8049E3CC
    or r30, r30, r5
    lwz r5, lbl_8049E3D8
    lis r4, 0x8000
    or r0, r6, r0
    lwz r3, lbl_8049E3DC
    andc r30, r30, r0
    lwz r0, lbl_8049E3C4
    nor r8, r30, r30
    stw r7, lbl_8049E3C8
    or r6, r5, r30
    and r5, r3, r8
    and r0, r0, r8
    stw r6, lbl_8049E3D8
    and r3, r6, r3
    stw r5, lbl_8049E3DC
    stw r0, lbl_8049E3C4
    lbz r0, 0x30e3(r4)
    rlwinm. r0, r0, 0, 25, 25
    bne lbl_8032196C
    lwz r0, lbl_8049E3D4
    or r0, r0, r30
    stw r0, lbl_8049E3D4
lbl_8032196C:
    bl SIDisablePolling
    lwz r0, lbl_8049D244
    cmpwi r0, 0x20
    bne lbl_803219CC
    lwz r5, lbl_8049E3D8
    cntlzw r6, r5
    cmpwi r6, 0x20
    stw r6, lbl_8049D244
    beq lbl_803219CC
    lis r0, 0x8000
    lis r3, lbl_80465D70@ha
    srw r0, r0, r6
    li r4, 0x0
    andc r5, r5, r0
    addi r3, r3, lbl_80465D70@l
    mulli r0, r6, 0xc
    stw r5, lbl_8049E3D8
    li r5, 0xc
    add r3, r3, r0
    bl memset
    lis r4, PADTypeAndStatusCallback@ha
    lwz r3, lbl_8049D244
    addi r4, r4, PADTypeAndStatusCallback@l
    bl SIGetTypeAsync
lbl_803219CC:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: PADInit
asm s32 PADInit(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049E3E0
    cmpwi r0, 0x0
    beq lbl_80321A10
    li r3, 0x1
    b lbl_80321B3C
lbl_80321A10:
    lwz r3, lbl_8049D240
    bl OSRegisterVersion
    lwz r4, __PADSpec
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_80321A7C
    li r0, 0x0
    cmpwi r4, 0x1
    stw r0, __PADSpec
    beq lbl_80321A5C
    bge lbl_80321A40
    bge cr1, lbl_80321A4C
    b lbl_80321A78
lbl_80321A40:
    cmpwi r4, 0x6
    bge lbl_80321A78
    b lbl_80321A6C
lbl_80321A4C:
    lis r3, SPEC0_MakeStatus@ha
    addi r3, r3, SPEC0_MakeStatus@l
    stw r3, lbl_8049D254
    b lbl_80321A78
lbl_80321A5C:
    lis r3, SPEC1_MakeStatus@ha
    addi r3, r3, SPEC1_MakeStatus@l
    stw r3, lbl_8049D254
    b lbl_80321A78
lbl_80321A6C:
    lis r3, fn_803222F0@ha
    addi r3, r3, fn_803222F0@l
    stw r3, lbl_8049D254
lbl_80321A78:
    stw r4, lbl_8049D250
lbl_80321A7C:
    lwz r0, lbl_8049E414
    li r3, 0x1
    stw r3, lbl_8049E3E0
    cmpwi r0, 0x0
    beq lbl_80321AF0
    bl OSGetTime
    srawi r8, r3, 16
    lis r5, 0x1
    srawi r0, r3, 31
    li r6, 0x0
    subi r7, r5, 0x1
    rotlwi r5, r4, 16
    srawi r0, r3, 31
    rlwimi r5, r3, 16, 0, 15
    and r4, r4, r7
    srawi r0, r3, 16
    and r0, r5, r7
    and r5, r3, r7
    addc r0, r4, r0
    and r7, r8, r7
    adde r4, r6, r6
    lis r3, 0x8000
    addc r5, r5, r0
    lis r0, 0xf000
    adde r4, r6, r4
    addc r4, r7, r5
    clrlwi r4, r4, 18
    sth r4, 0x30e0(r3)
    stw r0, lbl_8049E3D4
lbl_80321AF0:
    lis r3, 0x8000
    lis r6, lbl_80465DB0@ha
    lhz r0, 0x30e0(r3)
    addi r4, r6, lbl_80465DB0@l
    clrlslwi r0, r0, 18, 8
    oris r7, r0, 0x4d00
    oris r5, r0, 0x4d40
    oris r3, r0, 0x4d80
    oris r0, r0, 0x4dc0
    stw r7, lbl_80465DB0@l(r6)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    bl fn_803260C4
    lis r3, lbl_8038D848@ha
    addi r3, r3, lbl_8038D848@l
    bl OSRegisterShutdownFunction
    lis r3, 0xf000
    bl PADReset
lbl_80321B3C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80321B4C
asm s32 fn_80321B4C(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_16
    lis r17, lbl_80465D70@ha
    mr r16, r3
    addi r17, r17, lbl_80465D70@l
    bl OSDisableInterrupts
    mr r19, r3
    addi r23, r17, 0x30
    addi r22, r17, 0x50
    addi r21, r17, 0x0
    li r17, 0x0
    li r18, 0x0
    li r26, -0x2
    li r27, -0x1
    li r28, -0x3
    li r29, 0x0
    lis r30, PADReceiveCheckCallback@ha
    lis r31, PADOriginUpdateCallback@ha
    lis r25, 0x8000
lbl_80321BA4:
    lwz r0, lbl_8049E3C8
    srw r20, r25, r18
    and. r0, r0, r20
    beq lbl_80321BD4
    li r3, 0x0
    bl PADReset
    stb r26, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321BD4:
    lwz r0, lbl_8049E3D8
    and. r0, r0, r20
    bne lbl_80321BEC
    lwz r0, lbl_8049D244
    cmpw r0, r18
    bne lbl_80321C04
lbl_80321BEC:
    stb r26, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321C04:
    lwz r0, lbl_8049E3DC
    and. r0, r0, r20
    bne lbl_80321C28
    stb r27, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321C28:
    mr r3, r18
    bl SIIsChanBusy
    cmpwi r3, 0x0
    beq lbl_80321C50
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321C50:
    mr r3, r18
    bl SIGetStatus
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_80321D2C
    mr r3, r18
    addi r4, r1, 0x8
    bl SIGetResponse
    lwz r0, lbl_8049E3D0
    and. r0, r0, r20
    beq lbl_80321CB0
    stb r29, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    lwz r3, lbl_8049E3CC
    and. r0, r3, r20
    bne lbl_80321FC8
    or r0, r3, r20
    mr r3, r18
    stw r0, lbl_8049E3CC
    addi r4, r30, PADReceiveCheckCallback@l
    bl SIGetTypeAsync
    b lbl_80321FC8
lbl_80321CB0:
    bl OSDisableInterrupts
    mr r24, r3
    mr r3, r20
    bl SIDisablePolling
    lwz r4, lbl_8049E3DC
    nor r9, r20, r20
    lwz r0, lbl_8049E3D0
    mr r3, r18
    and r8, r4, r9
    lwz r5, lbl_8049E3CC
    and r7, r0, r9
    lwz r0, lbl_8049E3C4
    and r6, r5, r9
    lwz r4, lbl_8049E3C8
    and r0, r0, r9
    stw r8, lbl_8049E3DC
    and r5, r4, r9
    li r4, 0x0
    stw r7, lbl_8049E3D0
    stw r6, lbl_8049E3CC
    stw r5, lbl_8049E3C8
    stw r0, lbl_8049E3C4
    bl OSSetWirelessID
    mr r3, r24
    bl OSRestoreInterrupts
    stb r27, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321D2C:
    mr r3, r18
    bl SIGetType
    rlwinm. r0, r3, 0, 2, 2
    bne lbl_80321D40
    or r17, r17, r20
lbl_80321D40:
    mr r3, r18
    addi r4, r1, 0x8
    bl SIGetResponse
    cmpwi r3, 0x0
    bne lbl_80321D6C
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321D6C:
    lwz r0, 0x8(r1)
    clrrwi. r0, r0, 31
    beq lbl_80321D90
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    b lbl_80321FC8
lbl_80321D90:
    lwz r12, lbl_8049D254
    mr r3, r18
    mr r4, r16
    addi r5, r1, 0x8
    mtctr r12
    bctrl
    lwz r0, 0x0(r23)
    clrrwi r3, r0, 16
    subis r0, r3, 0x900
    cmplwi r0, 0x0
    bne lbl_80321DD8
    lhz r0, 0x0(r16)
    rlwinm r0, r0, 0, 24, 24
    xori r0, r0, 0x80
    cmpwi r0, 0x0
    beq lbl_80321DD8
    li r0, 0xa
    b lbl_80321DDC
lbl_80321DD8:
    li r0, 0x3
lbl_80321DDC:
    lbz r4, 0x2(r22)
    lbz r3, 0x2(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r4, 0x3(r22)
    lbz r3, 0x3(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r4, 0x4(r22)
    lbz r3, 0x4(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r4, 0x5(r22)
    lbz r3, 0x5(r16)
    extsb r5, r4
    srawi r6, r5, 31
    extsb r3, r3
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r5, 0x6(r22)
    lbz r3, 0x6(r16)
    srawi r6, r5, 31
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lbz r5, 0x7(r22)
    lbz r3, 0x7(r16)
    srawi r6, r5, 31
    srawi r4, r3, 31
    xor r5, r6, r5
    xor r3, r4, r3
    subf r5, r6, r5
    subf r3, r4, r3
    subf r3, r5, r3
    srawi r4, r3, 31
    xor r3, r4, r3
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_80321F5C
    lhz r3, 0x0(r16)
    lhz r0, 0x0(r22)
    cmplw r3, r0
    beq lbl_80321F60
lbl_80321F5C:
    bl __VIResetSIIdle
lbl_80321F60:
    mr r3, r22
    mr r4, r16
    li r5, 0xc
    bl memcpy
    lhz r0, 0x0(r16)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_80321FB8
    stb r28, 0xa(r16)
    mr r3, r16
    li r4, 0x0
    li r5, 0xa
    bl memset
    mr r3, r18
    mr r6, r21
    addi r8, r31, PADOriginUpdateCallback@l
    la r4, lbl_8049D258
    li r5, 0x1
    li r7, 0xa
    li r10, 0x0
    li r9, 0x0
    bl SITransfer
    b lbl_80321FC8
lbl_80321FB8:
    stb r29, 0xa(r16)
    lhz r0, 0x0(r16)
    rlwinm r0, r0, 0, 25, 23
    sth r0, 0x0(r16)
lbl_80321FC8:
    addi r18, r18, 0x1
    addi r22, r22, 0xc
    cmpwi r18, 0x4
    addi r21, r21, 0xc
    addi r16, r16, 0xc
    addi r23, r23, 0x4
    blt lbl_80321BA4
    mr r3, r19
    bl OSRestoreInterrupts
    addi r11, r1, 0x50
    mr r3, r17
    bl _restgpr_16
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: SPEC0_MakeStatus
asm void SPEC0_MakeStatus(s32 arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    li r0, 0x0
    sth r0, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 12
    neg r7, r3
    rlwinm r3, r7, 0, 23, 23
    sth r3, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 10
    neg r3, r3
    rlwinm r6, r3, 0, 22, 22
    rlwimi r6, r7, 0, 23, 23
    sth r6, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 7
    neg r3, r3
    rlwimi r6, r3, 0, 21, 21
    sth r6, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 15
    neg r3, r3
    rlwimi r6, r3, 0, 20, 20
    sth r6, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 11
    neg r3, r3
    rlwimi r6, r3, 0, 19, 19
    sth r6, 0x0(r4)
    lwz r3, 0x4(r5)
    srwi r3, r3, 16
    stb r3, 0x2(r4)
    lwz r3, 0x4(r5)
    srwi r3, r3, 24
    stb r3, 0x3(r4)
    lwz r3, 0x4(r5)
    stb r3, 0x4(r4)
    lwz r3, 0x4(r5)
    srwi r3, r3, 8
    stb r3, 0x5(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 8, 16
    stb r3, 0x6(r4)
    cmplwi r3, 0xaa
    lwz r3, 0x0(r5)
    stb r3, 0x7(r4)
    stb r0, 0x8(r4)
    stb r0, 0x9(r4)
    blt lbl_8032218C
    clrlwi r0, r6, 16
    ori r0, r0, 0x40
    sth r0, 0x0(r4)
lbl_8032218C:
    lbz r0, 0x7(r4)
    cmplwi r0, 0xaa
    blt lbl_803221A4
    lhz r0, 0x0(r4)
    ori r0, r0, 0x20
    sth r0, 0x0(r4)
lbl_803221A4:
    lbz r3, 0x2(r4)
    lbz r6, 0x3(r4)
    subi r0, r3, 0x80
    lbz r5, 0x4(r4)
    lbz r3, 0x5(r4)
    subi r6, r6, 0x80
    subi r5, r5, 0x80
    stb r0, 0x2(r4)
    subi r0, r3, 0x80
    stb r6, 0x3(r4)
    stb r5, 0x4(r4)
    stb r0, 0x5(r4)
    blr
}

// asm_to_cpp: SPEC1_MakeStatus
asm void SPEC1_MakeStatus(s32 arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    li r0, 0x0
    sth r0, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 8
    neg r7, r3
    rlwinm r3, r7, 0, 23, 23
    sth r3, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 7
    neg r3, r3
    rlwinm r6, r3, 0, 22, 22
    rlwimi r6, r7, 0, 23, 23
    sth r6, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 10
    neg r3, r3
    rlwimi r6, r3, 0, 21, 21
    sth r6, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 11
    neg r3, r3
    rlwimi r6, r3, 0, 20, 20
    sth r6, 0x0(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 1, 6
    neg r3, r3
    rlwimi r6, r3, 0, 19, 19
    sth r6, 0x0(r4)
    lwz r3, 0x4(r5)
    srwi r3, r3, 16
    stb r3, 0x2(r4)
    lwz r3, 0x4(r5)
    srwi r3, r3, 24
    stb r3, 0x3(r4)
    lwz r3, 0x4(r5)
    stb r3, 0x4(r4)
    lwz r3, 0x4(r5)
    srwi r3, r3, 8
    stb r3, 0x5(r4)
    lwz r3, 0x0(r5)
    extrwi r3, r3, 8, 16
    stb r3, 0x6(r4)
    cmplwi r3, 0xaa
    lwz r3, 0x0(r5)
    stb r3, 0x7(r4)
    stb r0, 0x8(r4)
    stb r0, 0x9(r4)
    blt lbl_803222A4
    clrlwi r0, r6, 16
    ori r0, r0, 0x40
    sth r0, 0x0(r4)
lbl_803222A4:
    lbz r0, 0x7(r4)
    cmplwi r0, 0xaa
    blt lbl_803222BC
    lhz r0, 0x0(r4)
    ori r0, r0, 0x20
    sth r0, 0x0(r4)
lbl_803222BC:
    lbz r3, 0x2(r4)
    lbz r6, 0x3(r4)
    subi r0, r3, 0x80
    lbz r5, 0x4(r4)
    lbz r3, 0x5(r4)
    subi r6, r6, 0x80
    subi r5, r5, 0x80
    stb r0, 0x2(r4)
    subi r0, r3, 0x80
    stb r6, 0x3(r4)
    stb r5, 0x4(r4)
    stb r0, 0x5(r4)
    blr
}

// asm_to_cpp: fn_803222F0
asm void fn_803222F0(s32 arg0, s8 *arg1, u32 *arg2) {
    nofralloc
    lwz r0, 0x0(r5)
    extrwi r0, r0, 14, 2
    sth r0, 0x0(r4)
    lwz r0, 0x0(r5)
    srwi r0, r0, 8
    stb r0, 0x2(r4)
    lwz r0, 0x0(r5)
    stb r0, 0x3(r4)
    lwz r0, lbl_8049D24C
    rlwinm r0, r0, 0, 21, 23
    cmpwi r0, 0x400
    beq lbl_80322494
    bge lbl_80322354
    cmpwi r0, 0x200
    beq lbl_80322410
    bge lbl_80322348
    cmpwi r0, 0x100
    beq lbl_803223C4
    bge lbl_803224CC
    cmpwi r0, 0x0
    beq lbl_80322378
    b lbl_803224CC
lbl_80322348:
    cmpwi r0, 0x300
    beq lbl_80322458
    b lbl_803224CC
lbl_80322354:
    cmpwi r0, 0x600
    beq lbl_80322378
    bge lbl_8032236C
    cmpwi r0, 0x500
    beq lbl_80322378
    b lbl_803224CC
lbl_8032236C:
    cmpwi r0, 0x700
    beq lbl_80322378
    b lbl_803224CC
lbl_80322378:
    lwz r0, 0x4(r5)
    srwi r0, r0, 24
    stb r0, 0x4(r4)
    lwz r0, 0x4(r5)
    srwi r0, r0, 16
    stb r0, 0x5(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 24, 24, 27
    stb r0, 0x6(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 28, 24, 27
    stb r0, 0x7(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 24, 27
    stb r0, 0x8(r4)
    lwz r0, 0x4(r5)
    clrlslwi r0, r0, 28, 4
    stb r0, 0x9(r4)
    b lbl_803224CC
lbl_803223C4:
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 8, 24, 27
    stb r0, 0x4(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 12, 24, 27
    stb r0, 0x5(r4)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 8
    stb r0, 0x6(r4)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 16
    stb r0, 0x7(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 24, 27
    stb r0, 0x8(r4)
    lwz r0, 0x4(r5)
    clrlslwi r0, r0, 28, 4
    stb r0, 0x9(r4)
    b lbl_803224CC
lbl_80322410:
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 8, 24, 27
    stb r0, 0x4(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 12, 24, 27
    stb r0, 0x5(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 16, 24, 27
    stb r0, 0x6(r4)
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 20, 24, 27
    stb r0, 0x7(r4)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 16
    stb r0, 0x8(r4)
    lwz r0, 0x4(r5)
    stb r0, 0x9(r4)
    b lbl_803224CC
lbl_80322458:
    lwz r6, 0x4(r5)
    li r0, 0x0
    srwi r6, r6, 24
    stb r6, 0x4(r4)
    lwz r6, 0x4(r5)
    srwi r6, r6, 16
    stb r6, 0x5(r4)
    lwz r6, 0x4(r5)
    extrwi r6, r6, 8, 16
    stb r6, 0x6(r4)
    lwz r5, 0x4(r5)
    stb r5, 0x7(r4)
    stb r0, 0x8(r4)
    stb r0, 0x9(r4)
    b lbl_803224CC
lbl_80322494:
    lwz r6, 0x4(r5)
    li r0, 0x0
    srwi r6, r6, 24
    stb r6, 0x4(r4)
    lwz r6, 0x4(r5)
    srwi r6, r6, 16
    stb r0, 0x6(r4)
    stb r6, 0x5(r4)
    stb r0, 0x7(r4)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 16
    stb r0, 0x8(r4)
    lwz r0, 0x4(r5)
    stb r0, 0x9(r4)
lbl_803224CC:
    lbz r6, 0x2(r4)
    lis r5, lbl_80465DA0@ha
    lbz r8, 0x3(r4)
    slwi r0, r3, 2
    subi r9, r6, 0x80
    lbz r7, 0x4(r4)
    lbz r6, 0x5(r4)
    subi r8, r8, 0x80
    subi r7, r7, 0x80
    stb r9, 0x2(r4)
    subi r6, r6, 0x80
    addi r5, r5, lbl_80465DA0@l
    stb r8, 0x3(r4)
    stb r7, 0x4(r4)
    stb r6, 0x5(r4)
    lwzx r0, r5, r0
    clrrwi r5, r0, 16
    subis r0, r5, 0x900
    cmplwi r0, 0x0
    bne lbl_8032255C
    lhz r0, 0x0(r4)
    rlwinm r0, r0, 0, 24, 24
    xori r0, r0, 0x80
    cmpwi r0, 0x0
    beq lbl_8032255C
    lis r0, 0x8000
    lwz r5, lbl_8049E3C4
    srw r3, r0, r3
    or r3, r5, r3
    li r0, 0x0
    stw r3, lbl_8049E3C4
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
    stb r0, 0x4(r4)
    stb r0, 0x5(r4)
    blr
lbl_8032255C:
    mulli r0, r3, 0xc
    lis r5, lbl_80465D70@ha
    lis r6, 0x8000
    lwz r7, lbl_8049E3C4
    addi r5, r5, lbl_80465D70@l
    add r5, r5, r0
    srw r0, r6, r3
    lbz r8, 0x2(r5)
    andc r0, r7, r0
    stw r0, lbl_8049E3C4
    extsb. r0, r8
    lbz r6, 0x2(r4)
    ble lbl_803225AC
    subi r3, r8, 0x80
    extsb r0, r6
    extsb r3, r3
    cmpw r0, r3
    bge lbl_803225C8
    mr r6, r3
    b lbl_803225C8
lbl_803225AC:
    bge lbl_803225C8
    addi r3, r8, 0x7f
    extsb r0, r6
    extsb r3, r3
    cmpw r3, r0
    bge lbl_803225C8
    mr r6, r3
lbl_803225C8:
    subf r0, r8, r6
    lbz r6, 0x3(r4)
    stb r0, 0x2(r4)
    lbz r7, 0x3(r5)
    extsb. r0, r7
    ble lbl_803225FC
    subi r3, r7, 0x80
    extsb r0, r6
    extsb r3, r3
    cmpw r0, r3
    bge lbl_80322618
    mr r6, r3
    b lbl_80322618
lbl_803225FC:
    bge lbl_80322618
    addi r3, r7, 0x7f
    extsb r0, r6
    extsb r3, r3
    cmpw r3, r0
    bge lbl_80322618
    mr r6, r3
lbl_80322618:
    subf r0, r7, r6
    lbz r6, 0x4(r4)
    stb r0, 0x3(r4)
    lbz r7, 0x4(r5)
    extsb. r0, r7
    ble lbl_8032264C
    subi r3, r7, 0x80
    extsb r0, r6
    extsb r3, r3
    cmpw r0, r3
    bge lbl_80322668
    mr r6, r3
    b lbl_80322668
lbl_8032264C:
    bge lbl_80322668
    addi r3, r7, 0x7f
    extsb r0, r6
    extsb r3, r3
    cmpw r3, r0
    bge lbl_80322668
    mr r6, r3
lbl_80322668:
    subf r0, r7, r6
    lbz r6, 0x5(r4)
    stb r0, 0x4(r4)
    lbz r7, 0x5(r5)
    extsb. r0, r7
    ble lbl_8032269C
    subi r3, r7, 0x80
    extsb r0, r6
    extsb r3, r3
    cmpw r0, r3
    bge lbl_803226B8
    mr r6, r3
    b lbl_803226B8
lbl_8032269C:
    bge lbl_803226B8
    addi r3, r7, 0x7f
    extsb r0, r6
    extsb r3, r3
    cmpw r3, r0
    bge lbl_803226B8
    mr r6, r3
lbl_803226B8:
    subf r0, r7, r6
    lbz r3, 0x6(r4)
    stb r0, 0x5(r4)
    lbz r0, 0x6(r5)
    cmplw r3, r0
    bge lbl_803226D4
    mr r3, r0
lbl_803226D4:
    subf r0, r0, r3
    lbz r3, 0x7(r4)
    stb r0, 0x6(r4)
    lbz r0, 0x7(r5)
    cmplw r3, r0
    bge lbl_803226F0
    mr r3, r0
lbl_803226F0:
    subf r0, r0, r3
    stb r0, 0x7(r4)
    blr
}

// asm_to_cpp: fn_803226FC
asm s32 fn_803226FC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8049E3BC
    cmpwi r0, 0x0
    beq lbl_80322730
    li r0, 0x0
    lis r3, SamplingHandler@ha
    stw r0, lbl_8049E3BC
    addi r3, r3, SamplingHandler@l
    bl SIUnregisterPollingHandler
lbl_80322730:
    cmpwi r31, 0x0
    bne lbl_803227A4
    lwz r0, lbl_8049E3D8
    li r31, 0x0
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_8032275C
    lwz r0, lbl_8049D244
    cmpwi r0, 0x20
    bne lbl_8032275C
    li r3, 0x1
lbl_8032275C:
    cmpwi r3, 0x0
    beq lbl_80322774
    bl SIBusy
    cmpwi r3, 0x0
    bne lbl_80322774
    li r31, 0x1
lbl_80322774:
    lwz r0, lbl_8049E3B8
    cmpwi r0, 0x0
    bne lbl_8032279C
    cmpwi r31, 0x0
    beq lbl_8032279C
    lis r3, 0xf000
    bl PADRecalibrate
    stw r3, lbl_8049E3B8
    li r3, 0x0
    b lbl_803227B0
lbl_8032279C:
    mr r3, r31
    b lbl_803227B0
lbl_803227A4:
    li r0, 0x0
    li r3, 0x1
    stw r0, lbl_8049E3B8
lbl_803227B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: SamplingHandler
asm void SamplingHandler(s32 arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    mr r31, r4
    lwz r0, lbl_8049E3BC
    cmpwi r0, 0x0
    beq lbl_80322810
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8049E3BC
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
lbl_80322810:
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// asm_to_cpp: __PADDisableRecalibration
asm s32 __PADDisableRecalibration(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lis r5, 0x8000
    cmpwi r31, 0x0
    lbz r4, 0x30e3(r5)
    rlwinm r0, r4, 0, 26, 24
    extrwi r31, r4, 1, 25
    stb r0, 0x30e3(r5)
    beq lbl_80322864
    lbz r0, 0x30e3(r5)
    ori r0, r0, 0x40
    stb r0, 0x30e3(r5)
lbl_80322864:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
