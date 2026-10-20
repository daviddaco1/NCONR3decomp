#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_80339748[];
extern u8 lbl_80339758[];
extern u8 lbl_80339764[];
extern u8 lbl_8033AD70[];
extern u8 lbl_80390818[];
extern u8 lbl_80390828[];
extern u8 lbl_80390968[];
extern u8 lbl_803C1A40[];
extern f32 lbl_8049C2E8;
extern float lbl_8049D524;
extern s32 lbl_8049D52C;
extern s32 lbl_8049D530;
extern s32 lbl_8049D534;
extern float lbl_8049D538;
extern float lbl_8049D53C;
extern float lbl_8049F168;
extern float lbl_8049F198;

s32 _restgpr_14();
s32 _restgpr_15();
s32 _restgpr_17();
s32 _restgpr_21();
s32 _restgpr_22();
s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_14();
s32 _savegpr_15();
s32 _savegpr_17();
s32 _savegpr_21();
s32 _savegpr_22();
s32 _savegpr_23();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
s32 fn_8001B9D4(s32 *arg0, s32 arg1);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80079618(s32 arg0);
s32 fn_80079BB0(s8 *arg0, u32 *arg1);
s32 fn_8007A064(s8 *arg0, u32 *arg1);
s32 fn_8007A488(s8 *arg0, s32 arg1);
void fn_8007A538(s8 *arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4);
void fn_8007A5E8(s8 *arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK fn_8007A688(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8007ABC0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8007AC34(void);
M2C_UNK fn_8007AC40(void);
void fn_8007ACA4(s8 *arg0);
void fn_8007ACDC(s8 *arg0);
void fn_8007ACF4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8007ADAC(s8 *arg0, s32 arg1, s32 arg2);
u32 fn_8007AE48(s32 arg0);
s32 fn_8007AEA0(s8 *arg0, u32 arg1);
s32 fn_8007AF64(s8 *arg0, u32 arg1);
s32 fn_8007AFE4(s8 *arg0, u32 arg1);
u32 fn_8007B04C(s8 *arg0);
u32 * fn_8007B1DC(u32 *arg0, u32 *arg1, s32 arg2);
M2C_UNK fn_8007B1F8(u32 *arg0, u32 *arg1, s32 arg2, u32 *arg3);
s32 fn_8007B24C(s8 *arg0, s8 *arg1, s32 *arg2, s32 arg3, s8 **arg4, f32 *arg5, s8 **arg6, s8 **arg7);
s32 fn_8007B8D8(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s32 *arg4, f32 farg0, f32 farg1);
s32 fn_8007BB4C(s8 **arg0, s8 **arg1, s32 arg2, s8 **arg3, s8 **arg4, s32 *arg5, f32 farg0, f32 farg1);
s32 fn_8007BDC4(s32 arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, s32 *arg5, f32 farg0, f32 farg1);
s32 fn_8007C040(s8 **arg0, s8 **arg1, s8 *arg2);
s32 fn_8007C300(s32 arg0, s8 **arg1, s8 **arg2, f32 farg0);
void fn_8007C560(u32 arg0, s32 arg1, f32 *arg2, s8 **arg3, f32 farg0, s32 arg5);
void fn_8007CA08(s8 *arg0, u32 arg1, s32 arg2, f32 *arg3, s8 **arg4, f32 farg0, s32 arg6);
s32 fn_8007CDAC(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, f32 farg0);
M2C_UNK fn_8007D18C(s8 *arg1, s8 **arg2, s8 **arg3, s8 **arg4, s8 *arg5, s8 **arg6, f32 farg0, s32 arg7);
s32 fn_8007D32C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s8 *arg5, s32 arg6);
s32 fn_8007D508(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 fn_8007D518(s8 **arg0, M2C_UNK *arg1, s8 **arg2, s8 **arg3);
s32 fn_8007D65C(s8 *arg0, s8 **arg1, M2C_UNK *arg2, s8 **arg3, s8 **arg4);
f32 fn_8007D794(s32 arg0);
s32 fn_8007D7F4(s32 arg0, f32 *arg1);
void fn_8007D87C(s32 arg0);
void fn_8007D9A4(void);
s32 fn_8007DA78(s32 arg0);
s32 fn_8007DACC(u32 arg0);
s32 * fn_8007DAF4(u32 arg0);
void fn_8007DB88(u32 arg0);
void fn_8007DBF0(u32 arg0);
s32 fn_8007DC44(u32 arg0);
s16 * fn_8007DC6C(u32 arg0);
void fn_8007DC94(u32 arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, f32 farg0);
s32 fn_8007DDC8(s32 *arg0, s8 *arg1, s8 *arg2, s8 **arg3, f32 farg0);
s32 fn_8007DE30(s32 *arg0);
void fn_8007DE68(s32 *arg0, s8 **arg1);
s32 fn_8007DFA0(s32 *arg0, s8 **arg1, s32 arg2);
M2C_UNK fn_8007E034(s8 **arg0, f32 *arg1, f32 *arg2);
void fn_8007E0B0(s8 **arg0, s8 *arg1, s8 *arg2, s8 *arg3);
void fn_8007E180(s8 **arg0, s32 arg1, s32 arg2, s8 **arg3, s8 **arg4);
void fn_8007E214(s8 **arg0, s8 *arg1);
s32 fn_8007E2CC(s8 **arg0, s32 arg1, s8 **arg2, s8 **arg3, M2C_UNK *arg4);
s32 fn_8007E424(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4);
s32 fn_8007E51C(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, f32 farg0);
s32 fn_8007E8D8(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, s8 **arg5, f32 farg0);
s32 fn_8007ED54(void);
f32 fn_8007ED64(void);
void fn_8007ED6C(f32 farg0);
s32 fn_8007ED74(s8 *arg0, s8 **arg1, s8 **arg2);
s32 fn_8007EDEC(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3);
s32 fn_8007EE98(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, f32 farg0);
s32 fn_8007EF50(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, f32 farg0);
s32 fn_8007F008(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, f32 farg0);
void fn_8007F0C0(void);
void fn_8007F144(void);
s32 fn_8007F1C0(void);
s8 * fn_8007F1D0(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8007F21C(s8 *arg0, s32 arg1);
void fn_8008299C(void);
void fn_80083990(void);
void fn_800839C0(void);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80171190(s32 arg0, s16 arg1, s32 arg2);
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
void fn_80173750(s32 arg0);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
void fn_801739BC(s32 arg0, s32 arg1, f32 farg0);
M2C_UNK fn_8017CF8C(s8 *arg0, s32 arg1, f32 *arg2, f32 farg0);
void fn_8017D0DC(s8 *arg0, s32 arg1, f32 *arg2, f32 *arg3, s32 arg4);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
s32 strcmp(s32 arg0, s32 arg1);

// asm_to_cpp: fn_80079BB0
asm s32 fn_80079BB0(s8 *arg0, u32 *arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r28, r3
    mr r23, r4
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x848(r3)
    lwz r4, 0x14(r4)
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_80079BF8
    li r3, 0x0
    b lbl_8007A04C
lbl_80079BF8:
    li r4, 0x0
    lwz r5, 0x14(r23)
    bl memset
    li r26, 0x0
    stw r26, 0xc(r1)
    addi r3, r1, 0x8
    li r4, 0x28
    bl fn_8001B9D4
    mr r29, r3
    mr r3, r23
    mr r4, r29
    li r5, 0x18
    addi r6, r1, 0xc
    bl fn_8007B1F8
    addi r4, r1, 0xc
    li r5, 0x10
    bl fn_8007B1DC
    mr r31, r3
    addi r3, r1, 0x8
    lwz r0, 0x8(r29)
    slwi r4, r0, 3
    bl fn_8001B9D4
    stw r3, 0x18(r29)
    li r24, 0x0
    b lbl_80079C80
lbl_80079C5C:
    mr r3, r31
    lwz r0, 0x18(r29)
    add r4, r0, r26
    li r5, 0x8
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
    addi r24, r24, 0x1
    addi r26, r26, 0x8
lbl_80079C80:
    lwz r0, 0x8(r29)
    cmpw r24, r0
    blt lbl_80079C5C
    li r25, 0x0
    li r27, 0x0
    b lbl_80079CE4
lbl_80079C98:
    addi r3, r1, 0x8
    lwz r4, 0x18(r29)
    lwzx r0, r4, r27
    mulli r4, r0, 0xc
    bl fn_8001B9D4
    lwz r0, 0x18(r29)
    add r4, r0, r27
    stw r3, 0x4(r4)
    lwz r0, 0x18(r29)
    add r5, r0, r27
    mr r3, r31
    lwz r4, 0x4(r5)
    lwz r0, 0x0(r5)
    mulli r5, r0, 0xc
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
    addi r25, r25, 0x1
    addi r27, r27, 0x8
lbl_80079CE4:
    lwz r0, 0x8(r29)
    cmpw r25, r0
    blt lbl_80079C98
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    ble lbl_80079DAC
    addi r3, r1, 0x8
    slwi r4, r0, 3
    bl fn_8001B9D4
    stw r3, 0x1c(r29)
    li r25, 0x0
    li r27, 0x0
    b lbl_80079D3C
lbl_80079D18:
    mr r3, r31
    lwz r0, 0x1c(r29)
    add r4, r0, r27
    li r5, 0x8
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
    addi r25, r25, 0x1
    addi r27, r27, 0x8
lbl_80079D3C:
    lwz r0, 0xc(r29)
    cmpw r25, r0
    blt lbl_80079D18
    li r25, 0x0
    li r27, 0x0
    b lbl_80079DA0
lbl_80079D54:
    addi r3, r1, 0x8
    lwz r4, 0x1c(r29)
    lwzx r0, r4, r27
    slwi r4, r0, 2
    bl fn_8001B9D4
    lwz r0, 0x1c(r29)
    add r4, r0, r27
    stw r3, 0x4(r4)
    lwz r0, 0x1c(r29)
    add r5, r0, r27
    mr r3, r31
    lwz r4, 0x4(r5)
    lwz r0, 0x0(r5)
    slwi r5, r0, 2
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
    addi r25, r25, 0x1
    addi r27, r27, 0x8
lbl_80079DA0:
    lwz r0, 0xc(r29)
    cmpw r25, r0
    blt lbl_80079D54
lbl_80079DAC:
    addi r3, r1, 0x8
    lwz r0, 0x4(r29)
    mulli r4, r0, 0x30
    bl fn_8001B9D4
    stw r3, 0x20(r29)
    li r25, 0x0
    li r27, 0x0
    b lbl_80079DF0
lbl_80079DCC:
    mr r3, r31
    lwz r0, 0x20(r29)
    add r4, r0, r27
    li r5, 0x30
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
    addi r25, r25, 0x1
    addi r27, r27, 0x30
lbl_80079DF0:
    lwz r0, 0x4(r29)
    cmpw r25, r0
    blt lbl_80079DCC
    li r30, 0x0
    li r27, 0x0
    b lbl_80079E8C
lbl_80079E08:
    addi r3, r1, 0x8
    lwz r4, 0x20(r29)
    lwzx r0, r4, r27
    mulli r4, r0, 0x34
    bl fn_8001B9D4
    lwz r0, 0x20(r29)
    add r4, r0, r27
    stw r3, 0x2c(r4)
    lwz r0, 0x20(r29)
    add r5, r0, r27
    mr r3, r31
    lwz r4, 0x2c(r5)
    lwz r0, 0x0(r5)
    mulli r5, r0, 0x34
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
    lwz r0, 0x20(r29)
    add r4, r0, r27
    lwz r3, 0x18(r29)
    lwz r0, 0x4(r4)
    slwi r0, r0, 3
    add r0, r3, r0
    stw r0, 0x4(r4)
    lwz r0, 0x20(r29)
    add r4, r0, r27
    lwz r3, 0x1c(r29)
    lwz r0, 0x8(r4)
    slwi r0, r0, 3
    add r0, r3, r0
    stw r0, 0x8(r4)
    addi r30, r30, 0x1
    addi r27, r27, 0x30
lbl_80079E8C:
    lwz r0, 0x4(r29)
    cmpw r30, r0
    blt lbl_80079E08
    addi r3, r1, 0x8
    lwz r0, 0x10(r29)
    mulli r4, r0, 0x54
    bl fn_8001B9D4
    stw r3, 0x24(r29)
    li r25, 0x0
    li r30, 0x0
    b lbl_80079F04
lbl_80079EB8:
    mr r3, r31
    lwz r0, 0x24(r29)
    add r4, r0, r30
    li r5, 0x54
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
    lwz r0, 0x24(r29)
    add r4, r0, r30
    lwz r5, 0x28(r4)
    addis r0, r5, 0x1
    cmplwi r0, 0xffff
    beq lbl_80079EFC
    lwz r3, 0x20(r29)
    mulli r0, r5, 0x30
    add r0, r3, r0
    stw r0, 0x28(r4)
lbl_80079EFC:
    addi r25, r25, 0x1
    addi r30, r30, 0x54
lbl_80079F04:
    lwz r0, 0x10(r29)
    cmpw r25, r0
    blt lbl_80079EB8
    lwz r4, 0x0(r29)
    lis r3, 0xfffe
    addi r0, r3, 0x101
    cmplw r4, r0
    blt lbl_80079F88
    li r25, 0x0
    li r30, 0x0
    b lbl_80079F7C
lbl_80079F30:
    lwz r0, 0x24(r29)
    add r26, r0, r30
    lwz r0, 0x0(r26)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80079F74
    addi r3, r1, 0x8
    li r4, 0x30
    bl fn_8001B9D4
    stw r3, 0x50(r26)
    stw r31, 0x50(r26)
    mr r3, r31
    lwz r4, 0x50(r26)
    li r5, 0x30
    addi r6, r1, 0xc
    bl fn_8007B1F8
    mr r31, r3
lbl_80079F74:
    addi r25, r25, 0x1
    addi r30, r30, 0x54
lbl_80079F7C:
    lwz r0, 0x10(r29)
    cmpw r25, r0
    blt lbl_80079F30
lbl_80079F88:
    li r25, 0x0
    li r30, 0x0
    li r26, 0x0
    la r27, lbl_8049F168
    b lbl_80079FF4
lbl_80079F9C:
    lwz r0, 0x20(r29)
    add r24, r0, r30
    li r23, 0x0
    li r31, 0x0
    b lbl_80079FDC
lbl_80079FB0:
    lwz r0, 0x2c(r24)
    add r3, r0, r31
    stw r26, 0x20(r3)
    stw r24, 0x24(r3)
    addi r3, r3, 0x28
    lfs f1, lbl_8049F168
    fmr f2, f1
    lfs f3, 0x4(r27)
    bl fn_80018B0C
    addi r23, r23, 0x1
    addi r31, r31, 0x34
lbl_80079FDC:
    lwz r0, 0x20(r29)
    lwzx r0, r30, r0
    cmpw r23, r0
    blt lbl_80079FB0
    addi r25, r25, 0x1
    addi r30, r30, 0x30
lbl_80079FF4:
    lwz r0, 0x4(r29)
    cmpw r25, r0
    blt lbl_80079F9C
    mr r3, r28
    mr r4, r29
    bl fn_8007A064
    cmpwi r3, 0x0
    bne lbl_8007A038
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_8007A030
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x848(r3)
    bl fn_80170E84
lbl_8007A030:
    li r3, 0x0
    b lbl_8007A04C
lbl_8007A038:
    lwz r0, 0x10(r28)
    oris r0, r0, 0x8000
    stw r0, 0x10(r28)
    stw r29, 0x48(r28)
    li r3, 0x1
lbl_8007A04C:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8007A064
asm s32 fn_8007A064(s8 *arg0, u32 *arg1) {
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
    bl _savegpr_17
    mr r22, r3
    mr r23, r4
    lis r3, lbl_80339748@ha
    addi r5, r3, lbl_80339748@l
    lwz r3, 0x0(r5)
    lwz r0, 0x4(r5)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    li r3, 0x0
    li r6, 0x0
    lwz r0, 0x4(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8007A0EC
lbl_8007A0D8:
    lwz r5, 0x20(r4)
    lwzx r0, r5, r3
    add r6, r6, r0
    addi r3, r3, 0x30
    bdnz lbl_8007A0D8
lbl_8007A0EC:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x848(r3)
    mulli r4, r6, 0xc
    li r5, 0x0
    bl fn_80170E2C
    mr r26, r3
    cmpwi r3, 0x0
    bne lbl_8007A118
    li r3, 0x0
    b lbl_8007A440
lbl_8007A118:
    li r30, 0x0
    li r21, 0x0
    la r3, lbl_8049F168
    lfs f29, 0xc(r3)
    lfs f28, 0x8(r3)
    lfs f31, 0x10(r3)
    b lbl_8007A31C
lbl_8007A134:
    lwz r0, 0x20(r23)
    add r29, r0, r21
    li r25, 0x0
    li r20, 0x0
    li r19, 0x0
    b lbl_8007A300
lbl_8007A14C:
    lwz r0, 0x2c(r29)
    add r28, r0, r20
    lwz r27, 0x4(r3)
    lwz r6, 0x4(r27)
    add r31, r26, r19
    mr r3, r31
    lwz r0, 0x0(r28)
    mulli r0, r0, 0xc
    add r4, r6, r0
    lwz r0, 0x4(r28)
    mulli r0, r0, 0xc
    add r5, r6, r0
    lwz r0, 0x8(r28)
    mulli r0, r0, 0xc
    add r6, r6, r0
    bl fn_8007E0B0
    mr r3, r31
    mr r4, r31
    bl fn_8001B8B0
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8001B8B4
    bl fn_80018BD4
    fcmpo cr0, f1, f28
    opword 0x4C401382
    bne lbl_8007A234
    li r24, 0x0
    li r18, 0x0
    li r17, 0x0
    b lbl_8007A22C
lbl_8007A1C4:
    lwz r0, 0x2c(r29)
    add r3, r0, r18
    lwz r0, 0x20(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8007A220
    add r3, r26, r17
    mr r4, r31
    bl fn_8001B8B4
    fcmpo cr0, f1, f29
    ble lbl_8007A220
    mr r3, r28
    addi r4, r28, 0x10
    lwz r0, 0x2c(r29)
    add r5, r0, r18
    mr r6, r27
    bl fn_8007A688
    cmpwi r3, 0x0
    beq lbl_8007A220
    lwz r0, 0x20(r28)
    ori r0, r0, 0x1
    stw r0, 0x20(r28)
    b lbl_8007A234
lbl_8007A220:
    addi r24, r24, 0x1
    addi r18, r18, 0x34
    addi r17, r17, 0xc
lbl_8007A22C:
    cmpw r24, r25
    blt lbl_8007A1C4
lbl_8007A234:
    addi r3, r28, 0x28
    mr r4, r31
    bl fn_80019DAC
    addi r3, r28, 0x28
    addi r4, r1, 0x8
    bl fn_8001B8B4
    fmr f30, f1
    bl fn_80018BD4
    fcmpo cr0, f1, f28
    opword 0x4C401382
    bne lbl_8007A270
    lwz r0, 0x20(r28)
    ori r0, r0, 0x8
    stw r0, 0x20(r28)
    b lbl_8007A2A8
lbl_8007A270:
    fcmpo cr0, f30, f28
    ble lbl_8007A288
    lwz r0, 0x20(r28)
    ori r0, r0, 0x10
    stw r0, 0x20(r28)
    b lbl_8007A2A8
lbl_8007A288:
    lwz r0, 0x20(r28)
    ori r0, r0, 0x4
    stw r0, 0x20(r28)
    fcmpo cr0, f30, f31
    ble lbl_8007A2A8
    lwz r0, 0x20(r28)
    ori r0, r0, 0x40
    stw r0, 0x20(r28)
lbl_8007A2A8:
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    ble lbl_8007A2E8
    mr r3, r28
    bl fn_8007B04C
    mr r17, r3
    mr r3, r28
    mr r4, r17
    bl fn_8007AEA0
    mr r3, r28
    mr r4, r17
    bl fn_8007AF64
    mr r3, r28
    mr r4, r17
    bl fn_8007AFE4
    b lbl_8007A2F4
lbl_8007A2E8:
    lwz r0, 0x20(r28)
    ori r0, r0, 0x100
    stw r0, 0x20(r28)
lbl_8007A2F4:
    addi r25, r25, 0x1
    addi r20, r20, 0x34
    addi r19, r19, 0xc
lbl_8007A300:
    lwz r0, 0x20(r23)
    add r3, r21, r0
    lwz r0, 0x0(r3)
    cmpw r25, r0
    blt lbl_8007A14C
    addi r30, r30, 0x1
    addi r21, r21, 0x30
lbl_8007A31C:
    lwz r0, 0x4(r23)
    cmpw r30, r0
    blt lbl_8007A134
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x848(r3)
    mr r4, r26
    bl fn_80170E84
    li r9, -0x1
    li r8, 0x0
    li r3, 0x0
    lwz r5, 0x4(r23)
    b lbl_8007A3F8
lbl_8007A350:
    lwz r0, 0x20(r23)
    add r6, r0, r3
    li r4, 0x0
    lwz r0, 0x0(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8007A3F0
lbl_8007A36C:
    lwz r0, 0x2c(r6)
    add r7, r0, r4
    cmpwi r9, -0x1
    bne lbl_8007A3A8
    lwz r7, 0x20(r7)
    rlwinm r0, r7, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8007A394
    li r9, 0x0
    b lbl_8007A3E8
lbl_8007A394:
    rlwinm r0, r7, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8007A3E8
    li r9, 0x1
    b lbl_8007A3E8
lbl_8007A3A8:
    cmpwi r9, 0x0
    bne lbl_8007A3C8
    lwz r0, 0x20(r7)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8007A3E8
    li r9, -0x1
    b lbl_8007A400
lbl_8007A3C8:
    cmpwi r9, 0x1
    bne lbl_8007A3E8
    lwz r0, 0x20(r7)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8007A3E8
    li r9, -0x1
    b lbl_8007A400
lbl_8007A3E8:
    addi r4, r4, 0x34
    bdnz lbl_8007A36C
lbl_8007A3F0:
    addi r8, r8, 0x1
    addi r3, r3, 0x30
lbl_8007A3F8:
    cmpw r8, r5
    blt lbl_8007A350
lbl_8007A400:
    cmpwi r9, 0x0
    bne lbl_8007A418
    lwz r0, 0x10(r22)
    ori r0, r0, 0x20
    stw r0, 0x10(r22)
    b lbl_8007A43C
lbl_8007A418:
    cmpwi r9, 0x1
    bne lbl_8007A430
    lwz r0, 0x10(r22)
    ori r0, r0, 0x10
    stw r0, 0x10(r22)
    b lbl_8007A43C
lbl_8007A430:
    lwz r0, 0x10(r22)
    ori r0, r0, 0x40
    stw r0, 0x10(r22)
lbl_8007A43C:
    li r3, 0x1
lbl_8007A440:
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
    bl _restgpr_17
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_8007A488
asm s32 fn_8007A488(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    li r29, 0x0
    li r31, 0x0
    b lbl_8007A4EC
lbl_8007A4B0:
    lwz r3, lbl_8049D524
    bl fn_80019D70
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8007A4FC
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x30
    bl memset
    stw r31, 0x10(r30)
    mr r3, r30
    addi r4, r30, 0x4
    addi r5, r27, 0x4c
    bl fn_8001D9A4
    addi r29, r29, 0x1
lbl_8007A4EC:
    cmpw r29, r28
    blt lbl_8007A4B0
    li r3, 0x1
    b lbl_8007A520
lbl_8007A4FC:
    lwz r30, 0x54(r27)
    b lbl_8007A510
lbl_8007A504:
    lwz r3, lbl_8049D524
    bl fn_80019D94
    lwz r30, 0x8(r30)
lbl_8007A510:
    lwz r4, 0x0(r30)
    cmplwi r4, 0x1
    bne lbl_8007A504
    li r3, 0x0
lbl_8007A520:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8007A538
asm void fn_8007A538(s8 *arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r7
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_8007A5D0
    lwz r0, 0x10(r3)
    ori r0, r0, 0x2
    stw r0, 0x10(r3)
    li r7, 0x0
    lwz r3, 0x54(r3)
    b lbl_8007A58C
lbl_8007A574:
    cmpw r7, r4
    bne lbl_8007A584
    mr r31, r0
    b lbl_8007A598
lbl_8007A584:
    addi r7, r7, 0x1
    lwz r3, 0x8(r3)
lbl_8007A58C:
    lwz r0, 0x0(r3)
    cmplwi r0, 0x1
    bne lbl_8007A574
lbl_8007A598:
    addi r3, r31, 0x14
    cmpwi r5, 0x0
    beq lbl_8007A5AC
    mr r4, r5
    b lbl_8007A5B4
lbl_8007A5AC:
    lis r4, lbl_8033AD70@ha
    addi r4, r4, lbl_8033AD70@l
lbl_8007A5B4:
    mr r5, r6
    bl fn_8017CF8C
    lwz r0, 0x14(r31)
    or r0, r0, r30
    stw r0, 0x14(r31)
    li r0, 0x1
    stw r0, 0x10(r31)
lbl_8007A5D0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007A5E8
asm void fn_8007A5E8(s8 *arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_8007A674
    lwz r0, 0x10(r3)
    ori r0, r0, 0x4
    stw r0, 0x10(r3)
    li r9, 0x0
    lwz r3, 0x54(r3)
    b lbl_8007A634
lbl_8007A61C:
    cmpw r9, r4
    bne lbl_8007A62C
    mr r31, r0
    b lbl_8007A640
lbl_8007A62C:
    addi r9, r9, 0x1
    lwz r3, 0x8(r3)
lbl_8007A634:
    lwz r0, 0x0(r3)
    cmplwi r0, 0x1
    bne lbl_8007A61C
lbl_8007A640:
    addi r3, r31, 0x14
    cmpwi r5, 0x0
    beq lbl_8007A654
    mr r4, r5
    b lbl_8007A65C
lbl_8007A654:
    lis r4, lbl_8033AD70@ha
    addi r4, r4, lbl_8033AD70@l
lbl_8007A65C:
    mr r5, r6
    mr r6, r7
    mr r7, r8
    bl fn_8017D0DC
    li r0, 0x1
    stw r0, 0x10(r31)
lbl_8007A674:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007A688
asm M2C_UNK fn_8007A688(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x80
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_21
    mr r21, r5
    mr r22, r6
    lwz r8, 0x0(r3)
    lwz r7, 0x4(r3)
    cmpw r8, r7
    beq lbl_8007A6D4
    lwz r0, 0x8(r3)
    cmpw r8, r0
    beq lbl_8007A6D4
    cmpw r7, r0
    bne lbl_8007A6DC
lbl_8007A6D4:
    li r3, -0x1
    b lbl_8007ABA4
lbl_8007A6DC:
    li r0, 0x0
    li r8, 0x0
    mr r10, r8
    addi r9, r1, 0x40
    li r7, 0x3
    mtctr r7
lbl_8007A6F4:
    stwx r10, r9, r8
    addi r8, r8, 0x4
    bdnz lbl_8007A6F4
    lwz r8, 0x0(r3)
    lwz r7, 0x0(r5)
    cmpw r8, r7
    bne lbl_8007A730
    lwz r8, 0x0(r4)
    lwz r7, 0x10(r5)
    cmpw r8, r7
    bne lbl_8007A730
    li r7, 0x1
    stw r7, 0x40(r1)
    ori r0, r0, 0x1
    b lbl_8007A78C
lbl_8007A730:
    lwz r8, 0x0(r3)
    lwz r7, 0x4(r5)
    cmpw r8, r7
    bne lbl_8007A760
    lwz r8, 0x0(r4)
    lwz r7, 0x14(r5)
    cmpw r8, r7
    bne lbl_8007A760
    li r7, 0x1
    stw r7, 0x44(r1)
    ori r0, r0, 0x1
    b lbl_8007A78C
lbl_8007A760:
    lwz r8, 0x0(r3)
    lwz r7, 0x8(r5)
    cmpw r8, r7
    bne lbl_8007A78C
    lwz r8, 0x0(r4)
    lwz r7, 0x18(r5)
    cmpw r8, r7
    bne lbl_8007A78C
    li r7, 0x1
    stw r7, 0x48(r1)
    ori r0, r0, 0x1
lbl_8007A78C:
    lwz r8, 0x4(r3)
    lwz r7, 0x0(r5)
    cmpw r8, r7
    bne lbl_8007A7C8
    lwz r8, 0x4(r4)
    lwz r7, 0x10(r5)
    cmpw r8, r7
    bne lbl_8007A7C8
    lwz r7, 0x40(r1)
    cmpwi r7, 0x0
    bne lbl_8007A83C
    li r7, 0x1
    stw r7, 0x40(r1)
    ori r0, r0, 0x10
    b lbl_8007A83C
lbl_8007A7C8:
    lwz r8, 0x4(r3)
    lwz r7, 0x4(r5)
    cmpw r8, r7
    bne lbl_8007A804
    lwz r8, 0x4(r4)
    lwz r7, 0x14(r5)
    cmpw r8, r7
    bne lbl_8007A804
    lwz r7, 0x44(r1)
    cmpwi r7, 0x0
    bne lbl_8007A83C
    li r7, 0x1
    stw r7, 0x44(r1)
    ori r0, r0, 0x10
    b lbl_8007A83C
lbl_8007A804:
    lwz r8, 0x4(r3)
    lwz r7, 0x8(r5)
    cmpw r8, r7
    bne lbl_8007A83C
    lwz r8, 0x4(r4)
    lwz r7, 0x18(r5)
    cmpw r8, r7
    bne lbl_8007A83C
    lwz r7, 0x48(r1)
    cmpwi r7, 0x0
    bne lbl_8007A83C
    li r7, 0x1
    stw r7, 0x48(r1)
    ori r0, r0, 0x10
lbl_8007A83C:
    lwz r8, 0x8(r3)
    lwz r7, 0x0(r5)
    cmpw r8, r7
    bne lbl_8007A878
    lwz r8, 0x8(r4)
    lwz r7, 0x10(r5)
    cmpw r8, r7
    bne lbl_8007A878
    lwz r7, 0x40(r1)
    cmpwi r7, 0x0
    bne lbl_8007A8EC
    li r7, 0x1
    stw r7, 0x40(r1)
    ori r0, r0, 0x100
    b lbl_8007A8EC
lbl_8007A878:
    lwz r8, 0x8(r3)
    lwz r7, 0x4(r5)
    cmpw r8, r7
    bne lbl_8007A8B4
    lwz r8, 0x8(r4)
    lwz r7, 0x14(r5)
    cmpw r8, r7
    bne lbl_8007A8B4
    lwz r7, 0x44(r1)
    cmpwi r7, 0x0
    bne lbl_8007A8EC
    li r7, 0x1
    stw r7, 0x44(r1)
    ori r0, r0, 0x100
    b lbl_8007A8EC
lbl_8007A8B4:
    lwz r8, 0x8(r3)
    lwz r7, 0x8(r5)
    cmpw r8, r7
    bne lbl_8007A8EC
    lwz r8, 0x8(r4)
    lwz r7, 0x18(r5)
    cmpw r8, r7
    bne lbl_8007A8EC
    lwz r7, 0x48(r1)
    cmpwi r7, 0x0
    bne lbl_8007A8EC
    li r7, 0x1
    stw r7, 0x48(r1)
    ori r0, r0, 0x100
lbl_8007A8EC:
    cmpwi r0, 0x101
    beq lbl_8007A940
    bge lbl_8007A904
    cmpwi r0, 0x11
    beq lbl_8007A924
    b lbl_8007A978
lbl_8007A904:
    cmpwi r0, 0x111
    beq lbl_8007A91C
    bge lbl_8007A978
    cmpwi r0, 0x110
    bge lbl_8007A95C
    b lbl_8007A978
lbl_8007A91C:
    li r3, -0x2
    b lbl_8007ABA4
lbl_8007A924:
    lwz r23, 0x0(r3)
    lwz r24, 0x4(r3)
    lwz r25, 0x8(r3)
    lwz r26, 0x0(r4)
    lwz r27, 0x4(r4)
    lwz r28, 0x8(r4)
    b lbl_8007A97C
lbl_8007A940:
    lwz r23, 0x8(r3)
    lwz r24, 0x0(r3)
    lwz r25, 0x4(r3)
    lwz r26, 0x8(r4)
    lwz r27, 0x0(r4)
    lwz r28, 0x4(r4)
    b lbl_8007A97C
lbl_8007A95C:
    lwz r23, 0x4(r3)
    lwz r24, 0x8(r3)
    lwz r25, 0x0(r3)
    lwz r26, 0x4(r4)
    lwz r27, 0x8(r4)
    lwz r28, 0x0(r4)
    b lbl_8007A97C
lbl_8007A978:
    li r0, 0x0
lbl_8007A97C:
    cmpwi r0, 0x0
    beq lbl_8007ABA0
    lwz r0, 0x20(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8007ABA0
    li r29, -0x1
    li r3, 0x0
    addi r4, r1, 0x40
    li r0, 0x3
    mtctr r0
lbl_8007A9A8:
    lwzx r0, r4, r3
    cmpwi r0, 0x0
    bne lbl_8007A9C4
    lwzx r29, r5, r3
    add r3, r5, r3
    lwz r30, 0x10(r3)
    b lbl_8007A9CC
lbl_8007A9C4:
    addi r3, r3, 0x4
    bdnz lbl_8007A9A8
lbl_8007A9CC:
    cmpwi r29, -0x1
    bne lbl_8007A9DC
    li r3, -0x3
    b lbl_8007ABA4
lbl_8007A9DC:
    cmpw r29, r23
    beq lbl_8007A9F4
    cmpw r29, r24
    beq lbl_8007A9F4
    cmpw r29, r25
    bne lbl_8007A9FC
lbl_8007A9F4:
    li r3, -0x4
    b lbl_8007ABA4
lbl_8007A9FC:
    addi r3, r1, 0x30
    lwz r5, 0x4(r6)
    mulli r0, r23, 0xc
    add r4, r5, r0
    mulli r0, r24, 0xc
    add r5, r5, r0
    bl fn_80018B00
    addi r3, r1, 0x30
    mr r4, r3
    la r31, lbl_8049F168
    lfs f1, 0x18(r31)
    bl fn_80018B08
    addi r3, r1, 0x20
    lwz r4, 0x4(r22)
    mulli r0, r25, 0xc
    add r4, r4, r0
    addi r5, r1, 0x30
    bl fn_8001B8B8
    addi r3, r1, 0x10
    lwz r4, 0x4(r22)
    mulli r0, r29, 0xc
    add r4, r4, r0
    addi r5, r1, 0x30
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x10
    bl fn_8001B8B4
    lfs f0, 0x20(r31)
    fcmpo cr0, f1, f0
    bge lbl_8007ABA0
    addi r3, r1, 0x20
    lwz r5, 0x4(r22)
    mulli r0, r25, 0xc
    add r4, r5, r0
    mulli r0, r23, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x10
    lwz r5, 0x4(r22)
    mulli r0, r29, 0xc
    add r4, r5, r0
    mulli r0, r23, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x10
    bl fn_8001B8B4
    lfs f0, 0x24(r31)
    fcmpo cr0, f1, f0
    bge lbl_8007AAFC
    li r3, 0x0
    b lbl_8007ABA4
lbl_8007AAFC:
    addi r3, r1, 0x20
    lwz r5, 0x4(r22)
    mulli r0, r25, 0xc
    add r4, r5, r0
    mulli r0, r24, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x10
    lwz r5, 0x4(r22)
    mulli r0, r29, 0xc
    add r4, r5, r0
    mulli r0, r24, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    addi r4, r1, 0x10
    bl fn_8001B8B4
    lfs f0, 0x24(r31)
    fcmpo cr0, f1, f0
    bge lbl_8007AB6C
    li r3, 0x0
    b lbl_8007ABA4
lbl_8007AB6C:
    stw r23, 0x0(r21)
    stw r29, 0x4(r21)
    stw r24, 0x8(r21)
    stw r25, 0xc(r21)
    stw r26, 0x10(r21)
    stw r30, 0x14(r21)
    stw r27, 0x18(r21)
    stw r28, 0x1c(r21)
    lwz r0, 0x20(r21)
    ori r0, r0, 0x2
    stw r0, 0x20(r21)
    li r3, 0x1
    b lbl_8007ABA4
lbl_8007ABA0:
    li r3, 0x0
lbl_8007ABA4:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_21
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8007ABC0
asm void fn_8007ABC0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    li r9, 0x0
    li r7, 0x0
    nor r6, r6, r6
    b lbl_8007AC24
lbl_8007ABD0:
    lwz r0, 0x2c(r3)
    add r8, r0, r7
    cmpwi r4, 0x0
    blt lbl_8007AC04
    cmpw r4, r9
    bne lbl_8007AC1C
    lwz r0, 0x20(r8)
    or r0, r0, r5
    stw r0, 0x20(r8)
    lwz r0, 0x20(r8)
    and r0, r0, r6
    stw r0, 0x20(r8)
    blr
lbl_8007AC04:
    lwz r0, 0x20(r8)
    or r0, r0, r5
    stw r0, 0x20(r8)
    lwz r0, 0x20(r8)
    and r0, r0, r6
    stw r0, 0x20(r8)
lbl_8007AC1C:
    addi r9, r9, 0x1
    addi r7, r7, 0x34
lbl_8007AC24:
    lwz r0, 0x0(r3)
    cmpw r9, r0
    blt lbl_8007ABD0
    blr
}

void fn_8007AC34(void) {
    lbl_8049D52C = 0;
}

// asm_to_cpp: fn_8007AC40
asm M2C_UNK fn_8007AC40(void) {
    nofralloc
    li r3, 0x0
    lis r4, lbl_80390818@ha
    addi r4, r4, lbl_80390818@l
    lwz r0, 0x8(r4)
lbl_8007AC50:
    addi r3, r3, 0x1
    li r6, 0x0
    mr r5, r0
    b lbl_8007AC80
lbl_8007AC60:
    lwz r4, 0x14(r4)
    cmpwi r4, -0x1
    beq lbl_8007AC7C
    cmpw r4, r3
    bne lbl_8007AC7C
    li r6, 0x1
    b lbl_8007AC8C
lbl_8007AC7C:
    lwz r5, 0x8(r5)
lbl_8007AC80:
    lwz r4, 0x0(r5)
    cmplwi r4, 0x1
    bne lbl_8007AC60
lbl_8007AC8C:
    cmpwi r6, 0x0
    bne lbl_8007AC50
    lwz r4, lbl_8049D52C
    addi r0, r4, 0x1
    stw r0, lbl_8049D52C
    blr
}

void fn_8007ACA4(s8 *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (fn_8007AC40());
    }
}

void fn_8007ACDC(s8 *arg0) {
    lbl_8049D52C -= 1;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (-1);
}

// asm_to_cpp: fn_8007ACF4
asm void fn_8007ACF4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r4
    mr r26, r5
    mr r27, r6
    cmpwi r3, 0x0
    beq lbl_8007AD94
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_8007AD30
    b lbl_8007AD94
lbl_8007AD30:
    lwz r29, 0x48(r3)
    li r28, 0x0
    li r31, 0x0
    b lbl_8007AD88
lbl_8007AD40:
    lwz r0, 0x24(r29)
    add r3, r0, r31
    lwz r30, 0x28(r3)
    addis r0, r30, 0x1
    cmplwi r0, 0xffff
    beq lbl_8007AD80
    addi r3, r3, 0x30
    mr r4, r25
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8007AD80
    mr r3, r30
    li r4, -0x1
    mr r5, r26
    mr r6, r27
    bl fn_8007ABC0
lbl_8007AD80:
    addi r28, r28, 0x1
    addi r31, r31, 0x54
lbl_8007AD88:
    lwz r0, 0x10(r29)
    cmpw r28, r0
    blt lbl_8007AD40
lbl_8007AD94:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8007ADAC
asm void fn_8007ADAC(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    cmpwi r3, 0x0
    beq lbl_8007AE30
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_8007ADE4
    b lbl_8007AE30
lbl_8007ADE4:
    lwz r30, 0x48(r3)
    li r29, 0x0
    li r31, 0x0
    b lbl_8007AE24
lbl_8007ADF4:
    lwz r0, 0x24(r30)
    add r3, r0, r31
    lwz r3, 0x28(r3)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_8007AE1C
    li r4, -0x1
    mr r5, r27
    mr r6, r28
    bl fn_8007ABC0
lbl_8007AE1C:
    addi r29, r29, 0x1
    addi r31, r31, 0x54
lbl_8007AE24:
    lwz r0, 0x10(r30)
    cmpw r29, r0
    blt lbl_8007ADF4
lbl_8007AE30:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8007AE48
asm u32 fn_8007AE48(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    lfs f4, lbl_8049F168
    li r5, 0x0
    la r4, lbl_8049F168
    lfs f3, 0x28(r4)
    lfs f2, 0x18(r4)
    lfs f0, 0x2c(r4)
    li r0, 0xa
    mtctr r0
lbl_8007AE6C:
    fmuls f1, f3, f4
    fadds f1, f2, f1
    fctiwz f1, f1
    stfd f1, 0x8(r1)
    lwz r0, 0xc(r1)
    cmpw r3, r0
    ble lbl_8007AE94
    fadds f4, f4, f0
    addi r5, r5, 0x1
    bdnz lbl_8007AE6C
lbl_8007AE94:
    mr r3, r5
    addi r1, r1, 0x10
    blr
}

s32 fn_8007AEA0(s8 *arg0, u32 arg1) {
    u32 temp_r3;

    temp_r3 = (u32) (fn_8007AE48((s32) ((s32) (arg1 >> 0x18U))));
    if (temp_r3 > 4U) {
        switch ((s32) temp_r3) {                    /* irregular */
        case 5:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 0x200));
            break;
        case 6:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 0x400));
            break;
        case 7:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 0x800));
            break;
        case 8:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 0x1000));
            break;
        case 9:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 0x2000));
            break;
        default:
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 0x100));
            break;
        }
    }
    return (s32) (0);
}

// asm_to_cpp: fn_8007AF64
asm s32 fn_8007AF64(s8 *arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    extrwi r3, r4, 8, 8
    bl fn_8007AE48
    subi r0, r3, 0x1
    cmplwi r0, 0x4
    ble lbl_8007AFA0
    cmpwi r3, 0x6
    beq lbl_8007AFB0
    cmpwi r3, 0x7
    beq lbl_8007AFC0
    b lbl_8007AFCC
lbl_8007AFA0:
    lwz r0, 0x20(r31)
    oris r0, r0, 0x10
    stw r0, 0x20(r31)
    b lbl_8007AFCC
lbl_8007AFB0:
    lwz r0, 0x20(r31)
    oris r0, r0, 0x20
    stw r0, 0x20(r31)
    b lbl_8007AFCC
lbl_8007AFC0:
    lwz r0, 0x20(r31)
    oris r0, r0, 0x40
    stw r0, 0x20(r31)
lbl_8007AFCC:
    li r3, 0x0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

#pragma peephole on
s32 fn_8007AFE4(s8 *arg0, u32 arg1) {
    u32 temp_r3;

    temp_r3 = (u32) (fn_8007AE48((s32) ((s32) (u8) (arg1 >> 8U))));
    if ((u32) (temp_r3 - 6) > 3U) {
        if ((u32) (temp_r3 - 3) <= 2U) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 0x80000000));
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | 8));
    }
    return (s32) (0);
}
#pragma peephole reset

// asm_to_cpp: fn_8007B04C
asm u32 fn_8007B04C(s8 *arg0) {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_8007B060
    lwz r4, 0x24(r3)
    cmpwi r4, 0x0
    bne lbl_8007B068
lbl_8007B060:
    li r3, 0x0
    blr
lbl_8007B068:
    lwz r4, 0x8(r4)
    lwz r0, 0x20(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8007B10C
    lwz r4, 0x4(r4)
    lwz r0, 0x10(r3)
    slwi r0, r0, 2
    lwzx r8, r4, r0
    lwz r0, 0x14(r3)
    slwi r0, r0, 2
    lwzx r9, r4, r0
    lwz r0, 0x18(r3)
    slwi r0, r0, 2
    lwzx r10, r4, r0
    srwi r4, r10, 24
    srwi r0, r8, 24
    srwi r3, r9, 24
    add r0, r4, r0
    add r0, r3, r0
    li r7, 0x3
    divwu r3, r0, r7
    extrwi r5, r10, 8, 8
    extrwi r0, r8, 8, 8
    extrwi r4, r9, 8, 8
    add r0, r5, r0
    add r0, r4, r0
    divwu r6, r0, r7
    extrwi r5, r10, 8, 16
    extrwi r0, r8, 8, 16
    extrwi r4, r9, 8, 16
    add r0, r5, r0
    add r0, r4, r0
    divwu r12, r0, r7
    clrlwi r5, r10, 24
    clrlwi r0, r8, 24
    clrlwi r4, r9, 24
    add r0, r5, r0
    add r0, r4, r0
    divwu r5, r0, r7
    b lbl_8007B1C0
lbl_8007B10C:
    lwz r6, 0x4(r4)
    lwz r0, 0x10(r3)
    slwi r0, r0, 2
    lwzx r0, r6, r0
    lwz r4, 0x14(r3)
    slwi r4, r4, 2
    lwzx r4, r6, r4
    lwz r5, 0x18(r3)
    slwi r5, r5, 2
    lwzx r5, r6, r5
    lwz r3, 0x1c(r3)
    slwi r3, r3, 2
    lwzx r11, r6, r3
    srwi r8, r11, 24
    srwi r6, r5, 24
    srwi r7, r0, 24
    srwi r3, r4, 24
    add r6, r8, r6
    add r3, r7, r3
    add r3, r6, r3
    srwi r3, r3, 2
    extrwi r9, r11, 8, 8
    extrwi r7, r5, 8, 8
    extrwi r8, r0, 8, 8
    extrwi r6, r4, 8, 8
    add r7, r9, r7
    add r6, r8, r6
    add r6, r7, r6
    srwi r6, r6, 2
    extrwi r10, r11, 8, 16
    extrwi r8, r5, 8, 16
    extrwi r9, r0, 8, 16
    extrwi r7, r4, 8, 16
    add r8, r10, r8
    add r7, r9, r7
    add r7, r8, r7
    srwi r12, r7, 2
    clrlwi r8, r11, 24
    clrlwi r7, r5, 24
    clrlwi r5, r0, 24
    clrlwi r0, r4, 24
    add r4, r8, r7
    add r0, r5, r0
    add r0, r4, r0
    srwi r5, r0, 2
lbl_8007B1C0:
    slwi r4, r3, 24
    slwi r0, r6, 16
    or r3, r0, r5
    slwi r0, r12, 8
    or r0, r3, r0
    or r3, r4, r0
    blr
}

// asm_to_cpp: fn_8007B1DC
asm u32 * fn_8007B1DC(u32 *arg0, u32 *arg1, s32 arg2) {
    nofralloc
    lwz r0, 0x0(r4)
    add r0, r0, r5
    stw r0, 0x0(r4)
    mr r4, r5
    b lbl_8007B1F0
lbl_8007B1F0:
    add r3, r3, r4
    blr
}

// asm_to_cpp: fn_8007B1F8
asm M2C_UNK fn_8007B1F8(u32 *arg0, u32 *arg1, s32 arg2, u32 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    mr r31, r6
    mr r3, r4
    mr r4, r29
    bl memcpy
    mr r3, r29
    mr r4, r31
    mr r5, r30
    bl fn_8007B1DC
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8007B24C
asm s32 fn_8007B24C(s8 *arg0, s8 *arg1, s32 *arg2, s32 arg3, s8 **arg4, f32 *arg5, s8 **arg6, s8 **arg7) {
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    opword 0xF3E10178
    stfd f30, 0x160(r1)
    opword 0xF3C10168
    stfd f29, 0x150(r1)
    opword 0xF3A10158
    stfd f28, 0x140(r1)
    opword 0xF3810148
    stfd f27, 0x130(r1)
    opword 0xF3610138
    stfd f26, 0x120(r1)
    opword 0xF3410128
    stfd f25, 0x110(r1)
    opword 0xF3210118
    addi r11, r1, 0x110
    bl _savegpr_15
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r22, r9
    mr r21, r10
    lwz r20, 0x188(r1)
    lwz r19, 0x18c(r1)
    lwz r31, 0x190(r1)
    li r18, 0x0
    li r16, -0x1
    lfs f25, lbl_8049F198
    li r17, 0x1
    lwz r3, 0x28(r3)
    lwz r15, 0x4(r3)
    addi r3, r1, 0x90
    lwz r5, 0x4(r15)
    lwz r0, 0x0(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    addi r3, r1, 0x9c
    lwz r4, 0x4(r15)
    lwz r0, 0x4(r26)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0xa8
    lwz r4, 0x4(r15)
    lwz r0, 0x8(r26)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    lwz r0, 0x20(r26)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8007B34C
    addi r3, r1, 0xb4
    lwz r4, 0x4(r15)
    lwz r0, 0xc(r26)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
lbl_8007B34C:
    addi r3, r1, 0x60
    mr r4, r25
    bl fn_8007E214
    cmpwi r19, 0x0
    beq lbl_8007B370
    addi r3, r1, 0x60
    mr r4, r3
    mr r5, r19
    bl fn_8017375C
lbl_8007B370:
    mr r3, r26
    addi r4, r1, 0x60
    addi r5, r1, 0x90
    bl fn_8007ED74
    addi r3, r1, 0x8
    addi r4, r1, 0x60
    addi r5, r26, 0x28
    bl fn_80018B04
    addi r3, r1, 0x50
    lfs f1, 0x0(r22)
    lfs f2, 0x4(r22)
    lfs f3, 0x8(r22)
    bl fn_80018B0C
    addi r3, r1, 0x44
    lfs f1, 0x0(r21)
    lfs f2, 0x4(r22)
    lfs f3, 0x8(r21)
    bl fn_80018B0C
    lfs f1, 0x4(r22)
    lfs f0, 0x4(r21)
    fsubs f1, f1, f0
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    mfcr r19
    srwi r19, r19, 31
    addi r3, r1, 0x38
    addi r4, r1, 0x50
    addi r5, r1, 0x44
    bl fn_8001B8B8
    addi r3, r1, 0x38
    bl fn_8001B8BC
    fmr f27, f1
    la r15, lbl_8049F198
    lfs f3, 0x4(r15)
    fcmpo cr0, f1, f3
    bge lbl_8007B448
    lfs f0, 0x8(r15)
    fcmpo cr0, f1, f0
    bge lbl_8007B420
    addi r3, r1, 0x38
    lfs f1, lbl_8049F198
    fmr f2, f1
    bl fn_80018B0C
    b lbl_8007B43C
lbl_8007B420:
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x38
    mr r4, r3
    lfs f1, 0x4(r15)
    bl fn_80018B08
lbl_8007B43C:
    la r3, lbl_8049F198
    lfs f27, 0x4(r3)
    b lbl_8007B4BC
lbl_8007B448:
    addi r3, r1, 0x14
    mr r4, r21
    addi r5, r1, 0x90
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8007B4BC
    addi r3, r1, 0x8
    addi r4, r1, 0x38
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8007B4B8
    cmpwi r20, 0x0
    beq lbl_8007B4BC
    addi r3, r1, 0x8
    mr r4, r20
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007B4BC
    li r17, 0x0
    b lbl_8007B4BC
lbl_8007B4B8:
    li r17, 0x0
lbl_8007B4BC:
    li r15, 0x0
    li r24, 0x0
    li r23, 0x0
    la r20, lbl_8049F198
    lfs f28, 0x4(r20)
    lfs f29, lbl_8049F198
    lfs f30, 0x10(r20)
    lis r3, lbl_80390828@ha
    addi r22, r3, lbl_80390828@l
    b lbl_8007B860
lbl_8007B4E4:
    cmpwi r15, 0x0
    bne lbl_8007B4F8
    cmpwi r31, 0x0
    bne lbl_8007B854
    b lbl_8007B508
lbl_8007B4F8:
    cmpwi r19, 0x0
    bne lbl_8007B508
    fcmpu cr0, f28, f27
    beq lbl_8007B868
lbl_8007B508:
    addi r3, r1, 0x20
    add r4, r29, r24
    bl fn_80019DAC
    lfsx f26, r30, r23
    lfs f0, 0x24(r1)
    stfs f0, 0x48(r1)
    cmpwi r17, 0x0
    bne lbl_8007B6A8
    cmpwi r16, 0x0
    beq lbl_8007B6A8
    addi r3, r1, 0x44
    addi r4, r1, 0x20
    addi r5, r1, 0x90
    addi r6, r1, 0x8
    addi r7, r1, 0x2c
    bl fn_8007E424
    mr r21, r3
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8001B8B8
    cmpwi r16, -0x1
    bne lbl_8007B5AC
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8001B8B4
    cmpwi r21, 0x0
    beq lbl_8007B594
    fcmpo cr0, f1, f29
    opword 0x4C411382
    bne lbl_8007B58C
    li r16, 0x1
    b lbl_8007B5AC
lbl_8007B58C:
    li r16, 0x0
    b lbl_8007B5AC
lbl_8007B594:
    fcmpo cr0, f1, f29
    opword 0x4C411382
    mfcr r0
    extrwi r0, r0, 1, 2
    cntlzw r0, r0
    srwi r16, r0, 5
lbl_8007B5AC:
    cmpwi r16, 0x0
    beq lbl_8007B6A8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    fmr f31, f1
    bl fn_8007ED64
    fcmpo cr0, f31, f1
    opword 0x4C401382
    bne lbl_8007B6A8
    lwz r0, 0x20(r26)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8007B604
    addi r3, r1, 0x90
    addi r4, r1, 0x9c
    addi r5, r1, 0xa8
    addi r6, r1, 0xb4
    addi r7, r1, 0x2c
    addi r8, r1, 0x8
    fmr f1, f26
    bl fn_8007E8D8
    b lbl_8007B620
lbl_8007B604:
    addi r3, r1, 0x90
    addi r4, r1, 0x9c
    addi r5, r1, 0xa8
    addi r6, r1, 0x2c
    addi r7, r1, 0x8
    fmr f1, f26
    bl fn_8007E51C
lbl_8007B620:
    mr r18, r3
    cmpwi r3, 0x0
    bne lbl_8007B6A8
    cmpwi r15, 0x0
    beq lbl_8007B640
    lwz r0, 0x0(r27)
    ori r0, r0, 0x10
    stw r0, 0x0(r27)
lbl_8007B640:
    cmpwi r21, 0x0
    beq lbl_8007B6A8
    cmpwi r15, 0x0
    bne lbl_8007B658
    addi r31, r31, 0x1
    b lbl_8007B854
lbl_8007B658:
    mr r3, r27
    addi r4, r1, 0x14
    mr r5, r18
    bl fn_8007DFA0
    cmpwi r3, 0x0
    blt lbl_8007B6A8
    addi r3, r1, 0x14
    addi r4, r1, 0x38
    lfs f1, 0xc(r20)
    bl fn_80018B08
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    mr r3, r27
    mr r4, r25
    mr r5, r26
    addi r6, r1, 0x14
    fmuls f1, f30, f26
    bl fn_8007DDC8
    li r16, 0x0
lbl_8007B6A8:
    cmpwi r15, 0x0
    beq lbl_8007B6C0
    cmpwi r31, 0x0
    beq lbl_8007B868
    cmpwi r17, 0x0
    bne lbl_8007B868
lbl_8007B6C0:
    li r21, -0x1
    addi r3, r1, 0x20
    addi r4, r1, 0x90
    addi r5, r1, 0x8
    li r6, 0x0
    addi r7, r1, 0x2c
    bl fn_8007E2CC
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    fmr f31, f1
    fcmpo cr0, f1, f26
    opword 0x4C401382
    bne lbl_8007B7BC
    lwz r0, 0x20(r26)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8007B738
    addi r3, r1, 0x90
    addi r4, r1, 0x9c
    addi r5, r1, 0xa8
    addi r6, r1, 0xb4
    addi r7, r1, 0x2c
    addi r8, r1, 0x8
    fmr f1, f26
    bl fn_8007E8D8
    b lbl_8007B754
lbl_8007B738:
    addi r3, r1, 0x90
    addi r4, r1, 0x9c
    addi r5, r1, 0xa8
    addi r6, r1, 0x2c
    addi r7, r1, 0x8
    fmr f1, f26
    bl fn_8007E51C
lbl_8007B754:
    mr r18, r3
    cmpwi r3, 0x0
    blt lbl_8007B7BC
    cmpwi r3, 0x1
    bne lbl_8007B78C
    addi r3, r1, 0x2c
    li r4, 0x0
    li r5, 0x0
    bl fn_8007E034
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_8001D9AC
    fcmpo cr0, f1, f26
    bgt lbl_8007B854
lbl_8007B78C:
    cmpwi r15, 0x0
    bne lbl_8007B79C
    addi r31, r31, 0x1
    b lbl_8007B854
lbl_8007B79C:
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8001B8B4
    fcmpo cr0, f1, f29
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r21, r0, 5
lbl_8007B7BC:
    cmpwi r21, -0x1
    beq lbl_8007B854
    cmpwi r18, 0x0
    bne lbl_8007B7D4
    mr r3, r27
    bl fn_8007DE30
lbl_8007B7D4:
    cmpwi r21, 0x0
    bne lbl_8007B7E4
    fsubs f1, f26, f31
    b lbl_8007B7E8
lbl_8007B7E4:
    fadds f1, f31, f26
lbl_8007B7E8:
    fcmpo cr0, f25, f1
    bge lbl_8007B854
    fmr f25, f1
    mr r3, r27
    mr r4, r25
    mr r5, r26
    addi r6, r1, 0x8
    bl fn_8007DDC8
    cmpwi r18, 0x1
    blt lbl_8007B81C
    mr r3, r27
    addi r4, r1, 0x50
    bl fn_8007DE68
lbl_8007B81C:
    cmpwi r21, 0x0
    beq lbl_8007B854
    lwz r4, 0x0(r27)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8007B848
    lwz r3, 0xc(r22)
    subi r0, r3, 0x1
    stw r0, 0xc(r22)
    rlwinm r0, r4, 0, 26, 24
    stw r0, 0x0(r27)
lbl_8007B848:
    lwz r0, 0x0(r27)
    ori r0, r0, 0x80
    stw r0, 0x0(r27)
lbl_8007B854:
    addi r15, r15, 0x1
    addi r24, r24, 0xc
    addi r23, r23, 0x4
lbl_8007B860:
    cmpw r15, r28
    blt lbl_8007B4E4
lbl_8007B868:
    mr r3, r31
    li r0, 0x178
    opword 0x13E1000C
    lfd f31, 0x170(r1)
    li r0, 0x168
    opword 0x13C1000C
    lfd f30, 0x160(r1)
    li r0, 0x158
    opword 0x13A1000C
    lfd f29, 0x150(r1)
    li r0, 0x148
    opword 0x1381000C
    lfd f28, 0x140(r1)
    li r0, 0x138
    opword 0x1361000C
    lfd f27, 0x130(r1)
    li r0, 0x128
    opword 0x1341000C
    lfd f26, 0x120(r1)
    li r0, 0x118
    opword 0x1321000C
    lfd f25, 0x110(r1)
    addi r11, r1, 0x110
    bl _restgpr_15
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

// asm_to_cpp: fn_8007B8D8
asm s32 fn_8007B8D8(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s32 *arg4, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    addi r11, r1, 0xa0
    bl _savegpr_15
    fmr f30, f1
    fmr f31, f2
    mr r16, r3
    mr r17, r4
    mr r18, r5
    mr r19, r6
    mr r20, r7
    li r22, 0x0
    li r3, 0x1
    bl fn_8007DB88
    li r3, 0x1
    bl fn_8007DBF0
    li r3, 0x1
    bl fn_8007DC44
    mr r27, r3
    cmpwi r3, 0x0
    bne lbl_8007B948
    li r3, 0x0
    b lbl_8007BB1C
lbl_8007B948:
    addi r3, r1, 0x38
    mr r4, r16
    bl fn_80019DAC
    addi r3, r1, 0x44
    mr r4, r16
    bl fn_80019DAC
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    mr r6, r16
    la r7, lbl_8049F198
    lfs f0, 0x14(r7)
    fadds f1, f0, f30
    bl fn_8007C560
    li r21, 0x0
    li r15, 0x0
    mr r28, r15
    mr r29, r15
    mr r30, r15
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    b lbl_8007BA8C
lbl_8007B9A8:
    li r3, 0x1
    bl fn_8007DAF4
    mr r26, r3
    cmpwi r3, 0x0
    bne lbl_8007B9C4
    li r3, 0x0
    b lbl_8007BB1C
lbl_8007B9C4:
    add r3, r27, r15
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8007BA84
    lwz r25, 0x8(r3)
    lwz r24, 0xc(r3)
    lwz r23, 0x10(r3)
    bl fn_8007ED64
    fmr f31, f1
    fmr f1, f30
    bl fn_8007ED6C
    cmpwi r25, 0x0
    bne lbl_8007BA3C
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    stw r22, 0x10(r1)
    mr r3, r24
    mr r4, r23
    mr r5, r26
    li r6, 0x2
    addi r7, r1, 0x38
    addi r8, r1, 0x18
    mr r9, r16
    mr r10, r17
    bl fn_8007B24C
    cmpwi r3, 0x0
    beq lbl_8007BA7C
    li r22, 0x1
    b lbl_8007BA7C
lbl_8007BA3C:
    stw r30, 0x8(r1)
    addi r0, r25, 0x18
    stw r0, 0xc(r1)
    stw r22, 0x10(r1)
    mr r3, r24
    mr r4, r23
    mr r5, r26
    li r6, 0x2
    addi r7, r1, 0x38
    addi r8, r1, 0x18
    mr r9, r16
    mr r10, r17
    bl fn_8007B24C
    cmpwi r3, 0x0
    beq lbl_8007BA7C
    li r22, 0x1
lbl_8007BA7C:
    fmr f1, f31
    bl fn_8007ED6C
lbl_8007BA84:
    addi r21, r21, 0x1
    addi r15, r15, 0x14
lbl_8007BA8C:
    lwz r0, 0x4(r31)
    cmpw r21, r0
    blt lbl_8007B9A8
    li r3, 0x1
    bl fn_8007DACC
    mr r21, r3
    mr r4, r17
    mr r5, r16
    bl fn_8007C040
    cmpwi r3, 0x0
    beq lbl_8007BB18
    mr r3, r21
    addi r4, r1, 0x2c
    mr r5, r19
    lfs f1, lbl_8049F198
    bl fn_8007C300
    mr r15, r3
    addi r3, r1, 0x2c
    bl fn_8001B8BC
    bl fn_80018BD4
    addi r3, r1, 0x20
    mr r4, r19
    bl fn_80018B08
    mr r3, r18
    addi r4, r1, 0x20
    mr r5, r16
    bl fn_80018B00
    mr r3, r19
    addi r4, r21, 0x10
    bl fn_80019DAC
    cmpwi r20, 0x0
    beq lbl_8007BB10
    stw r15, 0x0(r20)
lbl_8007BB10:
    li r3, 0x1
    b lbl_8007BB1C
lbl_8007BB18:
    li r3, 0x0
lbl_8007BB1C:
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_15
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8007BB4C
asm s32 fn_8007BB4C(s8 **arg0, s8 **arg1, s32 arg2, s8 **arg3, s8 **arg4, s32 *arg5, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    addi r11, r1, 0xa0
    bl _savegpr_15
    fmr f30, f1
    fmr f31, f2
    mr r16, r3
    mr r17, r4
    mr r15, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    li r22, 0x0
    li r3, 0x1
    bl fn_8007DB88
    li r3, 0x1
    bl fn_8007DBF0
    li r3, 0x1
    bl fn_8007DC44
    mr r27, r3
    cmpwi r3, 0x0
    bne lbl_8007BBC0
    li r3, 0x0
    b lbl_8007BD94
lbl_8007BBC0:
    addi r3, r1, 0x38
    mr r4, r16
    bl fn_80019DAC
    addi r3, r1, 0x44
    mr r4, r16
    bl fn_80019DAC
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    li r3, 0x1
    mr r4, r15
    li r5, 0x0
    mr r6, r16
    la r7, lbl_8049F198
    lfs f0, 0x14(r7)
    fadds f1, f0, f30
    bl fn_8007C560
    li r21, 0x0
    li r15, 0x0
    mr r28, r15
    mr r29, r15
    mr r30, r15
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    b lbl_8007BD04
lbl_8007BC20:
    li r3, 0x1
    bl fn_8007DAF4
    mr r26, r3
    cmpwi r3, 0x0
    bne lbl_8007BC3C
    li r3, 0x0
    b lbl_8007BD94
lbl_8007BC3C:
    add r3, r27, r15
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8007BCFC
    lwz r25, 0x8(r3)
    lwz r24, 0xc(r3)
    lwz r23, 0x10(r3)
    bl fn_8007ED64
    fmr f31, f1
    fmr f1, f30
    bl fn_8007ED6C
    cmpwi r25, 0x0
    bne lbl_8007BCB4
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    stw r22, 0x10(r1)
    mr r3, r24
    mr r4, r23
    mr r5, r26
    li r6, 0x2
    addi r7, r1, 0x38
    addi r8, r1, 0x18
    mr r9, r16
    mr r10, r17
    bl fn_8007B24C
    cmpwi r3, 0x0
    beq lbl_8007BCF4
    li r22, 0x1
    b lbl_8007BCF4
lbl_8007BCB4:
    stw r30, 0x8(r1)
    addi r0, r25, 0x18
    stw r0, 0xc(r1)
    stw r22, 0x10(r1)
    mr r3, r24
    mr r4, r23
    mr r5, r26
    li r6, 0x2
    addi r7, r1, 0x38
    addi r8, r1, 0x18
    mr r9, r16
    mr r10, r17
    bl fn_8007B24C
    cmpwi r3, 0x0
    beq lbl_8007BCF4
    li r22, 0x1
lbl_8007BCF4:
    fmr f1, f31
    bl fn_8007ED6C
lbl_8007BCFC:
    addi r21, r21, 0x1
    addi r15, r15, 0x14
lbl_8007BD04:
    lwz r0, 0x4(r31)
    cmpw r21, r0
    blt lbl_8007BC20
    li r3, 0x1
    bl fn_8007DACC
    mr r21, r3
    mr r4, r17
    mr r5, r16
    bl fn_8007C040
    cmpwi r3, 0x0
    beq lbl_8007BD90
    mr r3, r21
    addi r4, r1, 0x2c
    mr r5, r19
    lfs f1, lbl_8049F198
    bl fn_8007C300
    mr r15, r3
    addi r3, r1, 0x2c
    bl fn_8001B8BC
    bl fn_80018BD4
    addi r3, r1, 0x20
    mr r4, r19
    bl fn_80018B08
    mr r3, r18
    addi r4, r1, 0x20
    mr r5, r16
    bl fn_80018B00
    mr r3, r19
    addi r4, r21, 0x10
    bl fn_80019DAC
    cmpwi r20, 0x0
    beq lbl_8007BD88
    stw r15, 0x0(r20)
lbl_8007BD88:
    li r3, 0x1
    b lbl_8007BD94
lbl_8007BD90:
    li r3, 0x0
lbl_8007BD94:
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_15
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8007BDC4
asm s32 fn_8007BDC4(s32 arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, s32 *arg5, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    addi r11, r1, 0xa0
    bl _savegpr_14
    mr r15, r3
    fmr f30, f1
    fmr f31, f2
    mr r16, r4
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    li r22, 0x0
    li r3, 0x1
    bl fn_8007DB88
    li r3, 0x1
    bl fn_8007DBF0
    li r3, 0x1
    bl fn_8007DC44
    mr r27, r3
    cmpwi r3, 0x0
    bne lbl_8007BE38
    li r3, 0x0
    b lbl_8007C010
lbl_8007BE38:
    addi r3, r1, 0x38
    mr r4, r16
    bl fn_80019DAC
    addi r3, r1, 0x44
    mr r4, r16
    bl fn_80019DAC
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    mr r3, r15
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    mr r7, r16
    la r8, lbl_8049F198
    lfs f0, 0x14(r8)
    fadds f1, f0, f30
    bl fn_8007CA08
    li r21, 0x0
    li r31, 0x0
    mr r28, r31
    mr r29, r31
    mr r30, r31
    lis r3, lbl_80390828@ha
    addi r14, r3, lbl_80390828@l
    b lbl_8007BF80
lbl_8007BE9C:
    li r3, 0x1
    bl fn_8007DAF4
    mr r26, r3
    cmpwi r3, 0x0
    bne lbl_8007BEB8
    li r3, 0x0
    b lbl_8007C010
lbl_8007BEB8:
    add r3, r27, r31
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8007BF78
    lwz r25, 0x8(r3)
    lwz r24, 0xc(r3)
    lwz r23, 0x10(r3)
    bl fn_8007ED64
    fmr f31, f1
    fmr f1, f30
    bl fn_8007ED6C
    cmpwi r15, 0x0
    bne lbl_8007BF30
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    stw r22, 0x10(r1)
    mr r3, r24
    mr r4, r23
    mr r5, r26
    li r6, 0x2
    addi r7, r1, 0x38
    addi r8, r1, 0x18
    mr r9, r16
    mr r10, r17
    bl fn_8007B24C
    cmpwi r3, 0x0
    beq lbl_8007BF70
    li r22, 0x1
    b lbl_8007BF70
lbl_8007BF30:
    stw r30, 0x8(r1)
    addi r0, r25, 0x18
    stw r0, 0xc(r1)
    stw r22, 0x10(r1)
    mr r3, r24
    mr r4, r23
    mr r5, r26
    li r6, 0x2
    addi r7, r1, 0x38
    addi r8, r1, 0x18
    mr r9, r16
    mr r10, r17
    bl fn_8007B24C
    cmpwi r3, 0x0
    beq lbl_8007BF70
    li r22, 0x1
lbl_8007BF70:
    fmr f1, f31
    bl fn_8007ED6C
lbl_8007BF78:
    addi r21, r21, 0x1
    addi r31, r31, 0x14
lbl_8007BF80:
    lwz r0, 0x4(r14)
    cmpw r21, r0
    blt lbl_8007BE9C
    li r3, 0x1
    bl fn_8007DACC
    mr r15, r3
    mr r4, r17
    mr r5, r16
    bl fn_8007C040
    cmpwi r3, 0x0
    beq lbl_8007C00C
    mr r3, r15
    addi r4, r1, 0x2c
    mr r5, r19
    lfs f1, lbl_8049F198
    bl fn_8007C300
    mr r14, r3
    addi r3, r1, 0x2c
    bl fn_8001B8BC
    bl fn_80018BD4
    addi r3, r1, 0x20
    mr r4, r19
    bl fn_80018B08
    mr r3, r18
    addi r4, r1, 0x20
    mr r5, r16
    bl fn_80018B00
    mr r3, r19
    addi r4, r15, 0x10
    bl fn_80019DAC
    cmpwi r20, 0x0
    beq lbl_8007C004
    stw r14, 0x0(r20)
lbl_8007C004:
    li r3, 0x1
    b lbl_8007C010
lbl_8007C00C:
    li r3, 0x0
lbl_8007C010:
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8007C040
asm s32 fn_8007C040(s8 **arg0, s8 **arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r30, r3
    mr r27, r4
    cmpwi r3, 0x0
    bne lbl_8007C074
    li r3, 0x0
    b lbl_8007C2DC
lbl_8007C074:
    lis r4, lbl_80390828@ha
    addi r28, r4, lbl_80390828@l
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_8007C090
    li r3, 0x0
    b lbl_8007C2DC
lbl_8007C090:
    lwz r31, 0x10(r28)
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    bgt lbl_8007C2D8
    cmpwi r31, 0x0
    blt lbl_8007C0F0
    li r6, 0x0
    li r4, 0x0
    b lbl_8007C0E0
lbl_8007C0B4:
    lwzx r5, r3, r4
    andi. r0, r5, 0x5
    cmplwi r0, 0x5
    bne lbl_8007C0D8
    rlwinm r0, r5, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_8007C0D8
    ori r0, r5, 0x8
    stwx r0, r3, r4
lbl_8007C0D8:
    addi r6, r6, 0x1
    addi r4, r4, 0x30
lbl_8007C0E0:
    lwz r0, 0x4(r28)
    cmpw r6, r0
    blt lbl_8007C0B4
    b lbl_8007C2D8
lbl_8007C0F0:
    lwz r0, 0x14(r28)
    cmpwi r0, 0x0
    beq lbl_8007C224
    li r26, 0x0
    addi r3, r1, 0x14
    lfs f1, 0x0(r5)
    lfs f2, 0x24(r28)
    lfs f3, 0x8(r5)
    bl fn_80018B0C
    addi r3, r1, 0x8
    lfs f1, 0x0(r27)
    lfs f2, 0x24(r28)
    lfs f3, 0x8(r27)
    bl fn_80018B0C
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r28, 0x20
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r28, 0x20
    bl fn_8001B8B8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    lfs f31, lbl_8049F198
    li r27, 0x0
    li r29, 0x0
    b lbl_8007C1C8
lbl_8007C170:
    add r4, r30, r29
    lwz r3, 0x0(r4)
    andi. r0, r3, 0x5
    cmplwi r0, 0x5
    bne lbl_8007C1C0
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8007C1A0
    addi r3, r1, 0x8
    addi r4, r4, 0x10
    bl fn_8001B8B4
    b lbl_8007C1AC
lbl_8007C1A0:
    addi r3, r1, 0x14
    addi r4, r4, 0x10
    bl fn_8001B8B4
lbl_8007C1AC:
    fcmpo cr0, f1, f31
    ble lbl_8007C1C0
    fmr f31, f1
    mr r31, r27
    addi r26, r26, 0x1
lbl_8007C1C0:
    addi r27, r27, 0x1
    addi r29, r29, 0x30
lbl_8007C1C8:
    lwz r0, 0x4(r28)
    cmpw r27, r0
    blt lbl_8007C170
    cmpwi r26, 0x0
    beq lbl_8007C224
    mulli r0, r31, 0x30
    add r3, r30, r0
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8007C214
    lfs f1, 0x1c(r28)
    lfs f0, 0x18(r28)
    fsubs f0, f1, f0
    stfs f0, 0xc(r3)
    addi r3, r3, 0x10
    addi r4, r1, 0x14
    bl fn_80019DAC
    b lbl_8007C224
lbl_8007C214:
    lwz r0, 0x8(r28)
    cmpwi r0, 0x1
    bne lbl_8007C224
    li r31, -0x1
lbl_8007C224:
    cmpwi r31, 0x0
    blt lbl_8007C288
    mulli r3, r31, 0x30
    lwzx r0, r30, r3
    ori r0, r0, 0x20
    stwx r0, r30, r3
    li r6, 0x0
    li r3, 0x0
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    b lbl_8007C278
lbl_8007C250:
    lwzx r5, r30, r3
    andi. r0, r5, 0x5
    cmplwi r0, 0x5
    bne lbl_8007C270
    cmpw r31, r6
    beq lbl_8007C270
    ori r0, r5, 0x8
    stwx r0, r30, r3
lbl_8007C270:
    addi r6, r6, 0x1
    addi r3, r3, 0x30
lbl_8007C278:
    lwz r0, 0x4(r4)
    cmpw r6, r0
    blt lbl_8007C250
    b lbl_8007C2D8
lbl_8007C288:
    li r3, 0x0
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    lwz r0, 0x4(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8007C2D0
lbl_8007C2A4:
    lwzx r4, r30, r3
    andi. r0, r4, 0x5
    cmplwi r0, 0x5
    bne lbl_8007C2C8
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8007C2C8
    li r3, 0x1
    b lbl_8007C2DC
lbl_8007C2C8:
    addi r3, r3, 0x30
    bdnz lbl_8007C2A4
lbl_8007C2D0:
    li r3, 0x0
    b lbl_8007C2DC
lbl_8007C2D8:
    li r3, 0x1
lbl_8007C2DC:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8007C300
asm s32 fn_8007C300(s32 arg0, s8 **arg1, s8 **arg2, f32 farg0) {
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
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    fmr f28, f1
    li r25, 0x0
    li r26, 0x0
    lfs f29, lbl_8049F198
    fmr f30, f29
    stfs f29, 0x28(r1)
    stfs f29, 0x24(r1)
    stfs f29, 0x20(r1)
    li r27, 0x0
    li r31, 0x0
    la r30, lbl_8049F198
    lfs f31, 0x18(r30)
    lis r3, lbl_80390828@ha
    addi r29, r3, lbl_80390828@l
    b lbl_8007C4B4
lbl_8007C37C:
    add r28, r22, r31
    lwz r3, 0x0(r28)
    andi. r0, r3, 0x5
    cmplwi r0, 0x5
    bne lbl_8007C4AC
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8007C4AC
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    ble lbl_8007C41C
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8007C4AC
    addi r3, r1, 0x8
    addi r4, r28, 0x10
    lfs f1, 0xc(r28)
    bl fn_80018B08
    cmpwi r26, 0x0
    beq lbl_8007C400
    addi r3, r1, 0x14
    addi r4, r28, 0x20
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    addi r3, r1, 0x20
    mr r4, r3
    lfs f1, 0x18(r30)
    bl fn_80018B08
    b lbl_8007C4AC
lbl_8007C400:
    lwz r25, 0x8(r28)
    addi r3, r1, 0x20
    addi r4, r28, 0x20
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r26, r26, 0x1
    b lbl_8007C4AC
lbl_8007C41C:
    cmpwi r26, 0x0
    beq lbl_8007C480
    addi r3, r1, 0x14
    addi r4, r28, 0x10
    lfs f1, 0xc(r28)
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    lfs f0, 0xc(r28)
    fadds f0, f29, f0
    fmuls f29, f31, f0
    mr r3, r24
    addi r4, r1, 0x20
    bl fn_8001B8B0
    addi r3, r1, 0x20
    mr r4, r24
    fmr f1, f29
    bl fn_80018B08
    lfs f0, 0xc(r28)
    fcmpo cr0, f30, f0
    bge lbl_8007C4AC
    fmr f30, f0
    b lbl_8007C4AC
lbl_8007C480:
    lwz r25, 0x8(r28)
    mr r3, r24
    addi r4, r28, 0x10
    bl fn_80019DAC
    lfs f30, 0xc(r28)
    addi r3, r1, 0x20
    mr r4, r24
    fmr f1, f30
    bl fn_80018B08
    fmr f29, f30
    addi r26, r26, 0x1
lbl_8007C4AC:
    addi r27, r27, 0x1
    addi r31, r31, 0x30
lbl_8007C4B4:
    lwz r0, 0x4(r29)
    cmpw r27, r0
    blt lbl_8007C37C
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    ble lbl_8007C500
    mr r3, r24
    addi r4, r1, 0x20
    bl fn_8001B8B0
    addi r3, r1, 0x20
    bl fn_8001B8BC
    fmr f30, f1
    lfs f0, lbl_8049F198
    fcmpu cr0, f0, f28
    beq lbl_8007C500
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_8007C500
    fmr f30, f0
lbl_8007C500:
    mr r3, r23
    fmr f1, f30
    lfs f2, lbl_8049F198
    fmr f3, f2
    bl fn_80018B0C
    mr r3, r25
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
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_8007C560
asm void fn_8007C560(u32 arg0, s32 arg1, f32 *arg2, s8 **arg3, f32 farg0, s32 arg5) {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    opword 0xF3E10158
    stfd f30, 0x140(r1)
    opword 0xF3C10148
    addi r11, r1, 0x140
    bl _savegpr_14
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    mr r15, r6
    fmr f30, f1
    addi r3, r1, 0x14
    bl fn_80079618
    lwz r18, 0x1c(r1)
    addi r25, r1, 0x38
    lfs f31, lbl_8049F198
    b lbl_8007C9CC
lbl_8007C5B0:
    lwz r3, 0x10(r23)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8007C9C8
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8007C9C8
    rlwinm r0, r3, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_8007C9C8
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8007C9C8
    lwz r0, 0x48(r23)
    stw r0, 0xf0(r1)
    li r17, 0x0
    li r0, 0x0
    stw r0, 0xf4(r1)
    b lbl_8007C9B8
lbl_8007C5FC:
    lwz r3, 0xf0(r1)
    lwz r3, 0x24(r3)
    lwz r0, 0xf4(r1)
    add r21, r3, r0
    lwz r27, 0x28(r21)
    addis r0, r27, 0x1
    cmplwi r0, 0xffff
    beq lbl_8007C9A8
    lwz r22, 0x4(r27)
    addi r3, r1, 0x60
    mr r4, r21
    bl fn_8007E214
    addi r3, r1, 0x60
    mr r4, r3
    addi r5, r23, 0x18
    bl fn_8017375C
    li r16, 0x0
    li r31, 0x0
    b lbl_8007C99C
lbl_8007C648:
    lwz r0, 0x2c(r27)
    add r5, r0, r31
    lwz r3, 0x20(r5)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8007C994
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8007C994
    lwz r0, 0xc(r1)
    and r0, r0, r3
    cmpwi r0, 0x0
    bne lbl_8007C994
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8007C6E4
    addi r3, r1, 0x90
    lwz r4, 0x4(r22)
    lwz r0, 0x0(r5)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0x9c
    lwz r5, 0x4(r22)
    lwz r0, 0x2c(r27)
    add r4, r0, r31
    lwz r0, 0x4(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    addi r3, r1, 0xa8
    lwz r5, 0x4(r22)
    lwz r0, 0x2c(r27)
    add r4, r0, r31
    lwz r0, 0x8(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    b lbl_8007C75C
lbl_8007C6E4:
    addi r3, r1, 0x90
    lwz r4, 0x4(r22)
    lwz r0, 0x0(r5)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0x9c
    lwz r5, 0x4(r22)
    lwz r0, 0x2c(r27)
    add r4, r0, r31
    lwz r0, 0x4(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    addi r3, r1, 0xa8
    lwz r5, 0x4(r22)
    lwz r0, 0x2c(r27)
    add r4, r0, r31
    lwz r0, 0x8(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    addi r3, r1, 0xb4
    lwz r5, 0x4(r22)
    lwz r0, 0x2c(r27)
    add r4, r0, r31
    lwz r0, 0xc(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
lbl_8007C75C:
    lwz r0, 0x2c(r27)
    add r3, r0, r31
    addi r4, r1, 0x60
    addi r5, r1, 0x90
    bl fn_8007ED74
    mr r20, r3
    cmpwi r3, 0x3
    bne lbl_8007C798
    addi r3, r1, 0x20
    addi r4, r1, 0x90
    addi r5, r1, 0x9c
    addi r6, r1, 0xa8
    li r7, 0x0
    bl fn_8007E180
    b lbl_8007C7B0
lbl_8007C798:
    addi r3, r1, 0x20
    addi r4, r1, 0x90
    addi r5, r1, 0x9c
    addi r6, r1, 0xa8
    addi r7, r1, 0xb4
    bl fn_8007E180
lbl_8007C7B0:
    addi r3, r1, 0x20
    mr r4, r15
    bl fn_8001B8B4
    fcmpo cr0, f1, f31
    blt lbl_8007C994
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_8007C818
    li r5, 0x0
    li r4, 0x0
    mtctr r20
    cmpwi r20, 0x0
    ble lbl_8007C810
lbl_8007C7E4:
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    addi r0, r1, 0x90
    add r3, r0, r4
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_8007C810
    addi r5, r5, 0x1
    addi r4, r4, 0xc
    bdnz lbl_8007C7E4
lbl_8007C810:
    cmpw r5, r20
    beq lbl_8007C994
lbl_8007C818:
    li r24, 0x0
    li r14, 0x0
    li r19, 0x0
    b lbl_8007C848
lbl_8007C828:
    mr r3, r15
    addi r4, r1, 0x90
    add r4, r4, r14
    bl fn_8001D9AC
    stfsx f1, r25, r19
    addi r24, r24, 0x1
    addi r14, r14, 0xc
    addi r19, r19, 0x4
lbl_8007C848:
    cmpw r24, r20
    blt lbl_8007C828
    slwi r19, r20, 1
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_80019DAC
    slwi r29, r19, 2
    mr r3, r15
    addi r4, r1, 0x2c
    bl fn_8001D9AC
    stfsx f1, r25, r29
    li r0, 0x0
    li r3, 0x0
    mtctr r20
    cmpwi r20, 0x0
    ble lbl_8007C8A4
lbl_8007C888:
    lfsx f0, r25, r3
    fcmpo cr0, f0, f30
    bge lbl_8007C89C
    li r0, 0x1
    b lbl_8007C8A4
lbl_8007C89C:
    addi r3, r3, 0x4
    bdnz lbl_8007C888
lbl_8007C8A4:
    lfsx f0, r25, r29
    fcmpo cr0, f0, f30
    bge lbl_8007C8B4
    li r0, 0x1
lbl_8007C8B4:
    cmpwi r0, 0x0
    beq lbl_8007C994
    li r24, 0x0
    li r14, 0x0
    li r30, 0x0
    slwi r0, r20, 2
    addi r28, r1, 0x38
    add r28, r28, r0
    b lbl_8007C944
lbl_8007C8D8:
    addi r0, r24, 0x1
    cmpw r0, r20
    bne lbl_8007C8E8
    li r0, 0x0
lbl_8007C8E8:
    addi r3, r1, 0x2c
    addi r4, r1, 0x90
    add r4, r4, r14
    mulli r0, r0, 0xc
    addi r5, r1, 0x90
    add r5, r5, r0
    bl fn_80018B00
    add r0, r24, r20
    mulli r0, r0, 0xc
    addi r26, r1, 0x90
    add r26, r26, r0
    mr r3, r26
    addi r4, r1, 0x2c
    la r5, lbl_8049F198
    lfs f1, 0x18(r5)
    bl fn_80018B08
    mr r3, r15
    mr r4, r26
    bl fn_8001D9AC
    stfsx f1, r28, r30
    addi r24, r24, 0x1
    addi r14, r14, 0xc
    addi r30, r30, 0x4
lbl_8007C944:
    cmpw r24, r20
    blt lbl_8007C8D8
    lfsx f1, r25, r29
    li r3, 0x0
    mtctr r19
    cmpwi r19, 0x0
    ble lbl_8007C978
lbl_8007C960:
    lfsx f0, r25, r3
    fcmpo cr0, f1, f0
    ble lbl_8007C970
    fmr f1, f0
lbl_8007C970:
    addi r3, r3, 0x4
    bdnz lbl_8007C960
lbl_8007C978:
    lwz r3, 0x8(r1)
    mr r4, r23
    mr r5, r21
    lwz r0, 0x2c(r27)
    add r6, r0, r31
    mr r7, r20
    bl fn_8007DC94
lbl_8007C994:
    addi r16, r16, 0x1
    addi r31, r31, 0x34
lbl_8007C99C:
    lwz r0, 0x0(r27)
    cmpw r16, r0
    blt lbl_8007C648
lbl_8007C9A8:
    addi r17, r17, 0x1
    lwz r3, 0xf4(r1)
    addi r3, r3, 0x54
    stw r3, 0xf4(r1)
lbl_8007C9B8:
    lwz r3, 0xf0(r1)
    lwz r0, 0x10(r3)
    cmpw r17, r0
    blt lbl_8007C5FC
lbl_8007C9C8:
    lwz r18, 0x8(r18)
lbl_8007C9CC:
    lwz r23, 0x0(r18)
    cmplwi r23, 0x1
    bne lbl_8007C5B0
    li r0, 0x158
    opword 0x13E1000C
    lfd f31, 0x150(r1)
    li r0, 0x148
    opword 0x13C1000C
    lfd f30, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_14
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

// asm_to_cpp: fn_8007CA08
asm void fn_8007CA08(s8 *arg0, u32 arg1, s32 arg2, f32 *arg3, s8 **arg4, f32 farg0, s32 arg6) {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    addi r11, r1, 0x130
    bl _savegpr_14
    mr r14, r3
    stw r4, 0x8(r1)
    stw r5, 0xc(r1)
    stw r6, 0x10(r1)
    mr r15, r7
    fmr f31, f1
    lwz r4, 0x10(r3)
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8007CD88
    rlwinm r0, r4, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_8007CD88
    lwz r0, 0x48(r3)
    stw r0, 0xd8(r1)
    li r17, 0x0
    li r31, 0x0
    addi r23, r1, 0x20
    b lbl_8007CD78
lbl_8007CA70:
    lwz r3, 0xd8(r1)
    lwz r0, 0x24(r3)
    add r20, r0, r31
    lwz r25, 0x28(r20)
    addis r0, r25, 0x1
    cmplwi r0, 0xffff
    beq lbl_8007CD70
    lwz r21, 0x4(r25)
    addi r3, r1, 0x48
    mr r4, r20
    bl fn_8007E214
    addi r3, r1, 0x48
    mr r4, r3
    addi r5, r14, 0x18
    bl fn_8017375C
    li r16, 0x0
    li r30, 0x0
    b lbl_8007CD64
lbl_8007CAB8:
    lwz r0, 0x2c(r25)
    add r5, r0, r30
    lwz r3, 0x20(r5)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8007CD5C
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8007CD5C
    lwz r0, 0xc(r1)
    and r0, r0, r3
    cmpwi r0, 0x0
    bne lbl_8007CD5C
    addi r3, r1, 0x78
    lwz r4, 0x4(r21)
    lwz r0, 0x0(r5)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0x84
    lwz r5, 0x4(r21)
    lwz r0, 0x2c(r25)
    add r4, r0, r30
    lwz r0, 0x4(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    addi r3, r1, 0x90
    lwz r5, 0x4(r21)
    lwz r0, 0x2c(r25)
    add r4, r0, r30
    lwz r0, 0x8(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    lwz r0, 0x2c(r25)
    add r3, r0, r30
    addi r4, r1, 0x48
    addi r5, r1, 0x78
    bl fn_8007ED74
    mr r19, r3
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_8007CBB0
    li r6, 0x0
    li r5, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_8007CBA8
lbl_8007CB7C:
    lwz r4, 0x10(r1)
    lfs f1, 0x0(r4)
    addi r0, r1, 0x78
    add r4, r0, r5
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_8007CBA8
    addi r6, r6, 0x1
    addi r5, r5, 0xc
    bdnz lbl_8007CB7C
lbl_8007CBA8:
    cmpw r6, r3
    beq lbl_8007CD5C
lbl_8007CBB0:
    li r24, 0x0
    li r18, 0x0
    li r22, 0x0
    b lbl_8007CBE0
lbl_8007CBC0:
    mr r3, r15
    addi r4, r1, 0x78
    add r4, r4, r18
    bl fn_8001D9AC
    stfsx f1, r23, r22
    addi r24, r24, 0x1
    addi r18, r18, 0xc
    addi r22, r22, 0x4
lbl_8007CBE0:
    cmpw r24, r19
    blt lbl_8007CBC0
    slwi r18, r19, 1
    cmpwi r19, 0x3
    bne lbl_8007CC10
    addi r3, r1, 0x14
    addi r4, r1, 0x78
    addi r5, r1, 0x84
    addi r6, r1, 0x90
    li r7, 0x0
    bl fn_8007E180
    b lbl_8007CC28
lbl_8007CC10:
    addi r3, r1, 0x14
    addi r4, r1, 0x78
    addi r5, r1, 0x84
    addi r6, r1, 0x90
    addi r7, r1, 0x9c
    bl fn_8007E180
lbl_8007CC28:
    slwi r27, r18, 2
    mr r3, r15
    addi r4, r1, 0x14
    bl fn_8001D9AC
    stfsx f1, r23, r27
    li r0, 0x0
    li r3, 0x0
    mtctr r19
    cmpwi r19, 0x0
    ble lbl_8007CC6C
lbl_8007CC50:
    lfsx f0, r23, r3
    fcmpo cr0, f0, f31
    bge lbl_8007CC64
    li r0, 0x1
    b lbl_8007CC6C
lbl_8007CC64:
    addi r3, r3, 0x4
    bdnz lbl_8007CC50
lbl_8007CC6C:
    lfsx f0, r23, r27
    fcmpo cr0, f0, f31
    bge lbl_8007CC7C
    li r0, 0x1
lbl_8007CC7C:
    cmpwi r0, 0x0
    beq lbl_8007CD5C
    li r22, 0x0
    li r29, 0x0
    li r28, 0x0
    slwi r0, r19, 2
    addi r26, r1, 0x20
    add r26, r26, r0
    b lbl_8007CD0C
lbl_8007CCA0:
    addi r0, r22, 0x1
    cmpw r0, r19
    bne lbl_8007CCB0
    li r0, 0x0
lbl_8007CCB0:
    addi r3, r1, 0x14
    addi r4, r1, 0x78
    add r4, r4, r29
    mulli r0, r0, 0xc
    addi r5, r1, 0x78
    add r5, r5, r0
    bl fn_80018B00
    add r0, r22, r19
    mulli r0, r0, 0xc
    addi r24, r1, 0x78
    add r24, r24, r0
    mr r3, r24
    addi r4, r1, 0x14
    la r5, lbl_8049F198
    lfs f1, 0x18(r5)
    bl fn_80018B08
    mr r3, r15
    mr r4, r24
    bl fn_8001D9AC
    stfsx f1, r26, r28
    addi r22, r22, 0x1
    addi r29, r29, 0xc
    addi r28, r28, 0x4
lbl_8007CD0C:
    cmpw r22, r19
    blt lbl_8007CCA0
    lfsx f1, r23, r27
    li r3, 0x0
    mtctr r18
    cmpwi r18, 0x0
    ble lbl_8007CD40
lbl_8007CD28:
    lfsx f0, r23, r3
    fcmpo cr0, f1, f0
    ble lbl_8007CD38
    fmr f1, f0
lbl_8007CD38:
    addi r3, r3, 0x4
    bdnz lbl_8007CD28
lbl_8007CD40:
    lwz r3, 0x8(r1)
    mr r4, r14
    mr r5, r20
    lwz r0, 0x2c(r25)
    add r6, r0, r30
    mr r7, r19
    bl fn_8007DC94
lbl_8007CD5C:
    addi r16, r16, 0x1
    addi r30, r30, 0x34
lbl_8007CD64:
    lwz r0, 0x0(r25)
    cmpw r16, r0
    blt lbl_8007CAB8
lbl_8007CD70:
    addi r17, r17, 0x1
    addi r31, r31, 0x54
lbl_8007CD78:
    lwz r3, 0xd8(r1)
    lwz r0, 0x10(r3)
    cmpw r17, r0
    blt lbl_8007CA70
lbl_8007CD88:
    li r0, 0x138
    opword 0x13E1000C
    lfd f31, 0x130(r1)
    addi r11, r1, 0x130
    bl _restgpr_14
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_8007CDAC
asm s32 fn_8007CDAC(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, f32 farg0) {
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
    addi r11, r1, 0x70
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f31, f1
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    opword 0x4C401382
    mfcr r0
    extrwi r0, r0, 1, 2
    cntlzw r0, r0
    srwi r30, r0, 5
    addi r3, r1, 0x2c
    mr r4, r28
    mr r5, r25
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r28
    mr r5, r26
    bl fn_8001B8B8
    addi r3, r1, 0x14
    mr r4, r28
    mr r5, r27
    bl fn_8001B8B8
    addi r3, r1, 0x8
    lfs f1, 0x0(r28)
    lfs f2, lbl_8049F198
    lfs f3, 0x8(r28)
    bl fn_80018B0C
    lfs f0, lbl_8049F198
    stfs f0, 0x30(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x18(r1)
    li r31, 0x0
    cmpwi r30, 0x0
    beq lbl_8007CF14
    fmr f29, f31
    addi r3, r1, 0x2c
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f31, f1
    ble lbl_8007CEA8
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    mr r4, r25
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    fmr f29, f30
    li r31, 0x2
lbl_8007CEA8:
    addi r3, r1, 0x20
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f29, f1
    ble lbl_8007CEE0
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    mr r4, r26
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    fmr f29, f30
    li r31, 0x3
lbl_8007CEE0:
    addi r3, r1, 0x14
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f29, f1
    ble lbl_8007CF14
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    mr r4, r27
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    li r31, 0x4
lbl_8007CF14:
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x38
    mr r4, r29
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007CF74
    cmpwi r30, 0x0
    bne lbl_8007CF70
    li r3, -0x1
    b lbl_8007D150
lbl_8007CF70:
    li r30, 0x2
lbl_8007CF74:
    cmpwi r30, 0x1
    bgt lbl_8007CFFC
    addi r3, r1, 0x38
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8001F9C8
    addi r3, r1, 0x38
    mr r4, r29
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007CFB8
    cmpwi r30, 0x0
    bne lbl_8007CFB4
    li r3, -0x1
    b lbl_8007D150
lbl_8007CFB4:
    li r30, 0x3
lbl_8007CFB8:
    cmpwi r30, 0x1
    bgt lbl_8007CFFC
    addi r3, r1, 0x38
    addi r4, r1, 0x14
    addi r5, r1, 0x2c
    bl fn_8001F9C8
    addi r3, r1, 0x38
    mr r4, r29
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007CFFC
    cmpwi r30, 0x0
    bne lbl_8007CFF8
    li r3, -0x1
    b lbl_8007D150
lbl_8007CFF8:
    li r30, 0x4
lbl_8007CFFC:
    cmpwi r30, 0x1
    ble lbl_8007D14C
    cmpwi r31, 0x0
    beq lbl_8007D014
    mr r3, r31
    b lbl_8007D150
lbl_8007D014:
    cmpwi r30, 0x2
    beq lbl_8007D030
    cmpwi r30, 0x3
    beq lbl_8007D04C
    cmpwi r30, 0x4
    beq lbl_8007D068
    b lbl_8007D080
lbl_8007D030:
    addi r3, r1, 0x14
    mr r4, r25
    bl fn_80019DAC
    addi r3, r1, 0x38
    mr r4, r26
    bl fn_80019DAC
    b lbl_8007D080
lbl_8007D04C:
    addi r3, r1, 0x14
    mr r4, r26
    bl fn_80019DAC
    addi r3, r1, 0x38
    mr r4, r27
    bl fn_80019DAC
    b lbl_8007D080
lbl_8007D068:
    addi r3, r1, 0x14
    mr r4, r27
    bl fn_80019DAC
    addi r3, r1, 0x38
    mr r4, r25
    bl fn_80019DAC
lbl_8007D080:
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    addi r5, r1, 0x38
    bl fn_8001B8B8
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_8001B8B8
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_8001B8B4
    lfs f0, 0x34(r1)
    fmuls f3, f0, f0
    lfs f0, 0x2c(r1)
    fmuls f2, f0, f0
    lfs f0, 0x30(r1)
    fmuls f0, f0, f0
    fadds f0, f2, f0
    fadds f2, f3, f0
    lfs f0, lbl_8049F198
    fcmpo cr0, f0, f1
    bgt lbl_8007D0E0
    fcmpo cr0, f1, f2
    ble lbl_8007D0E8
lbl_8007D0E0:
    li r3, -0x1
    b lbl_8007D150
lbl_8007D0E8:
    fdivs f1, f1, f2
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_80018B08
    addi r3, r1, 0x38
    mr r4, r3
    addi r5, r1, 0x2c
    bl fn_80018B00
    addi r3, r1, 0x38
    mr r4, r28
    bl fn_8001D9AC
    fmr f30, f1
    fcmpo cr0, f31, f1
    bge lbl_8007D128
    li r3, -0x1
    b lbl_8007D150
lbl_8007D128:
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    addi r4, r1, 0x38
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    li r3, 0x1
    b lbl_8007D150
lbl_8007D14C:
    li r3, 0x0
lbl_8007D150:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    li r0, 0x78
    opword 0x13A1000C
    lfd f29, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_8007D18C
asm M2C_UNK fn_8007D18C(s8 *arg1, s8 **arg2, s8 **arg3, s8 **arg4, s8 *arg5, s8 **arg6, f32 farg0, s32 arg7) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r6
    mr r29, r7
    mr r30, r8
    fmr f31, f1
    mr r31, r9
    mr r3, r4
    mr r4, r5
    mr r5, r28
    bl fn_8007ED74
    cmpwi r31, 0x1
    beq lbl_8007D208
    cmpwi r31, 0x2
    beq lbl_8007D224
    cmpwi r31, 0x3
    beq lbl_8007D240
    cmpwi r31, 0x11
    beq lbl_8007D25C
    cmpwi r31, 0x12
    beq lbl_8007D27C
    cmpwi r31, 0x13
    beq lbl_8007D29C
    cmpwi r31, 0x20
    beq lbl_8007D2BC
    b lbl_8007D2F4
lbl_8007D208:
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    lfs f1, 0x0(r30)
    bl fn_8007F008
    b lbl_8007D308
lbl_8007D224:
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    lfs f1, 0x4(r30)
    bl fn_8007EF50
    b lbl_8007D308
lbl_8007D240:
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    lfs f1, 0x8(r30)
    bl fn_8007EE98
    b lbl_8007D308
lbl_8007D25C:
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    lfs f0, 0x0(r30)
    fneg f1, f0
    bl fn_8007F008
    b lbl_8007D308
lbl_8007D27C:
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    lfs f0, 0x4(r30)
    fneg f1, f0
    bl fn_8007EF50
    b lbl_8007D308
lbl_8007D29C:
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    lfs f0, 0x8(r30)
    fneg f1, f0
    bl fn_8007EE98
    b lbl_8007D308
lbl_8007D2BC:
    addi r3, r1, 0x8
    lfs f1, lbl_8049F198
    la r4, lbl_8049F198
    lfs f2, 0x1c(r4)
    fmr f3, f1
    bl fn_80018B0C
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    addi r7, r1, 0x8
    fmr f1, f31
    bl fn_8007CDAC
    b lbl_8007D308
lbl_8007D2F4:
    mr r3, r28
    addi r4, r28, 0xc
    addi r5, r28, 0x18
    mr r6, r29
    bl fn_8007EDEC
lbl_8007D308:
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

// asm_to_cpp: fn_8007D32C
asm s32 fn_8007D32C(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s8 *arg5, s32 arg6) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_17
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r7
    mr r25, r8
    mr r26, r9
    li r27, 0x0
    li r20, 0x0
    li r19, 0x0
    lwz r30, 0x28(r3)
    lwz r29, 0x4(r30)
    li r28, 0x0
    li r18, 0x0
    b lbl_8007D4E0
lbl_8007D378:
    lwz r0, 0x2c(r30)
    add r31, r0, r18
    lwz r3, 0x20(r31)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8007D4D8
    and r0, r3, r24
    cmpwi r0, 0x0
    bne lbl_8007D4D8
    addi r3, r1, 0x48
    lwz r4, 0x4(r29)
    lwz r0, 0x0(r31)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0x54
    lwz r5, 0x4(r29)
    lwz r0, 0x2c(r30)
    add r4, r0, r18
    lwz r0, 0x4(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    addi r3, r1, 0x60
    lwz r5, 0x4(r29)
    lwz r0, 0x2c(r30)
    add r4, r0, r18
    lwz r0, 0x8(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_80019DAC
    addi r3, r1, 0x18
    mr r4, r21
    bl fn_8007E214
    cmpwi r22, 0x0
    beq lbl_8007D418
    addi r3, r1, 0x18
    mr r4, r3
    mr r5, r22
    bl fn_8017375C
lbl_8007D418:
    addi r3, r1, 0x8
    addi r4, r1, 0x18
    addi r5, r31, 0x28
    bl fn_80018B04
    cmpwi r26, 0x0
    beq lbl_8007D45C
    mr r3, r21
    mr r4, r31
    addi r5, r1, 0x18
    addi r6, r1, 0x48
    mr r7, r23
    addi r8, r1, 0x8
    lfs f1, 0x1c0(r25)
    li r9, 0x20
    bl fn_8007D18C
    mr r17, r3
    b lbl_8007D484
lbl_8007D45C:
    mr r3, r21
    mr r4, r31
    addi r5, r1, 0x18
    addi r6, r1, 0x48
    mr r7, r23
    addi r8, r1, 0x8
    lfs f1, 0x1c0(r25)
    li r9, 0x0
    bl fn_8007D18C
    mr r17, r3
lbl_8007D484:
    cmpwi r17, 0x0
    blt lbl_8007D4D8
    add r3, r25, r19
    stw r31, 0x180(r3)
    add r3, r25, r20
    addi r4, r1, 0x48
    bl fn_80019DAC
    add r3, r25, r20
    addi r3, r3, 0xc0
    addi r4, r1, 0x8
    bl fn_80019DAC
    cmpwi r17, 0x0
    bne lbl_8007D4BC
    stw r27, 0x1c4(r25)
lbl_8007D4BC:
    addi r27, r27, 0x1
    addi r20, r20, 0xc
    addi r19, r19, 0x4
    cmpwi r27, 0x10
    bne lbl_8007D4D8
    mr r3, r27
    b lbl_8007D4F0
lbl_8007D4D8:
    addi r28, r28, 0x1
    addi r18, r18, 0x34
lbl_8007D4E0:
    lwz r0, 0x0(r30)
    cmpw r28, r0
    blt lbl_8007D378
    mr r3, r27
lbl_8007D4F0:
    addi r11, r1, 0xc0
    bl _restgpr_17
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

s32 fn_8007D508(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    return (s32) (fn_8007D32C((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1), (s8 *) ((s8 *) arg2), (s32) (arg3), (s32) (9), (s8 *) (arg4), (s32) (1)));
}

// asm_to_cpp: fn_8007D518
asm s32 fn_8007D518(s8 **arg0, M2C_UNK *arg1, s8 **arg2, s8 **arg3) {
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x210
    bl _savegpr_22
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    la r3, lbl_8049F198
    lfs f0, 0x24(r3)
    stfs f0, 0x1e0(r1)
    li r31, 0x0
    addi r3, r1, 0x8
    bl fn_80079618
    lwz r30, 0x10(r1)
    b lbl_8007D5E4
lbl_8007D55C:
    lwz r3, 0x10(r24)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8007D5E0
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8007D5E0
    lwz r23, 0x48(r24)
    cmpwi r23, 0x0
    beq lbl_8007D5E0
    rlwinm r0, r3, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_8007D5E0
    li r22, 0x0
    li r25, 0x0
    b lbl_8007D5D4
lbl_8007D59C:
    lwz r0, 0x24(r23)
    add r3, r0, r25
    lwz r4, 0x28(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_8007D5CC
    addi r4, r24, 0x18
    mr r5, r26
    li r6, 0x0
    addi r7, r1, 0x20
    bl fn_8007D508
    add r31, r31, r3
lbl_8007D5CC:
    addi r22, r22, 0x1
    addi r25, r25, 0x54
lbl_8007D5D4:
    lwz r0, 0x10(r23)
    cmpw r22, r0
    blt lbl_8007D59C
lbl_8007D5E0:
    lwz r30, 0x8(r30)
lbl_8007D5E4:
    lwz r24, 0x0(r30)
    cmplwi r24, 0x1
    bne lbl_8007D55C
    cmpwi r31, 0x0
    bne lbl_8007D600
    li r3, 0x0
    b lbl_8007D644
lbl_8007D600:
    mr r3, r26
    addi r4, r1, 0x20
    addi r5, r1, 0xe0
    mr r6, r27
    addi r7, r1, 0x14
    bl fn_8007E2CC
    cmpwi r28, 0x0
    beq lbl_8007D62C
    mr r3, r28
    addi r4, r1, 0x14
    bl fn_80019DAC
lbl_8007D62C:
    cmpwi r29, 0x0
    beq lbl_8007D640
    mr r3, r29
    addi r4, r1, 0xe0
    bl fn_80019DAC
lbl_8007D640:
    lwz r3, 0x1a0(r1)
lbl_8007D644:
    addi r11, r1, 0x210
    bl _restgpr_22
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

// asm_to_cpp: fn_8007D65C
asm s32 fn_8007D65C(s8 *arg0, s8 **arg1, M2C_UNK *arg2, s8 **arg3, s8 **arg4) {
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x210
    bl _savegpr_23
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    la r4, lbl_8049F198
    lfs f0, 0x24(r4)
    stfs f0, 0x1d8(r1)
    li r23, 0x0
    lwz r4, 0x10(r3)
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    bne lbl_8007D6AC
    li r3, 0x0
    b lbl_8007D77C
lbl_8007D6AC:
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8007D6C0
    li r3, 0x0
    b lbl_8007D77C
lbl_8007D6C0:
    lwz r25, 0x48(r3)
    cmpwi r25, 0x0
    beq lbl_8007D728
    rlwinm r0, r4, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_8007D728
    li r24, 0x0
    li r26, 0x0
    b lbl_8007D71C
lbl_8007D6E4:
    lwz r0, 0x24(r25)
    add r3, r0, r26
    lwz r4, 0x28(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_8007D714
    addi r4, r27, 0x18
    mr r5, r28
    li r6, 0x0
    addi r7, r1, 0x18
    bl fn_8007D508
    add r23, r23, r3
lbl_8007D714:
    addi r24, r24, 0x1
    addi r26, r26, 0x54
lbl_8007D71C:
    lwz r0, 0x10(r25)
    cmpw r24, r0
    blt lbl_8007D6E4
lbl_8007D728:
    cmpwi r23, 0x0
    bne lbl_8007D738
    li r3, 0x0
    b lbl_8007D77C
lbl_8007D738:
    mr r3, r28
    addi r4, r1, 0x18
    addi r5, r1, 0xd8
    mr r6, r29
    addi r7, r1, 0x8
    bl fn_8007E2CC
    cmpwi r30, 0x0
    beq lbl_8007D764
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_80019DAC
lbl_8007D764:
    cmpwi r31, 0x0
    beq lbl_8007D778
    mr r3, r31
    addi r4, r1, 0xd8
    bl fn_80019DAC
lbl_8007D778:
    lwz r3, 0x198(r1)
lbl_8007D77C:
    addi r11, r1, 0x210
    bl _restgpr_23
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

// asm_to_cpp: fn_8007D794
asm f32 fn_8007D794(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r4, lbl_80339758@ha
    addi r5, r4, lbl_80339758@l
    lwz r4, 0x0(r5)
    lwz r0, 0x4(r5)
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    addi r6, r1, 0x14
    bl fn_8007D518
    cmpwi r3, 0x0
    beq lbl_8007D7E0
    lfs f1, 0x24(r1)
    b lbl_8007D7E4
lbl_8007D7E0:
    lfs f1, lbl_8049F198
lbl_8007D7E4:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8007D7F4
asm s32 fn_8007D7F4(s32 arg0, f32 *arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    lis r4, lbl_80339764@ha
    addi r5, r4, lbl_80339764@l
    lwz r4, 0x0(r5)
    lwz r0, 0x4(r5)
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    addi r6, r1, 0x14
    bl fn_8007D518
    cmpwi r3, 0x0
    bne lbl_8007D858
    cmpwi r31, 0x0
    beq lbl_8007D850
    lfs f0, lbl_8049F198
    stfs f0, 0x0(r31)
lbl_8007D850:
    li r3, 0x0
    b lbl_8007D868
lbl_8007D858:
    cmpwi r31, 0x0
    beq lbl_8007D868
    lfs f0, 0x24(r1)
    stfs f0, 0x0(r31)
lbl_8007D868:
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8007D87C
asm void fn_8007D87C(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r25, r3
    cmpwi r3, 0x0
    bgt lbl_8007D8A0
    li r25, 0x8
lbl_8007D8A0:
    li r29, 0x0
    lis r3, lbl_80390828@ha
    stw r29, lbl_80390828@l(r3)
    addi r28, r3, lbl_80390828@l
    stw r25, 0x4(r28)
    li r24, 0x0
    mulli r26, r25, 0x30
    lis r3, lbl_803C1A40@ha
    addi r27, r3, lbl_803C1A40@l
lbl_8007D8C4:
    add r30, r28, r29
    lwz r3, 0x848(r27)
    mr r4, r26
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x2c(r30)
    lwz r3, 0x2c(r30)
    cmpwi r3, 0x0
    beq lbl_8007D8F4
    li r4, 0x0
    li r5, 0x30
    bl memset
lbl_8007D8F4:
    addi r24, r24, 0x1
    addi r29, r29, 0x4
    cmpwi r24, 0x4
    blt lbl_8007D8C4
    li r24, 0x0
    li r31, 0x0
    li r30, 0x0
    mulli r26, r25, 0x14
    li r27, 0x0
    lis r3, lbl_80390828@ha
    addi r28, r3, lbl_80390828@l
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
lbl_8007D928:
    add r3, r28, r30
    sth r27, 0x50(r3)
    add r25, r28, r31
    lwz r3, 0x848(r29)
    mr r4, r26
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x58(r25)
    lwz r3, 0x58(r25)
    cmpwi r3, 0x0
    beq lbl_8007D960
    li r4, 0x0
    li r5, 0x14
    bl memset
lbl_8007D960:
    addi r24, r24, 0x1
    addi r31, r31, 0x4
    addi r30, r30, 0x2
    cmpwi r24, 0x4
    blt lbl_8007D928
    lis r3, lbl_80390828@ha
    addi r3, r3, lbl_80390828@l
    addi r3, r3, 0x68
    li r4, 0x0
    li r5, 0x2c
    bl memset
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8007D9A4
asm void fn_8007D9A4(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r29, 0x0
    lis r3, lbl_80390828@ha
    stw r29, lbl_80390828@l(r3)
    addi r28, r3, lbl_80390828@l
    stw r29, 0x4(r28)
    li r25, 0x0
    mr r30, r29
    lis r3, lbl_803C1A40@ha
    addi r27, r3, lbl_803C1A40@l
lbl_8007D9DC:
    add r31, r28, r30
    lwz r4, 0x2c(r31)
    cmpwi r4, 0x0
    beq lbl_8007D9F8
    lwz r3, 0x848(r27)
    bl fn_80170E84
    stw r29, 0x2c(r31)
lbl_8007D9F8:
    addi r25, r25, 0x1
    addi r30, r30, 0x4
    cmpwi r25, 0x4
    blt lbl_8007D9DC
    li r25, 0x0
    li r31, 0x0
    li r30, 0x0
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    li r29, 0x0
    lis r3, lbl_80390828@ha
    addi r27, r3, lbl_80390828@l
lbl_8007DA28:
    add r3, r27, r30
    sth r29, 0x50(r3)
    add r26, r27, r31
    lwz r4, 0x58(r26)
    cmpwi r4, 0x0
    beq lbl_8007DA4C
    lwz r3, 0x848(r28)
    bl fn_80170E84
    stw r29, 0x58(r26)
lbl_8007DA4C:
    addi r25, r25, 0x1
    addi r31, r31, 0x4
    addi r30, r30, 0x2
    cmpwi r25, 0x4
    blt lbl_8007DA28
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8007DA78
asm s32 fn_8007DA78(s32 arg0) {
    nofralloc
    cmpwi r3, 0xff
    bne lbl_8007DA88
    li r0, 0x3
    b lbl_8007DAC4
lbl_8007DA88:
    cmpwi r3, 0xfe
    bne lbl_8007DA98
    li r0, 0x2
    b lbl_8007DAC4
lbl_8007DA98:
    cmpwi r3, 0x0
    bge lbl_8007DAA8
    li r3, 0x0
    b lbl_8007DAB4
lbl_8007DAA8:
    cmpwi r3, 0x2
    blt lbl_8007DAB4
    li r3, 0x1
lbl_8007DAB4:
    cmpwi r3, 0x0
    li r0, 0x1
    bne lbl_8007DAC4
    mr r0, r3
lbl_8007DAC4:
    mr r3, r0
    blr
}

// asm_to_cpp: fn_8007DACC
asm s32 fn_8007DACC(u32 arg0) {
    nofralloc
    cmplwi r3, 0x3
    bgt lbl_8007DAEC
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    slwi r0, r3, 2
    add r3, r4, r0
    lwz r3, 0x2c(r3)
    blr
lbl_8007DAEC:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8007DAF4
asm s32 * fn_8007DAF4(u32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8007DACC
    mr r31, r3
    bl fn_8007ED54
    cmplwi r30, 0x3
    ble lbl_8007DB28
    li r3, 0x0
    b lbl_8007DB70
lbl_8007DB28:
    li r5, 0x0
    li r4, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_8007DB58
lbl_8007DB3C:
    lwzx r0, r31, r4
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8007DB58
    addi r5, r5, 0x1
    addi r4, r4, 0x30
    bdnz lbl_8007DB3C
lbl_8007DB58:
    cmpw r5, r3
    bne lbl_8007DB68
    li r3, 0x0
    b lbl_8007DB70
lbl_8007DB68:
    mulli r0, r5, 0x30
    add r3, r31, r0
lbl_8007DB70:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007DB88
asm void fn_8007DB88(u32 arg0) {
    nofralloc
    cmplwi r3, 0x3
    bgtlr
    li r6, 0x0
    lis r4, lbl_80390828@ha
    addi r5, r4, lbl_80390828@l
    stw r6, 0x8(r5)
    stw r6, 0xc(r5)
    stw r6, 0x14(r5)
    li r0, -0x1
    stw r0, 0x10(r5)
    la r4, lbl_8049F198
    lfs f0, 0x28(r4)
    stfs f0, 0x18(r5)
    slwi r0, r3, 2
    add r3, r5, r0
    lwz r4, 0x2c(r3)
    li r7, 0x0
    mr r3, r6
    b lbl_8007DBE0
lbl_8007DBD4:
    stwx r6, r4, r3
    addi r7, r7, 0x1
    addi r3, r3, 0x30
lbl_8007DBE0:
    lwz r0, 0x4(r5)
    cmpw r7, r0
    blt lbl_8007DBD4
    blr
}

// asm_to_cpp: fn_8007DBF0
asm void fn_8007DBF0(u32 arg0) {
    nofralloc
    cmplwi r3, 0x3
    bgtlr
    lis r4, lbl_80390828@ha
    addi r5, r4, lbl_80390828@l
    slwi r0, r3, 2
    add r4, r5, r0
    lwz r6, 0x58(r4)
    li r4, 0x0
    slwi r0, r3, 1
    add r3, r5, r0
    sth r4, 0x50(r3)
    li r7, 0x0
    mr r3, r4
    b lbl_8007DC34
lbl_8007DC28:
    stwx r4, r6, r3
    addi r7, r7, 0x1
    addi r3, r3, 0x14
lbl_8007DC34:
    lwz r0, 0x4(r5)
    cmpw r7, r0
    blt lbl_8007DC28
    blr
}

// asm_to_cpp: fn_8007DC44
asm s32 fn_8007DC44(u32 arg0) {
    nofralloc
    cmplwi r3, 0x3
    bgt lbl_8007DC64
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    slwi r0, r3, 2
    add r3, r4, r0
    lwz r3, 0x58(r3)
    blr
lbl_8007DC64:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8007DC6C
asm s16 * fn_8007DC6C(u32 arg0) {
    nofralloc
    cmplwi r3, 0x3
    li r0, 0x0
    bgt lbl_8007DC8C
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    slwi r0, r3, 1
    add r3, r4, r0
    addi r0, r3, 0x50
lbl_8007DC8C:
    mr r3, r0
    blr
}

// asm_to_cpp: fn_8007DC94
asm void fn_8007DC94(u32 arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, f32 farg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    fmr f31, f1
    mr r26, r7
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    lwz r27, 0x4(r4)
    cmplwi r3, 0x3
    bgt lbl_8007DDA4
    bl fn_8007DC44
    mr r28, r3
    mr r3, r25
    bl fn_8007DC6C
    lha r7, 0x0(r3)
    cmpw r7, r27
    bge lbl_8007DD00
    mr r0, r27
    b lbl_8007DD48
lbl_8007DD00:
    li r0, -0x1
    lfs f1, lbl_8049F198
    li r6, 0x0
    li r4, 0x0
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_8007DD48
lbl_8007DD1C:
    add r5, r28, r4
    lfs f0, 0x4(r5)
    fcmpo cr0, f31, f0
    bge lbl_8007DD3C
    fcmpo cr0, f1, f0
    bge lbl_8007DD3C
    fmr f1, f0
    mr r0, r6
lbl_8007DD3C:
    addi r6, r6, 0x1
    addi r4, r4, 0x14
    bdnz lbl_8007DD1C
lbl_8007DD48:
    cmpwi r0, 0x0
    blt lbl_8007DDA4
    cmpw r0, r27
    bne lbl_8007DD68
    lha r4, 0x0(r3)
    addi r0, r4, 0x1
    sth r0, 0x0(r3)
    b lbl_8007DD6C
lbl_8007DD68:
    mr r7, r0
lbl_8007DD6C:
    cmpwi r26, 0x4
    bne lbl_8007DD84
    mulli r3, r7, 0x14
    li r0, 0x3
    stwx r0, r28, r3
    b lbl_8007DD90
lbl_8007DD84:
    mulli r3, r7, 0x14
    li r0, 0x1
    stwx r0, r28, r3
lbl_8007DD90:
    add r3, r28, r3
    stfs f31, 0x4(r3)
    stw r29, 0x8(r3)
    stw r30, 0xc(r3)
    stw r31, 0x10(r3)
lbl_8007DDA4:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8007DDC8
asm s32 fn_8007DDC8(s32 *arg0, s8 *arg1, s8 *arg2, s8 **arg3, f32 farg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    andi. r0, r0, 0x5
    cmplwi r0, 0x5
    beq lbl_8007DDF8
    lis r7, lbl_80390828@ha
    addi r8, r7, lbl_80390828@l
    lwz r7, 0x8(r8)
    addi r0, r7, 0x1
    stw r0, 0x8(r8)
lbl_8007DDF8:
    lwz r0, 0x0(r3)
    ori r0, r0, 0x5
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stfs f1, 0xc(r3)
    addi r3, r3, 0x10
    mr r4, r6
    bl fn_80019DAC
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007DE30
asm s32 fn_8007DE30(s32 *arg0) {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_8007DE58
    lis r4, lbl_80390828@ha
    addi r5, r4, lbl_80390828@l
    lwz r4, 0x10(r5)
    addi r0, r4, 0x1
    stw r0, 0x10(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0x100
    stw r0, 0x0(r3)
lbl_8007DE58:
    lis r3, lbl_80390828@ha
    addi r3, r3, lbl_80390828@l
    lwz r3, 0x10(r3)
    blr
}

// asm_to_cpp: fn_8007DE68
asm void fn_8007DE68(s32 *arg0, s8 **arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    li r30, 0x1
    addi r3, r1, 0x8
    lfs f1, 0x0(r4)
    lis r5, lbl_80390828@ha
    addi r31, r5, lbl_80390828@l
    lfs f2, 0x40(r31)
    lfs f3, 0x8(r4)
    bl fn_80018B0C
    addi r3, r1, 0x8
    addi r4, r31, 0x3c
    bl fn_8001D9AC
    fmr f31, f1
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_8007DED8
    lfs f0, 0x18(r31)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_8007DED8
    li r30, 0x0
lbl_8007DED8:
    cmpwi r29, 0x0
    beq lbl_8007DF48
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8007DF20
    lfs f0, 0x2c(r29)
    fcmpo cr0, f0, f1
    ble lbl_8007DF48
    addi r3, r29, 0x20
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    lfs f1, 0x3c(r4)
    lfs f2, 0x40(r4)
    lfs f3, 0x44(r4)
    fmr f4, f31
    bl fn_80020D20
    b lbl_8007DF48
lbl_8007DF20:
    ori r0, r3, 0x200
    stw r0, 0x0(r29)
    addi r3, r29, 0x20
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    lfs f1, 0x3c(r4)
    lfs f2, 0x40(r4)
    lfs f3, 0x44(r4)
    fmr f4, f31
    bl fn_80020D20
lbl_8007DF48:
    cmpwi r30, 0x0
    beq lbl_8007DF7C
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x20
    addi r4, r31, 0x3c
    bl fn_80019DAC
    lfs f0, 0x48(r31)
    stfs f0, 0x1c(r31)
    stfs f31, 0x18(r31)
    lwz r3, 0x14(r31)
    addi r0, r3, 0x1
    stw r0, 0x14(r31)
lbl_8007DF7C:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8007DFA0
asm s32 fn_8007DFA0(s32 *arg0, s8 **arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_8007E008
    lis r6, lbl_80390828@ha
    addi r7, r6, lbl_80390828@l
    lwz r6, 0xc(r7)
    cmpwi r6, 0x0
    blt lbl_8007E018
    cmpwi r4, 0x0
    beq lbl_8007E018
    addi r0, r6, 0x1
    stw r0, 0xc(r7)
    cmpwi r5, 0x0
    beq lbl_8007DFF0
    lwz r0, 0x0(r3)
    ori r0, r0, 0x40
    stw r0, 0x0(r3)
    b lbl_8007DFFC
lbl_8007DFF0:
    lwz r0, 0x0(r3)
    ori r0, r0, 0x140
    stw r0, 0x0(r3)
lbl_8007DFFC:
    addi r3, r3, 0x20
    bl fn_80019DAC
    b lbl_8007E018
lbl_8007E008:
    li r0, -0x1
    lis r3, lbl_80390828@ha
    addi r3, r3, lbl_80390828@l
    stw r0, 0xc(r3)
lbl_8007E018:
    lis r3, lbl_80390828@ha
    addi r3, r3, lbl_80390828@l
    lwz r3, 0xc(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007E034
asm M2C_UNK fn_8007E034(s8 **arg0, f32 *arg1, f32 *arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r31, r5
    cmpwi r3, 0x0
    beq lbl_8007E068
    lis r4, lbl_80390828@ha
    addi r4, r4, lbl_80390828@l
    addi r4, r4, 0x3c
    bl fn_80019DAC
lbl_8007E068:
    cmpwi r30, 0x0
    beq lbl_8007E080
    lis r3, lbl_80390828@ha
    addi r3, r3, lbl_80390828@l
    lfs f0, 0x48(r3)
    stfs f0, 0x0(r30)
lbl_8007E080:
    cmpwi r31, 0x0
    beq lbl_8007E098
    lis r3, lbl_80390828@ha
    addi r3, r3, lbl_80390828@l
    lfs f0, 0x4c(r3)
    stfs f0, 0x0(r31)
lbl_8007E098:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007E0B0
asm void fn_8007E0B0(s8 **arg0, s8 *arg1, s8 *arg2, s8 *arg3) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    cmpwi r5, 0x0
    beqlr
    cmpwi r6, 0x0
    bne lbl_8007E0D4
    blr
lbl_8007E0D4:
    lfs f0, 0x4(r5)
    lfs f3, 0x4(r4)
    fsubs f2, f0, f3
    lfs f0, 0x8(r6)
    lfs f1, 0x8(r4)
    fsubs f0, f0, f1
    fmuls f2, f2, f0
    lfs f0, 0x8(r5)
    fsubs f1, f0, f1
    lfs f0, 0x4(r6)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    fsubs f0, f2, f0
    stfs f0, 0x0(r3)
    lfs f0, 0x8(r5)
    lfs f3, 0x8(r4)
    fsubs f2, f0, f3
    lfs f0, 0x0(r6)
    lfs f1, 0x0(r4)
    fsubs f0, f0, f1
    fmuls f2, f2, f0
    lfs f0, 0x0(r5)
    fsubs f1, f0, f1
    lfs f0, 0x8(r6)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    fsubs f0, f2, f0
    stfs f0, 0x4(r3)
    lfs f0, 0x0(r5)
    lfs f3, 0x0(r4)
    fsubs f2, f0, f3
    lfs f0, 0x4(r6)
    lfs f1, 0x4(r4)
    fsubs f0, f0, f1
    fmuls f2, f2, f0
    lfs f0, 0x4(r5)
    fsubs f1, f0, f1
    lfs f0, 0x0(r6)
    fsubs f0, f0, f3
    fmuls f0, f1, f0
    fsubs f0, f2, f0
    stfs f0, 0x8(r3)
    blr
}

// asm_to_cpp: fn_8007E180
asm void fn_8007E180(s8 **arg0, s32 arg1, s32 arg2, s8 **arg3, s8 **arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r6
    mr r31, r7
    addi r3, r1, 0x8
    bl fn_80018B00
    addi r3, r1, 0x8
    mr r4, r3
    mr r5, r30
    bl fn_80018B00
    cmpwi r31, 0x0
    beq lbl_8007E1E8
    addi r3, r1, 0x8
    mr r4, r3
    mr r5, r31
    bl fn_80018B00
    mr r3, r29
    addi r4, r1, 0x8
    la r5, lbl_8049F198
    lfs f1, 0x2c(r5)
    bl fn_80018B08
    b lbl_8007E1FC
lbl_8007E1E8:
    mr r3, r29
    addi r4, r1, 0x8
    la r5, lbl_8049F198
    lfs f1, 0x30(r5)
    bl fn_80018B08
lbl_8007E1FC:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8007E214
asm void fn_8007E214(s8 **arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_8007E2B4
    cmpwi r4, 0x0
    bne lbl_8007E244
    b lbl_8007E2B4
lbl_8007E244:
    bl fn_80173750
    lfs f1, lbl_8049F198
    lfs f0, 0x1c(r31)
    fcmpu cr0, f1, f0
    beq lbl_8007E268
    mr r3, r30
    li r4, 0x2
    lfs f1, 0x24(r31)
    bl fn_801739BC
lbl_8007E268:
    lfs f0, lbl_8049F198
    lfs f1, 0x20(r31)
    fcmpu cr0, f0, f1
    beq lbl_8007E284
    mr r3, r30
    li r4, 0x1
    bl fn_801739BC
lbl_8007E284:
    lfs f1, lbl_8049F198
    lfs f0, 0x24(r31)
    fcmpu cr0, f1, f0
    beq lbl_8007E2A4
    mr r3, r30
    li r4, 0x0
    lfs f1, 0x1c(r31)
    bl fn_801739BC
lbl_8007E2A4:
    mr r3, r30
    li r4, 0x3
    addi r5, r31, 0x4
    bl fn_801735E8
lbl_8007E2B4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8007E2CC
asm s32 fn_8007E2CC(s8 **arg0, s32 arg1, s8 **arg2, s8 **arg3, M2C_UNK *arg4) {
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
    bl _savegpr_28
    mr r28, r3
    mr r29, r5
    mr r30, r6
    mr r31, r7
    mr r3, r29
    bl fn_8001B8B4
    fmr f29, f1
    mr r3, r29
    mr r4, r28
    bl fn_8001B8B4
    fmr f30, f1
    cmpwi r30, 0x0
    beq lbl_8007E3A4
    mr r3, r29
    mr r4, r30
    bl fn_8001B8B4
    fmr f31, f1
    bl fn_80018BD4
    la r3, lbl_8049F198
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8007E35C
    li r3, 0x0
    b lbl_8007E3E8
lbl_8007E35C:
    fsubs f0, f29, f30
    fdivs f2, f0, f31
    lfs f0, 0x0(r30)
    fmuls f1, f2, f0
    lfs f0, 0x0(r28)
    fadds f0, f0, f1
    stfs f0, 0x0(r31)
    lfs f0, 0x4(r30)
    fmuls f1, f2, f0
    lfs f0, 0x4(r28)
    fadds f0, f0, f1
    stfs f0, 0x4(r31)
    lfs f0, 0x8(r30)
    fmuls f1, f2, f0
    lfs f0, 0x8(r28)
    fadds f0, f0, f1
    stfs f0, 0x8(r31)
    b lbl_8007E3E4
lbl_8007E3A4:
    fsubs f2, f29, f1
    lfs f0, 0x0(r29)
    fmuls f1, f2, f0
    lfs f0, 0x0(r28)
    fadds f0, f0, f1
    stfs f0, 0x0(r31)
    lfs f0, 0x4(r29)
    fmuls f1, f2, f0
    lfs f0, 0x4(r28)
    fadds f0, f0, f1
    stfs f0, 0x4(r31)
    lfs f0, 0x8(r29)
    fmuls f1, f2, f0
    lfs f0, 0x8(r28)
    fadds f0, f0, f1
    stfs f0, 0x8(r31)
lbl_8007E3E4:
    li r3, 0x1
lbl_8007E3E8:
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
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8007E424
asm s32 fn_8007E424(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x1
    addi r3, r1, 0x20
    mr r4, r26
    bl fn_8001B8B8
    addi r3, r1, 0x14
    mr r4, r27
    mr r5, r28
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r29
    bl fn_8001B8B4
    fmr f30, f1
    addi r3, r1, 0x14
    mr r4, r29
    bl fn_8001B8B4
    fmr f31, f1
    fmuls f1, f30, f1
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8007E4B4
    li r31, 0x0
lbl_8007E4B4:
    addi r3, r1, 0x8
    mr r4, r27
    mr r5, r26
    bl fn_8001B8B8
    fsubs f0, f30, f31
    fdivs f1, f30, f0
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_80018B08
    mr r3, r30
    addi r4, r1, 0x8
    mr r5, r26
    bl fn_80018B00
    mr r3, r31
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    li r0, 0x58
    opword 0x13C1000C
    lfd f30, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_8007E51C
asm s32 fn_8007E51C(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, f32 farg0) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    addi r11, r1, 0x60
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f31, f1
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    opword 0x4C401382
    mfcr r0
    extrwi r0, r0, 1, 2
    cntlzw r0, r0
    srwi r30, r0, 5
    addi r3, r1, 0x20
    mr r4, r28
    mr r5, r25
    bl fn_8001B8B8
    addi r3, r1, 0x14
    mr r4, r28
    mr r5, r26
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r28
    mr r5, r27
    bl fn_8001B8B8
    li r31, 0x0
    cmpwi r30, 0x0
    beq lbl_8007E660
    fmr f29, f31
    addi r3, r1, 0x20
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f31, f1
    ble lbl_8007E5F4
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    mr r4, r25
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    fmr f29, f30
    li r31, 0x2
lbl_8007E5F4:
    addi r3, r1, 0x14
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f29, f1
    ble lbl_8007E62C
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    mr r4, r26
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    fmr f29, f30
    li r31, 0x3
lbl_8007E62C:
    addi r3, r1, 0x8
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f29, f1
    ble lbl_8007E660
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    mr r4, r27
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    li r31, 0x4
lbl_8007E660:
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8001F9C8
    addi r3, r1, 0x2c
    mr r4, r29
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007E6C0
    cmpwi r30, 0x0
    bne lbl_8007E6BC
    li r3, -0x1
    b lbl_8007E89C
lbl_8007E6BC:
    li r30, 0x2
lbl_8007E6C0:
    cmpwi r30, 0x1
    bgt lbl_8007E748
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8001F9C8
    addi r3, r1, 0x2c
    mr r4, r29
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007E704
    cmpwi r30, 0x0
    bne lbl_8007E700
    li r3, -0x1
    b lbl_8007E89C
lbl_8007E700:
    li r30, 0x3
lbl_8007E704:
    cmpwi r30, 0x1
    bgt lbl_8007E748
    addi r3, r1, 0x2c
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x2c
    mr r4, r29
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007E748
    cmpwi r30, 0x0
    bne lbl_8007E744
    li r3, -0x1
    b lbl_8007E89C
lbl_8007E744:
    li r30, 0x4
lbl_8007E748:
    cmpwi r30, 0x1
    ble lbl_8007E898
    cmpwi r31, 0x0
    beq lbl_8007E760
    mr r3, r31
    b lbl_8007E89C
lbl_8007E760:
    cmpwi r30, 0x2
    beq lbl_8007E77C
    cmpwi r30, 0x3
    beq lbl_8007E798
    cmpwi r30, 0x4
    beq lbl_8007E7B4
    b lbl_8007E7CC
lbl_8007E77C:
    addi r3, r1, 0x8
    mr r4, r25
    bl fn_80019DAC
    addi r3, r1, 0x2c
    mr r4, r26
    bl fn_80019DAC
    b lbl_8007E7CC
lbl_8007E798:
    addi r3, r1, 0x8
    mr r4, r26
    bl fn_80019DAC
    addi r3, r1, 0x2c
    mr r4, r27
    bl fn_80019DAC
    b lbl_8007E7CC
lbl_8007E7B4:
    addi r3, r1, 0x8
    mr r4, r27
    bl fn_80019DAC
    addi r3, r1, 0x2c
    mr r4, r25
    bl fn_80019DAC
lbl_8007E7CC:
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    addi r5, r1, 0x2c
    bl fn_8001B8B8
    addi r3, r1, 0x14
    mr r4, r28
    addi r5, r1, 0x2c
    bl fn_8001B8B8
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_8001B8B4
    lfs f0, 0x28(r1)
    fmuls f3, f0, f0
    lfs f0, 0x20(r1)
    fmuls f2, f0, f0
    lfs f0, 0x24(r1)
    fmuls f0, f0, f0
    fadds f0, f2, f0
    fadds f2, f3, f0
    lfs f0, lbl_8049F198
    fcmpo cr0, f0, f1
    bgt lbl_8007E82C
    fcmpo cr0, f1, f2
    ble lbl_8007E834
lbl_8007E82C:
    li r3, -0x1
    b lbl_8007E89C
lbl_8007E834:
    fdivs f1, f1, f2
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_80018B08
    addi r3, r1, 0x2c
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018B00
    addi r3, r1, 0x2c
    mr r4, r28
    bl fn_8001D9AC
    fmr f30, f1
    fcmpo cr0, f31, f1
    bge lbl_8007E874
    li r3, -0x1
    b lbl_8007E89C
lbl_8007E874:
    lis r3, lbl_80390828@ha
    addi r31, r3, lbl_80390828@l
    addi r3, r31, 0x3c
    addi r4, r1, 0x2c
    bl fn_80019DAC
    stfs f31, 0x48(r31)
    stfs f30, 0x4c(r31)
    li r3, 0x1
    b lbl_8007E89C
lbl_8007E898:
    li r3, 0x0
lbl_8007E89C:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8007E8D8
asm s32 fn_8007E8D8(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, s8 **arg4, s8 **arg5, f32 farg0) {
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
    addi r11, r1, 0x70
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    fmr f31, f1
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    opword 0x4C401382
    mfcr r0
    extrwi r0, r0, 1, 2
    cntlzw r0, r0
    srwi r24, r0, 5
    addi r3, r1, 0x2c
    mr r4, r30
    mr r5, r26
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r30
    mr r5, r27
    bl fn_8001B8B8
    addi r3, r1, 0x14
    mr r4, r30
    mr r5, r28
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r30
    mr r5, r29
    bl fn_8001B8B8
    li r25, 0x0
    cmpwi r24, 0x0
    beq lbl_8007EA68
    fmr f29, f31
    addi r3, r1, 0x2c
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f31, f1
    ble lbl_8007E9C4
    lis r3, lbl_80390828@ha
    addi r25, r3, lbl_80390828@l
    addi r3, r25, 0x3c
    mr r4, r26
    bl fn_80019DAC
    stfs f31, 0x48(r25)
    stfs f30, 0x4c(r25)
    fmr f29, f30
    li r25, 0x2
lbl_8007E9C4:
    addi r3, r1, 0x20
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f29, f1
    ble lbl_8007E9FC
    lis r3, lbl_80390828@ha
    addi r25, r3, lbl_80390828@l
    addi r3, r25, 0x3c
    mr r4, r27
    bl fn_80019DAC
    stfs f31, 0x48(r25)
    stfs f30, 0x4c(r25)
    fmr f29, f30
    li r25, 0x3
lbl_8007E9FC:
    addi r3, r1, 0x14
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f29, f1
    ble lbl_8007EA34
    lis r3, lbl_80390828@ha
    addi r25, r3, lbl_80390828@l
    addi r3, r25, 0x3c
    mr r4, r28
    bl fn_80019DAC
    stfs f31, 0x48(r25)
    stfs f30, 0x4c(r25)
    fmr f29, f30
    li r25, 0x4
lbl_8007EA34:
    addi r3, r1, 0x8
    bl fn_8001B8BC
    fmr f30, f1
    fcmpo cr0, f29, f1
    ble lbl_8007EA68
    lis r3, lbl_80390828@ha
    addi r25, r3, lbl_80390828@l
    addi r3, r25, 0x3c
    mr r4, r29
    bl fn_80019DAC
    stfs f31, 0x48(r25)
    stfs f30, 0x4c(r25)
    li r25, 0x5
lbl_8007EA68:
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8001F9C8
    addi r3, r1, 0x38
    mr r4, r31
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007EAD4
    cmpwi r24, 0x0
    bne lbl_8007EAD0
    li r3, -0x1
    b lbl_8007ED18
lbl_8007EAD0:
    li r24, 0x2
lbl_8007EAD4:
    cmpwi r24, 0x1
    bgt lbl_8007EBA0
    addi r3, r1, 0x38
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8001F9C8
    addi r3, r1, 0x38
    mr r4, r31
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007EB18
    cmpwi r24, 0x0
    bne lbl_8007EB14
    li r3, -0x1
    b lbl_8007ED18
lbl_8007EB14:
    li r24, 0x3
lbl_8007EB18:
    cmpwi r24, 0x1
    bgt lbl_8007EBA0
    addi r3, r1, 0x38
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8001F9C8
    addi r3, r1, 0x38
    mr r4, r31
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007EB5C
    cmpwi r24, 0x0
    bne lbl_8007EB58
    li r3, -0x1
    b lbl_8007ED18
lbl_8007EB58:
    li r24, 0x4
lbl_8007EB5C:
    cmpwi r24, 0x1
    bgt lbl_8007EBA0
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    addi r5, r1, 0x2c
    bl fn_8001F9C8
    addi r3, r1, 0x38
    mr r4, r31
    bl fn_8001B8B4
    lfs f0, lbl_8049F198
    fcmpo cr0, f1, f0
    bge lbl_8007EBA0
    cmpwi r24, 0x0
    bne lbl_8007EB9C
    li r3, -0x1
    b lbl_8007ED18
lbl_8007EB9C:
    li r24, 0x5
lbl_8007EBA0:
    cmpwi r24, 0x1
    ble lbl_8007ED14
    cmpwi r25, 0x0
    beq lbl_8007EBB8
    mr r3, r25
    b lbl_8007ED18
lbl_8007EBB8:
    cmpwi r24, 0x2
    beq lbl_8007EBDC
    cmpwi r24, 0x3
    beq lbl_8007EBF8
    cmpwi r24, 0x4
    beq lbl_8007EC14
    cmpwi r24, 0x5
    beq lbl_8007EC30
    b lbl_8007EC48
lbl_8007EBDC:
    addi r3, r1, 0x14
    mr r4, r26
    bl fn_80019DAC
    addi r3, r1, 0x38
    mr r4, r27
    bl fn_80019DAC
    b lbl_8007EC48
lbl_8007EBF8:
    addi r3, r1, 0x14
    mr r4, r27
    bl fn_80019DAC
    addi r3, r1, 0x38
    mr r4, r28
    bl fn_80019DAC
    b lbl_8007EC48
lbl_8007EC14:
    addi r3, r1, 0x14
    mr r4, r28
    bl fn_80019DAC
    addi r3, r1, 0x38
    mr r4, r29
    bl fn_80019DAC
    b lbl_8007EC48
lbl_8007EC30:
    addi r3, r1, 0x14
    mr r4, r29
    bl fn_80019DAC
    addi r3, r1, 0x38
    mr r4, r26
    bl fn_80019DAC
lbl_8007EC48:
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    addi r5, r1, 0x38
    bl fn_8001B8B8
    addi r3, r1, 0x20
    mr r4, r30
    addi r5, r1, 0x38
    bl fn_8001B8B8
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_8001B8B4
    lfs f0, 0x34(r1)
    fmuls f3, f0, f0
    lfs f0, 0x2c(r1)
    fmuls f2, f0, f0
    lfs f0, 0x30(r1)
    fmuls f0, f0, f0
    fadds f0, f2, f0
    fadds f2, f3, f0
    lfs f0, lbl_8049F198
    fcmpo cr0, f0, f1
    bgt lbl_8007ECA8
    fcmpo cr0, f1, f2
    ble lbl_8007ECB0
lbl_8007ECA8:
    li r3, -0x1
    b lbl_8007ED18
lbl_8007ECB0:
    fdivs f1, f1, f2
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_80018B08
    addi r3, r1, 0x38
    mr r4, r3
    addi r5, r1, 0x2c
    bl fn_80018B00
    addi r3, r1, 0x38
    mr r4, r30
    bl fn_8001D9AC
    fmr f30, f1
    fcmpo cr0, f31, f1
    bge lbl_8007ECF0
    li r3, -0x1
    b lbl_8007ED18
lbl_8007ECF0:
    lis r3, lbl_80390828@ha
    addi r26, r3, lbl_80390828@l
    addi r3, r26, 0x3c
    addi r4, r1, 0x38
    bl fn_80019DAC
    stfs f31, 0x48(r26)
    stfs f30, 0x4c(r26)
    li r3, 0x1
    b lbl_8007ED18
lbl_8007ED14:
    li r3, 0x0
lbl_8007ED18:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    li r0, 0x78
    opword 0x13A1000C
    lfd f29, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_8007ED54
asm s32 fn_8007ED54(void) {
    nofralloc
    lis r3, lbl_80390828@ha
    addi r3, r3, lbl_80390828@l
    lwz r3, 0x4(r3)
    blr
}

f32 fn_8007ED64(void) {
    return lbl_8049C2E8;
}

void fn_8007ED6C(f32 farg0) {
    lbl_8049C2E8 = farg0;
}

// asm_to_cpp: fn_8007ED74
asm s32 fn_8007ED74(s8 *arg0, s8 **arg1, s8 **arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    lwz r0, 0x20(r3)
    rlwinm r3, r0, 0, 30, 30
    subic r0, r3, 0x1
    subfe r3, r0, r3
    addi r29, r3, 0x3
    li r30, 0x0
    li r31, 0x0
    b lbl_8007EDC8
lbl_8007EDB0:
    add r3, r28, r31
    mr r4, r27
    mr r5, r3
    bl fn_80018AF8
    addi r30, r30, 0x1
    addi r31, r31, 0xc
lbl_8007EDC8:
    cmpw r30, r29
    blt lbl_8007EDB0
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8007EDEC
asm s32 fn_8007EDEC(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3) {
    nofralloc
    lfs f11, 0x0(r5)
    lfs f10, 0x0(r3)
    fsubs f1, f11, f10
    lfs f9, 0x8(r6)
    lfs f8, 0x8(r3)
    fsubs f0, f9, f8
    fmuls f2, f1, f0
    lfs f7, 0x8(r5)
    fsubs f1, f7, f8
    lfs f6, 0x0(r6)
    fsubs f0, f6, f10
    fmuls f0, f1, f0
    fsubs f0, f2, f0
    lfs f5, lbl_8049F198
    fcmpo cr0, f0, f5
    bge lbl_8007EE34
    li r3, -0x1
    blr
lbl_8007EE34:
    lfs f4, 0x0(r4)
    fsubs f1, f4, f11
    fsubs f0, f9, f7
    fmuls f2, f1, f0
    lfs f3, 0x8(r4)
    fsubs f1, f3, f7
    fsubs f0, f6, f11
    fmuls f0, f1, f0
    fsubs f0, f2, f0
    fcmpo cr0, f0, f5
    bge lbl_8007EE68
    li r3, -0x1
    blr
lbl_8007EE68:
    fsubs f1, f10, f4
    fsubs f0, f9, f3
    fmuls f2, f1, f0
    fsubs f1, f8, f3
    fsubs f0, f6, f4
    fmuls f0, f1, f0
    fsubs f0, f2, f0
    fcmpo cr0, f0, f5
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
    blr
}

// asm_to_cpp: fn_8007EE98
asm s32 fn_8007EE98(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, f32 farg0) {
    nofralloc
    lfs f12, 0x0(r5)
    lfs f11, 0x0(r3)
    fsubs f2, f12, f11
    lfs f10, 0x4(r6)
    lfs f9, 0x4(r3)
    fsubs f0, f10, f9
    fmuls f3, f2, f0
    lfs f8, 0x4(r5)
    fsubs f2, f8, f9
    lfs f7, 0x0(r6)
    fsubs f0, f7, f11
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    lfs f6, lbl_8049F198
    fcmpo cr0, f0, f6
    bge lbl_8007EEE4
    li r3, -0x1
    blr
lbl_8007EEE4:
    lfs f5, 0x0(r4)
    fsubs f2, f5, f12
    fsubs f0, f10, f8
    fmuls f3, f2, f0
    lfs f4, 0x4(r4)
    fsubs f2, f4, f8
    fsubs f0, f7, f12
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    fcmpo cr0, f0, f6
    bge lbl_8007EF1C
    li r3, -0x1
    blr
lbl_8007EF1C:
    fsubs f2, f11, f5
    fsubs f0, f10, f4
    fmuls f3, f2, f0
    fsubs f2, f9, f4
    fsubs f0, f7, f5
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    fcmpo cr0, f0, f6
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
    blr
}

// asm_to_cpp: fn_8007EF50
asm s32 fn_8007EF50(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, f32 farg0) {
    nofralloc
    lfs f12, 0x0(r5)
    lfs f11, 0x0(r3)
    fsubs f2, f12, f11
    lfs f10, 0x8(r6)
    lfs f9, 0x8(r3)
    fsubs f0, f10, f9
    fmuls f3, f2, f0
    lfs f8, 0x8(r5)
    fsubs f2, f8, f9
    lfs f7, 0x0(r6)
    fsubs f0, f7, f11
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    lfs f6, lbl_8049F198
    fcmpo cr0, f0, f6
    bge lbl_8007EF9C
    li r3, -0x1
    blr
lbl_8007EF9C:
    lfs f5, 0x0(r4)
    fsubs f2, f5, f12
    fsubs f0, f10, f8
    fmuls f3, f2, f0
    lfs f4, 0x8(r4)
    fsubs f2, f4, f8
    fsubs f0, f7, f12
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    fcmpo cr0, f0, f6
    bge lbl_8007EFD4
    li r3, -0x1
    blr
lbl_8007EFD4:
    fsubs f2, f11, f5
    fsubs f0, f10, f4
    fmuls f3, f2, f0
    fsubs f2, f9, f4
    fsubs f0, f7, f5
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    fcmpo cr0, f0, f6
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
    blr
}

// asm_to_cpp: fn_8007F008
asm s32 fn_8007F008(s8 **arg0, s8 **arg1, s8 **arg2, s8 **arg3, f32 farg0) {
    nofralloc
    lfs f12, 0x8(r5)
    lfs f11, 0x8(r3)
    fsubs f2, f12, f11
    lfs f10, 0x4(r6)
    lfs f9, 0x4(r3)
    fsubs f0, f10, f9
    fmuls f3, f2, f0
    lfs f8, 0x4(r5)
    fsubs f2, f8, f9
    lfs f7, 0x8(r6)
    fsubs f0, f7, f11
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    lfs f6, lbl_8049F198
    fcmpo cr0, f0, f6
    bge lbl_8007F054
    li r3, -0x1
    blr
lbl_8007F054:
    lfs f5, 0x8(r4)
    fsubs f2, f5, f12
    fsubs f0, f10, f8
    fmuls f3, f2, f0
    lfs f4, 0x4(r4)
    fsubs f2, f4, f8
    fsubs f0, f7, f12
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    fcmpo cr0, f0, f6
    bge lbl_8007F08C
    li r3, -0x1
    blr
lbl_8007F08C:
    fsubs f2, f11, f5
    fsubs f0, f10, f4
    fmuls f3, f2, f0
    fsubs f2, f9, f4
    fsubs f0, f7, f5
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f0, f1
    fcmpo cr0, f0, f6
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
    blr
}

// asm_to_cpp: fn_8007F0C0
asm void fn_8007F0C0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D534
    cmpwi r0, 0x0
    bne lbl_8007F114
    li r0, 0x1
    stw r0, lbl_8049D534
    li r3, 0x1
    lis r4, 0x4
    li r5, 0x0
    li r6, 0x4004
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x844(r4)
    li r4, 0x20
    li r5, 0x92c
    bl fn_80171190
    stw r3, lbl_8049D530
    bl fn_80083990
lbl_8007F114:
    bl fn_8008299C
    lis r3, lbl_80390968@ha
    addi r3, r3, lbl_80390968@l
    li r4, 0x0
    li r5, 0x80
    bl memset
    li r0, 0x0
    stw r0, lbl_8049D53C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8007F144(void) {
    s32 temp_r30;

    if ((s32) lbl_8049D534 == 1) {
        lbl_8049D534 = 0;
        temp_r30 = (s32) (lbl_8049D530);
        if (temp_r30 != 0) {
            fn_80170E84((s32) (fn_8007F1C0()), (s8 *) ((s8 *) temp_r30));
            lbl_8049D530 = 0;
        }
        fn_800839C0();
        fn_80170560((s32) (fn_8007F1C0()));
    }
    if ((s32) lbl_8049D534 != 0) {
        lbl_8049D534 -= 1;
    }
}

// asm_to_cpp: fn_8007F1C0
asm s32 fn_8007F1C0(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x844(r3)
    blr
}

// asm_to_cpp: fn_8007F1D0
asm s8 * fn_8007F1D0(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    cmpwi r5, 0x0
    beq lbl_8007F1E4
    lwz r3, lbl_8049D538
    lwz r5, 0x8(r3)
    b lbl_8007F208
lbl_8007F1E4:
    lwz r5, 0x37c4(r3)
    b lbl_8007F208
lbl_8007F1EC:
    lwz r0, 0x28(r3)
    cmpw r0, r4
    bne lbl_8007F204
    stw r5, lbl_8049D538
    lwz r3, 0x0(r5)
    blr
lbl_8007F204:
    lwz r5, 0x8(r5)
lbl_8007F208:
    lwz r3, 0x0(r5)
    cmplwi r3, 0x1
    bne lbl_8007F1EC
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8007F21C
asm s32 fn_8007F21C(s8 *arg0, s32 arg1) {
    nofralloc
    li r6, 0x0
    lwz r5, 0x37c4(r3)
    b lbl_8007F23C
lbl_8007F228:
    lwz r0, 0x28(r3)
    cmpw r0, r4
    bne lbl_8007F238
    addi r6, r6, 0x1
lbl_8007F238:
    lwz r5, 0x8(r5)
lbl_8007F23C:
    lwz r3, 0x0(r5)
    cmplwi r3, 0x1
    bne lbl_8007F228
    mr r3, r6
    blr
}

} // extern "C"
