#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK _restgpr_24();                       /* extern */
M2C_UNK _restgpr_25();                       /* extern */
s32 _restgpr_28();                           /* extern */
s32 _restgpr_29();                           /* extern */
u64 _savegpr_24();                                  /* extern */
f32 _savegpr_25();                                  /* extern */
u64 _savegpr_28();                                  /* extern */
u64 _savegpr_29();                                  /* extern */
M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_804A0140;
extern M2C_UNK lbl_804A0170;

void fn_800E22E4();
s32 fn_800E22EC();
s32 fn_800E24C0();
void fn_800E2700();
void fn_800E2ACC();
s32 fn_800E2AD4();
s32 fn_800E3114();
void fn_800E3418();
void fn_800E3EA0();
void fn_800E4A44();
void fn_800E52E0();
void fn_800E5DC0();
void fn_800E68F8();

void fn_800E22E4(s32 arg0, s32 arg1) {
    fn_800E22EC(arg0, arg1, NULL);
}

s32 fn_800E22EC(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x1A, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0x168, 0);
        memset(var_r31, 0, 0x168);
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 0xA3);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 0xA3);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0xA0);
        M2C_FIELD(var_r31, s32 *, 0x24) = fn_80181504(arg0, 0xA0);
        fn_8017375C((s32) (var_r31 + 0x28), M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x58), (s32) (var_r31 + 0x28));
        M2C_FIELD(var_r31, s8 **, 0x88) = fn_8018149C(arg0, 0xA3);
        M2C_FIELD(var_r31, s32 *, 0x8C) = fn_80181504(arg0, 0xA3);
        M2C_FIELD(var_r31, s8 **, 0x90) = fn_8018149C(arg0, 0xA1);
        M2C_FIELD(var_r31, s32 *, 0x94) = fn_80181504(arg0, 0xA1);
        fn_8017375C((s32) (var_r31 + 0x98), M2C_FIELD(var_r31, s32 *, 0x8C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x90) + 0x50));
        fn_801734E4((s32) (var_r31 + 0xC8), (s32) (var_r31 + 0x98));
        M2C_FIELD(var_r31, s8 **, 0xF8) = fn_8018149C(arg0, 0xA3);
        M2C_FIELD(var_r31, s32 *, 0xFC) = fn_80181504(arg0, 0xA3);
        M2C_FIELD(var_r31, s8 **, 0x100) = fn_8018149C(arg0, 0xA2);
        M2C_FIELD(var_r31, s32 *, 0x104) = fn_80181504(arg0, 0xA2);
        fn_8017375C((s32) (var_r31 + 0x108), M2C_FIELD(var_r31, s32 *, 0xFC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x100) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x138), (s32) (var_r31 + 0x108));
        fn_800F5B14(arg0, var_r31, 0x1A, 0);
        return 0;
    }
    return fn_800E24C0((s32) arg0, arg1, (s32) temp_r3);
}



void fn_800E2ACC(s32 arg0, s32 arg1) {
    fn_800E2AD4(arg0, arg1, NULL);
}

s32 fn_800E2AD4(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = arg2;
    temp_r3 = fn_800F5B78(arg0, 0x56, 0);
    if (temp_r3 == NULL) {
        var_r31 = var_r31 ? var_r31 : fn_80170E2C(M2C_FIELD(arg0, s32 *, 0x110), 0xA48, 0);
        memset(var_r31, 0, 0xA48);
        M2C_FIELD(var_r31, s8 **, 0x18) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x1C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x20) = fn_8018149C(arg0, 0xA6);
        M2C_FIELD(var_r31, s8 **, 0x24) = fn_8018149C(arg0, 0xA7);
        M2C_FIELD(var_r31, s8 **, 0x28) = fn_8018149C(arg0, 0xA8);
        M2C_FIELD(var_r31, s8 **, 0x2C) = fn_8018149C(arg0, 0xA9);
        M2C_FIELD(var_r31, s32 *, 0x30) = fn_80181504(arg0, 0xA6);
        M2C_FIELD(var_r31, s32 *, 0x34) = fn_80181504(arg0, 0xA7);
        M2C_FIELD(var_r31, s32 *, 0x38) = fn_80181504(arg0, 0xA8);
        M2C_FIELD(var_r31, s32 *, 0x3C) = fn_80181504(arg0, 0xA9);
        fn_8017375C((s32) (var_r31 + 0x40), M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x100), (s32) (var_r31 + 0x40));
        M2C_FIELD(var_r31, s8 **, 0x1C0) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x1C4) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x1C8) = fn_8018149C(arg0, 0xA2);
        M2C_FIELD(var_r31, s8 **, 0x1CC) = fn_8018149C(arg0, 0xA3);
        M2C_FIELD(var_r31, s8 **, 0x1D0) = fn_8018149C(arg0, 0xA4);
        M2C_FIELD(var_r31, s8 **, 0x1D4) = fn_8018149C(arg0, 0xA5);
        M2C_FIELD(var_r31, s32 *, 0x1D8) = fn_80181504(arg0, 0xA2);
        M2C_FIELD(var_r31, s32 *, 0x1DC) = fn_80181504(arg0, 0xA3);
        M2C_FIELD(var_r31, s32 *, 0x1E0) = fn_80181504(arg0, 0xA4);
        M2C_FIELD(var_r31, s32 *, 0x1E4) = fn_80181504(arg0, 0xA5);
        fn_8017375C((s32) (var_r31 + 0x1E8), M2C_FIELD(var_r31, s32 *, 0x1C4) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x1C8) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x2A8), (s32) (var_r31 + 0x1E8));
        M2C_FIELD(var_r31, s8 **, 0x368) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x36C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x370) = fn_8018149C(arg0, 0xAA);
        M2C_FIELD(var_r31, s8 **, 0x374) = fn_8018149C(arg0, 0xAB);
        M2C_FIELD(var_r31, s8 **, 0x378) = fn_8018149C(arg0, 0xAC);
        M2C_FIELD(var_r31, s8 **, 0x37C) = fn_8018149C(arg0, 0xAD);
        M2C_FIELD(var_r31, s32 *, 0x380) = fn_80181504(arg0, 0xAA);
        M2C_FIELD(var_r31, s32 *, 0x384) = fn_80181504(arg0, 0xAB);
        M2C_FIELD(var_r31, s32 *, 0x388) = fn_80181504(arg0, 0xAC);
        M2C_FIELD(var_r31, s32 *, 0x38C) = fn_80181504(arg0, 0xAD);
        fn_8017375C((s32) (var_r31 + 0x390), M2C_FIELD(var_r31, s32 *, 0x36C) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x370) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x450), (s32) (var_r31 + 0x390));
        M2C_FIELD(var_r31, s8 **, 0x510) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x514) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x518) = fn_8018149C(arg0, 0xB2);
        M2C_FIELD(var_r31, s8 **, 0x51C) = fn_8018149C(arg0, 0xB3);
        M2C_FIELD(var_r31, s8 **, 0x520) = fn_8018149C(arg0, 0xB4);
        M2C_FIELD(var_r31, s8 **, 0x524) = fn_8018149C(arg0, 0xB5);
        M2C_FIELD(var_r31, s32 *, 0x528) = fn_80181504(arg0, 0xB2);
        M2C_FIELD(var_r31, s32 *, 0x52C) = fn_80181504(arg0, 0xB3);
        M2C_FIELD(var_r31, s32 *, 0x530) = fn_80181504(arg0, 0xB4);
        M2C_FIELD(var_r31, s32 *, 0x534) = fn_80181504(arg0, 0xB5);
        fn_8017375C((s32) (var_r31 + 0x538), M2C_FIELD(var_r31, s32 *, 0x514) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x518) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x5F8), (s32) (var_r31 + 0x538));
        M2C_FIELD(var_r31, s8 **, 0x6B8) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x6BC) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x6C0) = fn_8018149C(arg0, 0xAE);
        M2C_FIELD(var_r31, s8 **, 0x6C4) = fn_8018149C(arg0, 0xAF);
        M2C_FIELD(var_r31, s8 **, 0x6C8) = fn_8018149C(arg0, 0xB0);
        M2C_FIELD(var_r31, s8 **, 0x6CC) = fn_8018149C(arg0, 0xB1);
        M2C_FIELD(var_r31, s32 *, 0x6D0) = fn_80181504(arg0, 0xAE);
        M2C_FIELD(var_r31, s32 *, 0x6D4) = fn_80181504(arg0, 0xAF);
        M2C_FIELD(var_r31, s32 *, 0x6D8) = fn_80181504(arg0, 0xB0);
        M2C_FIELD(var_r31, s32 *, 0x6DC) = fn_80181504(arg0, 0xB1);
        fn_8017375C((s32) (var_r31 + 0x6E0), M2C_FIELD(var_r31, s32 *, 0x6BC) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x6C0) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x7A0), (s32) (var_r31 + 0x6E0));
        M2C_FIELD(var_r31, s8 **, 0x860) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0x864) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0x868) = fn_8018149C(arg0, 0xB6);
        M2C_FIELD(var_r31, s8 **, 0x86C) = fn_8018149C(arg0, 0xB7);
        M2C_FIELD(var_r31, s8 **, 0x870) = fn_8018149C(arg0, 0xB8);
        M2C_FIELD(var_r31, s8 **, 0x874) = fn_8018149C(arg0, 0xB9);
        M2C_FIELD(var_r31, s32 *, 0x878) = fn_80181504(arg0, 0xB6);
        M2C_FIELD(var_r31, s32 *, 0x87C) = fn_80181504(arg0, 0xB7);
        M2C_FIELD(var_r31, s32 *, 0x880) = fn_80181504(arg0, 0xB8);
        M2C_FIELD(var_r31, s32 *, 0x884) = fn_80181504(arg0, 0xB9);
        fn_8017375C((s32) (var_r31 + 0x888), M2C_FIELD(var_r31, s32 *, 0x864) + 0x224, (s32) (M2C_FIELD(var_r31, s8 **, 0x868) + 0x50));
        fn_801734E4((s32) (var_r31 + 0x948), (s32) (var_r31 + 0x888));
        M2C_FIELD(var_r31, s8 **, 0xA08) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0xA0C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0xA10) = fn_8018149C(arg0, 0x12);
        M2C_FIELD(var_r31, s8 **, 0xA14) = fn_8018149C(arg0, 0x13);
        M2C_FIELD(var_r31, s8 **, 0xA18) = fn_8018149C(arg0, 0x14);
        M2C_FIELD(var_r31, s32 *, 0xA1C) = fn_80181504(arg0, 0x12);
        M2C_FIELD(var_r31, s32 *, 0xA20) = fn_80181504(arg0, 0x13);
        M2C_FIELD(var_r31, s32 *, 0xA24) = fn_80181504(arg0, 0x14);
        M2C_FIELD(var_r31, s8 **, 0xA28) = fn_8018149C(arg0, 3);
        M2C_FIELD(var_r31, s32 *, 0xA2C) = fn_80181504(arg0, 3);
        M2C_FIELD(var_r31, s8 **, 0xA30) = fn_8018149C(arg0, 0xF);
        M2C_FIELD(var_r31, s8 **, 0xA34) = fn_8018149C(arg0, 0x10);
        M2C_FIELD(var_r31, s8 **, 0xA38) = fn_8018149C(arg0, 0x11);
        M2C_FIELD(var_r31, s32 *, 0xA3C) = fn_80181504(arg0, 0xF);
        M2C_FIELD(var_r31, s32 *, 0xA40) = fn_80181504(arg0, 0x10);
        M2C_FIELD(var_r31, s32 *, 0xA44) = fn_80181504(arg0, 0x11);
        fn_800F5B14(arg0, var_r31, 0x56, 0);
        return 0;
    }
    return fn_800E3114((s32) arg0, arg1, (s32) temp_r3);
}








// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_80018AF4();
extern void fn_80018AF8();
extern void fn_80018AFC();
extern void fn_80018B00();
extern void fn_80018B04();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_80020D20();
extern void fn_800515D8();
extern void fn_800515DC();
s32 fn_800E24C0();
void fn_800E2700();
s32 fn_800E3114();
void fn_800E3418();
void fn_800E3EA0();
void fn_800E4A44();
void fn_800E52E0();
void fn_800E5DC0();
void fn_800E68F8();
extern void fn_80165CC4();
extern void fn_80173754();
extern void fn_80190874();

// asm_to_cpp: fn_800E24C0
asm s32 fn_800E24C0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xd0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_29
    mr r29, r4
    mr r30, r5
    lfs f31, lbl_804A0140
    la r6, lbl_804A0140
    lfs f1, 0x4(r6)
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f31, 0x90(r1)
    lfs f0, 0x8(r6)
    stfs f0, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f1, 0x80(r1)
    stfs f31, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f1, 0x8c(r1)
    lfs f0, 0xc(r6)
    fmuls f31, f0, f1
    lfs f30, 0x10(r6)
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r7, r1, 0x60
    lwz r3, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r6, r1, 0x70
    lwz r0, 0x24(r5)
    stw r0, 0x8(r1)
    addi r0, r5, 0x58
    stw r0, 0xc(r1)
    addi r0, r5, 0x28
    stw r0, 0x10(r1)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    lwz r8, 0x18(r30)
    lwz r9, 0x1c(r30)
    lwz r10, 0x20(r30)
    bl fn_800E2700
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r7, r1, 0x40
    lwz r3, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r6, r1, 0x50
    lwz r0, 0x104(r30)
    stw r0, 0x8(r1)
    addi r0, r30, 0x138
    stw r0, 0xc(r1)
    addi r0, r30, 0x108
    stw r0, 0x10(r1)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    lwz r8, 0xf8(r30)
    lwz r9, 0xfc(r30)
    lwz r10, 0x100(r30)
    bl fn_800E2700
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r7, r1, 0x20
    lwz r3, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r6, r1, 0x30
    lwz r0, 0x94(r30)
    stw r0, 0x8(r1)
    addi r0, r30, 0xc8
    stw r0, 0xc(r1)
    addi r0, r30, 0x98
    stw r0, 0x10(r1)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    lwz r8, 0x88(r30)
    lwz r9, 0x8c(r30)
    lwz r10, 0x90(r30)
    bl fn_800E2700
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_29
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E2700
asm void fn_800E2700() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x110
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_25
    mr r3, r12
    mr r25, r5
    mr r26, r6
    mr r27, r7
    fmr f30, f1
    fmr f31, f2
    mr r28, r9
    mr r29, r10
    lwz r30, 0xc(r3)
    lwz r31, 0x10(r3)
    addi r3, r1, 0x60
    lfs f1, lbl_804A0140
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0140
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0140
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0140
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0140
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0140
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    mr r3, r30
    mr r4, r31
    bl fn_801734E4
    addi r3, r1, 0x70
    addi r4, r28, 0x224
    addi r5, r29, 0x50
    bl fn_8017375C
    mr r3, r31
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    mr r4, r31
    mr r5, r27
    bl fn_80018AF8
    addi r3, r1, 0x50
    mr r4, r30
    mr r5, r27
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x60
    addi r5, r1, 0x50
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f30
    bl fn_80018B08
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r26
    bl fn_80018B00
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x30
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r25, 0x6b
    bge lbl_800E28D0
    cmpwi r25, 0x2c
    bge lbl_800E28B8
    cmpwi r25, 0x12
    bge lbl_800E28AC
    cmpwi r25, 0x10
    bge lbl_800E2904
    b lbl_800E2990
lbl_800E28AC:
    cmpwi r25, 0x2a
    bge lbl_800E2904
    b lbl_800E2990
lbl_800E28B8:
    cmpwi r25, 0x2e
    beq lbl_800E2904
    blt lbl_800E2990
    cmpwi r25, 0x66
    bge lbl_800E2904
    b lbl_800E2990
lbl_800E28D0:
    cmpwi r25, 0x8a
    beq lbl_800E2990
    bge lbl_800E28FC
    cmpwi r25, 0x86
    bge lbl_800E28F0
    cmpwi r25, 0x84
    bge lbl_800E2904
    b lbl_800E2990
lbl_800E28F0:
    cmpwi r25, 0x88
    bge lbl_800E2904
    b lbl_800E2990
lbl_800E28FC:
    cmpwi r25, 0x8c
    bge lbl_800E2990
lbl_800E2904:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0140
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800E291C
    stfs f0, 0x10(r1)
lbl_800E291C:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0140
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E2938
    stfs f0, 0x14(r1)
lbl_800E2938:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0140
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800E2954
    stfs f0, 0x14(r1)
lbl_800E2954:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0140
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E2970
    stfs f0, 0x18(r1)
lbl_800E2970:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0140
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800E2A1C
    stfs f0, 0x18(r1)
    b lbl_800E2A1C
lbl_800E2990:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0140
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E29AC
    stfs f0, 0x10(r1)
lbl_800E29AC:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0140
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E29C8
    stfs f0, 0x14(r1)
lbl_800E29C8:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0140
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800E29E4
    stfs f0, 0x14(r1)
lbl_800E29E4:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0140
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800E2A00
    stfs f0, 0x18(r1)
lbl_800E2A00:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0140
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800E2A1C
    stfs f0, 0x18(r1)
lbl_800E2A1C:
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r29)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r29)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r29)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r29)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r29)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r29)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r29)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r29)
    addi r3, r29, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r0, 0x0(r29)
    ori r0, r0, 0xe01
    stw r0, 0x0(r29)
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E3114
asm s32 fn_800E3114() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_28
    mr r29, r4
    mr r30, r5
    la r28, lbl_804A0170
    lfs f30, 0x4(r28)
    li r3, 0xfa
    li r4, 0x118
    bl fn_80165CC4
    lwz r3, 0x3780(r29)
    lwz r31, 0x20(r3)
    lfs f1, lbl_804A0170
    stfs f1, 0xe0(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0xe4(r1)
    stfs f1, 0xe8(r1)
    fmr f0, f30
    stfs f0, 0xec(r1)
    stfs f0, 0xd0(r1)
    stfs f1, 0xd4(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xdc(r1)
    lfs f0, 0xc(r28)
    fmuls f31, f0, f30
    lfs f30, 0x10(r28)
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E3EA0
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E3418
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E4A44
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E5DC0
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E52E0
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E68F8
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E3418
asm void fn_800E3418() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x280
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0170
    lfs f16, 0x4(r3)
    lfs f17, 0x20(r3)
    lfs f18, lbl_804A0170
    lfs f21, 0x18(r3)
    lfs f20, 0x2c(r3)
    lfs f22, 0x34(r3)
    lfs f23, 0x14(r3)
    lfs f24, 0x38(r3)
    lfs f26, 0x1c(r3)
    lfs f31, 0x48(r3)
    lfs f0, 0x4c(r3)
    stfd f0, 0x120(r1)
    lfs f0, 0x50(r3)
    stfd f0, 0x128(r1)
    lfs f0, 0x54(r3)
    stfd f0, 0x130(r1)
    lfs f29, 0x24(r3)
    lfs f30, 0x44(r3)
    lfs f28, 0x40(r3)
    lfs f27, 0x3c(r3)
    lfs f25, 0x30(r3)
    lfs f19, 0x28(r3)
lbl_800E35DC:
    add r3, r27, r24
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800E3640
    add r4, r27, r25
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x40
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800E36DC
lbl_800E3640:
    add r4, r27, r25
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800E36A4
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x20(r4)
    lwz r4, 0x30(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x30(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x30(r4)
    addi r4, r4, 0x224
    lwz r5, 0x20(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800E36A4:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x30(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x40
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800E36DC:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x40
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x100
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f14
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xa1c(r27)
    addi r4, r4, 0x224
    lwz r5, 0xa14(r27)
    addi r5, r5, 0x50
    bl fn_8017375C
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f18, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x0
    bne lbl_800E37E0
    stfs f18, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f18, 0x3c(r1)
    b lbl_800E380C
lbl_800E37E0:
    cmpwi r31, 0x1
    bne lbl_800E37FC
    stfs f18, 0x30(r1)
    stfs f21, 0x34(r1)
    stfs f21, 0x38(r1)
    stfs f18, 0x3c(r1)
    b lbl_800E380C
lbl_800E37FC:
    stfs f18, 0x30(r1)
    stfs f26, 0x34(r1)
    stfs f26, 0x38(r1)
    stfs f18, 0x3c(r1)
lbl_800E380C:
    cmpwi r28, 0x8a
    beq lbl_800E3B9C
    bge lbl_800E3888
    cmpwi r28, 0x66
    bge lbl_800E3854
    cmpwi r28, 0x2c
    bge lbl_800E3848
    cmpwi r28, 0x12
    bge lbl_800E383C
    cmpwi r28, 0x10
    bge lbl_800E38E8
    b lbl_800E3B9C
lbl_800E383C:
    cmpwi r28, 0x2a
    bge lbl_800E38E8
    b lbl_800E3B9C
lbl_800E3848:
    cmpwi r28, 0x2e
    beq lbl_800E38E8
    b lbl_800E3B9C
lbl_800E3854:
    cmpwi r28, 0x84
    bge lbl_800E3874
    cmpwi r28, 0x6d
    beq lbl_800E38E8
    bge lbl_800E3B9C
    cmpwi r28, 0x6b
    bge lbl_800E3B9C
    b lbl_800E38E8
lbl_800E3874:
    cmpwi r28, 0x88
    bge lbl_800E38E8
    cmpwi r28, 0x86
    bge lbl_800E3B9C
    b lbl_800E38E8
lbl_800E3888:
    cmpwi r28, 0x1b5
    beq lbl_800E3B9C
    bge lbl_800E38C4
    cmpwi r28, 0x160
    beq lbl_800E393C
    bge lbl_800E38B8
    cmpwi r28, 0xa3
    beq lbl_800E3AB4
    bge lbl_800E3B9C
    cmpwi r28, 0x8c
    bge lbl_800E3B9C
    b lbl_800E38E8
lbl_800E38B8:
    cmpwi r28, 0x1b4
    bge lbl_800E38E8
    b lbl_800E3B9C
lbl_800E38C4:
    cmpwi r28, 0x1ec
    beq lbl_800E3970
    bge lbl_800E38DC
    cmpwi r28, 0x1b7
    bge lbl_800E3B9C
    b lbl_800E38E8
lbl_800E38DC:
    cmpwi r28, 0x23b
    beq lbl_800E38E8
    b lbl_800E3B9C
lbl_800E38E8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800E38FC
    stfs f16, 0x20(r1)
lbl_800E38FC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800E3910
    stfs f17, 0x24(r1)
lbl_800E3910:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800E3924
    stfs f18, 0x24(r1)
lbl_800E3924:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E3CD8
    stfs f29, 0x28(r1)
    b lbl_800E3CD8
lbl_800E393C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f16
    bge lbl_800E394C
    stfs f16, 0x20(r1)
lbl_800E394C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    bge lbl_800E395C
    stfs f17, 0x24(r1)
lbl_800E395C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    ble lbl_800E3CD8
    stfs f19, 0x24(r1)
    b lbl_800E3CD8
lbl_800E3970:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E3A4C
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f20
    bge lbl_800E39E4
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800E39A4
    stfs f21, 0x20(r1)
lbl_800E39A4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800E39B8
    stfs f17, 0x24(r1)
lbl_800E39B8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800E39CC
    stfs f18, 0x24(r1)
lbl_800E39CC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800E3CD8
    stfs f25, 0x28(r1)
    b lbl_800E3CD8
lbl_800E39E4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800E39F8
    stfs f21, 0x20(r1)
lbl_800E39F8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800E3A0C
    stfs f22, 0x24(r1)
lbl_800E3A0C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E3A20
    stfs f23, 0x24(r1)
lbl_800E3A20:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E3A34
    stfs f24, 0x28(r1)
lbl_800E3A34:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E3CD8
    stfs f26, 0x28(r1)
    b lbl_800E3CD8
lbl_800E3A4C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800E3A60
    stfs f21, 0x20(r1)
lbl_800E3A60:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800E3A74
    stfs f22, 0x24(r1)
lbl_800E3A74:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E3A88
    stfs f23, 0x24(r1)
lbl_800E3A88:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E3A9C
    stfs f24, 0x28(r1)
lbl_800E3A9C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E3CD8
    stfs f26, 0x28(r1)
    b lbl_800E3CD8
lbl_800E3AB4:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E3B1C
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800E3ADC
    stfs f21, 0x20(r1)
lbl_800E3ADC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800E3AF0
    stfs f17, 0x24(r1)
lbl_800E3AF0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800E3B04
    stfs f18, 0x24(r1)
lbl_800E3B04:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800E3CD8
    stfs f25, 0x28(r1)
    b lbl_800E3CD8
lbl_800E3B1C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800E3B30
    stfs f21, 0x20(r1)
lbl_800E3B30:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800E3B44
    stfs f22, 0x24(r1)
lbl_800E3B44:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E3B58
    stfs f23, 0x24(r1)
lbl_800E3B58:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E3B6C
    stfs f24, 0x28(r1)
lbl_800E3B6C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E3B80
    stfs f26, 0x28(r1)
lbl_800E3B80:
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f27
    ble lbl_800E3CD8
    cmpwi r31, 0x2
    bne lbl_800E3CD8
    stfs f28, 0x28(r1)
    b lbl_800E3CD8
lbl_800E3B9C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800E3BB0
    stfs f21, 0x20(r1)
lbl_800E3BB0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800E3BC4
    stfs f22, 0x24(r1)
lbl_800E3BC4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800E3BD8
    stfs f21, 0x24(r1)
lbl_800E3BD8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E3BEC
    stfs f24, 0x28(r1)
lbl_800E3BEC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E3C00
    stfs f26, 0x28(r1)
lbl_800E3C00:
    cmpwi r28, 0x3e
    beq lbl_800E3C5C
    bge lbl_800E3C38
    cmpwi r28, 0x32
    bge lbl_800E3C2C
    cmpwi r28, 0x3
    bge lbl_800E3C20
    b lbl_800E3CD8
lbl_800E3C20:
    cmpwi r28, 0x30
    bge lbl_800E3C5C
    b lbl_800E3CD8
lbl_800E3C2C:
    cmpwi r28, 0x3c
    beq lbl_800E3C5C
    b lbl_800E3CD8
lbl_800E3C38:
    cmpwi r28, 0x1c1
    beq lbl_800E3C90
    bge lbl_800E3C50
    cmpwi r28, 0x100
    beq lbl_800E3C90
    b lbl_800E3CD8
lbl_800E3C50:
    cmpwi r28, 0x1e1
    beq lbl_800E3C90
    b lbl_800E3CD8
lbl_800E3C5C:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E3CD8
    cmpwi r31, 0x0
    bne lbl_800E3CD8
    add r4, r27, r24
    lwz r3, 0x20(r4)
    stfs f29, 0x10(r3)
    lwz r3, 0x20(r4)
    stfs f30, 0x14(r3)
    b lbl_800E3CD8
lbl_800E3C90:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E3CD8
    cmpwi r31, 0x0
    bne lbl_800E3CD8
    add r4, r27, r24
    lwz r3, 0x20(r4)
    stfs f31, 0x10(r3)
    lwz r3, 0x20(r4)
    lfd f0, 0x120(r1)
    stfs f0, 0x14(r3)
    lwz r3, 0x20(r4)
    lfd f0, 0x128(r1)
    stfs f0, 0x18(r3)
    lfd f0, 0x130(r1)
    stfs f0, 0x54(r1)
lbl_800E3CD8:
    cmpwi r31, 0x2
    bge lbl_800E3CFC
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800E3CFC
    stfs f0, 0x28(r1)
lbl_800E3CFC:
    add r4, r27, r24
    lwz r3, 0x20(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800E35DC
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E3EA0
asm void fn_800E3EA0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2f0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0170
    lfs f18, 0x4(r3)
    lfs f19, 0x60(r3)
    lfs f21, 0x64(r3)
    lfs f22, 0x18(r3)
    lfs f23, 0x68(r3)
    lfs f24, 0x34(r3)
    lfs f25, 0x14(r3)
    lfs f26, 0x20(r3)
    lfs f0, 0x10(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x74(r3)
    stfd f0, 0x140(r1)
    lfs f29, 0x2c(r3)
    lfs f16, lbl_804A0170
    lfs f17, 0x5c(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x120(r1)
    lfs f0, 0xc(r3)
    stfd f0, 0x128(r1)
    lfs f31, 0x90(r3)
    lfs f30, 0x8c(r3)
    lfs f0, 0x94(r3)
    stfd f0, 0x180(r1)
    lfs f28, 0x38(r3)
    lfs f0, 0x88(r3)
    stfd f0, 0x178(r1)
    lfs f0, 0x84(r3)
    stfd f0, 0x170(r1)
    lfs f0, 0x80(r3)
    stfd f0, 0x168(r1)
    lfs f0, 0x7c(r3)
    stfd f0, 0x160(r1)
    lfs f0, 0x44(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x150(r1)
    lfs f0, 0xa0(r3)
    stfd f0, 0x1a0(r1)
    lfs f0, 0x9c(r3)
    stfd f0, 0x198(r1)
    lfs f0, 0x98(r3)
    stfd f0, 0x188(r1)
    lfs f0, 0x24(r3)
    stfd f0, 0x190(r1)
    lfs f27, 0x28(r3)
    lfs f0, 0x70(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x6c(r3)
    stfd f0, 0x130(r1)
    lfs f20, 0x4c(r3)
lbl_800E40D4:
    add r3, r27, r24
    lwz r3, 0x1c8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    add r4, r27, r25
    addi r3, r4, 0x2a8
    addi r4, r4, 0x1e8
    bl fn_801734E4
    cmpwi r31, 0x0
    bne lbl_800E4128
    addi r3, r1, 0xc0
    lwz r4, 0x1c4(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    b lbl_800E41A4
lbl_800E4128:
    cmpwi r31, 0x2
    blt lbl_800E417C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x1c8(r4)
    lwz r4, 0x1d8(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x1d8(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1d8(r4)
    addi r4, r4, 0x224
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800E417C:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1d8(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
lbl_800E41A4:
    add r3, r27, r25
    addi r3, r3, 0x1e8
    addi r4, r1, 0xc0
    bl fn_801734E4
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x1e8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x2a8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f14
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800E425C
    cmpwi r31, 0x0
    bge lbl_800E4248
    b lbl_800E425C
lbl_800E4248:
    addi r3, r1, 0x90
    lwz r4, 0xa20(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800E426C
lbl_800E425C:
    addi r3, r1, 0x90
    lwz r4, 0xa24(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800E426C:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f16, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x30(r1)
    stfs f16, 0x3c(r1)
    cmpwi r31, 0x2
    bge lbl_800E42EC
    cmpwi r31, 0x0
    bge lbl_800E42D8
    b lbl_800E42EC
lbl_800E42D8:
    lfd f0, 0x120(r1)
    stfs f0, 0x34(r1)
    lfd f0, 0x128(r1)
    stfs f0, 0x38(r1)
    b lbl_800E42F4
lbl_800E42EC:
    stfs f17, 0x34(r1)
    stfs f25, 0x38(r1)
lbl_800E42F4:
    cmpwi r28, 0x88
    bge lbl_800E4370
    cmpwi r28, 0x2e
    beq lbl_800E4404
    bge lbl_800E433C
    cmpwi r28, 0x12
    bge lbl_800E4328
    cmpwi r28, 0x0
    beq lbl_800E43C4
    blt lbl_800E45BC
    cmpwi r28, 0x10
    bge lbl_800E4404
    b lbl_800E45BC
lbl_800E4328:
    cmpwi r28, 0x2c
    bge lbl_800E45BC
    cmpwi r28, 0x2a
    bge lbl_800E4404
    b lbl_800E45BC
lbl_800E433C:
    cmpwi r28, 0x6d
    beq lbl_800E4404
    bge lbl_800E435C
    cmpwi r28, 0x6b
    bge lbl_800E45BC
    cmpwi r28, 0x66
    bge lbl_800E4404
    b lbl_800E45BC
lbl_800E435C:
    cmpwi r28, 0x86
    bge lbl_800E45BC
    cmpwi r28, 0x84
    bge lbl_800E4404
    b lbl_800E45BC
lbl_800E4370:
    cmpwi r28, 0x160
    beq lbl_800E4514
    bge lbl_800E43A0
    cmpwi r28, 0x8b
    beq lbl_800E4404
    bge lbl_800E4394
    cmpwi r28, 0x8a
    bge lbl_800E45BC
    b lbl_800E4404
lbl_800E4394:
    cmpwi r28, 0x90
    beq lbl_800E4548
    b lbl_800E45BC
lbl_800E43A0:
    cmpwi r28, 0x1b4
    beq lbl_800E4404
    bge lbl_800E43B8
    cmpwi r28, 0x1b0
    beq lbl_800E4588
    b lbl_800E45BC
lbl_800E43B8:
    cmpwi r28, 0x1b6
    beq lbl_800E4438
    b lbl_800E45BC
lbl_800E43C4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E43D8
    stfs f18, 0x20(r1)
lbl_800E43D8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800E43EC
    stfs f19, 0x24(r1)
lbl_800E43EC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800E4860
    stfs f20, 0x24(r1)
    b lbl_800E4860
lbl_800E4404:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E4414
    stfs f18, 0x20(r1)
lbl_800E4414:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800E4424
    stfs f21, 0x24(r1)
lbl_800E4424:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800E4860
    stfs f22, 0x24(r1)
    b lbl_800E4860
lbl_800E4438:
    lwz r3, 0x50(r26)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_800E4480
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E445C
    stfs f18, 0x20(r1)
lbl_800E445C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800E446C
    stfs f21, 0x24(r1)
lbl_800E446C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800E4860
    stfs f22, 0x24(r1)
    b lbl_800E4860
lbl_800E4480:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800E4494
    stfs f22, 0x20(r1)
lbl_800E4494:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800E44A8
    stfs f19, 0x24(r1)
lbl_800E44A8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E44BC
    stfs f23, 0x24(r1)
lbl_800E44BC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E44D0
    stfs f24, 0x28(r1)
lbl_800E44D0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800E44E4
    stfs f25, 0x28(r1)
lbl_800E44E4:
    cmpwi r31, 0x0
    bne lbl_800E4860
    lfs f1, 0x130(r26)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E4860
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E4860
    lwz r3, 0x1c8(r27)
    stfs f21, 0x10(r3)
    b lbl_800E4860
lbl_800E4514:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E4524
    stfs f18, 0x20(r1)
lbl_800E4524:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    bge lbl_800E4534
    stfs f26, 0x24(r1)
lbl_800E4534:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    ble lbl_800E4860
    stfs f27, 0x24(r1)
    b lbl_800E4860
lbl_800E4548:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E455C
    stfs f18, 0x20(r1)
lbl_800E455C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800E4570
    stfs f19, 0x24(r1)
lbl_800E4570:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E4860
    stfs f23, 0x24(r1)
    b lbl_800E4860
lbl_800E4588:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E4598
    stfs f18, 0x20(r1)
lbl_800E4598:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800E45A8
    stfs f21, 0x24(r1)
lbl_800E45A8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800E4860
    stfs f22, 0x24(r1)
    b lbl_800E4860
lbl_800E45BC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800E45D0
    stfs f22, 0x20(r1)
lbl_800E45D0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800E45E4
    stfs f19, 0x24(r1)
lbl_800E45E4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800E45F8
    stfs f25, 0x24(r1)
lbl_800E45F8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E460C
    stfs f24, 0x28(r1)
lbl_800E460C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800E4620
    stfs f25, 0x28(r1)
lbl_800E4620:
    cmpwi r28, 0xa3
    beq lbl_800E46C0
    bge lbl_800E4644
    cmpwi r28, 0x31
    beq lbl_800E465C
    bge lbl_800E47C4
    cmpwi r28, 0x3
    bge lbl_800E47C4
    b lbl_800E47C4
lbl_800E4644:
    cmpwi r28, 0x1ec
    beq lbl_800E4748
    bge lbl_800E47C4
    cmpwi r28, 0x1e5
    beq lbl_800E4704
    b lbl_800E47C4
lbl_800E465C:
    cmpwi r31, 0x0
    bne lbl_800E47C4
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E47C4
    lfs f1, 0x130(r26)
    lfd f0, 0x140(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E46A0
    lfd f0, 0x148(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E46A0
    lwz r3, 0x1c8(r27)
    stfs f21, 0x10(r3)
    b lbl_800E47C4
lbl_800E46A0:
    lfs f1, 0x130(r26)
    lfd f0, 0x150(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E47C4
    lwz r3, 0x1c8(r27)
    lfd f0, 0x158(r1)
    stfs f0, 0x10(r3)
    b lbl_800E47C4
lbl_800E46C0:
    cmpwi r31, 0x0
    bne lbl_800E47C4
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E47C4
    lfs f1, 0x130(r26)
    lfd f0, 0x160(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E47C4
    lfd f0, 0x168(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E47C4
    lwz r3, 0x1c8(r27)
    stfs f21, 0x10(r3)
    b lbl_800E47C4
lbl_800E4704:
    cmpwi r31, 0x0
    bne lbl_800E47C4
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E47C4
    lfs f1, 0x130(r26)
    lfd f0, 0x170(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E47C4
    lfd f0, 0x178(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E47C4
    lwz r3, 0x1c8(r27)
    stfs f28, 0x10(r3)
    b lbl_800E47C4
lbl_800E4748:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E4790
    cmpwi r31, 0x0
    bne lbl_800E47C4
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f29
    bge lbl_800E477C
    lwz r3, 0x1c8(r27)
    stfs f21, 0x10(r3)
    b lbl_800E47C4
lbl_800E477C:
    fcmpo cr0, f0, f30
    bge lbl_800E47C4
    lwz r3, 0x1c8(r27)
    stfs f31, 0x10(r3)
    b lbl_800E47C4
lbl_800E4790:
    cmpwi r31, 0x0
    bne lbl_800E47C4
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f29
    bge lbl_800E47B4
    lwz r3, 0x1c8(r27)
    lfd f0, 0x180(r1)
    stfs f0, 0x10(r3)
    b lbl_800E47C4
lbl_800E47B4:
    fcmpo cr0, f0, f30
    bge lbl_800E47C4
    lwz r3, 0x1c8(r27)
    stfs f31, 0x10(r3)
lbl_800E47C4:
    cmpwi r28, 0xf0
    beq lbl_800E4814
    bge lbl_800E47E8
    cmpwi r28, 0x64
    beq lbl_800E4834
    bge lbl_800E4860
    cmpwi r28, 0x0
    beq lbl_800E4808
    b lbl_800E4860
lbl_800E47E8:
    cmpwi r28, 0xfc
    beq lbl_800E4828
    bge lbl_800E4860
    cmpwi r28, 0xf8
    bge lbl_800E4860
    cmpwi r28, 0xf6
    bge lbl_800E4850
    b lbl_800E4860
lbl_800E4808:
    stfs f25, 0x34(r1)
    stfs f17, 0x38(r1)
    b lbl_800E4860
lbl_800E4814:
    lfd f0, 0x188(r1)
    stfs f0, 0x34(r1)
    lfd f0, 0x190(r1)
    stfs f0, 0x38(r1)
    b lbl_800E4860
lbl_800E4828:
    stfs f16, 0x34(r1)
    stfs f28, 0x38(r1)
    b lbl_800E4860
lbl_800E4834:
    lfs f1, 0x130(r26)
    lfd f0, 0x198(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E4860
    lfd f0, 0x1a0(r1)
    stfs f0, 0x34(r1)
    b lbl_800E4860
lbl_800E4850:
    cmpwi r31, 0x0
    bne lbl_800E4860
    lwz r3, 0x1c8(r27)
    stfs f24, 0x10(r3)
lbl_800E4860:
    cmpwi r31, 0x2
    bge lbl_800E48A0
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800E4884
    stfs f0, 0x24(r1)
lbl_800E4884:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800E48A0
    stfs f0, 0x28(r1)
lbl_800E48A0:
    add r4, r27, r24
    lwz r3, 0x1c8(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1c8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x1c8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800E40D4
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E4A44
asm void fn_800E4A44() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x250
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    subi r11, r12, 0x110
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f15, f1
    fmr f16, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0170
    lfs f20, 0x4(r3)
    lfs f21, 0x64(r3)
    lfs f22, 0x20(r3)
    lfs f25, 0x18(r3)
    lfs f26, 0x4c(r3)
    lfs f28, 0x34(r3)
    lfs f17, lbl_804A0170
    lfs f19, 0x5c(r3)
    lfs f18, 0x68(r3)
    lfs f29, 0x1c(r3)
    lfs f30, 0x50(r3)
    lfs f31, 0x38(r3)
    lfs f27, 0x40(r3)
    lfs f24, 0xa4(r3)
    lfs f23, 0x28(r3)
lbl_800E4BE4:
    add r3, r27, r24
    lwz r3, 0x370(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800E4C48
    add r4, r27, r25
    addi r3, r4, 0x450
    addi r4, r4, 0x390
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x36c(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x370(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x390
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800E4CE4
lbl_800E4C48:
    add r4, r27, r25
    addi r3, r4, 0x450
    addi r4, r4, 0x390
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x380(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x370(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    cmpwi r31, 0x2
    blt lbl_800E4CD4
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x370(r4)
    lwz r4, 0x380(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x380(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x380(r4)
    addi r4, r4, 0x224
    lwz r5, 0x370(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800E4CD4:
    add r3, r27, r25
    addi r3, r3, 0x390
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800E4CE4:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x390
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x450
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xa24(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f17, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x30(r1)
    stfs f17, 0x38(r1)
    stfs f17, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800E4DDC
    b lbl_800E4DE4
lbl_800E4DDC:
    stfs f18, 0x34(r1)
    b lbl_800E4DE8
lbl_800E4DE4:
    stfs f19, 0x34(r1)
lbl_800E4DE8:
    cmpwi r28, 0x8b
    beq lbl_800E4ECC
    bge lbl_800E4E70
    cmpwi r28, 0x6b
    bge lbl_800E4E3C
    cmpwi r28, 0x2c
    bge lbl_800E4E24
    cmpwi r28, 0x12
    bge lbl_800E4E18
    cmpwi r28, 0x10
    bge lbl_800E4ECC
    b lbl_800E502C
lbl_800E4E18:
    cmpwi r28, 0x2a
    bge lbl_800E4ECC
    b lbl_800E502C
lbl_800E4E24:
    cmpwi r28, 0x2e
    beq lbl_800E4ECC
    blt lbl_800E502C
    cmpwi r28, 0x66
    bge lbl_800E4ECC
    b lbl_800E502C
lbl_800E4E3C:
    cmpwi r28, 0x86
    bge lbl_800E4E5C
    cmpwi r28, 0x6d
    beq lbl_800E4ECC
    blt lbl_800E502C
    cmpwi r28, 0x84
    bge lbl_800E4ECC
    b lbl_800E502C
lbl_800E4E5C:
    cmpwi r28, 0x8a
    bge lbl_800E502C
    cmpwi r28, 0x88
    bge lbl_800E4ECC
    b lbl_800E502C
lbl_800E4E70:
    cmpwi r28, 0x1b4
    beq lbl_800E4ECC
    bge lbl_800E4EA8
    cmpwi r28, 0x160
    beq lbl_800E4F24
    bge lbl_800E4E9C
    cmpwi r28, 0xf8
    bge lbl_800E502C
    cmpwi r28, 0xf6
    bge lbl_800E4F00
    b lbl_800E502C
lbl_800E4E9C:
    cmpwi r28, 0x1b2
    beq lbl_800E4ECC
    b lbl_800E502C
lbl_800E4EA8:
    cmpwi r28, 0x1e5
    beq lbl_800E4F58
    bge lbl_800E4EC0
    cmpwi r28, 0x1b6
    beq lbl_800E4ECC
    b lbl_800E502C
lbl_800E4EC0:
    cmpwi r28, 0x23b
    beq lbl_800E4ECC
    b lbl_800E502C
lbl_800E4ECC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800E4EDC
    stfs f20, 0x20(r1)
lbl_800E4EDC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800E4EEC
    stfs f21, 0x24(r1)
lbl_800E4EEC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    ble lbl_800E5108
    stfs f25, 0x24(r1)
    b lbl_800E5108
lbl_800E4F00:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E5108
    stfs f17, 0x20(r1)
    stfs f17, 0x24(r1)
    stfs f17, 0x28(r1)
    b lbl_800E5108
lbl_800E4F24:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800E4F34
    stfs f20, 0x20(r1)
lbl_800E4F34:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800E4F44
    stfs f22, 0x24(r1)
lbl_800E4F44:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800E5108
    stfs f23, 0x24(r1)
    b lbl_800E5108
lbl_800E4F58:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E5108
    cmpwi r31, 0x1
    bne lbl_800E4FC4
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f24
    bge lbl_800E5108
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800E4F94
    stfs f25, 0x20(r1)
lbl_800E4F94:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800E4FA8
    stfs f21, 0x24(r1)
lbl_800E4FA8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E4FBC
    stfs f26, 0x24(r1)
lbl_800E4FBC:
    stfs f27, 0x28(r1)
    b lbl_800E5108
lbl_800E4FC4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800E4FD8
    stfs f25, 0x20(r1)
lbl_800E4FD8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800E4FEC
    stfs f21, 0x24(r1)
lbl_800E4FEC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E5000
    stfs f26, 0x24(r1)
lbl_800E5000:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800E5014
    stfs f28, 0x28(r1)
lbl_800E5014:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5108
    stfs f29, 0x28(r1)
    b lbl_800E5108
lbl_800E502C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800E5040
    stfs f25, 0x20(r1)
lbl_800E5040:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800E5054
    stfs f21, 0x24(r1)
lbl_800E5054:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E5068
    stfs f26, 0x24(r1)
lbl_800E5068:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800E507C
    stfs f28, 0x28(r1)
lbl_800E507C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5090
    stfs f29, 0x28(r1)
lbl_800E5090:
    cmpwi r28, 0x5
    beq lbl_800E509C
    b lbl_800E50D4
lbl_800E509C:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E50D4
    cmpwi r31, 0x0
    bne lbl_800E50D4
    add r4, r27, r24
    lwz r3, 0x370(r4)
    stfs f30, 0x10(r3)
    lwz r3, 0x370(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x370(r4)
    stfs f30, 0x18(r3)
lbl_800E50D4:
    cmpwi r28, 0xf0
    beq lbl_800E50F8
    bge lbl_800E50EC
    cmpwi r28, 0x0
    beq lbl_800E50F8
    b lbl_800E5108
lbl_800E50EC:
    cmpwi r28, 0xfc
    beq lbl_800E5100
    b lbl_800E5108
lbl_800E50F8:
    stfs f19, 0x34(r1)
    b lbl_800E5108
lbl_800E5100:
    stfs f17, 0x34(r1)
    stfs f31, 0x38(r1)
lbl_800E5108:
    cmpwi r31, 0x2
    bge lbl_800E5148
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800E512C
    stfs f0, 0x24(r1)
lbl_800E512C:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800E5148
    stfs f0, 0x28(r1)
lbl_800E5148:
    add r4, r27, r24
    lwz r3, 0x370(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x370(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x370(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x370(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x370(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x370(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800E4BE4
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    subi r11, r10, 0x110
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E52E0
asm void fn_800E52E0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x290
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0170
    lfs f17, 0x4(r3)
    lfs f18, 0x20(r3)
    lfs f19, lbl_804A0170
    lfs f23, 0x18(r3)
    lfs f24, 0x60(r3)
    lfs f22, 0x2c(r3)
    lfs f25, 0xa8(r3)
    lfs f26, 0x14(r3)
    lfs f27, 0x34(r3)
    lfs f29, 0xc(r3)
    lfs f16, 0x1c(r3)
    lfs f0, 0x48(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x4c(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0xb0(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0x54(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x24(r3)
    stfd f0, 0x120(r1)
    lfs f0, 0x44(r3)
    stfd f0, 0x128(r1)
    lfs f31, 0xac(r3)
    lfs f30, 0x3c(r3)
    lfs f28, 0xa4(r3)
    lfs f21, 0x28(r3)
    lfs f20, 0x30(r3)
lbl_800E54BC:
    add r3, r27, r24
    lwz r3, 0x518(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800E5520
    add r4, r27, r25
    addi r3, r4, 0x5f8
    addi r4, r4, 0x538
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x514(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x518(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x538
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800E55BC
lbl_800E5520:
    add r4, r27, r25
    addi r3, r4, 0x5f8
    addi r4, r4, 0x538
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800E5584
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x518(r4)
    lwz r4, 0x528(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x528(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x528(r4)
    addi r4, r4, 0x224
    lwz r5, 0x518(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800E5584:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x528(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x518(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x538
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800E55BC:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x538
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x5f8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f14
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xa3c(r27)
    addi r4, r4, 0x224
    lwz r5, 0xa34(r27)
    addi r5, r5, 0x50
    bl fn_8017375C
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f19, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x0
    bne lbl_800E56C0
    stfs f19, 0x30(r1)
    stfs f26, 0x34(r1)
    stfs f26, 0x38(r1)
    stfs f19, 0x3c(r1)
    b lbl_800E56EC
lbl_800E56C0:
    cmpwi r31, 0x1
    bne lbl_800E56DC
    stfs f19, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f19, 0x3c(r1)
    b lbl_800E56EC
lbl_800E56DC:
    stfs f19, 0x30(r1)
    stfs f16, 0x34(r1)
    stfs f16, 0x38(r1)
    stfs f19, 0x3c(r1)
lbl_800E56EC:
    cmpwi r28, 0x8a
    beq lbl_800E5AB0
    bge lbl_800E5768
    cmpwi r28, 0x66
    bge lbl_800E5734
    cmpwi r28, 0x2c
    bge lbl_800E5728
    cmpwi r28, 0x12
    bge lbl_800E571C
    cmpwi r28, 0x10
    bge lbl_800E57C8
    b lbl_800E5AB0
lbl_800E571C:
    cmpwi r28, 0x2a
    bge lbl_800E57C8
    b lbl_800E5AB0
lbl_800E5728:
    cmpwi r28, 0x2e
    beq lbl_800E57C8
    b lbl_800E5AB0
lbl_800E5734:
    cmpwi r28, 0x84
    bge lbl_800E5754
    cmpwi r28, 0x6d
    beq lbl_800E57C8
    bge lbl_800E5AB0
    cmpwi r28, 0x6b
    bge lbl_800E5AB0
    b lbl_800E57C8
lbl_800E5754:
    cmpwi r28, 0x88
    bge lbl_800E57C8
    cmpwi r28, 0x86
    bge lbl_800E5AB0
    b lbl_800E57C8
lbl_800E5768:
    cmpwi r28, 0x1b5
    beq lbl_800E5AB0
    bge lbl_800E57A4
    cmpwi r28, 0x160
    beq lbl_800E581C
    bge lbl_800E5798
    cmpwi r28, 0xa3
    beq lbl_800E59A8
    bge lbl_800E5AB0
    cmpwi r28, 0x8c
    bge lbl_800E5AB0
    b lbl_800E57C8
lbl_800E5798:
    cmpwi r28, 0x1b4
    bge lbl_800E57C8
    b lbl_800E5AB0
lbl_800E57A4:
    cmpwi r28, 0x1ec
    beq lbl_800E5850
    bge lbl_800E57BC
    cmpwi r28, 0x1b7
    bge lbl_800E5AB0
    b lbl_800E57C8
lbl_800E57BC:
    cmpwi r28, 0x23b
    beq lbl_800E57C8
    b lbl_800E5AB0
lbl_800E57C8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800E57DC
    stfs f17, 0x20(r1)
lbl_800E57DC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E57F0
    stfs f18, 0x24(r1)
lbl_800E57F0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800E5804
    stfs f19, 0x24(r1)
lbl_800E5804:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800E5BF8
    stfs f20, 0x28(r1)
    b lbl_800E5BF8
lbl_800E581C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    bge lbl_800E582C
    stfs f17, 0x20(r1)
lbl_800E582C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E583C
    stfs f18, 0x24(r1)
lbl_800E583C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    ble lbl_800E5BF8
    stfs f21, 0x24(r1)
    b lbl_800E5BF8
lbl_800E5850:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E5940
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f22
    bge lbl_800E58D8
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E5884
    stfs f23, 0x20(r1)
lbl_800E5884:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E5898
    stfs f18, 0x24(r1)
lbl_800E5898:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800E58AC
    stfs f19, 0x24(r1)
lbl_800E58AC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E58C0
    stfs f24, 0x28(r1)
lbl_800E58C0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5BF8
    stfs f29, 0x28(r1)
    b lbl_800E5BF8
lbl_800E58D8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800E58EC
    stfs f23, 0x20(r1)
lbl_800E58EC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800E5900
    stfs f25, 0x24(r1)
lbl_800E5900:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E5914
    stfs f26, 0x24(r1)
lbl_800E5914:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E5928
    stfs f24, 0x28(r1)
lbl_800E5928:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5BF8
    stfs f29, 0x28(r1)
    b lbl_800E5BF8
lbl_800E5940:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800E5954
    stfs f23, 0x20(r1)
lbl_800E5954:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800E5968
    stfs f27, 0x24(r1)
lbl_800E5968:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E597C
    stfs f26, 0x24(r1)
lbl_800E597C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E5990
    stfs f24, 0x28(r1)
lbl_800E5990:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5BF8
    stfs f29, 0x28(r1)
    b lbl_800E5BF8
lbl_800E59A8:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E5A30
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f28
    bge lbl_800E5BF8
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E59DC
    stfs f23, 0x20(r1)
lbl_800E59DC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E59F0
    stfs f18, 0x24(r1)
lbl_800E59F0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800E5A04
    stfs f19, 0x24(r1)
lbl_800E5A04:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E5A18
    stfs f24, 0x28(r1)
lbl_800E5A18:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5BF8
    stfs f29, 0x28(r1)
    b lbl_800E5BF8
lbl_800E5A30:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800E5A44
    stfs f23, 0x20(r1)
lbl_800E5A44:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800E5A58
    stfs f27, 0x24(r1)
lbl_800E5A58:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E5A6C
    stfs f26, 0x24(r1)
lbl_800E5A6C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E5A80
    stfs f24, 0x28(r1)
lbl_800E5A80:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5A94
    stfs f29, 0x28(r1)
lbl_800E5A94:
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f30
    ble lbl_800E5BF8
    cmpwi r31, 0x2
    bne lbl_800E5BF8
    stfs f31, 0x28(r1)
    b lbl_800E5BF8
lbl_800E5AB0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800E5AC4
    stfs f23, 0x20(r1)
lbl_800E5AC4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800E5AD8
    stfs f27, 0x24(r1)
lbl_800E5AD8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800E5AEC
    stfs f23, 0x24(r1)
lbl_800E5AEC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E5B00
    stfs f24, 0x28(r1)
lbl_800E5B00:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E5B14
    stfs f29, 0x28(r1)
lbl_800E5B14:
    cmpwi r28, 0x3e
    beq lbl_800E5B70
    bge lbl_800E5B4C
    cmpwi r28, 0x32
    bge lbl_800E5B40
    cmpwi r28, 0x3
    bge lbl_800E5B34
    b lbl_800E5BF8
lbl_800E5B34:
    cmpwi r28, 0x30
    bge lbl_800E5B70
    b lbl_800E5BF8
lbl_800E5B40:
    cmpwi r28, 0x3c
    beq lbl_800E5B70
    b lbl_800E5BF8
lbl_800E5B4C:
    cmpwi r28, 0x1c1
    beq lbl_800E5BAC
    bge lbl_800E5B64
    cmpwi r28, 0x100
    beq lbl_800E5BAC
    b lbl_800E5BF8
lbl_800E5B64:
    cmpwi r28, 0x1e1
    beq lbl_800E5BAC
    b lbl_800E5BF8
lbl_800E5B70:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E5BF8
    cmpwi r31, 0x0
    bne lbl_800E5BF8
    add r4, r27, r24
    lwz r3, 0x518(r4)
    lfd f0, 0x120(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x518(r4)
    lfd f0, 0x128(r1)
    stfs f0, 0x14(r3)
    b lbl_800E5BF8
lbl_800E5BAC:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E5BF8
    cmpwi r31, 0x0
    bne lbl_800E5BF8
    add r4, r27, r24
    lwz r3, 0x518(r4)
    lfd f0, 0x130(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x518(r4)
    lfd f0, 0x138(r1)
    stfs f0, 0x14(r3)
    lwz r3, 0x518(r4)
    lfd f0, 0x140(r1)
    stfs f0, 0x18(r3)
    lfd f0, 0x148(r1)
    stfs f0, 0x34(r1)
lbl_800E5BF8:
    cmpwi r31, 0x2
    bge lbl_800E5C1C
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800E5C1C
    stfs f0, 0x28(r1)
lbl_800E5C1C:
    add r4, r27, r24
    lwz r3, 0x518(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x518(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x518(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x518(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x518(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x518(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800E54BC
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E5DC0
asm void fn_800E5DC0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2f0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0170
    lfs f18, 0x4(r3)
    lfs f19, 0x60(r3)
    lfs f21, 0x64(r3)
    lfs f23, 0x20(r3)
    lfs f25, 0xb4(r3)
    lfs f27, 0x2c(r3)
    lfs f15, lbl_804A0170
    lfs f16, 0x14(r3)
    lfs f17, 0x18(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0xc(r3)
    stfd f0, 0x138(r1)
    lfs f26, 0x34(r3)
    lfs f0, 0xbc(r3)
    stfd f0, 0x178(r1)
    lfs f0, 0xc0(r3)
    stfd f0, 0x180(r1)
    lfs f29, 0x90(r3)
    lfs f28, 0x8c(r3)
    lfs f0, 0x94(r3)
    stfd f0, 0x170(r1)
    lfs f0, 0x88(r3)
    stfd f0, 0x168(r1)
    lfs f0, 0x84(r3)
    stfd f0, 0x160(r1)
    lfs f0, 0x80(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x7c(r3)
    stfd f0, 0x150(r1)
    lfs f0, 0x44(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0xb8(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0xc8(r3)
    stfd f0, 0x1a0(r1)
    lfs f0, 0xc4(r3)
    stfd f0, 0x198(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x190(r1)
    lfs f0, 0x38(r3)
    stfd f0, 0x188(r1)
    lfs f30, 0x98(r3)
    lfs f31, 0x24(r3)
    lfs f24, 0x28(r3)
    lfs f22, 0x68(r3)
    lfs f20, 0x4c(r3)
lbl_800E5FE8:
    add r3, r27, r24
    lwz r3, 0x6c0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800E604C
    add r4, r27, r25
    addi r3, r4, 0x7a0
    addi r4, r4, 0x6e0
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x6bc(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x6c0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x6e0
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800E60E8
lbl_800E604C:
    add r4, r27, r25
    addi r3, r4, 0x7a0
    addi r4, r4, 0x6e0
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800E60B0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x6c0(r4)
    lwz r4, 0x6d0(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x6d0(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x6d0(r4)
    addi r4, r4, 0x224
    lwz r5, 0x6c0(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800E60B0:
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x6d0(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x6c0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x6e0
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800E60E8:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x6e0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x7a0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800E6190
    cmpwi r31, 0x0
    bge lbl_800E617C
    b lbl_800E6190
lbl_800E617C:
    addi r3, r1, 0xa0
    lwz r4, 0xa40(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800E61A0
lbl_800E6190:
    addi r3, r1, 0xa0
    lwz r4, 0xa44(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800E61A0:
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f15, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f15, 0x40(r1)
    stfs f15, 0x4c(r1)
    cmpwi r31, 0x2
    bge lbl_800E6220
    cmpwi r31, 0x0
    bge lbl_800E620C
    b lbl_800E6220
lbl_800E620C:
    lfd f0, 0x130(r1)
    stfs f0, 0x44(r1)
    lfd f0, 0x138(r1)
    stfs f0, 0x48(r1)
    b lbl_800E6228
lbl_800E6220:
    stfs f16, 0x44(r1)
    stfs f17, 0x48(r1)
lbl_800E6228:
    cmpwi r28, 0x8a
    beq lbl_800E6424
    bge lbl_800E62B4
    cmpwi r28, 0x2e
    beq lbl_800E6348
    bge lbl_800E6274
    cmpwi r28, 0x12
    bge lbl_800E6260
    cmpwi r28, 0x0
    beq lbl_800E6308
    blt lbl_800E6424
    cmpwi r28, 0x10
    bge lbl_800E6348
    b lbl_800E6424
lbl_800E6260:
    cmpwi r28, 0x2c
    bge lbl_800E6424
    cmpwi r28, 0x2a
    bge lbl_800E6348
    b lbl_800E6424
lbl_800E6274:
    cmpwi r28, 0x6d
    beq lbl_800E6348
    bge lbl_800E6294
    cmpwi r28, 0x6b
    bge lbl_800E6424
    cmpwi r28, 0x66
    bge lbl_800E6348
    b lbl_800E6424
lbl_800E6294:
    cmpwi r28, 0x86
    bge lbl_800E62A8
    cmpwi r28, 0x84
    bge lbl_800E6348
    b lbl_800E6424
lbl_800E62A8:
    cmpwi r28, 0x88
    bge lbl_800E6348
    b lbl_800E6424
lbl_800E62B4:
    cmpwi r28, 0x1b0
    beq lbl_800E63F0
    bge lbl_800E62E4
    cmpwi r28, 0x90
    beq lbl_800E637C
    bge lbl_800E62D8
    cmpwi r28, 0x8c
    bge lbl_800E6424
    b lbl_800E6348
lbl_800E62D8:
    cmpwi r28, 0x160
    beq lbl_800E63BC
    b lbl_800E6424
lbl_800E62E4:
    cmpwi r28, 0x1b6
    beq lbl_800E6348
    bge lbl_800E62FC
    cmpwi r28, 0x1b4
    beq lbl_800E6348
    b lbl_800E6424
lbl_800E62FC:
    cmpwi r28, 0x23b
    beq lbl_800E6348
    b lbl_800E6424
lbl_800E6308:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E631C
    stfs f18, 0x30(r1)
lbl_800E631C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800E6330
    stfs f19, 0x34(r1)
lbl_800E6330:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800E6714
    stfs f20, 0x34(r1)
    b lbl_800E6714
lbl_800E6348:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E6358
    stfs f18, 0x30(r1)
lbl_800E6358:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    bge lbl_800E6368
    stfs f21, 0x34(r1)
lbl_800E6368:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    ble lbl_800E6714
    stfs f17, 0x34(r1)
    b lbl_800E6714
lbl_800E637C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E6390
    stfs f18, 0x30(r1)
lbl_800E6390:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800E63A4
    stfs f19, 0x34(r1)
lbl_800E63A4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800E6714
    stfs f22, 0x34(r1)
    b lbl_800E6714
lbl_800E63BC:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E63CC
    stfs f18, 0x30(r1)
lbl_800E63CC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    bge lbl_800E63DC
    stfs f23, 0x34(r1)
lbl_800E63DC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    ble lbl_800E6714
    stfs f24, 0x34(r1)
    b lbl_800E6714
lbl_800E63F0:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    bge lbl_800E6400
    stfs f18, 0x30(r1)
lbl_800E6400:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    bge lbl_800E6410
    stfs f25, 0x34(r1)
lbl_800E6410:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    ble lbl_800E6714
    stfs f17, 0x34(r1)
    b lbl_800E6714
lbl_800E6424:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800E6438
    stfs f17, 0x30(r1)
lbl_800E6438:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800E644C
    stfs f19, 0x34(r1)
lbl_800E644C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800E6460
    stfs f16, 0x34(r1)
lbl_800E6460:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800E6474
    stfs f26, 0x38(r1)
lbl_800E6474:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800E6488
    stfs f16, 0x38(r1)
lbl_800E6488:
    cmpwi r28, 0x1c1
    beq lbl_800E661C
    bge lbl_800E64D0
    cmpwi r28, 0xa2
    beq lbl_800E6654
    bge lbl_800E64B8
    cmpwi r28, 0x3
    bge lbl_800E64AC
    b lbl_800E6654
lbl_800E64AC:
    cmpwi r28, 0xa1
    bge lbl_800E64F4
    b lbl_800E6654
lbl_800E64B8:
    cmpwi r28, 0x100
    beq lbl_800E661C
    bge lbl_800E6654
    cmpwi r28, 0xa4
    bge lbl_800E6654
    b lbl_800E6514
lbl_800E64D0:
    cmpwi r28, 0x1e5
    beq lbl_800E6558
    bge lbl_800E64E8
    cmpwi r28, 0x1e1
    beq lbl_800E661C
    b lbl_800E6654
lbl_800E64E8:
    cmpwi r28, 0x1ec
    beq lbl_800E659C
    b lbl_800E6654
lbl_800E64F4:
    lfs f1, 0x130(r26)
    lfd f0, 0x140(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E6654
    lwz r3, 0x6c0(r27)
    lfd f0, 0x148(r1)
    stfs f0, 0x10(r3)
    b lbl_800E6654
lbl_800E6514:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E6654
    cmpwi r31, 0x0
    bne lbl_800E6654
    lfs f1, 0x130(r26)
    lfd f0, 0x150(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E6654
    lfd f0, 0x158(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E6654
    lwz r3, 0x6c0(r27)
    stfs f21, 0x10(r3)
    b lbl_800E6654
lbl_800E6558:
    cmpwi r31, 0x0
    bne lbl_800E6654
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E6654
    lfs f1, 0x130(r26)
    lfd f0, 0x160(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E6654
    lfd f0, 0x168(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E6654
    lwz r3, 0x6c0(r27)
    stfs f21, 0x10(r3)
    b lbl_800E6654
lbl_800E659C:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E65E4
    cmpwi r31, 0x0
    bne lbl_800E6654
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f27
    bge lbl_800E65D0
    lwz r3, 0x6c0(r27)
    stfs f21, 0x10(r3)
    b lbl_800E6654
lbl_800E65D0:
    fcmpo cr0, f0, f28
    bge lbl_800E6654
    lwz r3, 0x6c0(r27)
    stfs f29, 0x10(r3)
    b lbl_800E6654
lbl_800E65E4:
    cmpwi r31, 0x0
    bne lbl_800E6654
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f27
    bge lbl_800E6608
    lwz r3, 0x6c0(r27)
    lfd f0, 0x170(r1)
    stfs f0, 0x10(r3)
    b lbl_800E6654
lbl_800E6608:
    fcmpo cr0, f0, f28
    bge lbl_800E6654
    lwz r3, 0x6c0(r27)
    stfs f29, 0x10(r3)
    b lbl_800E6654
lbl_800E661C:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E6654
    cmpwi r31, 0x0
    bne lbl_800E6654
    add r4, r27, r24
    lwz r3, 0x6c0(r4)
    lfd f0, 0x178(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x6c0(r4)
    lfd f0, 0x180(r1)
    stfs f0, 0x14(r3)
lbl_800E6654:
    cmpwi r28, 0xf8
    bge lbl_800E6680
    cmpwi r28, 0xf0
    beq lbl_800E66A4
    bge lbl_800E6674
    cmpwi r28, 0x0
    beq lbl_800E6698
    b lbl_800E6714
lbl_800E6674:
    cmpwi r28, 0xf6
    bge lbl_800E66F0
    b lbl_800E6714
lbl_800E6680:
    cmpwi r28, 0x1b1
    beq lbl_800E66C0
    bge lbl_800E6714
    cmpwi r28, 0xfc
    beq lbl_800E66B0
    b lbl_800E6714
lbl_800E6698:
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    b lbl_800E6714
lbl_800E66A4:
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    b lbl_800E6714
lbl_800E66B0:
    stfs f15, 0x44(r1)
    lfd f0, 0x188(r1)
    stfs f0, 0x48(r1)
    b lbl_800E6714
lbl_800E66C0:
    lfs f1, 0x130(r26)
    lfd f0, 0x190(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E6714
    lfd f0, 0x198(r1)
    fcmpo cr0, f1, f0
    bge lbl_800E6714
    lfd f0, 0x1a0(r1)
    stfs f0, 0x30(r1)
    stfs f15, 0x34(r1)
    stfs f15, 0x38(r1)
    b lbl_800E6714
lbl_800E66F0:
    cmpwi r31, 0x0
    bne lbl_800E6714
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800E6714
    lwz r3, 0x6c0(r27)
    stfs f26, 0x10(r3)
lbl_800E6714:
    cmpwi r31, 0x2
    bge lbl_800E6754
    lfs f2, 0x34(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x44(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800E6738
    stfs f0, 0x34(r1)
lbl_800E6738:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x48(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800E6754
    stfs f0, 0x38(r1)
lbl_800E6754:
    add r4, r27, r24
    lwz r3, 0x6c0(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x6c0(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x6c0(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x6c0(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x6c0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x6c0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800E5FE8
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E68F8
asm void fn_800E68F8() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x260
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0170
    lfs f19, 0x4(r3)
    lfs f20, 0x64(r3)
    lfs f21, 0x20(r3)
    lfs f24, 0x18(r3)
    lfs f26, 0x4c(r3)
    lfs f27, 0x60(r3)
    lfs f16, lbl_804A0170
    lfs f18, 0x5c(r3)
    lfs f17, 0x68(r3)
    lfs f28, 0x14(r3)
    lfs f29, 0x50(r3)
    lfs f30, 0xb0(r3)
    lfs f31, 0x38(r3)
    lfs f25, 0xac(r3)
    lfs f23, 0xa4(r3)
    lfs f22, 0x28(r3)
lbl_800E6AA4:
    add r3, r27, r24
    lwz r3, 0x868(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0170
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800E6B08
    add r4, r27, r25
    addi r3, r4, 0x948
    addi r4, r4, 0x888
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x864(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x868(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x888
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800E6BA4
lbl_800E6B08:
    add r4, r27, r25
    addi r3, r4, 0x948
    addi r4, r4, 0x888
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800E6B6C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x868(r4)
    lwz r4, 0x878(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x878(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x878(r4)
    addi r4, r4, 0x224
    lwz r5, 0x868(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800E6B6C:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x878(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x868(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x888
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800E6BA4:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x888
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x948
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f14
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xa44(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f16, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x30(r1)
    stfs f16, 0x38(r1)
    stfs f16, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800E6C9C
    b lbl_800E6CA4
lbl_800E6C9C:
    stfs f17, 0x34(r1)
    b lbl_800E6CA8
lbl_800E6CA4:
    stfs f18, 0x34(r1)
lbl_800E6CA8:
    cmpwi r28, 0x8b
    beq lbl_800E6D8C
    bge lbl_800E6D30
    cmpwi r28, 0x6b
    bge lbl_800E6CFC
    cmpwi r28, 0x2c
    bge lbl_800E6CE4
    cmpwi r28, 0x12
    bge lbl_800E6CD8
    cmpwi r28, 0x10
    bge lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6CD8:
    cmpwi r28, 0x2a
    bge lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6CE4:
    cmpwi r28, 0x2e
    beq lbl_800E6D8C
    blt lbl_800E6EC8
    cmpwi r28, 0x66
    bge lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6CFC:
    cmpwi r28, 0x86
    bge lbl_800E6D1C
    cmpwi r28, 0x6d
    beq lbl_800E6D8C
    blt lbl_800E6EC8
    cmpwi r28, 0x84
    bge lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6D1C:
    cmpwi r28, 0x8a
    bge lbl_800E6EC8
    cmpwi r28, 0x88
    bge lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6D30:
    cmpwi r28, 0x1b4
    beq lbl_800E6D8C
    bge lbl_800E6D68
    cmpwi r28, 0x160
    beq lbl_800E6DE4
    bge lbl_800E6D5C
    cmpwi r28, 0xf8
    bge lbl_800E6EC8
    cmpwi r28, 0xf6
    bge lbl_800E6DC0
    b lbl_800E6EC8
lbl_800E6D5C:
    cmpwi r28, 0x1b2
    beq lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6D68:
    cmpwi r28, 0x1e5
    beq lbl_800E6E18
    bge lbl_800E6D80
    cmpwi r28, 0x1b6
    beq lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6D80:
    cmpwi r28, 0x23b
    beq lbl_800E6D8C
    b lbl_800E6EC8
lbl_800E6D8C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800E6D9C
    stfs f19, 0x20(r1)
lbl_800E6D9C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800E6DAC
    stfs f20, 0x24(r1)
lbl_800E6DAC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800E6FA4
    stfs f24, 0x24(r1)
    b lbl_800E6FA4
lbl_800E6DC0:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E6FA4
    stfs f16, 0x20(r1)
    stfs f16, 0x24(r1)
    stfs f16, 0x28(r1)
    b lbl_800E6FA4
lbl_800E6DE4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800E6DF4
    stfs f19, 0x20(r1)
lbl_800E6DF4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800E6E04
    stfs f21, 0x24(r1)
lbl_800E6E04:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800E6FA4
    stfs f22, 0x24(r1)
    b lbl_800E6FA4
lbl_800E6E18:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E6FA4
    cmpwi r31, 0x1
    bne lbl_800E6E60
    lfs f0, 0x130(r26)
    fcmpo cr0, f0, f23
    bge lbl_800E6FA4
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E6E54
    stfs f24, 0x20(r1)
lbl_800E6E54:
    stfs f25, 0x24(r1)
    stfs f25, 0x28(r1)
    b lbl_800E6FA4
lbl_800E6E60:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E6E74
    stfs f24, 0x20(r1)
lbl_800E6E74:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800E6E88
    stfs f20, 0x24(r1)
lbl_800E6E88:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E6E9C
    stfs f26, 0x24(r1)
lbl_800E6E9C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800E6EB0
    stfs f27, 0x28(r1)
lbl_800E6EB0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800E6FA4
    stfs f28, 0x28(r1)
    b lbl_800E6FA4
lbl_800E6EC8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E6EDC
    stfs f24, 0x20(r1)
lbl_800E6EDC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800E6EF0
    stfs f20, 0x24(r1)
lbl_800E6EF0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E6F04
    stfs f26, 0x24(r1)
lbl_800E6F04:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800E6F18
    stfs f27, 0x28(r1)
lbl_800E6F18:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800E6F2C
    stfs f28, 0x28(r1)
lbl_800E6F2C:
    cmpwi r28, 0x5
    beq lbl_800E6F38
    b lbl_800E6F70
lbl_800E6F38:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800E6F70
    cmpwi r31, 0x0
    bne lbl_800E6F70
    add r4, r27, r24
    lwz r3, 0x868(r4)
    stfs f29, 0x10(r3)
    lwz r3, 0x868(r4)
    stfs f29, 0x14(r3)
    lwz r3, 0x868(r4)
    stfs f30, 0x18(r3)
lbl_800E6F70:
    cmpwi r28, 0xf0
    beq lbl_800E6F94
    bge lbl_800E6F88
    cmpwi r28, 0x0
    beq lbl_800E6F94
    b lbl_800E6FA4
lbl_800E6F88:
    cmpwi r28, 0xfc
    beq lbl_800E6F9C
    b lbl_800E6FA4
lbl_800E6F94:
    stfs f18, 0x34(r1)
    b lbl_800E6FA4
lbl_800E6F9C:
    stfs f16, 0x34(r1)
    stfs f31, 0x38(r1)
lbl_800E6FA4:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800E6FC0
    stfs f0, 0x24(r1)
lbl_800E6FC0:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800E6FDC
    stfs f0, 0x28(r1)
lbl_800E6FDC:
    add r4, r27, r24
    lwz r3, 0x868(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x868(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x868(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x868(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x868(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x868(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800E6AA4
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}
