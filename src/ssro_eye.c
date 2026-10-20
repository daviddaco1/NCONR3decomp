#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_804A0660;

void _restgpr_24();
void _restgpr_25();
void _restgpr_28();
void _restgpr_29();
void _savegpr_24();
void _savegpr_25();
void _savegpr_28();
void _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_801035D4(void);
s32 fn_801035DC(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_801039B0(s32 arg0, s32 arg1, s32 arg2);
void fn_80103BC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_80104364(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8010546C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80190874(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_801035D4
asm void fn_801035D4(void) {
    nofralloc
    li r5, 0x0
    b fn_801035DC
}

// asm_to_cpp: fn_801035DC
asm s32 fn_801035DC(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x18
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_8010398C
    cmpwi r31, 0x0
    beq lbl_80103620
    b lbl_80103634
lbl_80103620:
    lwz r3, 0x110(r29)
    li r4, 0x6c8
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_80103634:
    mr r3, r31
    li r4, 0x0
    li r5, 0x6c8
    bl memset
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r29
    li r4, 0xc8
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r29
    li r4, 0xc9
    bl fn_8018149C
    stw r3, 0x24(r31)
    mr r3, r29
    li r4, 0xc8
    bl fn_80181504
    stw r3, 0x28(r31)
    mr r3, r29
    li r4, 0xc9
    bl fn_80181504
    stw r3, 0x2c(r31)
    addi r3, r31, 0x30
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x90
    addi r4, r31, 0x30
    bl fn_801734E4
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0xf0(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0xf4(r31)
    mr r3, r29
    li r4, 0x96
    bl fn_8018149C
    stw r3, 0xf8(r31)
    mr r3, r29
    li r4, 0x97
    bl fn_8018149C
    stw r3, 0xfc(r31)
    mr r3, r29
    li r4, 0x98
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r29
    li r4, 0x99
    bl fn_8018149C
    stw r3, 0x104(r31)
    mr r3, r29
    li r4, 0x9a
    bl fn_8018149C
    stw r3, 0x108(r31)
    mr r3, r29
    li r4, 0x9b
    bl fn_8018149C
    stw r3, 0x10c(r31)
    mr r3, r29
    li r4, 0x9c
    bl fn_8018149C
    stw r3, 0x110(r31)
    mr r3, r29
    li r4, 0x96
    bl fn_80181504
    stw r3, 0x114(r31)
    mr r3, r29
    li r4, 0x97
    bl fn_80181504
    stw r3, 0x118(r31)
    mr r3, r29
    li r4, 0x98
    bl fn_80181504
    stw r3, 0x11c(r31)
    mr r3, r29
    li r4, 0x99
    bl fn_80181504
    stw r3, 0x120(r31)
    mr r3, r29
    li r4, 0x9a
    bl fn_80181504
    stw r3, 0x124(r31)
    mr r3, r29
    li r4, 0x9b
    bl fn_80181504
    stw r3, 0x128(r31)
    mr r3, r29
    li r4, 0x9c
    bl fn_80181504
    stw r3, 0x12c(r31)
    addi r3, r31, 0x130
    lwz r4, 0xf4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xf8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x280
    addi r4, r31, 0x130
    bl fn_801734E4
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x3d0(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x3d4(r31)
    mr r3, r29
    li r4, 0x9d
    bl fn_8018149C
    stw r3, 0x3d8(r31)
    mr r3, r29
    li r4, 0x9e
    bl fn_8018149C
    stw r3, 0x3dc(r31)
    mr r3, r29
    li r4, 0x9f
    bl fn_8018149C
    stw r3, 0x3e0(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x3e4(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x3e8(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x3ec(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x3f0(r31)
    mr r3, r29
    li r4, 0x9d
    bl fn_80181504
    stw r3, 0x3f4(r31)
    mr r3, r29
    li r4, 0x9e
    bl fn_80181504
    stw r3, 0x3f8(r31)
    mr r3, r29
    li r4, 0x9f
    bl fn_80181504
    stw r3, 0x3fc(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_80181504
    stw r3, 0x400(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x404(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x408(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x40c(r31)
    addi r3, r31, 0x410
    lwz r4, 0x3d4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x3d8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x560
    addi r4, r31, 0x410
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x6b0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x6b4(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0x6b8(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0x6bc(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_80181504
    stw r3, 0x6c0(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_80181504
    stw r3, 0x6c4(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x18
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_80103998
lbl_8010398C:
    mr r3, r29
    mr r4, r30
    bl fn_801039B0
lbl_80103998:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801039B0
asm M2C_UNK fn_801039B0(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xb0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    subi r11, r12, 0x10
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    lfs f2, lbl_804A0660
    la r31, lbl_804A0660
    lfs f31, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f2, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f2, 0x88(r1)
    stfs f31, 0x8c(r1)
    stfs f31, 0x70(r1)
    stfs f2, 0x74(r1)
    stfs f2, 0x78(r1)
    stfs f31, 0x7c(r1)
    lfs f0, 0xc(r31)
    fmuls f2, f0, f31
    lfs f1, 0x10(r31)
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
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80103BC8
    lfs f1, lbl_804A0660
    stfs f1, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f1, 0x88(r1)
    fmr f0, f31
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f0, 0x14(r31)
    fmuls f2, f0, f31
    lfs f1, 0x10(r31)
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
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80104364
    lfs f1, lbl_804A0660
    stfs f1, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f1, 0x88(r1)
    fmr f0, f31
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f0, 0x14(r31)
    fmuls f2, f0, f31
    lfs f1, 0x10(r31)
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
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_8010546C
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    subi r11, r10, 0x10
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80103BC8
asm void fn_80103BC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0660
    lfs f17, 0x4(r3)
    lfs f18, 0x20(r3)
    lfs f19, 0x24(r3)
    lfs f20, 0x28(r3)
    lfs f21, 0x2c(r3)
    lfs f22, 0x30(r3)
    lfs f23, 0x18(r3)
    lfs f24, lbl_804A0660
    lfs f16, 0x1c(r3)
    lfs f27, 0x3c(r3)
    lfs f28, 0x40(r3)
    lfs f29, 0x44(r3)
    lfs f30, 0x48(r3)
    lfs f31, 0xc(r3)
    lfs f26, 0x38(r3)
    lfs f25, 0x34(r3)
lbl_80103D70:
    cmpwi r31, 0x0
    bne lbl_80103DB8
    add r4, r27, r26
    addi r3, r4, 0x90
    addi r4, r4, 0x30
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x30
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_80103E54
lbl_80103DB8:
    add r4, r27, r26
    addi r3, r4, 0x90
    addi r4, r4, 0x30
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_80103E1C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x20(r4)
    lwz r4, 0x28(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x28(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x28(r4)
    addi r4, r4, 0x224
    lwz r5, 0x20(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_80103E1C:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x28(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x30
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_80103E54:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x30
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x90
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x90
    lwz r4, 0x6c0(r27)
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
    stfs f24, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x30(r1)
    stfs f24, 0x38(r1)
    stfs f24, 0x3c(r1)
    cmpwi r31, 0x1
    beq lbl_80103F60
    bge lbl_80103F64
    cmpwi r31, 0x0
    bge lbl_80103F58
    b lbl_80103F64
lbl_80103F58:
    stfs f23, 0x34(r1)
    b lbl_80103F64
lbl_80103F60:
    stfs f16, 0x34(r1)
lbl_80103F64:
    cmpwi r28, 0x84
    bge lbl_80103FB4
    cmpwi r28, 0x2e
    beq lbl_80103FF4
    bge lbl_80103FA0
    cmpwi r28, 0x2a
    bge lbl_80103F94
    cmpwi r28, 0x12
    bge lbl_80104108
    cmpwi r28, 0x10
    bge lbl_80103FF4
    b lbl_80104108
lbl_80103F94:
    cmpwi r28, 0x2c
    bge lbl_80104108
    b lbl_80103FF4
lbl_80103FA0:
    cmpwi r28, 0x6b
    bge lbl_80104108
    cmpwi r28, 0x66
    bge lbl_80103FF4
    b lbl_80104108
lbl_80103FB4:
    cmpwi r28, 0x8b
    beq lbl_80103FF4
    bge lbl_80103FE0
    cmpwi r28, 0x88
    bge lbl_80103FD4
    cmpwi r28, 0x86
    bge lbl_80104108
    b lbl_80103FF4
lbl_80103FD4:
    cmpwi r28, 0x8a
    bge lbl_80104108
    b lbl_80103FF4
lbl_80103FE0:
    cmpwi r28, 0xf8
    bge lbl_80104108
    cmpwi r28, 0xf6
    bge lbl_8010405C
    b lbl_80104108
lbl_80103FF4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_80104008
    stfs f17, 0x20(r1)
lbl_80104008:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_8010401C
    stfs f17, 0x24(r1)
lbl_8010401C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_80104030
    stfs f17, 0x24(r1)
lbl_80104030:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_80104044
    stfs f18, 0x28(r1)
lbl_80104044:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_8010419C
    stfs f24, 0x28(r1)
    b lbl_8010419C
lbl_8010405C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_80104070
    stfs f19, 0x20(r1)
lbl_80104070:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_80104084
    stfs f20, 0x24(r1)
lbl_80104084:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104098
    stfs f21, 0x24(r1)
lbl_80104098:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_801040AC
    stfs f22, 0x28(r1)
lbl_801040AC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_801040C0
    stfs f23, 0x28(r1)
lbl_801040C0:
    stfs f24, 0x30(r1)
    stfs f24, 0x38(r1)
    stfs f24, 0x3c(r1)
    cmpwi r31, 0x1
    beq lbl_801040F8
    bge lbl_801040E4
    cmpwi r31, 0x0
    bge lbl_801040F0
    b lbl_8010419C
lbl_801040E4:
    cmpwi r31, 0x3
    bge lbl_8010419C
    b lbl_80104100
lbl_801040F0:
    stfs f25, 0x34(r1)
    b lbl_8010419C
lbl_801040F8:
    stfs f21, 0x34(r1)
    b lbl_8010419C
lbl_80104100:
    stfs f26, 0x34(r1)
    b lbl_8010419C
lbl_80104108:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_8010411C
    stfs f27, 0x20(r1)
lbl_8010411C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_80104130
    stfs f28, 0x24(r1)
lbl_80104130:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_80104144
    stfs f27, 0x24(r1)
lbl_80104144:
    cmpwi r31, 0x2
    bne lbl_80104174
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_80104160
    stfs f22, 0x24(r1)
lbl_80104160:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_80104174
    stfs f29, 0x24(r1)
lbl_80104174:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80104188
    stfs f30, 0x28(r1)
lbl_80104188:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_8010419C
    stfs f31, 0x28(r1)
lbl_8010419C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_801041C0
    cmpwi r31, 0x0
    bne lbl_801041C0
    stfs f0, 0x24(r1)
lbl_801041C0:
    add r4, r27, r25
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
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_80103D70
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80104364
asm void fn_80104364(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1d0
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
    bl _savegpr_25
    mr r25, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f18, f1
    fmr f19, f2
    addi r3, r1, 0x60
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r4, 0x54(r25)
    rlwinm r0, r4, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_801047B8
    lwz r3, 0x50(r25)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_801047B8
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_801047B8
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_801047B8
    cmpwi r28, 0xd4
    beq lbl_801047B8
    cmpwi r28, 0x1
    beq lbl_801047B8
    cmpwi r28, 0x2
    beq lbl_801047B8
    cmpwi r28, 0x3
    beq lbl_801047B8
    cmpwi r28, 0x4
    beq lbl_801047B8
    cmpwi r28, 0x5
    beq lbl_801047B8
    cmpwi r28, 0x6
    beq lbl_801047B8
    cmpwi r28, 0x7
    beq lbl_801047B8
    cmpwi r28, 0x8
    beq lbl_801047B8
    rlwinm r0, r4, 0, 1, 1
    cmpwi r0, 0x0
    bne lbl_801047B8
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_801047B8
    cmpwi r28, 0x33
    beq lbl_801047B8
    cmpwi r28, 0x31
    beq lbl_801047B8
    cmpwi r28, 0x120
    beq lbl_801047B8
    cmpwi r28, 0x121
    beq lbl_801047B8
    cmpwi r28, 0x34
    beq lbl_801047B8
    cmpwi r28, 0x35
    beq lbl_801047B8
    cmpwi r28, 0x36
    beq lbl_801047B8
    cmpwi r28, 0x37
    beq lbl_801047B8
    cmpwi r28, 0x140
    beq lbl_801047B8
    cmpwi r28, 0x146
    beq lbl_801047B8
    cmpwi r28, 0x160
    beq lbl_801047B8
    cmpwi r28, 0x166
    beq lbl_801047B8
    cmpwi r28, 0x180
    beq lbl_801047B8
    cmpwi r28, 0x181
    beq lbl_801047B8
    cmpwi r28, 0x201
    beq lbl_801047B8
    cmpwi r28, 0x202
    beq lbl_801047B8
    cmpwi r28, 0x203
    beq lbl_801047B8
    cmpwi r28, 0x204
    beq lbl_801047B8
    cmpwi r28, 0x205
    beq lbl_801047B8
    cmpwi r28, 0x206
    beq lbl_801047B8
    cmpwi r28, 0x207
    beq lbl_801047B8
    cmpwi r28, 0x208
    beq lbl_801047B8
    cmpwi r28, 0x209
    beq lbl_801047B8
    cmpwi r28, 0x1e
    beq lbl_801047B8
    cmpwi cr1, r28, 0x1f
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xdc
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe0
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe1
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe2
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe3
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe4
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe5
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe6
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe7
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe8
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xe9
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xea
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xeb
    beq cr1, lbl_801047B8
    cmpwi cr1, r28, 0xee
    beq cr1, lbl_801047B8
    beq lbl_801047B8
    cmpwi r28, 0xec
    beq lbl_801047B8
    cmpwi r28, 0x220
    beq lbl_801047B8
    cmpwi r28, 0x221
    beq lbl_801047B8
    cmpwi r28, 0x222
    beq lbl_801047B8
    cmpwi r28, 0x223
    beq lbl_801047B8
    cmpwi r28, 0x224
    beq lbl_801047B8
    cmpwi r28, 0x225
    beq lbl_801047B8
    cmpwi r28, 0x226
    beq lbl_801047B8
    cmpwi r28, 0x227
    beq lbl_801047B8
    cmpwi r28, 0x228
    beq lbl_801047B8
    cmpwi r28, 0x229
    beq lbl_801047B8
    cmpwi r28, 0x22a
    beq lbl_801047B8
    cmpwi r28, 0x22b
    beq lbl_801047B8
    cmpwi r28, 0x22c
    beq lbl_801047B8
    cmpwi r28, 0x22d
    beq lbl_801047B8
    cmpwi r28, 0x22e
    beq lbl_801047B8
    cmpwi r28, 0x22f
    beq lbl_801047B8
    cmpwi r28, 0x71
    beq lbl_801047B8
    cmpwi r28, 0x50
    beq lbl_801047B8
    cmpwi r28, 0xf6
    beq lbl_801047B8
    cmpwi r28, 0xf7
    beq lbl_801047B8
    li r31, 0x0
    li r25, 0x0
    li r26, 0x0
    la r3, lbl_804A0660
    lfs f19, 0x4(r3)
    lfs f18, lbl_804A0660
lbl_80104734:
    cmpwi r31, 0x2
    bne lbl_80104760
    cmpwi r28, 0x130
    bne lbl_80104760
    add r4, r27, r26
    lwz r3, 0xf8(r4)
    stfs f19, 0x30(r3)
    lwz r3, 0xf8(r4)
    stfs f18, 0x34(r3)
    lwz r3, 0xf8(r4)
    stfs f18, 0x38(r3)
lbl_80104760:
    add r4, r27, r25
    addi r3, r4, 0x280
    addi r4, r4, 0x130
    bl fn_801734E4
    add r3, r27, r25
    addi r3, r3, 0x130
    add r4, r27, r26
    lwz r4, 0x114(r4)
    addi r4, r4, 0x224
    bl fn_801734E4
    add r3, r27, r26
    lwz r3, 0xf8(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x7
    blt lbl_80104734
    li r3, 0x1
    b lbl_801053A8
lbl_801047B8:
    cmpwi r28, 0x3
    beq lbl_80104808
    cmpwi r28, 0x4
    beq lbl_80104808
    cmpwi r28, 0x5
    beq lbl_80104808
    cmpwi r28, 0x6
    beq lbl_80104808
    cmpwi r28, 0x7
    beq lbl_80104808
    cmpwi r28, 0x8
    bne lbl_80104814
    lwz r0, 0x54(r25)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80104814
    lwz r0, 0x50(r25)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80104814
lbl_80104808:
    la r3, lbl_804A0660
    lfs f19, 0xc(r3)
    lfs f18, 0x10(r3)
lbl_80104814:
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0660
    lfs f20, 0x4(r3)
    lfs f21, lbl_804A0660
    lfs f22, 0x4c(r3)
    lfs f24, 0x20(r3)
    lfs f25, 0x8(r3)
    lfs f26, 0x50(r3)
    lfs f27, 0x54(r3)
    lfs f28, 0x58(r3)
    lfs f29, 0x5c(r3)
    lfs f31, 0x3c(r3)
    lfs f30, 0x38(r3)
    lfs f23, 0x28(r3)
lbl_80104854:
    cmpwi r31, 0x0
    bne lbl_8010489C
    add r4, r27, r26
    addi r3, r4, 0x280
    addi r4, r4, 0x130
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0xf4(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xf8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x130
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_80104980
lbl_8010489C:
    cmpwi r31, 0x1
    bne lbl_80104944
    add r4, r27, r26
    addi r3, r4, 0x280
    addi r4, r4, 0x130
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_80104908
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0xf8(r4)
    lwz r4, 0x114(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x114(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x114(r4)
    addi r4, r4, 0x224
    lwz r5, 0xf8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_80104908:
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x114(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xf8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x130
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_80104980
lbl_80104944:
    add r4, r27, r26
    addi r3, r4, 0x280
    addi r4, r4, 0x130
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x118(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xf8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x130
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_80104980:
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x130
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0x280
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f18
    bl fn_80018B08
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r29
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
    cmpwi r28, 0x8a
    beq lbl_80105150
    bge lbl_80104A9C
    cmpwi r28, 0x2c
    bge lbl_80104A5C
    cmpwi r28, 0x12
    bge lbl_80104A3C
    cmpwi r28, 0x8
    bge lbl_80104A30
    cmpwi r28, 0x1
    bge lbl_80104C6C
    b lbl_80105150
lbl_80104A30:
    cmpwi r28, 0x10
    bge lbl_80104B00
    b lbl_80105150
lbl_80104A3C:
    cmpwi r28, 0x20
    bge lbl_80104A50
    cmpwi r28, 0x1e
    bge lbl_80104DD8
    b lbl_80105150
lbl_80104A50:
    cmpwi r28, 0x2a
    bge lbl_80104B00
    b lbl_80105150
lbl_80104A5C:
    cmpwi r28, 0x6b
    bge lbl_80104A7C
    cmpwi r28, 0x2e
    beq lbl_80104B00
    blt lbl_80105150
    cmpwi r28, 0x66
    bge lbl_80104B00
    b lbl_80105150
lbl_80104A7C:
    cmpwi r28, 0x86
    bge lbl_80104A90
    cmpwi r28, 0x84
    bge lbl_80104B00
    b lbl_80105150
lbl_80104A90:
    cmpwi r28, 0x88
    bge lbl_80104B00
    b lbl_80105150
lbl_80104A9C:
    cmpwi r28, 0xf8
    bge lbl_80104ADC
    cmpwi r28, 0xee
    beq lbl_80104DD8
    bge lbl_80104AD0
    cmpwi r28, 0xe0
    bge lbl_80104AC4
    cmpwi r28, 0x8c
    bge lbl_80105150
    b lbl_80104B00
lbl_80104AC4:
    cmpwi r28, 0xec
    bge lbl_80105150
    b lbl_80104DD8
lbl_80104AD0:
    cmpwi cr1, r28, 0xf6
    bge cr1, lbl_80104F44
    b lbl_80105150
lbl_80104ADC:
    cmpwi r28, 0x1b4
    beq lbl_80104B00
    bge lbl_80104AF4
    cmpwi r28, 0x1b2
    beq lbl_80104B00
    b lbl_80105150
lbl_80104AF4:
    cmpwi r28, 0x1b6
    beq lbl_80104B00
    b lbl_80105150
lbl_80104B00:
    cmpwi r31, 0x0
    bne lbl_80104B6C
    lfs f0, 0x10(r1)
    fcmpu cr0, f20, f0
    beq lbl_80104B18
    stfs f20, 0x10(r1)
lbl_80104B18:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80104B2C
    stfs f21, 0x14(r1)
lbl_80104B2C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104B40
    stfs f21, 0x14(r1)
lbl_80104B40:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_80104B54
    stfs f22, 0x18(r1)
lbl_80104B54:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_801052B8
    stfs f23, 0x18(r1)
    b lbl_801052B8
lbl_80104B6C:
    cmpwi r31, 0x1
    bne lbl_80104BF0
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104B88
    stfs f24, 0x10(r1)
lbl_80104B88:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104B9C
    stfs f21, 0x10(r1)
lbl_80104B9C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104BB0
    stfs f24, 0x14(r1)
lbl_80104BB0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104BC4
    stfs f21, 0x14(r1)
lbl_80104BC4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104BD8
    stfs f24, 0x18(r1)
lbl_80104BD8:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_801052B8
    stfs f21, 0x18(r1)
    b lbl_801052B8
lbl_80104BF0:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80104C04
    stfs f25, 0x10(r1)
lbl_80104C04:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80104C18
    stfs f25, 0x10(r1)
lbl_80104C18:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104C2C
    stfs f24, 0x14(r1)
lbl_80104C2C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104C40
    stfs f21, 0x14(r1)
lbl_80104C40:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104C54
    stfs f24, 0x18(r1)
lbl_80104C54:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801052B8
    stfs f20, 0x18(r1)
    b lbl_801052B8
lbl_80104C6C:
    cmpwi r31, 0x0
    bne lbl_80104CD8
    lfs f0, 0x10(r1)
    fcmpu cr0, f21, f0
    beq lbl_80104C84
    stfs f21, 0x10(r1)
lbl_80104C84:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80104C98
    stfs f26, 0x14(r1)
lbl_80104C98:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104CAC
    stfs f21, 0x14(r1)
lbl_80104CAC:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_80104CC0
    stfs f27, 0x18(r1)
lbl_80104CC0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_801052B8
    stfs f27, 0x18(r1)
    b lbl_801052B8
lbl_80104CD8:
    cmpwi r31, 0x1
    bne lbl_80104D5C
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104CF4
    stfs f24, 0x10(r1)
lbl_80104CF4:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104D08
    stfs f21, 0x10(r1)
lbl_80104D08:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104D1C
    stfs f24, 0x14(r1)
lbl_80104D1C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104D30
    stfs f21, 0x14(r1)
lbl_80104D30:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104D44
    stfs f24, 0x18(r1)
lbl_80104D44:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_801052B8
    stfs f21, 0x18(r1)
    b lbl_801052B8
lbl_80104D5C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80104D70
    stfs f25, 0x10(r1)
lbl_80104D70:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80104D84
    stfs f25, 0x10(r1)
lbl_80104D84:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104D98
    stfs f24, 0x14(r1)
lbl_80104D98:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104DAC
    stfs f21, 0x14(r1)
lbl_80104DAC:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_80104DC0
    stfs f20, 0x18(r1)
lbl_80104DC0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801052B8
    stfs f20, 0x18(r1)
    b lbl_801052B8
lbl_80104DD8:
    cmpwi r31, 0x0
    bne lbl_80104E44
    lfs f0, 0x10(r1)
    fcmpu cr0, f21, f0
    beq lbl_80104DF0
    stfs f21, 0x10(r1)
lbl_80104DF0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104E04
    stfs f24, 0x14(r1)
lbl_80104E04:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104E18
    stfs f21, 0x14(r1)
lbl_80104E18:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104E2C
    stfs f24, 0x18(r1)
lbl_80104E2C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_801052B8
    stfs f24, 0x18(r1)
    b lbl_801052B8
lbl_80104E44:
    cmpwi r31, 0x1
    bne lbl_80104EC8
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104E60
    stfs f24, 0x10(r1)
lbl_80104E60:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104E74
    stfs f21, 0x10(r1)
lbl_80104E74:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104E88
    stfs f24, 0x14(r1)
lbl_80104E88:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104E9C
    stfs f21, 0x14(r1)
lbl_80104E9C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104EB0
    stfs f24, 0x18(r1)
lbl_80104EB0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_801052B8
    stfs f21, 0x18(r1)
    b lbl_801052B8
lbl_80104EC8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80104EDC
    stfs f25, 0x10(r1)
lbl_80104EDC:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80104EF0
    stfs f25, 0x10(r1)
lbl_80104EF0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104F04
    stfs f24, 0x14(r1)
lbl_80104F04:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104F18
    stfs f21, 0x14(r1)
lbl_80104F18:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_80104F2C
    stfs f20, 0x18(r1)
lbl_80104F2C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801052B8
    stfs f20, 0x18(r1)
    b lbl_801052B8
lbl_80104F44:
    cmpwi r31, 0x0
    bne lbl_80104FB0
    lfs f0, 0x10(r1)
    fcmpu cr0, f28, f0
    beq lbl_80104F5C
    stfs f28, 0x10(r1)
lbl_80104F5C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104F70
    stfs f24, 0x14(r1)
lbl_80104F70:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104F84
    stfs f21, 0x14(r1)
lbl_80104F84:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_80104F98
    stfs f29, 0x18(r1)
lbl_80104F98:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_801052B8
    stfs f29, 0x18(r1)
    b lbl_801052B8
lbl_80104FB0:
    cmpwi r31, 0x1
    bne lbl_80105034
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104FCC
    stfs f24, 0x10(r1)
lbl_80104FCC:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80104FE0
    stfs f21, 0x10(r1)
lbl_80104FE0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80104FF4
    stfs f24, 0x14(r1)
lbl_80104FF4:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80105008
    stfs f21, 0x14(r1)
lbl_80105008:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_8010501C
    stfs f24, 0x18(r1)
lbl_8010501C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_801052B8
    stfs f21, 0x18(r1)
    b lbl_801052B8
lbl_80105034:
    bne cr1, lbl_801050D4
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_8010504C
    stfs f25, 0x10(r1)
lbl_8010504C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80105060
    stfs f25, 0x10(r1)
lbl_80105060:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80105074
    stfs f24, 0x14(r1)
lbl_80105074:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80105088
    stfs f21, 0x14(r1)
lbl_80105088:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_8010509C
    stfs f20, 0x18(r1)
lbl_8010509C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801050B0
    stfs f20, 0x18(r1)
lbl_801050B0:
    add r4, r27, r25
    lwz r3, 0xf8(r4)
    stfs f25, 0x30(r3)
    lwz r3, 0xf8(r4)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f30
    bge lbl_801052B8
    stfs f30, 0x38(r3)
    b lbl_801052B8
lbl_801050D4:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_801050E8
    stfs f25, 0x10(r1)
lbl_801050E8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_801050FC
    stfs f25, 0x10(r1)
lbl_801050FC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80105110
    stfs f24, 0x14(r1)
lbl_80105110:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80105124
    stfs f21, 0x14(r1)
lbl_80105124:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_80105138
    stfs f20, 0x18(r1)
lbl_80105138:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801052B8
    stfs f20, 0x18(r1)
    b lbl_801052B8
lbl_80105150:
    cmpwi r31, 0x0
    bne lbl_801051BC
    lfs f0, 0x10(r1)
    fcmpu cr0, f21, f0
    beq lbl_80105168
    stfs f21, 0x10(r1)
lbl_80105168:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_8010517C
    stfs f24, 0x14(r1)
lbl_8010517C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_80105190
    stfs f31, 0x14(r1)
lbl_80105190:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_801051A4
    stfs f27, 0x18(r1)
lbl_801051A4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_801052B8
    stfs f27, 0x18(r1)
    b lbl_801052B8
lbl_801051BC:
    cmpwi r31, 0x1
    bne lbl_80105240
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_801051D8
    stfs f24, 0x10(r1)
lbl_801051D8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_801051EC
    stfs f21, 0x10(r1)
lbl_801051EC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80105200
    stfs f24, 0x14(r1)
lbl_80105200:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80105214
    stfs f21, 0x14(r1)
lbl_80105214:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80105228
    stfs f24, 0x18(r1)
lbl_80105228:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_801052B8
    stfs f21, 0x18(r1)
    b lbl_801052B8
lbl_80105240:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80105254
    stfs f25, 0x10(r1)
lbl_80105254:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80105268
    stfs f25, 0x10(r1)
lbl_80105268:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_8010527C
    stfs f21, 0x14(r1)
lbl_8010527C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_80105290
    stfs f21, 0x14(r1)
lbl_80105290:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_801052A4
    stfs f20, 0x18(r1)
lbl_801052A4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_801052B8
    stfs f20, 0x18(r1)
lbl_801052B8:
    add r4, r27, r25
    lwz r3, 0xf8(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xf8(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xf8(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xf8(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    cmpwi r28, 0x50
    beq lbl_8010533C
    cmpwi r28, 0x8
    bne lbl_80105368
lbl_8010533C:
    cmpwi r31, 0x2
    blt lbl_80105368
    add r4, r27, r25
    lwz r3, 0xf8(r4)
    stfs f25, 0x30(r3)
    lwz r3, 0xf8(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
lbl_80105368:
    add r3, r27, r25
    lwz r3, 0xf8(r3)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0xf8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x7
    blt lbl_80104854
    li r3, 0x1
lbl_801053A8:
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8010546C
asm void fn_8010546C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x210
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
    fmr f18, f1
    fmr f19, f2
    addi r3, r1, 0x60
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0660
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r4, 0x54(r26)
    rlwinm r0, r4, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_801058E0
    lwz r3, 0x50(r26)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_801058E0
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_801058E0
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_801058E0
    cmpwi r28, 0xd4
    beq lbl_801058E0
    cmpwi r28, 0x1
    beq lbl_801058E0
    cmpwi r28, 0x2
    beq lbl_801058E0
    cmpwi r28, 0x3
    beq lbl_801058E0
    cmpwi r28, 0x4
    beq lbl_801058E0
    cmpwi r28, 0x5
    beq lbl_801058E0
    cmpwi r28, 0x6
    beq lbl_801058E0
    cmpwi r28, 0x7
    beq lbl_801058E0
    cmpwi r28, 0x8
    beq lbl_801058E0
    rlwinm r0, r4, 0, 1, 1
    cmpwi r0, 0x0
    bne lbl_801058E0
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_801058E0
    cmpwi r28, 0x33
    beq lbl_801058E0
    cmpwi r28, 0x31
    beq lbl_801058E0
    cmpwi r28, 0x120
    beq lbl_801058E0
    cmpwi r28, 0x121
    beq lbl_801058E0
    cmpwi r28, 0x34
    beq lbl_801058E0
    cmpwi r28, 0x35
    beq lbl_801058E0
    cmpwi r28, 0x36
    beq lbl_801058E0
    cmpwi r28, 0x37
    beq lbl_801058E0
    cmpwi r28, 0x140
    beq lbl_801058E0
    cmpwi r28, 0x146
    beq lbl_801058E0
    cmpwi r28, 0x160
    beq lbl_801058E0
    cmpwi r28, 0x166
    beq lbl_801058E0
    cmpwi r28, 0x180
    beq lbl_801058E0
    cmpwi r28, 0x181
    beq lbl_801058E0
    cmpwi r28, 0x201
    beq lbl_801058E0
    cmpwi r28, 0x202
    beq lbl_801058E0
    cmpwi r28, 0x203
    beq lbl_801058E0
    cmpwi r28, 0x204
    beq lbl_801058E0
    cmpwi r28, 0x205
    beq lbl_801058E0
    cmpwi r28, 0x206
    beq lbl_801058E0
    cmpwi r28, 0x207
    beq lbl_801058E0
    cmpwi r28, 0x208
    beq lbl_801058E0
    cmpwi r28, 0x209
    beq lbl_801058E0
    cmpwi r28, 0x1e
    beq lbl_801058E0
    cmpwi cr1, r28, 0x1f
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xdc
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe0
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe1
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe2
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe3
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe4
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe5
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe6
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe7
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe8
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xe9
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xea
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xeb
    beq cr1, lbl_801058E0
    cmpwi cr1, r28, 0xee
    beq cr1, lbl_801058E0
    beq lbl_801058E0
    cmpwi r28, 0xec
    beq lbl_801058E0
    cmpwi r28, 0x220
    beq lbl_801058E0
    cmpwi r28, 0x221
    beq lbl_801058E0
    cmpwi r28, 0x222
    beq lbl_801058E0
    cmpwi r28, 0x223
    beq lbl_801058E0
    cmpwi r28, 0x224
    beq lbl_801058E0
    cmpwi r28, 0x225
    beq lbl_801058E0
    cmpwi r28, 0x226
    beq lbl_801058E0
    cmpwi r28, 0x227
    beq lbl_801058E0
    cmpwi r28, 0x228
    beq lbl_801058E0
    cmpwi r28, 0x229
    beq lbl_801058E0
    cmpwi r28, 0x22a
    beq lbl_801058E0
    cmpwi r28, 0x22b
    beq lbl_801058E0
    cmpwi r28, 0x22c
    beq lbl_801058E0
    cmpwi r28, 0x22d
    beq lbl_801058E0
    cmpwi r28, 0x22e
    beq lbl_801058E0
    cmpwi r28, 0x22f
    beq lbl_801058E0
    cmpwi r28, 0x71
    beq lbl_801058E0
    cmpwi r28, 0x50
    beq lbl_801058E0
    cmpwi r28, 0xf6
    beq lbl_801058E0
    cmpwi r28, 0xf7
    beq lbl_801058E0
    li r31, 0x0
    li r24, 0x0
    li r25, 0x0
    la r3, lbl_804A0660
    lfs f15, 0x4(r3)
    lfs f14, lbl_804A0660
lbl_8010585C:
    cmpwi r31, 0x2
    bne lbl_80105888
    cmpwi r28, 0x130
    bne lbl_80105888
    add r4, r27, r25
    lwz r3, 0x3d8(r4)
    stfs f15, 0x30(r3)
    lwz r3, 0x3d8(r4)
    stfs f14, 0x34(r3)
    lwz r3, 0x3d8(r4)
    stfs f14, 0x38(r3)
lbl_80105888:
    add r4, r27, r24
    addi r3, r4, 0x560
    addi r4, r4, 0x410
    bl fn_801734E4
    add r3, r27, r24
    addi r3, r3, 0x410
    add r4, r27, r25
    lwz r4, 0x3f4(r4)
    addi r4, r4, 0x224
    bl fn_801734E4
    add r3, r27, r25
    lwz r3, 0x3d8(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r24, r24, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x7
    blt lbl_8010585C
    li r3, 0x1
    b lbl_80106420
lbl_801058E0:
    cmpwi r28, 0x3
    beq lbl_80105930
    cmpwi r28, 0x4
    beq lbl_80105930
    cmpwi r28, 0x5
    beq lbl_80105930
    cmpwi r28, 0x6
    beq lbl_80105930
    cmpwi r28, 0x7
    beq lbl_80105930
    cmpwi r28, 0x8
    bne lbl_8010593C
    lwz r0, 0x54(r26)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_8010593C
    lwz r0, 0x50(r26)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8010593C
lbl_80105930:
    la r3, lbl_804A0660
    lfs f19, 0xc(r3)
    lfs f18, 0x10(r3)
lbl_8010593C:
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0660
    lfs f20, 0x4(r3)
    lfs f21, 0x20(r3)
    lfs f22, 0x3c(r3)
    lfs f23, 0x2c(r3)
    lfs f24, lbl_804A0660
    lfs f25, 0x8(r3)
    lfs f26, 0x60(r3)
    lfs f27, 0x1c(r3)
    lfs f28, 0x34(r3)
    lfs f29, 0x58(r3)
    lfs f30, 0x64(r3)
    lfs f31, 0x54(r3)
    lfs f16, 0x70(r3)
    lfs f17, 0x50(r3)
    lfs f14, 0x68(r3)
    lfs f15, 0x6c(r3)
lbl_8010598C:
    cmpwi r31, 0x0
    bne lbl_801059D4
    add r4, r27, r25
    addi r3, r4, 0x560
    addi r4, r4, 0x410
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x3d4(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x3d8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x410
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_80105AB8
lbl_801059D4:
    cmpwi r31, 0x1
    bne lbl_80105A7C
    add r4, r27, r25
    addi r3, r4, 0x560
    addi r4, r4, 0x410
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_80105A40
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x3d8(r4)
    lwz r4, 0x3f4(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x3f4(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x3f4(r4)
    addi r4, r4, 0x224
    lwz r5, 0x3d8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_80105A40:
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x3f4(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x3d8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x410
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_80105AB8
lbl_80105A7C:
    add r4, r27, r25
    addi r3, r4, 0x560
    addi r4, r4, 0x410
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x3f8(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x3d8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x410
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_80105AB8:
    addi r3, r1, 0x60
    add r4, r27, r25
    addi r4, r4, 0x410
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r27, r25
    addi r4, r4, 0x560
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f18
    bl fn_80018B08
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r29
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
    cmpwi r28, 0x88
    bge lbl_80105BB0
    cmpwi r28, 0x2e
    beq lbl_80105C08
    bge lbl_80105B88
    cmpwi r28, 0x12
    bge lbl_80105B74
    cmpwi r28, 0x8
    bge lbl_80105B68
    cmpwi r28, 0x1
    bge lbl_80105D74
    b lbl_8010611C
lbl_80105B68:
    cmpwi r28, 0x10
    bge lbl_80105C08
    b lbl_8010611C
lbl_80105B74:
    cmpwi r28, 0x2c
    bge lbl_8010611C
    cmpwi r28, 0x2a
    bge lbl_80105C08
    b lbl_8010611C
lbl_80105B88:
    cmpwi r28, 0x84
    bge lbl_80105BA4
    cmpwi r28, 0x6b
    bge lbl_8010611C
    cmpwi r28, 0x66
    bge lbl_80105C08
    b lbl_8010611C
lbl_80105BA4:
    cmpwi r28, 0x86
    bge lbl_8010611C
    b lbl_80105C08
lbl_80105BB0:
    cmpwi r28, 0x1b2
    beq lbl_80105C08
    bge lbl_80105BE8
    cmpwi r28, 0x8b
    beq lbl_80105C08
    bge lbl_80105BD4
    cmpwi r28, 0x8a
    bge lbl_8010611C
    b lbl_80105C08
lbl_80105BD4:
    cmpwi r28, 0xf8
    bge lbl_8010611C
    cmpwi cr1, r28, 0xf6
    bge cr1, lbl_80105F10
    b lbl_8010611C
lbl_80105BE8:
    cmpwi r28, 0x1b5
    beq lbl_8010611C
    bge lbl_80105C00
    cmpwi r28, 0x1b4
    bge lbl_80105C08
    b lbl_8010611C
lbl_80105C00:
    cmpwi r28, 0x1b7
    bge lbl_8010611C
lbl_80105C08:
    cmpwi r31, 0x0
    bne lbl_80105C74
    lfs f0, 0x10(r1)
    fcmpu cr0, f20, f0
    beq lbl_80105C20
    stfs f20, 0x10(r1)
lbl_80105C20:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105C34
    stfs f21, 0x14(r1)
lbl_80105C34:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80105C48
    stfs f22, 0x14(r1)
lbl_80105C48:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_80105C5C
    stfs f23, 0x18(r1)
lbl_80105C5C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_80106284
    stfs f27, 0x18(r1)
    b lbl_80106284
lbl_80105C74:
    cmpwi r31, 0x1
    bne lbl_80105CF8
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105C90
    stfs f21, 0x10(r1)
lbl_80105C90:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105CA4
    stfs f24, 0x10(r1)
lbl_80105CA4:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105CB8
    stfs f21, 0x14(r1)
lbl_80105CB8:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105CCC
    stfs f24, 0x14(r1)
lbl_80105CCC:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105CE0
    stfs f21, 0x18(r1)
lbl_80105CE0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80106284
    stfs f24, 0x18(r1)
    b lbl_80106284
lbl_80105CF8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80105D0C
    stfs f25, 0x10(r1)
lbl_80105D0C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80105D20
    stfs f25, 0x10(r1)
lbl_80105D20:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105D34
    stfs f21, 0x14(r1)
lbl_80105D34:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105D48
    stfs f24, 0x14(r1)
lbl_80105D48:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80105D5C
    stfs f26, 0x18(r1)
lbl_80105D5C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80106284
    stfs f26, 0x18(r1)
    b lbl_80106284
lbl_80105D74:
    cmpwi r31, 0x0
    bne lbl_80105E10
    lfs f0, 0x10(r1)
    fcmpu cr0, f20, f0
    beq lbl_80105D8C
    stfs f20, 0x10(r1)
lbl_80105D8C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105DA0
    stfs f21, 0x14(r1)
lbl_80105DA0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_80105DB4
    stfs f22, 0x14(r1)
lbl_80105DB4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_80105DC8
    stfs f23, 0x18(r1)
lbl_80105DC8:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_80105DDC
    stfs f27, 0x18(r1)
lbl_80105DDC:
    cmpwi r28, 0x7
    bne lbl_80106284
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_80105DF8
    stfs f28, 0x18(r1)
lbl_80105DF8:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_80106284
    stfs f28, 0x18(r1)
    b lbl_80106284
lbl_80105E10:
    cmpwi r31, 0x1
    bne lbl_80105E94
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105E2C
    stfs f21, 0x10(r1)
lbl_80105E2C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105E40
    stfs f24, 0x10(r1)
lbl_80105E40:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105E54
    stfs f21, 0x14(r1)
lbl_80105E54:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105E68
    stfs f24, 0x14(r1)
lbl_80105E68:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105E7C
    stfs f21, 0x18(r1)
lbl_80105E7C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80106284
    stfs f24, 0x18(r1)
    b lbl_80106284
lbl_80105E94:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80105EA8
    stfs f25, 0x10(r1)
lbl_80105EA8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80105EBC
    stfs f25, 0x10(r1)
lbl_80105EBC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105ED0
    stfs f21, 0x14(r1)
lbl_80105ED0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105EE4
    stfs f24, 0x14(r1)
lbl_80105EE4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80105EF8
    stfs f26, 0x18(r1)
lbl_80105EF8:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80106284
    stfs f26, 0x18(r1)
    b lbl_80106284
lbl_80105F10:
    cmpwi r31, 0x0
    bne lbl_80105F7C
    lfs f0, 0x10(r1)
    fcmpu cr0, f29, f0
    beq lbl_80105F28
    stfs f29, 0x10(r1)
lbl_80105F28:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105F3C
    stfs f21, 0x14(r1)
lbl_80105F3C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105F50
    stfs f24, 0x14(r1)
lbl_80105F50:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80105F64
    stfs f30, 0x18(r1)
lbl_80105F64:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_80106284
    stfs f30, 0x18(r1)
    b lbl_80106284
lbl_80105F7C:
    cmpwi r31, 0x1
    bne lbl_80106000
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105F98
    stfs f21, 0x10(r1)
lbl_80105F98:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105FAC
    stfs f24, 0x10(r1)
lbl_80105FAC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105FC0
    stfs f21, 0x14(r1)
lbl_80105FC0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80105FD4
    stfs f24, 0x14(r1)
lbl_80105FD4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80105FE8
    stfs f21, 0x18(r1)
lbl_80105FE8:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80106284
    stfs f24, 0x18(r1)
    b lbl_80106284
lbl_80106000:
    bne cr1, lbl_801060A0
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80106018
    stfs f25, 0x10(r1)
lbl_80106018:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_8010602C
    stfs f25, 0x10(r1)
lbl_8010602C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80106040
    stfs f21, 0x14(r1)
lbl_80106040:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80106054
    stfs f24, 0x14(r1)
lbl_80106054:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80106068
    stfs f25, 0x18(r1)
lbl_80106068:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_8010607C
    stfs f25, 0x18(r1)
lbl_8010607C:
    add r4, r27, r24
    lwz r3, 0x3d8(r4)
    stfs f25, 0x30(r3)
    lwz r3, 0x3d8(r4)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f31
    ble lbl_80106284
    stfs f31, 0x38(r3)
    b lbl_80106284
lbl_801060A0:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_801060B4
    stfs f25, 0x10(r1)
lbl_801060B4:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_801060C8
    stfs f25, 0x10(r1)
lbl_801060C8:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_801060DC
    stfs f21, 0x14(r1)
lbl_801060DC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_801060F0
    stfs f24, 0x14(r1)
lbl_801060F0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80106104
    stfs f25, 0x18(r1)
lbl_80106104:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80106284
    stfs f25, 0x18(r1)
    b lbl_80106284
lbl_8010611C:
    cmpwi r31, 0x0
    bne lbl_80106188
    lfs f0, 0x10(r1)
    fcmpu cr0, f20, f0
    beq lbl_80106134
    stfs f20, 0x10(r1)
lbl_80106134:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_80106148
    stfs f21, 0x14(r1)
lbl_80106148:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_8010615C
    stfs f22, 0x14(r1)
lbl_8010615C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_80106170
    stfs f23, 0x18(r1)
lbl_80106170:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_80106284
    stfs f27, 0x18(r1)
    b lbl_80106284
lbl_80106188:
    cmpwi r31, 0x1
    bne lbl_8010620C
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_801061A4
    stfs f21, 0x10(r1)
lbl_801061A4:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_801061B8
    stfs f24, 0x10(r1)
lbl_801061B8:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_801061CC
    stfs f21, 0x14(r1)
lbl_801061CC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_801061E0
    stfs f24, 0x14(r1)
lbl_801061E0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_801061F4
    stfs f21, 0x18(r1)
lbl_801061F4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_80106284
    stfs f24, 0x18(r1)
    b lbl_80106284
lbl_8010620C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_80106220
    stfs f25, 0x10(r1)
lbl_80106220:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_80106234
    stfs f25, 0x10(r1)
lbl_80106234:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80106248
    stfs f24, 0x14(r1)
lbl_80106248:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_8010625C
    stfs f24, 0x14(r1)
lbl_8010625C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80106270
    stfs f26, 0x18(r1)
lbl_80106270:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80106284
    stfs f26, 0x18(r1)
lbl_80106284:
    add r4, r27, r24
    lwz r3, 0x3d8(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x3d8(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x3d8(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x3d8(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    cmpwi r28, 0x50
    beq lbl_80106308
    cmpwi r28, 0x8
    bne lbl_80106334
lbl_80106308:
    cmpwi r31, 0x2
    blt lbl_80106334
    add r4, r27, r24
    lwz r3, 0x3d8(r4)
    stfs f25, 0x30(r3)
    lwz r3, 0x3d8(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
lbl_80106334:
    cmpwi r28, 0x33
    bne lbl_801063E0
    lwz r0, 0x50(r26)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801063E0
    lwz r0, 0x54(r26)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_801063E0
    cmpwi r31, 0x0
    bne lbl_8010638C
    add r4, r27, r24
    lwz r3, 0x3d8(r4)
    stfs f20, 0x30(r3)
    lwz r3, 0x3d8(r4)
    stfs f14, 0x34(r3)
    lwz r3, 0x3d8(r4)
    stfs f23, 0x38(r3)
    lwz r3, 0x3d8(r4)
    stfs f15, 0x3c(r3)
    b lbl_801063E0
lbl_8010638C:
    cmpwi r31, 0x1
    bne lbl_801063BC
    add r4, r27, r24
    lwz r3, 0x3d8(r4)
    stfs f20, 0x30(r3)
    lwz r3, 0x3d8(r4)
    stfs f23, 0x34(r3)
    lwz r3, 0x3d8(r4)
    stfs f16, 0x38(r3)
    lwz r3, 0x3d8(r4)
    stfs f17, 0x3c(r3)
    b lbl_801063E0
lbl_801063BC:
    add r4, r27, r24
    lwz r3, 0x3d8(r4)
    stfs f25, 0x30(r3)
    lwz r3, 0x3d8(r4)
    stfs f24, 0x34(r3)
    lwz r3, 0x3d8(r4)
    stfs f25, 0x38(r3)
    lwz r3, 0x3d8(r4)
    stfs f24, 0x3c(r3)
lbl_801063E0:
    add r3, r27, r24
    lwz r3, 0x3d8(r3)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r24
    lwz r3, 0x3d8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x7
    blt lbl_8010598C
    li r3, 0x1
lbl_80106420:
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

} // extern "C"
