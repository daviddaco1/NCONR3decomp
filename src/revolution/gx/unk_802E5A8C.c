#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s8 *__cpReg;
extern f32 lbl_80341A30;

/*
Decompilation failure in function fn_802E5A8C:

Found bctr instruction at unk_802E5A8C.s line 360, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void fn_802E62B8();
void fn_802E62C8();
void fn_802E6300();
void fn_802E6320();

void fn_802E62B8(void) {
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}


void fn_802E6300(s8 *arg0) {
    f32 var_f0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) == 1) {
        var_f0 = M2C_FIELD(arg0, f32 *, 4);
    } else {
        var_f0 = M2C_FIELD(arg0, f32 *, 8);
    }
    M2C_FIELD(arg0, f32 *, 0xC) = var_f0;
}

// fn_802E6320: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float __GXData;
extern u8 jumptable_8037B178[];
extern u8 jumptable_8037B1D4[];
extern int fn_802E5A8C();
void fn_802E62C8();
void fn_802E6320(s8 *arg0);

// asm_to_cpp: fn_802E5A8C
asm int fn_802E5A8C() {
    nofralloc
    lwz r5, __GXData
    lwz r0, 0x5ec(r5)
    cmpwi r0, 0x22
    beq lbl_802E5AC4
    bge lbl_802E5B10
    cmpwi r0, 0xb
    bge lbl_802E5AB4
    cmpwi r0, 0x0
    bge lbl_802E5AC4
    b lbl_802E5B10
lbl_802E5AB4:
    cmpwi r0, 0x1b
    bge lbl_802E5AFC
    b lbl_802E5AE4
    b lbl_802E5B10
lbl_802E5AC4:
    lis r7, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r7)
    li r6, 0x1006
    li r0, 0x0
    stw r6, -0x8000(r7)
    stw r0, -0x8000(r7)
    b lbl_802E5B10
lbl_802E5AE4:
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r0, 0x2300
    stw r0, -0x8000(r6)
    b lbl_802E5B10
lbl_802E5AFC:
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r0, 0x2400
    stw r0, -0x8000(r6)
lbl_802E5B10:
    lwz r0, 0x5f0(r5)
    cmpwi r0, 0x15
    beq lbl_802E5B44
    bge lbl_802E5B94
    cmpwi r0, 0x9
    bge lbl_802E5B34
    cmpwi r0, 0x0
    bge lbl_802E5B44
    b lbl_802E5B94
lbl_802E5B34:
    cmpwi r0, 0x11
    bge lbl_802E5B88
    b lbl_802E5B5C
    b lbl_802E5B94
lbl_802E5B44:
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    lis r0, 0x6700
    stw r0, -0x8000(r6)
    b lbl_802E5B94
lbl_802E5B5C:
    lwz r8, 0x5f4(r5)
    lis r6, 0xcc01
    li r7, 0x8
    li r0, 0x20
    rlwinm r8, r8, 0, 28, 23
    stw r8, 0x5f4(r5)
    stb r7, -0x8000(r6)
    stb r0, -0x8000(r6)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r6)
    b lbl_802E5B94
lbl_802E5B88:
    lwz r6, __cpReg
    li r0, 0x0
    sth r0, 0x6(r6)
lbl_802E5B94:
    cmplwi r3, 0x23
    stw r3, 0x5ec(r5)
    bgt lbl_802E5FB8
    lis r6, jumptable_8037B1D4@ha
    slwi r0, r3, 2
    addi r6, r6, jumptable_8037B1D4@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x273
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x14a
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x16b
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x84
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0xc6
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x210
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x252
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x231
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x1ad
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x1ce
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x21
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r6)
    li r3, 0x1006
    li r0, 0x153
    stw r3, -0x8000(r6)
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5181
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x7181
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x6181
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2300
    stb r0, -0x8000(r6)
    addi r0, r3, 0x1e7f
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x53c1
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5381
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5341
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5301
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x52c1
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5281
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5241
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5201
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x51c1
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5d81
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5981
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2301
    stb r0, -0x8000(r6)
    subi r0, r3, 0x5581
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2403
    stb r0, -0x8000(r6)
    subi r0, r3, 0x3f3a
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2403
    stb r0, -0x8000(r6)
    subi r0, r3, 0x3e95
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2403
    stb r0, -0x8000(r6)
    subi r0, r3, 0x3f19
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2403
    stb r0, -0x8000(r6)
    subi r0, r3, 0x3ef8
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2403
    stb r0, -0x8000(r6)
    subi r0, r3, 0x3ed7
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2403
    stb r0, -0x8000(r6)
    subi r0, r3, 0x3eb6
    stw r0, -0x8000(r6)
    b lbl_802E5FB8
    lis r6, 0xcc01
    li r0, 0x61
    lis r3, 0x2403
    stb r0, -0x8000(r6)
    subi r0, r3, 0x3e53
    stw r0, -0x8000(r6)
lbl_802E5FB8:
    cmplwi r4, 0x16
    stw r4, 0x5f0(r5)
    bgt lbl_802E62AC
    lis r3, jumptable_8037B178@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8037B178@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x42
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x84
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x63
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x129
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x252
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x21
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x14b
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x18d
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x1cf
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lis r4, 0xcc01
    li r0, 0x61
    lis r3, 0x6700
    stb r0, -0x8000(r4)
    addi r0, r3, 0x211
    stw r0, -0x8000(r4)
    b lbl_802E62AC
    lwz r4, 0x5f4(r5)
    li r0, 0x2
    rlwimi r4, r0, 4, 24, 27
    lis r3, 0xcc01
    stw r4, 0x5f4(r5)
    li r4, 0x8
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    lwz r4, 0x5f4(r5)
    li r0, 0x3
    rlwimi r4, r0, 4, 24, 27
    lis r3, 0xcc01
    stw r4, 0x5f4(r5)
    li r4, 0x8
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    lwz r4, 0x5f4(r5)
    li r0, 0x4
    rlwimi r4, r0, 4, 24, 27
    lis r3, 0xcc01
    stw r4, 0x5f4(r5)
    li r4, 0x8
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    lwz r4, 0x5f4(r5)
    li r0, 0x5
    rlwimi r4, r0, 4, 24, 27
    lis r3, 0xcc01
    stw r4, 0x5f4(r5)
    li r4, 0x8
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    lwz r4, 0x5f4(r5)
    li r0, 0x6
    rlwimi r4, r0, 4, 24, 27
    lis r3, 0xcc01
    stw r4, 0x5f4(r5)
    li r4, 0x8
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    lwz r4, 0x5f4(r5)
    li r0, 0x7
    rlwimi r4, r0, 4, 24, 27
    lis r3, 0xcc01
    stw r4, 0x5f4(r5)
    li r4, 0x8
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    lwz r4, 0x5f4(r5)
    li r0, 0x9
    rlwimi r4, r0, 4, 24, 27
    lis r3, 0xcc01
    stw r4, 0x5f4(r5)
    li r4, 0x8
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    li r4, 0x8
    lwz r0, 0x5f4(r5)
    rlwimi r0, r4, 4, 24, 27
    lis r3, 0xcc01
    stw r0, 0x5f4(r5)
    li r0, 0x20
    stb r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lwz r0, 0x5f4(r5)
    stw r0, -0x8000(r3)
    b lbl_802E62AC
    lwz r3, __cpReg
    li r0, 0x2
    sth r0, 0x6(r3)
    b lbl_802E62AC
    lwz r3, __cpReg
    li r0, 0x3
    sth r0, 0x6(r3)
    b lbl_802E62AC
    lwz r3, __cpReg
    li r0, 0x4
    sth r0, 0x6(r3)
    b lbl_802E62AC
    lwz r3, __cpReg
    li r0, 0x5
    sth r0, 0x6(r3)
lbl_802E62AC:
    li r0, 0x0
    sth r0, 0x2(r5)
    blr
}

// asm_to_cpp: fn_802E62C8
asm void fn_802E62C8() {
    nofralloc
    li r0, 0x0
    cmpwi r4, 0x1
    stw r4, 0x18(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    stfs f3, 0x10(r3)
    stw r0, 0x14(r3)
    stb r0, 0x1c(r3)
    bne lbl_802E62F4
    frsp f0, f1
    b lbl_802E62F8
lbl_802E62F4:
    frsp f0, f2
lbl_802E62F8:
    stfs f0, 0xc(r3)
    blr
}

// asm_to_cpp: fn_802E6320
asm void fn_802E6320(s8 *arg0) {
    nofralloc
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bnelr
    lwz r0, 0x18(r3)
    cmpwi r0, 0x2
    beq lbl_802E63C4
    bge lbl_802E634C
    cmpwi r0, 0x0
    beq lbl_802E6358
    bge lbl_802E6394
    blr
lbl_802E634C:
    cmpwi r0, 0x4
    bgelr
    b lbl_802E63F8
lbl_802E6358:
    lis r4, lbl_80341A30@ha
    lfs f3, 0x4(r3)
    lfs f2, lbl_80341A30@l(r4)
    lfs f1, 0xc(r3)
    lfs f0, 0x10(r3)
    fsubs f2, f3, f2
    fadds f0, f1, f0
    fcmpo cr0, f0, f2
    stfs f0, 0xc(r3)
    opword 0x4C411382
    bnelr
    li r0, 0x0
    stfs f2, 0xc(r3)
    stw r0, 0x14(r3)
    blr
lbl_802E6394:
    lfs f2, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x8(r3)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    stfs f1, 0xc(r3)
    opword 0x4C401382
    bnelr
    li r0, 0x0
    stfs f0, 0xc(r3)
    stw r0, 0x14(r3)
    blr
lbl_802E63C4:
    lfs f2, 0xc(r3)
    lfs f0, 0x10(r3)
    lfs f1, 0x4(r3)
    fadds f2, f2, f0
    fcmpo cr0, f2, f1
    stfs f2, 0xc(r3)
    opword 0x4C411382
    bnelr
    lfs f0, 0x8(r3)
    fsubs f0, f1, f0
    fsubs f0, f2, f0
    stfs f0, 0xc(r3)
    blr
lbl_802E63F8:
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_802E6440
    lis r4, lbl_80341A30@ha
    lfs f3, 0x4(r3)
    lfs f2, lbl_80341A30@l(r4)
    lfs f1, 0xc(r3)
    lfs f0, 0x10(r3)
    fsubs f2, f3, f2
    fadds f0, f1, f0
    fcmpo cr0, f0, f2
    stfs f0, 0xc(r3)
    opword 0x4C411382
    bnelr
    li r0, 0x1
    stfs f2, 0xc(r3)
    stb r0, 0x1c(r3)
    blr
lbl_802E6440:
    lfs f2, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x8(r3)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    stfs f1, 0xc(r3)
    opword 0x4C401382
    bnelr
    li r0, 0x0
    stfs f0, 0xc(r3)
    stb r0, 0x1c(r3)
    blr
}
