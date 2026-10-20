#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

u64 OSGetTime();                                    /* extern */
M2C_UNK OSSetPeriodicAlarm(s8 *, u64, u32, M2C_UNK, s32, void (*)()); /* extern */
M2C_UNK OSSwitchFiberEx();                          /* extern */
M2C_UNK SCFlushAsync(void (*)(u32 *));              /* extern */
f64 memcpy();             /* extern */
M2C_UNK memset();        /* extern */
extern M2C_UNK __OSStartTime;
extern M2C_UNK fn_80299440;
extern M2C_UNK lbl_8036DE80;
extern s32 lbl_8036E09C;
extern s32 lbl_8036E0AC;
extern s32 lbl_8036E0BC;
extern M2C_UNK lbl_8036E0FC;
extern s32 lbl_8036E164;
extern s32 lbl_8036E188;
extern s32 lbl_8036E198;
extern s32 lbl_8036E1A8;
extern s32 lbl_8036E1BC;
extern s32 lbl_8036E1D0;
extern s32 lbl_8036E374;
extern s32 lbl_8036E444;
extern s32 lbl_8036E5A0;
extern s32 lbl_8036E5D8;
extern s32 lbl_8036E5F0;
extern s32 lbl_8036E608;
extern s32 lbl_8036E61C;
extern s32 lbl_8036E62C;
extern M2C_UNK lbl_8040C450;
extern M2C_UNK lbl_8040FC00;
extern M2C_UNK lbl_80410920;
extern M2C_UNK (*lbl_8049CECC)();
extern s32 lbl_8049CED0;
extern s32 lbl_8049CF08;
extern M2C_UNK lbl_8049CF10;
extern M2C_UNK lbl_8049CF18;
extern s32 lbl_8049DE20;
extern s32 lbl_8049DE24;
extern s32 lbl_8049DE28;
extern u8 lbl_8049DE2D;
extern s32 lbl_8049DE30;
extern u32 lbl_8049DE34;
extern s32 lbl_8049DE38;
extern u8 lbl_8049DE3C;
extern s8 lbl_8049DE4C;
extern u8 lbl_8049DE4E;
extern u8 lbl_8049DE4F;

void fn_8029419C();
s32 fn_802941C8();
s32 fn_80294294();
void fn_80294360();
s32 fn_802943B0();
s32 fn_802943B8();
void fn_80294408();
void fn_80294458();
u8 fn_802944D0();
u8 fn_80294630();
u8 fn_802947A0();
u8 fn_80294B18();
void fn_80294C4C();
void fn_80294CC8();
void fn_80294D4C();
void fn_80294DC8();
u8 fn_80294E1C();
void fn_80294F8C();
void fn_80295A6C();
void fn_80295A8C();
u8 fn_80295AE4();
u8 fn_80295B7C();
void fn_80295D80();
void fn_802960D0();
u8 fn_802960F0();
void fn_80296204();
void fn_80296350();
void fn_80296370();
s32 fn_802963BC();
void fn_802969EC();
void fn_80296A74();
u8 fn_80296A8C();
void fn_80296FBC();
void fn_802970D4();
void fn_802970F4();
void fn_80297140();
void fn_80297204();
void fn_80297224();
s32 fn_802975B8();
void fn_802976D4();
void fn_80297720();
void fn_80297724();
s8 fn_80297944();
u8 fn_80297980();
void fn_802979C8();
s32 fn_80297A34();

void fn_8029419C(s32 arg0);



// fn_80294360: definicion C reemplazada por asm (ver abajo)


s32 fn_802943B0(void) {
    return lbl_8049CED0;
}

// fn_802943B8: definicion C reemplazada por asm (ver abajo)


// fn_80294408: definicion C reemplazada por asm (ver abajo)


// fn_80294458: definicion C reemplazada por asm (ver abajo)


// fn_802944D0: definicion C reemplazada por asm (ver abajo)


// fn_80294630: definicion C reemplazada por asm (ver abajo)


u8 fn_802947A0(M2C_UNK arg_sp0);

// fn_80294B18: definicion C reemplazada por asm (ver abajo)


// fn_80294C4C: definicion C reemplazada por asm (ver abajo)


// fn_80294CC8: definicion C reemplazada por asm (ver abajo)


// fn_80294D4C: definicion C reemplazada por asm (ver abajo)


// fn_80294DC8: definicion C reemplazada por asm (ver abajo)


// fn_80294E1C: definicion C reemplazada por asm (ver abajo)


void fn_80294F8C(M2C_UNK arg_sp0);

// fn_80295A6C: definicion C reemplazada por asm (ver abajo)


// fn_80295A8C: definicion C reemplazada por asm (ver abajo)


// fn_80295AE4: definicion C reemplazada por asm (ver abajo)


// fn_80295B7C: definicion C reemplazada por asm (ver abajo)


// fn_80295D80: definicion C reemplazada por asm (ver abajo)


// fn_802960D0: definicion C reemplazada por asm (ver abajo)


// fn_802960F0: definicion C reemplazada por asm (ver abajo)


void fn_80296204(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

// fn_80296350: definicion C reemplazada por asm (ver abajo)


// fn_80296370: definicion C reemplazada por asm (ver abajo)


// fn_802963BC: definicion C reemplazada por asm (ver abajo)


// fn_802969EC: definicion C reemplazada por asm (ver abajo)


void fn_80296A74(void) {
    lbl_8049DE3C = 0;
    lbl_8049DE38 += 1;
}

u8 fn_80296A8C(M2C_UNK arg_sp0);

void fn_80296FBC(void);

// fn_802970D4: definicion C reemplazada por asm (ver abajo)


// fn_802970F4: definicion C reemplazada por asm (ver abajo)


// fn_80297140: definicion C reemplazada por asm (ver abajo)


// fn_80297204: definicion C reemplazada por asm (ver abajo)


// fn_80297224: definicion C reemplazada por asm (ver abajo)


// fn_802975B8: definicion C reemplazada por asm (ver abajo)


// fn_802976D4: definicion C reemplazada por asm (ver abajo)


void fn_80297720(void) {
    fn_802A45F4();
}

// fn_80297724: definicion C reemplazada por asm (ver abajo)


// fn_80297944: definicion C reemplazada por asm (ver abajo)


// fn_80297980: definicion C reemplazada por asm (ver abajo)



// fn_80297A34: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_80410B60[];
extern void BTA_DisableBluetooth();
extern void BTA_DmSearch();
extern void BTA_DmSearchCancel();
extern void BTA_DmSetVisibility();
extern void BTA_HhOpen();
extern void OSCancelAlarm();
extern void OSCreateAlarm();
extern void OSPanic();
extern void SCGetBtCmpDevInfoArray();
extern void SCGetBtDeviceInfoArray();
extern void SCInit();
extern void _restgpr_14();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void bta_sys_set_trace_level();
void fn_8029419C();
s32 fn_802941C8();
s32 fn_80294294();
void fn_80294360(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 fn_802943B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80294408(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80294458(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
u8 fn_802944D0(M2C_UNK arg_sp0);
u8 fn_80294630(M2C_UNK arg_sp0);
u8 fn_802947A0();
u8 fn_80294B18(M2C_UNK arg_sp0);
void fn_80294C4C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80294CC8(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80294D4C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80294DC8(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
u8 fn_80294E1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80294F8C();
void fn_80295A6C(void);
void fn_80295A8C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
u8 fn_80295AE4(void);
u8 fn_80295B7C(void);
void fn_80295D80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_802960D0(void);
u8 fn_802960F0(M2C_UNK arg_sp0);
void fn_80296204();
void fn_80296350(void);
void fn_80296370(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_802963BC(M2C_UNK arg_sp0);
void fn_802969EC(u32 *arg0);
u8 fn_80296A8C();
void fn_80296FBC();
void fn_802970D4(void);
void fn_802970F4(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80297140(void);
void fn_80297204(void);
void fn_80297224(M2C_UNK arg_sp0);
s32 fn_802975B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_802976D4(s32 arg0, s32 arg1);
void fn_80297724(s32 arg0, M2C_UNK arg_sp0);
s8 fn_80297944(void);
u8 fn_80297980(void);
void fn_802979C8();
s32 fn_80297A34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern void fn_80298488();
extern void fn_80298584();
extern void fn_80298714();
extern void fn_80298868();
extern void fn_80298AC0();
extern void fn_80298BD8();
extern void fn_80298E48();
extern void fn_80298F60();
extern void fn_80299200();
extern void fn_80299994();
extern void fn_80299E98();
extern void fn_8029ABCC();

// asm_to_cpp: fn_8029419C
asm void fn_8029419C() {
    nofralloc
    lis r4, lbl_8040C450@ha
    slwi r3, r3, 2
    addi r4, r4, lbl_8040C450@l
    li r0, 0x0
    lwzx r3, r4, r3
    stw r0, 0x998(r3)
    stw r0, 0x99c(r3)
    sth r0, 0x9a0(r3)
    stw r0, 0x9a4(r3)
    stw r0, 0x9a8(r3)
    blr
}

// asm_to_cpp: fn_802941C8
asm s32 fn_802941C8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r8, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r8, r8, lbl_8040C450@l
    mr r24, r3
    lwzx r31, r8, r0
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    bl OSDisableInterrupts
    lwz r29, 0x8bc(r31)
    lwz r30, 0x8dc(r31)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_80294254
    cmpwi r30, 0x0
    bne lbl_80294228
    li r29, -0x2
    b lbl_80294254
lbl_80294228:
    mr r4, r25
    mr r5, r26
    mr r7, r28
    addi r3, r31, 0x160
    oris r6, r27, 0x4a4
    bl fn_8028EA94
    neg r4, r3
    li r0, -0x2
    or r3, r4, r3
    srawi r3, r3, 31
    andc r29, r0, r3
lbl_80294254:
    cmpwi r29, 0x0
    beq lbl_80294278
    cmpwi r28, 0x0
    beq lbl_80294278
    mr r12, r28
    mr r3, r24
    mr r4, r29
    mtctr r12
    bctrl
lbl_80294278:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80294294
asm s32 fn_80294294() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r8, lbl_8040C450@ha
    slwi r0, r3, 2
    addi r8, r8, lbl_8040C450@l
    mr r24, r3
    lwzx r31, r8, r0
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    bl OSDisableInterrupts
    lwz r29, 0x8bc(r31)
    lwz r30, 0x8dc(r31)
    bl OSRestoreInterrupts
    cmpwi r29, -0x1
    beq lbl_80294320
    cmpwi r30, 0x0
    bne lbl_802942F4
    li r29, -0x2
    b lbl_80294320
lbl_802942F4:
    mr r4, r25
    mr r5, r26
    mr r7, r28
    addi r3, r31, 0x160
    oris r6, r27, 0x4a4
    bl fn_8028EC4C
    neg r4, r3
    li r0, -0x2
    or r3, r4, r3
    srawi r3, r3, 31
    andc r29, r0, r3
lbl_80294320:
    cmpwi r29, 0x0
    beq lbl_80294344
    cmpwi r28, 0x0
    beq lbl_80294344
    mr r12, r28
    mr r3, r24
    mr r4, r29
    mtctr r12
    bctrl
lbl_80294344:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80294360
asm void fn_80294360(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7) {
    nofralloc
    stwu r1, -0x70(r1)
    bne cr1, lbl_80294388
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80294388:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_802943B8
asm s32 fn_802943B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8036E09C@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r4, lbl_8036E09C@l
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r4, lbl_8040FC00@ha
    mr r3, r31
    addi r4, r4, lbl_8040FC00@l
    lwz r12, 0x6f4(r4)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80294408
asm void fn_80294408(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8036E0AC@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r4, lbl_8036E0AC@l
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r4, lbl_8040FC00@ha
    mr r3, r31
    addi r4, r4, lbl_8040FC00@l
    lwz r12, 0x6f8(r4)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80294458
asm void fn_80294458(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    stw r30, 0x8(r1)
    mr r30, r3
    lis r3, lbl_8036E0BC@ha
    lbz r5, 0xc(r31)
    mr r4, r30
    addi r3, r3, lbl_8036E0BC@l
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_802944B8
    cmpwi r30, 0x0
    bne lbl_802944B0
    li r0, 0x17
    stb r0, 0xc(r31)
    b lbl_802944B8
lbl_802944B0:
    li r0, 0xff
    stb r0, 0xc(r31)
lbl_802944B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802944D0
asm u8 fn_802944D0(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0x6eb(r31)
    stb r0, 0x6ea(r31)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x0
    bl BTA_DmSetVisibility
    lbz r0, 0x6e8(r31)
    extsb. r0, r0
    bne lbl_80294520
    li r3, 0xe
    b lbl_80294618
lbl_80294520:
    bl OSDisableInterrupts
    lbz r30, 0x6e5(r31)
    bl OSRestoreInterrupts
    cmplwi r30, 0x4
    bne lbl_80294550
    bl OSDisableInterrupts
    lbz r30, 0x6e4(r31)
    bl OSRestoreInterrupts
    cmplwi r30, 0x4
    bne lbl_80294550
    li r3, 0xe
    b lbl_80294618
lbl_80294550:
    lbz r0, 0x6e7(r31)
    cmpwi r0, 0x0
    beq lbl_802945F8
    lis r29, lbl_8040FC00@ha
    li r27, 0x0
    addi r29, r29, lbl_8040FC00@l
    li r28, 0x0
lbl_8029456C:
    bl OSDisableInterrupts
    cmpwi r27, 0x0
    blt lbl_8029458C
    cmpwi r27, 0xa
    bge lbl_8029458C
    add r4, r29, r28
    addi r30, r4, 0xe4
    b lbl_8029459C
lbl_8029458C:
    subi r0, r27, 0xa
    mulli r0, r0, 0x60
    add r4, r29, r0
    addi r30, r4, 0x4a4
lbl_8029459C:
    bl OSRestoreInterrupts
    lbz r0, 0x59(r30)
    cmplwi r0, 0x9
    bne lbl_802945E8
    lis r3, lbl_8040FC00@ha
    li r6, 0x0
    addi r3, r3, lbl_8040FC00@l
    li r0, 0x1
    stb r6, 0x10(r1)
    addi r4, r30, 0x40
    lbz r3, 0x70a(r3)
    addi r5, r1, 0x8
    sth r6, 0x8(r1)
    sth r6, 0xa(r1)
    sth r0, 0xc(r1)
    sth r6, 0xe(r1)
    bl BTM_SetPowerMode
    li r3, 0x1
    b lbl_80294618
lbl_802945E8:
    addi r27, r27, 0x1
    addi r28, r28, 0x60
    cmpwi r27, 0x10
    blt lbl_8029456C
lbl_802945F8:
    lbz r3, 0x6e8(r31)
    extsb. r0, r3
    ble lbl_8029460C
    subi r0, r3, 0x1
    stb r0, 0x6e8(r31)
lbl_8029460C:
    li r0, 0x32
    li r3, 0x1d
    sth r0, 0x748(r31)
lbl_80294618:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80294630
asm u8 fn_80294630(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_8040FC00@ha
    lis r30, lbl_8036DE80@ha
    addi r31, r31, lbl_8040FC00@l
    li r25, 0xff
    addi r30, r30, lbl_8036DE80@l
    li r5, 0x10
    addi r3, r31, 0x750
    addi r3, r3, 0x6
    addi r4, r30, 0x268
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80294694
    addi r3, r31, 0x858
    li r0, 0x2
    stb r0, 0x59(r3)
    addi r3, r3, 0x40
    li r4, 0x0
    li r5, 0x12
    bl BTA_HhOpen
    li r25, 0x6
lbl_80294694:
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80294784
    addi r3, r31, 0x750
    addi r4, r30, 0x27c
    addi r3, r3, 0x6
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80294784
    li r27, 0x0
    bl OSDisableInterrupts
    addi r4, r31, 0x0
    mr r29, r3
    lwz r28, 0x64(r4)
    b lbl_802946F8
lbl_802946D4:
    lwz r26, 0x0(r28)
    addi r4, r30, 0x27c
    li r5, 0x10
    mr r3, r26
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802946F4
    mr r27, r26
lbl_802946F4:
    lwz r28, 0x8(r28)
lbl_802946F8:
    cmpwi r28, 0x0
    bne lbl_802946D4
    mr r3, r29
    bl OSRestoreInterrupts
    cmpwi r27, 0x0
    beq lbl_80294764
    addi r3, r30, 0x290
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x59(r27)
    cmplwi r0, 0x1
    ble lbl_80294730
    mr r3, r25
    b lbl_80294788
lbl_80294730:
    addi r3, r31, 0x750
    addi r4, r27, 0x40
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80294764
    addi r3, r30, 0x2b8
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r27
    bl fn_80298F60
    addi r3, r27, 0x40
    bl fn_80298868
lbl_80294764:
    addi r3, r31, 0x858
    li r0, 0x2
    stb r0, 0x59(r3)
    addi r3, r3, 0x40
    li r4, 0x0
    li r5, 0x12
    bl BTA_HhOpen
    li r25, 0x6
lbl_80294784:
    mr r3, r25
lbl_80294788:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802947A0
asm u8 fn_802947A0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, lbl_8049CED0
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    lis r29, lbl_8036DE80@ha
    cmpwi r0, 0x0
    addi r29, r29, lbl_8036DE80@l
    addi r26, r31, 0x0
    beq lbl_8029486C
    addi r3, r31, 0x858
    addi r4, r29, 0x268
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029486C
    li r27, 0x0
    bl OSDisableInterrupts
    lwz r28, 0x64(r26)
    mr r30, r3
    b lbl_80294820
lbl_80294800:
    lwz r3, 0x0(r28)
    addi r4, r29, 0x27c
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029481C
    lwz r27, 0x0(r28)
lbl_8029481C:
    lwz r28, 0x8(r28)
lbl_80294820:
    cmpwi r28, 0x0
    bne lbl_80294800
    mr r3, r30
    bl OSRestoreInterrupts
    cmpwi r27, 0x0
    beq lbl_8029486C
    addi r27, r31, 0x0
    bl OSDisableInterrupts
    lbz r27, 0x12(r27)
    bl OSRestoreInterrupts
    cmplwi r27, 0xa
    bne lbl_8029486C
    lwz r3, 0x68(r26)
    lwz r3, 0x4(r3)
    lwz r30, 0x0(r3)
    mr r3, r30
    bl fn_80298F60
    addi r3, r30, 0x40
    bl fn_80298868
lbl_8029486C:
    addi r28, r31, 0x0
    bl OSDisableInterrupts
    lbz r27, 0x12(r28)
    bl OSRestoreInterrupts
    cmplwi r27, 0xa
    bne lbl_80294894
    lwz r3, 0x68(r28)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80298868
lbl_80294894:
    addi r26, r31, 0x0
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r26)
    mr r28, r3
    cmpwi r0, 0x0
    bne lbl_80294900
    li r0, 0xa
    li r30, 0x0
    li r27, 0x0
    li r3, 0x0
    mtctr r0
lbl_802948C0:
    add r4, r26, r3
    lbz r0, 0x13d(r4)
    cmpwi r0, 0x0
    bne lbl_802948F0
    mr r4, r27
    addi r3, r29, 0x2cc
    opword 0x4CC63182
    bl fn_8029ABCC
    mulli r0, r27, 0x60
    add r3, r26, r0
    addi r30, r3, 0xe4
    b lbl_80294908
lbl_802948F0:
    addi r27, r27, 0x1
    addi r3, r3, 0x60
    bdnz lbl_802948C0
    b lbl_80294908
lbl_80294900:
    lwz r3, 0x18(r26)
    lwz r30, 0x0(r3)
lbl_80294908:
    mr r3, r28
    bl OSRestoreInterrupts
    cmpwi r30, 0x0
    bne lbl_80294920
    li r3, 0xff
    b lbl_80294B00
lbl_80294920:
    lbz r0, 0x59(r30)
    cmpwi r0, 0x0
    beq lbl_80294934
    li r3, 0xff
    b lbl_80294B00
lbl_80294934:
    mr r3, r30
    addi r4, r31, 0x858
    li r5, 0x60
    bl memcpy
    addi r3, r30, 0x40
    bl fn_80298714
    mr r3, r30
    bl fn_80298E48
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80294AE8
    mr r3, r30
    addi r4, r29, 0x27c
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80294AE8
    mr r3, r30
    bl fn_80299200
    addi r29, r31, 0x8b8
    li r4, 0x0
    addi r3, r29, 0x3d5
    li r5, 0x46
    bl memset
    addi r3, r29, 0x3d5
    addi r4, r30, 0x40
    li r5, 0x6
    bl memcpy
    mr r4, r30
    addi r3, r29, 0x3db
    li r5, 0x40
    bl memcpy
    addi r3, r29, 0x3ef
    addi r4, r30, 0x46
    li r5, 0x10
    bl memcpy
    addic. r4, r30, 0x40
    beq lbl_802949D8
    addi r3, r31, 0xd20
    li r5, 0x6
    bl memcpy
lbl_802949D8:
    addic. r4, r30, 0x46
    beq lbl_802949F0
    addi r3, r31, 0xd20
    li r5, 0x10
    addi r3, r3, 0x6
    bl memcpy
lbl_802949F0:
    cmpwi r30, 0x0
    beq lbl_80294A0C
    addi r3, r31, 0xd20
    mr r4, r30
    addi r3, r3, 0x16
    li r5, 0x40
    bl memcpy
lbl_80294A0C:
    lwz r3, lbl_8049DE34
    li r0, 0x8
    addi r4, r31, 0xd20
    srwi r5, r3, 16
    clrlwi r6, r3, 16
    mtctr r0
lbl_80294A24:
    lhz r3, 0x0(r4)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x8(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xa(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xc(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xe(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    addi r4, r4, 0x10
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r6, r0
    clrlwi r6, r0, 16
    bdnz lbl_80294A24
    rlwimi r6, r5, 16, 0, 15
    addi r3, r31, 0xd20
    stw r6, 0x8(r1)
    addi r4, r1, 0x8
    addi r3, r3, 0x80
    li r5, 0x4
    bl memcpy
lbl_80294AE8:
    lbz r0, 0x56(r30)
    addi r5, r30, 0x40
    addi r4, r31, 0xdc0
    li r3, 0x7
    slwi r0, r0, 2
    stwx r5, r4, r0
lbl_80294B00:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80294B18
asm u8 fn_80294B18(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r29, lbl_8040FC00@ha
    addi r29, r29, lbl_8040FC00@l
    bl SCCheckStatus
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_80294B50
    li r3, 0x16
    b lbl_80294C34
lbl_80294B50:
    addi r30, r29, 0x8b8
    li r4, 0x0
    addi r3, r30, 0x1
    li r5, 0x2bc
    bl memset
    bl OSDisableInterrupts
    addi r31, r29, 0x0
    lbz r28, 0x12(r31)
    bl OSRestoreInterrupts
    stb r28, 0x8b8(r29)
    li r27, 0x0
    lwz r31, 0x64(r31)
    b lbl_80294BC0
lbl_80294B84:
    clrlwi r0, r27, 24
    lwz r3, 0x0(r31)
    mulli r28, r0, 0x46
    li r5, 0x6
    addi r4, r3, 0x40
    add r3, r30, r28
    addi r3, r3, 0x1
    bl memcpy
    add r3, r30, r28
    lwz r4, 0x0(r31)
    addi r3, r3, 0x7
    li r5, 0x40
    bl memcpy
    lwz r31, 0x8(r31)
    addi r27, r27, 0x1
lbl_80294BC0:
    cmpwi r31, 0x0
    bne lbl_80294B84
    lis r3, lbl_8036E164@ha
    clrlwi r4, r27, 24
    addi r3, r3, lbl_8036E164@l
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r3, r29, 0x8b8
    bl SCSetBtDeviceInfoArray
    cmpwi r3, 0x0
    bne lbl_80294BF4
    li r3, 0x16
    b lbl_80294C34
lbl_80294BF4:
    lwz r0, lbl_8049CED0
    li r28, 0x19
    cmpwi r0, 0x0
    beq lbl_80294C30
    lis r4, lbl_8036E0FC@ha
    addi r3, r29, 0x858
    addi r4, r4, lbl_8036E0FC@l
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80294C30
    bl fn_803249E8
    extsb. r0, r3
    bne lbl_80294C30
    li r28, 0x64
lbl_80294C30:
    mr r3, r28
lbl_80294C34:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80294C4C
asm void fn_80294C4C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    lis r5, lbl_8040FC00@ha
    mr r4, r3
    addi r5, r5, lbl_8040FC00@l
    lbz r0, 0xc(r5)
    cmpwi r0, 0x0
    beq lbl_80294C80
    cmpwi r3, 0x0
    li r0, 0x19
    bne lbl_80294C74
    li r0, 0x65
lbl_80294C74:
    lis r5, lbl_8040FC00@ha
    addi r5, r5, lbl_8040FC00@l
    stb r0, 0xc(r5)
lbl_80294C80:
    lis r5, lbl_8040FC00@ha
    addi r5, r5, lbl_8040FC00@l
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    beq lbl_80294CB0
    cmpwi r3, 0x0
    li r0, 0x5
    bne lbl_80294CA4
    li r0, 0x65
lbl_80294CA4:
    lis r3, lbl_8040FC00@ha
    addi r3, r3, lbl_8040FC00@l
    stb r0, 0xd(r3)
lbl_80294CB0:
    li r0, 0x0
    lis r3, lbl_8036E188@ha
    stb r0, lbl_8049DE3C
    addi r3, r3, lbl_8036E188@l
    opword 0x4CC63182
    b fn_8029ABCC
}

// asm_to_cpp: fn_80294CC8
asm void fn_80294CC8(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    lis r5, lbl_8040FC00@ha
    mr r4, r3
    addi r5, r5, lbl_8040FC00@l
    lbz r0, 0xc(r5)
    cmpwi r0, 0x0
    beq lbl_80294D00
    subis r0, r3, 0x4
    li r6, 0x19
    cmplwi r0, 0xaf18
    bne lbl_80294CF4
    li r6, 0x66
lbl_80294CF4:
    lis r5, lbl_8040FC00@ha
    addi r5, r5, lbl_8040FC00@l
    stb r6, 0xc(r5)
lbl_80294D00:
    lis r5, lbl_8040FC00@ha
    addi r5, r5, lbl_8040FC00@l
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    beq lbl_80294D34
    subis r0, r3, 0x4
    li r5, 0x5
    cmplwi r0, 0xaf18
    bne lbl_80294D28
    li r5, 0x66
lbl_80294D28:
    lis r3, lbl_8040FC00@ha
    addi r3, r3, lbl_8040FC00@l
    stb r5, 0xd(r3)
lbl_80294D34:
    li r0, 0x0
    lis r3, lbl_8036E198@ha
    stb r0, lbl_8049DE3C
    addi r3, r3, lbl_8036E198@l
    opword 0x4CC63182
    b fn_8029ABCC
}

// asm_to_cpp: fn_80294D4C
asm void fn_80294D4C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    lis r5, lbl_8040FC00@ha
    mr r4, r3
    addi r5, r5, lbl_8040FC00@l
    lbz r0, 0xc(r5)
    cmpwi r0, 0x0
    beq lbl_80294D80
    cmpwi r3, 0x84
    li r0, 0x19
    bne lbl_80294D74
    li r0, 0x67
lbl_80294D74:
    lis r5, lbl_8040FC00@ha
    addi r5, r5, lbl_8040FC00@l
    stb r0, 0xc(r5)
lbl_80294D80:
    lis r5, lbl_8040FC00@ha
    addi r5, r5, lbl_8040FC00@l
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    beq lbl_80294DB0
    cmpwi r3, 0x84
    li r0, 0x5
    bne lbl_80294DA4
    li r0, 0x67
lbl_80294DA4:
    lis r3, lbl_8040FC00@ha
    addi r3, r3, lbl_8040FC00@l
    stb r0, 0xd(r3)
lbl_80294DB0:
    li r0, 0x0
    lis r3, lbl_8036E1A8@ha
    stb r0, lbl_8049DE3C
    addi r3, r3, lbl_8036E1A8@l
    opword 0x4CC63182
    b fn_8029ABCC
}

// asm_to_cpp: fn_80294DC8
asm void fn_80294DC8(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    lis r5, lbl_8040FC00@ha
    mr r4, r3
    addi r5, r5, lbl_8040FC00@l
    lbz r0, 0xc(r5)
    cmpwi r0, 0x0
    beq lbl_80294DE8
    li r0, 0x19
    stb r0, 0xc(r5)
lbl_80294DE8:
    lis r3, lbl_8040FC00@ha
    addi r3, r3, lbl_8040FC00@l
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    beq lbl_80294E04
    li r0, 0x5
    stb r0, 0xd(r3)
lbl_80294E04:
    li r0, 0x0
    lis r3, lbl_8036E1BC@ha
    stb r0, lbl_8049DE3C
    addi r3, r3, lbl_8036E1BC@l
    opword 0x4CC63182
    b fn_8029ABCC
}

// asm_to_cpp: fn_80294E1C
asm u8 fn_80294E1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_8040FC00@ha
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r3, lbl_8040FC00@l
    stw r28, 0x20(r1)
    lbz r0, 0x6e7(r29)
    cmpwi r0, 0x0
    beq lbl_80294EE8
    li r28, 0x0
    li r30, 0x0
lbl_80294E54:
    bl OSDisableInterrupts
    cmpwi r28, 0x0
    blt lbl_80294E74
    cmpwi r28, 0xa
    bge lbl_80294E74
    add r4, r29, r30
    addi r31, r4, 0xe4
    b lbl_80294E84
lbl_80294E74:
    subi r0, r28, 0xa
    mulli r0, r0, 0x60
    add r4, r29, r0
    addi r31, r4, 0x4a4
lbl_80294E84:
    bl OSRestoreInterrupts
    lbz r0, 0x59(r31)
    cmplwi r0, 0x8
    bne lbl_80294ED8
    lis r3, lbl_8040FC00@ha
    li r7, 0x8
    addi r3, r3, lbl_8040FC00@l
    li r4, 0x2
    li r6, 0x1
    li r0, 0x0
    stb r4, 0x10(r1)
    addi r4, r31, 0x40
    lbz r3, 0x70a(r3)
    addi r5, r1, 0x8
    sth r7, 0x8(r1)
    sth r7, 0xa(r1)
    sth r6, 0xc(r1)
    sth r0, 0xe(r1)
    bl BTM_SetPowerMode
    li r3, 0xe
    b lbl_80294F6C
lbl_80294ED8:
    addi r28, r28, 0x1
    addi r30, r30, 0x60
    cmpwi r28, 0x10
    blt lbl_80294E54
lbl_80294EE8:
    addi r3, r29, 0x710
    bl OSCancelAlarm
    lwz r0, lbl_8049DE28
    cmpwi r0, 0x0
    bne lbl_80294F28
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    li r5, 0x0
    addi r4, r4, lbl_8040FC00@l
    li r0, 0x1
    stb r5, 0x6eb(r4)
    stb r0, 0x6ea(r4)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x1
    bl BTA_DmSetVisibility
lbl_80294F28:
    lbz r0, 0x6e9(r29)
    cmpwi r0, 0x0
    bne lbl_80294F3C
    lwz r12, 0x0(r29)
    b lbl_80294F40
lbl_80294F3C:
    lwz r12, 0x4(r29)
lbl_80294F40:
    cmpwi r12, 0x0
    beq lbl_80294F58
    lbz r4, 0x6e6(r29)
    li r3, 0x1
    mtctr r12
    bctrl
lbl_80294F58:
    lis r3, lbl_8036E1D0@ha
    addi r3, r3, lbl_8036E1D0@l
    opword 0x4CC63182
    bl fn_8029ABCC
    li r3, 0x0
lbl_80294F6C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80294F8C
asm void fn_80294F8C() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lis r31, lbl_8040FC00@ha
    lis r30, lbl_8036DE80@ha
    addi r31, r31, lbl_8040FC00@l
    addi r28, r31, 0x0
    addi r30, r30, lbl_8036DE80@l
    lbz r0, 0xc(r28)
    cmpwi r0, 0x13
    beq lbl_80295490
    bge lbl_80295040
    cmpwi r0, 0x9
    beq lbl_80295A48
    bge lbl_8029500C
    cmpwi r0, 0x4
    beq lbl_802951EC
    bge lbl_80294FF4
    cmpwi r0, 0x2
    beq lbl_80295128
    bge lbl_80295808
    cmpwi r0, 0x1
    bge lbl_802950B0
    b lbl_80295A48
lbl_80294FF4:
    cmpwi r0, 0x7
    beq lbl_802955C4
    bge lbl_802956F4
    cmpwi r0, 0x6
    bge lbl_80295A54
    b lbl_802952D8
lbl_8029500C:
    cmpwi r0, 0xf
    beq lbl_80295414
    bge lbl_80295030
    cmpwi r0, 0xd
    beq lbl_80295A54
    bge lbl_802957FC
    cmpwi r0, 0xb
    bge lbl_80295A48
    b lbl_80295754
lbl_80295030:
    cmpwi r0, 0x11
    beq lbl_802953AC
    bge lbl_80295420
    b lbl_80295308
lbl_80295040:
    cmpwi r0, 0x1d
    beq lbl_802950BC
    bge lbl_80295080
    cmpwi r0, 0x18
    beq lbl_80295854
    bge lbl_80295070
    cmpwi r0, 0x16
    beq lbl_80295728
    bge lbl_80295790
    cmpwi r0, 0x15
    bge lbl_802955A0
    b lbl_80295594
lbl_80295070:
    cmpwi r0, 0x1a
    beq lbl_80295A54
    bge lbl_80295A48
    b lbl_80295734
lbl_80295080:
    cmpwi r0, 0x67
    beq lbl_80295A1C
    bge lbl_802950A4
    cmpwi r0, 0x65
    beq lbl_802958F0
    bge lbl_80295928
    cmpwi r0, 0x64
    bge lbl_802958A8
    b lbl_80295A48
lbl_802950A4:
    cmpwi r0, 0xff
    beq lbl_802957CC
    b lbl_80295A48
lbl_802950B0:
    bl fn_802944D0
    stb r3, 0xc(r28)
    b lbl_80295A54
lbl_802950BC:
    lbz r0, 0x6e8(r28)
    extsb. r0, r0
    bne lbl_802950D0
    li r0, 0xe
    b lbl_80295120
lbl_802950D0:
    bl OSDisableInterrupts
    lbz r29, 0x6e5(r28)
    bl OSRestoreInterrupts
    cmplwi r29, 0x4
    bne lbl_80295100
    bl OSDisableInterrupts
    lbz r29, 0x6e4(r28)
    bl OSRestoreInterrupts
    cmplwi r29, 0x4
    bne lbl_80295100
    li r0, 0xe
    b lbl_80295120
lbl_80295100:
    lha r3, 0x748(r28)
    subi r3, r3, 0x1
    extsh. r0, r3
    sth r3, 0x748(r28)
    bge lbl_8029511C
    li r0, 0x2
    b lbl_80295120
lbl_8029511C:
    li r0, 0x1d
lbl_80295120:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_80295128:
    lbz r0, 0x6e7(r28)
    li r4, 0x1
    li r3, 0x0
    stb r4, 0x30(r1)
    cmpwi r0, 0x0
    stb r4, 0x32(r1)
    stb r3, 0x33(r1)
    beq lbl_80295154
    li r0, 0x3
    stb r0, 0x31(r1)
    b lbl_802951B4
lbl_80295154:
    lbz r0, 0x6e9(r28)
    cmpwi r0, 0x0
    bne lbl_80295190
    bl OSDisableInterrupts
    lbz r29, 0x6e5(r28)
    bl OSRestoreInterrupts
    cmplwi r29, 0x3
    bne lbl_8029517C
    li r3, 0xa
    b lbl_80295180
lbl_8029517C:
    li r3, 0x5
lbl_80295180:
    lbz r0, 0x6e8(r28)
    subf r0, r0, r3
    stb r0, 0x31(r1)
    b lbl_802951B4
lbl_80295190:
    bl OSDisableInterrupts
    lbz r29, 0x6e5(r28)
    bl OSRestoreInterrupts
    cmplwi r29, 0x3
    bne lbl_802951AC
    li r0, 0x8
    b lbl_802951B0
lbl_802951AC:
    li r0, 0x3
lbl_802951B0:
    stb r0, 0x31(r1)
lbl_802951B4:
    li r0, 0x0
    addi r3, r31, 0x750
    stb r0, lbl_8049DE4F
    li r4, 0x0
    li r5, 0x108
    bl memset
    lis r5, fn_80299994@ha
    addi r3, r1, 0x30
    addi r5, r5, fn_80299994@l
    li r4, 0x0
    bl BTA_DmSearch
    li r0, 0x3
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_802951EC:
    lbz r0, lbl_8049DE4F
    li r29, 0x1
    cmpwi r0, 0x0
    beq lbl_80295268
    addi r3, r31, 0x750
    addi r4, r30, 0x268
    addi r3, r3, 0x6
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029521C
    li r29, 0x5
lbl_8029521C:
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80295248
    addi r3, r31, 0x750
    addi r4, r30, 0x27c
    addi r3, r3, 0x6
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80295248
    li r29, 0x5
lbl_80295248:
    addi r3, r31, 0x0
    lbz r4, lbl_8049DE4E
    lbz r0, 0x70b(r3)
    extsb r3, r4
    extsb r0, r0
    cmpw r3, r0
    bge lbl_80295268
    li r29, 0x1
lbl_80295268:
    addi r30, r31, 0x0
    lbz r0, 0x6e9(r30)
    cmpwi r0, 0x0
    bne lbl_802952D0
    cmplwi r29, 0x1
    bne lbl_802952D0
    li r29, 0x18
    bl OSDisableInterrupts
    lbz r30, 0x6e5(r30)
    bl OSRestoreInterrupts
    cmplwi r30, 0x3
    bne lbl_802952A0
    li r0, 0xc8
    b lbl_802952A4
lbl_802952A0:
    li r0, 0x64
lbl_802952A4:
    addi r30, r31, 0x0
    sth r0, 0x74a(r30)
    bl OSDisableInterrupts
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x6eb(r30)
    stb r0, 0x6ea(r30)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x1
    bl BTA_DmSetVisibility
lbl_802952D0:
    stb r29, 0xc(r28)
    b lbl_80295A54
lbl_802952D8:
    addi r3, r31, 0x750
    li r29, 0x11
    bl fn_802989E8
    cmpwi r3, 0x0
    beq lbl_80295300
    mr r4, r3
    addi r3, r31, 0x858
    li r5, 0x60
    bl memcpy
    li r29, 0x10
lbl_80295300:
    stb r29, 0xc(r28)
    b lbl_80295A54
lbl_80295308:
    addi r29, r31, 0x858
    li r3, 0x1
    lbz r0, 0x5b(r29)
    stb r3, 0x59(r29)
    cmpwi r0, 0x2
    beq lbl_80295348
    bge lbl_80295334
    cmpwi r0, 0x0
    beq lbl_80295348
    bge lbl_8029537C
    b lbl_802953A0
lbl_80295334:
    cmpwi r0, 0x6
    bge lbl_802953A0
    cmpwi r0, 0x4
    bge lbl_80295348
    b lbl_8029537C
lbl_80295348:
    addi r3, r31, 0x0
    lbz r0, 0x6e9(r3)
    cmpwi r0, 0x0
    bne lbl_80295370
    mr r3, r29
    bl fn_80298F60
    addi r3, r29, 0x40
    bl fn_80298868
    li r0, 0x11
    b lbl_802953A4
lbl_80295370:
    li r0, 0x4
    stb r0, 0x5b(r29)
    b lbl_802953A0
lbl_8029537C:
    mr r3, r29
    bl fn_80298BD8
    addi r3, r31, 0x0
    lwz r3, 0x18(r3)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80298868
    li r0, 0x11
    b lbl_802953A4
lbl_802953A0:
    li r0, 0xf
lbl_802953A4:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_802953AC:
    lbz r0, 0x6e9(r28)
    addi r29, r31, 0x858
    li r3, 0x1
    cmpwi r0, 0x0
    stb r3, 0x59(r29)
    bne lbl_802953CC
    li r0, 0x0
    b lbl_802953D0
lbl_802953CC:
    li r0, 0x1
lbl_802953D0:
    stb r0, 0x5b(r29)
    addi r3, r29, 0x40
    addi r4, r31, 0x750
    li r5, 0x6
    bl memcpy
    addi r4, r31, 0x750
    mr r3, r29
    addi r4, r4, 0x6
    li r5, 0x40
    bl memcpy
    addi r3, r29, 0x46
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r0, 0xf
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_80295414:
    bl fn_80294630
    stb r3, 0xc(r28)
    b lbl_80295A54
lbl_80295420:
    addi r3, r31, 0x858
    lbz r0, 0x5b(r3)
    cmpwi r0, 0x3
    beq lbl_80295474
    bge lbl_8029544C
    cmpwi r0, 0x1
    beq lbl_8029545C
    bge lbl_80295484
    cmpwi r0, 0x0
    bge lbl_80295464
    b lbl_80295488
lbl_8029544C:
    cmpwi r0, 0x5
    beq lbl_8029546C
    bge lbl_80295488
    b lbl_8029547C
lbl_8029545C:
    li r0, 0x13
    b lbl_80295488
lbl_80295464:
    li r0, 0x14
    b lbl_80295488
lbl_8029546C:
    li r0, 0x15
    b lbl_80295488
lbl_80295474:
    li r0, 0x17
    b lbl_80295488
lbl_8029547C:
    li r0, 0x7
    b lbl_80295488
lbl_80295484:
    li r0, 0x7
lbl_80295488:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_80295490:
    bl OSDisableInterrupts
    lbz r25, 0x13(r28)
    bl OSRestoreInterrupts
    cmplwi r25, 0x6
    bne lbl_802954B4
    lwz r3, 0x18(r28)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80298868
lbl_802954B4:
    addi r29, r31, 0x0
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r29)
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_80295520
    li r0, 0xa
    li r25, 0x0
    li r26, 0x0
    li r3, 0x0
    mtctr r0
lbl_802954E0:
    add r4, r29, r3
    lbz r0, 0x13d(r4)
    cmpwi r0, 0x0
    bne lbl_80295510
    mr r4, r26
    addi r3, r30, 0x2cc
    opword 0x4CC63182
    bl fn_8029ABCC
    mulli r0, r26, 0x60
    add r3, r29, r0
    addi r25, r3, 0xe4
    b lbl_80295528
lbl_80295510:
    addi r26, r26, 0x1
    addi r3, r3, 0x60
    bdnz lbl_802954E0
    b lbl_80295528
lbl_80295520:
    lwz r3, 0x18(r29)
    lwz r25, 0x0(r3)
lbl_80295528:
    mr r3, r27
    bl OSRestoreInterrupts
    cmpwi r25, 0x0
    bne lbl_80295540
    li r5, 0xff
    b lbl_8029558C
lbl_80295540:
    lbz r0, 0x59(r25)
    cmpwi r0, 0x0
    beq lbl_80295554
    li r5, 0xff
    b lbl_8029558C
lbl_80295554:
    mr r3, r25
    addi r4, r31, 0x858
    li r5, 0x60
    bl memcpy
    addi r3, r25, 0x40
    bl fn_80298714
    mr r3, r25
    bl fn_80298AC0
    lbz r0, 0x56(r25)
    addi r4, r25, 0x40
    addi r3, r31, 0xdc0
    li r5, 0x17
    slwi r0, r0, 2
    stwx r4, r3, r0
lbl_8029558C:
    stb r5, 0xc(r28)
    b lbl_80295A54
lbl_80295594:
    bl fn_802947A0
    stb r3, 0xc(r28)
    b lbl_80295A54
lbl_802955A0:
    addi r3, r31, 0x858
    bl fn_80298BD8
    lwz r3, 0x18(r28)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80298868
    bl fn_802947A0
    stb r3, 0xc(r28)
    b lbl_80295A54
lbl_802955C4:
    lbz r0, 0xe(r28)
    cmpwi r0, 0x0
    beq lbl_802955D8
    li r0, 0x1
    b lbl_802955DC
lbl_802955D8:
    li r0, 0x0
lbl_802955DC:
    cmpwi r0, 0x0
    beq lbl_802955EC
    li r0, 0x7
    b lbl_802956EC
lbl_802955EC:
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80295618
    addi r3, r31, 0x858
    addi r4, r30, 0x27c
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80295618
    li r0, 0x16
    b lbl_802956EC
lbl_80295618:
    addi r3, r31, 0x858
    addi r3, r3, 0x40
    bl fn_802989E8
    mr r29, r3
    addi r3, r30, 0x360
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x40(r29)
    addi r3, r30, 0x378
    lbz r5, 0x41(r29)
    lbz r6, 0x42(r29)
    lbz r7, 0x43(r29)
    lbz r8, 0x44(r29)
    lbz r9, 0x45(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x4d(r29)
    addi r3, r30, 0x3a0
    stw r0, 0x8(r1)
    lbz r0, 0x4e(r29)
    stw r0, 0xc(r1)
    lbz r0, 0x4f(r29)
    stw r0, 0x10(r1)
    lbz r0, 0x50(r29)
    stw r0, 0x14(r1)
    lbz r0, 0x51(r29)
    stw r0, 0x18(r1)
    lbz r0, 0x52(r29)
    stw r0, 0x1c(r1)
    lbz r0, 0x53(r29)
    stw r0, 0x20(r1)
    lbz r0, 0x54(r29)
    stw r0, 0x24(r1)
    lbz r0, 0x55(r29)
    stw r0, 0x28(r1)
    lbz r4, 0x46(r29)
    lbz r5, 0x47(r29)
    lbz r6, 0x48(r29)
    lbz r7, 0x49(r29)
    lbz r8, 0x4a(r29)
    lbz r9, 0x4b(r29)
    lbz r10, 0x4c(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x2
    lis r6, fn_80299E98@ha
    stb r0, 0xe(r28)
    addi r4, r29, 0x40
    addi r5, r29, 0x46
    addi r6, r6, fn_80299E98@l
    li r3, 0x1
    bl BTM_WriteStoredLinkKey
    li r0, 0x8
lbl_802956EC:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_802956F4:
    lbz r0, 0xe(r28)
    cmpwi r0, 0x0
    beq lbl_80295708
    li r0, 0x1
    b lbl_8029570C
lbl_80295708:
    li r0, 0x0
lbl_8029570C:
    cmpwi r0, 0x0
    bne lbl_8029571C
    li r0, 0x16
    b lbl_80295720
lbl_8029571C:
    li r0, 0x8
lbl_80295720:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_80295728:
    bl fn_80294B18
    stb r3, 0xc(r28)
    b lbl_80295A54
lbl_80295734:
    bl OSDisableInterrupts
    li r0, 0xd
    stb r0, 0xc(r28)
    bl OSRestoreInterrupts
    lis r3, fn_80294458@ha
    addi r3, r3, fn_80294458@l
    bl SCFlushAsync
    b lbl_80295A54
lbl_80295754:
    lbz r0, 0xe(r28)
    li r25, 0xa
    cmpwi r0, 0x0
    beq lbl_8029576C
    li r0, 0x1
    b lbl_80295770
lbl_8029576C:
    li r0, 0x0
lbl_80295770:
    cmpwi r0, 0x0
    bne lbl_80295788
    addi r3, r31, 0x0
    li r25, 0x14
    addi r3, r3, 0x6fc
    bl fn_80298868
lbl_80295788:
    stb r25, 0xc(r28)
    b lbl_80295A54
lbl_80295790:
    lbz r6, 0x6e6(r28)
    addi r3, r31, 0x858
    li r4, 0x0
    li r5, 0x60
    addi r0, r6, 0x1
    stb r0, 0x6e6(r28)
    bl memset
    lbz r0, 0x6e9(r28)
    cmpwi r0, 0x0
    bne lbl_802957C0
    li r0, 0xe
    b lbl_802957C4
lbl_802957C0:
    li r0, 0x1
lbl_802957C4:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_802957CC:
    addi r3, r31, 0x858
    li r4, 0x0
    li r5, 0x60
    bl memset
    lbz r0, 0x6e9(r28)
    cmpwi r0, 0x0
    bne lbl_802957F0
    li r0, 0xe
    b lbl_802957F4
lbl_802957F0:
    li r0, 0x1
lbl_802957F4:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_802957FC:
    bl fn_80294E1C
    stb r3, 0xc(r28)
    b lbl_80295A54
lbl_80295808:
    bl OSDisableInterrupts
    lbz r25, 0x6e5(r28)
    bl OSRestoreInterrupts
    cmplwi r25, 0x4
    bne lbl_80295848
    bl OSDisableInterrupts
    lbz r25, 0x6e4(r28)
    bl OSRestoreInterrupts
    cmplwi r25, 0x4
    bne lbl_80295848
    addi r3, r30, 0x3f8
    opword 0x4CC63182
    bl fn_8029ABCC
    bl BTA_DmSearchCancel
    li r0, 0x1a
    b lbl_8029584C
lbl_80295848:
    li r0, 0x3
lbl_8029584C:
    stb r0, 0xc(r28)
    b lbl_80295A54
lbl_80295854:
    li r26, 0x18
    bl OSDisableInterrupts
    lbz r25, 0x6e5(r28)
    bl OSRestoreInterrupts
    cmplwi r25, 0x4
    bne lbl_80295884
    bl OSDisableInterrupts
    lbz r25, 0x6e4(r28)
    bl OSRestoreInterrupts
    cmplwi r25, 0x4
    bne lbl_80295884
    li r26, 0xe
lbl_80295884:
    addi r4, r31, 0x0
    lha r3, 0x74a(r4)
    subi r3, r3, 0x1
    extsh. r0, r3
    sth r3, 0x74a(r4)
    bge lbl_802958A0
    li r26, 0x1
lbl_802958A0:
    stb r26, 0xc(r28)
    b lbl_80295A54
lbl_802958A8:
    lbz r0, lbl_8049DE3C
    addi r25, r30, 0x428
    cmpwi r0, 0x0
    bne lbl_80295A54
    mr r4, r25
    addi r3, r30, 0x454
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x1
    lis r6, fn_80294C4C@ha
    stb r0, lbl_8049DE3C
    mr r3, r25
    addi r4, r31, 0xe00
    addi r6, r6, fn_80294C4C@l
    addi r7, r31, 0xe8c
    li r5, 0x2
    bl NANDOpenAsync
    b lbl_80295A54
lbl_802958F0:
    lbz r0, lbl_8049DE3C
    cmpwi r0, 0x0
    bne lbl_80295A54
    li r0, 0x1
    lis r4, 0x5
    lis r6, fn_80294CC8@ha
    stb r0, lbl_8049DE3C
    addi r3, r31, 0xe00
    subi r4, r4, 0x50e8
    addi r6, r6, fn_80294CC8@l
    addi r7, r31, 0xe8c
    li r5, 0x0
    bl NANDSeekAsync
    b lbl_80295A54
lbl_80295928:
    lbz r0, lbl_8049DE3C
    cmpwi r0, 0x0
    bne lbl_80295A54
    addi r3, r30, 0x468
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r28, r31, 0xd20
    lbz r4, 0xd20(r31)
    lbz r5, 0x1(r28)
    addi r3, r30, 0x478
    lbz r6, 0x2(r28)
    lbz r7, 0x3(r28)
    lbz r8, 0x4(r28)
    lbz r9, 0x5(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0xd(r28)
    addi r3, r30, 0x498
    stw r0, 0x8(r1)
    lbz r4, 0x6(r28)
    lbz r5, 0x7(r28)
    lbz r6, 0x8(r28)
    lbz r7, 0x9(r28)
    lbz r8, 0xa(r28)
    lbz r9, 0xb(r28)
    lbz r10, 0xc(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x15(r28)
    addi r3, r30, 0x498
    stw r0, 0x8(r1)
    lbz r4, 0xe(r28)
    lbz r5, 0xf(r28)
    lbz r6, 0x10(r28)
    lbz r7, 0x11(r28)
    lbz r8, 0x12(r28)
    lbz r9, 0x13(r28)
    lbz r10, 0x14(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r4, r28, 0x16
    la r3, lbl_8049CF08
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x80(r28)
    addi r3, r30, 0x4c4
    lbz r5, 0x81(r28)
    lbz r6, 0x82(r28)
    lbz r7, 0x83(r28)
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x1
    lis r6, fn_80294D4C@ha
    stb r0, lbl_8049DE3C
    mr r4, r28
    addi r3, r31, 0xe00
    addi r6, r6, fn_80294D4C@l
    addi r7, r31, 0xe8c
    li r5, 0x84
    bl NANDWriteAsync
    b lbl_80295A54
lbl_80295A1C:
    lbz r0, lbl_8049DE3C
    cmpwi r0, 0x0
    bne lbl_80295A54
    li r0, 0x1
    lis r4, fn_80294DC8@ha
    stb r0, lbl_8049DE3C
    addi r3, r31, 0xe00
    addi r4, r4, fn_80294DC8@l
    addi r5, r31, 0xe8c
    bl NANDCloseAsync
    b lbl_80295A54
lbl_80295A48:
    addi r3, r30, 0x4d8
    opword 0x4CC63182
    bl fn_8029ABCC
lbl_80295A54:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80295A6C
asm void fn_80295A6C(void) {
    nofralloc
    lis r8, lbl_80410B60@ha
    lis r7, fn_80294F8C@ha
    addi r8, r8, lbl_80410B60@l
    li r5, 0x0
    addi r7, r7, fn_80294F8C@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b OSSwitchFiberEx
}

// asm_to_cpp: fn_80295A8C
asm void fn_80295A8C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8036E374@ha
    mr r4, r3
    stw r0, 0x14(r1)
    addi r3, r6, lbl_8036E374@l
    stw r31, 0xc(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    lbz r5, 0xd(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    beq lbl_80295AD0
    li r0, 0x8
    stb r0, 0xd(r31)
lbl_80295AD0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80295AE4
asm u8 fn_80295AE4(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_8040FC00@ha
    addi r29, r29, lbl_8040FC00@l
    addi r31, r29, 0xe4
lbl_80295B0C:
    lbz r0, 0x59(r31)
    cmplwi r0, 0x1
    ble lbl_80295B20
    addi r3, r31, 0x40
    bl btm_remove_acl
lbl_80295B20:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0xa
    blt lbl_80295B0C
    addi r31, r29, 0x4a4
    li r30, 0x0
lbl_80295B38:
    lbz r0, 0x59(r31)
    cmplwi r0, 0x1
    ble lbl_80295B4C
    addi r3, r31, 0x40
    bl btm_remove_acl
lbl_80295B4C:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0x6
    blt lbl_80295B38
    lwz r31, 0x1c(r1)
    li r3, 0x3
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80295B7C
asm u8 fn_80295B7C(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_8040FC00@ha
    addi r29, r29, lbl_8040FC00@l
    bl OSDisableInterrupts
    lbz r31, 0x6e5(r29)
    bl OSRestoreInterrupts
    cmpwi r31, 0x0
    beq lbl_80295BB8
    li r3, 0x3
    b lbl_80295D64
lbl_80295BB8:
    li r30, 0x0
    li r31, 0x0
lbl_80295BC0:
    add r3, r29, r31
    lbz r0, 0x13d(r3)
    cmplwi r0, 0x1
    bne lbl_80295BD8
    addi r3, r3, 0x124
    bl fn_80298868
lbl_80295BD8:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0xa
    blt lbl_80295BC0
    li r30, 0x0
    li r31, 0x0
lbl_80295BF0:
    add r3, r29, r31
    lbz r0, 0x4fd(r3)
    cmplwi r0, 0x1
    bne lbl_80295C08
    addi r3, r3, 0x4e4
    bl fn_80298868
lbl_80295C08:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0x6
    blt lbl_80295BF0
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80295D60
    bl fn_803249E8
    extsb. r0, r3
    bne lbl_80295D58
    li r0, 0x0
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_80295C4C
    bl memcpy
lbl_80295C4C:
    lis r3, lbl_80410920@ha
    addi r4, r1, 0x10
    addi r3, r3, lbl_80410920@l
    li r5, 0x10
    addi r3, r3, 0x6
    bl memcpy
    b lbl_80295C6C
    bl memcpy
lbl_80295C6C:
    lwz r3, lbl_8049DE34
    lis r4, lbl_80410920@ha
    li r0, 0x8
    addi r4, r4, lbl_80410920@l
    srwi r5, r3, 16
    clrlwi r6, r3, 16
    mtctr r0
lbl_80295C88:
    lhz r3, 0x0(r4)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x8(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xa(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xc(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xe(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    addi r4, r4, 0x10
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r6, r0
    clrlwi r6, r0, 16
    bdnz lbl_80295C88
    rlwimi r6, r5, 16, 0, 15
    lis r3, lbl_80410920@ha
    addi r3, r3, lbl_80410920@l
    stw r6, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x4
    addi r3, r3, 0x80
    bl memcpy
    li r3, 0x64
    b lbl_80295D64
lbl_80295D58:
    li r3, 0x5
    b lbl_80295D64
lbl_80295D60:
    li r3, 0x5
lbl_80295D64:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80295D80
asm void fn_80295D80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lis r30, lbl_8040FC00@ha
    addi r30, r30, lbl_8040FC00@l
    stw r29, 0x14(r1)
    lis r29, lbl_8036DE80@ha
    addi r29, r29, lbl_8036DE80@l
    stw r28, 0x10(r1)
    addi r28, r30, 0x0
    lbz r0, 0xd(r28)
    stb r31, 0xc(r28)
    cmpwi r0, 0x7
    beq lbl_802960B0
    bge lbl_80295DF0
    cmpwi r0, 0x3
    beq lbl_80295E44
    bge lbl_80295DE4
    cmpwi r0, 0x1
    beq lbl_80295E20
    bge lbl_80295E38
    b lbl_802960B0
lbl_80295DE4:
    cmpwi r0, 0x5
    beq lbl_80295E50
    b lbl_802960B0
lbl_80295DF0:
    cmpwi r0, 0x65
    beq lbl_80295F5C
    bge lbl_80295E10
    cmpwi r0, 0x64
    bge lbl_80295F14
    cmpwi r0, 0x9
    bge lbl_802960B0
    b lbl_80295EBC
lbl_80295E10:
    cmpwi r0, 0x67
    beq lbl_80296088
    bge lbl_802960B0
    b lbl_80295F94
lbl_80295E20:
    li r3, 0x0
    li r4, 0x0
    bl BTA_DmSetVisibility
    li r0, 0x2
    stb r0, 0xd(r28)
    b lbl_802960B0
lbl_80295E38:
    bl fn_80295AE4
    stb r3, 0xd(r28)
    b lbl_802960B0
lbl_80295E44:
    bl fn_80295B7C
    stb r3, 0xd(r28)
    b lbl_802960B0
lbl_80295E50:
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_802960B0
    addi r3, r30, 0x8b8
    li r4, 0x0
    li r5, 0x461
    bl memset
    addi r3, r30, 0x1f60
    li r4, 0x0
    li r5, 0x205
    bl memset
    addi r3, r30, 0x8b8
    bl SCSetBtDeviceInfoArray
    mr r31, r3
    addi r3, r30, 0x1f60
    bl SCSetBtCmpDevInfoArray
    or. r0, r31, r3
    beq lbl_80295EB0
    li r0, 0x6
    lis r3, fn_80295A8C@ha
    stb r0, 0xd(r28)
    addi r3, r3, fn_80295A8C@l
    bl SCFlushAsync
    b lbl_802960B0
lbl_80295EB0:
    li r0, 0x8
    stb r0, 0xd(r28)
    b lbl_802960B0
lbl_80295EBC:
    bl OSDisableInterrupts
    lbz r29, 0x6ea(r28)
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    stb r31, 0x6eb(r28)
    stb r29, 0x6ea(r28)
    bl OSRestoreInterrupts
    mr r4, r29
    li r3, 0x0
    bl BTA_DmSetVisibility
    addi r3, r28, 0x710
    bl OSCancelAlarm
    lwz r12, 0x8(r28)
    stb r31, 0xd(r28)
    cmpwi r12, 0x0
    beq lbl_80295F08
    li r3, 0x1
    mtctr r12
    bctrl
lbl_80295F08:
    li r0, 0x0
    stb r0, 0xd(r28)
    b lbl_802960B0
lbl_80295F14:
    lbz r0, lbl_8049DE3C
    addi r31, r29, 0x428
    cmpwi r0, 0x0
    bne lbl_802960B0
    mr r4, r31
    addi r3, r29, 0x454
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x1
    lis r6, fn_80294C4C@ha
    stb r0, lbl_8049DE3C
    mr r3, r31
    addi r4, r30, 0xe00
    addi r6, r6, fn_80294C4C@l
    addi r7, r30, 0xe8c
    li r5, 0x2
    bl NANDOpenAsync
    b lbl_802960B0
lbl_80295F5C:
    lbz r0, lbl_8049DE3C
    cmpwi r0, 0x0
    bne lbl_802960B0
    li r0, 0x1
    lis r4, 0x5
    lis r6, fn_80294CC8@ha
    stb r0, lbl_8049DE3C
    addi r3, r30, 0xe00
    subi r4, r4, 0x50e8
    addi r6, r6, fn_80294CC8@l
    addi r7, r30, 0xe8c
    li r5, 0x0
    bl NANDSeekAsync
    b lbl_802960B0
lbl_80295F94:
    lbz r0, lbl_8049DE3C
    cmpwi r0, 0x0
    bne lbl_802960B0
    addi r3, r29, 0x468
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r31, r30, 0xd20
    lbz r4, 0xd20(r30)
    lbz r5, 0x1(r31)
    addi r3, r29, 0x478
    lbz r6, 0x2(r31)
    lbz r7, 0x3(r31)
    lbz r8, 0x4(r31)
    lbz r9, 0x5(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0xd(r31)
    addi r3, r29, 0x498
    stw r0, 0x8(r1)
    lbz r4, 0x6(r31)
    lbz r5, 0x7(r31)
    lbz r6, 0x8(r31)
    lbz r7, 0x9(r31)
    lbz r8, 0xa(r31)
    lbz r9, 0xb(r31)
    lbz r10, 0xc(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x15(r31)
    addi r3, r29, 0x498
    stw r0, 0x8(r1)
    lbz r4, 0xe(r31)
    lbz r5, 0xf(r31)
    lbz r6, 0x10(r31)
    lbz r7, 0x11(r31)
    lbz r8, 0x12(r31)
    lbz r9, 0x13(r31)
    lbz r10, 0x14(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r4, r31, 0x16
    la r3, lbl_8049CF08
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0x80(r31)
    addi r3, r29, 0x4c4
    lbz r5, 0x81(r31)
    lbz r6, 0x82(r31)
    lbz r7, 0x83(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x1
    lis r6, fn_80294D4C@ha
    stb r0, lbl_8049DE3C
    mr r4, r31
    addi r3, r30, 0xe00
    addi r6, r6, fn_80294D4C@l
    addi r7, r30, 0xe8c
    li r5, 0x84
    bl NANDWriteAsync
    b lbl_802960B0
lbl_80296088:
    lbz r0, lbl_8049DE3C
    cmpwi r0, 0x0
    bne lbl_802960B0
    li r0, 0x1
    lis r4, fn_80294DC8@ha
    stb r0, lbl_8049DE3C
    addi r3, r30, 0xe00
    addi r4, r4, fn_80294DC8@l
    addi r5, r30, 0xe8c
    bl NANDCloseAsync
lbl_802960B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802960D0
asm void fn_802960D0(void) {
    nofralloc
    lis r8, lbl_80410B60@ha
    lis r7, fn_80295D80@ha
    addi r8, r8, lbl_80410B60@l
    li r5, 0x0
    addi r7, r7, fn_80295D80@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b OSSwitchFiberEx
}

// asm_to_cpp: fn_802960F0
asm u8 fn_802960F0(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r3, lbl_8040FC00@ha
    addi r28, r3, lbl_8040FC00@l
    lbz r0, 0xe(r28)
    cmpwi r0, 0x0
    bne lbl_802961E8
    li r27, 0x0
    li r29, 0x0
lbl_80296120:
    bl OSDisableInterrupts
    cmpwi r27, 0x0
    blt lbl_80296140
    cmpwi r27, 0xa
    bge lbl_80296140
    add r4, r28, r29
    addi r31, r4, 0xe4
    b lbl_80296150
lbl_80296140:
    subi r0, r27, 0xa
    mulli r0, r0, 0x60
    add r4, r28, r0
    addi r31, r4, 0x4a4
lbl_80296150:
    bl OSRestoreInterrupts
    lbz r0, 0x59(r31)
    cmpwi r0, 0x0
    beq lbl_802961D0
    lbz r0, 0x5c(r31)
    cmplwi r0, 0x1
    bne lbl_80296194
    li r0, 0x3
    lis r4, fn_80299E98@ha
    stb r0, 0xe(r28)
    addi r3, r31, 0x40
    addi r4, r4, fn_80299E98@l
    bl BTM_DeleteStoredLinkKey
    li r0, 0x0
    li r3, 0x2
    stb r0, 0x5c(r31)
    b lbl_802961EC
lbl_80296194:
    cmplwi r0, 0x3
    beq lbl_802961D0
    addi r3, r31, 0x40
    bl fn_802989E8
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802961D0
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r30
    li r4, 0x0
    li r5, 0x60
    bl memset
    mr r3, r31
    bl OSRestoreInterrupts
lbl_802961D0:
    addi r27, r27, 0x1
    addi r29, r29, 0x60
    cmpwi r27, 0x10
    blt lbl_80296120
    li r3, 0x3
    b lbl_802961EC
lbl_802961E8:
    li r3, 0x2
lbl_802961EC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80296204
asm void fn_80296204() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8036DE80@ha
    addi r31, r31, lbl_8036DE80@l
    stw r30, 0x18(r1)
    lis r30, lbl_8040FC00@ha
    addi r30, r30, lbl_8040FC00@l
    lbz r0, 0xf(r30)
    cmpwi r0, 0x2
    beq lbl_80296280
    bge lbl_80296244
    cmpwi r0, 0x1
    bge lbl_80296250
    b lbl_80296338
lbl_80296244:
    cmpwi r0, 0x4
    bge lbl_80296338
    b lbl_8029628C
lbl_80296250:
    lwz r0, 0x740(r30)
    cmplwi r0, 0x1
    bne lbl_80296274
    li r0, 0x1
    lis r4, fn_80299E98@ha
    stb r0, 0xe(r30)
    addi r4, r4, fn_80299E98@l
    li r3, 0x0
    bl BTM_ReadStoredLinkKey
lbl_80296274:
    li r0, 0x2
    stb r0, 0xf(r30)
    b lbl_80296338
lbl_80296280:
    bl fn_802960F0
    stb r3, 0xf(r30)
    b lbl_80296338
lbl_8029628C:
    lbz r0, 0xe(r30)
    cmpwi r0, 0x0
    bne lbl_80296330
    addi r3, r30, 0x710
    bl OSCancelAlarm
    addi r3, r1, 0x8
    bl BTM_ReadLocalVersion
    lbz r4, 0x8(r1)
    addi r3, r31, 0x524
    opword 0x4CC63182
    bl fn_8029ABCC
    lhz r4, 0xa(r1)
    addi r3, r31, 0x53c
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0xc(r1)
    addi r3, r31, 0x554
    opword 0x4CC63182
    bl fn_8029ABCC
    lhz r4, 0x10(r1)
    addi r3, r31, 0x56c
    opword 0x4CC63182
    bl fn_8029ABCC
    lhz r4, 0xe(r1)
    addi r3, r31, 0x584
    opword 0x4CC63182
    bl fn_8029ABCC
    lhz r0, 0xa(r1)
    addi r3, r31, 0x59c
    clrlwi r4, r0, 20
    opword 0x4CC63182
    bl fn_8029ABCC
    lhz r0, 0xa(r1)
    clrlwi r0, r0, 20
    cmpwi r0, 0xa7
    bne lbl_80296324
    bl fn_80298488
    b lbl_80296328
lbl_80296324:
    bl fn_80298584
lbl_80296328:
    li r0, 0x4
    b lbl_80296334
lbl_80296330:
    li r0, 0x2
lbl_80296334:
    stb r0, 0xf(r30)
lbl_80296338:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80296350
asm void fn_80296350(void) {
    nofralloc
    lis r8, lbl_80410B60@ha
    lis r7, fn_80296204@ha
    addi r8, r8, lbl_80410B60@l
    li r5, 0x0
    addi r7, r7, fn_80296204@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b OSSwitchFiberEx
}

// asm_to_cpp: fn_80296370
asm void fn_80296370(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8036E444@ha
    mr r4, r3
    stw r0, 0x14(r1)
    addi r3, r6, lbl_8036E444@l
    stw r31, 0xc(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    lbz r5, 0x10(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x5
    stb r0, 0x10(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802963BC
asm s32 fn_802963BC(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    lis r25, lbl_8040FC00@ha
    lis r24, lbl_8036DE80@ha
    addi r25, r25, lbl_8040FC00@l
    li r4, 0x0
    addi r24, r24, lbl_8036DE80@l
    li r5, 0x461
    addi r3, r25, 0x8b8
    bl memset
    addi r3, r25, 0x1f60
    li r4, 0x0
    li r5, 0x205
    bl memset
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
    addi r3, r25, 0x8b8
    bl SCGetBtDeviceInfoArray
    addi r3, r25, 0x1f60
    bl SCGetBtCmpDevInfoArray
    addi r28, r25, 0x8b8
    addi r27, r25, 0x0
    li r26, 0x0
    lbz r16, 0x8b8(r25)
    addi r18, r28, 0x1
    stb r26, 0x6e9(r27)
    mr r19, r18
    addi r20, r28, 0x7
    li r17, 0x0
    li r15, 0x0
    li r29, 0x1
    li r30, 0x2
    lis r31, 0x1
    li r14, 0x3
lbl_80296458:
    cmpwi r16, 0x0
    beq lbl_80296620
    mr r3, r20
    addi r4, r24, 0x268
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80296488
    mr r3, r19
    li r4, 0x0
    li r5, 0x46
    bl memset
lbl_80296488:
    mr r3, r19
    addi r4, r1, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80296518
    cmpwi r17, 0x9
    bge lbl_8029660C
    addi r21, r17, 0x1
    mulli r0, r21, 0x46
    add r3, r28, r0
    addi r22, r3, 0x7
    b lbl_8029650C
lbl_802964BC:
    mr r3, r22
    addi r4, r24, 0x268
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80296504
    mulli r0, r21, 0x46
    mr r3, r19
    li r5, 0x46
    add r4, r28, r0
    addi r21, r4, 0x1
    mr r4, r21
    bl memcpy
    mr r3, r21
    li r4, 0x0
    li r5, 0x46
    bl memset
    b lbl_80296518
lbl_80296504:
    addi r22, r22, 0x46
    addi r21, r21, 0x1
lbl_8029650C:
    cmpwi r21, 0xa
    blt lbl_802964BC
    b lbl_8029660C
lbl_80296518:
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r27)
    mr r22, r3
    cmpwi r0, 0x0
    bne lbl_8029657C
    li r0, 0xa
    mr r3, r27
    li r21, 0x0
    li r23, 0x0
    mtctr r0
lbl_80296540:
    lbz r0, 0x13d(r3)
    cmpwi r0, 0x0
    bne lbl_8029656C
    mr r4, r23
    addi r3, r24, 0x2cc
    opword 0x4CC63182
    bl fn_8029ABCC
    mulli r0, r23, 0x60
    add r3, r27, r0
    addi r21, r3, 0xe4
    b lbl_80296584
lbl_8029656C:
    addi r3, r3, 0x60
    addi r23, r23, 0x1
    bdnz lbl_80296540
    b lbl_80296584
lbl_8029657C:
    lwz r3, 0x18(r27)
    lwz r21, 0x0(r3)
lbl_80296584:
    mr r3, r22
    bl OSRestoreInterrupts
    cmpwi r21, 0x0
    beq lbl_8029660C
    mr r4, r19
    addi r3, r21, 0x40
    li r5, 0x6
    bl memcpy
    mr r3, r21
    mr r4, r20
    li r5, 0x40
    bl memcpy
    stb r29, 0x59(r21)
    subi r0, r31, 0x7f8c
    addi r3, r24, 0x378
    stb r26, 0x5b(r21)
    stb r30, 0x5c(r21)
    stb r30, 0x57(r21)
    sth r0, 0x5e(r21)
    stb r14, 0x58(r21)
    lbz r4, 0x40(r21)
    lbz r5, 0x41(r21)
    lbz r6, 0x42(r21)
    lbz r7, 0x43(r21)
    lbz r8, 0x44(r21)
    lbz r9, 0x45(r21)
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r4, r21
    addi r3, r24, 0x5f0
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r15, r15, 0x1
    subi r16, r16, 0x1
lbl_8029660C:
    addi r17, r17, 0x1
    addi r19, r19, 0x46
    cmpwi r17, 0xa
    addi r20, r20, 0x46
    blt lbl_80296458
lbl_80296620:
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_802967BC
    addi r3, r25, 0x8b8
    addi r4, r24, 0x27c
    addi r3, r3, 0x3db
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802967BC
    bl OSDisableInterrupts
    addi r16, r25, 0x0
    mr r19, r3
    lbz r0, 0x6e9(r16)
    cmpwi r0, 0x0
    bne lbl_802966B0
    li r0, 0xa
    mr r3, r16
    li r14, 0x0
    li r17, 0x0
    mtctr r0
lbl_80296674:
    lbz r0, 0x13d(r3)
    cmpwi r0, 0x0
    bne lbl_802966A0
    mr r4, r17
    addi r3, r24, 0x2cc
    opword 0x4CC63182
    bl fn_8029ABCC
    mulli r0, r17, 0x60
    add r3, r16, r0
    addi r14, r3, 0xe4
    b lbl_802966B8
lbl_802966A0:
    addi r3, r3, 0x60
    addi r17, r17, 0x1
    bdnz lbl_80296674
    b lbl_802966B8
lbl_802966B0:
    lwz r3, 0x18(r16)
    lwz r14, 0x0(r3)
lbl_802966B8:
    mr r3, r19
    bl OSRestoreInterrupts
    cmpwi r14, 0x0
    bne lbl_802966DC
    bl OSDisableInterrupts
    bl OSRestoreInterrupts
    addi r3, r25, 0x0
    subi r15, r15, 0x1
    addi r14, r3, 0x444
lbl_802966DC:
    addi r16, r25, 0x8b8
    addi r3, r14, 0x40
    addi r4, r16, 0x3d5
    li r5, 0x6
    bl memcpy
    mr r3, r14
    addi r4, r16, 0x3db
    li r5, 0x13
    bl memcpy
    addi r3, r14, 0x46
    addi r4, r16, 0x3ef
    li r5, 0x10
    bl memcpy
    li r0, 0x1
    lis r3, 0x1
    stb r0, 0x59(r14)
    li r0, 0x0
    subi r4, r3, 0x7f8c
    li r5, 0x2
    stb r0, 0x5b(r14)
    li r0, 0x3
    addi r3, r24, 0x378
    stb r5, 0x57(r14)
    sth r4, 0x5e(r14)
    stb r0, 0x58(r14)
    stb r0, 0x5c(r14)
    lbz r4, 0x40(r14)
    lbz r5, 0x41(r14)
    lbz r6, 0x42(r14)
    lbz r7, 0x43(r14)
    lbz r8, 0x44(r14)
    lbz r9, 0x45(r14)
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r4, r14
    addi r3, r24, 0x5f0
    opword 0x4CC63182
    bl fn_8029ABCC
    clrlwi r0, r15, 24
    li r4, 0x0
    mulli r14, r0, 0x46
    li r5, 0x46
    add r3, r16, r14
    addi r17, r3, 0x1
    mr r3, r17
    bl memset
    mr r3, r17
    addi r4, r16, 0x3d5
    li r5, 0x6
    bl memcpy
    add r3, r16, r14
    addi r4, r16, 0x3db
    addi r3, r3, 0x7
    li r5, 0x13
    bl memcpy
    addi r15, r15, 0x1
lbl_802967BC:
    addi r16, r25, 0x0
    li r17, 0x1
    addi r3, r25, 0x1f60
    stb r15, 0x8b8(r25)
    lbz r28, 0x1f60(r25)
    addi r22, r3, 0x1af
    stb r17, 0x6e9(r16)
    addi r23, r3, 0x1b5
    addi r26, r3, 0x1f5
    li r27, 0x5
    li r15, 0x3
    li r14, 0x2
    lis r30, 0x1
    li r29, 0xa
lbl_802967F4:
    cmpwi r28, 0x0
    beq lbl_80296990
    mr r3, r22
    addi r4, r1, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_8029697C
    lbz r21, 0x8b8(r25)
    mr r20, r18
    li r19, 0x0
    b lbl_8029684C
lbl_80296824:
    mr r3, r20
    mr r4, r22
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80296844
    li r0, 0x1
    b lbl_80296858
lbl_80296844:
    addi r20, r20, 0x46
    addi r19, r19, 0x1
lbl_8029684C:
    cmpw r19, r21
    blt lbl_80296824
    li r0, 0x0
lbl_80296858:
    cmpwi r0, 0x0
    bne lbl_8029697C
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r16)
    mr r20, r3
    cmpwi r0, 0x0
    bne lbl_802968C0
    mr r3, r16
    li r21, 0x0
    li r19, 0x0
    mtctr r29
lbl_80296884:
    lbz r0, 0x13d(r3)
    cmpwi r0, 0x0
    bne lbl_802968B0
    mr r4, r19
    addi r3, r24, 0x2cc
    opword 0x4CC63182
    bl fn_8029ABCC
    mulli r0, r19, 0x60
    add r3, r16, r0
    addi r21, r3, 0xe4
    b lbl_802968C8
lbl_802968B0:
    addi r3, r3, 0x60
    addi r19, r19, 0x1
    bdnz lbl_80296884
    b lbl_802968C8
lbl_802968C0:
    lwz r3, 0x18(r16)
    lwz r21, 0x0(r3)
lbl_802968C8:
    mr r3, r20
    bl OSRestoreInterrupts
    cmpwi r21, 0x0
    beq lbl_8029697C
    mr r4, r22
    addi r3, r21, 0x40
    li r5, 0x6
    bl memcpy
    mr r3, r21
    mr r4, r23
    li r5, 0x40
    bl memcpy
    mr r4, r26
    addi r3, r21, 0x46
    li r5, 0x10
    bl memcpy
    stb r17, 0x59(r21)
    mr r3, r21
    addi r4, r24, 0x5fc
    li r5, 0x13
    stb r17, 0x5b(r21)
    stb r15, 0x5c(r21)
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029693C
    stb r14, 0x57(r21)
    subi r0, r30, 0x7f8c
    sth r0, 0x5e(r21)
    stb r15, 0x58(r21)
lbl_8029693C:
    lbz r4, 0x40(r21)
    addi r3, r24, 0x378
    lbz r5, 0x41(r21)
    lbz r6, 0x42(r21)
    lbz r7, 0x43(r21)
    lbz r8, 0x44(r21)
    lbz r9, 0x45(r21)
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r4, r21
    addi r3, r24, 0x5f0
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r21
    bl fn_80298AC0
    subi r28, r28, 0x1
lbl_8029697C:
    subic. r27, r27, 0x1
    subi r23, r23, 0x56
    subi r26, r26, 0x56
    subi r22, r22, 0x56
    bge lbl_802967F4
lbl_80296990:
    addi r5, r25, 0x0
    li r3, 0x0
    li r0, 0x4
    stb r3, 0x6e9(r5)
    addi r3, r25, 0x1f60
    li r4, 0x0
    stb r0, 0x10(r5)
    li r5, 0x205
    bl memset
    addi r3, r25, 0x8b8
    bl SCSetBtDeviceInfoArray
    addi r3, r25, 0x1f60
    bl SCSetBtCmpDevInfoArray
    lis r3, fn_80296370@ha
    addi r3, r3, fn_80296370@l
    bl SCFlushAsync
    addi r11, r1, 0x60
    li r3, 0x5
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_802969EC
asm void fn_802969EC(u32 *arg0) {
    nofralloc
    lwz r4, lbl_8049DE38
    li r0, 0x0
    stb r0, lbl_8049DE3C
    cmpwi r4, 0x2
    beq lbl_80296A34
    bge lbl_80296A10
    cmpwi r4, 0x1
    bge lbl_80296A1C
    b lbl_80296A68
lbl_80296A10:
    cmpwi r4, 0x4
    bge lbl_80296A68
    b lbl_80296A4C
lbl_80296A1C:
    cmpwi r3, 0x0
    li r0, 0xff
    bne lbl_80296A2C
    addi r0, r4, 0x1
lbl_80296A2C:
    stw r0, lbl_8049DE38
    blr
lbl_80296A34:
    cmpwi r3, 0x0
    li r0, 0x5
    bne lbl_80296A44
    addi r0, r4, 0x1
lbl_80296A44:
    stw r0, lbl_8049DE38
    blr
lbl_80296A4C:
    subis r0, r3, 0x4
    li r3, 0x5
    cmplwi r0, 0xb000
    bne lbl_80296A60
    addi r3, r4, 0x1
lbl_80296A60:
    stw r3, lbl_8049DE38
    blr
lbl_80296A68:
    li r0, 0x6
    stw r0, lbl_8049DE38
    blr
}

// asm_to_cpp: fn_80296A8C
asm u8 fn_80296A8C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lbz r0, lbl_8049DE3C
    li r3, 0x0
    lis r30, lbl_8036DE80@ha
    lis r31, lbl_8040FC00@ha
    cmpwi r0, 0x0
    stw r3, 0x18(r1)
    addi r30, r30, lbl_8036DE80@l
    addi r31, r31, lbl_8040FC00@l
    stw r3, 0x1c(r1)
    addi r27, r30, 0x428
    la r29, lbl_8049CF10
    li r28, 0x2
    stw r3, 0x20(r1)
    stw r3, 0x24(r1)
    beq lbl_80296AE4
    li r3, 0x2
    b lbl_80296FA4
lbl_80296AE4:
    lwz r0, lbl_8049DE30
    cmpwi r0, 0x0
    beq lbl_80296AF8
    clrlwi. r0, r0, 27
    beq lbl_80296B0C
lbl_80296AF8:
    addi r5, r30, 0x610
    la r3, lbl_8049CF18
    li r4, 0xa8d
    opword 0x4CC63182
    bl OSPanic
lbl_80296B0C:
    lwz r0, lbl_8049DE38
    cmpwi r0, 0x3
    beq lbl_80296BF4
    bge lbl_80296B34
    cmpwi r0, 0x1
    beq lbl_80296B74
    bge lbl_80296BCC
    cmpwi r0, 0x0
    bge lbl_80296B44
    b lbl_80296F9C
lbl_80296B34:
    cmpwi r0, 0x5
    beq lbl_80296F7C
    bge lbl_80296F9C
    b lbl_80296C20
lbl_80296B44:
    bl NANDInit
    cmpwi r3, 0x0
    bne lbl_80296B58
    li r0, 0x1
    b lbl_80296B5C
lbl_80296B58:
    li r0, 0xff
lbl_80296B5C:
    stw r0, lbl_8049DE38
    mr r4, r3
    addi r3, r30, 0x668
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_80296FA0
lbl_80296B74:
    bl fn_803249E8
    extsb. r0, r3
    bne lbl_80296BC0
    mr r4, r27
    addi r3, r30, 0x454
    opword 0x4CC63182
    bl fn_8029ABCC
    li r3, 0x1
    li r0, 0x0
    lis r6, fn_802969EC@ha
    stb r3, lbl_8049DE3C
    mr r3, r27
    addi r4, r31, 0xe00
    stw r0, lbl_8049DE34
    addi r6, r6, fn_802969EC@l
    addi r7, r31, 0xe8c
    li r5, 0x1
    bl NANDOpenAsync
    b lbl_80296FA0
lbl_80296BC0:
    li r0, 0x6
    stw r0, lbl_8049DE38
    b lbl_80296FA0
lbl_80296BCC:
    li r0, 0x1
    lis r6, fn_802969EC@ha
    stb r0, lbl_8049DE3C
    addi r3, r31, 0xe00
    addi r6, r6, fn_802969EC@l
    addi r7, r31, 0xe8c
    li r4, 0x0
    li r5, 0x0
    bl NANDSeekAsync
    b lbl_80296FA0
lbl_80296BF4:
    li r0, 0x1
    lis r5, 0x5
    lis r6, fn_802969EC@ha
    stb r0, lbl_8049DE3C
    lwz r4, lbl_8049DE30
    addi r3, r31, 0xe00
    subi r5, r5, 0x5000
    addi r6, r6, fn_802969EC@l
    addi r7, r31, 0xe8c
    bl NANDReadAsync
    b lbl_80296FA0
lbl_80296C20:
    lwz r4, lbl_8049DE30
    addi r3, r31, 0xd20
    li r5, 0x80
    addis r4, r4, 0x5
    subi r4, r4, 0x50e8
    bl memcpy
    lwz r4, lbl_8049DE30
    addi r3, r1, 0x10
    li r5, 0x4
    addis r4, r4, 0x5
    subi r4, r4, 0x5068
    bl memcpy
    lwz r4, 0x10(r1)
    addi r3, r30, 0x678
    mr r5, r4
    opword 0x4CC63182
    bl fn_8029ABCC
    lis r3, 0x1
    lwz r6, lbl_8049DE30
    subi r0, r3, 0x6a1d
    li r5, 0x0
    li r4, 0x0
    mtctr r0
lbl_80296C7C:
    lhz r3, 0x0(r6)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    addi r6, r6, 0x8
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r4, r0
    clrlwi r4, r0, 16
    bdnz lbl_80296C7C
    lwz r3, lbl_8049DE30
    rlwimi r4, r5, 16, 0, 15
    li r0, 0x8
    stw r4, lbl_8049DE34
    addis r3, r3, 0x5
    srwi r5, r4, 16
    subi r6, r3, 0x50e8
    clrlwi r27, r4, 16
    mtctr r0
lbl_80296CF8:
    lhz r3, 0x0(r6)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r6)
    add r0, r27, r0
    clrlwi r27, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r6)
    add r0, r27, r0
    clrlwi r27, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r6)
    add r0, r27, r0
    clrlwi r27, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x8(r6)
    add r0, r27, r0
    clrlwi r27, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xa(r6)
    add r0, r27, r0
    clrlwi r27, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xc(r6)
    add r0, r27, r0
    clrlwi r27, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xe(r6)
    add r0, r27, r0
    clrlwi r27, r0, 16
    addi r6, r6, 0x10
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r27, r0
    clrlwi r27, r0, 16
    bdnz lbl_80296CF8
    rlwimi r27, r5, 16, 0, 15
    addi r3, r30, 0x688
    mr r4, r27
    mr r5, r27
    opword 0x4CC63182
    bl fn_8029ABCC
    lwz r0, 0x10(r1)
    cmplw r0, r27
    beq lbl_80296DDC
    li r0, 0x5
    addi r3, r30, 0x698
    stw r0, lbl_8049DE38
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_80296FA0
lbl_80296DDC:
    addi r3, r31, 0xd20
    addi r4, r1, 0x18
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80296E0C
    li r0, 0x5
    addi r3, r30, 0x6b8
    stw r0, lbl_8049DE38
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_80296FA0
lbl_80296E0C:
    bl fn_80313ECC
    mr r4, r29
    li r5, 0x4
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80296E58
    addi r3, r31, 0xd20
    addi r4, r1, 0x18
    addi r3, r3, 0x6
    li r5, 0x10
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80296E58
    li r0, 0x5
    addi r3, r30, 0x6dc
    stw r0, lbl_8049DE38
    opword 0x4CC63182
    bl fn_8029ABCC
    b lbl_80296FA0
lbl_80296E58:
    lis r4, 0x5
    lwz r3, lbl_8049DE30
    subi r5, r4, 0x5000
    li r4, 0x0
    bl memset
    addi r3, r31, 0x8b8
    li r4, 0x0
    li r5, 0x461
    bl memset
    addi r3, r31, 0x8b8
    bl SCGetBtDeviceInfoArray
    addi r27, r31, 0x8b8
    addi r4, r31, 0xd20
    addi r3, r27, 0x3d5
    li r5, 0x6
    bl memcpy
    addi r29, r31, 0xd20
    addi r3, r27, 0x3db
    addi r4, r29, 0x16
    li r5, 0x40
    bl memcpy
    addi r3, r27, 0x3ef
    addi r4, r29, 0x6
    li r5, 0x10
    bl memcpy
    addi r3, r30, 0x70c
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r4, 0xd20(r31)
    addi r3, r30, 0x478
    lbz r5, 0x1(r29)
    lbz r6, 0x2(r29)
    lbz r7, 0x3(r29)
    lbz r8, 0x4(r29)
    lbz r9, 0x5(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0xd(r29)
    addi r3, r30, 0x498
    stw r0, 0x8(r1)
    lbz r4, 0x6(r29)
    lbz r5, 0x7(r29)
    lbz r6, 0x8(r29)
    lbz r7, 0x9(r29)
    lbz r8, 0xa(r29)
    lbz r9, 0xb(r29)
    lbz r10, 0xc(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    lbz r0, 0x15(r29)
    addi r3, r30, 0x498
    stw r0, 0x8(r1)
    lbz r4, 0xe(r29)
    lbz r5, 0xf(r29)
    lbz r6, 0x10(r29)
    lbz r7, 0x11(r29)
    lbz r8, 0x12(r29)
    lbz r9, 0x13(r29)
    lbz r10, 0x14(r29)
    opword 0x4CC63182
    bl fn_8029ABCC
    addi r4, r29, 0x16
    la r3, lbl_8049CF08
    opword 0x4CC63182
    bl fn_8029ABCC
    mr r3, r27
    bl SCSetBtDeviceInfoArray
    li r0, 0x1
    lis r3, fn_80296A74@ha
    stb r0, lbl_8049DE3C
    addi r3, r3, fn_80296A74@l
    bl SCFlushAsync
    b lbl_80296FA0
lbl_80296F7C:
    li r0, 0x1
    lis r4, fn_802969EC@ha
    stb r0, lbl_8049DE3C
    addi r3, r31, 0xe00
    addi r4, r4, fn_802969EC@l
    addi r5, r31, 0xe8c
    bl NANDCloseAsync
    b lbl_80296FA0
lbl_80296F9C:
    li r28, 0x3
lbl_80296FA0:
    mr r3, r28
lbl_80296FA4:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80296FBC
asm void fn_80296FBC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    stw r30, 0x8(r1)
    lbz r0, 0x10(r31)
    cmpwi r0, 0x3
    beq lbl_80297084
    bge lbl_80296FF8
    cmpwi r0, 0x1
    beq lbl_80297004
    bge lbl_802970B4
    b lbl_802970BC
lbl_80296FF8:
    cmpwi r0, 0x5
    beq lbl_8029708C
    b lbl_802970BC
lbl_80297004:
    li r30, 0x1
    bl __OSGetSystemTime
    lis r5, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r5)
    addi r3, r3, 0x4dd3
    lwz r5, __OSStartTime+0x4
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    subf r3, r5, r4
    srwi r0, r0, 6
    divwu r0, r3, r0
    subfic r0, r0, 0x1f4
    cmpwi r0, 0x0
    bge lbl_8029707C
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_8029707C
    bl fn_80297224
    lwz r0, lbl_8049CED0
    li r30, 0x3
    cmpwi r0, 0x0
    beq lbl_8029707C
    bl fn_803249E8
    extsb. r0, r3
    bne lbl_8029707C
    li r0, 0x0
    li r30, 0x2
    stb r0, lbl_8049DE3C
    stw r0, lbl_8049DE38
lbl_8029707C:
    stb r30, 0x10(r31)
    b lbl_802970BC
lbl_80297084:
    bl fn_802963BC
    b lbl_802970BC
lbl_8029708C:
    addi r3, r31, 0x710
    bl OSCancelAlarm
    li r0, 0x1
    lis r3, fn_80299440@ha
    stb r0, 0x708(r31)
    addi r3, r3, fn_80299440@l
    bl BTA_EnableBluetooth
    li r0, 0x6
    stb r0, 0x10(r31)
    b lbl_802970BC
lbl_802970B4:
    bl fn_80296A8C
    stb r3, 0x10(r31)
lbl_802970BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802970D4
asm void fn_802970D4(void) {
    nofralloc
    lis r8, lbl_80410B60@ha
    lis r7, fn_80296FBC@ha
    addi r8, r8, lbl_80410B60@l
    li r5, 0x0
    addi r7, r7, fn_80296FBC@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b OSSwitchFiberEx
}

// asm_to_cpp: fn_802970F4
asm void fn_802970F4(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8036E5A0@ha
    mr r4, r3
    stw r0, 0x14(r1)
    addi r3, r6, lbl_8036E5A0@l
    stw r31, 0xc(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    lbz r5, 0x11(r31)
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x3
    stb r0, 0x11(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80297140
asm void fn_80297140(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8040FC00@ha
    addi r30, r30, lbl_8040FC00@l
    stw r29, 0x14(r1)
    addi r31, r30, 0x0
    lbz r0, 0x11(r31)
    cmpwi r0, 0x2
    beq lbl_802971E8
    bge lbl_80297180
    cmpwi r0, 0x1
    bge lbl_8029718C
    b lbl_802971E8
lbl_80297180:
    cmpwi r0, 0x4
    bge lbl_802971E8
    b lbl_802971DC
lbl_8029718C:
    lwz r29, lbl_8049DE24
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_802971E8
    addi r3, r30, 0x8b8
    bl SCSetBtDeviceInfoArray
    and r29, r29, r3
    addi r3, r30, 0x1f60
    bl SCSetBtCmpDevInfoArray
    and. r29, r29, r3
    beq lbl_802971D0
    li r0, 0x2
    lis r3, fn_802970F4@ha
    stb r0, 0x11(r31)
    addi r3, r3, fn_802970F4@l
    bl SCFlushAsync
    b lbl_802971E8
lbl_802971D0:
    li r0, 0x3
    stb r0, 0x11(r31)
    b lbl_802971E8
lbl_802971DC:
    addi r3, r31, 0x710
    bl OSCancelAlarm
    bl BTA_DisableBluetooth
lbl_802971E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80297204
asm void fn_80297204(void) {
    nofralloc
    lis r8, lbl_80410B60@ha
    lis r7, fn_80297140@ha
    addi r8, r8, lbl_80410B60@l
    li r5, 0x0
    addi r7, r7, fn_80297140@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b OSSwitchFiberEx
}

// asm_to_cpp: fn_80297224
asm void fn_80297224(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r31, lbl_8040FC00@ha
    lis r3, lbl_8036E5D8@ha
    addi r31, r31, lbl_8040FC00@l
    addi r30, r31, 0x0
    addi r3, r3, lbl_8036E5D8@l
    opword 0x4CC63182
    bl fn_8029ABCC
    li r0, 0x2
    addi r12, r31, 0xdc0
    addi r11, r31, 0x2168
    addi r10, r31, 0x2188
    li r3, 0x0
    li r29, 0x0
    mtctr r0
lbl_80297270:
    clrlslwi r6, r3, 24, 1
    clrlslwi r0, r3, 24, 2
    addi r4, r3, 0x1
    stwx r29, r12, r0
    clrlslwi r5, r4, 24, 2
    addi r0, r3, 0x2
    clrlslwi r28, r4, 24, 1
    sthx r29, r11, r6
    clrlslwi r9, r0, 24, 2
    clrlslwi r27, r0, 24, 1
    addi r4, r3, 0x3
    sthx r29, r10, r6
    clrlslwi r8, r4, 24, 2
    addi r0, r3, 0x4
    stwx r29, r12, r5
    clrlslwi r26, r4, 24, 1
    clrlslwi r7, r0, 24, 2
    clrlslwi r25, r0, 24, 1
    sthx r29, r11, r28
    addi r4, r3, 0x5
    clrlslwi r6, r4, 24, 2
    addi r0, r3, 0x6
    sthx r29, r10, r28
    clrlslwi r28, r4, 24, 1
    clrlslwi r5, r0, 24, 2
    clrlslwi r24, r0, 24, 1
    addi r4, r3, 0x7
    stwx r29, r12, r9
    clrlslwi r0, r4, 24, 2
    addi r3, r3, 0x8
    sthx r29, r11, r27
    clrlslwi r4, r4, 24, 1
    sthx r29, r10, r27
    stwx r29, r12, r8
    sthx r29, r11, r26
    sthx r29, r10, r26
    stwx r29, r12, r7
    sthx r29, r11, r25
    sthx r29, r10, r25
    stwx r29, r12, r6
    sthx r29, r11, r28
    sthx r29, r10, r28
    stwx r29, r12, r5
    sthx r29, r11, r24
    sthx r29, r10, r24
    stwx r29, r12, r0
    sthx r29, r11, r4
    sthx r29, r10, r4
    bdnz lbl_80297270
    addi r4, r30, 0x58
    addi r3, r30, 0x1c
    stw r4, 0x18(r30)
    li r0, 0x3
    mr r5, r30
    li r4, 0x0
    stw r3, 0x14(r30)
    mtctr r0
lbl_80297354:
    subfic r0, r4, 0x5
    cmpwi r4, 0x0
    mulli r0, r0, 0x60
    add r3, r30, r0
    addi r0, r3, 0x4a4
    stw r0, 0x1c(r5)
    bne lbl_80297378
    li r0, 0x0
    b lbl_80297388
lbl_80297378:
    subi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_80297388:
    cmpwi r4, 0x5
    stw r0, 0x20(r5)
    bne lbl_8029739C
    li r0, 0x0
    b lbl_802973AC
lbl_8029739C:
    addi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_802973AC:
    addic. r4, r4, 0x1
    stw r0, 0x24(r5)
    subfic r0, r4, 0x5
    mulli r0, r0, 0x60
    add r3, r30, r0
    addi r0, r3, 0x4a4
    stw r0, 0x28(r5)
    bne lbl_802973D4
    li r0, 0x0
    b lbl_802973E4
lbl_802973D4:
    subi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_802973E4:
    cmpwi r4, 0x5
    stw r0, 0x2c(r5)
    bne lbl_802973F8
    li r0, 0x0
    b lbl_80297408
lbl_802973F8:
    addi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_80297408:
    stw r0, 0x30(r5)
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_80297354
    addi r4, r30, 0xd8
    addi r3, r30, 0x6c
    stw r4, 0x68(r30)
    li r0, 0x5
    mr r5, r30
    addi r4, r30, 0xe4
    li r6, 0x0
    stw r3, 0x64(r30)
    mtctr r0
lbl_8029743C:
    cmpwi r6, 0x0
    stw r4, 0x6c(r5)
    bne lbl_80297450
    li r0, 0x0
    b lbl_80297460
lbl_80297450:
    subi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_80297460:
    cmpwi r6, 0x9
    stw r0, 0x70(r5)
    bne lbl_80297474
    li r0, 0x0
    b lbl_80297484
lbl_80297474:
    addi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_80297484:
    stw r0, 0x74(r5)
    addi r4, r4, 0x60
    addic. r6, r6, 0x1
    stw r4, 0x78(r5)
    bne lbl_802974A0
    li r0, 0x0
    b lbl_802974B0
lbl_802974A0:
    subi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_802974B0:
    cmpwi r6, 0x9
    stw r0, 0x7c(r5)
    bne lbl_802974C4
    li r0, 0x0
    b lbl_802974D4
lbl_802974C4:
    addi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_802974D4:
    stw r0, 0x80(r5)
    addi r4, r4, 0x60
    addi r5, r5, 0x18
    addi r6, r6, 0x1
    bdnz lbl_8029743C
    li r29, 0x0
    li r6, 0x1
    li r0, -0x41
    stb r29, 0xc(r30)
    addi r3, r30, 0x702
    li r4, 0x0
    stb r29, 0xe(r30)
    li r5, 0x6
    stb r29, 0xd(r30)
    stb r29, 0xf(r30)
    stb r29, 0x10(r30)
    stb r29, 0x11(r30)
    stb r29, 0x6e7(r30)
    stb r29, 0x6e9(r30)
    stb r6, 0x6e8(r30)
    stb r29, 0x6ea(r30)
    stb r29, 0x6eb(r30)
    stb r29, 0x708(r30)
    stb r29, 0x70a(r30)
    stb r0, 0x70b(r30)
    bl memset
    addi r3, r30, 0x6fc
    li r4, 0x0
    li r5, 0x6
    bl memset
    li r0, 0xa
    sth r29, 0x744(r30)
    sth r0, 0x746(r30)
    bl OSDisableInterrupts
    addi r30, r31, 0x0
    mr r31, r3
    addi r3, r30, 0xe4
    li r4, 0x0
    li r5, 0x3c0
    bl memset
    addi r3, r30, 0x4a4
    li r4, 0x0
    li r5, 0x240
    bl memset
    stb r29, 0x12(r30)
    mr r3, r31
    stb r29, 0x13(r30)
    stb r29, 0x6e4(r30)
    stb r29, 0x6e5(r30)
    stb r29, 0x6e6(r30)
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802975B8
asm s32 fn_802975B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8040FC00@ha
    addi r31, r31, lbl_8040FC00@l
    lwz r0, lbl_8049DE20
    cmpwi r0, 0x0
    beq lbl_802975E4
    li r3, 0x0
    b lbl_802976C0
lbl_802975E4:
    lis r3, lbl_8036E5F0@ha
    addi r3, r3, lbl_8036E5F0@l
    opword 0x4CC63182
    bl fn_8029ABCC
    bl BTA_Init
    lbz r3, lbl_8049DE2D
    bl bta_sys_set_trace_level
    lbz r3, lbl_8049DE2D
    bl L2CA_SetTraceLevel
    lbz r3, lbl_8049DE2D
    bl SDP_SetTraceLevel
    lis r3, lbl_8036E608@ha
    addi r3, r3, lbl_8036E608@l
    opword 0x4CC63182
    bl fn_8029ABCC
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x0(r31)
    stw r3, 0x4(r31)
    stw r3, 0x8(r31)
    stw r3, 0x6f0(r31)
    stw r3, 0x6ec(r31)
    stb r0, 0x10(r31)
    bl SCInit
    lwz r0, lbl_8049CED0
    cmpwi r0, 0x0
    beq lbl_80297664
    lwz r12, lbl_8049CECC
    cmpwi r12, 0x0
    beq lbl_80297664
    mtctr r12
    bctrl
lbl_80297664:
    addi r3, r31, 0x710
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_802970D4@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_802970D4@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0xa
    bl OSSetPeriodicAlarm
    li r3, 0x1
    li r0, 0x0
    stw r3, lbl_8049DE20
    li r3, 0x1
    stb r0, lbl_8049DE4C
lbl_802976C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802976D4
asm void fn_802976D4(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    addi r4, r4, lbl_8040FC00@l
    stw r30, 0x6f4(r4)
    stw r31, 0x6f8(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80297724
asm void fn_80297724(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_8040FC00@ha
    lis r4, lbl_8036E61C@ha
    addi r31, r31, lbl_8040FC00@l
    mr r28, r3
    addi r30, r31, 0x0
    addi r3, r4, lbl_8036E61C@l
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    mr r29, r3
    bl OSDisableInterrupts
    lbz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_802977A0
    lbz r0, 0xd(r30)
    cmpwi r0, 0x0
    bne lbl_802977A0
    lbz r0, 0xf(r30)
    cmplwi r0, 0x4
    bne lbl_802977A0
    lbz r0, 0x10(r30)
    cmplwi r0, 0x6
    bne lbl_802977A0
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_802977A8
lbl_802977A0:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_802977A8:
    cmpwi r0, 0x0
    beq lbl_802977B8
    addi r3, r30, 0x710
    bl OSCancelAlarm
lbl_802977B8:
    addi r26, r31, 0x8b8
    li r4, 0x0
    addi r3, r26, 0x1
    li r5, 0x2bc
    bl memset
    addi r3, r31, 0x0
    addi r25, r26, 0x1
    lwz r27, 0x64(r3)
    addi r26, r26, 0x7
    b lbl_80297810
lbl_802977E0:
    lwz r4, 0x0(r27)
    mr r3, r25
    li r5, 0x6
    addi r4, r4, 0x40
    bl memcpy
    lwz r4, 0x0(r27)
    mr r3, r26
    li r5, 0x40
    bl memcpy
    lwz r27, 0x8(r27)
    addi r25, r25, 0x46
    addi r26, r26, 0x46
lbl_80297810:
    cmpwi r27, 0x0
    bne lbl_802977E0
    bl OSDisableInterrupts
    addi r26, r31, 0x0
    lbz r25, 0x12(r26)
    bl OSRestoreInterrupts
    addi r27, r31, 0x1f60
    stb r25, 0x8b8(r31)
    addi r3, r27, 0x1
    li r4, 0x0
    li r5, 0x204
    bl memset
    cmpwi r28, 0x0
    beq lbl_802978C4
    lwz r28, 0x14(r26)
    addi r25, r27, 0x1
    addi r26, r27, 0x7
    addi r27, r27, 0x47
    b lbl_802978A4
lbl_8029785C:
    lwz r4, 0x0(r28)
    mr r3, r25
    li r5, 0x6
    addi r4, r4, 0x40
    bl memcpy
    lwz r4, 0x0(r28)
    mr r3, r26
    li r5, 0x40
    bl memcpy
    lwz r4, 0x0(r28)
    mr r3, r27
    li r5, 0x10
    addi r4, r4, 0x46
    bl memcpy
    lwz r28, 0x8(r28)
    addi r25, r25, 0x56
    addi r26, r26, 0x56
    addi r27, r27, 0x56
lbl_802978A4:
    cmpwi r28, 0x0
    bne lbl_8029785C
    bl OSDisableInterrupts
    addi r4, r31, 0x0
    lbz r25, 0x13(r4)
    bl OSRestoreInterrupts
    stb r25, 0x1f60(r31)
    b lbl_802978CC
lbl_802978C4:
    li r0, 0x0
    stb r0, 0x1f60(r31)
lbl_802978CC:
    li r0, 0x1
    addi r3, r30, 0x710
    stb r0, 0x11(r30)
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_80297204@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_80297204@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r30, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0xa
    bl OSSetPeriodicAlarm
    li r0, 0x4
    mr r3, r29
    stb r0, 0x708(r30)
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80297944
asm s8 fn_80297944(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    addi r4, r4, lbl_8040FC00@l
    lbz r31, 0x708(r4)
    bl OSRestoreInterrupts
    extsb r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80297980
asm u8 fn_80297980(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r5, lbl_8040FC00@ha
    addi r5, r5, lbl_8040FC00@l
    lhz r4, 0x744(r5)
    lhz r0, 0x746(r5)
    subf r0, r4, r0
    clrlwi r31, r0, 24
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802979C8
asm void fn_802979C8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    lis r7, lbl_8040FC00@ha
    stw r0, 0x24(r1)
    mr r8, r3
    addi r7, r7, lbl_8040FC00@l
    ble lbl_802979F4
    li r0, 0x2
    stb r0, 0x10(r1)
    b lbl_802979FC
lbl_802979F4:
    li r0, 0x0
    stb r0, 0x10(r1)
lbl_802979FC:
    li r6, 0x1
    li r0, 0x0
    sth r4, 0x8(r1)
    addi r5, r1, 0x8
    lbz r3, 0x70a(r7)
    sth r4, 0xa(r1)
    mr r4, r8
    sth r6, 0xc(r1)
    sth r0, 0xe(r1)
    bl BTM_SetPowerMode
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80297A34
asm s32 fn_80297A34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8036E62C@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r4, lbl_8036E62C@l
    opword 0x4CC63182
    bl fn_8029ABCC
    bl OSDisableInterrupts
    lis r4, lbl_8040FC00@ha
    addi r4, r4, lbl_8040FC00@l
    lwz r31, 0x4(r4)
    stw r30, 0x4(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
