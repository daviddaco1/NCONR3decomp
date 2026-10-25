#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXInitTexObj();                             /* static */
extern s8 *__GXData;
extern M2C_UNK lbl_8037B0E0;
extern M2C_UNK lbl_8049D078;
extern M2C_UNK lbl_8049D080;
extern M2C_UNK lbl_8049D088;
extern M2C_UNK lbl_8049D090;
extern M2C_UNK lbl_8049D098;
extern M2C_UNK lbl_8049D0A0;
extern M2C_UNK lbl_8049D0A8;
extern M2C_UNK lbl_8049D0B0;
extern M2C_UNK lbl_8049D0B8;
extern f32 lbl_804A25E0;
extern f32 lbl_804A25F0;
extern f32 lbl_804A25F4;
extern f32 lbl_804A25F8;
extern f32 lbl_804A25FC;
extern f32 lbl_804A2600;
extern f32 lbl_804A2604;
extern f32 lbl_804A2608;
extern f32 lbl_804A260C;
extern f32 lbl_804A2618;

/*
Decompilation failure in function GXGetTexBufferSize:

Found bctr instruction at GXTexture.s line 17, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function __GetImageTileCount:

Found bctr instruction at GXTexture.s line 105, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function GXInitTexObj:

Found bctr instruction at GXTexture.s line 242, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void GXInitTexObjCI();
void GXInitTexObjLOD();
void GXInitTexObjWrapMode();
void GXInitTexObjTlut();
void GXInitTexObjFilter();
void GXInitTexObjUserData();
s32 GXGetTexObjUserData();
s32 GXGetTexObjData();
u16 GXGetTexObjWidth();
u16 GXGetTexObjHeight();
s32 GXGetTexObjFmt();
s32 GXGetTexObjWrapS();
s32 GXGetTexObjWrapT();
s32 GXGetTexObjMipMap();
void GXGetTexObjLODAll();
s32 GXGetTexObjTlut();
void GXLoadTexObjPreLoaded();
void GXLoadTexObj();
void GXInitTlutObj();
void GXLoadTlut();
void GXInitTexCacheRegion();
void GXInitTlutRegion();
void GXInvalidateTexAll();
s32 GXSetTexRegionCallback();
s32 GXSetTlutRegionCallback();
void __SetSURegs();
void __GXSetSUTexRegs();
void __GXSetTmemConfig();
void fn_802E3F80();
void fn_802E3FE8();
void fn_802E413C();
void fn_802E4240();
void fn_802E430C();
void fn_802E432C();
void fn_802E4374();
void __GXSetIndirectMask();
void __GXFlushTextureState();
void fn_802E43CC();
void fn_802E4460();
void fn_802E44A0();
void fn_802E44E0();
void fn_802E4538();
void fn_802E4590();
void GXSetTexCoordCylWrap();
void fn_802E4654();
void fn_802E46B0();
void fn_802E4700();
void fn_802E4750();
void GXSetTexCoordScaleManually();

void GXInitTexObjCI(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8) {
    GXInitTexObj();
    M2C_FIELD(arg0, s32 *, 0x18) = arg_sp8;
    M2C_FIELD(arg0, u8 *, 0x1F) = (u8) (M2C_FIELD(arg0, u8 *, 0x1F) & 0xFFFFFFFD);
}


void GXInitTexObjWrapMode(s32 *arg0, s32 arg1, s32 arg2) {
    u32 val = *arg0;
    val = __rlwimi(val, arg1, 0, 30, 31);
    val = __rlwimi(val, arg2, 2, 28, 29);
    *arg0 = val;
}


void GXInitTexObjTlut(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

// GXInitTexObjFilter: definicion C reemplazada por asm (ver abajo)


void GXInitTexObjUserData(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 GXGetTexObjUserData(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 GXGetTexObjData(s8 *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) << 5) & 0x1FFFFFE0;
}

u16 GXGetTexObjWidth(s8 *arg0) {
    return (u16) ((M2C_FIELD(arg0, s32 *, 8) & 0x3FF) + 1);
}

u16 GXGetTexObjHeight(s8 *arg0) {
    return (u16) ((((u32) M2C_FIELD(arg0, u32 *, 8) >> 0xAU) & 0x3FF) + 1);
}

s32 GXGetTexObjFmt(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 GXGetTexObjWrapS(s32 *arg0) {
    return *arg0 & 3;
}

s32 GXGetTexObjWrapT(u32 *arg0) {
    return ((u32) *arg0 >> 2U) & 3;
}

s32 GXGetTexObjMipMap(s8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1F) & 1;
}

// GXGetTexObjLODAll: definicion C reemplazada por asm (ver abajo)


s32 GXGetTexObjTlut(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

// GXLoadTexObjPreLoaded: definicion C reemplazada por asm (ver abajo)


// GXLoadTexObj: definicion C reemplazada por asm (ver abajo)



// GXLoadTlut: definicion C reemplazada por asm (ver abajo)



// GXInitTlutRegion: definicion C reemplazada por asm (ver abajo)


// GXInvalidateTexAll: definicion C reemplazada por asm (ver abajo)


s32 GXSetTexRegionCallback(s32 arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(__GXData, s32 *, 0x518);
    M2C_FIELD(__GXData, s32 *, 0x518) = arg0;
    return temp_r3;
}

s32 GXSetTlutRegionCallback(s32 arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(__GXData, s32 *, 0x51C);
    M2C_FIELD(__GXData, s32 *, 0x51C) = arg0;
    return temp_r3;
}

// __SetSURegs: definicion C reemplazada por asm (ver abajo)


void __GXSetSUTexRegs(M2C_UNK arg_sp0);

// __GXSetTmemConfig: definicion C reemplazada por asm (ver abajo)



// fn_802E3FE8: definicion C reemplazada por asm (ver abajo)


// fn_802E413C: definicion C reemplazada por asm (ver abajo)


// fn_802E4240: definicion C reemplazada por asm (ver abajo)


// fn_802E430C: definicion C reemplazada por asm (ver abajo)


// fn_802E432C: definicion C reemplazada por asm (ver abajo)


void fn_802E4374(void) {

}

// __GXSetIndirectMask: definicion C reemplazada por asm (ver abajo)


// __GXFlushTextureState: definicion C reemplazada por asm (ver abajo)


// fn_802E43CC: definicion C reemplazada por asm (ver abajo)


// fn_802E4460: definicion C reemplazada por asm (ver abajo)


// fn_802E44A0: definicion C reemplazada por asm (ver abajo)


// fn_802E44E0: definicion C reemplazada por asm (ver abajo)


// fn_802E4538: definicion C reemplazada por asm (ver abajo)


// fn_802E4590: definicion C reemplazada por asm (ver abajo)


// GXSetTexCoordCylWrap: definicion C reemplazada por asm (ver abajo)


// fn_802E4654: definicion C reemplazada por asm (ver abajo)


// fn_802E46B0: definicion C reemplazada por asm (ver abajo)


// fn_802E4700: definicion C reemplazada por asm (ver abajo)


// fn_802E4750: definicion C reemplazada por asm (ver abajo)


// GXSetTexCoordScaleManually: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A25E8;
extern float lbl_804A2610;
extern u8 jumptable_8037AEB8[];
extern u8 jumptable_8037AFAC[];
extern u8 jumptable_8037B0A0[];
extern int GXGetTexBufferSize();
void GXGetTexObjLODAll(s8 *arg0, s32 *arg1, s32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, s8 *arg6, u8 *arg7, s32 *arg_sp8);
void GXInitTexCacheRegion();
M2C_UNK GXInitTexObj();
void GXInitTexObjFilter(s32 *arg0, s32 arg1, s32 arg2);
void GXInitTexObjLOD();
void GXInitTexObjWrapMode(s32 *arg0, s32 arg1, s32 arg2);
void GXInitTlutObj();
void GXInitTlutRegion(s32 *arg0, s32 arg1, s32 arg2);
void GXInvalidateTexAll(void);
void GXLoadTexObj(s8 *arg0, s32 arg1);
void GXLoadTexObjPreLoaded(s8 *arg0, s8 *arg1, s32 arg2);
void GXLoadTlut(s8 *arg0, s32 arg1);
void GXSetTexCoordCylWrap(s32 arg0, s8 *arg1, s32 arg2);
void GXSetTexCoordScaleManually(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void __GXFlushTextureState(void);
void __GXSetIndirectMask(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void __GXSetSUTexRegs();
void __GXSetTmemConfig(s32 arg0);
extern int __GetImageTileCount();
void __SetSURegs(u32 arg0, s32 arg1);
extern void _restgpr_23();
extern void _restgpr_24();
extern void _savegpr_23();
extern void _savegpr_24();
void fn_802E3F80();
void fn_802E3FE8(s32 arg0, s8 *arg1, s32 arg2);
void fn_802E413C(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4240(s32 arg0, s32 arg1, s32 arg2);
void fn_802E430C(s32 arg0);
void fn_802E432C(s32 arg0);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4590(s32 arg0, u32 *arg1);
void fn_802E4654(s32 arg0, u32 *arg1);
void fn_802E46B0(s32 arg0, s32 arg1);
void fn_802E4700(s32 arg0, s32 arg1);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
extern void memset();

// asm_to_cpp: GXGetTexBufferSize
asm int GXGetTexBufferSize() {
    nofralloc
    cmplwi r5, 0x3c
    bgt lbl_802E2FE4
    lis r8, jumptable_8037AEB8@ha
    slwi r0, r5, 2
    addi r8, r8, jumptable_8037AEB8@l
    lwzx r8, r8, r0
    mtctr r8
    bctr
    li r10, 0x3
    li r0, 0x3
    b lbl_802E2FEC
    li r10, 0x3
    li r0, 0x2
    b lbl_802E2FEC
    li r10, 0x2
    li r0, 0x2
    b lbl_802E2FEC
lbl_802E2FE4:
    li r0, 0x0
    li r10, 0x0
lbl_802E2FEC:
    cmplwi r5, 0x6
    beq lbl_802E2FFC
    cmplwi r5, 0x16
    bne lbl_802E3004
lbl_802E2FFC:
    li r11, 0x40
    b lbl_802E3008
lbl_802E3004:
    li r11, 0x20
lbl_802E3008:
    cmplwi r6, 0x1
    bne lbl_802E3090
    li r5, 0x1
    li r12, 0x0
    slw r8, r5, r10
    slw r9, r5, r0
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_802E30BC
lbl_802E302C:
    add r6, r3, r8
    add r5, r4, r9
    subi r6, r6, 0x1
    cmplwi r3, 0x1
    sraw r6, r6, r10
    subi r5, r5, 0x1
    mullw r6, r11, r6
    sraw r5, r5, r0
    mullw r5, r6, r5
    add r12, r12, r5
    bne lbl_802E3060
    cmplwi r4, 0x1
    beq lbl_802E30BC
lbl_802E3060:
    cmplwi r3, 0x1
    li r5, 0x1
    ble lbl_802E3070
    extrwi r5, r3, 15, 16
lbl_802E3070:
    cmplwi r4, 0x1
    clrlwi r3, r5, 16
    li r5, 0x1
    ble lbl_802E3084
    extrwi r5, r4, 15, 16
lbl_802E3084:
    clrlwi r4, r5, 16
    bdnz lbl_802E302C
    b lbl_802E30BC
lbl_802E3090:
    li r6, 0x1
    slw r5, r6, r10
    add r5, r3, r5
    slw r3, r6, r0
    subi r5, r5, 0x1
    sraw r5, r5, r10
    add r3, r4, r3
    mullw r4, r11, r5
    subi r3, r3, 0x1
    sraw r0, r3, r0
    mullw r12, r4, r0
lbl_802E30BC:
    mr r3, r12
    blr
}

// asm_to_cpp: __GetImageTileCount
asm int __GetImageTileCount() {
    nofralloc
    cmplwi r3, 0x3c
    bgt lbl_802E3108
    lis r9, jumptable_8037AFAC@ha
    slwi r0, r3, 2
    addi r9, r9, jumptable_8037AFAC@l
    lwzx r9, r9, r0
    mtctr r9
    bctr
    li r11, 0x3
    li r12, 0x3
    b lbl_802E3110
    li r11, 0x3
    li r12, 0x2
    b lbl_802E3110
    li r11, 0x2
    li r12, 0x2
    b lbl_802E3110
lbl_802E3108:
    li r12, 0x0
    li r11, 0x0
lbl_802E3110:
    cmpwi r4, 0x0
    bne lbl_802E311C
    li r4, 0x1
lbl_802E311C:
    cmpwi r5, 0x0
    bne lbl_802E3128
    li r5, 0x1
lbl_802E3128:
    li r10, 0x1
    cmpwi r3, 0x6
    slw r0, r10, r11
    li r9, 0x0
    add r4, r4, r0
    slw r0, r10, r12
    subi r4, r4, 0x1
    sraw r10, r4, r11
    add r4, r5, r0
    stw r10, 0x0(r6)
    subi r0, r4, 0x1
    sraw r0, r0, r12
    stw r0, 0x0(r7)
    beq lbl_802E3168
    cmpwi r3, 0x16
    bne lbl_802E316C
lbl_802E3168:
    li r9, 0x1
lbl_802E316C:
    neg r0, r9
    or r0, r0, r9
    srwi r3, r0, 31
    addi r0, r3, 0x1
    stw r0, 0x0(r8)
    blr
}

// asm_to_cpp: GXInitTexObj
asm M2C_UNK GXInitTexObj() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r27, r4
    mr r28, r5
    mr r31, r3
    mr r29, r6
    mr r30, r7
    mr r24, r8
    mr r25, r9
    mr r26, r10
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, 0x0(r31)
    rlwimi r0, r24, 0, 30, 31
    rlwimi r0, r25, 2, 28, 29
    cmpwi r26, 0x0
    ori r4, r0, 0x10
    stw r4, 0x0(r31)
    beq lbl_802E326C
    lbz r3, 0x1f(r31)
    subi r0, r30, 0x8
    cmplwi r0, 0x2
    ori r0, r3, 0x1
    stb r0, 0x1f(r31)
    bgt lbl_802E3208
    li r0, 0x5
    rlwimi r4, r0, 5, 24, 26
    stw r4, 0x0(r31)
    b lbl_802E3214
lbl_802E3208:
    li r0, 0x6
    rlwimi r4, r0, 5, 24, 26
    stw r4, 0x0(r31)
lbl_802E3214:
    cmplw r28, r29
    ble lbl_802E3228
    cntlzw r0, r28
    subfic r3, r0, 0x1f
    b lbl_802E3230
lbl_802E3228:
    cntlzw r0, r29
    subfic r3, r0, 0x1f
lbl_802E3230:
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_804A25E8
    stw r0, 0x8(r1)
    lfs f0, lbl_804A25E0
    lfd f1, 0x8(r1)
    lwz r0, 0x4(r31)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    rlwimi r0, r3, 8, 16, 23
    stw r0, 0x4(r31)
    b lbl_802E3278
lbl_802E326C:
    li r0, 0x4
    rlwimi r4, r0, 5, 24, 26
    stw r4, 0x0(r31)
lbl_802E3278:
    subi r0, r28, 0x1
    lwz r3, 0x8(r31)
    rlwimi r3, r0, 0, 22, 31
    clrlwi r4, r30, 28
    subi r0, r29, 0x1
    stw r30, 0x14(r31)
    rlwimi r3, r0, 10, 12, 21
    lwz r0, 0xc(r31)
    rlwimi r0, r27, 27, 8, 31
    cmplwi r4, 0xe
    rlwimi r3, r30, 20, 8, 11
    stw r0, 0xc(r31)
    stw r3, 0x8(r31)
    bgt lbl_802E332C
    lis r3, jumptable_8037B0A0@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8037B0A0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x1
    li r6, 0x3
    stb r0, 0x1e(r31)
    li r7, 0x3
    b lbl_802E333C
    li r0, 0x2
    li r6, 0x3
    stb r0, 0x1e(r31)
    li r7, 0x2
    b lbl_802E333C
    li r0, 0x2
    li r6, 0x2
    stb r0, 0x1e(r31)
    li r7, 0x2
    b lbl_802E333C
    li r0, 0x3
    li r6, 0x2
    stb r0, 0x1e(r31)
    li r7, 0x2
    b lbl_802E333C
    li r0, 0x0
    li r6, 0x3
    stb r0, 0x1e(r31)
    li r7, 0x3
    b lbl_802E333C
lbl_802E332C:
    li r0, 0x2
    li r6, 0x2
    stb r0, 0x1e(r31)
    li r7, 0x2
lbl_802E333C:
    li r5, 0x1
    lbz r0, 0x1f(r31)
    slw r3, r5, r6
    addi r11, r1, 0x40
    add r4, r28, r3
    ori r0, r0, 0x2
    slw r3, r5, r7
    stb r0, 0x1f(r31)
    subi r4, r4, 0x1
    add r3, r29, r3
    sraw r4, r4, r6
    subi r0, r3, 0x1
    sraw r0, r0, r7
    mullw r0, r4, r0
    clrlwi r0, r0, 17
    sth r0, 0x1c(r31)
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: GXInitTexObjLOD
asm void GXInitTexObjLOD() {
    nofralloc
    lfs f0, lbl_804A25F0
    stwu r1, -0x10(r1)
    fcmpo cr0, f3, f0
    bge lbl_802E33F0
    fmr f3, f0
    b lbl_802E3404
lbl_802E33F0:
    lfs f0, lbl_804A25F8
    fcmpo cr0, f3, f0
    opword 0x4C411382
    bne lbl_802E3404
    lfs f3, lbl_804A25F4
lbl_802E3404:
    lfs f4, lbl_804A25FC
    subi r0, r5, 0x1
    cntlzw r9, r0
    lfs f0, lbl_804A2600
    fmuls f3, f4, f3
    cntlzw r0, r7
    lwz r10, 0x0(r3)
    la r5, lbl_8049D0B0
    fcmpo cr0, f1, f0
    fctiwz f3, f3
    stfd f3, 0x8(r1)
    lwz r7, 0xc(r1)
    rlwimi r10, r7, 9, 15, 22
    rlwimi r10, r9, 31, 27, 27
    stw r10, 0x0(r3)
    lbzx r4, r5, r4
    rlwimi r10, r4, 5, 24, 26
    rlwimi r10, r0, 3, 23, 23
    rlwinm r0, r10, 0, 15, 12
    rlwimi r0, r8, 19, 11, 12
    rlwimi r0, r6, 21, 10, 10
    stw r0, 0x0(r3)
    bge lbl_802E3468
    fmr f1, f0
    b lbl_802E3478
lbl_802E3468:
    lfs f0, lbl_804A2604
    fcmpo cr0, f1, f0
    ble lbl_802E3478
    fmr f1, f0
lbl_802E3478:
    lfs f3, lbl_804A25E0
    lfs f0, lbl_804A2600
    fmuls f1, f3, f1
    fcmpo cr0, f2, f0
    fctiwz f1, f1
    stfd f1, 0x8(r1)
    lwz r4, 0xc(r1)
    bge lbl_802E34A0
    fmr f2, f0
    b lbl_802E34B0
lbl_802E34A0:
    lfs f0, lbl_804A2604
    fcmpo cr0, f2, f0
    ble lbl_802E34B0
    fmr f2, f0
lbl_802E34B0:
    lfs f0, lbl_804A25E0
    lwz r0, 0x4(r3)
    rlwimi r0, r4, 0, 24, 31
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    rlwimi r0, r4, 8, 16, 23
    stw r0, 0x4(r3)
    addi r1, r1, 0x10
    blr
}


// asm_to_cpp: GXInitTexObjFilter
asm void GXInitTexObjFilter(s32 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    subi r0, r5, 0x1
    lwz r6, 0x0(r3)
    cntlzw r0, r0
    la r5, lbl_8049D0B0
    rlwimi r6, r0, 31, 27, 27
    stw r6, 0x0(r3)
    lbzx r0, r5, r4
    rlwimi r6, r0, 5, 24, 26
    stw r6, 0x0(r3)
    blr
}

// asm_to_cpp: GXGetTexObjLODAll
asm void GXGetTexObjLODAll(s8 *arg0, s32 *arg1, s32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, s8 *arg6, u8 *arg7, s32 *arg_sp8) {
    nofralloc
    stwu r1, -0x30(r1)
    lwz r0, 0x4(r3)
    stw r31, 0x2c(r1)
    lis r31, 0x4330
    clrlwi r11, r0, 24
    lfd f5, lbl_804A25E8
    stw r30, 0x28(r1)
    lfs f3, lbl_804A2608
    stw r29, 0x24(r1)
    la r29, lbl_8049D0B8
    lfd f2, lbl_804A2610
    stw r28, 0x20(r1)
    lwz r28, 0x0(r3)
    extrwi r3, r0, 8, 16
    stw r11, 0xc(r1)
    extrwi r0, r28, 8, 15
    extrwi r11, r28, 3, 24
    stw r31, 0x8(r1)
    extsh r0, r0
    extsb r0, r0
    lbzx r29, r29, r11
    xoris r12, r0, 0x8000
    lfd f0, 0x8(r1)
    stw r3, 0x14(r1)
    extrwi r0, r28, 1, 23
    fsubs f1, f0, f5
    cntlzw r0, r0
    stw r31, 0x10(r1)
    extrwi r30, r28, 1, 27
    extrwi r3, r0, 8, 19
    extrwi r11, r28, 1, 10
    stw r29, 0x0(r4)
    fmuls f4, f1, f3
    lfd f0, 0x10(r1)
    extrwi r0, r28, 2, 11
    stw r30, 0x0(r5)
    fsubs f1, f0, f5
    lfs f0, lbl_804A260C
    stw r12, 0x1c(r1)
    lwz r4, 0x38(r1)
    stw r31, 0x18(r1)
    fmuls f3, f1, f3
    lfd f1, 0x18(r1)
    stfs f4, 0x0(r6)
    fsubs f1, f1, f2
    stfs f3, 0x0(r7)
    fmuls f0, f1, f0
    stfs f0, 0x0(r8)
    stb r11, 0x0(r9)
    stb r3, 0x0(r10)
    stw r0, 0x0(r4)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: GXLoadTexObjPreLoaded
asm void GXLoadTexObjPreLoaded(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r11, lbl_8049D078
    la r10, lbl_8049D080
    stw r0, 0x24(r1)
    la r9, lbl_8049D088
    lwz r12, 0x0(r3)
    la r8, lbl_8049D090
    stw r31, 0x1c(r1)
    la r7, lbl_8049D098
    la r6, lbl_8049D0A0
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lis r29, 0xcc01
    stw r28, 0x10(r1)
    li r28, 0x61
    lbzx r0, r11, r5
    lwz r11, 0x4(r3)
    rlwimi r12, r0, 24, 0, 7
    lbzx r0, r10, r5
    lbzx r10, r9, r5
    rlwimi r11, r0, 24, 0, 7
    lbzx r0, r7, r5
    lbzx r8, r8, r5
    lbzx r5, r6, r5
    lwz r9, 0x8(r3)
    rlwimi r9, r10, 24, 0, 7
    stb r28, -0x8000(r29)
    lwz r7, 0x0(r4)
    rlwimi r7, r8, 24, 0, 7
    stw r12, -0x8000(r29)
    lwz r6, 0x4(r4)
    rlwimi r6, r0, 24, 0, 7
    stb r28, -0x8000(r29)
    lbz r0, 0x1f(r3)
    stw r11, -0x8000(r29)
    rlwinm. r0, r0, 0, 30, 30
    lwz r0, 0xc(r3)
    stb r28, -0x8000(r29)
    rlwimi r0, r5, 24, 0, 7
    stw r9, -0x8000(r29)
    stb r28, -0x8000(r29)
    stw r7, -0x8000(r29)
    stb r28, -0x8000(r29)
    stw r6, -0x8000(r29)
    stb r28, -0x8000(r29)
    stw r12, 0x0(r3)
    stw r11, 0x4(r3)
    stw r9, 0x8(r3)
    stw r7, 0x0(r4)
    stw r6, 0x4(r4)
    stw r0, 0xc(r3)
    stw r0, -0x8000(r29)
    bne lbl_802E3790
    lwz r4, __GXData
    lwz r3, 0x18(r3)
    lwz r12, 0x51c(r4)
    mtctr r12
    bctrl
    la r4, lbl_8049D0A8
    lwz r0, 0x4(r3)
    lbzx r4, r4, r31
    rlwimi r0, r4, 24, 0, 7
    stw r0, 0x4(r3)
    stb r28, -0x8000(r29)
    lwz r0, 0x4(r3)
    stw r0, -0x8000(r29)
lbl_802E3790:
    lwz r6, __GXData
    slwi r3, r31, 2
    lwz r5, 0x8(r30)
    li r0, 0x0
    add r4, r6, r3
    lwz r3, 0x0(r30)
    stw r5, 0x564(r4)
    stw r3, 0x584(r4)
    lwz r3, 0x5fc(r6)
    ori r3, r3, 0x1
    stw r3, 0x5fc(r6)
    sth r0, 0x2(r6)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GXLoadTexObj
asm void GXLoadTexObj(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, __GXData
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r12, 0x518(r5)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl GXLoadTexObjPreLoaded
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GXInitTlutObj
asm void GXInitTlutObj() {
    nofralloc
    lwz r7, 0x4(r3)
    li r0, 0x64
    rlwimi r7, r4, 27, 8, 31
    li r4, 0x0
    rlwimi r4, r5, 10, 20, 21
    sth r6, 0x8(r3)
    rlwimi r7, r0, 24, 0, 7
    stw r4, 0x0(r3)
    stw r7, 0x4(r3)
    blr
}

// asm_to_cpp: GXLoadTlut
asm void GXLoadTlut(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, __GXData
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    lwz r12, 0x51c(r5)
    mtctr r12
    bctrl
    mr r31, r3
    bl __GXFlushTextureState
    lis r3, 0xcc01
    li r4, 0x61
    stb r4, -0x8000(r3)
    lwz r0, 0x4(r30)
    stw r0, -0x8000(r3)
    stb r4, -0x8000(r3)
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
    bl __GXFlushTextureState
    lwz r0, 0x0(r31)
    lwz r4, 0x0(r30)
    rlwimi r4, r0, 0, 22, 31
    lwz r3, 0x4(r30)
    stw r4, 0x4(r31)
    lwz r0, 0x8(r30)
    stw r3, 0x8(r31)
    stw r0, 0xc(r31)
    stw r4, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GXInitTexCacheRegion
asm void GXInitTexCacheRegion() {
    nofralloc
    cmpwi r6, 0x1
    beq lbl_802E391C
    bge lbl_802E3908
    cmpwi r6, 0x0
    bge lbl_802E3914
    b lbl_802E3928
lbl_802E3908:
    cmpwi r6, 0x3
    bge lbl_802E3928
    b lbl_802E3924
lbl_802E3914:
    li r6, 0x3
    b lbl_802E3928
lbl_802E391C:
    li r6, 0x4
    b lbl_802E3928
lbl_802E3924:
    li r6, 0x5
lbl_802E3928:
    li r0, 0x0
    cmpwi r8, 0x2
    rlwimi r0, r5, 27, 17, 31
    rlwimi r0, r6, 15, 14, 16
    rlwimi r0, r6, 18, 11, 13
    stw r0, 0x0(r3)
    beq lbl_802E3974
    bge lbl_802E3958
    cmpwi r8, 0x0
    beq lbl_802E3964
    bge lbl_802E396C
    b lbl_802E3980
lbl_802E3958:
    cmpwi r8, 0x4
    bge lbl_802E3980
    b lbl_802E397C
lbl_802E3964:
    li r6, 0x3
    b lbl_802E3980
lbl_802E396C:
    li r6, 0x4
    b lbl_802E3980
lbl_802E3974:
    li r6, 0x5
    b lbl_802E3980
lbl_802E397C:
    li r6, 0x0
lbl_802E3980:
    li r5, 0x0
    li r0, 0x1
    rlwimi r5, r7, 27, 17, 31
    stb r4, 0xc(r3)
    rlwimi r5, r6, 15, 14, 16
    rlwimi r5, r6, 18, 11, 13
    stb r0, 0xd(r3)
    stw r5, 0x4(r3)
    blr
}

// asm_to_cpp: GXInitTlutRegion
asm void GXInitTlutRegion(s32 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    subis r0, r4, 0x8
    li r4, 0x0
    rlwimi r4, r0, 23, 22, 31
    li r0, 0x65
    rlwimi r4, r5, 10, 11, 21
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x0(r3)
    blr
}

// asm_to_cpp: GXInvalidateTexAll
asm void GXInvalidateTexAll(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl __GXFlushTextureState
    lis r4, 0xcc01
    li r5, 0x61
    lis r3, 0x6600
    stb r5, -0x8000(r4)
    addi r0, r3, 0x1000
    stw r0, -0x8000(r4)
    addi r0, r3, 0x1100
    stb r5, -0x8000(r4)
    stw r0, -0x8000(r4)
    bl __GXFlushTextureState
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __SetSURegs
asm void __SetSURegs(u32 arg0, s32 arg1) {
    nofralloc
    lwz r11, __GXData
    slwi r6, r4, 2
    slwi r0, r3, 2
    lis r5, 0xcc01
    add r10, r11, r0
    add r9, r11, r6
    lwz r3, 0x564(r10)
    li r4, 0x61
    lwz r8, 0x108(r9)
    li r0, 0x0
    clrlwi r6, r3, 22
    extrwi r3, r3, 10, 12
    rlwimi r8, r6, 0, 16, 31
    stw r8, 0x108(r9)
    lwz r7, 0x128(r9)
    rlwimi r7, r3, 0, 16, 31
    stw r7, 0x128(r9)
    lwz r3, 0x584(r10)
    clrlwi r6, r3, 30
    extrwi r3, r3, 2, 28
    subi r6, r6, 0x1
    cntlzw r6, r6
    subi r3, r3, 0x1
    rlwimi r8, r6, 11, 15, 15
    cntlzw r3, r3
    stw r8, 0x108(r9)
    rlwimi r7, r3, 11, 15, 15
    stw r7, 0x128(r9)
    stb r4, -0x8000(r5)
    lwz r3, 0x108(r9)
    stw r3, -0x8000(r5)
    stb r4, -0x8000(r5)
    lwz r3, 0x128(r9)
    stw r3, -0x8000(r5)
    sth r0, 0x2(r11)
    blr
}

// asm_to_cpp: __GXSetSUTexRegs
asm void __GXSetSUTexRegs() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r29, __GXData
    lwz r0, 0x5e4(r29)
    cmplwi r0, 0xff
    beq lbl_802E3C14
    lwz r0, 0x254(r29)
    li r28, 0x0
    li r23, 0x1
    extrwi r3, r0, 4, 18
    extrwi r27, r0, 3, 13
    addi r26, r3, 0x1
    b lbl_802E3B88
lbl_802E3B04:
    cmpwi r28, 0x2
    beq lbl_802E3B4C
    bge lbl_802E3B20
    cmpwi r28, 0x0
    beq lbl_802E3B2C
    bge lbl_802E3B3C
    b lbl_802E3B68
lbl_802E3B20:
    cmpwi r28, 0x4
    bge lbl_802E3B68
    b lbl_802E3B5C
lbl_802E3B2C:
    lwz r0, 0x170(r29)
    clrlwi r25, r0, 29
    extrwi r24, r0, 3, 26
    b lbl_802E3B68
lbl_802E3B3C:
    lwz r0, 0x170(r29)
    extrwi r25, r0, 3, 23
    extrwi r24, r0, 3, 20
    b lbl_802E3B68
lbl_802E3B4C:
    lwz r0, 0x170(r29)
    extrwi r25, r0, 3, 17
    extrwi r24, r0, 3, 14
    b lbl_802E3B68
lbl_802E3B5C:
    lwz r0, 0x170(r29)
    extrwi r25, r0, 3, 11
    extrwi r24, r0, 3, 8
lbl_802E3B68:
    lwz r3, 0x5e4(r29)
    slw r0, r23, r24
    and. r0, r3, r0
    bne lbl_802E3B84
    mr r3, r25
    mr r4, r24
    bl __SetSURegs
lbl_802E3B84:
    addi r28, r28, 0x1
lbl_802E3B88:
    cmplw r28, r27
    blt lbl_802E3B04
    lwz r28, __GXData
    li r27, 0x0
    li r23, 0x1
    mr r31, r28
    addi r30, r28, 0x150
    b lbl_802E3C0C
lbl_802E3BA8:
    clrlwi. r0, r27, 31
    lwz r0, 0x5a4(r31)
    extlwi r3, r27, 30, 1
    rlwinm r25, r0, 0, 24, 22
    beq lbl_802E3BC8
    lwzx r0, r30, r3
    extrwi r24, r0, 3, 14
    b lbl_802E3BD0
lbl_802E3BC8:
    lwzx r0, r30, r3
    extrwi r24, r0, 3, 26
lbl_802E3BD0:
    cmplwi r25, 0xff
    beq lbl_802E3C04
    lwz r3, 0x5e4(r29)
    slw r0, r23, r24
    and. r0, r3, r0
    bne lbl_802E3C04
    lwz r3, 0x5e8(r28)
    slw r0, r23, r27
    and. r0, r3, r0
    beq lbl_802E3C04
    mr r3, r25
    mr r4, r24
    bl __SetSURegs
lbl_802E3C04:
    addi r31, r31, 0x4
    addi r27, r27, 0x1
lbl_802E3C0C:
    cmplw r27, r26
    blt lbl_802E3BA8
lbl_802E3C14:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __GXSetTmemConfig
asm void __GXSetTmemConfig(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r3, 0x1
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_802E3D5C
    bge lbl_802E3C48
    b lbl_802E3E68
lbl_802E3C48:
    cmpwi r3, 0x3
    bge lbl_802E3E68
    lis r3, 0xcc01
    li r0, 0x61
    lis r4, 0x8c0e
    stb r0, -0x8000(r3)
    addi r4, r4, -0x8000
    lis r5, 0x900e
    stw r4, -0x8000(r3)
    lis r4, 0x8d0e
    lis r31, 0x910e
    lis r30, 0x8e0e
    stb r0, -0x8000(r3)
    subi r5, r5, 0x4000
    lis r12, 0x920e
    lis r11, 0x8f0e
    stw r5, -0x8000(r3)
    lis r10, 0x930e
    lis r9, 0xac0e
    lis r8, 0xb00e
    stb r0, -0x8000(r3)
    subi r4, r4, 0x7800
    lis r7, 0xad0e
    lis r6, 0xb10e
    stw r4, -0x8000(r3)
    lis r5, 0xae0e
    lis r4, 0xb20e
    subi r31, r31, 0x3800
    stb r0, -0x8000(r3)
    subi r30, r30, 0x7000
    subi r12, r12, 0x3000
    subi r11, r11, 0x6800
    stw r31, -0x8000(r3)
    subi r10, r10, 0x2800
    subi r9, r9, 0x6000
    subi r8, r8, 0x3c00
    stb r0, -0x8000(r3)
    subi r7, r7, 0x5800
    subi r6, r6, 0x3400
    subi r5, r5, 0x5000
    stw r30, -0x8000(r3)
    subi r4, r4, 0x2c00
    stb r0, -0x8000(r3)
    stw r12, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r11, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r10, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r9, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r8, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r7, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r6, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r5, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lis r5, 0xaf0e
    lis r4, 0xb30e
    subi r5, r5, 0x4800
    stw r5, -0x8000(r3)
    subi r4, r4, 0x2400
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    b lbl_802E3F70
lbl_802E3D5C:
    lis r3, 0xcc01
    li r0, 0x61
    lis r4, 0x8c0e
    stb r0, -0x8000(r3)
    addi r4, r4, -0x8000
    lis r5, 0x900e
    stw r4, -0x8000(r3)
    lis r4, 0x8d0e
    lis r31, 0x910e
    lis r30, 0x8e0e
    stb r0, -0x8000(r3)
    subi r5, r5, 0x4000
    lis r12, 0x920e
    lis r11, 0x8f0e
    stw r5, -0x8000(r3)
    lis r10, 0x930e
    lis r9, 0xac0e
    lis r8, 0xb00e
    stb r0, -0x8000(r3)
    subi r4, r4, 0x7800
    lis r7, 0xad0e
    lis r6, 0xb10e
    stw r4, -0x8000(r3)
    lis r5, 0xae0e
    lis r4, 0xb20e
    subi r31, r31, 0x3800
    stb r0, -0x8000(r3)
    subi r30, r30, 0x7000
    subi r12, r12, 0x3000
    subi r11, r11, 0x6800
    stw r31, -0x8000(r3)
    subi r10, r10, 0x2800
    subi r9, r9, 0x6000
    subi r8, r8, 0x2000
    stb r0, -0x8000(r3)
    subi r7, r7, 0x5800
    subi r6, r6, 0x1800
    subi r5, r5, 0x5000
    stw r30, -0x8000(r3)
    subi r4, r4, 0x1000
    stb r0, -0x8000(r3)
    stw r12, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r11, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r10, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r9, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r8, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r7, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r6, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r5, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lis r5, 0xaf0e
    lis r4, 0xb30e
    subi r5, r5, 0x4800
    stw r5, -0x8000(r3)
    subi r4, r4, 0x800
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    b lbl_802E3F70
lbl_802E3E68:
    lis r3, 0xcc01
    li r0, 0x61
    lis r4, 0x8c0e
    stb r0, -0x8000(r3)
    addi r4, r4, -0x8000
    lis r5, 0x900e
    stw r4, -0x8000(r3)
    lis r4, 0x8d0e
    lis r30, 0x910e
    lis r31, 0x8e0e
    stb r0, -0x8000(r3)
    subi r5, r5, 0x4000
    lis r12, 0x920e
    lis r11, 0x8f0e
    stw r5, -0x8000(r3)
    lis r10, 0x930e
    lis r9, 0xac0e
    lis r8, 0xb00e
    stb r0, -0x8000(r3)
    subi r4, r4, 0x7c00
    lis r7, 0xad0e
    lis r6, 0xb10e
    stw r4, -0x8000(r3)
    lis r5, 0xae0e
    lis r4, 0xb20e
    subi r30, r30, 0x3c00
    stb r0, -0x8000(r3)
    subi r31, r31, 0x7800
    subi r12, r12, 0x3800
    subi r11, r11, 0x7400
    stw r30, -0x8000(r3)
    subi r10, r10, 0x3400
    subi r9, r9, 0x7000
    subi r8, r8, 0x3000
    stb r0, -0x8000(r3)
    subi r7, r7, 0x6c00
    subi r6, r6, 0x2c00
    subi r5, r5, 0x6800
    stw r31, -0x8000(r3)
    subi r4, r4, 0x2800
    stb r0, -0x8000(r3)
    stw r12, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r11, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r10, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r9, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r8, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r7, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r6, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r5, -0x8000(r3)
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
    stb r0, -0x8000(r3)
    lis r5, 0xaf0e
    lis r4, 0xb30e
    subi r5, r5, 0x6400
    stw r5, -0x8000(r3)
    subi r4, r4, 0x2400
    stb r0, -0x8000(r3)
    stw r4, -0x8000(r3)
lbl_802E3F70:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E3F80
asm void fn_802E3F80() {
    nofralloc
    stwu r1, -0x10(r1)
    li r12, 0x0
    rlwimi r12, r4, 0, 30, 31
    addi r4, r3, 0x10
    stw r31, 0xc(r1)
    rlwimi r12, r5, 2, 28, 29
    lis r11, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r11)
    rlwimi r12, r6, 4, 25, 27
    lwz r31, 0x1c(r1)
    li r0, 0x0
    lbz r5, 0x1b(r1)
    rlwimi r12, r31, 7, 23, 24
    lwz r3, __GXData
    rlwimi r12, r7, 9, 19, 22
    rlwimi r12, r8, 13, 16, 18
    rlwimi r12, r9, 16, 13, 15
    rlwimi r12, r5, 19, 12, 12
    rlwimi r12, r10, 20, 11, 11
    rlwimi r12, r4, 24, 0, 7
    stw r12, -0x8000(r11)
    sth r0, 0x2(r3)
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E3FE8
asm void fn_802E3FE8(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    cmpwi r3, 0x8
    stwu r1, -0x40(r1)
    beq lbl_802E4034
    bge lbl_802E4010
    cmpwi r3, 0x4
    beq lbl_802E4034
    bge lbl_802E4024
    cmpwi r3, 0x1
    bge lbl_802E401C
    b lbl_802E4034
lbl_802E4010:
    cmpwi r3, 0xc
    bge lbl_802E4034
    b lbl_802E402C
lbl_802E401C:
    subi r3, r3, 0x1
    b lbl_802E4038
lbl_802E4024:
    subi r3, r3, 0x5
    b lbl_802E4038
lbl_802E402C:
    subi r3, r3, 0x9
    b lbl_802E4038
lbl_802E4034:
    li r3, 0x0
lbl_802E4038:
    lfs f6, lbl_804A2618
    slwi r0, r3, 2
    lfs f1, 0x0(r4)
    subf r9, r3, r0
    lfs f0, 0xc(r4)
    addi r8, r5, 0x11
    fmuls f1, f6, f1
    lfs f3, 0x4(r4)
    fmuls f0, f6, f0
    lfs f2, 0x10(r4)
    fmuls f3, f6, f3
    lis r6, 0xcc01
    fctiwz f5, f1
    lfs f1, 0x8(r4)
    fctiwz f4, f0
    lfs f0, 0x14(r4)
    fmuls f2, f6, f2
    li r7, 0x61
    stfd f5, 0x8(r1)
    fctiwz f3, f3
    fmuls f1, f6, f1
    li r5, 0x0
    lwz r0, 0xc(r1)
    fctiwz f2, f2
    fmuls f0, f6, f0
    fctiwz f1, f1
    stfd f4, 0x10(r1)
    rlwimi r5, r0, 0, 21, 31
    fctiwz f0, f0
    addi r3, r9, 0x6
    lwz r0, 0x14(r1)
    stfd f3, 0x18(r1)
    li r4, 0x0
    rlwimi r5, r0, 11, 10, 20
    lwz r0, 0x1c(r1)
    rlwimi r5, r8, 22, 8, 9
    rlwimi r5, r3, 24, 0, 7
    stb r7, -0x8000(r6)
    rlwimi r4, r0, 0, 21, 31
    addi r3, r9, 0x7
    stw r5, -0x8000(r6)
    li r5, 0x0
    stfd f2, 0x20(r1)
    lwz r0, 0x24(r1)
    stfd f1, 0x28(r1)
    rlwimi r4, r0, 11, 10, 20
    lwz r0, 0x2c(r1)
    rlwimi r4, r8, 20, 8, 9
    rlwimi r4, r3, 24, 0, 7
    stb r7, -0x8000(r6)
    rlwimi r5, r0, 0, 21, 31
    lwz r3, __GXData
    stw r4, -0x8000(r6)
    addi r4, r9, 0x8
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stb r7, -0x8000(r6)
    rlwimi r5, r0, 11, 10, 20
    li r0, 0x0
    rlwimi r5, r8, 18, 8, 9
    rlwimi r5, r4, 24, 0, 7
    stw r5, -0x8000(r6)
    sth r0, 0x2(r3)
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_802E413C
asm void fn_802E413C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    cmpwi r3, 0x2
    beq lbl_802E41CC
    bge lbl_802E4158
    cmpwi r3, 0x0
    beq lbl_802E4164
    bge lbl_802E4198
    b lbl_802E4230
lbl_802E4158:
    cmpwi r3, 0x4
    bge lbl_802E4230
    b lbl_802E4200
lbl_802E4164:
    lwz r8, __GXData
    li r6, 0x25
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x178(r8)
    rlwimi r7, r4, 0, 28, 31
    rlwimi r7, r5, 4, 24, 27
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x178(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x178(r8)
    stw r0, -0x8000(r3)
    b lbl_802E4230
lbl_802E4198:
    lwz r8, __GXData
    li r6, 0x25
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x178(r8)
    rlwimi r7, r4, 8, 20, 23
    rlwimi r7, r5, 12, 16, 19
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x178(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x178(r8)
    stw r0, -0x8000(r3)
    b lbl_802E4230
lbl_802E41CC:
    lwz r8, __GXData
    li r6, 0x26
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x17c(r8)
    rlwimi r7, r4, 0, 28, 31
    rlwimi r7, r5, 4, 24, 27
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x17c(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x17c(r8)
    stw r0, -0x8000(r3)
    b lbl_802E4230
lbl_802E4200:
    lwz r8, __GXData
    li r6, 0x26
    lis r3, 0xcc01
    li r0, 0x61
    lwz r7, 0x17c(r8)
    rlwimi r7, r4, 8, 20, 23
    rlwimi r7, r5, 12, 16, 19
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x17c(r8)
    stb r0, -0x8000(r3)
    lwz r0, 0x17c(r8)
    stw r0, -0x8000(r3)
lbl_802E4230:
    lwz r3, __GXData
    li r0, 0x0
    sth r0, 0x2(r3)
    blr
}

// asm_to_cpp: fn_802E4240
asm void fn_802E4240(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    cmpwi r5, 0xff
    bne lbl_802E424C
    li r5, 0x0
lbl_802E424C:
    cmpwi r4, 0xff
    bne lbl_802E4258
    li r4, 0x0
lbl_802E4258:
    cmpwi r3, 0x2
    beq lbl_802E42B0
    bge lbl_802E4274
    cmpwi r3, 0x0
    beq lbl_802E4280
    bge lbl_802E4298
    b lbl_802E42DC
lbl_802E4274:
    cmpwi r3, 0x4
    bge lbl_802E42DC
    b lbl_802E42C8
lbl_802E4280:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 0, 29, 31
    rlwimi r0, r4, 3, 26, 28
    stw r0, 0x170(r3)
    b lbl_802E42DC
lbl_802E4298:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 6, 23, 25
    rlwimi r0, r4, 9, 20, 22
    stw r0, 0x170(r3)
    b lbl_802E42DC
lbl_802E42B0:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 12, 17, 19
    rlwimi r0, r4, 15, 14, 16
    stw r0, 0x170(r3)
    b lbl_802E42DC
lbl_802E42C8:
    lwz r3, __GXData
    lwz r0, 0x170(r3)
    rlwimi r0, r5, 18, 11, 13
    rlwimi r0, r4, 21, 8, 10
    stw r0, 0x170(r3)
lbl_802E42DC:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x170(r5)
    stw r3, -0x8000(r4)
    lwz r3, 0x5fc(r5)
    ori r3, r3, 0x3
    stw r3, 0x5fc(r5)
    sth r0, 0x2(r5)
    blr
}

// asm_to_cpp: fn_802E430C
asm void fn_802E430C(s32 arg0) {
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x254(r4)
    rlwimi r0, r3, 16, 13, 15
    stw r0, 0x254(r4)
    lwz r0, 0x5fc(r4)
    ori r0, r0, 0x6
    stw r0, 0x5fc(r4)
    blr
}

// asm_to_cpp: fn_802E432C
asm void fn_802E432C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x8(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    stw r0, 0xc(r1)
    bl fn_802E3F80
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __GXSetIndirectMask
asm void __GXSetIndirectMask(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    lwz r7, __GXData
    lis r4, 0xcc01
    li r5, 0x61
    li r0, 0x0
    lwz r6, 0x174(r7)
    rlwimi r6, r3, 0, 24, 31
    stw r6, 0x174(r7)
    stb r5, -0x8000(r4)
    lwz r3, 0x174(r7)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r7)
    blr
}

// asm_to_cpp: __GXFlushTextureState
asm void __GXFlushTextureState(void) {
    nofralloc
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x174(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

// asm_to_cpp: fn_802E43CC
asm void fn_802E43CC(s32 arg0, s32 arg1) {
    nofralloc
    cmpwi r3, 0x0
    lis r5, lbl_8037B0E0@ha
    addi r5, r5, lbl_8037B0E0@l
    bne lbl_802E43F4
    slwi r6, r4, 2
    addi r4, r5, 0x0
    addi r0, r5, 0x28
    add r8, r4, r6
    add r9, r0, r6
    b lbl_802E4408
lbl_802E43F4:
    slwi r6, r4, 2
    addi r4, r5, 0x14
    addi r0, r5, 0x3c
    add r8, r4, r6
    add r9, r0, r6
lbl_802E4408:
    lwz r7, __GXData
    slwi r0, r3, 2
    lwz r3, 0x0(r8)
    lis r4, 0xcc01
    add r6, r7, r0
    li r5, 0x61
    lwz r8, 0x180(r6)
    li r0, 0x0
    stb r5, -0x8000(r4)
    clrrwi r8, r8, 24
    rlwimi r8, r3, 0, 8, 31
    stw r8, -0x8000(r4)
    stw r8, 0x180(r6)
    lwz r8, 0x1c0(r6)
    lwz r3, 0x0(r9)
    rlwinm r8, r8, 0, 28, 7
    stb r5, -0x8000(r4)
    rlwimi r8, r3, 0, 8, 27
    stw r8, -0x8000(r4)
    stw r8, 0x1c0(r6)
    sth r0, 0x2(r7)
    blr
}

// asm_to_cpp: fn_802E4460
asm void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    lwz r11, __GXData
    slwi r0, r3, 2
    lis r3, 0xcc01
    li r8, 0x61
    add r10, r11, r0
    li r0, 0x0
    lwz r9, 0x180(r10)
    rlwimi r9, r4, 12, 16, 19
    rlwimi r9, r5, 8, 20, 23
    stb r8, -0x8000(r3)
    rlwimi r9, r6, 4, 24, 27
    rlwimi r9, r7, 0, 28, 31
    stw r9, -0x8000(r3)
    stw r9, 0x180(r10)
    sth r0, 0x2(r11)
    blr
}

// asm_to_cpp: fn_802E44A0
asm void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    lwz r11, __GXData
    slwi r0, r3, 2
    lis r3, 0xcc01
    li r8, 0x61
    add r10, r11, r0
    li r0, 0x0
    lwz r9, 0x1c0(r10)
    rlwimi r9, r4, 13, 16, 18
    rlwimi r9, r5, 10, 19, 21
    stb r8, -0x8000(r3)
    rlwimi r9, r6, 7, 22, 24
    rlwimi r9, r7, 4, 25, 27
    stw r9, -0x8000(r3)
    stw r9, 0x1c0(r10)
    sth r0, 0x2(r11)
    blr
}

// asm_to_cpp: fn_802E44E0
asm void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    lwz r10, __GXData
    slwi r0, r3, 2
    cmpwi r4, 0x1
    add r9, r10, r0
    lwz r11, 0x180(r9)
    rlwimi r11, r4, 18, 13, 13
    bgt lbl_802E4508
    rlwimi r11, r6, 20, 10, 11
    rlwimi r11, r5, 16, 14, 15
    b lbl_802E4510
lbl_802E4508:
    rlwimi r11, r4, 19, 10, 11
    oris r11, r11, 0x3
lbl_802E4510:
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    rlwimi r11, r7, 19, 12, 12
    rlwimi r11, r8, 22, 8, 9
    li r0, 0x0
    stw r11, -0x8000(r3)
    stw r11, 0x180(r9)
    sth r0, 0x2(r10)
    blr
}

// asm_to_cpp: fn_802E4538
asm void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    lwz r10, __GXData
    slwi r0, r3, 2
    cmpwi r4, 0x1
    add r9, r10, r0
    lwz r11, 0x1c0(r9)
    rlwimi r11, r4, 18, 13, 13
    bgt lbl_802E4560
    rlwimi r11, r6, 20, 10, 11
    rlwimi r11, r5, 16, 14, 15
    b lbl_802E4568
lbl_802E4560:
    rlwimi r11, r4, 19, 10, 11
    oris r11, r11, 0x3
lbl_802E4568:
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    rlwimi r11, r7, 19, 12, 12
    rlwimi r11, r8, 22, 8, 9
    li r0, 0x0
    stw r11, -0x8000(r3)
    stw r11, 0x1c0(r9)
    sth r0, 0x2(r10)
    blr
}

// asm_to_cpp: fn_802E4590
asm void fn_802E4590(s32 arg0, u32 *arg1) {
    nofralloc
    slwi r3, r3, 1
    lwz r8, 0x0(r4)
    addi r0, r3, 0xe0
    lis r4, 0xcc01
    slwi r7, r0, 24
    li r5, 0x61
    rlwimi r7, r8, 8, 24, 31
    stb r5, -0x8000(r4)
    rlwimi r7, r8, 12, 12, 19
    addi r0, r3, 0xe1
    stw r7, -0x8000(r4)
    slwi r6, r0, 24
    rlwimi r6, r8, 24, 24, 31
    lwz r3, __GXData
    stb r5, -0x8000(r4)
    rlwimi r6, r8, 28, 12, 19
    li r0, 0x0
    stw r6, -0x8000(r4)
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    stb r5, -0x8000(r4)
    stw r6, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}

// asm_to_cpp: GXSetTexCoordCylWrap
asm void GXSetTexCoordCylWrap(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    slwi r3, r3, 1
    lwz r8, 0x0(r4)
    addi r0, r3, 0xe0
    lis r5, 0xcc01
    slwi r7, r0, 24
    li r6, 0x61
    lwz r9, 0x4(r4)
    rlwimi r7, r8, 16, 21, 31
    stb r6, -0x8000(r5)
    addi r0, r3, 0xe1
    rlwimi r7, r9, 12, 9, 19
    lwz r3, __GXData
    slwi r4, r0, 24
    stw r7, -0x8000(r5)
    rlwimi r4, r9, 16, 21, 31
    li r0, 0x0
    stb r6, -0x8000(r5)
    rlwimi r4, r8, 12, 9, 19
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    stw r4, -0x8000(r5)
    sth r0, 0x2(r3)
    blr
}

// asm_to_cpp: fn_802E4654
asm void fn_802E4654(s32 arg0, u32 *arg1) {
    nofralloc
    slwi r6, r3, 1
    lwz r9, 0x0(r4)
    addi r3, r6, 0xe0
    lis r4, 0xcc01
    slwi r8, r3, 24
    li r5, 0x61
    rlwimi r8, r9, 8, 24, 31
    stb r5, -0x8000(r4)
    li r7, 0x8
    addi r0, r6, 0xe1
    rlwimi r8, r9, 12, 12, 19
    lwz r3, __GXData
    slwi r6, r0, 24
    li r0, 0x0
    rlwimi r8, r7, 20, 8, 11
    stw r8, -0x8000(r4)
    rlwimi r6, r9, 24, 24, 31
    rlwimi r6, r9, 28, 12, 19
    stb r5, -0x8000(r4)
    rlwimi r6, r7, 20, 8, 11
    stw r6, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}

// asm_to_cpp: fn_802E46B0
asm void fn_802E46B0(s32 arg0, s32 arg1) {
    nofralloc
    clrlwi. r0, r3, 31
    lwz r5, __GXData
    extlwi r0, r3, 30, 1
    add r3, r5, r0
    beq lbl_802E46D4
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 14, 13, 17
    stw r0, 0x200(r3)
    b lbl_802E46E0
lbl_802E46D4:
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 4, 23, 27
    stw r0, 0x200(r3)
lbl_802E46E0:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r3, 0x200(r3)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

// asm_to_cpp: fn_802E4700
asm void fn_802E4700(s32 arg0, s32 arg1) {
    nofralloc
    clrlwi. r0, r3, 31
    lwz r5, __GXData
    extlwi r0, r3, 30, 1
    add r3, r5, r0
    beq lbl_802E4724
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 19, 8, 12
    stw r0, 0x200(r3)
    b lbl_802E4730
lbl_802E4724:
    lwz r0, 0x200(r3)
    rlwimi r0, r4, 9, 18, 22
    stw r0, 0x200(r3)
lbl_802E4730:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r3, 0x200(r3)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

// asm_to_cpp: fn_802E4750
asm void fn_802E4750(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    lwz r9, __GXData
    slwi r0, r3, 2
    lis r6, 0xcc01
    li r3, 0x61
    add r8, r9, r0
    li r0, 0x0
    lwz r7, 0x1c0(r8)
    rlwimi r7, r4, 0, 30, 31
    rlwimi r7, r5, 2, 28, 29
    stw r7, 0x1c0(r8)
    stb r3, -0x8000(r6)
    lwz r3, 0x1c0(r8)
    stw r3, -0x8000(r6)
    sth r0, 0x2(r9)
    blr
}

// asm_to_cpp: GXSetTexCoordScaleManually
asm void GXSetTexCoordScaleManually(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x10(r1)
    slwi r11, r3, 3
    slwi r12, r3, 1
    lis r8, 0xcc01
    stw r31, 0xc(r1)
    li r9, 0x61
    addi r3, r12, 0x1
    li r0, 0x0
    stw r30, 0x8(r1)
    lwz r30, __GXData
    addi r31, r30, 0x200
    lwzx r10, r31, r11
    rlwimi r10, r4, 0, 30, 31
    rlwimi r10, r5, 2, 28, 29
    slwi r4, r3, 2
    stwx r10, r31, r11
    stb r9, -0x8000(r8)
    lwzx r3, r31, r11
    stw r3, -0x8000(r8)
    lwzx r3, r31, r4
    rlwimi r3, r6, 0, 30, 31
    rlwimi r3, r7, 2, 28, 29
    stwx r3, r31, r4
    stb r9, -0x8000(r8)
    lwzx r3, r31, r4
    stw r3, -0x8000(r8)
    sth r0, 0x2(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}
