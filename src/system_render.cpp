#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 jumptable_8034AD18[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern float lbl_8049EE40;
extern float lbl_8049EE48;

f32 CosFIdx__Q24nw4r4mathFf(f32 farg0, s32 arg1);
f32 SinFIdx__Q24nw4r4mathFf(f32 farg0, s32 arg1);
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
f32 fn_8001DA9C(f32 farg0);
s32 * fn_8005E4A4(s8 *arg0);
f32 fn_800674B8(s32 arg0, s32 arg1);
void fn_80067B60(s8 *arg0);
void fn_80067C94(s8 *arg0);
void fn_80067F84(s8 *arg0);
void fn_800680C8(s8 *arg0);
s32 fn_80068524();
f32 fn_8006854C(s8 *arg0);
s32 fn_800685D0(s8 *arg0);
M2C_UNK fn_80068718(f32 *arg0);
M2C_UNK fn_80068728(s8 *arg0);
M2C_UNK fn_80068774(s8 *arg0, f32 farg0);
M2C_UNK fn_800687C0(s8 *arg0, f32 farg0);
s32 fn_8006880C();
void fn_80068EC8(s32 *arg0);
f32 fn_800691DC(s8 *arg0, s8 *arg1);
M2C_UNK fn_80069248(s8 *arg0, s32 *arg1);
s32 fn_800692CC(s8 *arg0);
void fn_80069410(s8 *arg0, f32 farg0);
f32 fn_800694C0(u16 arg0);
M2C_UNK fn_800694F0(u16 arg0);
M2C_UNK fn_80069524(u16 arg0, s32 arg1);
void fn_80069558(s32 arg0, u16 *arg1);
f32 fn_80069588(void);
void fn_800868F4(s32 arg0);
s32 fn_8008AE14(void);
f32 fn_80172688(f32 farg0);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_80173580();
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181568(s8 *arg0, s32 arg1);
void fn_80182220(s8 *arg0, f32 farg0);
void fn_80182518(s8 *arg0, s8 *arg1);
void fn_80182600(s8 *arg0, s8 *arg1);
f32 fn_801826B8(s32 arg0);
void fn_80182744(s32 arg0, s8 *arg1);

// asm_to_cpp: fn_80067B60
asm void fn_80067B60(s8 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r4, 0x68(r3)
    rlwinm r0, r4, 0, 13, 14
    cmpwi r0, 0x0
    beq lbl_80067C7C
    rlwinm r0, r4, 0, 15, 13
    stw r0, 0x68(r3)
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_80067BB0
    lwz r31, 0x3858(r3)
    cmpwi r31, 0x0
    beq lbl_80067BB0
    b lbl_80067BD0
lbl_80067BB0:
    rlwinm r0, r4, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80067BCC
    lwz r31, 0x385c(r3)
    cmpwi r31, 0x0
    beq lbl_80067BCC
    b lbl_80067BD0
lbl_80067BCC:
    lwz r31, 0x3854(r3)
lbl_80067BD0:
    cmpwi r31, 0x0
    beq lbl_80067C7C
    addi r3, r1, 0x14
    li r4, 0x3
    lwz r5, 0x377c(r30)
    addi r5, r5, 0xa0
    bl fn_80173580
    lwz r0, 0x68(r30)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80067C1C
    lwz r3, 0x377c(r31)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80173580
    b lbl_80067C30
lbl_80067C1C:
    addi r3, r1, 0x8
    li r4, 0x3
    lwz r5, 0x377c(r31)
    addi r5, r5, 0xa0
    bl fn_80173580
lbl_80067C30:
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8001B8B8
    lwz r0, 0x68(r30)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80067C58
    lfs f0, lbl_8049EE48
    stfs f0, 0x24(r1)
lbl_80067C58:
    lwz r3, 0x377c(r30)
    addi r4, r1, 0x20
    bl fn_80182600
    lwz r3, 0x377c(r30)
    addi r4, r30, 0x84
    bl fn_80182744
    lwz r0, 0x0(r30)
    oris r0, r0, 0x400
    stw r0, 0x0(r30)
lbl_80067C7C:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80067C94
asm void fn_80067C94(s8 *arg0) {
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
    stfd f28, 0x20(r1)
    opword 0xF3810028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    lfs f0, 0x88(r3)
    lfs f30, 0xf4(r3)
    lfs f29, 0xf8(r3)
    lfs f1, 0xa20(r3)
    lfs f31, lbl_8049EE48
    fsubs f1, f0, f1
    la r4, lbl_8049EE48
    lfs f0, 0x24(r4)
    fcmpo cr0, f1, f0
    bge lbl_80067D10
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    ble lbl_80067D10
    fcmpu cr0, f31, f29
    bne lbl_80067D10
    fcmpu cr0, f31, f30
    beq lbl_80067F3C
lbl_80067D10:
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    bne lbl_80067E50
    fmr f1, f30
    bl fn_80018BD4
    la r30, lbl_8049EE48
    lfs f0, 0x2c(r30)
    fcmpo cr0, f1, f0
    bgt lbl_80067D4C
    fmr f1, f29
    bl fn_80018BD4
    lfs f0, 0x2c(r30)
    fcmpo cr0, f1, f0
    ble lbl_80067E50
lbl_80067D4C:
    la r30, lbl_8049EE48
    lwz r0, 0xfc(r31)
    lfd f3, lbl_8049EE40
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    lfs f1, 0x8(r30)
    fmuls f2, f1, f0
    lwz r0, 0x114(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fmuls f1, f1, f0
    lfs f0, 0x9c(r31)
    fadds f0, f0, f1
    fadds f28, f2, f0
    fmr f1, f28
    bl fn_80018C2C
    fneg f1, f1
    lfs f0, 0x100(r31)
    fmuls f1, f0, f1
    lfs f0, 0xc4(r31)
    fadds f0, f0, f1
    stfs f0, 0xc4(r31)
    fmr f1, f28
    bl fn_80018C3C
    lfs f2, 0x100(r31)
    fmuls f1, f2, f1
    lfs f0, 0xcc(r31)
    fadds f0, f0, f1
    stfs f0, 0xcc(r31)
    lfs f0, lbl_8049EE48
    fcmpo cr0, f2, f0
    ble lbl_80067E1C
    fmr f1, f2
    lfs f2, 0x104(r31)
    lfs f3, 0x14(r30)
    lfs f4, 0x18(r30)
    bl fn_801728FC
    stfs f1, 0x100(r31)
    frsp f1, f1
    lfs f0, lbl_8049EE48
    fcmpo cr0, f1, f0
    bge lbl_80067E50
    stfs f0, 0x104(r31)
    stfs f0, 0x100(r31)
    b lbl_80067E50
lbl_80067E1C:
    ble lbl_80067E50
    fmr f1, f2
    lfs f2, 0x104(r31)
    lfs f3, 0x14(r30)
    lfs f4, 0x18(r30)
    bl fn_801728FC
    stfs f1, 0x100(r31)
    frsp f1, f1
    lfs f0, lbl_8049EE48
    fcmpo cr0, f1, f0
    ble lbl_80067E50
    stfs f0, 0x104(r31)
    stfs f0, 0x100(r31)
lbl_80067E50:
    lwz r4, 0x58(r31)
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80067E70
    lfs f0, lbl_8049EE48
    fcmpo cr0, f30, f0
    opword 0x4C401382
    beq lbl_80067EC0
lbl_80067E70:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x14(r3)
    cmpwi r3, 0x7
    bne lbl_80067E94
    lwz r0, 0x7c(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80067EC0
lbl_80067E94:
    cmpwi r3, 0x1
    bne lbl_80067ED8
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x12
    bne lbl_80067ED8
    lwz r0, 0x7c(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80067ED8
lbl_80067EC0:
    fmr f31, f30
    lfs f0, 0x12c(r31)
    fmuls f0, f29, f0
    fadds f30, f30, f0
    stfs f30, 0xf4(r31)
    b lbl_80067F18
lbl_80067ED8:
    rlwinm r0, r4, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80067F18
    lfs f0, lbl_8049EE48
    fcmpo cr0, f30, f0
    ble lbl_80067F18
    fmr f31, f30
    lfs f0, 0x12c(r31)
    fmuls f0, f29, f0
    fadds f30, f30, f0
    la r3, lbl_8049EE48
    lfs f0, 0x18(r3)
    fcmpo cr0, f30, f0
    ble lbl_80067F14
    fmr f30, f0
lbl_80067F14:
    stfs f30, 0xf4(r31)
lbl_80067F18:
    fmr f1, f31
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    ble lbl_80067F3C
    lfs f0, 0xc8(r31)
    fadds f0, f0, f31
    stfs f0, 0xc8(r31)
lbl_80067F3C:
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    li r0, 0x38
    opword 0x13A1000C
    lfd f29, 0x30(r1)
    li r0, 0x28
    opword 0x1381000C
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80067F84
asm void fn_80067F84(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    bne lbl_800680A8
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x14(r4)
    cmpwi r0, 0x7
    bne lbl_80067FD4
    lwz r0, 0x7c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800680A8
lbl_80067FD4:
    lfs f2, 0x88(r3)
    lfs f3, 0xf4(r3)
    lfs f4, 0xf8(r3)
    lfs f31, 0xa20(r3)
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 25, 22
    stw r0, 0x54(r3)
    fsubs f1, f2, f31
    la r4, lbl_8049EE48
    lfs f0, 0x24(r4)
    fcmpo cr0, f1, f0
    bge lbl_80068024
    lfs f0, 0x28(r4)
    fcmpo cr0, f1, f0
    ble lbl_80068024
    lfs f0, lbl_8049EE48
    fcmpu cr0, f0, f4
    bne lbl_80068024
    fcmpu cr0, f0, f3
    beq lbl_800680A8
lbl_80068024:
    lwz r0, 0x54(r3)
    ori r0, r0, 0x80
    stw r0, 0x54(r3)
    fadds f1, f2, f3
    la r4, lbl_8049EE48
    lfs f0, 0x30(r4)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f31
    bge lbl_80068094
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x54(r3)
    lwz r0, 0x68(r3)
    oris r0, r0, 0x8
    stw r0, 0x68(r3)
    lfs f0, lbl_8049EE48
    stfs f0, 0xf8(r3)
    stfs f0, 0xf4(r3)
    lwz r3, 0x377c(r3)
    addi r4, r1, 0x8
    bl fn_80182744
    stfs f31, 0xc(r1)
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x8
    bl fn_80182518
    lwz r3, 0x377c(r31)
    addi r4, r31, 0x84
    bl fn_80182744
    b lbl_800680A8
lbl_80068094:
    lfs f0, lbl_8049EE48
    fcmpo cr0, f3, f0
    bge lbl_800680A8
    ori r0, r0, 0x100
    stw r0, 0x54(r3)
lbl_800680A8:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800680C8
asm void fn_800680C8(s8 *arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    lfs f30, lbl_8049EE48
    lfs f29, 0xb0(r3)
    lwz r31, 0x3854(r3)
    bl fn_8005E4A4
    mr r29, r3
    lwz r0, 0x70(r30)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80068138
    cmpwi r3, 0x0
    beq lbl_80068138
    mr r31, r29
    mr r3, r30
    mr r4, r29
    bl fn_80069248
    fmr f29, f1
lbl_80068138:
    lwz r4, 0x54(r30)
    lis r3, 0xffb0
    subi r0, r3, 0x401
    and r0, r4, r0
    stw r0, 0x54(r30)
    fmr f1, f29
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    ble lbl_80068170
    lwz r0, 0x54(r30)
    oris r0, r0, 0x40
    stw r0, 0x54(r30)
lbl_80068170:
    lwz r0, 0x70(r30)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_800681A0
    cmpwi r29, 0x0
    beq lbl_800681B0
    mr r31, r29
    mr r3, r30
    fmr f1, f29
    bl fn_800687C0
    fmr f29, f1
    b lbl_800681B0
lbl_800681A0:
    mr r3, r30
    lfs f1, 0xb0(r30)
    bl fn_800687C0
    fmr f29, f1
lbl_800681B0:
    fmr f1, f29
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lfs f0, 0x38(r3)
    fcmpo cr0, f1, f0
    ble lbl_800681D4
    lwz r0, 0x54(r30)
    ori r0, r0, 0x400
    stw r0, 0x54(r30)
lbl_800681D4:
    fmr f1, f29
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800681F8
    lwz r0, 0x54(r30)
    oris r0, r0, 0x10
    stw r0, 0x54(r30)
lbl_800681F8:
    cmpwi r31, 0x0
    beq lbl_800684E8
    mr r3, r30
    lfs f1, 0xb0(r30)
    bl fn_800687C0
    fmr f31, f1
    lwz r4, 0x58(r30)
    rlwinm r0, r4, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8006846C
    lwz r3, 0x54(r30)
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80068324
    lfs f2, 0x128(r30)
    lfs f0, 0x12c(r30)
    fmuls f29, f2, f0
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_800682BC
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lwz r0, 0x118(r30)
    lfd f2, lbl_8049EE40
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f2
    lfs f0, 0x8(r3)
    fmuls f0, f0, f2
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80068294
    lwz r0, 0xc0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006846C
lbl_80068294:
    la r3, lbl_8049EE48
    lfs f0, 0x40(r3)
    fsubs f1, f31, f0
    bl fn_80172688
    lfs f2, lbl_8049EE48
    fneg f3, f29
    fmr f4, f29
    bl fn_801728FC
    fmr f30, f1
    b lbl_80068440
lbl_800682BC:
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lwz r0, 0x118(r30)
    lfd f2, lbl_8049EE40
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f2
    lfs f0, 0x8(r3)
    fmuls f0, f0, f2
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80068308
    lwz r0, 0xc0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006846C
lbl_80068308:
    fmr f1, f31
    lfs f2, lbl_8049EE48
    fneg f3, f29
    fmr f4, f29
    bl fn_801728FC
    fmr f30, f1
    b lbl_80068440
lbl_80068324:
    rlwinm r0, r4, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_800683AC
    la r31, lbl_8049EE48
    lfs f2, 0x4(r31)
    lfs f0, 0x12c(r30)
    fmuls f29, f2, f0
    bl fn_80018BD4
    lfs f0, 0x44(r31)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80068370
    fmr f1, f31
    lfs f2, lbl_8049EE48
    fneg f3, f29
    fmr f4, f29
    bl fn_801728FC
    fmr f30, f1
    b lbl_80068440
lbl_80068370:
    fmr f1, f31
    bl fn_80018BD4
    lfs f0, 0x3c(r31)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80068440
    lfs f0, 0x40(r31)
    fsubs f1, f31, f0
    bl fn_80172688
    lfs f2, lbl_8049EE48
    fneg f3, f29
    fmr f4, f29
    bl fn_801728FC
    fmr f30, f1
    b lbl_80068440
lbl_800683AC:
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80068440
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80068440
    la r31, lbl_8049EE48
    lfs f2, 0x48(r31)
    lfs f0, 0x12c(r30)
    fmuls f29, f2, f0
    bl fn_80018BD4
    lfs f0, 0x44(r31)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80068408
    fmr f1, f31
    lfs f2, lbl_8049EE48
    fneg f3, f29
    fmr f4, f29
    bl fn_801728FC
    fmr f30, f1
    b lbl_80068440
lbl_80068408:
    fmr f1, f31
    bl fn_80018BD4
    lfs f0, 0x3c(r31)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80068440
    lfs f0, 0x40(r31)
    fsubs f1, f31, f0
    bl fn_80172688
    lfs f2, lbl_8049EE48
    fneg f3, f29
    fmr f4, f29
    bl fn_801728FC
    fmr f30, f1
lbl_80068440:
    lwz r0, 0x50(r30)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006846C
    lfs f1, 0x1cc(r30)
    lfs f0, lbl_8049EE48
    fcmpu cr0, f1, f0
    beq lbl_8006846C
    lwz r0, 0x58(r30)
    oris r0, r0, 0x400
    stw r0, 0x58(r30)
lbl_8006846C:
    lfs f1, 0x124(r30)
    la r3, lbl_8049EE48
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    ble lbl_800684AC
    lfs f0, 0x12c(r30)
    fsubs f1, f1, f0
    stfs f1, 0x124(r30)
    lfs f0, lbl_8049EE48
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800684AC
    stfs f0, 0x124(r30)
    lwz r0, 0x54(r30)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x54(r30)
lbl_800684AC:
    fmr f1, f30
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    ble lbl_800684E8
    lfs f0, 0x4c(r3)
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x114(r30)
    lwz r0, 0xc0(r30)
    ori r0, r0, 0x2
    stw r0, 0xc0(r30)
lbl_800684E8:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    li r0, 0x28
    opword 0x13A1000C
    lfd f29, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80068524
asm s32 fn_80068524() {
    nofralloc
    mr r5, r3
    lwz r4, 0x3854(r3)
    cmpwi r4, 0x0
    beq lbl_80068540
    addi r3, r3, 0x3894
    addi r4, r4, 0x84
    b fn_80019DAC
lbl_80068540:
    addi r3, r3, 0x3894
    addi r4, r5, 0x84
    b fn_80019DAC
}

// asm_to_cpp: fn_8006854C
asm f32 fn_8006854C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x3878(r3)
    cmpwi r4, 0x0
    bne lbl_80068574
    lfs f1, lbl_8049EE48
    b lbl_800685BC
lbl_80068574:
    lwz r0, 0x2c4(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006858C
    lfs f1, lbl_8049EE48
    b lbl_800685BC
lbl_8006858C:
    addi r3, r1, 0x8
    addi r4, r4, 0x5e0
    addi r5, r31, 0x3894
    bl fn_8001B8B8
    lfs f1, 0x8(r1)
    lfs f0, 0x10(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    lfs f0, 0xa0(r31)
    fsubs f1, f1, f0
    bl fn_80172688
lbl_800685BC:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800685D0
asm s32 fn_800685D0(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, 0x3878(r3)
    cmpwi r31, 0x0
    bne lbl_80068604
    li r3, 0x1
    b lbl_800686F4
lbl_80068604:
    lwz r0, 0x2c4(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80068624
    li r0, 0x0
    stw r0, 0x3878(r3)
    li r3, 0x1
    b lbl_800686F4
lbl_80068624:
    bl fn_8006854C
    lfs f2, lbl_8049EE48
    la r3, lbl_8049EE48
    lfs f3, 0x54(r3)
    lfs f4, 0x58(r3)
    bl fn_801728FC
    fmr f31, f1
    lfs f0, 0xa0(r30)
    fadds f1, f0, f1
    stfs f1, 0xa0(r30)
    lwz r3, 0x377c(r30)
    bl fn_80182220
    lfs f0, lbl_8049EE48
    fcmpo cr0, f31, f0
    ble lbl_80068670
    lwz r0, 0x54(r30)
    oris r0, r0, 0x8
    stw r0, 0x54(r30)
    b lbl_8006867C
lbl_80068670:
    lwz r0, 0x54(r30)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x54(r30)
lbl_8006867C:
    addi r3, r1, 0x8
    addi r4, r31, 0x5e0
    bl fn_80019DAC
    lfs f1, 0xa0(r30)
    bl fn_80018C2C
    lfs f0, 0x387c(r30)
    fmuls f1, f0, f1
    lfs f0, 0x5e0(r31)
    fadds f0, f0, f1
    stfs f0, 0x84(r30)
    lfs f1, 0xa0(r30)
    bl fn_80018C3C
    fneg f1, f1
    lfs f0, 0x387c(r30)
    fmuls f1, f0, f1
    lfs f0, 0x5e8(r31)
    fadds f0, f0, f1
    stfs f0, 0x8c(r30)
    lwz r3, 0x377c(r30)
    addi r4, r30, 0x84
    bl fn_80182518
    fmr f1, f31
    bl fn_80018BD4
    la r3, lbl_8049EE48
    lfs f0, 0x5c(r3)
    fcmpo cr0, f1, f0
    bge lbl_800686F0
    li r3, 0x1
    b lbl_800686F4
lbl_800686F0:
    li r3, 0x0
lbl_800686F4:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80068718
asm M2C_UNK fn_80068718(f32 *arg0) {
    nofralloc
    lfs f1, 0x0(r3)
    lfs f0, 0x8(r3)
    fneg f2, f0
    b fn_800674B8
}

// asm_to_cpp: fn_80068728
asm M2C_UNK fn_80068728(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f0, 0x0(r3)
    fmuls f1, f0, f0
    lfs f0, 0x8(r3)
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8001DA9C
    fmr f2, f1
    lfs f1, 0x4(r31)
    bl fn_800674B8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80068774
asm M2C_UNK fn_80068774(s8 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    fmr f31, f1
    lwz r3, 0x377c(r3)
    li r4, 0x0
    bl fn_8018149C
    lfs f0, 0x3c(r3)
    fadds f1, f31, f0
    bl fn_80172688
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800687C0
asm M2C_UNK fn_800687C0(s8 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    fmr f31, f1
    lwz r3, 0x377c(r3)
    li r4, 0x0
    bl fn_8018149C
    lfs f0, 0x3c(r3)
    fsubs f1, f31, f0
    bl fn_80172688
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006880C
asm s32 fn_8006880C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80068884
    bl fn_8005E4A4
    lwz r30, 0x8(r3)
    lwz r3, 0x3908(r3)
    lwz r3, 0x8(r3)
    li r29, 0x0
    b lbl_80068868
lbl_80068854:
    lwz r0, 0x0(r3)
    cmplw r28, r0
    beq lbl_80068870
    lwz r3, 0x8(r3)
    addi r29, r29, 0x1
lbl_80068868:
    cmpwi r3, 0x0
    bne lbl_80068854
lbl_80068870:
    cmpwi r3, 0x0
    beq lbl_8006887C
    b lbl_8006888C
lbl_8006887C:
    li r29, -0x1
    b lbl_8006888C
lbl_80068884:
    lwz r30, 0x8(r3)
    li r29, -0x1
lbl_8006888C:
    clrlwi r31, r30, 31
    cmpwi r31, 0x0
    beq lbl_800688A4
    la r3, lbl_8049EE48
    lfs f31, 0x34(r3)
    b lbl_800688AC
lbl_800688A4:
    la r3, lbl_8049EE48
    lfs f31, 0x60(r3)
lbl_800688AC:
    addi r3, r1, 0x14
    bl fn_800868F4
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r0, 0x14(r4)
    cmplwi r0, 0x1
    bne lbl_80068A38
    cmplwi r30, 0xb
    bgt lbl_80068D14
    lis r3, jumptable_8034AD18@ha
    addi r3, r3, jumptable_8034AD18@l
    slwi r0, r30, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f1
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x64(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x6c(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x68(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x70(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x68(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x6c(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x64(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x70(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x64(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x70(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x70(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x6c(r4)
    bl fn_80018B0C
    b lbl_80068D14
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x6c(r4)
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068A38:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x118(r3)
    cmpwi r0, 0x1
    bne lbl_80068AE4
    cmpwi r30, 0x0
    beq lbl_80068A74
    cmpwi r30, 0x1
    beq lbl_80068A90
    cmpwi r30, 0x2
    beq lbl_80068AAC
    cmpwi r30, 0x3
    beq lbl_80068AC8
    b lbl_80068D14
lbl_80068A74:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068A90:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068AAC:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x6c(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068AC8:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x70(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068AE4:
    cmpwi r0, 0x2
    bne lbl_80068B80
    cmpwi r30, 0x0
    beq lbl_80068B10
    cmpwi r30, 0x1
    beq lbl_80068B2C
    cmpwi r30, 0x2
    beq lbl_80068B48
    cmpwi r30, 0x3
    beq lbl_80068B64
    b lbl_80068D14
lbl_80068B10:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068B2C:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x6c(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068B48:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068B64:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x70(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068B80:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_80068CCC
    lwz r0, 0x4(r4)
    cmplwi r0, 0xe
    bne lbl_80068C38
    lwz r0, 0x8(r4)
    cmplwi r0, 0x14
    bne lbl_80068C38
    cmpwi r30, 0x0
    beq lbl_80068BC8
    cmpwi r30, 0x1
    beq lbl_80068BE4
    cmpwi r30, 0x2
    beq lbl_80068C00
    cmpwi r30, 0x3
    beq lbl_80068C1C
    b lbl_80068D14
lbl_80068BC8:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x6c(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f1
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068BE4:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x70(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f1
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068C00:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x6c(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x70(r4)
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068C1C:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x70(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x6c(r4)
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068C38:
    cmpwi r30, 0x0
    beq lbl_80068C5C
    cmpwi r30, 0x1
    beq lbl_80068C78
    cmpwi r30, 0x2
    beq lbl_80068C94
    cmpwi r30, 0x3
    beq lbl_80068CB0
    b lbl_80068D14
lbl_80068C5C:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x74(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x68(r4)
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068C78:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x78(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068C94:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x74(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x64(r4)
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068CB0:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x78(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x6c(r4)
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068CCC:
    cmpwi r30, 0x0
    beq lbl_80068CE0
    cmpwi r30, 0x1
    beq lbl_80068CFC
    b lbl_80068D14
lbl_80068CE0:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80068D14
lbl_80068CFC:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
lbl_80068D14:
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    cmpwi r29, 0x0
    beq lbl_80068D50
    cmpwi r29, 0x1
    beq lbl_80068D94
    cmpwi r29, 0x2
    beq lbl_80068DD8
    cmpwi r29, 0x3
    beq lbl_80068E1C
    cmpwi r29, 0x4
    beq lbl_80068E60
    b lbl_80068E74
lbl_80068D50:
    la r3, lbl_8049EE48
    lfs f1, 0x14(r1)
    lfs f0, 0xc(r3)
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
    cmpwi r31, 0x0
    bne lbl_80068D80
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068D80:
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068D94:
    la r3, lbl_8049EE48
    lfs f1, 0x14(r1)
    lfs f0, 0x70(r3)
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
    cmpwi r31, 0x0
    bne lbl_80068DC4
    lfs f1, 0x1c(r1)
    lfs f0, 0xc(r3)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068DC4:
    lfs f1, 0x1c(r1)
    lfs f0, 0xc(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068DD8:
    la r3, lbl_8049EE48
    lfs f1, 0x14(r1)
    lfs f0, 0x7c(r3)
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
    cmpwi r31, 0x0
    bne lbl_80068E08
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068E08:
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068E1C:
    la r3, lbl_8049EE48
    lfs f1, 0x14(r1)
    lfs f0, 0x7c(r3)
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
    cmpwi r31, 0x0
    bne lbl_80068E4C
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068E4C:
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_80068E74
lbl_80068E60:
    la r3, lbl_8049EE48
    lfs f1, 0x14(r1)
    lfs f0, 0x7c(r3)
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
lbl_80068E74:
    lwz r3, 0x377c(r28)
    addi r4, r1, 0x14
    bl fn_80182518
    lwz r3, 0x377c(r28)
    fmr f1, f31
    bl fn_80182220
    lwz r3, 0x377c(r28)
    addi r4, r28, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r28)
    bl fn_801826B8
    stfs f1, 0xa0(r28)
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80068EC8
asm void fn_80068EC8(s32 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r30, r3
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80068F3C
    bl fn_8005E4A4
    lwz r4, 0x3908(r3)
    lwz r4, 0x8(r4)
    li r31, 0x0
    b lbl_80068F20
lbl_80068F0C:
    lwz r0, 0x0(r4)
    cmplw r30, r0
    beq lbl_80068F28
    lwz r4, 0x8(r4)
    addi r31, r31, 0x1
lbl_80068F20:
    cmpwi r4, 0x0
    bne lbl_80068F0C
lbl_80068F28:
    cmpwi r4, 0x0
    beq lbl_80068F34
    b lbl_80068F40
lbl_80068F34:
    li r31, -0x1
    b lbl_80068F40
lbl_80068F3C:
    li r31, -0x1
lbl_80068F40:
    lwz r0, 0x10(r3)
    slwi r0, r0, 2
    lis r4, lbl_803906D0@ha
    addi r4, r4, lbl_803906D0@l
    lwzx r4, r4, r0
    lwz r5, 0xc(r4)
    li r28, 0x0
    b lbl_80068F88
lbl_80068F60:
    lwz r4, 0x0(r5)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80068F84
    cmplw r3, r4
    bne lbl_80068F80
    mr r29, r28
lbl_80068F80:
    addi r28, r28, 0x1
lbl_80068F84:
    lwz r5, 0xc(r5)
lbl_80068F88:
    cmpwi r5, 0x0
    bne lbl_80068F60
    lfs f31, lbl_8049EE48
    addi r3, r1, 0x14
    bl fn_800868F4
    cmpwi r28, 0x1
    beq lbl_80068FB8
    cmpwi r28, 0x2
    beq lbl_80068FD0
    cmpwi r28, 0x3
    beq lbl_8006901C
    b lbl_80069084
lbl_80068FB8:
    addi r3, r1, 0x8
    lfs f1, lbl_8049EE48
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    b lbl_80069084
lbl_80068FD0:
    cmpwi r29, 0x0
    beq lbl_80068FE4
    cmpwi r29, 0x1
    beq lbl_80069000
    b lbl_80069084
lbl_80068FE4:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    fmr f3, f2
    bl fn_80018B0C
    b lbl_80069084
lbl_80069000:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x64(r4)
    bl fn_80018B0C
    b lbl_80069084
lbl_8006901C:
    cmpwi r29, 0x0
    beq lbl_80069038
    cmpwi r29, 0x1
    beq lbl_80069050
    cmpwi r29, 0x2
    beq lbl_8006906C
    b lbl_80069084
lbl_80069038:
    addi r3, r1, 0x8
    lfs f1, lbl_8049EE48
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    b lbl_80069084
lbl_80069050:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x68(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x6c(r4)
    bl fn_80018B0C
    b lbl_80069084
lbl_8006906C:
    addi r3, r1, 0x8
    la r4, lbl_8049EE48
    lfs f1, 0x64(r4)
    lfs f2, lbl_8049EE48
    lfs f3, 0x6c(r4)
    bl fn_80018B0C
lbl_80069084:
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x8
    bl fn_80018B00
    cmpwi r31, 0x0
    beq lbl_800690C0
    cmpwi r31, 0x1
    beq lbl_800690E4
    cmpwi r31, 0x2
    beq lbl_80069108
    cmpwi r31, 0x3
    beq lbl_80069130
    cmpwi r31, 0x4
    beq lbl_80069158
    b lbl_8006916C
lbl_800690C0:
    la r3, lbl_8049EE48
    lfs f0, 0x14(r1)
    lfs f1, 0xc(r3)
    fadds f0, f0, f1
    stfs f0, 0x14(r1)
    lfs f0, 0x1c(r1)
    fadds f0, f0, f1
    stfs f0, 0x1c(r1)
    b lbl_8006916C
lbl_800690E4:
    la r3, lbl_8049EE48
    lfs f0, 0x14(r1)
    lfs f1, 0xc(r3)
    fsubs f0, f0, f1
    stfs f0, 0x14(r1)
    lfs f0, 0x1c(r1)
    fadds f0, f0, f1
    stfs f0, 0x1c(r1)
    b lbl_8006916C
lbl_80069108:
    la r3, lbl_8049EE48
    lfs f1, 0x14(r1)
    lfs f0, 0xc(r3)
    fadds f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_8006916C
lbl_80069130:
    la r3, lbl_8049EE48
    lfs f1, 0x14(r1)
    lfs f0, 0xc(r3)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
    b lbl_8006916C
lbl_80069158:
    la r3, lbl_8049EE48
    lfs f1, 0x1c(r1)
    lfs f0, 0x68(r3)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
lbl_8006916C:
    lwz r3, 0x377c(r30)
    li r4, 0x0
    bl fn_8018149C
    lfs f0, lbl_8049EE48
    stfs f0, 0x3c(r3)
    lwz r3, 0x377c(r30)
    addi r4, r1, 0x14
    bl fn_80182518
    lwz r3, 0x377c(r30)
    fmr f1, f31
    bl fn_80182220
    lwz r3, 0x377c(r30)
    addi r4, r30, 0x84
    bl fn_80182744
    lwz r3, 0x377c(r30)
    bl fn_801826B8
    stfs f1, 0xa0(r30)
    li r0, 0x0
    stw r0, 0x114(r30)
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800691DC
asm f32 fn_800691DC(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80069208
    lwz r0, 0x377c(r4)
    cmpwi r0, 0x0
    bne lbl_80069208
    li r4, 0x0
lbl_80069208:
    cmpwi r4, 0x0
    beq lbl_80069220
    addi r3, r1, 0x8
    addi r4, r4, 0x84
    bl fn_80019DAC
    b lbl_80069228
lbl_80069220:
    addi r3, r1, 0x8
    bl fn_800868F4
lbl_80069228:
    lfs f1, 0x88(r31)
    lfs f0, 0xc(r1)
    fsubs f1, f1, f0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80069248
asm M2C_UNK fn_80069248(s8 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80069274
    lwz r0, 0x377c(r4)
    cmpwi r0, 0x0
    bne lbl_80069274
    li r4, 0x0
lbl_80069274:
    cmpwi r4, 0x0
    beq lbl_8006928C
    addi r3, r1, 0x8
    addi r4, r4, 0x84
    bl fn_80019DAC
    b lbl_80069294
lbl_8006928C:
    addi r3, r1, 0x8
    bl fn_800868F4
lbl_80069294:
    addi r3, r1, 0x8
    addi r4, r31, 0x84
    mr r5, r3
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_80068718
    lfs f0, 0xa0(r31)
    fsubs f1, f1, f0
    bl fn_80172688
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800692CC
asm s32 fn_800692CC(s8 *arg0) {
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
    bl fn_8005E4A4
    mr r31, r3
    lwz r30, 0x3854(r29)
    cmpwi r3, 0x0
    bne lbl_80069310
    li r3, 0x0
    b lbl_800693E0
lbl_80069310:
    lwz r3, 0x377c(r29)
    addi r4, r1, 0x14
    bl fn_80182744
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x8
    bl fn_80182744
    lfs f0, 0xa20(r29)
    stfs f0, 0x18(r1)
    lfs f0, 0xa20(r31)
    stfs f0, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001D9AC
    fmr f31, f1
    cmpwi r30, 0x0
    beq lbl_80069378
    lwz r3, 0x377c(r30)
    addi r4, r1, 0x8
    bl fn_80182744
    lfs f0, 0xa20(r30)
    stfs f0, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001D9AC
    fmr f30, f1
    b lbl_80069380
lbl_80069378:
    la r3, lbl_8049EE48
    lfs f30, 0x80(r3)
lbl_80069380:
    fcmpo cr0, f31, f30
    bge lbl_80069390
    li r3, 0x0
    b lbl_800693E0
lbl_80069390:
    cmpwi r30, 0x0
    beq lbl_800693DC
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x14
    bl fn_80182744
    lwz r3, 0x377c(r30)
    addi r4, r1, 0x8
    bl fn_80182744
    lfs f0, 0xa20(r31)
    stfs f0, 0x18(r1)
    lfs f0, 0xa20(r30)
    stfs f0, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001D9AC
    fcmpo cr0, f1, f30
    bge lbl_800693DC
    li r3, 0x0
    b lbl_800693E0
lbl_800693DC:
    li r3, 0x1
lbl_800693E0:
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

// asm_to_cpp: fn_80069410
asm void fn_80069410(s8 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    stw r31, 0x24(r1)
    stw r30, 0x20(r1)
    mr r30, r3
    fmr f31, f1
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800694A4
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_800694A4
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_800694A4
    mr r3, r30
    bl fn_8005E4A4
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_800694A4
    lwz r3, 0x377c(r30)
    addi r4, r1, 0x14
    bl fn_80182744
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x8
    bl fn_80182744
    addi r3, r30, 0x84
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    fmr f1, f31
    bl fn_8001D9D0
    lwz r3, 0x377c(r30)
    addi r4, r30, 0x84
    bl fn_80182518
lbl_800694A4:
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    lwz r30, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800694C0
asm f32 fn_800694C0(u16 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    sth r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_80069558
    lfs f1, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800694F0
asm M2C_UNK fn_800694F0(u16 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    clrlwi r3, r3, 16
    bl fn_800694C0
    la r3, lbl_8049EE48
    lfs f0, 0x1c(r3)
    fmuls f1, f0, f1
    bl CosFIdx__Q24nw4r4mathFf
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80069524
asm M2C_UNK fn_80069524(u16 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    clrlwi r3, r3, 16
    bl fn_800694C0
    la r3, lbl_8049EE48
    lfs f0, 0x1c(r3)
    fmuls f1, f0, f1
    bl SinFIdx__Q24nw4r4mathFf
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80069558
asm void fn_80069558(s32 arg0, u16 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_80069588
    stfs f1, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80069588
asm f32 fn_80069588(void) {
    nofralloc
    opword 0xE023B000
    blr
}

} // extern "C"
