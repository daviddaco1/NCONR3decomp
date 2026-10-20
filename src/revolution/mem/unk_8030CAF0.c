#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_804A26F8;

/*
Decompilation failure in function fn_8030CAF0:

Unable to determine jump table for bctr instruction at unk_8030CAF0.s line 13.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

/*
Decompilation failure in function fn_8030CB00:

Unable to determine jump table for bctr instruction at unk_8030CAF0.s line 21.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void fn_8030CB10();
void fn_8030CB2C();
void fn_8030CB44();
void fn_8030CBB4();
s32 fn_8030CC20();

void fn_8030CB10(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 **, 0) = &lbl_804A26F8;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}


void fn_8030CB44(s8 *arg0, s32 arg1);

void fn_8030CBB4(s8 *arg0, s32 arg1);

s32 fn_8030CC20(s8 *arg0, s32 arg1) {
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0);
    }
    return M2C_FIELD((arg1 + M2C_FIELD(arg0, u16 *, 0xA)), s32 *, 4);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern int fn_8030CAF0();
extern int fn_8030CB00();
void fn_8030CB2C();
void fn_8030CB44();
void fn_8030CBB4();

// asm_to_cpp: fn_8030CAF0
asm int fn_8030CAF0() {
    nofralloc
    lwz r5, 0x0(r3)
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

// asm_to_cpp: fn_8030CB00
asm int fn_8030CB00() {
    nofralloc
    lwz r5, 0x0(r3)
    lwz r12, 0x4(r5)
    mtctr r12
    bctr
}

// asm_to_cpp: fn_8030CB2C
asm void fn_8030CB2C() {
    nofralloc
    li r0, 0x0
    sth r4, 0xa(r3)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    blr
}

// asm_to_cpp: fn_8030CB44
asm void fn_8030CB44() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8030CB7C
    lhz r5, 0xa(r3)
    li r0, 0x0
    add r5, r4, r5
    stw r0, 0x4(r5)
    stw r0, 0x0(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x0(r3)
    addi r0, r5, 0x1
    stw r4, 0x4(r3)
    sth r0, 0x8(r3)
    blr
lbl_8030CB7C:
    lhz r6, 0xa(r3)
    li r0, 0x0
    lwz r5, 0x4(r3)
    stwux r5, r6, r4
    stw r0, 0x4(r6)
    lwz r5, 0x4(r3)
    lhz r0, 0xa(r3)
    add r5, r5, r0
    stw r4, 0x4(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x4(r3)
    addi r0, r5, 0x1
    sth r0, 0x8(r3)
    blr
}

// asm_to_cpp: fn_8030CBB4
asm void fn_8030CBB4() {
    nofralloc
    lhz r5, 0xa(r3)
    add r6, r4, r5
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    bne lbl_8030CBD4
    lwz r0, 0x4(r6)
    stw r0, 0x0(r3)
    b lbl_8030CBE0
lbl_8030CBD4:
    lwz r0, 0x4(r6)
    add r4, r4, r5
    stw r0, 0x4(r4)
lbl_8030CBE0:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    bne lbl_8030CBF8
    lwz r0, 0x0(r6)
    stw r0, 0x4(r3)
    b lbl_8030CC04
lbl_8030CBF8:
    lwz r4, 0x0(r6)
    lhz r0, 0xa(r3)
    stwx r4, r5, r0
lbl_8030CC04:
    li r0, 0x0
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    lhz r4, 0x8(r3)
    subi r0, r4, 0x1
    sth r0, 0x8(r3)
    blr
}
