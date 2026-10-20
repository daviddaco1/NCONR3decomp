#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80339990[];
extern u8 lbl_8034FA9C[];
extern u8 lbl_8034FAC0[];
extern u8 lbl_8034FACC[];
extern u8 lbl_8034FAF0[];
extern u8 lbl_8034FB10[];
extern u8 lbl_803A44F0[];
extern u8 lbl_803A4530[];
extern u8 lbl_803A4830[];
extern u8 lbl_803C1A40[];
extern float lbl_8049D6E0;
extern float lbl_8049D6E4;
extern s32 *lbl_8049D6E8;
extern s32 lbl_8049D9D0;
extern s32 lbl_8049D9E0;
extern float lbl_804A0A48;
extern float lbl_804A0A50;
extern float lbl_804A0A80;
extern float lbl_804A0A88;

void _restgpr_24();
void _restgpr_26();
void _restgpr_27();
void _restgpr_29();
void _savegpr_24();
void _savegpr_26();
void _savegpr_27();
void _savegpr_29();
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
void fn_8002211C(s8 *arg0);
s32 fn_80028E40(s32 *arg0, s32 *arg1);
void fn_80028EBC(s32 *arg0, s32 *arg1);
s32 fn_80028EC8(s32 arg0);
M2C_UNK ** fn_80028F70(M2C_UNK **arg0);
s32 fn_80029024(s32 *arg0);
s32 fn_80029090(s32 arg0);
s32 fn_8002A17C(s32 *arg0, s32 *arg1);
void fn_8002A57C(s32 *arg0, f32 farg0);
void fn_8002AF5C(s32 arg0);
s32 fn_8002B060(s32 arg0, s32 arg1);
s32 fn_80033F08(s32 *arg0);
void fn_80034064(s32 *arg0);
M2C_UNK fn_800341DC(s32 *arg0);
s32 fn_8003D544(s32 arg0);
void fn_8003D578(s32 arg0);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8012365C(s32 arg0);
void fn_80125B48(s32 arg0, s32 arg1);
void fn_80126C20(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_801276E4(s8 *arg0);
void fn_8012E0F0(s32 arg0, s32 arg1);
void fn_8012E268(s8 *arg0);
void fn_8012E444(s8 *arg0);
void fn_8012E4B0();
void fn_8012E4CC(s8 *arg0);
s8 ** fn_8012E580(s8 **arg0);
s32 fn_8012E5F4(M2C_UNK *arg0, u32 arg1);
s32 * fn_8012E61C(s32 arg0);
s32 * fn_8012E624(void);
s32 fn_8012E62C(s32 arg0);
void fn_8012E634(s32 arg0, s32 arg1);
s32 fn_8012E63C(s32 arg0, s32 arg1);
void fn_8012E66C(s8 *arg0, s8 *arg1);
void fn_8012E680(s32 arg0, s32 arg1);
void fn_8012E688(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8012E690(s32 *arg0, s32 *arg1);
s32 fn_8012E6D0(s32 *arg0, s32 *arg1);
s32 fn_8012E708(s32 arg0);
s32 * fn_8012E73C(s32 *arg0, s32 arg1);
s32 fn_8012E76C(s32 arg0);
s32 fn_8012E79C(s32 arg0);
M2C_UNK fn_8012E7F0(void);
s32 fn_8012E814(s32 arg0);
s32 fn_8012E864(s32 arg0, s32 arg1);
s32 fn_8012E894(void);
s32 fn_8012E8C8(s8 *arg0);
s32 fn_8012E8D0(u32 arg0);
u32 fn_8012E900(u32 arg0);
f32 fn_8012E91C(s32 arg0);
f32 fn_8012E9EC(s32 arg0);
f32 fn_8012EAA4(s32 arg0, f32 farg0);
void fn_8012EADC(u32 arg0, s8 *arg1, s32 arg2, s32 arg3);
s32 fn_8012EC24(s32 arg0);
s8 * fn_8012ED50(s32 arg0);
s32 fn_8012EDB4(u32 *arg0);
void fn_8012EDE4(s32 arg0, s32 arg1, s32 arg2, u32 *arg3, s8 *arg4, s32 arg5, M2C_UNK arg_sp0);
void fn_8012EE98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void fn_8012EEB4(u32 *arg0, s8 *arg1);
s8 * fn_8012EF08(void);
s32 fn_8012EF10(void);
void fn_8012EF18(void);
void fn_8012EF1C(void);
s32 fn_8012EF20(s32 arg0);
s32 fn_8012EF58(s32 arg0);
void fn_8012F03C(s32 arg0);
s32 fn_8012F0A8(s32 arg0, s32 arg1);
s32 fn_8012F11C(s32 arg0, s32 arg1);
s8 * fn_8012F15C(s32 arg0);
void fn_8012F18C(s32 arg0, s32 arg1);
void fn_8012F1A4(s8 *arg0);
void fn_8012F29C(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s32 fn_8012F3A8(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F658(s32 arg0);
void fn_8012F678(s8 *arg0, s32 arg1);
void fn_8012F6F4(s32 arg0);
void fn_8012F780(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F79C(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F7B8(s8 *arg0, s32 arg1, f32 farg0);
s32 fn_8012F7D4(s8 *arg0, s32 arg1);
s8 * fn_8012F7F8(s32 arg0, s32 arg1, s32 arg2);
void fn_8012F8CC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s8 *arg5);
void fn_8012F99C(s32 arg0, s32 arg1);
void fn_8012FA30(s32 arg0, u32 arg1);
s32 fn_8012FB14(s32 arg0);
s32 fn_8012FB1C(s32 *arg0, s32 arg1);
s32 fn_8012FBE4(s32 *arg0, u32 arg1);
s32 fn_8012FC38(void);
void fn_8012FC70(void);
s32 fn_8012FCB0(s16 arg0, s32 arg1);
void fn_8012FD18(s32 arg0);
void fn_8012FD5C(s32 arg0);
s32 fn_8012FDBC(s32 arg0);
void fn_8012FE2C();
void fn_8012FE70();
s8 * fn_8012FED4(s8 *arg0, s32 arg1);
void fn_8012FF14(s8 *arg0, s32 arg1);
void fn_80130410(void);
s32 fn_80136DA4(void);
void fn_80153C98(s8 *arg0);
void fn_80153CF0(s32 **arg0);
s32 ** fn_80153CF8(void);
void fn_8015430C(s8 *arg0, s32 arg1);
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801654BC(s8 *arg0, s32 arg1);
u32 * fn_80165B04(s8 *arg0, s32 arg1);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80171190(s32 arg0, s16 arg1, s32 arg2);
s32 fn_80177170(s32 arg0, M2C_UNK *arg1, s32 arg2);
void fn_8017742C(void);
void fn_8017743C(s32 arg0, s32 arg1);
void fn_8017776C(s32 arg0);
void fn_80181B2C(s8 *arg0, s32 arg1, s32 arg2);
void fn_80181D3C(s8 *arg0);
s8 * fn_80186808(s8 *arg0);
void fn_80191C78(s8 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8012E268
asm void fn_8012E268(s8 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r30, r3
    lwz r29, 0x2b0(r3)
    addi r3, r1, 0x20
    bl fn_8002AF5C
    addi r3, r1, 0x8
    bl fn_8003D578
    addi r3, r1, 0x10
    bl fn_8003D544
    addi r3, r1, 0x14
    bl fn_8003D544
    addi r3, r1, 0x18
    bl fn_8003D544
    addi r3, r1, 0x1c
    bl fn_8003D544
    lwz r0, 0x1c(r30)
    cmplwi r0, 0x14
    bne lbl_8012E42C
    cmpwi r29, 0x0
    beq lbl_8012E42C
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    bne lbl_8012E2D8
    b lbl_8012E42C
lbl_8012E2D8:
    bl fn_8012E8C8
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_8012E2F8
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    bne lbl_8012E304
lbl_8012E2F8:
    lwz r0, 0x20(r30)
    cmpwi r0, -0x1
    beq lbl_8012E42C
lbl_8012E304:
    lfs f0, 0x70(r30)
    stfs f0, 0x20(r1)
    lfs f0, 0x9c(r30)
    fneg f0, f0
    stfs f0, 0x24(r1)
    lfs f0, 0xc8(r30)
    stfs f0, 0x28(r1)
    mr r3, r31
    addi r4, r1, 0x20
    bl fn_8012E688
    lfs f0, 0x13c(r30)
    stfs f0, 0x20(r1)
    lfs f0, 0x158(r30)
    stfs f0, 0x24(r1)
    lfs f0, 0x174(r30)
    fneg f0, f0
    stfs f0, 0x28(r1)
    mr r3, r31
    addi r4, r1, 0x20
    bl fn_8012E680
    lfs f0, 0xf4(r30)
    stfs f0, 0x8(r1)
    lfs f0, 0x114(r30)
    stfs f0, 0xc(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8012E634
    lhz r0, 0x0(r29)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8012E38C
    lwz r0, 0x0(r30)
    oris r0, r0, 0x100
    stw r0, 0x0(r30)
lbl_8012E38C:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8012E42C
    li r3, 0x0
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_8012E3AC:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8012E3EC
    add r5, r30, r3
    addi r6, r1, 0x10
    add r6, r6, r4
    lbz r0, 0x210(r5)
    stb r0, 0x0(r6)
    lbz r0, 0x211(r5)
    stb r0, 0x1(r6)
    lbz r0, 0x212(r5)
    stb r0, 0x2(r6)
    lbz r0, 0x213(r5)
    stb r0, 0x3(r6)
    b lbl_8012E414
lbl_8012E3EC:
    addi r5, r1, 0x10
    add r5, r5, r4
    lbz r0, 0x210(r30)
    stb r0, 0x0(r5)
    lbz r0, 0x211(r30)
    stb r0, 0x1(r5)
    lbz r0, 0x212(r30)
    stb r0, 0x2(r5)
    lbz r0, 0x213(r30)
    stb r0, 0x3(r5)
lbl_8012E414:
    addi r3, r3, 0x28
    addi r4, r4, 0x4
    bdnz lbl_8012E3AC
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_8012E0F0
lbl_8012E42C:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

void fn_8012E444(s8 *arg0) {
    s32 temp_r3;
    u16 *temp_r31;

    temp_r31 = (u16 *) (M2C_FIELD(arg0, s8 **, 0x2B0));
    if (temp_r31 != NULL) {
        fn_80191C78((s8 *) (temp_r31));
        if ((s32) (*temp_r31 & 4) != 0) {
            temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 0));
            if ((s32) (temp_r3 & 0x40000) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r3 | 0x80000000));
            }
        }
    }
}

// asm_to_cpp: fn_8012E4B0
asm void fn_8012E4B0() {
    nofralloc
    mr r4, r3
    lwz r3, 0x2b0(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r4, 0x10(r4)
    b fn_80125B48
    blr
}

// asm_to_cpp: fn_8012E4CC
asm void fn_8012E4CC(s8 *arg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    mr r11, r3
    lwz r4, 0x2b0(r3)
    lwz r9, 0xc(r3)
    lwz r8, 0x2a8(r3)
    srawi r5, r4, 31
    xor r0, r5, r4
    subf r4, r5, r0
    lwz r10, 0x210(r3)
    mr r5, r4
    li r0, 0xa
    b lbl_8012E508
lbl_8012E504:
    divw r5, r5, r0
lbl_8012E508:
    cmpwi r5, 0x0
    bne lbl_8012E504
    addi r7, r1, 0x14
    addi r6, r3, 0x2c4
    li r0, 0x7
    mtctr r0
lbl_8012E520:
    lwz r5, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_8012E520
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    lwz r0, 0x10(r3)
    stw r0, 0x8(r1)
    lwz r0, 0x2bc(r3)
    stw r0, 0xc(r1)
    stw r8, 0x10(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x14(r1)
    addi r3, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    lwz r7, 0x2b4(r11)
    lwz r8, 0x2b8(r11)
    bl fn_80126C20
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8012E580
asm s8 ** fn_8012E580(s8 **arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_8012E61C
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_8012E5D8
    mr r3, r30
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r31
    bl fn_8012E5F4
    cmpwi r3, 0x0
    beq lbl_8012E5D8
    mr r3, r30
    b lbl_8012E5DC
lbl_8012E5D8:
    li r3, 0x0
lbl_8012E5DC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012E5F4
asm s32 fn_8012E5F4(M2C_UNK *arg0, u32 arg1) {
    nofralloc
    b lbl_8012E60C
lbl_8012E5F8:
    cmplw r3, r4
    bne lbl_8012E608
    li r3, 0x1
    blr
lbl_8012E608:
    lwz r3, 0x0(r3)
lbl_8012E60C:
    cmpwi r3, 0x0
    bne lbl_8012E5F8
    li r3, 0x0
    blr
}

s32 * fn_8012E61C(s32 arg0) {
    return (s32 *) (&lbl_8049D9E0);
}

s32 * fn_8012E624(void) {
    return (s32 *) (&lbl_8049D9D0);
}

s32 fn_8012E62C(s32 arg0) {
    return (s32) (arg0 + 0x10);
}

void fn_8012E634(s32 arg0, s32 arg1) {
    fn_8012E63C((s32) (arg0 + 0x44), (s32) (arg1));
}

s32 fn_8012E63C(s32 arg0, s32 arg1) {
    fn_8012E66C((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1));
    return (s32) (arg0);
}

void fn_8012E66C(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

void fn_8012E680(s32 arg0, s32 arg1) {
    fn_8002B060((s32) (arg0 + 0x38), (s32) (arg1));
}

void fn_8012E688(s32 arg0, s32 arg1, s32 arg2) {
    fn_8002B060((s32) (arg0 + 0x2C), (s32) (arg1));
}

s32 fn_8012E690(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_8012E6D0((s32 *) (&spC), (s32 *) (&sp8)) == 0);
}

s32 fn_8012E6D0(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80028E40((s32 *) (&spC), (s32 *) (&sp8)));
}

s32 fn_8012E708(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_8012E73C((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 * fn_8012E73C(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_8012E76C(s32 arg0) {
    fn_80028F70((M2C_UNK **) ((s32 **) arg0));
    return (s32) (arg0);
}

// asm_to_cpp: fn_8012E79C
asm s32 fn_8012E79C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8012E7F0
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8012E7D8
    lis r3, lbl_8034FAF0@ha
    addi r3, r3, lbl_8034FAF0@l
    li r4, 0x193
    lis r5, lbl_8034FACC@ha
    addi r5, r5, lbl_8034FACC@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8012E7D8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012E7F0
asm M2C_UNK fn_8012E7F0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029024
    bl fn_8012E814
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012E814
asm s32 fn_8012E814(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8012E84C
    lis r3, lbl_8034FAC0@ha
    addi r3, r3, lbl_8034FAC0@l
    li r4, 0x23d
    lis r5, lbl_8034FA9C@ha
    addi r5, r5, lbl_8034FA9C@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8012E84C:
    subi r3, r31, 0x4
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8012E864(s32 arg0, s32 arg1) {
    fn_80028EBC((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

// asm_to_cpp: fn_8012E894
asm s32 fn_8012E894(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029090
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8012E73C
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8012E8C8(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x10));
}

// asm_to_cpp: fn_8012E8D0
asm s32 fn_8012E8D0(u32 arg0) {
    nofralloc
    cmplwi r3, 0xfe
    ble lbl_8012E8F8
    lis r4, 0x1
    subi r0, r4, 0x1
    subf r0, r0, r3
    subic r0, r0, 0x1
    subfe r3, r0, r0
    li r0, 0x3
    andc r3, r0, r3
    blr
lbl_8012E8F8:
    li r3, 0x1
    blr
}

u32 fn_8012E900(u32 arg0) {
    if (arg0 >= 0xFFU) {
        return (u32) (-1U);
    }
    return (u32) (arg0 / 357U);
}

// asm_to_cpp: fn_8012E91C
asm f32 fn_8012E91C(s32 arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stfd f29, 0x10(r1)
    opword 0xF3A10018
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f29, lbl_804A0A50
    li r31, 0x0
    la r3, lbl_804A0A50
    lfs f31, 0x8(r3)
    lfs f30, 0x4(r3)
    b lbl_8012E9A0
lbl_8012E964:
    bl fn_8012EC24
    lwzx r0, r30, r31
    cmplwi r0, 0xfffe
    beq lbl_8012E9AC
    cmplwi r0, 0xfffc
    bne lbl_8012E984
    fadds f29, f29, f30
    b lbl_8012E99C
lbl_8012E984:
    cmplwi r0, 0xff
    bge lbl_8012E998
    bl fn_8012E9EC
    fadds f29, f29, f1
    b lbl_8012E99C
lbl_8012E998:
    fadds f29, f29, f31
lbl_8012E99C:
    addi r31, r31, 0x4
lbl_8012E9A0:
    lwzx r3, r30, r31
    cmplwi r3, 0xffff
    bne lbl_8012E964
lbl_8012E9AC:
    fmr f1, f29
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    li r0, 0x18
    opword 0x13A1000C
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8012E9EC
asm f32 fn_8012E9EC(s32 arg0) {
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    stw r31, 0x41c(r1)
    stw r30, 0x418(r1)
    mr r30, r3
    li r31, 0x10
    bl fn_80136DA4
    cmpwi r3, 0x0
    beq lbl_8012EA70
    addi r5, r1, 0x4
    lis r3, lbl_80339990@ha
    addi r3, r3, lbl_80339990@l
    subi r4, r3, 0x4
    li r0, 0x7f
    mtctr r0
lbl_8012EA2C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8012EA2C
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    cmpwi r30, 0xff
    ble lbl_8012EA58
    li r30, 0xff
    b lbl_8012EA64
lbl_8012EA58:
    cmpwi r30, 0x0
    bge lbl_8012EA64
    li r30, 0x0
lbl_8012EA64:
    slwi r0, r30, 2
    addi r3, r1, 0x8
    lwzx r31, r3, r0
lbl_8012EA70:
    lfd f1, lbl_804A0A48
    xoris r0, r31, 0x8000
    stw r0, 0x40c(r1)
    lis r0, 0x4330
    stw r0, 0x408(r1)
    lfd f0, 0x408(r1)
    fsubs f1, f0, f1
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    lwz r0, 0x424(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

// asm_to_cpp: fn_8012EAA4
asm f32 fn_8012EAA4(s32 arg0, f32 farg0) {
    nofralloc
    la r4, lbl_804A0A50
    lfs f2, 0xc(r4)
    li r4, 0x0
    fadds f0, f2, f1
    b lbl_8012EAC8
lbl_8012EAB8:
    cmplwi r0, 0xfffe
    bne lbl_8012EAC4
    fadds f2, f2, f0
lbl_8012EAC4:
    addi r4, r4, 0x4
lbl_8012EAC8:
    lwzx r0, r3, r4
    cmplwi r0, 0xffff
    bne lbl_8012EAB8
    fmr f1, f2
    blr
}

// asm_to_cpp: fn_8012EADC
asm void fn_8012EADC(u32 arg0, s8 *arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r31, r3
    mr r29, r4
    bl fn_8012EC24
    mr r30, r3
    mr r3, r31
    bl fn_8012E8D0
    mr r31, r3
    mr r3, r30
    bl fn_8012E9EC
    la r6, lbl_804A0A50
    li r0, 0x11
    divw r5, r30, r0
    mullw r0, r5, r0
    subf r0, r0, r30
    lfd f3, lbl_804A0A48
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f3
    lfs f0, 0x10(r6)
    fmuls f4, f0, f2
    li r3, 0x15
    divw r0, r5, r3
    mullw r0, r0, r3
    subf r0, r0, r5
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f3
    lfs f0, 0x14(r6)
    fmuls f2, f0, f2
    cmpwi r31, 0x1
    beq lbl_8012EB8C
    cmpwi r31, 0x2
    beq lbl_8012EBC4
    b lbl_8012EBF8
lbl_8012EB8C:
    lfs f0, 0x18(r6)
    fadds f0, f0, f4
    stfs f0, 0x0(r29)
    lfs f0, 0x1c(r6)
    fadds f0, f0, f2
    stfs f0, 0x4(r29)
    lfs f0, 0x20(r6)
    fdivs f0, f1, f0
    fadds f0, f4, f0
    stfs f0, 0x8(r29)
    lfs f0, 0x24(r6)
    fadds f0, f0, f2
    stfs f0, 0xc(r29)
    b lbl_8012EC0C
lbl_8012EBC4:
    lfs f0, 0x18(r6)
    fadds f0, f0, f4
    stfs f0, 0x0(r29)
    lfs f0, 0x1c(r6)
    fadds f0, f0, f2
    stfs f0, 0x4(r29)
    lfs f0, 0x28(r6)
    fadds f0, f0, f4
    stfs f0, 0x8(r29)
    lfs f0, 0x24(r6)
    fadds f0, f0, f2
    stfs f0, 0xc(r29)
    b lbl_8012EC0C
lbl_8012EBF8:
    lfs f0, lbl_804A0A50
    stfs f0, 0x0(r29)
    stfs f0, 0x4(r29)
    stfs f0, 0x8(r29)
    stfs f0, 0xc(r29)
lbl_8012EC0C:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8012EC24
asm s32 fn_8012EC24(s32 arg0) {
    nofralloc
    mr r4, r3
    cmpwi r3, 0xa5
    beq lbl_8012EC90
    bge lbl_8012EC6C
    cmpwi r3, 0x9c
    beq lbl_8012ECA8
    bge lbl_8012EC60
    cmpwi r3, 0x8c
    beq lbl_8012ECA0
    bge lbl_8012ECC8
    cmpwi r3, 0x2e
    bge lbl_8012ECC8
    cmpwi r3, 0x0
    bge lbl_8012ECCC
    b lbl_8012ECC8
lbl_8012EC60:
    cmpwi r3, 0xa1
    beq lbl_8012EC98
    b lbl_8012ECC8
lbl_8012EC6C:
    cmpwi r3, 0xb0
    beq lbl_8012ECC0
    bge lbl_8012EC84
    cmpwi r3, 0xab
    beq lbl_8012ECB0
    b lbl_8012ECC8
lbl_8012EC84:
    cmpwi r3, 0xbb
    beq lbl_8012ECB8
    b lbl_8012ECC8
lbl_8012EC90:
    li r4, 0x3d
    b lbl_8012ED48
lbl_8012EC98:
    li r4, 0x60
    b lbl_8012ED48
lbl_8012ECA0:
    li r4, 0x9b
    b lbl_8012ED48
lbl_8012ECA8:
    li r4, 0x9c
    b lbl_8012ED48
lbl_8012ECB0:
    li r4, 0x9f
    b lbl_8012ED48
lbl_8012ECB8:
    li r4, 0xa0
    b lbl_8012ED48
lbl_8012ECC0:
    li r4, 0xa1
    b lbl_8012ED48
lbl_8012ECC8:
    addi r4, r3, 0x1
lbl_8012ECCC:
    cmplwi r3, 0x7f
    blt lbl_8012ECD8
    subi r4, r4, 0x3f
lbl_8012ECD8:
    cmplwi r3, 0xcb
    blt lbl_8012ECE4
    addi r4, r4, 0x1
lbl_8012ECE4:
    cmplwi r3, 0xd1
    blt lbl_8012ECF0
    subi r4, r4, 0x1
lbl_8012ECF0:
    cmplwi r3, 0xd7
    blt lbl_8012ECFC
    subi r4, r4, 0x2
lbl_8012ECFC:
    cmplwi r3, 0xde
    blt lbl_8012ED08
    subi r4, r4, 0x1
lbl_8012ED08:
    cmplwi r3, 0xeb
    blt lbl_8012ED14
    addi r4, r4, 0x1
lbl_8012ED14:
    cmplwi r3, 0xf0
    blt lbl_8012ED20
    subi r4, r4, 0x1
lbl_8012ED20:
    cmplwi r3, 0xf5
    blt lbl_8012ED2C
    subi r4, r4, 0x1
lbl_8012ED2C:
    cmplwi r3, 0xf7
    blt lbl_8012ED38
    subi r4, r4, 0x2
lbl_8012ED38:
    cmplwi r3, 0xfe
    blt lbl_8012ED44
    subi r4, r4, 0x1
lbl_8012ED44:
    subi r4, r4, 0x20
lbl_8012ED48:
    mr r3, r4
    blr
}

// asm_to_cpp: fn_8012ED50
asm s8 * fn_8012ED50(s32 arg0) {
    nofralloc
    li r4, 0x0
    lis r5, lbl_8034FB10@ha
    addi r6, r5, lbl_8034FB10@l
    li r0, 0x9c
    mtctr r0
lbl_8012ED64:
    add r8, r6, r4
    li r5, 0x0
    b lbl_8012ED88
lbl_8012ED70:
    lwzx r7, r3, r5
    cmplwi r7, 0xffff
    beq lbl_8012ED94
    cmplw r7, r0
    bne lbl_8012ED94
    addi r5, r5, 0x4
lbl_8012ED88:
    lwzx r0, r8, r5
    cmplwi r0, 0xffff
    bne lbl_8012ED70
lbl_8012ED94:
    cmplwi r0, 0xffff
    bne lbl_8012EDA4
    mr r3, r8
    blr
lbl_8012EDA4:
    addi r4, r4, 0x104
    bdnz lbl_8012ED64
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8012EDB4
asm s32 fn_8012EDB4(u32 *arg0) {
    nofralloc
    li r4, 0x0
lbl_8012EDB8:
    lwz r0, 0x0(r3)
    cmplwi r0, 0xffff
    beq lbl_8012EDD0
    addi r4, r4, 0x1
    addi r3, r3, 0x4
    b lbl_8012EDB8
lbl_8012EDD0:
    cmpwi r4, 0x0
    bne lbl_8012EDDC
    li r4, 0x1
lbl_8012EDDC:
    mr r3, r4
    blr
}

void fn_8012EDE4(s32 arg0, s32 arg1, s32 arg2, u32 *arg3, s8 *arg4, s32 arg5, M2C_UNK arg_sp0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r31;
    s32 var_r3;

    var_r3 = (s32) (0);
    if ((arg3 != NULL) && (arg4 != NULL)) {
        M2C_FIELD(arg4, s32 *, 0) = (s32) (0);
        M2C_FIELD(arg4, s32 *, 4) = (s32) (0);
        M2C_FIELD(arg4, s32 *, 0x14) = (s32) (arg2);
        M2C_FIELD(arg4, s32 *, 0x18) = (s32) (0);
        M2C_FIELD(arg4, s32 *, 0x1C) = (s32) (0x14);
        M2C_FIELD(arg4, s32 *, 0x20) = (s32) (0x16);
        M2C_FIELD(arg4, s32 *, 0x24) = (s32) (0x10);
        M2C_FIELD(arg4, s32 *, 0x28) = (s32) (0x16);
        temp_r31 = (s32) (arg5 & 2);
        if (temp_r31 == 0) {
            var_r3 = (s32) (fn_8012EDB4((u32 *) (arg3)));
        }
        if (temp_r31 != 0) {
            temp_r0 = (s32) (arg1 * 0x64);
            M2C_FIELD(arg4, s32 *, 8) = (s32) (temp_r0);
            M2C_FIELD(arg4, s32 *, 0xC) = (s32) (temp_r0);
            return;
        }
        temp_r0_2 = (s32) ((s32) (arg1 * 0x64) / var_r3);
        M2C_FIELD(arg4, s32 *, 8) = (s32) (temp_r0_2);
        M2C_FIELD(arg4, s32 *, 0xC) = (s32) (temp_r0_2);
    }
}

void fn_8012EE98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    if (arg4 != NULL) {
        M2C_FIELD(arg4, s32 *, 0x1C) = (s32) (arg0);
        M2C_FIELD(arg4, s32 *, 0x20) = (s32) (arg1);
        M2C_FIELD(arg4, s32 *, 0x24) = (s32) (arg2);
        M2C_FIELD(arg4, s32 *, 0x28) = (s32) (arg3);
    }
}

// asm_to_cpp: fn_8012EEB4
asm void fn_8012EEB4(u32 *arg0, s8 *arg1) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r4)
    lwz r0, 0x8(r4)
    stw r0, 0x4(r4)
lbl_8012EED4:
    lwz r0, 0x0(r3)
    cmplwi r0, 0xffff
    beq lbl_8012EEF4
    lwz r5, 0x0(r4)
    addi r0, r5, 0x1
    stw r0, 0x0(r4)
    addi r3, r3, 0x4
    b lbl_8012EED4
lbl_8012EEF4:
    li r0, 0x64
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x4(r4)
    blr
}

s8 * fn_8012EF08(void) {
    return (s8 *) (lbl_8049D6E8);
}

s32 fn_8012EF10(void) {
    return (s32) (0x110);
}

void fn_8012EF18(void) {
}

void fn_8012EF1C(void) {
}

// asm_to_cpp: fn_8012EF20
asm s32 fn_8012EF20(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8012EF10
    slwi r3, r3, 2
    addi r0, r3, 0x34eb
    clrrwi r3, r0, 5
    addi r0, r3, 0x4
    mulli r3, r0, 0x60
    addi r3, r3, 0x10
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012EF58
asm s32 fn_8012EF58(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    bl fn_8012EF10
    slwi r3, r3, 2
    addi r29, r3, 0x34cc
    li r3, -0x2
    bl fn_8012365C
    li r4, 0x60
    mr r5, r29
    bl fn_80171190
    stw r3, lbl_8049D6E0
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803A44F0@ha
    addi r30, r3, lbl_803A44F0@l
lbl_8012EFA0:
    add r3, r30, r31
    bl fn_80019D5C
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    cmpwi r29, 0x5
    blt lbl_8012EFA0
    li r3, 0x0
    lis r4, lbl_803A4530@ha
    addi r5, r4, lbl_803A4530@l
    li r4, 0x0
    li r0, 0x40
    mtctr r0
lbl_8012EFD0:
    add r6, r5, r3
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    addi r3, r3, 0xc
    bdnz lbl_8012EFD0
    bl fn_8012EF18
    li r3, 0x12
    lis r4, fn_8012FB1C@ha
    addi r4, r4, fn_8012FB1C@l
    li r5, 0x4
    bl fn_80177170
    stw r3, lbl_8049D6E4
    cmpwi r3, 0x0
    beq lbl_8012F020
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, 0x0
    lwz r3, lbl_8049D6E4
    stw r0, 0x0(r3)
lbl_8012F020:
    li r3, 0x1
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8012F03C
asm void fn_8012F03C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r3, -0x1
    bl fn_8012F6F4
    li r31, 0x0
lbl_8012F058:
    mr r3, r31
    li r4, 0x0
    bl fn_8012F0A8
    addi r31, r31, 0x1
    cmpwi r31, 0x40
    blt lbl_8012F058
    bl fn_8012EF1C
    li r3, -0x2
    bl fn_8012365C
    lwz r4, lbl_8049D6E0
    bl fn_80170E84
    lwz r3, lbl_8049D6E4
    bl fn_8017776C
    li r0, 0x0
    stw r0, lbl_8049D6E4
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012F0A8
asm s32 fn_8012F0A8(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_8012F0E8
    mr r3, r4
    li r4, 0x5
    li r5, 0x0
    bl fn_801648C4
    mulli r0, r31, 0xc
    lis r4, lbl_803A4530@ha
    addi r4, r4, lbl_803A4530@l
    stwx r3, r4, r0
    b lbl_8012F104
lbl_8012F0E8:
    mulli r4, r3, 0xc
    li r0, 0x0
    lis r3, lbl_803A4530@ha
    addi r3, r3, lbl_803A4530@l
    stwx r0, r3, r4
    add r3, r3, r4
    stw r0, 0x4(r3)
lbl_8012F104:
    li r3, 0x1
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012F11C
asm s32 fn_8012F11C(s32 arg0, s32 arg1) {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_8012F138
    mulli r0, r3, 0xc
    lis r3, lbl_803A4530@ha
    addi r3, r3, lbl_803A4530@l
    stwx r4, r3, r0
    b lbl_8012F154
lbl_8012F138:
    mulli r4, r3, 0xc
    li r0, 0x0
    lis r3, lbl_803A4530@ha
    addi r3, r3, lbl_803A4530@l
    stwx r0, r3, r4
    add r3, r3, r4
    stw r0, 0x4(r3)
lbl_8012F154:
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_8012F15C
asm s8 * fn_8012F15C(s32 arg0) {
    nofralloc
    mulli r0, r3, 0xc
    lis r3, lbl_803A4530@ha
    addi r3, r3, lbl_803A4530@l
    lwzx r4, r3, r0
    cmpwi r4, 0x0
    beq lbl_8012F17C
    addi r3, r4, 0x8
    blr
lbl_8012F17C:
    add r3, r3, r0
    lwz r3, 0x4(r3)
    addi r3, r3, 0x8
    blr
}

// asm_to_cpp: fn_8012F18C
asm void fn_8012F18C(s32 arg0, s32 arg1) {
    nofralloc
    lis r5, lbl_803A4530@ha
    addi r5, r5, lbl_803A4530@l
    mulli r0, r3, 0xc
    add r3, r5, r0
    stw r4, 0x8(r3)
    blr
}

// asm_to_cpp: fn_8012F1A4
asm void fn_8012F1A4(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8012EF10
    addi r31, r30, 0x14
    li r0, 0x0
    stw r0, 0xc(r30)
    stw r0, 0x10(r30)
    li r6, 0x7
    sth r6, 0x6(r31)
    li r0, 0x8
    sth r0, 0x8(r31)
    li r5, 0x10
    sth r5, 0xa(r31)
    stw r3, 0x0(r31)
    addi r4, r30, 0x60
    stw r4, 0xc(r31)
    mulli r0, r6, 0x60
    clrrwi r0, r0, 2
    add r4, r4, r0
    stw r4, 0x14(r31)
    addi r4, r4, 0x20
    stw r4, 0x18(r31)
    mulli r0, r5, 0x6
    slwi r0, r0, 2
    add r0, r4, r0
    stw r0, 0x10(r31)
    slwi r0, r3, 2
    add r3, r30, r0
    addi r3, r3, 0xb4
    stw r3, 0x34(r30)
    addi r0, r3, 0x8
    stw r0, 0x0(r3)
    lwz r3, 0x34(r30)
    stw r5, 0x4(r3)
    lwz r3, 0x34(r30)
    addi r3, r3, 0x48
    stw r3, 0x38(r30)
    addi r0, r3, 0x10
    stw r0, 0x0(r3)
    lwz r3, 0x38(r30)
    stw r5, 0x8(r3)
    lwz r3, 0xc(r31)
    li r4, 0x0
    lhz r0, 0x6(r31)
    mulli r0, r0, 0x60
    clrrwi r5, r0, 2
    bl memset
    lwz r3, 0x10(r31)
    li r4, 0x0
    lhz r0, 0x6(r31)
    mulli r5, r0, 0xc
    bl memset
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012F29C
asm void fn_8012F29C(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x30(r3)
    add r31, r4, r6
    bl fn_8012F1A4
    li r6, 0x1
    li r3, 0x60
    b lbl_8012F2F8
lbl_8012F2CC:
    lwz r5, 0x2c(r30)
    lhz r4, 0x1e(r30)
    subf r0, r6, r0
    mullw r0, r4, r0
    slwi r0, r0, 2
    add r5, r5, r0
    lwz r0, 0x20(r30)
    add r4, r0, r3
    stw r5, 0x5c(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0x60
lbl_8012F2F8:
    lhz r0, 0x1a(r30)
    cmpw r6, r0
    blt lbl_8012F2CC
    lwz r5, 0x20(r30)
    li r3, 0x0
    li r4, 0x0
    li r0, 0x17
    mtctr r0
lbl_8012F318:
    stwx r4, r5, r3
    addi r3, r3, 0x4
    bdnz lbl_8012F318
    addi r0, r30, 0xc
    stw r0, 0x34(r5)
    lwz r0, 0x14(r30)
    stw r0, 0x3c(r5)
    lhz r0, 0x1a(r30)
    stw r0, 0x40(r5)
    lhz r0, 0x1c(r30)
    stw r0, 0x44(r5)
    lhz r0, 0x1e(r30)
    stw r0, 0x48(r5)
    li r0, -0x1
    stw r0, 0x38(r5)
    lwz r0, 0x20(r30)
    stw r0, 0x4c(r5)
    lwz r0, 0x28(r30)
    stw r0, 0x50(r5)
    lwz r0, 0x2c(r30)
    stw r0, 0x54(r5)
    lwz r3, 0x30(r30)
    lwz r0, 0xc(r3)
    stw r0, 0x58(r5)
    lwz r0, 0x30(r30)
    stw r0, 0x5c(r5)
    li r0, 0x100
    stw r0, 0x2c(r5)
    lwz r3, 0x20(r30)
    stw r31, 0xb8(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012F3A8
asm s32 fn_8012F3A8(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r5
    lwz r30, lbl_8049D6E8
    cmpwi r4, 0x0
    beq lbl_8012F4EC
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8012F3EC
    li r0, 0xf0
    stw r0, 0x0(r3)
    li r3, 0x1
    b lbl_8012F640
lbl_8012F3EC:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8012F4E4
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_8012F484
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x1
    ble lbl_8012F42C
    cmpwi r0, 0x3
    beq lbl_8012F450
    cmpwi r0, 0xff
    beq lbl_8012F474
    b lbl_8012F484
lbl_8012F42C:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8012F484
    bne cr1, lbl_8012F484
    li r0, 0xf0
    stw r0, 0x0(r3)
    li r3, 0x1
    b lbl_8012F640
lbl_8012F450:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8012F484
    bne cr1, lbl_8012F484
    li r0, 0xf0
    stw r0, 0x0(r3)
    li r3, 0x1
    b lbl_8012F640
lbl_8012F474:
    li r0, 0xf0
    stw r0, 0x0(r3)
    li r3, 0x1
    b lbl_8012F640
lbl_8012F484:
    mr r3, r30
    lis r4, lbl_803C1A40@ha
    addi r30, r4, lbl_803C1A40@l
    lwz r4, 0x24(r30)
    bl fn_8012FBE4
    cmpwi r3, 0x1
    bne lbl_8012F4E4
    lwz r4, 0x14(r29)
    lwz r3, 0x28(r30)
    lwz r0, 0x108(r4)
    cmpw r3, r0
    bne lbl_8012F4DC
    lwz r0, 0x104(r4)
    cmpwi r0, 0x0
    beq lbl_8012F4DC
    stw r0, 0xb8(r4)
    li r0, 0x0
    stw r0, 0x108(r4)
    stw r0, 0x60(r4)
    bl fn_8017742C
    li r3, -0x1
    b lbl_8012F640
lbl_8012F4DC:
    li r3, 0x1
    b lbl_8012F640
lbl_8012F4E4:
    li r3, 0x1
    b lbl_8012F640
lbl_8012F4EC:
    bl fn_80153CF8
    mr r31, r3
    addi r3, r29, 0x28
    bl fn_80153CF0
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_8012F524
    cmpwi r0, 0x1
    beq lbl_8012F52C
    cmpwi r0, 0xf0
    beq lbl_8012F618
    cmpwi r0, 0xf1
    beq lbl_8012F634
    b lbl_8012F63C
lbl_8012F524:
    li r0, 0x1
    stw r0, 0x0(r29)
lbl_8012F52C:
    li r28, 0x1
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8012F554
    li r3, 0x0
    bl fn_8005E8F0
    cmpwi r3, 0x0
    beq lbl_8012F554
    li r28, 0x0
lbl_8012F554:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    bne lbl_8012F57C
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_8012F57C
    li r28, 0x0
lbl_8012F57C:
    cmpwi r28, 0x1
    bne lbl_8012F5AC
    addi r3, r29, 0x8
    lwz r4, 0x4(r29)
    bl fn_801654BC
    cmpwi r3, 0x0
    bne lbl_8012F5A0
    li r0, 0xf0
    stw r0, 0x0(r29)
lbl_8012F5A0:
    addi r3, r29, 0x8
    mr r4, r27
    bl fn_8015430C
lbl_8012F5AC:
    lwz r3, 0x54(r30)
    cmpwi r3, 0x0
    beq lbl_8012F60C
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8012F60C
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    mr r29, r3
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_8012F600
    lwz r0, 0x0(r29)
    clrrwi r0, r0, 1
    stw r0, 0x0(r29)
    b lbl_8012F60C
lbl_8012F600:
    lwz r0, 0x0(r29)
    ori r0, r0, 0x1
    stw r0, 0x0(r29)
lbl_8012F60C:
    mr r3, r31
    bl fn_80153CF0
    b lbl_8012F63C
lbl_8012F618:
    li r0, 0xf1
    stw r0, 0x0(r29)
    addi r3, r29, 0x8
    lwz r4, 0x4(r29)
    bl fn_80165B04
    mr r3, r31
    bl fn_80153CF0
lbl_8012F634:
    li r3, 0x0
    b lbl_8012F640
lbl_8012F63C:
    li r3, 0x1
lbl_8012F640:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8012F658
asm void fn_8012F658(s32 arg0) {
    nofralloc
    li r0, 0x3e9
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r0, 0x28(r4)
    stw r3, 0x7b4(r4)
    lis r3, 0x1
    addi r3, r3, -0x8000
    b fn_8017743C
}

// asm_to_cpp: fn_8012F678
asm void fn_8012F678(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8012F6BC
    stw r3, lbl_8049D6E8
    li r0, 0xf0
    stw r0, 0xc(r3)
    addi r3, r3, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_8012F3A8
lbl_8012F6BC:
    clrlwi r0, r31, 31
    cmpwi r0, 0x0
    beq lbl_8012F6D0
    addi r3, r30, 0x40
    bl fn_8002211C
lbl_8012F6D0:
    lwz r3, lbl_8049D6E0
    mr r4, r30
    bl fn_80019D94
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012F6F4
asm void fn_8012F6F4(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    bge lbl_8012F71C
    li r29, 0x0
    li r28, 0x5
    b lbl_8012F724
lbl_8012F71C:
    mr r29, r3
    addi r28, r3, 0x1
lbl_8012F724:
    lis r3, lbl_803A44F0@ha
    addi r30, r3, lbl_803A44F0@l
    mulli r31, r29, 0xc
    b lbl_8012F760
lbl_8012F734:
    add r3, r30, r31
    lwz r27, 0x8(r3)
    b lbl_8012F74C
lbl_8012F740:
    lwz r27, 0x8(r27)
    li r4, 0x3
    bl fn_8012F678
lbl_8012F74C:
    lwz r3, 0x0(r27)
    cmplwi r3, 0x1
    bne lbl_8012F740
    addi r29, r29, 0x1
    addi r31, r31, 0xc
lbl_8012F760:
    cmpw r29, r28
    blt lbl_8012F734
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8012F780
asm void fn_8012F780(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lwz r3, 0x34(r3)
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    stwx r5, r3, r0
    blr
}

void fn_8012F79C(s8 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 4)), s32 *, 0x60) = (s32) (arg2);
    }
}

void fn_8012F7B8(s8 *arg0, s32 arg1, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 4)), f32 *, 0x60) = farg0;
    }
}

// asm_to_cpp: fn_8012F7D4
asm s32 fn_8012F7D4(s8 *arg0, s32 arg1) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_8012F7E4
    li r3, 0x0
    blr
lbl_8012F7E4:
    lwz r3, 0x20(r3)
    subi r0, r4, 0x18
    slwi r0, r0, 2
    lwzx r3, r3, r0
    blr
}

// asm_to_cpp: fn_8012F7F8
asm s8 * fn_8012F7F8(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r3, lbl_8049D6E0
    bl fn_80019D70
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8012F8B0
    mr r3, r27
    bl fn_8012F15C
    mr r31, r3
    mr r3, r30
    addi r4, r30, 0x40
    mulli r6, r28, 0xc
    lis r5, lbl_803A44F0@ha
    addi r0, r5, lbl_803A44F0@l
    add r5, r0, r6
    bl fn_8001D9A4
    stw r27, 0x0(r30)
    stw r28, 0x4(r30)
    stw r29, 0x8(r30)
    li r0, -0x1
    stw r0, 0x50(r30)
    li r0, 0x0
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    mr r3, r30
    lwz r4, 0x1c(r31)
    li r5, 0x0
    lis r6, lbl_803A4530@ha
    addi r6, r6, lbl_803A4530@l
    mulli r0, r27, 0xc
    add r6, r6, r0
    lwz r6, 0x8(r6)
    slwi r0, r29, 2
    lwzx r6, r6, r0
    bl fn_8012F29C
    lwz r3, 0x38(r30)
    bl fn_801276E4
    lwz r3, 0x34(r30)
    bl fn_80153C98
lbl_8012F8B0:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8012F8CC
asm void fn_8012F8CC(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s8 *arg5) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r6
    mr r31, r8
    bl fn_8012F7F8
    cmpwi r3, 0x0
    beq lbl_8012F984
    lwz r4, 0x38(r3)
    lwz r4, 0x0(r4)
    lfs f0, 0x0(r30)
    stfs f0, 0x70(r4)
    stfs f0, 0x6c(r4)
    lfs f0, 0x4(r30)
    stfs f0, 0x9c(r4)
    stfs f0, 0x98(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0xc8(r4)
    stfs f0, 0xc4(r4)
    lfs f0, 0x0(r31)
    stfs f0, 0xf4(r4)
    stfs f0, 0xf0(r4)
    lfs f0, 0x4(r31)
    stfs f0, 0x114(r4)
    stfs f0, 0x110(r4)
    lfs f0, 0x8(r31)
    stfs f0, 0x134(r4)
    stfs f0, 0x130(r4)
    lfs f0, lbl_804A0A80
    stfs f0, 0x13c(r4)
    stfs f0, 0x158(r4)
    stfs f0, 0x174(r4)
    lwz r0, 0x0(r4)
    ori r0, r0, 0x402
    stw r0, 0x0(r4)
    lwz r0, 0x138(r4)
    oris r0, r0, 0x8000
    stw r0, 0x138(r4)
    lwz r0, 0x154(r4)
    oris r0, r0, 0x8000
    stw r0, 0x154(r4)
    lwz r0, 0x170(r4)
    oris r0, r0, 0x8000
    stw r0, 0x170(r4)
lbl_8012F984:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012F99C
asm void fn_8012F99C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r4
    li r27, 0x0
    li r31, 0x0
    lis r3, lbl_803A44F0@ha
    addi r30, r3, lbl_803A44F0@l
lbl_8012F9C4:
    add r3, r30, r31
    lwz r28, 0x8(r3)
    b lbl_8012F9FC
lbl_8012F9D0:
    lwz r28, 0x8(r28)
    stw r29, lbl_8049D6E8
    addi r3, r29, 0xc
    mr r4, r26
    li r5, 0x0
    bl fn_8012F3A8
    cmpwi r3, 0x0
    bne lbl_8012F9FC
    mr r3, r29
    li r4, 0x1
    bl fn_8012F678
lbl_8012F9FC:
    lwz r29, 0x0(r28)
    cmplwi r29, 0x1
    bne lbl_8012F9D0
    addi r27, r27, 0x1
    addi r31, r31, 0xc
    cmpwi r27, 0x5
    blt lbl_8012F9C4
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8012FA30
asm void fn_8012FA30(s32 arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r4
    cmplwi r4, 0x8000
    bne lbl_8012FA70
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r26, 0x7b0(r3)
    cmpwi r26, 0x0
    bne lbl_8012FA74
    li r26, -0x1
    b lbl_8012FA74
    b lbl_8012FA74
lbl_8012FA70:
    li r26, -0x1
lbl_8012FA74:
    li r25, 0x0
    li r27, 0x0
    li r31, 0x0
    lis r3, lbl_803A44F0@ha
    addi r30, r3, lbl_803A44F0@l
lbl_8012FA88:
    add r3, r30, r31
    lwz r28, 0x8(r3)
    b lbl_8012FAE0
lbl_8012FA94:
    cmpwi r26, -0x1
    beq lbl_8012FAA4
    cmpw r25, r26
    bge lbl_8012FAFC
lbl_8012FAA4:
    lwz r28, 0x8(r28)
    stw r29, lbl_8049D6E8
    addi r3, r29, 0xc
    mr r4, r24
    li r5, 0x0
    bl fn_8012F3A8
    cmpwi r3, 0x0
    bne lbl_8012FAD4
    mr r3, r29
    li r4, 0x1
    bl fn_8012F678
    b lbl_8012FAE0
lbl_8012FAD4:
    cmpwi r3, -0x1
    bne lbl_8012FAE0
    addi r25, r25, 0x1
lbl_8012FAE0:
    lwz r29, 0x0(r28)
    cmplwi r29, 0x1
    bne lbl_8012FA94
    addi r27, r27, 0x1
    addi r31, r31, 0xc
    cmpwi r27, 0x5
    blt lbl_8012FA88
lbl_8012FAFC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_8012FB14(s32 arg0) {
    return (s32) (arg0 + 0x34);
}

// asm_to_cpp: fn_8012FB1C
asm s32 fn_8012FB1C(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_8012FB80
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8012FB5C
    li r0, 0xf0
    stw r0, 0x0(r3)
    lwz r31, lbl_8049D6E8
    li r3, 0x0
    bl fn_8012FA30
    stw r31, lbl_8049D6E8
    b lbl_8012FB78
lbl_8012FB5C:
    rlwinm r0, r4, 0, 23, 28
    cmpwi r0, 0x0
    bne lbl_8012FB78
    lwz r31, lbl_8049D6E8
    li r3, 0x0
    bl fn_8012FA30
    stw r31, lbl_8049D6E8
lbl_8012FB78:
    li r3, 0x0
    b lbl_8012FBD0
lbl_8012FB80:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8012FBA0
    cmpwi r0, 0x1
    beq lbl_8012FBAC
    cmpwi r0, 0xf0
    beq lbl_8012FBC4
    b lbl_8012FBCC
lbl_8012FBA0:
    li r0, 0x1
    stw r0, 0x0(r3)
    b lbl_8012FBCC
lbl_8012FBAC:
    li r3, 0x0
    li r4, 0x0
    bl fn_8012F99C
    li r0, 0x0
    stw r0, lbl_8049D6E8
    b lbl_8012FBCC
lbl_8012FBC4:
    li r0, 0x1
    stw r0, 0x0(r3)
lbl_8012FBCC:
    li r3, 0x0
lbl_8012FBD0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012FBE4
asm s32 fn_8012FBE4(s32 *arg0, u32 arg1) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_8012FBF4
    li r3, 0x0
    blr
lbl_8012FBF4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8012FC08
    cmpwi r0, 0x20
    bne lbl_8012FC20
lbl_8012FC08:
    cmpwi r4, 0x0
    beq lbl_8012FC18
    cmplwi r4, 0x20
    bne lbl_8012FC30
lbl_8012FC18:
    li r3, 0x1
    blr
lbl_8012FC20:
    cmplw r4, r0
    bne lbl_8012FC30
    li r3, 0x1
    blr
lbl_8012FC30:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8012FC38
asm s32 fn_8012FC38(void) {
    nofralloc
    li r3, 0x0
    lis r4, lbl_803A4830@ha
    addi r6, r4, lbl_803A4830@l
    mr r5, r3
    li r4, -0x1
    li r0, 0x80
    mtctr r0
lbl_8012FC54:
    add r7, r6, r3
    stw r5, 0x4(r7)
    sth r4, 0x0(r7)
    addi r3, r3, 0x8
    bdnz lbl_8012FC54
    li r3, 0x1
    blr
}

void fn_8012FC70(void) {
    s32 var_r31;

    fn_80130410();
    var_r31 = (s32) (0);
    do {
        fn_8012FD5C((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 0x80);
}

// asm_to_cpp: fn_8012FCB0
asm s32 fn_8012FCB0(s16 arg0, s32 arg1) {
    nofralloc
    li r8, 0x0
    li r5, 0x0
    lis r6, lbl_803A4830@ha
    addi r7, r6, lbl_803A4830@l
    li r0, 0x80
    mtctr r0
lbl_8012FCC8:
    add r6, r7, r5
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_8012FCE4
    addi r8, r8, 0x1
    addi r5, r5, 0x8
    bdnz lbl_8012FCC8
lbl_8012FCE4:
    cmpwi r8, 0x80
    bne lbl_8012FCF4
    li r3, 0x0
    blr
lbl_8012FCF4:
    slwi r7, r8, 3
    lis r5, lbl_803A4830@ha
    addi r6, r5, lbl_803A4830@l
    add r5, r6, r7
    stw r4, 0x4(r5)
    extsh r0, r3
    sthx r0, r6, r7
    mr r3, r8
    blr
}

// asm_to_cpp: fn_8012FD18
asm void fn_8012FD18(s32 arg0) {
    nofralloc
    li r4, 0x0
    lis r5, lbl_803A4830@ha
    addi r5, r5, lbl_803A4830@l
    li r0, 0x80
    mtctr r0
lbl_8012FD2C:
    add r6, r5, r4
    lha r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_8012FD50
    li r0, 0x0
    stw r0, 0x4(r6)
    li r0, -0x1
    sth r0, 0x0(r6)
    blr
lbl_8012FD50:
    addi r4, r4, 0x8
    bdnz lbl_8012FD2C
    blr
}

// asm_to_cpp: fn_8012FD5C
asm void fn_8012FD5C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    slwi r30, r3, 3
    lis r3, lbl_803A4830@ha
    addi r31, r3, lbl_803A4830@l
    add r3, r31, r30
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_8012FDA4
    bl fn_80181D3C
    li r0, 0x0
    add r3, r31, r30
    stw r0, 0x4(r3)
    li r0, -0x1
    sthx r0, r31, r30
lbl_8012FDA4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012FDBC
asm s32 fn_8012FDBC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r7, 0x0
    li r4, 0x0
    lis r5, lbl_803A4830@ha
    addi r5, r5, lbl_803A4830@l
    li r0, 0x80
    mtctr r0
lbl_8012FDE0:
    add r6, r5, r4
    lha r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_8012FE0C
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_8012FE0C
    mr r3, r7
    bl fn_8012FD5C
    li r3, 0x1
    b lbl_8012FE1C
lbl_8012FE0C:
    addi r7, r7, 0x1
    addi r4, r4, 0x8
    bdnz lbl_8012FDE0
    li r3, 0x0
lbl_8012FE1C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8012FE2C
asm void fn_8012FE2C() {
    nofralloc
    li r4, 0x0
    lis r5, lbl_803A4830@ha
    addi r5, r5, lbl_803A4830@l
    li r0, 0x80
    mtctr r0
lbl_8012FE40:
    add r6, r5, r4
    lha r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_8012FE64
    lwz r6, 0x4(r6)
    cmpwi r6, 0x0
    beq lbl_8012FE64
    lwz r3, 0x30(r6)
    b fn_80186808
lbl_8012FE64:
    addi r4, r4, 0x8
    bdnz lbl_8012FE40
    blr
}

// asm_to_cpp: fn_8012FE70
asm void fn_8012FE70() {
    nofralloc
    extrwi r7, r3, 12, 12
    clrlwi r4, r3, 24
    li r6, 0x0
    li r3, 0x0
    lis r5, lbl_803A4830@ha
    addi r5, r5, lbl_803A4830@l
    li r0, 0x80
    mtctr r0
lbl_8012FE90:
    lhax r0, r5, r3
    cmpw r7, r0
    beq lbl_8012FEA8
    addi r6, r6, 0x1
    addi r3, r3, 0x8
    bdnz lbl_8012FE90
lbl_8012FEA8:
    cmpwi r6, 0x80
    bne lbl_8012FEB8
    li r3, 0x0
    blr
lbl_8012FEB8:
    lis r3, lbl_803A4830@ha
    addi r3, r3, lbl_803A4830@l
    slwi r0, r6, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    b fn_8012FED4
    blr
}

// asm_to_cpp: fn_8012FED4
asm s8 * fn_8012FED4(s8 *arg0, s32 arg1) {
    nofralloc
    li r6, 0x1
    cmpwi r4, 0x0
    beqlr
    lwz r5, 0x18(r3)
    b lbl_8012FF00
lbl_8012FEE8:
    cmpwi r4, 0x0
    bltlr
    cmpw r6, r4
    beqlr
    addi r6, r6, 0x1
    lwz r5, 0x8(r5)
lbl_8012FF00:
    lwz r3, 0x0(r5)
    cmplwi r3, 0x1
    bne lbl_8012FEE8
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8012FF14
asm void fn_8012FF14(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_29
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801300E8
    bl fn_80181B2C
    lwz r0, 0x114(r31)
    stw r0, 0x3c(r1)
    addi r3, r1, 0x3c
    bl fn_80034064
    lwz r0, 0x114(r31)
    stw r0, 0x38(r1)
    addi r3, r1, 0x38
    bl fn_80033F08
    li r29, 0x0
    li r30, 0x0
    b lbl_8012FFAC
lbl_8012FF64:
    cmpwi r29, 0x0
    bne lbl_8012FF8C
    lwz r3, 0x118(r31)
    lwzx r0, r3, r30
    stw r0, 0x30(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x34(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    bl fn_8002A17C
lbl_8012FF8C:
    lwz r3, 0x118(r31)
    lwzx r0, r3, r30
    stw r0, 0x2c(r1)
    addi r3, r1, 0x2c
    lfs f1, lbl_804A0A88
    bl fn_8002A57C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_8012FFAC:
    lwz r3, 0x30(r31)
    lwz r0, 0x60(r3)
    cmpw r29, r0
    blt lbl_8012FF64
    li r29, 0x0
    li r30, 0x0
    b lbl_80130010
lbl_8012FFC8:
    cmpwi r29, 0x0
    bne lbl_8012FFF0
    lwz r3, 0x11c(r31)
    lwzx r0, r3, r30
    stw r0, 0x24(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x28(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0x24
    bl fn_8002A17C
lbl_8012FFF0:
    lwz r3, 0x11c(r31)
    lwzx r0, r3, r30
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    lfs f1, lbl_804A0A88
    bl fn_8002A57C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_80130010:
    lwz r3, 0x30(r31)
    lwz r0, 0x64(r3)
    cmpw r29, r0
    blt lbl_8012FFC8
    li r29, 0x0
    li r30, 0x0
    b lbl_80130074
lbl_8013002C:
    cmpwi r29, 0x0
    bne lbl_80130054
    lwz r3, 0x120(r31)
    lwzx r0, r3, r30
    stw r0, 0x18(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    bl fn_8002A17C
lbl_80130054:
    lwz r3, 0x120(r31)
    lwzx r0, r3, r30
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    lfs f1, lbl_804A0A88
    bl fn_8002A57C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_80130074:
    lwz r3, 0x30(r31)
    lwz r0, 0x68(r3)
    cmpw r29, r0
    blt lbl_8013002C
    li r29, 0x0
    li r30, 0x0
    b lbl_801300D8
lbl_80130090:
    cmpwi r29, 0x0
    bne lbl_801300B8
    lwz r3, 0x124(r31)
    lwzx r0, r3, r30
    stw r0, 0xc(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_8002A17C
lbl_801300B8:
    lwz r3, 0x124(r31)
    lwzx r0, r3, r30
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    lfs f1, lbl_804A0A88
    bl fn_8002A57C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_801300D8:
    lwz r3, 0x30(r31)
    lwz r0, 0x6c(r3)
    cmpw r29, r0
    blt lbl_80130090
lbl_801300E8:
    addi r11, r1, 0x50
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

} // extern "C"
