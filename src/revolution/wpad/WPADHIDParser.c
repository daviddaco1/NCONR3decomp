#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK fn_8028E678(s8 *, s32, u8, void (*)(s32, s32)); /* extern */
f64 memcpy();       /* extern */
M2C_UNK memset();           /* extern */
M2C_UNK __wpadGetExtType();                 /* static */
extern M2C_UNK lbl_80341548;
extern M2C_UNK lbl_8036C5A0;
extern M2C_UNK lbl_8036C620;
extern M2C_UNK lbl_8036CA1C;
extern M2C_UNK lbl_8036CA30;
extern M2C_UNK lbl_8040C450;
extern M2C_UNK lbl_8040FB80;
extern s32 lbl_8040FBD0;
extern M2C_UNK lbl_8049DE00;
extern M2C_UNK lbl_8049DE04;
extern M2C_UNK lbl_8049DE08;
extern M2C_UNK lbl_8049DE0C;
extern M2C_UNK lbl_8049DE10;
extern M2C_UNK lbl_8049DE14;
extern u16 lbl_804A23B0;
extern u16 lbl_804A23B2;
extern u16 lbl_804A23B4;
extern u16 lbl_804A23B6;
extern u16 lbl_804A23B8;
extern u16 lbl_804A23BA;
extern u16 lbl_804A23BC;
extern u16 lbl_804A23BE;
extern f32 lbl_804A23C0;
extern f32 lbl_804A23C4;
extern f32 lbl_804A23C8;
extern f32 lbl_804A23CC;
extern f64 lbl_804A23D0;
extern f32 lbl_804A23D8;
extern f32 lbl_804A23DC;
extern f64 lbl_804A23E0;
extern f32 lbl_804A23E8;
extern f32 lbl_804A23EC;
extern f32 lbl_804A23F0;
extern f32 lbl_804A2400;

void __wpadAbortInitExtension();
void __wpadGetDevConfig();
void fn_8028FAA4();
void __wpadGetGameInfo();
s32 WPADiHIDParser();
void __a1_20_status_report();
void __a1_21_user_data();
void __a1_22_ack();
void fn_80290E90();
void __parse_dpdex_data();
void __parse_cl_data();
void __parse_vs_data();
void __a1_30_data_type();
void __a1_31_data_type();
void fn_80291D80();
void __a1_33_data_type();
void fn_802921E0();
void fn_802923C8();
void __a1_36_data_type();
void fn_80292880();
void __a1_3d_data_type();
void fn_80292D7C();
void fn_80292F38();
void __a1_unused_report();

void __wpadAbortInitExtension(s32 arg0, s32 arg1, M2C_UNK arg_sp0);

void __wpadGetDevConfig(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_8028FAA4(s32 arg0, s32 arg1, M2C_UNK arg_sp0);

/*
Decompilation failure in function __wpadGetExtType:

Found bctr instruction at WPADHIDParser.s line 1240, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void __wpadGetGameInfo(s32 arg0, s32 arg1, s32 arg2);

s32 WPADiHIDParser(s32 arg0, u8 *arg1, M2C_UNK arg_sp0);

void __a1_20_status_report(s32 arg0, s8 *arg1, s32 *arg2, M2C_UNK arg_sp0);

void __a1_21_user_data(s32 arg0, s8 *arg1, s32 *arg2, M2C_UNK arg_sp0);

void __a1_22_ack(s32 arg0, s8 *arg1, s32 *arg2, M2C_UNK arg_sp0);



void __parse_cl_data(s32 arg0, u16 **arg1, s32 arg2, s8 *arg3, u32 arg4);

// __parse_vs_data: definicion C reemplazada por asm (ver abajo)


void __a1_30_data_type(s32 arg0, s8 *arg1, s8 *arg2);

void __a1_31_data_type(s32 arg0, s8 *arg1, s8 *arg2);

void fn_80291D80(s32 arg0, s8 *arg1, u16 *arg2);

void __a1_33_data_type(s32 arg0, s8 *arg1, s8 *arg2);

void fn_802921E0(s32 arg0, s8 *arg1, s8 *arg2);

void fn_802923C8(s32 arg0, s8 *arg1, u16 *arg2, M2C_UNK arg_sp0);

void __a1_36_data_type(s32 arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_80292880(s32 arg0, s8 *arg1, u16 *arg2, M2C_UNK arg_sp0);

void __a1_3d_data_type(s32 arg0, s32 arg1, u16 *arg2);

void fn_80292D7C(s32 arg0, s8 *arg1, s8 *arg2, M2C_UNK arg_sp0);

void fn_80292F38(s32 arg0, s8 *arg1, s8 *arg2, M2C_UNK arg_sp0);

void __a1_unused_report(void) {

}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float __OSInIPL;
extern float lbl_804A23F8;
extern float lbl_804A2408;
extern u8 jumptable_8036C9D8[];
extern void WPADiCreateKey();
extern void WPADiCreateKeyFor3rd();
extern void WPADiDecode();
s32 WPADiHIDParser();
void __a1_20_status_report();
void __a1_21_user_data();
void __a1_22_ack();
void __a1_30_data_type();
void __a1_31_data_type();
void __a1_33_data_type();
void __a1_36_data_type();
void __a1_3d_data_type();
void __parse_cl_data();
void __parse_dpdex_data();
void __parse_vs_data(s32 arg0, s8 **arg1, s32 arg2, u16 **arg3, s32 arg4);
void __wpadAbortInitExtension();
void __wpadGetDevConfig();
M2C_UNK __wpadGetExtType();
void __wpadGetGameInfo();
extern void _restgpr_15();
extern void _restgpr_20();
extern void _restgpr_22();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_15();
extern void _savegpr_20();
extern void _savegpr_22();
extern void _savegpr_24();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_8028B4DC();
extern void fn_8028B5FC();
extern void fn_8028EDF8();
void fn_8028FAA4();
void fn_80290E90();
void fn_80291D80();
void fn_802921E0();
void fn_802923C8();
void fn_80292880();
void fn_80292D7C();
void fn_80292F38();
extern void fn_80294360();

// asm_to_cpp: __wpadAbortInitExtension
asm void __wpadAbortInitExtension() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8040C450@ha
    cmpwi r4, 0x0
    slwi r31, r3, 2
    mr r27, r3
    addi r30, r30, lbl_8040C450@l
    mr r28, r4
    lwzx r29, r30, r31
    beq lbl_8028EFA4
    addi r3, r29, 0x5ec
    bl fn_8028EDF8
    li r0, 0x0
    cmpwi r28, -0x1
    stb r0, 0x98d(r29)
    bne lbl_8028EEB4
    li r4, 0xfd
    b lbl_8028EF7C
lbl_8028EEB4:
    lwz r0, 0x840(r29)
    cmpwi r0, 0x0
    beq lbl_8028EF54
    la r4, lbl_8049DE08
    lbzx r3, r4, r27
    addi r0, r3, 0x1
    cmplwi r3, 0x20
    stbx r0, r4, r27
    bge lbl_8028EF4C
    lwzx r29, r30, r31
    addi r3, r29, 0x5ec
    bl fn_8028EDF8
    lis r30, __wpadAbortInitExtension@ha
    lwz r4, 0x8b8(r29)
    lbz r5, 0x98e(r29)
    addi r3, r29, 0x5ec
    addi r6, r30, __wpadAbortInitExtension@l
    bl fn_8028E678
    li r0, 0x1
    lis r31, 0x4a4
    stb r0, 0x98d(r29)
    addi r3, r29, 0x5ec
    addi r5, r31, 0xf0
    addi r6, r30, __wpadAbortInitExtension@l
    li r4, 0x55
    bl fn_8028E8E0
    addi r3, r29, 0x5ec
    addi r5, r31, 0xfb
    addi r6, r30, __wpadAbortInitExtension@l
    li r4, 0x0
    bl fn_8028E8E0
    addi r3, r29, 0x5ec
    addi r4, r29, 0x934
    addi r6, r31, 0xfa
    addi r7, r30, __wpadAbortInitExtension@l
    li r5, 0x6
    bl fn_8028EC4C
    b lbl_8028EFA4
lbl_8028EF4C:
    li r4, 0xfc
    b lbl_8028EF7C
lbl_8028EF54:
    lis r3, lbl_8036C620@ha
    addi r3, r3, lbl_8036C620@l
    opword 0x4CC63182
    bl fn_80294360
    lwz r4, 0x8b8(r29)
    addi r3, r29, 0x5ec
    lbz r5, 0x98e(r29)
    li r6, 0x0
    bl fn_8028E678
    b lbl_8028EFA4
lbl_8028EF7C:
    stb r4, 0x8c1(r29)
    li r0, 0x0
    stb r4, 0x990(r29)
    stb r0, 0x991(r29)
    lwz r12, 0x8a0(r29)
    cmpwi r12, 0x0
    beq lbl_8028EFA4
    mr r3, r27
    mtctr r12
    bctrl
lbl_8028EFA4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __wpadGetDevConfig
asm void __wpadGetDevConfig() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    addi r11, r1, 0xd0
    bl _savegpr_15
    lis r5, lbl_8040C450@ha
    lis r20, 0x4330
    slwi r29, r3, 2
    lhz r19, lbl_804A23B0
    addi r5, r5, lbl_8040C450@l
    lhz r18, lbl_804A23B2
    lwzx r28, r5, r29
    lis r30, lbl_8040FB80@ha
    lhz r17, lbl_804A23B4
    lis r31, lbl_8036C5A0@ha
    lhz r16, lbl_804A23B6
    mr r26, r3
    lhz r15, lbl_804A23B8
    li r9, 0x0
    lhz r12, lbl_804A23BA
    li r8, 0x1
    lhz r11, lbl_804A23BC
    li r7, 0x2
    lhz r10, lbl_804A23BE
    li r6, 0x3
    lwz r27, 0x974(r28)
    li r5, 0x212
    li r0, 0x27c
    cmpwi r4, 0x0
    sth r19, 0x854(r28)
    addi r30, r30, lbl_8040FB80@l
    addi r31, r31, lbl_8036C5A0@l
    sth r15, 0x856(r28)
    lbz r3, 0x8ca(r28)
    stw r20, 0x78(r1)
    sth r3, 0x858(r28)
    stb r9, 0x85a(r28)
    sth r18, 0x85c(r28)
    sth r12, 0x85e(r28)
    lbz r3, 0x8ca(r28)
    stw r20, 0x80(r1)
    sth r3, 0x860(r28)
    stb r8, 0x862(r28)
    sth r17, 0x864(r28)
    sth r11, 0x866(r28)
    lbz r3, 0x8ca(r28)
    sth r19, 0x10(r1)
    sth r3, 0x868(r28)
    stb r7, 0x86a(r28)
    sth r16, 0x86c(r28)
    sth r10, 0x86e(r28)
    lbz r3, 0x8ca(r28)
    sth r18, 0x12(r1)
    sth r3, 0x870(r28)
    stb r6, 0x872(r28)
    sth r5, 0x874(r28)
    sth r5, 0x876(r28)
    sth r5, 0x878(r28)
    sth r0, 0x87a(r28)
    sth r0, 0x87c(r28)
    sth r0, 0x87e(r28)
    stb r9, 0x881(r28)
    sth r17, 0x14(r1)
    sth r16, 0x16(r1)
    sth r15, 0x8(r1)
    sth r12, 0xa(r1)
    sth r11, 0xc(r1)
    sth r10, 0xe(r1)
    stb r9, 0x880(r28)
    bne lbl_8028FA6C
    lwz r0, 0x8e0(r28)
    cmpwi r0, 0x0
    bne lbl_8028F464
    li r15, 0x0
    lis r20, 0x8000
lbl_8028F108:
    clrlwi r0, r15, 24
    li r3, 0x0
    mulli r16, r0, 0xb
    addi r5, r16, 0xa
    cmpw r16, r5
    mr r4, r16
    bge lbl_8028F250
    addi r6, r16, 0x2
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bgt lbl_8028F14C
    subi r0, r20, 0x2
    cmpw r5, r0
    bgt lbl_8028F14C
    li r10, 0x1
lbl_8028F14C:
    cmpwi r10, 0x0
    beq lbl_8028F164
    subi r0, r20, 0x2
    cmpw r16, r0
    bgt lbl_8028F164
    li r9, 0x1
lbl_8028F164:
    cmpwi r9, 0x0
    beq lbl_8028F17C
    addis r0, r16, 0x8000
    cmplwi r0, 0x0
    beq lbl_8028F17C
    li r8, 0x1
lbl_8028F17C:
    cmpwi r8, 0x0
    beq lbl_8028F1B8
    addi r5, r16, 0xa
    neg r0, r16
    clrrwi r8, r5, 31
    clrrwi r0, r0, 31
    li r5, 0x1
    cmpw r8, r0
    bne lbl_8028F1AC
    cmpwi r8, 0x0
    beq lbl_8028F1AC
    li r5, 0x0
lbl_8028F1AC:
    cmpwi r5, 0x0
    beq lbl_8028F1B8
    li r7, 0x1
lbl_8028F1B8:
    cmpwi r7, 0x0
    beq lbl_8028F224
    addi r0, r6, 0x7
    subf r0, r16, r0
    srwi r0, r0, 3
    mtctr r0
    cmpw r16, r6
    bge lbl_8028F224
lbl_8028F1D8:
    add r6, r27, r4
    lbzx r5, r27, r4
    lbz r0, 0x1(r6)
    addi r4, r4, 0x8
    add r3, r3, r5
    lbz r5, 0x2(r6)
    add r3, r3, r0
    lbz r0, 0x3(r6)
    add r3, r3, r5
    lbz r5, 0x4(r6)
    add r3, r3, r0
    lbz r0, 0x5(r6)
    add r3, r3, r5
    lbz r5, 0x6(r6)
    add r3, r3, r0
    lbz r0, 0x7(r6)
    add r3, r3, r5
    add r3, r3, r0
    bdnz lbl_8028F1D8
lbl_8028F224:
    addi r6, r16, 0xa
    add r5, r27, r4
    subf r0, r4, r6
    mtctr r0
    cmpw r4, r6
    bge lbl_8028F250
lbl_8028F23C:
    lbz r0, 0x0(r5)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    add r3, r3, r0
    bdnz lbl_8028F23C
lbl_8028F250:
    add r21, r27, r16
    addi r3, r3, 0x55
    lbz r0, 0xa(r21)
    clrlwi r3, r3, 24
    cmplw r3, r0
    bne lbl_8028F448
    addi r3, r31, 0xac
    opword 0x4CC63182
    bl fn_80294360
    lbz r11, 0x2(r21)
    li r8, 0x0
    lbz r7, 0x1(r21)
    li r5, 0x1
    lbz r0, 0x4(r21)
    rlwinm r4, r11, 2, 22, 23
    extsh r7, r7
    lbz r17, 0x6(r21)
    or r4, r7, r4
    extsh r15, r0
    rlwinm r0, r11, 6, 22, 23
    lbz r12, 0x0(r21)
    or r0, r15, r0
    extsh r4, r4
    subfic r10, r4, 0x2ff
    lbz r7, 0x3(r21)
    lbz r9, 0x8ca(r28)
    extsh r6, r0
    subfic r6, r6, 0x2ff
    extsh r20, r7
    clrlslwi r7, r11, 30, 8
    li r0, 0x2
    li r15, 0x3
    lbz r3, 0x7(r21)
    extsh r19, r17
    or r7, r20, r7
    rlwinm r17, r3, 2, 22, 23
    lbz r16, 0x9(r21)
    or r19, r19, r17
    lbz r4, 0x5(r21)
    extsh r17, r16
    rlwinm r16, r3, 6, 22, 23
    lbz r18, 0x8(r21)
    or r16, r17, r16
    extsh r19, r19
    extsh r12, r12
    subfic r17, r19, 0x2ff
    rlwinm r21, r11, 4, 22, 23
    or r11, r12, r21
    extsh r16, r16
    subfic r12, r16, 0x2ff
    extsh r19, r4
    rlwinm r4, r3, 4, 22, 23
    extsh r16, r18
    or r19, r19, r4
    clrlslwi r3, r3, 30, 8
    or r16, r16, r3
    li r4, 0x4
    sth r11, 0x58(r1)
    addi r3, r1, 0x58
    sth r10, 0x5a(r1)
    sth r9, 0x5c(r1)
    stb r8, 0x5e(r1)
    sth r7, 0x60(r1)
    sth r6, 0x62(r1)
    sth r9, 0x64(r1)
    stb r5, 0x66(r1)
    sth r19, 0x68(r1)
    sth r17, 0x6a(r1)
    sth r9, 0x6c(r1)
    stb r0, 0x6e(r1)
    sth r16, 0x70(r1)
    sth r12, 0x72(r1)
    sth r9, 0x74(r1)
    stb r15, 0x76(r1)
    mtctr r4
lbl_8028F37C:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    bge lbl_8028F3AC
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    bge lbl_8028F3AC
    sth r4, 0x854(r28)
    lhz r4, 0x4(r3)
    sth r0, 0x856(r28)
    lbz r0, 0x6(r3)
    sth r4, 0x858(r28)
    stb r0, 0x85a(r28)
lbl_8028F3AC:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    ble lbl_8028F3DC
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    bge lbl_8028F3DC
    sth r4, 0x85c(r28)
    lhz r4, 0x4(r3)
    sth r0, 0x85e(r28)
    lbz r0, 0x6(r3)
    sth r4, 0x860(r28)
    stb r0, 0x862(r28)
lbl_8028F3DC:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    ble lbl_8028F40C
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    ble lbl_8028F40C
    sth r4, 0x864(r28)
    lhz r4, 0x4(r3)
    sth r0, 0x866(r28)
    lbz r0, 0x6(r3)
    sth r4, 0x868(r28)
    stb r0, 0x86a(r28)
lbl_8028F40C:
    lha r4, 0x0(r3)
    cmpwi r4, 0x200
    bge lbl_8028F43C
    lha r0, 0x2(r3)
    cmpwi r0, 0x180
    ble lbl_8028F43C
    sth r4, 0x86c(r28)
    lhz r4, 0x4(r3)
    sth r0, 0x86e(r28)
    lbz r0, 0x6(r3)
    sth r4, 0x870(r28)
    stb r0, 0x872(r28)
lbl_8028F43C:
    addi r3, r3, 0x8
    bdnz lbl_8028F37C
    b lbl_8028F470
lbl_8028F448:
    addi r3, r31, 0xc0
    opword 0x4CC63182
    bl fn_80294360
    addi r15, r15, 0x1
    cmplwi r15, 0x2
    blt lbl_8028F108
    b lbl_8028F470
lbl_8028F464:
    addi r3, r31, 0xd8
    opword 0x4CC63182
    bl fn_80294360
lbl_8028F470:
    lfs f31, lbl_804A23C0
    addi r21, r1, 0x48
    lfd f29, lbl_804A23F8
    addi r20, r1, 0x38
    fmr f30, f31
    addi r17, r1, 0x10
    addi r16, r1, 0x8
    li r15, 0x0
lbl_8028F490:
    clrlslwi r0, r15, 24, 3
    clrlslwi r5, r15, 24, 1
    add r3, r28, r0
    lhax r4, r17, r5
    lha r8, 0x854(r3)
    clrlslwi r7, r15, 24, 2
    lha r9, 0x856(r3)
    addi r3, r31, 0x11c
    lhax r0, r16, r5
    xoris r6, r8, 0x8000
    xoris r5, r9, 0x8000
    stw r6, 0x7c(r1)
    subf r4, r4, r8
    subf r0, r0, r9
    stw r5, 0x84(r1)
    xoris r4, r4, 0x8000
    lfd f1, 0x78(r1)
    xoris r0, r0, 0x8000
    lfd f0, 0x80(r1)
    stw r4, 0x7c(r1)
    fsubs f3, f1, f29
    fsubs f2, f0, f29
    stw r0, 0x84(r1)
    lfd f1, 0x78(r1)
    lfd f0, 0x80(r1)
    fsubs f1, f1, f29
    stfsx f3, r21, r7
    fsubs f0, f0, f29
    stfsx f2, r20, r7
    frsp f2, f2
    fadds f30, f30, f1
    fadds f31, f31, f0
    lfsx f1, r21, r7
    opword 0x4CC63242
    bl fn_80294360
    addi r15, r15, 0x1
    cmplwi r15, 0x4
    blt lbl_8028F490
    lfs f0, lbl_804A23C4
    lfd f1, lbl_804A23D0
    fmuls f30, f30, f0
    fmuls f31, f31, f0
    bl atan
    lfs f2, lbl_804A23C8
    frsp f29, f1
    lfs f0, lbl_804A23CC
    fadds f1, f2, f30
    fdivs f1, f1, f0
    bl atan
    frsp f0, f1
    lfd f1, lbl_804A23E0
    fsubs f28, f0, f29
    bl atan
    lfs f2, lbl_804A23D8
    frsp f29, f1
    lfs f0, lbl_804A23DC
    fadds f1, f2, f31
    fdivs f1, f1, f0
    bl atan
    frsp f0, f1
    slwi r16, r26, 2
    fmr f1, f28
    addi r17, r30, 0x0
    fsubs f29, f0, f29
    bl tan
    frsp f3, f1
    lfs f2, lbl_804A23E8
    lfs f0, lbl_804A23CC
    fmr f1, f29
    addi r15, r30, 0x10
    fmuls f2, f2, f3
    fmuls f0, f0, f2
    stfsx f0, r17, r16
    bl tan
    frsp f4, f1
    lfs f3, lbl_804A23E8
    lfs f0, lbl_804A23DC
    fmr f1, f30
    fmr f2, f31
    addi r3, r31, 0x130
    fmuls f3, f3, f4
    fmuls f0, f0, f3
    stfsx f0, r15, r16
    opword 0x4CC63242
    bl fn_80294360
    fmr f1, f28
    addi r3, r31, 0x150
    fmr f2, f29
    opword 0x4CC63242
    bl fn_80294360
    lfsx f1, r17, r16
    addi r3, r31, 0x170
    lfsx f2, r15, r16
    opword 0x4CC63242
    bl fn_80294360
    lfs f2, lbl_804A23C0
    addi r21, r30, 0x20
    lfs f0, 0x48(r1)
    addi r20, r30, 0x30
    lfsx f4, r17, r16
    addi r3, r31, 0x1a4
    stfsx f2, r21, r16
    fadds f12, f0, f4
    lfs f0, 0x38(r1)
    lfsx f11, r15, r16
    lfsx f1, r21, r16
    fadds f10, f0, f11
    stfsx f2, r20, r16
    frsp f0, f2
    fadds f2, f1, f12
    lfs f1, 0x4c(r1)
    stfs f12, 0x48(r1)
    fadds f3, f0, f10
    lfs f0, 0x3c(r1)
    fadds f9, f1, f4
    fadds f8, f0, f11
    stfsx f2, r21, r16
    frsp f1, f3
    lfsx f2, r21, r16
    lfs f0, 0x50(r1)
    fadds f2, f2, f9
    stfsx f3, r20, r16
    fadds f7, f1, f8
    lfs f1, 0x54(r1)
    fadds f6, f0, f4
    lfs f0, 0x40(r1)
    fadds f5, f0, f11
    stfsx f2, r21, r16
    fadds f4, f1, f4
    lfs f0, 0x44(r1)
    lfsx f1, r21, r16
    fadds f3, f0, f11
    fadds f1, f1, f6
    stfsx f7, r20, r16
    frsp f0, f7
    lfs f2, lbl_804A23C4
    stfs f10, 0x38(r1)
    stfsx f1, r21, r16
    fadds f0, f0, f5
    lfsx f1, r21, r16
    stfsx f0, r20, r16
    frsp f0, f0
    fadds f1, f1, f4
    stfs f9, 0x4c(r1)
    fadds f0, f0, f3
    stfsx f1, r21, r16
    lfsx f1, r21, r16
    stfsx f0, r20, r16
    frsp f0, f0
    fmuls f1, f1, f2
    stfs f8, 0x3c(r1)
    fmuls f2, f0, f2
    stfsx f1, r21, r16
    stfs f6, 0x50(r1)
    lfsx f1, r21, r16
    stfs f5, 0x40(r1)
    stfs f4, 0x54(r1)
    stfs f3, 0x44(r1)
    stfsx f2, r20, r16
    opword 0x4CC63242
    bl fn_80294360
    lfs f0, lbl_804A23C0
    addi r22, r30, 0x40
    lfd f29, lbl_804A23F8
    addi r17, r1, 0x28
    stfsx f0, r22, r16
    addi r23, r1, 0x38
    lfs f31, lbl_804A23EC
    addi r24, r1, 0x48
    lfs f30, lbl_804A23F0
    addi r18, r1, 0x18
    addi r25, r1, 0x8
    addi r26, r1, 0x10
    li r15, 0x0
lbl_8028F748:
    clrlslwi r19, r15, 24, 2
    lfsx f2, r20, r16
    lfsx f3, r23, r19
    lfsx f1, r24, r19
    lfsx f0, r21, r16
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    fdivs f1, f2, f0
    bl atan
    clrlslwi r0, r15, 24, 1
    frsp f0, f1
    lhax r3, r25, r0
    lhax r0, r26, r0
    xoris r3, r3, 0x8000
    stfsx f0, r17, r19
    xoris r0, r0, 0x8000
    stw r3, 0x7c(r1)
    stw r0, 0x84(r1)
    lfd f1, 0x78(r1)
    lfd f0, 0x80(r1)
    fsubs f1, f1, f29
    fsubs f0, f0, f29
    fsubs f1, f1, f31
    fsubs f0, f0, f30
    fdivs f1, f1, f0
    bl atan
    frsp f2, f1
    lfsx f1, r17, r19
    addi r15, r15, 0x1
    lfsx f0, r22, r16
    cmplwi r15, 0x4
    fsubs f1, f1, f2
    stfsx f2, r18, r19
    fadds f0, f0, f1
    stfsx f0, r22, r16
    blt lbl_8028F748
    addi r4, r30, 0x40
    lfs f0, lbl_804A23C4
    lfsx f1, r4, r29
    addi r3, r31, 0x1c0
    fmuls f1, f1, f0
    stfsx f1, r4, r29
    opword 0x4CC63242
    bl fn_80294360
    li r16, 0x0
    lis r26, 0x8000
lbl_8028F800:
    lwz r0, 0x8e0(r28)
    clrlwi r3, r16, 24
    mulli r15, r3, 0xa
    cmpwi r0, 0x0
    li r3, 0x0
    bne lbl_8028F81C
    addi r15, r15, 0x16
lbl_8028F81C:
    addi r5, r15, 0x9
    mr r4, r15
    cmpw r15, r5
    bge lbl_8028F958
    addi r6, r15, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bgt lbl_8028F854
    subi r0, r26, 0x2
    cmpw r5, r0
    bgt lbl_8028F854
    li r10, 0x1
lbl_8028F854:
    cmpwi r10, 0x0
    beq lbl_8028F86C
    subi r0, r26, 0x2
    cmpw r15, r0
    bgt lbl_8028F86C
    li r9, 0x1
lbl_8028F86C:
    cmpwi r9, 0x0
    beq lbl_8028F884
    addis r0, r15, 0x8000
    cmplwi r0, 0x0
    beq lbl_8028F884
    li r8, 0x1
lbl_8028F884:
    cmpwi r8, 0x0
    beq lbl_8028F8C0
    addi r5, r15, 0x9
    neg r0, r15
    clrrwi r8, r5, 31
    clrrwi r0, r0, 31
    li r5, 0x1
    cmpw r8, r0
    bne lbl_8028F8B4
    cmpwi r8, 0x0
    beq lbl_8028F8B4
    li r5, 0x0
lbl_8028F8B4:
    cmpwi r5, 0x0
    beq lbl_8028F8C0
    li r7, 0x1
lbl_8028F8C0:
    cmpwi r7, 0x0
    beq lbl_8028F92C
    addi r0, r6, 0x7
    subf r0, r15, r0
    srwi r0, r0, 3
    mtctr r0
    cmpw r15, r6
    bge lbl_8028F92C
lbl_8028F8E0:
    add r6, r27, r4
    lbzx r5, r27, r4
    lbz r0, 0x1(r6)
    addi r4, r4, 0x8
    add r3, r3, r5
    lbz r5, 0x2(r6)
    add r3, r3, r0
    lbz r0, 0x3(r6)
    add r3, r3, r5
    lbz r5, 0x4(r6)
    add r3, r3, r0
    lbz r0, 0x5(r6)
    add r3, r3, r5
    lbz r5, 0x6(r6)
    add r3, r3, r0
    lbz r0, 0x7(r6)
    add r3, r3, r5
    add r3, r3, r0
    bdnz lbl_8028F8E0
lbl_8028F92C:
    addi r6, r15, 0x9
    add r5, r27, r4
    subf r0, r4, r6
    mtctr r0
    cmpw r4, r6
    bge lbl_8028F958
lbl_8028F944:
    lbz r0, 0x0(r5)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    add r3, r3, r0
    bdnz lbl_8028F944
lbl_8028F958:
    add r17, r27, r15
    addi r3, r3, 0x55
    lbz r0, 0x9(r17)
    clrlwi r3, r3, 24
    cmplw r3, r0
    bne lbl_8028FA10
    addi r3, r31, 0x1d4
    opword 0x4CC63182
    bl fn_80294360
    lbz r0, 0x3(r17)
    lbz r3, 0x0(r17)
    extrwi r0, r0, 2, 26
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x874(r28)
    lbz r0, 0x3(r17)
    lbz r3, 0x1(r17)
    extrwi r0, r0, 2, 28
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x876(r28)
    lbz r0, 0x3(r17)
    lbz r3, 0x2(r17)
    clrlwi r0, r0, 30
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x878(r28)
    lbz r0, 0x7(r17)
    lbz r3, 0x4(r17)
    extrwi r0, r0, 2, 26
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x87a(r28)
    lbz r0, 0x7(r17)
    lbz r3, 0x5(r17)
    extrwi r0, r0, 2, 28
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x87c(r28)
    lbz r0, 0x7(r17)
    lbz r3, 0x6(r17)
    clrlwi r0, r0, 30
    rlwimi r0, r3, 2, 22, 29
    sth r0, 0x87e(r28)
    lbz r0, 0x8(r17)
    clrlwi r0, r0, 25
    stb r0, 0x881(r28)
    lbz r0, 0x8(r17)
    rlwinm r0, r0, 0, 24, 24
    stb r0, 0x880(r28)
    b lbl_8028FA28
lbl_8028FA10:
    addi r3, r31, 0x1e0
    opword 0x4CC63182
    bl fn_80294360
    addi r16, r16, 0x1
    cmplwi r16, 0x2
    blt lbl_8028F800
lbl_8028FA28:
    lha r4, 0x874(r28)
    addi r3, r31, 0x1f0
    lha r5, 0x876(r28)
    lha r6, 0x878(r28)
    opword 0x4CC63182
    bl fn_80294360
    lha r4, 0x87a(r28)
    addi r3, r31, 0x218
    lha r5, 0x87c(r28)
    lha r6, 0x87e(r28)
    opword 0x4CC63182
    bl fn_80294360
    lbz r4, 0x881(r28)
    addi r3, r31, 0x240
    lbz r5, 0x880(r28)
    opword 0x4CC63182
    bl fn_80294360
lbl_8028FA6C:
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    addi r11, r1, 0xd0
    lfd f28, 0xd0(r1)
    bl _restgpr_15
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_8028FAA4
asm void fn_8028FAA4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r5, lbl_8040C450@ha
    lis r31, lbl_8036C5A0@ha
    slwi r0, r3, 2
    cmpwi r4, 0x0
    addi r5, r5, lbl_8040C450@l
    mr r29, r3
    lwzx r30, r5, r0
    addi r31, r31, lbl_8036C5A0@l
    li r0, -0x1
    lwz r5, 0x974(r30)
    beq lbl_8028FB0C
    bge lbl_8028FB1C
    cmpwi r4, -0x1
    bge lbl_8028FAF4
    b lbl_8028FB1C
lbl_8028FAF4:
    li r6, 0xfd
    li r4, 0x0
    stb r6, 0x8c1(r30)
    stb r6, 0x990(r30)
    stb r4, 0x991(r30)
    b lbl_8028FB30
lbl_8028FB0C:
    la r4, lbl_8049DE14
    lbzx r4, r4, r3
    stb r4, 0x8c1(r30)
    b lbl_8028FB30
lbl_8028FB1C:
    li r6, 0xfc
    li r4, 0x0
    stb r6, 0x8c1(r30)
    stb r6, 0x990(r30)
    stb r4, 0x991(r30)
lbl_8028FB30:
    la r4, lbl_8049DE10
    lbzx r3, r4, r3
    stb r3, 0x8c2(r30)
    lbz r3, 0x8c1(r30)
    addi r3, r3, 0xff
    clrlwi r3, r3, 24
    cmplwi r3, 0x1
    bgt lbl_8028FF88
    li r6, 0x0
    li r4, 0x0
    lis r3, 0x8000
lbl_8028FB5C:
    addi r10, r4, 0xe
    mr r7, r4
    cmpw r4, r10
    li r8, 0x0
    bge lbl_8028FC9C
    addi r11, r4, 0x6
    li r12, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    bgt lbl_8028FB98
    subi r9, r3, 0x2
    cmpw r10, r9
    bgt lbl_8028FB98
    li r26, 0x1
lbl_8028FB98:
    cmpwi r26, 0x0
    beq lbl_8028FBB0
    subi r9, r3, 0x2
    cmpw r4, r9
    bgt lbl_8028FBB0
    li r27, 0x1
lbl_8028FBB0:
    cmpwi r27, 0x0
    beq lbl_8028FBC8
    addis r9, r4, 0x8000
    cmplwi r9, 0x0
    beq lbl_8028FBC8
    li r28, 0x1
lbl_8028FBC8:
    cmpwi r28, 0x0
    beq lbl_8028FC04
    addi r10, r4, 0xe
    neg r9, r4
    clrrwi r26, r10, 31
    clrrwi r9, r9, 31
    li r10, 0x1
    cmpw r26, r9
    bne lbl_8028FBF8
    cmpwi r26, 0x0
    beq lbl_8028FBF8
    li r10, 0x0
lbl_8028FBF8:
    cmpwi r10, 0x0
    beq lbl_8028FC04
    li r12, 0x1
lbl_8028FC04:
    cmpwi r12, 0x0
    beq lbl_8028FC70
    addi r9, r11, 0x7
    subf r9, r4, r9
    srwi r9, r9, 3
    mtctr r9
    cmpw r4, r11
    bge lbl_8028FC70
lbl_8028FC24:
    add r11, r5, r7
    lbzx r10, r5, r7
    lbz r9, 0x1(r11)
    addi r7, r7, 0x8
    add r8, r8, r10
    lbz r10, 0x2(r11)
    add r8, r8, r9
    lbz r9, 0x3(r11)
    add r8, r8, r10
    lbz r10, 0x4(r11)
    add r8, r8, r9
    lbz r9, 0x5(r11)
    add r8, r8, r10
    lbz r10, 0x6(r11)
    add r8, r8, r9
    lbz r9, 0x7(r11)
    add r8, r8, r10
    add r8, r8, r9
    bdnz lbl_8028FC24
lbl_8028FC70:
    addi r11, r4, 0xe
    add r10, r5, r7
    subf r9, r7, r11
    mtctr r9
    cmpw r7, r11
    bge lbl_8028FC9C
lbl_8028FC88:
    lbz r9, 0x0(r10)
    addi r7, r7, 0x1
    addi r10, r10, 0x1
    add r8, r8, r9
    bdnz lbl_8028FC88
lbl_8028FC9C:
    add r10, r5, r4
    addi r9, r8, 0x55
    lbz r7, 0xe(r10)
    clrlwi r9, r9, 24
    cmplw r9, r7
    bne lbl_8028FCCC
    addi r8, r8, 0xaa
    lbz r7, 0xf(r10)
    clrlwi r8, r8, 24
    cmplw r8, r7
    bne lbl_8028FCCC
    mr r0, r4
lbl_8028FCCC:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    cmpwi r6, 0x2
    blt lbl_8028FB5C
    lbz r3, 0x8c1(r30)
    cmpwi r3, 0x2
    beq lbl_8028FE64
    bge lbl_8028FF88
    cmpwi r3, 0x1
    bge lbl_8028FCF8
    b lbl_8028FF88
lbl_8028FCF8:
    cmpwi r0, 0x0
    bge lbl_8028FD30
    addi r3, r31, 0x25c
    opword 0x4CC63182
    bl fn_80294360
    li r3, 0x200
    li r0, 0x2cc
    sth r3, 0x88e(r30)
    sth r3, 0x890(r30)
    sth r3, 0x892(r30)
    sth r0, 0x894(r30)
    sth r0, 0x896(r30)
    sth r0, 0x898(r30)
    b lbl_8028FF88
lbl_8028FD30:
    add r3, r0, r5
    lbzx r4, r5, r0
    lbz r0, 0x3(r3)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x88e(r30)
    lbz r0, 0x3(r3)
    lbz r4, 0x1(r3)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x890(r30)
    lbz r0, 0x3(r3)
    lbz r4, 0x2(r3)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x892(r30)
    lbz r0, 0x7(r3)
    lbz r4, 0x4(r3)
    extrwi r0, r0, 2, 26
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x894(r30)
    lbz r0, 0x7(r3)
    lbz r4, 0x5(r3)
    extrwi r0, r0, 2, 28
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x896(r30)
    lbz r0, 0x7(r3)
    lbz r4, 0x6(r3)
    clrlwi r0, r0, 30
    rlwimi r0, r4, 2, 22, 29
    sth r0, 0x898(r30)
    lbz r0, 0x8(r3)
    extsb r0, r0
    sth r0, 0x886(r30)
    lbz r0, 0x9(r3)
    extsb r0, r0
    sth r0, 0x884(r30)
    lbz r0, 0xb(r3)
    extsb r0, r0
    sth r0, 0x88c(r30)
    lbz r0, 0xc(r3)
    extsb r0, r0
    sth r0, 0x88a(r30)
    lbz r0, 0x911(r30)
    cmpwi r0, 0x0
    bne lbl_8028FE00
    lbz r0, 0xa(r3)
    extsb r0, r0
    sth r0, 0x882(r30)
    lbz r0, 0xd(r3)
    extsb r0, r0
    sth r0, 0x888(r30)
lbl_8028FE00:
    lha r4, 0x88e(r30)
    addi r3, r31, 0x270
    lha r5, 0x890(r30)
    lha r6, 0x892(r30)
    opword 0x4CC63182
    bl fn_80294360
    lha r4, 0x894(r30)
    addi r3, r31, 0x2a0
    lha r5, 0x896(r30)
    lha r6, 0x898(r30)
    opword 0x4CC63182
    bl fn_80294360
    lha r4, 0x882(r30)
    addi r3, r31, 0x2d0
    lha r5, 0x886(r30)
    lha r6, 0x884(r30)
    opword 0x4CC63182
    bl fn_80294360
    lha r4, 0x888(r30)
    addi r3, r31, 0x2f8
    lha r5, 0x88c(r30)
    lha r6, 0x88a(r30)
    opword 0x4CC63182
    bl fn_80294360
    b lbl_8028FF88
lbl_8028FE64:
    lbzx r4, r5, r0
    add r3, r0, r5
    extsb r0, r4
    sth r0, 0x886(r30)
    lbz r0, 0x1(r3)
    extsb r0, r0
    sth r0, 0x884(r30)
    lbz r0, 0x3(r3)
    extsb r0, r0
    sth r0, 0x88c(r30)
    lbz r0, 0x4(r3)
    extsb r0, r0
    sth r0, 0x88a(r30)
    lbz r0, 0x6(r3)
    extsb r0, r0
    sth r0, 0x892(r30)
    lbz r0, 0x7(r3)
    extsb r0, r0
    sth r0, 0x890(r30)
    lbz r0, 0x9(r3)
    extsb r0, r0
    sth r0, 0x898(r30)
    lbz r0, 0xa(r3)
    extsb r0, r0
    sth r0, 0x896(r30)
    lbz r0, 0x911(r30)
    cmpwi r0, 0x0
    bne lbl_8028FF14
    lbz r0, 0x2(r3)
    extsb r0, r0
    sth r0, 0x882(r30)
    lbz r0, 0x5(r3)
    extsb r0, r0
    sth r0, 0x888(r30)
    lbz r0, 0x8(r3)
    extsb r0, r0
    sth r0, 0x88e(r30)
    lbz r0, 0xb(r3)
    extsb r0, r0
    sth r0, 0x894(r30)
    lbz r0, 0xc(r3)
    stb r0, 0x89a(r30)
    lbz r0, 0xd(r3)
    stb r0, 0x89b(r30)
lbl_8028FF14:
    lha r4, 0x882(r30)
    addi r3, r31, 0x320
    lha r5, 0x886(r30)
    lha r6, 0x884(r30)
    opword 0x4CC63182
    bl fn_80294360
    lha r4, 0x888(r30)
    addi r3, r31, 0x348
    lha r5, 0x88c(r30)
    lha r6, 0x88a(r30)
    opword 0x4CC63182
    bl fn_80294360
    lha r4, 0x88e(r30)
    addi r3, r31, 0x370
    lha r5, 0x892(r30)
    lha r6, 0x890(r30)
    opword 0x4CC63182
    bl fn_80294360
    lha r4, 0x894(r30)
    addi r3, r31, 0x398
    lha r5, 0x898(r30)
    lha r6, 0x896(r30)
    opword 0x4CC63182
    bl fn_80294360
    lbz r4, 0x89a(r30)
    addi r3, r31, 0x3c0
    lbz r5, 0x89b(r30)
    opword 0x4CC63182
    bl fn_80294360
lbl_8028FF88:
    lbz r4, 0x8c1(r30)
    cmplwi r4, 0x3
    bne lbl_8028FFA0
    lhz r0, 0x980(r30)
    cmplwi r0, 0x1
    beq lbl_8028FFCC
lbl_8028FFA0:
    lwz r12, 0x89c(r30)
    cmpwi r12, 0x0
    beq lbl_8028FFCC
    lwz r0, 0x8a0(r30)
    cmplw r12, r0
    bne lbl_8028FFCC
    mr r3, r29
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x89c(r30)
lbl_8028FFCC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __wpadGetExtType
asm M2C_UNK __wpadGetExtType() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r5, lbl_8040C450@ha
    lis r30, lbl_8036C5A0@ha
    slwi r0, r3, 2
    cmpwi r4, 0x0
    addi r5, r5, lbl_8040C450@l
    mr r26, r3
    lwzx r28, r5, r0
    addi r30, r30, lbl_8036C5A0@l
    lwz r29, 0x974(r28)
    addi r27, r28, 0x5ec
    bne lbl_802903EC
    lbz r4, 0x5(r29)
    addi r3, r30, 0x3d8
    lbz r5, 0x0(r29)
    opword 0x4CC63182
    bl fn_80294360
    la r4, lbl_8049DE0C
    li r0, 0x0
    stbx r0, r4, r26
    la r31, lbl_8049DE10
    lbz r0, 0x4(r29)
    stbx r0, r31, r26
    lbz r0, 0x5(r29)
    cmplwi r0, 0x10
    bgt lbl_802901AC
    lis r3, jumptable_8036C9D8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8036C9D8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    la r3, lbl_8049DE14
    li r0, 0x1
    stbx r0, r3, r26
    add r29, r3, r26
    b lbl_802901BC
    la r3, lbl_8049DE14
    li r0, 0x2
    stbx r0, r3, r26
    add r29, r3, r26
    b lbl_802901BC
    bl fn_802943B0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_802900B0
    li r3, 0x3
lbl_802900B0:
    la r0, lbl_8049DE14
    stbx r3, r26, r0
    add r29, r0, r26
    b lbl_802901BC
    bl fn_802876E0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_802900D4
    li r3, 0x4
lbl_802900D4:
    la r0, lbl_8049DE14
    stbx r3, r26, r0
    add r29, r0, r26
    b lbl_802901BC
    bl fn_802876E8
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_802900F8
    li r3, 0x10
lbl_802900F8:
    la r0, lbl_8049DE14
    stbx r3, r26, r0
    add r29, r0, r26
    b lbl_802901BC
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_80290134
    la r3, lbl_8049DE14
    li r0, 0x1
    add r29, r3, r26
    stbx r0, r31, r26
    li r3, 0x2
    stb r3, 0x0(r29)
    stbx r0, r4, r26
    b lbl_802901BC
lbl_80290134:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x1
    beq lbl_80290174
    bge lbl_80290198
    cmpwi r0, 0x0
    bge lbl_80290150
    b lbl_80290198
lbl_80290150:
    bl fn_802876F0
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_80290164
    li r3, 0x11
lbl_80290164:
    la r0, lbl_8049DE14
    stbx r3, r26, r0
    add r29, r0, r26
    b lbl_802901BC
lbl_80290174:
    bl fn_802876F8
    cmpwi r3, 0x0
    li r3, 0xfb
    beq lbl_80290188
    li r3, 0x12
lbl_80290188:
    la r0, lbl_8049DE14
    stbx r3, r26, r0
    add r29, r0, r26
    b lbl_802901BC
lbl_80290198:
    la r3, lbl_8049DE14
    li r0, 0xfb
    stbx r0, r3, r26
    add r29, r3, r26
    b lbl_802901BC
lbl_802901AC:
    la r3, lbl_8049DE14
    li r0, 0xfb
    stbx r0, r3, r26
    add r29, r3, r26
lbl_802901BC:
    lbz r0, 0x0(r29)
    cmplwi r0, 0x2
    bne lbl_802901E4
    lbzx r0, r31, r26
    cmplwi r0, 0x1
    blt lbl_802901DC
    cmplwi r0, 0x3
    ble lbl_802901E4
lbl_802901DC:
    li r0, 0xfc
    stb r0, 0x0(r29)
lbl_802901E4:
    lbz r4, 0x0(r29)
    addi r3, r30, 0x3f0
    opword 0x4CC63182
    bl fn_80294360
    lbzx r4, r31, r26
    addi r3, r30, 0x3fc
    opword 0x4CC63182
    bl fn_80294360
    lbz r4, 0x990(r28)
    addi r3, r30, 0x408
    opword 0x4CC63182
    bl fn_80294360
    lbz r0, 0x991(r28)
    cmpwi r0, 0x0
    beq lbl_80290254
    lbz r3, 0x990(r28)
    lbz r0, 0x0(r29)
    cmplw r3, r0
    bne lbl_80290254
    lbz r0, 0x911(r28)
    cmpwi r0, 0x0
    beq lbl_80290268
    addi r3, r30, 0x414
    opword 0x4CC63182
    bl fn_80294360
    li r0, 0x1
    stb r0, 0x911(r28)
    b lbl_80290268
lbl_80290254:
    addi r3, r30, 0x428
    opword 0x4CC63182
    bl fn_80294360
    li r0, 0x0
    stb r0, 0x911(r28)
lbl_80290268:
    lbz r3, 0x0(r29)
    li r0, 0x0
    stb r3, 0x990(r28)
    stb r0, 0x991(r28)
    lbz r3, 0x0(r29)
    addi r0, r3, 0x5
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_802902B8
    stb r3, 0x8c1(r28)
    lbzx r0, r31, r26
    stb r0, 0x8c2(r28)
    lwz r12, 0x8a0(r28)
    cmpwi r12, 0x0
    beq lbl_80290404
    mr r3, r26
    lbz r4, 0x8c1(r28)
    mtctr r12
    bctrl
    b lbl_80290404
lbl_802902B8:
    cmplwi r3, 0x1
    beq lbl_802902E8
    cmplwi r3, 0x2
    beq lbl_802902E8
    cmplwi r3, 0x3
    beq lbl_802902E8
    cmplwi r3, 0x11
    beq lbl_802902E8
    cmplwi r3, 0x12
    beq lbl_802902E8
    cmplwi r3, 0x4
    bne lbl_802902F0
lbl_802902E8:
    li r0, 0x1
    b lbl_802902F4
lbl_802902F0:
    li r0, 0x0
lbl_802902F4:
    cmpwi r0, 0x0
    beq lbl_80290310
    li r0, 0x2
    mr r3, r26
    stb r0, 0x98d(r28)
    bl WPADiCreateKey
    b lbl_80290320
lbl_80290310:
    li r0, 0x3
    mr r3, r26
    stb r0, 0x98d(r28)
    bl WPADiCreateKeyFor3rd
lbl_80290320:
    lis r30, 0x4a4
    lis r26, __wpadAbortInitExtension@ha
    mr r3, r27
    li r4, 0xaa
    addi r5, r30, 0xf0
    addi r6, r26, __wpadAbortInitExtension@l
    bl fn_8028E8E0
    mr r3, r27
    addi r4, r28, 0x914
    addi r6, r30, 0x40
    addi r7, r26, __wpadAbortInitExtension@l
    li r5, 0x6
    bl fn_8028EA94
    mr r3, r27
    addi r4, r28, 0x91a
    addi r6, r30, 0x46
    addi r7, r26, __wpadAbortInitExtension@l
    li r5, 0x6
    bl fn_8028EA94
    mr r3, r27
    addi r4, r28, 0x920
    addi r6, r30, 0x4c
    addi r7, r26, __wpadAbortInitExtension@l
    li r5, 0x4
    bl fn_8028EA94
    lbz r0, 0x0(r29)
    cmplwi r0, 0x3
    bne lbl_802903CC
    mr r3, r27
    addi r5, r30, 0xf1
    addi r6, r26, __wpadAbortInitExtension@l
    li r4, 0xaa
    bl fn_8028E8E0
    mr r3, r27
    addi r5, r30, 0xf1
    addi r6, r26, __wpadAbortInitExtension@l
    li r4, 0xaa
    bl fn_8028E8E0
    mr r3, r27
    addi r5, r30, 0xf1
    addi r6, r26, __wpadAbortInitExtension@l
    li r4, 0xaa
    bl fn_8028E8E0
lbl_802903CC:
    lis r5, 0x4a4
    lwz r7, 0x8a0(r28)
    addi r6, r5, 0x20
    mr r3, r27
    addi r4, r28, 0x934
    li r5, 0x20
    bl fn_8028EC4C
    b lbl_80290404
lbl_802903EC:
    li r3, 0xfc
    li r0, 0x0
    stb r3, 0x8c1(r28)
    stb r0, 0x8c2(r28)
    stb r3, 0x990(r28)
    stb r0, 0x991(r28)
lbl_80290404:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __wpadGetGameInfo
asm void __wpadGetGameInfo() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8040C450@ha
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r6, r6, lbl_8040C450@l
    li r9, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    lwzx r31, r6, r0
    lwz r4, 0x974(r31)
    bne lbl_80290598
    li r0, 0x2
    li r8, 0x0
    mtctr r0
lbl_80290460:
    add r7, r4, r8
    lbzx r6, r4, r8
    lbz r3, 0x1(r7)
    addi r8, r8, 0x7
    add r9, r9, r6
    lbz r0, 0x2(r7)
    add r9, r9, r3
    lbz r3, 0x3(r7)
    add r9, r9, r0
    lbz r0, 0x4(r7)
    add r9, r9, r3
    lbz r3, 0x5(r7)
    add r9, r9, r0
    lbz r0, 0x6(r7)
    add r9, r9, r3
    add r7, r4, r8
    lbzx r6, r4, r8
    add r9, r9, r0
    lbz r3, 0x1(r7)
    addi r8, r8, 0x7
    add r9, r9, r6
    lbz r0, 0x2(r7)
    add r9, r9, r3
    lbz r3, 0x3(r7)
    add r9, r9, r0
    lbz r0, 0x4(r7)
    add r9, r9, r3
    lbz r3, 0x5(r7)
    add r9, r9, r0
    lbz r0, 0x6(r7)
    add r9, r9, r3
    add r7, r4, r8
    lbzx r6, r4, r8
    add r9, r9, r0
    lbz r3, 0x1(r7)
    addi r8, r8, 0x7
    add r9, r9, r6
    lbz r0, 0x2(r7)
    add r9, r9, r3
    lbz r3, 0x3(r7)
    add r9, r9, r0
    lbz r0, 0x4(r7)
    add r9, r9, r3
    lbz r3, 0x5(r7)
    add r9, r9, r0
    lbz r0, 0x6(r7)
    add r9, r9, r3
    add r9, r9, r0
    bdnz lbl_80290460
    add r6, r8, r4
    lbzx r0, r4, r8
    lbz r3, 0x1(r6)
    add r9, r9, r0
    lbz r0, 0x2(r6)
    add r9, r9, r3
    lbz r3, 0x3(r6)
    add r9, r9, r0
    lbz r0, 0x4(r6)
    add r9, r9, r3
    lbz r3, 0x2f(r4)
    add r9, r9, r0
    addi r0, r9, 0x55
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_80290584
    mr r3, r31
    li r5, 0x38
    bl memcpy
    clrlslwi r0, r30, 24, 2
    li r4, 0x0
    add r3, r31, r0
    stw r4, 0x38(r3)
    b lbl_802905A8
lbl_80290584:
    clrlslwi r0, r5, 24, 2
    li r4, -0x4
    add r3, r31, r0
    stw r4, 0x38(r3)
    b lbl_802905A8
lbl_80290598:
    clrlslwi r0, r5, 24, 2
    li r4, -0x4
    add r3, r31, r0
    stw r4, 0x38(r3)
lbl_802905A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: WPADiHIDParser
asm s32 WPADiHIDParser() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lbz r0, 0x0(r4)
    lis r26, lbl_8040C450@ha
    clrlslwi r25, r3, 24, 2
    mr r27, r3
    addi r26, r26, lbl_8040C450@l
    cmplwi r0, 0x20
    lwzx r31, r26, r25
    mr r28, r4
    li r29, 0x0
    blt lbl_802906C8
    cmplwi r0, 0x3f
    bgt lbl_802906C8
    bl OSDisableInterrupts
    lwzx r4, r26, r25
    mr r30, r3
    lbz r5, 0x0(r28)
    lbz r0, 0x8c8(r4)
    cmplwi r5, 0x3e
    mulli r0, r0, 0x60
    add r3, r4, r0
    addi r24, r3, 0xa0
    beq lbl_80290644
    cmplwi r5, 0x3f
    beq lbl_80290644
    mr r3, r24
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_80290644:
    lbz r4, 0x0(r28)
    lis r6, lbl_8036C5A0@ha
    addi r6, r6, lbl_8036C5A0@l
    mr r3, r27
    subi r0, r4, 0x20
    mr r4, r28
    slwi r0, r0, 2
    mr r5, r24
    lwzx r12, r6, r0
    mtctr r12
    bctrl
    lwz r0, 0x8dc(r31)
    cmpwi r0, 0x0
    bne lbl_80290684
    li r0, -0x4
    stb r0, 0x29(r24)
lbl_80290684:
    lbz r0, 0x0(r28)
    cmplwi r0, 0x3e
    beq lbl_802906AC
    cmplwi r0, 0x3f
    beq lbl_802906AC
    lwzx r3, r26, r25
    lbz r0, 0x8c8(r3)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x8c8(r3)
lbl_802906AC:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r27
    bl fn_8028B4DC
    mr r3, r27
    bl fn_8028B5FC
    b lbl_802906CC
lbl_802906C8:
    li r29, -0x1
lbl_802906CC:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __a1_20_status_report
asm void __a1_20_status_report() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r31, lbl_8040C450@ha
    clrlslwi r30, r3, 24, 2
    addi r31, r31, lbl_8040C450@l
    lis r6, lbl_8036CA1C@ha
    lwzx r29, r31, r30
    mr r24, r3
    mr r25, r4
    mr r26, r5
    lwz r27, 0x840(r29)
    addi r3, r6, lbl_8036CA1C@l
    opword 0x4CC63182
    bl fn_80294360
    bl OSDisableInterrupts
    lwz r0, 0x8dc(r29)
    mr r28, r3
    cmpwi r0, 0x0
    bne lbl_80290748
    bl OSRestoreInterrupts
    b lbl_80290A10
lbl_80290748:
    lbz r0, 0x3(r25)
    li r3, 0x0
    rlwinm r0, r0, 0, 30, 30
    srawi r0, r0, 1
    stw r0, 0x840(r29)
    lbz r0, 0x3(r25)
    clrlwi r0, r0, 31
    stw r0, 0x844(r29)
    lbz r0, 0x3(r25)
    extrwi r0, r0, 4, 24
    stb r0, 0x84d(r29)
    stb r3, 0x84e(r29)
    lbz r0, 0x5(r25)
    rlwinm r0, r0, 0, 24, 27
    stb r0, 0x84f(r29)
    lbz r0, 0x1(r25)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r29)
    lbz r0, 0x3(r25)
    extrwi r0, r0, 1, 28
    stw r0, 0x838(r29)
    lbz r0, 0x3(r25)
    extrwi r0, r0, 1, 29
    stw r0, 0x83c(r29)
    lbz r0, 0x8c1(r29)
    cmplwi r0, 0x3
    bne lbl_802907C0
    lbz r0, 0x98f(r29)
    stb r0, 0x84c(r29)
    b lbl_80290818
lbl_802907C0:
    lbz r0, 0x6(r25)
    cmplwi r0, 0x55
    blt lbl_802907D8
    li r0, 0x4
    stb r0, 0x84c(r29)
    b lbl_80290818
lbl_802907D8:
    cmplwi r0, 0x44
    blt lbl_802907EC
    li r0, 0x3
    stb r0, 0x84c(r29)
    b lbl_80290818
lbl_802907EC:
    cmplwi r0, 0x33
    blt lbl_80290800
    li r0, 0x2
    stb r0, 0x84c(r29)
    b lbl_80290818
lbl_80290800:
    cmplwi r0, 0x3
    blt lbl_80290814
    li r0, 0x1
    stb r0, 0x84c(r29)
    b lbl_80290818
lbl_80290814:
    stb r3, 0x84c(r29)
lbl_80290818:
    lwz r0, 0x840(r29)
    cmpwi r0, 0x0
    beq lbl_802908F4
    cmpwi r27, 0x0
    bne lbl_80290950
    lis r3, lbl_8036CA30@ha
    addi r3, r3, lbl_8036CA30@l
    opword 0x4CC63182
    bl fn_80294360
    lis r3, lbl_8040C450@ha
    li r22, 0x0
    la r4, lbl_8049DE08
    clrlslwi r0, r24, 24, 2
    stbx r22, r4, r24
    addi r3, r3, lbl_8040C450@l
    lwzx r21, r3, r0
    lwz r20, 0x8a0(r29)
    addi r3, r21, 0x5ec
    bl fn_8028EDF8
    lis r23, __wpadAbortInitExtension@ha
    lwz r4, 0x8b8(r21)
    lbz r5, 0x98e(r21)
    addi r3, r21, 0x5ec
    addi r6, r23, __wpadAbortInitExtension@l
    bl fn_8028E678
    li r0, 0x1
    lis r27, 0x4a4
    stb r0, 0x98d(r21)
    addi r3, r21, 0x5ec
    addi r5, r27, 0xf0
    addi r6, r23, __wpadAbortInitExtension@l
    li r4, 0x55
    bl fn_8028E8E0
    addi r3, r21, 0x5ec
    addi r5, r27, 0xfb
    addi r6, r23, __wpadAbortInitExtension@l
    li r4, 0x0
    bl fn_8028E8E0
    addi r3, r21, 0x5ec
    addi r4, r21, 0x934
    addi r6, r27, 0xfa
    addi r7, r23, __wpadAbortInitExtension@l
    li r5, 0x6
    bl fn_8028EC4C
    li r0, 0xff
    cmpwi r20, 0x0
    stb r0, 0x8c1(r29)
    stb r22, 0x8c2(r29)
    beq lbl_80290950
    mr r12, r20
    mr r3, r24
    li r4, 0xff
    mtctr r12
    bctrl
    b lbl_80290950
lbl_802908F4:
    li r0, 0x0
    addi r3, r29, 0x5ec
    stb r0, 0x8c1(r29)
    stb r0, 0x8c2(r29)
    bl fn_8028EDF8
    lwz r4, 0x8b8(r29)
    addi r3, r29, 0x5ec
    lbz r5, 0x98e(r29)
    li r6, 0x0
    bl fn_8028E678
    cmpwi r27, 0x0
    beq lbl_80290950
    li r3, 0x1
    li r0, 0x12c
    stb r3, 0x991(r29)
    sth r0, 0x992(r29)
    lwz r12, 0x8a0(r29)
    cmpwi r12, 0x0
    beq lbl_80290950
    mr r3, r24
    li r4, 0x0
    mtctr r12
    bctrl
lbl_80290950:
    lwz r3, 0x850(r29)
    cmpwi r3, 0x0
    beq lbl_80290970
    addi r4, r29, 0x838
    li r5, 0x18
    bl memcpy
    li r0, 0x0
    stw r0, 0x850(r29)
lbl_80290970:
    lwzx r4, r31, r30
    mr r3, r26
    li r5, 0x60
    lbz r0, 0x8c8(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    mulli r0, r0, 0x60
    add r4, r4, r0
    addi r4, r4, 0xa0
    bl memcpy
    lbz r0, 0x2(r25)
    lbz r3, 0x1(r25)
    rlwimi r3, r0, 8, 16, 23
    lhz r4, 0x0(r26)
    andi. r3, r3, 0x9f1f
    lbz r0, 0x28(r26)
    rlwimi r3, r4, 0, 17, 18
    sth r3, 0x0(r26)
    lbz r3, 0x8c1(r29)
    cmplw r0, r3
    beq lbl_802909D0
    li r0, -0x4
    stb r3, 0x28(r26)
    stb r0, 0x29(r26)
lbl_802909D0:
    lwz r12, 0x89c(r29)
    cmpwi r12, 0x0
    beq lbl_80290A00
    lbz r0, 0x8c0(r29)
    cmpwi r0, 0x0
    beq lbl_80290A00
    mr r3, r24
    li r4, 0x0
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x89c(r29)
lbl_80290A00:
    li r0, 0x0
    mr r3, r28
    stb r0, 0x8c0(r29)
    bl OSRestoreInterrupts
lbl_80290A10:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: __a1_21_user_data
asm void __a1_21_user_data() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r30, lbl_8040C450@ha
    lis r28, lbl_8036C5A0@ha
    clrlslwi r29, r3, 24, 2
    mr r20, r3
    addi r30, r30, lbl_8040C450@l
    mr r21, r4
    lwzx r27, r30, r29
    mr r22, r5
    addi r28, r28, lbl_8036C5A0@l
    bl OSDisableInterrupts
    lbz r0, 0x3(r21)
    mr r26, r3
    clrlwi. r0, r0, 28
    beq lbl_80290AC8
    addi r3, r28, 0x4a8
    opword 0x4CC63182
    bl fn_80294360
    li r0, -0x1
    stw r0, 0x97c(r27)
    lwz r12, 0x89c(r27)
    cmpwi r12, 0x0
    beq lbl_80290AC0
    lwz r0, 0x8a0(r27)
    cmpwi r0, 0x0
    beq lbl_80290AA8
    cmplw r0, r12
    beq lbl_80290AB8
lbl_80290AA8:
    mr r3, r20
    li r4, -0x3
    mtctr r12
    bctrl
lbl_80290AB8:
    li r0, 0x0
    stw r0, 0x89c(r27)
lbl_80290AC0:
    li r0, 0x0
    stw r0, 0x8bc(r27)
lbl_80290AC8:
    lwz r4, 0x978(r27)
    lbz r3, 0x3(r21)
    lbz r0, 0x4(r21)
    clrlwi r24, r4, 16
    lbz r25, 0x5(r21)
    srawi r3, r3, 4
    rlwimi r25, r0, 8, 16, 23
    srwi r31, r4, 16
    addi r3, r3, 0x1
    subf r0, r24, r25
    cmplw r25, r24
    clrlwi r23, r3, 24
    extsh r6, r0
    blt lbl_80290CC4
    lhz r0, 0x980(r27)
    clrlwi r3, r25, 16
    add r0, r24, r0
    cmpw r3, r0
    bgt lbl_80290CC4
    lwz r0, 0x974(r27)
    mr r5, r23
    addi r4, r21, 0x6
    add r3, r0, r6
    bl memcpy
    lhz r3, 0x980(r27)
    clrlwi r0, r25, 16
    add r0, r0, r23
    add r3, r24, r3
    cmpw r3, r0
    bne lbl_80290CD0
    lwz r4, 0x978(r27)
    addi r3, r28, 0x4c0
    opword 0x4CC63182
    bl fn_80294360
    lhz r4, 0x980(r27)
    addi r3, r28, 0x4d4
    opword 0x4CC63182
    bl fn_80294360
    lwz r5, 0x97c(r27)
    li r0, -0x3
    mr r4, r31
    addi r3, r28, 0x4e4
    srawi r5, r5, 31
    and r25, r0, r5
    opword 0x4CC63182
    bl fn_80294360
    lbz r4, 0x98d(r27)
    addi r3, r28, 0x4f0
    opword 0x4CC63182
    bl fn_80294360
    cmplwi r31, 0x4a4
    bne lbl_80290BEC
    addi r3, r28, 0x4fc
    opword 0x4CC63182
    bl fn_80294360
    lbz r3, 0x98d(r27)
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_80290BEC
    addi r3, r28, 0x51c
    opword 0x4CC63182
    bl fn_80294360
    mr r4, r23
    mr r5, r24
    addi r3, r28, 0x528
    opword 0x4CC63182
    bl fn_80294360
    lwz r4, 0x974(r27)
    mr r3, r20
    mr r5, r23
    mr r6, r24
    bl WPADiDecode
lbl_80290BEC:
    lwz r3, 0x978(r27)
    cmpwi r3, 0x0
    bne lbl_80290C04
    lwz r0, 0x8e0(r27)
    cmpwi r0, 0x0
    beq lbl_80290C18
lbl_80290C04:
    cmplwi r3, 0x176c
    bne lbl_80290C24
    lwz r0, 0x8e0(r27)
    cmpwi r0, 0x1
    bne lbl_80290C24
lbl_80290C18:
    mr r3, r20
    mr r4, r25
    bl __wpadGetDevConfig
lbl_80290C24:
    lwz r3, 0x978(r27)
    subis r0, r3, 0x4a4
    cmplwi r0, 0x20
    bne lbl_80290C40
    mr r3, r20
    mr r4, r25
    bl fn_8028FAA4
lbl_80290C40:
    lwz r3, 0x978(r27)
    subis r0, r3, 0x4a4
    cmplwi r0, 0xfa
    bne lbl_80290C5C
    mr r3, r20
    mr r4, r25
    bl __wpadGetExtType
lbl_80290C5C:
    lwz r0, 0x978(r27)
    cmplwi r0, 0x2a
    bne lbl_80290C78
    mr r3, r20
    mr r4, r25
    li r5, 0x0
    bl __wpadGetGameInfo
lbl_80290C78:
    lwz r0, 0x978(r27)
    cmplwi r0, 0x62
    bne lbl_80290C94
    mr r3, r20
    mr r4, r25
    li r5, 0x1
    bl __wpadGetGameInfo
lbl_80290C94:
    lwz r12, 0x89c(r27)
    cmpwi r12, 0x0
    beq lbl_80290CB8
    mr r3, r20
    mr r4, r25
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x89c(r27)
lbl_80290CB8:
    li r0, 0x0
    stw r0, 0x8bc(r27)
    b lbl_80290CD0
lbl_80290CC4:
    addi r3, r28, 0x548
    opword 0x4CC63182
    bl fn_80294360
lbl_80290CD0:
    lwzx r4, r30, r29
    mr r3, r22
    li r5, 0x60
    lbz r0, 0x8c8(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    mulli r0, r0, 0x60
    add r4, r4, r0
    addi r4, r4, 0xa0
    bl memcpy
    lbz r0, 0x2(r21)
    lbz r3, 0x1(r21)
    rlwimi r3, r0, 8, 16, 23
    lhz r4, 0x0(r22)
    andi. r3, r3, 0x9f1f
    lbz r0, 0x28(r22)
    rlwimi r3, r4, 0, 17, 18
    sth r3, 0x0(r22)
    lbz r3, 0x8c1(r27)
    cmplw r0, r3
    beq lbl_80290D30
    li r0, -0x4
    stb r3, 0x28(r22)
    stb r0, 0x29(r22)
lbl_80290D30:
    mr r3, r26
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: __a1_22_ack
asm void __a1_22_ack() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r25, lbl_8040C450@ha
    lis r31, lbl_8036C5A0@ha
    clrlslwi r24, r3, 24, 2
    mr r26, r3
    addi r25, r25, lbl_8040C450@l
    mr r27, r4
    lwzx r30, r25, r24
    mr r28, r5
    addi r31, r31, lbl_8036C5A0@l
    bl OSDisableInterrupts
    mr r29, r3
    addi r3, r31, 0x568
    opword 0x4CC63182
    bl fn_80294360
    lwzx r4, r25, r24
    mr r3, r28
    li r5, 0x60
    lbz r0, 0x8c8(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    mulli r0, r0, 0x60
    add r4, r4, r0
    addi r4, r4, 0xa0
    bl memcpy
    lbz r0, 0x2(r27)
    lbz r3, 0x1(r27)
    rlwimi r3, r0, 8, 16, 23
    lhz r4, 0x0(r28)
    andi. r3, r3, 0x9f1f
    lbz r0, 0x28(r28)
    rlwimi r3, r4, 0, 17, 18
    sth r3, 0x0(r28)
    lbz r3, 0x8c1(r30)
    cmplw r0, r3
    beq lbl_80290DFC
    li r0, -0x4
    stb r3, 0x28(r28)
    stb r0, 0x29(r28)
lbl_80290DFC:
    lbz r5, 0x4(r27)
    li r0, -0x3
    lbz r24, 0x3(r27)
    addi r3, r31, 0x578
    cntlzw r4, r5
    extrwi r6, r4, 1, 26
    neg r6, r6
    mr r4, r24
    andc r25, r0, r6
    opword 0x4CC63182
    bl fn_80294360
    lbz r0, 0x987(r30)
    cmplw r0, r24
    bne lbl_80290E64
    lwz r12, 0x89c(r30)
    cmpwi r12, 0x0
    beq lbl_80290E58
    mr r3, r26
    mr r4, r25
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x89c(r30)
lbl_80290E58:
    li r0, 0x0
    stw r0, 0x8bc(r30)
    b lbl_80290E70
lbl_80290E64:
    addi r3, r31, 0x5a4
    opword 0x4CC63182
    bl fn_80294360
lbl_80290E70:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80290E90
asm void fn_80290E90() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    stfd f29, 0x70(r1)
    opword 0xF3A10078
    stfd f28, 0x60(r1)
    opword 0xF3810068
    stfd f27, 0x50(r1)
    opword 0xF3610058
    addi r11, r1, 0x50
    bl _savegpr_22
    lis r8, lbl_8040C450@ha
    lis r0, 0x4330
    slwi r27, r3, 2
    lis r3, lbl_8040FB80@ha
    addi r8, r8, lbl_8040C450@l
    stw r0, 0x8(r1)
    lwzx r8, r8, r27
    mr r24, r4
    stw r0, 0x10(r1)
    addi r3, r3, lbl_8040FB80@l
    lbz r0, 0x994(r8)
    cmpwi r0, 0x0
    beq lbl_80290F10
    lwz r3, 0x0(r4)
    li r0, -0x4
    stb r0, 0x29(r3)
    b lbl_802912E0
lbl_80290F10:
    cmplwi r5, 0x3
    bne lbl_80291080
    li r0, 0x4
    lfd f3, lbl_804A2408
    lfs f1, lbl_804A2400
    li r5, 0x0
    li r10, 0x0
    li r9, 0x2ff
    mtctr r0
lbl_80290F34:
    clrlwi r8, r5, 24
    clrlslwi r0, r5, 24, 2
    subf r8, r8, r0
    addi r0, r8, 0x2
    cmpw r0, r7
    bge lbl_80291040
    add r11, r6, r8
    lwz r8, 0x0(r4)
    lbz r22, 0x2(r11)
    clrlslwi r0, r5, 24, 3
    lbz r25, 0x0(r11)
    add r12, r8, r0
    lbz r11, 0x1(r11)
    rlwinm r23, r22, 4, 22, 23
    extsh r25, r25
    rlwinm r8, r22, 2, 22, 23
    or r23, r25, r23
    extsh r11, r11
    or r8, r11, r8
    sth r23, 0x8(r12)
    extsh r12, r8
    clrlwi r11, r22, 28
    lwz r8, 0x0(r4)
    subfic r12, r12, 0x2ff
    add r8, r8, r0
    sth r12, 0xa(r8)
    lwz r8, 0x0(r4)
    add r8, r8, r0
    sth r11, 0xc(r8)
    lwz r8, 0x0(r4)
    add r11, r8, r0
    lhz r8, 0xc(r11)
    stw r8, 0xc(r1)
    stw r8, 0x14(r1)
    lfd f2, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f2, f3
    fsubs f0, f0, f3
    fmuls f0, f2, f0
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r8, 0x1c(r1)
    clrlwi r8, r8, 24
    sth r8, 0xc(r11)
    lwz r8, 0x0(r4)
    add r11, r8, r0
    lhz r8, 0xc(r11)
    cmpwi r8, 0x0
    beq lbl_80291014
    lha r8, 0x8(r11)
    cmpwi r8, 0x3ff
    beq lbl_80291014
    lha r8, 0xa(r11)
    cmpwi r8, 0x2ff
    bne lbl_80291030
lbl_80291014:
    sth r10, 0x8(r11)
    lwz r8, 0x0(r4)
    add r8, r8, r0
    sth r9, 0xa(r8)
    lwz r8, 0x0(r4)
    add r8, r8, r0
    sth r10, 0xc(r8)
lbl_80291030:
    lwz r8, 0x0(r4)
    add r8, r8, r0
    stb r5, 0xe(r8)
    b lbl_80291074
lbl_80291040:
    lwz r0, 0x0(r4)
    clrlslwi r11, r5, 24, 3
    add r8, r0, r11
    sth r10, 0x8(r8)
    lwz r0, 0x0(r4)
    add r8, r0, r11
    sth r9, 0xa(r8)
    lwz r0, 0x0(r4)
    add r8, r0, r11
    sth r10, 0xc(r8)
    lwz r0, 0x0(r4)
    add r8, r0, r11
    stb r5, 0xe(r8)
lbl_80291074:
    addi r5, r5, 0x1
    bdnz lbl_80290F34
    b lbl_802911B8
lbl_80291080:
    cmplwi r5, 0x1
    bne lbl_802911B8
    li r0, 0x4
    li r5, 0x0
    li r8, 0xc
    li r10, 0x0
    li r9, 0x2ff
    mtctr r0
lbl_802910A0:
    clrlwi r12, r5, 24
    clrlslwi r11, r5, 24, 2
    srwi r7, r12, 31
    clrlwi r0, r5, 31
    subf r12, r12, r11
    extrwi r23, r5, 7, 24
    rlwinm r11, r5, 1, 23, 29
    xor r0, r0, r7
    add r12, r6, r12
    subf r12, r23, r12
    add r11, r11, r23
    subf. r0, r7, r0
    lbz r25, 0x0(r12)
    add r7, r6, r11
    lbz r22, 0x1(r12)
    lbz r23, 0x2(r7)
    bne lbl_80291124
    lwz r7, 0x0(r4)
    clrlslwi r0, r5, 24, 3
    extsh r12, r25
    rlwinm r11, r23, 4, 22, 23
    or r11, r12, r11
    add r7, r7, r0
    sth r11, 0x8(r7)
    extsh r11, r22
    rlwinm r7, r23, 2, 22, 23
    or r11, r11, r7
    lwz r7, 0x0(r4)
    extsh r11, r11
    subfic r11, r11, 0x2ff
    add r7, r7, r0
    sth r11, 0xa(r7)
    b lbl_80291160
lbl_80291124:
    lwz r7, 0x0(r4)
    clrlslwi r0, r5, 24, 3
    extsh r12, r25
    clrlslwi r11, r23, 30, 8
    or r11, r12, r11
    add r7, r7, r0
    sth r11, 0x8(r7)
    extsh r11, r22
    rlwinm r7, r23, 6, 22, 23
    or r11, r11, r7
    lwz r7, 0x0(r4)
    extsh r11, r11
    subfic r11, r11, 0x2ff
    add r7, r7, r0
    sth r11, 0xa(r7)
lbl_80291160:
    lwz r7, 0x0(r4)
    add r11, r7, r0
    lha r7, 0x8(r11)
    cmpwi r7, 0x3ff
    beq lbl_80291180
    lha r7, 0xa(r11)
    cmpwi r7, 0x2ff
    bne lbl_802911A0
lbl_80291180:
    sth r10, 0x8(r11)
    lwz r7, 0x0(r4)
    add r7, r7, r0
    sth r9, 0xa(r7)
    lwz r7, 0x0(r4)
    add r7, r7, r0
    sth r10, 0xc(r7)
    b lbl_802911A4
lbl_802911A0:
    sth r8, 0xc(r11)
lbl_802911A4:
    lwz r7, 0x0(r4)
    add r7, r7, r0
    stb r5, 0xe(r7)
    addi r5, r5, 0x1
    bdnz lbl_802910A0
lbl_802911B8:
    lfd f30, lbl_804A23F8
    addi r28, r3, 0x0
    lfs f31, lbl_804A23E8
    addi r29, r3, 0x20
    addi r30, r3, 0x10
    addi r31, r3, 0x30
    addi r23, r3, 0x40
    li r25, 0x0
lbl_802911D8:
    lwz r5, 0x0(r24)
    clrlslwi r26, r25, 24, 3
    add r3, r5, r26
    lha r4, 0x8(r3)
    cmpwi r4, 0x0
    bne lbl_802911FC
    lha r0, 0xa(r3)
    cmpwi r0, 0x2ff
    beq lbl_802912D4
lbl_802911FC:
    add r22, r5, r26
    xoris r3, r4, 0x8000
    lha r0, 0xa(r22)
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfsx f0, r23, r27
    stw r0, 0x14(r1)
    lfd f2, 0x8(r1)
    fmuls f1, f31, f0
    lfd f0, 0x10(r1)
    fsubs f5, f2, f30
    lfsx f4, r28, r27
    fsubs f2, f0, f30
    lfsx f0, r30, r27
    lfsx f3, r29, r27
    fadds f4, f5, f4
    fadds f2, f2, f0
    lfsx f0, r31, r27
    fsubs f29, f4, f3
    fsubs f27, f2, f0
    bl sin
    frsp f2, f1
    lfsx f0, r23, r27
    fmuls f1, f31, f0
    fmuls f28, f27, f2
    bl cos
    frsp f1, f1
    lfsx f0, r29, r27
    fmuls f1, f29, f1
    fsubs f1, f1, f28
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    sth r0, 0x8(r22)
    lfsx f0, r23, r27
    fmuls f1, f31, f0
    bl cos
    frsp f2, f1
    lfsx f0, r23, r27
    fmuls f1, f31, f0
    fmuls f28, f27, f2
    bl sin
    frsp f1, f1
    lwz r0, 0x0(r24)
    lfsx f0, r31, r27
    add r3, r0, r26
    fmuls f1, f29, f1
    fadds f1, f1, f28
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    sth r0, 0xa(r3)
lbl_802912D4:
    addi r25, r25, 0x1
    cmplwi r25, 0x4
    blt lbl_802911D8
lbl_802912E0:
    opword 0xE3E10098
    lfd f31, 0x90(r1)
    opword 0xE3C10088
    lfd f30, 0x80(r1)
    opword 0xE3A10078
    lfd f29, 0x70(r1)
    opword 0xE3810068
    lfd f28, 0x60(r1)
    opword 0xE3610058
    addi r11, r1, 0x50
    lfd f27, 0x50(r1)
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: __parse_dpdex_data
asm void __parse_dpdex_data() {
    nofralloc
    stwu r1, -0x20(r1)
    clrlslwi r3, r5, 24, 3
    mulli r0, r5, 0xc
    lbz r9, 0x0(r6)
    lbz r8, 0x2(r6)
    lwz r7, 0x0(r4)
    extsh r9, r9
    rlwinm r8, r8, 4, 22, 23
    or r8, r9, r8
    add r7, r7, r3
    sth r8, 0x8(r7)
    lbz r9, 0x1(r6)
    lbz r8, 0x2(r6)
    lwz r7, 0x0(r4)
    extsh r9, r9
    rlwinm r8, r8, 2, 22, 23
    or r8, r9, r8
    add r7, r7, r3
    extsh r8, r8
    subfic r8, r8, 0x2ff
    sth r8, 0xa(r7)
    lbz r8, 0x7(r6)
    lwz r7, 0x0(r4)
    clrlslwi r9, r8, 24, 8
    lbz r8, 0x8(r6)
    extsh r9, r9
    add r7, r7, r0
    or r8, r9, r8
    clrlslwi r8, r8, 22, 6
    sth r8, 0x32(r7)
    lbz r8, 0x2(r6)
    lwz r7, 0x0(r4)
    clrlwi r8, r8, 28
    add r7, r7, r0
    stb r8, 0x34(r7)
    lbz r10, 0x3(r6)
    lwz r7, 0x0(r4)
    extsb r8, r10
    addi r9, r8, 0x1
    add r7, r7, r0
    subfic r8, r8, -0x1
    nor r8, r9, r8
    srawi r8, r8, 31
    andc r8, r10, r8
    sth r8, 0x2a(r7)
    lbz r10, 0x4(r6)
    lwz r7, 0x0(r4)
    extsb r8, r10
    addi r9, r8, 0x1
    add r7, r7, r0
    subfic r8, r8, -0x1
    nor r8, r9, r8
    srawi r8, r8, 31
    andc r8, r10, r8
    sth r8, 0x2c(r7)
    lbz r10, 0x5(r6)
    lwz r7, 0x0(r4)
    extsb r8, r10
    addi r9, r8, 0x1
    add r7, r7, r0
    subfic r8, r8, -0x1
    nor r8, r9, r8
    srawi r8, r8, 31
    andc r8, r10, r8
    sth r8, 0x2e(r7)
    lbz r9, 0x6(r6)
    lwz r6, 0x0(r4)
    extsb r7, r9
    addi r8, r7, 0x1
    add r6, r6, r0
    subfic r7, r7, -0x1
    nor r7, r8, r7
    srawi r7, r7, 31
    andc r7, r9, r7
    sth r7, 0x30(r6)
    lwz r7, 0x0(r4)
    lis r6, 0x4330
    stw r6, 0x8(r1)
    add r8, r7, r0
    lfd f3, lbl_804A23F8
    lha r7, 0x2a(r8)
    stw r6, 0x10(r1)
    slwi r6, r7, 3
    lfs f0, lbl_804A2400
    sth r6, 0x2a(r8)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    lha r6, 0x2c(r7)
    slwi r6, r6, 3
    extsh r6, r6
    subfic r6, r6, 0x2ff
    sth r6, 0x2c(r7)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    lha r6, 0x2e(r7)
    slwi r6, r6, 3
    sth r6, 0x2e(r7)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    lha r6, 0x30(r7)
    slwi r6, r6, 3
    extsh r6, r6
    subfic r6, r6, 0x2ff
    sth r6, 0x30(r7)
    lwz r6, 0x0(r4)
    add r7, r6, r0
    add r6, r6, r3
    lbz r7, 0x34(r7)
    extsb r7, r7
    xoris r7, r7, 0x8000
    stw r7, 0xc(r1)
    stw r7, 0x14(r1)
    lfd f2, 0x8(r1)
    lfd f1, 0x10(r1)
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r7, 0x1c(r1)
    sth r7, 0xc(r6)
    lwz r8, 0x0(r4)
    add r7, r8, r3
    lhz r6, 0xc(r7)
    cmpwi r6, 0x0
    beq lbl_80291544
    lha r6, 0x8(r7)
    cmpwi r6, 0x3ff
    beq lbl_80291544
    lha r6, 0xa(r7)
    cmpwi r6, 0x2ff
    beq lbl_80291544
    add r6, r8, r0
    lbz r6, 0x34(r6)
    cmpwi r6, 0xf
    bne lbl_80291584
lbl_80291544:
    add r6, r8, r3
    li r8, 0x0
    sth r8, 0x8(r6)
    li r7, 0x2ff
    lwz r6, 0x0(r4)
    add r6, r6, r3
    sth r7, 0xa(r6)
    lwz r6, 0x0(r4)
    add r6, r6, r3
    sth r8, 0xc(r6)
    lwz r6, 0x0(r4)
    add r6, r6, r0
    sth r8, 0x32(r6)
    lwz r6, 0x0(r4)
    add r6, r6, r0
    stb r8, 0x34(r6)
lbl_80291584:
    lwz r0, 0x0(r4)
    add r3, r0, r3
    stb r5, 0xe(r3)
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __parse_cl_data
asm void __parse_cl_data() {
    nofralloc
    lis r8, lbl_8040C450@ha
    cmpwi r5, 0x2
    slwi r0, r3, 2
    addi r8, r8, lbl_8040C450@l
    lwzx r8, r8, r0
    beq lbl_802915C4
    bge lbl_802915B8
    b lbl_80291754
lbl_802915B8:
    cmpwi r5, 0x4
    bge lbl_80291754
    b lbl_802916C0
lbl_802915C4:
    lbz r5, 0x0(r6)
    cmplwi r7, 0x9
    lbz r0, 0x4(r6)
    slwi r9, r5, 2
    lwz r5, 0x0(r4)
    extsh r9, r9
    clrlwi r0, r0, 30
    clrrwi r9, r9, 2
    extsh r9, r9
    or r0, r9, r0
    sth r0, 0x2c(r5)
    lbz r0, 0x1(r6)
    lbz r9, 0x4(r6)
    slwi r0, r0, 2
    lwz r5, 0x0(r4)
    extsh r10, r0
    clrrwi r10, r10, 2
    extrwi r0, r9, 2, 28
    srawi r9, r9, 2
    extsh r9, r10
    or r0, r9, r0
    sth r0, 0x30(r5)
    lbz r0, 0x2(r6)
    lbz r9, 0x4(r6)
    slwi r0, r0, 2
    lwz r5, 0x0(r4)
    extsh r10, r0
    extrwi r0, r9, 2, 26
    srawi r9, r9, 4
    clrrwi r10, r10, 2
    extsh r9, r10
    or r0, r9, r0
    sth r0, 0x2e(r5)
    lbz r5, 0x3(r6)
    lbz r0, 0x4(r6)
    slwi r9, r5, 2
    lwz r5, 0x0(r4)
    extsh r9, r9
    srawi r0, r0, 6
    clrrwi r9, r9, 2
    extsh r9, r9
    or r0, r9, r0
    sth r0, 0x32(r5)
    lbz r0, 0x5(r6)
    lwz r5, 0x0(r4)
    stb r0, 0x34(r5)
    bge lbl_80291688
    li r0, 0x0
    b lbl_8029168C
lbl_80291688:
    lbz r0, 0x6(r6)
lbl_8029168C:
    lwz r5, 0x0(r4)
    cmplwi r7, 0x9
    stb r0, 0x35(r5)
    bge lbl_802916A4
    li r0, 0x0
    b lbl_802916B4
lbl_802916A4:
    lbz r5, 0x7(r6)
    lbz r0, 0x8(r6)
    rlwimi r0, r5, 8, 16, 23
    xori r0, r0, 0xffff
lbl_802916B4:
    lwz r5, 0x0(r4)
    sth r0, 0x2a(r5)
    b lbl_80291800
lbl_802916C0:
    lbz r0, 0x0(r6)
    cmplwi r7, 0x8
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x2c(r5)
    lbz r0, 0x1(r6)
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x30(r5)
    lbz r0, 0x2(r6)
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x2e(r5)
    lbz r0, 0x3(r6)
    lwz r5, 0x0(r4)
    extsh r0, r0
    slwi r0, r0, 2
    sth r0, 0x32(r5)
    lbz r0, 0x4(r6)
    lwz r5, 0x0(r4)
    stb r0, 0x34(r5)
    lbz r0, 0x5(r6)
    lwz r5, 0x0(r4)
    stb r0, 0x35(r5)
    bge lbl_80291738
    li r0, 0x0
    b lbl_80291748
lbl_80291738:
    lbz r5, 0x6(r6)
    lbz r0, 0x7(r6)
    rlwimi r0, r5, 8, 16, 23
    xori r0, r0, 0xffff
lbl_80291748:
    lwz r5, 0x0(r4)
    sth r0, 0x2a(r5)
    b lbl_80291800
lbl_80291754:
    lbz r0, 0x0(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 26, 4
    sth r0, 0x2c(r5)
    lbz r0, 0x1(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 26, 4
    sth r0, 0x2e(r5)
    lbz r7, 0x1(r6)
    lbz r9, 0x2(r6)
    lbz r5, 0x0(r6)
    rlwinm r0, r7, 27, 29, 30
    srawi r9, r9, 7
    rlwimi r0, r5, 29, 27, 28
    srawi r5, r5, 3
    or r0, r9, r0
    lwz r5, 0x0(r4)
    extsh r0, r0
    srawi r7, r7, 5
    slwi r0, r0, 5
    sth r0, 0x30(r5)
    lbz r0, 0x2(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 27, 5
    sth r0, 0x32(r5)
    lbz r5, 0x2(r6)
    lbz r0, 0x3(r6)
    srawi r7, r5, 2
    lwz r5, 0x0(r4)
    srawi r0, r0, 5
    rlwimi r0, r7, 0, 27, 28
    clrlslwi r0, r0, 27, 3
    stb r0, 0x34(r5)
    lbz r0, 0x3(r6)
    lwz r5, 0x0(r4)
    clrlslwi r0, r0, 27, 3
    stb r0, 0x35(r5)
    lbz r7, 0x4(r6)
    lbz r0, 0x5(r6)
    rlwimi r0, r7, 8, 16, 23
    lwz r5, 0x0(r4)
    xori r0, r0, 0xffff
    sth r0, 0x2a(r5)
lbl_80291800:
    lbz r0, 0x8c1(r8)
    cmplwi r0, 0x2
    bne lbl_80291850
    lwz r6, 0x0(r4)
    lha r5, 0x2c(r6)
    subi r0, r5, 0x200
    sth r0, 0x2c(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x2e(r6)
    subi r0, r5, 0x200
    sth r0, 0x2e(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x30(r6)
    subi r0, r5, 0x200
    sth r0, 0x30(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x32(r6)
    subi r0, r5, 0x200
    sth r0, 0x32(r6)
    b lbl_80291870
lbl_80291850:
    lwz r6, 0x0(r4)
    lha r5, 0x2c(r6)
    subi r0, r5, 0x200
    sth r0, 0x2c(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x2e(r6)
    subi r0, r5, 0x200
    sth r0, 0x2e(r6)
lbl_80291870:
    lbz r0, 0x911(r8)
    cmpwi r0, 0x0
    bne lbl_802918F0
    li r0, 0x1
    stb r0, 0x911(r8)
    lwz r5, 0x0(r4)
    lha r0, 0x2c(r5)
    sth r0, 0x882(r8)
    lwz r5, 0x0(r4)
    lha r0, 0x2e(r5)
    sth r0, 0x888(r8)
    lbz r0, 0x8c1(r8)
    cmplwi r0, 0x2
    bne lbl_802918DC
    lwz r5, 0x0(r4)
    lha r0, 0x30(r5)
    sth r0, 0x88e(r8)
    lwz r5, 0x0(r4)
    lha r0, 0x32(r5)
    sth r0, 0x894(r8)
    lwz r5, 0x0(r4)
    lbz r0, 0x34(r5)
    stb r0, 0x89a(r8)
    lwz r5, 0x0(r4)
    lbz r0, 0x35(r5)
    stb r0, 0x89b(r8)
    b lbl_802918F0
lbl_802918DC:
    li r0, 0x0
    sth r0, 0x88e(r8)
    sth r0, 0x894(r8)
    stb r0, 0x89a(r8)
    stb r0, 0x89b(r8)
lbl_802918F0:
    lwz r6, 0x0(r4)
    lha r5, 0x882(r8)
    lha r0, 0x2c(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_80291914
    li r5, -0x200
lbl_80291914:
    cmpwi r0, 0x1ff
    ble lbl_80291920
    li r5, 0x1ff
lbl_80291920:
    sth r5, 0x2c(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x888(r8)
    lha r0, 0x2e(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_80291948
    li r5, -0x200
lbl_80291948:
    cmpwi r0, 0x1ff
    ble lbl_80291954
    li r5, 0x1ff
lbl_80291954:
    sth r5, 0x2e(r6)
    lbz r0, 0x8c1(r8)
    cmplwi r0, 0x2
    bne lbl_80291A2C
    lwz r6, 0x0(r4)
    lha r5, 0x88e(r8)
    lha r0, 0x30(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_80291988
    li r5, -0x200
lbl_80291988:
    cmpwi r0, 0x1ff
    ble lbl_80291994
    li r5, 0x1ff
lbl_80291994:
    sth r5, 0x30(r6)
    lwz r6, 0x0(r4)
    lha r5, 0x894(r8)
    lha r0, 0x32(r6)
    subf r0, r5, r0
    extsh r0, r0
    cmpwi r0, -0x200
    mr r5, r0
    bge lbl_802919BC
    li r5, -0x200
lbl_802919BC:
    cmpwi r0, 0x1ff
    ble lbl_802919C8
    li r5, 0x1ff
lbl_802919C8:
    sth r5, 0x32(r6)
    lwz r6, 0x0(r4)
    lbz r5, 0x89a(r8)
    lbz r0, 0x34(r6)
    subf r0, r5, r0
    extsh. r0, r0
    mr r5, r0
    bge lbl_802919EC
    li r5, 0x0
lbl_802919EC:
    cmpwi r0, 0xff
    ble lbl_802919F8
    li r5, 0xff
lbl_802919F8:
    stb r5, 0x34(r6)
    lwz r6, 0x0(r4)
    lbz r5, 0x89b(r8)
    lbz r0, 0x35(r6)
    subf r0, r5, r0
    extsh. r0, r0
    mr r5, r0
    bge lbl_80291A1C
    li r5, 0x0
lbl_80291A1C:
    cmpwi r0, 0xff
    ble lbl_80291A28
    li r5, 0xff
lbl_80291A28:
    stb r5, 0x35(r6)
lbl_80291A2C:
    la r5, lbl_8049DE0C
    lbzx r0, r5, r3
    cmpwi r0, 0x0
    beqlr
    lwz r3, 0x0(r4)
    li r0, 0x0
    sth r0, 0x30(r3)
    lwz r3, 0x0(r4)
    sth r0, 0x32(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x34(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x35(r3)
    blr
}

// asm_to_cpp: __parse_vs_data
asm void __parse_vs_data(s32 arg0, s8 **arg1, s32 arg2, u16 **arg3, s32 arg4) {
    nofralloc
    lbz r0, 0x0(r6)
    cmplwi cr1, r7, 0x15
    lwz r3, 0x0(r4)
    stb r0, 0x40(r3)
    lbz r0, 0x6(r6)
    lbz r5, 0x1(r6)
    srawi r0, r0, 6
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 2, 22, 29
    sth r0, 0x36(r3)
    lbz r0, 0x6(r6)
    lbz r7, 0x2(r6)
    srawi r5, r0, 4
    lwz r3, 0x0(r4)
    clrlslwi r0, r7, 18, 2
    rlwimi r0, r5, 0, 30, 31
    sth r0, 0x38(r3)
    lbz r0, 0x6(r6)
    lbz r7, 0x3(r6)
    srawi r5, r0, 2
    lwz r3, 0x0(r4)
    clrlslwi r0, r7, 18, 2
    rlwimi r0, r5, 0, 30, 31
    sth r0, 0x3a(r3)
    lbz r0, 0x4(r6)
    lbz r5, 0x6(r6)
    clrlslwi r0, r0, 18, 2
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 0, 30, 31
    sth r0, 0x3c(r3)
    lbz r0, 0x7(r6)
    lbz r5, 0x5(r6)
    srawi r0, r0, 6
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 2, 22, 29
    sth r0, 0x3e(r3)
    lbz r0, 0x8(r6)
    lwz r3, 0x0(r4)
    stb r0, 0x34(r3)
    lbz r0, 0xe(r6)
    lbz r5, 0x9(r6)
    srawi r0, r0, 6
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 2, 22, 29
    sth r0, 0x2a(r3)
    lbz r0, 0xe(r6)
    lbz r7, 0xa(r6)
    srawi r5, r0, 4
    lwz r3, 0x0(r4)
    clrlslwi r0, r7, 18, 2
    rlwimi r0, r5, 0, 30, 31
    sth r0, 0x2c(r3)
    lbz r0, 0xe(r6)
    lbz r7, 0xb(r6)
    srawi r5, r0, 2
    lwz r3, 0x0(r4)
    clrlslwi r0, r7, 18, 2
    rlwimi r0, r5, 0, 30, 31
    sth r0, 0x2e(r3)
    lbz r0, 0xc(r6)
    lbz r5, 0xe(r6)
    clrlslwi r0, r0, 18, 2
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 0, 30, 31
    sth r0, 0x30(r3)
    lbz r0, 0xf(r6)
    lbz r5, 0xd(r6)
    srawi r0, r0, 6
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 2, 22, 29
    sth r0, 0x32(r3)
    lbz r0, 0x7(r6)
    lbz r5, 0xf(r6)
    clrlslwi r0, r0, 20, 4
    lwz r3, 0x0(r4)
    andi. r0, r0, 0xf3f0
    srawi r5, r5, 2
    rlwimi r0, r5, 0, 28, 31
    sth r0, 0x42(r3)
    lbz r0, 0xf(r6)
    lwz r3, 0x0(r4)
    clrlwi r0, r0, 30
    stb r0, 0x46(r3)
    bge cr1, lbl_80291BDC
    lwz r3, 0x0(r4)
    li r0, 0x0
    sth r0, 0x44(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x47(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x48(r3)
    lwz r3, 0x0(r4)
    stb r0, 0x49(r3)
    blr
lbl_80291BDC:
    lbz r0, 0x11(r6)
    lbz r5, 0x10(r6)
    srawi r0, r0, 6
    lwz r3, 0x0(r4)
    rlwimi r0, r5, 2, 22, 29
    sth r0, 0x44(r3)
    lbz r0, 0x12(r6)
    lwz r3, 0x0(r4)
    clrlwi r0, r0, 29
    stb r0, 0x47(r3)
    lbz r0, 0x13(r6)
    lwz r3, 0x0(r4)
    stb r0, 0x48(r3)
    lbz r0, 0x14(r6)
    lwz r3, 0x0(r4)
    stb r0, 0x49(r3)
    blr
}

// asm_to_cpp: __a1_30_data_type
asm void __a1_30_data_type() {
    nofralloc
    lbz r6, 0x2(r4)
    lis r7, lbl_8040C450@ha
    lbz r0, 0x1(r4)
    clrlslwi r3, r3, 24, 2
    rlwimi r0, r6, 8, 16, 23
    addi r7, r7, lbl_8040C450@l
    andi. r0, r0, 0x9f1f
    lwzx r3, r7, r3
    sth r0, 0x0(r5)
    lbz r0, 0x8c1(r3)
    stb r0, 0x28(r5)
    lwz r0, 0x8b8(r3)
    cmpwi r0, 0x0
    bne lbl_80291C64
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_80291C6C
lbl_80291C64:
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_80291C6C:
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r3)
    blr
}

// asm_to_cpp: __a1_31_data_type
asm void __a1_31_data_type() {
    nofralloc
    lbz r6, 0x2(r4)
    lis r7, lbl_8040C450@ha
    lbz r0, 0x1(r4)
    clrlslwi r8, r3, 24, 2
    rlwimi r0, r6, 8, 16, 23
    addi r7, r7, lbl_8040C450@l
    andi. r0, r0, 0x9f1f
    lwzx r6, r7, r8
    sth r0, 0x0(r5)
    lbz r0, 0x8c1(r6)
    stb r0, 0x28(r5)
    lwz r0, 0x8b8(r6)
    cmplwi r0, 0x1
    bgt lbl_80291CC0
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_80291CC8
lbl_80291CC0:
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_80291CC8:
    lbz r0, 0x1(r4)
    lis r7, lbl_8040C450@ha
    clrlslwi r8, r3, 24, 2
    extrwi r0, r0, 1, 24
    addi r7, r7, lbl_8040C450@l
    stw r0, 0x848(r6)
    lbz r3, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r6, r3, 2
    lwzx r3, r7, r8
    extsh r6, r6
    extrwi r0, r0, 2, 25
    clrrwi r6, r6, 2
    lha r7, 0x874(r3)
    extsh r6, r6
    or r0, r6, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2(r5)
    lbz r6, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r6, r6, 2
    lha r7, 0x876(r3)
    extsh r6, r6
    rlwinm r0, r0, 28, 30, 30
    clrrwi r6, r6, 2
    extsh r6, r6
    extsh r0, r0
    or r0, r6, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x4(r5)
    lbz r6, 0x5(r4)
    lbz r0, 0x2(r4)
    slwi r4, r6, 2
    lha r6, 0x878(r3)
    extsh r3, r4
    rlwinm r0, r0, 27, 30, 30
    clrrwi r3, r3, 2
    extsh r3, r3
    extsh r0, r0
    or r0, r3, r0
    extsh r0, r0
    subf r0, r6, r0
    sth r0, 0x6(r5)
    blr
}

// asm_to_cpp: fn_80291D80
asm void fn_80291D80() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8040C450@ha
    clrlslwi r7, r3, 24, 2
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8040C450@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    stw r5, 0x8(r1)
    lwzx r28, r6, r7
    lbz r3, 0x2(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r3, 8, 16, 23
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lwz r0, 0x8b8(r28)
    cmpwi r0, 0x0
    beq lbl_80291DF4
    cmplwi r0, 0x3
    beq lbl_80291DF4
    cmplwi r0, 0x6
    beq lbl_80291DF4
    cmplwi r0, 0xa
    bne lbl_80291E00
lbl_80291DF4:
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_80291E08
lbl_80291E00:
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_80291E08:
    lbz r0, 0x8c1(r28)
    lis r3, lbl_8040FBD0@ha
    addi r3, r3, lbl_8040FBD0@l
    stb r0, 0x28(r5)
    li r5, 0x8
    lbz r0, 0x1(r4)
    addi r4, r4, 0x3
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r28)
    bl memcpy
    mr r3, r29
    addi r4, r30, 0x3
    li r5, 0x8
    li r6, 0x0
    bl WPADiDecode
    lwz r0, 0x840(r28)
    cmpwi r0, 0x0
    beq lbl_80292074
    lbz r0, 0x8c1(r28)
    cmplwi r0, 0x1
    bne lbl_80291FEC
    lis r3, lbl_8040C450@ha
    clrlslwi r4, r29, 24, 2
    addi r3, r3, lbl_8040C450@l
    lbz r0, 0x3(r30)
    lwzx r3, r3, r4
    lwz r4, 0x8(r1)
    stb r0, 0x30(r4)
    lbz r0, 0x4(r30)
    lwz r4, 0x8(r1)
    stb r0, 0x31(r4)
    lbz r0, 0x5(r30)
    lbz r5, 0x8(r30)
    slwi r0, r0, 2
    lha r7, 0x88e(r3)
    extsh r4, r0
    clrrwi r6, r4, 2
    extrwi r0, r5, 2, 28
    extsh r6, r6
    lwz r4, 0x8(r1)
    or r0, r6, r0
    srawi r5, r5, 2
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2a(r4)
    lbz r0, 0x6(r30)
    lbz r5, 0x8(r30)
    slwi r0, r0, 2
    lha r7, 0x890(r3)
    extsh r4, r0
    clrrwi r6, r4, 2
    extrwi r0, r5, 2, 26
    extsh r6, r6
    lwz r4, 0x8(r1)
    or r0, r6, r0
    srawi r5, r5, 4
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2c(r4)
    lbz r4, 0x7(r30)
    lbz r0, 0x8(r30)
    slwi r4, r4, 2
    lha r6, 0x892(r3)
    extsh r4, r4
    srawi r0, r0, 6
    clrrwi r5, r4, 2
    lwz r4, 0x8(r1)
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r6, r0
    sth r0, 0x2e(r4)
    lwz r5, 0x8(r1)
    lbz r0, 0x8(r30)
    lhz r4, 0x0(r5)
    nor r0, r0, r0
    clrlslwi r0, r0, 30, 13
    or r0, r4, r0
    sth r0, 0x0(r5)
    lbz r0, 0x911(r3)
    cmpwi r0, 0x0
    bne lbl_80291F78
    li r0, 0x1
    stb r0, 0x911(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x30(r4)
    extsb r0, r0
    sth r0, 0x882(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x31(r4)
    extsb r0, r0
    sth r0, 0x888(r3)
lbl_80291F78:
    lwz r5, 0x8(r1)
    lha r4, 0x882(r3)
    lbz r0, 0x30(r5)
    clrlwi r4, r4, 24
    subf r0, r4, r0
    extsh r4, r0
    cmpwi r4, -0x80
    mr r0, r4
    bge lbl_80291FA0
    li r0, -0x80
lbl_80291FA0:
    cmpwi r4, 0x7f
    ble lbl_80291FAC
    li r0, 0x7f
lbl_80291FAC:
    stb r0, 0x30(r5)
    lwz r4, 0x8(r1)
    lha r3, 0x888(r3)
    lbz r0, 0x31(r4)
    clrlwi r3, r3, 24
    subf r0, r3, r0
    extsh r3, r0
    cmpwi r3, -0x80
    mr r0, r3
    bge lbl_80291FD8
    li r0, -0x80
lbl_80291FD8:
    cmpwi r3, 0x7f
    ble lbl_80291FE4
    li r0, 0x7f
lbl_80291FE4:
    stb r0, 0x31(r4)
    b lbl_80292040
lbl_80291FEC:
    cmplwi r0, 0x2
    bne lbl_80292010
    lbz r5, 0x8c2(r28)
    mr r3, r29
    addi r4, r1, 0x8
    addi r6, r30, 0x3
    li r7, 0x8
    bl __parse_cl_data
    b lbl_80292040
lbl_80292010:
    cmplwi r0, 0x10
    bne lbl_80292040
    lwz r4, 0x8(r1)
    lbz r0, 0x5(r30)
    stb r0, 0x2c(r4)
    lbz r0, 0x6(r30)
    stb r0, 0x2d(r4)
    lbz r3, 0x9(r30)
    lbz r0, 0xa(r30)
    rlwimi r0, r3, 8, 16, 23
    xori r0, r0, 0xffff
    sth r0, 0x2a(r4)
lbl_80292040:
    lis r3, lbl_8040FBD0@ha
    lis r4, lbl_80341548@ha
    addi r3, r3, lbl_8040FBD0@l
    li r5, 0x8
    addi r4, r4, lbl_80341548@l
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80292074
    lbz r0, 0x29(r31)
    extsb. r0, r0
    bne lbl_80292074
    li r0, -0x7
    stb r0, 0x29(r31)
lbl_80292074:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __a1_33_data_type
asm void __a1_33_data_type() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_8040C450@ha
    clrlslwi r8, r3, 24, 2
    stw r0, 0x14(r1)
    addi r7, r7, lbl_8040C450@l
    stw r5, 0x8(r1)
    lwzx r8, r7, r8
    lbz r6, 0x2(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r6, 8, 16, 23
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lbz r0, 0x8c1(r8)
    lwz r5, 0x8(r1)
    stb r0, 0x28(r5)
    lwz r0, 0x8b8(r8)
    cmplwi r0, 0x2
    bgt lbl_802920F0
    lwz r5, 0x8(r1)
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_802920FC
lbl_802920F0:
    lwz r5, 0x8(r1)
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_802920FC:
    lbz r0, 0x1(r4)
    lis r10, lbl_8040C450@ha
    clrlslwi r11, r3, 24, 2
    addi r6, r4, 0x6
    extrwi r0, r0, 1, 24
    addi r10, r10, lbl_8040C450@l
    stw r0, 0x848(r8)
    li r7, 0xc
    lbz r5, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r9, r5, 2
    lwzx r5, r10, r11
    extsh r9, r9
    extrwi r0, r0, 2, 25
    clrrwi r9, r9, 2
    lha r11, 0x874(r5)
    extsh r10, r9
    lwz r9, 0x8(r1)
    or r0, r10, r0
    extsh r0, r0
    subf r0, r11, r0
    sth r0, 0x2(r9)
    lbz r9, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r9, r9, 2
    lha r11, 0x876(r5)
    extsh r9, r9
    rlwinm r0, r0, 28, 30, 30
    clrrwi r10, r9, 2
    lwz r9, 0x8(r1)
    extsh r10, r10
    extsh r0, r0
    or r0, r10, r0
    extsh r0, r0
    subf r0, r11, r0
    sth r0, 0x4(r9)
    lbz r9, 0x5(r4)
    lbz r0, 0x2(r4)
    addi r4, r1, 0x8
    slwi r9, r9, 2
    lha r10, 0x878(r5)
    extsh r5, r9
    rlwinm r0, r0, 27, 30, 30
    clrrwi r9, r5, 2
    lwz r5, 0x8(r1)
    extsh r9, r9
    extsh r0, r0
    or r0, r9, r0
    extsh r0, r0
    subf r0, r10, r0
    sth r0, 0x6(r5)
    lbz r5, 0x8cb(r8)
    bl fn_80290E90
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802921E0
asm void fn_802921E0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_8040C450@ha
    clrlslwi r8, r3, 24, 2
    stw r0, 0x24(r1)
    addi r7, r7, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r6, 0x2(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r6, 8, 16, 23
    lwzx r31, r7, r8
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lwz r0, 0x8b8(r31)
    cmplwi r0, 0xc
    bne lbl_80292244
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_8029224C
lbl_80292244:
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_8029224C:
    lbz r0, 0x8c1(r31)
    lis r3, lbl_8040FBD0@ha
    addi r3, r3, lbl_8040FBD0@l
    stb r0, 0x28(r5)
    li r5, 0x13
    lbz r0, 0x1(r4)
    addi r4, r4, 0x3
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r31)
    bl memcpy
    mr r3, r28
    addi r4, r29, 0x3
    li r5, 0x13
    li r6, 0x0
    bl WPADiDecode
    lwz r0, 0x840(r31)
    cmpwi r0, 0x0
    beq lbl_802923A8
    lbz r0, 0x8c1(r31)
    cmplwi r0, 0x3
    bne lbl_80292374
    lbz r3, 0x3(r29)
    lbz r0, 0x4(r29)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x2a(r30)
    lbz r3, 0x5(r29)
    lbz r0, 0x6(r29)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x2c(r30)
    lbz r3, 0x7(r29)
    lbz r0, 0x8(r29)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x2e(r30)
    lbz r3, 0x9(r29)
    lbz r0, 0xa(r29)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x30(r30)
    lbz r0, 0xb(r29)
    stb r0, 0x32(r30)
    lbz r0, 0xd(r29)
    slwi r3, r0, 1
    stb r0, 0x33(r30)
    cmpwi r3, 0x104
    blt lbl_80292308
    li r0, 0x4
    stb r0, 0x98f(r31)
    b lbl_80292360
lbl_80292308:
    bge lbl_80292320
    cmpwi r3, 0xfa
    blt lbl_80292320
    li r0, 0x3
    stb r0, 0x98f(r31)
    b lbl_80292360
lbl_80292320:
    cmpwi r3, 0xfa
    bge lbl_8029233C
    cmpwi r3, 0xf0
    blt lbl_8029233C
    li r0, 0x2
    stb r0, 0x98f(r31)
    b lbl_80292360
lbl_8029233C:
    cmpwi r3, 0xf0
    bge lbl_80292358
    cmpwi r3, 0xd4
    blt lbl_80292358
    li r0, 0x1
    stb r0, 0x98f(r31)
    b lbl_80292360
lbl_80292358:
    li r0, 0x0
    stb r0, 0x98f(r31)
lbl_80292360:
    lbz r0, 0x911(r31)
    cmpwi r0, 0x0
    bne lbl_80292374
    li r0, 0x1
    stb r0, 0x911(r31)
lbl_80292374:
    lis r3, lbl_8040FBD0@ha
    lis r4, lbl_80341548@ha
    addi r3, r3, lbl_8040FBD0@l
    li r5, 0x13
    addi r4, r4, lbl_80341548@l
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802923A8
    lbz r0, 0x29(r30)
    extsb. r0, r0
    bne lbl_802923A8
    li r0, -0x7
    stb r0, 0x29(r30)
lbl_802923A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802923C8
asm void fn_802923C8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    stw r5, 0x8(r1)
    lis r7, lbl_8040C450@ha
    clrlslwi r8, r3, 24, 2
    mr r26, r3
    lbz r6, 0x2(r4)
    addi r7, r7, lbl_8040C450@l
    lbz r0, 0x1(r4)
    mr r27, r4
    rlwimi r0, r6, 8, 16, 23
    lwzx r29, r7, r8
    andi. r0, r0, 0x9f1f
    mr r28, r5
    sth r0, 0x0(r5)
    lwz r0, 0x8b8(r29)
    cmpwi r0, 0x0
    beq lbl_8029244C
    cmplwi r0, 0x1
    beq lbl_8029244C
    cmplwi r0, 0x3
    beq lbl_8029244C
    cmplwi r0, 0x4
    beq lbl_8029244C
    cmplwi r0, 0x6
    beq lbl_8029244C
    cmplwi r0, 0x7
    beq lbl_8029244C
    cmplwi r0, 0xd
    bne lbl_80292458
lbl_8029244C:
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_80292460
lbl_80292458:
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_80292460:
    lbz r0, 0x8c1(r29)
    lis r31, lbl_8040C450@ha
    clrlslwi r30, r3, 24, 2
    lis r3, lbl_8040FBD0@ha
    stb r0, 0x28(r5)
    addi r31, r31, lbl_8040C450@l
    addi r3, r3, lbl_8040FBD0@l
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r29)
    lbz r6, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r7, r6, 2
    lwzx r6, r31, r30
    extsh r7, r7
    extrwi r0, r0, 2, 25
    clrrwi r7, r7, 2
    lha r8, 0x874(r6)
    extsh r7, r7
    or r0, r7, r0
    extsh r0, r0
    subf r0, r8, r0
    sth r0, 0x2(r5)
    lbz r7, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r7, r7, 2
    lha r8, 0x876(r6)
    extsh r7, r7
    rlwinm r0, r0, 28, 30, 30
    clrrwi r7, r7, 2
    extsh r7, r7
    extsh r0, r0
    or r0, r7, r0
    extsh r0, r0
    subf r0, r8, r0
    sth r0, 0x4(r5)
    lbz r7, 0x5(r4)
    lbz r0, 0x2(r4)
    addi r4, r4, 0x6
    slwi r7, r7, 2
    lha r8, 0x878(r6)
    extsh r6, r7
    rlwinm r0, r0, 27, 30, 30
    clrrwi r6, r6, 2
    extsh r6, r6
    extsh r0, r0
    or r0, r6, r0
    extsh r0, r0
    subf r0, r8, r0
    sth r0, 0x6(r5)
    li r5, 0x10
    bl memcpy
    mr r3, r26
    addi r4, r27, 0x6
    li r5, 0x10
    li r6, 0x0
    bl WPADiDecode
    lwz r0, 0x840(r29)
    cmpwi r0, 0x0
    beq lbl_8029275C
    lbz r0, 0x8c1(r29)
    cmplwi r0, 0x1
    bne lbl_802926E0
    lwzx r3, r31, r30
    lbz r0, 0x6(r27)
    lwz r4, 0x8(r1)
    stb r0, 0x30(r4)
    lbz r0, 0x7(r27)
    lwz r4, 0x8(r1)
    stb r0, 0x31(r4)
    lbz r4, 0x8(r27)
    lbz r5, 0xb(r27)
    slwi r6, r4, 2
    lha r7, 0x88e(r3)
    extrwi r0, r5, 2, 28
    srawi r5, r5, 2
    extsh r6, r6
    lwz r4, 0x8(r1)
    clrrwi r5, r6, 2
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2a(r4)
    lbz r4, 0x9(r27)
    lbz r5, 0xb(r27)
    slwi r6, r4, 2
    lha r7, 0x890(r3)
    extrwi r0, r5, 2, 26
    srawi r5, r5, 4
    extsh r6, r6
    lwz r4, 0x8(r1)
    clrrwi r5, r6, 2
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2c(r4)
    lbz r4, 0xa(r27)
    lbz r0, 0xb(r27)
    slwi r4, r4, 2
    lha r6, 0x892(r3)
    extsh r4, r4
    srawi r0, r0, 6
    clrrwi r5, r4, 2
    lwz r4, 0x8(r1)
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r6, r0
    sth r0, 0x2e(r4)
    lwz r5, 0x8(r1)
    lbz r0, 0xb(r27)
    lhz r4, 0x0(r5)
    nor r0, r0, r0
    clrlslwi r0, r0, 30, 13
    or r0, r4, r0
    sth r0, 0x0(r5)
    lbz r0, 0x911(r3)
    cmpwi r0, 0x0
    bne lbl_8029266C
    li r0, 0x1
    stb r0, 0x911(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x30(r4)
    extsb r0, r0
    sth r0, 0x882(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x31(r4)
    extsb r0, r0
    sth r0, 0x888(r3)
lbl_8029266C:
    lwz r5, 0x8(r1)
    lha r4, 0x882(r3)
    lbz r0, 0x30(r5)
    clrlwi r4, r4, 24
    subf r0, r4, r0
    extsh r4, r0
    cmpwi r4, -0x80
    mr r0, r4
    bge lbl_80292694
    li r0, -0x80
lbl_80292694:
    cmpwi r4, 0x7f
    ble lbl_802926A0
    li r0, 0x7f
lbl_802926A0:
    stb r0, 0x30(r5)
    lwz r4, 0x8(r1)
    lha r3, 0x888(r3)
    lbz r0, 0x31(r4)
    clrlwi r3, r3, 24
    subf r0, r3, r0
    extsh r3, r0
    cmpwi r3, -0x80
    mr r0, r3
    bge lbl_802926CC
    li r0, -0x80
lbl_802926CC:
    cmpwi r3, 0x7f
    ble lbl_802926D8
    li r0, 0x7f
lbl_802926D8:
    stb r0, 0x31(r4)
    b lbl_80292728
lbl_802926E0:
    cmplwi r0, 0x2
    bne lbl_80292704
    lbz r5, 0x8c2(r29)
    mr r3, r26
    addi r4, r1, 0x8
    addi r6, r27, 0x6
    li r7, 0x10
    bl __parse_cl_data
    b lbl_80292728
lbl_80292704:
    cmplwi r0, 0x4
    bne lbl_80292728
    lwz r0, 0x8b8(r29)
    mr r3, r26
    addi r4, r1, 0x8
    addi r6, r27, 0x6
    clrlwi r5, r0, 24
    li r7, 0x10
    bl __parse_vs_data
lbl_80292728:
    lis r3, lbl_8040FBD0@ha
    lis r4, lbl_80341548@ha
    addi r3, r3, lbl_8040FBD0@l
    li r5, 0x10
    addi r4, r4, lbl_80341548@l
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8029275C
    lbz r0, 0x29(r28)
    extsb. r0, r0
    bne lbl_8029275C
    li r0, -0x7
    stb r0, 0x29(r28)
lbl_8029275C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __a1_36_data_type
asm void __a1_36_data_type() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_8040C450@ha
    clrlslwi r8, r3, 24, 2
    stw r0, 0x24(r1)
    addi r7, r7, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r5, 0x8(r1)
    lwzx r30, r7, r8
    li r7, 0xa
    lbz r0, 0x2(r4)
    lbz r6, 0x1(r4)
    rlwimi r6, r0, 8, 16, 23
    li r0, -0x4
    andi. r8, r6, 0x9f1f
    addi r6, r29, 0x3
    sth r8, 0x0(r5)
    lwz r5, 0x8(r1)
    stb r0, 0x29(r5)
    lbz r0, 0x8c1(r30)
    lwz r5, 0x8(r1)
    stb r0, 0x28(r5)
    lbz r0, 0x1(r4)
    addi r4, r1, 0x8
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r30)
    lbz r5, 0x8cb(r30)
    bl fn_80290E90
    lis r31, lbl_8040FBD0@ha
    addi r4, r29, 0xd
    addi r3, r31, lbl_8040FBD0@l
    li r5, 0x9
    bl memcpy
    mr r3, r28
    addi r4, r29, 0xd
    li r5, 0x9
    li r6, 0x0
    bl WPADiDecode
    lwz r0, 0x840(r30)
    cmpwi r0, 0x0
    beq lbl_80292860
    lis r4, lbl_80341548@ha
    addi r3, r31, lbl_8040FBD0@l
    addi r4, r4, lbl_80341548@l
    li r5, 0x9
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80292860
    lwz r3, 0x8(r1)
    lbz r0, 0x29(r3)
    extsb. r0, r0
    bne lbl_80292860
    li r0, -0x7
    stb r0, 0x29(r3)
lbl_80292860:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80292880
asm void fn_80292880() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r6, lbl_8040C450@ha
    stw r5, 0x8(r1)
    clrlslwi r0, r3, 24, 2
    mr r27, r3
    addi r6, r6, lbl_8040C450@l
    stw r5, 0xc(r1)
    lwzx r29, r6, r0
    mr r28, r4
    lbz r6, 0x2(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r6, 8, 16, 23
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r5)
    lwz r0, 0x8b8(r29)
    cmpwi r0, 0x0
    beq lbl_80292924
    cmplwi r0, 0x1
    beq lbl_80292924
    cmplwi r0, 0x2
    beq lbl_80292924
    cmplwi r0, 0x3
    beq lbl_80292924
    cmplwi r0, 0x4
    beq lbl_80292924
    cmplwi r0, 0x5
    beq lbl_80292924
    cmplwi r0, 0x6
    beq lbl_80292924
    cmplwi r0, 0x7
    beq lbl_80292924
    cmplwi r0, 0x8
    beq lbl_80292924
    cmplwi r0, 0xb
    beq lbl_80292924
    cmplwi r0, 0xf
    bne lbl_80292934
lbl_80292924:
    lwz r5, 0xc(r1)
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_80292940
lbl_80292934:
    lwz r5, 0xc(r1)
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_80292940:
    lbz r0, 0x8c1(r29)
    lis r31, lbl_8040C450@ha
    lwz r5, 0xc(r1)
    clrlslwi r30, r3, 24, 2
    addi r31, r31, lbl_8040C450@l
    mr r3, r27
    stb r0, 0x28(r5)
    addi r6, r28, 0x6
    li r7, 0xa
    lbz r0, 0x1(r4)
    extrwi r0, r0, 1, 24
    stw r0, 0x848(r29)
    lbz r5, 0x3(r4)
    lbz r0, 0x1(r4)
    slwi r8, r5, 2
    lwzx r5, r31, r30
    extsh r8, r8
    extrwi r0, r0, 2, 25
    clrrwi r8, r8, 2
    lha r10, 0x874(r5)
    extsh r9, r8
    lwz r8, 0xc(r1)
    or r0, r9, r0
    extsh r0, r0
    subf r0, r10, r0
    sth r0, 0x2(r8)
    lbz r8, 0x4(r4)
    lbz r0, 0x2(r4)
    slwi r8, r8, 2
    lha r10, 0x876(r5)
    extsh r8, r8
    rlwinm r0, r0, 28, 30, 30
    clrrwi r9, r8, 2
    lwz r8, 0xc(r1)
    extsh r9, r9
    extsh r0, r0
    or r0, r9, r0
    extsh r0, r0
    subf r0, r10, r0
    sth r0, 0x4(r8)
    lbz r8, 0x5(r4)
    lbz r0, 0x2(r4)
    addi r4, r1, 0xc
    slwi r8, r8, 2
    lha r9, 0x878(r5)
    extsh r5, r8
    rlwinm r0, r0, 27, 30, 30
    clrrwi r8, r5, 2
    lwz r5, 0xc(r1)
    extsh r8, r8
    extsh r0, r0
    or r0, r8, r0
    extsh r0, r0
    subf r0, r9, r0
    sth r0, 0x6(r5)
    lbz r5, 0x8cb(r29)
    bl fn_80290E90
    lis r3, lbl_8040FBD0@ha
    addi r4, r28, 0x10
    addi r3, r3, lbl_8040FBD0@l
    li r5, 0x6
    bl memcpy
    mr r3, r27
    addi r4, r28, 0x10
    li r5, 0x6
    li r6, 0x0
    bl WPADiDecode
    lwz r0, 0x840(r29)
    cmpwi r0, 0x0
    beq lbl_80292C50
    lbz r3, 0x8c1(r29)
    cmplwi r3, 0x1
    bne lbl_80292BE8
    lwzx r3, r31, r30
    lbz r0, 0x10(r28)
    lwz r4, 0x8(r1)
    stb r0, 0x30(r4)
    lbz r0, 0x11(r28)
    lwz r4, 0x8(r1)
    stb r0, 0x31(r4)
    lbz r4, 0x12(r28)
    lbz r5, 0x15(r28)
    slwi r6, r4, 2
    lha r7, 0x88e(r3)
    extrwi r0, r5, 2, 28
    srawi r5, r5, 2
    extsh r6, r6
    lwz r4, 0x8(r1)
    clrrwi r5, r6, 2
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2a(r4)
    lbz r4, 0x13(r28)
    lbz r5, 0x15(r28)
    slwi r6, r4, 2
    lha r7, 0x890(r3)
    extrwi r0, r5, 2, 26
    srawi r5, r5, 4
    extsh r6, r6
    lwz r4, 0x8(r1)
    clrrwi r5, r6, 2
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r7, r0
    sth r0, 0x2c(r4)
    lbz r4, 0x14(r28)
    lbz r0, 0x15(r28)
    slwi r4, r4, 2
    lha r6, 0x892(r3)
    extsh r4, r4
    srawi r0, r0, 6
    clrrwi r5, r4, 2
    lwz r4, 0x8(r1)
    extsh r5, r5
    or r0, r5, r0
    extsh r0, r0
    subf r0, r6, r0
    sth r0, 0x2e(r4)
    lwz r5, 0x8(r1)
    lbz r0, 0x15(r28)
    lhz r4, 0x0(r5)
    nor r0, r0, r0
    clrlslwi r0, r0, 30, 13
    or r0, r4, r0
    sth r0, 0x0(r5)
    lbz r0, 0x911(r3)
    cmpwi r0, 0x0
    bne lbl_80292B74
    li r0, 0x1
    stb r0, 0x911(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x30(r4)
    extsb r0, r0
    sth r0, 0x882(r3)
    lwz r4, 0x8(r1)
    lbz r0, 0x31(r4)
    extsb r0, r0
    sth r0, 0x888(r3)
lbl_80292B74:
    lwz r5, 0x8(r1)
    lha r4, 0x882(r3)
    lbz r0, 0x30(r5)
    clrlwi r4, r4, 24
    subf r0, r4, r0
    extsh r4, r0
    cmpwi r4, -0x80
    mr r0, r4
    bge lbl_80292B9C
    li r0, -0x80
lbl_80292B9C:
    cmpwi r4, 0x7f
    ble lbl_80292BA8
    li r0, 0x7f
lbl_80292BA8:
    stb r0, 0x30(r5)
    lwz r4, 0x8(r1)
    lha r3, 0x888(r3)
    lbz r0, 0x31(r4)
    clrlwi r3, r3, 24
    subf r0, r3, r0
    extsh r3, r0
    cmpwi r3, -0x80
    mr r0, r3
    bge lbl_80292BD4
    li r0, -0x80
lbl_80292BD4:
    cmpwi r3, 0x7f
    ble lbl_80292BE0
    li r0, 0x7f
lbl_80292BE0:
    stb r0, 0x31(r4)
    b lbl_80292C18
lbl_80292BE8:
    cmplwi r3, 0x2
    beq lbl_80292C00
    addi r0, r3, 0xef
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_80292C18
lbl_80292C00:
    lbz r5, 0x8c2(r29)
    mr r3, r27
    addi r4, r1, 0x8
    addi r6, r28, 0x10
    li r7, 0x6
    bl __parse_cl_data
lbl_80292C18:
    lis r3, lbl_8040FBD0@ha
    lis r4, lbl_80341548@ha
    addi r3, r3, lbl_8040FBD0@l
    li r5, 0x6
    addi r4, r4, lbl_80341548@l
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80292C50
    lwz r3, 0xc(r1)
    lbz r0, 0x29(r3)
    extsb. r0, r0
    bne lbl_80292C50
    li r0, -0x7
    stb r0, 0x29(r3)
lbl_80292C50:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __a1_3d_data_type
asm void __a1_3d_data_type() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8040C450@ha
    stw r0, 0x24(r1)
    clrlslwi r0, r3, 24, 2
    addi r6, r6, lbl_8040C450@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r5, 0x8(r1)
    lwzx r31, r6, r0
    lwz r0, 0x8b8(r31)
    cmplwi r0, 0xe
    bne lbl_80292CBC
    li r0, 0x0
    stb r0, 0x29(r5)
    b lbl_80292CC4
lbl_80292CBC:
    li r0, -0x4
    stb r0, 0x29(r5)
lbl_80292CC4:
    lbz r0, 0x8c1(r31)
    lis r3, lbl_8040FBD0@ha
    addi r3, r3, lbl_8040FBD0@l
    addi r4, r4, 0x1
    stb r0, 0x28(r5)
    li r5, 0x15
    bl memcpy
    mr r3, r28
    addi r4, r29, 0x1
    li r5, 0x15
    li r6, 0x0
    bl WPADiDecode
    lwz r0, 0x840(r31)
    cmpwi r0, 0x0
    beq lbl_80292D5C
    lbz r0, 0x8c1(r31)
    cmplwi r0, 0x4
    bne lbl_80292D28
    lwz r0, 0x8b8(r31)
    mr r3, r28
    addi r4, r1, 0x8
    addi r6, r29, 0x1
    clrlwi r5, r0, 24
    li r7, 0x15
    bl __parse_vs_data
lbl_80292D28:
    lis r3, lbl_8040FBD0@ha
    lis r4, lbl_80341548@ha
    addi r3, r3, lbl_8040FBD0@l
    li r5, 0x15
    addi r4, r4, lbl_80341548@l
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80292D5C
    lbz r0, 0x29(r30)
    extsb. r0, r0
    bne lbl_80292D5C
    li r0, -0x7
    stb r0, 0x29(r30)
lbl_80292D5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80292D7C
asm void fn_80292D7C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    la r30, lbl_8049DE00
    lis r6, lbl_8040C450@ha
    lbzx r0, r30, r3
    clrlslwi r7, r3, 24, 2
    addi r6, r6, lbl_8040C450@l
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    lwzx r28, r6, r7
    mr r26, r3
    mr r27, r4
    mr r29, r5
    bne lbl_80292DE0
    la r4, lbl_8049DE04
    lbzx r0, r4, r3
    cmpwi r0, 0x0
    bne lbl_80292DE0
    mr r3, r29
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_80292DE0:
    lbz r3, 0x2(r27)
    lbz r0, 0x1(r27)
    rlwimi r0, r3, 8, 16, 23
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r29)
    lwz r0, 0x8b8(r28)
    cmpwi r0, 0x0
    beq lbl_80292E10
    cmplwi r0, 0x1
    beq lbl_80292E10
    cmplwi r0, 0x9
    bne lbl_80292E1C
lbl_80292E10:
    li r0, 0x0
    stb r0, 0x29(r29)
    b lbl_80292E24
lbl_80292E1C:
    li r0, -0x4
    stb r0, 0x29(r29)
lbl_80292E24:
    lbz r0, 0x8c1(r28)
    lis r9, lbl_8040C450@ha
    li r31, 0x0
    clrlslwi r10, r26, 24, 2
    stb r0, 0x28(r29)
    addi r9, r9, lbl_8040C450@l
    mr r3, r26
    addi r4, r1, 0x8
    stw r31, 0x848(r28)
    addi r6, r27, 0x4
    li r5, 0x0
    li r7, 0x0
    lbz r8, 0x3(r27)
    lbz r0, 0x1(r27)
    slwi r8, r8, 2
    lwzx r9, r9, r10
    extsh r8, r8
    rlwinm r0, r0, 26, 30, 30
    clrrwi r8, r8, 2
    lha r9, 0x874(r9)
    extsh r8, r8
    extsh r0, r0
    or r0, r8, r0
    extsh r0, r0
    subf r0, r9, r0
    sth r0, 0x2(r29)
    lbz r8, 0x2(r27)
    lbz r0, 0x1(r27)
    slwi r8, r8, 3
    lha r9, 0x6(r29)
    extsh r8, r8
    rlwinm r0, r0, 1, 24, 25
    clrrwi r8, r8, 8
    extsh r8, r8
    or r0, r8, r0
    extsh r0, r0
    or r0, r9, r0
    sth r0, 0x6(r29)
    bl __parse_dpdex_data
    mr r3, r26
    addi r4, r1, 0x8
    addi r6, r27, 0xd
    li r5, 0x1
    li r7, 0x0
    bl __parse_dpdex_data
    bl OSDisableInterrupts
    li r0, 0x1
    la r5, lbl_8049DE04
    stbx r0, r30, r26
    lbzx r0, r5, r26
    cmpwi r0, 0x0
    beq lbl_80292F1C
    lha r4, 0x878(r28)
    lha r0, 0x6(r29)
    subf r0, r4, r0
    sth r0, 0x6(r29)
    lbz r0, 0x8c8(r28)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x8c8(r28)
    stbx r31, r5, r26
    stbx r31, r30, r26
lbl_80292F1C:
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80292F38
asm void fn_80292F38() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    la r30, lbl_8049DE00
    lis r6, lbl_8040C450@ha
    lbzx r0, r30, r3
    clrlslwi r7, r3, 24, 2
    addi r6, r6, lbl_8040C450@l
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    lwzx r28, r6, r7
    mr r26, r3
    mr r27, r4
    mr r29, r5
    bne lbl_80292F9C
    la r4, lbl_8049DE04
    lbzx r0, r4, r3
    cmpwi r0, 0x0
    bne lbl_80292F9C
    mr r3, r29
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_80292F9C:
    lbz r3, 0x2(r27)
    lbz r0, 0x1(r27)
    rlwimi r0, r3, 8, 16, 23
    andi. r0, r0, 0x9f1f
    sth r0, 0x0(r29)
    lwz r0, 0x8b8(r28)
    cmpwi r0, 0x0
    beq lbl_80292FCC
    cmplwi r0, 0x1
    beq lbl_80292FCC
    cmplwi r0, 0x9
    bne lbl_80292FD8
lbl_80292FCC:
    li r0, 0x0
    stb r0, 0x29(r29)
    b lbl_80292FE0
lbl_80292FD8:
    li r0, -0x4
    stb r0, 0x29(r29)
lbl_80292FE0:
    lbz r0, 0x8c1(r28)
    lis r9, lbl_8040C450@ha
    li r31, 0x0
    clrlslwi r10, r26, 24, 2
    stb r0, 0x28(r29)
    addi r9, r9, lbl_8040C450@l
    mr r3, r26
    addi r4, r1, 0x8
    stw r31, 0x848(r28)
    addi r6, r27, 0x4
    li r5, 0x2
    li r7, 0x0
    lbz r8, 0x3(r27)
    lbz r0, 0x1(r27)
    slwi r8, r8, 2
    lwzx r9, r9, r10
    extsh r8, r8
    rlwinm r0, r0, 26, 30, 30
    clrrwi r8, r8, 2
    lha r9, 0x876(r9)
    extsh r8, r8
    extsh r0, r0
    or r0, r8, r0
    extsh r0, r0
    subf r0, r9, r0
    sth r0, 0x4(r29)
    lbz r0, 0x1(r27)
    lbz r8, 0x2(r27)
    rlwinm r0, r0, 29, 28, 29
    lha r9, 0x6(r29)
    rlwimi r0, r8, 31, 26, 27
    extsh r0, r0
    or r0, r9, r0
    sth r0, 0x6(r29)
    bl __parse_dpdex_data
    mr r3, r26
    addi r4, r1, 0x8
    addi r6, r27, 0xd
    li r5, 0x3
    li r7, 0x0
    bl __parse_dpdex_data
    bl OSDisableInterrupts
    lbzx r0, r30, r26
    la r5, lbl_8049DE04
    li r4, 0x1
    cmpwi r0, 0x0
    stbx r4, r5, r26
    beq lbl_802930D4
    lbzx r0, r5, r26
    cmpwi r0, 0x0
    beq lbl_802930D4
    lha r4, 0x878(r28)
    lha r0, 0x6(r29)
    subf r0, r4, r0
    sth r0, 0x6(r29)
    lbz r0, 0x8c8(r28)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x8c8(r28)
    stbx r31, r5, r26
    stbx r31, r30, r26
lbl_802930D4:
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
