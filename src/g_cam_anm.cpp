#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_8034BF70[];
extern u8 lbl_8034BF98[];
extern u8 lbl_8034BFB0[];
extern u8 lbl_8034BFD8[];
extern u8 lbl_80395328[];
extern u8 lbl_80395728[];
extern u8 lbl_8039A0D0[];
extern u8 lbl_803C1A40[];
extern float lbl_8049F4B0;
extern float lbl_8049F4C0;

s32 __construct_array();
s32 _restgpr_25();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_25();
s32 _savegpr_28();
s32 _savegpr_29();
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80027FE0(s32 arg0);
s32 fn_80028064(s32 *arg0);
void fn_8002AF5C(s32 arg0);
s32 * fn_80090A40(s32 arg0);
void fn_80090AD0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80090C24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80090CAC(s8 *arg0);
s32 fn_80090CC4(s8 *arg0);
void fn_80090CFC(s8 *arg0, s32 arg1);
void fn_80090D0C(s8 *arg0, f32 farg0);
void fn_80090D1C(s8 *arg0, s8 *arg1);
void fn_80090D40(s8 *arg0, s8 *arg1);
void fn_80091028(void);
s32 fn_80091048(s32 arg0);
s32 fn_8009107C(s32 arg0);
s32 fn_800910B0(s32 *arg0);
s32 fn_800910C0(s32 arg0, s32 arg1);
void fn_80091108(s32 arg0, s32 arg1);
void fn_8009110C(s32 *arg0, s32 *arg1);
s32 fn_80091118(s32 arg0, s32 arg1);
void fn_80091148(s32 *arg0, s32 *arg1);
void fn_80091154(s32 *arg0, s32 arg1);
void fn_8009115C(s32 *arg0, s32 arg1);
M2C_UNK * fn_80091164(M2C_UNK *arg0, s32 arg1);
s32 * fn_800911C8(s32 *arg0);
M2C_UNK * fn_800911FC(M2C_UNK *arg0, s32 arg1);
void fn_80091260(void);
s32 fn_800914D8(void);
void fn_800914FC(s32 arg0, s32 arg1, s32 arg2);
void fn_80091588(M2C_UNK *arg0, s32 arg1);
void fn_800927DC(s32 arg0);
s32 fn_80094B84();
void fn_80096138(void);
void fn_80096190(void);
void fn_800961AC(void);
void fn_800961C8(void);
s32 fn_800961EC(void);
s32 fn_80096228();
void fn_800962A0(void);
void fn_80096310(void);
void fn_80096328(s32 arg0);
void fn_8018DC20(s32 arg0, f32 farg0);
void fn_8018DCA4(s32 arg0, f32 farg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_801D7B54(s8 **arg0, s8 *arg1, f32 farg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80090C24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 *temp_r3;

    if (arg0 != 0) {
        temp_r3 = (s32 *) (fn_80090A40((s32) (arg1)));
        if (temp_r3 != NULL) {
            fn_80090AD0((s8 *) ((s8 *) arg0), (s32) ((s32) ((s8 *)temp_r3 + 4)), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (arg6), (s32) (arg7));
        }
    }
}

void fn_80090CAC(s8 *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    }
}

s32 fn_80090CC4(s8 *arg0) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return (s32) (0);
    }
    return (s32) ((M2C_FIELD(arg0, s32 *, 4) & 2) == 0);
}

void fn_80090CFC(s8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg1);
    }
}

void fn_80090D0C(s8 *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    }
}

void fn_80090D1C(s8 *arg0, s8 *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 8);
    }
}

// asm_to_cpp: fn_80090D40
asm void fn_80090D40(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    mr r30, r3
    mr r31, r4
    addi r3, r1, 0xc
    li r4, 0x0
    bl fn_80091164
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_800911FC
    addi r3, r1, 0x10
    bl fn_800911C8
    cmpwi r31, 0x0
    beq lbl_80091010
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_80091010
    addi r3, r31, 0x24
    bl fn_80028064
    cmpwi r3, 0x0
    beq lbl_80091010
    addi r3, r31, 0x28
    bl fn_800910B0
    cmpwi r3, 0x0
    beq lbl_80091010
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80091010
    addi r3, r31, 0x24
    bl fn_80027FE0
    lfd f1, lbl_8049F4B0
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    lis r29, 0x4330
    stw r29, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r31)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80090E64
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80090E34
    addi r3, r31, 0x24
    bl fn_80027FE0
    lfd f1, lbl_8049F4B0
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    stw r29, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r31)
    fsubs f0, f0, f1
    stfs f0, 0x8(r31)
    b lbl_80090E64
lbl_80090E34:
    addi r3, r31, 0x24
    bl fn_80027FE0
    lfd f1, lbl_8049F4B0
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    stw r29, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r31)
    lwz r0, 0x4(r31)
    ori r0, r0, 0x2
    stw r0, 0x4(r31)
lbl_80090E64:
    addi r3, r31, 0x28
    addi r4, r1, 0x10
    lfs f1, 0x8(r31)
    bl fn_801D7B54
    addi r3, r30, 0x4
    lfs f1, 0x18(r1)
    lfs f2, 0x1c(r1)
    lfs f3, 0x20(r1)
    bl fn_80018B0C
    addi r3, r30, 0x1c
    lfs f1, 0x30(r1)
    lfs f2, 0x34(r1)
    lfs f3, 0x38(r1)
    bl fn_80018B0C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80090EC4
    lfs f0, 0xc(r30)
    fneg f0, f0
    stfs f0, 0xc(r30)
    lfs f0, 0x24(r30)
    fneg f0, f0
    stfs f0, 0x24(r30)
lbl_80090EC4:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80090EEC
    lfs f0, 0x4(r30)
    fneg f0, f0
    stfs f0, 0x4(r30)
    lfs f0, 0x1c(r30)
    fneg f0, f0
    stfs f0, 0x1c(r30)
lbl_80090EEC:
    lwz r4, 0x1c(r31)
    cmpwi r4, 0x0
    beq lbl_80090F14
    addi r3, r30, 0x4
    mr r5, r3
    bl fn_80018AF8
    addi r3, r30, 0x1c
    lwz r4, 0x1c(r31)
    mr r5, r3
    bl fn_80018AF8
lbl_80090F14:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80090F84
    lfs f1, 0x4(r30)
    lfs f0, 0x10(r31)
    fadds f0, f1, f0
    stfs f0, 0x4(r30)
    lfs f1, 0x8(r30)
    lfs f0, 0x14(r31)
    fadds f0, f1, f0
    stfs f0, 0x8(r30)
    lfs f1, 0xc(r30)
    lfs f0, 0x18(r31)
    fadds f0, f1, f0
    stfs f0, 0xc(r30)
    lfs f1, 0x1c(r30)
    lfs f0, 0x10(r31)
    fadds f0, f1, f0
    stfs f0, 0x1c(r30)
    lfs f1, 0x20(r30)
    lfs f0, 0x14(r31)
    fadds f0, f1, f0
    stfs f0, 0x20(r30)
    lfs f1, 0x24(r30)
    lfs f0, 0x18(r31)
    fadds f0, f1, f0
    stfs f0, 0x24(r30)
lbl_80090F84:
    lfs f1, 0x3c(r1)
    stfs f1, 0x34(r30)
    lfs f0, 0x40(r1)
    stfs f0, 0x38(r30)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 24, 25
    cmpwi r0, 0x0
    beq lbl_80090FAC
    fneg f0, f1
    stfs f0, 0x34(r30)
lbl_80090FAC:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80090FC4
    lfs f0, 0x28(r1)
    stfs f0, 0x40(r30)
lbl_80090FC4:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80090FDC
    lfs f0, 0x2c(r1)
    stfs f0, 0x44(r30)
lbl_80090FDC:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80090FF4
    lfs f0, 0x24(r1)
    stfs f0, 0x3c(r30)
lbl_80090FF4:
    lfs f1, 0x8(r31)
    lfs f0, 0xc(r31)
    fadds f0, f1, f0
    stfs f0, 0x8(r31)
    lwz r0, 0x4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4(r31)
lbl_80091010:
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80091028
asm void fn_80091028(void) {
    nofralloc
    lis r3, lbl_80395328@ha
    addi r3, r3, lbl_80395328@l
    lis r4, fn_80091048@ha
    addi r4, r4, fn_80091048@l
    li r5, 0x0
    li r6, 0x8
    li r7, 0x80
    b __construct_array
}

s32 fn_80091048(s32 arg0) {
    fn_8009107C((s32) (arg0 + 4));
    return (s32) (arg0);
}

s32 fn_8009107C(s32 arg0) {
    fn_80016E44((s32) (arg0), (s32) (0));
    return (s32) (arg0);
}

s32 fn_800910B0(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 fn_800910C0(s32 arg0, s32 arg1) {
    fn_8009110C((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    fn_80091108((s32) (arg0 + 4), (s32) (arg1 + 4));
    return (s32) (arg0);
}

void fn_80091108(s32 arg0, s32 arg1) {
}

void fn_8009110C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_80091118(s32 arg0, s32 arg1) {
    fn_80091148((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

void fn_80091148(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80091154(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_8009115C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

// asm_to_cpp: fn_80091164
asm M2C_UNK * fn_80091164(M2C_UNK *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80091154
    clrlwi r0, r31, 30
    cmpwi r0, 0x0
    beq lbl_800911AC
    lis r3, lbl_8034BFD8@ha
    addi r3, r3, lbl_8034BFD8@l
    li r4, 0x28
    lis r5, lbl_8034BFB0@ha
    addi r5, r5, lbl_8034BFB0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_800911AC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 * fn_800911C8(s32 *arg0) {
    fn_8002AF5C((s32) ((s32) ((s8 *)arg0 + 8)));
    return (s32 *) (arg0);
}

// asm_to_cpp: fn_800911FC
asm M2C_UNK * fn_800911FC(M2C_UNK *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8009115C
    clrlwi r0, r31, 30
    cmpwi r0, 0x0
    beq lbl_80091244
    lis r3, lbl_8034BF98@ha
    addi r3, r3, lbl_8034BF98@l
    li r4, 0x7d
    lis r5, lbl_8034BF70@ha
    addi r5, r5, lbl_8034BF70@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80091244:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091260
asm void fn_80091260(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_80395728@ha
    addi r3, r30, lbl_80395728@l
    li r4, 0x0
    li r5, 0x48d4
    bl memset
    addi r30, r30, lbl_80395728@l
    li r5, 0x1
    stw r5, 0x28(r30)
    li r31, 0x0
    stw r31, 0x2c(r30)
    li r4, 0x64
    stw r4, 0x30(r30)
    stw r31, 0x34(r30)
    stw r31, 0x38(r30)
    stw r4, 0x40(r30)
    stw r4, 0x44(r30)
    stw r4, 0x48(r30)
    stw r4, 0x4c(r30)
    stw r31, 0x80(r30)
    stw r31, 0x84(r30)
    li r3, 0x2
    stw r3, 0xa0(r30)
    stw r31, 0xa4(r30)
    stw r4, 0xa8(r30)
    stw r31, 0xac(r30)
    stw r5, 0xb0(r30)
    stw r4, 0xb8(r30)
    stw r4, 0xbc(r30)
    stw r4, 0xc0(r30)
    stw r4, 0xc4(r30)
    stw r31, 0xf8(r30)
    stw r31, 0xfc(r30)
    stw r31, 0x118(r30)
    stw r31, 0x11c(r30)
    stw r4, 0x120(r30)
    stw r3, 0x108(r30)
    stw r31, 0x124(r30)
    stw r3, 0x128(r30)
    stw r4, 0x130(r30)
    stw r4, 0x134(r30)
    stw r4, 0x138(r30)
    stw r4, 0x13c(r30)
    stw r31, 0x170(r30)
    stw r31, 0x174(r30)
    stw r31, 0x190(r30)
    stw r31, 0x194(r30)
    stw r4, 0x198(r30)
    stw r3, 0x180(r30)
    stw r31, 0x19c(r30)
    li r0, 0x3
    stw r0, 0x1a0(r30)
    stw r4, 0x1a8(r30)
    stw r4, 0x1ac(r30)
    stw r4, 0x1b0(r30)
    stw r4, 0x1b4(r30)
    stw r31, 0x1e8(r30)
    stw r31, 0x1ec(r30)
    stw r31, 0x208(r30)
    stw r31, 0x20c(r30)
    stw r4, 0x210(r30)
    stw r3, 0x1f8(r30)
    stw r31, 0x214(r30)
    stw r31, 0x218(r30)
    stw r4, 0x220(r30)
    stw r4, 0x224(r30)
    stw r4, 0x228(r30)
    stw r4, 0x22c(r30)
    stw r31, 0x260(r30)
    stw r31, 0x264(r30)
    stw r31, 0x280(r30)
    stw r31, 0x284(r30)
    stw r4, 0x288(r30)
    stw r3, 0x270(r30)
    stw r31, 0x28c(r30)
    stw r31, 0x290(r30)
    stw r4, 0x298(r30)
    stw r4, 0x29c(r30)
    stw r4, 0x2a0(r30)
    stw r4, 0x2a4(r30)
    stw r31, 0x2d8(r30)
    stw r31, 0x2dc(r30)
    stw r5, 0xbe4(r30)
    stw r31, 0xbe8(r30)
    li r0, 0x80
    stw r0, 0xbf0(r30)
    stw r31, 0x4(r30)
    stw r31, 0x14(r30)
    stw r31, 0x18(r30)
    stw r31, 0x90(r30)
    bl fn_800914FC
    li r0, 0x7e90
    stw r0, 0x1194(r30)
    lis r3, 0x1
    subi r0, r3, 0x3cb0
    stw r0, 0x1ec8(r30)
    stw r31, 0x1ecc(r30)
    stw r0, 0x1ed0(r30)
    bl fn_800927DC
    li r3, 0x3
    bl fn_80094B84
    li r3, 0x4
    bl fn_80094B84
    li r3, 0x5
    bl fn_80094B84
    li r3, 0x10
    bl fn_80094B84
    li r3, 0x6
    bl fn_80094B84
    li r3, 0x7
    bl fn_80094B84
    li r3, 0x8
    bl fn_80094B84
    li r3, 0x29
    bl fn_80094B84
    li r3, 0x2a
    bl fn_80094B84
    li r3, 0x2b
    bl fn_80094B84
    li r3, 0x9
    bl fn_80094B84
    li r3, 0xa
    bl fn_80094B84
    li r3, 0xb
    bl fn_80094B84
    li r3, 0x1d
    bl fn_80094B84
    bl fn_80096138
    bl fn_80096190
    bl fn_800961AC
    bl fn_800961C8
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r31, 0x14(r3)
    lfs f1, 0xcc4(r30)
    li r3, 0x0
    bl fn_8018DC20
    li r3, 0x0
    lfs f1, 0xcc8(r30)
    bl fn_8018DCA4
    li r3, 0x1
    lfs f1, 0xccc(r30)
    bl fn_8018DCA4
    li r3, 0x2
    lfs f1, 0xcd0(r30)
    bl fn_8018DCA4
    bl fn_800962A0
    bl fn_80096310
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_800914D8(void) {
    return (s32) (fn_800961EC() + 0x350);
}

// asm_to_cpp: fn_800914FC
asm void fn_800914FC(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    li r0, 0x3f
    stw r0, 0xc98(r4)
    li r0, 0x2
    stw r0, 0xc9c(r4)
    li r0, 0xe10
    stw r0, 0xca0(r4)
    li r3, 0x1
    stw r3, 0xca4(r4)
    li r0, 0x1c20
    stw r0, 0xca8(r4)
    stw r3, 0xcac(r4)
    stw r3, 0xcb0(r4)
    li r0, 0x0
    stw r0, 0xcbc(r4)
    stw r0, 0xcc0(r4)
    stw r3, 0xcb4(r4)
    stw r3, 0xcb8(r4)
    lfs f0, lbl_8049F4C0
    stfs f0, 0xcc4(r4)
    stfs f0, 0xcc8(r4)
    stfs f0, 0xccc(r4)
    stfs f0, 0xcd0(r4)
    stfs f0, 0xcd4(r4)
    stw r3, 0xce8(r4)
    stw r3, 0xcec(r4)
    stw r3, 0xcf0(r4)
    stw r3, 0xcf4(r4)
    lis r3, lbl_8039A0D0@ha
    addi r3, r3, lbl_8039A0D0@l
    addi r3, r3, 0xc
    li r4, 0x0
    li r5, 0x40
    b memset
}

// asm_to_cpp: fn_80091588
asm void fn_80091588(M2C_UNK *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    bl fn_800961EC
    mr r31, r3
    lwz r30, 0x2134(r28)
    mr r3, r28
    bl fn_80096228
    mr r3, r28
    li r4, 0x0
    li r5, 0x21bc
    bl memset
    cmpwi r29, 0x0
    bge lbl_800915D8
    stw r30, 0x2134(r28)
    b lbl_800915DC
lbl_800915D8:
    stw r29, 0x2134(r28)
lbl_800915DC:
    mr r3, r28
    li r4, 0x20
    li r5, 0xf
    bl memset
    li r0, -0x1
    stw r0, 0x21b8(r28)
    mr r3, r29
    bl fn_80096328
    mr r3, r31
    bl fn_80096228
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

} // extern "C"
