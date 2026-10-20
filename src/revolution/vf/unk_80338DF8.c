#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_8049BCE0;
extern u32 lbl_8049BCF8;
extern M2C_UNK lbl_8049BD60;
extern M2C_UNK lbl_8049BF90;
extern s32 lbl_8049E5D0;
extern s32 lbl_8049E5D8;
extern s32 lbl_8049E5DC;
extern s32 lbl_8049E5E0;
extern s32 lbl_8049E5E4;
extern s8 *lbl_8049E5E8;
extern s32 lbl_8049E5EC;
extern s8 *lbl_8049E5F0;
extern s32 lbl_8049E5F4;
extern s32 lbl_8049E5F8;
extern s32 lbl_8049E5FC;

s32 fn_80338DF8();
s32 fn_80338E00();
void fn_80338E10();
void fn_80338E50();
void fn_80338E5C();
void fn_80338E60();
void fn_80338F28();
s32 fn_80338F8C();
void fn_80338FA0();
void fn_80339124();
s32 fn_803392B0();
void fn_803392C0();
void fn_803393C4();
void fn_803394B0();

s32 fn_80338DF8(void) {
    return 0;
}

s32 fn_80338E00(s32 arg0) {
    return (s32) (-arg0 | arg0) >> 0x1F;
}

// fn_80338E10: definicion C reemplazada por asm (ver abajo)


void fn_80338E50(void) {
    lbl_8049E5D0 = 0;
}

void fn_80338E5C(void) {

}

// fn_80338E60: definicion C reemplazada por asm (ver abajo)


// fn_80338F28: definicion C reemplazada por asm (ver abajo)


s32 fn_80338F8C(void) {
    return lbl_8049E5D8 != 0;
}

void fn_80338FA0(s32 arg0, u32 arg1);

void fn_80339124(M2C_UNK arg_sp0);

s32 fn_803392B0(s32 arg0) {
    s32 temp_r3;

    temp_r3 = lbl_8049E5F4;
    lbl_8049E5F4 = arg0;
    return temp_r3;
}

// fn_803392C0: definicion C reemplazada por asm (ver abajo)


// fn_803393C4: definicion C reemplazada por asm (ver abajo)


void fn_803394B0(s32 arg0, s32 arg1) {

}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void MEMFreeToExpHeap();
extern void OSInitMutex();
extern void OSUnlockMutex();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_80338550();
void fn_80338E10(s32 arg0, s32 arg1);
void fn_80338E60(s32 arg0, u32 arg1);
void fn_80338F28(void);
void fn_80338FA0();
void fn_80339124();
void fn_803392C0(void);
void fn_803393C4(void);

// asm_to_cpp: fn_80338E10
asm void fn_80338E10(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8033878C
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80338E34
    bl fn_80338E5C
lbl_80338E34:
    mr r3, r31
    bl fn_80338E00
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80338E60
asm void fn_80338E60(s32 arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8049E5DC
    cmpwi r0, 0x0
    bne lbl_80338E9C
    lis r3, lbl_8049BCE0@ha
    addi r3, r3, lbl_8049BCE0@l
    bl OSInitMutex
    li r0, 0x1
    stw r0, lbl_8049E5DC
lbl_80338E9C:
    lwz r0, lbl_8049E5DC
    cmpwi r0, 0x0
    beq lbl_80338EB4
    lis r3, lbl_8049BCE0@ha
    addi r3, r3, lbl_8049BCE0@l
    bl OSLockMutex
lbl_80338EB4:
    lwz r0, lbl_8049E5D8
    cmpwi r0, 0x0
    bne lbl_80338EF8
    mr r3, r30
    mr r4, r31
    bl fn_80338FA0
    li r3, 0x0
    li r4, 0x0
    bl fn_80338664
    li r3, 0x0
    li r4, 0x0
    bl fn_80338E10
    bl fn_803392C0
    li r3, 0x0
    bl fn_803392B0
    li r0, 0x1
    stw r0, lbl_8049E5D8
lbl_80338EF8:
    lwz r0, lbl_8049E5DC
    cmpwi r0, 0x0
    beq lbl_80338F10
    lis r3, lbl_8049BCE0@ha
    addi r3, r3, lbl_8049BCE0@l
    bl OSUnlockMutex
lbl_80338F10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80338F28
asm void fn_80338F28(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049E5DC
    cmpwi r0, 0x0
    beq lbl_80338F4C
    lis r3, lbl_8049BCE0@ha
    addi r3, r3, lbl_8049BCE0@l
    bl OSLockMutex
lbl_80338F4C:
    lwz r0, lbl_8049E5D8
    cmpwi r0, 0x0
    beq lbl_80338F64
    bl fn_80339124
    li r0, 0x0
    stw r0, lbl_8049E5D8
lbl_80338F64:
    lwz r0, lbl_8049E5DC
    cmpwi r0, 0x0
    beq lbl_80338F7C
    lis r3, lbl_8049BCE0@ha
    addi r3, r3, lbl_8049BCE0@l
    bl OSUnlockMutex
lbl_80338F7C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80338FA0
asm void fn_80338FA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    srwi r29, r4, 14
    beq lbl_80338FE4
    cmpwi r4, 0x0
    beq lbl_80338FE4
    lwz r0, lbl_8049E5E8
    cmpwi r0, 0x0
    bne lbl_80338FE4
    li r5, 0x0
    bl MEMCreateExpHeapEx
    stw r3, lbl_8049E5E8
lbl_80338FE4:
    cmplwi r29, 0x1a
    li r4, 0x1a
    bgt lbl_80338FF4
    mr r4, r29
lbl_80338FF4:
    lwz r0, lbl_8049E5F0
    stw r4, lbl_8049E5E0
    cmpwi r0, 0x0
    bne lbl_80339028
    lwz r3, lbl_8049E5E8
    cmpwi r3, 0x0
    bne lbl_80339018
    li r3, 0x0
    b lbl_80339024
lbl_80339018:
    mulli r4, r4, 0x140
    li r5, 0x20
    bl MEMAllocFromExpHeapEx
lbl_80339024:
    stw r3, lbl_8049E5F0
lbl_80339028:
    lwz r0, lbl_8049E5E0
    cmpwi r0, 0x0
    beq lbl_80339044
    lwz r29, lbl_8049E5F0
    cmpwi r29, 0x0
    beq lbl_80339044
    b lbl_80339048
lbl_80339044:
    li r29, 0x0
lbl_80339048:
    mulli r0, r0, 0x140
    li r31, 0x0
    add r30, r29, r0
    b lbl_80339084
lbl_80339058:
    mr r3, r29
    li r4, 0x0
    li r5, 0x140
    bl fn_80338550
    addic. r0, r29, 0x1c
    beq lbl_80339080
    stw r31, 0x1c(r29)
    stw r31, 0x20(r29)
    stw r31, 0x24(r29)
    stw r31, 0x28(r29)
lbl_80339080:
    addi r29, r29, 0x140
lbl_80339084:
    cmplw r29, r30
    bne lbl_80339058
    lwz r0, lbl_8049E5EC
    lwz r30, lbl_8049E5E0
    cmpwi r0, 0x0
    bne lbl_803390E8
    lis r29, lbl_8049BCF8@ha
    li r31, 0x0
    addi r29, r29, lbl_8049BCF8@l
    b lbl_803390D8
lbl_803390AC:
    lwz r3, lbl_8049E5E8
    cmpwi r3, 0x0
    bne lbl_803390C0
    li r3, 0x0
    b lbl_803390CC
lbl_803390C0:
    li r4, 0xa0
    li r5, 0x20
    bl MEMAllocFromExpHeapEx
lbl_803390CC:
    stw r3, 0x0(r29)
    addi r29, r29, 0x4
    addi r31, r31, 0x1
lbl_803390D8:
    cmplw r31, r30
    blt lbl_803390AC
    li r0, 0x1
    stw r0, lbl_8049E5EC
lbl_803390E8:
    bl fn_803393C4
    li r4, 0x0
    li r3, 0x2
    li r0, 0x8
    stw r4, lbl_8049E5E4
    stw r3, lbl_8049E5FC
    stw r0, lbl_8049E5F8
    bl fn_803394B0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80339124
asm void fn_80339124() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r27, lbl_8049E5F0
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_8033921C
    lwz r0, lbl_8049E5E0
    cmpwi r0, 0x0
    beq lbl_80339158
    beq cr1, lbl_80339158
    b lbl_8033915C
lbl_80339158:
    li r27, 0x0
lbl_8033915C:
    cmpwi r27, 0x0
    beq lbl_80339200
    mulli r0, r0, 0x140
    li r31, 0x0
    add r30, r27, r0
    b lbl_803391F8
lbl_80339174:
    cmpwi r27, 0x0
    beq lbl_803391F4
    addic. r29, r27, 0x1c
    lwz r28, 0x0(r29)
    beq lbl_803391D8
    lwz r4, 0x8(r29)
    cmpwi r4, 0x0
    beq lbl_803391A4
    cmpwi r28, 0x0
    beq lbl_803391A4
    mr r3, r28
    bl MEMFreeToExpHeap
lbl_803391A4:
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    beq lbl_803391C0
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_803391C0
    bl MEMFreeToExpHeap
lbl_803391C0:
    cmpwi r29, 0x0
    beq lbl_803391D8
    stw r31, 0x0(r29)
    stw r31, 0x4(r29)
    stw r31, 0x8(r29)
    stw r31, 0xc(r29)
lbl_803391D8:
    lwz r0, lbl_8049E5E8
    cmplw r28, r0
    beq lbl_803391F4
    cmpwi r28, 0x0
    beq lbl_803391F4
    mr r3, r28
    bl MEMDestroyExpHeap
lbl_803391F4:
    addi r27, r27, 0x140
lbl_803391F8:
    cmplw r27, r30
    bne lbl_80339174
lbl_80339200:
    lwz r3, lbl_8049E5E8
    lwz r4, lbl_8049E5F0
    cmpwi r3, 0x0
    beq lbl_80339214
    bl MEMFreeToExpHeap
lbl_80339214:
    li r0, 0x0
    stw r0, lbl_8049E5F0
lbl_8033921C:
    lwz r0, lbl_8049E5EC
    lwz r29, lbl_8049E5E0
    cmpwi r0, 0x0
    beq lbl_80339278
    lis r28, lbl_8049BCF8@ha
    li r30, 0x0
    addi r28, r28, lbl_8049BCF8@l
    li r31, 0x0
    b lbl_80339268
lbl_80339240:
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_80339260
    lwz r3, lbl_8049E5E8
    cmpwi r3, 0x0
    beq lbl_8033925C
    bl MEMFreeToExpHeap
lbl_8033925C:
    stw r31, 0x0(r28)
lbl_80339260:
    addi r28, r28, 0x4
    addi r30, r30, 0x1
lbl_80339268:
    cmplw r30, r29
    blt lbl_80339240
    li r0, 0x0
    stw r0, lbl_8049E5EC
lbl_80339278:
    lwz r3, lbl_8049E5E8
    cmpwi r3, 0x0
    beq lbl_80339290
    bl MEMDestroyExpHeap
    li r0, 0x0
    stw r0, lbl_8049E5E8
lbl_80339290:
    li r0, 0x0
    addi r11, r1, 0x20
    stw r0, lbl_8049E5E0
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_803392C0
asm void fn_803392C0(void) {
    nofralloc
    li r0, 0x0
    lis r3, lbl_8049BD60@ha
    sthu r0, lbl_8049BD60@l(r3)
    stb r0, 0x10(r3)
    sth r0, 0x12(r3)
    stb r0, 0x22(r3)
    sth r0, 0x24(r3)
    stb r0, 0x34(r3)
    sth r0, 0x36(r3)
    stb r0, 0x46(r3)
    sth r0, 0x48(r3)
    stb r0, 0x58(r3)
    sth r0, 0x5a(r3)
    stb r0, 0x6a(r3)
    sth r0, 0x6c(r3)
    stb r0, 0x7c(r3)
    sth r0, 0x7e(r3)
    stb r0, 0x8e(r3)
    sth r0, 0x90(r3)
    stb r0, 0xa0(r3)
    sth r0, 0xa2(r3)
    stb r0, 0xb2(r3)
    sth r0, 0xb4(r3)
    stb r0, 0xc4(r3)
    sth r0, 0xc6(r3)
    stb r0, 0xd6(r3)
    sth r0, 0xd8(r3)
    stb r0, 0xe8(r3)
    sth r0, 0xea(r3)
    stb r0, 0xfa(r3)
    sth r0, 0xfc(r3)
    stb r0, 0x10c(r3)
    sth r0, 0x10e(r3)
    stb r0, 0x11e(r3)
    sth r0, 0x120(r3)
    stb r0, 0x130(r3)
    sth r0, 0x132(r3)
    stb r0, 0x142(r3)
    sth r0, 0x144(r3)
    stb r0, 0x154(r3)
    sth r0, 0x156(r3)
    stb r0, 0x166(r3)
    sth r0, 0x168(r3)
    stb r0, 0x178(r3)
    sth r0, 0x17a(r3)
    stb r0, 0x18a(r3)
    sth r0, 0x18c(r3)
    stb r0, 0x19c(r3)
    sth r0, 0x19e(r3)
    stb r0, 0x1ae(r3)
    sth r0, 0x1b0(r3)
    stb r0, 0x1c0(r3)
    sth r0, 0x1c2(r3)
    stb r0, 0x1d2(r3)
    sth r0, 0x1d4(r3)
    stb r0, 0x1e4(r3)
    sth r0, 0x1e6(r3)
    stb r0, 0x1f6(r3)
    sth r0, 0x1f8(r3)
    stb r0, 0x208(r3)
    sth r0, 0x20a(r3)
    stb r0, 0x21a(r3)
    sth r0, 0x21c(r3)
    stb r0, 0x22c(r3)
    blr
}

// asm_to_cpp: fn_803393C4
asm void fn_803393C4(void) {
    nofralloc
    lis r4, lbl_8049BF90@ha
    li r0, 0x3
    addi r4, r4, lbl_8049BF90@l
    li r3, 0x0
    mtctr r0
lbl_803393D8:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    stw r3, 0x20(r4)
    stw r3, 0x24(r4)
    stw r3, 0x28(r4)
    stw r3, 0x2c(r4)
    stw r3, 0x30(r4)
    stw r3, 0x34(r4)
    stw r3, 0x38(r4)
    stw r3, 0x3c(r4)
    stw r3, 0x40(r4)
    stw r3, 0x44(r4)
    stw r3, 0x48(r4)
    stw r3, 0x4c(r4)
    stw r3, 0x50(r4)
    stw r3, 0x54(r4)
    stw r3, 0x58(r4)
    stw r3, 0x5c(r4)
    stw r3, 0x60(r4)
    stw r3, 0x64(r4)
    stw r3, 0x68(r4)
    stw r3, 0x6c(r4)
    stw r3, 0x70(r4)
    stw r3, 0x74(r4)
    stw r3, 0x78(r4)
    stw r3, 0x7c(r4)
    stw r3, 0x80(r4)
    stw r3, 0x84(r4)
    stw r3, 0x88(r4)
    stw r3, 0x8c(r4)
    stw r3, 0x90(r4)
    stw r3, 0x94(r4)
    stw r3, 0x98(r4)
    stw r3, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_803393D8
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x10(r4)
    stw r0, 0x14(r4)
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    stw r0, 0x20(r4)
    stw r0, 0x24(r4)
    blr
}
