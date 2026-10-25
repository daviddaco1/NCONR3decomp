#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

typedef struct OSContext {
    u32 gprs[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fprs[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqrs[8];
    u32 psf_pad;
    f64 psfs[32];
} OSContext;

void OSClearContext(OSContext* ctx);
void OSSetCurrentContext(OSContext* ctx);


extern s16 *__peReg;
extern M2C_UNK lbl_8049E1D0;
extern s8 lbl_8049E1D8;
extern M2C_UNK (*lbl_8049E1DC)();
extern M2C_UNK (*lbl_8049E1E0)(u16);

void fn_802E15EC();
void fn_802E1604();
void fn_802E1618();
void fn_802E1634();
void fn_802E1698();
void fn_802E1760();
void __GXPEInit();

void fn_802E15EC(s32 arg0, s32 arg1) {
    u16 val = 0;
    val = __rlwimi(val, arg1, 0, 24, 31);
    val = __rlwimi(val, arg0, 8, 23, 23);
    ((u16 *)__peReg)[2] = val;
}


void fn_802E1604(s32 arg0) {
    u16 val = ((u16 *)__peReg)[1];
    val = __rlwimi(val, arg0, 2, 29, 29);
    ((u16 *)__peReg)[1] = val;
}


void fn_802E1618(s32 arg0, s32 arg1, s32 arg2) {
    u16 val = 0;
    val = __rlwimi(val, arg0, 0, 31, 31);
    val = __rlwimi(val, arg1, 1, 28, 30);
    val = __rlwimi(val, arg2, 4, 27, 27);
    ((u16 *)__peReg)[0] = val;
}


void fn_802E1634(s32 arg0, s32 arg1, s32 *arg2) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, arg0, 2, 20, 29);
    addr = __rlwimi(addr, arg1, 12, 10, 19);
    addr = __rlwimi(addr, 1, 22, 8, 9);
    *arg2 = *(s32 *)addr;
}

M2C_UNK (*fn_802E1654(M2C_UNK (*arg0)(u16)))(u16) {
    M2C_UNK (*temp_r31)(u16);
    s32 temp_r3;

    temp_r31 = lbl_8049E1E0;
    temp_r3 = OSDisableInterrupts();
    lbl_8049E1E0 = arg0;
    OSRestoreInterrupts(temp_r3);
    return temp_r31;
}

// asm_to_cpp: fn_802E1698
asm void fn_802E1698(s32 arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    stw r30, 0x2d8(r1)
    mr r30, r4
    lwz r0, lbl_8049E1E0
    lwz r3, __peReg
    cmpwi r0, 0x0
    lhz r31, 0xe(r3)
    beq lbl_802E16F4
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8049E1E0
    mr r3, r31
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
lbl_802E16F4:
    lwz r3, __peReg
    lhz r0, 0xa(r3)
    ori r0, r0, 0x4
    sth r0, 0xa(r3)
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}


M2C_UNK (*fn_802E171C(M2C_UNK (*arg0)()))() {
    M2C_UNK (*temp_r31)();
    s32 temp_r3;

    temp_r31 = lbl_8049E1DC;
    temp_r3 = OSDisableInterrupts();
    lbl_8049E1DC = arg0;
    OSRestoreInterrupts(temp_r3);
    return temp_r31;
}

// fn_802E1760: definicion C reemplazada por asm (ver abajo)


void __GXPEInit(void) {
    __OSSetInterruptHandler(0x12, (s32) fn_802E1698);
    __OSSetInterruptHandler(0x13, (s32) fn_802E1760);
    OSInitThreadQueue(&lbl_8049E1D0);
    __OSUnmaskInterrupts(0x2000);
    __OSUnmaskInterrupts(0x1000);
    M2C_FIELD(__peReg, u16 *, 0xA) = (u16) (M2C_FIELD(__peReg, u16 *, 0xA) | 0xF);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void OSClearContext();
extern void OSSetCurrentContext();
void fn_802E15EC(s32 arg0, s32 arg1);
void fn_802E1604(s32 arg0);
void fn_802E1618(s32 arg0, s32 arg1, s32 arg2);
void fn_802E1634();
void fn_802E1698(s32 arg0, s32 *arg1);
void fn_802E1760(s32 arg0, s32 *arg1);
extern void fn_8031D978();


// asm_to_cpp: fn_802E1760
asm void fn_802E1760(s32 arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x2e4(r1)
    stw r31, 0x2dc(r1)
    mr r31, r4
    lwz r5, __peReg
    lhz r0, 0xa(r5)
    ori r0, r0, 0x8
    sth r0, 0xa(r5)
    lwz r0, lbl_8049E1DC
    stb r3, lbl_8049E1D8
    cmpwi r0, 0x0
    beq lbl_802E17C4
    addi r3, r1, 0x8
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r12, lbl_8049E1DC
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
lbl_802E17C4:
    la r3, lbl_8049E1D0
    bl fn_8031D978
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}
