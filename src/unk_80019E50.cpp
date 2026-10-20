#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049D630;
extern s32 lbl_8049D6B0;
extern float lbl_8049E668;
extern float lbl_8049E670;
extern float lbl_8049E678;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_800163E4(s32 arg0, s32 arg1);
void fn_80016964(void);
s32 fn_800169F4(s32 arg0_pad);
s32 fn_80016A44(s32 arg0_pad);
void fn_80016A94(s32 arg0);
s32 fn_80016B5C(s8 *arg0, s32 arg1);
s32 fn_80016C30(s32 arg0, s32 arg1);
s32 fn_80016DE0(s32 arg0, s32 arg1);
s8 * fn_80019E50(s32 arg0);
s32 fn_80019F28(s8 *arg0, s32 arg1);
void fn_8001A1A4(s8 *arg0);
void fn_8001A348(s8 *arg0);
void fn_8001A548(s8 *arg0);
void fn_8001A7CC(s8 *arg0);
void fn_8001A940(s8 *arg0, u8 arg1);
void fn_8001A964(void);
void fn_8001A968(f32 farg0, f32 farg1);
void fn_8001A978(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8001A9A0(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
void fn_8017C2CC(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_80019E50
asm s8 * fn_80019E50(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x12
    lis r4, fn_80019F28@ha
    addi r4, r4, fn_80019F28@l
    lwz r5, lbl_8049D630
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80019E90
    li r3, 0x0
    b lbl_80019F10
lbl_80019E90:
    li r4, 0x0
    li r5, 0x38
    bl memset
    li r0, 0x4
    stw r0, 0x0(r31)
    stw r30, 0x4(r31)
    li r0, 0x0
    stw r0, 0x8(r31)
    lfs f0, lbl_8049E678
    stfs f0, 0x1c(r31)
    stfs f0, 0x24(r31)
    stfs f0, 0x28(r31)
    stfs f0, 0x2c(r31)
    stfs f0, 0x30(r31)
    addi r3, r31, 0x14
    li r4, -0x1
    bl fn_8001A940
    addi r3, r31, 0x18
    li r4, -0x1
    bl fn_8001A940
    li r3, 0x2
    lwz r4, 0x4(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80019F0C
    cmpwi r31, 0x0
    beq lbl_80019F0C
    mr r3, r31
    bl fn_8017776C
lbl_80019F0C:
    mr r3, r31
lbl_80019F10:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80019F28
asm s32 fn_80019F28(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    cmpwi r4, 0x0
    beq lbl_80019FFC
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80019F70
    li r0, 0xf1
    stw r0, 0x8(r3)
    li r3, 0x1
    b lbl_8001A190
lbl_80019F70:
    rlwinm r0, r4, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_80019F84
    li r3, 0x1
    b lbl_8001A190
lbl_80019F84:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80019FF4
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r5, 0x28(r4)
    cmpwi r5, 0x3e9
    bne lbl_80019FB8
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001A190
lbl_80019FB8:
    lwz r0, 0x8(r3)
    cmpwi r0, 0xf1
    beq lbl_80019FF4
    lwz r4, 0x24(r4)
    lha r0, 0x34(r3)
    cmpw r4, r0
    bne lbl_80019FF4
    lha r0, 0x36(r3)
    cmpw r5, r0
    bne lbl_80019FF4
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001A190
lbl_80019FF4:
    li r3, 0x0
    b lbl_8001A190
lbl_80019FFC:
    lwz r4, 0x8(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_8001A05C
    cmpwi r4, 0x0
    bne lbl_8001A078
    lha r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_8001A030
    stw r0, 0x20(r3)
    li r0, 0x1
    stw r0, 0x8(r3)
    b lbl_8001A078
lbl_8001A030:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8001A048
    li r0, 0x2
    stw r0, 0x8(r3)
    b lbl_8001A078
lbl_8001A048:
    lha r0, 0x12(r3)
    stw r0, 0x20(r3)
    li r0, 0x3
    stw r0, 0x8(r3)
    b lbl_8001A078
lbl_8001A05C:
    li r3, 0x0
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8001A078
    li r3, 0x0
    b lbl_8001A190
lbl_8001A078:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x1
    beq lbl_8001A0A0
    cmpwi r0, 0x2
    beq lbl_8001A100
    cmpwi r0, 0x3
    beq lbl_8001A130
    cmpwi r0, 0xf1
    beq lbl_8001A178
    b lbl_8001A18C
lbl_8001A0A0:
    lwz r3, 0x20(r31)
    subi r0, r3, 0x1
    stw r0, 0x20(r31)
    cmpwi r0, 0x0
    ble lbl_8001A0F0
    lfd f2, lbl_8049E668
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lha r0, 0x10(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    lfs f0, lbl_8049E678
    fsubs f0, f0, f1
    stfs f0, 0x1c(r31)
    b lbl_8001A18C
lbl_8001A0F0:
    lfs f0, lbl_8049E678
    stfs f0, 0x1c(r31)
    li r0, 0x2
    stw r0, 0x8(r31)
lbl_8001A100:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    blt lbl_8001A18C
    subi r0, r3, 0x1
    stw r0, 0xc(r31)
    cmpwi r0, 0x0
    bge lbl_8001A18C
    lha r0, 0x12(r31)
    stw r0, 0x20(r31)
    li r0, 0x3
    stw r0, 0x8(r31)
    b lbl_8001A18C
lbl_8001A130:
    lwz r3, 0x20(r31)
    subi r0, r3, 0x1
    stw r0, 0x20(r31)
    cmpwi r0, 0x0
    ble lbl_8001A178
    lfd f2, lbl_8049E668
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lha r0, 0x12(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r31)
    b lbl_8001A18C
lbl_8001A178:
    lwz r3, 0x4(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8017776C
lbl_8001A18C:
    li r3, 0x0
lbl_8001A190:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8001A1A4(s8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;

    if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0) && ((temp_r4 = M2C_FIELD(arg0, s32 *, 0), (((s32) (temp_r4 & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (fn_80016C30((s32) (0), (s32) (temp_r4)) == 0)) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (2));
        fn_80016964();
        if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x40) != 0) {
            fn_80016DE0((s32) ((s32) &sp8), (s32) (0));
            GXLoadTexObj((s32) (lbl_8049D6B0 + 4), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x20000) == 0) {
                fn_8001A348((s8 *) (arg0));
            } else {
                fn_8001A548((s8 *) (arg0));
            }
        } else {
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            fn_8001A7CC((s8 *) (arg0));
        }
        fn_80016A44((s32) (0));
        fn_8017C2CC();
        fn_80016A94((s32) (0));
    }
}

// asm_to_cpp: fn_8001A348
asm void fn_8001A348(s8 *arg0) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    stfd f28, 0x30(r1)
    opword 0xF3810038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E678
    lfs f0, 0x24(r29)
    fsubs f2, f1, f0
    lfs f0, 0x2c(r29)
    fsubs f4, f1, f0
    lfs f3, 0x28(r29)
    lfs f5, 0x30(r29)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x54(r3)
    lhz r0, 0xe(r3)
    lfd f1, lbl_8049E670
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f31, f2, f0
    lhz r3, 0x10(r3)
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f30, f4, f0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f29, f0, f3
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f28, f0, f5
    lbz r0, 0x1b(r29)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1c(r29)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r30, 0x1c(r1)
    fmr f1, f31
    fmr f2, f30
    la r31, lbl_8049E678
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    lfs f1, 0x4(r31)
    fmr f2, f1
    bl fn_8001A968
    fmr f1, f29
    fmr f2, f30
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    lfs f1, lbl_8049E678
    lfs f2, 0x4(r31)
    bl fn_8001A968
    fmr f1, f29
    fmr f2, f28
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    lfs f1, lbl_8049E678
    fmr f2, f1
    bl fn_8001A968
    fmr f1, f31
    fmr f2, f28
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    lfs f1, 0x4(r31)
    lfs f2, lbl_8049E678
    bl fn_8001A968
    bl fn_8001A964
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    li r0, 0x58
    opword 0x13C1000C
    lfd f30, 0x50(r1)
    li r0, 0x48
    opword 0x13A1000C
    lfd f29, 0x40(r1)
    li r0, 0x38
    opword 0x1381000C
    lfd f28, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_8001A548
asm void fn_8001A548(s8 *arg0) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    stfd f29, 0x50(r1)
    opword 0xF3A10058
    stfd f28, 0x40(r1)
    opword 0xF3810048
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r28, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r3, 0xa0
    li r4, 0x0
    li r5, 0x6
    bl GXBegin
    lfs f1, lbl_8049E678
    lfs f0, 0x24(r28)
    fsubs f3, f1, f0
    lfs f0, 0x2c(r28)
    fsubs f4, f1, f0
    lfs f1, 0x28(r28)
    lfs f5, 0x30(r28)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x54(r3)
    lhz r0, 0xe(r3)
    lfd f2, lbl_8049E670
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f31, f3, f0
    lhz r3, 0x10(r3)
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f30, f4, f0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f29, f0, f1
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f28, f0, f5
    lbz r0, 0x17(r28)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    lfs f1, 0x1c(r28)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r30, 0x1c(r1)
    lbz r0, 0x1b(r28)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r29, 0x24(r1)
    la r31, lbl_8049E678
    lfs f0, 0x8(r31)
    fmuls f1, f29, f0
    fmuls f2, f28, f0
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x14(r28)
    lbz r4, 0x15(r28)
    lbz r5, 0x16(r28)
    clrlwi r6, r30, 24
    bl fn_8001A978
    lfs f1, 0x8(r31)
    fmr f2, f1
    bl fn_8001A968
    fmr f1, f31
    fmr f2, f30
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r28)
    lbz r4, 0x19(r28)
    lbz r5, 0x1a(r28)
    clrlwi r6, r29, 24
    bl fn_8001A978
    lfs f1, 0x4(r31)
    fmr f2, f1
    bl fn_8001A968
    fmr f1, f29
    fmr f2, f30
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r28)
    lbz r4, 0x19(r28)
    lbz r5, 0x1a(r28)
    clrlwi r6, r29, 24
    bl fn_8001A978
    lfs f1, lbl_8049E678
    lfs f2, 0x4(r31)
    bl fn_8001A968
    fmr f1, f29
    fmr f2, f28
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r28)
    lbz r4, 0x19(r28)
    lbz r5, 0x1a(r28)
    clrlwi r6, r29, 24
    bl fn_8001A978
    lfs f1, lbl_8049E678
    fmr f2, f1
    bl fn_8001A968
    fmr f1, f31
    fmr f2, f28
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r28)
    lbz r4, 0x19(r28)
    lbz r5, 0x1a(r28)
    clrlwi r6, r29, 24
    bl fn_8001A978
    lfs f1, 0x4(r31)
    lfs f2, lbl_8049E678
    bl fn_8001A968
    fmr f1, f31
    fmr f2, f30
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r28)
    lbz r4, 0x19(r28)
    lbz r5, 0x1a(r28)
    clrlwi r6, r29, 24
    bl fn_8001A978
    lfs f1, 0x4(r31)
    fmr f2, f1
    bl fn_8001A968
    bl fn_8001A964
    li r0, 0x78
    opword 0x13E1000C
    lfd f31, 0x70(r1)
    li r0, 0x68
    opword 0x13C1000C
    lfd f30, 0x60(r1)
    li r0, 0x58
    opword 0x13A1000C
    lfd f29, 0x50(r1)
    li r0, 0x48
    opword 0x1381000C
    lfd f28, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8001A7CC
asm void fn_8001A7CC(s8 *arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x54(r3)
    lhz r0, 0xe(r3)
    lfd f2, lbl_8049E670
    lhz r3, 0x10(r3)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lfs f0, 0x28(r29)
    fmuls f31, f1, f0
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    lfs f0, 0x30(r29)
    fmuls f30, f1, f0
    lbz r0, 0x1b(r29)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lfs f0, 0x1c(r29)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r30, 0x1c(r1)
    la r31, lbl_8049E678
    lfs f1, 0x4(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    fmr f1, f31
    lfs f2, 0x4(r31)
    fmr f3, f2
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    fmr f1, f31
    fmr f2, f30
    lfs f3, 0x4(r31)
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    lfs f1, 0x4(r31)
    fmr f2, f30
    fmr f3, f1
    bl fn_8001A9A0
    lbz r3, 0x18(r29)
    lbz r4, 0x19(r29)
    lbz r5, 0x1a(r29)
    clrlwi r6, r30, 24
    bl fn_8001A978
    bl fn_8001A964
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8001A940
asm void fn_8001A940(s8 *arg0, u8 arg1) {
    nofralloc
    srwi r0, r4, 24
    stb r0, 0x0(r3)
    extrwi r0, r4, 8, 8
    stb r0, 0x1(r3)
    extrwi r0, r4, 8, 16
    stb r0, 0x2(r3)
    clrlwi r0, r4, 24
    stb r0, 0x3(r3)
    blr
}

void fn_8001A964(void) {
}

void fn_8001A968(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

// asm_to_cpp: fn_8001A978
asm void fn_8001A978(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r5, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r6, 24
    stb r0, -0x8000(r3)
    blr
}

void fn_8001A9A0(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

} // extern "C"
