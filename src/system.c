#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 jumptable_8034A8B4[];
extern u8 jumptable_8034A958[];
extern u8 jumptable_8034AA08[];
extern u8 jumptable_8034AAAC[];
extern u8 jumptable_8034AB74[];
extern u8 lbl_8034C350[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_803906E0[];
extern u8 lbl_80395728[];
extern u8 lbl_803BE400[];
extern u8 lbl_803C1A40[];
extern s8 *lbl_8049C300;
extern s32 lbl_8049D4E8;
extern u32 lbl_8049D4EC;
extern u32 lbl_8049D4F0;
extern s32 lbl_8049D4F4;
extern float lbl_8049D4F8;
extern float lbl_8049ED48;
extern float lbl_8049ED50;

void _restgpr_18();
void _restgpr_19();
void _restgpr_22();
void _restgpr_26();
void _restgpr_27();
void _restgpr_28();
void _restgpr_29();
void _savegpr_18();
void _savegpr_19();
void _savegpr_22();
void _savegpr_26();
void _savegpr_27();
void _savegpr_28();
void _savegpr_29();
void fn_80019D5C(s8 *arg0);
void fn_8005AD48();
void fn_8005BC40(s32 arg0, s32 arg1, s32 arg2);
void fn_8005BF60();
void fn_8005C470(void);
void fn_8005C47C();
void fn_8005C748(void);
void fn_8005C7A4(s8 *arg0, s32 arg1);
void fn_8005C808(s8 *arg0, s32 arg1);
s32 fn_8005C88C(s8 *arg0);
s32 fn_8005C894(s32 arg0);
s8 * fn_8005CA34(s32 arg0);
s32 fn_8005CC20(s8 *arg0, s32 arg1);
void fn_8005CE8C(s32 arg0, s32 arg1);
s32 fn_8005CEB0(void);
u32 fn_8005CEB8(void);
void fn_8005CEE8(u32 arg0);
s32 fn_8005CEFC(void);
s32 fn_8005CF00(s32 arg0, s32 arg1);
f32 fn_8005CF48(f32 farg0, f32 farg1);
s32 fn_8005CFCC(void);
s32 fn_8005D018(void);
s32 fn_8005D064(void);
void fn_8005D084(s32 arg0, s8 *arg1);
void fn_8005D0C8(void);
void fn_8005D0DC(void);
void fn_8005D118(void);
void fn_8005D274(void);
void fn_8005D320(void);
M2C_UNK fn_8005D364(s32 arg0, s32 arg1);
s8 * fn_8005D3E8(s8 *arg0);
void fn_8005D450(s32 arg0);
s32 fn_8005D5A0(void);
s8 * fn_8005D5B0(s32 arg0, s32 arg1);
s8 * fn_8005D6B4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8005D764(s8 *arg0);
void fn_8005E098(s8 *arg0);
s8 * fn_8005E2F4(s32 arg0);
void fn_800917D8(s32 arg0);
s32 fn_8009199C(s32 arg0);
void fn_800F55B8(s8 *arg0);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_801725D4(s32 arg0, s32 arg1);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80181D3C(s8 *arg0);
void fn_80182BB4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80186AAC(s8 *arg0);
void fn_80188598(s8 *arg0);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8005AD48
asm void fn_8005AD48() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_19
    mr r23, r3
    li r3, 0x0
    bl fn_80188598
    cmpwi r23, 0xf
    beq lbl_8005AEB8
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
    lwz r3, 0xfdc(r19)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0xfdc(r19)
    cmpwi r23, 0x3
    beq lbl_8005ADB4
    cmpwi r23, 0x9
    beq lbl_8005ADB4
    cmpwi r23, 0x6
    beq lbl_8005ADB4
    cmpwi r23, 0x29
    bne lbl_8005ADD8
lbl_8005ADB4:
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
    lwz r3, 0xfe0(r19)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0xfe0(r19)
lbl_8005ADD8:
    cmpwi r23, 0x4
    beq lbl_8005ADF8
    cmpwi r23, 0xa
    beq lbl_8005ADF8
    cmpwi r23, 0x7
    beq lbl_8005ADF8
    cmpwi r23, 0x2a
    bne lbl_8005AE1C
lbl_8005ADF8:
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
    lwz r3, 0xfe4(r19)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0xfe4(r19)
lbl_8005AE1C:
    cmpwi r23, 0x5
    beq lbl_8005AE3C
    cmpwi r23, 0xb
    beq lbl_8005AE3C
    cmpwi r23, 0x8
    beq lbl_8005AE3C
    cmpwi r23, 0x2b
    bne lbl_8005AE60
lbl_8005AE3C:
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
    lwz r3, 0xfe8(r19)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0xfe8(r19)
lbl_8005AE60:
    cmpwi r23, 0x9
    bne lbl_8005AE8C
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
    lwz r3, 0xfec(r19)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0xfec(r19)
lbl_8005AE8C:
    cmpwi r23, 0xa
    bne lbl_8005AEB8
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
    lwz r3, 0xff0(r19)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0xff0(r19)
lbl_8005AEB8:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc18(r3)
    cmpwi r0, 0x0
    bgt lbl_8005BC28
    lwz r5, 0x4(r3)
    subi r0, r5, 0x1f
    cmplwi r0, 0x1
    ble lbl_8005AF10
    cmplwi r5, 0xd
    beq lbl_8005AF10
    li r3, 0x0
    lis r4, lbl_803BE400@ha
    addi r4, r4, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_8005AEF8:
    lwzx r0, r4, r3
    rlwinm r0, r0, 0, 28, 26
    stwx r0, r4, r3
    addi r3, r3, 0x20
    bdnz lbl_8005AEF8
    b lbl_8005AF38
lbl_8005AF10:
    li r3, 0x0
    lis r4, lbl_803BE400@ha
    addi r4, r4, lbl_803BE400@l
    li r0, 0x4
    mtctr r0
lbl_8005AF24:
    lwzx r0, r4, r3
    ori r0, r0, 0x10
    stwx r0, r4, r3
    addi r3, r3, 0x20
    bdnz lbl_8005AF24
lbl_8005AF38:
    cmplwi r5, 0x12
    beq lbl_8005AF50
    li r0, 0x0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xbf0(r3)
lbl_8005AF50:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_8005AF88
    cmplwi r0, 0xe
    beq lbl_8005AF88
    cmplwi r0, 0x10
    beq lbl_8005AF80
    li r0, 0x0
    stw r0, 0x14(r3)
    b lbl_8005AF88
lbl_8005AF80:
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_8005AF88:
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r0, 0x4(r4)
    cmplwi r0, 0x28
    bgt lbl_8005B080
    lis r3, jumptable_8034AA08@ha
    addi r3, r3, jumptable_8034AA08@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0xcac(r4)
    cmpwi r0, 0x1
    beq lbl_8005AFDC
    cmpwi r0, 0x2
    beq lbl_8005AFE8
    cmpwi r0, 0x3
    beq lbl_8005AFF4
    li r0, 0x40
    stw r0, 0xbf0(r4)
    b lbl_8005B080
lbl_8005AFDC:
    li r0, 0x80
    stw r0, 0xbf0(r4)
    b lbl_8005B080
lbl_8005AFE8:
    li r0, 0xc0
    stw r0, 0xbf0(r4)
    b lbl_8005B080
lbl_8005AFF4:
    li r0, 0xff
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0xa0
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0x80
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0xc0
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0x80
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0xc0
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0xc0
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0xc0
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0x40
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0x40
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0xc0
    stw r0, 0xbf0(r4)
    b lbl_8005B080
    li r0, 0xff
    stw r0, 0xbf0(r4)
lbl_8005B080:
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
    lwz r0, 0x4(r19)
    cmplwi r0, 0x12
    beq lbl_8005B0AC
    lwz r3, 0xbf0(r19)
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0xbf0(r19)
lbl_8005B0AC:
    subi r0, r23, 0x6
    cmplwi r0, 0x2
    bgt lbl_8005B0E0
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r0, 0x28(r4)
    stw r0, 0x48(r1)
    li r3, 0x0
    stw r3, 0x4c(r1)
    lwz r0, 0x118(r4)
    stw r0, 0x50(r1)
    stw r3, 0x54(r1)
    b lbl_8005B104
lbl_8005B0E0:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x28(r3)
    stw r0, 0x48(r1)
    lwz r0, 0xa0(r3)
    stw r0, 0x4c(r1)
    li r0, 0x0
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
lbl_8005B104:
    subi r0, r23, 0x3
    cmplwi r0, 0x2b
    bgt lbl_8005B9D0
    lis r3, jumptable_8034A958@ha
    addi r3, r3, jumptable_8034A958@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80395728@ha
    addi r19, r3, lbl_80395728@l
lbl_8005B130:
    li r3, 0x1
    li r4, 0x33
    bl fn_801725D4
    stw r3, 0xa0(r19)
    bl fn_8005C470
    cmpwi r3, 0x0
    beq lbl_8005B130
    li r4, 0x0
    stw r4, 0xa4(r19)
    lwz r3, 0x48(r1)
    lwz r0, 0xa0(r19)
    cmpw r3, r0
    bne lbl_8005B180
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x2c(r3)
    cmpw r0, r4
    bne lbl_8005B180
    xori r0, r4, 0x1
    stw r0, 0xa4(r19)
lbl_8005B180:
    li r0, 0x64
    stw r0, 0xa8(r19)
    li r0, 0x0
    stw r0, 0x90(r19)
    li r0, 0x1
    stw r0, 0xac(r19)
    stw r0, 0xb0(r19)
    b lbl_8005BA30
    li r27, 0x0
    li r21, 0x0
    lis r3, lbl_80395728@ha
    addi r26, r3, lbl_80395728@l
    li r24, 0x0
    li r22, 0x64
    li r20, 0x1
    addi r19, r1, 0x48
lbl_8005B1C0:
    addi r0, r27, 0x2
    mulli r0, r0, 0x78
    add r25, r26, r0
lbl_8005B1CC:
    li r3, 0x1
    li r4, 0x33
    bl fn_801725D4
    stw r3, 0x28(r25)
    lwz r3, 0x28(r25)
    addi r4, r27, 0x2
    addi r5, r1, 0x48
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005B1CC
    stw r24, 0x2c(r25)
    stw r22, 0x30(r25)
    stw r24, 0x18(r25)
    stw r20, 0x34(r25)
    stw r20, 0x38(r25)
    lwz r0, 0x28(r25)
    add r3, r19, r21
    stw r0, 0x8(r3)
    addi r27, r27, 0x1
    addi r21, r21, 0x4
    cmpwi r27, 0x2
    blt lbl_8005B1C0
    b lbl_8005BA30
    bl fn_800917D8
    lis r3, lbl_80395728@ha
    addi r6, r3, lbl_80395728@l
    lwz r0, 0x10(r6)
    cmplwi r0, 0x56
    bne lbl_8005B2CC
    li r5, 0x1
    stw r5, 0x28(r6)
    li r4, 0x0
    stw r4, 0x2c(r6)
    li r3, 0x64
    stw r3, 0x30(r6)
    stw r4, 0x18(r6)
    stw r4, 0x34(r6)
    stw r4, 0x38(r6)
    stw r4, 0x3c(r6)
    li r0, 0x1d
    stw r0, 0xa0(r6)
    stw r4, 0xa4(r6)
    stw r3, 0xa8(r6)
    stw r4, 0x90(r6)
    stw r5, 0xac(r6)
    stw r5, 0xb0(r6)
    stw r4, 0xb4(r6)
    li r0, 0x3
    stw r0, 0x118(r6)
    stw r4, 0x11c(r6)
    stw r3, 0x120(r6)
    stw r4, 0x108(r6)
    stw r5, 0x124(r6)
    stw r4, 0x128(r6)
    stw r5, 0x12c(r6)
    stw r0, 0x190(r6)
    stw r4, 0x194(r6)
    stw r3, 0x198(r6)
    stw r4, 0x180(r6)
    stw r5, 0x19c(r6)
    stw r5, 0x1a0(r6)
    stw r5, 0x1a4(r6)
    stw r5, 0xc04(r6)
    b lbl_8005BA30
lbl_8005B2CC:
    li r5, 0x1
    stw r5, 0x28(r6)
    li r4, 0x0
    stw r4, 0x2c(r6)
    li r3, 0x64
    stw r3, 0x30(r6)
    stw r4, 0x18(r6)
    stw r4, 0x34(r6)
    stw r4, 0x38(r6)
    li r0, 0x1d
    stw r0, 0xa0(r6)
    stw r4, 0xa4(r6)
    stw r3, 0xa8(r6)
    stw r4, 0x90(r6)
    stw r5, 0xac(r6)
    stw r5, 0xb0(r6)
    stw r4, 0x118(r6)
    stw r4, 0x190(r6)
    stw r4, 0xc04(r6)
    b lbl_8005BA30
    bl fn_800917D8
    li r9, 0x0
    li r3, 0x0
    lis r4, lbl_80395728@ha
    addi r8, r4, lbl_80395728@l
    li r6, 0x0
    li r5, 0x64
    li r4, 0x1
    li r0, 0x4
    mtctr r0
lbl_8005B344:
    add r7, r8, r3
    stw r6, 0x28(r7)
    stw r6, 0x2c(r7)
    stw r5, 0x30(r7)
    stw r6, 0x18(r7)
    stw r4, 0x34(r7)
    stw r9, 0x38(r7)
    addi r9, r9, 0x1
    addi r3, r3, 0x78
    bdnz lbl_8005B344
    li r3, 0x0
    li r4, 0x3
    bl fn_801725D4
    mr r26, r3
    li r3, 0x0
    li r4, 0x3
    bl fn_801725D4
    mr r24, r3
    addi r0, r26, 0x2
    cmpwi r0, 0x4
    blt lbl_8005B3B4
    cmpwi r3, 0x1
    blt lbl_8005B3B4
    li r0, 0x1
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc04(r3)
    b lbl_8005B3C8
lbl_8005B3B4:
    li r24, 0x0
    li r0, 0x0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc04(r3)
lbl_8005B3C8:
    li r25, 0x0
    li r22, 0x0
    li r21, 0x0
    lis r3, lbl_80395728@ha
    addi r27, r3, lbl_80395728@l
    li r29, 0x0
    li r30, 0x64
    li r31, 0x1
    addi r19, r1, 0x48
    addi r20, r26, 0x2
    b lbl_8005B4B8
lbl_8005B3F4:
    add r28, r27, r22
lbl_8005B3F8:
    li r3, 0x1
    li r4, 0x33
    bl fn_801725D4
    stw r3, 0x28(r28)
    cmpwi r26, 0x1
    blt lbl_8005B430
    lwz r3, 0x28(r28)
    mr r4, r25
    addi r5, r1, 0x48
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005B3F8
    stw r29, 0x2c(r28)
    b lbl_8005B474
lbl_8005B430:
    lwz r3, 0x28(r28)
    bl fn_8005C470
    cmpwi r3, 0x0
    beq lbl_8005B3F8
    stw r29, 0x2c(r28)
    cmpwi r25, 0x0
    ble lbl_8005B474
    lwz r3, 0x28(r27)
    lwz r0, 0x28(r28)
    cmpw r3, r0
    bne lbl_8005B474
    lwz r3, 0x2c(r27)
    lwz r0, 0x2c(r28)
    cmpw r3, r0
    bne lbl_8005B474
    xori r0, r0, 0x1
    stw r0, 0x2c(r28)
lbl_8005B474:
    stw r30, 0x30(r28)
    stw r31, 0x18(r28)
    stw r31, 0x34(r28)
    cmpwi r24, 0x1
    blt lbl_8005B4A0
    srwi r3, r25, 31
    clrlwi r0, r25, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x38(r28)
    b lbl_8005B4A4
lbl_8005B4A0:
    stw r25, 0x38(r28)
lbl_8005B4A4:
    lwz r0, 0x28(r28)
    stwx r0, r19, r21
    addi r25, r25, 0x1
    addi r22, r22, 0x78
    addi r21, r21, 0x4
lbl_8005B4B8:
    cmpw r25, r20
    blt lbl_8005B3F4
    cmpwi r20, 0x4
    blt lbl_8005BA30
    cmpwi r24, 0x1
    blt lbl_8005BA30
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r9, 0x0
    li r3, 0x0
    lis r4, lbl_80395728@ha
    addi r8, r4, lbl_80395728@l
    addi r6, r1, 0x38
    li r0, 0x2
    mtctr r0
lbl_8005B4FC:
    add r4, r8, r3
    addi r0, r9, 0x2
    mulli r0, r0, 0x78
    add r7, r8, r0
    lwz r0, 0x28(r7)
    cmpwi r0, 0x0
    bne lbl_8005B520
    lwz r0, 0x28(r4)
    stw r0, 0x28(r7)
lbl_8005B520:
    lwz r0, 0x30(r4)
    stw r0, 0x30(r7)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r7)
    lwz r0, 0x34(r4)
    stw r0, 0x34(r7)
    stw r9, 0x38(r4)
    lwz r0, 0x38(r4)
    stw r0, 0x38(r7)
    lwz r0, 0x38(r4)
    slwi r0, r0, 2
    lwzx r0, r6, r0
    stw r0, 0x3c(r4)
    lwz r0, 0x38(r4)
    slwi r5, r0, 2
    lwzx r4, r6, r5
    addi r0, r4, 0x1
    stwx r0, r6, r5
    lwzx r0, r6, r5
    stw r0, 0x3c(r7)
    addi r9, r9, 0x1
    addi r3, r3, 0x78
    bdnz lbl_8005B4FC
    b lbl_8005BA30
    li r19, 0x0
    lis r3, lbl_80395728@ha
    addi r27, r3, lbl_80395728@l
    li r25, 0x2b
    li r24, 0x0
    li r22, 0x64
    li r21, 0x1
lbl_8005B59C:
    addi r0, r19, 0x1
    mulli r0, r0, 0x78
    add r26, r27, r0
    stw r25, 0x28(r26)
    lwz r3, 0x28(r26)
    bl fn_8005C470
    stw r24, 0x2c(r26)
    stw r22, 0x30(r26)
    stw r24, 0x18(r26)
    stw r21, 0x34(r26)
    stw r21, 0x38(r26)
    addi r19, r19, 0x1
    cmpwi r19, 0x9
    blt lbl_8005B59C
    b lbl_8005BA30
    li r26, 0x0
    li r24, 0x0
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    li r27, 0x0
    li r25, 0x64
    li r22, 0x1
    addi r21, r1, 0x48
lbl_8005B5F8:
    addi r0, r26, 0x2
    mulli r0, r0, 0x78
    add r28, r31, r0
lbl_8005B604:
    li r3, 0x1
    li r4, 0x33
    bl fn_801725D4
    stw r3, 0x28(r28)
    lwz r3, 0x28(r28)
    addi r4, r26, 0x2
    addi r5, r1, 0x48
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005B604
    stw r27, 0x2c(r28)
    lwz r3, 0x28(r28)
    lwz r0, 0x48(r1)
    cmpw r0, r3
    beq lbl_8005B64C
    lwz r0, 0x4c(r1)
    cmpw r0, r3
    bne lbl_8005B674
lbl_8005B64C:
    lwz r3, 0x2c(r28)
    lwz r0, 0x2c(r31)
    cmpw r0, r3
    beq lbl_8005B668
    lwz r0, 0xa4(r31)
    cmpw r0, r3
    bne lbl_8005B674
lbl_8005B668:
    lwz r0, 0x2c(r28)
    xori r0, r0, 0x1
    stw r0, 0x2c(r28)
lbl_8005B674:
    stw r25, 0x30(r28)
    stw r27, 0x18(r28)
    stw r22, 0x34(r28)
    stw r22, 0x38(r28)
    lwz r0, 0x28(r28)
    add r3, r21, r24
    stw r0, 0x8(r3)
    addi r26, r26, 0x1
    addi r24, r24, 0x4
    cmpwi r26, 0x2
    blt lbl_8005B5F8
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r3, 0x0
    addi r6, r1, 0x28
    lis r4, lbl_80395728@ha
    addi r7, r4, lbl_80395728@l
    li r0, 0x4
    mtctr r0
lbl_8005B6C8:
    add r4, r7, r3
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_8005B6FC
    lwz r0, 0x38(r4)
    slwi r0, r0, 2
    lwzx r0, r6, r0
    stw r0, 0x3c(r4)
    lwz r0, 0x38(r4)
    slwi r5, r0, 2
    lwzx r4, r6, r5
    addi r0, r4, 0x1
    stwx r0, r6, r5
lbl_8005B6FC:
    addi r3, r3, 0x78
    bdnz lbl_8005B6C8
    b lbl_8005BA30
    li r26, 0x0
    li r24, 0x0
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    li r27, 0x0
    li r25, 0x64
    li r22, 0x1
    addi r21, r1, 0x48
lbl_8005B728:
    addi r19, r24, 0x1
    mulli r0, r19, 0x78
    add r28, r31, r0
lbl_8005B734:
    li r3, 0x1
    li r4, 0x33
    bl fn_801725D4
    stw r3, 0x28(r28)
    lwz r3, 0x28(r28)
    mr r4, r19
    addi r5, r1, 0x48
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005B734
    stw r27, 0x2c(r28)
    lwz r3, 0x28(r28)
    lwz r0, 0x48(r1)
    cmpw r0, r3
    beq lbl_8005B77C
    lwz r0, 0x50(r1)
    cmpw r0, r3
    bne lbl_8005B7A4
lbl_8005B77C:
    lwz r3, 0x2c(r28)
    lwz r0, 0x2c(r31)
    cmpw r0, r3
    beq lbl_8005B798
    lwz r0, 0x11c(r31)
    cmpw r0, r3
    bne lbl_8005B7A4
lbl_8005B798:
    lwz r0, 0x2c(r28)
    xori r0, r0, 0x1
    stw r0, 0x2c(r28)
lbl_8005B7A4:
    stw r25, 0x30(r28)
    stw r27, 0x18(r28)
    stw r22, 0x34(r28)
    stw r22, 0x38(r28)
    lwz r4, 0x28(r28)
    slwi r0, r24, 2
    add r3, r21, r0
    stw r4, 0x4(r3)
    addi r26, r26, 0x1
    addi r24, r24, 0x2
    cmpwi r26, 0x2
    blt lbl_8005B728
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r3, 0x0
    addi r6, r1, 0x18
    lis r4, lbl_80395728@ha
    addi r7, r4, lbl_80395728@l
    li r0, 0x4
    mtctr r0
lbl_8005B7FC:
    add r4, r7, r3
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_8005B830
    lwz r0, 0x38(r4)
    slwi r0, r0, 2
    lwzx r0, r6, r0
    stw r0, 0x3c(r4)
    lwz r0, 0x38(r4)
    slwi r5, r0, 2
    lwzx r4, r6, r5
    addi r0, r4, 0x1
    stwx r0, r6, r5
lbl_8005B830:
    addi r3, r3, 0x78
    bdnz lbl_8005B7FC
    b lbl_8005BA30
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r0, 0x14(r31)
    cmplwi r0, 0x1
    bne lbl_8005B8A0
    li r19, 0x0
    li r25, 0x2b
    li r24, 0x0
    li r22, 0x64
    li r21, 0x1
lbl_8005B864:
    addi r0, r19, 0x1
    mulli r0, r0, 0x78
    add r26, r31, r0
    stw r25, 0x28(r26)
    lwz r3, 0x28(r26)
    bl fn_8005C470
    stw r24, 0x2c(r26)
    stw r22, 0x30(r26)
    stw r24, 0x18(r26)
    stw r21, 0x34(r26)
    stw r21, 0x38(r26)
    addi r19, r19, 0x1
    cmpwi r19, 0x9
    blt lbl_8005B864
    b lbl_8005BA30
lbl_8005B8A0:
    lwz r3, 0xc04(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8005BA30
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r3, 0x0
    addi r6, r1, 0x8
    li r0, 0x4
    mtctr r0
lbl_8005B8D0:
    add r4, r31, r3
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_8005B904
    lwz r0, 0x38(r4)
    slwi r0, r0, 2
    lwzx r0, r6, r0
    stw r0, 0x3c(r4)
    lwz r0, 0x38(r4)
    slwi r5, r0, 2
    lwzx r4, r6, r5
    addi r0, r4, 0x1
    stwx r0, r6, r5
lbl_8005B904:
    addi r3, r3, 0x78
    bdnz lbl_8005B8D0
    b lbl_8005BA30
    lis r3, lbl_80395728@ha
    addi r21, r3, lbl_80395728@l
lbl_8005B918:
    li r3, 0x1
    li r4, 0x33
    bl fn_801725D4
    stw r3, 0xa0(r21)
    bl fn_8005C470
    cmpwi r3, 0x0
    beq lbl_8005B918
    li r4, 0x0
    stw r4, 0xa4(r21)
    lwz r3, 0x48(r1)
    lwz r0, 0xa0(r21)
    cmpw r3, r0
    bne lbl_8005B968
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x2c(r3)
    cmpw r0, r4
    bne lbl_8005B968
    xori r0, r4, 0x1
    stw r0, 0xa4(r21)
lbl_8005B968:
    cmpwi r23, 0x19
    bne lbl_8005B97C
    li r0, 0x3c
    stw r0, 0xa8(r21)
    b lbl_8005B984
lbl_8005B97C:
    li r0, 0x64
    stw r0, 0xa8(r21)
lbl_8005B984:
    li r0, 0x0
    stw r0, 0x90(r21)
    li r0, 0x1
    stw r0, 0xac(r21)
    stw r0, 0xb0(r21)
    b lbl_8005BA30
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    li r0, 0x2b
    stw r0, 0xa0(r4)
    li r3, 0x0
    stw r3, 0xa4(r4)
    li r0, 0x2710
    stw r0, 0xa8(r4)
    stw r3, 0x90(r4)
    li r0, 0x1
    stw r0, 0xac(r4)
    stw r0, 0xb0(r4)
    b lbl_8005BA30
lbl_8005B9D0:
    lis r3, lbl_80395728@ha
    addi r27, r3, lbl_80395728@l
    lwz r0, 0x14(r27)
    cmplwi r0, 0x1
    bne lbl_8005BA30
    li r19, 0x0
    li r25, 0x2b
    li r24, 0x0
    li r22, 0x64
    li r21, 0x1
lbl_8005B9F8:
    addi r0, r19, 0x1
    mulli r0, r0, 0x78
    add r26, r27, r0
    stw r25, 0x28(r26)
    lwz r3, 0x28(r26)
    bl fn_8005C470
    stw r24, 0x2c(r26)
    stw r22, 0x30(r26)
    stw r24, 0x18(r26)
    stw r21, 0x34(r26)
    stw r21, 0x38(r26)
    addi r19, r19, 0x1
    cmpwi r19, 0x9
    blt lbl_8005B9F8
lbl_8005BA30:
    cmpwi r23, 0x16
    bge lbl_8005BA64
    cmpwi r23, 0xf
    beq lbl_8005BA84
    bge lbl_8005BA58
    cmpwi r23, 0xc
    bge lbl_8005BB34
    cmpwi r23, 0x3
    bge lbl_8005BA84
    b lbl_8005BB34
lbl_8005BA58:
    cmpwi r23, 0x11
    bge lbl_8005BB34
    b lbl_8005BABC
lbl_8005BA64:
    cmpwi r23, 0x29
    bge lbl_8005BA7C
    cmpwi r23, 0x1a
    beq lbl_8005BAD8
    bge lbl_8005BB34
    b lbl_8005BB00
lbl_8005BA7C:
    cmpwi r23, 0x2c
    bge lbl_8005BB34
lbl_8005BA84:
    li r3, 0x1
    li r4, 0x19
    bl fn_801725D4
    mr r21, r3
    addi r4, r1, 0x48
    bl fn_8005C47C
    cmpwi r3, 0x0
    beq lbl_8005BA84
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r21, 0xbe4(r3)
    li r0, 0x0
    stw r0, 0xbe8(r3)
    b lbl_8005BB34
lbl_8005BABC:
    li r0, 0x14
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xbe4(r3)
    li r0, 0x0
    stw r0, 0xbe8(r3)
    b lbl_8005BB34
lbl_8005BAD8:
    li r0, 0x14
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xbe4(r3)
    li r0, 0x0
    stw r0, 0xbe8(r3)
    lwz r0, 0xbd0(r3)
    ori r0, r0, 0xf
    stw r0, 0xbd0(r3)
    b lbl_8005BB34
lbl_8005BB00:
    li r3, 0x1
    li r4, 0x19
    bl fn_801725D4
    mr r21, r3
    addi r4, r1, 0x48
    bl fn_8005C47C
    cmpwi r3, 0x0
    beq lbl_8005BB00
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r21, 0xbe4(r3)
    li r0, 0x0
    stw r0, 0xbe8(r3)
lbl_8005BB34:
    subi r0, r23, 0x6
    cmplwi r0, 0x28
    bgt lbl_8005BB58
    lis r3, jumptable_8034A8B4@ha
    addi r3, r3, jumptable_8034A8B4@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
lbl_8005BB58:
    li r0, 0x0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc04(r3)
    b lbl_8005BC28
    li r0, 0x1
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc04(r3)
    b lbl_8005BC28
    li r0, 0x2
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc04(r3)
    b lbl_8005BC28
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0x10(r3)
    subi r0, r4, 0x58
    cmplwi r0, 0x1
    ble lbl_8005BBC0
    cmplwi r4, 0x56
    beq lbl_8005BBC0
    cmplwi r4, 0x57
    beq lbl_8005BBDC
    b lbl_8005BBF0
lbl_8005BBC0:
    li r0, 0x14
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xbe4(r3)
    li r0, 0x0
    stw r0, 0xbe8(r3)
    b lbl_8005BC28
lbl_8005BBDC:
    li r0, 0xb
    stw r0, 0xbe4(r3)
    li r0, 0x0
    stw r0, 0xbe8(r3)
    b lbl_8005BC28
lbl_8005BBF0:
    li r0, 0x18
    stw r0, 0xbe4(r3)
    li r0, 0x0
    stw r0, 0xbe8(r3)
    b lbl_8005BC28
    li r0, 0x0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc04(r3)
    b lbl_8005BC28
    li r0, 0x1
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xc04(r3)
lbl_8005BC28:
    addi r11, r1, 0x90
    bl _restgpr_19
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8005BC40
asm void fn_8005BC40(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_18
    mr r22, r4
    mr r23, r5
    lis r3, lbl_80395728@ha
    addi r27, r3, lbl_80395728@l
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x10
    bl memset
    lwz r3, 0x4(r27)
    subi r0, r3, 0x6
    cmplwi r0, 0x2
    ble lbl_8005BCDC
    li r21, 0x0
    li r19, 0x0
    addi r20, r1, 0x18
    addi r18, r1, 0x8
    b lbl_8005BCD0
lbl_8005BCA8:
    mr r3, r21
    bl fn_8005E2F4
    stwx r3, r20, r19
    lwzx r3, r20, r19
    cmpwi r3, 0x0
    beq lbl_8005BCC8
    lwz r0, 0x18(r3)
    stwx r0, r18, r19
lbl_8005BCC8:
    addi r21, r21, 0x1
    addi r19, r19, 0x4
lbl_8005BCD0:
    cmpw r21, r22
    blt lbl_8005BCA8
    b lbl_8005BD28
lbl_8005BCDC:
    li r24, 0x0
    li r19, 0x0
    addi r21, r1, 0x18
    addi r18, r1, 0x8
    b lbl_8005BD20
lbl_8005BCF0:
    slwi r20, r19, 2
    mr r3, r19
    bl fn_8005E2F4
    stwx r3, r21, r20
    lwzx r3, r21, r20
    cmpwi r3, 0x0
    beq lbl_8005BD18
    lwz r3, 0x18(r3)
    mr r0, r20
    stwx r3, r18, r0
lbl_8005BD18:
    addi r24, r24, 0x1
    addi r19, r19, 0x2
lbl_8005BD20:
    cmpw r24, r22
    blt lbl_8005BCF0
lbl_8005BD28:
    li r19, 0x0
    li r18, 0x1
lbl_8005BD30:
    cmpwi r23, 0x2
    blt lbl_8005BD54
    mr r3, r18
    li r4, 0x63
    addi r5, r1, 0x8
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005BD70
    b lbl_8005BD6C
lbl_8005BD54:
    mr r3, r18
    li r4, -0x1
    addi r5, r1, 0x8
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005BD70
lbl_8005BD6C:
    addi r19, r19, 0x1
lbl_8005BD70:
    addi r18, r18, 0x1
    cmpwi r18, 0x33
    blt lbl_8005BD30
    cmpw r19, r23
    bge lbl_8005BD94
    addi r3, r27, 0xc4c
    li r4, 0x0
    li r5, 0x33
    bl memset
lbl_8005BD94:
    li r24, 0x0
    li r20, 0x0
    li r19, 0x0
    slwi r0, r22, 2
    addi r26, r1, 0x8
    add r26, r26, r0
    addi r25, r1, 0x18
    lis r3, lbl_80395728@ha
    addi r29, r3, lbl_80395728@l
    li r30, 0x0
    li r31, 0x64
    addi r18, r1, 0x8
    li r21, 0x4
    b lbl_8005BED0
lbl_8005BDCC:
    li r3, 0x1
    li r4, 0x33
    bl fn_801725D4
    mr r28, r3
    cmpwi r23, 0x2
    blt lbl_8005BDFC
    li r4, 0x63
    addi r5, r1, 0x8
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005BDCC
    b lbl_8005BE10
lbl_8005BDFC:
    li r4, -0x1
    addi r5, r1, 0x8
    bl fn_8005BF60
    cmpwi r3, 0x0
    beq lbl_8005BDCC
lbl_8005BE10:
    lwz r3, 0x4(r29)
    subi r0, r3, 0x6
    cmplwi r0, 0x2
    bgt lbl_8005BE34
    addi r0, r19, 0x1
    mulli r0, r0, 0x78
    add r3, r29, r0
    addi r7, r3, 0x18
    b lbl_8005BE44
lbl_8005BE34:
    add r0, r22, r24
    mulli r0, r0, 0x78
    add r3, r29, r0
    addi r7, r3, 0x18
lbl_8005BE44:
    stw r28, 0x10(r7)
    stw r30, 0x14(r7)
    stw r31, 0x18(r7)
    li r3, 0x0
    lwz r4, 0x14(r7)
    lwz r5, 0x10(r7)
    mtctr r21
lbl_8005BE60:
    lwzx r6, r25, r3
    cmpwi r6, 0x0
    beq lbl_8005BE90
    lwz r0, 0x18(r6)
    cmplw r5, r0
    bne lbl_8005BE90
    lwz r0, 0x1c(r6)
    cmplw r4, r0
    bne lbl_8005BE90
    xori r0, r4, 0x1
    stw r0, 0x14(r7)
    b lbl_8005BE98
lbl_8005BE90:
    addi r3, r3, 0x4
    bdnz lbl_8005BE60
lbl_8005BE98:
    lwz r3, 0x4(r29)
    subi r0, r3, 0x6
    cmplwi r0, 0x2
    ble lbl_8005BEB4
    lwz r0, 0x10(r7)
    stwx r0, r26, r20
    b lbl_8005BEC4
lbl_8005BEB4:
    lwz r4, 0x10(r7)
    slwi r0, r19, 2
    add r3, r18, r0
    stw r4, 0x4(r3)
lbl_8005BEC4:
    addi r24, r24, 0x1
    addi r20, r20, 0x4
    addi r19, r19, 0x2
lbl_8005BED0:
    cmpw r24, r23
    blt lbl_8005BDCC
    li r19, 0x0
    li r18, 0x0
lbl_8005BEE0:
    mr r3, r18
    addi r4, r1, 0x8
    bl fn_8005C47C
    cmpwi r3, 0x0
    beq lbl_8005BEF8
    addi r19, r19, 0x1
lbl_8005BEF8:
    addi r18, r18, 0x1
    cmpwi r18, 0x19
    blt lbl_8005BEE0
    cmpwi r19, 0x0
    bgt lbl_8005BF1C
    addi r3, r27, 0xc7f
    li r4, 0x0
    li r5, 0x19
    bl memset
lbl_8005BF1C:
    li r3, 0x1
    li r4, 0x19
    bl fn_801725D4
    mr r19, r3
    addi r4, r1, 0x8
    bl fn_8005C47C
    cmpwi r3, 0x0
    beq lbl_8005BF1C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r19, 0xbe4(r3)
    addi r11, r1, 0x60
    bl _restgpr_18
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8005BF60
asm void fn_8005BF60() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    lis r6, lbl_80395728@ha
    addi r0, r6, lbl_80395728@l
    add r6, r0, r3
    lbz r0, 0xc4c(r6)
    cmpwi r0, 0x0
    beq lbl_8005BF94
    li r3, 0x0
    b lbl_8005C45C
lbl_8005BF94:
    lis r6, lbl_8034C350@ha
    addi r6, r6, lbl_8034C350@l
    lbzx r0, r6, r3
    cmpwi r0, 0x0
    bne lbl_8005BFB0
    li r3, 0x0
    b lbl_8005C45C
lbl_8005BFB0:
    cmpwi r4, 0x0
    blt lbl_8005BFF0
    li r7, 0x0
    li r6, 0x0
    li r0, 0x4
    mtctr r0
lbl_8005BFC8:
    cmpw r7, r4
    beq lbl_8005BFE4
    lwzx r0, r5, r6
    cmpw r3, r0
    bne lbl_8005BFE4
    li r3, 0x0
    b lbl_8005C45C
lbl_8005BFE4:
    addi r7, r7, 0x1
    addi r6, r6, 0x4
    bdnz lbl_8005BFC8
lbl_8005BFF0:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xcc
    bl memset
    cmplwi r31, 0x31
    bgt lbl_8005C458
    lis r3, jumptable_8034AAAC@ha
    addi r3, r3, jumptable_8034AAAC@l
    slwi r0, r31, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x37
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x38
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x39
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x3a
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x3b
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x3c
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x3d
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x3e
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x3f
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x40
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x41
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x42
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x43
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x44
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x45
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x46
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x47
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x48
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x49
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x4b
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x4c
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x4d
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x4e
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x4f
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x50
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x51
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x52
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x53
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x54
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x55
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x56
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x57
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x58
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x59
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x5a
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x5b
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x5c
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x5d
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x5e
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x5f
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x60
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x62
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x65
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x66
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
    li r3, 0x67
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C458
    li r3, 0x0
    b lbl_8005C45C
lbl_8005C458:
    li r3, 0x1
lbl_8005C45C:
    lwz r31, 0xdc(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_8005C470
asm void fn_8005C470(void) {
    nofralloc
    li r4, -0x1
    li r5, 0x0
    b fn_8005BF60
}

// asm_to_cpp: fn_8005C47C
asm void fn_8005C47C() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    lis r4, lbl_80395728@ha
    addi r0, r4, lbl_80395728@l
    add r4, r0, r3
    lbz r0, 0xc7f(r4)
    cmpwi r0, 0x0
    beq lbl_8005C4B0
    li r3, 0x0
    b lbl_8005C734
lbl_8005C4B0:
    cmpwi r3, 0x0
    bne lbl_8005C4C0
    li r3, 0x0
    b lbl_8005C734
lbl_8005C4C0:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xcc
    bl memset
    cmplwi r31, 0x18
    bgt lbl_8005C730
    lis r3, jumptable_8034AB74@ha
    addi r3, r3, jumptable_8034AB74@l
    slwi r0, r31, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x69
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x6a
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x6b
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x6c
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x6d
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x6e
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x6f
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x70
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x71
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x72
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x73
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x74
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x75
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x76
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x77
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x78
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x79
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x7a
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x7b
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x7c
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x7d
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x7e
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x7f
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
    li r3, 0x80
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8005C730
    li r3, 0x0
    b lbl_8005C734
lbl_8005C730:
    li r3, 0x1
lbl_8005C734:
    lwz r31, 0xdc(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_8005C748
asm void fn_8005C748(void) {
    nofralloc
    lis r3, lbl_80395728@ha
    addi r7, r3, lbl_80395728@l
    addi r8, r7, 0xc0c
    li r3, 0x0
    li r5, 0x1
    li r0, 0x4
    mtctr r0
lbl_8005C764:
    add r4, r7, r3
    lwz r6, 0x28(r4)
    cmpwi r6, 0x0
    beq lbl_8005C788
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    beq lbl_8005C788
    add r4, r8, r6
    stb r5, 0x40(r4)
lbl_8005C788:
    addi r3, r3, 0x78
    bdnz lbl_8005C764
    li r4, 0x1
    lwz r0, 0xbe4(r7)
    add r3, r8, r0
    stb r4, 0x73(r3)
    blr
}

// asm_to_cpp: fn_8005C7A4
asm void fn_8005C7A4(s8 *arg0, s32 arg1) {
    nofralloc
    cmpwi r4, 0x0
    bge lbl_8005C800
    li r5, 0x0
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x118(r4)
    cmpwi r0, 0x0
    beq lbl_8005C7C8
    li r5, 0x1
lbl_8005C7C8:
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x190(r4)
    cmpwi r0, 0x0
    beq lbl_8005C7E0
    li r5, 0x1
lbl_8005C7E0:
    cmpwi r5, 0x0
    beq lbl_8005C7F4
    li r0, 0x1
    stw r0, 0x4(r3)
    blr
lbl_8005C7F4:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_8005C800:
    stw r4, 0x4(r3)
    blr
}

// asm_to_cpp: fn_8005C808
asm void fn_8005C808(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    stw r4, 0x54(r3)
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_8005C834:
    lwzx r3, r30, r31
    lwz r29, 0xc(r3)
    b lbl_8005C85C
lbl_8005C840:
    lwz r3, 0x0(r29)
    lwz r3, 0x377c(r3)
    li r4, -0x1
    li r5, 0x0
    mr r6, r27
    bl fn_80182BB4
    lwz r29, 0xc(r29)
lbl_8005C85C:
    cmpwi r29, 0x0
    bne lbl_8005C840
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0x4
    blt lbl_8005C834
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8005C88C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x54));
}

// asm_to_cpp: fn_8005C894
asm s32 fn_8005C894(s32 arg0) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_19
    mr r25, r3
    li r26, 0x0
    li r22, 0x0
    li r29, 0x0
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r20, 0x0
    li r21, 0x0
    addi r19, r1, 0x18
lbl_8005C8D4:
    mr r3, r20
    bl fn_8005E2F4
    cmpwi r3, 0x0
    beq lbl_8005C8F0
    addi r29, r29, 0x1
    lwz r0, 0x18(r3)
    stwx r0, r19, r21
lbl_8005C8F0:
    addi r20, r20, 0x1
    addi r21, r21, 0x4
    cmpwi r20, 0x4
    blt lbl_8005C8D4
    li r27, 0x0
    li r21, 0x0
    addi r30, r1, 0x8
    li r19, 0x0
    addi r20, r1, 0x28
    li r23, 0x4
    li r24, 0x4
lbl_8005C91C:
    add r31, r25, r21
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8005C9F0
    li r28, 0x0
    li r3, 0x0
    mtctr r24
lbl_8005C938:
    add r4, r31, r3
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_8005C94C
    addi r28, r28, 0x1
lbl_8005C94C:
    addi r3, r3, 0x4
    bdnz lbl_8005C938
    cmpw r29, r28
    bne lbl_8005C9E4
    addi r3, r1, 0x8
    addi r4, r1, 0x18
    li r5, 0x10
    bl memcpy
    li r7, 0x0
    li r6, 0x0
    li r3, 0x0
lbl_8005C978:
    add r4, r31, r3
    lwz r5, 0x4(r4)
    cmpwi r5, 0x0
    beq lbl_8005C9B8
    li r4, 0x0
    mtctr r23
lbl_8005C990:
    lwzx r0, r30, r4
    cmpw r0, r5
    beq lbl_8005C9A4
    cmpwi r5, 0x0
    bge lbl_8005C9B0
lbl_8005C9A4:
    addi r7, r7, 0x1
    stwx r19, r30, r4
    b lbl_8005C9B8
lbl_8005C9B0:
    addi r4, r4, 0x4
    bdnz lbl_8005C990
lbl_8005C9B8:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    cmpwi r6, 0x4
    blt lbl_8005C978
    cmpw r7, r28
    bne lbl_8005C9E4
    cmpwi r26, 0xa
    bge lbl_8005C9E4
    stwx r27, r20, r22
    addi r26, r26, 0x1
    addi r22, r22, 0x4
lbl_8005C9E4:
    addi r27, r27, 0x1
    addi r21, r21, 0x14
    b lbl_8005C91C
lbl_8005C9F0:
    cmpwi r26, 0x0
    ble lbl_8005CA18
    lwz r3, lbl_8049D4E8
    divw r0, r3, r26
    mullw r0, r0, r26
    subf r0, r0, r3
    slwi r0, r0, 2
    addi r3, r1, 0x28
    lwzx r3, r3, r0
    b lbl_8005CA1C
lbl_8005CA18:
    li r3, -0x1
lbl_8005CA1C:
    addi r11, r1, 0x90
    bl _restgpr_19
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8005CA34
asm s8 * fn_8005CA34(s32 arg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r31, r3
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r27, 0x0
    li r30, 0x0
    addi r28, r1, 0x38
lbl_8005CA68:
    mr r3, r27
    bl fn_8005E2F4
    cmpwi r3, 0x0
    beq lbl_8005CA80
    lwz r0, 0x384c(r3)
    stwx r0, r28, r30
lbl_8005CA80:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005CA68
    addi r3, r1, 0x28
    li r4, -0x1
    li r5, 0x10
    bl memset
    li r27, 0x0
    li r30, 0x0
    addi r29, r1, 0x28
    addi r28, r1, 0x38
lbl_8005CAB0:
    lwzx r3, r28, r30
    cmpwi r3, 0x0
    beq lbl_8005CAC4
    bl fn_8005C894
    stwx r3, r29, r30
lbl_8005CAC4:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005CAB0
    addi r3, r1, 0x18
    li r4, -0x1
    li r5, 0x10
    bl memset
    li r3, 0x0
    addi r6, r1, 0x38
    addi r4, r1, 0x18
    addi r7, r1, 0x28
    li r0, 0x4
    mtctr r0
lbl_8005CAFC:
    lwzx r0, r7, r3
    cmpwi r0, 0x0
    blt lbl_8005CB18
    lwzx r5, r6, r3
    mulli r0, r0, 0x14
    lwzx r0, r5, r0
    stwx r0, r4, r3
lbl_8005CB18:
    addi r3, r3, 0x4
    bdnz lbl_8005CAFC
    addi r3, r1, 0x8
    li r4, -0x1
    li r5, 0x10
    bl memset
    li r29, 0x0
    li r4, 0x0
    addi r28, r1, 0x18
    addi r8, r1, 0x38
    li r11, 0x0
    li r9, 0x1
    addi r12, r1, 0x8
    lis r6, 0x2
    li r3, 0x4
    li r0, 0x4
lbl_8005CB58:
    li r27, 0x0
    li r5, 0x0
    mtctr r3
lbl_8005CB64:
    lwzx r7, r28, r5
    cmpw r29, r7
    bne lbl_8005CB90
    lwzx r7, r12, r4
    cmpwi r7, 0x0
    bge lbl_8005CB80
    stwx r11, r12, r4
lbl_8005CB80:
    lwzx r10, r12, r4
    slw r7, r9, r27
    or r7, r10, r7
    stwx r7, r12, r4
lbl_8005CB90:
    addi r27, r27, 0x1
    addi r5, r5, 0x4
    bdnz lbl_8005CB64
    lwzx r5, r12, r4
    cmpwi r5, 0x0
    bge lbl_8005CBEC
    li r10, 0x0
    li r5, 0x0
    mtctr r0
lbl_8005CBB4:
    lwzx r7, r8, r5
    cmpwi r7, 0x0
    beq lbl_8005CBE0
    lwzx r7, r28, r5
    cmpwi r7, 0x0
    bge lbl_8005CBE0
    slw r7, r9, r10
    stwx r7, r12, r4
    subi r7, r6, 0x7961
    stwx r7, r28, r5
    b lbl_8005CBEC
lbl_8005CBE0:
    addi r10, r10, 0x1
    addi r5, r5, 0x4
    bdnz lbl_8005CBB4
lbl_8005CBEC:
    addi r29, r29, 0x1
    addi r4, r4, 0x4
    cmpwi r29, 0x4
    blt lbl_8005CB58
    slwi r0, r31, 2
    addi r3, r1, 0x8
    lwzx r3, r3, r0
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8005CC20
asm s32 fn_8005CC20(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_22
    mr r27, r3
    mr r22, r4
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x118(r4)
    cmpwi r0, 0x1
    beq lbl_8005CC64
    cmpwi r0, 0x2
    beq lbl_8005CC64
    li r3, -0x1
    b lbl_8005CE74
lbl_8005CC64:
    cmpwi r3, 0x0
    beq lbl_8005CC78
    lwz r31, 0x3848(r3)
    cmpwi r31, 0x0
    bne lbl_8005CC80
lbl_8005CC78:
    li r3, -0x1
    b lbl_8005CE74
lbl_8005CC80:
    li r29, 0x0
    li r24, 0x0
    li r25, 0x0
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x10
    bl memset
    lwz r0, 0x10(r27)
    slwi r0, r0, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r6, 0xc(r3)
    cmpwi r22, 0x0
    beq lbl_8005CCC8
    cmpwi r22, 0x1
    beq lbl_8005CD44
    b lbl_8005CD90
lbl_8005CCC8:
    addi r3, r1, 0x18
    b lbl_8005CD38
lbl_8005CCD0:
    lwz r4, 0x0(r6)
    lwz r5, 0x0(r4)
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005CD2C
    rlwinm r0, r5, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8005CD10
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8005CD2C
    lwz r0, 0x18(r4)
    stwx r0, r3, r25
    addi r29, r29, 0x1
    addi r25, r25, 0x4
    b lbl_8005CD2C
lbl_8005CD10:
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005CD2C
    lwz r0, 0x18(r4)
    stwx r0, r3, r25
    addi r29, r29, 0x1
    addi r25, r25, 0x4
lbl_8005CD2C:
    cmpwi r29, 0x4
    bgt lbl_8005CD90
    lwz r6, 0xc(r6)
lbl_8005CD38:
    cmpwi r6, 0x0
    bne lbl_8005CCD0
    b lbl_8005CD90
lbl_8005CD44:
    li r3, 0x0
    addi r4, r1, 0x18
    lis r5, lbl_80395728@ha
    addi r7, r5, lbl_80395728@l
    li r0, 0x4
    mtctr r0
lbl_8005CD5C:
    add r6, r7, r3
    lwz r5, 0x38(r6)
    lwz r0, 0x10(r27)
    cmpw r5, r0
    bne lbl_8005CD88
    lwz r0, 0x28(r6)
    cmpwi r0, 0x0
    beq lbl_8005CD88
    stwx r0, r4, r24
    addi r29, r29, 0x1
    addi r24, r24, 0x4
lbl_8005CD88:
    addi r3, r3, 0x78
    bdnz lbl_8005CD5C
lbl_8005CD90:
    li r27, 0x0
    li r24, 0x0
    addi r30, r1, 0x8
    li r23, 0x0
    li r25, 0x4
    li r26, 0x4
lbl_8005CDA8:
    add r22, r31, r24
    lwz r0, 0x4(r22)
    cmpwi r0, 0x0
    beq lbl_8005CE70
    li r28, 0x0
    li r3, 0x0
    mtctr r26
lbl_8005CDC4:
    add r4, r22, r3
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_8005CDD8
    addi r28, r28, 0x1
lbl_8005CDD8:
    addi r3, r3, 0x4
    bdnz lbl_8005CDC4
    cmpw r29, r28
    bne lbl_8005CE64
    addi r3, r1, 0x8
    addi r4, r1, 0x18
    li r5, 0x10
    bl memcpy
    li r7, 0x0
    li r6, 0x0
    li r3, 0x0
lbl_8005CE04:
    add r4, r22, r3
    lwz r5, 0x4(r4)
    cmpwi r5, 0x0
    beq lbl_8005CE44
    li r4, 0x0
    mtctr r25
lbl_8005CE1C:
    lwzx r0, r30, r4
    cmpw r0, r5
    beq lbl_8005CE30
    cmpwi r5, 0x0
    bge lbl_8005CE3C
lbl_8005CE30:
    addi r7, r7, 0x1
    stwx r23, r30, r4
    b lbl_8005CE44
lbl_8005CE3C:
    addi r4, r4, 0x4
    bdnz lbl_8005CE1C
lbl_8005CE44:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    cmpwi r6, 0x4
    blt lbl_8005CE04
    cmpw r7, r28
    bne lbl_8005CE64
    mr r3, r27
    b lbl_8005CE74
lbl_8005CE64:
    addi r27, r27, 0x1
    addi r24, r24, 0x14
    b lbl_8005CDA8
lbl_8005CE70:
    li r3, -0x1
lbl_8005CE74:
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

void fn_8005CE8C(s32 arg0, s32 arg1) {
    lbl_8049D4E8 = fn_8005CF00((s32) (arg0), (s32) (arg1));
}

s32 fn_8005CEB0(void) {
    return (s32) (lbl_8049D4E8);
}

// asm_to_cpp: fn_8005CEB8
asm u32 fn_8005CEB8(void) {
    nofralloc
    lwz r3, lbl_8049D4F4
    addi r0, r3, 0x1
    stw r0, lbl_8049D4F4
    lwz r4, lbl_8049D4F0
    lis r3, 0x3
    addi r0, r3, 0x43fd
    mullw r3, r4, r0
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    stw r0, lbl_8049D4F0
    srwi r3, r0, 16
    blr
}

void fn_8005CEE8(u32 arg0) {
    lbl_8049D4EC = arg0;
    lbl_8049D4F0 = arg0;
    lbl_8049D4F4 = 0;
}

s32 fn_8005CEFC(void) {
    return (s32) (fn_8005CEB8());
}

// asm_to_cpp: fn_8005CF00
asm s32 fn_8005CF00(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8005CEB8
    subf r0, r30, r31
    mullw r0, r3, r0
    srwi r0, r0, 16
    add r3, r30, r0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8005CF48
asm f32 fn_8005CF48(f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    fmr f30, f1
    fmr f31, f2
    bl fn_8005CEB8
    lfd f1, lbl_8049ED48
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    fsubs f0, f31, f30
    fmuls f1, f1, f0
    la r3, lbl_8049ED50
    lfs f0, 0x3c(r3)
    fdivs f0, f1, f0
    fadds f1, f30, f0
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    li r0, 0x18
    opword 0x13C1000C
    lfd f30, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8005CFCC
asm s32 fn_8005CFCC(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x2
    beq lbl_8005CFE8
    li r3, 0x0
    blr
lbl_8005CFE8:
    lwz r3, lbl_8049C300
    lwz r3, 0x4(r3)
    subi r0, r3, 0x23
    cmplwi r0, 0x3
    ble lbl_8005D008
    subi r0, r3, 0x2c
    cmplwi r0, 0x2
    bgt lbl_8005D010
lbl_8005D008:
    li r3, 0x1
    blr
lbl_8005D010:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8005D018
asm s32 fn_8005D018(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x2
    beq lbl_8005D034
    li r3, 0x0
    blr
lbl_8005D034:
    lwz r3, lbl_8049C300
    lwz r3, 0x4(r3)
    subi r0, r3, 0x23
    cmplwi r0, 0x3
    ble lbl_8005D054
    subi r0, r3, 0x2c
    cmplwi r0, 0x2
    bgt lbl_8005D05C
lbl_8005D054:
    li r3, 0x1
    blr
lbl_8005D05C:
    li r3, 0x0
    blr
}

s32 fn_8005D064(void) {
    return (s32) ((u32) (M2C_FIELD(lbl_8049C300, s32 *, 4) - 0x26) <= 1U);
}

// asm_to_cpp: fn_8005D084
asm void fn_8005D084(s32 arg0, s8 *arg1) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r3, 0x0(r3)
    lfs f0, 0x84(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x88(r3)
    stfs f0, 0x4(r4)
    lwz r0, 0x28(r3)
    stw r0, 0x8(r4)
    lwz r0, 0x44(r3)
    stw r0, 0xc(r4)
    blr
}

void fn_8005D0C8(void) {
    lbl_8049D4EC = 0x6B682223;
    lbl_8049D4F0 = 0x6B682223;
}

// asm_to_cpp: fn_8005D0DC
asm void fn_8005D0DC(void) {
    nofralloc
    li r3, 0x0
    mr r5, r3
    lis r4, lbl_803906D0@ha
    addi r4, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8005D0F4:
    stwx r5, r4, r3
    addi r3, r3, 0x4
    bdnz lbl_8005D0F4
    li r0, -0x1
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x858(r3)
    stw r0, 0x854(r3)
    blr
}

// asm_to_cpp: fn_8005D118
asm void fn_8005D118(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r0, lbl_8049D4F8
    cmpwi r0, 0x0
    bne lbl_8005D25C
    li r0, 0x1
    stb r0, lbl_8049D4F8
    li r3, 0x1
    li r4, 0x120
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r27, r4, lbl_803C1A40@l
    stw r3, 0x858(r27)
    li r26, 0x0
    li r31, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
    mr r29, r31
    mr r30, r31
lbl_8005D178:
    lwz r3, 0x858(r27)
    li r4, 0x18
    li r5, 0x4
    bl fn_80170E2C
    stwx r3, r28, r31
    lwzx r3, r28, r31
    li r4, 0x0
    li r5, 0x18
    bl memset
    lwzx r3, r28, r31
    stw r29, 0xc(r3)
    lwzx r3, r28, r31
    stw r30, 0x10(r3)
    addi r26, r26, 0x1
    addi r31, r31, 0x4
    cmpwi r26, 0x4
    blt lbl_8005D178
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005D1EC
    cmpwi r0, 0x1
    bne lbl_8005D214
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_8005D214
lbl_8005D1EC:
    li r3, 0x1
    lis r4, 0x20
    addi r4, r4, 0x40
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x854(r4)
    b lbl_8005D238
lbl_8005D214:
    li r3, 0x1
    lis r4, 0x25
    addi r4, r4, 0x40
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r3, 0x854(r4)
lbl_8005D238:
    lis r3, lbl_803906E0@ha
    addi r3, r3, lbl_803906E0@l
    li r4, 0x0
    li r5, 0xc8
    bl memset
    li r0, 0x0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x864(r3)
lbl_8005D25C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005D274
asm void fn_8005D274(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r27, 0x0
    li r31, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
    lis r3, lbl_803C1A40@ha
    addi r29, r3, lbl_803C1A40@l
    mr r30, r31
lbl_8005D2A4:
    mr r3, r27
    bl fn_8005D450
    lwz r3, 0x858(r29)
    lwzx r4, r28, r31
    bl fn_80170E84
    stwx r30, r28, r31
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x4
    blt lbl_8005D2A4
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r3, 0x864(r31)
    cmpwi r3, 0x0
    beq lbl_8005D2EC
    bl fn_80170560
    li r0, 0x0
    stw r0, 0x864(r31)
lbl_8005D2EC:
    lis r3, lbl_803906E0@ha
    addi r3, r3, lbl_803906E0@l
    li r4, 0x0
    li r5, 0xc8
    bl memset
    li r0, 0x0
    stb r0, lbl_8049D4F8
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005D320
asm void fn_8005D320(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r3, 0x858(r31)
    bl fn_80170560
    li r0, -0x1
    stw r0, 0x858(r31)
    lwz r3, 0x854(r31)
    bl fn_80170560
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8005D364
asm M2C_UNK fn_8005D364(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r31, r3, r0
    b lbl_8005D394
lbl_8005D390:
    mr r31, r0
lbl_8005D394:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_8005D390
    mr r3, r30
    li r4, 0x18
    li r5, 0x4
    bl fn_80170E2C
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0xc(r3)
    stw r31, 0x10(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r30, 0x14(r3)
    stw r3, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8005D3E8
asm s8 * fn_8005D3E8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r30, 0x14(r3)
    lwz r31, 0x10(r3)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r31)
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_8005D420
    stw r31, 0x10(r4)
lbl_8005D420:
    lwz r3, 0x0(r3)
    bl fn_8005D764
    mr r3, r30
    mr r4, r29
    bl fn_80170E84
    lwz r3, 0xc(r31)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005D450
asm void fn_8005D450(s32 arg0) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_29
    mr r29, r3
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x64
    bl memset
    slwi r0, r29, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r3, 0xc(r3)
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r6, 0x14(r4)
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r7, 0x864(r4)
    addi r4, r1, 0x8
    b lbl_8005D544
lbl_8005D4AC:
    lwz r8, 0x0(r3)
    cmpwi r8, 0x0
    beq lbl_8005D540
    lwz r0, 0x0(r8)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005D540
    cmplwi r6, 0x1
    bne lbl_8005D500
    lwz r0, 0x18(r8)
    cmplwi r0, 0x2b
    bne lbl_8005D500
    cmpwi r7, 0x0
    beq lbl_8005D500
    lwz r5, 0x14(r3)
    cmplw r5, r7
    beq lbl_8005D540
    lwz r0, 0x4(r8)
    slwi r0, r0, 2
    stwx r5, r4, r0
    b lbl_8005D540
lbl_8005D500:
    lwz r0, 0x18(r8)
    cmplwi r0, 0x2b
    bne lbl_8005D530
    cmpwi r7, 0x0
    beq lbl_8005D530
    lwz r5, 0x14(r3)
    cmplw r5, r7
    beq lbl_8005D540
    lwz r0, 0x4(r8)
    slwi r0, r0, 2
    stwx r5, r4, r0
    b lbl_8005D540
lbl_8005D530:
    lwz r5, 0x14(r3)
    lwz r0, 0x4(r8)
    slwi r0, r0, 2
    stwx r5, r4, r0
lbl_8005D540:
    lwz r3, 0xc(r3)
lbl_8005D544:
    cmpwi r3, 0x0
    bne lbl_8005D4AC
    b lbl_8005D554
lbl_8005D550:
    bl fn_8005D3E8
lbl_8005D554:
    cmpwi r3, 0x0
    bne lbl_8005D550
    li r29, 0x0
    li r31, 0x0
    addi r30, r1, 0x8
lbl_8005D568:
    lwzx r3, r30, r31
    cmpwi r3, 0x0
    beq lbl_8005D578
    bl fn_80170560
lbl_8005D578:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x19
    blt lbl_8005D568
    addi r11, r1, 0x80
    bl _restgpr_29
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8005D5A0
asm s32 fn_8005D5A0(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x854(r3)
    blr
}

// asm_to_cpp: fn_8005D5B0
asm s8 * fn_8005D5B0(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005D5FC
    cmpwi r0, 0x1
    bne lbl_8005D620
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_8005D620
lbl_8005D5FC:
    cmpwi r4, 0x0
    bne lbl_8005D640
    li r3, 0x1
    lis r4, 0xc
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    mr r29, r3
    b lbl_8005D640
lbl_8005D620:
    cmpwi r4, 0x0
    bne lbl_8005D640
    li r3, 0x1
    lis r4, 0x2a
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    mr r29, r3
lbl_8005D640:
    mr r3, r28
    mr r4, r29
    bl fn_8005D364
    mr r31, r3
    mr r3, r29
    li r4, 0x3914
    li r5, 0x4
    bl fn_80170E2C
    mr r30, r3
    li r4, 0x0
    li r5, 0x3914
    bl memset
    stw r29, 0x3910(r30)
    slwi r0, r28, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r0, r3, r0
    stw r0, 0x390c(r30)
    stw r31, 0x3908(r30)
    stw r30, 0x0(r31)
    addi r3, r30, 0x37bc
    bl fn_80019D5C
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005D6B4
asm s8 * fn_8005D6B4(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    cmpwi r4, 0x0
    bne lbl_8005D6F0
    li r3, 0x1
    mr r4, r5
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    mr r29, r3
lbl_8005D6F0:
    mr r3, r28
    mr r4, r29
    bl fn_8005D364
    mr r31, r3
    mr r3, r29
    li r4, 0x3914
    li r5, 0x4
    bl fn_80170E2C
    mr r30, r3
    li r4, 0x0
    li r5, 0x3914
    bl memset
    stw r29, 0x3910(r30)
    slwi r0, r28, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r0, r3, r0
    stw r0, 0x390c(r30)
    stw r31, 0x3908(r30)
    stw r30, 0x0(r31)
    addi r3, r30, 0x37bc
    bl fn_80019D5C
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005D764
asm s32 fn_8005D764(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_8005D78C
    li r3, 0x0
    b lbl_8005D818
lbl_8005D78C:
    bl fn_8005E098
    li r29, 0x0
    li r31, 0x0
lbl_8005D798:
    add r30, r28, r31
    lwz r3, 0x1658(r30)
    bl fn_800F55B8
    lwz r3, 0x1658(r30)
    cmpwi r3, 0x0
    beq lbl_8005D7B4
    bl fn_80181D3C
lbl_8005D7B4:
    lwz r4, 0x1660(r30)
    cmpwi r4, 0x0
    beq lbl_8005D7C8
    lwz r3, 0x3910(r28)
    bl fn_80170E84
lbl_8005D7C8:
    addi r29, r29, 0x1
    addi r31, r31, 0x350
    cmpwi r29, 0xa
    blt lbl_8005D798
    lwz r3, 0x3790(r28)
    cmpwi r3, 0x0
    beq lbl_8005D7E8
    bl fn_80186AAC
lbl_8005D7E8:
    lwz r3, 0x3794(r28)
    cmpwi r3, 0x0
    beq lbl_8005D7F8
    bl fn_80186AAC
lbl_8005D7F8:
    lwz r3, 0x3798(r28)
    cmpwi r3, 0x0
    beq lbl_8005D808
    bl fn_80186AAC
lbl_8005D808:
    lwz r3, 0x3910(r28)
    mr r4, r28
    bl fn_80170E84
    li r3, 0x1
lbl_8005D818:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

} // extern "C"
