#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 jumptable_8034CE44[];
extern u8 lbl_80339938[];
extern u8 lbl_8034CD78[];
extern u8 lbl_8034CE74[];
extern u8 lbl_80395728[];
extern u8 lbl_803A1CD0[];
extern u8 lbl_803A1D58[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049D5C0;
extern float lbl_8049D5C4;
extern float lbl_8049D5C8;
extern float lbl_8049D5CC;
extern float lbl_8049F580;
extern float lbl_8049F588;
extern float lbl_8049F590;

void C_QUATMtx(s32 arg0, s32 arg1);
void PSMTXQuat(s32 arg0, s32 arg1);
void _restfpr_28();
void _restgpr_22();
void _restgpr_23();
void _restgpr_24();
void _restgpr_25();
void _restgpr_26();
void _restgpr_27();
void _restgpr_28();
void _restgpr_29();
void _savefpr_28();
void _savegpr_22();
void _savegpr_23();
void _savegpr_24();
void _savegpr_25();
void _savegpr_26();
void _savegpr_27();
void _savegpr_28();
void _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
void fn_8002AB78(s32 *arg0, s32 *arg1);
void fn_8002B044(s8 *arg0, s8 *arg1);
void fn_800340D8(s32 *arg0, s32 arg1);
void fn_80034128(s32 *arg0, s8 *arg1);
void fn_80034178(s32 *arg0, s32 arg1);
M2C_UNK fn_800341DC(s32 *arg0);
M2C_UNK fn_8003421C(s32 *arg0, s32 arg1);
s32 fn_8003F82C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003F8A0(s32 arg0, s8 *arg1);
s32 fn_8003FA5C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003FADC(s32 arg0, s8 *arg1);
M2C_UNK fn_80041290(f32 farg0);
M2C_UNK fn_800412A0(f32 farg0);
f32 fn_800674B8(s32 arg0, s32 arg1);
s32 fn_8008AE14(void);
s8 * fn_800A0F08(u32 arg0);
s8 * fn_800A0F50(s32 arg0);
void fn_800A1040(s32 arg0);
s32 fn_800A1234(s32 arg0, s32 arg1);
s32 fn_800A14C8(void);
s32 fn_800A1584(void);
s32 fn_800A15E0(s32 *arg0, s32 arg1);
void fn_800A16EC(void);
void fn_800A1938(s32 arg0, s32 arg1);
void fn_800A19BC(s32 arg0, s32 arg1);
void fn_800A1A54(void);
void fn_800A1BF4(void);
s32 fn_800A1D94(s32 arg0);
s32 fn_800A1DE8(u16 arg0, s32 arg1, s32 arg2);
s32 fn_800A1F2C(s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800A204C(s32 arg0, s32 arg1);
s8 fn_800A21A8(s8 *arg0);
s32 fn_800A2560(s8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, s32 arg5);
s32 fn_800A2738(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_800A281C(s32 arg0);
s32 fn_800A28A8(s8 *arg0, s8 *arg1, s32 *arg2, s32 arg3, f32 farg0);
s32 fn_800A3184(s32 arg0, s32 arg1);
s32 fn_800A32B8(s32 arg0);
u8 * fn_800A332C(void);
s32 fn_800A337C(s32 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0);
s32 fn_800A3624(s32 arg0, u8 arg1, s8 *arg2, f32 farg0);
s32 fn_800A37F4(u16 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0);
s32 fn_800A39E0(u16 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0);
s32 fn_800A3BD0(u16 arg0, u8 arg1, s32 arg3, f32 farg0);
s32 fn_800A3CD4(u16 arg0, s32 arg1, f32 *arg2, f32 farg0);
s32 fn_800A3D8C(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, f32 *arg4, f32 *arg5);
void fn_800A3FA8(void);
void fn_800A401C();
void fn_800A42B0(s8 *arg0, f32 farg1);
void fn_800A45DC(s8 *arg0, f32 farg1);
void fn_800A466C(s8 *arg0, f32 farg1);
void fn_800A4940(s8 *arg0, f32 farg1);
void fn_800A4C60(void);
s32 fn_800A4C64(f32 *arg0, f32 *arg1, s8 *arg2);
s32 * fn_800A4DFC(s32 arg0);
s8 * fn_800A4E30(s32 arg0);
s32 fn_800A4E88(void);
s32 fn_800A4EE4(s32 arg0);
s32 fn_800A4F40(void);
s32 fn_800A4F48(s32 arg0, u32 *arg1);
void fn_800A4FD0();
void fn_800A5008(s32 arg0, s32 arg1);
void fn_800A5030(f32 *arg0, f32 *arg1, f32 farg0, f32 farg1);
s8 * fn_80122824(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80122DA4(u16 arg0, s8 *arg1);
void fn_80122FF0();
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8016499C(s32 arg0, s32 arg1, s32 arg2);
void fn_80168440(s8 *arg0, f32 farg0, f32 farg1, s32 arg3);
void fn_801684F0(f32 *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_801685C8(s8 *arg0);
M2C_UNK fn_80170DFC(s32 arg0);
void fn_80170E18(M2C_UNK **arg0);
void fn_80171454(s32 arg0);
s32 fn_801714F0(void);
f32 fn_80172688(f32 farg0);
void fn_8017347C(s32 arg0, f32 *arg1);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173580();
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80173730(s32 arg0, s32 arg1, s32 arg2);
void fn_80173750(s32 arg0);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80177170(s32 arg0, M2C_UNK *arg1, s32 arg2);
void fn_801773E0(s32 arg0);
void fn_8017776C(s32 arg0);
s32 * fn_8017ADBC(s32 arg0);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80182220(s8 *arg0, f32 farg0);
void fn_80182518(s8 *arg0, s8 *arg1);
s32 fn_801831EC(s8 *arg0, s32 arg1, f32 farg0);
f32 fn_801A32A0(f64 farg0, f64 farg1);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void strcpy(s32 arg0, s32 arg1);

// asm_to_cpp: fn_800A14C8
asm s32 fn_800A14C8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D5C0
    cmpwi r0, 0x0
    bne lbl_800A1570
    lfs f0, lbl_8049F590
    stfs f0, lbl_8049D5C8
    stfs f0, lbl_8049D5C4
    stfs f0, lbl_8049D5CC
    lis r3, lbl_8034CE74@ha
    addi r3, r3, lbl_8034CE74@l
    addi r3, r3, 0x19b
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_800A1528
    li r3, 0xfc
    bl fn_80122DA4
lbl_800A1528:
    li r3, 0x19
    lis r4, fn_800A15E0@ha
    addi r4, r4, fn_800A15E0@l
    li r5, 0xc
    bl fn_80177170
    stw r3, lbl_8049D5C0
    cmpwi r3, 0x0
    beq lbl_800A1570
    li r4, 0x0
    li r5, 0xc
    bl memset
    li r0, -0x1
    lwz r3, lbl_8049D5C0
    stw r0, 0x8(r3)
    lwz r3, lbl_8049D5C0
    bl fn_801773E0
    li r3, 0x0
    b lbl_800A1574
lbl_800A1570:
    li r3, 0x0
lbl_800A1574:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A1584
asm s32 fn_800A1584(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lfs f0, lbl_8049F590
    stfs f0, lbl_8049D5C8
    stfs f0, lbl_8049D5C4
    stfs f0, lbl_8049D5CC
    lwz r0, lbl_8049D5C0
    cmpwi r0, 0x0
    beq lbl_800A15CC
    li r3, 0xfc
    bl fn_80122FF0
    lwz r3, lbl_8049D5C0
    bl fn_8017776C
    li r0, 0x0
    stw r0, lbl_8049D5C0
    li r3, 0x1
    b lbl_800A15D0
lbl_800A15CC:
    li r3, 0x0
lbl_800A15D0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A15E0
asm s32 fn_800A15E0(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_800A161C
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_800A16D0
    li r0, 0xf0
    stw r0, 0x0(r3)
    li r3, 0x1
    b lbl_800A16D4
lbl_800A161C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_800A1644
    cmpwi r0, 0x1
    beq lbl_800A1650
    cmpwi r0, 0xf0
    beq lbl_800A16B8
    cmpwi r0, 0xf1
    beq lbl_800A16C4
    b lbl_800A16D0
lbl_800A1644:
    li r0, 0x1
    stw r0, 0x0(r3)
    b lbl_800A16D0
lbl_800A1650:
    bl fn_800A16EC
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_800A16D0
    li r30, 0x0
    lis r3, lbl_803A1D58@ha
    addi r31, r3, lbl_803A1D58@l
    b lbl_800A16A8
lbl_800A1670:
    mr r3, r30
    bl fn_800A4E30
    cmpwi r3, 0x0
    beq lbl_800A16A4
    lwz r0, 0x7c(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A16A4
    bl fn_800A21A8
    mr r3, r30
    bl fn_800A281C
    mr r3, r30
    bl fn_800A1040
lbl_800A16A4:
    addi r30, r30, 0x1
lbl_800A16A8:
    lbz r0, 0xc(r31)
    cmpw r30, r0
    blt lbl_800A1670
    b lbl_800A16D0
lbl_800A16B8:
    li r0, 0xf1
    stw r0, 0x0(r3)
    b lbl_800A16D0
lbl_800A16C4:
    bl fn_800A1584
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_800A16D0:
    li r3, 0x0
lbl_800A16D4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A16EC
asm void fn_800A16EC(void) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    stfd f29, 0x70(r1)
    opword 0xF3A10078
    stfd f28, 0x60(r1)
    opword 0xF3810068
    addi r11, r1, 0x60
    bl _savegpr_26
    lis r31, lbl_803A1CD0@ha
    lwz r0, lbl_803A1CD0@l(r31)
    cmpwi r0, 0x0
    beq lbl_800A18F0
    li r3, 0x0
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_800A18F0
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x38
    addi r4, r4, 0x4
    bl fn_8002B044
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x2c
    addi r4, r4, 0x1c
    bl fn_8002B044
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    addi r5, r1, 0x38
    bl fn_8001B8B8
    lfs f0, lbl_8049F590
    stfs f0, 0x24(r1)
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B4
    la r29, lbl_8049F590
    lfs f0, 0x4(r29)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_800A18F0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    li r3, 0x0
    bl fn_8017ADBC
    lfs f1, 0x38(r3)
    bl fn_80018C3C
    fmr f28, f1
    li r28, 0x0
    li r30, 0x0
    lfs f29, lbl_8049F590
    lfs f30, 0x8(r29)
    lfs f31, 0xc(r29)
    addi r29, r31, lbl_803A1CD0@l
    b lbl_800A18E4
lbl_800A17E4:
    add r3, r29, r30
    lwz r26, 0x8(r3)
    cmpwi r26, 0x0
    beq lbl_800A18DC
    addi r3, r1, 0x10
    lwz r4, 0x377c(r26)
    addi r4, r4, 0x114
    bl fn_8002AB78
    li r3, 0x0
    lwz r0, 0x58(r26)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A18DC
    lwz r0, 0x7c(r26)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A1830
    li r27, 0x1
    li r3, 0x1
lbl_800A1830:
    cmpwi r3, 0x0
    bne lbl_800A18A8
    addi r3, r1, 0x14
    addi r4, r26, 0x84
    addi r5, r1, 0x38
    bl fn_8001B8B8
    stfs f29, 0x18(r1)
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B4
    fcmpo cr0, f1, f30
    ble lbl_800A1868
    li r27, 0x0
    b lbl_800A18A8
lbl_800A1868:
    fcmpo cr0, f1, f31
    bge lbl_800A1878
    li r27, 0x1
    b lbl_800A18A8
lbl_800A1878:
    stfs f29, 0x18(r1)
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_8001B8B4
    fcmpo cr0, f1, f28
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r27, r0, 5
lbl_800A18A8:
    cmpwi r27, 0x0
    beq lbl_800A18C8
    lwz r0, 0x10(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_800340D8
    b lbl_800A18DC
lbl_800A18C8:
    lwz r0, 0x10(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80034128
lbl_800A18DC:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_800A18E4:
    lwz r0, lbl_803A1CD0@l(r31)
    cmplw r28, r0
    blt lbl_800A17E4
lbl_800A18F0:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    li r0, 0x78
    opword 0x13A1000C
    lfd f29, 0x70(r1)
    li r0, 0x68
    opword 0x1381000C
    lfd f28, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_800A1938
asm void fn_800A1938(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r5, r3
    mr r31, r4
    addi r4, r1, 0x4
    li r3, 0x0
    li r0, 0x8
    mtctr r0
lbl_800A1960:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_800A1960
    addi r3, r1, 0x8
    mr r4, r5
    bl strcpy
    cmpwi r31, 0x0
    beq lbl_800A1994
    addi r3, r1, 0x8
    li r4, 0x5
    li r5, 0x0
    bl fn_801648C4
    b lbl_800A19A4
lbl_800A1994:
    addi r3, r1, 0x8
    li r4, 0x5
    li r5, 0x0
    bl fn_8016499C
lbl_800A19A4:
    cmpwi r3, 0x0
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800A19BC
asm void fn_800A19BC(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    cmpwi r4, 0x0
    bge lbl_800A19DC
    li r4, 0x8
lbl_800A19DC:
    cmpwi r3, 0x0
    bgt lbl_800A19EC
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_800A19EC:
    lis r5, lbl_803A1D58@ha
    addi r31, r5, lbl_803A1D58@l
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_800A1A3C
    clrlwi r0, r3, 24
    stb r0, 0xc(r31)
    clrlwi r0, r4, 24
    stb r0, 0xe(r31)
    slwi r30, r3, 8
    mulli r0, r4, 0x3c
    add r29, r30, r0
    mr r3, r29
    bl fn_80170DFC
    stw r3, 0x30(r31)
    add r0, r3, r30
    stw r0, 0x34(r31)
    li r4, 0x0
    mr r5, r29
    bl memset
lbl_800A1A3C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800A1A54
asm void fn_800A1A54(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lis r4, lbl_803A1D58@ha
    addi r3, r4, lbl_803A1D58@l
    addi r31, r3, 0x38
    lwz r3, lbl_803A1D58@l(r4)
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_800A1BDC
    ori r3, r3, 0x80
    stw r3, lbl_803A1D58@l(r4)
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_800A1AA0
    rlwinm r0, r3, 0, 23, 21
    stw r0, lbl_803A1D58@l(r4)
lbl_800A1AA0:
    li r3, 0x1
    bl fn_80171454
    lfs f2, lbl_8049F590
    stfs f2, lbl_8049D5C8
    stfs f2, lbl_8049D5C4
    stfs f2, lbl_8049D5CC
    li r0, 0x0
    lis r5, lbl_803A1D58@ha
    addi r4, r5, lbl_803A1D58@l
    stb r0, 0xc(r4)
    stb r0, 0xd(r4)
    stw r0, 0x30(r4)
    la r3, lbl_8049F590
    lfs f1, 0x14(r3)
    stfs f1, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f1, 0x18(r4)
    lfs f0, 0x18(r3)
    stfs f0, 0x1c(r4)
    stfs f1, 0x20(r4)
    stfs f1, 0x24(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0x28(r4)
    stfs f2, 0x2c(r4)
    stb r0, 0xf(r4)
    stb r0, 0xe(r4)
    stw r0, 0x34(r4)
    lwz r3, lbl_803A1D58@l(r5)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_800A1B28
    rlwinm r0, r3, 0, 26, 24
    stw r0, lbl_803A1D58@l(r5)
    b lbl_800A1BDC
lbl_800A1B28:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_800A1B48
    stw r0, 0x274(r31)
    li r0, 0x12
    stw r0, 0x4(r3)
lbl_800A1B48:
    li r3, 0x0
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_800A1B8C
    lfs f0, 0x38(r3)
    stfs f0, 0x264(r31)
    lfs f0, 0x3c(r3)
    stfs f0, 0x268(r31)
    lfs f0, 0x40(r3)
    stfs f0, 0x26c(r31)
    lfs f0, 0x44(r3)
    stfs f0, 0x270(r31)
    lis r3, lbl_803A1D58@ha
    lwz r0, lbl_803A1D58@l(r3)
    ori r0, r0, 0x8
    stw r0, lbl_803A1D58@l(r3)
    b lbl_800A1B9C
lbl_800A1B8C:
    lis r3, lbl_803A1D58@ha
    lwz r0, lbl_803A1D58@l(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, lbl_803A1D58@l(r3)
lbl_800A1B9C:
    li r29, 0x0
    li r30, 0x0
lbl_800A1BA4:
    cmplwi r29, 0x8
    bne lbl_800A1BBC
    li r3, 0x0
    add r4, r31, r30
    bl fn_8003FADC
    b lbl_800A1BCC
lbl_800A1BBC:
    li r3, 0x0
    mr r4, r29
    add r5, r31, r30
    bl fn_8003FA5C
lbl_800A1BCC:
    addi r29, r29, 0x1
    addi r30, r30, 0x44
    cmplwi r29, 0x9
    blt lbl_800A1BA4
lbl_800A1BDC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800A1BF4
asm void fn_800A1BF4(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r4, lbl_803A1D58@ha
    lwz r3, lbl_803A1D58@l(r4)
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_800A1D7C
    rlwinm r0, r3, 0, 25, 23
    stw r0, lbl_803A1D58@l(r4)
    li r26, 0x0
    li r31, 0x0
    li r30, 0x501
    mr r29, r31
    addi r28, r4, lbl_803A1D58@l
    b lbl_800A1C8C
lbl_800A1C3C:
    lwz r0, 0x30(r28)
    add r27, r0, r31
    lwz r0, 0x0(r27)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A1C84
    lwz r3, 0x4(r27)
    bl fn_800A0F08
    stw r29, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_800A1C84
    lwz r0, 0x7c(r3)
    clrrwi r0, r0, 1
    stw r0, 0x7c(r3)
    lwz r0, 0x140(r3)
    cmpwi r0, 0x500
    bne lbl_800A1C84
    stw r30, 0x140(r3)
lbl_800A1C84:
    addi r26, r26, 0x1
    addi r31, r31, 0x100
lbl_800A1C8C:
    lbz r0, 0xc(r28)
    cmplw r26, r0
    blt lbl_800A1C3C
    li r31, 0x0
    stb r31, 0xc(r28)
    stb r31, 0xd(r28)
    stb r31, 0xe(r28)
    stw r31, 0x34(r28)
    lwz r3, 0x30(r28)
    cmpwi r3, 0x0
    beq lbl_800A1CC0
    bl fn_80170E18
    stw r31, 0x30(r28)
lbl_800A1CC0:
    lis r3, lbl_803A1D58@ha
    lwz r4, lbl_803A1D58@l(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_800A1CE0
    clrrwi r0, r4, 1
    stw r0, lbl_803A1D58@l(r3)
    b lbl_800A1D18
lbl_800A1CE0:
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_800A1CF4
    clrrwi r0, r4, 1
    stw r0, lbl_803A1D58@l(r3)
lbl_800A1CF4:
    lis r3, lbl_803A1D58@ha
    lwz r0, lbl_803A1D58@l(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, lbl_803A1D58@l(r3)
    addi r3, r3, lbl_803A1D58@l
    lwz r0, 0x2ac(r3)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0x4(r3)
lbl_800A1D18:
    lis r3, lbl_803A1CD0@ha
    addi r6, r3, lbl_803A1CD0@l
    lwz r3, 0x4(r6)
    subi r5, r3, 0x1
    li r4, 0xf0
    slwi r3, r5, 2
    addi r0, r5, 0x1
    mtctr r0
    cmpwi r5, -0x1
    ble lbl_800A1D74
lbl_800A1D40:
    add r5, r6, r3
    lwz r5, 0x8(r5)
    lwz r0, 0x7c(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A1D6C
    lwz r5, 0x20(r5)
    lwz r0, 0x0(r5)
    cmpwi r0, 0xf0
    beq lbl_800A1D6C
    stw r4, 0x0(r5)
lbl_800A1D6C:
    subi r3, r3, 0x4
    bdnz lbl_800A1D40
lbl_800A1D74:
    li r3, 0x0
    bl fn_80171454
lbl_800A1D7C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_800A1D94(s32 arg0) {
    s32 *temp_r3;
    s32 temp_r4;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    temp_r4 = (s32) (*temp_r3);
    if ((s32) (temp_r4 & 1) != 0) {
        return (s32) (0);
    }
    *temp_r3 = temp_r4 | 1;
    return (s32) (1);
}

// asm_to_cpp: fn_800A1DE8
asm s32 fn_800A1DE8(u16 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r5
    bl fn_800A4DFC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800A1E1C
    li r3, 0x0
    b lbl_800A1F14
lbl_800A1E1C:
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800A1E34
    li r3, 0x0
    b lbl_800A1F14
lbl_800A1E34:
    mr r3, r30
    bl fn_800A0F50
    cmpwi r3, 0x0
    bne lbl_800A1E4C
    li r3, 0x0
    b lbl_800A1F14
lbl_800A1E4C:
    lwz r0, 0x7c(r3)
    ori r0, r0, 0x1
    stw r0, 0x7c(r3)
    stw r3, 0x8(r31)
    stw r29, 0x4(r31)
    li r7, 0x0
    stb r7, 0xdc(r31)
    mr r4, r7
    li r6, -0x1
    la r5, lbl_8049F590
    lfs f1, 0x14(r5)
    lfs f0, 0x18(r5)
    li r0, 0x8
    mtctr r0
lbl_800A1E84:
    add r5, r31, r4
    stw r6, 0x1c(r5)
    stw r7, 0x20(r5)
    stfs f1, 0x24(r5)
    stfs f1, 0x28(r5)
    stfs f0, 0x2c(r5)
    addi r4, r4, 0x18
    bdnz lbl_800A1E84
    li r0, 0x2
    stb r0, 0xe0(r31)
    clrlwi r0, r30, 16
    sth r0, 0xe2(r31)
    lfs f0, lbl_8049F590
    stfs f0, 0xe4(r31)
    stfs f0, 0xe8(r31)
    stfs f0, 0xec(r31)
    la r4, lbl_8049F590
    lfs f0, 0x1c(r4)
    stfs f0, 0xf0(r31)
    lwz r0, 0x7c(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x7c(r3)
    li r3, 0x0
    stw r3, 0xf4(r31)
    li r0, 0x7
    stw r0, 0xf8(r31)
    stw r3, 0xfc(r31)
    lwz r0, 0xfc(r31)
    ori r0, r0, 0x1
    stw r0, 0xfc(r31)
    mr r3, r30
    lis r4, lbl_8034CE74@ha
    addi r4, r4, lbl_8034CE74@l
    addi r4, r4, 0x1b1
    bl fn_800A1234
    li r3, 0x1
lbl_800A1F14:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800A1F2C
asm s32 fn_800A1F2C(s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savefpr_28
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r31, r5
    fmr f28, f1
    fmr f29, f2
    fmr f30, f3
    fmr f31, f4
    bl fn_800A4DFC
    cmpwi r3, 0x0
    bne lbl_800A1F74
    li r3, 0x0
    b lbl_800A202C
lbl_800A1F74:
    lbz r0, 0xdc(r3)
    extsb r0, r0
    cmpwi r0, 0x8
    blt lbl_800A1F8C
    li r3, 0x0
    b lbl_800A202C
lbl_800A1F8C:
    mulli r0, r0, 0x18
    add r4, r3, r0
    stw r30, 0x1c(r4)
    oris r5, r31, 0x8000
    lbz r0, 0xdc(r3)
    extsb r0, r0
    mulli r0, r0, 0x18
    add r4, r3, r0
    stw r5, 0x20(r4)
    lbz r0, 0xdc(r3)
    extsb r0, r0
    mulli r0, r0, 0x18
    add r4, r3, r0
    stfs f28, 0x24(r4)
    lbz r0, 0xdc(r3)
    extsb r0, r0
    mulli r0, r0, 0x18
    add r4, r3, r0
    stfs f29, 0x28(r4)
    lbz r0, 0xdc(r3)
    extsb r0, r0
    mulli r0, r0, 0x18
    add r4, r3, r0
    stfs f30, 0x2c(r4)
    lbz r0, 0xdc(r3)
    extsb r0, r0
    mulli r0, r0, 0x18
    add r4, r3, r0
    stfs f31, 0x30(r4)
    lbz r4, 0xdc(r3)
    addi r0, r4, 0x1
    extsb r0, r0
    stb r0, 0xdc(r3)
    lbz r0, 0xdc(r3)
    extsb r0, r0
    cmpwi r0, 0x1
    bne lbl_800A2028
    lwz r3, 0x8(r3)
    bl fn_800A21A8
lbl_800A2028:
    li r3, 0x1
lbl_800A202C:
    addi r11, r1, 0x30
    bl _restfpr_28
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800A204C
asm void fn_800A204C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_800A4DFC
    cmpwi r3, 0x0
    beq lbl_800A2194
    cmpwi r31, 0x0
    beq lbl_800A2088
    cmpwi r31, 0x1
    beq lbl_800A20E4
    cmpwi r31, 0x2
    beq lbl_800A2100
    b lbl_800A2194
lbl_800A2088:
    li r9, 0x0
    li r4, 0x0
    li r7, -0x1
    mr r6, r4
    lis r5, lbl_803A1D58@ha
    addi r5, r5, lbl_803A1D58@l
    b lbl_800A20C8
lbl_800A20A4:
    add r8, r3, r4
    stw r7, 0x1c(r8)
    stw r6, 0x20(r8)
    lfs f0, 0x14(r5)
    stfs f0, 0x24(r8)
    lfs f0, 0x24(r5)
    stfs f0, 0x30(r8)
    addi r9, r9, 0x1
    addi r4, r4, 0x18
lbl_800A20C8:
    lbz r0, 0xdc(r3)
    extsb r0, r0
    cmpw r9, r0
    blt lbl_800A20A4
    li r0, 0x0
    stb r0, 0xdc(r3)
    b lbl_800A2194
lbl_800A20E4:
    lwz r4, 0x20(r3)
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_800A2194
    clrrwi r0, r4, 1
    stw r0, 0x20(r3)
    b lbl_800A2194
lbl_800A2100:
    lwz r4, 0x20(r3)
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_800A2118
    clrrwi r0, r4, 1
    stw r0, 0x20(r3)
lbl_800A2118:
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_800A213C
    lwz r4, 0x3780(r4)
    cmpwi r4, 0x0
    beq lbl_800A213C
    lwz r0, 0x0(r4)
    ori r0, r0, 0x2
    stw r0, 0x0(r4)
lbl_800A213C:
    li r9, 0x0
    li r4, 0x0
    li r7, -0x1
    li r6, 0x0
    lis r5, lbl_803A1D58@ha
    addi r5, r5, lbl_803A1D58@l
    b lbl_800A217C
lbl_800A2158:
    add r8, r3, r4
    stw r7, 0x1c(r8)
    stw r6, 0x20(r8)
    lfs f0, 0x14(r5)
    stfs f0, 0x24(r8)
    lfs f0, 0x24(r5)
    stfs f0, 0x30(r8)
    addi r9, r9, 0x1
    addi r4, r4, 0x18
lbl_800A217C:
    lbz r0, 0xdc(r3)
    extsb r0, r0
    cmpw r9, r0
    blt lbl_800A2158
    li r0, 0x0
    stb r0, 0xdc(r3)
lbl_800A2194:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A21A8
asm s8 fn_800A21A8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    li r31, 0x0
    li r4, 0x0
    lis r5, lbl_803A1D58@ha
    addi r5, r5, lbl_803A1D58@l
    lwz r6, 0x30(r5)
    lbz r0, 0xc(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A2204
lbl_800A21E4:
    add r5, r6, r4
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bne lbl_800A21FC
    mr r31, r5
    b lbl_800A2204
lbl_800A21FC:
    addi r4, r4, 0x100
    bdnz lbl_800A21E4
lbl_800A2204:
    cmpwi r31, 0x0
    bne lbl_800A2214
    li r3, 0x0
    b lbl_800A2548
lbl_800A2214:
    lbz r0, 0xdc(r31)
    extsb r0, r0
    cmpwi r0, 0x0
    bgt lbl_800A222C
    li r3, 0x0
    b lbl_800A2548
lbl_800A222C:
    lwz r0, 0x20(r31)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A2264
    mr r3, r29
    lwz r4, 0x1c(r31)
    lfs f1, 0x30(r31)
    lfs f2, 0x28(r31)
    lfs f3, 0x24(r31)
    li r5, 0x0
    bl fn_800A2560
    lwz r0, 0x20(r31)
    clrlwi r0, r0, 1
    stw r0, 0x20(r31)
lbl_800A2264:
    li r30, -0x1
    lbz r0, 0xdc(r31)
    extsb r0, r0
    cmpwi r0, 0x1
    ble lbl_800A227C
    lwz r30, 0x34(r31)
lbl_800A227C:
    li r4, 0x0
    lfs f1, 0x2c(r31)
    lfs f0, lbl_8049F590
    fcmpo cr0, f1, f0
    bge lbl_800A2304
    lwz r0, 0x20(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800A22B0
    lwz r5, 0x3780(r29)
    lwz r0, 0x20(r5)
    cmpw r0, r30
    bne lbl_800A22EC
lbl_800A22B0:
    lwz r5, 0x3780(r29)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A22E4
    lfs f1, 0xc(r5)
    lfs f0, 0x10(r5)
    fadds f1, f1, f0
    lwz r3, 0x1c(r5)
    lfs f0, 0xc(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800A231C
lbl_800A22E4:
    li r4, 0x1
    b lbl_800A231C
lbl_800A22EC:
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A231C
    li r4, 0x1
    b lbl_800A231C
lbl_800A2304:
    lwz r5, 0x3780(r29)
    lfs f0, 0x8(r5)
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_800A231C
    li r4, 0x1
lbl_800A231C:
    cmpwi r4, 0x0
    beq lbl_800A2540
    lwz r0, 0x20(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A2384
    la r4, lbl_8049F590
    lwz r3, 0x1c(r5)
    lfs f1, 0xc(r5)
    lfs f0, 0xc(r3)
    fsubs f1, f1, f0
    lfs f0, 0x10(r5)
    fadds f1, f0, f1
    lfs f0, 0x20(r4)
    fmuls f2, f0, f1
    mr r3, r29
    lwz r4, 0x1c(r31)
    lfs f1, 0x30(r31)
    lfs f0, 0x28(r31)
    fadds f2, f2, f0
    lfs f3, 0x24(r31)
    li r5, 0x0
    bl fn_800A2560
    lbz r3, 0xdc(r31)
    extsb r3, r3
    b lbl_800A2548
lbl_800A2384:
    li r27, 0x0
    li r28, 0x0
    b lbl_800A23AC
lbl_800A2390:
    add r4, r31, r28
    addi r3, r4, 0x1c
    addi r4, r4, 0x34
    li r5, 0x18
    bl memcpy
    addi r27, r27, 0x1
    addi r28, r28, 0x18
lbl_800A23AC:
    lbz r0, 0xdc(r31)
    extsb r3, r0
    subi r0, r3, 0x1
    cmpw r27, r0
    blt lbl_800A2390
    li r4, -0x1
    mulli r0, r0, 0x18
    add r3, r31, r0
    stw r4, 0x1c(r3)
    li r0, 0x0
    lbz r3, 0xdc(r31)
    extsb r3, r3
    subi r3, r3, 0x1
    mulli r3, r3, 0x18
    add r3, r31, r3
    stw r0, 0x20(r3)
    la r4, lbl_8049F590
    lfs f0, 0x14(r4)
    lbz r3, 0xdc(r31)
    extsb r3, r3
    subi r3, r3, 0x1
    mulli r3, r3, 0x18
    add r3, r31, r3
    stfs f0, 0x24(r3)
    lbz r3, 0xdc(r31)
    extsb r3, r3
    subi r3, r3, 0x1
    mulli r3, r3, 0x18
    add r3, r31, r3
    stfs f0, 0x28(r3)
    lfs f0, 0x18(r4)
    lbz r3, 0xdc(r31)
    extsb r3, r3
    subi r3, r3, 0x1
    mulli r3, r3, 0x18
    add r3, r31, r3
    stfs f0, 0x2c(r3)
    lfs f0, lbl_8049F590
    lbz r3, 0xdc(r31)
    extsb r3, r3
    subi r3, r3, 0x1
    mulli r3, r3, 0x18
    add r3, r31, r3
    stfs f0, 0x30(r3)
    lbz r3, 0xdc(r31)
    subi r3, r3, 0x1
    extsb r3, r3
    stb r3, 0xdc(r31)
    lbz r3, 0xdc(r31)
    extsb r3, r3
    cmpwi r3, 0x0
    bgt lbl_800A2480
    stb r0, 0xdc(r31)
lbl_800A2480:
    lwz r0, 0x20(r31)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A2540
    lwz r6, 0x3780(r29)
    lwz r0, 0x20(r6)
    cmpw r0, r30
    bne lbl_800A24FC
    lwz r4, 0x1c(r6)
    la r3, lbl_8049F590
    lfs f1, 0xc(r6)
    lfs f0, 0xc(r4)
    fsubs f1, f1, f0
    lfs f0, 0x10(r6)
    fadds f1, f0, f1
    lfs f0, 0x20(r3)
    fmuls f2, f0, f1
    lfs f0, lbl_8049F590
    fcmpo cr0, f2, f0
    ble lbl_800A24D4
    b lbl_800A24D8
lbl_800A24D4:
    fmr f2, f0
lbl_800A24D8:
    mr r3, r29
    lwz r4, 0x1c(r31)
    lfs f1, 0x30(r31)
    lfs f0, 0x28(r31)
    fadds f2, f2, f0
    lfs f3, 0x24(r31)
    li r5, 0x0
    bl fn_800A2560
    b lbl_800A2534
lbl_800A24FC:
    mr r3, r29
    lwz r4, 0x1c(r31)
    lfs f1, 0x30(r31)
    la r5, lbl_8049F590
    lfs f2, 0x28(r31)
    lfs f0, 0x14(r5)
    fsubs f3, f2, f0
    lfs f2, 0x20(r5)
    lfs f0, 0x10(r6)
    fmuls f0, f2, f0
    fadds f2, f3, f0
    lfs f3, 0x24(r31)
    li r5, 0x0
    bl fn_800A2560
lbl_800A2534:
    lwz r0, 0x20(r31)
    clrlwi r0, r0, 1
    stw r0, 0x20(r31)
lbl_800A2540:
    lbz r3, 0xdc(r31)
    extsb r3, r3
lbl_800A2548:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800A2560
asm s32 fn_800A2560(s8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, s32 arg5) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r30, r3
    fmr f30, f2
    fmr f31, f3
    li r31, 0x0
    li r5, 0x0
    lis r6, lbl_803A1D58@ha
    addi r6, r6, lbl_803A1D58@l
    lwz r7, 0x30(r6)
    lbz r0, 0xc(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A25D4
lbl_800A25B4:
    add r6, r7, r5
    lwz r0, 0x8(r6)
    cmplw r0, r3
    bne lbl_800A25CC
    mr r31, r6
    b lbl_800A25D4
lbl_800A25CC:
    addi r5, r5, 0x100
    bdnz lbl_800A25B4
lbl_800A25D4:
    cmpwi r3, 0x0
    beq lbl_800A25E4
    lwz r28, 0x3780(r3)
    b lbl_800A25EC
lbl_800A25E4:
    li r3, 0x0
    b lbl_800A2708
lbl_800A25EC:
    cmpwi r4, -0x1
    bne lbl_800A25FC
    li r3, 0x0
    b lbl_800A2708
lbl_800A25FC:
    lwz r0, 0x0(r28)
    ori r0, r0, 0x40
    stw r0, 0x0(r28)
    lwz r3, 0x0(r28)
    li r0, -0x2002
    and r0, r3, r0
    stw r0, 0x0(r28)
    mr r3, r28
    fadds f1, f2, f1
    la r29, lbl_8049F590
    lfs f0, 0x20(r29)
    fdivs f1, f1, f0
    bl fn_801831EC
    lfs f0, 0x20(r29)
    fdivs f1, f30, f0
    lfs f0, 0x24(r29)
    fsubs f0, f1, f0
    stfs f0, 0xc(r28)
    stfs f0, 0x18(r28)
    lfs f1, 0x2c(r29)
    lfs f0, 0xc(r28)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F590
    fcmpo cr0, f1, f0
    ble lbl_800A2678
    lfs f0, 0x28(r29)
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    b lbl_800A268C
lbl_800A2678:
    lfs f0, 0x28(r29)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
lbl_800A268C:
    lfd f1, lbl_8049F580
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049F590
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    stfs f0, 0x8(r28)
    lfs f0, 0x20(r3)
    fdivs f1, f31, f0
    lfs f0, 0x24(r3)
    fsubs f0, f1, f0
    stfs f0, 0x10(r28)
    stfs f31, 0x12c(r30)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A2704
    lfs f0, 0x14(r3)
    lbz r0, 0xdc(r31)
    extsb r0, r0
    mulli r0, r0, 0x18
    add r3, r31, r0
    stfs f0, 0x28(r3)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r31)
lbl_800A2704:
    li r3, 0x1
lbl_800A2708:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800A2738
asm s32 fn_800A2738(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_800A4DFC
    cmpwi r3, 0x0
    bne lbl_800A2760
    li r3, 0x0
    b lbl_800A2808
lbl_800A2760:
    cmpwi r31, 0x0
    beq lbl_800A277C
    cmpwi r31, 0x1
    beq lbl_800A2788
    cmpwi r31, 0x2
    beq lbl_800A27C8
    b lbl_800A2804
lbl_800A277C:
    lbz r6, 0xdc(r3)
    extsb r6, r6
    b lbl_800A2804
lbl_800A2788:
    li r6, 0x0
    li r4, 0x0
    lbz r0, 0xdc(r3)
    extsb r0, r0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A2804
lbl_800A27A4:
    add r5, r3, r4
    lwz r0, 0x20(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800A27BC
    addi r6, r6, 0x1
lbl_800A27BC:
    addi r4, r4, 0x18
    bdnz lbl_800A27A4
    b lbl_800A2804
lbl_800A27C8:
    li r6, 0x0
    li r4, 0x0
    lbz r0, 0xdc(r3)
    extsb r0, r0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A2804
lbl_800A27E4:
    add r5, r3, r4
    lwz r0, 0x20(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800A27FC
    addi r6, r6, 0x1
lbl_800A27FC:
    addi r4, r4, 0x18
    bdnz lbl_800A27E4
lbl_800A2804:
    mr r3, r6
lbl_800A2808:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_800A281C(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xE0) == 2) {
        fn_800A28A8((s8 *) (M2C_FIELD(temp_r3, s8 **, 8)), (s8 *) (M2C_FIELD(fn_800A4DFC((s32) ((s32) M2C_FIELD(temp_r3, u16 *, 0xE2))), s8 **, 8)), (s32 *) ((s8 *)temp_r3 + 0xE4), (s32) (2), M2C_FIELD(temp_r3, f32 *, 0xF0));
    } else {
        fn_800A28A8((s8 *) (M2C_FIELD(temp_r3, s8 **, 8)), (s8 *) (NULL), (s32 *) ((s8 *)temp_r3 + 0xE4), (s32) (1), M2C_FIELD(temp_r3, f32 *, 0xF0));
    }
    return (s32) (1);
}

// asm_to_cpp: fn_800A28A8
asm s32 fn_800A28A8(s8 *arg0, s8 *arg1, s32 *arg2, s32 arg3, f32 farg0) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    opword 0xF3E10118
    stfd f30, 0x100(r1)
    opword 0xF3C10108
    stfd f29, 0xf0(r1)
    opword 0xF3A100F8
    stfd f28, 0xe0(r1)
    opword 0xF38100E8
    stfd f27, 0xd0(r1)
    opword 0xF36100D8
    stfd f26, 0xc0(r1)
    opword 0xF34100C8
    addi r11, r1, 0xc0
    bl _savegpr_25
    mr r30, r3
    mr r27, r4
    mr r25, r5
    mr r26, r6
    fmr f28, f1
    cmpwi r3, 0x0
    bne lbl_800A2910
    li r3, 0x0
    b lbl_800A3124
lbl_800A2910:
    lwz r3, 0x377c(r3)
    li r4, 0x6
    bl fn_8018149C
    mr r31, r3
    lwz r3, 0x377c(r30)
    li r4, 0x15
    bl fn_8018149C
    mr r28, r3
    lwz r3, 0x377c(r30)
    li r4, 0x6
    bl fn_80181504
    lwz r3, 0x377c(r30)
    li r4, 0x15
    bl fn_80181504
    mr r29, r3
    cmpwi r31, 0x0
    beq lbl_800A295C
    cmpwi r28, 0x0
    bne lbl_800A2964
lbl_800A295C:
    li r3, 0x1
    b lbl_800A3124
lbl_800A2964:
    lwz r0, 0x7c(r30)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800A2994
    lwz r0, 0x0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x0(r31)
    lwz r0, 0x0(r28)
    clrrwi r0, r0, 1
    stw r0, 0x0(r28)
    li r3, 0x4
    b lbl_800A3124
lbl_800A2994:
    cmpwi r26, 0x2
    bne lbl_800A2A0C
    cmpwi r27, 0x0
    bne lbl_800A29AC
    li r3, 0x0
    b lbl_800A3124
lbl_800A29AC:
    lwz r3, 0x377c(r27)
    li r4, 0x6
    bl fn_8018149C
    mr r28, r3
    lwz r3, 0x377c(r27)
    li r4, 0x15
    bl fn_8018149C
    lwz r3, 0x377c(r27)
    li r4, 0x6
    bl fn_80181504
    lwz r3, 0x377c(r27)
    li r4, 0x15
    bl fn_80181504
    mr r27, r3
    cmpwi r28, 0x0
    bne lbl_800A29F4
    li r3, 0x2
    b lbl_800A3124
lbl_800A29F4:
    cmpwi r29, 0x0
    beq lbl_800A2A04
    cmpwi r3, 0x0
    bne lbl_800A2A0C
lbl_800A2A04:
    li r3, 0x3
    b lbl_800A3124
lbl_800A2A0C:
    addi r3, r1, 0x38
    addi r4, r29, 0x224
    addi r5, r31, 0x50
    bl fn_8017375C
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r1, 0x38
    bl fn_80173580
    addi r3, r1, 0x68
    addi r4, r1, 0x38
    bl fn_80173754
    cmpwi r26, 0x2
    bne lbl_800A2A94
    addi r3, r1, 0x38
    addi r4, r27, 0x224
    addi r5, r28, 0x50
    bl fn_8017375C
    addi r3, r1, 0x2c
    li r4, 0x3
    addi r5, r1, 0x38
    bl fn_80173580
    lfs f1, 0x2c(r1)
    lfs f0, 0x0(r25)
    fadds f0, f1, f0
    stfs f0, 0x2c(r1)
    lfs f1, 0x30(r1)
    lfs f0, 0x4(r25)
    fadds f0, f1, f0
    stfs f0, 0x30(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x8(r25)
    fadds f0, f1, f0
    stfs f0, 0x34(r1)
    b lbl_800A2AAC
lbl_800A2A94:
    lfs f0, 0x0(r25)
    stfs f0, 0x2c(r1)
    lfs f0, 0x4(r25)
    stfs f0, 0x30(r1)
    lfs f0, 0x8(r25)
    stfs f0, 0x34(r1)
lbl_800A2AAC:
    lfs f1, 0x2c(r1)
    lfs f0, 0x8(r1)
    fcmpu cr0, f1, f0
    bne lbl_800A2AE4
    lfs f1, 0x30(r1)
    lfs f0, 0xc(r1)
    fcmpu cr0, f1, f0
    bne lbl_800A2AE4
    lfs f1, 0x34(r1)
    lfs f0, 0x10(r1)
    fcmpu cr0, f1, f0
    bne lbl_800A2AE4
    li r3, 0x4
    b lbl_800A3124
lbl_800A2AE4:
    addi r3, r1, 0x20
    addi r4, r30, 0x84
    addi r5, r1, 0x2c
    bl fn_8001B8B8
    lfs f1, 0x20(r1)
    lfs f0, 0x28(r1)
    fneg f2, f0
    bl fn_800674B8
    lfs f0, 0xa0(r30)
    fsubs f1, f1, f0
    bl fn_80172688
    fmr f26, f1
    addi r3, r1, 0x2c
    addi r4, r1, 0x68
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x2c(r1)
    fneg f1, f0
    lfs f2, 0x30(r1)
    bl fn_801A32A0
    la r29, lbl_8049F590
    lfs f0, 0x34(r29)
    fmuls f31, f0, f1
    lfs f1, 0x34(r1)
    lfs f2, 0x30(r1)
    bl fn_801A32A0
    lfs f0, 0x34(r29)
    fmuls f30, f0, f1
    lfs f1, 0x2c(r1)
    lfs f2, 0x34(r1)
    bl fn_801A32A0
    lfs f0, 0x34(r29)
    fmuls f29, f0, f1
    fmr f1, f26
    bl fn_80018BD4
    lfs f0, 0x38(r29)
    fcmpo cr0, f1, f0
    ble lbl_800A2BB8
    lwz r0, 0x18(r30)
    cmplwi r0, 0x1
    bne lbl_800A2BB0
    lwz r0, 0x164c(r30)
    cmpwi r0, 0x1
    bne lbl_800A2BA8
    lfs f31, 0x3c(r29)
    b lbl_800A2BB4
lbl_800A2BA8:
    lfs f31, lbl_8049F590
    b lbl_800A2BB4
lbl_800A2BB0:
    lfs f31, lbl_8049F590
lbl_800A2BB4:
    lfs f29, lbl_8049F590
lbl_800A2BB8:
    lwz r0, 0x18(r30)
    cmplwi r0, 0xb
    bne lbl_800A2C2C
    lwz r3, 0x3780(r30)
    lwz r3, 0x0(r3)
    rlwinm r3, r3, 0, 29, 29
    cmpwi r3, 0x0
    beq lbl_800A2C04
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f29, f0
    bge lbl_800A2BEC
    fmr f29, f0
lbl_800A2BEC:
    la r3, lbl_8049F590
    lfs f0, 0x44(r3)
    fcmpo cr0, f29, f0
    ble lbl_800A2C54
    fmr f29, f0
    b lbl_800A2C54
lbl_800A2C04:
    lfs f0, lbl_8049F590
    fcmpo cr0, f29, f0
    bge lbl_800A2C14
    fmr f29, f0
lbl_800A2C14:
    la r3, lbl_8049F590
    lfs f0, 0x48(r3)
    fcmpo cr0, f29, f0
    ble lbl_800A2C54
    fmr f29, f0
    b lbl_800A2C54
lbl_800A2C2C:
    la r3, lbl_8049F590
    lfs f0, 0x4c(r3)
    fcmpo cr0, f29, f0
    bge lbl_800A2C40
    fmr f29, f0
lbl_800A2C40:
    la r3, lbl_8049F590
    lfs f0, 0x50(r3)
    fcmpo cr0, f29, f0
    ble lbl_800A2C54
    fmr f29, f0
lbl_800A2C54:
    cmplwi r0, 0x1
    beq lbl_800A2C80
    cmplwi r0, 0xb
    beq lbl_800A2D84
    cmplwi r0, 0x8
    beq lbl_800A2E54
    cmplwi r0, 0x2
    beq lbl_800A2EE4
    cmplwi r0, 0x4
    beq lbl_800A2EE4
    b lbl_800A2F74
lbl_800A2C80:
    lwz r3, 0x164c(r30)
    cmpwi r3, 0x1
    bne lbl_800A2CF4
    lwz r3, 0x7c(r30)
    rlwinm r3, r3, 0, 27, 27
    cmpwi r3, 0x0
    beq lbl_800A2CC8
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2CB0
    fmr f31, f0
lbl_800A2CB0:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2D58
    fmr f31, f0
    b lbl_800A2D58
lbl_800A2CC8:
    la r3, lbl_8049F590
    lfs f0, 0x58(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2CDC
    fmr f31, f0
lbl_800A2CDC:
    la r3, lbl_8049F590
    lfs f0, 0x3c(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2D58
    fmr f31, f0
    b lbl_800A2D58
lbl_800A2CF4:
    lwz r3, 0x7c(r30)
    rlwinm r3, r3, 0, 27, 27
    cmpwi r3, 0x0
    beq lbl_800A2D30
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2D18
    fmr f31, f0
lbl_800A2D18:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2D58
    fmr f31, f0
    b lbl_800A2D58
lbl_800A2D30:
    la r3, lbl_8049F590
    lfs f0, 0x5c(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2D44
    fmr f31, f0
lbl_800A2D44:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2D58
    fmr f31, f0
lbl_800A2D58:
    la r3, lbl_8049F590
    lfs f0, 0x5c(r3)
    fcmpo cr0, f30, f0
    bge lbl_800A2D6C
    fmr f30, f0
lbl_800A2D6C:
    la r3, lbl_8049F590
    lfs f0, 0x60(r3)
    fcmpo cr0, f30, f0
    ble lbl_800A3000
    fmr f30, f0
    b lbl_800A3000
lbl_800A2D84:
    lwz r3, 0x7c(r30)
    rlwinm r3, r3, 0, 27, 27
    cmpwi r3, 0x0
    beq lbl_800A2DC0
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2DA8
    fmr f31, f0
lbl_800A2DA8:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2DE8
    fmr f31, f0
    b lbl_800A2DE8
lbl_800A2DC0:
    la r3, lbl_8049F590
    lfs f0, 0x44(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2DD4
    fmr f31, f0
lbl_800A2DD4:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2DE8
    fmr f31, f0
lbl_800A2DE8:
    lwz r3, 0x3780(r30)
    lwz r3, 0x0(r3)
    rlwinm r3, r3, 0, 29, 29
    cmpwi r3, 0x0
    beq lbl_800A2E28
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f30, f0
    bge lbl_800A2E10
    fmr f30, f0
lbl_800A2E10:
    la r3, lbl_8049F590
    lfs f0, 0x64(r3)
    fcmpo cr0, f30, f0
    ble lbl_800A3000
    fmr f30, f0
    b lbl_800A3000
lbl_800A2E28:
    la r3, lbl_8049F590
    lfs f0, 0x68(r3)
    fcmpo cr0, f30, f0
    bge lbl_800A2E3C
    fmr f30, f0
lbl_800A2E3C:
    la r3, lbl_8049F590
    lfs f0, 0x20(r3)
    fcmpo cr0, f30, f0
    ble lbl_800A3000
    fmr f30, f0
    b lbl_800A3000
lbl_800A2E54:
    lwz r3, 0x7c(r30)
    rlwinm r3, r3, 0, 27, 27
    cmpwi r3, 0x0
    beq lbl_800A2E90
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2E78
    fmr f31, f0
lbl_800A2E78:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2EB8
    fmr f31, f0
    b lbl_800A2EB8
lbl_800A2E90:
    la r3, lbl_8049F590
    lfs f0, 0x68(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2EA4
    fmr f31, f0
lbl_800A2EA4:
    la r3, lbl_8049F590
    lfs f0, 0x64(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2EB8
    fmr f31, f0
lbl_800A2EB8:
    la r3, lbl_8049F590
    lfs f0, 0x5c(r3)
    fcmpo cr0, f30, f0
    bge lbl_800A2ECC
    fmr f30, f0
lbl_800A2ECC:
    la r3, lbl_8049F590
    lfs f0, 0x60(r3)
    fcmpo cr0, f30, f0
    ble lbl_800A3000
    fmr f30, f0
    b lbl_800A3000
lbl_800A2EE4:
    lwz r3, 0x7c(r30)
    rlwinm r3, r3, 0, 27, 27
    cmpwi r3, 0x0
    beq lbl_800A2F20
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2F08
    fmr f31, f0
lbl_800A2F08:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2F48
    fmr f31, f0
    b lbl_800A2F48
lbl_800A2F20:
    la r3, lbl_8049F590
    lfs f0, 0x44(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2F34
    fmr f31, f0
lbl_800A2F34:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2F48
    fmr f31, f0
lbl_800A2F48:
    la r3, lbl_8049F590
    lfs f0, 0x5c(r3)
    fcmpo cr0, f30, f0
    bge lbl_800A2F5C
    fmr f30, f0
lbl_800A2F5C:
    la r3, lbl_8049F590
    lfs f0, 0x60(r3)
    fcmpo cr0, f30, f0
    ble lbl_800A3000
    fmr f30, f0
    b lbl_800A3000
lbl_800A2F74:
    lwz r3, 0x7c(r30)
    rlwinm r3, r3, 0, 27, 27
    cmpwi r3, 0x0
    beq lbl_800A2FB0
    la r3, lbl_8049F590
    lfs f0, 0x40(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2F98
    fmr f31, f0
lbl_800A2F98:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2FD8
    fmr f31, f0
    b lbl_800A2FD8
lbl_800A2FB0:
    la r3, lbl_8049F590
    lfs f0, 0x68(r3)
    fcmpo cr0, f31, f0
    bge lbl_800A2FC4
    fmr f31, f0
lbl_800A2FC4:
    la r3, lbl_8049F590
    lfs f0, 0x54(r3)
    fcmpo cr0, f31, f0
    ble lbl_800A2FD8
    fmr f31, f0
lbl_800A2FD8:
    la r3, lbl_8049F590
    lfs f0, 0x5c(r3)
    fcmpo cr0, f30, f0
    bge lbl_800A2FEC
    fmr f30, f0
lbl_800A2FEC:
    la r3, lbl_8049F590
    lfs f0, 0x60(r3)
    fcmpo cr0, f30, f0
    ble lbl_800A3000
    fmr f30, f0
lbl_800A3000:
    cmplwi r0, 0xb
    bne lbl_800A301C
    stfs f31, 0x20(r1)
    stfs f29, 0x24(r1)
    lfs f0, lbl_8049F590
    stfs f0, 0x28(r1)
    b lbl_800A302C
lbl_800A301C:
    stfs f31, 0x20(r1)
    lfs f0, lbl_8049F590
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_800A302C:
    la r30, lbl_8049F590
    lfs f1, 0x20(r1)
    lfs f0, 0x6c(r30)
    fmuls f1, f0, f1
    bl fn_800412A0
    fmr f26, f1
    lfs f1, 0x20(r1)
    lfs f0, 0x6c(r30)
    fmuls f1, f0, f1
    bl fn_80041290
    fmr f27, f1
    lfs f1, 0x24(r1)
    lfs f0, 0x6c(r30)
    fmuls f1, f0, f1
    bl fn_800412A0
    fmr f31, f1
    lfs f1, 0x24(r1)
    lfs f0, 0x6c(r30)
    fmuls f1, f0, f1
    bl fn_80041290
    fmr f29, f1
    lfs f1, 0x28(r1)
    lfs f0, 0x6c(r30)
    fmuls f1, f0, f1
    bl fn_800412A0
    lfs f1, 0x28(r1)
    lfs f0, 0x6c(r30)
    fmuls f1, f0, f1
    bl fn_80041290
    stfs f26, 0x14(r1)
    fmuls f3, f27, f31
    stfs f3, 0x18(r1)
    fmuls f2, f27, f29
    stfs f2, 0x1c(r1)
    frsp f0, f26
    lfs f1, 0x30(r31)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r31)
    lfs f1, 0x34(r31)
    fsubs f0, f3, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r31)
    lfs f1, 0x38(r31)
    fsubs f0, f2, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r31)
    lfs f1, 0x3c(r31)
    fsubs f0, f30, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r31)
    addi r3, r31, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r0, 0x0(r31)
    ori r0, r0, 0xe01
    stw r0, 0x0(r31)
    li r3, 0x5
lbl_800A3124:
    li r0, 0x118
    opword 0x13E1000C
    lfd f31, 0x110(r1)
    li r0, 0x108
    opword 0x13C1000C
    lfd f30, 0x100(r1)
    li r0, 0xf8
    opword 0x13A1000C
    lfd f29, 0xf0(r1)
    li r0, 0xe8
    opword 0x1381000C
    lfd f28, 0xe0(r1)
    li r0, 0xd8
    opword 0x1361000C
    lfd f27, 0xd0(r1)
    li r0, 0xc8
    opword 0x1341000C
    lfd f26, 0xc0(r1)
    addi r11, r1, 0xc0
    bl _restgpr_25
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: fn_800A3184
asm s32 fn_800A3184(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r31, r4
    lis r4, lbl_803A1D58@ha
    addi r4, r4, lbl_803A1D58@l
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    bne lbl_800A31B8
    li r3, 0x0
    b lbl_800A32A0
lbl_800A31B8:
    bl fn_800A32B8
    mr r30, r3
    cmpwi r3, 0x4
    beq lbl_800A31D0
    cmpwi r3, 0x6
    bne lbl_800A320C
lbl_800A31D0:
    cmpwi r31, 0x8
    bne lbl_800A31F0
    li r30, 0x6
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r0, 0xf(r3)
    subfic r31, r0, 0x7
    b lbl_800A320C
lbl_800A31F0:
    li r30, 0x4
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r0, 0xf(r3)
    slwi r0, r0, 3
    subfic r0, r0, 0x7
    subf r31, r31, r0
lbl_800A320C:
    li r23, 0x0
    li r24, 0x0
    li r29, 0x0
    mr r27, r29
    mr r28, r29
    lis r3, lbl_803A1D58@ha
    addi r26, r3, lbl_803A1D58@l
    b lbl_800A3290
lbl_800A322C:
    lwz r0, 0x34(r26)
    add r25, r0, r29
    lbz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_800A3288
    li r22, 0x0
    cmpwi r30, 0x0
    bne lbl_800A3254
    li r22, 0x1
    b lbl_800A3274
lbl_800A3254:
    lhz r0, 0x2(r25)
    cmpw r31, r0
    bne lbl_800A3274
    lbz r3, 0x1(r25)
    bl fn_800A32B8
    cmplw r30, r3
    bne lbl_800A3274
    li r22, 0x1
lbl_800A3274:
    cmpwi r22, 0x0
    beq lbl_800A3288
    stb r27, 0x0(r25)
    stb r28, 0x1(r25)
    addi r23, r23, 0x1
lbl_800A3288:
    addi r24, r24, 0x1
    addi r29, r29, 0x3c
lbl_800A3290:
    lbz r0, 0xe(r26)
    cmpw r24, r0
    blt lbl_800A322C
    mr r3, r23
lbl_800A32A0:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800A32B8
asm s32 fn_800A32B8(s32 arg0) {
    nofralloc
    cmpwi r3, 0x6
    beq lbl_800A3300
    bge lbl_800A32D8
    cmpwi r3, 0x4
    bge lbl_800A32F8
    cmpwi r3, 0x1
    bge lbl_800A32F0
    b lbl_800A3310
lbl_800A32D8:
    cmpwi r3, 0xb
    beq lbl_800A3308
    bge lbl_800A3310
    cmpwi r3, 0x9
    bge lbl_800A3310
    b lbl_800A3308
lbl_800A32F0:
    li r3, 0x1
    blr
lbl_800A32F8:
    li r3, 0x4
    blr
lbl_800A3300:
    li r3, 0x6
    blr
lbl_800A3308:
    li r3, 0x7
    blr
lbl_800A3310:
    li r0, 0xc
    xoris r4, r0, 0x8000
    subi r0, r3, 0xc
    addc r0, r0, r4
    subfe r0, r0, r0
    andc r3, r3, r0
    blr
}

// asm_to_cpp: fn_800A332C
asm u8 * fn_800A332C(void) {
    nofralloc
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lwz r5, 0x34(r3)
    cmpwi r5, 0x0
    bne lbl_800A3348
    li r3, 0x0
    blr
lbl_800A3348:
    li r4, 0x0
    lbz r0, 0xe(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A3374
lbl_800A335C:
    add r3, r5, r4
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    addi r4, r4, 0x3c
    bdnz lbl_800A335C
lbl_800A3374:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_800A337C
asm s32 fn_800A337C(s32 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0) {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    addi r11, r1, 0xc0
    bl _savegpr_26
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f31, f1
    lis r4, lbl_803A1D58@ha
    addi r4, r4, lbl_803A1D58@l
    lbz r0, 0xf(r4)
    slwi r0, r0, 3
    subfic r0, r0, 0x7
    subf r26, r3, r0
    li r3, 0x0
    mr r4, r26
    addi r5, r1, 0x60
    bl fn_8003FA5C
    cmpwi r3, 0x0
    bne lbl_800A33E4
    li r3, 0x0
    b lbl_800A3600
lbl_800A33E4:
    bl fn_800A332C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800A33FC
    li r3, 0x0
    b lbl_800A3600
lbl_800A33FC:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    addi r3, r1, 0x7c
    mr r4, r3
    bl fn_8001B8B4
    la r4, lbl_8049F590
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800A3440
    addi r3, r1, 0x8
    lfs f1, lbl_8049F590
    fmr f2, f1
    lfs f3, 0x18(r4)
    bl fn_80018B0C
    b lbl_800A344C
lbl_800A3440:
    addi r3, r1, 0x8
    addi r4, r1, 0x7c
    bl fn_80019DAC
lbl_800A344C:
    subi r0, r27, 0x5
    cmplwi r0, 0x2
    ble lbl_800A3504
    subi r0, r27, 0x8
    cmplwi r0, 0x2
    ble lbl_800A35B4
    cmpwi r27, 0x2
    beq lbl_800A3480
    cmpwi r27, 0x3
    beq lbl_800A34AC
    cmpwi r27, 0x4
    beq lbl_800A34D8
    b lbl_800A35D0
lbl_800A3480:
    mr r3, r31
    mr r4, r27
    mr r5, r29
    mr r6, r30
    mr r7, r28
    addi r8, r1, 0x8
    bl fn_800A3D8C
    cmpwi r3, 0x0
    bne lbl_800A35D8
    li r3, 0x0
    b lbl_800A3600
lbl_800A34AC:
    mr r3, r31
    mr r4, r27
    mr r5, r29
    mr r6, r30
    addi r7, r1, 0x70
    addi r8, r1, 0x8
    bl fn_800A3D8C
    cmpwi r3, 0x0
    bne lbl_800A35D8
    li r3, 0x0
    b lbl_800A3600
lbl_800A34D8:
    mr r3, r31
    mr r4, r27
    mr r5, r29
    mr r6, r30
    addi r7, r1, 0x70
    addi r8, r1, 0x8
    bl fn_800A3D8C
    cmpwi r3, 0x0
    bne lbl_800A35D8
    li r3, 0x0
    b lbl_800A3600
lbl_800A3504:
    la r3, lbl_8049F590
    lfs f0, 0x0(r28)
    lfs f1, 0x6c(r3)
    fmuls f0, f1, f0
    stfs f0, 0x34(r31)
    lfs f0, 0x4(r28)
    fmuls f0, f1, f0
    stfs f0, 0x38(r31)
    addi r3, r31, 0x28
    addi r4, r1, 0x70
    bl fn_80019DAC
    addi r3, r1, 0x20
    lis r4, lbl_80339938@ha
    addi r4, r4, lbl_80339938@l
    addi r5, r1, 0x8
    bl fn_8001F9C8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8017347C
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x30
    bl fn_80173750
    addi r3, r1, 0x30
    li r4, 0x0
    addi r5, r1, 0x20
    bl fn_801735E8
    addi r3, r1, 0x30
    li r4, 0x1
    addi r5, r1, 0x14
    bl fn_801735E8
    addi r3, r1, 0x30
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801735E8
    addi r3, r31, 0x18
    addi r4, r1, 0x30
    bl C_QUATMtx
    b lbl_800A35D8
lbl_800A35B4:
    addi r3, r31, 0x18
    addi r4, r1, 0x70
    bl fn_80019DAC
    addi r3, r31, 0x24
    mr r4, r28
    bl fn_80019DAC
    b lbl_800A35D8
lbl_800A35D0:
    li r3, 0x0
    b lbl_800A3600
lbl_800A35D8:
    clrlwi r0, r27, 24
    stb r0, 0x0(r31)
    li r0, 0x4
    stb r0, 0x1(r31)
    clrlwi r0, r26, 16
    sth r0, 0x2(r31)
    lfs f0, lbl_8049F590
    stfs f0, 0x4(r31)
    stfs f31, 0x8(r31)
    li r3, 0x1
lbl_800A3600:
    li r0, 0xc8
    opword 0x13E1000C
    lfd f31, 0xc0(r1)
    addi r11, r1, 0xc0
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: fn_800A3624
asm s32 fn_800A3624(s32 arg0, u8 arg1, s8 *arg2, f32 farg0) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    addi r11, r1, 0x80
    bl _savegpr_27
    mr r29, r4
    mr r30, r5
    fmr f31, f1
    lis r0, 0x4330
    stw r0, 0x50(r1)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    cmpwi r3, 0x8
    bne lbl_800A3694
    li r31, 0x6
    lis r3, lbl_803A1D58@ha
    addi r3, r3, lbl_803A1D58@l
    lbz r0, 0xf(r3)
    subfic r27, r0, 0x7
    li r3, 0x0
    addi r4, r1, 0x8
    bl fn_8003FADC
    cmpwi r3, 0x0
    bne lbl_800A36D0
    li r3, 0x0
    b lbl_800A37D0
lbl_800A3694:
    li r31, 0x5
    lis r4, lbl_803A1D58@ha
    addi r4, r4, lbl_803A1D58@l
    lbz r0, 0xf(r4)
    slwi r0, r0, 3
    subfic r0, r0, 0x7
    subf r27, r3, r0
    li r3, 0x0
    mr r4, r27
    addi r5, r1, 0x8
    bl fn_8003FA5C
    cmpwi r3, 0x0
    bne lbl_800A36D0
    li r3, 0x0
    b lbl_800A37D0
lbl_800A36D0:
    bl fn_800A332C
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_800A36E8
    li r3, 0x0
    b lbl_800A37D0
lbl_800A36E8:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    subi r0, r29, 0x8
    cmplwi r0, 0x2
    bgt lbl_800A37A4
    lbz r0, 0x30(r1)
    lfd f1, lbl_8049F588
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f1
    stfs f0, 0x18(r28)
    lbz r0, 0x31(r1)
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    stfs f0, 0x1c(r28)
    lbz r0, 0x32(r1)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f1
    stfs f0, 0x20(r28)
    lbz r0, 0x0(r30)
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    stfs f0, 0x24(r28)
    lbz r0, 0x1(r30)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r28)
    lbz r0, 0x2(r30)
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    stfs f0, 0x2c(r28)
    addi r3, r28, 0x18
    mr r4, r3
    la r30, lbl_8049F590
    lfs f1, 0x7c(r30)
    bl fn_80018B08
    addi r3, r28, 0x24
    mr r4, r3
    lfs f1, 0x7c(r30)
    bl fn_80018B08
    b lbl_800A37AC
lbl_800A37A4:
    li r3, 0x0
    b lbl_800A37D0
lbl_800A37AC:
    clrlwi r0, r29, 24
    stb r0, 0x0(r28)
    stb r31, 0x1(r28)
    clrlwi r0, r27, 16
    sth r0, 0x2(r28)
    lfs f0, lbl_8049F590
    stfs f0, 0x4(r28)
    stfs f31, 0x8(r28)
    li r3, 0x1
lbl_800A37D0:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_800A37F4
asm s32 fn_800A37F4(u16 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f31, f1
    bl fn_800A4E30
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800A3840
    li r3, 0x0
    b lbl_800A39BC
lbl_800A3840:
    bl fn_800A332C
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_800A3858
    li r3, 0x0
    b lbl_800A39BC
lbl_800A3858:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    addi r3, r1, 0x14
    la r4, lbl_8049F590
    lfs f1, 0x9c(r31)
    lfs f0, 0x6c(r4)
    fmuls f1, f0, f1
    lfs f0, 0x80(r4)
    fadds f0, f0, f1
    fneg f1, f0
    lfs f2, lbl_8049F590
    bl fn_80168440
    addi r3, r1, 0x8
    addi r4, r31, 0x84
    addi r5, r1, 0x14
    bl fn_80018B00
    subi r0, r26, 0x5
    cmplwi r0, 0x2
    ble lbl_800A3954
    subi r0, r26, 0x8
    cmplwi r0, 0x2
    ble lbl_800A3970
    cmpwi r26, 0x2
    beq lbl_800A38D0
    cmpwi r26, 0x3
    beq lbl_800A38FC
    cmpwi r26, 0x4
    beq lbl_800A3928
    b lbl_800A398C
lbl_800A38D0:
    mr r3, r30
    mr r4, r26
    mr r5, r28
    mr r6, r29
    mr r7, r27
    addi r8, r1, 0x14
    bl fn_800A3D8C
    cmpwi r3, 0x0
    bne lbl_800A3994
    li r3, 0x0
    b lbl_800A39BC
lbl_800A38FC:
    mr r3, r30
    mr r4, r26
    mr r5, r28
    mr r6, r29
    addi r7, r31, 0x84
    addi r8, r1, 0x14
    bl fn_800A3D8C
    cmpwi r3, 0x0
    bne lbl_800A3994
    li r3, 0x0
    b lbl_800A39BC
lbl_800A3928:
    mr r3, r30
    mr r4, r26
    mr r5, r28
    mr r6, r29
    addi r7, r31, 0x84
    addi r8, r1, 0x14
    bl fn_800A3D8C
    cmpwi r3, 0x0
    bne lbl_800A3994
    li r3, 0x0
    b lbl_800A39BC
lbl_800A3954:
    lfs f0, 0x9c(r31)
    stfs f0, 0x18(r30)
    lfs f1, 0x0(r27)
    lfs f0, 0x9c(r31)
    fadds f0, f1, f0
    stfs f0, 0x24(r30)
    b lbl_800A3994
lbl_800A3970:
    addi r3, r30, 0x18
    addi r4, r31, 0x84
    bl fn_80019DAC
    addi r3, r30, 0x24
    mr r4, r27
    bl fn_80019DAC
    b lbl_800A3994
lbl_800A398C:
    li r3, 0x0
    b lbl_800A39BC
lbl_800A3994:
    clrlwi r0, r26, 24
    stb r0, 0x0(r30)
    li r0, 0x7
    stb r0, 0x1(r30)
    clrlwi r0, r25, 16
    sth r0, 0x2(r30)
    lfs f0, lbl_8049F590
    stfs f0, 0x4(r30)
    stfs f31, 0x8(r30)
    li r3, 0x1
lbl_800A39BC:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800A39E0
asm s32 fn_800A39E0(u16 arg0, s32 arg1, f32 *arg2, s32 arg3, u8 *arg4, f32 farg0) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    addi r11, r1, 0x80
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    fmr f31, f1
    bl fn_800A4E30
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_800A3A2C
    li r3, 0x0
    b lbl_800A3BAC
lbl_800A3A2C:
    bl fn_800A332C
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_800A3A44
    li r3, 0x0
    b lbl_800A3BAC
lbl_800A3A44:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    addi r3, r1, 0x8
    lfs f1, lbl_8049F590
    fmr f2, f1
    la r31, lbl_8049F590
    lfs f3, 0x18(r31)
    bl fn_80018B0C
    subi r0, r25, 0x5
    cmplwi r0, 0x2
    ble lbl_800A3AB4
    subi r0, r25, 0x8
    cmplwi r0, 0x2
    ble lbl_800A3B60
    cmpwi r25, 0x3
    bne lbl_800A3B7C
    mr r3, r29
    mr r4, r25
    mr r5, r27
    mr r6, r28
    addi r7, r29, 0xc
    addi r8, r1, 0x8
    bl fn_800A3D8C
    cmpwi r3, 0x0
    bne lbl_800A3B84
    li r3, 0x0
    b lbl_800A3BAC
lbl_800A3AB4:
    lfs f0, 0x0(r26)
    lfs f1, 0x6c(r31)
    fmuls f0, f1, f0
    stfs f0, 0x34(r29)
    lfs f0, 0x4(r26)
    fmuls f0, f1, f0
    stfs f0, 0x38(r29)
    addi r3, r29, 0x28
    addi r4, r30, 0x84
    bl fn_80019DAC
    addi r3, r1, 0x20
    lis r4, lbl_80339938@ha
    addi r4, r4, lbl_80339938@l
    addi r5, r1, 0x8
    bl fn_8001F9C8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8017347C
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x30
    bl fn_80173750
    addi r3, r1, 0x30
    li r4, 0x0
    addi r5, r1, 0x20
    bl fn_801735E8
    addi r3, r1, 0x30
    li r4, 0x1
    addi r5, r1, 0x14
    bl fn_801735E8
    addi r3, r1, 0x30
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801735E8
    addi r3, r29, 0x18
    addi r4, r1, 0x30
    bl C_QUATMtx
    b lbl_800A3B84
lbl_800A3B60:
    addi r3, r29, 0x18
    addi r4, r29, 0xc
    bl fn_80019DAC
    addi r3, r29, 0x24
    mr r4, r26
    bl fn_80019DAC
    b lbl_800A3B84
lbl_800A3B7C:
    li r3, 0x0
    b lbl_800A3BAC
lbl_800A3B84:
    clrlwi r0, r25, 24
    stb r0, 0x0(r29)
    li r0, 0x8
    stb r0, 0x1(r29)
    clrlwi r0, r24, 16
    sth r0, 0x2(r29)
    lfs f0, lbl_8049F590
    stfs f0, 0x4(r29)
    stfs f31, 0x8(r29)
    li r3, 0x1
lbl_800A3BAC:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_800A3BD0
asm s32 fn_800A3BD0(u16 arg0, u8 arg1, s32 arg3, f32 farg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r6
    fmr f31, f1
    bl fn_800A4E30
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_800A3C14
    li r3, 0x0
    b lbl_800A3CB0
lbl_800A3C14:
    bl fn_800A332C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800A3C2C
    li r3, 0x0
    b lbl_800A3CB0
lbl_800A3C2C:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    subi r0, r28, 0x8
    cmplwi r0, 0x2
    bgt lbl_800A3C80
    lfd f1, lbl_8049F580
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x1c(r31)
    lwz r3, 0x377c(r30)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_80034178
    b lbl_800A3C88
lbl_800A3C80:
    li r3, 0x0
    b lbl_800A3CB0
lbl_800A3C88:
    clrlwi r0, r28, 24
    stb r0, 0x0(r31)
    li r0, 0xb
    stb r0, 0x1(r31)
    clrlwi r0, r27, 16
    sth r0, 0x2(r31)
    lfs f0, lbl_8049F590
    stfs f0, 0x4(r31)
    stfs f31, 0x8(r31)
    li r3, 0x1
lbl_800A3CB0:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800A3CD4
asm s32 fn_800A3CD4(u16 arg0, s32 arg1, f32 *arg2, f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    fmr f31, f1
    bl fn_800A332C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800A3D18
    li r3, 0x0
    b lbl_800A3D68
lbl_800A3D18:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    cmpwi r29, 0xb
    bne lbl_800A3D38
    lfs f0, 0x0(r30)
    stfs f0, 0x18(r31)
    b lbl_800A3D40
lbl_800A3D38:
    li r3, 0x0
    b lbl_800A3D68
lbl_800A3D40:
    clrlwi r0, r29, 24
    stb r0, 0x0(r31)
    li r0, 0xa
    stb r0, 0x1(r31)
    clrlwi r0, r28, 16
    sth r0, 0x2(r31)
    lfs f0, lbl_8049F590
    stfs f0, 0x4(r31)
    stfs f31, 0x8(r31)
    li r3, 0x1
lbl_800A3D68:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800A3D8C
asm s32 fn_800A3D8C(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, f32 *arg4, f32 *arg5) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    addi r11, r1, 0x90
    bl _savegpr_24
    mr r27, r3
    mr r28, r4
    mr r24, r5
    mr r25, r6
    mr r29, r7
    mr r30, r8
    li r31, 0x0
    cmpwi r6, 0x0
    beq lbl_800A3DE0
    lbz r0, 0x0(r6)
    extsb r0, r0
    cmpwi r0, 0x0
    beq lbl_800A3DE0
    li r31, 0x1
lbl_800A3DE0:
    mr r3, r24
    bl fn_800A4E30
    mr r26, r3
    cmpwi r3, 0x0
    bne lbl_800A3DFC
    li r3, 0x0
    b lbl_800A3F84
lbl_800A3DFC:
    clrlwi r0, r24, 16
    sth r0, 0x18(r27)
    cmpwi r31, 0x0
    beq lbl_800A3E10
    b lbl_800A3E1C
lbl_800A3E10:
    lis r4, lbl_8034CE74@ha
    addi r4, r4, lbl_8034CE74@l
    addi r25, r4, 0x1b8
lbl_800A3E1C:
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    mr r4, r25
    bl fn_8003421C
    clrlwi r0, r3, 16
    sth r0, 0x1a(r27)
    cmplwi r0, 0xffff
    bne lbl_800A3E4C
    li r3, 0x0
    b lbl_800A3F84
lbl_800A3E4C:
    lwz r3, 0x377c(r26)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    lwz r3, 0xd0(r3)
    lhz r0, 0x1a(r27)
    mulli r0, r0, 0x280
    add r4, r3, r0
    addi r3, r1, 0x40
    addi r4, r4, 0x224
    bl fn_801734E4
    cmpwi r28, 0x2
    beq lbl_800A3E98
    cmpwi r28, 0x3
    beq lbl_800A3ED8
    cmpwi r28, 0x4
    beq lbl_800A3F0C
    b lbl_800A3F80
lbl_800A3E98:
    cmpwi r31, 0x0
    beq lbl_800A3EB0
    addi r3, r27, 0x28
    mr r4, r29
    bl fn_80019DAC
    b lbl_800A3EC8
lbl_800A3EB0:
    addi r3, r27, 0x28
    lfs f1, lbl_8049F590
    la r4, lbl_8049F590
    lfs f2, 0x84(r4)
    fmr f3, f1
    bl fn_80018B0C
lbl_800A3EC8:
    addi r3, r27, 0x1c
    mr r4, r30
    bl fn_80019DAC
    b lbl_800A3F80
lbl_800A3ED8:
    addi r3, r27, 0x28
    lfs f1, 0x4c(r1)
    lfs f2, 0x5c(r1)
    lfs f3, 0x6c(r1)
    bl fn_80018B0C
    addi r3, r27, 0x28
    mr r4, r29
    mr r5, r3
    bl fn_8001B8B8
    addi r3, r27, 0x1c
    mr r4, r30
    bl fn_80019DAC
    b lbl_800A3F80
lbl_800A3F0C:
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    bl fn_80173754
    addi r3, r27, 0x28
    addi r4, r1, 0x10
    mr r5, r29
    bl fn_80018AF8
    mr r3, r30
    bl fn_8001B8BC
    fmr f31, f1
    addi r3, r27, 0x1c
    addi r4, r1, 0x10
    mr r5, r30
    bl fn_80018B04
    addi r3, r27, 0x1c
    mr r4, r3
    bl fn_8001B8B4
    la r3, lbl_8049F590
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_800A3F80
    addi r3, r27, 0x1c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r27, 0x1c
    mr r4, r3
    fmr f1, f31
    bl fn_80018B08
lbl_800A3F80:
    li r3, 0x1
lbl_800A3F84:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_800A3FA8
asm void fn_800A3FA8(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    la r3, lbl_8049F590
    lfs f31, 0x14(r3)
    bl fn_801714F0
    cmpwi r3, 0x0
    bne lbl_800A3FE4
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r0, 0x24(r3)
    cmpwi r0, 0x1
    bne lbl_800A3FEC
lbl_800A3FE4:
    la r3, lbl_8049F590
    lfs f31, 0x88(r3)
lbl_800A3FEC:
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_800A4000
    fmr f1, f31
    bl fn_800A401C
lbl_800A4000:
    li r0, 0x18
    opword 0x13E1000C
    lfd f31, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800A401C
asm void fn_800A401C() {
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
    bl _savegpr_23
    fmr f28, f1
    li r31, 0x0
    lis r3, lbl_803A1D58@ha
    addi r25, r3, lbl_803A1D58@l
    lwz r0, 0x34(r25)
    cmpwi r0, 0x0
    beq lbl_800A4268
    li r23, 0x0
    li r30, 0x0
    la r26, lbl_8049F590
    lfs f30, 0x14(r26)
    lfs f31, 0x38(r26)
    lfs f29, lbl_8049F590
    lis r27, jumptable_8034CE44@ha
    mr r28, r30
    mr r29, r30
    b lbl_800A41CC
lbl_800A4094:
    lwz r0, 0x34(r25)
    add r24, r0, r30
    lbz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_800A41C4
    lfs f0, 0x4(r24)
    fadds f0, f0, f28
    stfs f0, 0x4(r24)
    lfs f1, 0x8(r24)
    fcmpo cr0, f1, f29
    ble lbl_800A40D8
    lfs f0, 0x4(r24)
    fdivs f2, f0, f1
    fcmpo cr0, f2, f30
    ble lbl_800A40DC
    lfs f2, 0x14(r26)
    b lbl_800A40DC
lbl_800A40D8:
    lfs f2, 0x14(r26)
lbl_800A40DC:
    lbz r0, 0x0(r24)
    cmpwi r0, 0x6
    beq lbl_800A4104
    cmpwi r0, 0x9
    beq lbl_800A4104
    cmpwi r0, 0x7
    beq lbl_800A4118
    cmpwi r0, 0xa
    beq lbl_800A4118
    b lbl_800A4128
lbl_800A4104:
    fsubs f0, f30, f2
    fmuls f1, f31, f0
    bl fn_80018C3C
    fmr f2, f1
    b lbl_800A4128
lbl_800A4118:
    fsubs f0, f30, f2
    fmuls f1, f31, f0
    bl fn_80018C3C
    fmuls f2, f1, f1
lbl_800A4128:
    lbz r0, 0x1(r24)
    cmplwi r0, 0xb
    bgt lbl_800A4198
    addi r3, r27, jumptable_8034CE44@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r24
    fmr f1, f28
    bl fn_800A42B0
    li r31, 0x1
    b lbl_800A4198
    mr r3, r24
    fmr f1, f28
    bl fn_800A45DC
    b lbl_800A4198
    mr r3, r24
    fmr f1, f28
    bl fn_800A466C
    b lbl_800A4198
    mr r3, r24
    fmr f1, f28
    bl fn_800A4940
    b lbl_800A4198
    mr r3, r24
    fmr f1, f28
    bl fn_800A4C60
lbl_800A4198:
    cmpwi r31, 0x0
    bne lbl_800A41C4
    lfs f1, 0x8(r24)
    fcmpo cr0, f1, f29
    ble lbl_800A41C4
    lfs f0, 0x4(r24)
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_800A41C4
    stb r28, 0x0(r24)
    stb r29, 0x1(r24)
lbl_800A41C4:
    addi r23, r23, 0x1
    addi r30, r30, 0x3c
lbl_800A41CC:
    lbz r0, 0xe(r25)
    cmpw r23, r0
    blt lbl_800A4094
    li r25, 0x0
    li r31, 0x0
    li r30, 0x0
    lis r3, lbl_803A1D58@ha
    addi r29, r3, lbl_803A1D58@l
    b lbl_800A4258
lbl_800A41F0:
    lwz r6, 0x34(r29)
    add r3, r6, r31
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_800A4250
    addi r7, r25, 0x1
    mulli r4, r7, 0x3c
    subf r0, r7, r5
    mtctr r0
    cmpw r7, r5
    bge lbl_800A4250
lbl_800A421C:
    lbzx r0, r6, r4
    cmpwi r0, 0x0
    beq lbl_800A4244
    add r26, r6, r4
    mr r4, r26
    li r5, 0x3c
    bl memcpy
    stb r30, 0x0(r26)
    stb r30, 0x1(r26)
    b lbl_800A4250
lbl_800A4244:
    addi r7, r7, 0x1
    addi r4, r4, 0x3c
    bdnz lbl_800A421C
lbl_800A4250:
    addi r25, r25, 0x1
    addi r31, r31, 0x3c
lbl_800A4258:
    lbz r5, 0xe(r29)
    subi r0, r5, 0x1
    cmpw r25, r0
    blt lbl_800A41F0
lbl_800A4268:
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
    bl _restgpr_23
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_800A42B0
asm void fn_800A42B0(s8 *arg0, f32 farg1) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    addi r11, r1, 0x80
    bl _savegpr_28
    mr r31, r3
    fmr f30, f2
    la r29, lbl_8049F590
    lfs f31, 0x50(r29)
    li r28, 0x0
    li r3, 0x0
    bl fn_8017ADBC
    mr r30, r3
    li r4, 0x0
    lbz r0, 0x0(r31)
    cmplwi r0, 0x1
    bne lbl_800A4338
    lbz r0, 0x84(r3)
    cmpwi r0, 0x0
    bne lbl_800A431C
    lbz r0, 0xac(r3)
    cmpwi r0, 0x0
    beq lbl_800A4320
lbl_800A431C:
    li r4, 0x1
lbl_800A4320:
    cmpwi r4, 0x0
    bne lbl_800A45AC
    li r0, 0x0
    stb r0, 0x0(r31)
    stb r0, 0x1(r31)
    b lbl_800A45AC
lbl_800A4338:
    addi r3, r1, 0x14
    addi r4, r30, 0x4
    bl fn_8002B044
    addi r3, r1, 0x8
    addi r4, r30, 0x1c
    bl fn_8002B044
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8001B8B8
    lbz r3, 0x0(r31)
    subi r0, r3, 0x5
    cmplwi r0, 0x2
    ble lbl_800A43F4
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    ble lbl_800A44A4
    cmpwi r3, 0x2
    beq lbl_800A4398
    cmpwi r3, 0x3
    beq lbl_800A43B4
    cmpwi r3, 0x4
    beq lbl_800A43D4
    b lbl_800A44CC
lbl_800A4398:
    addi r3, r1, 0x8
    li r4, 0x0
    mr r5, r31
    bl fn_800A4C64
    cmpwi r3, 0x0
    bne lbl_800A44CC
    b lbl_800A45AC
lbl_800A43B4:
    li r28, 0x1
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    mr r5, r31
    bl fn_800A4C64
    cmpwi r3, 0x0
    bne lbl_800A44CC
    b lbl_800A45AC
lbl_800A43D4:
    li r28, 0x1
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    mr r5, r31
    bl fn_800A4C64
    cmpwi r3, 0x0
    bne lbl_800A44CC
    b lbl_800A45AC
lbl_800A43F4:
    lfs f31, lbl_8049F590
    addi r3, r1, 0x30
    bl fn_80173750
    addi r3, r1, 0x30
    addi r4, r31, 0x18
    bl PSMTXQuat
    addi r3, r1, 0x30
    mr r4, r3
    addi r5, r31, 0x28
    bl fn_80173730
    addi r3, r1, 0x20
    bl fn_8001B8BC
    fmr f3, f1
    lbz r0, 0x1(r31)
    cmplwi r0, 0x1
    bne lbl_800A4468
    addi r3, r1, 0x20
    lfs f0, 0x34(r31)
    fmuls f1, f0, f30
    lfs f0, 0x80(r29)
    fadds f1, f0, f1
    lfs f0, 0x38(r31)
    fmuls f2, f0, f30
    bl fn_801684F0
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    addi r5, r1, 0x20
    bl fn_80018AF8
    b lbl_800A44CC
lbl_800A4468:
    li r28, 0x1
    addi r3, r1, 0x20
    lfs f0, 0x34(r31)
    fmuls f1, f0, f30
    lfs f0, 0x80(r29)
    fadds f0, f0, f1
    fneg f1, f0
    lfs f0, 0x38(r31)
    fmuls f2, f0, f30
    bl fn_801684F0
    addi r3, r1, 0x14
    addi r4, r1, 0x30
    addi r5, r1, 0x20
    bl fn_80018AF8
    b lbl_800A44CC
lbl_800A44A4:
    li r28, 0x1
    addi r3, r1, 0x14
    addi r4, r31, 0x18
    addi r5, r31, 0x24
    fmr f1, f30
    bl fn_8001D9D0
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    bl fn_80018B00
lbl_800A44CC:
    cmpwi r28, 0x0
    beq lbl_800A452C
    li r0, 0x1
    stb r0, 0x84(r30)
    li r3, 0x0
    stw r3, 0xa0(r30)
    fctiwz f0, f31
    stfd f0, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r0, 0xa4(r30)
    stw r3, 0xa8(r30)
    lwz r0, 0xa4(r30)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xa8(r30)
    cmpw r0, r3
    ble lbl_800A4514
    stw r3, 0xa8(r30)
lbl_800A4514:
    addi r3, r30, 0x88
    addi r4, r30, 0x4
    bl fn_80019DAC
    addi r3, r30, 0x94
    addi r4, r1, 0x14
    bl fn_80019DAC
lbl_800A452C:
    li r0, 0x1
    stb r0, 0xac(r30)
    li r3, 0x0
    stw r3, 0xc8(r30)
    fctiwz f0, f31
    stfd f0, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r0, 0xcc(r30)
    stw r3, 0xd0(r30)
    lwz r0, 0xcc(r30)
    srawi r0, r0, 1
    addze r3, r0
    lwz r0, 0xd0(r30)
    cmpw r0, r3
    ble lbl_800A456C
    stw r3, 0xd0(r30)
lbl_800A456C:
    addi r3, r30, 0xb0
    addi r4, r30, 0x1c
    bl fn_80019DAC
    addi r3, r30, 0xbc
    addi r4, r1, 0x8
    bl fn_80019DAC
    lfs f1, 0x8(r31)
    lfs f0, lbl_8049F590
    fcmpo cr0, f1, f0
    ble lbl_800A45AC
    lfs f0, 0x4(r31)
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_800A45AC
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_800A45AC:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_28
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_800A45DC
asm void fn_800A45DC(s8 *arg0, f32 farg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f30, f2
    li r3, 0x0
    bl fn_8017ADBC
    lfs f31, 0x38(r3)
    lbz r3, 0x0(r31)
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    bgt lbl_800A4634
    lfs f0, 0x24(r31)
    lfs f1, 0x18(r31)
    fsubs f0, f0, f1
    fmuls f0, f30, f0
    fadds f31, f1, f0
lbl_800A4634:
    li r3, 0x0
    bl fn_8017ADBC
    stfs f31, 0x38(r3)
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    li r0, 0x18
    opword 0x13C1000C
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800A466C
asm void fn_800A466C(s8 *arg0, f32 farg1) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    mr r30, r3
    fmr f31, f2
    lbz r0, 0x1(r3)
    cmplwi r0, 0x6
    bne lbl_800A46AC
    li r3, 0x0
    addi r4, r1, 0x48
    bl fn_8003FADC
    b lbl_800A46BC
lbl_800A46AC:
    li r3, 0x0
    lhz r4, 0x2(r30)
    addi r5, r1, 0x48
    bl fn_8003FA5C
lbl_800A46BC:
    lbz r0, 0x1(r30)
    cmplwi r0, 0x4
    beq lbl_800A4754
    lbz r3, 0x0(r30)
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    bgt lbl_800A46EC
    addi r3, r1, 0x8
    addi r4, r30, 0x18
    addi r5, r30, 0x24
    fmr f1, f31
    bl fn_8001D9D0
lbl_800A46EC:
    addi r3, r1, 0x8
    mr r4, r3
    la r31, lbl_8049F590
    lfs f1, 0x8c(r31)
    bl fn_80018B08
    addi r3, r1, 0x8
    mr r4, r3
    lfs f1, lbl_8049F590
    lfs f2, 0x8c(r31)
    bl fn_800A5030
    lfs f0, 0x8(r1)
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r0, 0x94(r1)
    stb r0, 0x70(r1)
    lfs f0, 0xc(r1)
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    stb r0, 0x71(r1)
    lfs f0, 0x10(r1)
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r0, 0xa4(r1)
    stb r0, 0x72(r1)
    b lbl_800A48F0
lbl_800A4754:
    lbz r3, 0x0(r30)
    subi r0, r3, 0x5
    cmplwi r0, 0x2
    ble lbl_800A4858
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    ble lbl_800A48DC
    cmpwi r3, 0x2
    beq lbl_800A478C
    cmpwi r3, 0x3
    beq lbl_800A47E4
    cmpwi r3, 0x4
    beq lbl_800A4800
    b lbl_800A48F0
lbl_800A478C:
    addi r3, r1, 0x8
    li r4, 0x0
    mr r5, r30
    bl fn_800A4C64
    cmpwi r3, 0x0
    beq lbl_800A491C
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r1, 0x58
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B4
    la r3, lbl_8049F590
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_800A48F0
    addi r3, r1, 0x64
    addi r4, r1, 0x8
    bl fn_8001B8B0
    b lbl_800A48F0
lbl_800A47E4:
    li r3, 0x0
    addi r4, r1, 0x58
    mr r5, r30
    bl fn_800A4C64
    cmpwi r3, 0x0
    bne lbl_800A48F0
    b lbl_800A491C
lbl_800A4800:
    addi r3, r1, 0x8
    addi r4, r1, 0x58
    mr r5, r30
    bl fn_800A4C64
    cmpwi r3, 0x0
    beq lbl_800A491C
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r1, 0x58
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B4
    la r3, lbl_8049F590
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_800A48F0
    addi r3, r1, 0x64
    addi r4, r1, 0x8
    bl fn_8001B8B0
    b lbl_800A48F0
lbl_800A4858:
    addi r3, r1, 0x8
    la r31, lbl_8049F590
    lfs f0, 0x34(r30)
    fmuls f1, f0, f31
    lfs f0, 0x80(r31)
    fadds f1, f0, f1
    lfs f0, 0x38(r30)
    fmuls f2, f0, f31
    bl fn_80168440
    addi r3, r1, 0x18
    bl fn_80173750
    addi r3, r1, 0x18
    addi r4, r30, 0x18
    bl PSMTXQuat
    addi r3, r1, 0x18
    mr r4, r3
    addi r5, r30, 0x28
    bl fn_80173730
    addi r3, r1, 0x8
    addi r4, r1, 0x18
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B4
    lfs f0, 0x4(r31)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_800A48F0
    addi r3, r1, 0x64
    addi r4, r1, 0x8
    bl fn_8001B8B0
    b lbl_800A48F0
lbl_800A48DC:
    addi r3, r1, 0x58
    addi r4, r30, 0x18
    addi r5, r30, 0x24
    fmr f1, f31
    bl fn_8001D9D0
lbl_800A48F0:
    lbz r0, 0x1(r30)
    cmplwi r0, 0x6
    bne lbl_800A490C
    li r3, 0x0
    addi r4, r1, 0x48
    bl fn_8003F8A0
    b lbl_800A491C
lbl_800A490C:
    li r3, 0x0
    lhz r4, 0x2(r30)
    addi r5, r1, 0x48
    bl fn_8003F82C
lbl_800A491C:
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_800A4940
asm void fn_800A4940(s8 *arg0, f32 farg1) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    addi r11, r1, 0x60
    bl _savegpr_29
    mr r31, r3
    fmr f31, f2
    lhz r3, 0x2(r3)
    bl fn_800A4E30
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_800A4C3C
    lbz r0, 0x1(r31)
    cmpwi r0, 0x8
    beq lbl_800A4998
    cmpwi r0, 0x7
    beq lbl_800A4A4C
    cmpwi r0, 0xb
    beq lbl_800A4BFC
    b lbl_800A4C3C
lbl_800A4998:
    lbz r3, 0x0(r31)
    subi r0, r3, 0x5
    cmplwi r0, 0x2
    ble lbl_800A49D8
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    ble lbl_800A4A34
    cmpwi r3, 0x3
    bne lbl_800A4C3C
    addi r3, r31, 0xc
    li r4, 0x0
    mr r5, r31
    bl fn_800A4C64
    cmpwi r3, 0x0
    bne lbl_800A4C3C
    b lbl_800A4C3C
lbl_800A49D8:
    addi r3, r1, 0x8
    la r4, lbl_8049F590
    lfs f0, 0x34(r31)
    fmuls f1, f0, f31
    lfs f0, 0x80(r4)
    fadds f1, f0, f1
    lfs f0, 0x38(r31)
    fmuls f2, f0, f31
    bl fn_80168440
    addi r3, r1, 0x18
    bl fn_80173750
    addi r3, r1, 0x18
    addi r4, r31, 0x18
    bl PSMTXQuat
    addi r3, r1, 0x18
    mr r4, r3
    addi r5, r31, 0x28
    bl fn_80173730
    addi r3, r31, 0xc
    addi r4, r1, 0x18
    addi r5, r1, 0x8
    bl fn_80018AF8
    b lbl_800A4C3C
lbl_800A4A34:
    addi r3, r31, 0xc
    addi r4, r31, 0x18
    addi r5, r31, 0x24
    fmr f1, f31
    bl fn_8001D9D0
    b lbl_800A4C3C
lbl_800A4A4C:
    li r29, 0x0
    lbz r4, 0x0(r31)
    subi r0, r4, 0x5
    cmplwi r0, 0x2
    ble lbl_800A4BAC
    subi r0, r4, 0x8
    cmplwi r0, 0x2
    ble lbl_800A4BCC
    cmpwi r4, 0x2
    beq lbl_800A4A88
    cmpwi r4, 0x3
    beq lbl_800A4B08
    cmpwi r4, 0x4
    beq lbl_800A4B28
    b lbl_800A4BE4
lbl_800A4A88:
    addi r3, r1, 0x8
    li r4, 0x0
    mr r5, r31
    bl fn_800A4C64
    cmpwi r3, 0x0
    beq lbl_800A4C3C
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r30, 0x84
    bl fn_8001B8B8
    lfs f0, lbl_8049F590
    stfs f0, 0xc(r1)
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B4
    la r31, lbl_8049F590
    lfs f0, 0x4(r31)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_800A4BE4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    bl fn_801685C8
    lfs f0, 0x80(r31)
    fadds f1, f0, f1
    lwz r3, 0x377c(r30)
    lfs f0, 0x34(r31)
    fmuls f1, f0, f1
    bl fn_80182220
    b lbl_800A4BE4
lbl_800A4B08:
    li r3, 0x0
    addi r4, r30, 0x84
    mr r5, r31
    bl fn_800A4C64
    cmpwi r3, 0x0
    beq lbl_800A4C3C
    li r29, 0x1
    b lbl_800A4BE4
lbl_800A4B28:
    addi r3, r1, 0x8
    addi r4, r30, 0x84
    mr r5, r31
    bl fn_800A4C64
    cmpwi r3, 0x0
    beq lbl_800A4C3C
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r30, 0x84
    bl fn_8001B8B8
    lfs f0, lbl_8049F590
    stfs f0, 0xc(r1)
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B4
    la r31, lbl_8049F590
    lfs f0, 0x4(r31)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_800A4BA4
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    bl fn_801685C8
    lfs f0, 0x80(r31)
    fadds f1, f0, f1
    lwz r3, 0x377c(r30)
    lfs f0, 0x34(r31)
    fmuls f1, f0, f1
    bl fn_80182220
lbl_800A4BA4:
    li r29, 0x1
    b lbl_800A4BE4
lbl_800A4BAC:
    lfs f0, 0x24(r31)
    lfs f1, 0x18(r31)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f1, f1, f0
    lwz r3, 0x377c(r3)
    bl fn_80182220
    b lbl_800A4BE4
lbl_800A4BCC:
    addi r3, r3, 0x84
    addi r4, r31, 0x18
    addi r5, r31, 0x24
    fmr f1, f31
    bl fn_8001D9D0
    li r29, 0x1
lbl_800A4BE4:
    cmpwi r29, 0x0
    beq lbl_800A4C3C
    lwz r3, 0x377c(r30)
    addi r4, r30, 0x84
    bl fn_80182518
    b lbl_800A4C3C
lbl_800A4BFC:
    lbz r3, 0x0(r31)
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    bgt lbl_800A4C3C
    lfs f0, 0x24(r31)
    lfs f1, 0x18(r31)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f1, f1, f0
    lfs f0, lbl_8049F590
    fcmpo cr0, f1, f0
    bge lbl_800A4C30
    fmr f1, f0
lbl_800A4C30:
    la r3, lbl_8049F590
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
lbl_800A4C3C:
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

void fn_800A4C60(void) {
}

// asm_to_cpp: fn_800A4C64
asm s32 fn_800A4C64(f32 *arg0, f32 *arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lhz r3, 0x18(r5)
    bl fn_800A4E30
    cmpwi r3, 0x0
    beq lbl_800A4CA0
    lhz r0, 0x1a(r31)
    cmplwi r0, 0xffff
    bne lbl_800A4CA8
lbl_800A4CA0:
    li r3, 0x0
    b lbl_800A4DE4
lbl_800A4CA8:
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    lwz r3, 0xd0(r3)
    lhz r0, 0x1a(r31)
    mulli r0, r0, 0x280
    add r4, r3, r0
    addi r3, r1, 0x18
    addi r4, r4, 0x224
    bl fn_801734E4
    lbz r0, 0x0(r31)
    cmpwi r0, 0x2
    beq lbl_800A4CF8
    cmpwi r0, 0x3
    beq lbl_800A4D4C
    cmpwi r0, 0x4
    beq lbl_800A4DA0
    b lbl_800A4DE0
lbl_800A4CF8:
    addi r3, r1, 0xc
    lfs f1, 0x24(r1)
    lfs f2, 0x34(r1)
    lfs f3, 0x44(r1)
    bl fn_80018B0C
    addi r3, r1, 0xc
    mr r4, r3
    addi r5, r31, 0x28
    bl fn_80018B00
    cmpwi r29, 0x0
    beq lbl_800A4D30
    mr r3, r29
    addi r4, r1, 0xc
    bl fn_80019DAC
lbl_800A4D30:
    cmpwi r30, 0x0
    beq lbl_800A4DE0
    mr r3, r30
    addi r4, r1, 0xc
    addi r5, r31, 0x1c
    bl fn_8001B8B8
    b lbl_800A4DE0
lbl_800A4D4C:
    addi r3, r1, 0xc
    lfs f1, 0x24(r1)
    lfs f2, 0x34(r1)
    lfs f3, 0x44(r1)
    bl fn_80018B0C
    addi r3, r1, 0xc
    mr r4, r3
    addi r5, r31, 0x28
    bl fn_80018B00
    cmpwi r30, 0x0
    beq lbl_800A4D84
    mr r3, r30
    addi r4, r1, 0xc
    bl fn_80019DAC
lbl_800A4D84:
    cmpwi r29, 0x0
    beq lbl_800A4DE0
    mr r3, r29
    addi r4, r1, 0xc
    addi r5, r31, 0x1c
    bl fn_80018B00
    b lbl_800A4DE0
lbl_800A4DA0:
    addi r3, r1, 0xc
    addi r4, r31, 0x28
    addi r5, r31, 0x1c
    bl fn_80018B00
    cmpwi r29, 0x0
    beq lbl_800A4DC8
    mr r3, r29
    addi r4, r1, 0x18
    addi r5, r1, 0xc
    bl fn_80018AF8
lbl_800A4DC8:
    cmpwi r30, 0x0
    beq lbl_800A4DE0
    mr r3, r30
    addi r4, r1, 0x18
    addi r5, r31, 0x28
    bl fn_80018AF8
lbl_800A4DE0:
    li r3, 0x1
lbl_800A4DE4:
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_800A4DFC
asm s32 * fn_800A4DFC(s32 arg0) {
    nofralloc
    cmpwi r3, 0x0
    blt lbl_800A4E18
    lis r4, lbl_803A1D58@ha
    addi r4, r4, lbl_803A1D58@l
    lbz r0, 0xc(r4)
    cmpw r0, r3
    bgt lbl_800A4E20
lbl_800A4E18:
    li r3, 0x0
    blr
lbl_800A4E20:
    lwz r4, 0x30(r4)
    slwi r0, r3, 8
    add r3, r4, r0
    blr
}

// asm_to_cpp: fn_800A4E30
asm s8 * fn_800A4E30(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800A4DFC
    cmpwi r3, 0x0
    bne lbl_800A4E50
    li r3, 0x0
    b lbl_800A4E78
lbl_800A4E50:
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800A4E68
    li r3, 0x0
    b lbl_800A4E78
lbl_800A4E68:
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    bne lbl_800A4E78
    li r3, 0x0
lbl_800A4E78:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A4E88
asm s32 fn_800A4E88(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_800A4DFC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800A4EB0
    li r3, 0x0
    b lbl_800A4ED0
lbl_800A4EB0:
    addi r3, r3, 0xc
    lwz r4, 0x8(r31)
    addi r4, r4, 0x84
    bl fn_80019DAC
    lwz r3, 0x8(r31)
    lfs f0, 0x9c(r3)
    stfs f0, 0x18(r31)
    li r3, 0x1
lbl_800A4ED0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_800A4EE4(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_80019DAC((s8 *) (M2C_FIELD(temp_r3, s8 **, 8) + 0x84), (f32 *) ((s8 *)temp_r3 + 0xC));
    M2C_FIELD(M2C_FIELD(temp_r3, s8 **, 8), f32 *, 0x9C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x18);
    return (s32) (1);
}

s32 fn_800A4F40(void) {
    return (s32) (1);
}

// asm_to_cpp: fn_800A4F48
asm s32 fn_800A4F48(s32 arg0, u32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r7, r3
    mr r5, r4
    li r6, 0x0
    cmpwi r4, 0x0
    beq lbl_800A4F78
    lwz r0, 0x0(r4)
    cmplwi r0, 0xffff
    beq lbl_800A4F78
    li r6, 0x1
lbl_800A4F78:
    cmpwi r3, 0x9
    blt lbl_800A4F88
    li r3, 0x0
    b lbl_800A4FC0
lbl_800A4F88:
    cmpwi r3, 0x8
    bne lbl_800A4FA8
    cmpwi r6, 0x0
    beq lbl_800A4FBC
    li r3, 0x0
    mr r4, r5
    bl fn_8003F8A0
    b lbl_800A4FBC
lbl_800A4FA8:
    cmpwi r6, 0x0
    beq lbl_800A4FBC
    li r3, 0x0
    mr r4, r7
    bl fn_8003F82C
lbl_800A4FBC:
    li r3, 0x1
lbl_800A4FC0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A4FD0
asm void fn_800A4FD0() {
    nofralloc
    mr r0, r3
    mr r5, r4
    cmpwi r3, 0x9
    blt lbl_800A4FE8
    li r3, 0x0
    blr
lbl_800A4FE8:
    cmpwi r3, 0x8
    bne lbl_800A4FF8
    li r3, 0x0
    b fn_8003FADC
lbl_800A4FF8:
    li r3, 0x0
    mr r4, r0
    b fn_8003FA5C
    blr
}

// asm_to_cpp: fn_800A5008
asm void fn_800A5008(s32 arg0, s32 arg1) {
    nofralloc
    mr r0, r4
    lis r4, lbl_8034CE74@ha
    addi r4, r4, lbl_8034CE74@l
    addi r4, r4, 0x1ba
    slwi r0, r0, 2
    lis r5, lbl_8034CD78@ha
    addi r5, r5, lbl_8034CD78@l
    lwzx r5, r5, r0
    opword 0x4CC63182
    b sprintf
}

// asm_to_cpp: fn_800A5030
asm void fn_800A5030(f32 *arg0, f32 *arg1, f32 farg0, f32 farg1) {
    nofralloc
    lfs f0, 0x0(r4)
    fcmpo cr0, f0, f1
    bge lbl_800A5044
    fmr f0, f1
    b lbl_800A5050
lbl_800A5044:
    fcmpo cr0, f0, f2
    ble lbl_800A5050
    fmr f0, f2
lbl_800A5050:
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    fcmpo cr0, f0, f1
    bge lbl_800A5068
    fmr f0, f1
    b lbl_800A5074
lbl_800A5068:
    fcmpo cr0, f0, f2
    ble lbl_800A5074
    fmr f0, f2
lbl_800A5074:
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    fcmpo cr0, f0, f1
    bge lbl_800A5088
    b lbl_800A509C
lbl_800A5088:
    fcmpo cr0, f0, f2
    ble lbl_800A5094
    b lbl_800A5098
lbl_800A5094:
    fmr f2, f0
lbl_800A5098:
    fmr f1, f2
lbl_800A509C:
    stfs f1, 0x8(r3)
    blr
}

} // extern "C"
