#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 jumptable_803498D8[];
extern u8 jumptable_80349954[];
extern u8 lbl_803497E0[];
extern u8 lbl_803499DC[];
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_803BE400[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049D4D0;
extern float lbl_8049D4D4;
extern float lbl_8049D4D8;
extern float lbl_8049D4DC;

s32 DVDGetDriveStatus(void);
void GXSetCopyClear(s8 *arg0, s32 arg1);
s32 OSGetTick(void);
M2C_UNK OSSetPowerCallback(s32 arg0);
M2C_UNK OSSetResetCallback(s32 arg0);
u8 SCGetLanguage(void);
void _restgpr_14();
void _savegpr_14();
void fn_80048EF0(s8 *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4);
void fn_800557CC();
void fn_800576D0(void);
void fn_800576F8(void);
void fn_8005772C(void);
void fn_80057780(void);
s32 * fn_80057794(void);
void fn_8005791C(s32 arg0, s32 arg1, s32 arg2, s8 arg3);
void fn_80057994(void);
void fn_8005AD48();
void fn_8005C7A4(s8 *arg0, s32 arg1);
void fn_8005D0DC(void);
void fn_8005D118(void);
void fn_8005D274(void);
void fn_80079334(void);
void fn_800793CC(void);
void fn_800795C4(void);
void fn_8007F0C0(void);
void fn_8007F144(void);
s32 fn_80086518(s32 arg0);
void fn_80086634(void);
void fn_800868BC(void);
s32 fn_8008AE14(void);
void fn_8008B160();
void fn_8008E6DC();
void fn_8008E70C(void);
void fn_800909D8(void);
void fn_80092FFC(void);
void fn_80094A4C(void);
void fn_80096268(void);
s32 fn_800962A8(void);
void fn_80099C8C(void);
void fn_8009A628(s32 arg0, s32 arg1);
void fn_8009A83C(void);
s32 fn_8009ADC8(s32 arg0, s32 arg1);
void fn_800A0C6C(void);
s32 fn_800A0F98(void);
s32 fn_800A14C8(void);
s32 fn_800A1584(void);
void fn_800A1BF4(void);
void fn_800A71CC(s8 *arg0, s32 arg1);
void fn_800A7354(void);
s32 fn_8010D378(void);
void fn_8010D404(void);
void fn_8010D458(void);
void fn_80121DAC(s32 arg0);
s32 fn_801230C8(s32 arg0, s32 arg1);
void fn_801234C0(void);
void fn_80123598(void);
s8 * fn_80153D90(s32 arg0, s32 arg1, s32 arg2);
void fn_80164500(s32 arg0);
void fn_80164604(s32 arg0);
s32 fn_80164750(s32 arg0);
void fn_80165C70(void);
s32 fn_80165D1C(s32 arg0);
void fn_80166470(u32 arg0);
M2C_UNK fn_80166A90(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80166B54(s32 arg0);
void fn_80167134(s32 arg0);
void fn_80167138(s32 arg0);
void fn_8016713C(void);
void fn_80167140(s32 arg0);
s32 fn_80167320(s32 arg0, s32 arg1);
void fn_801677BC(s32 arg0);
s32 fn_80167820(void);
void fn_80167E40(void);
s32 fn_80167F00(u8 *arg0, s32 arg1);
void fn_801681BC(void);
void fn_801687E4(s32 arg0);
void fn_80171428(s32 arg0);
void fn_80171454(s32 arg0);
void fn_801715A8(s32 arg0, s32 arg1, s32 arg2);
void fn_80171B8C(void);
void fn_80171C6C(void);
void fn_80171D64(void);
void fn_80171EBC(void);
void fn_80171EF8(s32 arg0);
void fn_80171F84(void);
void fn_801722B4(void);
void fn_801722B8(void);
void fn_801722D0(void);
void fn_801722E8(void);
void fn_8017252C(void);
void fn_8017403C(void);
void fn_80174108(void);
void fn_80174418(void);
void fn_80176674(void);
void fn_801766D4(void);
void fn_801767F8(s8 arg0);
void fn_80176908(void);
void fn_8017691C(void);
void fn_801769E0();
void fn_801770CC(void);
void fn_8017736C(void);
void fn_801773E0(s32 arg0);
void fn_8017743C(s32 arg0, s32 arg1);
void fn_80178248(void);
void fn_80179264(void);
void fn_80179880(void);
void fn_8017999C(void);
void fn_80179FD4(void);
s32 fn_8017A018(void);
void fn_8017B388(void);
f32 * fn_8017B3E4(s32 arg0);
s8 * fn_8017B5E4(s32 arg0);
void fn_8017B754(void);
void fn_8017B790(void);
void fn_8017C4E4(s32 arg0, s32 arg1);
void fn_801810B8(void);
void fn_80181EA8(void);
void fn_801866D0(s32 arg0);
void fn_80186734(void);
void fn_80188598(s8 *arg0);
void fn_801885CC(u32 arg0, u32 arg1);
void fn_8018B950(void);
void fn_8018C01C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8018CAF0(s32 arg0);
void fn_8018CBAC(void);
void fn_8018CBDC(void);
void fn_8018CC00();
void fn_8018CC1C(void);
void fn_8018D180(void);
void fn_8018D9B8(s32 arg0);
void fn_801910F8(void);
s32 fn_80321B4C(s8 *arg0);
void main(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

// asm_to_cpp: main
asm void main(void) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    stw r30, 0xb8(r1)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    li r4, 0x0
    li r5, 0x870
    bl memset
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    li r4, 0x0
    li r5, 0x7c
    bl memset
    bl OSGetTick
    lis r3, fn_801722B8@ha
    addi r3, r3, fn_801722B8@l
    bl OSSetPowerCallback
    lis r3, fn_801722D0@ha
    addi r3, r3, fn_801722D0@l
    bl OSSetResetCallback
    bl fn_80178248
    bl fn_80171EBC
    lis r3, 0x50
    bl fn_80171EF8
    bl fn_80171F84
    bl fn_801722B4
    bl fn_8018B950
    bl fn_80179264
    bl fn_8017403C
    bl fn_8017252C
    bl fn_801770CC
    li r3, 0x0
    bl fn_80164500
    bl fn_80165C70
    li r3, 0x3e8
    bl fn_801866D0
    bl fn_8017B388
    bl fn_8018D180
    li r3, 0x800
    bl fn_80121DAC
    bl fn_801910F8
    li r3, 0x0
    bl fn_80166470
    bl fn_80179880
    lis r3, 0x20
    bl fn_801687E4
    lis r30, lbl_803497E0@ha
    addi r3, r30, lbl_803497E0@l
    li r4, 0x8
    bl fn_80167F00
    bl fn_80167E40
    addi r30, r30, lbl_803497E0@l
    addi r3, r30, 0x1a
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r31, r3
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_800555C8
    cmpwi r0, 0x4
    beq lbl_800555D8
    cmpwi r0, 0x2
    beq lbl_800555E8
    cmpwi r0, 0x5
    beq lbl_800555F8
    addi r3, r30, 0x2e
    li r4, 0x0
    bl fn_800A71CC
    b lbl_80055604
lbl_800555C8:
    addi r3, r30, 0x42
    li r4, 0x0
    bl fn_800A71CC
    b lbl_80055604
lbl_800555D8:
    addi r3, r30, 0x56
    li r4, 0x0
    bl fn_800A71CC
    b lbl_80055604
lbl_800555E8:
    addi r3, r30, 0x6a
    li r4, 0x0
    bl fn_800A71CC
    b lbl_80055604
lbl_800555F8:
    addi r3, r30, 0x7e
    li r4, 0x0
    bl fn_800A71CC
lbl_80055604:
    mr r3, r31
    bl fn_80166B54
    bl fn_80099C8C
    bl fn_80096268
    bl fn_80057794
    bl fn_8005D0DC
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_80055660
    cmpwi r0, 0x4
    beq lbl_8005567C
    cmpwi r0, 0x2
    beq lbl_80055698
    cmpwi r0, 0x5
    beq lbl_800556B4
    addi r3, r1, 0x38
    lis r4, lbl_803497E0@ha
    addi r4, r4, lbl_803497E0@l
    addi r4, r4, 0x92
    opword 0x4CC63182
    bl sprintf
    b lbl_800556CC
lbl_80055660:
    addi r3, r1, 0x38
    lis r4, lbl_803497E0@ha
    addi r4, r4, lbl_803497E0@l
    addi r4, r4, 0xa5
    opword 0x4CC63182
    bl sprintf
    b lbl_800556CC
lbl_8005567C:
    addi r3, r1, 0x38
    lis r4, lbl_803497E0@ha
    addi r4, r4, lbl_803497E0@l
    addi r4, r4, 0xb8
    opword 0x4CC63182
    bl sprintf
    b lbl_800556CC
lbl_80055698:
    addi r3, r1, 0x38
    lis r4, lbl_803497E0@ha
    addi r4, r4, lbl_803497E0@l
    addi r4, r4, 0xcb
    opword 0x4CC63182
    bl sprintf
    b lbl_800556CC
lbl_800556B4:
    addi r3, r1, 0x38
    lis r4, lbl_803497E0@ha
    addi r4, r4, lbl_803497E0@l
    addi r4, r4, 0xde
    opword 0x4CC63182
    bl sprintf
lbl_800556CC:
    addi r3, r1, 0x38
    li r4, 0x1
    bl fn_80167F00
    bl fn_80167E40
    li r3, 0x0
    bl fn_801677BC
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    bl fn_80174108
    addi r30, r1, 0x8
    li r31, 0x4
lbl_80055700:
    addi r3, r1, 0x8
    bl fn_80321B4C
    li r5, 0x1
    li r3, 0x0
    mtctr r31
lbl_80055714:
    add r4, r30, r3
    lbz r4, 0xa(r4)
    addi r0, r4, 0x3
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_80055730
    li r5, 0x0
lbl_80055730:
    addi r3, r3, 0xc
    bdnz lbl_80055714
    cmpwi r5, 0x0
    beq lbl_80055700
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r0, 0x800(r31)
    ori r0, r0, 0x1
    stw r0, 0x800(r31)
    bl fn_8018CAF0
    li r0, 0x3
    stw r0, 0x14(r31)
    li r0, 0xd
    stw r0, 0x18(r31)
lbl_80055768:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x2
    beq lbl_80055778
    bl fn_80094A4C
lbl_80055778:
    lwz r3, 0x14(r31)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_800557B4
    cmpwi r3, 0x2
    beq lbl_800557AC
    cmpwi r3, 0x6
    beq lbl_800557B4
    cmpwi r3, 0x5
    beq lbl_800557BC
    cmpwi r3, 0x7
    beq lbl_800557C4
    b lbl_80055768
lbl_800557AC:
    bl fn_800557CC
    b lbl_80055768
lbl_800557B4:
    bl fn_800557CC
    b lbl_80055768
lbl_800557BC:
    bl fn_800557CC
    b lbl_80055768
lbl_800557C4:
    bl fn_800557CC
    b lbl_80055768
}

// asm_to_cpp: fn_800557CC
asm void fn_800557CC() {
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1e0
    bl _savegpr_14
    lis r3, lbl_803BE400@ha
    addi r22, r3, lbl_803BE400@l
    li r14, -0x49
    lis r3, lbl_803C1A40@ha
    addi r27, r3, lbl_803C1A40@l
    lis r3, lbl_803C22B0@ha
    addi r28, r3, lbl_803C22B0@l
    lis r3, lbl_80390580@ha
    addi r29, r3, lbl_80390580@l
    lis r31, 0x100
    lis r24, lbl_803499DC@ha
    addi r25, r24, lbl_803499DC@l
    lis r3, lbl_80395728@ha
    addi r23, r3, lbl_80395728@l
    li r26, 0x0
    lis r21, jumptable_80349954@ha
lbl_80055820:
    lwz r20, 0x14(r27)
    lwz r19, 0x18(r27)
    stw r26, 0x1c(r27)
    li r3, 0x0
    bl fn_8017B3E4
    li r3, 0x0
    li r4, 0x0
    bl fn_8017C4E4
    bl fn_800909D8
    bl fn_801810B8
    bl fn_80079334
    bl fn_8010D458
    bl fn_8010D378
    bl fn_8007F0C0
    lis r3, 0x8
    li r4, 0x20
    bl fn_801230C8
    bl fn_8018CC1C
    li r3, 0x0
    bl fn_801767F8
    bl fn_8005D118
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80048EF0
    lwz r0, 0x10(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    subi r4, r31, 0x1
    bl GXSetCopyClear
    bl fn_80057780
    bl fn_80179FD4
    bl fn_80092FFC
    cmpwi r20, 0x2
    bne lbl_800558C0
    lwz r0, 0x4(r23)
    cmplwi r0, 0xf
    bne lbl_800558C4
lbl_800558C0:
    bl fn_80094A4C
lbl_800558C4:
    cmpwi r20, 0x4
    beq lbl_800558DC
    cmpwi r20, 0x2
    beq lbl_800558E4
    bl fn_801766D4
    b lbl_8005591C
lbl_800558DC:
    bl fn_80176674
    b lbl_8005591C
lbl_800558E4:
    lwz r3, 0x4(r23)
    subi r0, r3, 0xd
    cmplwi r0, 0x21
    bgt lbl_80055910
    addi r3, r21, jumptable_80349954@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x1
    bl fn_80171454
lbl_80055910:
    bl fn_80176674
    b lbl_8005591C
    bl fn_801766D4
lbl_8005591C:
    bl fn_8017691C
    li r3, 0x0
    li r0, 0x4
    mtctr r0
lbl_8005592C:
    lwzx r0, r22, r3
    and r0, r0, r14
    stwx r0, r22, r3
    addi r3, r3, 0x20
    bdnz lbl_8005592C
    cmpwi r20, 0x2
    beq lbl_80055974
    cmpwi r20, 0x5
    beq lbl_80055BEC
    cmpwi r20, 0x7
    beq lbl_80055C7C
    cmpwi r20, 0x3
    beq lbl_80055D38
    cmpwi r20, 0x4
    beq lbl_80055DA0
    cmpwi r20, 0x6
    beq lbl_80057010
    b lbl_80057014
lbl_80055974:
    li r3, 0x1
    bl fn_8017B5E4
    li r3, 0x1
    li r4, 0x0
    bl fn_8017C4E4
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    ble lbl_800559C4
    cmpwi r0, 0x6
    beq lbl_800559C4
    cmpwi r0, 0x3
    beq lbl_800559CC
    cmpwi r0, 0x4
    beq lbl_800559D4
    cmpwi r0, 0x2
    beq lbl_800559DC
    cmpwi r0, 0x5
    beq lbl_800559E4
    b lbl_800559E8
lbl_800559C4:
    li r17, 0x1
    b lbl_800559E8
lbl_800559CC:
    li r17, 0x2
    b lbl_800559E8
lbl_800559D4:
    li r17, 0x3
    b lbl_800559E8
lbl_800559DC:
    li r17, 0x4
    b lbl_800559E8
lbl_800559E4:
    li r17, 0x5
lbl_800559E8:
    cmpwi r17, 0x1
    bne lbl_80055A08
    addi r3, r1, 0x98
    li r4, 0xd
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
lbl_80055A08:
    cmpwi r17, 0x2
    bne lbl_80055A28
    addi r3, r1, 0x98
    li r4, 0xd
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
lbl_80055A28:
    cmpwi r17, 0x3
    bne lbl_80055A48
    addi r3, r1, 0x98
    li r4, 0xd
    li r5, 0x0
    li r6, 0x0
    li r7, 0x2
    bl fn_8008B160
lbl_80055A48:
    cmpwi r17, 0x4
    bne lbl_80055A68
    addi r3, r1, 0x98
    li r4, 0xd
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl fn_8008B160
lbl_80055A68:
    cmpwi r17, 0x5
    bne lbl_80055A88
    addi r3, r1, 0x98
    li r4, 0xd
    li r5, 0x0
    li r6, 0x0
    li r7, 0x4
    bl fn_8008B160
lbl_80055A88:
    addi r3, r1, 0x18
    addi r4, r24, lbl_803499DC@l
    addi r5, r1, 0x98
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x18
    li r4, 0x8
    bl fn_80167F00
    bl fn_800576F8
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r18, r3
    addi r3, r1, 0x98
    bl fn_80167134
    lwz r3, 0x4(r23)
    bl fn_8005AD48
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    ble lbl_80055B0C
    cmpwi r0, 0x6
    beq lbl_80055B0C
    cmpwi r0, 0x3
    beq lbl_80055B24
    cmpwi r0, 0x4
    beq lbl_80055B3C
    cmpwi r0, 0x2
    beq lbl_80055B54
    cmpwi r0, 0x5
    beq lbl_80055B6C
    b lbl_80055B80
lbl_80055B0C:
    addi r3, r1, 0x118
    addi r4, r25, 0x7
    opword 0x4CC63182
    bl sprintf
    li r17, 0x0
    b lbl_80055B80
lbl_80055B24:
    addi r3, r1, 0x118
    addi r4, r25, 0x13
    opword 0x4CC63182
    bl sprintf
    li r17, 0x2
    b lbl_80055B80
lbl_80055B3C:
    addi r3, r1, 0x118
    addi r4, r25, 0x23
    opword 0x4CC63182
    bl sprintf
    li r17, 0x3
    b lbl_80055B80
lbl_80055B54:
    addi r3, r1, 0x118
    addi r4, r25, 0x33
    opword 0x4CC63182
    bl sprintf
    li r17, 0x3
    b lbl_80055B80
lbl_80055B6C:
    addi r3, r1, 0x118
    addi r4, r25, 0x43
    opword 0x4CC63182
    bl sprintf
    li r17, 0x3
lbl_80055B80:
    addi r3, r25, 0x53
    bl fn_80167138
    addi r3, r25, 0x63
    bl fn_80167138
    addi r3, r25, 0x77
    bl fn_80167138
    addi r3, r25, 0x8b
    bl fn_80167138
    addi r3, r25, 0x9f
    bl fn_80167138
    addi r3, r1, 0x118
    li r4, 0x3
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    bl fn_8016713C
    mr r3, r16
    bl fn_801773E0
    lwz r3, 0xc(r29)
    li r4, -0x1
    bl fn_8005C7A4
    li r3, 0x0
    li r4, 0x2
    bl fn_8017C4E4
    bl fn_8008E70C
    bl fn_80176908
    b lbl_80057014
lbl_80055BEC:
    stw r26, 0x14(r23)
    addi r3, r1, 0x98
    li r4, 0x11
    mr r5, r19
    lwz r6, 0x4(r23)
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x18
    addi r4, r24, lbl_803499DC@l
    addi r5, r1, 0x98
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x18
    li r4, 0x2
    bl fn_80167F00
    bl fn_800576F8
    bl fn_801681BC
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r18, r3
    addi r3, r1, 0x98
    bl fn_80167134
    mr r3, r19
    lwz r4, 0x4(r23)
    bl fn_8009ADC8
    mr r16, r3
    bl fn_8016713C
    mr r3, r16
    bl fn_801773E0
    lwz r3, 0x14(r16)
    lwz r15, 0x38(r3)
    mr r3, r15
    bl fn_80164604
    b lbl_80057014
lbl_80055C7C:
    stw r26, 0x14(r23)
    bl fn_800A14C8
    li r3, 0x1
    bl fn_8017B5E4
    li r3, 0x1
    li r4, 0x0
    bl fn_8017C4E4
    addi r3, r1, 0x98
    li r4, 0x15
    mr r5, r19
    lwz r6, 0x4(r23)
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x18
    addi r4, r24, lbl_803499DC@l
    addi r5, r1, 0x98
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x18
    li r4, 0x2
    bl fn_80167F00
    bl fn_800576F8
    bl fn_801681BC
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r18, r3
    addi r3, r1, 0x98
    bl fn_80167134
    mr r3, r19
    lwz r4, 0x4(r23)
    bl fn_8009ADC8
    mr r16, r3
    bl fn_8016713C
    mr r3, r16
    bl fn_801773E0
    lwz r3, 0x14(r16)
    lwz r15, 0x38(r3)
    mr r3, r15
    bl fn_80164604
    li r3, 0x0
    li r4, 0x2
    bl fn_8017C4E4
    bl fn_8008E70C
    bl fn_80176908
    b lbl_80057014
lbl_80055D38:
    li r15, 0xf
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x1
    beq lbl_80055D70
    cmpwi r0, 0x3
    beq lbl_80055D78
    cmpwi r0, 0x4
    beq lbl_80055D80
    cmpwi r0, 0x2
    beq lbl_80055D88
    cmpwi r0, 0x5
    beq lbl_80055D90
    b lbl_80055D98
lbl_80055D70:
    li r17, 0x1
    b lbl_80055DCC
lbl_80055D78:
    li r17, 0x2
    b lbl_80055DCC
lbl_80055D80:
    li r17, 0x3
    b lbl_80055DCC
lbl_80055D88:
    li r17, 0x4
    b lbl_80055DCC
lbl_80055D90:
    li r17, 0x5
    b lbl_80055DCC
lbl_80055D98:
    li r17, 0x1
    b lbl_80055DCC
lbl_80055DA0:
    li r3, 0x1
    bl fn_8017B5E4
    li r3, 0x1
    li r4, 0x0
    bl fn_8017C4E4
    li r15, 0x10
    li r3, 0x1
    bl fn_80086518
    bl fn_8008E70C
    li r3, 0x1
    bl fn_801767F8
lbl_80055DCC:
    cmpwi r19, 0x0
    blt lbl_80055EEC
    cmpwi r19, 0x1f
    bge lbl_80055EEC
    cmpwi r17, 0x1
    bne lbl_80055DFC
    addi r3, r1, 0x98
    mr r4, r15
    mr r5, r19
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
lbl_80055DFC:
    cmpwi r17, 0x2
    bne lbl_80055E1C
    addi r3, r1, 0x98
    mr r4, r15
    mr r5, r19
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
lbl_80055E1C:
    cmpwi r17, 0x3
    bne lbl_80055E3C
    addi r3, r1, 0x98
    mr r4, r15
    mr r5, r19
    li r6, 0x0
    li r7, 0x2
    bl fn_8008B160
lbl_80055E3C:
    cmpwi r17, 0x4
    bne lbl_80055E5C
    addi r3, r1, 0x98
    mr r4, r15
    mr r5, r19
    li r6, 0x0
    li r7, 0x3
    bl fn_8008B160
lbl_80055E5C:
    cmpwi r17, 0x5
    bne lbl_80055E7C
    addi r3, r1, 0x98
    mr r4, r15
    mr r5, r19
    li r6, 0x0
    li r7, 0x4
    bl fn_8008B160
lbl_80055E7C:
    addi r3, r1, 0x18
    addi r4, r24, lbl_803499DC@l
    addi r5, r1, 0x98
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x18
    li r4, 0x2
    bl fn_80167F00
    cmpwi r20, 0x3
    beq lbl_80055EB0
    cmpwi r20, 0x4
    beq lbl_80055EC8
    b lbl_80055ECC
lbl_80055EB0:
    cmpwi r19, 0x0
    bne lbl_80055EC0
    bl fn_8005772C
    b lbl_80055ECC
lbl_80055EC0:
    bl fn_800576F8
    b lbl_80055ECC
lbl_80055EC8:
    bl fn_800576F8
lbl_80055ECC:
    bl fn_801681BC
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r18, r3
    addi r3, r1, 0x98
    bl fn_80167134
lbl_80055EEC:
    cmpwi r20, 0x3
    beq lbl_80055F00
    cmpwi r20, 0x4
    beq lbl_80056F90
    b lbl_80056FF0
lbl_80055F00:
    cmplwi r19, 0x1e
    bgt lbl_80056FF0
    lis r3, jumptable_803498D8@ha
    addi r3, r3, jumptable_803498D8@l
    slwi r0, r19, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r17, 0x1
    bne lbl_80055F40
    addi r3, r25, 0xb3
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80055F40:
    cmpwi r17, 0x2
    bne lbl_80055F60
    addi r3, r25, 0xc2
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80055F60:
    cmpwi r17, 0x3
    bne lbl_80055F80
    addi r3, r25, 0xd1
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80055F80:
    cmpwi r17, 0x4
    bne lbl_80055FA0
    addi r3, r25, 0xe0
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80055FA0:
    cmpwi r17, 0x5
    bne lbl_80055FC0
    addi r3, r25, 0xef
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80055FC0:
    addi r3, r25, 0xb3
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80055FF8
    addi r3, r25, 0xfe
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80055FF8:
    cmpwi r17, 0x2
    bne lbl_80056018
    addi r3, r25, 0x10f
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056018:
    cmpwi r17, 0x3
    bne lbl_80056038
    addi r3, r25, 0x120
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056038:
    cmpwi r17, 0x4
    bne lbl_80056058
    addi r3, r25, 0x131
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056058:
    cmpwi r17, 0x5
    bne lbl_80056078
    addi r3, r25, 0x142
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056078:
    addi r3, r25, 0xfe
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_800560B0
    addi r3, r25, 0x153
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800560B0:
    cmpwi r17, 0x2
    bne lbl_800560D0
    addi r3, r25, 0x164
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800560D0:
    cmpwi r17, 0x3
    bne lbl_800560F0
    addi r3, r25, 0x175
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800560F0:
    cmpwi r17, 0x4
    bne lbl_80056110
    addi r3, r25, 0x186
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056110:
    cmpwi r17, 0x5
    bne lbl_80056130
    addi r3, r25, 0x197
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056130:
    addi r3, r25, 0x153
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056168
    addi r3, r25, 0x1a8
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056168:
    cmpwi r17, 0x2
    bne lbl_80056188
    addi r3, r25, 0x1b9
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056188:
    cmpwi r17, 0x3
    bne lbl_800561A8
    addi r3, r25, 0x1ca
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800561A8:
    cmpwi r17, 0x4
    bne lbl_800561C8
    addi r3, r25, 0x1db
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800561C8:
    cmpwi r17, 0x5
    bne lbl_800561E8
    addi r3, r25, 0x1ec
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800561E8:
    addi r3, r25, 0x1a8
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056220
    addi r3, r25, 0x1fd
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056220:
    cmpwi r17, 0x2
    bne lbl_80056240
    addi r3, r25, 0x20e
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056240:
    cmpwi r17, 0x3
    bne lbl_80056260
    addi r3, r25, 0x21f
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056260:
    cmpwi r17, 0x4
    bne lbl_80056280
    addi r3, r25, 0x230
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056280:
    cmpwi r17, 0x5
    bne lbl_800562A0
    addi r3, r25, 0x241
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800562A0:
    addi r3, r25, 0x1fd
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_800562D8
    addi r3, r25, 0x252
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800562D8:
    cmpwi r17, 0x2
    bne lbl_800562F8
    addi r3, r25, 0x267
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800562F8:
    cmpwi r17, 0x3
    bne lbl_80056318
    addi r3, r25, 0x27c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056318:
    cmpwi r17, 0x4
    bne lbl_80056338
    addi r3, r25, 0x291
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056338:
    cmpwi r17, 0x5
    bne lbl_80056358
    addi r3, r25, 0x2a6
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056358:
    addi r3, r25, 0x252
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056390
    addi r3, r25, 0x2bb
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056390:
    cmpwi r17, 0x2
    bne lbl_800563B0
    addi r3, r25, 0x2d1
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800563B0:
    cmpwi r17, 0x3
    bne lbl_800563D0
    addi r3, r25, 0x2e7
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800563D0:
    cmpwi r17, 0x4
    bne lbl_800563F0
    addi r3, r25, 0x2fd
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800563F0:
    cmpwi r17, 0x5
    bne lbl_80056410
    addi r3, r25, 0x313
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056410:
    addi r3, r25, 0x2bb
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056448
    addi r3, r25, 0x329
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056448:
    cmpwi r17, 0x2
    bne lbl_80056468
    addi r3, r25, 0x342
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056468:
    cmpwi r17, 0x3
    bne lbl_80056488
    addi r3, r25, 0x35b
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056488:
    cmpwi r17, 0x4
    bne lbl_800564A8
    addi r3, r25, 0x374
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800564A8:
    cmpwi r17, 0x5
    bne lbl_800564C8
    addi r3, r25, 0x38d
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800564C8:
    addi r3, r25, 0x329
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0x3a6
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056518
    addi r3, r25, 0x3bc
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056518:
    cmpwi r17, 0x2
    bne lbl_80056538
    addi r3, r25, 0x3cd
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056538:
    cmpwi r17, 0x3
    bne lbl_80056558
    addi r3, r25, 0x3de
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056558:
    cmpwi r17, 0x4
    bne lbl_80056578
    addi r3, r25, 0x3ef
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056578:
    cmpwi r17, 0x5
    bne lbl_80056598
    addi r3, r25, 0x400
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056598:
    addi r3, r25, 0x3bc
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0x411
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0x41e
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0xb3
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_80056638
    cmpwi r0, 0x4
    beq lbl_80056650
    cmpwi r0, 0x2
    beq lbl_80056668
    cmpwi r0, 0x5
    beq lbl_80056680
    addi r3, r25, 0x42b
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056638:
    addi r3, r25, 0x43a
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056650:
    addi r3, r25, 0x44d
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056668:
    addi r3, r25, 0x460
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056680:
    addi r3, r25, 0x473
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_800566D8
    cmpwi r0, 0x4
    beq lbl_800566F0
    cmpwi r0, 0x2
    beq lbl_80056708
    cmpwi r0, 0x5
    beq lbl_80056720
    addi r3, r25, 0x486
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800566D8:
    addi r3, r25, 0x495
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800566F0:
    addi r3, r25, 0x4a8
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056708:
    addi r3, r25, 0x4bb
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056720:
    addi r3, r25, 0x4ce
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_80056778
    cmpwi r0, 0x4
    beq lbl_80056790
    cmpwi r0, 0x2
    beq lbl_800567A8
    cmpwi r0, 0x5
    beq lbl_800567C0
    addi r3, r25, 0x4e1
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_800567D4
lbl_80056778:
    addi r3, r25, 0x4f0
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_800567D4
lbl_80056790:
    addi r3, r25, 0x503
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_800567D4
lbl_800567A8:
    addi r3, r25, 0x516
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_800567D4
lbl_800567C0:
    addi r3, r25, 0x529
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
lbl_800567D4:
    lwz r3, lbl_8049D4D0
    lwz r4, lbl_8049D4D4
    lwz r5, lbl_8049D4DC
    lbz r6, lbl_8049D4D8
    bl fn_8005791C
    b lbl_80056FF0
    addi r3, r25, 0x53c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056824
    addi r3, r25, 0x54e
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056824:
    cmpwi r17, 0x2
    bne lbl_80056844
    addi r3, r25, 0x560
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056844:
    cmpwi r17, 0x3
    bne lbl_80056864
    addi r3, r25, 0x572
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056864:
    cmpwi r17, 0x4
    bne lbl_80056884
    addi r3, r25, 0x584
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056884:
    cmpwi r17, 0x5
    bne lbl_800568A4
    addi r3, r25, 0x596
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800568A4:
    addi r3, r25, 0x54e
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_800568FC
    cmpwi r0, 0x4
    beq lbl_80056914
    cmpwi r0, 0x2
    beq lbl_8005692C
    cmpwi r0, 0x5
    beq lbl_80056944
    addi r3, r25, 0x5a8
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056958
lbl_800568FC:
    addi r3, r25, 0x5b7
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056958
lbl_80056914:
    addi r3, r25, 0x5ca
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056958
lbl_8005692C:
    addi r3, r25, 0x5dd
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056958
lbl_80056944:
    addi r3, r25, 0x5f0
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
lbl_80056958:
    lwz r3, lbl_8049D4D0
    lwz r4, lbl_8049D4D4
    lwz r5, lbl_8049D4DC
    lbz r6, lbl_8049D4D8
    bl fn_8005791C
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056990
    addi r3, r25, 0x603
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056990:
    cmpwi r17, 0x2
    bne lbl_800569B0
    addi r3, r25, 0x618
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800569B0:
    cmpwi r17, 0x3
    bne lbl_800569D0
    addi r3, r25, 0x62d
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800569D0:
    cmpwi r17, 0x4
    bne lbl_800569F0
    addi r3, r25, 0x642
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_800569F0:
    cmpwi r17, 0x5
    bne lbl_80056A10
    addi r3, r25, 0x657
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056A10:
    addi r3, r25, 0x603
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0x66c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0x66c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0x66c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056A90
    addi r3, r25, 0x680
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056A90:
    cmpwi r17, 0x2
    bne lbl_80056AB0
    addi r3, r25, 0x694
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056AB0:
    cmpwi r17, 0x3
    bne lbl_80056AD0
    addi r3, r25, 0x6a8
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056AD0:
    cmpwi r17, 0x4
    bne lbl_80056AF0
    addi r3, r25, 0x6bc
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056AF0:
    cmpwi r17, 0x5
    bne lbl_80056B10
    addi r3, r25, 0x6d0
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056B10:
    addi r3, r25, 0x680
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    addi r3, r25, 0x66c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056B60
    addi r3, r25, 0x6e4
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056B60:
    cmpwi r17, 0x2
    bne lbl_80056B80
    addi r3, r25, 0x6fa
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056B80:
    cmpwi r17, 0x3
    bne lbl_80056BA0
    addi r3, r25, 0x710
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056BA0:
    cmpwi r17, 0x4
    bne lbl_80056BC0
    addi r3, r25, 0x726
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056BC0:
    cmpwi r17, 0x5
    bne lbl_80056BE0
    addi r3, r25, 0x73c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056BE0:
    addi r3, r25, 0x6e4
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056C18
    addi r3, r25, 0x752
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056C18:
    cmpwi r17, 0x2
    bne lbl_80056C38
    addi r3, r25, 0x767
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056C38:
    cmpwi r17, 0x3
    bne lbl_80056C58
    addi r3, r25, 0x77c
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056C58:
    cmpwi r17, 0x4
    bne lbl_80056C78
    addi r3, r25, 0x791
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056C78:
    cmpwi r17, 0x5
    bne lbl_80056C98
    addi r3, r25, 0x7a6
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056C98:
    addi r3, r25, 0x752
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056CD0
    addi r3, r25, 0x7bb
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056CD0:
    cmpwi r17, 0x2
    bne lbl_80056CF0
    addi r3, r25, 0x7d1
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056CF0:
    cmpwi r17, 0x3
    bne lbl_80056D10
    addi r3, r25, 0x7e7
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056D10:
    cmpwi r17, 0x4
    bne lbl_80056D30
    addi r3, r25, 0x7fd
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056D30:
    cmpwi r17, 0x5
    bne lbl_80056D50
    addi r3, r25, 0x813
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056D50:
    addi r3, r25, 0x7bb
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056D88
    addi r3, r25, 0x829
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056D88:
    cmpwi r17, 0x2
    bne lbl_80056DA8
    addi r3, r25, 0x83f
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056DA8:
    cmpwi r17, 0x3
    bne lbl_80056DC8
    addi r3, r25, 0x855
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056DC8:
    cmpwi r17, 0x4
    bne lbl_80056DE8
    addi r3, r25, 0x86b
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056DE8:
    cmpwi r17, 0x5
    bne lbl_80056E08
    addi r3, r25, 0x881
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056E08:
    addi r3, r25, 0x829
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056E40
    addi r3, r25, 0x897
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056E40:
    cmpwi r17, 0x2
    bne lbl_80056E60
    addi r3, r25, 0x8ad
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056E60:
    cmpwi r17, 0x3
    bne lbl_80056E80
    addi r3, r25, 0x8c3
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056E80:
    cmpwi r17, 0x4
    bne lbl_80056EA0
    addi r3, r25, 0x8d9
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056EA0:
    cmpwi r17, 0x5
    bne lbl_80056EC0
    addi r3, r25, 0x8ef
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056EC0:
    addi r3, r25, 0x897
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
    cmpwi r17, 0x1
    bne lbl_80056EF8
    addi r3, r25, 0x905
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056EF8:
    cmpwi r17, 0x2
    bne lbl_80056F18
    addi r3, r25, 0x91d
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056F18:
    cmpwi r17, 0x3
    bne lbl_80056F38
    addi r3, r25, 0x935
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056F38:
    cmpwi r17, 0x4
    bne lbl_80056F58
    addi r3, r25, 0x94d
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056F58:
    cmpwi r17, 0x5
    bne lbl_80056F78
    addi r3, r25, 0x965
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056F78:
    addi r3, r25, 0x905
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056F90:
    cmpwi r19, 0x0
    beq lbl_80056FAC
    cmpwi r19, 0x1
    beq lbl_80056FC4
    cmpwi r19, 0x2
    beq lbl_80056FDC
    b lbl_80056FF0
lbl_80056FAC:
    addi r3, r25, 0x97d
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056FC4:
    addi r3, r25, 0x995
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
    b lbl_80056FF0
lbl_80056FDC:
    addi r3, r25, 0x9ac
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r16, r3
lbl_80056FF0:
    bl fn_8016713C
    mr r3, r16
    bl fn_801773E0
    lwz r3, 0x14(r16)
    lwz r15, 0x38(r3)
    mr r3, r15
    bl fn_80164604
    b lbl_80057014
lbl_80057010:
    bl fn_8009A83C
lbl_80057014:
    li r3, 0x2
    bl fn_80171428
    b lbl_800571EC
lbl_80057020:
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    cmpwi r20, 0x6
    bne lbl_8005705C
    bl fn_80171B8C
    li r3, 0x10
    bl fn_8017743C
    li r3, 0x40
    bl fn_8017743C
    bl fn_8018CC00
    bl fn_800868BC
    b lbl_80057078
lbl_8005705C:
    bl fn_80171B8C
    li r3, 0x40
    bl fn_8017743C
    bl fn_8018CC00
    bl fn_800868BC
    li r3, 0x10
    bl fn_8017743C
lbl_80057078:
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    bl fn_80174418
    bl fn_801769E0
    bl fn_8008E6DC
    bl fn_800A7354
    bl fn_8017A018
    cmpwi r3, 0x0
    bne lbl_8005714C
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    bl fn_80123598
    bl fn_8017736C
    bl DVDGetDriveStatus
    bl fn_80165D1C
    bl fn_80167820
    subi r0, r20, 0x3
    cmplwi r0, 0x2
    ble lbl_800570E4
    cmpwi r20, 0x7
    bne lbl_800570FC
lbl_800570E4:
    mr r3, r15
    bl fn_80164750
    cmpwi r3, 0x0
    bne lbl_800570FC
    li r0, -0x1
    stw r0, 0x1c(r27)
lbl_800570FC:
    bl fn_8017B790
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80057124
    bl fn_8018CBAC
lbl_80057124:
    bl fn_8018CBDC
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    li r3, 0x0
    li r4, 0x0
    bl fn_801885CC
    b lbl_800571A0
lbl_8005714C:
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    bl fn_8018CBDC
lbl_800571A0:
    bl fn_8017999C
    bl OSGetTick
    mr r4, r3
    li r3, 0x0
    li r5, 0x0
    bl fn_801715A8
    lwz r0, 0x1c(r27)
    cmpwi r0, 0x0
    bge lbl_800571E0
    li r3, 0x0
    li r4, 0x0
    lwz r5, 0x54(r28)
    lhz r5, 0xe(r5)
    li r6, 0x1e0
    lwz r7, 0x3c(r29)
    bl fn_8018C01C
lbl_800571E0:
    bl fn_80171C6C
    bl fn_80171D64
    bl fn_801722E8
lbl_800571EC:
    lwz r0, 0x1c(r27)
    cmpwi r0, 0x0
    bge lbl_80057020
    li r3, 0x1
    bl fn_8017743C
    cmpwi r20, 0x7
    bne lbl_80057210
    bl fn_800A1BF4
    bl fn_800A1584
lbl_80057210:
    stw r26, 0x10(r29)
    li r3, 0x0
    bl fn_80171454
    bl OSGetTick
    mr r30, r3
    b lbl_8005725C
lbl_80057228:
    bl fn_80123598
    bl fn_8017736C
    bl fn_8018CBAC
    bl fn_8018CBDC
    li r3, 0x0
    li r4, 0x0
    lwz r5, 0x54(r28)
    lhz r5, 0xe(r5)
    li r6, 0x1e0
    lwz r7, 0x3c(r29)
    bl fn_8018C01C
    bl fn_80171C6C
    bl fn_80171D64
lbl_8005725C:
    bl OSGetTick
    subf r4, r30, r3
    lis r3, 0x8000
    lwz r0, 0xf8(r3)
    srwi r3, r0, 2
    li r0, 0x3e8
    divwu r0, r3, r0
    divwu r0, r4, r0
    cmplwi r0, 0x64
    blt lbl_80057228
    cmpwi r20, 0x7
    bne lbl_80057294
    bl fn_800A0F98
    bl fn_800A0C6C
lbl_80057294:
    bl fn_8017B754
    bl fn_8007F144
    bl fn_8010D404
    bl fn_801234C0
    bl fn_80181EA8
    bl fn_80186734
    bl fn_8005D274
    bl fn_80086634
    bl fn_800795C4
    bl fn_800793CC
    bl fn_800576D0
    li r3, 0x1
    bl fn_8018D9B8
    cmpwi r20, 0x2
    beq lbl_800572F4
    cmpwi r20, 0x3
    beq lbl_8005733C
    cmpwi r20, 0x4
    beq lbl_80057374
    cmpwi r20, 0x5
    beq lbl_800573AC
    cmpwi r20, 0x7
    beq lbl_800573D4
    b lbl_800573F8
lbl_800572F4:
    mr r3, r18
    bl fn_80166B54
    addi r3, r1, 0x98
    bl fn_80167140
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x2
    bne lbl_8005731C
    lwz r0, 0x20(r29)
    cmpwi r0, 0x0
    bne lbl_80057330
lbl_8005731C:
    subi r3, r31, 0x1
    li r4, 0x0
    bl fn_80167320
    li r3, 0x0
    bl fn_801677BC
lbl_80057330:
    li r3, 0x0
    bl fn_80188598
    b lbl_800573F8
lbl_8005733C:
    cmpwi r19, 0x0
    blt lbl_800573F8
    cmpwi r19, 0x1f
    bge lbl_800573F8
    addi r3, r1, 0x98
    bl fn_80167140
    mr r3, r18
    bl fn_80166B54
    subi r3, r31, 0x1
    li r4, 0x0
    bl fn_80167320
    li r3, 0x0
    bl fn_801677BC
    b lbl_800573F8
lbl_80057374:
    addi r3, r1, 0x98
    bl fn_80167140
    cmpwi r19, 0x0
    blt lbl_800573F8
    cmpwi r19, 0x1f
    bge lbl_800573F8
    mr r3, r18
    bl fn_80166B54
    subi r3, r31, 0x1
    li r4, 0x0
    bl fn_80167320
    li r3, 0x0
    bl fn_801677BC
    b lbl_800573F8
lbl_800573AC:
    addi r3, r1, 0x98
    bl fn_80167140
    mr r3, r18
    bl fn_80166B54
    subi r3, r31, 0x1
    li r4, 0x0
    bl fn_80167320
    li r3, 0x0
    bl fn_801677BC
    b lbl_800573F8
lbl_800573D4:
    addi r3, r1, 0x98
    bl fn_80167140
    mr r3, r18
    bl fn_80166B54
    subi r3, r31, 0x1
    li r4, 0x0
    bl fn_80167320
    li r3, 0x0
    bl fn_801677BC
lbl_800573F8:
    cmpwi r20, 0x3
    bne lbl_80057410
    cmpwi r19, 0xf
    beq lbl_80057530
    cmpwi r19, 0x12
    beq lbl_80057530
lbl_80057410:
    lwz r0, 0x4(r23)
    cmplwi r0, 0xf
    beq lbl_80057530
    lwz r0, 0xcb4(r23)
    cmpwi r0, 0x0
    beq lbl_80057530
    bl fn_800962A8
    cmpwi r3, 0x0
    beq lbl_80057530
    li r4, 0x0
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x3
    bne lbl_80057454
    lwz r0, 0x20(r29)
    cmpwi r0, 0x0
    bne lbl_80057454
    li r4, 0x1
lbl_80057454:
    cmpwi r20, 0x2
    bne lbl_80057474
    cmpwi r3, 0x3
    bne lbl_80057474
    lwz r0, 0x20(r29)
    cmpwi r0, 0x1
    bne lbl_80057474
    li r4, 0x1
lbl_80057474:
    cmpwi r20, 0x2
    bne lbl_80057494
    cmpwi r3, 0x3
    bne lbl_80057494
    lwz r0, 0x20(r29)
    cmpwi r0, 0x2
    bne lbl_80057494
    li r4, 0x1
lbl_80057494:
    cmpwi r20, 0x2
    bne lbl_800574B4
    cmpwi r3, 0x3
    bne lbl_800574B4
    lwz r0, 0x20(r29)
    cmpwi r0, 0x3
    bne lbl_800574B4
    li r4, 0x1
lbl_800574B4:
    cmpwi r20, 0x2
    bne lbl_800574D4
    cmpwi r3, 0x3
    bne lbl_800574D4
    lwz r0, 0x20(r29)
    cmpwi r0, 0x11
    bne lbl_800574D4
    li r4, 0x1
lbl_800574D4:
    cmpwi r20, 0x3
    bne lbl_800574FC
    cmpwi r19, 0x9
    bne lbl_800574FC
    cmpwi r3, 0x3
    bne lbl_800574FC
    lwz r0, 0x20(r29)
    cmpwi r0, 0x11
    bne lbl_800574FC
    li r4, 0x1
lbl_800574FC:
    cmpwi r4, 0x0
    beq lbl_80057668
    stw r3, lbl_8049D4D0
    lwz r0, 0x20(r29)
    stw r0, lbl_8049D4D4
    lbz r6, 0x38(r29)
    stb r6, lbl_8049D4D8
    lwz r5, 0x3c(r29)
    stw r5, lbl_8049D4DC
    li r3, 0x3
    li r4, 0xf
    bl fn_8005791C
    b lbl_80057668
lbl_80057530:
    cmpwi r20, 0x3
    bne lbl_80057548
    cmpwi r19, 0xf
    beq lbl_80057668
    cmpwi r19, 0x12
    beq lbl_80057668
lbl_80057548:
    lwz r3, 0x4(r23)
    subi r0, r3, 0x23
    cmplwi r0, 0x2
    ble lbl_80057564
    subi r0, r3, 0x2c
    cmplwi r0, 0x2
    bgt lbl_80057668
lbl_80057564:
    bl fn_800962A8
    cmpwi r3, 0x0
    beq lbl_80057668
    li r4, 0x0
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x3
    bne lbl_80057590
    lwz r0, 0x20(r29)
    cmpwi r0, 0x0
    bne lbl_80057590
    li r4, 0x1
lbl_80057590:
    cmpwi r20, 0x2
    bne lbl_800575B0
    cmpwi r3, 0x3
    bne lbl_800575B0
    lwz r0, 0x20(r29)
    cmpwi r0, 0x1
    bne lbl_800575B0
    li r4, 0x1
lbl_800575B0:
    cmpwi r20, 0x2
    bne lbl_800575D0
    cmpwi r3, 0x3
    bne lbl_800575D0
    lwz r0, 0x20(r29)
    cmpwi r0, 0x2
    bne lbl_800575D0
    li r4, 0x1
lbl_800575D0:
    cmpwi r20, 0x2
    bne lbl_800575F0
    cmpwi r3, 0x3
    bne lbl_800575F0
    lwz r0, 0x20(r29)
    cmpwi r0, 0x3
    bne lbl_800575F0
    li r4, 0x1
lbl_800575F0:
    cmpwi r20, 0x2
    bne lbl_80057610
    cmpwi r3, 0x3
    bne lbl_80057610
    lwz r0, 0x20(r29)
    cmpwi r0, 0x11
    bne lbl_80057610
    li r4, 0x1
lbl_80057610:
    cmpwi r20, 0x3
    bne lbl_80057638
    cmpwi r19, 0x9
    bne lbl_80057638
    cmpwi r3, 0x3
    bne lbl_80057638
    lwz r0, 0x20(r29)
    cmpwi r0, 0x11
    bne lbl_80057638
    li r4, 0x1
lbl_80057638:
    cmpwi r4, 0x0
    beq lbl_80057668
    stw r3, lbl_8049D4D0
    lwz r0, 0x20(r29)
    stw r0, lbl_8049D4D4
    lbz r6, 0x38(r29)
    stb r6, lbl_8049D4D8
    lwz r5, 0x3c(r29)
    stw r5, lbl_8049D4DC
    li r3, 0x3
    li r4, 0xf
    bl fn_8005791C
lbl_80057668:
    bl fn_80057994
    lbz r0, 0x38(r29)
    cmpwi r0, 0x0
    beq lbl_80055820
    li r3, 0x10
    li r4, 0x1
    bl fn_8009A628
    addi r3, r1, 0x10
    li r4, 0x40
    li r5, 0x40
    li r6, 0x40
    li r7, 0x0
    bl fn_80048EF0
    lwz r0, 0x10(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    lis r4, 0x100
    subi r4, r4, 0x1
    bl GXSetCopyClear
    bl fn_8017736C
    addi r11, r1, 0x1e0
    bl _restgpr_14
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

} // extern "C"
