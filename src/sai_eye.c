#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern float lbl_8049F910;

void _restgpr_24();
void _restgpr_25();
void _restgpr_28();
void _restgpr_29();
void _savegpr_24();
void _savegpr_25();
void _savegpr_28();
void _savegpr_29();
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8002AE00(s8 *arg0);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
s32 * fn_80031A74(s32 *arg0, s32 arg1);
M2C_UNK fn_8003452C(s32 *arg0);
void fn_800515D8(s32 arg0, s32 arg1);
void fn_800515DC(s32 arg0, s32 arg1, s32 arg2);
void fn_800BCC98(void);
s32 fn_800BCCA0(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800BD4CC(s32 arg0, s32 arg1, s32 arg2);
void fn_800BD92C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BE0E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BEAA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BF208(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800BF9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800C038C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800C0B0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800C0F40(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800C1374(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800CA050(s8 *arg0, s8 *arg1);
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

// asm_to_cpp: fn_800BCC98
asm void fn_800BCC98(void) {
    nofralloc
    li r5, 0x0
    b fn_800BCCA0
}

// asm_to_cpp: fn_800BCCA0
asm s32 fn_800BCCA0(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    mr r31, r5
    li r4, 0x14
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800BD4A8
    cmpwi r31, 0x0
    beq lbl_800BCCE4
    b lbl_800BCCF8
lbl_800BCCE4:
    lwz r3, 0x110(r30)
    li r4, 0xe08
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800BCCF8:
    mr r3, r31
    li r4, 0x0
    li r5, 0xe08
    bl memset
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r30
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r30
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x24(r31)
    mr r3, r30
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x28(r31)
    mr r3, r30
    li r4, 0xa0
    bl fn_80181504
    stw r3, 0x2c(r31)
    mr r3, r30
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x30(r31)
    mr r3, r30
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x34(r31)
    addi r3, r31, 0x38
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xc8
    addi r4, r31, 0x38
    bl fn_801734E4
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x158(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x15c(r31)
    mr r3, r30
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x160(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x164(r31)
    mr r3, r30
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x168(r31)
    mr r3, r30
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x16c(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x170(r31)
    mr r3, r30
    li r4, 0xa5
    bl fn_80181504
    stw r3, 0x174(r31)
    addi r3, r31, 0x178
    lwz r4, 0x15c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x160(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x208
    addi r4, r31, 0x178
    bl fn_801734E4
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x298(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x29c(r31)
    mr r3, r30
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x2a0(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x2a4(r31)
    mr r3, r30
    li r4, 0xa8
    bl fn_8018149C
    stw r3, 0x2a8(r31)
    mr r3, r30
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x2ac(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x2b0(r31)
    mr r3, r30
    li r4, 0xa8
    bl fn_80181504
    stw r3, 0x2b4(r31)
    addi r3, r31, 0x2b8
    lwz r4, 0x29c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x2a0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x348
    addi r4, r31, 0x2b8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x3d8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x3dc(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_8018149C
    stw r3, 0x3e0(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_8018149C
    stw r3, 0x3e4(r31)
    mr r3, r30
    li r4, 0xb1
    bl fn_8018149C
    stw r3, 0x3e8(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x3ec(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_80181504
    stw r3, 0x3f0(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_80181504
    stw r3, 0x3f4(r31)
    mr r3, r30
    li r4, 0xb1
    bl fn_80181504
    stw r3, 0x3f8(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x3fc(r31)
    addi r3, r31, 0x400
    lwz r4, 0x3dc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x3e0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x4c0
    addi r4, r31, 0x400
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x580(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x584(r31)
    mr r3, r30
    li r4, 0xa9
    bl fn_8018149C
    stw r3, 0x588(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_8018149C
    stw r3, 0x58c(r31)
    mr r3, r30
    li r4, 0xab
    bl fn_8018149C
    stw r3, 0x590(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_8018149C
    stw r3, 0x594(r31)
    mr r3, r30
    li r4, 0xa9
    bl fn_80181504
    stw r3, 0x598(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_80181504
    stw r3, 0x59c(r31)
    mr r3, r30
    li r4, 0xab
    bl fn_80181504
    stw r3, 0x5a0(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_80181504
    stw r3, 0x5a4(r31)
    addi r3, r31, 0x5a8
    lwz r4, 0x584(r31)
    addi r4, r4, 0x224
    lwz r5, 0x588(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x668
    addi r4, r31, 0x5a8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x728(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x72c(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_8018149C
    stw r3, 0x730(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_8018149C
    stw r3, 0x734(r31)
    mr r3, r30
    li r4, 0xb5
    bl fn_8018149C
    stw r3, 0x738(r31)
    mr r3, r30
    li r4, 0xb6
    bl fn_8018149C
    stw r3, 0x73c(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_80181504
    stw r3, 0x740(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_80181504
    stw r3, 0x744(r31)
    mr r3, r30
    li r4, 0xb5
    bl fn_80181504
    stw r3, 0x748(r31)
    mr r3, r30
    li r4, 0xb6
    bl fn_80181504
    stw r3, 0x74c(r31)
    addi r3, r31, 0x750
    lwz r4, 0x72c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x730(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x810
    addi r4, r31, 0x750
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x8d0(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x8d4(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_8018149C
    stw r3, 0x8d8(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_8018149C
    stw r3, 0x8dc(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_8018149C
    stw r3, 0x8e0(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_8018149C
    stw r3, 0x8e4(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_80181504
    stw r3, 0x8e8(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_80181504
    stw r3, 0x8ec(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_80181504
    stw r3, 0x8f0(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_80181504
    stw r3, 0x8f4(r31)
    addi r3, r31, 0x8f8
    lwz r4, 0x8d4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x8d8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x9b8
    addi r4, r31, 0x8f8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xa78(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xa7c(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_8018149C
    stw r3, 0xa80(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_8018149C
    stw r3, 0xa84(r31)
    mr r3, r30
    li r4, 0xb9
    bl fn_8018149C
    stw r3, 0xa88(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_8018149C
    stw r3, 0xa8c(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_80181504
    stw r3, 0xa90(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_80181504
    stw r3, 0xa94(r31)
    mr r3, r30
    li r4, 0xb9
    bl fn_80181504
    stw r3, 0xa98(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_80181504
    stw r3, 0xa9c(r31)
    addi r3, r31, 0xaa0
    lwz r4, 0xa7c(r31)
    addi r4, r4, 0x224
    lwz r5, 0xa80(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xb60
    addi r4, r31, 0xaa0
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xc20(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xc24(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_8018149C
    stw r3, 0xc28(r31)
    mr r3, r30
    li r4, 0xc0
    bl fn_8018149C
    stw r3, 0xc2c(r31)
    mr r3, r30
    li r4, 0xc1
    bl fn_8018149C
    stw r3, 0xc30(r31)
    mr r3, r30
    li r4, 0xc2
    bl fn_8018149C
    stw r3, 0xc34(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_80181504
    stw r3, 0xc38(r31)
    mr r3, r30
    li r4, 0xc0
    bl fn_80181504
    stw r3, 0xc3c(r31)
    mr r3, r30
    li r4, 0xc1
    bl fn_80181504
    stw r3, 0xc40(r31)
    mr r3, r30
    li r4, 0xc2
    bl fn_80181504
    stw r3, 0xc44(r31)
    addi r3, r31, 0xc48
    lwz r4, 0xc24(r31)
    addi r4, r4, 0x224
    lwz r5, 0xc28(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xd08
    addi r4, r31, 0xc48
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xdc8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xdcc(r31)
    mr r3, r30
    li r4, 0x12
    bl fn_8018149C
    stw r3, 0xdd0(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0xdd4(r31)
    mr r3, r30
    li r4, 0x14
    bl fn_8018149C
    stw r3, 0xdd8(r31)
    mr r3, r30
    li r4, 0x12
    bl fn_80181504
    stw r3, 0xddc(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_80181504
    stw r3, 0xde0(r31)
    mr r3, r30
    li r4, 0x14
    bl fn_80181504
    stw r3, 0xde4(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xde8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xdec(r31)
    mr r3, r30
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0xdf0(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0xdf4(r31)
    mr r3, r30
    li r4, 0x11
    bl fn_8018149C
    stw r3, 0xdf8(r31)
    mr r3, r30
    li r4, 0xf
    bl fn_80181504
    stw r3, 0xdfc(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_80181504
    stw r3, 0xe00(r31)
    mr r3, r30
    li r4, 0x11
    bl fn_80181504
    stw r3, 0xe04(r31)
    mr r3, r30
    mr r4, r31
    li r5, 0x14
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800BD4B4
lbl_800BD4A8:
    mr r3, r30
    mr r4, r29
    bl fn_800BD4CC
lbl_800BD4B4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800BD4CC
asm M2C_UNK fn_800BD4CC(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x190
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
    subi r11, r12, 0x30
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    lfs f31, lbl_8049F910
    la r31, lbl_8049F910
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x140(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x144(r1)
    stfs f31, 0x148(r1)
    stfs f29, 0x14c(r1)
    stfs f29, 0x130(r1)
    stfs f31, 0x134(r1)
    stfs f31, 0x138(r1)
    stfs f29, 0x13c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    addi r7, r1, 0x110
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x120(r1)
    stw r0, 0x124(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    addi r6, r1, 0x120
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BD92C
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    addi r7, r1, 0xf0
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    addi r6, r1, 0x100
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BE0E8
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BEAA0
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BF208
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800BF9D0
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800C038C
    lfs f1, lbl_8049F910
    stfs f1, 0x140(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0x144(r1)
    stfs f1, 0x148(r1)
    fmr f0, f29
    stfs f0, 0x14c(r1)
    stfs f0, 0x130(r1)
    stfs f1, 0x134(r1)
    stfs f1, 0x138(r1)
    stfs f0, 0x13c(r1)
    lfs f0, 0x18(r31)
    fmuls f31, f0, f29
    lfs f30, 0x1c(r31)
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800C0B0C
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800C0F40
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800C1374
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
    subi r11, r10, 0x30
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800BD92C
asm void fn_800BD92C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x220
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
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f18, f1
    fmr f19, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F910
    lfs f21, 0x4(r3)
    lfs f22, 0x24(r3)
    lfs f23, lbl_8049F910
    lfs f20, 0x20(r3)
    lfs f26, 0x30(r3)
    lfs f27, 0x34(r3)
    lfs f28, 0x38(r3)
    lfs f29, 0x3c(r3)
    lfs f31, 0x44(r3)
    lfs f30, 0x40(r3)
    lfs f25, 0x2c(r3)
    lfs f24, 0x28(r3)
lbl_800BDAA4:
    add r3, r27, r25
    lwz r3, 0x3e0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800BDB08
    add r4, r27, r26
    addi r3, r4, 0x4c0
    addi r4, r4, 0x400
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x3dc(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x3e0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x400
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800BDBA4
lbl_800BDB08:
    add r4, r27, r26
    addi r3, r4, 0x4c0
    addi r4, r4, 0x400
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800BDB6C
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x3e0(r4)
    lwz r4, 0x3f0(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x3f0(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x3f0(r4)
    addi r4, r4, 0x224
    lwz r5, 0x3e0(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BDB6C:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x3f0(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x3e0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x400
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800BDBA4:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x400
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x4c0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f18
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
    bge lbl_800BDC38
    cmpwi r31, 0x0
    bge lbl_800BDC44
    b lbl_800BDC68
lbl_800BDC38:
    cmpwi r31, 0x4
    bge lbl_800BDC68
    b lbl_800BDC58
lbl_800BDC44:
    addi r3, r1, 0x90
    lwz r4, 0xde0(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800BDC68
lbl_800BDC58:
    addi r3, r1, 0x90
    lwz r4, 0xde4(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800BDC68:
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
    stfs f23, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x4
    bge lbl_800BDCE0
    cmpwi r31, 0x2
    bge lbl_800BDCCC
    b lbl_800BDCE0
lbl_800BDCCC:
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f23, 0x3c(r1)
    b lbl_800BDCF0
lbl_800BDCE0:
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f20, 0x38(r1)
    stfs f23, 0x3c(r1)
lbl_800BDCF0:
    cmpwi r28, 0x86
    bge lbl_800BDD64
    cmpwi r28, 0x66
    bge lbl_800BDD34
    cmpwi r28, 0x2c
    bge lbl_800BDD28
    cmpwi r28, 0x12
    bge lbl_800BDD1C
    cmpwi r28, 0x10
    bge lbl_800BDDB4
    b lbl_800BDE3C
lbl_800BDD1C:
    cmpwi r28, 0x2a
    bge lbl_800BDDB4
    b lbl_800BDE3C
lbl_800BDD28:
    cmpwi r28, 0x2e
    beq lbl_800BDDB4
    b lbl_800BDE3C
lbl_800BDD34:
    cmpwi r28, 0x71
    beq lbl_800BDE08
    bge lbl_800BDD58
    cmpwi r28, 0x6d
    beq lbl_800BDDB4
    bge lbl_800BDE3C
    cmpwi r28, 0x6b
    bge lbl_800BDE3C
    b lbl_800BDDB4
lbl_800BDD58:
    cmpwi r28, 0x84
    bge lbl_800BDDB4
    b lbl_800BDE3C
lbl_800BDD64:
    cmpwi r28, 0x1b4
    beq lbl_800BDDB4
    bge lbl_800BDD9C
    cmpwi r28, 0x8b
    beq lbl_800BDDB4
    bge lbl_800BDD90
    cmpwi r28, 0x8a
    bge lbl_800BDE3C
    cmpwi r28, 0x88
    bge lbl_800BDDB4
    b lbl_800BDE3C
lbl_800BDD90:
    cmpwi r28, 0x160
    beq lbl_800BDE08
    b lbl_800BDE3C
lbl_800BDD9C:
    cmpwi r28, 0x23b
    beq lbl_800BDDB4
    bge lbl_800BDE3C
    cmpwi r28, 0x1b6
    beq lbl_800BDDB4
    b lbl_800BDE3C
lbl_800BDDB4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800BDDC8
    stfs f21, 0x20(r1)
lbl_800BDDC8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BDDDC
    stfs f22, 0x24(r1)
lbl_800BDDDC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800BDDF0
    stfs f23, 0x24(r1)
lbl_800BDDF0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800BDF08
    stfs f24, 0x28(r1)
    b lbl_800BDF08
lbl_800BDE08:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BDE18
    stfs f21, 0x20(r1)
lbl_800BDE18:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BDE28
    stfs f22, 0x24(r1)
lbl_800BDE28:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    ble lbl_800BDF08
    stfs f25, 0x24(r1)
    b lbl_800BDF08
lbl_800BDE3C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800BDE50
    stfs f26, 0x20(r1)
lbl_800BDE50:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800BDE64
    stfs f27, 0x24(r1)
lbl_800BDE64:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800BDE78
    stfs f28, 0x24(r1)
lbl_800BDE78:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800BDE8C
    stfs f29, 0x28(r1)
lbl_800BDE8C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800BDEA0
    stfs f26, 0x28(r1)
lbl_800BDEA0:
    cmpwi r28, 0xf3
    beq lbl_800BDEDC
    bge lbl_800BDEC4
    cmpwi r28, 0xd2
    beq lbl_800BDEF0
    bge lbl_800BDF08
    cmpwi r28, 0x0
    beq lbl_800BDEDC
    b lbl_800BDF08
lbl_800BDEC4:
    cmpwi r28, 0x131
    beq lbl_800BDEF0
    bge lbl_800BDF08
    cmpwi r28, 0xfc
    beq lbl_800BDEDC
    b lbl_800BDF08
lbl_800BDEDC:
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f30, 0x38(r1)
    stfs f23, 0x3c(r1)
    b lbl_800BDF08
lbl_800BDEF0:
    cmpwi r31, 0x0
    bne lbl_800BDF08
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f23, 0x3c(r1)
lbl_800BDF08:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BDF24
    stfs f0, 0x28(r1)
lbl_800BDF24:
    cmpwi r28, 0x12a
    beq lbl_800BDF30
    b lbl_800BDF74
lbl_800BDF30:
    cmpwi r31, 0x0
    beq lbl_800BDF40
    cmpwi r31, 0x1
    bne lbl_800BDF74
lbl_800BDF40:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BDF74
    stfs f0, 0x24(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f26
    bge lbl_800BDF70
    stfs f26, 0x20(r1)
    b lbl_800BDF74
lbl_800BDF70:
    stfs f0, 0x20(r1)
lbl_800BDF74:
    add r4, r27, r25
    lwz r3, 0x3e0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x3e0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x3e0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x3e0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x3e0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x3e0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_800BDAA4
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800BE0E8
asm void fn_800BE0E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2b0
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
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
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
    li r4, 0xa9
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_8049F910
    lfs f21, 0x4(r31)
    lfs f22, 0x4c(r31)
    lfs f23, 0x24(r31)
    lfs f29, lbl_8049F910
    lfs f19, 0x40(r31)
    lfs f20, 0x30(r31)
    lfs f17, 0x48(r31)
    lfs f18, 0x20(r31)
    lfs f25, 0x38(r31)
    lfs f26, 0x3c(r31)
    lfs f28, 0x50(r31)
    lfs f0, 0x44(r31)
    stfd f0, 0x150(r1)
    lfs f27, 0x34(r31)
    lfs f24, 0x2c(r31)
    lfs f30, 0x54(r31)
    lfs f31, 0x58(r31)
    lfs f0, 0x5c(r31)
    stfd f0, 0x158(r1)
    lfs f0, 0x60(r31)
    stfd f0, 0x160(r1)
lbl_800BE2F8:
    add r3, r26, r24
    lwz r3, 0x588(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800BE35C
    add r4, r26, r25
    addi r3, r4, 0x668
    addi r4, r4, 0x5a8
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x584(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x588(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x5a8
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800BE3F8
lbl_800BE35C:
    add r4, r26, r25
    addi r3, r4, 0x668
    addi r4, r4, 0x5a8
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800BE3C0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x588(r4)
    lwz r4, 0x598(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x598(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x598(r4)
    addi r4, r4, 0x224
    lwz r5, 0x588(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BE3C0:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x598(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x588(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x5a8
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800BE3F8:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x5a8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x668
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    cmpwi r30, 0x2
    bge lbl_800BE4A0
    cmpwi r30, 0x0
    bge lbl_800BE48C
    b lbl_800BE4A0
lbl_800BE48C:
    addi r3, r1, 0xc0
    lwz r4, 0xde0(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800BE4B0
lbl_800BE4A0:
    addi r3, r1, 0xc0
    lwz r4, 0xde4(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800BE4B0:
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f29, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f29, 0x60(r1)
    stfs f29, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800BE528
    cmpwi r30, 0x0
    bge lbl_800BE51C
    b lbl_800BE528
lbl_800BE51C:
    stfs f17, 0x64(r1)
    stfs f18, 0x68(r1)
    b lbl_800BE530
lbl_800BE528:
    stfs f19, 0x64(r1)
    stfs f20, 0x68(r1)
lbl_800BE530:
    cmpwi r27, 0x86
    bge lbl_800BE5A4
    cmpwi r27, 0x66
    bge lbl_800BE574
    cmpwi r27, 0x2c
    bge lbl_800BE568
    cmpwi r27, 0x12
    bge lbl_800BE55C
    cmpwi r27, 0x10
    bge lbl_800BE5F4
    b lbl_800BE65C
lbl_800BE55C:
    cmpwi r27, 0x2a
    bge lbl_800BE5F4
    b lbl_800BE65C
lbl_800BE568:
    cmpwi r27, 0x2e
    beq lbl_800BE5F4
    b lbl_800BE65C
lbl_800BE574:
    cmpwi r27, 0x71
    beq lbl_800BE628
    bge lbl_800BE598
    cmpwi r27, 0x6d
    beq lbl_800BE5F4
    bge lbl_800BE65C
    cmpwi r27, 0x6b
    bge lbl_800BE65C
    b lbl_800BE5F4
lbl_800BE598:
    cmpwi r27, 0x84
    bge lbl_800BE5F4
    b lbl_800BE65C
lbl_800BE5A4:
    cmpwi r27, 0x1b4
    beq lbl_800BE5F4
    bge lbl_800BE5DC
    cmpwi r27, 0x8b
    beq lbl_800BE5F4
    bge lbl_800BE5D0
    cmpwi r27, 0x8a
    bge lbl_800BE65C
    cmpwi r27, 0x88
    bge lbl_800BE5F4
    b lbl_800BE65C
lbl_800BE5D0:
    cmpwi r27, 0x160
    beq lbl_800BE628
    b lbl_800BE65C
lbl_800BE5DC:
    cmpwi r27, 0x23b
    beq lbl_800BE5F4
    bge lbl_800BE65C
    cmpwi r27, 0x1b6
    beq lbl_800BE5F4
    b lbl_800BE65C
lbl_800BE5F4:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BE604
    stfs f21, 0x50(r1)
lbl_800BE604:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BE614
    stfs f22, 0x54(r1)
lbl_800BE614:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800BE818
    stfs f20, 0x54(r1)
    b lbl_800BE818
lbl_800BE628:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BE638
    stfs f21, 0x50(r1)
lbl_800BE638:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    bge lbl_800BE648
    stfs f23, 0x54(r1)
lbl_800BE648:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    ble lbl_800BE818
    stfs f24, 0x54(r1)
    b lbl_800BE818
lbl_800BE65C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800BE670
    stfs f20, 0x50(r1)
lbl_800BE670:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BE684
    stfs f22, 0x54(r1)
lbl_800BE684:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800BE698
    stfs f18, 0x54(r1)
lbl_800BE698:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800BE6AC
    stfs f26, 0x58(r1)
lbl_800BE6AC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800BE6C0
    stfs f20, 0x58(r1)
lbl_800BE6C0:
    cmpwi r27, 0xa2
    beq lbl_800BE754
    bge lbl_800BE6FC
    cmpwi r27, 0x91
    beq lbl_800BE780
    bge lbl_800BE6F0
    cmpwi r27, 0x31
    beq lbl_800BE780
    bge lbl_800BE818
    cmpwi r27, 0x0
    beq lbl_800BE72C
    b lbl_800BE818
lbl_800BE6F0:
    cmpwi r27, 0x93
    beq lbl_800BE740
    b lbl_800BE818
lbl_800BE6FC:
    cmpwi r27, 0xfc
    beq lbl_800BE808
    bge lbl_800BE720
    cmpwi r27, 0xf3
    beq lbl_800BE808
    bge lbl_800BE818
    cmpwi r27, 0xd2
    beq lbl_800BE7D4
    b lbl_800BE818
lbl_800BE720:
    cmpwi r27, 0x131
    beq lbl_800BE7D4
    b lbl_800BE818
lbl_800BE72C:
    stfs f29, 0x60(r1)
    stfs f18, 0x64(r1)
    stfs f27, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800BE818
lbl_800BE740:
    stfs f29, 0x60(r1)
    stfs f20, 0x64(r1)
    stfs f29, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800BE818
lbl_800BE754:
    cmpwi r30, 0x2
    bge lbl_800BE818
    cmpwi r30, 0x0
    bge lbl_800BE768
    b lbl_800BE818
lbl_800BE768:
    stfs f29, 0x60(r1)
    stfs f28, 0x64(r1)
    lfd f0, 0x150(r1)
    stfs f0, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800BE818
lbl_800BE780:
    cmpwi r30, 0x1
    beq lbl_800BE7AC
    bge lbl_800BE7C0
    cmpwi r30, 0x0
    bge lbl_800BE798
    b lbl_800BE7C0
lbl_800BE798:
    stfs f29, 0x60(r1)
    stfs f18, 0x64(r1)
    stfs f21, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800BE818
lbl_800BE7AC:
    stfs f29, 0x60(r1)
    stfs f26, 0x64(r1)
    stfs f17, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800BE818
lbl_800BE7C0:
    stfs f29, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f29, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800BE818
lbl_800BE7D4:
    stfs f29, 0x60(r1)
    stfs f29, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800BE7FC
    cmpwi r30, 0x0
    bge lbl_800BE7F0
    b lbl_800BE7FC
lbl_800BE7F0:
    stfs f18, 0x64(r1)
    stfs f21, 0x68(r1)
    b lbl_800BE818
lbl_800BE7FC:
    stfs f20, 0x64(r1)
    stfs f20, 0x68(r1)
    b lbl_800BE818
lbl_800BE808:
    stfs f29, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f29, 0x68(r1)
    stfs f29, 0x6c(r1)
lbl_800BE818:
    cmpwi r30, 0x0
    bne lbl_800BE8C4
    addi r3, r1, 0x30
    lwz r4, 0xdd0(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800BE878
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800BE87C
lbl_800BE878:
    stfs f31, 0xa0(r1)
lbl_800BE87C:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800BE88C
    stfs f31, 0xa0(r1)
lbl_800BE88C:
    lfd f0, 0x158(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x160(r1)
    stfs f0, 0xa8(r1)
    stfs f29, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x30(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800BE8C4:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BE8E0
    stfs f0, 0x54(r1)
lbl_800BE8E0:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BE8FC
    stfs f0, 0x58(r1)
lbl_800BE8FC:
    add r4, r26, r24
    lwz r3, 0x588(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x588(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x588(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x588(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x588(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x588(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_800BE2F8
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

// asm_to_cpp: fn_800BEAA0
asm void fn_800BEAA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x230
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
    subi r11, r12, 0xf0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f17, f1
    fmr f18, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F910
    lfs f20, 0x4(r3)
    lfs f21, 0x68(r3)
    lfs f23, 0x24(r3)
    lfs f26, 0x28(r3)
    lfs f25, 0x64(r3)
    lfs f27, lbl_8049F910
    lfs f19, 0x20(r3)
    lfs f28, 0x6c(r3)
    lfs f29, 0x70(r3)
    lfs f30, 0x74(r3)
    lfs f31, 0x40(r3)
    lfs f24, 0x2c(r3)
    lfs f22, 0x30(r3)
lbl_800BEC24:
    add r3, r27, r25
    lwz r3, 0x730(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800BEC88
    add r4, r27, r26
    addi r3, r4, 0x810
    addi r4, r4, 0x750
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x72c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x730(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x750
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800BED24
lbl_800BEC88:
    add r4, r27, r26
    addi r3, r4, 0x810
    addi r4, r4, 0x750
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800BECEC
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x730(r4)
    lwz r4, 0x740(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x740(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x740(r4)
    addi r4, r4, 0x224
    lwz r5, 0x730(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BECEC:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x740(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x730(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x750
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800BED24:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x750
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x810
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f17
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
    bge lbl_800BEDB8
    cmpwi r31, 0x0
    bge lbl_800BEDC4
    b lbl_800BEDE8
lbl_800BEDB8:
    cmpwi r31, 0x4
    bge lbl_800BEDE8
    b lbl_800BEDD8
lbl_800BEDC4:
    addi r3, r1, 0x90
    lwz r4, 0xde0(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800BEDE8
lbl_800BEDD8:
    addi r3, r1, 0x90
    lwz r4, 0xde4(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800BEDE8:
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
    stfs f27, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f25, 0x30(r1)
    stfs f19, 0x34(r1)
    stfs f27, 0x38(r1)
    stfs f27, 0x3c(r1)
    cmpwi r28, 0x71
    beq lbl_800BEF30
    bge lbl_800BEEA8
    cmpwi r28, 0x2e
    beq lbl_800BEEFC
    bge lbl_800BEE88
    cmpwi r28, 0x2a
    bge lbl_800BEE7C
    cmpwi r28, 0x12
    bge lbl_800BEFC0
    cmpwi r28, 0x10
    bge lbl_800BEEFC
    b lbl_800BEFC0
lbl_800BEE7C:
    cmpwi r28, 0x2c
    bge lbl_800BEFC0
    b lbl_800BEEFC
lbl_800BEE88:
    cmpwi r28, 0x6d
    beq lbl_800BEEFC
    bge lbl_800BEFC0
    cmpwi r28, 0x6b
    bge lbl_800BEFC0
    cmpwi r28, 0x66
    bge lbl_800BEEFC
    b lbl_800BEFC0
lbl_800BEEA8:
    cmpwi r28, 0x8b
    beq lbl_800BEEFC
    bge lbl_800BEEDC
    cmpwi r28, 0x88
    bge lbl_800BEED0
    cmpwi r28, 0x86
    bge lbl_800BEFC0
    cmpwi r28, 0x84
    bge lbl_800BEEFC
    b lbl_800BEFC0
lbl_800BEED0:
    cmpwi r28, 0x8a
    bge lbl_800BEFC0
    b lbl_800BEEFC
lbl_800BEEDC:
    cmpwi r28, 0x160
    beq lbl_800BEF30
    bge lbl_800BEFC0
    cmpwi r28, 0x112
    bge lbl_800BEFC0
    cmpwi r28, 0x110
    bge lbl_800BEF64
    b lbl_800BEFC0
lbl_800BEEFC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800BEF0C
    stfs f20, 0x20(r1)
lbl_800BEF0C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BEF1C
    stfs f21, 0x24(r1)
lbl_800BEF1C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800BF040
    stfs f22, 0x24(r1)
    b lbl_800BF040
lbl_800BEF30:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800BEF40
    stfs f20, 0x20(r1)
lbl_800BEF40:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800BEF50
    stfs f23, 0x24(r1)
lbl_800BEF50:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800BF040
    stfs f24, 0x24(r1)
    b lbl_800BF040
lbl_800BEF64:
    lfs f0, 0x24(r1)
    fsubs f0, f0, f25
    stfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800BEF80
    stfs f26, 0x24(r1)
lbl_800BEF80:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800BEF94
    stfs f27, 0x24(r1)
lbl_800BEF94:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800BEFA8
    stfs f26, 0x28(r1)
lbl_800BEFA8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800BF040
    stfs f25, 0x28(r1)
    b lbl_800BF040
lbl_800BEFC0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800BEFD4
    stfs f28, 0x20(r1)
lbl_800BEFD4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800BEFE8
    stfs f29, 0x24(r1)
lbl_800BEFE8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800BEFFC
    stfs f30, 0x24(r1)
lbl_800BEFFC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800BF010
    stfs f26, 0x28(r1)
lbl_800BF010:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800BF024
    stfs f28, 0x28(r1)
lbl_800BF024:
    cmpwi r28, 0x0
    beq lbl_800BF030
    b lbl_800BF040
lbl_800BF030:
    stfs f27, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f27, 0x38(r1)
    stfs f27, 0x3c(r1)
lbl_800BF040:
    cmpwi r28, 0x112
    bge lbl_800BF050
    cmpwi r28, 0x110
    bge lbl_800BF088
lbl_800BF050:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BF06C
    stfs f0, 0x24(r1)
lbl_800BF06C:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800BF088
    stfs f0, 0x28(r1)
lbl_800BF088:
    add r4, r27, r25
    lwz r3, 0x730(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x730(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x730(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x730(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x730(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x730(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_800BEC24
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
    subi r11, r10, 0xf0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800BF208
asm void fn_800BF208(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x220
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
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f18, f1
    fmr f19, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F910
    lfs f21, 0x4(r3)
    lfs f22, 0x24(r3)
    lfs f23, lbl_8049F910
    lfs f20, 0x20(r3)
    lfs f26, 0x30(r3)
    lfs f27, 0x34(r3)
    lfs f28, 0x38(r3)
    lfs f29, 0x4c(r3)
    lfs f31, 0x44(r3)
    lfs f30, 0x40(r3)
    lfs f25, 0x2c(r3)
    lfs f24, 0x64(r3)
lbl_800BF380:
    add r3, r27, r25
    lwz r3, 0x8d8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800BF3E4
    add r4, r27, r26
    addi r3, r4, 0x9b8
    addi r4, r4, 0x8f8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x8d4(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x8d8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x8f8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800BF480
lbl_800BF3E4:
    add r4, r27, r26
    addi r3, r4, 0x9b8
    addi r4, r4, 0x8f8
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800BF448
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x8d8(r4)
    lwz r4, 0x8e8(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x8e8(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x8e8(r4)
    addi r4, r4, 0x224
    lwz r5, 0x8d8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BF448:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x8e8(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x8d8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x8f8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800BF480:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x8f8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x9b8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f18
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
    bge lbl_800BF514
    cmpwi r31, 0x0
    bge lbl_800BF520
    b lbl_800BF544
lbl_800BF514:
    cmpwi r31, 0x4
    bge lbl_800BF544
    b lbl_800BF534
lbl_800BF520:
    addi r3, r1, 0x90
    lwz r4, 0xe00(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800BF544
lbl_800BF534:
    addi r3, r1, 0x90
    lwz r4, 0xe04(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800BF544:
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
    stfs f23, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x4
    bge lbl_800BF5BC
    cmpwi r31, 0x2
    bge lbl_800BF5A8
    b lbl_800BF5BC
lbl_800BF5A8:
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f23, 0x3c(r1)
    b lbl_800BF5CC
lbl_800BF5BC:
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f20, 0x38(r1)
    stfs f23, 0x3c(r1)
lbl_800BF5CC:
    cmpwi r28, 0x86
    bge lbl_800BF640
    cmpwi r28, 0x66
    bge lbl_800BF610
    cmpwi r28, 0x2c
    bge lbl_800BF604
    cmpwi r28, 0x12
    bge lbl_800BF5F8
    cmpwi r28, 0x10
    bge lbl_800BF690
    b lbl_800BF718
lbl_800BF5F8:
    cmpwi r28, 0x2a
    bge lbl_800BF690
    b lbl_800BF718
lbl_800BF604:
    cmpwi r28, 0x2e
    beq lbl_800BF690
    b lbl_800BF718
lbl_800BF610:
    cmpwi r28, 0x71
    beq lbl_800BF6E4
    bge lbl_800BF634
    cmpwi r28, 0x6d
    beq lbl_800BF690
    bge lbl_800BF718
    cmpwi r28, 0x6b
    bge lbl_800BF718
    b lbl_800BF690
lbl_800BF634:
    cmpwi r28, 0x84
    bge lbl_800BF690
    b lbl_800BF718
lbl_800BF640:
    cmpwi r28, 0x1b4
    beq lbl_800BF690
    bge lbl_800BF678
    cmpwi r28, 0x8b
    beq lbl_800BF690
    bge lbl_800BF66C
    cmpwi r28, 0x8a
    bge lbl_800BF718
    cmpwi r28, 0x88
    bge lbl_800BF690
    b lbl_800BF718
lbl_800BF66C:
    cmpwi r28, 0x160
    beq lbl_800BF6E4
    b lbl_800BF718
lbl_800BF678:
    cmpwi r28, 0x23b
    beq lbl_800BF690
    bge lbl_800BF718
    cmpwi r28, 0x1b6
    beq lbl_800BF690
    b lbl_800BF718
lbl_800BF690:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800BF6A4
    stfs f21, 0x20(r1)
lbl_800BF6A4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BF6B8
    stfs f22, 0x24(r1)
lbl_800BF6B8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800BF6CC
    stfs f23, 0x24(r1)
lbl_800BF6CC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800BF7F0
    stfs f24, 0x28(r1)
    b lbl_800BF7F0
lbl_800BF6E4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BF6F4
    stfs f21, 0x20(r1)
lbl_800BF6F4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BF704
    stfs f22, 0x24(r1)
lbl_800BF704:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    ble lbl_800BF7F0
    stfs f25, 0x24(r1)
    b lbl_800BF7F0
lbl_800BF718:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800BF72C
    stfs f26, 0x20(r1)
lbl_800BF72C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800BF740
    stfs f27, 0x24(r1)
lbl_800BF740:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800BF754
    stfs f28, 0x24(r1)
lbl_800BF754:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800BF768
    stfs f29, 0x28(r1)
lbl_800BF768:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800BF77C
    stfs f28, 0x28(r1)
lbl_800BF77C:
    cmpwi r28, 0xfc
    beq lbl_800BF7C4
    bge lbl_800BF7AC
    cmpwi r28, 0xd2
    beq lbl_800BF7D8
    bge lbl_800BF7A0
    cmpwi r28, 0x0
    beq lbl_800BF7C4
    b lbl_800BF7F0
lbl_800BF7A0:
    cmpwi r28, 0xf3
    beq lbl_800BF7C4
    b lbl_800BF7F0
lbl_800BF7AC:
    cmpwi r28, 0x1c1
    beq lbl_800BF7D8
    bge lbl_800BF7F0
    cmpwi r28, 0x131
    beq lbl_800BF7D8
    b lbl_800BF7F0
lbl_800BF7C4:
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f30, 0x38(r1)
    stfs f23, 0x3c(r1)
    b lbl_800BF7F0
lbl_800BF7D8:
    cmpwi r31, 0x0
    bne lbl_800BF7F0
    stfs f23, 0x30(r1)
    stfs f23, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f23, 0x3c(r1)
lbl_800BF7F0:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BF80C
    stfs f0, 0x28(r1)
lbl_800BF80C:
    cmpwi r28, 0x12a
    beq lbl_800BF818
    b lbl_800BF85C
lbl_800BF818:
    cmpwi r31, 0x0
    beq lbl_800BF828
    cmpwi r31, 0x1
    bne lbl_800BF85C
lbl_800BF828:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800BF85C
    stfs f0, 0x24(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f26
    bge lbl_800BF858
    stfs f26, 0x20(r1)
    b lbl_800BF85C
lbl_800BF858:
    stfs f0, 0x20(r1)
lbl_800BF85C:
    add r4, r27, r25
    lwz r3, 0x8d8(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x8d8(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x8d8(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x8d8(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x8d8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x8d8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_800BF380
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800BF9D0
asm void fn_800BF9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2a0
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
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
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
    li r4, 0xb7
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_8049F910
    lfs f21, 0x4(r31)
    lfs f22, 0x4c(r31)
    lfs f23, 0x24(r31)
    lfs f29, lbl_8049F910
    lfs f19, 0x40(r31)
    lfs f20, 0x30(r31)
    lfs f17, 0x48(r31)
    lfs f18, 0x20(r31)
    lfs f24, 0x38(r31)
    lfs f28, 0x14(r31)
    lfs f26, 0x2c(r31)
    lfs f27, 0x44(r31)
    lfs f25, 0x34(r31)
    lfs f30, 0x54(r31)
    lfs f31, 0x78(r31)
    lfs f0, 0x5c(r31)
    stfd f0, 0x150(r1)
    lfs f0, 0x7c(r31)
    stfd f0, 0x158(r1)
lbl_800BFBD8:
    add r3, r26, r24
    lwz r3, 0xa80(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800BFC3C
    add r4, r26, r25
    addi r3, r4, 0xb60
    addi r4, r4, 0xaa0
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0xa7c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0xa80(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xaa0
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800BFCD8
lbl_800BFC3C:
    add r4, r26, r25
    addi r3, r4, 0xb60
    addi r4, r4, 0xaa0
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800BFCA0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0xa80(r4)
    lwz r4, 0xa90(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0xa90(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0xa90(r4)
    addi r4, r4, 0x224
    lwz r5, 0xa80(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800BFCA0:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0xa90(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0xa80(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xaa0
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800BFCD8:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0xaa0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0xb60
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    cmpwi r30, 0x2
    bge lbl_800BFD88
    cmpwi r30, 0x0
    bge lbl_800BFD6C
    b lbl_800BFD88
lbl_800BFD6C:
    addi r3, r1, 0xc0
    lwz r4, 0xdfc(r26)
    addi r4, r4, 0x224
    lwz r5, 0xdf4(r26)
    addi r5, r5, 0x50
    bl fn_8017375C
    b lbl_800BFDA0
lbl_800BFD88:
    addi r3, r1, 0xc0
    lwz r4, 0xe00(r26)
    addi r4, r4, 0x224
    lwz r5, 0xdf8(r26)
    addi r5, r5, 0x50
    bl fn_8017375C
lbl_800BFDA0:
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f29, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f29, 0x60(r1)
    stfs f29, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800BFE18
    cmpwi r30, 0x0
    bge lbl_800BFE0C
    b lbl_800BFE18
lbl_800BFE0C:
    stfs f17, 0x64(r1)
    stfs f18, 0x68(r1)
    b lbl_800BFE20
lbl_800BFE18:
    stfs f19, 0x64(r1)
    stfs f20, 0x68(r1)
lbl_800BFE20:
    cmpwi r27, 0x86
    bge lbl_800BFE94
    cmpwi r27, 0x66
    bge lbl_800BFE64
    cmpwi r27, 0x2c
    bge lbl_800BFE58
    cmpwi r27, 0x12
    bge lbl_800BFE4C
    cmpwi r27, 0x10
    bge lbl_800BFEE4
    b lbl_800BFF4C
lbl_800BFE4C:
    cmpwi r27, 0x2a
    bge lbl_800BFEE4
    b lbl_800BFF4C
lbl_800BFE58:
    cmpwi r27, 0x2e
    beq lbl_800BFEE4
    b lbl_800BFF4C
lbl_800BFE64:
    cmpwi r27, 0x71
    beq lbl_800BFF18
    bge lbl_800BFE88
    cmpwi r27, 0x6d
    beq lbl_800BFEE4
    bge lbl_800BFF4C
    cmpwi r27, 0x6b
    bge lbl_800BFF4C
    b lbl_800BFEE4
lbl_800BFE88:
    cmpwi r27, 0x84
    bge lbl_800BFEE4
    b lbl_800BFF4C
lbl_800BFE94:
    cmpwi r27, 0x1b4
    beq lbl_800BFEE4
    bge lbl_800BFECC
    cmpwi r27, 0x8b
    beq lbl_800BFEE4
    bge lbl_800BFEC0
    cmpwi r27, 0x8a
    bge lbl_800BFF4C
    cmpwi r27, 0x88
    bge lbl_800BFEE4
    b lbl_800BFF4C
lbl_800BFEC0:
    cmpwi r27, 0x160
    beq lbl_800BFF18
    b lbl_800BFF4C
lbl_800BFECC:
    cmpwi r27, 0x23b
    beq lbl_800BFEE4
    bge lbl_800BFF4C
    cmpwi r27, 0x1b6
    beq lbl_800BFEE4
    b lbl_800BFF4C
lbl_800BFEE4:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BFEF4
    stfs f21, 0x50(r1)
lbl_800BFEF4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    bge lbl_800BFF04
    stfs f22, 0x54(r1)
lbl_800BFF04:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    ble lbl_800C0104
    stfs f20, 0x54(r1)
    b lbl_800C0104
lbl_800BFF18:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f21
    bge lbl_800BFF28
    stfs f21, 0x50(r1)
lbl_800BFF28:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    bge lbl_800BFF38
    stfs f23, 0x54(r1)
lbl_800BFF38:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f26
    ble lbl_800C0104
    stfs f26, 0x54(r1)
    b lbl_800C0104
lbl_800BFF4C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800BFF60
    stfs f20, 0x50(r1)
lbl_800BFF60:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BFF74
    stfs f22, 0x54(r1)
lbl_800BFF74:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800BFF88
    stfs f24, 0x54(r1)
lbl_800BFF88:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800BFF9C
    stfs f22, 0x58(r1)
lbl_800BFF9C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800BFFB0
    stfs f24, 0x58(r1)
lbl_800BFFB0:
    cmpwi r27, 0xa2
    beq lbl_800C0044
    bge lbl_800BFFEC
    cmpwi r27, 0x91
    beq lbl_800C006C
    bge lbl_800BFFE0
    cmpwi r27, 0x31
    beq lbl_800C006C
    bge lbl_800C0104
    cmpwi r27, 0x0
    beq lbl_800C001C
    b lbl_800C0104
lbl_800BFFE0:
    cmpwi r27, 0x93
    beq lbl_800C0030
    b lbl_800C0104
lbl_800BFFEC:
    cmpwi r27, 0xfc
    beq lbl_800C00F4
    bge lbl_800C0010
    cmpwi r27, 0xf3
    beq lbl_800C00F4
    bge lbl_800C0104
    cmpwi r27, 0xd2
    beq lbl_800C00C0
    b lbl_800C0104
lbl_800C0010:
    cmpwi r27, 0x131
    beq lbl_800C00C0
    b lbl_800C0104
lbl_800C001C:
    stfs f29, 0x60(r1)
    stfs f24, 0x64(r1)
    stfs f25, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800C0104
lbl_800C0030:
    stfs f29, 0x60(r1)
    stfs f19, 0x64(r1)
    stfs f29, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800C0104
lbl_800C0044:
    cmpwi r30, 0x2
    bge lbl_800C0104
    cmpwi r30, 0x0
    bge lbl_800C0058
    b lbl_800C0104
lbl_800C0058:
    stfs f29, 0x60(r1)
    stfs f26, 0x64(r1)
    stfs f27, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800C0104
lbl_800C006C:
    cmpwi r30, 0x1
    beq lbl_800C0098
    bge lbl_800C00AC
    cmpwi r30, 0x0
    bge lbl_800C0084
    b lbl_800C00AC
lbl_800C0084:
    stfs f29, 0x60(r1)
    stfs f24, 0x64(r1)
    stfs f21, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800C0104
lbl_800C0098:
    stfs f29, 0x60(r1)
    stfs f28, 0x64(r1)
    stfs f17, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800C0104
lbl_800C00AC:
    stfs f29, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f29, 0x68(r1)
    stfs f29, 0x6c(r1)
    b lbl_800C0104
lbl_800C00C0:
    stfs f29, 0x60(r1)
    stfs f29, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800C00E8
    cmpwi r30, 0x0
    bge lbl_800C00DC
    b lbl_800C00E8
lbl_800C00DC:
    stfs f24, 0x64(r1)
    stfs f21, 0x68(r1)
    b lbl_800C0104
lbl_800C00E8:
    stfs f19, 0x64(r1)
    stfs f20, 0x68(r1)
    b lbl_800C0104
lbl_800C00F4:
    stfs f29, 0x60(r1)
    stfs f18, 0x64(r1)
    stfs f29, 0x68(r1)
    stfs f29, 0x6c(r1)
lbl_800C0104:
    cmpwi r30, 0x0
    bne lbl_800C01B0
    addi r3, r1, 0x30
    lwz r4, 0xdf0(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800C0164
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800C0168
lbl_800C0164:
    stfs f31, 0xa0(r1)
lbl_800C0168:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800C0178
    stfs f31, 0xa0(r1)
lbl_800C0178:
    lfd f0, 0x150(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x158(r1)
    stfs f0, 0xa8(r1)
    stfs f29, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x30(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800C01B0:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800C01CC
    stfs f0, 0x54(r1)
lbl_800C01CC:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800C01E8
    stfs f0, 0x58(r1)
lbl_800C01E8:
    add r4, r26, r24
    lwz r3, 0xa80(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xa80(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xa80(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xa80(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xa80(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0xa80(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_800BFBD8
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

// asm_to_cpp: fn_800C038C
asm void fn_800C038C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x240
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
    subi r11, r12, 0x100
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f16, f1
    fmr f17, f2
    addi r3, r1, 0x80
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F910
    lfs f19, 0x4(r3)
    lfs f20, 0x68(r3)
    lfs f22, 0x24(r3)
    lfs f25, 0x28(r3)
    lfs f24, 0x64(r3)
    lfs f26, lbl_8049F910
    lfs f18, 0x20(r3)
    lfs f27, 0x6c(r3)
    lfs f28, 0x70(r3)
    lfs f29, 0x74(r3)
    lfs f30, 0x80(r3)
    lfs f31, 0x40(r3)
    lfs f23, 0x2c(r3)
    lfs f21, 0x30(r3)
lbl_800C051C:
    add r3, r27, r25
    lwz r3, 0xc28(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800C0580
    add r4, r27, r26
    addi r3, r4, 0xd08
    addi r4, r4, 0xc48
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xc24(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xc28(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xc48
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800C061C
lbl_800C0580:
    add r4, r27, r26
    addi r3, r4, 0xd08
    addi r4, r4, 0xc48
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800C05E4
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0xc28(r4)
    lwz r4, 0xc38(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0xc38(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xc38(r4)
    addi r4, r4, 0x224
    lwz r5, 0xc28(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800C05E4:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xc38(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xc28(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xc48
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800C061C:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xc48
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xd08
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f16
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
    bge lbl_800C06B0
    cmpwi r31, 0x0
    bge lbl_800C06BC
    b lbl_800C06E0
lbl_800C06B0:
    cmpwi r31, 0x4
    bge lbl_800C06E0
    b lbl_800C06D0
lbl_800C06BC:
    addi r3, r1, 0x90
    lwz r4, 0xe00(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800C06E0
lbl_800C06D0:
    addi r3, r1, 0x90
    lwz r4, 0xe04(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800C06E0:
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
    stfs f26, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x30(r1)
    stfs f18, 0x34(r1)
    stfs f26, 0x38(r1)
    stfs f26, 0x3c(r1)
    cmpwi r28, 0x71
    beq lbl_800C0828
    bge lbl_800C07A0
    cmpwi r28, 0x2e
    beq lbl_800C07F4
    bge lbl_800C0780
    cmpwi r28, 0x2a
    bge lbl_800C0774
    cmpwi r28, 0x12
    bge lbl_800C08B8
    cmpwi r28, 0x10
    bge lbl_800C07F4
    b lbl_800C08B8
lbl_800C0774:
    cmpwi r28, 0x2c
    bge lbl_800C08B8
    b lbl_800C07F4
lbl_800C0780:
    cmpwi r28, 0x6d
    beq lbl_800C07F4
    bge lbl_800C08B8
    cmpwi r28, 0x6b
    bge lbl_800C08B8
    cmpwi r28, 0x66
    bge lbl_800C07F4
    b lbl_800C08B8
lbl_800C07A0:
    cmpwi r28, 0x8b
    beq lbl_800C07F4
    bge lbl_800C07D4
    cmpwi r28, 0x88
    bge lbl_800C07C8
    cmpwi r28, 0x86
    bge lbl_800C08B8
    cmpwi r28, 0x84
    bge lbl_800C07F4
    b lbl_800C08B8
lbl_800C07C8:
    cmpwi r28, 0x8a
    bge lbl_800C08B8
    b lbl_800C07F4
lbl_800C07D4:
    cmpwi r28, 0x160
    beq lbl_800C0828
    bge lbl_800C08B8
    cmpwi r28, 0x112
    bge lbl_800C08B8
    cmpwi r28, 0x110
    bge lbl_800C085C
    b lbl_800C08B8
lbl_800C07F4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800C0804
    stfs f19, 0x20(r1)
lbl_800C0804:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800C0814
    stfs f20, 0x24(r1)
lbl_800C0814:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    ble lbl_800C0938
    stfs f21, 0x24(r1)
    b lbl_800C0938
lbl_800C0828:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800C0838
    stfs f19, 0x20(r1)
lbl_800C0838:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    bge lbl_800C0848
    stfs f22, 0x24(r1)
lbl_800C0848:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    ble lbl_800C0938
    stfs f23, 0x24(r1)
    b lbl_800C0938
lbl_800C085C:
    lfs f0, 0x24(r1)
    fsubs f0, f0, f24
    stfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800C0878
    stfs f25, 0x24(r1)
lbl_800C0878:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800C088C
    stfs f26, 0x24(r1)
lbl_800C088C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800C08A0
    stfs f25, 0x28(r1)
lbl_800C08A0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800C0938
    stfs f24, 0x28(r1)
    b lbl_800C0938
lbl_800C08B8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800C08CC
    stfs f27, 0x20(r1)
lbl_800C08CC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800C08E0
    stfs f28, 0x24(r1)
lbl_800C08E0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800C08F4
    stfs f29, 0x24(r1)
lbl_800C08F4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800C0908
    stfs f30, 0x28(r1)
lbl_800C0908:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800C091C
    stfs f24, 0x28(r1)
lbl_800C091C:
    cmpwi r28, 0x0
    beq lbl_800C0928
    b lbl_800C0938
lbl_800C0928:
    stfs f26, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f26, 0x38(r1)
    stfs f26, 0x3c(r1)
lbl_800C0938:
    cmpwi r28, 0x112
    bge lbl_800C0948
    cmpwi r28, 0x110
    bge lbl_800C0980
lbl_800C0948:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800C0964
    stfs f0, 0x24(r1)
lbl_800C0964:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800C0980
    stfs f0, 0x28(r1)
lbl_800C0980:
    add r4, r27, r25
    lwz r3, 0xc28(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xc28(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xc28(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xc28(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f17, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xc28(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0xc28(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x4
    blt lbl_800C051C
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
    subi r11, r10, 0x100
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800C0B0C
asm void fn_800C0B0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x180
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
    subi r11, r12, 0x90
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f23, f1
    fmr f24, f2
    addi r3, r1, 0x60
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F910
    lfs f25, 0x4(r3)
    lfs f26, 0x24(r3)
    lfs f28, 0x30(r3)
    lfs f29, lbl_8049F910
    lfs f30, 0x64(r3)
    lfs f31, 0x4c(r3)
    lfs f27, 0x84(r3)
lbl_800C0C48:
    cmpwi r31, 0x0
    bne lbl_800C0C90
    add r4, r27, r26
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x38
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800C0CD8
lbl_800C0C90:
    add r4, r27, r26
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x2c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x38
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800C0CD8:
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x38
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0xc8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f23
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
    cmpwi r28, 0x160
    beq lbl_800C0D70
    bge lbl_800C0DA4
    cmpwi r28, 0x71
    beq lbl_800C0D70
    b lbl_800C0DA4
lbl_800C0D70:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    bge lbl_800C0D80
    stfs f25, 0x10(r1)
lbl_800C0D80:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f26
    bge lbl_800C0D90
    stfs f26, 0x14(r1)
lbl_800C0D90:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f27
    ble lbl_800C0E08
    stfs f27, 0x14(r1)
    b lbl_800C0E08
lbl_800C0DA4:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800C0DB8
    stfs f28, 0x10(r1)
lbl_800C0DB8:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800C0DCC
    stfs f29, 0x14(r1)
lbl_800C0DCC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800C0DE0
    stfs f30, 0x14(r1)
lbl_800C0DE0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800C0DF4
    stfs f31, 0x18(r1)
lbl_800C0DF4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800C0E08
    stfs f28, 0x18(r1)
lbl_800C0E08:
    add r4, r27, r25
    lwz r3, 0x20(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
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
    cmpwi r31, 0x3
    blt lbl_800C0C48
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
    subi r11, r10, 0x90
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800C0F40
asm void fn_800C0F40(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x180
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
    subi r11, r12, 0x90
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f23, f1
    fmr f24, f2
    addi r3, r1, 0x60
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F910
    lfs f25, 0x4(r3)
    lfs f26, 0x24(r3)
    lfs f28, 0x30(r3)
    lfs f29, lbl_8049F910
    lfs f30, 0x64(r3)
    lfs f31, 0x28(r3)
    lfs f27, 0x84(r3)
lbl_800C107C:
    cmpwi r31, 0x0
    bne lbl_800C10C4
    add r4, r27, r26
    addi r3, r4, 0x208
    addi r4, r4, 0x178
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x15c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x178
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800C110C
lbl_800C10C4:
    add r4, r27, r26
    addi r3, r4, 0x208
    addi r4, r4, 0x178
    bl fn_801734E4
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x16c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x178
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800C110C:
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x178
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0x208
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f23
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
    cmpwi r28, 0x160
    beq lbl_800C11A4
    bge lbl_800C11D8
    cmpwi r28, 0x71
    beq lbl_800C11A4
    b lbl_800C11D8
lbl_800C11A4:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    bge lbl_800C11B4
    stfs f25, 0x10(r1)
lbl_800C11B4:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f26
    bge lbl_800C11C4
    stfs f26, 0x14(r1)
lbl_800C11C4:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f27
    ble lbl_800C123C
    stfs f27, 0x14(r1)
    b lbl_800C123C
lbl_800C11D8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800C11EC
    stfs f28, 0x10(r1)
lbl_800C11EC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800C1200
    stfs f29, 0x14(r1)
lbl_800C1200:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800C1214
    stfs f30, 0x14(r1)
lbl_800C1214:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800C1228
    stfs f31, 0x18(r1)
lbl_800C1228:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800C123C
    stfs f29, 0x18(r1)
lbl_800C123C:
    add r4, r27, r25
    lwz r3, 0x160(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x160(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x160(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800C107C
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
    subi r11, r10, 0x90
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800C1374
asm void fn_800C1374(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x180
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
    subi r11, r12, 0x90
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f23, f1
    fmr f24, f2
    addi r3, r1, 0x60
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F910
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F910
    lfs f25, 0x4(r3)
    lfs f26, 0x24(r3)
    lfs f28, 0x30(r3)
    lfs f30, 0x80(r3)
    lfs f29, 0x64(r3)
    lfs f31, 0x4c(r3)
    lfs f27, 0x84(r3)
lbl_800C14B0:
    cmpwi r31, 0x0
    bne lbl_800C14F8
    add r4, r27, r26
    addi r3, r4, 0x348
    addi r4, r4, 0x2b8
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x29c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x2a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x2b8
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800C1540
lbl_800C14F8:
    add r4, r27, r26
    addi r3, r4, 0x348
    addi r4, r4, 0x2b8
    bl fn_801734E4
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x2ac(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x2a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x2b8
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800C1540:
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x2b8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0x348
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f23
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
    cmpwi r28, 0x160
    beq lbl_800C15D8
    bge lbl_800C160C
    cmpwi r28, 0x71
    beq lbl_800C15D8
    b lbl_800C160C
lbl_800C15D8:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f25
    bge lbl_800C15E8
    stfs f25, 0x10(r1)
lbl_800C15E8:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f26
    bge lbl_800C15F8
    stfs f26, 0x14(r1)
lbl_800C15F8:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f27
    ble lbl_800C1678
    stfs f27, 0x14(r1)
    b lbl_800C1678
lbl_800C160C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800C1620
    stfs f28, 0x10(r1)
lbl_800C1620:
    lfs f0, 0x14(r1)
    fadds f0, f0, f29
    stfs f0, 0x14(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800C163C
    stfs f30, 0x14(r1)
lbl_800C163C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800C1650
    stfs f29, 0x14(r1)
lbl_800C1650:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800C1664
    stfs f31, 0x18(r1)
lbl_800C1664:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800C1678
    stfs f28, 0x18(r1)
lbl_800C1678:
    add r4, r27, r25
    lwz r3, 0x2a0(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x2a0(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x2a0(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x2a0(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x2a0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x2a0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800C14B0
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
    subi r11, r10, 0x90
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
