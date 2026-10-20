#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK fn_802DD228();                     /* extern */
M2C_UNK fn_802DD804();            /* extern */
M2C_UNK fn_801221D8();                       /* static */
extern M2C_UNK lbl_8034F470;
extern M2C_UNK lbl_8034F540;
extern M2C_UNK lbl_8034F560;
extern M2C_UNK lbl_8034F5A0;
extern s32 lbl_8049D6C0;
extern s32 lbl_8049D6C4;
extern s32 lbl_8049D6C8;
extern u32 lbl_8049D6CC;
extern s8 *lbl_8049E180;

/*
Decompilation failure in function fn_80120784:

Found bctr instruction at n2d_main.s line 178, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_80121D4C:

Cannot find branch target fn_8008396C
*/

f32 fn_80121D98();
void fn_80121DAC();
void fn_801220B4();
void fn_8012212C();
s32 fn_80122138();
s32 fn_80122168();
void fn_80122174();
void fn_80122188();
void fn_801221C0();
void fn_801221F8();
s32 fn_80122240();
void fn_80122254();
s32 fn_8012225C();
s32 fn_8012226C();
void fn_80122274();
void fn_80122278();
void fn_801222B4();
void fn_801222BC();
void fn_801222C4();
void fn_801222CC();
void fn_80122330();

// fn_80121D98: definicion C reemplazada por asm (ver abajo)


// fn_80121DAC: definicion C reemplazada por asm (ver abajo)


// fn_801220B4: definicion C reemplazada por asm (ver abajo)


void fn_8012212C(void) {
    lbl_8049D6CC = 0;
}

s32 fn_80122138(void) {
    u32 temp_r4;

    temp_r4 = lbl_8049D6CC;
    if (temp_r4 >= (u32) lbl_8049D6C8) {
        return 0;
    }
    lbl_8049D6CC = temp_r4 + 1;
    return lbl_8049D6C0 + (temp_r4 * 0xA0);
}

s32 fn_80122168(void) {
    return M2C_FIELD(lbl_8049E180, s32 *, 8);
}

void fn_80122174(s32 arg0) {
    M2C_FIELD(lbl_8049E180, s32 *, 8) = (s32) (M2C_FIELD(lbl_8049E180, s32 *, 0) + arg0);
}



/*
Decompilation failure in function fn_801221D8:

Cannot find branch target GDOverflowed
*/


s32 fn_80122240(void) {
    return M2C_FIELD(lbl_8049E180, s32 *, 8) - M2C_FIELD(lbl_8049E180, s32 *, 0);
}

void fn_80122254(s8 *arg0) {
    lbl_8049E180 = arg0;
}

s32 fn_8012225C(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0);
}

s32 fn_8012226C(s32 *arg0) {
    return *arg0;
}

void fn_80122274(void) {

}





void fn_801222CC(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
}

void fn_80122330(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A08E8;
extern u8 jumptable_8034EBA8[];
extern u8 lbl_80390580[];
extern u8 lbl_803C1A40[];
extern void DCFlushRange();
extern void DCInvalidateRange();
extern void GDFlushCurrToMem();
extern void GDInitGDLObj();
extern void GDOverflowed();
extern void GDPadCurr32();
extern void GXCallDisplayList();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _savegpr_24();
extern void _savegpr_25();
extern int fn_80120784();
extern int fn_80121D4C();
f32 fn_80121D98(s32 arg0);
void fn_80121DAC(s32 arg0, M2C_UNK arg_sp0);
void fn_801220B4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80122188();
void fn_801221C0();
M2C_UNK fn_801221D8();
void fn_801221F8();
void fn_80122278();
void fn_801222B4();
void fn_801222BC();
void fn_801222C4();
extern void fn_801A9384();
extern void fn_802DDE28();
extern void fn_802DE02C();
extern void fn_803150C4();

// asm_to_cpp: fn_80120784
asm int fn_80120784() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    lwz r7, 0x4c(r1)
    lwz r31, 0x3d8(r3)
    subi r6, r7, 0x3e8
    cmpwi r6, 0xa
    bge lbl_80121D34
    lwz r0, 0x18(r3)
    cmplwi r0, 0x30
    bgt lbl_80121D34
    lis r5, jumptable_8034EBA8@ha
    addi r5, r5, jumptable_8034EBA8@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    cmpwi r6, 0x0
    beq lbl_801207F4
    cmpwi r6, 0x2
    beq lbl_80120890
    b lbl_80121D34
lbl_801207F4:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    cmpwi r31, 0x0
    beq lbl_80120830
    cmpwi r31, 0x1
    beq lbl_8012083C
    cmpwi r31, 0x2
    beq lbl_80120848
    b lbl_80120854
lbl_80120830:
    li r0, 0x1
    stw r0, 0x134(r24)
    b lbl_8012085C
lbl_8012083C:
    li r0, 0x2
    stw r0, 0x134(r24)
    b lbl_8012085C
lbl_80120848:
    li r0, 0x3
    stw r0, 0x134(r24)
    b lbl_8012085C
lbl_80120854:
    li r0, 0x1
    stw r0, 0x134(r24)
lbl_8012085C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r28, 0x338(r3)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x12
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120890:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x14
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_801208F0
    cmpwi r6, 0x1
    beq lbl_80120920
    b lbl_80121D34
lbl_801208F0:
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    stw r4, 0x334(r5)
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x9
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120920:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    cmpwi r31, 0x0
    beq lbl_8012095C
    cmpwi r31, 0x1
    beq lbl_80120968
    cmpwi r31, 0x2
    beq lbl_80120974
    b lbl_80120980
lbl_8012095C:
    li r0, 0x1
    stw r0, 0x134(r24)
    b lbl_80120988
lbl_80120968:
    li r0, 0x2
    stw r0, 0x134(r24)
    b lbl_80120988
lbl_80120974:
    li r0, 0x3
    stw r0, 0x134(r24)
    b lbl_80120988
lbl_80120980:
    li r0, 0x1
    stw r0, 0x134(r24)
lbl_80120988:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r28, 0x338(r3)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xd
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r25, r3, lbl_803C1A40@l
    addi r3, r25, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r25, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r25)
    li r0, 0x3
    stw r0, 0x134(r25)
    stw r28, 0x338(r25)
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    lis r24, 0x1
    addi r6, r24, -0x8000
    li r7, 0x1
    bl fn_8008396C
    addi r3, r25, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r25, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r25)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x4
    addi r6, r24, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xc
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80120ABC
    cmpwi r6, 0x1
    beq lbl_80120B08
    b lbl_80121D34
lbl_80120ABC:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x3
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120B08:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x11
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80120B80
    cmpwi r6, 0x1
    beq lbl_80120BDC
    cmpwi r6, 0x2
    beq lbl_80120C0C
    cmpwi r6, 0x3
    beq lbl_80120C3C
    cmpwi r6, 0x4
    beq lbl_80120C84
    b lbl_80121D34
lbl_80120B80:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r24)
    li r0, 0x3
    stw r0, 0x134(r24)
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120BDC:
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    stw r4, 0x334(r5)
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x3
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120C0C:
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    stw r4, 0x334(r5)
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x1
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120C3C:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xb
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120C84:
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xd
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80120CBC
    cmpwi r6, 0x1
    beq lbl_80120CEC
    b lbl_80121D34
lbl_80120CBC:
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    stw r4, 0x334(r5)
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x3
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120CEC:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r24)
    cmpwi r31, 0x0
    beq lbl_80120D30
    cmpwi r31, 0x1
    beq lbl_80120D3C
    cmpwi r31, 0x2
    beq lbl_80120D48
    b lbl_80120D54
lbl_80120D30:
    li r0, 0x1
    stw r0, 0x134(r24)
    b lbl_80120D5C
lbl_80120D3C:
    li r0, 0x2
    stw r0, 0x134(r24)
    b lbl_80120D5C
lbl_80120D48:
    li r0, 0x3
    stw r0, 0x134(r24)
    b lbl_80120D5C
lbl_80120D54:
    li r0, 0x1
    stw r0, 0x134(r24)
lbl_80120D5C:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x138(r3)
    stw r28, 0x338(r3)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x7
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80120DB4
    cmpwi r6, 0x1
    beq lbl_80120EF8
    cmpwi r6, 0x2
    beq lbl_80120F20
    b lbl_80121D34
lbl_80120DB4:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r24)
    cmpwi r31, 0x0
    beq lbl_80120DF8
    cmpwi r31, 0x1
    beq lbl_80120E04
    cmpwi r31, 0x2
    beq lbl_80120E10
    b lbl_80120E1C
lbl_80120DF8:
    li r0, 0x1
    stw r0, 0x134(r24)
    b lbl_80120E24
lbl_80120E04:
    li r0, 0x2
    stw r0, 0x134(r24)
    b lbl_80120E24
lbl_80120E10:
    li r0, 0x3
    stw r0, 0x134(r24)
    b lbl_80120E24
lbl_80120E1C:
    li r0, 0x1
    stw r0, 0x134(r24)
lbl_80120E24:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    stw r0, 0x138(r24)
    stw r28, 0x338(r24)
    mr r3, r27
    li r4, 0x0
    li r5, 0x2
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r24)
    cmpwi r31, 0x0
    beq lbl_80120E90
    cmpwi r31, 0x1
    beq lbl_80120E9C
    cmpwi r31, 0x2
    beq lbl_80120EA8
    b lbl_80120EB4
lbl_80120E90:
    li r0, 0x1
    stw r0, 0x134(r24)
    b lbl_80120EBC
lbl_80120E9C:
    li r0, 0x2
    stw r0, 0x134(r24)
    b lbl_80120EBC
lbl_80120EA8:
    li r0, 0x3
    stw r0, 0x134(r24)
    b lbl_80120EBC
lbl_80120EB4:
    li r0, 0x1
    stw r0, 0x134(r24)
lbl_80120EBC:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x138(r3)
    stw r28, 0x338(r3)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120EF8:
    mr r3, r28
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x3
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120F20:
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    stw r4, 0x334(r5)
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x5
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80120F64
    cmpwi r6, 0x1
    beq lbl_80120FB0
    b lbl_80121D34
lbl_80120F64:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xb
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80120FB0:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x13
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xc
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_8012107C
    cmpwi r6, 0x1
    beq lbl_801210C4
    cmpwi r6, 0x2
    beq lbl_80121168
    cmpwi r6, 0x3
    beq lbl_801211B0
    cmpwi r6, 0x4
    beq lbl_801211FC
    b lbl_80121D34
lbl_8012107C:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x2
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_801210C4:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r24)
    cmpwi r31, 0x0
    beq lbl_80121108
    cmpwi r31, 0x1
    beq lbl_80121114
    cmpwi r31, 0x2
    beq lbl_80121120
    b lbl_8012112C
lbl_80121108:
    li r0, 0x1
    stw r0, 0x134(r24)
    b lbl_80121134
lbl_80121114:
    li r0, 0x2
    stw r0, 0x134(r24)
    b lbl_80121134
lbl_80121120:
    li r0, 0x3
    stw r0, 0x134(r24)
    b lbl_80121134
lbl_8012112C:
    li r0, 0x1
    stw r0, 0x134(r24)
lbl_80121134:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r28, 0x338(r3)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xc
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121168:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0xd
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_801211B0:
    lis r4, lbl_803C1A40@ha
    addi r24, r4, lbl_803C1A40@l
    stw r3, 0x334(r24)
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0xe
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_801211FC:
    lis r4, lbl_803C1A40@ha
    addi r24, r4, lbl_803C1A40@l
    stw r3, 0x334(r24)
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x8
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_8012125C
    cmpwi r6, 0x1
    beq lbl_801212A4
    b lbl_80121D34
lbl_8012125C:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x2
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_801212A4:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x11
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80121300
    cmpwi r6, 0x1
    beq lbl_80121348
    b lbl_80121D34
lbl_80121300:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x5
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121348:
    lis r4, lbl_803C1A40@ha
    addi r24, r4, lbl_803C1A40@l
    stw r3, 0x334(r24)
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x1a
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_801213A8
    cmpwi r6, 0x1
    beq lbl_801213F0
    b lbl_80121D34
lbl_801213A8:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x5
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_801213F0:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x15
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    blt lbl_80121448
    cmpwi r6, 0x1
    ble lbl_80121458
lbl_80121448:
    subi r0, r7, 0x3e8
    cmpwi r0, 0x2
    beq lbl_801214A0
    b lbl_80121D34
lbl_80121458:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x9
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_801214A0:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x1d
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x3
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_8012154C
    cmpwi r6, 0x1
    beq lbl_80121598
    b lbl_80121D34
lbl_8012154C:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xc
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121598:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xd
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80121600
    cmpwi r6, 0x1
    beq lbl_80121648
    cmpwi r6, 0x2
    beq lbl_80121690
    b lbl_80121D34
lbl_80121600:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x3
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121648:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x4
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121690:
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0x1
    stw r0, 0x138(r24)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x5
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x4
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r24, r3, lbl_803C1A40@l
    stw r4, 0x334(r24)
    la r25, lbl_804A08E8
    lfs f0, 0x8(r25)
    stfs f0, 0x230(r24)
    lfs f1, 0x4(r25)
    stfs f1, 0x234(r24)
    addi r3, r1, 0x8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r24, 0x5b0
    addi r4, r1, 0x8
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x9
    lis r26, 0x1
    addi r6, r26, -0x8000
    li r7, 0x1
    bl fn_8008396C
    lfs f0, lbl_804A08E8
    stfs f0, 0x230(r24)
    addi r3, r1, 0x8
    lfs f1, 0xc(r25)
    lfs f2, 0x4(r25)
    fmr f3, f2
    bl fn_80018B0C
    addi r3, r24, 0x5b0
    addi r4, r1, 0x8
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x9
    addi r6, r26, -0x8000
    li r7, 0x1
    bl fn_8008396C
    lfs f0, lbl_804A08E8
    stfs f0, 0x230(r24)
    addi r3, r1, 0x8
    lfs f1, 0x10(r25)
    lfs f2, 0x4(r25)
    fmr f3, f2
    bl fn_80018B0C
    addi r3, r24, 0x5b0
    addi r4, r1, 0x8
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x9
    addi r6, r26, -0x8000
    li r7, 0x1
    bl fn_8008396C
    lfs f0, 0x14(r25)
    stfs f0, 0x230(r24)
    li r0, 0x14
    stw r0, 0x13c(r24)
    addi r3, r1, 0x8
    lfs f1, 0x4(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r24, 0x5b0
    addi r4, r1, 0x8
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xa
    addi r6, r26, -0x8000
    li r7, 0x1
    bl fn_8008396C
    lfs f0, 0x14(r25)
    stfs f0, 0x230(r24)
    li r0, 0x2d
    stw r0, 0x13c(r24)
    addi r3, r1, 0x8
    lfs f1, 0x4(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r24, 0x5b0
    addi r4, r1, 0x8
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xa
    addi r6, r26, -0x8000
    li r7, 0x1
    bl fn_8008396C
    addi r3, r24, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r24, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0xa
    stw r0, 0x130(r24)
    cmpwi r31, 0x0
    beq lbl_80121904
    cmpwi r31, 0x1
    beq lbl_80121910
    cmpwi r31, 0x2
    beq lbl_8012191C
    b lbl_80121928
lbl_80121904:
    li r0, 0x1
    stw r0, 0x134(r24)
    b lbl_80121930
lbl_80121910:
    li r0, 0x2
    stw r0, 0x134(r24)
    b lbl_80121930
lbl_8012191C:
    li r0, 0x3
    stw r0, 0x134(r24)
    b lbl_80121930
lbl_80121928:
    li r0, 0x1
    stw r0, 0x134(r24)
lbl_80121930:
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x138(r3)
    stw r28, 0x338(r3)
    mr r3, r27
    li r4, 0x0
    li r5, 0x1
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80121978
    cmpwi r6, 0x1
    beq lbl_801219C8
    b lbl_80121D34
lbl_80121978:
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    addi r3, r28, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r28, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0x0
    stw r0, 0x13c(r28)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x2
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_801219C8:
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    addi r3, r28, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r28, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    li r0, 0x1
    stw r0, 0x13c(r28)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x2
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80121A2C
    cmpwi r6, 0x1
    beq lbl_80121A74
    b lbl_80121D34
lbl_80121A2C:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    addi r3, r31, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r31, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x6
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121A74:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    addi r3, r31, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r31, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0xf
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    addi r3, r28, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r28, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xb
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    addi r3, r28, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r28, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x2
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    addi r3, r28, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r28, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0xd
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    addi r3, r31, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r31, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    beq lbl_80121C18
    cmpwi r6, 0x1
    beq lbl_80121C60
    cmpwi r6, 0x2
    beq lbl_80121CA8
    b lbl_80121D34
lbl_80121C18:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    addi r3, r31, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r31, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x4
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121C60:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    addi r3, r31, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r31, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x5
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
lbl_80121CA8:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    addi r3, r3, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r28
    li r5, 0x8
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
    b lbl_80121D34
    cmpwi r6, 0x0
    bne lbl_80121D34
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    addi r3, r31, 0x5b0
    mr r4, r29
    bl fn_80019DAC
    addi r3, r31, 0x5c0
    mr r4, r30
    bl fn_80019DAC
    stw r28, 0x338(r31)
    mr r3, r27
    bl fn_80019D1C
    mr r4, r3
    mr r3, r27
    li r5, 0x5
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    bl fn_8008396C
lbl_80121D34:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80121D4C
asm int fn_80121D4C() {
    nofralloc
    lwz r4, 0xc(r1)
    subi r5, r4, 0x321
    cmpwi r5, 0xc7
    bgelr
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x28(r4)
    cmpwi r0, 0x6
    bnelr
    cmpwi r5, 0x0
    bnelr
    li r4, 0xa
    li r5, 0x4
    lis r6, 0x1
    addi r6, r6, -0x8000
    li r7, 0x1
    b fn_8008396C
    blr
}

// asm_to_cpp: fn_80121D98
asm f32 fn_80121D98(s32 arg0) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_8034F470@ha
    addi r3, r3, lbl_8034F470@l
    lfsx f1, r3, r0
    blr
}

// asm_to_cpp: fn_80121DAC
asm void fn_80121DAC(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    lwz r0, lbl_8049D6C0
    cmpwi r0, 0x0
    beq lbl_80121DE8
    lis r3, lbl_8034F5A0@ha
    addi r3, r3, lbl_8034F5A0@l
    li r4, 0x3e
    addi r5, r3, 0xb
    opword 0x4CC63182
    bl fn_801A9384
lbl_80121DE8:
    cmpwi r25, 0x0
    bne lbl_80121E08
    lis r3, lbl_8034F5A0@ha
    addi r3, r3, lbl_8034F5A0@l
    li r4, 0x3f
    addi r5, r3, 0x2d
    opword 0x4CC63182
    bl fn_801A9384
lbl_80121E08:
    mulli r26, r25, 0xa0
    slwi r0, r25, 7
    add r3, r26, r0
    bl fn_80170DFC
    stw r3, lbl_8049D6C0
    cmpwi r3, 0x0
    bne lbl_80121E3C
    lis r3, lbl_8034F5A0@ha
    addi r3, r3, lbl_8034F5A0@l
    li r4, 0x45
    addi r5, r3, 0x43
    opword 0x4CC63182
    bl fn_801A9384
lbl_80121E3C:
    lwz r0, lbl_8049D6C0
    add r0, r0, r26
    stw r0, lbl_8049D6C4
    stw r25, lbl_8049D6C8
    bl fn_8012212C
    li r29, 0x0
    li r27, 0x0
    li r26, 0x0
    lis r30, lbl_8034F540@ha
    lis r31, lbl_8034F560@ha
    b lbl_80122090
lbl_80121E68:
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    li r4, 0x60
    bl DCInvalidateRange
    lwz r0, lbl_8049D6C0
    add r4, r0, r27
    addi r3, r4, 0x74
    li r5, 0x60
    bl GDInitGDLObj
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    addi r3, r3, 0x74
    bl fn_80122254
    bl fn_80122240
    addi r3, r30, lbl_8034F540@l
    bl fn_802DD228
    li r3, 0x0
    addi r4, r31, lbl_8034F560@l
    bl fn_802DD804
    bl fn_80122240
    addi r4, r3, 0x2
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    stw r4, 0x68(r3)
    li r3, 0x9
    li r4, 0x0
    li r5, 0xc
    bl fn_802DDE28
    bl fn_80122240
    addi r4, r3, 0x2
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    stw r4, 0x6c(r3)
    li r3, 0xb
    li r4, 0x0
    li r5, 0x4
    bl fn_802DDE28
    bl fn_80122240
    addi r4, r3, 0x2
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    stw r4, 0x70(r3)
    li r3, 0xd
    li r4, 0x0
    li r5, 0x8
    bl fn_802DDE28
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80122278
    li r3, 0x0
    bl fn_801222C4
    li r3, 0x0
    bl fn_801222BC
    li r3, 0x0
    bl fn_801222B4
    li r3, 0x1
    bl fn_801222C4
    li r3, 0x1
    bl fn_801222BC
    li r3, 0x1
    bl fn_801222B4
    li r3, 0x2
    bl fn_801222C4
    li r3, 0x2
    bl fn_801222BC
    li r3, 0x2
    bl fn_801222B4
    li r3, 0x3
    bl fn_801222C4
    li r3, 0x3
    bl fn_801222BC
    li r3, 0x3
    bl fn_801222B4
    bl fn_80122274
    bl GDPadCurr32
    bl GDFlushCurrToMem
    li r3, 0x0
    bl fn_80122254
    lwz r0, lbl_8049D6C4
    add r4, r0, r26
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    stw r4, 0x60(r3)
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    addi r3, r3, 0x74
    bl fn_80122254
    bl fn_80122240
    mr r28, r3
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    lwz r3, 0x68(r3)
    bl fn_80122174
    bl fn_80122168
    mr r25, r3
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    lwz r3, 0x60(r3)
    addi r3, r3, 0x40
    bl fn_802DE02C
    mr r3, r25
    li r4, 0x4
    bl fn_803150C4
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    lwz r3, 0x6c(r3)
    bl fn_80122174
    bl fn_80122168
    mr r25, r3
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    lwz r3, 0x60(r3)
    addi r3, r3, 0x20
    bl fn_802DE02C
    mr r3, r25
    li r4, 0x4
    bl fn_803150C4
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    lwz r3, 0x70(r3)
    bl fn_80122174
    bl fn_80122168
    mr r25, r3
    lwz r0, lbl_8049D6C0
    add r3, r0, r27
    lwz r3, 0x60(r3)
    bl fn_802DE02C
    mr r3, r25
    li r4, 0x4
    bl fn_803150C4
    mr r3, r28
    bl fn_80122174
    li r3, 0x0
    bl fn_80122254
    addi r29, r29, 0x1
    addi r27, r27, 0xa0
    addi r26, r26, 0x80
lbl_80122090:
    lwz r0, lbl_8049D6C8
    cmplw r29, r0
    blt lbl_80121E68
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801220B4
asm void fn_801220B4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_801220EC
    lis r3, lbl_8034F5A0@ha
    addi r3, r3, lbl_8034F5A0@l
    li r4, 0xa6
    addi r5, r3, 0x53
    opword 0x4CC63182
    bl fn_801A9384
lbl_801220EC:
    lwz r3, 0x60(r30)
    li r4, 0x80
    bl DCFlushRange
    addi r3, r30, 0x74
    bl fn_8012225C
    mr r31, r3
    addi r3, r30, 0x74
    bl fn_8012226C
    mr r4, r31
    bl GXCallDisplayList
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80122188
asm void fn_80122188() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x1
    bl fn_801221D8
    clrlwi r3, r31, 24
    bl fn_801221C0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801221C0
asm void fn_801221C0() {
    nofralloc
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r3, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    blr
}

// asm_to_cpp: fn_801221D8
asm M2C_UNK fn_801221D8() {
    nofralloc
    lwz r4, lbl_8049E180
    lwz r0, 0x8(r4)
    add r3, r0, r3
    lwz r0, 0xc(r4)
    cmplw r3, r0
    blelr
    b GDOverflowed
    blr
}

// asm_to_cpp: fn_801221F8
asm void fn_801221F8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_801221D8
    clrlwi r0, r31, 16
    srawi r0, r0, 8
    clrlwi r3, r0, 24
    bl fn_801221C0
    clrlwi r3, r31, 24
    bl fn_801221C0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80122278
asm void fn_80122278() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    or r0, r4, r3
    clrlwi r3, r0, 24
    bl fn_80122188
    clrlwi r3, r31, 16
    bl fn_801221F8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801222B4
asm void fn_801222B4() {
    nofralloc
    clrlwi r3, r3, 24
    b fn_80122188
}

// asm_to_cpp: fn_801222BC
asm void fn_801222BC() {
    nofralloc
    clrlwi r3, r3, 24
    b fn_80122188
}

// asm_to_cpp: fn_801222C4
asm void fn_801222C4() {
    nofralloc
    clrlwi r3, r3, 24
    b fn_80122188
}
