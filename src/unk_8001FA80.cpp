#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 **lbl_8049D648;
extern s32 lbl_8049D6B0;
extern float lbl_8049E6F8;
extern float lbl_8049E700;
extern f32 lbl_8049E708;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXGetProjectionv(s32 arg0);
void GXGetViewportv(s32 arg0);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
s32 _restgpr_25();
s32 _restgpr_28();
s32 _savegpr_25();
s32 _savegpr_28();
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4(s32 arg0_pad);
s32 fn_80016A44(s32 arg0_pad);
void fn_80016A94(s32 arg0);
s32 fn_80016A98(s8 *arg0, s32 *arg1, s32 arg2);
s32 fn_80016B5C(s8 *arg0, s32 arg1);
s32 fn_80016C30(s32 arg0, s32 arg1);
s32 fn_80016CAC();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
s32 fn_80019D1C(s8 *arg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
s8 * fn_8001FA80(s32 arg0, s32 arg1, s32 arg2);
void fn_8001FB34(s32 arg0);
s32 fn_8001FB38(s8 *arg0, s32 arg1);
void fn_8001FE98(s8 *arg0);
void fn_8001FF08(s8 *arg0);
void fn_80020024(s32 arg0);
void fn_80020D1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80020D34(void);
void fn_80020D38(f32 farg0, f32 farg1);
void fn_80020D48(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_80020D70(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017B074(M2C_UNK *arg0, s8 *arg1);
void fn_8017B144(s32 arg0, s8 *arg1, s32 arg2);
void fn_80201A20(s8 *arg0, s8 *arg1, s8 *arg2, f32 farg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s8 * fn_8001FA80(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_8001FB38), (M2C_UNK **) (lbl_8049D648)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x80));
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) ((s32) (arg1 | 0x40));
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg0);
    M2C_FIELD(temp_r3, f32 *, 0x5C) = (f32) lbl_8049E708;
    if ((fn_8010E90C((u32) (9U), (s32) (M2C_FIELD(temp_r3, s32 *, 8)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_8001FB34((s32) (temp_r3));
    }
    return (s8 *) ((s8 *) temp_r3);
}

void fn_8001FB34(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

// asm_to_cpp: fn_8001FB38
asm s32 fn_8001FB38(s8 *arg0, s32 arg1) {
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
    beq lbl_8001FC84
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8001FB80
    li r0, 0xf1
    stw r0, 0xc(r3)
    li r3, 0x1
    b lbl_8001FE84
lbl_8001FB80:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8001FC7C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_8001FBE4
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8001FBB8
    cmpwi r0, 0xff
    beq lbl_8001FBD0
    b lbl_8001FBE4
lbl_8001FBB8:
    bne cr1, lbl_8001FBE4
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001FE84
lbl_8001FBD0:
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001FE84
lbl_8001FBE4:
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_8001FC7C
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_8001FC7C
    lwz r3, 0x28(r4)
    lwz r0, 0x50(r31)
    cmplw r3, r0
    bne lbl_8001FC7C
    lwz r0, 0x130(r4)
    cmpwi r0, 0x0
    bne lbl_8001FC54
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8001FC3C
    cmpwi r0, 0x1
    beq lbl_8001FC48
    b lbl_8001FC70
lbl_8001FC3C:
    li r0, 0xf1
    stw r0, 0xc(r31)
    b lbl_8001FC70
lbl_8001FC48:
    li r0, 0xef
    stw r0, 0xc(r31)
    b lbl_8001FC70
lbl_8001FC54:
    extsh r0, r0
    sth r0, 0x4c(r31)
    lwz r0, 0xc(r31)
    cmpwi r0, 0xf0
    bne lbl_8001FC70
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_8001FC70:
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001FE84
lbl_8001FC7C:
    li r3, 0x0
    b lbl_8001FE84
lbl_8001FC84:
    lwz r3, 0x10(r3)
    addi r4, r31, 0x4
    lwz r5, 0xc(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_8001FCA8
    cmpwi r3, 0x2
    beq lbl_8001FCB4
    b lbl_8001FCBC
lbl_8001FCA8:
    li r0, 0xef
    stw r0, 0xc(r31)
    b lbl_8001FCBC
lbl_8001FCB4:
    li r0, 0xf1
    stw r0, 0xc(r31)
lbl_8001FCBC:
    lwz r0, 0xc(r31)
    cmplwi r0, 0x2
    ble lbl_8001FCD0
    cmpwi r0, 0xf0
    bne lbl_8001FCEC
lbl_8001FCD0:
    li r3, 0x0
    lwz r4, 0x4(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8001FCEC
    li r3, 0x0
    b lbl_8001FE84
lbl_8001FCEC:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8001FD1C
    cmpwi r0, 0x1
    beq lbl_8001FD48
    cmpwi r0, 0xef
    beq lbl_8001FDEC
    cmpwi r0, 0xf0
    beq lbl_8001FE08
    cmpwi r0, 0xf1
    beq lbl_8001FE6C
    b lbl_8001FE80
lbl_8001FD1C:
    lha r3, 0x44(r31)
    subi r0, r3, 0x1
    sth r0, 0x44(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_8001FD3C
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_8001FD3C:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8001FE80
lbl_8001FD48:
    mr r3, r31
    bl fn_8001FE98
    lwz r3, 0x54(r31)
    cmpwi r3, 0x0
    ble lbl_8001FD90
    lwz r0, 0x48(r31)
    lfd f1, lbl_8049E6F8
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lfd f1, lbl_8049E700
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x5c(r31)
    b lbl_8001FD98
lbl_8001FD90:
    lfs f0, lbl_8049E708
    stfs f0, 0x5c(r31)
lbl_8001FD98:
    lfs f1, 0x5c(r31)
    lfs f0, lbl_8049E708
    fcmpo cr0, f1, f0
    ble lbl_8001FDAC
    stfs f0, 0x5c(r31)
lbl_8001FDAC:
    lha r3, 0x4c(r31)
    cmpwi r3, -0x1
    ble lbl_8001FDC0
    subi r0, r3, 0x1
    sth r0, 0x4c(r31)
lbl_8001FDC0:
    lha r0, 0x4c(r31)
    cmpwi r0, 0x0
    bne lbl_8001FDD4
    li r0, 0xef
    stw r0, 0xc(r31)
lbl_8001FDD4:
    lwz r3, 0x48(r31)
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    beq lbl_8001FE80
lbl_8001FDEC:
    li r0, 0xf0
    stw r0, 0xc(r31)
    lwz r0, 0x58(r31)
    extsh r0, r0
    sth r0, 0x4c(r31)
    li r0, 0x0
    stw r0, 0x50(r31)
lbl_8001FE08:
    mr r3, r31
    bl fn_8001FE98
    lha r3, 0x4c(r31)
    lfd f2, lbl_8049E700
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x58(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x5c(r31)
    subi r0, r3, 0x1
    sth r0, 0x4c(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_8001FE60
    li r0, 0xf1
    stw r0, 0xc(r31)
lbl_8001FE60:
    lwz r0, 0xc(r31)
    cmpwi r0, 0xf0
    beq lbl_8001FE80
lbl_8001FE6C:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8001FB34
lbl_8001FE80:
    li r3, 0x0
lbl_8001FE84:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8001FE98(s8 *arg0) {
    s32 temp_r4;

    if ((s32) (M2C_FIELD(arg0, s32 *, 4) & 0x20000) == 0) {
        temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x1C));
        if (temp_r4 != 0) {
            fn_80018AF8((s32) ((s32) (arg0 + 0x2C)), (s32) (temp_r4), (s32) ((s32) (arg0 + 0x20)));
        }
    }
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) (M2C_FIELD(arg0, f32 *, 0x60) + M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, f32 *, 0x74) - M2C_FIELD(arg0, f32 *, 0x78));
}

void fn_8001FF08(s8 *arg0) {
    s32 temp_r4;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) && ((temp_r4 = M2C_FIELD(arg0, s32 *, 4), (((s32) (temp_r4 & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (fn_80016C30((s32) (0), (s32) (temp_r4)) == 0)) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 4)), (s32) (9));
        if ((s32) (M2C_FIELD(arg0, s32 *, 4) & 0x40) != 0) {
            GXLoadTexObj((s32) (lbl_8049D6B0 + 4), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_80020024((s32) ((s32) arg0));
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}

// asm_to_cpp: fn_80020024
asm void fn_80020024(s32 arg0) {
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
    subi r11, r12, 0x90
    bl _savegpr_25
    mr r25, r3
    lis r0, 0x4330
    stw r0, 0x158(r1)
    lis r0, 0x4330
    stw r0, 0x160(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r26, r3
    addi r3, r1, 0x128
    mr r4, r26
    bl fn_8017B004
    addi r3, r1, 0xb8
    bl GXGetProjectionv
    addi r3, r1, 0x78
    bl GXGetViewportv
    addi r3, r1, 0xf8
    mr r4, r26
    bl fn_8017B074
    la r29, lbl_8049E708
    lwz r5, 0x14(r25)
    lfd f2, lbl_8049E700
    xoris r0, r5, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f2
    lfs f0, 0x4(r29)
    fdivs f27, f0, f1
    lwz r0, 0x18(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f2
    lfs f0, 0x74(r25)
    fdivs f28, f0, f1
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f2
    lfs f0, 0x70(r25)
    fdivs f25, f0, f1
    li r3, 0xa0
    li r4, 0x0
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    addi r3, r1, 0x50
    addi r4, r25, 0x2c
    bl fn_80019DAC
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80020D70
    lbz r3, 0x38(r25)
    lbz r4, 0x39(r25)
    lbz r5, 0x3a(r25)
    lbz r0, 0x3b(r25)
    lfd f1, lbl_8049E6F8
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f1
    lfs f0, 0x5c(r25)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r6, 0x16c(r1)
    clrlwi r6, r6, 24
    bl fn_80020D48
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x5c(r1)
    lfs f3, 0x60(r1)
    lis r3, lbl_803C22B0@ha
    addi r28, r3, lbl_803C22B0@l
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    lfd f2, lbl_8049E6F8
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    stfs f1, 0x68(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f2
    fdivs f2, f3, f0
    stfs f2, 0x6c(r1)
    bl fn_80020D38
    addi r3, r1, 0x40
    lbz r0, 0x38(r25)
    lfd f4, lbl_8049E6F8
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f4
    lbz r0, 0x39(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f4
    lbz r0, 0x3a(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f3, f0, f4
    lbz r0, 0x3b(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x3c(r25)
    lfd f4, lbl_8049E6F8
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f4
    lbz r0, 0x3d(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f4
    lbz r0, 0x3e(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f3, f0, f4
    lbz r0, 0x3f(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r25)
    lfd f1, lbl_8049E700
    xoris r0, r0, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f1
    lfs f0, 0x8(r29)
    fdivs f1, f0, f1
    bl fn_80020D1C
    li r27, 0x0
    lfd f30, lbl_8049E700
    lfd f29, lbl_8049E6F8
    b lbl_800204CC
lbl_800202C8:
    xoris r0, r27, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f30
    fmuls f26, f27, f0
    fmr f1, f26
    bl fn_80018C2C
    fmr f23, f1
    fmr f1, f26
    bl fn_80018C3C
    addi r3, r1, 0x68
    fmr f2, f23
    lfs f3, 0xc(r29)
    bl fn_80018B0C
    addi r3, r1, 0x5c
    lfs f0, 0x68(r1)
    fmuls f1, f0, f28
    lfs f0, 0x6c(r1)
    fmuls f2, f0, f28
    lfs f3, 0xc(r29)
    bl fn_80018B0C
    addi r3, r1, 0x68
    addi r4, r1, 0xf8
    addi r5, r1, 0x5c
    bl fn_80018B04
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x50
    bl fn_80018B00
    lfs f1, 0x68(r1)
    lfs f2, 0x6c(r1)
    lfs f3, 0x70(r1)
    bl fn_80020D70
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r3, 0x16c(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r4, 0x174(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r5, 0x17c(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x5c(r25)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r6, 0x184(r1)
    clrlwi r6, r6, 24
    bl fn_80020D48
    addi r3, r1, 0x5c
    addi r4, r1, 0x68
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x5c(r1)
    lfs f3, 0x60(r1)
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    stfs f0, 0x68(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f29
    fdivs f0, f3, f0
    stfs f0, 0x6c(r1)
    lwz r0, 0x4(r25)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80020468
    fmr f1, f26
    bl fn_80018C3C
    fmr f23, f1
    lfs f0, 0x60(r25)
    fadds f1, f25, f0
    bl fn_80018C3C
    lfs f0, 0x68(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x6c(r1)
    fadds f24, f0, f1
    fmr f1, f26
    bl fn_80018C2C
    fmr f23, f1
    lfs f0, 0x60(r25)
    fadds f1, f25, f0
    bl fn_80018C2C
    lfs f0, 0x64(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x68(r1)
    fadds f1, f0, f1
    fmr f2, f24
    bl fn_80020D38
    b lbl_800204C8
lbl_80020468:
    fmr f1, f26
    bl fn_80018C3C
    fmr f23, f1
    lfs f0, 0x60(r25)
    fadds f1, f25, f0
    bl fn_80018C2C
    lfs f0, 0x68(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x6c(r1)
    fadds f24, f0, f1
    fmr f1, f26
    bl fn_80018C2C
    fmr f23, f1
    lfs f0, 0x60(r25)
    fadds f1, f25, f0
    bl fn_80018C2C
    lfs f0, 0x64(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x68(r1)
    fadds f1, f0, f1
    fmr f2, f24
    bl fn_80020D38
lbl_800204C8:
    addi r27, r27, 0x1
lbl_800204CC:
    lwz r3, 0x14(r25)
    addi r0, r3, 0x1
    cmpw r27, r0
    blt lbl_800202C8
    bl fn_80020D34
    li r3, 0x98
    li r4, 0x0
    lwz r5, 0x18(r25)
    subi r6, r5, 0x2
    lwz r5, 0x14(r25)
    addi r0, r5, 0x1
    slwi r0, r0, 1
    mullw r0, r6, r0
    clrlwi r5, r0, 16
    bl GXBegin
    li r26, 0x1
    lfd f31, lbl_8049E700
    la r28, lbl_8049E708
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lfd f30, lbl_8049E6F8
    lfs f29, 0x8(r28)
    b lbl_80020C80
lbl_80020528:
    lwz r0, 0x18(r25)
    srawi r0, r0, 1
    addze r0, r0
    cmpw r26, r0
    bge lbl_8002064C
    addi r3, r1, 0x40
    lbz r0, 0x38(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f30
    lbz r0, 0x39(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f30
    lbz r0, 0x3a(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f3, f0, f30
    lbz r0, 0x3b(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f30
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x3c(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f30
    lbz r0, 0x3d(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f30
    lbz r0, 0x3e(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f3, f0, f30
    lbz r0, 0x3f(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f30
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fdivs f1, f29, f0
    xoris r0, r26, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f1, f0
    bl fn_80020D1C
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fdivs f1, f29, f0
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f1, f0
    bl fn_80020D1C
    b lbl_80020778
lbl_8002064C:
    addi r3, r1, 0x40
    lbz r0, 0x3c(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f30
    lbz r0, 0x3d(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f30
    lbz r0, 0x3e(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f3, f0, f30
    lbz r0, 0x3f(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f30
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x40(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f30
    lbz r0, 0x41(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f30
    lbz r0, 0x42(r25)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f3, f0, f30
    lbz r0, 0x43(r25)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f30
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r6, 0x18(r25)
    xoris r0, r6, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fdivs f1, f29, f0
    srawi r0, r6, 1
    addze r6, r0
    subi r0, r6, 0x1
    subf r0, r0, r26
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f1, f0
    bl fn_80020D1C
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r6, 0x18(r25)
    xoris r0, r6, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fdivs f1, f29, f0
    srawi r0, r6, 1
    addze r6, r0
    subi r6, r6, 0x1
    addi r0, r26, 0x1
    subf r0, r6, r0
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f1, f0
    bl fn_80020D1C
lbl_80020778:
    li r27, 0x0
    xoris r29, r26, 0x8000
    addi r0, r26, 0x1
    xoris r31, r0, 0x8000
    b lbl_80020C6C
lbl_8002078C:
    xoris r0, r27, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fmuls f26, f27, f0
    fmr f1, f26
    bl fn_80018C2C
    fmr f23, f1
    fmr f1, f26
    bl fn_80018C3C
    addi r3, r1, 0x68
    fmr f2, f23
    lfs f3, 0xc(r28)
    bl fn_80018B0C
    addi r3, r1, 0x5c
    stw r29, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f28, f0
    lfs f0, 0x68(r1)
    fmuls f1, f0, f1
    stw r29, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fmuls f2, f28, f0
    lfs f0, 0x6c(r1)
    fmuls f2, f0, f2
    lfs f3, 0xc(r28)
    bl fn_80018B0C
    addi r3, r1, 0x68
    addi r4, r1, 0xf8
    addi r5, r1, 0x5c
    bl fn_80018B04
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x50
    bl fn_80018B00
    lfs f1, 0x68(r1)
    lfs f2, 0x6c(r1)
    lfs f3, 0x70(r1)
    bl fn_80020D70
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r3, 0x184(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r4, 0x17c(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r5, 0x174(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x5c(r25)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r6, 0x16c(r1)
    clrlwi r6, r6, 24
    bl fn_80020D48
    addi r3, r1, 0x5c
    addi r4, r1, 0x68
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x5c(r1)
    lfs f3, 0x60(r1)
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    stfs f0, 0x68(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f30
    fdivs f0, f3, f0
    stfs f0, 0x6c(r1)
    lwz r0, 0x4(r25)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80020974
    fmr f1, f26
    bl fn_80018C3C
    fmr f23, f1
    xoris r0, r26, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C3C
    lfs f0, 0x68(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x6c(r1)
    fadds f24, f0, f1
    fmr f1, f26
    bl fn_80018C2C
    fmr f23, f1
    xoris r0, r26, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x64(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x68(r1)
    fadds f1, f0, f1
    fmr f2, f24
    bl fn_80020D38
    b lbl_800209FC
lbl_80020974:
    fmr f1, f26
    bl fn_80018C3C
    fmr f23, f1
    xoris r0, r26, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x68(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x6c(r1)
    fadds f24, f0, f1
    fmr f1, f26
    bl fn_80018C2C
    fmr f23, f1
    xoris r0, r26, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x64(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x68(r1)
    fadds f1, f0, f1
    fmr f2, f24
    bl fn_80020D38
lbl_800209FC:
    fmr f1, f26
    bl fn_80018C2C
    fmr f23, f1
    fmr f1, f26
    bl fn_80018C3C
    addi r3, r1, 0x68
    fmr f2, f23
    lfs f3, 0xc(r28)
    bl fn_80018B0C
    addi r3, r1, 0x5c
    stw r31, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f28, f0
    lfs f0, 0x68(r1)
    fmuls f1, f0, f1
    stw r31, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fmuls f2, f28, f0
    lfs f0, 0x6c(r1)
    fmuls f2, f0, f2
    lfs f3, 0xc(r28)
    bl fn_80018B0C
    addi r3, r1, 0x68
    addi r4, r1, 0xf8
    addi r5, r1, 0x5c
    bl fn_80018B04
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x50
    bl fn_80018B00
    lfs f1, 0x68(r1)
    lfs f2, 0x6c(r1)
    lfs f3, 0x70(r1)
    bl fn_80020D70
    lfs f0, 0x10(r1)
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r3, 0x184(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x14(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r4, 0x17c(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x18(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r5, 0x174(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x1c(r1)
    lfs f0, 0x5c(r25)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r6, 0x16c(r1)
    clrlwi r6, r6, 24
    bl fn_80020D48
    addi r3, r1, 0x5c
    addi r4, r1, 0x68
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x5c(r1)
    lfs f3, 0x60(r1)
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    stfs f0, 0x68(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f30
    fdivs f0, f3, f0
    stfs f0, 0x6c(r1)
    lwz r0, 0x4(r25)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80020BD8
    fmr f1, f26
    bl fn_80018C3C
    fmr f23, f1
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C3C
    lfs f0, 0x68(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f23
    lfs f0, 0x6c(r1)
    fadds f23, f0, f1
    fmr f1, f26
    bl fn_80018C2C
    fmr f24, f1
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x64(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f24
    lfs f0, 0x68(r1)
    fadds f1, f0, f1
    fmr f2, f23
    bl fn_80020D38
    b lbl_80020C68
lbl_80020BD8:
    fmr f1, f26
    bl fn_80018C3C
    fmr f24, f1
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x68(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f24
    lfs f0, 0x6c(r1)
    fadds f24, f0, f1
    fmr f1, f26
    bl fn_80018C2C
    fmr f26, f1
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f31
    fmuls f1, f25, f0
    lfs f0, 0x60(r25)
    fadds f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x64(r25)
    fmuls f0, f0, f1
    fmuls f1, f0, f26
    lfs f0, 0x68(r1)
    fadds f1, f0, f1
    fmr f2, f24
    bl fn_80020D38
lbl_80020C68:
    addi r27, r27, 0x1
lbl_80020C6C:
    lwz r3, 0x14(r25)
    addi r0, r3, 0x1
    cmpw r27, r0
    blt lbl_8002078C
    addi r26, r26, 0x1
lbl_80020C80:
    lwz r3, 0x18(r25)
    subi r0, r3, 0x1
    cmpw r26, r0
    blt lbl_80020528
    bl fn_80020D34
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

// asm_to_cpp: fn_80020D1C
asm void fn_80020D1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    b fn_80201A20
}

// asm_to_cpp: fn_80020D20
asm void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f4, 0xc(r3)
    blr
}

void fn_80020D34(void) {
}

void fn_80020D38(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

// asm_to_cpp: fn_80020D48
asm void fn_80020D48(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
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

void fn_80020D70(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

} // extern "C"
