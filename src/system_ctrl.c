#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK fn_80173580();           /* extern */
M2C_UNK memcpy();            /* extern */
M2C_UNK memset();           /* extern */
extern f64 lbl_80339720;
extern M2C_UNK lbl_80390580;
extern M2C_UNK lbl_803906D0;
extern s32 lbl_803909E8;
extern M2C_UNK lbl_80390A10;
extern M2C_UNK lbl_80395728;
extern M2C_UNK lbl_803C1A40;
extern M2C_UNK lbl_8040020F;
extern f32 lbl_8049F0B8;

s32 fn_8006EEA8();
void fn_8006F07C();
s32 fn_8006F0E8();
s32 fn_8006F2B4();
s32 fn_8006F410();
s32 fn_8006F440();
void fn_8006F56C();
void fn_8006F980();
f32 fn_8006F9CC();
s32 fn_8006FAB0();
void fn_8006FAB8();
void fn_8006FC74();
void fn_80070280();
s32 fn_8007037C();
void fn_80070450();
void fn_800704A4();
void fn_800704F8();
s32 fn_8007054C();
void fn_80070644();
void fn_80070698();
void fn_800706EC();
void fn_80070760();
s32 fn_800707D8();
void fn_800707EC();
s32 fn_800708FC();
void fn_80070910();
void fn_8007092C();
s32 fn_8007093C();
void fn_80070958();
s32 fn_80070C18();
s32 fn_80070C84();
s32 fn_80070DA0();
void fn_80070DD0();
s32 fn_80070F4C();
void fn_80071028();
void fn_800711E8();
void fn_800718A0();
void fn_80071944();
void fn_80071CA8();
void fn_80071F80();
void fn_80071FB4();
void fn_80071FD0();
s32 fn_80072A10();
void fn_80072A30();
void fn_80072A6C();
void fn_80072A84();
void fn_80072AA0();
void fn_80072AC0();

s32 fn_8006EEA8(f32 *arg0, s32 *arg1, s32 *arg2, f32 *arg3, f32 *arg4);

// fn_8006F07C: definicion C reemplazada por asm (ver abajo)


// fn_8006F0E8: definicion C reemplazada por asm (ver abajo)


// fn_8006F2B4: definicion C reemplazada por asm (ver abajo)


// fn_8006F410: definicion C reemplazada por asm (ver abajo)


s32 fn_8006F440(s32 **arg0);

void fn_8006F56C(s8 *arg0, s32 arg1, s32 arg2);

void fn_8006F980(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x800000);
    fn_80182518(M2C_FIELD(arg0, s8 **, 0x377C), arg0 + 0x84);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x04000000);
}

f32 fn_8006F9CC(s8 *arg0, s8 *arg1, u8 *arg2, u8 *arg3);

s32 fn_8006FAB0(s32 arg0, s32 arg1) {
    return 0;
}

// fn_8006FAB8: definicion C reemplazada por asm (ver abajo)


void fn_8006FC74(s8 *arg0, s32 arg1, s32 arg2);

// fn_80070280: definicion C reemplazada por asm (ver abajo)



// fn_80070450: definicion C reemplazada por asm (ver abajo)


// fn_800704A4: definicion C reemplazada por asm (ver abajo)


// fn_800704F8: definicion C reemplazada por asm (ver abajo)



// fn_80070644: definicion C reemplazada por asm (ver abajo)


// fn_80070698: definicion C reemplazada por asm (ver abajo)


// fn_800706EC: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_80070740:

Cannot find branch target fn_8007093C
*/

// fn_80070760: definicion C reemplazada por asm (ver abajo)


// fn_800707D8: definicion C reemplazada por asm (ver abajo)


void fn_800707EC(f32 *arg0, f32 *arg1, f32 *arg2, s32 *arg3, M2C_UNK arg_sp0);

// fn_800708FC: definicion C reemplazada por asm (ver abajo)


// fn_80070910: definicion C reemplazada por asm (ver abajo)


void fn_8007092C(s32 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

// fn_8007093C: definicion C reemplazada por asm (ver abajo)


void fn_80070958(s32 *arg0, M2C_UNK arg_sp0);

// fn_80070C18: definicion C reemplazada por asm (ver abajo)


s32 fn_80070C84(s32 *arg0, s32 arg1, s32 *arg2, f32 *arg3);


void fn_80070DD0(s32 *arg0, s32 *arg1, s32 arg2, s32 *arg3, f32 *arg4, s32 arg5, s32 *arg6, f32 *arg7, M2C_UNK arg_sp0);

s32 fn_80070F4C(s32 *arg0, s32 *arg1, f32 *arg2, f32 *arg3, s32 arg4, s32 *arg5, f32 *arg6, s32 arg7, M2C_UNK arg_sp0);

void fn_80071028(s32 *arg0);

void fn_800711E8(s32 *arg0, s32 arg1, M2C_UNK arg_sp0);

// fn_800718A0: definicion C reemplazada por asm (ver abajo)


void fn_80071944(s32 arg0, s8 *arg1, s8 *arg2, M2C_UNK arg_sp0);

void fn_80071CA8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, M2C_UNK arg_sp0);

// fn_80071F80: definicion C reemplazada por asm (ver abajo)


void fn_80071FB4(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x13E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x13E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x13EC) = -1;
    fn_80071F80(arg0 + 0xEC0);
}

void fn_80071FD0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C0) = arg1;
}

/*
Decompilation failure in function fn_80071FD8:

Found bctr instruction at system_ctrl.s line 4336, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s32 fn_80072A10(s8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 0x5C) + arg1;
    }
    return 0;
}

// fn_80072A30: definicion C reemplazada por asm (ver abajo)


void fn_80072A6C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xEB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xEB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xEB8) = 0;
    fn_80072A30(arg0 + 0xBAC);
}

void fn_80072A84(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x15FC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1600) = -1;
    M2C_FIELD(arg0, s32 *, 0x1608) = 0;
    M2C_FIELD(arg0, s32 *, 0x1610) = -1;
}

void fn_80072AA0(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x162C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1630) = -1;
    M2C_FIELD(arg0, s32 *, 0x1634) = 0;
    M2C_FIELD(arg0, f32 *, 0x1638) = (f32) lbl_8049F0B8;
}

void fn_80072AC0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xEAC) = arg1;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049F010;
extern float lbl_8049F018;
extern float lbl_8049F058;
extern float lbl_8049F078;
extern float lbl_8049F080;
extern float lbl_8049F098;
extern float lbl_8049F0A0;
extern u8 jumptable_8034AEB0[];
extern u8 jumptable_8034AEDC[];
extern u8 jumptable_8034AF08[];
extern void _restgpr_14();
extern void _restgpr_16();
extern void _restgpr_18();
extern void _restgpr_22();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_14();
extern void _savegpr_16();
extern void _savegpr_18();
extern void _savegpr_22();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_26();
extern void _savegpr_27();
extern void _savegpr_28();
extern void _savegpr_29();
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B08();
extern void fn_8001B8B8();
extern void fn_8001B978();
extern void fn_8001D9D0();
extern void fn_800340D8();
extern void fn_80034178();
extern void fn_800401B8();
extern void fn_800602FC();
extern void fn_80061FA0();
extern void fn_8006A3D8();
extern void fn_8006AA78();
s32 fn_8006EEA8();
void fn_8006F07C(s8 *arg0, s8 *arg1);
s32 fn_8006F0E8(s32 **arg0, s8 *arg1);
s32 fn_8006F2B4(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8006F410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8006F440();
void fn_8006F56C();
f32 fn_8006F9CC();
void fn_8006FAB8(s8 *arg0, s32 arg1, s32 arg2);
void fn_8006FC74();
void fn_80070280(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8007037C();
void fn_80070450(s32 arg0, M2C_UNK arg_sp0);
void fn_800704A4(s32 arg0, M2C_UNK arg_sp0);
void fn_800704F8(s32 arg0, M2C_UNK arg_sp0);
s32 fn_8007054C();
void fn_80070644(s32 arg0, M2C_UNK arg_sp0);
void fn_80070698(s32 arg0, M2C_UNK arg_sp0);
void fn_800706EC(s32 arg0, M2C_UNK arg_sp0);
extern int fn_80070740();
void fn_80070760(f32 *arg0, s32 *arg1);
s32 fn_800707D8(s32 *arg0);
void fn_800707EC();
s32 fn_800708FC(s32 *arg0);
void fn_80070910(s32 *arg0);
s32 fn_8007093C(s32 *arg0);
void fn_80070958();
s32 fn_80070C18(s32 *arg0, f32 *arg1, f32 *arg2, M2C_UNK arg_sp0);
s32 fn_80070C84();
s32 fn_80070DA0();
void fn_80070DD0();
s32 fn_80070F4C();
void fn_80071028();
void fn_800711E8();
void fn_800718A0(f32 *arg0, s32 arg1, s32 arg2);
void fn_80071944();
void fn_80071CA8();
void fn_80071F80(s8 *arg0);
extern int fn_80071FD8();
void fn_80072A30(s8 *arg0);
extern void fn_8007C560();
extern void fn_8007DB88();
extern void fn_8007DBF0();
extern void fn_800868F4();
extern void fn_80094AB4();
extern void fn_80182220();
extern void fn_80182600();
extern void fn_80182744();

// asm_to_cpp: fn_8006EEA8
asm s32 fn_8006EEA8() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r30, r5
    mr r29, r6
    mr r31, r7
    mr r3, r28
    bl fn_800707D8
    cmpwi r3, 0x0
    bne lbl_8006EF00
    li r3, 0x0
    b lbl_8006F040
lbl_8006EF00:
    mr r3, r30
    bl fn_800707D8
    cmpwi r3, 0x0
    bne lbl_8006EF18
    li r3, 0x0
    b lbl_8006F040
lbl_8006EF18:
    addi r3, r1, 0x38
    mr r4, r28
    bl fn_80070760
    addi r3, r1, 0x2c
    mr r4, r30
    bl fn_80070760
    lfs f1, 0x14(r28)
    lfs f0, 0x14(r30)
    fadds f29, f1, f0
    addi r30, r1, 0x14
    mr r3, r30
    mr r4, r31
    mr r5, r29
    bl fn_8001B8B8
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    mr r5, r30
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r1, 0x38
    addi r5, r1, 0x20
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    fcmpo cr0, f1, f29
    bge lbl_8006EF90
    lfs f0, lbl_8049F018
    stfs f0, 0x0(r27)
    li r3, 0x1
    b lbl_8006F040
lbl_8006EF90:
    mr r3, r30
    mr r4, r30
    bl fn_8001B8B4
    fmr f30, f1
    la r31, lbl_8049F018
    lfs f0, 0x14(r31)
    fcmpo cr0, f1, f0
    bge lbl_8006EFB8
    li r3, 0x0
    b lbl_8006F040
lbl_8006EFB8:
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_8001B8B4
    fmr f31, f1
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B4
    fmuls f0, f29, f29
    fsubs f0, f1, f0
    fmuls f1, f31, f31
    fmuls f0, f30, f0
    fsubs f1, f1, f0
    lfs f0, lbl_8049F018
    fcmpo cr0, f1, f0
    bge lbl_8006EFFC
    li r3, 0x0
    b lbl_8006F040
lbl_8006EFFC:
    bl fn_8001DA9C
    fsubs f0, f31, f1
    fdivs f1, f0, f30
    lfs f0, lbl_8049F018
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8006F020
    li r3, 0x0
    b lbl_8006F040
lbl_8006F020:
    lfs f0, 0x8(r31)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8006F038
    li r3, 0x0
    b lbl_8006F040
lbl_8006F038:
    stfs f1, 0x0(r27)
    li r3, 0x1
lbl_8006F040:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8006F07C
asm void fn_8006F07C(s8 *arg0, s8 *arg1) {
    nofralloc
    stw r4, 0x254(r3)
    li r5, 0x0
    stw r5, 0x240(r3)
    li r0, 0x200
    stw r0, 0x248(r3)
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006F0A8
    ori r0, r5, 0x800
    stw r0, 0x240(r3)
lbl_8006F0A8:
    lwz r4, 0x254(r3)
    lwz r0, 0x6c(r4)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_8006F0C8
    lwz r0, 0x240(r3)
    ori r0, r0, 0x2000
    stw r0, 0x240(r3)
lbl_8006F0C8:
    lwz r4, 0x254(r3)
    lwz r0, 0x50(r4)
    rlwinm r0, r0, 0, 14, 15
    cmpwi r0, 0x0
    beqlr
    li r0, 0x400
    stw r0, 0x248(r3)
    blr
}

// asm_to_cpp: fn_8006F0E8
asm s32 fn_8006F0E8(s32 **arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    mr r5, r4
    stw r4, 0x258(r3)
    li r0, 0x0
    stb r0, 0x250(r3)
    addi r3, r1, 0x14
    lwz r4, 0x254(r31)
    addi r4, r4, 0x84
    addi r5, r5, 0x84
    bl fn_8001B8B8
    addi r3, r1, 0x8
    lwz r4, 0x254(r31)
    addi r4, r4, 0x90
    lwz r5, 0x258(r31)
    addi r5, r5, 0x90
    bl fn_8001B8B8
    lfs f0, lbl_8049F018
    stfs f0, 0xc(r1)
    stfs f0, 0x18(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B4
    lfs f0, lbl_8049F018
    fcmpo cr0, f1, f0
    bge lbl_8006F164
    li r0, 0x1
    stb r0, 0x250(r31)
lbl_8006F164:
    lwz r5, 0x258(r31)
    lwz r0, 0x6c(r5)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8006F1FC
    li r0, 0x0
    stw r0, 0x244(r31)
    li r0, 0x200
    stw r0, 0x24c(r31)
    lbz r0, 0x250(r31)
    cmpwi r0, 0x0
    bne lbl_8006F1BC
    li r3, 0x0
    lwz r4, 0x254(r31)
    addi r4, r4, 0x7c8
    addi r5, r5, 0x7c8
    bl fn_8017D14C
    cmpwi r3, 0x0
    bne lbl_8006F1BC
    li r0, 0x2000
    stw r0, 0x24c(r31)
    b lbl_8006F280
lbl_8006F1BC:
    lwz r3, 0x258(r31)
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006F1DC
    lwz r0, 0x244(r31)
    ori r0, r0, 0x800
    stw r0, 0x244(r31)
lbl_8006F1DC:
    lwz r3, 0x258(r31)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_8006F280
    li r0, 0x400
    stw r0, 0x24c(r31)
    b lbl_8006F280
lbl_8006F1FC:
    lbz r0, 0x250(r31)
    cmpwi r0, 0x0
    bne lbl_8006F22C
    li r3, 0x0
    lwz r4, 0x254(r31)
    addi r4, r4, 0x7c8
    addi r5, r5, 0x7c8
    bl fn_8017D14C
    cmpwi r3, 0x0
    bne lbl_8006F22C
    li r3, 0x0
    b lbl_8006F2A0
lbl_8006F22C:
    li r4, 0x0
    stw r4, 0x244(r31)
    li r0, 0x200
    stw r0, 0x24c(r31)
    lwz r3, 0x258(r31)
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006F258
    ori r0, r4, 0x800
    stw r0, 0x244(r31)
lbl_8006F258:
    lwz r3, 0x258(r31)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_8006F274
    li r0, 0x400
    stw r0, 0x24c(r31)
lbl_8006F274:
    lwz r0, 0x244(r31)
    ori r0, r0, 0x2000
    stw r0, 0x244(r31)
lbl_8006F280:
    lbz r0, 0x250(r31)
    cmpwi r0, 0x0
    beq lbl_8006F298
    mr r3, r31
    bl fn_8006F440
    b lbl_8006F2A0
lbl_8006F298:
    mr r3, r31
    bl fn_8006F2B4
lbl_8006F2A0:
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8006F2B4
asm s32 fn_8006F2B4(s32 **arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r23, r3
    li r25, 0x0
    addi r3, r3, 0x200
    li r4, 0x0
    li r5, 0x40
    bl memset
    li r26, 0x0
    li r31, 0x0
    li r30, 0x0
lbl_8006F2EC:
    lwz r3, 0x254(r23)
    mr r4, r26
    lwz r5, 0x240(r23)
    lwz r6, 0x248(r23)
    bl fn_8006F410
    cmpwi r3, 0x0
    beq lbl_8006F3E0
    mr r3, r23
    li r4, 0x0
    li r5, 0x200
    bl memset
    li r24, 0x0
    li r27, 0x0
    li r29, 0x0
    li r28, 0x0
lbl_8006F328:
    lwz r3, 0x258(r23)
    mr r4, r27
    lwz r5, 0x244(r23)
    lwz r6, 0x24c(r23)
    bl fn_8006F410
    cmpwi r3, 0x0
    beq lbl_8006F374
    add r3, r23, r29
    lwz r0, 0x254(r23)
    add r4, r0, r31
    addi r4, r4, 0x7c8
    lwz r0, 0x258(r23)
    add r5, r0, r28
    addi r5, r5, 0x7c8
    bl fn_8017D14C
    cmpwi r3, 0x0
    beq lbl_8006F374
    li r25, 0x1
    li r24, 0x1
lbl_8006F374:
    addi r27, r27, 0x1
    addi r29, r29, 0x20
    addi r28, r28, 0x18
    cmpwi r27, 0x10
    blt lbl_8006F328
    cmpwi r24, 0x0
    beq lbl_8006F3E0
    li r27, 0x0
    li r29, 0x0
    add r28, r23, r30
lbl_8006F39C:
    lwz r3, 0x258(r23)
    mr r4, r27
    lwz r5, 0x244(r23)
    lwz r6, 0x24c(r23)
    bl fn_8006F410
    cmpwi r3, 0x0
    beq lbl_8006F3D0
    add r3, r23, r29
    lfs f1, 0x1c(r3)
    lfs f0, 0x200(r28)
    fcmpo cr0, f1, f0
    ble lbl_8006F3D0
    stfs f1, 0x200(r28)
lbl_8006F3D0:
    addi r27, r27, 0x1
    addi r29, r29, 0x20
    cmpwi r27, 0x10
    blt lbl_8006F39C
lbl_8006F3E0:
    addi r26, r26, 0x1
    addi r31, r31, 0x18
    addi r30, r30, 0x4
    cmpwi r26, 0x10
    blt lbl_8006F2EC
    mr r3, r25
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_8006F410(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD((arg0 + (arg1 * 0x18)), s32 *, 0x7C8);
    if ((s32) (arg2 & temp_r3) != 0) {
        return 0;
    }
    return (arg3 & temp_r3) != 0;
}

// asm_to_cpp: fn_8006F440
asm s32 fn_8006F440() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    lwz r5, 0x254(r3)
    addi r3, r1, 0x18
    addi r4, r5, 0x84
    addi r5, r5, 0x90
    bl fn_8001B8B8
    lwz r5, 0x258(r26)
    addi r3, r1, 0xc
    addi r4, r5, 0x84
    addi r5, r5, 0x90
    bl fn_8001B8B8
    la r3, lbl_8049F018
    lfs f31, 0x18(r3)
    li r29, 0x0
    li r28, 0x0
    li r31, 0x0
lbl_8006F49C:
    lwz r3, 0x254(r26)
    mr r4, r28
    lwz r5, 0x240(r26)
    lwz r6, 0x248(r26)
    bl fn_8006F410
    cmpwi r3, 0x0
    beq lbl_8006F530
    li r27, 0x0
    li r30, 0x0
lbl_8006F4C0:
    lwz r3, 0x258(r26)
    mr r4, r27
    lwz r5, 0x244(r26)
    lwz r6, 0x24c(r26)
    bl fn_8006F410
    cmpwi r3, 0x0
    beq lbl_8006F520
    addi r3, r1, 0x8
    lwz r0, 0x254(r26)
    add r4, r0, r31
    addi r4, r4, 0x7c8
    lwz r0, 0x258(r26)
    add r5, r0, r30
    addi r5, r5, 0x7c8
    addi r6, r1, 0x18
    addi r7, r1, 0xc
    bl fn_8006EEA8
    cmpwi r3, 0x0
    beq lbl_8006F520
    lfs f0, 0x8(r1)
    fcmpo cr0, f31, f0
    ble lbl_8006F51C
    fmr f31, f0
lbl_8006F51C:
    li r29, 0x1
lbl_8006F520:
    addi r27, r27, 0x1
    addi r30, r30, 0x18
    cmpwi r27, 0x10
    blt lbl_8006F4C0
lbl_8006F530:
    addi r28, r28, 0x1
    addi r31, r31, 0x18
    cmpwi r28, 0x10
    blt lbl_8006F49C
    stfs f31, 0x200(r26)
    mr r3, r29
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8006F56C
asm void fn_8006F56C() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r31, r3
    lbz r0, 0x250(r3)
    cmpwi r0, 0x0
    beq lbl_8006F5B0
    bl fn_8006FAB8
    b lbl_8006F944
lbl_8006F5B0:
    lfs f30, lbl_8049F018
    li r4, 0x0
    li r0, 0x10
    mtctr r0
lbl_8006F5C0:
    add r5, r3, r4
    lfs f0, 0x200(r5)
    fcmpo cr0, f0, f30
    ble lbl_8006F5D4
    fmr f30, f0
lbl_8006F5D4:
    addi r4, r4, 0x4
    bdnz lbl_8006F5C0
    lwz r4, 0x254(r3)
    lwz r3, 0x377c(r4)
    addi r4, r4, 0x84
    bl fn_80182744
    lwz r4, 0x258(r31)
    lwz r3, 0x377c(r4)
    addi r4, r4, 0x84
    bl fn_80182744
    lwz r3, 0x254(r31)
    lwz r4, 0x258(r31)
    bl fn_8006FAB0
    mr r30, r3
    lwz r3, 0x254(r31)
    lwz r4, 0x258(r31)
    addi r5, r1, 0x9
    addi r6, r1, 0x8
    bl fn_8006F9CC
    fmr f29, f1
    cmpwi r30, 0x0
    beq lbl_8006F640
    cmpwi r30, 0x1
    beq lbl_8006F6C0
    cmpwi r30, 0x2
    beq lbl_8006F79C
    b lbl_8006F91C
lbl_8006F640:
    addi r3, r1, 0xc
    lwz r4, 0x254(r31)
    addi r4, r4, 0x84
    lwz r5, 0x258(r31)
    addi r5, r5, 0x84
    bl fn_8001B8B8
    lfs f0, lbl_8049F018
    stfs f0, 0x10(r1)
    addi r3, r1, 0xc
    mr r4, r3
    bl fn_8001B978
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    fmuls f1, f30, f29
    bl fn_80018B08
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_8006F69C
    lwz r3, 0x254(r31)
    addi r3, r3, 0x84
    mr r4, r3
    addi r5, r1, 0x18
    bl fn_80018B00
lbl_8006F69C:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8006F91C
    lwz r3, 0x258(r31)
    addi r3, r3, 0x84
    mr r4, r3
    addi r5, r1, 0x18
    bl fn_8001B8B8
    b lbl_8006F91C
lbl_8006F6C0:
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_8006F714
    fmuls f30, f30, f1
    lwz r3, 0x254(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C2C
    fneg f0, f1
    fmuls f1, f30, f0
    lwz r3, 0x254(r31)
    lfs f0, 0x84(r3)
    fsubs f0, f0, f1
    stfs f0, 0x84(r3)
    lwz r3, 0x254(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C3C
    fmuls f1, f30, f1
    lwz r3, 0x254(r31)
    lfs f0, 0x8c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x8c(r3)
lbl_8006F714:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8006F91C
    lwz r4, 0x254(r31)
    lwz r3, 0x258(r31)
    lfs f1, 0xa0(r4)
    lfs f0, 0xa0(r3)
    fsubs f1, f1, f0
    bl fn_80018BD4
    la r3, lbl_8049F018
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8006F754
    lfs f0, 0x20(r3)
    fmuls f30, f30, f0
lbl_8006F754:
    lwz r3, 0x258(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C2C
    fneg f0, f1
    fmuls f1, f30, f0
    lwz r3, 0x258(r31)
    lfs f0, 0x84(r3)
    fsubs f0, f0, f1
    stfs f0, 0x84(r3)
    lwz r3, 0x258(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C3C
    fmuls f1, f30, f1
    lwz r3, 0x258(r31)
    lfs f0, 0x8c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x8c(r3)
    b lbl_8006F91C
lbl_8006F79C:
    addi r3, r1, 0xc
    lwz r4, 0x254(r31)
    addi r4, r4, 0x84
    lwz r5, 0x258(r31)
    addi r5, r5, 0x84
    bl fn_8001B8B8
    lfs f0, lbl_8049F018
    stfs f0, 0x10(r1)
    addi r3, r1, 0xc
    mr r4, r3
    bl fn_8001B978
    lfs f1, 0x14(r1)
    lfs f2, 0xc(r1)
    bl fn_80041264
    la r3, lbl_8049F018
    lfs f0, 0x24(r3)
    fmuls f31, f0, f1
    lfs f0, 0x28(r3)
    fadds f31, f31, f0
    lfs f0, 0x2c(r3)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_8006F800
    lfs f0, 0x30(r3)
    fsubs f31, f31, f0
lbl_8006F800:
    fmuls f30, f30, f29
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_8006F884
    lwz r3, 0x254(r31)
    lfs f0, 0xa0(r3)
    fsubs f1, f31, f0
    bl fn_80018BD4
    la r3, lbl_8049F018
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    ble lbl_8006F83C
    lfs f0, 0x20(r3)
    fmuls f29, f0, f30
    b lbl_8006F840
lbl_8006F83C:
    fmr f29, f30
lbl_8006F840:
    lwz r3, 0x254(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C2C
    fneg f0, f1
    fmuls f1, f29, f0
    lwz r3, 0x254(r31)
    lfs f0, 0x84(r3)
    fsubs f0, f0, f1
    stfs f0, 0x84(r3)
    lwz r3, 0x254(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C3C
    fmuls f1, f29, f1
    lwz r3, 0x254(r31)
    lfs f0, 0x8c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x8c(r3)
lbl_8006F884:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8006F91C
    la r3, lbl_8049F018
    lfs f0, 0x2c(r3)
    fadds f31, f31, f0
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_8006F8B0
    lfs f0, 0x30(r3)
    fsubs f31, f31, f0
lbl_8006F8B0:
    lwz r3, 0x258(r31)
    lfs f0, 0xa0(r3)
    fsubs f1, f31, f0
    bl fn_80018BD4
    la r3, lbl_8049F018
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    ble lbl_8006F8D8
    lfs f0, 0x20(r3)
    fmuls f30, f0, f30
lbl_8006F8D8:
    lwz r3, 0x258(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C2C
    fneg f0, f1
    fmuls f1, f30, f0
    lwz r3, 0x258(r31)
    lfs f0, 0x84(r3)
    fsubs f0, f0, f1
    stfs f0, 0x84(r3)
    lwz r3, 0x258(r31)
    lfs f1, 0xa0(r3)
    bl fn_80018C3C
    fmuls f1, f30, f1
    lwz r3, 0x258(r31)
    lfs f0, 0x8c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x8c(r3)
lbl_8006F91C:
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_8006F930
    lwz r3, 0x254(r31)
    bl fn_8006F980
lbl_8006F930:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8006F944
    lwz r3, 0x258(r31)
    bl fn_8006F980
lbl_8006F944:
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    li r0, 0x38
    opword 0x13A1000C
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

f32 fn_8006F9CC(s8 *arg0, s8 *arg1, u8 *arg2, u8 *arg3) {
    f32 var_f1;
    s32 temp_r3;
    s32 temp_r7;

    *arg2 = 1;
    *arg3 = 1;
    var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 4);
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x54) & 0x8000;
    if ((temp_r7 == 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0x54) & 0x8000) == 0)) {
        if (temp_r7 != 0) {
            *arg2 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
        if ((s32) (M2C_FIELD(arg1, s32 *, 0x54) & 0x8000) != 0) {
            *arg3 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x58) & 0x100;
    if ((temp_r3 == 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0x58) & 0x100) == 0)) {
        if (temp_r3 != 0) {
            *arg2 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
        if ((s32) (M2C_FIELD(arg1, s32 *, 0x58) & 0x100) != 0) {
            *arg3 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 0x1640) != 0) {
        *arg3 = 0;
        return M2C_FIELD(&lbl_8049F018, f32 *, 8);
    }
    return var_f1;
}

// asm_to_cpp: fn_8006FAB8
asm void fn_8006FAB8(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lfs f30, 0x200(r3)
    lwz r4, 0x254(r3)
    lwz r3, 0x377c(r4)
    addi r4, r4, 0x84
    bl fn_80182744
    lwz r4, 0x258(r30)
    lwz r3, 0x377c(r4)
    addi r4, r4, 0x84
    bl fn_80182744
    lwz r3, 0x254(r30)
    lwz r4, 0x258(r30)
    bl fn_8006FAB0
    lwz r3, 0x254(r30)
    lwz r4, 0x258(r30)
    addi r5, r1, 0x9
    addi r6, r1, 0x8
    bl fn_8006F9CC
    fmr f31, f1
    lwz r5, 0x254(r30)
    addi r3, r1, 0x18
    addi r4, r5, 0x90
    addi r5, r5, 0x84
    bl fn_8001B8B8
    lwz r5, 0x258(r30)
    addi r3, r1, 0xc
    addi r4, r5, 0x90
    addi r5, r5, 0x84
    bl fn_8001B8B8
    lfs f0, lbl_8049F018
    stfs f0, 0x1c(r1)
    stfs f0, 0x10(r1)
    addi r3, r1, 0x18
    mr r4, r3
    la r31, lbl_8049F018
    lfs f0, 0x8(r31)
    fsubs f1, f0, f30
    bl fn_80018B08
    addi r3, r1, 0xc
    mr r4, r3
    lfs f0, 0x8(r31)
    fsubs f1, f0, f30
    bl fn_80018B08
    lwz r3, 0x254(r30)
    addi r3, r3, 0x84
    mr r4, r3
    addi r5, r1, 0x18
    bl fn_80018B00
    lwz r3, 0x258(r30)
    addi r3, r3, 0x84
    mr r4, r3
    addi r5, r1, 0xc
    bl fn_80018B00
    addi r3, r1, 0x24
    addi r4, r1, 0x18
    addi r5, r1, 0xc
    bl fn_80018B00
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_8006FC1C
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8006FC1C
    addi r3, r1, 0x24
    mr r4, r3
    bl fn_8001B978
    addi r3, r1, 0x24
    mr r4, r3
    fmuls f1, f30, f31
    bl fn_80018B08
    lwz r3, 0x254(r30)
    addi r3, r3, 0x84
    mr r4, r3
    addi r5, r1, 0x24
    bl fn_80018B00
    lwz r3, 0x258(r30)
    addi r3, r3, 0x84
    mr r4, r3
    addi r5, r1, 0x24
    bl fn_8001B8B8
lbl_8006FC1C:
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_8006FC30
    lwz r3, 0x254(r30)
    bl fn_8006F980
lbl_8006FC30:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8006FC44
    lwz r3, 0x258(r30)
    bl fn_8006F980
lbl_8006FC44:
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8006FC74
asm void fn_8006FC74() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    stfd f28, 0x100(r1)
    opword 0xF3810108
    stfd f27, 0xf0(r1)
    opword 0xF36100F8
    stfd f26, 0xe0(r1)
    opword 0xF34100E8
    addi r11, r1, 0xe0
    bl _savegpr_16
    mr r30, r3
    lwz r5, 0x54(r3)
    lis r4, 0xffe0
    subi r0, r4, 0x3
    and r0, r5, r0
    stw r0, 0x54(r3)
    bl fn_800868D0
    cmpwi r3, 0x0
    beq lbl_80070220
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_80070220
    lwz r0, 0x70(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80070220
    lwz r3, 0x58(r30)
    rlwinm r0, r3, 0, 30, 30
    rlwimi r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_80070220
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_80070220
    lwz r0, 0x163c(r30)
    cmpwi r0, 0x0
    bne lbl_80070220
    li r22, 0x0
    li r21, 0x200
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006FD48
    ori r22, r22, 0x800
lbl_8006FD48:
    lwz r0, 0x6c(r30)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_8006FD5C
    ori r22, r22, 0x2000
lbl_8006FD5C:
    lwz r0, 0x50(r30)
    rlwinm r0, r0, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_8006FD70
    li r21, 0x400
lbl_8006FD70:
    li r19, 0x0
    li r29, 0x0
    la r3, lbl_8049F018
    lfs f30, 0x4(r3)
    lfs f31, lbl_8049F018
    lfd f28, lbl_8049F010
    lis r28, 0x4330
    lfs f29, 0x8(r3)
    lis r3, lbl_80390A10@ha
    addi r27, r3, lbl_80390A10@l
lbl_8006FD98:
    add r3, r27, r29
    lwz r31, 0x8(r3)
    b lbl_80070204
lbl_8006FDA4:
    lwz r31, 0x8(r31)
    lwz r0, 0x2c4(r26)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80070204
    li r4, 0x1
    lwz r3, 0x2c0(r26)
    cmpwi r3, 0x0
    beq lbl_80070204
    lwz r3, 0x10(r3)
    rlwinm r0, r3, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_8006FDDC
    li r4, 0x0
lbl_8006FDDC:
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8006FDEC
    li r4, 0x0
lbl_8006FDEC:
    cmpwi r4, 0x0
    beq lbl_80070204
    li r20, 0x0
    li r23, 0x0
    lfs f27, lbl_8049F018
    fmr f26, f27
    addi r3, r1, 0x58
    li r4, 0x0
    li r5, 0x40
    bl memset
    li r18, 0x0
    li r16, 0x0
lbl_8006FE1C:
    add r25, r30, r16
    addi r25, r25, 0x7c8
    lwz r3, 0x0(r25)
    and r0, r22, r3
    cmpwi r0, 0x0
    bne lbl_8006FF90
    and r0, r21, r3
    cmpwi r0, 0x0
    beq lbl_8006FF90
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r3, 0x2c0(r26)
    lwz r17, 0x54(r3)
    b lbl_8006FF84
lbl_8006FE5C:
    lwz r0, 0x10(r24)
    cmpwi r0, 0x0
    beq lbl_8006FF80
    lwz r3, 0x2c0(r26)
    lwz r3, 0x10(r3)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006FEE0
    addi r3, r1, 0x38
    mr r4, r25
    addi r5, r24, 0x14
    bl fn_8017D14C
    cmpwi r3, 0x0
    beq lbl_8006FF80
    li r20, 0x1
    lwz r3, 0x14(r24)
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8006FEC0
    lfs f0, 0x54(r1)
    fcmpo cr0, f27, f0
    bge lbl_8006FF80
    li r23, 0x1
    fmr f27, f0
    b lbl_8006FF80
lbl_8006FEC0:
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006FF80
    lfs f0, 0x28(r24)
    fcmpo cr0, f26, f0
    bge lbl_8006FF80
    fmr f26, f0
    b lbl_8006FF80
lbl_8006FEE0:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006FF80
    addi r3, r1, 0x38
    mr r4, r25
    addi r5, r24, 0x14
    bl fn_8017D2D8
    cmpwi r3, 0x0
    beq lbl_8006FF80
    li r20, 0x1
    lwz r3, 0x14(r24)
    rlwinm r0, r3, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8006FF30
    lfs f0, 0x54(r1)
    fcmpo cr0, f27, f0
    bge lbl_8006FF80
    li r23, 0x1
    fmr f27, f0
    b lbl_8006FF80
lbl_8006FF30:
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006FF80
    lfs f1, 0x28(r24)
    lfs f0, 0x1c(r24)
    fsubs f0, f1, f0
    fmuls f2, f0, f30
    stfs f2, 0x20(r1)
    lfs f1, 0x30(r24)
    lfs f0, 0x24(r24)
    fsubs f0, f1, f0
    fmuls f0, f0, f30
    stfs f0, 0x28(r1)
    fcmpo cr0, f26, f2
    bge lbl_8006FF70
    fmr f26, f2
lbl_8006FF70:
    lfs f0, 0x28(r1)
    fcmpo cr0, f26, f0
    bge lbl_8006FF80
    fmr f26, f0
lbl_8006FF80:
    lwz r17, 0x8(r17)
lbl_8006FF84:
    lwz r24, 0x0(r17)
    cmplwi r24, 0x1
    bne lbl_8006FE5C
lbl_8006FF90:
    addi r18, r18, 0x1
    addi r16, r16, 0x18
    cmpwi r18, 0x10
    blt lbl_8006FE1C
    cmpwi r20, 0x0
    beq lbl_80070204
    cmpwi r23, 0x0
    beq lbl_8007003C
    addi r3, r1, 0x20
    addi r4, r30, 0x84
    bl fn_80019DAC
    addi r3, r1, 0x14
    addi r4, r26, 0x5e0
    bl fn_80019DAC
    stfs f31, 0x24(r1)
    stfs f31, 0x18(r1)
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B978
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    fmr f1, f27
    bl fn_80018B08
    lwz r3, 0x377c(r30)
    addi r4, r30, 0x84
    bl fn_80182744
    addi r3, r30, 0x84
    mr r4, r3
    addi r5, r1, 0x2c
    bl fn_80018B00
    lwz r3, 0x377c(r30)
    addi r4, r30, 0x84
    bl fn_80182518
    lwz r0, 0x0(r30)
    oris r0, r0, 0x400
    stw r0, 0x0(r30)
    lwz r0, 0x54(r30)
    oris r0, r0, 0x20
    stw r0, 0x54(r30)
lbl_8007003C:
    stw r26, 0x3878(r30)
    stfs f26, 0x387c(r30)
    lwz r0, 0x54(r30)
    ori r0, r0, 0x2
    stw r0, 0x54(r30)
    li r23, 0x0
    addi r3, r1, 0x14
    bl fn_80061FA0
    lfs f26, lbl_8049F018
    lwz r3, 0x2c0(r26)
    lwz r25, 0x54(r3)
    b lbl_80070184
lbl_8007006C:
    lwz r0, 0x10(r24)
    cmpwi r0, 0x0
    beq lbl_80070180
    lwz r3, 0x2c0(r26)
    lwz r3, 0x10(r3)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800700D8
    lwz r0, 0x14(r24)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80070180
    addi r3, r1, 0x20
    addi r4, r24, 0x14
    bl fn_80070760
    lfs f1, 0x24(r1)
    lfs f0, 0x28(r24)
    fadds f0, f1, f0
    fcmpo cr0, f26, f0
    bge lbl_800700C0
    fmr f26, f0
lbl_800700C0:
    addi r23, r23, 0x1
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018B00
    b lbl_80070180
lbl_800700D8:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80070180
    lwz r3, 0x14(r24)
    rlwinm r0, r3, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_80070180
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80070114
    lfs f0, 0x2c(r24)
    fcmpo cr0, f26, f0
    bge lbl_80070158
    fmr f26, f0
    b lbl_80070158
lbl_80070114:
    addi r3, r1, 0x20
    lwz r4, 0x18(r24)
    addi r5, r24, 0x1c
    bl fn_80018AF8
    addi r3, r1, 0x8
    lwz r4, 0x18(r24)
    addi r5, r24, 0x28
    bl fn_80018AF8
    lfs f1, 0x24(r1)
    lfs f0, 0xc(r1)
    fcmpo cr0, f1, f0
    bge lbl_80070148
    stfs f0, 0x24(r1)
lbl_80070148:
    lfs f0, 0x24(r1)
    fcmpo cr0, f26, f0
    bge lbl_80070158
    fmr f26, f0
lbl_80070158:
    addi r23, r23, 0x1
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    addi r6, r24, 0x14
    bl fn_800707EC
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018B00
lbl_80070180:
    lwz r25, 0x8(r25)
lbl_80070184:
    lwz r24, 0x0(r25)
    cmplwi r24, 0x1
    bne lbl_8007006C
    stfs f26, 0x3880(r30)
    cmpwi r23, 0x0
    ble lbl_80070204
    addi r3, r30, 0x3884
    addi r4, r1, 0x14
    xoris r0, r23, 0x8000
    stw r0, 0x9c(r1)
    stw r28, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f28
    fdivs f1, f29, f0
    bl fn_80018B08
    addi r3, r1, 0x20
    addi r4, r30, 0x3884
    addi r5, r30, 0x84
    bl fn_8001B8B8
    lfs f0, 0x20(r1)
    fmuls f1, f0, f0
    lfs f0, 0x28(r1)
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8001DA9C
    fmr f0, f1
    stfs f1, 0x18(r1)
    lfs f1, 0x24(r1)
    frsp f2, f0
    bl fn_800674B8
    fneg f0, f1
    stfs f0, 0x3890(r30)
lbl_80070204:
    lwz r26, 0x0(r31)
    cmplwi r26, 0x1
    bne lbl_8006FDA4
    addi r19, r19, 0x1
    addi r29, r29, 0xc
    cmpwi r19, 0x5
    blt lbl_8006FD98
lbl_80070220:
    li r0, 0x138
    opword 0x13E1000C
    lfd f31, 0x130(r1)
    li r0, 0x128
    opword 0x13C1000C
    lfd f30, 0x120(r1)
    li r0, 0x118
    opword 0x13A1000C
    lfd f29, 0x110(r1)
    li r0, 0x108
    opword 0x1381000C
    lfd f28, 0x100(r1)
    li r0, 0xf8
    opword 0x1361000C
    lfd f27, 0xf0(r1)
    li r0, 0xe8
    opword 0x1341000C
    lfd f26, 0xe0(r1)
    addi r11, r1, 0xe0
    bl _restgpr_16
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_80070280
asm void fn_80070280(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x54(r3)
    lwz r31, 0x948(r3)
    cmpwi r31, 0x0
    beq lbl_80070364
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_80070364
    lfs f2, 0x97c(r3)
    lfs f1, 0x984(r3)
    fcmpo cr0, f2, f1
    opword 0x4C401382
    bne lbl_800702F4
    lfs f0, 0x12c(r3)
    fadds f0, f2, f0
    stfs f0, 0x97c(r3)
    fdivs f1, f0, f1
    addi r3, r31, 0x8
    addi r4, r30, 0x954
    addi r5, r30, 0x96c
    bl fn_8001D9D0
lbl_800702F4:
    lfs f2, 0x980(r30)
    lfs f1, 0x988(r30)
    fcmpo cr0, f2, f1
    opword 0x4C401382
    bne lbl_80070328
    lfs f0, 0x12c(r30)
    fadds f0, f2, f0
    stfs f0, 0x980(r30)
    fdivs f3, f0, f1
    lfs f1, 0x960(r30)
    lfs f2, 0x978(r30)
    bl fn_80172A18
    stfs f1, 0x14(r31)
lbl_80070328:
    lfs f1, 0x97c(r30)
    lfs f0, 0x984(r30)
    fcmpo cr0, f1, f0
    ble lbl_8007035C
    lfs f1, 0x980(r30)
    lfs f0, 0x988(r30)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80070364
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x0(r31)
    b lbl_80070364
lbl_8007035C:
    mr r3, r31
    bl fn_80070910
lbl_80070364:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007037C
asm s32 fn_8007037C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    addi r11, r1, 0x38
    bl _savegpr_23
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    fmr f31, f1
    mulli r0, r4, 0x350
    add r3, r3, r0
    addi r30, r3, 0x1654
    lwz r29, 0x4(r30)
    li r27, 0x0
    li r31, 0x0
lbl_800703C0:
    add r3, r30, r31
    addi r28, r3, 0x10
    mr r3, r28
    bl fn_800707D8
    cmpwi r3, 0x0
    bne lbl_80070420
    cmpwi r29, 0x0
    bne lbl_800703EC
    cmpwi r24, 0x1
    blt lbl_800703EC
    lwz r29, 0x1658(r23)
lbl_800703EC:
    mr r3, r29
    mr r4, r25
    bl fn_80181568
    mr r4, r3
    mr r3, r28
    mr r5, r26
    fmr f1, f31
    bl fn_8017CF8C
    lwz r0, 0x0(r28)
    ori r0, r0, 0x10
    stw r0, 0x0(r28)
    li r3, 0x1
    b lbl_80070434
lbl_80070420:
    addi r27, r27, 0x1
    addi r31, r31, 0x18
    cmpwi r27, 0x10
    blt lbl_800703C0
    li r3, 0x0
lbl_80070434:
    lfd f31, 0x38(r1)
    addi r11, r1, 0x38
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80070450
asm void fn_80070450(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
lbl_80070470:
    add r3, r29, r31
    addi r3, r3, 0x648
    bl fn_8007092C
    addi r30, r30, 0x1
    addi r31, r31, 0x18
    cmpwi r30, 0x10
    blt lbl_80070470
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800704A4
asm void fn_800704A4(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
lbl_800704C4:
    add r3, r29, r31
    addi r3, r3, 0x648
    bl fn_80070910
    addi r30, r30, 0x1
    addi r31, r31, 0x18
    cmpwi r30, 0x10
    blt lbl_800704C4
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800704F8
asm void fn_800704F8(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
lbl_80070518:
    add r3, r29, r31
    addi r3, r3, 0x648
    bl fn_8007093C
    addi r30, r30, 0x1
    addi r31, r31, 0x18
    cmpwi r30, 0x10
    blt lbl_80070518
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8007054C
asm s32 fn_8007054C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    addi r11, r1, 0x38
    bl _savegpr_22
    mr r31, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    fmr f31, f1
    mr r25, r7
    mulli r0, r4, 0x350
    add r3, r3, r0
    addi r29, r3, 0x1654
    lwz r28, 0x4(r29)
    li r26, 0x0
    li r30, 0x0
lbl_80070594:
    add r3, r29, r30
    addi r27, r3, 0x190
    mr r3, r27
    bl fn_800707D8
    cmpwi r3, 0x0
    bne lbl_80070614
    cmpwi r28, 0x0
    bne lbl_800705C0
    cmpwi r22, 0x1
    blt lbl_800705C0
    lwz r28, 0x1658(r31)
lbl_800705C0:
    mr r3, r28
    mr r4, r23
    bl fn_80181568
    mr r4, r3
    mr r3, r27
    mr r5, r24
    fmr f1, f31
    bl fn_8017CF8C
    lwz r3, 0x0(r27)
    ori r0, r25, 0x20
    or r0, r3, r0
    stw r0, 0x0(r27)
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8007060C
    stw r27, 0x948(r31)
    mr r3, r27
    bl fn_8007093C
lbl_8007060C:
    li r3, 0x1
    b lbl_80070628
lbl_80070614:
    addi r26, r26, 0x1
    addi r30, r30, 0x18
    cmpwi r26, 0x10
    blt lbl_80070594
    li r3, 0x0
lbl_80070628:
    lfd f31, 0x38(r1)
    addi r11, r1, 0x38
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80070644
asm void fn_80070644(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
lbl_80070664:
    add r3, r29, r31
    addi r3, r3, 0x7c8
    bl fn_8007092C
    addi r30, r30, 0x1
    addi r31, r31, 0x18
    cmpwi r30, 0x10
    blt lbl_80070664
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80070698
asm void fn_80070698(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
lbl_800706B8:
    add r3, r29, r31
    addi r3, r3, 0x7c8
    bl fn_80070910
    addi r30, r30, 0x1
    addi r31, r31, 0x18
    cmpwi r30, 0x10
    blt lbl_800706B8
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800706EC
asm void fn_800706EC(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
lbl_8007070C:
    add r3, r29, r31
    addi r3, r3, 0x7c8
    bl fn_8007093C
    addi r30, r30, 0x1
    addi r31, r31, 0x18
    cmpwi r30, 0x10
    blt lbl_8007070C
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80070740
asm int fn_80070740() {
    nofralloc
    lwz r3, 0x948(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x0(r3)
    b fn_8007093C
    blr
}

// asm_to_cpp: fn_80070760
asm void fn_80070760(f32 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl fn_800707D8
    cmpwi r3, 0x0
    beq lbl_800707C0
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800707B0
    mr r3, r30
    li r4, 0x3
    lwz r5, 0x4(r31)
    bl fn_80173580
    b lbl_800707C0
lbl_800707B0:
    mr r3, r30
    lwz r4, 0x4(r31)
    addi r5, r31, 0x8
    bl fn_80018AF8
lbl_800707C0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_800707D8(s32 *arg0) {
    return (*arg0 & 1) != 0;
}

// asm_to_cpp: fn_800707EC
asm void fn_800707EC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r3, r31
    bl fn_800708FC
    cmpwi r3, 0x0
    beq lbl_800708E4
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8007087C
    cmpwi r29, 0x0
    beq lbl_80070844
    mr r3, r29
    addi r4, r31, 0x8
    bl fn_80019DAC
lbl_80070844:
    cmpwi r30, 0x0
    beq lbl_80070858
    mr r3, r30
    addi r4, r31, 0x14
    bl fn_80019DAC
lbl_80070858:
    cmpwi r28, 0x0
    beq lbl_800708E4
    mr r3, r28
    addi r4, r31, 0x8
    addi r5, r31, 0x14
    la r6, lbl_8049F018
    lfs f1, 0x4(r6)
    bl fn_8001D9D0
    b lbl_800708E4
lbl_8007087C:
    addi r3, r1, 0x14
    lwz r4, 0x4(r31)
    addi r5, r31, 0x8
    bl fn_80018AF8
    addi r3, r1, 0x8
    lwz r4, 0x4(r31)
    addi r5, r31, 0x14
    bl fn_80018AF8
    cmpwi r28, 0x0
    beq lbl_800708BC
    mr r3, r28
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    la r6, lbl_8049F018
    lfs f1, 0x4(r6)
    bl fn_8001D9D0
lbl_800708BC:
    cmpwi r29, 0x0
    beq lbl_800708D0
    mr r3, r29
    addi r4, r1, 0x14
    bl fn_80019DAC
lbl_800708D0:
    cmpwi r30, 0x0
    beq lbl_800708E4
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_80019DAC
lbl_800708E4:
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_800708FC(s32 *arg0) {
    return (*arg0 & 1) != 0;
}

void fn_80070910(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 | 2;
    }
}

s32 fn_8007093C(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 & 0xFFFFFFFD;
        return (s32) arg0;
    }
    return (s32) arg0;
}

// asm_to_cpp: fn_80070958
asm void fn_80070958() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_28
    mr r29, r3
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x54(r3)
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_80070C00
    lwz r0, 0x58(r3)
    rlwinm r4, r0, 0, 30, 30
    cmpwi r4, 0x0
    bne lbl_80070C00
    lwz r4, 0x70(r3)
    clrlwi r4, r4, 31
    cmpwi r4, 0x0
    bne lbl_80070C00
    lwz r4, 0x0(r3)
    rlwinm r4, r4, 0, 30, 30
    cmpwi r4, 0x0
    beq lbl_80070C00
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r4, 0x14(r4)
    cmpwi r4, 0x7
    beq lbl_80070BF8
    cmpwi r4, 0x1
    bne lbl_800709E8
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r4, 0x4(r4)
    cmplwi r4, 0x12
    beq lbl_80070BF8
lbl_800709E8:
    li r30, 0x0
    li r31, 0x0
    lwz r4, 0x50(r3)
    rlwinm r5, r4, 0, 1, 1
    cmpwi r5, 0x0
    beq lbl_80070A04
    lwz r31, 0x3858(r3)
lbl_80070A04:
    rlwinm r4, r4, 0, 11, 11
    cmpwi r4, 0x0
    beq lbl_80070A14
    lwz r31, 0x385c(r3)
lbl_80070A14:
    cmpwi r31, 0x0
    beq lbl_80070A68
    cmpwi r5, 0x0
    beq lbl_80070A38
    lwz r3, 0x50(r31)
    rlwinm r3, r3, 0, 11, 11
    cmpwi r3, 0x0
    beq lbl_80070A38
    li r30, 0x1
lbl_80070A38:
    lwz r3, 0x50(r31)
    rlwinm r3, r3, 0, 1, 1
    cmpwi r3, 0x0
    beq lbl_80070A54
    cmpwi r4, 0x0
    beq lbl_80070A54
    li r30, 0x1
lbl_80070A54:
    lwz r3, 0x5c(r31)
    rlwinm r3, r3, 0, 18, 18
    cmpwi r3, 0x0
    beq lbl_80070A68
    li r30, 0x0
lbl_80070A68:
    li r4, 0x1
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    bne lbl_80070A88
    li r4, 0x0
lbl_80070A88:
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80070A98
    li r4, 0x0
lbl_80070A98:
    cmpwi r4, 0x0
    beq lbl_80070BF8
    mr r3, r29
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_80070C18
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80070BF8
    addi r3, r1, 0x2c
    bl fn_8001B8BC
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    bl fn_80018B08
    lwz r3, 0x377c(r29)
    addi r4, r1, 0x8
    bl fn_80182600
    lwz r3, 0x377c(r29)
    addi r4, r29, 0x84
    bl fn_80182744
    addi r3, r1, 0x14
    li r4, 0x4000
    lfs f1, 0xa0(r29)
    lfs f0, lbl_8049F058
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r5, 0x3c(r1)
    bl fn_800718A0
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    bl fn_8001B8B4
    la r3, lbl_8049F058
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80070B34
    lwz r0, 0x54(r29)
    oris r0, r0, 0x100
    stw r0, 0x54(r29)
lbl_80070B34:
    cmpwi r30, 0x0
    beq lbl_80070BA0
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x8
    bl fn_80182600
    lwz r3, 0x377c(r31)
    addi r4, r31, 0x84
    bl fn_80182744
    addi r3, r1, 0x14
    li r4, 0x4000
    lfs f1, 0xa0(r31)
    lfs f0, lbl_8049F058
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r5, 0x3c(r1)
    bl fn_800718A0
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    bl fn_8001B8B4
    la r3, lbl_8049F058
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80070BA0
    lwz r0, 0x54(r31)
    oris r0, r0, 0x100
    stw r0, 0x54(r31)
lbl_80070BA0:
    lwz r0, 0x0(r29)
    oris r0, r0, 0x400
    stw r0, 0x0(r29)
    lis r3, lbl_803909E8@ha
    lwz r0, lbl_803909E8@l(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80070BF8
    lwz r3, 0x20(r28)
    rlwinm r0, r3, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_80070BF8
    clrrwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80070BF8
    lwz r0, 0x64(r29)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_80070BF8
    mr r3, r29
    li r4, 0x0
    bl fn_800711E8
lbl_80070BF8:
    mr r3, r29
    bl fn_80071028
lbl_80070C00:
    addi r11, r1, 0x50
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80070C18
asm s32 fn_80070C18(s32 *arg0, f32 *arg1, f32 *arg2, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r4, r1, 0x8
    addi r5, r1, 0x58
    addi r6, r1, 0x18
    bl fn_80070C84
    mr r7, r3
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    mr r6, r31
    addi r8, r1, 0x58
    addi r9, r1, 0x18
    li r10, 0x0
    bl fn_80070F4C
    addi r11, r1, 0x130
    bl _restgpr_29
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_80070C84
asm s32 fn_80070C84() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    mr r31, r6
    la r4, lbl_8049F058
    lfs f31, 0xc(r4)
    li r4, 0x0
    li r0, 0x10
    mtctr r0
lbl_80070CC0:
    add r5, r3, r4
    lwz r0, 0x7c8(r5)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80070CE4
    lfs f0, 0x7dc(r5)
    fcmpo cr0, f0, f31
    ble lbl_80070CE4
    fmr f31, f0
lbl_80070CE4:
    addi r4, r4, 0x18
    bdnz lbl_80070CC0
    lwz r3, 0x377c(r3)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    mr r3, r29
    mr r4, r30
    mr r5, r31
    addi r6, r1, 0x8
    fmr f1, f31
    li r7, 0x0
    bl fn_80070DA0
    mr r7, r3
    la r3, lbl_8049F058
    lfs f1, 0xc(r3)
    li r3, 0x0
    li r0, 0x10
    mtctr r0
lbl_80070D3C:
    add r4, r29, r3
    lwz r0, 0x7c8(r4)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80070D60
    lfs f0, 0x7dc(r4)
    fcmpo cr0, f0, f1
    ble lbl_80070D60
    fmr f1, f0
lbl_80070D60:
    addi r3, r3, 0x18
    bdnz lbl_80070D3C
    mr r3, r29
    mr r4, r30
    mr r5, r31
    addi r6, r1, 0x8
    bl fn_80070DA0
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80070DA0
asm s32 fn_80070DA0() {
    nofralloc
    mulli r0, r7, 0xc
    lfs f0, 0x84(r3)
    stfsx f0, r4, r0
    lfs f0, 0x4(r6)
    add r4, r4, r0
    stfs f0, 0x4(r4)
    lfs f0, 0x8c(r3)
    stfs f0, 0x8(r4)
    slwi r0, r7, 2
    stfsx f1, r5, r0
    addi r3, r7, 0x1
    blr
}

// asm_to_cpp: fn_80070DD0
asm void fn_80070DD0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_18
    mr r22, r3
    mr r19, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r18, r8
    mr r26, r9
    mr r27, r10
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bgt lbl_80070F34
    lwz r0, 0x1640(r3)
    cmpwi r0, 0x0
    beq lbl_80070E20
    b lbl_80070F34
lbl_80070E20:
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80070F34
    lwz r3, 0x4(r3)
    bl fn_8007DA78
    mr r29, r3
    bl fn_8007DBF0
    mr r3, r29
    mr r4, r18
    addi r5, r19, 0x4
    mr r6, r26
    la r7, lbl_8049F058
    lfs f1, 0x10(r7)
    lfs f0, 0x0(r25)
    fadds f1, f1, f0
    bl fn_8007C560
    bl fn_8007ED54
    mr r30, r3
    mr r3, r29
    bl fn_8007DC44
    mr r31, r3
    li r28, 0x0
    li r21, 0x0
    mr r18, r21
    mr r19, r21
    mr r20, r21
    b lbl_80070F2C
lbl_80070E90:
    mr r3, r29
    bl fn_8007DAF4
    mr r5, r3
    cmpwi r3, 0x0
    beq lbl_80070F34
    add r4, r31, r21
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80070F24
    lwz r6, 0x8(r4)
    lwz r3, 0xc(r4)
    lwz r4, 0x10(r4)
    cmpwi r6, 0x0
    bne lbl_80070EF8
    addi r0, r22, 0xc4
    stw r0, 0x8(r1)
    stw r18, 0xc(r1)
    stw r19, 0x10(r1)
    mr r6, r23
    mr r7, r24
    mr r8, r25
    mr r9, r26
    mr r10, r27
    bl fn_8007B24C
    b lbl_80070F24
lbl_80070EF8:
    addi r0, r22, 0xc4
    stw r0, 0x8(r1)
    addi r0, r6, 0x18
    stw r0, 0xc(r1)
    stw r20, 0x10(r1)
    mr r6, r23
    mr r7, r24
    mr r8, r25
    mr r9, r26
    mr r10, r27
    bl fn_8007B24C
lbl_80070F24:
    addi r28, r28, 0x1
    addi r21, r21, 0x14
lbl_80070F2C:
    cmpw r28, r30
    blt lbl_80070E90
lbl_80070F34:
    addi r11, r1, 0x50
    bl _restgpr_18
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80070F4C
asm s32 fn_80070F4C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    lwz r3, 0x4(r3)
    bl fn_8007DA78
    mr r31, r3
    bl fn_8007DB88
    addi r3, r1, 0x14
    lfs f1, 0x84(r23)
    lfs f2, 0x88(r23)
    lfs f3, 0x8c(r23)
    bl fn_80018B0C
    addi r3, r1, 0x8
    bl fn_80061FA0
    mr r3, r23
    mr r4, r24
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r8, r30
    addi r9, r1, 0x14
    addi r10, r1, 0x8
    bl fn_80070DD0
    mr r3, r31
    bl fn_8007DACC
    mr r31, r3
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8007C040
    cmpwi r3, 0x0
    beq lbl_8007100C
    mr r3, r31
    mr r4, r25
    mr r5, r26
    la r6, lbl_8049F058
    lfs f1, 0x14(r6)
    bl fn_8007C300
    b lbl_80071010
lbl_8007100C:
    li r3, 0x0
lbl_80071010:
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80071028
asm void fn_80071028() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r1, 0x18
    la r4, lbl_8049F058
    lfs f1, 0xc(r4)
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_8007107C
    addi r3, r31, 0xa1c
    bl fn_800868F4
lbl_8007107C:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80071098
    la r3, lbl_8049F058
    lfs f0, 0x1c(r3)
    stfs f0, 0xa20(r31)
lbl_80071098:
    li r0, 0x0
    stw r0, 0xa18(r31)
    lwz r0, 0x163c(r31)
    cmpwi r0, 0x0
    bne lbl_800711C8
    lwz r0, 0x1640(r31)
    cmpwi r0, 0x0
    beq lbl_800710BC
    b lbl_800711C8
lbl_800710BC:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800711C8
    lwz r0, 0x70(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800711C8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800711C8
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 6, 8
    cmpwi r0, 0x0
    bne lbl_800711C8
    li r4, 0x1
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_8007111C
    li r4, 0x0
lbl_8007111C:
    cmpwi r4, 0x0
    beq lbl_800711C8
    addi r3, r1, 0xc
    addi r4, r31, 0x84
    bl fn_80019DAC
    la r3, lbl_8049F058
    lfs f31, 0xc(r3)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8007D7F4
    cmpwi r3, 0x0
    beq lbl_800711C8
    lfs f1, 0x8(r1)
    lis r4, lbl_80339720@ha
    lfd f0, lbl_80339720@l(r4)
    fadd f0, f1, f0
    frsp f1, f0
    stfs f1, 0x8(r1)
    lfs f0, 0x88(r31)
    fsubs f0, f0, f31
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800711C8
    stw r3, 0xa18(r31)
    lis r4, lbl_803909E8@ha
    lwz r0, lbl_803909E8@l(r4)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_800711C8
    lwz r3, 0x20(r3)
    rlwinm r0, r3, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_800711C8
    clrrwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_800711C8
    lwz r0, 0x64(r31)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_800711C8
    mr r3, r31
    li r4, 0x0
    bl fn_800711E8
lbl_800711C8:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800711E8
asm void fn_800711E8() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    lwz r31, 0xc(r5)
    lis r5, lbl_803909E8@ha
    lwz r0, lbl_803909E8@l(r5)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80071888
    cmpwi r4, 0x1
    bne lbl_80071284
    lwz r3, 0x3864(r3)
    cmpwi r3, 0x0
    bne lbl_8007126C
    li r30, 0x0
lbl_8007123C:
    mr r3, r30
    bl fn_8005E2CC
    stw r3, 0x3864(r28)
    cmpwi r3, 0x0
    beq lbl_80071260
    lwz r4, 0x10(r3)
    lwz r0, 0x10(r28)
    cmpw r4, r0
    bne lbl_8007126C
lbl_80071260:
    addi r30, r30, 0x1
    cmpwi r30, 0x19
    blt lbl_8007123C
lbl_8007126C:
    stw r28, 0x3860(r3)
    lis r3, 0x1
    subi r0, r3, 0x7800
    stw r0, 0x50(r28)
    li r0, 0x400
    stw r0, 0x60(r28)
lbl_80071284:
    lwz r30, 0x3864(r28)
    cmpwi r30, 0x0
    beq lbl_8007131C
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x64
    bl memset
    stw r30, 0x8(r1)
    addi r4, r1, 0x8
    li r0, 0x19
    b lbl_800712F4
lbl_800712B0:
    mr r30, r6
    li r7, 0x0
    li r3, 0x0
    mtctr r0
lbl_800712C0:
    lwzx r5, r4, r3
    cmpwi r5, 0x0
    bne lbl_800712D4
    stwx r6, r4, r3
    b lbl_800712EC
lbl_800712D4:
    cmplw r6, r5
    bne lbl_800712E4
    li r7, 0x1
    b lbl_800712EC
lbl_800712E4:
    addi r3, r3, 0x4
    bdnz lbl_800712C0
lbl_800712EC:
    cmpwi r7, 0x0
    bne lbl_80071300
lbl_800712F4:
    lwz r6, 0x3864(r30)
    cmpwi r6, 0x0
    bne lbl_800712B0
lbl_80071300:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8007131C
    mr r3, r30
    bl fn_8005E4A4
    mr r30, r3
lbl_8007131C:
    lwz r0, 0x78(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80071888
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bne lbl_80071888
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_80071888
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_80071888
    cmpwi r30, 0x0
    beq lbl_80071888
    mr r3, r28
    bl fn_8006B078
    cmpwi r3, 0x0
    bne lbl_80071888
    mr r3, r30
    bl fn_8006B078
    cmpwi r3, 0x0
    bne lbl_80071888
    lwz r3, 0x10(r28)
    lwz r0, 0x10(r30)
    cmpw r3, r0
    beq lbl_80071888
    lwz r3, 0x0(r28)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80071888
    lwz r4, 0x0(r30)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800713BC
    b lbl_80071888
lbl_800713BC:
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_80071888
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_800713D8
    b lbl_80071888
lbl_800713D8:
    cmpwi r29, 0x2
    beq lbl_80071400
    lwz r3, 0x50(r28)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80071888
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_80071400
    b lbl_80071888
lbl_80071400:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_80071448
    cmpwi r29, 0x2
    beq lbl_80071448
    lwz r0, 0x28(r3)
    cmpwi r0, 0x5
    beq lbl_80071448
    lwz r0, 0x60(r28)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    bne lbl_80071448
    lwz r0, 0x50(r28)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80071888
lbl_80071448:
    li r3, 0x0
    bl fn_8005E8F0
    cmpwi r3, 0x0
    bne lbl_80071888
    li r3, 0x0
    li r4, 0x0
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80071888
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80071888
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x118(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_800717E0
    cmpwi r28, 0x0
    beq lbl_800717E0
    cmpwi r30, 0x0
    beq lbl_800717E0
    li r3, 0x0
    lis r4, lbl_803906D0@ha
    addi r5, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_800714C0:
    lwzx r4, r5, r3
    lwz r7, 0xc(r4)
    b lbl_80071518
lbl_800714CC:
    lwz r4, 0x0(r7)
    cmpwi r4, 0x0
    beq lbl_80071514
    lwz r6, 0x0(r4)
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80071514
    rlwinm r0, r6, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80071504
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80071514
lbl_80071504:
    lwz r4, 0x140(r4)
    subi r0, r4, 0x24c
    cmplwi r0, 0x2
    ble lbl_80071888
lbl_80071514:
    lwz r7, 0xc(r7)
lbl_80071518:
    cmpwi r7, 0x0
    bne lbl_800714CC
    addi r3, r3, 0x4
    bdnz lbl_800714C0
    li r0, 0x1
    li r6, 0x0
    lwz r3, 0x10(r28)
    slwi r4, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r4
    lwz r5, 0xc(r3)
    b lbl_80071580
lbl_8007154C:
    lwz r3, 0x0(r5)
    lwz r4, 0x0(r3)
    rlwinm r3, r4, 0, 27, 27
    cmpwi r3, 0x0
    bne lbl_8007157C
    rlwinm r3, r4, 0, 19, 19
    cmpwi r3, 0x0
    bne lbl_8007157C
    rlwinm r3, r4, 0, 30, 30
    cmpwi r3, 0x0
    beq lbl_8007157C
    addi r6, r6, 0x1
lbl_8007157C:
    lwz r5, 0xc(r5)
lbl_80071580:
    cmpwi r5, 0x0
    bne lbl_8007154C
    cmpwi r6, 0x1
    bgt lbl_80071594
    li r0, 0x0
lbl_80071594:
    li r5, 0x0
    lwz r3, 0x10(r30)
    slwi r4, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r4
    lwz r6, 0xc(r3)
    b lbl_800715E8
lbl_800715B4:
    lwz r3, 0x0(r6)
    lwz r4, 0x0(r3)
    rlwinm r3, r4, 0, 27, 27
    cmpwi r3, 0x0
    bne lbl_800715E4
    rlwinm r3, r4, 0, 19, 19
    cmpwi r3, 0x0
    bne lbl_800715E4
    rlwinm r3, r4, 0, 30, 30
    cmpwi r3, 0x0
    beq lbl_800715E4
    addi r5, r5, 0x1
lbl_800715E4:
    lwz r6, 0xc(r6)
lbl_800715E8:
    cmpwi r6, 0x0
    bne lbl_800715B4
    cmpwi r5, 0x1
    bgt lbl_800715FC
    li r0, 0x0
lbl_800715FC:
    cmpwi r0, 0x0
    beq lbl_80071688
    lwz r4, 0x38cc(r28)
    addi r3, r4, 0x2
    cmplwi r3, 0x1
    ble lbl_80071688
    cmpwi r4, 0x0
    bne lbl_80071888
    lwz r3, 0x38c8(r30)
    rlwinm r4, r3, 0, 29, 29
    cmpwi r4, 0x0
    bne lbl_8007163C
    lwz r3, 0x38c8(r28)
    rlwinm r3, r3, 0, 29, 29
    cmpwi r3, 0x0
    beq lbl_80071640
lbl_8007163C:
    li r0, 0x0
lbl_80071640:
    cmpwi r4, 0x0
    beq lbl_8007165C
    lwz r3, 0x38c8(r30)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38c8(r30)
    li r3, 0x0
    stw r3, 0x38d0(r30)
lbl_8007165C:
    cmpwi r0, 0x0
    beq lbl_80071674
    lwz r0, 0x38c8(r28)
    ori r0, r0, 0x10
    stw r0, 0x38c8(r28)
    b lbl_80071888
lbl_80071674:
    lwz r0, 0x38c8(r28)
    ori r0, r0, 0x4
    stw r0, 0x38c8(r28)
    li r0, 0x26c
    stw r0, 0x38d0(r28)
lbl_80071688:
    lwz r0, 0x38cc(r30)
    cmpwi r0, 0x0
    ble lbl_800717E0
    cmpwi r0, 0x32
    bge lbl_800717E0
    lwz r7, 0x3874(r30)
    li r4, 0x0
    stw r4, 0x38cc(r30)
    stw r4, 0x38d4(r30)
    stw r4, 0x3874(r30)
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r30)
    lwz r0, 0x58(r30)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r30)
    lwz r3, 0x3908(r30)
    lwz r6, 0x8(r3)
    b lbl_80071734
lbl_800716D4:
    lwz r3, 0x0(r6)
    lwz r5, 0x18(r3)
    cmplwi r5, 0x10
    beq lbl_80071700
    cmplwi r5, 0xd
    beq lbl_80071700
    cmplwi r5, 0xc
    beq lbl_80071700
    subi r0, r5, 0x2d
    cmplwi r0, 0x1
    bgt lbl_80071730
lbl_80071700:
    stw r4, 0x38cc(r3)
    stw r4, 0x38d4(r3)
    stw r4, 0x3874(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r3)
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x58(r3)
    lwz r0, 0x70(r3)
    clrrwi r0, r0, 1
    stw r0, 0x70(r3)
lbl_80071730:
    lwz r6, 0x8(r6)
lbl_80071734:
    cmpwi r6, 0x0
    bne lbl_800716D4
    cmpwi r7, 0x0
    beq lbl_800717E0
    li r4, 0x0
    stw r4, 0x38cc(r7)
    stw r4, 0x38d4(r7)
    stw r4, 0x3874(r7)
    lwz r0, 0x0(r7)
    oris r0, r0, 0x800
    stw r0, 0x0(r7)
    lwz r0, 0x58(r7)
    ori r0, r0, 0x2
    stw r0, 0x58(r7)
    lwz r3, 0x3908(r7)
    lwz r6, 0x8(r3)
    b lbl_800717D8
lbl_80071778:
    lwz r3, 0x0(r6)
    lwz r5, 0x18(r3)
    cmplwi r5, 0x10
    beq lbl_800717A4
    cmplwi r5, 0xd
    beq lbl_800717A4
    cmplwi r5, 0xc
    beq lbl_800717A4
    subi r0, r5, 0x2d
    cmplwi r0, 0x1
    bgt lbl_800717D4
lbl_800717A4:
    stw r4, 0x38cc(r3)
    stw r4, 0x38d4(r3)
    stw r4, 0x3874(r3)
    lwz r0, 0x0(r3)
    oris r0, r0, 0x800
    stw r0, 0x0(r3)
    lwz r0, 0x58(r3)
    ori r0, r0, 0x2
    stw r0, 0x58(r3)
    lwz r0, 0x70(r3)
    clrrwi r0, r0, 1
    stw r0, 0x70(r3)
lbl_800717D4:
    lwz r6, 0x8(r6)
lbl_800717D8:
    cmpwi r6, 0x0
    bne lbl_80071778
lbl_800717E0:
    lwz r0, 0x0(r31)
    oris r0, r0, 0x80
    stw r0, 0x0(r31)
    stw r30, 0x385c(r28)
    stw r28, 0x3858(r30)
    lwz r0, 0x4(r30)
    stw r0, 0x5c(r31)
    lwz r0, 0x4(r28)
    stw r0, 0x60(r31)
    li r31, 0x0
    li r29, -0x1
lbl_8007180C:
    mr r3, r31
    bl fn_8005E2CC
    cmpwi r3, 0x0
    beq lbl_80071854
    lwz r0, 0x4(r28)
    cmpw r0, r31
    beq lbl_80071854
    lwz r0, 0x4(r30)
    cmpw r0, r31
    beq lbl_80071854
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80071854
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80071854
    stw r29, 0x1644(r3)
lbl_80071854:
    addi r31, r31, 0x1
    cmpwi r31, 0x19
    blt lbl_8007180C
    mr r3, r28
    mr r4, r30
    bl fn_800602FC
    mr r3, r30
    mr r4, r28
    bl fn_800602FC
    mr r3, r30
    li r4, 0x0
    li r5, 0x5dc
    bl fn_80094AB4
lbl_80071888:
    addi r11, r1, 0x80
    bl _restgpr_28
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_800718A0
asm void fn_800718A0(f32 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    subi r0, r4, 0x4000
    clrlwi r3, r0, 16
    bl fn_800694F0
    fmr f31, f1
    addi r0, r31, 0x4000
    clrlwi r3, r0, 16
    bl fn_800694F0
    fmuls f0, f1, f31
    stfs f0, 0x0(r29)
    subi r0, r30, 0x4000
    clrlwi r3, r0, 16
    bl fn_80069524
    stfs f1, 0x4(r29)
    subi r0, r30, 0x4000
    clrlwi r3, r0, 16
    bl fn_800694F0
    fmr f31, f1
    addi r0, r31, 0x4000
    clrlwi r3, r0, 16
    bl fn_80069524
    fmuls f0, f1, f31
    stfs f0, 0x8(r29)
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80071944
asm void fn_80071944() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r29, r4
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    mulli r30, r3, 0x350
    add r31, r4, r30
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80071990
    lwz r0, 0x0(r5)
    stw r0, 0x1654(r31)
    b lbl_80071998
lbl_80071990:
    lwz r0, 0x4(r5)
    stw r0, 0x1654(r31)
lbl_80071998:
    lwz r0, 0x8(r5)
    stw r0, 0x165c(r31)
    lwz r0, 0xc(r5)
    stw r0, 0x1964(r31)
    lwz r0, 0x10(r5)
    stw r0, 0x1968(r31)
    lwz r0, 0x14(r5)
    stw r0, 0x196c(r31)
    lfs f0, 0x18(r5)
    stfs f0, 0x1970(r31)
    lfs f0, 0x1c(r5)
    stfs f0, 0x1974(r31)
    lfs f0, 0x20(r5)
    stfs f0, 0x1978(r31)
    lfs f0, 0x24(r5)
    stfs f0, 0x197c(r31)
    lwz r0, 0x28(r5)
    stw r0, 0x1980(r31)
    lwz r0, 0x2c(r5)
    stw r0, 0x1984(r31)
    lwz r0, 0x30(r5)
    stw r0, 0x1988(r31)
    lwz r0, 0x34(r5)
    stw r0, 0x198c(r31)
    lwz r0, 0x38(r5)
    stw r0, 0x1990(r31)
    lwz r0, 0x3c(r5)
    stw r0, 0x1994(r31)
    lwz r0, 0x40(r5)
    stw r0, 0x1998(r31)
    lwz r0, 0x44(r5)
    stw r0, 0x199c(r31)
    bl fn_8005CFCC
    cmpwi r3, 0x0
    beq lbl_80071A28
    b lbl_80071AB0
lbl_80071A28:
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x4(r4)
    subi r0, r3, 0x14
    cmplwi r0, 0x9
    bgt lbl_80071A44
    b lbl_80071AB0
lbl_80071A44:
    lwz r0, 0xcb0(r4)
    cmpwi r0, 0x0
    beq lbl_80071A6C
    cmpwi r0, 0x1
    beq lbl_80071AB0
    cmpwi r0, 0x2
    beq lbl_80071A84
    cmpwi r0, 0x3
    beq lbl_80071A9C
    b lbl_80071AB0
lbl_80071A6C:
    lfs f1, 0x1974(r31)
    lfs f0, lbl_8049F080
    fmuls f0, f1, f0
    stfs f0, 0x1974(r31)
    b lbl_80071AB0
    b lbl_80071AB0
lbl_80071A84:
    la r3, lbl_8049F080
    lfs f1, 0x1974(r31)
    lfs f0, 0x4(r3)
    fmuls f0, f1, f0
    stfs f0, 0x1974(r31)
    b lbl_80071AB0
lbl_80071A9C:
    la r3, lbl_8049F080
    lfs f1, 0x1974(r31)
    lfs f0, 0x8(r3)
    fmuls f0, f1, f0
    stfs f0, 0x1974(r31)
lbl_80071AB0:
    lwz r5, 0x8(r29)
    cmpwi r5, -0x1
    beq lbl_80071C1C
    lwz r0, 0x18(r29)
    cmplwi r0, 0x2b
    beq lbl_80071C1C
    la r4, lbl_8049F080
    lwz r0, 0x1964(r31)
    lfd f3, lbl_8049F078
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    mulli r3, r5, 0x78
    add r3, r0, r3
    lwz r3, 0x30(r3)
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    lfs f2, 0xc(r4)
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    stw r3, 0x1964(r31)
    lwz r3, 0x1964(r31)
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lwz r3, 0x8(r29)
    mulli r3, r3, 0x78
    add r3, r0, r3
    lwz r3, 0x40(r3)
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    stw r3, 0x1964(r31)
    lwz r3, 0x196c(r31)
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lwz r3, 0x8(r29)
    mulli r3, r3, 0x78
    add r3, r0, r3
    lwz r3, 0x48(r3)
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r3, 0x2c(r1)
    stw r3, 0x196c(r31)
    lfs f1, 0x197c(r31)
    lwz r3, 0x8(r29)
    mulli r3, r3, 0x78
    add r3, r0, r3
    lwz r3, 0x44(r3)
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    fmuls f0, f2, f0
    stfs f0, 0x197c(r31)
    lfs f1, 0x1974(r31)
    lwz r3, 0x8(r29)
    mulli r3, r3, 0x78
    add r3, r0, r3
    lwz r0, 0x4c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    fmuls f0, f2, f0
    stfs f0, 0x1974(r31)
lbl_80071C1C:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x1d
    bne lbl_80071C90
    lwz r0, 0x164c(r29)
    cmpwi r0, 0x0
    bne lbl_80071C90
    lwz r0, 0x10(r29)
    cmpwi r0, 0x1
    bne lbl_80071C90
    add r4, r29, r30
    lwz r0, 0x1964(r4)
    lfd f1, lbl_8049F078
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049F080
    lfs f0, 0x10(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x1964(r4)
    li r0, 0x4e20
    stw r0, 0x196c(r4)
    lfs f0, 0x14(r3)
    stfs f0, 0x197c(r4)
lbl_80071C90:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80071CA8
asm void fn_80071CA8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r27, r3
    mr r28, r4
    mr r29, r6
    mr r30, r7
    mulli r0, r4, 0x350
    add r31, r3, r0
    lwz r0, 0x164c(r3)
    cmpw r0, r4
    beq lbl_80071F68
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x14(r4)
    cmpwi r0, 0x7
    beq lbl_80071F68
    cmpwi r0, 0x1
    bne lbl_80071D14
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r4)
    cmplwi r0, 0x12
    bne lbl_80071D14
    b lbl_80071F68
lbl_80071D14:
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r4)
    cmplwi r0, 0x1d
    bne lbl_80071D3C
    lwz r4, 0x74(r3)
    lis r3, fn_800401B8+0x248@ha
    addi r0, r3, fn_800401B8+0x248@l
    and r25, r4, r0
    b lbl_80071D4C
lbl_80071D3C:
    lwz r4, 0x74(r3)
    lis r3, lbl_8040020F@ha
    addi r0, r3, lbl_8040020F@l
    and r25, r4, r0
lbl_80071D4C:
    li r24, 0x0
    li r26, 0x0
lbl_80071D54:
    add r3, r27, r26
    lwz r3, 0x1658(r3)
    cmpwi r3, 0x0
    beq lbl_80071D88
    lwz r0, 0x114(r3)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_800341DC
    cmpwi r3, 0x0
    beq lbl_80071D88
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_80071D88:
    addi r24, r24, 0x1
    addi r26, r26, 0x350
    cmpwi r24, 0xa
    blt lbl_80071D54
    cmpwi r29, 0x0
    bne lbl_80071DD4
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r3, r27
    bl fn_8006AFA0
    stfs f1, 0x18(r1)
    mr r3, r27
    bl fn_8006AFE8
    stfs f1, 0x1c(r1)
    mr r3, r27
    bl fn_8006B030
    stfs f1, 0x20(r1)
lbl_80071DD4:
    stw r28, 0x164c(r27)
    lwz r0, 0x1654(r31)
    or r0, r0, r25
    stw r0, 0x74(r27)
    lwz r0, 0x1964(r31)
    stw r0, 0x24(r27)
    lwz r0, 0x1968(r31)
    stw r0, 0x40(r27)
    lwz r0, 0x196c(r31)
    stw r0, 0x48(r27)
    lfs f0, 0x1970(r31)
    stfs f0, 0x12c(r27)
    lfs f0, 0x1974(r31)
    stfs f0, 0x9a4(r27)
    lfs f0, 0x1978(r31)
    stfs f0, 0x9a8(r27)
    addi r3, r27, 0x648
    addi r4, r31, 0x1664
    li r5, 0x180
    bl memcpy
    addi r3, r27, 0x7c8
    addi r4, r31, 0x17e4
    li r5, 0x180
    bl memcpy
    li r3, 0x0
    li r0, 0x10
    mtctr r0
lbl_80071E40:
    add r4, r27, r3
    addi r4, r4, 0x7c8
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80071E5C
    stw r4, 0x948(r27)
lbl_80071E5C:
    addi r3, r3, 0x18
    bdnz lbl_80071E40
    cmpwi r29, 0x0
    bne lbl_80071EC0
    mr r3, r27
    bl fn_8006AFA0
    mr r3, r27
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    fneg f1, f0
    bl fn_8006A3D8
    mr r3, r27
    bl fn_8006AFE8
    mr r3, r27
    lfs f0, 0x1c(r1)
    fsubs f0, f1, f0
    fneg f1, f0
    bl fn_8006AA78
    mr r3, r27
    bl fn_8006B030
    mr r3, r27
    lfs f0, 0x20(r1)
    fsubs f0, f1, f0
    fneg f1, f0
    bl fn_8006AEA0
lbl_80071EC0:
    lwz r0, 0x1658(r31)
    cmpwi r0, 0x0
    bne lbl_80071EE0
    cmpwi r28, 0x1
    blt lbl_80071EE0
    lwz r0, 0x1658(r27)
    stw r0, 0x377c(r27)
    b lbl_80071EE4
lbl_80071EE0:
    stw r0, 0x377c(r27)
lbl_80071EE4:
    lwz r0, 0x1660(r31)
    cmpwi r0, 0x0
    bne lbl_80071F04
    cmpwi r28, 0x1
    blt lbl_80071F04
    lwz r0, 0x1660(r27)
    stw r0, 0x3780(r27)
    b lbl_80071F08
lbl_80071F04:
    stw r0, 0x3780(r27)
lbl_80071F08:
    cmplwi r30, 0x1
    bne lbl_80071F28
    lwz r3, 0x377c(r27)
    addi r4, r27, 0x84
    bl fn_80182518
    lwz r3, 0x377c(r27)
    lfs f1, 0xa0(r27)
    bl fn_80182220
lbl_80071F28:
    mr r3, r27
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_80071F50
    lwz r3, 0x377c(r27)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_800340D8
lbl_80071F50:
    lwz r3, 0x377c(r27)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, 0x165c(r31)
    bl fn_80034178
lbl_80071F68:
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80071F80
asm void fn_80071F80(s8 *arg0) {
    nofralloc
    li r4, 0x0
    mr r7, r4
    mr r6, r4
    mr r5, r4
    li r0, 0x40
    mtctr r0
lbl_80071F98:
    add r8, r3, r4
    stw r7, 0x0(r8)
    stw r6, 0x4(r8)
    stw r5, 0x8(r8)
    addi r4, r4, 0x14
    bdnz lbl_80071F98
    blr
}

// asm_to_cpp: fn_80071FD8
asm int fn_80071FD8() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    opword 0xF3E100A8
    stfd f30, 0x90(r1)
    opword 0xF3C10098
    stfd f29, 0x80(r1)
    opword 0xF3A10088
    stfd f28, 0x70(r1)
    opword 0xF3810078
    stfd f27, 0x60(r1)
    opword 0xF3610068
    addi r11, r1, 0x60
    bl _savegpr_14
    mr r15, r3
    addi r24, r3, 0xec0
    lwz r23, 0x13c0(r3)
    li r21, -0x1
    li r20, 0x0
    li r19, 0x0
    li r18, 0x0
    li r17, -0x1
    cmpwi r23, 0x0
    beq lbl_800729BC
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80072068
    lwz r0, 0x13ec(r3)
    cmpwi r0, 0x0
    bge lbl_80072068
    li r0, 0x0
    stw r0, 0x13c8(r3)
    stw r0, 0x13e4(r3)
    stw r0, 0x13e8(r3)
lbl_80072068:
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 8, 5
    stw r0, 0x68(r3)
    lwz r22, 0x158(r3)
    lwz r4, 0x13ec(r3)
    cmpwi r4, 0x0
    blt lbl_80072098
    oris r0, r0, 0x100
    stw r0, 0x68(r3)
    slwi r0, r4, 2
    add r4, r3, r0
    lwz r22, 0x13cc(r4)
lbl_80072098:
    li r26, 0x0
    lwz r3, 0xba8(r3)
    li r0, 0xf0
    nand r28, r3, r0
    la r3, lbl_8049F0A0
    lfs f28, 0x4(r3)
    lfd f29, lbl_8049F098
    lfs f30, 0x8(r3)
    lfs f31, 0xc(r3)
    lfs f27, lbl_8049F0A0
    lis r14, jumptable_8034AF08@ha
    li r31, 0x0
    li r30, -0x1
lbl_800720CC:
    lwz r4, 0x0(r23)
    cmpwi r4, 0x0
    beq lbl_800728E4
    lwz r3, 0x20(r15)
    addi r3, r3, 0x8
    bl fn_80072A10
    mr r29, r3
lbl_800720E8:
    lwz r3, 0x0(r24)
    slwi r0, r3, 2
    add r4, r29, r0
    lwz r0, 0x0(r4)
    cmplwi r0, 0x9
    bgt lbl_800728D0
    addi r5, r14, jumptable_8034AF08@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    stw r31, 0x0(r24)
    li r19, 0x1
    b lbl_800728D0
    lwz r0, 0x50(r15)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800721DC
    lwz r5, 0x4(r4)
    rlwinm r0, r5, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_80072150
    li r3, 0x1
    clrlwi r5, r5, 20
    addi r0, r5, 0x1
    b lbl_80072158
lbl_80072150:
    li r3, 0x0
    li r0, 0x1
lbl_80072158:
    slwi r6, r3, 2
    subf r5, r3, r0
    mtctr r5
    cmpw r3, r0
    bge lbl_800721DC
lbl_8007216C:
    add r5, r4, r6
    lwz r8, 0x4(r5)
    rlwinm r5, r8, 0, 19, 19
    cmpwi r5, 0x0
    beq lbl_800721A0
    lwz r7, 0x13e4(r15)
    lwz r5, 0x13e8(r15)
    cmpw r7, r5
    bne lbl_800721D0
    lwz r5, 0x54(r15)
    rlwinm r5, r5, 0, 25, 25
    cmpwi r5, 0x0
    bne lbl_800721D0
lbl_800721A0:
    clrlwi r5, r8, 20
    cmpw r22, r5
    bne lbl_800721D0
    stw r8, 0x8(r24)
    stw r30, 0xc(r24)
    stw r31, 0x10(r24)
    lwz r3, 0x0(r24)
    add r3, r0, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    b lbl_800728D0
lbl_800721D0:
    addi r3, r3, 0x1
    addi r6, r6, 0x4
    bdnz lbl_8007216C
lbl_800721DC:
    stw r31, 0x0(r24)
    b lbl_800728D0
    lwz r5, 0x13e4(r15)
    lwz r4, 0x13e8(r15)
    cmpw r4, r5
    bne lbl_800728D8
    lwz r0, 0x50(r15)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80072250
    lwz r3, 0x8(r24)
    clrlwi r0, r3, 20
    cmpw r0, r22
    beq lbl_8007221C
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_8007221C:
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80072258
    cmpw r5, r4
    beq lbl_80072238
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_80072238:
    lwz r0, 0x54(r15)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80072258
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_80072250:
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_80072258:
    lwz r3, 0xc(r24)
    cmpwi r3, 0x0
    blt lbl_8007228C
    lwz r0, 0x13ec(r15)
    cmpwi r0, 0x0
    bge lbl_8007228C
    lfs f0, 0x1d0(r15)
    fmuls f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    cmpw r3, r0
    blt lbl_800728D0
lbl_8007228C:
    lwz r0, 0x68(r15)
    oris r0, r0, 0x200
    stw r0, 0x68(r15)
    lwz r0, 0x0(r24)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r0, 0xc(r3)
    cmplwi r0, 0xa
    bgt lbl_8007234C
    lis r4, jumptable_8034AEDC@ha
    addi r4, r4, jumptable_8034AEDC@l
    slwi r0, r0, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r25, 0xb94(r15)
    b lbl_8007234C
    lwz r25, 0xb98(r15)
    b lbl_8007234C
    lwz r25, 0xba0(r15)
    b lbl_8007234C
    lwz r25, 0xba4(r15)
    b lbl_8007234C
    lwz r0, 0xb94(r15)
    clrlwi r4, r0, 28
    lwz r0, 0xb98(r15)
    rlwinm r0, r0, 0, 24, 27
    or r25, r4, r0
    b lbl_8007234C
    lwz r0, 0xb94(r15)
    clrlwi r3, r0, 28
    lwz r0, 0xb98(r15)
    rlwinm r0, r0, 0, 24, 27
    or r25, r3, r0
    b lbl_800728D0
    lwz r0, 0xb94(r15)
    clrlwi r4, r0, 28
    lwz r0, 0xba0(r15)
    rlwinm r0, r0, 0, 24, 27
    or r25, r4, r0
    b lbl_8007234C
    lwz r0, 0xb94(r15)
    clrlwi r4, r0, 28
    lwz r0, 0xb98(r15)
    rlwinm r0, r0, 0, 25, 27
    or r25, r4, r0
    b lbl_8007234C
    lwz r25, 0xb9c(r15)
lbl_8007234C:
    and r25, r25, r28
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80072370
    cmplwi r0, 0x1
    beq lbl_800723C0
    cmplwi r0, 0x2
    beq lbl_80072414
    b lbl_800728D0
lbl_80072370:
    lwz r0, 0x10(r3)
    and r4, r25, r0
    lwz r0, 0x14(r3)
    cmplw r4, r0
    bne lbl_800728D0
    lwz r3, 0x4(r24)
    addi r0, r3, 0x1
    stw r0, 0x4(r24)
    lwz r4, 0x0(r24)
    slwi r0, r4, 2
    add r5, r29, r0
    lwz r17, 0x14(r5)
    lwz r3, 0x4(r24)
    lwz r0, 0x8(r5)
    cmplw r3, r0
    blt lbl_800728D0
    addi r0, r4, 0x6
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    b lbl_800720E8
lbl_800723C0:
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    and r0, r25, r0
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_800728D0
    lwz r3, 0x4(r24)
    addi r0, r3, 0x1
    stw r0, 0x4(r24)
    lwz r4, 0x0(r24)
    slwi r0, r4, 2
    add r5, r29, r0
    lwz r17, 0x14(r5)
    lwz r3, 0x4(r24)
    lwz r0, 0x8(r5)
    cmplw r3, r0
    blt lbl_800728D0
    addi r0, r4, 0x6
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    b lbl_800720E8
lbl_80072414:
    lwz r0, 0x10(r3)
    and r4, r25, r0
    lwz r0, 0x14(r3)
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_800728D0
    lwz r0, 0x18(r3)
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_800728D0
    lwz r3, 0x4(r24)
    addi r0, r3, 0x1
    stw r0, 0x4(r24)
    lwz r4, 0x0(r24)
    slwi r0, r4, 2
    add r5, r29, r0
    lwz r17, 0x14(r5)
    lwz r3, 0x4(r24)
    lwz r0, 0x8(r5)
    cmplw r3, r0
    blt lbl_800728D0
    addi r0, r4, 0x7
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    b lbl_800720E8
    li r19, 0x0
    lwz r6, 0x4(r4)
    rlwinm r0, r6, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_800724C4
    li r3, 0x0
    clrlwi r5, r6, 20
    lwz r0, 0x13e8(r15)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800724C4
lbl_800724A4:
    add r4, r15, r3
    lwz r0, 0x13cc(r4)
    cmpw r5, r0
    bne lbl_800724BC
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_800724BC:
    addi r3, r3, 0x4
    bdnz lbl_800724A4
lbl_800724C4:
    clrlwi r21, r6, 20
    lwz r20, 0x10(r24)
    li r18, 0x0
    stw r21, 0x8(r24)
    stw r30, 0xc(r24)
    stw r31, 0x10(r24)
    lwz r3, 0x0(r24)
    addi r0, r3, 0x2
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    slwi r0, r3, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_800728D8
    b lbl_800728D0
    lwz r0, 0x4(r4)
    slwi r0, r0, 8
    stw r0, 0xc(r24)
    lwz r0, 0x0(r24)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r0, 0x8(r3)
    slwi r0, r0, 8
    stw r0, 0x10(r24)
    lwz r3, 0x0(r24)
    addi r0, r3, 0x3
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    b lbl_800728D0
    lwz r6, 0x13e4(r15)
    lwz r5, 0x13e8(r15)
    cmpw r5, r6
    bne lbl_800728D8
    lwz r0, 0x50(r15)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800725B4
    lwz r7, 0x54(r15)
    lwz r0, 0x14(r4)
    and r0, r7, r0
    cmpwi r0, 0x0
    beq lbl_800728D0
    lwz r3, 0x8(r24)
    clrlwi r0, r3, 20
    cmpw r0, r22
    beq lbl_80072584
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_80072584:
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800725BC
    cmpw r6, r5
    beq lbl_800725A0
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_800725A0:
    rlwinm r0, r7, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_800725BC
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_800725B4:
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_800725BC:
    lwz r3, 0xc(r24)
    cmpwi r3, 0x0
    blt lbl_800725F0
    lwz r0, 0x13ec(r15)
    cmpwi r0, 0x0
    bge lbl_800725F0
    lfs f0, 0x1d0(r15)
    fmuls f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    cmpw r3, r0
    blt lbl_800728D0
lbl_800725F0:
    lwz r0, 0x68(r15)
    oris r0, r0, 0x200
    stw r0, 0x68(r15)
    lwz r0, 0x0(r24)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r0, 0x8(r3)
    cmplwi r0, 0xa
    bgt lbl_800726B0
    lis r4, jumptable_8034AEB0@ha
    addi r4, r4, jumptable_8034AEB0@l
    slwi r0, r0, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r25, 0xb94(r15)
    b lbl_800726B0
    lwz r25, 0xb98(r15)
    b lbl_800726B0
    lwz r25, 0xba0(r15)
    b lbl_800726B0
    lwz r25, 0xba4(r15)
    b lbl_800726B0
    lwz r0, 0xb94(r15)
    clrlwi r4, r0, 28
    lwz r0, 0xb98(r15)
    rlwinm r0, r0, 0, 24, 27
    or r25, r4, r0
    b lbl_800726B0
    lwz r0, 0xb94(r15)
    clrlwi r3, r0, 28
    lwz r0, 0xb98(r15)
    rlwinm r0, r0, 0, 24, 27
    or r25, r3, r0
    b lbl_800728D0
    lwz r0, 0xb94(r15)
    clrlwi r4, r0, 28
    lwz r0, 0xba0(r15)
    rlwinm r0, r0, 0, 24, 27
    or r25, r4, r0
    b lbl_800726B0
    lwz r0, 0xb94(r15)
    clrlwi r4, r0, 28
    lwz r0, 0xb98(r15)
    rlwinm r0, r0, 0, 25, 27
    or r25, r4, r0
    b lbl_800726B0
    lwz r25, 0xb9c(r15)
lbl_800726B0:
    and r25, r25, r28
    lwz r0, 0xc(r3)
    and r4, r25, r0
    lwz r0, 0x10(r3)
    cmplw r4, r0
    bne lbl_800728D0
    lwz r3, 0x4(r24)
    addi r0, r3, 0x1
    stw r0, 0x4(r24)
    lwz r4, 0x0(r24)
    slwi r0, r4, 2
    add r5, r29, r0
    lwz r17, 0x10(r5)
    lwz r3, 0x4(r24)
    lwz r0, 0x4(r5)
    cmplw r3, r0
    blt lbl_800728D0
    addi r0, r4, 0x6
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    b lbl_800720E8
    lwz r0, 0x50(r15)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8007271C
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_8007271C:
    lwz r3, 0x3854(r15)
    cmpwi r3, 0x0
    beq lbl_80072780
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_80072758
    cmplwi r0, 0x1
    beq lbl_80072760
    cmplwi r0, 0x2
    beq lbl_80072768
    cmplwi r0, 0x3
    beq lbl_80072770
    cmplwi r0, 0x4
    beq lbl_80072778
    b lbl_80072784
lbl_80072758:
    lwz r16, 0x50(r3)
    b lbl_80072784
lbl_80072760:
    lwz r16, 0x178(r3)
    b lbl_80072784
lbl_80072768:
    lwz r16, 0x60(r3)
    b lbl_80072784
lbl_80072770:
    lwz r16, 0x54(r3)
    b lbl_80072784
lbl_80072778:
    lwz r16, 0x58(r3)
    b lbl_80072784
lbl_80072780:
    li r16, 0x0
lbl_80072784:
    lwz r0, 0x8(r4)
    and r0, r16, r0
    cmpwi r0, 0x0
    beq lbl_800728D0
    lwz r3, 0x0(r24)
    addi r0, r3, 0x3
    stw r0, 0x0(r24)
    b lbl_800720E8
    li r19, 0x0
    lwz r7, 0x4(r4)
    rlwinm r0, r7, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_800727F0
    li r3, 0x0
    clrlwi r6, r7, 20
    lwz r0, 0x13e8(r15)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800727F0
lbl_800727D0:
    add r5, r15, r3
    lwz r0, 0x13cc(r5)
    cmpw r6, r0
    bne lbl_800727E8
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_800727E8:
    addi r3, r3, 0x4
    bdnz lbl_800727D0
lbl_800727F0:
    clrlwi r21, r7, 20
    lwz r20, 0x10(r24)
    lwz r18, 0x8(r4)
    stw r21, 0x8(r24)
    stw r30, 0xc(r24)
    stw r31, 0x10(r24)
    lwz r3, 0x0(r24)
    addi r0, r3, 0x3
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    slwi r0, r3, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_800728D8
    b lbl_800728D0
    lwz r27, 0x4(r4)
    mr r3, r15
    bl fn_8006AFE8
    fmuls f1, f28, f1
    xoris r0, r27, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f30
    fsubs f0, f0, f31
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80072878
    lwz r3, 0x0(r24)
    addi r0, r3, 0x2
    stw r0, 0x0(r24)
    b lbl_800720E8
lbl_80072878:
    stw r31, 0x0(r24)
    b lbl_800728D0
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_800728B0
    lwz r5, 0x164c(r15)
    lwz r0, 0x8(r4)
    cmplw r5, r0
    bne lbl_800728A4
    stw r31, 0x0(r24)
    b lbl_800728D0
lbl_800728A4:
    addi r0, r3, 0x4
    stw r0, 0x0(r24)
    b lbl_800720E8
lbl_800728B0:
    lwz r5, 0x164c(r15)
    lwz r0, 0x8(r4)
    cmplw r5, r0
    bne lbl_800728CC
    addi r0, r3, 0x4
    stw r0, 0x0(r24)
    b lbl_800720E8
lbl_800728CC:
    stw r31, 0x0(r24)
lbl_800728D0:
    addi r23, r23, 0x4
    addi r24, r24, 0x14
lbl_800728D8:
    addi r26, r26, 0x1
    cmpwi r26, 0x40
    blt lbl_800720CC
lbl_800728E4:
    cmpwi r19, 0x0
    beq lbl_80072908
    addi r4, r15, 0xec0
    li r3, 0x0
    li r0, 0x40
    mtctr r0
lbl_800728FC:
    stw r3, 0x0(r4)
    addi r4, r4, 0x14
    bdnz lbl_800728FC
lbl_80072908:
    cmpwi r21, 0x0
    blt lbl_800729BC
    lwz r3, 0x13e8(r15)
    lwz r0, 0x13e4(r15)
    cmpw r3, r0
    bne lbl_800729BC
    lwz r0, 0x54(r15)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80072944
    lwz r0, 0x13ec(r15)
    cmpwi r0, 0x0
    bge lbl_80072944
    lwz r0, 0x184(r15)
    stw r0, 0x13c8(r15)
lbl_80072944:
    lwz r0, 0x13e8(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    stw r21, 0x13cc(r3)
    lwz r0, 0x13e8(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    stw r17, 0x13f0(r3)
    lwz r0, 0x13e8(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    stw r20, 0x13d4(r3)
    lwz r0, 0x13e8(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    stw r18, 0x13dc(r3)
    lwz r3, 0x13e8(r15)
    stw r3, 0x13ec(r15)
    addi r0, r3, 0x1
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x13e8(r15)
    lwz r0, 0xeb0(r15)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_800729BC
    mr r3, r15
    bl fn_80072A6C
lbl_800729BC:
    li r0, 0xa8
    opword 0x13E1000C
    lfd f31, 0xa0(r1)
    li r0, 0x98
    opword 0x13C1000C
    lfd f30, 0x90(r1)
    li r0, 0x88
    opword 0x13A1000C
    lfd f29, 0x80(r1)
    li r0, 0x78
    opword 0x1381000C
    lfd f28, 0x70(r1)
    li r0, 0x68
    opword 0x1361000C
    lfd f27, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: fn_80072A30
asm void fn_80072A30(s8 *arg0) {
    nofralloc
    li r4, 0x0
    mr r8, r4
    mr r7, r4
    mr r6, r4
    mr r5, r4
    li r0, 0x30
    mtctr r0
lbl_80072A4C:
    add r9, r3, r4
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    addi r4, r4, 0x10
    bdnz lbl_80072A4C
    blr
}
