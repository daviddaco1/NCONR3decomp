#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_804A0240;

void _restgpr_24();
void _restgpr_25();
void _restgpr_29();
void _savegpr_24();
void _savegpr_25();
void _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018BD4(f32 farg0);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8002AE00(s8 *arg0);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
s32 * fn_80031A74(s32 *arg0, s32 arg1);
M2C_UNK fn_8003452C(s32 *arg0);
void fn_800CA050(s8 *arg0, s8 *arg1);
void fn_800E7180(void);
s32 fn_800E7188(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800E751C(s32 arg0, s32 arg1, s32 arg2);
void fn_800E76F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800E7E58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800E85A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181454(s8 *arg0, s32 arg1);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80190874(s8 *arg0, s32 arg1);
s8 * fn_801D0CD0(s8 **arg0, s32 arg1);
void fn_801D4A9C(s8 **arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_800E7180
asm void fn_800E7180(void) {
    nofralloc
    li r5, 0x0
    b fn_800E7188
}

// asm_to_cpp: fn_800E7188
asm s32 fn_800E7188(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x12
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800E74F8
    cmpwi r31, 0x0
    beq lbl_800E71CC
    b lbl_800E71E0
lbl_800E71CC:
    lwz r3, 0x110(r29)
    li r4, 0x3b8
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800E71E0:
    mr r3, r31
    li r4, 0x0
    li r5, 0x3b8
    bl memset
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x24(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x28(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x2c(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_80181504
    stw r3, 0x30(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x34(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x38(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x3c(r31)
    addi r3, r31, 0x40
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x100
    addi r4, r31, 0x40
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x1c0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x1c4(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x1c8(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x1cc(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x1d0(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_80181504
    stw r3, 0x1d4(r31)
    addi r3, r31, 0x1d8
    lwz r4, 0x1c4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1c8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x238
    addi r4, r31, 0x1d8
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x298(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x29c(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x2a0(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x2a4(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x2a8(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x2ac(r31)
    addi r3, r31, 0x2b0
    lwz r4, 0x29c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x2a0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x310
    addi r4, r31, 0x2b0
    bl fn_801734E4
    mr r3, r29
    li r4, 0x12
    bl fn_8018149C
    stw r3, 0x370(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0x374(r31)
    mr r3, r29
    li r4, 0x14
    bl fn_8018149C
    stw r3, 0x378(r31)
    mr r3, r29
    li r4, 0x12
    bl fn_80181504
    stw r3, 0x37c(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_80181504
    stw r3, 0x380(r31)
    mr r3, r29
    li r4, 0x14
    bl fn_80181504
    stw r3, 0x384(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0x388(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0x38c(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_8018149C
    stw r3, 0x390(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_80181504
    stw r3, 0x394(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_80181504
    stw r3, 0x398(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_80181504
    stw r3, 0x39c(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x3a0(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_8018149C
    stw r3, 0x3a4(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x3a8(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x3ac(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_80181504
    stw r3, 0x3b0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x3b4(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x12
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800E7504
lbl_800E74F8:
    mr r3, r29
    mr r4, r30
    bl fn_800E751C
lbl_800E7504:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800E751C
asm M2C_UNK fn_800E751C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xc0
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
    lfs f31, lbl_804A0240
    la r5, lbl_804A0240
    lfs f1, 0x4(r5)
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f31, 0x80(r1)
    lfs f0, 0x8(r5)
    stfs f0, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f1, 0x8c(r1)
    lfs f0, 0xc(r5)
    stfs f0, 0x70(r1)
    stfs f31, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f1, 0x7c(r1)
    lfs f0, 0x10(r5)
    fmuls f31, f0, f1
    lfs f30, 0x14(r5)
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E76F4
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E7E58
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800E85A4
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

// asm_to_cpp: fn_800E76F4
asm void fn_800E76F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    subi r11, r12, 0xe0
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f19, f1
    fmr f20, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xa4
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xc0
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0240
    lfs f24, 0x4(r31)
    lfs f25, 0x20(r31)
    lfs f21, lbl_804A0240
    lfs f23, 0x18(r31)
    lfs f22, 0x1c(r31)
    lfs f26, 0x24(r31)
    lfs f27, 0x28(r31)
    lfs f28, 0x2c(r31)
    lfs f29, 0x30(r31)
    lfs f30, 0x34(r31)
    lfs f31, 0x38(r31)
lbl_800E78BC:
    cmpwi r30, 0x0
    bne lbl_800E7904
    add r4, r26, r25
    addi r3, r4, 0x238
    addi r4, r4, 0x1d8
    bl fn_801734E4
    addi r3, r1, 0x130
    lwz r4, 0x1c4(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x1d8
    addi r4, r1, 0x130
    bl fn_801734E4
    b lbl_800E794C
lbl_800E7904:
    add r4, r26, r25
    addi r3, r4, 0x238
    addi r4, r4, 0x1d8
    bl fn_801734E4
    addi r3, r1, 0x130
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x1d0(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x1c8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x1d8
    addi r4, r1, 0x130
    bl fn_801734E4
lbl_800E794C:
    addi r3, r1, 0xc0
    add r4, r26, r25
    addi r4, r4, 0x1d8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x238
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    addi r4, r1, 0xb0
    addi r5, r1, 0xc0
    bl fn_8001B8B8
    addi r3, r1, 0x90
    addi r4, r1, 0xa0
    fmr f1, f19
    bl fn_80018B08
    addi r3, r1, 0x90
    mr r4, r3
    mr r5, r28
    bl fn_80018B00
    addi r3, r1, 0x160
    addi r4, r1, 0x130
    bl fn_80173754
    addi r3, r1, 0x70
    addi r4, r1, 0x160
    addi r5, r1, 0x90
    bl fn_80018B04
    addi r3, r1, 0x70
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x100
    lwz r4, 0x380(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x10c(r1)
    lfs f0, 0x13c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x60(r1)
    lfs f1, 0x11c(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x64(r1)
    lfs f1, 0x12c(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x68(r1)
    stfs f21, 0x6c(r1)
    addi r3, r1, 0x60
    addi r4, r1, 0x160
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x60
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0xd0
    lwz r4, 0x398(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xdc(r1)
    lfs f0, 0x13c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x50(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x54(r1)
    lfs f1, 0xfc(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x58(r1)
    stfs f21, 0x5c(r1)
    addi r3, r1, 0x50
    addi r4, r1, 0x160
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x1
    beq lbl_800E7AB8
    bge lbl_800E7AC8
    cmpwi r30, 0x0
    bge lbl_800E7AA4
    b lbl_800E7AC8
lbl_800E7AA4:
    stfs f23, 0x40(r1)
    stfs f22, 0x44(r1)
    stfs f23, 0x48(r1)
    stfs f21, 0x4c(r1)
    b lbl_800E7AC8
lbl_800E7AB8:
    stfs f23, 0x40(r1)
    stfs f23, 0x44(r1)
    stfs f23, 0x48(r1)
    stfs f21, 0x4c(r1)
lbl_800E7AC8:
    cmpwi r27, 0x6b
    bge lbl_800E7B10
    cmpwi r27, 0x2c
    bge lbl_800E7AF8
    cmpwi r27, 0x12
    bge lbl_800E7AEC
    cmpwi r27, 0x10
    bge lbl_800E7B44
    b lbl_800E7B78
lbl_800E7AEC:
    cmpwi r27, 0x2a
    bge lbl_800E7B44
    b lbl_800E7B78
lbl_800E7AF8:
    cmpwi r27, 0x2e
    beq lbl_800E7B44
    blt lbl_800E7B78
    cmpwi r27, 0x66
    bge lbl_800E7B44
    b lbl_800E7B78
lbl_800E7B10:
    cmpwi r27, 0x8a
    beq lbl_800E7B78
    bge lbl_800E7B3C
    cmpwi r27, 0x86
    bge lbl_800E7B30
    cmpwi r27, 0x84
    bge lbl_800E7B44
    b lbl_800E7B78
lbl_800E7B30:
    cmpwi r27, 0x88
    bge lbl_800E7B44
    b lbl_800E7B78
lbl_800E7B3C:
    cmpwi r27, 0x8c
    bge lbl_800E7B78
lbl_800E7B44:
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f24
    bge lbl_800E7B54
    stfs f24, 0x70(r1)
lbl_800E7B54:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f25
    bge lbl_800E7B64
    stfs f25, 0x74(r1)
lbl_800E7B64:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f26
    ble lbl_800E7BDC
    stfs f26, 0x74(r1)
    b lbl_800E7BDC
lbl_800E7B78:
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800E7B8C
    stfs f26, 0x70(r1)
lbl_800E7B8C:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800E7BA0
    stfs f25, 0x74(r1)
lbl_800E7BA0:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800E7BB4
    stfs f27, 0x74(r1)
lbl_800E7BB4:
    lfs f0, 0x78(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800E7BC8
    stfs f28, 0x78(r1)
lbl_800E7BC8:
    lfs f0, 0x78(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E7BDC
    stfs f26, 0x78(r1)
lbl_800E7BDC:
    cmpwi r30, 0x0
    bne lbl_800E7CA0
    lfs f1, 0x64(r1)
    lfs f0, 0x54(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E7C08
    addi r3, r1, 0x30
    lwz r4, 0x370(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    b lbl_800E7C18
lbl_800E7C08:
    addi r3, r1, 0x30
    lwz r4, 0x388(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
lbl_800E7C18:
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f18, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f18
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_800E7C60
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f18, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f18
    fdivs f0, f0, f29
    stfs f0, 0xb0(r1)
    b lbl_800E7C64
lbl_800E7C60:
    stfs f30, 0xb0(r1)
lbl_800E7C64:
    lfs f0, 0xb0(r1)
    fcmpo cr0, f0, f30
    bge lbl_800E7C74
    stfs f30, 0xb0(r1)
lbl_800E7C74:
    stfs f31, 0xb4(r1)
    stfs f21, 0xb8(r1)
    addi r3, r1, 0xb0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xb0(r1)
    lfs f2, 0xb4(r1)
    lfs f3, 0xb8(r1)
    bl fn_801D4A9C
lbl_800E7CA0:
    lfs f3, 0x64(r1)
    lfs f2, 0x54(r1)
    fcmpo cr0, f3, f2
    ble lbl_800E7CCC
    lfs f1, 0x74(r1)
    lfs f0, 0x44(r1)
    fadds f0, f3, f0
    fcmpo cr0, f1, f0
    bge lbl_800E7CE4
    stfs f0, 0x74(r1)
    b lbl_800E7CE4
lbl_800E7CCC:
    lfs f1, 0x74(r1)
    lfs f0, 0x44(r1)
    fadds f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_800E7CE4
    stfs f0, 0x74(r1)
lbl_800E7CE4:
    add r4, r26, r24
    lwz r3, 0x1c8(r4)
    lfs f0, 0x70(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x74(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x78(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1c8(r4)
    lfs f0, 0x7c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1c8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r24
    lwz r3, 0x1c8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800E78BC
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
    subi r11, r10, 0xe0
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E7E58
asm void fn_800E7E58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    subi r11, r12, 0xd0
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f20, f1
    fmr f21, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xa6
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xc0
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0240
    lfs f25, 0x4(r31)
    lfs f26, 0x20(r31)
    lfs f22, lbl_804A0240
    lfs f24, 0x18(r31)
    lfs f23, 0x1c(r31)
    lfs f27, 0x24(r31)
    lfs f28, 0x2c(r31)
    lfs f29, 0x3c(r31)
    lfs f30, 0x34(r31)
    lfs f31, 0x40(r31)
lbl_800E8014:
    cmpwi r30, 0x0
    bne lbl_800E805C
    add r4, r26, r25
    addi r3, r4, 0x310
    addi r4, r4, 0x2b0
    bl fn_801734E4
    addi r3, r1, 0x130
    lwz r4, 0x29c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x2a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x2b0
    addi r4, r1, 0x130
    bl fn_801734E4
    b lbl_800E80A4
lbl_800E805C:
    add r4, r26, r25
    addi r3, r4, 0x310
    addi r4, r4, 0x2b0
    bl fn_801734E4
    addi r3, r1, 0x130
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x2a8(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x2a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x2b0
    addi r4, r1, 0x130
    bl fn_801734E4
lbl_800E80A4:
    addi r3, r1, 0xc0
    add r4, r26, r25
    addi r4, r4, 0x2b0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x310
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    addi r4, r1, 0xb0
    addi r5, r1, 0xc0
    bl fn_8001B8B8
    addi r3, r1, 0x90
    addi r4, r1, 0xa0
    fmr f1, f20
    bl fn_80018B08
    addi r3, r1, 0x90
    mr r4, r3
    mr r5, r28
    bl fn_80018B00
    addi r3, r1, 0x160
    addi r4, r1, 0x130
    bl fn_80173754
    addi r3, r1, 0x70
    addi r4, r1, 0x160
    addi r5, r1, 0x90
    bl fn_80018B04
    addi r3, r1, 0x70
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x100
    lwz r4, 0x380(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x10c(r1)
    lfs f0, 0x13c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x60(r1)
    lfs f1, 0x11c(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x64(r1)
    lfs f1, 0x12c(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x68(r1)
    stfs f22, 0x6c(r1)
    addi r3, r1, 0x60
    addi r4, r1, 0x160
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x60
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0xd0
    lwz r4, 0x398(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xdc(r1)
    lfs f0, 0x13c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x50(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x54(r1)
    lfs f1, 0xfc(r1)
    lfs f0, 0x15c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x58(r1)
    stfs f22, 0x5c(r1)
    addi r3, r1, 0x50
    addi r4, r1, 0x160
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x1
    beq lbl_800E8210
    bge lbl_800E8220
    cmpwi r30, 0x0
    bge lbl_800E81FC
    b lbl_800E8220
lbl_800E81FC:
    stfs f24, 0x40(r1)
    stfs f23, 0x44(r1)
    stfs f24, 0x48(r1)
    stfs f22, 0x4c(r1)
    b lbl_800E8220
lbl_800E8210:
    stfs f24, 0x40(r1)
    stfs f24, 0x44(r1)
    stfs f24, 0x48(r1)
    stfs f22, 0x4c(r1)
lbl_800E8220:
    cmpwi r27, 0x6b
    bge lbl_800E8268
    cmpwi r27, 0x2c
    bge lbl_800E8250
    cmpwi r27, 0x12
    bge lbl_800E8244
    cmpwi r27, 0x10
    bge lbl_800E829C
    b lbl_800E82D0
lbl_800E8244:
    cmpwi r27, 0x2a
    bge lbl_800E829C
    b lbl_800E82D0
lbl_800E8250:
    cmpwi r27, 0x2e
    beq lbl_800E829C
    blt lbl_800E82D0
    cmpwi r27, 0x66
    bge lbl_800E829C
    b lbl_800E82D0
lbl_800E8268:
    cmpwi r27, 0x8a
    beq lbl_800E82D0
    bge lbl_800E8294
    cmpwi r27, 0x86
    bge lbl_800E8288
    cmpwi r27, 0x84
    bge lbl_800E829C
    b lbl_800E82D0
lbl_800E8288:
    cmpwi r27, 0x88
    bge lbl_800E829C
    b lbl_800E82D0
lbl_800E8294:
    cmpwi r27, 0x8c
    bge lbl_800E82D0
lbl_800E829C:
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f25
    bge lbl_800E82AC
    stfs f25, 0x70(r1)
lbl_800E82AC:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f26
    bge lbl_800E82BC
    stfs f26, 0x74(r1)
lbl_800E82BC:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f27
    ble lbl_800E8334
    stfs f27, 0x74(r1)
    b lbl_800E8334
lbl_800E82D0:
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800E82E4
    stfs f27, 0x70(r1)
lbl_800E82E4:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800E82F8
    stfs f26, 0x74(r1)
lbl_800E82F8:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800E830C
    stfs f27, 0x74(r1)
lbl_800E830C:
    lfs f0, 0x78(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800E8320
    stfs f28, 0x78(r1)
lbl_800E8320:
    lfs f0, 0x78(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800E8334
    stfs f27, 0x78(r1)
lbl_800E8334:
    cmpwi r30, 0x0
    bne lbl_800E83F8
    lfs f1, 0x64(r1)
    lfs f0, 0x54(r1)
    fcmpo cr0, f1, f0
    ble lbl_800E8360
    addi r3, r1, 0x30
    lwz r4, 0x370(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    b lbl_800E8370
lbl_800E8360:
    addi r3, r1, 0x30
    lwz r4, 0x388(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
lbl_800E8370:
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f19, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f19
    fdivs f0, f0, f29
    fcmpo cr0, f0, f30
    ble lbl_800E83B8
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f19, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f19
    fdivs f0, f0, f29
    stfs f0, 0xb0(r1)
    b lbl_800E83BC
lbl_800E83B8:
    stfs f30, 0xb0(r1)
lbl_800E83BC:
    lfs f0, 0xb0(r1)
    fcmpo cr0, f0, f30
    bge lbl_800E83CC
    stfs f30, 0xb0(r1)
lbl_800E83CC:
    stfs f31, 0xb4(r1)
    stfs f22, 0xb8(r1)
    addi r3, r1, 0xb0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xb0(r1)
    lfs f2, 0xb4(r1)
    lfs f3, 0xb8(r1)
    bl fn_801D4A9C
lbl_800E83F8:
    lfs f3, 0x64(r1)
    lfs f2, 0x54(r1)
    fcmpo cr0, f3, f2
    bge lbl_800E8424
    lfs f1, 0x74(r1)
    lfs f0, 0x44(r1)
    fsubs f0, f3, f0
    fcmpo cr0, f1, f0
    ble lbl_800E843C
    stfs f0, 0x74(r1)
    b lbl_800E843C
lbl_800E8424:
    lfs f1, 0x74(r1)
    lfs f0, 0x44(r1)
    fsubs f0, f2, f0
    fcmpo cr0, f1, f0
    ble lbl_800E843C
    stfs f0, 0x74(r1)
lbl_800E843C:
    add r4, r26, r24
    lwz r3, 0x2a0(r4)
    lfs f0, 0x70(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x2a0(r4)
    lfs f0, 0x74(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x2a0(r4)
    lfs f0, 0x78(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x2a0(r4)
    lfs f0, 0x7c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x2a0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r24
    lwz r3, 0x2a0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_800E8014
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
    subi r11, r10, 0xd0
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800E85A4
asm void fn_800E85A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f15, f1
    fmr f16, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0240
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0240
    lfs f20, 0x4(r3)
    lfs f21, 0x50(r3)
    lfs f22, 0x54(r3)
    lfs f23, 0x2c(r3)
    lfs f24, 0x24(r3)
    lfs f25, 0x58(r3)
    lfs f26, lbl_804A0240
    lfs f19, 0x4c(r3)
    lfs f18, 0x48(r3)
    lfs f17, 0x44(r3)
    lfs f28, 0x20(r3)
    lfs f29, 0x60(r3)
    lfs f30, 0x64(r3)
    lfs f31, 0x18(r3)
    lfs f27, 0x5c(r3)
lbl_800E8740:
    cmpwi r31, 0x0
    bne lbl_800E8788
    add r4, r27, r26
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x40
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800E8824
lbl_800E8788:
    add r4, r27, r26
    addi r3, r4, 0x100
    addi r4, r4, 0x40
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800E87EC
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
lbl_800E87EC:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x30(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x40
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800E8824:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x40
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x100
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f15
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800E88DC
    bge lbl_800E88BC
    cmpwi r31, 0x0
    bge lbl_800E88C8
    b lbl_800E8900
lbl_800E88BC:
    cmpwi r31, 0x4
    bge lbl_800E8900
    b lbl_800E88F0
lbl_800E88C8:
    addi r3, r1, 0x90
    lwz r4, 0x3ac(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800E8900
lbl_800E88DC:
    addi r3, r1, 0x90
    lwz r4, 0x3b0(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800E8900
lbl_800E88F0:
    addi r3, r1, 0x90
    lwz r4, 0x3b4(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800E8900:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f26, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800E897C
    bge lbl_800E8990
    cmpwi r31, 0x0
    bge lbl_800E8968
    b lbl_800E8990
lbl_800E8968:
    stfs f26, 0x10(r1)
    stfs f17, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f26, 0x1c(r1)
    b lbl_800E89A0
lbl_800E897C:
    stfs f26, 0x10(r1)
    stfs f18, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f26, 0x1c(r1)
    b lbl_800E89A0
lbl_800E8990:
    stfs f26, 0x10(r1)
    stfs f19, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f26, 0x1c(r1)
lbl_800E89A0:
    cmpwi r28, 0x86
    bge lbl_800E89FC
    cmpwi r28, 0x2e
    beq lbl_800E8A40
    bge lbl_800E89DC
    cmpwi r28, 0x2a
    bge lbl_800E89D0
    cmpwi r28, 0x12
    bge lbl_800E8B34
    cmpwi r28, 0x10
    bge lbl_800E8A40
    b lbl_800E8B34
lbl_800E89D0:
    cmpwi r28, 0x2c
    bge lbl_800E8B34
    b lbl_800E8A40
lbl_800E89DC:
    cmpwi r28, 0x6b
    bge lbl_800E89F0
    cmpwi r28, 0x66
    bge lbl_800E8A40
    b lbl_800E8B34
lbl_800E89F0:
    cmpwi r28, 0x84
    bge lbl_800E8A40
    b lbl_800E8B34
lbl_800E89FC:
    cmpwi r28, 0xf6
    bge lbl_800E8A28
    cmpwi r28, 0x8a
    beq lbl_800E8B34
    bge lbl_800E8A1C
    cmpwi r28, 0x88
    bge lbl_800E8A40
    b lbl_800E8B34
lbl_800E8A1C:
    cmpwi r28, 0x8c
    bge lbl_800E8B34
    b lbl_800E8A40
lbl_800E8A28:
    cmpwi r28, 0x23a
    beq lbl_800E8B20
    bge lbl_800E8B34
    cmpwi r28, 0xf8
    bge lbl_800E8B34
    b lbl_800E8A94
lbl_800E8A40:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f20
    bge lbl_800E8A50
    stfs f20, 0x30(r1)
lbl_800E8A50:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    bge lbl_800E8A60
    stfs f21, 0x34(r1)
lbl_800E8A60:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    ble lbl_800E8A70
    stfs f22, 0x34(r1)
lbl_800E8A70:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    bge lbl_800E8A80
    stfs f22, 0x38(r1)
lbl_800E8A80:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    ble lbl_800E8B98
    stfs f25, 0x38(r1)
    b lbl_800E8B98
lbl_800E8A94:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f20
    bge lbl_800E8AA4
    stfs f20, 0x30(r1)
lbl_800E8AA4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    bge lbl_800E8AB4
    stfs f23, 0x34(r1)
lbl_800E8AB4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    ble lbl_800E8AC4
    stfs f24, 0x34(r1)
lbl_800E8AC4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    bge lbl_800E8AD4
    stfs f22, 0x38(r1)
lbl_800E8AD4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    ble lbl_800E8AE4
    stfs f25, 0x38(r1)
lbl_800E8AE4:
    stfs f26, 0x10(r1)
    stfs f26, 0x18(r1)
    stfs f26, 0x1c(r1)
    cmpwi r31, 0x1
    beq lbl_800E8B10
    bge lbl_800E8B18
    cmpwi r31, 0x0
    bge lbl_800E8B08
    b lbl_800E8B18
lbl_800E8B08:
    stfs f27, 0x14(r1)
    b lbl_800E8B98
lbl_800E8B10:
    stfs f29, 0x14(r1)
    b lbl_800E8B98
lbl_800E8B18:
    stfs f24, 0x14(r1)
    b lbl_800E8B98
lbl_800E8B20:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f29
    bge lbl_800E8B98
    stfs f29, 0x30(r1)
    b lbl_800E8B98
lbl_800E8B34:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E8B48
    stfs f24, 0x30(r1)
lbl_800E8B48:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800E8B5C
    stfs f28, 0x34(r1)
lbl_800E8B5C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E8B70
    stfs f29, 0x34(r1)
lbl_800E8B70:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800E8B84
    stfs f30, 0x38(r1)
lbl_800E8B84:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800E8B98
    stfs f31, 0x38(r1)
lbl_800E8B98:
    lfs f2, 0x34(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800E8BB4
    stfs f0, 0x34(r1)
lbl_800E8BB4:
    add r4, r27, r25
    lwz r3, 0x20(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_800E8740
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
