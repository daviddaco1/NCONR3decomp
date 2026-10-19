#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/lyt/unk_802F96E0.cpp
// Total functions: 48

// Global data symbols (@ha/@l)
extern u8 __dt__Q36nw4hbm2ut5ColorFv[];
extern u8 lbl_80341E88[];
extern u8 lbl_80341E90[];
extern u8 lbl_80341EA0[];
extern u8 lbl_80341EA8[];
extern u8 lbl_80341EB0[];
extern u8 lbl_80341EB8[];
extern u8 lbl_80341EBC[];
extern u8 lbl_8037CA28[];
extern u8 lbl_8037CA40[];
extern u8 lbl_8037CA44[];
extern u8 lbl_8037CAF0[];
extern u8 lbl_8037CB2C[];
extern u8 lbl_8037CBD8[];
extern u8 lbl_8037DBE8[];
extern u8 lbl_80462438[];
extern u8 lbl_80462440[];
extern u8 lbl_80462450[];
extern u8 lbl_80462458[];

// Forward declarations
extern void AnimateSelf__Q36nw4hbm3lyt4PaneFUl();
extern void Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc();
extern void EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc();
extern void FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform();
extern void Free__Q46nw4hbm3lyt6detail11TexCoordAryFv();
extern void IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc();
extern void Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc();
extern void SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb();
extern void SetResource__Q34nw4r2ut7ResFontFPv();
extern void SetVertexFormat__Q36nw4hbm3lyt6detailFbUc();
extern void UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform();
extern void __DSPHandler();
extern void __construct_array();
extern void __ct__Q34nw4r2ut7ResFontFv();
extern void __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv();
extern void __destroy_arr();
extern void __dt__Q36nw4hbm3lyt4PaneFv();
extern void __ptmf_scall();
extern void _restgpr_14();
extern void _restgpr_16();
extern void _restgpr_18();
extern void _restgpr_22();
extern void _restgpr_23();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_16();
extern void _savegpr_18();
extern void _savegpr_22();
extern void _savegpr_23();
extern void _savegpr_26();
extern void _savegpr_27();
extern void dtor_80136CFC();
extern void fn_802F32EC();
extern void fn_802F3984();
extern void fn_802F511C();
extern void fn_802F5128();
extern void fn_802F8124();
extern void fn_802F8234();
extern void fn_802F9090();
extern void fn_802F96E0();
extern void fn_802F9720();
extern void fn_802F9730();
extern void fn_802F9738();
extern void fn_802F97EC();
extern void fn_802F9AA0();
extern void fn_802F9C30();
extern void fn_802F9C64();
extern void fn_802F9CAC();
extern void fn_802F9CD8();
extern void fn_802F9CF0();
extern void fn_802F9D08();
extern void fn_802FA69C();
extern void fn_802FA6D4();
extern void fn_802FA750();
extern void fn_802FA79C();
extern void fn_802FA804();
extern void fn_802FA8CC();
extern void fn_802FA90C();
extern void fn_802FAC44();
extern void fn_802FADAC();
extern void fn_802FADB8();
extern void fn_802FADCC();
extern void fn_802FAFDC();
extern void fn_802FB120();
extern void fn_802FB21C();
extern void fn_802FB2C0();
extern void fn_802FB354();
extern void fn_802FB380();
extern void fn_802FB3AC();
extern void fn_802FB3C4();
extern void fn_802FB3DC();
extern void fn_802FB51C();
extern void fn_802FB5AC();
extern void fn_802FB63C();
extern void fn_802FB750();
extern void fn_802FBD2C();
extern void fn_802FC3F4();
extern void fn_802FD124();
extern void fn_802FD224();
extern void fn_802FD24C();
extern void fn_802FD25C();
extern void fn_802FD268();
extern void fn_802FD27C();
extern void fn_802FD2F0();
extern void fn_802FD350();
extern void fn_802FD500();
extern void fn_802FD8F0();
extern void fn_802FD8F8();
extern void fn_802FD900();
extern void fn_802FE378();
extern void fn_802FE3BC();
extern void fn_802FE66C();
extern void fn_802FE7EC();
extern void fn_802FE7FC();
extern void fn_802FE9F8();
extern void fn_802FEA00();
extern void fn_802FEB44();
extern void fn_802FEB50();
extern void fn_802FEB80();
extern void fn_803005AC();
extern void fn_80300608();
extern void fn_80300660();
extern void fn_803006EC();
extern void fn_803006F4();
extern void fn_803006FC();
extern void fn_8030070C();
extern void fn_80300714();
extern void fn_8030071C();
extern void fn_80300938();
extern void fn_8030CAF0();
extern void fn_8030CB00();
extern void memcpy();
extern void memset();
extern void wcscpy();

// ----------------------------------------------------------------------------
// fn_802F96E0
// ----------------------------------------------------------------------------
asm void fn_802F96E0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802F9708
    cmpwi r4, 0x0
    ble lbl_802F9708
    bl dtor_80136CFC
lbl_802F9708:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9720
// ----------------------------------------------------------------------------
asm void fn_802F9720() {
    nofralloc
    lis r4, lbl_8037CA28@ha
    addi r4, r4, lbl_8037CA28@l
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9730
// ----------------------------------------------------------------------------
asm void fn_802F9730() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9738
// ----------------------------------------------------------------------------
asm void fn_802F9738() {
    nofralloc
    lha r5, 0x0(r4)
    stwu r1, -0x10(r1)
    cmpwi r5, 0x0
    bge lbl_802F9750
    li r0, 0x0
    b lbl_802F9760
lbl_802F9750:
    cmpwi r5, 0xff
    li r0, 0xff
    bgt lbl_802F9760
    mr r0, r5
lbl_802F9760:
    lha r5, 0x2(r4)
    stb r0, 0x8(r1)
    cmpwi r5, 0x0
    bge lbl_802F9778
    li r0, 0x0
    b lbl_802F9788
lbl_802F9778:
    cmpwi r5, 0xff
    li r0, 0xff
    bgt lbl_802F9788
    mr r0, r5
lbl_802F9788:
    lha r5, 0x4(r4)
    stb r0, 0x9(r1)
    cmpwi r5, 0x0
    bge lbl_802F97A0
    li r0, 0x0
    b lbl_802F97B0
lbl_802F97A0:
    cmpwi r5, 0xff
    li r0, 0xff
    bgt lbl_802F97B0
    mr r0, r5
lbl_802F97B0:
    lha r4, 0x6(r4)
    stb r0, 0xa(r1)
    cmpwi r4, 0x0
    bge lbl_802F97C8
    li r0, 0x0
    b lbl_802F97D8
lbl_802F97C8:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_802F97D8
    mr r0, r4
lbl_802F97D8:
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802F97EC
// ----------------------------------------------------------------------------
asm void fn_802F97EC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_802F8234
    lis r3, lbl_8037CA44@ha
    lis r4, fn_802F511C@ha
    addi r3, r3, lbl_8037CA44@l
    lis r5, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r3, 0x0(r28)
    addi r3, r28, 0xd8
    addi r4, r4, fn_802F511C@l
    addi r5, r5, __dt__Q36nw4hbm2ut5ColorFv@l
    li r6, 0x4
    li r7, 0x2
    bl __construct_array
    lhz r0, 0x4c(r29)
    lis r3, lbl_80341E88@ha
    lfs f0, lbl_80341E88@l(r3)
    extrwi. r31, r0, 16, 15
    stfs f0, 0xe4(r28)
    stfs f0, 0xe8(r28)
    beq lbl_802F9860
    subi r0, r31, 0x1
    clrlwi r31, r0, 16
lbl_802F9860:
    lis r3, 0x5555
    lbz r0, 0xfc(r28)
    addi r8, r3, 0x5556
    li r9, 0x0
    mulhw r5, r8, r0
    lis r3, lbl_80341E88@ha
    lfs f0, lbl_80341E88@l(r3)
    li r4, 0x0
    stw r9, 0xd4(r28)
    addi r3, r28, 0xfd
    srwi r0, r5, 31
    sth r9, 0xf8(r28)
    add r0, r5, r0
    li r5, 0x1
    clrlwi r6, r0, 24
    sth r9, 0xfa(r28)
    clrlslwi r0, r0, 24, 2
    subf r6, r6, r0
    stw r9, 0xe0(r28)
    addi r0, r6, 0x1
    clrlwi r7, r0, 24
    stfs f0, 0x8(r1)
    mulhw r6, r8, r7
    stfs f0, 0xc(r1)
    stfs f0, 0xe4(r28)
    srwi r0, r6, 31
    stfs f0, 0xe8(r28)
    add r0, r6, r0
    mulli r0, r0, 0x3
    stfs f0, 0xec(r28)
    stfs f0, 0xf0(r28)
    subf r0, r0, r7
    clrlwi r6, r0, 24
    stw r9, 0xf4(r28)
    addi r0, r6, 0x3
    stb r0, 0xfc(r28)
    bl memset
    cmpwi r31, 0x0
    beq lbl_802F9914
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r31
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
lbl_802F9914:
    lhz r4, 0x4e(r29)
    cmplwi r4, 0x2
    blt lbl_802F9958
    lwz r0, 0xd4(r28)
    cmpwi r0, 0x0
    beq lbl_802F9958
    lwz r12, 0x0(r28)
    extrwi r4, r4, 15, 16
    subi r0, r4, 0x1
    lwz r4, 0x58(r29)
    lwz r12, 0x70(r12)
    mr r3, r28
    clrlwi r6, r0, 16
    li r5, 0x0
    add r4, r29, r4
    mtctr r12
    bctrl
lbl_802F9958:
    lwz r6, 0x5c(r29)
    lwz r5, 0x60(r29)
    lfs f3, 0x64(r29)
    lfs f2, 0x68(r29)
    lbz r4, 0x54(r29)
    lfs f1, 0x6c(r29)
    lfs f0, 0x70(r29)
    lhz r0, 0x52(r29)
    lwz r3, 0x4(r30)
    stw r6, 0xd8(r28)
    slwi r0, r0, 3
    addi r6, r3, 0xc
    lwz r3, 0xc(r30)
    stw r5, 0xdc(r28)
    stfs f3, 0xe4(r28)
    stfs f2, 0xe8(r28)
    stb r4, 0xfc(r28)
    stfs f1, 0xf0(r28)
    stfs f0, 0xec(r28)
    lwz r12, 0x0(r3)
    lwzx r0, r6, r0
    lwz r12, 0x10(r12)
    add r31, r6, r0
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802F99D0
    stw r3, 0xe0(r28)
    b lbl_802F9A44
lbl_802F99D0:
    lwz r3, 0xc(r30)
    lis r4, 0x666f
    mr r5, r31
    li r6, 0x0
    lwz r12, 0x0(r3)
    addi r4, r4, 0x6e74
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_802F9A44
    lis r3, lbl_80462438@ha
    li r4, 0x18
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F9A44
    mr r31, r3
    beq lbl_802F9A28
    bl __ct__Q34nw4r2ut7ResFontFv
    mr r31, r3
lbl_802F9A28:
    mr r3, r31
    mr r4, r27
    bl SetResource__Q34nw4r2ut7ResFontFPv
    lbz r0, 0xfd(r28)
    stw r31, 0xe0(r28)
    ori r0, r0, 0x80
    stb r0, 0xfd(r28)
lbl_802F9A44:
    lis r3, lbl_80462438@ha
    li r4, 0x5c
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F9A84
    lhz r0, 0x50(r29)
    lwz r5, 0x8(r30)
    slwi r0, r0, 2
    add r4, r5, r0
    lwz r0, 0xc(r4)
    add r4, r5, r0
    beq lbl_802F9A80
    mr r5, r30
    bl fn_802F5128
lbl_802F9A80:
    stw r3, 0x28(r28)
lbl_802F9A84:
    addi r11, r1, 0x30
    mr r3, r28
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9AA0
// ----------------------------------------------------------------------------
asm void fn_802F9AA0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_802F9C14
    lbz r0, 0xfd(r3)
    lis r4, lbl_8037CA44@ha
    addi r4, r4, lbl_8037CA44@l
    extrwi. r0, r0, 1, 24
    stw r4, 0x0(r3)
    beq lbl_802F9B10
    lwz r3, 0xe0(r3)
    li r4, -0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80462438@ha
    lwz r4, 0xe0(r30)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    lbz r0, 0xfd(r30)
    rlwinm r0, r0, 0, 25, 23
    stb r0, 0xfd(r30)
lbl_802F9B10:
    li r0, 0x0
    stw r0, 0xe0(r30)
    b lbl_802F9B70
    bctrl
    xoris r0, r3, 0x8000
    lwz r3, 0xe0(r30)
    lis r4, 0x4330
    stw r0, 0x1c(r1)
    lwz r12, 0x0(r3)
    stw r4, 0x18(r1)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r4, 0x20(r1)
    lfd f1, 0x1e90(r3)
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    stfs f2, 0xc(r1)
    fsubs f0, f0, f1
    stfs f2, 0xe8(r30)
    stfs f0, 0x8(r1)
    stfs f0, 0xe4(r30)
    b lbl_802F9B88
lbl_802F9B70:
    lis r3, lbl_80341E88@ha
    lfs f0, lbl_80341E88@l(r3)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0xe4(r30)
    stfs f0, 0xe8(r30)
lbl_802F9B88:
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_802F9BCC
    lbz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_802F9BCC
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80462438@ha
    lwz r4, 0x28(r30)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x28(r30)
lbl_802F9BCC:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    addi r3, r30, 0xd8
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    li r5, 0x4
    li r6, 0x2
    bl __destroy_arr
    mr r3, r30
    li r4, 0x0
    bl __dt__Q36nw4hbm3lyt4PaneFv
    cmpwi r31, 0x0
    ble lbl_802F9C14
    mr r3, r30
    bl dtor_80136CFC
lbl_802F9C14:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9C30
// ----------------------------------------------------------------------------
asm void fn_802F9C30() {
    nofralloc
    srwi r5, r5, 1
    b lbl_802F9C38
lbl_802F9C38:
    slwi r0, r5, 2
    add r7, r4, r0
    lbz r6, 0xd8(r7)
    lbz r5, 0xd9(r7)
    lbz r4, 0xda(r7)
    lbz r0, 0xdb(r7)
    stb r6, 0x0(r3)
    stb r5, 0x1(r3)
    stb r4, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9C64
// ----------------------------------------------------------------------------
asm void fn_802F9C64() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lbz r8, 0x0(r5)
    srwi r4, r4, 1
    stw r0, 0x14(r1)
    lbz r7, 0x1(r5)
    lbz r6, 0x2(r5)
    lbz r0, 0x3(r5)
    addi r5, r1, 0x8
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r6, 0xa(r1)
    stb r0, 0xb(r1)
    bl fn_802F9CAC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9CAC
// ----------------------------------------------------------------------------
asm void fn_802F9CAC() {
    nofralloc
    slwi r0, r4, 2
    lbz r6, 0x0(r5)
    add r4, r3, r0
    lbz r0, 0x1(r5)
    stb r6, 0xd8(r4)
    lbz r3, 0x2(r5)
    stb r0, 0xd9(r4)
    lbz r0, 0x3(r5)
    stb r3, 0xda(r4)
    stb r0, 0xdb(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9CD8
// ----------------------------------------------------------------------------
asm void fn_802F9CD8() {
    nofralloc
    rlwinm r5, r4, 31, 1, 29
    clrlwi r0, r4, 30
    add r3, r3, r5
    add r3, r3, r0
    lbz r3, 0xd8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9CF0
// ----------------------------------------------------------------------------
asm void fn_802F9CF0() {
    nofralloc
    rlwinm r6, r4, 31, 1, 29
    clrlwi r0, r4, 30
    add r3, r3, r6
    add r3, r3, r0
    stb r5, 0xd8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802F9D08
// ----------------------------------------------------------------------------
asm void fn_802F9D08() {
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    opword 0xF3E101F8
    stfd f30, 0x1e0(r1)
    opword 0xF3C101E8
    stfd f29, 0x1d0(r1)
    opword 0xF3A101D8
    stfd f28, 0x1c0(r1)
    opword 0xF38101C8
    addi r11, r1, 0x1c0
    bl _savegpr_14
    lwz r0, 0xd4(r3)
    lis r14, lbl_80341E88@ha
    mr r29, r3
    cmpwi r0, 0x0
    addi r14, r14, lbl_80341E88@l
    beq lbl_802FA238
    lwz r0, 0xe0(r3)
    cmpwi r0, 0x0
    beq lbl_802FA238
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_802F9D70
    b lbl_802FA238
lbl_802F9D70:
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xc8
    bl fn_803005AC
    lwz r4, 0xe0(r29)
    addi r3, r1, 0xc8
    bl fn_802FD8F0
    lfs f1, 0xe4(r29)
    addi r3, r1, 0xc8
    lfs f2, 0xe8(r29)
    bl fn_802FE7FC
    lfs f1, 0xec(r29)
    addi r3, r1, 0xc8
    bl fn_803006EC
    lfs f1, 0xf0(r29)
    addi r3, r1, 0xc8
    bl fn_803006F4
    lbz r0, 0xd8(r29)
    addi r3, r1, 0x30
    addi r4, r1, 0x20
    stb r0, 0x20(r1)
    lbz r0, 0xd9(r29)
    stb r0, 0x21(r1)
    lbz r0, 0xda(r29)
    stb r0, 0x22(r1)
    lbz r0, 0xdb(r29)
    stb r0, 0x23(r1)
    lbz r5, 0xce(r29)
    bl fn_802F32EC
    lbz r0, 0xdc(r29)
    addi r3, r1, 0x2c
    addi r4, r1, 0x1c
    stb r0, 0x1c(r1)
    lbz r0, 0xdd(r29)
    stb r0, 0x1d(r1)
    lbz r0, 0xde(r29)
    stb r0, 0x1e(r1)
    lbz r0, 0xdf(r29)
    stb r0, 0x1f(r1)
    lbz r5, 0xce(r29)
    bl fn_802F32EC
    lwz r5, 0x30(r1)
    addi r3, r1, 0xc8
    lwz r0, 0x2c(r1)
    li r4, 0x0
    cmplw r5, r0
    beq lbl_802F9E38
    li r4, 0x2
lbl_802F9E38:
    bl fn_802FE3BC
    lwz r5, 0x30(r1)
    addi r3, r1, 0xc8
    lwz r0, 0x2c(r1)
    addi r4, r1, 0x18
    stw r5, 0x18(r1)
    addi r5, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_802FE66C
    lwz r6, 0x28(r29)
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    lhz r5, 0x24(r6)
    lhz r0, 0x26(r6)
    sth r5, 0x40(r1)
    sth r0, 0x42(r1)
    lhz r5, 0x28(r6)
    lhz r0, 0x2a(r6)
    sth r5, 0x44(r1)
    sth r0, 0x46(r1)
    bl fn_802F9738
    lwz r6, 0x28(r29)
    addi r3, r1, 0x24
    addi r4, r1, 0x38
    lhz r5, 0x2c(r6)
    lhz r0, 0x2e(r6)
    sth r5, 0x38(r1)
    sth r0, 0x3a(r1)
    lhz r5, 0x30(r6)
    lhz r0, 0x32(r6)
    sth r5, 0x3c(r1)
    sth r0, 0x3e(r1)
    bl fn_802F9738
    lwz r5, 0x28(r1)
    addi r3, r1, 0xc8
    lwz r0, 0x24(r1)
    addi r4, r1, 0x10
    stw r5, 0x10(r1)
    addi r5, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_802FE378
    lwz r4, 0xf4(r29)
    cmpwi r4, 0x0
    beq lbl_802F9EF0
    addi r3, r1, 0xc8
    bl fn_8030070C
lbl_802F9EF0:
    addi r3, r1, 0xc8
    bl fn_802FD900
    mr r4, r29
    addi r3, r1, 0x58
    addi r5, r1, 0xc8
    bl fn_802FA90C
    lis r3, 0x5555
    lbz r4, 0xfc(r29)
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_802F9F50
    bge lbl_802F9F3C
    b lbl_802F9F48
lbl_802F9F3C:
    cmpwi r0, 0x3
    bge lbl_802F9F48
    b lbl_802F9F58
lbl_802F9F48:
    lfs f28, 0x0(r14)
    b lbl_802F9F5C
lbl_802F9F50:
    lfs f28, 0x10(r14)
    b lbl_802F9F5C
lbl_802F9F58:
    lfs f28, 0x14(r14)
lbl_802F9F5C:
    lfs f1, 0x60(r1)
    addi r3, r1, 0xc8
    lfs f0, 0x58(r1)
    lwz r31, 0xd4(r29)
    fsubs f29, f1, f0
    lfs f1, 0x58(r1)
    lfs f2, 0x5c(r1)
    bl fn_802FEB44
    lhz r30, 0xfa(r29)
    cmpwi r30, 0x0
    ble lbl_802FA22C
    lfs f31, 0x0(r14)
    b lbl_802FA224
lbl_802F9F90:
    lbz r15, 0xe6(r1)
    fmr f1, f31
    lfs f30, 0x4c(r29)
    fmr f2, f31
    lbz r0, 0xe4(r1)
    addi r3, r1, 0x68
    stw r15, 0x168(r1)
    lbz r15, 0xe7(r1)
    stb r0, 0x84(r1)
    lwz r0, 0x168(r1)
    stw r15, 0x128(r1)
    lwz r15, 0xe8(r1)
    stb r0, 0x86(r1)
    lwz r0, 0x128(r1)
    stw r15, 0x12c(r1)
    lwz r15, 0xec(r1)
    stb r0, 0x87(r1)
    lwz r0, 0x12c(r1)
    stw r15, 0x130(r1)
    lwz r15, 0xf0(r1)
    stw r0, 0x88(r1)
    lwz r0, 0x130(r1)
    stw r15, 0x134(r1)
    lwz r15, 0xf4(r1)
    stw r0, 0x8c(r1)
    lwz r0, 0x134(r1)
    stw r15, 0x138(r1)
    lwz r15, 0xf8(r1)
    stw r0, 0x90(r1)
    lwz r0, 0x138(r1)
    stw r15, 0x13c(r1)
    lwz r15, 0xfc(r1)
    stw r0, 0x94(r1)
    lwz r0, 0x13c(r1)
    stw r15, 0x140(r1)
    lwz r15, 0x100(r1)
    stw r0, 0x98(r1)
    lwz r0, 0x140(r1)
    stw r15, 0x144(r1)
    lwz r15, 0x104(r1)
    stw r0, 0x9c(r1)
    lwz r0, 0x144(r1)
    stw r15, 0x148(r1)
    lhz r15, 0x108(r1)
    stw r0, 0xa0(r1)
    lwz r0, 0x148(r1)
    stw r15, 0x14c(r1)
    lbz r15, 0x10a(r1)
    stw r0, 0xa4(r1)
    lwz r0, 0x14c(r1)
    stw r15, 0x150(r1)
    lbz r15, 0x10b(r1)
    sth r0, 0xa8(r1)
    lwz r0, 0x150(r1)
    stw r15, 0x154(r1)
    lwz r15, 0x110(r1)
    stb r0, 0xaa(r1)
    lwz r0, 0x154(r1)
    stw r15, 0x158(r1)
    lwz r15, 0x11c(r1)
    stb r0, 0xab(r1)
    lwz r0, 0x158(r1)
    stw r15, 0x15c(r1)
    lwz r15, 0x120(r1)
    stw r0, 0xb0(r1)
    lwz r0, 0x15c(r1)
    stw r15, 0x160(r1)
    lwz r15, 0x124(r1)
    stw r0, 0xbc(r1)
    lwz r0, 0x160(r1)
    lwz r16, 0xc8(r1)
    lwz r17, 0xcc(r1)
    lbz r18, 0xd0(r1)
    lbz r19, 0xd1(r1)
    lbz r20, 0xd2(r1)
    lbz r21, 0xd3(r1)
    lbz r22, 0xd4(r1)
    lbz r23, 0xd5(r1)
    lbz r24, 0xd6(r1)
    lbz r25, 0xd7(r1)
    lbz r26, 0xd8(r1)
    lbz r27, 0xd9(r1)
    lbz r28, 0xda(r1)
    lbz r12, 0xdb(r1)
    lbz r11, 0xdc(r1)
    lbz r10, 0xdd(r1)
    lbz r9, 0xde(r1)
    lbz r8, 0xdf(r1)
    lbz r7, 0xe0(r1)
    lbz r6, 0xe1(r1)
    lbz r5, 0xe2(r1)
    lbz r4, 0xe3(r1)
    lbz r14, 0xe5(r1)
    lfs f4, 0x10c(r1)
    lfs f3, 0x114(r1)
    lfs f0, 0x118(r1)
    stw r0, 0xc0(r1)
    mr r0, r15
    stw r15, 0x164(r1)
    stfs f31, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f31, 0x50(r1)
    stfs f31, 0x54(r1)
    stw r16, 0x68(r1)
    stw r17, 0x6c(r1)
    stb r18, 0x70(r1)
    stb r19, 0x71(r1)
    stb r20, 0x72(r1)
    stb r21, 0x73(r1)
    stb r22, 0x74(r1)
    stb r23, 0x75(r1)
    stb r24, 0x76(r1)
    stb r25, 0x77(r1)
    stb r26, 0x78(r1)
    stb r27, 0x79(r1)
    stb r28, 0x7a(r1)
    stb r12, 0x7b(r1)
    stb r11, 0x7c(r1)
    stb r10, 0x7d(r1)
    stb r9, 0x7e(r1)
    stb r8, 0x7f(r1)
    stb r7, 0x80(r1)
    stb r6, 0x81(r1)
    stb r5, 0x82(r1)
    stb r4, 0x83(r1)
    stb r14, 0x85(r1)
    stfs f4, 0xac(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stw r0, 0xc4(r1)
    bl fn_802FEB44
    fmr f1, f30
    mr r5, r31
    mr r6, r30
    addi r3, r1, 0x48
    addi r4, r1, 0x68
    addi r7, r1, 0x8
    bl __DSPHandler
    lfs f1, 0x50(r1)
    mr r14, r3
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, -0x1
    fsubs f30, f1, f0
    bl fn_80300608
    fsubs f1, f29, f30
    lfs f0, 0x58(r1)
    addi r3, r1, 0xc8
    fmuls f1, f28, f1
    fadds f1, f0, f1
    bl fn_802FEB50
    mr r4, r31
    mr r5, r14
    addi r3, r1, 0xc8
    bl fn_8030071C
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_802FA218
    lis r4, lbl_8037CA40@ha
    addi r3, r1, 0xc8
    addi r4, r4, lbl_8037CA40@l
    bl fn_80300938
lbl_802FA218:
    slwi r0, r14, 1
    subf r30, r14, r30
    add r31, r31, r0
lbl_802FA224:
    cmpwi r30, 0x0
    bgt lbl_802F9F90
lbl_802FA22C:
    addi r3, r1, 0xc8
    li r4, -0x1
    bl fn_80300608
lbl_802FA238:
    opword 0xE3E101F8
    lfd f31, 0x1f0(r1)
    opword 0xE3C101E8
    lfd f30, 0x1e0(r1)
    opword 0xE3A101D8
    lfd f29, 0x1d0(r1)
    opword 0xE38101C8
    addi r11, r1, 0x1c0
    lfd f28, 0x1c0(r1)
    bl _restgpr_14
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

// ----------------------------------------------------------------------------
// __DSPHandler
// ----------------------------------------------------------------------------
asm void __DSPHandler() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    stfd f30, 0xb0(r1)
    opword 0xF3C100B8
    stfd f29, 0xa0(r1)
    opword 0xF3A100A8
    stfd f28, 0x90(r1)
    opword 0xF3810098
    stfd f27, 0x80(r1)
    opword 0xF3610088
    addi r11, r1, 0x80
    bl _savegpr_23
    li r0, 0x0
    fmr f30, f1
    mr r25, r4
    stw r0, 0x40(r1)
    mr r24, r3
    mr r26, r5
    stw r0, 0x44(r1)
    mr r27, r6
    mr r28, r7
    stw r0, 0x48(r1)
    mr r3, r25
    stw r4, 0x38(r1)
    stw r5, 0x3c(r1)
    bl fn_802FD8F8
    lis r23, lbl_80341E88@ha
    mr r4, r3
    lfs f31, lbl_80341E88@l(r23)
    addi r3, r1, 0x28
    li r31, 0x0
    bl fn_802FA69C
    fmr f0, f31
    lwz r30, 0x28(r1)
    mr r3, r25
    stfs f0, 0x0(r24)
    stfs f0, 0x8(r24)
    bl fn_80300660
    fmr f0, f31
    fcmpo cr0, f0, f1
    ble lbl_802FA324
    b lbl_802FA328
lbl_802FA324:
    fmr f1, f0
lbl_802FA328:
    stfs f1, 0x4(r24)
    mr r3, r25
    bl fn_80300660
    lis r3, lbl_80341E88@ha
    lfs f0, lbl_80341E88@l(r3)
    fcmpo cr0, f0, f1
    bge lbl_802FA348
    b lbl_802FA34C
lbl_802FA348:
    fmr f1, f0
lbl_802FA34C:
    stfs f1, 0xc(r24)
    li r0, 0x0
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    stb r0, 0x0(r28)
    stw r26, 0x28(r1)
    lfs f3, 0x0(r24)
    lfs f2, 0x4(r24)
    lfs f1, 0x8(r24)
    lfs f0, 0xc(r24)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl __ptmf_scall
    nop
    lis r5, lbl_80341E88@ha
    lis r4, lbl_80341E90@ha
    lfs f27, lbl_80341E88@l(r5)
    mr r29, r3
    lfd f29, lbl_80341E90@l(r4)
    lis r23, 0x4330
    b lbl_802FA5E4
lbl_802FA3A8:
    clrlwi r0, r29, 16
    cmpwi r0, 0x20
    bge lbl_802FA4E8
    cntlzw r0, r31
    fmr f1, f31
    srwi r0, r0, 5
    stfs f31, 0x8(r1)
    mr r3, r25
    stfs f27, 0xc(r1)
    stfs f27, 0x10(r1)
    stfs f27, 0x14(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x48(r1)
    bl fn_802FEB50
    mr r3, r25
    bl fn_80300714
    lwz r12, 0x0(r3)
    addi r4, r1, 0x8
    clrlwi r5, r29, 16
    addi r6, r1, 0x38
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x3c(r1)
    mr r29, r3
    lfs f1, 0x8(r1)
    stw r0, 0x28(r1)
    lfs f0, 0x0(r24)
    fcmpo cr0, f0, f1
    ble lbl_802FA424
    b lbl_802FA428
lbl_802FA424:
    fmr f1, f0
lbl_802FA428:
    stfs f1, 0x0(r24)
    lfs f0, 0x4(r24)
    lfs f1, 0xc(r1)
    fcmpo cr0, f0, f1
    ble lbl_802FA440
    b lbl_802FA444
lbl_802FA440:
    fmr f1, f0
lbl_802FA444:
    stfs f1, 0x4(r24)
    lfs f0, 0x8(r24)
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_802FA45C
    b lbl_802FA460
lbl_802FA45C:
    fmr f1, f0
lbl_802FA460:
    stfs f1, 0x8(r24)
    lfs f0, 0xc(r24)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    bge lbl_802FA478
    b lbl_802FA47C
lbl_802FA478:
    fmr f1, f0
lbl_802FA47C:
    stfs f1, 0xc(r24)
    mr r3, r25
    bl fn_802FEB80
    lfs f2, 0x8(r24)
    fmr f31, f1
    lfs f0, 0x0(r24)
    fsubs f0, f2, f0
    fcmpo cr0, f0, f30
    ble lbl_802FA4AC
    li r0, 0x1
    stb r0, 0x0(r28)
    b lbl_802FA600
lbl_802FA4AC:
    cmpwi r29, 0x4
    bne lbl_802FA4BC
    mr r3, r27
    b lbl_802FA65C
lbl_802FA4BC:
    cmpwi r29, 0x1
    bne lbl_802FA4CC
    li r31, 0x0
    b lbl_802FA5AC
lbl_802FA4CC:
    cmpwi r29, 0x2
    bne lbl_802FA4DC
    li r31, 0x1
    b lbl_802FA5AC
lbl_802FA4DC:
    cmpwi r29, 0x3
    beq lbl_802FA600
    b lbl_802FA5AC
lbl_802FA4E8:
    cmpwi r31, 0x0
    beq lbl_802FA4FC
    mr r3, r25
    bl fn_803006FC
    fadds f31, f31, f1
lbl_802FA4FC:
    mr r3, r25
    li r31, 0x1
    bl fn_802FE9F8
    cmpwi r3, 0x0
    beq lbl_802FA520
    mr r3, r25
    bl fn_802FEA00
    fadds f31, f31, f1
    b lbl_802FA564
lbl_802FA520:
    mr r3, r25
    bl fn_802FE7EC
    fmr f28, f1
    mr r3, r25
    bl fn_802FD8F8
    lwz r12, 0x0(r3)
    clrlwi r4, r29, 16
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r23, 0x50(r1)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f29
    fmuls f0, f0, f28
    fadds f31, f31, f0
lbl_802FA564:
    lfs f0, 0x0(r24)
    fcmpo cr0, f0, f31
    ble lbl_802FA574
    fmr f0, f31
lbl_802FA574:
    lfs f2, 0x8(r24)
    stfs f0, 0x0(r24)
    fcmpo cr0, f2, f31
    bge lbl_802FA588
    fmr f2, f31
lbl_802FA588:
    frsp f1, f2
    lfs f0, 0x0(r24)
    stfs f2, 0x8(r24)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f30
    ble lbl_802FA5AC
    li r0, 0x1
    stb r0, 0x0(r28)
    b lbl_802FA600
lbl_802FA5AC:
    lwz r30, 0x28(r1)
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    bl __ptmf_scall
    nop
    lfs f3, 0x0(r24)
    mr r29, r3
    lfs f2, 0x4(r24)
    lfs f1, 0x8(r24)
    lfs f0, 0xc(r24)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
lbl_802FA5E4:
    lwz r4, 0x28(r1)
    subf r3, r26, r4
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r27
    ble lbl_802FA3A8
lbl_802FA600:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_802FA648
    cmpwi r30, 0x0
    beq lbl_802FA648
    subf r3, r26, r30
    lfs f3, 0x18(r1)
    lfs f2, 0x1c(r1)
    srwi r0, r3, 31
    lfs f1, 0x20(r1)
    add r0, r0, r3
    lfs f0, 0x24(r1)
    srawi r3, r0, 1
    stfs f3, 0x0(r24)
    stfs f2, 0x4(r24)
    stfs f1, 0x8(r24)
    stfs f0, 0xc(r24)
    b lbl_802FA65C
lbl_802FA648:
    lwz r0, 0x28(r1)
    subf r3, r26, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
lbl_802FA65C:
    opword 0xE3E100C8
    lfd f31, 0xc0(r1)
    opword 0xE3C100B8
    lfd f30, 0xb0(r1)
    opword 0xE3A100A8
    lfd f29, 0xa0(r1)
    opword 0xE3810098
    lfd f28, 0x90(r1)
    opword 0xE3610088
    addi r11, r1, 0x80
    lfd f27, 0x80(r1)
    bl _restgpr_23
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// ----------------------------------------------------------------------------
// fn_802FA69C
// ----------------------------------------------------------------------------
asm void fn_802FA69C() {
    nofralloc
    stwu r1, -0x20(r1)
    li r0, 0x0
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    lwz r4, 0xc(r4)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x0(r3)
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    stw r4, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FA6D4
// ----------------------------------------------------------------------------
asm void fn_802FA6D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802FA738
    addi r4, r4, 0x1
    lhz r0, 0xf8(r3)
    clrlslwi r31, r4, 17, 1
    cmplw r31, r0
    ble lbl_802FA738
    lwz r12, 0x0(r3)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80462438@ha
    mr r4, r31
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    stw r3, 0xd4(r30)
    beq lbl_802FA738
    sth r31, 0xf8(r30)
lbl_802FA738:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802FA750
// ----------------------------------------------------------------------------
asm void fn_802FA750() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_802FA788
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0xd4(r31)
    sth r0, 0xf8(r31)
lbl_802FA788:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802FA79C
// ----------------------------------------------------------------------------
asm void fn_802FA79C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    bl wcscpy
    lwz r12, 0x0(r29)
    clrlwi r6, r3, 16
    mr r3, r29
    mr r4, r30
    lwz r12, 0x70(r12)
    mr r5, r31
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FA804
// ----------------------------------------------------------------------------
asm void fn_802FA804() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    lwz r8, 0xd4(r3)
    cmpwi r8, 0x0
    bne lbl_802FA838
    li r3, 0x0
    b lbl_802FA8B0
lbl_802FA838:
    lhz r3, 0xf8(r3)
    cntlzw r0, r3
    srwi r3, r3, 1
    extrwi r7, r0, 1, 26
    subi r0, r3, 0x1
    neg r3, r7
    clrlwi r0, r0, 16
    andc r0, r0, r3
    clrlwi r0, r0, 16
    cmplw r5, r0
    blt lbl_802FA86C
    li r3, 0x0
    b lbl_802FA8B0
lbl_802FA86C:
    subf r0, r5, r0
    mr r30, r6
    clrlwi r0, r0, 16
    cmplw r6, r0
    ble lbl_802FA884
    mr r30, r0
lbl_802FA884:
    clrlslwi r0, r5, 16, 1
    clrlslwi r5, r30, 16, 1
    add r3, r8, r0
    bl memcpy
    add r0, r29, r30
    lwz r4, 0xd4(r31)
    sth r0, 0xfa(r31)
    clrlslwi r0, r0, 16, 1
    li r5, 0x0
    clrlwi r3, r30, 16
    sthx r5, r4, r0
lbl_802FA8B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FA8CC
// ----------------------------------------------------------------------------
asm void fn_802FA8CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802FA8F4
    cmpwi r4, 0x0
    ble lbl_802FA8F4
    bl dtor_80136CFC
lbl_802FA8F4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802FA90C
// ----------------------------------------------------------------------------
asm void fn_802FA90C() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    lis r31, lbl_80341E88@ha
    addi r31, r31, lbl_80341E88@l
    stw r30, 0x88(r1)
    mr r30, r5
    lfs f1, 0x0(r31)
    stw r29, 0x84(r1)
    mr r29, r4
    fmr f2, f1
    stw r28, 0x80(r1)
    mr r28, r3
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    mr r3, r30
    bl fn_802FEB44
    lbz r0, 0x0(r30)
    lfs f1, 0x4c(r29)
    stb r0, 0x18(r1)
    lhz r6, 0xfa(r29)
    lbz r0, 0x1(r30)
    lwz r5, 0xd4(r29)
    stb r0, 0x19(r1)
    lbz r0, 0x2(r30)
    stb r0, 0x1a(r1)
    lbz r0, 0x3(r30)
    stb r0, 0x1b(r1)
    lbz r0, 0x4(r30)
    stb r0, 0x1c(r1)
    lbz r0, 0x5(r30)
    stb r0, 0x1d(r1)
    lbz r0, 0x6(r30)
    stb r0, 0x1e(r1)
    lbz r0, 0x7(r30)
    stb r0, 0x1f(r1)
    lbz r0, 0x8(r30)
    stb r0, 0x20(r1)
    lbz r0, 0x9(r30)
    stb r0, 0x21(r1)
    lbz r0, 0xa(r30)
    stb r0, 0x22(r1)
    lbz r0, 0xb(r30)
    stb r0, 0x23(r1)
    lbz r0, 0xc(r30)
    stb r0, 0x24(r1)
    lbz r0, 0xd(r30)
    stb r0, 0x25(r1)
    lbz r0, 0xe(r30)
    stb r0, 0x26(r1)
    lbz r0, 0xf(r30)
    stb r0, 0x27(r1)
    lbz r0, 0x10(r30)
    stb r0, 0x28(r1)
    lbz r0, 0x11(r30)
    stb r0, 0x29(r1)
    lbz r0, 0x12(r30)
    stb r0, 0x2a(r1)
    lbz r0, 0x13(r30)
    stb r0, 0x2b(r1)
    lbz r0, 0x14(r30)
    stb r0, 0x2c(r1)
    lbz r0, 0x15(r30)
    stb r0, 0x2d(r1)
    lbz r0, 0x16(r30)
    stb r0, 0x2e(r1)
    lbz r0, 0x17(r30)
    stb r0, 0x2f(r1)
    lbz r0, 0x18(r30)
    stb r0, 0x30(r1)
    lbz r0, 0x19(r30)
    stb r0, 0x31(r1)
    lbz r0, 0x1a(r30)
    stb r0, 0x32(r1)
    lbz r0, 0x1b(r30)
    stb r0, 0x33(r1)
    lbz r0, 0x1c(r30)
    stb r0, 0x34(r1)
    lbz r0, 0x1d(r30)
    stb r0, 0x35(r1)
    lbz r0, 0x1e(r30)
    stb r0, 0x36(r1)
    lbz r0, 0x1f(r30)
    stb r0, 0x37(r1)
    lwz r0, 0x20(r30)
    stw r0, 0x38(r1)
    lwz r3, 0x24(r30)
    lwz r0, 0x28(r30)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    lwz r3, 0x2c(r30)
    lwz r0, 0x30(r30)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    lwz r0, 0x34(r30)
    stw r0, 0x4c(r1)
    lwz r3, 0x38(r30)
    lwz r0, 0x3c(r30)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lbz r0, 0x40(r30)
    stb r0, 0x58(r1)
    lbz r0, 0x41(r30)
    stb r0, 0x59(r1)
    lbz r0, 0x42(r30)
    stb r0, 0x5a(r1)
    lbz r0, 0x43(r30)
    stb r0, 0x5b(r1)
    lfs f0, 0x44(r30)
    stfs f0, 0x5c(r1)
    lwz r0, 0x48(r30)
    stw r0, 0x60(r1)
    lfs f0, 0x4c(r30)
    stfs f0, 0x64(r1)
    lfs f0, 0x50(r30)
    stfs f0, 0x68(r1)
    lwz r0, 0x54(r30)
    mr r3, r28
    addi r4, r1, 0x18
    stw r0, 0x6c(r1)
    lwz r0, 0x58(r30)
    stw r0, 0x70(r1)
    lwz r0, 0x5c(r30)
    stw r0, 0x74(r1)
    bl fn_802FAC44
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_80300608
    mr r3, r29
    bl fn_802F9090
    lis r5, 0x5555
    lbz r6, 0xfc(r29)
    addi r0, r5, 0x5556
    stw r4, 0xc(r1)
    mulhw r5, r0, r6
    stw r3, 0x8(r1)
    stw r3, 0x10(r1)
    srwi r0, r5, 31
    stw r4, 0x14(r1)
    add r0, r5, r0
    mulli r0, r0, 0x3
    subf r0, r0, r6
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_802FAB78
    bge lbl_802FAB64
    b lbl_802FAB70
lbl_802FAB64:
    cmpwi r0, 0x3
    bge lbl_802FAB70
    b lbl_802FAB80
lbl_802FAB70:
    lfs f6, 0x0(r31)
    b lbl_802FAB84
lbl_802FAB78:
    lfs f6, 0x10(r31)
    b lbl_802FAB84
lbl_802FAB80:
    lfs f6, 0x14(r31)
lbl_802FAB84:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r6
    srwi r0, r3, 31
    add r0, r3, r0
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_802FABC0
    bge lbl_802FABAC
    b lbl_802FABB8
lbl_802FABAC:
    cmpwi r0, 0x3
    bge lbl_802FABB8
    b lbl_802FABC8
lbl_802FABB8:
    lfs f7, 0x0(r31)
    b lbl_802FABCC
lbl_802FABC0:
    lfs f7, 0x10(r31)
    b lbl_802FABCC
lbl_802FABC8:
    lfs f7, 0x14(r31)
lbl_802FABCC:
    lfs f3, 0xc(r28)
    lfs f2, 0x4(r28)
    lfs f1, 0x8(r28)
    lfs f0, 0x0(r28)
    fsubs f4, f3, f2
    lfs f2, 0x50(r29)
    fsubs f5, f1, f0
    lfs f1, 0x4c(r29)
    fsubs f3, f2, f4
    lfs f2, 0x14(r1)
    lfs f0, 0x10(r1)
    fsubs f1, f1, f5
    fmuls f3, f3, f7
    fmuls f1, f1, f6
    fadds f3, f2, f3
    fadds f2, f0, f1
    fadds f0, f3, f4
    stfs f3, 0x4(r28)
    fadds f1, f2, f5
    stfs f2, 0x0(r28)
    stfs f0, 0xc(r28)
    stfs f1, 0x8(r28)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_802FAC44
// ----------------------------------------------------------------------------
asm void fn_802FAC44() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_26
    lis r30, lbl_80341E88@ha
    fmr f30, f1
    lfs f1, lbl_80341E88@l(r30)
    mr r27, r4
    mr r26, r3
    mr r28, r5
    fmr f2, f1
    stfs f1, 0x0(r3)
    mr r29, r6
    stfs f1, 0x8(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0xc(r3)
    mr r3, r27
    bl fn_802FEB44
    lfs f31, lbl_80341E88@l(r30)
    lis r31, lbl_8037CA40@ha
lbl_802FACA8:
    fmr f1, f30
    stfs f31, 0x10(r1)
    mr r4, r27
    mr r5, r28
    stfs f31, 0x14(r1)
    mr r6, r29
    stfs f31, 0x18(r1)
    addi r3, r1, 0x10
    addi r7, r1, 0x8
    stfs f31, 0x1c(r1)
    bl __DSPHandler
    lbz r0, 0x8(r1)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_802FAD00
    fmr f1, f30
    mr r4, r27
    addi r3, r1, 0x10
    addi r5, r31, lbl_8037CA40@l
    addi r7, r1, 0x8
    li r6, 0x1
    bl __DSPHandler
lbl_802FAD00:
    lfs f1, 0x10(r1)
    slwi r0, r30, 1
    lfs f0, 0x0(r26)
    add r28, r28, r0
    subf r29, r30, r29
    fcmpo cr0, f0, f1
    ble lbl_802FAD20
    b lbl_802FAD24
lbl_802FAD20:
    fmr f1, f0
lbl_802FAD24:
    stfs f1, 0x0(r26)
    lfs f0, 0x4(r26)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    ble lbl_802FAD3C
    b lbl_802FAD40
lbl_802FAD3C:
    fmr f1, f0
lbl_802FAD40:
    stfs f1, 0x4(r26)
    lfs f0, 0x8(r26)
    lfs f1, 0x18(r1)
    fcmpo cr0, f0, f1
    bge lbl_802FAD58
    b lbl_802FAD5C
lbl_802FAD58:
    fmr f1, f0
lbl_802FAD5C:
    stfs f1, 0x8(r26)
    lfs f0, 0xc(r26)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_802FAD74
    b lbl_802FAD78
lbl_802FAD74:
    fmr f1, f0
lbl_802FAD78:
    cmpwi r29, 0x0
    stfs f1, 0xc(r26)
    bgt lbl_802FACA8
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_802FADAC
// ----------------------------------------------------------------------------
asm void fn_802FADAC() {
    nofralloc
    lis r3, lbl_80462450@ha
    addi r3, r3, lbl_80462450@l
    blr
}

// ----------------------------------------------------------------------------
// fn_802FADB8
// ----------------------------------------------------------------------------
asm void fn_802FADB8() {
    nofralloc
    lis r4, lbl_80462440@ha
    lis r3, lbl_80462450@ha
    addi r4, r4, lbl_80462440@l
    stw r4, lbl_80462450@l(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FADCC
// ----------------------------------------------------------------------------
asm void fn_802FADCC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r23, r3
    mr r24, r4
    mr r25, r5
    bl fn_802F8234
    lis r3, lbl_8037CB2C@ha
    lis r4, fn_802F511C@ha
    addi r3, r3, lbl_8037CB2C@l
    lis r5, __dt__Q36nw4hbm2ut5ColorFv@ha
    addi r26, r23, 0xe4
    stw r3, 0x0(r23)
    mr r3, r26
    addi r4, r4, fn_802F511C@l
    addi r5, r5, __dt__Q36nw4hbm2ut5ColorFv@l
    li r6, 0x4
    li r7, 0x4
    bl __construct_array
    addi r3, r26, 0x10
    bl __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv
    lwz r0, 0x60(r24)
    lfs f3, 0x4c(r24)
    add r28, r24, r0
    lwzx r5, r24, r0
    lbz r7, 0x12(r28)
    lfs f2, 0x50(r24)
    lfs f1, 0x54(r24)
    cmpwi r7, 0x0
    lfs f0, 0x58(r24)
    lwz r4, 0x4(r28)
    lwz r3, 0x8(r28)
    lwz r0, 0xc(r28)
    lwz r6, 0x8(r25)
    stfs f3, 0xd4(r23)
    addi r27, r6, 0xc
    stfs f2, 0xd8(r23)
    stfs f1, 0xdc(r23)
    stfs f0, 0xe0(r23)
    stw r5, 0xe4(r23)
    stw r4, 0xe8(r23)
    stw r3, 0xec(r23)
    stw r0, 0xf0(r23)
    beq lbl_802FAEBC
    cmplwi r7, 0x8
    li r26, 0x8
    bgt lbl_802FAE94
    mr r26, r7
lbl_802FAE94:
    addi r3, r23, 0xf4
    clrlwi r4, r26, 24
    bl Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc
    lbz r0, 0xf4(r23)
    cmpwi r0, 0x0
    beq lbl_802FAEBC
    addi r3, r23, 0xf4
    addi r4, r28, 0x14
    clrlwi r5, r26, 24
    bl Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc
lbl_802FAEBC:
    lis r3, lbl_80462438@ha
    li r4, 0x5c
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802FAEF8
    lhz r0, 0x10(r28)
    lwz r4, 0x8(r25)
    slwi r0, r0, 2
    lwzx r0, r27, r0
    add r4, r4, r0
    beq lbl_802FAEF4
    mr r5, r25
    bl fn_802F5128
lbl_802FAEF4:
    stw r3, 0x28(r23)
lbl_802FAEF8:
    lbz r0, 0x5c(r24)
    li r30, 0x0
    stb r30, 0x100(r23)
    cmpwi r0, 0x0
    stw r30, 0xfc(r23)
    beq lbl_802FAFC0
    lis r31, lbl_80462438@ha
    clrlslwi r4, r0, 24, 3
    lwz r3, lbl_80462438@l(r31)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    stw r3, 0xfc(r23)
    beq lbl_802FAFC0
    lbz r3, 0x5c(r24)
    li r26, 0x0
    lwz r0, 0x64(r24)
    li r28, 0x0
    stb r3, 0x100(r23)
    add r29, r24, r0
    b lbl_802FAFB4
lbl_802FAF48:
    lwz r0, 0x0(r29)
    li r4, 0x5c
    lwz r3, 0xfc(r23)
    add r22, r24, r0
    lbz r0, 0x2(r22)
    stbx r0, r3, r28
    lwz r0, 0xfc(r23)
    add r3, r0, r28
    stw r30, 0x4(r3)
    lwz r3, lbl_80462438@l(r31)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802FAFA8
    lhz r0, 0x0(r22)
    lwz r4, 0x8(r25)
    slwi r0, r0, 2
    lwzx r0, r27, r0
    add r4, r4, r0
    beq lbl_802FAF9C
    mr r5, r25
    bl fn_802F5128
lbl_802FAF9C:
    lwz r0, 0xfc(r23)
    add r4, r0, r28
    stw r3, 0x4(r4)
lbl_802FAFA8:
    addi r29, r29, 0x4
    addi r28, r28, 0x8
    addi r26, r26, 0x1
lbl_802FAFB4:
    lbz r0, 0x100(r23)
    cmpw r26, r0
    blt lbl_802FAF48
lbl_802FAFC0:
    addi r11, r1, 0x30
    mr r3, r23
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802FAFDC
// ----------------------------------------------------------------------------
asm void fn_802FAFDC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_802FB104
    lwz r0, 0xfc(r3)
    lis r4, lbl_8037CB2C@ha
    addi r4, r4, lbl_8037CB2C@l
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    beq lbl_802FB080
    li r29, 0x0
    li r30, 0x0
    lis r31, lbl_80462438@ha
    b lbl_802FB064
lbl_802FB028:
    lwz r0, 0xfc(r27)
    li r4, -0x1
    add r3, r0, r30
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r0, 0xfc(r27)
    lwz r3, lbl_80462438@l(r31)
    add r4, r0, r30
    lwz r4, 0x4(r4)
    bl fn_8030CB00
    addi r30, r30, 0x8
    addi r29, r29, 0x1
lbl_802FB064:
    lbz r0, 0x100(r27)
    cmpw r29, r0
    blt lbl_802FB028
    lis r3, lbl_80462438@ha
    lwz r4, 0xfc(r27)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
lbl_802FB080:
    lwz r3, 0x28(r27)
    cmpwi r3, 0x0
    beq lbl_802FB0C4
    lbz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_802FB0C4
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80462438@ha
    lwz r4, 0x28(r27)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x28(r27)
lbl_802FB0C4:
    addi r3, r27, 0xf4
    bl Free__Q46nw4hbm3lyt6detail11TexCoordAryFv
    addic. r3, r27, 0xe4
    beq lbl_802FB0E8
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    li r5, 0x4
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    li r6, 0x4
    bl __destroy_arr
lbl_802FB0E8:
    mr r3, r27
    li r4, 0x0
    bl __dt__Q36nw4hbm3lyt4PaneFv
    cmpwi r28, 0x0
    ble lbl_802FB104
    mr r3, r27
    bl dtor_80136CFC
lbl_802FB104:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB120
// ----------------------------------------------------------------------------
asm void fn_802FB120() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x28(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r6, 0x0
    beq lbl_802FB164
    addi r3, r6, 0x4
    bl EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_802FB164
    lwz r3, 0x28(r27)
    b lbl_802FB204
lbl_802FB164:
    li r31, 0x0
    li r30, 0x0
    b lbl_802FB1AC
lbl_802FB170:
    lwz r0, 0xfc(r27)
    mr r4, r28
    add r3, r0, r30
    lwz r3, 0x4(r3)
    addi r3, r3, 0x4
    bl EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_802FB1A4
    lwz r3, 0xfc(r27)
    slwi r0, r31, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    b lbl_802FB204
lbl_802FB1A4:
    addi r30, r30, 0x8
    addi r31, r31, 0x1
lbl_802FB1AC:
    lbz r0, 0x100(r27)
    cmpw r31, r0
    blt lbl_802FB170
    cmpwi r29, 0x0
    beq lbl_802FB200
    lwz r31, 0x14(r27)
    addi r30, r27, 0x14
    b lbl_802FB1F8
lbl_802FB1CC:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r28
    li r5, 0x1
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802FB1F4
    b lbl_802FB204
lbl_802FB1F4:
    lwz r31, 0x0(r31)
lbl_802FB1F8:
    cmplw r31, r30
    bne lbl_802FB1CC
lbl_802FB200:
    li r3, 0x0
lbl_802FB204:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB21C
// ----------------------------------------------------------------------------
asm void fn_802FB21C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
    cmpwi r3, 0x0
    beq lbl_802FB250
    b lbl_802FB2A0
lbl_802FB250:
    li r30, 0x0
    li r31, 0x0
    b lbl_802FB290
lbl_802FB25C:
    lwz r0, 0xfc(r28)
    mr r4, r29
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802FB288
    b lbl_802FB2A0
lbl_802FB288:
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_802FB290:
    lbz r0, 0x100(r28)
    cmpw r30, r0
    blt lbl_802FB25C
    li r3, 0x0
lbl_802FB2A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB2C0
// ----------------------------------------------------------------------------
asm void fn_802FB2C0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    li r30, 0x0
    li r31, 0x0
    b lbl_802FB31C
lbl_802FB2F0:
    lwz r0, 0xfc(r26)
    mr r4, r27
    mr r5, r28
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_802FB31C:
    lbz r0, 0x100(r26)
    cmpw r30, r0
    blt lbl_802FB2F0
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB354
// ----------------------------------------------------------------------------
asm void fn_802FB354() {
    nofralloc
    slwi r0, r5, 2
    add r7, r4, r0
    lbz r6, 0xe4(r7)
    lbz r5, 0xe5(r7)
    lbz r4, 0xe6(r7)
    lbz r0, 0xe7(r7)
    stb r6, 0x0(r3)
    stb r5, 0x1(r3)
    stb r4, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB380
// ----------------------------------------------------------------------------
asm void fn_802FB380() {
    nofralloc
    slwi r0, r4, 2
    lbz r6, 0x0(r5)
    add r4, r3, r0
    lbz r0, 0x1(r5)
    stb r6, 0xe4(r4)
    lbz r3, 0x2(r5)
    stb r0, 0xe5(r4)
    lbz r0, 0x3(r5)
    stb r3, 0xe6(r4)
    stb r0, 0xe7(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB3AC
// ----------------------------------------------------------------------------
asm void fn_802FB3AC() {
    nofralloc
    clrrwi r5, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r5
    add r3, r3, r0
    lbz r3, 0xe4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB3C4
// ----------------------------------------------------------------------------
asm void fn_802FB3C4() {
    nofralloc
    clrrwi r6, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r6
    add r3, r3, r0
    stb r5, 0xe4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB3DC
// ----------------------------------------------------------------------------
asm void fn_802FB3DC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lbz r5, 0x100(r31)
    mr r4, r31
    lwz r6, 0xfc(r31)
    addi r3, r1, 0x18
    bl fn_802FD124
    lwz r6, 0x18(r1)
    mr r3, r31
    lwz r5, 0x1c(r1)
    lwz r4, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_802F9090
    stw r3, 0x10(r1)
    addi r5, r1, 0x28
    stw r4, 0x14(r1)
    lwz r12, 0x0(r31)
    stw r3, 0x8(r1)
    mr r3, r31
    lwz r12, 0x6c(r12)
    stw r4, 0xc(r1)
    addi r4, r1, 0x10
    lbz r6, 0xce(r31)
    mtctr r12
    bctrl
    lbz r0, 0x100(r31)
    cmpwi r0, 0x4
    beq lbl_802FB4BC
    bge lbl_802FB488
    cmpwi r0, 0x1
    beq lbl_802FB494
    b lbl_802FB508
lbl_802FB488:
    cmpwi r0, 0x8
    beq lbl_802FB4E4
    b lbl_802FB508
lbl_802FB494:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x10
    addi r6, r1, 0x28
    lwz r12, 0x70(r12)
    lwz r5, 0xfc(r31)
    lbz r7, 0xce(r31)
    mtctr r12
    bctrl
    b lbl_802FB508
lbl_802FB4BC:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x10
    addi r6, r1, 0x28
    lwz r12, 0x74(r12)
    lwz r5, 0xfc(r31)
    lbz r7, 0xce(r31)
    mtctr r12
    bctrl
    b lbl_802FB508
lbl_802FB4E4:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x10
    addi r6, r1, 0x28
    lwz r12, 0x78(r12)
    lwz r5, 0xfc(r31)
    lbz r7, 0xce(r31)
    mtctr r12
    bctrl
lbl_802FB508:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB51C
// ----------------------------------------------------------------------------
asm void fn_802FB51C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl AnimateSelf__Q36nw4hbm3lyt4PaneFUl
    lbz r0, 0xcf(r29)
    clrlwi. r0, r0, 31
    bne lbl_802FB554
    clrlwi. r0, r30, 31
    bne lbl_802FB590
lbl_802FB554:
    li r30, 0x0
    li r31, 0x0
    b lbl_802FB584
lbl_802FB560:
    lwz r0, 0xfc(r29)
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_802FB584:
    lbz r0, 0x100(r29)
    cmpw r30, r0
    blt lbl_802FB560
lbl_802FB590:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB5AC
// ----------------------------------------------------------------------------
asm void fn_802FB5AC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_802FB604
lbl_802FB5DC:
    lwz r0, 0xfc(r28)
    mr r4, r29
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_802FB604:
    lbz r0, 0x100(r28)
    cmpw r30, r0
    blt lbl_802FB5DC
    mr r3, r28
    mr r4, r29
    bl UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB63C
// ----------------------------------------------------------------------------
asm void fn_802FB63C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r30, r6
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r4, r30
    addi r3, r3, 0xe4
    bl IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
    mr r4, r3
    lwz r3, 0x28(r27)
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lbz r4, 0xf5(r27)
    mr r31, r3
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    cmpwi r31, 0x0
    beq lbl_802FB6A4
    addi r7, r27, 0xe4
    b lbl_802FB6A8
lbl_802FB6A4:
    li r7, 0x0
lbl_802FB6A8:
    lfs f1, 0x50(r27)
    mr r8, r30
    lfs f6, 0x8(r29)
    addi r3, r1, 0x10
    lfs f0, 0x4c(r27)
    addi r4, r1, 0x8
    lfs f4, 0x0(r29)
    fsubs f3, f1, f6
    lfs f2, 0xdc(r27)
    fsubs f1, f0, f4
    lfs f0, 0xd4(r27)
    fadds f5, f2, f3
    lfs f3, 0xc(r29)
    lwz r6, 0xf8(r27)
    fadds f2, f0, f1
    lfs f1, 0x4(r29)
    fsubs f5, f5, f3
    lfs f3, 0xe0(r27)
    fsubs f1, f2, f1
    lfs f0, 0xd8(r27)
    fadds f3, f3, f5
    lbz r5, 0xf5(r27)
    fadds f2, f0, f1
    lfs f1, 0x4(r28)
    stfs f3, 0xc(r1)
    lfs f0, 0x0(r28)
    fadds f3, f1, f6
    stfs f2, 0x8(r1)
    fadds f1, f0, f4
    lfs f2, 0xdc(r27)
    lfs f0, 0xd4(r27)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x14(r1)
    stfs f0, 0x10(r1)
    bl fn_802F3984
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802FB750
// ----------------------------------------------------------------------------
asm void fn_802FB750() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    addi r11, r1, 0xd0
    bl _savegpr_18
    lis r0, 0x4330
    mr r19, r3
    mr r22, r7
    stw r0, 0x88(r1)
    mr r20, r4
    mr r18, r5
    stw r0, 0x90(r1)
    mr r21, r6
    mr r4, r22
    li r3, 0x0
    bl IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
    mr r4, r3
    lwz r3, 0x4(r18)
    mr r5, r22
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r23, r3
    li r4, 0x1
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lwz r4, 0x4(r18)
    addi r3, r1, 0x50
    li r5, 0x0
    bl fn_802F8124
    lis r24, lbl_8037CAF0@ha
    li r0, -0x1
    addi r24, r24, lbl_8037CAF0@l
    lis r29, lbl_80341EB0@ha
    lbz r7, 0x9(r24)
    lis r25, lbl_80341EA8@ha
    lbz r8, 0x8(r24)
    lis r3, lbl_80341EA0@ha
    lbzx r10, r24, r7
    add r4, r24, r7
    add r6, r24, r8
    lfs f12, lbl_80341EA0@l(r3)
    stw r10, 0x94(r1)
    neg r3, r23
    lbzx r5, r24, r8
    slwi r9, r8, 2
    lbz r6, 0x2(r6)
    addi r11, r1, 0x38
    lfd f2, 0x90(r1)
    slwi r12, r7, 2
    subf r6, r5, r6
    lbz r4, 0x4(r4)
    xoris r6, r6, 0x8000
    lfd f3, lbl_80341EA8@l(r25)
    stw r6, 0x94(r1)
    subf r4, r10, r4
    xoris r4, r4, 0x8000
    lfs f11, 0x0(r20)
    lfd f0, 0x90(r1)
    addi r27, r1, 0x68
    lfd f1, lbl_80341EB0@l(r29)
    or r3, r3, r23
    stw r4, 0x94(r1)
    srawi r7, r3, 31
    fsubs f4, f0, f1
    lfs f10, 0x4(r20)
    lfd f0, 0x90(r1)
    addi r31, r1, 0x58
    stw r5, 0x8c(r1)
    fsubs f6, f2, f3
    fsubs f1, f0, f1
    lfd f0, 0x88(r1)
    lfs f13, 0x54(r1)
    addi r26, r1, 0x78
    stw r5, 0x8c(r1)
    fsubs f7, f0, f3
    lfd f0, 0x88(r1)
    addi r28, r1, 0x70
    lfs f31, 0x50(r1)
    addi r30, r1, 0x80
    stw r10, 0x8c(r1)
    fsubs f5, f0, f3
    lfs f9, 0x4(r21)
    mr r6, r27
    lfd f0, 0x88(r1)
    mr r8, r22
    stw r0, 0x58(r1)
    fsubs f2, f0, f3
    lfs f8, 0x8(r21)
    stw r0, 0x5c(r1)
    addi r3, r1, 0x48
    addi r4, r1, 0x40
    and r7, r31, r7
    stw r0, 0x60(r1)
    li r5, 0x1
    stw r0, 0x64(r1)
    stfs f12, 0x40(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    lfs f0, 0x4c(r19)
    stfs f31, 0x38(r1)
    fsubs f9, f0, f9
    stfs f13, 0x3c(r1)
    lfsx f3, r11, r9
    lfsx f0, r11, r12
    stfsx f7, r26, r9
    fmuls f3, f4, f3
    fmuls f0, f1, f0
    stfsx f7, r27, r9
    fdivs f1, f9, f3
    stfsx f6, r28, r12
    stfsx f6, r27, r12
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    fdivs f0, f8, f0
    fadds f1, f5, f1
    fadds f0, f2, f0
    stfsx f1, r28, r9
    stfsx f1, r30, r9
    stfsx f0, r26, r12
    stfsx f0, r30, r12
    bl fn_802F3984
    lbz r6, 0x13(r24)
    addi r8, r24, 0xa
    lbz r7, 0x12(r24)
    neg r0, r23
    add r4, r8, r6
    lfs f4, 0x54(r1)
    or r3, r0, r23
    lbz r0, 0x2(r4)
    add r5, r8, r7
    lfs f5, 0x50(r1)
    lbz r10, 0x2(r5)
    srawi r5, r3, 31
    lbzx r3, r8, r7
    slwi r11, r7, 2
    stw r0, 0x94(r1)
    slwi r12, r6, 2
    subf r3, r10, r3
    lfs f2, 0x0(r20)
    lfs f0, 0x4c(r19)
    xoris r3, r3, 0x8000
    lfd f1, 0x90(r1)
    and r7, r31, r5
    lfs f8, 0x4(r21)
    fadds f0, f2, f0
    stw r3, 0x94(r1)
    addi r9, r1, 0x28
    lbz r3, 0x6(r4)
    mr r6, r27
    fsubs f10, f0, f8
    lfs f9, 0x4(r20)
    subf r3, r0, r3
    xoris r18, r3, 0x8000
    lfd f0, 0x90(r1)
    lfd f3, lbl_80341EB0@l(r29)
    stfs f5, 0x28(r1)
    mr r8, r22
    lfd f6, lbl_80341EA8@l(r25)
    fsubs f2, f0, f3
    stfs f4, 0x2c(r1)
    addi r3, r1, 0x48
    fsubs f4, f1, f6
    lfs f7, 0xc(r21)
    stw r18, 0x94(r1)
    lfsx f1, r9, r11
    addi r4, r1, 0x40
    lfd f0, 0x90(r1)
    fmuls f2, f2, f1
    stw r10, 0x8c(r1)
    fsubs f1, f0, f3
    lfsx f0, r9, r12
    lfd f5, 0x88(r1)
    li r5, 0x1
    stfs f10, 0x48(r1)
    fdivs f2, f8, f2
    stw r10, 0x8c(r1)
    lfd f3, 0x88(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x40(r1)
    lfs f8, 0x50(r19)
    fsubs f7, f8, f7
    stw r0, 0x8c(r1)
    fmuls f0, f1, f0
    fsubs f5, f5, f6
    lfd f1, 0x88(r1)
    fsubs f3, f3, f6
    fdivs f0, f7, f0
    stfs f10, 0x30(r1)
    stfsx f5, r30, r11
    stfsx f5, r28, r11
    stfsx f4, r27, r12
    stfsx f4, r28, r12
    fadds f2, f3, f2
    stfs f9, 0x34(r1)
    fsubs f1, f1, f6
    stfs f7, 0x44(r1)
    stfsx f2, r27, r11
    fadds f0, f1, f0
    stfsx f2, r26, r11
    stfsx f0, r30, r12
    stfsx f0, r26, r12
    bl fn_802F3984
    lbz r6, 0x31(r24)
    addi r4, r24, 0x28
    lfs f1, 0x4(r20)
    neg r0, r23
    lfs f0, 0x50(r19)
    add r7, r4, r6
    lbz r8, 0x30(r24)
    or r3, r0, r23
    lbz r0, 0x6(r7)
    fadds f0, f1, f0
    add r4, r4, r8
    lfs f8, 0xc(r21)
    srawi r5, r3, 31
    stw r0, 0x94(r1)
    fsubs f9, f0, f8
    lbz r10, 0x6(r4)
    slwi r11, r8, 2
    lbz r3, 0x4(r4)
    slwi r12, r6, 2
    lfs f0, 0x0(r20)
    subf r4, r10, r3
    lbz r3, 0x2(r7)
    lfs f5, 0x0(r21)
    xoris r4, r4, 0x8000
    lfd f2, 0x90(r1)
    subf r3, r0, r3
    fadds f10, f0, f5
    lfs f11, 0x54(r1)
    stw r4, 0x94(r1)
    xoris r18, r3, 0x8000
    lfs f12, 0x50(r1)
    addi r9, r1, 0x18
    lfd f0, 0x90(r1)
    and r7, r31, r5
    lfd f1, lbl_80341EB0@l(r29)
    mr r6, r27
    lfd f6, lbl_80341EA8@l(r25)
    mr r8, r22
    stfs f10, 0x48(r1)
    fsubs f3, f0, f1
    fsubs f4, f2, f6
    addi r3, r1, 0x48
    stfs f9, 0x4c(r1)
    addi r4, r1, 0x40
    li r5, 0x1
    lfs f0, 0x4c(r19)
    stw r18, 0x94(r1)
    fsubs f7, f0, f5
    lfd f0, 0x90(r1)
    stfs f12, 0x18(r1)
    fsubs f1, f0, f1
    stfs f11, 0x1c(r1)
    stw r10, 0x8c(r1)
    lfsx f2, r9, r11
    lfd f0, 0x88(r1)
    fmuls f2, f3, f2
    stfs f10, 0x20(r1)
    fsubs f5, f0, f6
    lfsx f0, r9, r12
    stw r10, 0x8c(r1)
    fmuls f0, f1, f0
    lfd f3, 0x88(r1)
    fdivs f2, f7, f2
    stfsx f5, r28, r11
    stfsx f5, r30, r11
    stw r0, 0x8c(r1)
    stfsx f4, r26, r12
    lfd f1, 0x88(r1)
    fsubs f3, f3, f6
    stfsx f4, r30, r12
    fdivs f0, f8, f0
    stfs f9, 0x24(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    fadds f2, f3, f2
    fsubs f1, f1, f6
    stfsx f2, r26, r11
    fadds f0, f1, f0
    stfsx f2, r27, r11
    stfsx f0, r28, r12
    stfsx f0, r27, r12
    bl fn_802F3984
    lbz r6, 0x1d(r24)
    addi r8, r24, 0x14
    lfs f9, 0x0(r20)
    neg r0, r23
    lbz r7, 0x1c(r24)
    add r4, r8, r6
    or r3, r0, r23
    lbz r0, 0x4(r4)
    add r4, r8, r7
    lfs f4, 0x54(r1)
    lbz r9, 0x4(r4)
    srawi r5, r3, 31
    stw r0, 0x94(r1)
    slwi r10, r7, 2
    lbz r3, 0x6(r4)
    and r7, r31, r5
    lfd f2, 0x90(r1)
    addi r12, r1, 0x8
    subf r4, r9, r3
    lfs f1, 0x4(r20)
    lbzx r3, r8, r6
    xoris r4, r4, 0x8000
    stw r4, 0x94(r1)
    slwi r11, r6, 2
    lfs f7, 0x8(r21)
    subf r3, r0, r3
    lfs f6, 0x50(r1)
    xoris r3, r3, 0x8000
    fadds f8, f1, f7
    lfd f0, 0x90(r1)
    lfd f1, lbl_80341EB0@l(r29)
    mr r6, r27
    stfs f6, 0x8(r1)
    mr r8, r22
    stw r3, 0x94(r1)
    fsubs f3, f0, f1
    lfs f5, 0x0(r21)
    addi r3, r1, 0x48
    lfd f0, 0x90(r1)
    addi r4, r1, 0x40
    lfd f6, lbl_80341EA8@l(r25)
    stfs f4, 0xc(r1)
    fsubs f1, f0, f1
    fsubs f4, f2, f6
    li r5, 0x1
    lfsx f2, r12, r10
    lfsx f0, r12, r11
    fmuls f2, f3, f2
    stw r9, 0x8c(r1)
    fmuls f0, f1, f0
    lfd f3, 0x88(r1)
    stfs f9, 0x48(r1)
    fdivs f2, f5, f2
    stw r9, 0x8c(r1)
    lfd f1, 0x88(r1)
    stfs f8, 0x4c(r1)
    stfs f5, 0x40(r1)
    lfs f5, 0x50(r19)
    fsubs f7, f5, f7
    stw r0, 0x8c(r1)
    fsubs f5, f3, f6
    fsubs f3, f1, f6
    lfd f1, 0x88(r1)
    fdivs f0, f7, f0
    stfsx f5, r27, r10
    stfsx f5, r26, r10
    stfsx f4, r30, r11
    stfsx f4, r26, r11
    stfs f9, 0x10(r1)
    fadds f2, f3, f2
    stfs f8, 0x14(r1)
    fsubs f1, f1, f6
    stfs f7, 0x44(r1)
    stfsx f2, r30, r10
    fadds f0, f1, f0
    stfsx f2, r28, r10
    stfsx f0, r27, r11
    stfsx f0, r28, r11
    bl fn_802F3984
    opword 0xE3E100D8
    addi r11, r1, 0xd0
    lfd f31, 0xd0(r1)
    bl _restgpr_18
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_802FBD2C
// ----------------------------------------------------------------------------
asm void fn_802FBD2C() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_16
    lis r8, lbl_80341EA0@ha
    li r0, -0x1
    lfs f0, lbl_80341EA0@l(r8)
    lis r8, 0x4330
    mr r17, r3
    mr r21, r7
    stw r8, 0xa0(r1)
    mr r18, r4
    mr r19, r5
    mr r20, r6
    stw r8, 0xa8(r1)
    mr r4, r21
    li r3, 0x0
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    bl IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
    mr r23, r3
    lwz r3, 0x4(r19)
    mr r4, r23
    mr r5, r21
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x0(r18)
    mr r22, r3
    lfs f0, 0x4(r18)
    addi r3, r1, 0x58
    stfs f1, 0x68(r1)
    li r5, 0x0
    lfs f1, 0x4(r20)
    stfs f0, 0x6c(r1)
    lfs f0, 0x8(r20)
    lfs f2, 0x4c(r17)
    lbz r16, 0x0(r19)
    fsubs f1, f2, f1
    stfs f0, 0x64(r1)
    lwz r4, 0x4(r19)
    stfs f1, 0x60(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lis r24, lbl_8037CAF0@ha
    lis r25, lbl_80341EA8@ha
    lfs f3, 0x5c(r1)
    addi r24, r24, lbl_8037CAF0@l
    lfs f2, 0x58(r1)
    add r4, r24, r0
    lis r29, lbl_80341EB0@ha
    lbz r0, 0x9(r4)
    addi r5, r1, 0x38
    lbz r3, 0x8(r4)
    addi r26, r1, 0x90
    lbzx r6, r4, r0
    add r10, r4, r0
    lbzux r7, r4, r3
    slwi r9, r0, 2
    stw r6, 0xac(r1)
    slwi r8, r3, 2
    lbz r0, 0x2(r4)
    addi r27, r1, 0x80
    lfd f0, 0xa8(r1)
    addi r28, r1, 0x88
    subf r3, r7, r0
    lbz r0, 0x4(r10)
    xoris r3, r3, 0x8000
    lfd f8, lbl_80341EA8@l(r25)
    stw r3, 0xac(r1)
    subf r0, r6, r0
    fsubs f6, f0, f8
    lfd f5, lbl_80341EB0@l(r29)
    stw r7, 0xa4(r1)
    xoris r0, r0, 0x8000
    lfd f0, 0xa8(r1)
    addi r30, r1, 0x98
    lfd f1, 0xa0(r1)
    mr r3, r22
    stfs f2, 0x38(r1)
    fsubs f2, f0, f5
    fsubs f7, f1, f8
    li r4, 0x1
    stfs f3, 0x3c(r1)
    lfs f3, 0x60(r1)
    stw r0, 0xac(r1)
    lfsx f1, r5, r8
    lfd f0, 0xa8(r1)
    fmuls f4, f2, f1
    lfsx f1, r5, r9
    fsubs f2, f0, f5
    lfs f0, 0x64(r1)
    stfsx f7, r26, r8
    fdivs f3, f3, f4
    stw r7, 0xa4(r1)
    lfd f4, 0xa0(r1)
    stfsx f7, r27, r8
    stw r6, 0xa4(r1)
    stfsx f6, r28, r9
    fmuls f1, f2, f1
    lfd f2, 0xa0(r1)
    fsubs f4, f4, f8
    stfsx f6, r27, r9
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r28, r8
    stfsx f1, r30, r8
    stfsx f0, r26, r9
    stfsx f0, r30, r9
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    neg r0, r22
    addi r31, r1, 0x70
    or r0, r0, r22
    mr r6, r27
    srawi r0, r0, 31
    mr r8, r21
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    and r7, r31, r0
    li r5, 0x1
    bl fn_802F3984
    lwz r3, 0xc(r19)
    mr r4, r23
    mr r5, r21
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f2, 0x0(r18)
    mr r22, r3
    lfs f0, 0x4c(r17)
    addi r3, r1, 0x50
    lfs f3, 0x4(r18)
    li r5, 0x0
    fadds f2, f2, f0
    lfs f1, 0x4(r20)
    stfs f3, 0x6c(r1)
    lfs f0, 0xc(r20)
    fsubs f2, f2, f1
    stfs f1, 0x60(r1)
    lbz r16, 0x8(r19)
    stfs f3, 0x34(r1)
    lwz r4, 0xc(r19)
    stfs f2, 0x68(r1)
    lfs f1, 0x50(r17)
    stfs f2, 0x30(r1)
    fsubs f0, f1, f0
    stfs f0, 0x64(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0x54(r1)
    lfs f1, 0x50(r1)
    addi r8, r1, 0x28
    stfs f0, 0x2c(r1)
    mr r3, r22
    add r9, r24, r0
    lfd f8, lbl_80341EA8@l(r25)
    lbz r6, 0x9(r9)
    li r4, 0x1
    lbz r7, 0x8(r9)
    add r11, r9, r6
    lfd f5, lbl_80341EB0@l(r29)
    lbz r10, 0x2(r11)
    add r5, r9, r7
    lbz r0, 0x2(r5)
    slwi r5, r7, 2
    stw r10, 0xac(r1)
    slwi r6, r6, 2
    lbzx r7, r9, r7
    lfd f0, 0xa8(r1)
    subf r9, r0, r7
    lbz r7, 0x6(r11)
    xoris r9, r9, 0x8000
    stw r0, 0xa4(r1)
    subf r7, r10, r7
    fsubs f6, f0, f8
    lfd f2, 0xa0(r1)
    xoris r7, r7, 0x8000
    stw r9, 0xac(r1)
    fsubs f7, f2, f8
    lfs f3, 0x60(r1)
    lfd f0, 0xa8(r1)
    stfs f1, 0x28(r1)
    fsubs f2, f0, f5
    stw r7, 0xac(r1)
    lfsx f1, r8, r5
    lfd f0, 0xa8(r1)
    fmuls f4, f2, f1
    lfsx f1, r8, r6
    fsubs f2, f0, f5
    lfs f0, 0x64(r1)
    stfsx f7, r30, r5
    fdivs f3, f3, f4
    stw r0, 0xa4(r1)
    lfd f4, 0xa0(r1)
    stfsx f7, r28, r5
    stfsx f6, r27, r6
    stw r10, 0xa4(r1)
    fmuls f1, f2, f1
    lfd f2, 0xa0(r1)
    fsubs f4, f4, f8
    stfsx f6, r28, r6
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r27, r5
    stfsx f1, r26, r5
    stfsx f0, r30, r6
    stfsx f0, r26, r6
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    neg r0, r22
    mr r6, r27
    or r0, r0, r22
    mr r8, r21
    srawi r0, r0, 31
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    li r5, 0x1
    and r7, r31, r0
    bl fn_802F3984
    lwz r3, 0x1c(r19)
    mr r4, r23
    mr r5, r21
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x4(r18)
    mr r22, r3
    lfs f0, 0x50(r17)
    addi r3, r1, 0x48
    lfs f2, 0xc(r20)
    li r5, 0x0
    fadds f3, f1, f0
    lfs f0, 0x0(r18)
    lfs f1, 0x0(r20)
    lbz r16, 0x18(r19)
    fsubs f3, f3, f2
    lwz r4, 0x1c(r19)
    fadds f4, f0, f1
    stfs f3, 0x6c(r1)
    stfs f4, 0x68(r1)
    lfs f0, 0x4c(r17)
    stfs f4, 0x20(r1)
    fsubs f0, f0, f1
    stfs f3, 0x24(r1)
    stfs f0, 0x60(r1)
    stfs f2, 0x64(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0x4c(r1)
    lfs f1, 0x48(r1)
    addi r8, r1, 0x18
    stfs f0, 0x1c(r1)
    mr r3, r22
    add r7, r24, r0
    lfd f8, lbl_80341EA8@l(r25)
    lbz r6, 0x9(r7)
    li r4, 0x1
    lbz r5, 0x8(r7)
    add r11, r7, r6
    lfd f5, lbl_80341EB0@l(r29)
    add r7, r7, r5
    lbz r10, 0x6(r11)
    lbz r0, 0x6(r7)
    slwi r5, r5, 2
    stw r10, 0xac(r1)
    slwi r6, r6, 2
    lbz r7, 0x4(r7)
    lfd f0, 0xa8(r1)
    subf r9, r0, r7
    lbz r7, 0x2(r11)
    xoris r9, r9, 0x8000
    stw r0, 0xa4(r1)
    subf r7, r10, r7
    fsubs f6, f0, f8
    lfd f2, 0xa0(r1)
    xoris r7, r7, 0x8000
    stw r9, 0xac(r1)
    fsubs f7, f2, f8
    lfs f3, 0x60(r1)
    lfd f0, 0xa8(r1)
    stfs f1, 0x18(r1)
    fsubs f2, f0, f5
    stw r7, 0xac(r1)
    lfsx f1, r8, r5
    lfd f0, 0xa8(r1)
    fmuls f4, f2, f1
    lfsx f1, r8, r6
    fsubs f2, f0, f5
    lfs f0, 0x64(r1)
    stfsx f7, r28, r5
    fdivs f3, f3, f4
    stw r0, 0xa4(r1)
    lfd f4, 0xa0(r1)
    stfsx f7, r30, r5
    stfsx f6, r26, r6
    stw r10, 0xa4(r1)
    fmuls f1, f2, f1
    lfd f2, 0xa0(r1)
    fsubs f4, f4, f8
    stfsx f6, r30, r6
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r26, r5
    stfsx f1, r27, r5
    stfsx f0, r28, r6
    stfsx f0, r27, r6
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    neg r0, r22
    mr r6, r27
    or r0, r0, r22
    mr r8, r21
    srawi r0, r0, 31
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    li r5, 0x1
    and r7, r31, r0
    bl fn_802F3984
    lwz r3, 0x14(r19)
    mr r4, r23
    mr r5, r21
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, 0x4(r18)
    mr r22, r3
    lfs f1, 0x8(r20)
    addi r3, r1, 0x40
    lfs f3, 0x0(r18)
    li r5, 0x0
    fadds f2, f0, f1
    lfs f0, 0x0(r20)
    stfs f3, 0x68(r1)
    lbz r18, 0x10(r19)
    stfs f2, 0x6c(r1)
    lwz r4, 0x14(r19)
    stfs f0, 0x60(r1)
    lfs f0, 0x50(r17)
    stfs f3, 0x10(r1)
    fsubs f0, f0, f1
    stfs f2, 0x14(r1)
    stfs f0, 0x64(r1)
    bl fn_802F8124
    mulli r0, r18, 0xa
    lfs f0, 0x40(r1)
    lfs f1, 0x44(r1)
    addi r5, r1, 0x8
    stfs f0, 0x8(r1)
    mr r3, r22
    add r8, r24, r0
    lfd f8, lbl_80341EA8@l(r25)
    lbz r9, 0x9(r8)
    li r4, 0x1
    lbz r10, 0x8(r8)
    add r6, r8, r9
    lbzx r0, r8, r9
    lbz r7, 0x4(r6)
    add r6, r8, r10
    lbz r8, 0x4(r6)
    slwi r10, r10, 2
    stw r7, 0xac(r1)
    subf r0, r7, r0
    lbz r6, 0x6(r6)
    xoris r0, r0, 0x8000
    lfd f0, 0xa8(r1)
    slwi r9, r9, 2
    subf r6, r8, r6
    stfs f1, 0xc(r1)
    xoris r6, r6, 0x8000
    lfd f5, lbl_80341EB0@l(r29)
    stw r6, 0xac(r1)
    fsubs f6, f0, f8
    lfsx f1, r5, r10
    lfd f0, 0xa8(r1)
    stw r8, 0xa4(r1)
    fsubs f2, f0, f5
    lfs f3, 0x60(r1)
    stw r0, 0xac(r1)
    lfd f7, 0xa0(r1)
    fmuls f4, f2, f1
    lfd f0, 0xa8(r1)
    lfsx f1, r5, r9
    fsubs f7, f7, f8
    fsubs f2, f0, f5
    lfs f0, 0x64(r1)
    fdivs f3, f3, f4
    stw r8, 0xa4(r1)
    lfd f4, 0xa0(r1)
    stfsx f7, r27, r10
    stfsx f7, r26, r10
    stfsx f6, r30, r9
    fmuls f1, f2, f1
    stw r7, 0xa4(r1)
    fsubs f4, f4, f8
    lfd f2, 0xa0(r1)
    fdivs f0, f0, f1
    stfsx f6, r26, r9
    fadds f3, f4, f3
    fsubs f1, f2, f8
    stfsx f3, r30, r10
    fadds f0, f1, f0
    stfsx f3, r28, r10
    stfsx f0, r27, r9
    stfsx f0, r28, r9
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    neg r0, r22
    mr r6, r27
    or r0, r0, r22
    mr r8, r21
    srawi r0, r0, 31
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    li r5, 0x1
    and r7, r31, r0
    bl fn_802F3984
    addi r11, r1, 0xf0
    bl _restgpr_16
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// fn_802FC3F4
// ----------------------------------------------------------------------------
asm void fn_802FC3F4() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x190
    bl _savegpr_16
    lis r8, lbl_80341EA0@ha
    li r0, -0x1
    lfs f0, lbl_80341EA0@l(r8)
    lis r8, 0x4330
    mr r27, r3
    mr r31, r7
    stw r8, 0x138(r1)
    mr r28, r4
    mr r29, r5
    mr r30, r6
    stw r8, 0x140(r1)
    mr r4, r31
    li r3, 0x0
    stw r0, 0x108(r1)
    stw r0, 0x10c(r1)
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stfs f0, 0x100(r1)
    stfs f0, 0x104(r1)
    bl IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
    mr r18, r3
    lwz r3, 0x4(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x8(r30)
    mr r17, r3
    lfs f0, 0x0(r30)
    addi r3, r1, 0xf0
    stfs f1, 0xfc(r1)
    li r5, 0x0
    lbz r16, 0x0(r29)
    stfs f0, 0xf8(r1)
    lwz r4, 0x4(r29)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lis r19, lbl_8037CAF0@ha
    lis r20, lbl_80341EA8@ha
    lfs f3, 0xf4(r1)
    addi r19, r19, lbl_8037CAF0@l
    lfs f2, 0xf0(r1)
    add r4, r19, r0
    lis r24, lbl_80341EB0@ha
    lbz r0, 0x9(r4)
    addi r5, r1, 0x40
    lbz r3, 0x8(r4)
    addi r21, r1, 0x128
    lbzx r6, r4, r0
    add r10, r4, r0
    lbzux r7, r4, r3
    slwi r9, r0, 2
    stw r6, 0x144(r1)
    slwi r8, r3, 2
    lbz r0, 0x2(r4)
    addi r22, r1, 0x118
    lfd f0, 0x140(r1)
    addi r23, r1, 0x120
    subf r3, r7, r0
    lbz r0, 0x4(r10)
    xoris r3, r3, 0x8000
    lfd f8, lbl_80341EA8@l(r20)
    stw r3, 0x144(r1)
    subf r0, r6, r0
    fsubs f6, f0, f8
    lfd f5, lbl_80341EB0@l(r24)
    stw r7, 0x13c(r1)
    xoris r0, r0, 0x8000
    lfd f0, 0x140(r1)
    addi r25, r1, 0x130
    lfd f1, 0x138(r1)
    mr r3, r17
    stfs f2, 0x40(r1)
    fsubs f2, f0, f5
    fsubs f7, f1, f8
    li r4, 0x1
    stfs f3, 0x44(r1)
    lfs f3, 0x100(r1)
    stw r0, 0x144(r1)
    lfsx f1, r5, r8
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r5, r9
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stfsx f7, r21, r8
    fdivs f3, f3, f4
    stw r7, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r22, r8
    stw r6, 0x13c(r1)
    stfsx f6, r23, r9
    fmuls f1, f2, f1
    lfd f2, 0x138(r1)
    fsubs f4, f4, f8
    stfsx f6, r22, r9
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r23, r8
    stfsx f1, r25, r8
    stfsx f0, r21, r9
    stfsx f0, r25, r9
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    neg r0, r17
    addi r26, r1, 0x108
    or r0, r0, r17
    mr r3, r28
    srawi r0, r0, 31
    mr r6, r22
    mr r8, r31
    addi r4, r1, 0x100
    and r7, r26, r0
    li r5, 0x1
    bl fn_802F3984
    lwz r3, 0x34(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x4c(r27)
    mr r17, r3
    lfs f0, 0x0(r30)
    addi r3, r1, 0xe0
    lfs f2, 0x8(r30)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0x4(r30)
    stfs f2, 0xec(r1)
    lbz r16, 0x30(r29)
    fsubs f0, f1, f0
    stfs f2, 0x104(r1)
    lwz r4, 0x34(r29)
    stfs f0, 0xe8(r1)
    stfs f0, 0x100(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0xe4(r1)
    lfs f1, 0xe0(r1)
    addi r9, r1, 0x38
    stfs f0, 0x3c(r1)
    mr r3, r17
    add r5, r19, r0
    lfd f8, lbl_80341EA8@l(r20)
    lbz r7, 0x9(r5)
    li r4, 0x1
    lbz r6, 0x8(r5)
    lbzx r0, r5, r7
    add r8, r5, r7
    add r10, r5, r6
    lbzx r5, r5, r6
    stw r0, 0x144(r1)
    slwi r6, r6, 2
    lbz r10, 0x2(r10)
    slwi r7, r7, 2
    lfd f0, 0x140(r1)
    subf r10, r5, r10
    lbz r8, 0x4(r8)
    xoris r10, r10, 0x8000
    stw r5, 0x13c(r1)
    subf r8, r0, r8
    lfd f5, lbl_80341EB0@l(r24)
    lfd f2, 0x138(r1)
    fsubs f6, f0, f8
    stw r10, 0x144(r1)
    xoris r8, r8, 0x8000
    fsubs f7, f2, f8
    lfs f3, 0x100(r1)
    lfd f0, 0x140(r1)
    stfs f1, 0x38(r1)
    fsubs f2, f0, f5
    stw r8, 0x144(r1)
    lfsx f1, r9, r6
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r9, r7
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stfsx f7, r21, r6
    fdivs f3, f3, f4
    stw r5, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r22, r6
    stfsx f6, r23, r7
    stw r0, 0x13c(r1)
    fmuls f1, f2, f1
    lfd f2, 0x138(r1)
    fsubs f4, f4, f8
    stfsx f6, r22, r7
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r23, r6
    stfsx f1, r25, r6
    stfsx f0, r21, r7
    stfsx f0, r25, r7
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lfs f1, 0x0(r28)
    neg r0, r17
    lfs f0, 0x0(r30)
    or r0, r0, r17
    lfs f2, 0x4(r28)
    srawi r0, r0, 31
    fadds f0, f1, f0
    mr r6, r22
    stfs f2, 0xdc(r1)
    mr r8, r31
    and r7, r26, r0
    addi r3, r1, 0xd8
    stfs f0, 0xd8(r1)
    addi r4, r1, 0x100
    li r5, 0x1
    bl fn_802F3984
    lwz r3, 0xc(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x8(r30)
    mr r17, r3
    lfs f0, 0x4(r30)
    addi r3, r1, 0xc8
    stfs f1, 0xd4(r1)
    li r5, 0x0
    lbz r16, 0x8(r29)
    stfs f0, 0xd0(r1)
    lwz r4, 0xc(r29)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0xcc(r1)
    lfs f1, 0xc8(r1)
    addi r8, r1, 0x30
    stfs f0, 0x34(r1)
    mr r3, r17
    add r9, r19, r0
    lfd f8, lbl_80341EA8@l(r20)
    lbz r6, 0x9(r9)
    li r4, 0x1
    lbz r7, 0x8(r9)
    add r11, r9, r6
    lfd f5, lbl_80341EB0@l(r24)
    lbz r10, 0x2(r11)
    add r5, r9, r7
    lbz r0, 0x2(r5)
    slwi r5, r7, 2
    stw r10, 0x144(r1)
    slwi r6, r6, 2
    lbzx r7, r9, r7
    lfd f0, 0x140(r1)
    subf r9, r0, r7
    lbz r7, 0x6(r11)
    xoris r9, r9, 0x8000
    stw r0, 0x13c(r1)
    subf r7, r10, r7
    fsubs f6, f0, f8
    lfd f2, 0x138(r1)
    xoris r7, r7, 0x8000
    stw r9, 0x144(r1)
    fsubs f7, f2, f8
    lfs f3, 0x100(r1)
    lfd f0, 0x140(r1)
    stfs f1, 0x30(r1)
    fsubs f2, f0, f5
    stw r7, 0x144(r1)
    lfsx f1, r8, r5
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r8, r6
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stfsx f7, r25, r5
    fdivs f3, f3, f4
    stw r0, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r23, r5
    stfsx f6, r22, r6
    stw r10, 0x13c(r1)
    fmuls f1, f2, f1
    lfd f2, 0x138(r1)
    fsubs f4, f4, f8
    stfsx f6, r23, r6
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r22, r5
    stfsx f1, r21, r5
    stfsx f0, r25, r6
    stfsx f0, r21, r6
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lfs f1, 0x0(r28)
    neg r0, r17
    lfs f0, 0x4c(r27)
    or r0, r0, r17
    lfs f2, 0x4(r28)
    srawi r0, r0, 31
    fadds f1, f1, f0
    lfs f0, 0x4(r30)
    stfs f2, 0xc4(r1)
    mr r6, r22
    mr r8, r31
    and r7, r26, r0
    fsubs f0, f1, f0
    addi r3, r1, 0xc0
    addi r4, r1, 0x100
    li r5, 0x1
    stfs f0, 0xc0(r1)
    bl fn_802F3984
    lwz r3, 0x2c(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x50(r27)
    mr r17, r3
    lfs f0, 0x8(r30)
    addi r3, r1, 0xb0
    lfs f2, 0x4(r30)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0xc(r30)
    stfs f2, 0xb8(r1)
    lbz r16, 0x28(r29)
    fsubs f0, f1, f0
    stfs f2, 0x100(r1)
    lwz r4, 0x2c(r29)
    stfs f0, 0xbc(r1)
    stfs f0, 0x104(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0xb4(r1)
    lfs f1, 0xb0(r1)
    addi r8, r1, 0x28
    stfs f0, 0x2c(r1)
    mr r3, r17
    add r9, r19, r0
    lfd f8, lbl_80341EA8@l(r20)
    lbz r6, 0x9(r9)
    li r4, 0x1
    lbz r7, 0x8(r9)
    add r11, r9, r6
    lfd f5, lbl_80341EB0@l(r24)
    lbz r10, 0x2(r11)
    add r5, r9, r7
    lbz r0, 0x2(r5)
    slwi r5, r7, 2
    stw r10, 0x144(r1)
    slwi r6, r6, 2
    lbzx r7, r9, r7
    lfd f0, 0x140(r1)
    subf r9, r0, r7
    lbz r7, 0x6(r11)
    xoris r9, r9, 0x8000
    stw r0, 0x13c(r1)
    subf r7, r10, r7
    fsubs f6, f0, f8
    lfd f2, 0x138(r1)
    xoris r7, r7, 0x8000
    stw r9, 0x144(r1)
    fsubs f7, f2, f8
    lfs f3, 0x100(r1)
    lfd f0, 0x140(r1)
    stfs f1, 0x28(r1)
    fsubs f2, f0, f5
    stw r7, 0x144(r1)
    lfsx f1, r8, r5
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r8, r6
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stfsx f7, r25, r5
    fdivs f3, f3, f4
    stw r0, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r23, r5
    stfsx f6, r22, r6
    stw r10, 0x13c(r1)
    fmuls f1, f2, f1
    lfd f2, 0x138(r1)
    fsubs f4, f4, f8
    stfsx f6, r23, r6
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r22, r5
    stfsx f1, r21, r5
    stfsx f0, r25, r6
    stfsx f0, r21, r6
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lfs f1, 0x0(r28)
    neg r0, r17
    lfs f0, 0x4c(r27)
    or r0, r0, r17
    srawi r0, r0, 31
    lfs f3, 0x4(r28)
    fadds f1, f1, f0
    lfs f2, 0x8(r30)
    lfs f0, 0x4(r30)
    mr r6, r22
    fadds f2, f3, f2
    mr r8, r31
    fsubs f0, f1, f0
    and r7, r26, r0
    stfs f2, 0xac(r1)
    addi r3, r1, 0xa8
    addi r4, r1, 0x100
    li r5, 0x1
    stfs f0, 0xa8(r1)
    bl fn_802F3984
    lwz r3, 0x1c(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0xc(r30)
    mr r17, r3
    lfs f0, 0x4(r30)
    addi r3, r1, 0x98
    stfs f1, 0xa4(r1)
    li r5, 0x0
    lbz r16, 0x18(r29)
    stfs f0, 0xa0(r1)
    lwz r4, 0x1c(r29)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0x9c(r1)
    lfs f1, 0x98(r1)
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    mr r3, r17
    add r7, r19, r0
    lfd f8, lbl_80341EA8@l(r20)
    lbz r6, 0x9(r7)
    li r4, 0x1
    lbz r5, 0x8(r7)
    add r11, r7, r6
    lfd f5, lbl_80341EB0@l(r24)
    add r7, r7, r5
    lbz r10, 0x6(r11)
    lbz r0, 0x6(r7)
    slwi r5, r5, 2
    stw r10, 0x144(r1)
    slwi r6, r6, 2
    lbz r7, 0x4(r7)
    lfd f0, 0x140(r1)
    subf r9, r0, r7
    lbz r7, 0x2(r11)
    xoris r9, r9, 0x8000
    stw r0, 0x13c(r1)
    subf r7, r10, r7
    fsubs f6, f0, f8
    lfd f2, 0x138(r1)
    xoris r7, r7, 0x8000
    stw r9, 0x144(r1)
    fsubs f7, f2, f8
    lfs f3, 0x100(r1)
    lfd f0, 0x140(r1)
    stfs f1, 0x20(r1)
    fsubs f2, f0, f5
    stw r7, 0x144(r1)
    lfsx f1, r8, r5
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r8, r6
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stfsx f7, r23, r5
    fdivs f3, f3, f4
    stw r0, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r25, r5
    stfsx f6, r21, r6
    stw r10, 0x13c(r1)
    fmuls f1, f2, f1
    lfd f2, 0x138(r1)
    fsubs f4, f4, f8
    stfsx f6, r25, r6
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r21, r5
    stfsx f1, r22, r5
    stfsx f0, r23, r6
    stfsx f0, r22, r6
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lfs f3, 0x4(r28)
    neg r0, r17
    lfs f2, 0x50(r27)
    or r0, r0, r17
    lfs f1, 0x0(r28)
    srawi r0, r0, 31
    lfs f0, 0x4c(r27)
    fadds f3, f3, f2
    lfs f2, 0xc(r30)
    mr r6, r22
    fadds f1, f1, f0
    lfs f0, 0x4(r30)
    fsubs f2, f3, f2
    mr r8, r31
    and r7, r26, r0
    fsubs f0, f1, f0
    stfs f2, 0x94(r1)
    addi r3, r1, 0x90
    addi r4, r1, 0x100
    li r5, 0x1
    stfs f0, 0x90(r1)
    bl fn_802F3984
    lwz r3, 0x3c(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x4c(r27)
    mr r17, r3
    lfs f0, 0x0(r30)
    addi r3, r1, 0x80
    lfs f2, 0xc(r30)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0x4(r30)
    stfs f2, 0x8c(r1)
    lbz r16, 0x38(r29)
    fsubs f0, f1, f0
    stfs f2, 0x104(r1)
    lwz r4, 0x3c(r29)
    stfs f0, 0x88(r1)
    stfs f0, 0x100(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0x84(r1)
    lfs f1, 0x80(r1)
    addi r8, r1, 0x18
    stfs f0, 0x1c(r1)
    mr r3, r17
    add r7, r19, r0
    lfd f8, lbl_80341EA8@l(r20)
    lbz r6, 0x9(r7)
    li r4, 0x1
    lbz r5, 0x8(r7)
    add r11, r7, r6
    lfd f5, lbl_80341EB0@l(r24)
    add r7, r7, r5
    lbz r10, 0x6(r11)
    lbz r0, 0x6(r7)
    slwi r5, r5, 2
    stw r10, 0x144(r1)
    slwi r6, r6, 2
    lbz r7, 0x4(r7)
    lfd f0, 0x140(r1)
    subf r9, r0, r7
    lbz r7, 0x2(r11)
    xoris r9, r9, 0x8000
    stw r0, 0x13c(r1)
    subf r7, r10, r7
    fsubs f6, f0, f8
    lfd f2, 0x138(r1)
    xoris r7, r7, 0x8000
    stw r9, 0x144(r1)
    fsubs f7, f2, f8
    lfs f3, 0x100(r1)
    lfd f0, 0x140(r1)
    stfs f1, 0x18(r1)
    fsubs f2, f0, f5
    stw r7, 0x144(r1)
    lfsx f1, r8, r5
    lfd f0, 0x140(r1)
    fmuls f4, f2, f1
    lfsx f1, r8, r6
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    stfsx f7, r23, r5
    fdivs f3, f3, f4
    stw r0, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r25, r5
    stfsx f6, r21, r6
    stw r10, 0x13c(r1)
    fmuls f1, f2, f1
    lfd f2, 0x138(r1)
    fsubs f4, f4, f8
    stfsx f6, r25, r6
    fsubs f2, f2, f8
    fdivs f0, f0, f1
    fadds f1, f4, f3
    fadds f0, f2, f0
    stfsx f1, r21, r5
    stfsx f1, r22, r5
    stfsx f0, r23, r6
    stfsx f0, r22, r6
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lfs f1, 0x4(r28)
    neg r0, r17
    lfs f0, 0x50(r27)
    or r0, r0, r17
    srawi r0, r0, 31
    lfs f2, 0xc(r30)
    fadds f3, f1, f0
    lfs f1, 0x0(r28)
    lfs f0, 0x0(r30)
    mr r6, r22
    mr r8, r31
    and r7, r26, r0
    fsubs f2, f3, f2
    addi r3, r1, 0x78
    fadds f0, f1, f0
    addi r4, r1, 0x100
    li r5, 0x1
    stfs f2, 0x7c(r1)
    stfs f0, 0x78(r1)
    bl fn_802F3984
    lwz r3, 0x14(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0xc(r30)
    mr r17, r3
    lfs f0, 0x0(r30)
    addi r3, r1, 0x68
    stfs f1, 0x74(r1)
    li r5, 0x0
    lbz r16, 0x10(r29)
    stfs f0, 0x70(r1)
    lwz r4, 0x14(r29)
    stfs f0, 0x100(r1)
    stfs f1, 0x104(r1)
    bl fn_802F8124
    mulli r0, r16, 0xa
    lfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    addi r6, r1, 0x10
    stfs f0, 0x10(r1)
    mr r3, r17
    add r9, r19, r0
    lfd f8, lbl_80341EA8@l(r20)
    lbz r10, 0x9(r9)
    li r4, 0x1
    lbz r0, 0x8(r9)
    add r7, r9, r10
    lbzx r5, r9, r10
    lbz r8, 0x4(r7)
    add r7, r9, r0
    lbz r9, 0x4(r7)
    slwi r0, r0, 2
    stw r8, 0x144(r1)
    subf r5, r8, r5
    lbz r7, 0x6(r7)
    xoris r5, r5, 0x8000
    lfd f0, 0x140(r1)
    slwi r10, r10, 2
    subf r7, r9, r7
    stfs f1, 0x14(r1)
    xoris r7, r7, 0x8000
    lfd f5, lbl_80341EB0@l(r24)
    stw r7, 0x144(r1)
    fsubs f6, f0, f8
    lfsx f1, r6, r0
    lfd f0, 0x140(r1)
    stw r9, 0x13c(r1)
    fsubs f2, f0, f5
    lfs f3, 0x100(r1)
    stw r5, 0x144(r1)
    lfd f7, 0x138(r1)
    fmuls f4, f2, f1
    lfd f0, 0x140(r1)
    lfsx f1, r6, r10
    fsubs f7, f7, f8
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    fdivs f3, f3, f4
    stw r9, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r22, r0
    stfsx f7, r21, r0
    stfsx f6, r25, r10
    fmuls f1, f2, f1
    stw r8, 0x13c(r1)
    fsubs f4, f4, f8
    lfd f2, 0x138(r1)
    fdivs f0, f0, f1
    stfsx f6, r21, r10
    fadds f3, f4, f3
    fsubs f1, f2, f8
    stfsx f3, r25, r0
    fadds f0, f1, f0
    stfsx f3, r23, r0
    stfsx f0, r22, r10
    stfsx f0, r23, r10
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lfs f1, 0x4(r28)
    neg r0, r17
    lfs f0, 0x50(r27)
    or r0, r0, r17
    lfs f2, 0x0(r28)
    srawi r0, r0, 31
    fadds f1, f1, f0
    lfs f0, 0xc(r30)
    stfs f2, 0x60(r1)
    mr r6, r22
    mr r8, r31
    and r7, r26, r0
    fsubs f0, f1, f0
    addi r3, r1, 0x60
    addi r4, r1, 0x100
    li r5, 0x1
    stfs f0, 0x64(r1)
    bl fn_802F3984
    lwz r3, 0x24(r29)
    mr r4, r18
    mr r5, r31
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x50(r27)
    mr r17, r3
    lfs f0, 0x8(r30)
    addi r3, r1, 0x50
    lfs f2, 0x0(r30)
    li r5, 0x0
    fsubs f1, f1, f0
    lfs f0, 0xc(r30)
    stfs f2, 0x58(r1)
    lbz r18, 0x20(r29)
    fsubs f0, f1, f0
    stfs f2, 0x100(r1)
    lwz r4, 0x24(r29)
    stfs f0, 0x5c(r1)
    stfs f0, 0x104(r1)
    bl fn_802F8124
    mulli r0, r18, 0xa
    lfs f0, 0x50(r1)
    lfs f1, 0x54(r1)
    addi r5, r1, 0x8
    stfs f0, 0x8(r1)
    mr r3, r17
    add r8, r19, r0
    lfd f8, lbl_80341EA8@l(r20)
    lbz r9, 0x9(r8)
    li r4, 0x1
    lbz r10, 0x8(r8)
    add r6, r8, r9
    lbzx r0, r8, r9
    lbz r7, 0x4(r6)
    add r6, r8, r10
    lbz r8, 0x4(r6)
    slwi r10, r10, 2
    stw r7, 0x144(r1)
    subf r0, r7, r0
    lbz r6, 0x6(r6)
    xoris r0, r0, 0x8000
    lfd f0, 0x140(r1)
    slwi r9, r9, 2
    subf r6, r8, r6
    stfs f1, 0xc(r1)
    xoris r6, r6, 0x8000
    lfd f5, lbl_80341EB0@l(r24)
    stw r6, 0x144(r1)
    fsubs f6, f0, f8
    lfsx f1, r5, r10
    lfd f0, 0x140(r1)
    stw r8, 0x13c(r1)
    fsubs f2, f0, f5
    lfs f3, 0x100(r1)
    stw r0, 0x144(r1)
    lfd f7, 0x138(r1)
    fmuls f4, f2, f1
    lfd f0, 0x140(r1)
    lfsx f1, r5, r9
    fsubs f7, f7, f8
    fsubs f2, f0, f5
    lfs f0, 0x104(r1)
    fdivs f3, f3, f4
    stw r8, 0x13c(r1)
    lfd f4, 0x138(r1)
    stfsx f7, r22, r10
    stfsx f7, r21, r10
    stfsx f6, r25, r9
    fmuls f1, f2, f1
    stw r7, 0x13c(r1)
    fsubs f4, f4, f8
    lfd f2, 0x138(r1)
    fdivs f0, f0, f1
    stfsx f6, r21, r9
    fadds f3, f4, f3
    fsubs f1, f2, f8
    stfsx f3, r25, r10
    fadds f0, f1, f0
    stfsx f3, r23, r10
    stfsx f0, r22, r9
    stfsx f0, r23, r9
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    lfs f1, 0x4(r28)
    neg r0, r17
    lfs f0, 0x8(r30)
    or r0, r0, r17
    lfs f2, 0x0(r28)
    srawi r0, r0, 31
    fadds f0, f1, f0
    mr r6, r22
    stfs f2, 0x48(r1)
    mr r8, r31
    and r7, r26, r0
    addi r3, r1, 0x48
    stfs f0, 0x4c(r1)
    addi r4, r1, 0x100
    li r5, 0x1
    bl fn_802F3984
    addi r11, r1, 0x190
    bl _restgpr_16
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD124
// ----------------------------------------------------------------------------
asm void fn_802FD124() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x4
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_802FD1A4
    bge lbl_802FD16C
    cmpwi r5, 0x1
    beq lbl_802FD178
    b lbl_802FD1EC
lbl_802FD16C:
    cmpwi r5, 0x8
    beq lbl_802FD1A4
    b lbl_802FD1EC
lbl_802FD178:
    lwz r4, 0x4(r6)
    addi r3, r1, 0x18
    li r5, 0x0
    bl fn_802F8124
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x2c(r1)
    b lbl_802FD1EC
lbl_802FD1A4:
    lwz r4, 0x4(r6)
    addi r3, r1, 0x10
    li r5, 0x0
    bl fn_802F8124
    lfs f1, 0x10(r1)
    addi r3, r1, 0x8
    lfs f0, 0x14(r1)
    li r5, 0x0
    stfs f1, 0x20(r1)
    lwz r4, 0x1c(r31)
    stfs f0, 0x28(r1)
    bl fn_802F8124
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x2c(r1)
lbl_802FD1EC:
    lwz r5, 0x20(r1)
    lwz r4, 0x24(r1)
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r5, 0x0(r30)
    stw r4, 0x4(r30)
    stw r3, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD224
// ----------------------------------------------------------------------------
asm void fn_802FD224() {
    nofralloc
    lbz r0, 0x100(r3)
    cmplw r4, r0
    blt lbl_802FD238
    li r3, 0x0
    blr
lbl_802FD238:
    lwz r3, 0xfc(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD24C
// ----------------------------------------------------------------------------
asm void fn_802FD24C() {
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_802FD25C
// ----------------------------------------------------------------------------
asm void fn_802FD25C() {
    nofralloc
    lis r3, lbl_80462458@ha
    addi r3, r3, lbl_80462458@l
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD268
// ----------------------------------------------------------------------------
asm void fn_802FD268() {
    nofralloc
    lis r4, lbl_80462440@ha
    lis r3, lbl_80462458@ha
    addi r4, r4, lbl_80462440@l
    stw r4, lbl_80462458@l(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD27C
// ----------------------------------------------------------------------------
asm void fn_802FD27C() {
    nofralloc
    lis r3, lbl_80341EB8@ha
    fabs f2, f1
    stwu r1, -0x10(r1)
    lfs f0, lbl_80341EB8@l(r3)
    b lbl_802FD294
lbl_802FD290:
    fsubs f2, f2, f0
lbl_802FD294:
    fcmpo cr0, f2, f0
    opword 0x4C411382
    beq lbl_802FD290
    opword 0xF041B00C
    lhz r0, 0xc(r1)
    sth r0, 0x8(r1)
    opword 0xE001B008
    lis r5, lbl_8037CBD8@ha
    clrlslwi r0, r0, 24, 4
    lis r3, lbl_80341EBC@ha
    addi r5, r5, lbl_8037CBD8@l
    fsubs f4, f2, f0
    add r4, r5, r0
    lfs f0, lbl_80341EBC@l(r3)
    lfs f3, 0x8(r4)
    fcmpo cr0, f1, f0
    lfsx f2, r5, r0
    fmuls f0, f4, f3
    fadds f1, f2, f0
    bge lbl_802FD2E8
    fneg f1, f1
lbl_802FD2E8:
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD2F0
// ----------------------------------------------------------------------------
asm void fn_802FD2F0() {
    nofralloc
    lis r3, lbl_80341EB8@ha
    fabs f1, f1
    stwu r1, -0x10(r1)
    lfs f0, lbl_80341EB8@l(r3)
    b lbl_802FD308
lbl_802FD304:
    fsubs f1, f1, f0
lbl_802FD308:
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_802FD304
    opword 0xF021B00C
    lhz r0, 0xc(r1)
    sth r0, 0x8(r1)
    opword 0xE001B008
    lis r3, lbl_8037CBD8@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_8037CBD8@l
    fsubs f2, f1, f0
    add r3, r3, r0
    lfs f1, 0xc(r3)
    lfs f0, 0x4(r3)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD350
// ----------------------------------------------------------------------------
asm void fn_802FD350() {
    nofralloc
    lis r3, lbl_80341EB8@ha
    stwu r1, -0x20(r1)
    addi r3, r3, lbl_80341EB8@l
    lfs f0, 0x4(r3)
    fcmpu cr0, f0, f2
    bne lbl_802FD378
    fcmpu cr0, f0, f1
    bne lbl_802FD378
    fmr f1, f0
    b lbl_802FD4F8
lbl_802FD378:
    lfs f4, 0x4(r3)
    fcmpo cr0, f2, f4
    opword 0x4C411382
    bne lbl_802FD3F0
    fcmpo cr0, f1, f4
    opword 0x4C411382
    bne lbl_802FD3C0
    fcmpo cr0, f2, f1
    opword 0x4C411382
    bne lbl_802FD3AC
    fmr f3, f2
    li r0, 0x0
    b lbl_802FD464
lbl_802FD3AC:
    fmr f3, f1
    lfs f4, 0x10(r3)
    fmr f1, f2
    li r0, 0x1
    b lbl_802FD464
lbl_802FD3C0:
    fneg f1, f1
    fcmpo cr0, f2, f1
    opword 0x4C411382
    bne lbl_802FD3DC
    fmr f3, f2
    li r0, 0x1
    b lbl_802FD464
lbl_802FD3DC:
    fmr f3, f1
    lfs f4, 0x18(r3)
    fmr f1, f2
    li r0, 0x0
    b lbl_802FD464
lbl_802FD3F0:
    fcmpo cr0, f1, f4
    opword 0x4C411382
    bne lbl_802FD430
    fneg f0, f2
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_802FD41C
    fmr f3, f0
    lfs f4, 0x1c(r3)
    li r0, 0x1
    b lbl_802FD464
lbl_802FD41C:
    fmr f3, f1
    lfs f4, 0x10(r3)
    fmr f1, f0
    li r0, 0x0
    b lbl_802FD464
lbl_802FD430:
    fneg f0, f2
    fneg f1, f1
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_802FD454
    fmr f3, f0
    lfs f4, 0x20(r3)
    li r0, 0x0
    b lbl_802FD464
lbl_802FD454:
    fmr f3, f1
    lfs f4, 0x18(r3)
    fmr f1, f0
    li r0, 0x1
lbl_802FD464:
    cmpwi r0, 0x0
    beq lbl_802FD4B4
    fdivs f1, f1, f3
    lfs f0, 0xc(r3)
    fmuls f1, f1, f0
    opword 0xF021B010
    lhz r0, 0x10(r1)
    sth r0, 0xa(r1)
    opword 0xE001B00A
    lis r4, lbl_8037DBE8@ha
    slwi r0, r0, 3
    addi r4, r4, lbl_8037DBE8@l
    fsubs f2, f1, f0
    add r3, r4, r0
    lfsx f0, r4, r0
    lfs f1, 0x4(r3)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    fsubs f1, f4, f0
    b lbl_802FD4F8
lbl_802FD4B4:
    fdivs f1, f1, f3
    lfs f0, 0xc(r3)
    fmuls f1, f1, f0
    opword 0xF021B00C
    lhz r0, 0xc(r1)
    sth r0, 0x8(r1)
    opword 0xE001B008
    lis r4, lbl_8037DBE8@ha
    slwi r0, r0, 3
    addi r4, r4, lbl_8037DBE8@l
    fsubs f2, f1, f0
    add r3, r4, r0
    lfsx f0, r4, r0
    lfs f1, 0x4(r3)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    fadds f1, f4, f0
lbl_802FD4F8:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802FD500
// ----------------------------------------------------------------------------
asm void fn_802FD500() {
    nofralloc
    lwz r0, 0x0(r3)
    cmplw r0, r4
    beq lbl_802FD514
    li r3, 0x0
    blr
lbl_802FD514:
    lhz r0, 0x4(r3)
    cmplwi r0, 0xfeff
    beq lbl_802FD528
    li r3, 0x0
    blr
lbl_802FD528:
    lhz r0, 0x6(r3)
    cmplw r0, r5
    beq lbl_802FD53C
    li r3, 0x0
    blr
lbl_802FD53C:
    clrlslwi r4, r6, 16, 3
    lwz r5, 0x8(r3)
    addi r0, r4, 0x10
    cmplw r5, r0
    bge lbl_802FD558
    li r3, 0x0
    blr
lbl_802FD558:
    lhz r3, 0xe(r3)
    subf r0, r6, r3
    orc r3, r3, r6
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

