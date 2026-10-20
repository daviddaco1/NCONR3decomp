#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034ABD8[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_803906E0[];
extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern u8 lbl_8049D4F8;
extern float lbl_8049ED98;

s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_28();
s32 _savegpr_29();
M2C_UNK fn_800341DC(s32 *arg0);
s32 fn_80057FFC();
void fn_8005C808(s8 *arg0, s32 arg1);
s32 fn_8005C88C(s8 *arg0);
s8 * fn_8005D3E8(s8 *arg0);
s8 * fn_8005D5B0(s32 arg0, s32 arg1);
s8 * fn_8005D6B4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8005D830();
void fn_8005E04C(s8 *arg0);
void fn_8005E098(s8 *arg0);
s32 fn_8005E0BC(void);
M2C_UNK fn_8005E16C(s32 arg0);
s32 fn_8005E1B0(s32 arg0, s32 arg1);
s32 * fn_8005E1F4(s32 arg0, s32 arg1);
s8 * fn_8005E268(s32 arg0);
s8 * fn_8005E2CC(u32 arg0);
s8 * fn_8005E2F4(s32 arg0);
s8 * fn_8005E37C(s32 arg0);
s8 * fn_8005E41C(u32 arg0);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
s8 * fn_8005E520(s8 *arg0);
s8 * fn_8005E564(s8 *arg0, u32 arg1);
s32 fn_8005E5A4(s8 *arg0);
M2C_UNK fn_8005E5AC(void);
s8 * fn_8005E680(u32 arg0, s32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s8 * fn_8005E808(u32 arg0, s32 arg1);
s32 fn_8005E8BC(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8005E964(s32 arg0);
s32 fn_8005EAA8(s32 arg0);
s32 fn_8005EAF4(void);
s8 * fn_8005EBD4(s8 *arg0, s32 arg1);
s32 fn_8005EC54(s32 arg0, s32 arg1);
s32 * fn_8005ECCC(s32 arg0);
void fn_8005ED18(void);
void fn_8005ED1C(s8 *arg0, s32 arg1);
void fn_8005F208(s8 *arg0);
void fn_8005F2D8(s8 *arg0);
void fn_8005F398(s32 *arg0);
void fn_8005F8A4(s8 *arg0);
void fn_8005FA34(s8 *arg0);
void fn_8005FB40(s32 *arg0);
void fn_8005FBCC(s8 *arg0, u32 arg1, s32 arg2);
void fn_8005FC24(s8 *arg0);
void fn_8005FE70(s8 *arg0);
void fn_80060104(s8 *arg0);
void fn_800602FC(s8 *arg0, s8 *arg1);
void fn_80060320(s8 *arg0);
s32 fn_800609D8(s8 *arg0);
s32 fn_80060A74();
void fn_80060C24(s8 *arg0, s32 arg1);
void fn_80060DCC(s8 *arg0);
void fn_80060EDC(s8 *arg0);
void fn_8006137C(s8 *arg0);
void fn_80061434(s8 *arg0);
void fn_80061B60(s8 *arg0);
void fn_800674E4(s8 *arg0);
void fn_80067580(s8 *arg0);
void fn_8006760C(s8 *arg0);
void fn_800677D8(s8 *arg0);
void fn_80067960(s8 *arg0);
void fn_80067B60(s8 *arg0);
void fn_80067C94(s8 *arg0);
void fn_80067F84(s8 *arg0);
void fn_800680C8(s8 *arg0);
s32 fn_80069590();
void fn_80069840(s32 *arg0);
s32 fn_8006B078(s32 *arg0);
void fn_8006E26C(s32 *arg0);
void fn_8006ECB8(s8 *arg0, s32 arg1);
void fn_80070280(s8 *arg0);
void fn_80070958(s32 *arg0);
void fn_80071CA8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4);
void fn_80071FD0(s8 *arg0, s32 arg1);
s32 fn_80071FD8(s32 arg0_pad);
void fn_80072AC0(s8 *arg0, s32 arg1);
s32 fn_80072AC8(s32 arg0_pad);
void fn_80073974(s8 *arg0, s8 *arg1);
void fn_80073EB8(s8 *arg0);
void fn_80074040(s8 *arg0);
s32 fn_800748A8(s32 arg0_pad);
void fn_80075E7C(s8 *arg0);
void fn_80075FA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800787D0(s8 *arg0);
void fn_800789C4(s8 *arg0);
void fn_8007F700(s8 *arg0);
void fn_8007F85C(void);
s32 fn_8008B160();
void fn_8008BBE0(s32 arg0);
void fn_8008C058(s8 *arg0);
void fn_8008C500(s8 *arg0);
void fn_8008C630(s8 *arg0, s32 arg1);
s8 * fn_800963C0(s8 *arg0, s16 arg1);
s32 fn_80096630(s8 *arg0, s32 arg1);
s32 * fn_80099FD8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800A50A4();
s8 * fn_80153D90(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801714F0(void);
s32 fn_801719B8(void);
void fn_801773E0(s32 arg0);
s32 * fn_8017ADBC(s32 arg0);
void fn_8017C4E4(s32 arg0, s32 arg1);
void fn_801827C4(s8 *arg0);
void fn_8018280C(s8 *arg0);
void fn_80182868(s8 *arg0, s32 arg1);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8005D830
asm s32 fn_8005D830() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_28
    mr r29, r3
    mr r30, r4
    lwz r3, 0x10(r4)
    cmpwi r3, 0x0
    bne lbl_8005D860
    li r3, 0x0
    b lbl_8005E034
lbl_8005D860:
    lbz r0, 0x70(r4)
    cmpwi r0, 0x0
    beq lbl_8005D8B4
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005DA20
    cmpwi r0, 0x1
    bne lbl_8005D89C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_8005DA20
lbl_8005D89C:
    lwz r3, 0x20(r4)
    lwz r4, 0x74(r4)
    lwz r4, 0x3910(r4)
    bl fn_8005D5B0
    mr r31, r3
    b lbl_8005DA20
lbl_8005D8B4:
    cmpwi r3, 0x2b
    beq lbl_8005D8D8
    cmpwi r3, 0x1
    beq lbl_8005D9C8
    lwz r3, 0x20(r4)
    li r4, 0x0
    bl fn_8005D5B0
    mr r31, r3
    b lbl_8005DA20
lbl_8005D8D8:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005D908
    cmpwi r0, 0x1
    bne lbl_8005D954
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_8005D954
lbl_8005D908:
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    lwz r0, 0x864(r28)
    cmpwi r0, 0x0
    bne lbl_8005D93C
    lwz r3, 0x20(r4)
    li r4, 0x0
    lis r5, 0x80
    bl fn_8005D6B4
    mr r31, r3
    lwz r0, 0x3910(r3)
    stw r0, 0x864(r28)
    b lbl_8005DA20
lbl_8005D93C:
    lwz r3, 0x20(r4)
    mr r4, r0
    lis r5, 0x80
    bl fn_8005D6B4
    mr r31, r3
    b lbl_8005DA20
lbl_8005D954:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    bne lbl_8005D9B4
    lis r3, lbl_803C1A40@ha
    addi r28, r3, lbl_803C1A40@l
    lwz r0, 0x864(r28)
    cmpwi r0, 0x0
    bne lbl_8005D99C
    lwz r3, 0x20(r4)
    li r4, 0x0
    lis r5, 0x80
    bl fn_8005D6B4
    mr r31, r3
    lwz r0, 0x3910(r3)
    stw r0, 0x864(r28)
    b lbl_8005DA20
lbl_8005D99C:
    lwz r3, 0x20(r4)
    mr r4, r0
    lis r5, 0x80
    bl fn_8005D6B4
    mr r31, r3
    b lbl_8005DA20
lbl_8005D9B4:
    lwz r3, 0x20(r4)
    li r4, 0x0
    bl fn_8005D5B0
    mr r31, r3
    b lbl_8005DA20
lbl_8005D9C8:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005D9F8
    cmpwi r0, 0x1
    bne lbl_8005DA10
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_8005DA10
lbl_8005D9F8:
    lwz r3, 0x20(r4)
    li r4, 0x0
    lis r5, 0x10
    bl fn_8005D6B4
    mr r31, r3
    b lbl_8005DA20
lbl_8005DA10:
    lwz r3, 0x20(r4)
    li r4, 0x0
    bl fn_8005D5B0
    mr r31, r3
lbl_8005DA20:
    li r4, 0x2
    stw r4, 0x0(r31)
    lbz r0, 0x70(r30)
    cmpwi r0, 0x0
    beq lbl_8005DA70
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005DB9C
    cmpwi r0, 0x1
    bne lbl_8005DA64
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_8005DB9C
lbl_8005DA64:
    stw r29, 0x8(r31)
    stw r29, 0xc(r31)
    b lbl_8005DB9C
lbl_8005DA70:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r5, 0x118(r3)
    cmpwi r5, 0x1
    bne lbl_8005DB1C
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_8005DAB8
    cmpwi r0, 0x1
    beq lbl_8005DAC8
    cmpwi r0, 0x2
    beq lbl_8005DAD8
    cmpwi r0, 0x3
    beq lbl_8005DAE4
    stw r29, 0x8(r31)
    stw r29, 0xc(r31)
    b lbl_8005DAF0
lbl_8005DAB8:
    stw r29, 0x8(r31)
    li r0, 0x0
    stw r0, 0xc(r31)
    b lbl_8005DAF0
lbl_8005DAC8:
    stw r29, 0x8(r31)
    li r0, 0x1
    stw r0, 0xc(r31)
    b lbl_8005DAF0
lbl_8005DAD8:
    stw r29, 0x8(r31)
    stw r4, 0xc(r31)
    b lbl_8005DAF0
lbl_8005DAE4:
    stw r29, 0x8(r31)
    li r0, 0x3
    stw r0, 0xc(r31)
lbl_8005DAF0:
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    ble lbl_8005DB0C
    lwz r0, 0x0(r31)
    oris r0, r0, 0x800
    stw r0, 0x0(r31)
    b lbl_8005DB9C
lbl_8005DB0C:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r31)
    b lbl_8005DB9C
lbl_8005DB1C:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    bne lbl_8005DB58
    cmpwi r29, 0x0
    beq lbl_8005DB48
    stw r29, 0x8(r31)
    li r0, 0x1
    stw r0, 0xc(r31)
    b lbl_8005DB9C
lbl_8005DB48:
    stw r29, 0x8(r31)
    li r0, 0x0
    stw r0, 0xc(r31)
    b lbl_8005DB9C
lbl_8005DB58:
    cmpwi r5, 0x2
    bne lbl_8005DB94
    stw r29, 0x8(r31)
    stw r29, 0xc(r31)
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    ble lbl_8005DB84
    lwz r0, 0x0(r31)
    oris r0, r0, 0x800
    stw r0, 0x0(r31)
    b lbl_8005DB9C
lbl_8005DB84:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r31)
    b lbl_8005DB9C
lbl_8005DB94:
    stw r29, 0x8(r31)
    stw r29, 0xc(r31)
lbl_8005DB9C:
    lwz r0, 0x20(r30)
    stw r0, 0x10(r31)
    lwz r0, 0x24(r30)
    stw r0, 0x14(r31)
    lwz r0, 0x10(r30)
    stw r0, 0x18(r31)
    lwz r0, 0x14(r30)
    stw r0, 0x1c(r31)
    mr r3, r31
    bl fn_8005E04C
    lbz r0, 0x70(r30)
    cmpwi r0, 0x0
    bne lbl_8005DBE0
    lwz r0, 0x0(r31)
    ori r0, r0, 0x8
    stw r0, 0x0(r31)
    b lbl_8005DCB8
lbl_8005DBE0:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005DCB8
    cmpwi r0, 0x1
    bne lbl_8005DC10
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_8005DCB8
lbl_8005DC10:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x10
    stw r0, 0x0(r31)
    lwz r3, 0x3908(r31)
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_8005DCB8
    stw r3, 0x8(r4)
    lwz r3, 0x3908(r31)
    lwz r0, 0x10(r3)
    stw r0, 0x4(r3)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x118(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8005DCB8
    lwz r3, 0x18(r31)
    cmplwi r3, 0x10
    beq lbl_8005DC80
    cmplwi r3, 0xd
    beq lbl_8005DC80
    cmplwi r3, 0xc
    beq lbl_8005DC80
    subi r0, r3, 0x2d
    cmplwi r0, 0x1
    bgt lbl_8005DCB8
lbl_8005DC80:
    lwz r3, 0x3908(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8005DCAC
    lwz r0, 0x0(r31)
    oris r0, r0, 0x800
    stw r0, 0x0(r31)
    b lbl_8005DCB8
lbl_8005DCAC:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r31)
lbl_8005DCB8:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_8005DCDC
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005DCDC
    ori r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_8005DCDC:
    lwz r0, 0x1c(r30)
    stw r0, 0x3778(r31)
    li r29, 0x0
    stw r29, 0x3774(r31)
    addi r3, r31, 0x160
    li r4, 0x0
    lwz r5, 0x4(r31)
    addi r6, r31, 0x12c
    addi r7, r31, 0x408
    addi r8, r31, 0x588
    li r9, 0x10
    bl fn_80075FA0
    stw r29, 0x37a0(r31)
    addi r3, r1, 0x80
    li r4, 0x1
    lwz r5, 0x18(r31)
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x80
    li r4, 0xd
    li r5, 0x0
    bl fn_80153D90
    stw r3, 0x20(r31)
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_8005DD58
    lwz r3, 0x3908(r31)
    bl fn_8005D3E8
    li r3, 0x0
    b lbl_8005E034
lbl_8005DD58:
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x18(r4)
    addi r0, r3, 0x1
    stw r0, 0x18(r4)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r31, 0x330(r3)
    lwz r3, 0x20(r31)
    bl fn_801773E0
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8005DD98
    mr r3, r31
    bl fn_80057FFC
lbl_8005DD98:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005E030
    cmpwi r0, 0x1
    bne lbl_8005DDC8
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_8005E030
lbl_8005DDC8:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005E030
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0x78
    bl memcpy
    lwz r0, 0x18(r31)
    cmplwi r0, 0x2c
    bgt lbl_8005E030
    lis r3, jumptable_8034ABD8@ha
    addi r3, r3, jumptable_8034ABD8@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x1
    stw r0, 0x18(r1)
    stw r0, 0x24(r1)
    stb r0, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    li r0, 0x0
    stw r0, 0x24(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0x16
    stw r0, 0x18(r1)
    li r0, 0x1
    stw r0, 0x24(r1)
    stb r0, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0xc
    stw r0, 0x18(r1)
    li r30, 0x0
    stw r30, 0x24(r1)
    li r29, 0x1
    stb r29, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    li r0, 0xd
    stw r0, 0x18(r1)
    stw r30, 0x24(r1)
    stb r29, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0xa
    stw r0, 0x18(r1)
    li r0, 0x1
    stw r0, 0x24(r1)
    stb r0, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0x18
    stw r0, 0x18(r1)
    li r0, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1
    stb r0, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0x19
    stw r0, 0x18(r1)
    li r0, 0x1
    stw r0, 0x24(r1)
    stb r0, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0x10
    stw r0, 0x18(r1)
    li r29, 0x1
    stw r29, 0x24(r1)
    stb r29, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    li r0, 0xf
    stw r0, 0x18(r1)
    stb r29, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0x1e
    stw r0, 0x18(r1)
    li r0, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1
    stb r0, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0x25
    stw r0, 0x18(r1)
    li r0, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1
    stb r0, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    b lbl_8005E030
    li r0, 0x2d
    stw r0, 0x18(r1)
    li r30, 0x0
    stw r30, 0x24(r1)
    li r29, 0x1
    stb r29, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
    li r0, 0x2e
    stw r0, 0x18(r1)
    stw r30, 0x24(r1)
    stb r29, 0x78(r1)
    stw r31, 0x7c(r1)
    li r3, -0x1
    addi r4, r1, 0x8
    bl fn_8005D830
lbl_8005E030:
    mr r3, r31
lbl_8005E034:
    addi r11, r1, 0x110
    bl _restgpr_28
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_8005E04C
asm void fn_8005E04C(s8 *arg0) {
    nofralloc
    li r7, 0x0
    li r4, 0x0
    lis r5, lbl_803906E0@ha
    addi r5, r5, lbl_803906E0@l
    li r0, 0x19
    mtctr r0
lbl_8005E064:
    add r6, r5, r4
    lbz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_8005E088
    li r0, 0x1
    stb r0, 0x0(r6)
    stw r3, 0x4(r6)
    stw r7, 0x4(r3)
    blr
lbl_8005E088:
    addi r7, r7, 0x1
    addi r4, r4, 0x8
    bdnz lbl_8005E064
    blr
}

// asm_to_cpp: fn_8005E098
asm void fn_8005E098(s8 *arg0) {
    nofralloc
    li r4, 0x0
    lwz r0, 0x4(r3)
    slwi r0, r0, 3
    lis r3, lbl_803906E0@ha
    addi r3, r3, lbl_803906E0@l
    stbx r4, r3, r0
    add r3, r3, r0
    stw r4, 0x4(r3)
    blr
}

// asm_to_cpp: fn_8005E0BC
asm s32 fn_8005E0BC(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r28, 0x0
    li r26, 0x0
    li r31, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_8005E0E4:
    li r27, 0x0
    lwzx r3, r30, r31
    lwz r29, 0xc(r3)
    b lbl_8005E12C
lbl_8005E0F4:
    lwz r3, 0x0(r29)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005E128
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005E128
    bl fn_8006B078
    cmpwi r3, 0x0
    bne lbl_8005E128
    li r27, 0x1
    b lbl_8005E134
lbl_8005E128:
    lwz r29, 0xc(r29)
lbl_8005E12C:
    cmpwi r29, 0x0
    bne lbl_8005E0F4
lbl_8005E134:
    cmpwi r27, 0x0
    beq lbl_8005E140
    addi r28, r28, 0x1
lbl_8005E140:
    addi r26, r26, 0x1
    addi r31, r31, 0x4
    cmpwi r26, 0x4
    blt lbl_8005E0E4
    mr r3, r28
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005E16C
asm M2C_UNK fn_8005E16C(s32 arg0) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r5, 0xc(r3)
    li r3, 0x0
    b lbl_8005E1A4
lbl_8005E188:
    lwz r4, 0x0(r5)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005E1A0
    addi r3, r3, 0x1
lbl_8005E1A0:
    lwz r5, 0xc(r5)
lbl_8005E1A4:
    cmpwi r5, 0x0
    bne lbl_8005E188
    blr
}

// asm_to_cpp: fn_8005E1B0
asm s32 fn_8005E1B0(s32 arg0, s32 arg1) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r5, 0xc(r3)
    li r3, 0x0
    li r6, 0x0
    b lbl_8005E1E8
lbl_8005E1D0:
    cmpw r6, r4
    bne lbl_8005E1E0
    lwz r3, 0x0(r5)
    blr
lbl_8005E1E0:
    lwz r5, 0xc(r5)
    addi r6, r6, 0x1
lbl_8005E1E8:
    cmpwi r5, 0x0
    bne lbl_8005E1D0
    blr
}

// asm_to_cpp: fn_8005E1F4
asm s32 * fn_8005E1F4(s32 arg0, s32 arg1) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r6, 0xc(r3)
    li r3, 0x0
    li r7, 0x0
    b lbl_8005E25C
lbl_8005E214:
    lwz r5, 0x0(r6)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005E238
    cmpw r7, r4
    bne lbl_8005E238
    mr r3, r5
    blr
lbl_8005E238:
    lwz r6, 0xc(r6)
    cmpwi r6, 0x0
    beq lbl_8005E25C
    lwz r5, 0x0(r6)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005E25C
    addi r7, r7, 0x1
lbl_8005E25C:
    cmpwi r6, 0x0
    bne lbl_8005E214
    blr
}

// asm_to_cpp: fn_8005E268
asm s8 * fn_8005E268(s32 arg0) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r6, 0xc(r3)
    li r3, 0x0
    b lbl_8005E2C0
lbl_8005E284:
    lwz r4, 0x0(r6)
    lwz r5, 0x0(r4)
    rlwinm r0, r5, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005E2BC
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8005E2BC
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005E2BC
    mr r3, r4
    blr
lbl_8005E2BC:
    lwz r6, 0xc(r6)
lbl_8005E2C0:
    cmpwi r6, 0x0
    bne lbl_8005E284
    blr
}

// asm_to_cpp: fn_8005E2CC
asm s8 * fn_8005E2CC(u32 arg0) {
    nofralloc
    cmplwi r3, 0x18
    bgt lbl_8005E2EC
    lis r4, lbl_803906E0@ha
    addi r4, r4, lbl_803906E0@l
    slwi r0, r3, 3
    add r3, r4, r0
    lwz r3, 0x4(r3)
    blr
lbl_8005E2EC:
    li r3, 0x0
    blr
}

s8 * fn_8005E2F4(s32 arg0) {
    u32 var_r31;
    s8 *temp_r3;

    if (arg0 < 0) {
        return (s8 *) (NULL);
    }
    if ((s32) lbl_8049D4F8 == 0) {
        return (s8 *) (NULL);
    }
    var_r31 = (u32) (0);
loop_5:
    temp_r3 = (s8 *) (fn_8005E2CC((u32) (var_r31)));
    if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 8) == arg0)) {
        return (s8 *) (temp_r3);
    }
    var_r31 += 1;
    if ((s32) var_r31 >= 0x19) {
        return (s8 *) (NULL);
    }
    goto loop_5;
}

// asm_to_cpp: fn_8005E37C
asm s8 * fn_8005E37C(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    bge lbl_8005E3A4
    li r3, 0x0
    b lbl_8005E404
lbl_8005E3A4:
    lbz r0, lbl_8049D4F8
    cmpwi r0, 0x0
    bne lbl_8005E3B8
    li r3, 0x0
    b lbl_8005E404
lbl_8005E3B8:
    li r31, 0x0
    li r30, 0x0
lbl_8005E3C0:
    mr r3, r30
    bl fn_8005E2CC
    cmpwi r3, 0x0
    beq lbl_8005E3F4
    lwz r0, 0xc(r3)
    cmpw r0, r29
    bne lbl_8005E3F4
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8005E3F0
    b lbl_8005E404
lbl_8005E3F0:
    mr r31, r3
lbl_8005E3F4:
    addi r30, r30, 0x1
    cmpwi r30, 0x19
    blt lbl_8005E3C0
    mr r3, r31
lbl_8005E404:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s8 * fn_8005E41C(u32 arg0) {
    u32 var_r31;
    s8 *temp_r3;

    if (arg0 > 0x32U) {
        return (s8 *) (NULL);
    }
    if ((s32) lbl_8049D4F8 == 0) {
        return (s8 *) (NULL);
    }
    var_r31 = (u32) (0);
loop_5:
    temp_r3 = (s8 *) (fn_8005E2CC((u32) (var_r31)));
    if ((temp_r3 != NULL) && ((u32) M2C_FIELD(temp_r3, u32 *, 0x18) == arg0)) {
        return (s8 *) (temp_r3);
    }
    var_r31 += 1;
    if ((s32) var_r31 >= 0x19) {
        return (s8 *) (NULL);
    }
    goto loop_5;
}

// asm_to_cpp: fn_8005E4A4
asm s32 * fn_8005E4A4(s8 *arg0) {
    nofralloc
    lwz r4, 0x3908(r3)
lbl_8005E4A8:
    cmpwi r4, 0x0
    beq lbl_8005E4CC
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bnelr
    lwz r4, 0x4(r4)
    b lbl_8005E4A8
lbl_8005E4CC:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8005E4D4
asm s32 fn_8005E4D4(s8 *arg0, s32 arg1) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_8005E4E4
    li r3, 0x0
    blr
lbl_8005E4E4:
    lwz r3, 0x3908(r3)
    lwz r3, 0x8(r3)
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_8005E508
lbl_8005E4F8:
    cmpwi r3, 0x0
    beq lbl_8005E508
    lwz r3, 0x8(r3)
    bdnz lbl_8005E4F8
lbl_8005E508:
    cmpwi r3, 0x0
    beq lbl_8005E518
    lwz r3, 0x0(r3)
    blr
lbl_8005E518:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8005E520
asm s8 * fn_8005E520(s8 *arg0) {
    nofralloc
    lwz r3, 0x3908(r3)
    lwz r4, 0x8(r3)
    b lbl_8005E544
lbl_8005E52C:
    lwz r3, 0x0(r4)
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8005E54C
    lwz r4, 0x8(r4)
lbl_8005E544:
    cmpwi r4, 0x0
    bne lbl_8005E52C
lbl_8005E54C:
    cmpwi r4, 0x0
    beq lbl_8005E55C
    lwz r3, 0x0(r4)
    blr
lbl_8005E55C:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8005E564
asm s8 * fn_8005E564(s8 *arg0, u32 arg1) {
    nofralloc
    lwz r3, 0x3908(r3)
    lwz r5, 0x8(r3)
    b lbl_8005E584
lbl_8005E570:
    lwz r3, 0x0(r5)
    lwz r0, 0x18(r3)
    cmplw r0, r4
    beq lbl_8005E58C
    lwz r5, 0x8(r5)
lbl_8005E584:
    cmpwi r5, 0x0
    bne lbl_8005E570
lbl_8005E58C:
    cmpwi r5, 0x0
    beq lbl_8005E59C
    lwz r3, 0x0(r5)
    blr
lbl_8005E59C:
    li r3, 0x0
    blr
}

s32 fn_8005E5A4(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x3874));
}

// asm_to_cpp: fn_8005E5AC
asm M2C_UNK fn_8005E5AC(void) {
    nofralloc
    li r3, 0x0
    li r4, 0x0
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8005E5C4:
    lwzx r5, r6, r4
    lwz r8, 0xc(r5)
    b lbl_8005E66C
lbl_8005E5D0:
    li r9, 0x1
    lwz r5, 0x0(r8)
    lwz r7, 0x0(r5)
    rlwinm r0, r7, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005E5EC
    li r9, 0x0
lbl_8005E5EC:
    rlwinm r0, r7, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8005E60C
    lwz r0, 0x58(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005E60C
    li r9, 0x0
lbl_8005E60C:
    rlwinm r0, r7, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8005E62C
    lwz r0, 0x58(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005E62C
    li r9, 0x0
lbl_8005E62C:
    rlwinm r0, r7, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8005E65C
    lwz r5, 0x70(r5)
    clrlwi r0, r5, 31
    cmpwi r0, 0x0
    beq lbl_8005E64C
    li r9, 0x0
lbl_8005E64C:
    rlwinm r0, r5, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_8005E65C
    li r9, 0x0
lbl_8005E65C:
    cmpwi r9, 0x0
    beq lbl_8005E668
    addi r3, r3, 0x1
lbl_8005E668:
    lwz r8, 0xc(r8)
lbl_8005E66C:
    cmpwi r8, 0x0
    bne lbl_8005E5D0
    addi r4, r4, 0x4
    bdnz lbl_8005E5C4
    blr
}

// asm_to_cpp: fn_8005E680
asm s8 * fn_8005E680(u32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    li r28, 0x0
    li r25, 0x0
    lis r3, lbl_803906D0@ha
    addi r31, r3, lbl_803906D0@l
lbl_8005E6AC:
    lwzx r3, r31, r25
    lwz r30, 0xc(r3)
    b lbl_8005E7A0
lbl_8005E6B8:
    lwz r29, 0x0(r30)
    li r24, 0x1
    cmplw r29, r26
    bne lbl_8005E6CC
    li r24, 0x0
lbl_8005E6CC:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8005E6F0
    mr r3, r29
    bl fn_8005E4A4
    cmplw r3, r26
    bne lbl_8005E6F0
    li r24, 0x0
lbl_8005E6F0:
    lwz r0, 0x163c(r29)
    cmpwi r0, 0x0
    beq lbl_8005E700
    li r24, 0x0
lbl_8005E700:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005E714
    li r24, 0x0
lbl_8005E714:
    cmpwi r24, 0x0
    beq lbl_8005E79C
    cmpwi r27, 0x0
    beq lbl_8005E774
    lwz r0, 0x50(r29)
    clrrwi r0, r0, 30
    cmpwi r0, 0x0
    beq lbl_8005E75C
    lwz r0, 0x17c(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8005E75C
    lwz r0, 0x68(r29)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005E75C
    mr r3, r29
    b lbl_8005E7BC
lbl_8005E75C:
    lwz r0, 0x68(r29)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8005E79C
    mr r3, r29
    b lbl_8005E7BC
lbl_8005E774:
    lwz r0, 0x50(r29)
    clrrwi r0, r0, 30
    cmpwi r0, 0x0
    beq lbl_8005E79C
    lwz r0, 0x17c(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8005E79C
    mr r3, r29
    b lbl_8005E7BC
lbl_8005E79C:
    lwz r30, 0xc(r30)
lbl_8005E7A0:
    cmpwi r30, 0x0
    bne lbl_8005E6B8
    addi r28, r28, 0x1
    addi r25, r25, 0x4
    cmpwi r28, 0x4
    blt lbl_8005E6AC
    li r3, 0x0
lbl_8005E7BC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_8005E7D4(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8005E680((u32) ((u32) arg0), (s32) (arg1)));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x18));
    }
    return (s32) (0);
}

// asm_to_cpp: fn_8005E808
asm s8 * fn_8005E808(u32 arg0, s32 arg1) {
    nofralloc
    li r5, 0x0
    lis r6, lbl_803906D0@ha
    addi r7, r6, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8005E81C:
    lwzx r6, r7, r5
    lwz r6, 0xc(r6)
    b lbl_8005E8A4
lbl_8005E828:
    lwz r8, 0x0(r6)
    li r9, 0x1
    cmplw r8, r3
    bne lbl_8005E83C
    li r9, 0x0
lbl_8005E83C:
    lwz r0, 0x163c(r8)
    cmpwi r0, 0x0
    beq lbl_8005E84C
    li r9, 0x0
lbl_8005E84C:
    lwz r0, 0x0(r8)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005E860
    li r9, 0x0
lbl_8005E860:
    cmpwi r9, 0x0
    beq lbl_8005E8A0
    cmpwi r4, 0x0
    beq lbl_8005E888
    lwz r0, 0x6c(r8)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005E8A0
    mr r3, r8
    blr
lbl_8005E888:
    lwz r0, 0x6c(r8)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8005E8A0
    mr r3, r8
    blr
lbl_8005E8A0:
    lwz r6, 0xc(r6)
lbl_8005E8A4:
    cmpwi r6, 0x0
    bne lbl_8005E828
    addi r5, r5, 0x4
    bdnz lbl_8005E81C
    li r3, 0x0
    blr
}

s32 fn_8005E8BC(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_8005E808((u32) (arg0), (s32) (arg1)));
    if (temp_r3 != NULL) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x18));
    }
    return (s32) (0);
}

// asm_to_cpp: fn_8005E8F0
asm s32 fn_8005E8F0(u32 arg0) {
    nofralloc
    li r4, 0x0
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8005E904:
    lwzx r5, r6, r4
    lwz r5, 0xc(r5)
    b lbl_8005E94C
lbl_8005E910:
    lwz r7, 0x0(r5)
    li r8, 0x1
    cmplw r7, r3
    bne lbl_8005E924
    li r8, 0x0
lbl_8005E924:
    lwz r0, 0x68(r7)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8005E938
    li r8, 0x0
lbl_8005E938:
    cmpwi r8, 0x0
    beq lbl_8005E948
    lwz r3, 0x18(r7)
    blr
lbl_8005E948:
    lwz r5, 0xc(r5)
lbl_8005E94C:
    cmpwi r5, 0x0
    bne lbl_8005E910
    addi r4, r4, 0x4
    bdnz lbl_8005E904
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8005E964
asm s32 fn_8005E964(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r27, 0x0
    cmpwi r3, 0x0
    bge lbl_8005E990
    li r26, 0x0
    li r28, 0x4
    b lbl_8005E998
lbl_8005E990:
    mr r26, r3
    addi r28, r3, 0x1
lbl_8005E998:
    lis r3, lbl_803906D0@ha
    addi r31, r3, lbl_803906D0@l
    slwi r25, r26, 2
    b lbl_8005EA84
lbl_8005E9A8:
    lwzx r3, r31, r25
    lwz r30, 0xc(r3)
    b lbl_8005EA64
lbl_8005E9B4:
    lwz r29, 0x0(r30)
    li r4, 0x1
    lwz r3, 0x0(r29)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005E9D0
    li r4, 0x0
lbl_8005E9D0:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8005E9E0
    li r4, 0x0
lbl_8005E9E0:
    cmpwi r4, 0x0
    beq lbl_8005EA60
    mr r3, r29
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_8005EA08
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8005EA60
lbl_8005EA08:
    addi r27, r27, 0x1
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    bne lbl_8005EA5C
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8005EA5C
    lwz r0, 0x70(r29)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_8005EA5C
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8005EA60
    lwz r0, 0x58(r29)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005EA60
lbl_8005EA5C:
    subi r27, r27, 0x1
lbl_8005EA60:
    lwz r30, 0xc(r30)
lbl_8005EA64:
    cmpwi r30, 0x0
    bne lbl_8005E9B4
    cmpwi r27, 0x0
    beq lbl_8005EA7C
    li r3, 0x0
    b lbl_8005EA90
lbl_8005EA7C:
    addi r26, r26, 0x1
    addi r25, r25, 0x4
lbl_8005EA84:
    cmpw r26, r28
    blt lbl_8005E9A8
    li r3, 0x1
lbl_8005EA90:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8005EAA8
asm s32 fn_8005EAA8(s32 arg0) {
    nofralloc
    li r5, 0x0
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r4, 0xc(r3)
    b lbl_8005EAE4
lbl_8005EAC4:
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005EAE0
    lwz r0, 0x3c(r3)
    add r5, r5, r0
lbl_8005EAE0:
    lwz r4, 0xc(r4)
lbl_8005EAE4:
    cmpwi r4, 0x0
    bne lbl_8005EAC4
    mr r3, r5
    blr
}

// asm_to_cpp: fn_8005EAF4
asm s32 fn_8005EAF4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x0
    bl fn_8017ADBC
    li r4, 0x0
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8005EB1C:
    lwzx r5, r6, r4
    lwz r7, 0xc(r5)
    b lbl_8005EB8C
lbl_8005EB28:
    lwz r5, 0x0(r7)
    lwz r0, 0x163c(r5)
    cmpwi r0, 0x0
    bne lbl_8005EB88
    lwz r0, 0x1640(r5)
    cmpwi r0, 0x0
    ble lbl_8005EB88
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005EB88
    lwz r0, 0x70(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8005EB88
    lwz r0, 0x74(r3)
    cmpwi r0, 0x4
    bne lbl_8005EB80
    stw r0, 0x78(r3)
    li r3, 0x0
    li r4, 0x0
    bl fn_8017C4E4
lbl_8005EB80:
    li r3, 0x1
    b lbl_8005EBC4
lbl_8005EB88:
    lwz r7, 0xc(r7)
lbl_8005EB8C:
    cmpwi r7, 0x0
    bne lbl_8005EB28
    addi r4, r4, 0x4
    bdnz lbl_8005EB1C
    lwz r0, 0x78(r3)
    cmpwi r0, 0x4
    bne lbl_8005EBC0
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    bne lbl_8005EBC0
    li r3, 0x0
    li r4, 0x4
    bl fn_8017C4E4
lbl_8005EBC0:
    li r3, 0x0
lbl_8005EBC4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8005EBD4
asm s8 * fn_8005EBD4(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r0, 0x10(r3)
    slwi r0, r0, 2
    lis r5, lbl_803906D0@ha
    addi r5, r5, lbl_803906D0@l
    lwzx r5, r5, r0
    lwz r7, 0xc(r5)
    b lbl_8005EC44
lbl_8005EBF0:
    lwz r5, 0x0(r7)
    lwz r6, 0x0(r5)
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005EC40
    rlwinm r0, r6, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8005EC40
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005EC40
    cmplw r3, r5
    beq lbl_8005EC40
    cmpwi r4, 0x0
    ble lbl_8005EC38
    lwz r0, 0x18(r5)
    cmplw r4, r0
    bne lbl_8005EC40
lbl_8005EC38:
    mr r3, r5
    blr
lbl_8005EC40:
    lwz r7, 0xc(r7)
lbl_8005EC44:
    cmpwi r7, 0x0
    bne lbl_8005EBF0
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8005EC54
asm s32 fn_8005EC54(s32 arg0, s32 arg1) {
    nofralloc
    li r6, 0x0
    cmpwi r4, 0x0
    bne lbl_8005ECC4
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r5, 0xc(r3)
    li r6, 0x0
    b lbl_8005ECBC
lbl_8005EC7C:
    lwz r3, 0x0(r5)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005ECB8
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8005ECB8
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8005ECB8
    lwz r0, 0x140(r3)
    cmpwi r0, 0x1
    bne lbl_8005ECB8
    addi r6, r6, 0x1
lbl_8005ECB8:
    lwz r5, 0xc(r5)
lbl_8005ECBC:
    cmpwi r5, 0x0
    bne lbl_8005EC7C
lbl_8005ECC4:
    mr r3, r6
    blr
}

// asm_to_cpp: fn_8005ECCC
asm s32 * fn_8005ECCC(s32 arg0) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r5, 0xc(r3)
    b lbl_8005ED08
lbl_8005ECE4:
    lwz r3, 0x0(r5)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005ED04
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beqlr
lbl_8005ED04:
    lwz r5, 0xc(r5)
lbl_8005ED08:
    cmpwi r5, 0x0
    bne lbl_8005ECE4
    li r3, 0x0
    blr
}

void fn_8005ED18(void) {
}

// asm_to_cpp: fn_8005ED1C
asm void fn_8005ED1C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r5, 0x0(r3)
    lis r4, 0x7f70
    addi r0, r4, 0xff
    and r0, r5, r0
    stw r0, 0x0(r3)
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8005ED78
    li r0, -0x1
    stw r0, 0x164c(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x1
    bl fn_80071CA8
lbl_8005ED78:
    mr r3, r30
    bl fn_8008BBE0
    mr r3, r30
    mr r4, r31
    bl fn_80060C24
    mr r3, r30
    mr r4, r31
    bl fn_80069590
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_8005EDD4
    cmpwi r0, 0x1
    bne lbl_8005EDC8
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_8005EDD4
lbl_8005EDC8:
    mr r3, r30
    mr r4, r31
    bl fn_800963C0
lbl_8005EDD4:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8005EDFC
    mr r3, r30
    li r4, 0x0
    bl fn_80071FD0
    mr r3, r30
    li r4, 0x0
    bl fn_80072AC0
lbl_8005EDFC:
    mr r3, r30
    bl fn_800674E4
    mr r3, r30
    bl fn_80075E7C
    lfs f0, lbl_8049ED98
    stfs f0, 0x3784(r30)
    stfs f0, 0x3788(r30)
    stfs f0, 0x378c(r30)
    li r0, 0x0
    stw r0, 0x163c(r30)
    stw r0, 0x1640(r30)
    stw r0, 0x1644(r30)
    cmpwi r31, 0x0
    bne lbl_8005EE38
    stw r0, 0x134(r30)
lbl_8005EE38:
    li r31, 0x0
    stw r31, 0xa10(r30)
    mr r3, r30
    bl fn_8005FC24
    stw r31, 0x3860(r30)
    stw r31, 0x3864(r30)
    stw r31, 0x3858(r30)
    stw r31, 0x385c(r30)
    stw r31, 0x3868(r30)
    stw r31, 0x386c(r30)
    lwz r0, 0x8(r30)
    mulli r4, r0, 0x78
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r4
    lwz r3, 0x18(r3)
    subi r0, r3, 0x5
    cmplwi r0, 0x2
    ble lbl_8005EE98
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_8005EE98
    cmplwi r3, 0x1
    bne lbl_8005EEA4
lbl_8005EE98:
    lwz r0, 0x74(r30)
    ori r0, r0, 0x1
    stw r0, 0x74(r30)
lbl_8005EEA4:
    lwz r0, 0x8(r30)
    mulli r4, r0, 0x78
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r4
    lwz r3, 0x18(r3)
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    ble lbl_8005EED8
    cmplwi r3, 0x2
    beq lbl_8005EED8
    cmplwi r3, 0x6
    bne lbl_8005EEE4
lbl_8005EED8:
    lwz r0, 0x74(r30)
    ori r0, r0, 0x2
    stw r0, 0x74(r30)
lbl_8005EEE4:
    lwz r0, 0x8(r30)
    mulli r4, r0, 0x78
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r4
    lwz r3, 0x18(r3)
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    ble lbl_8005EF18
    cmplwi r3, 0x3
    beq lbl_8005EF18
    cmplwi r3, 0x5
    bne lbl_8005EF24
lbl_8005EF18:
    lwz r0, 0x74(r30)
    ori r0, r0, 0x4
    stw r0, 0x74(r30)
lbl_8005EF24:
    lwz r0, 0x8(r30)
    mulli r4, r0, 0x78
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r4
    lwz r0, 0x18(r3)
    cmplwi r0, 0x4
    beq lbl_8005EF54
    cmplwi r0, 0x7
    beq lbl_8005EF54
    cmplwi r0, 0xa
    bne lbl_8005EF60
lbl_8005EF54:
    lwz r0, 0x74(r30)
    ori r0, r0, 0x8
    stw r0, 0x74(r30)
lbl_8005EF60:
    lwz r0, 0x8(r30)
    mulli r4, r0, 0x78
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r4
    lwz r3, 0x80(r3)
    subi r0, r3, 0x5
    cmplwi r0, 0x3
    ble lbl_8005EF94
    cmpwi r3, 0x1
    beq lbl_8005EF94
    cmpwi r3, 0xa
    bne lbl_8005EFA0
lbl_8005EF94:
    lwz r0, 0x74(r30)
    oris r0, r0, 0x10
    stw r0, 0x74(r30)
lbl_8005EFA0:
    lwz r0, 0x8(r30)
    mulli r4, r0, 0x78
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r4
    lwz r0, 0x80(r3)
    cmpwi r0, 0x2
    beq lbl_8005EFD8
    cmpwi r0, 0x5
    beq lbl_8005EFD8
    cmpwi r0, 0x8
    beq lbl_8005EFD8
    cmpwi r0, 0xa
    bne lbl_8005EFE4
lbl_8005EFD8:
    lwz r0, 0x74(r30)
    oris r0, r0, 0x8000
    stw r0, 0x74(r30)
lbl_8005EFE4:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x8(r30)
    mulli r0, r0, 0x78
    add r3, r3, r0
    lwz r0, 0x84(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8005F014
    lwz r0, 0x74(r30)
    oris r0, r0, 0x10
    stw r0, 0x74(r30)
lbl_8005F014:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x8(r30)
    mulli r0, r0, 0x78
    add r3, r3, r0
    lwz r0, 0x84(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005F044
    lwz r0, 0x74(r30)
    oris r0, r0, 0x8000
    stw r0, 0x74(r30)
lbl_8005F044:
    lwz r3, 0x377c(r30)
    li r4, 0x0
    bl fn_80182868
    lis r3, lbl_80390580@ha
    addi r31, r3, lbl_80390580@l
    lwz r3, 0xc(r31)
    bl fn_8005C88C
    mr r4, r3
    lwz r3, 0xc(r31)
    bl fn_8005C808
    lwz r3, 0xc(r31)
    lwz r3, 0x118(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8005F134
    li r0, 0x0
    stw r0, 0x38c8(r30)
    stw r0, 0x38cc(r30)
    stw r0, 0x38d0(r30)
    stw r0, 0x38d4(r30)
    lwz r3, 0x0(r30)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8005F114
    lwz r4, 0x18(r30)
    cmplwi r4, 0x10
    beq lbl_8005F0CC
    cmplwi r4, 0xd
    beq lbl_8005F0CC
    cmplwi r4, 0xc
    beq lbl_8005F0CC
    subi r0, r4, 0x2d
    cmplwi r0, 0x1
    bgt lbl_8005F108
lbl_8005F0CC:
    lwz r3, 0x3908(r30)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8005F0F8
    lwz r0, 0x0(r30)
    oris r0, r0, 0x800
    stw r0, 0x0(r30)
    b lbl_8005F134
lbl_8005F0F8:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x0(r30)
    b lbl_8005F134
lbl_8005F108:
    rlwinm r0, r3, 0, 5, 3
    stw r0, 0x0(r30)
    b lbl_8005F134
lbl_8005F114:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_8005F12C
    rlwinm r0, r3, 0, 5, 3
    stw r0, 0x0(r30)
    b lbl_8005F134
lbl_8005F12C:
    oris r0, r3, 0x800
    stw r0, 0x0(r30)
lbl_8005F134:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x17
    beq lbl_8005F164
    cmplwi r0, 0x18
    beq lbl_8005F184
    cmplwi r0, 0x1a
    beq lbl_8005F1A4
    cmplwi r0, 0x1d
    beq lbl_8005F1C0
    b lbl_8005F1E4
lbl_8005F164:
    lwz r0, 0x0(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8005F1E4
    lwz r0, 0x74(r30)
    oris r0, r0, 0x8000
    stw r0, 0x74(r30)
    b lbl_8005F1E4
lbl_8005F184:
    lwz r0, 0x0(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8005F1E4
    lwz r0, 0x74(r30)
    oris r0, r0, 0x40
    stw r0, 0x74(r30)
    b lbl_8005F1E4
lbl_8005F1A4:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x1
    bne lbl_8005F1E4
    lwz r0, 0x74(r30)
    ori r0, r0, 0x5
    stw r0, 0x74(r30)
    b lbl_8005F1E4
lbl_8005F1C0:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x1
    bne lbl_8005F1E4
    lwz r0, 0x74(r30)
    ori r0, r0, 0x400
    oris r0, r0, 0x4000
    oris r0, r0, 0x8000
    oris r0, r0, 0x4
    stw r0, 0x74(r30)
lbl_8005F1E4:
    lwz r0, 0x0(r30)
    ori r0, r0, 0x4
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8005F208(s8 *arg0) {
    s32 var_r4;

    var_r4 = (s32) (1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x163C) != 0) {
        var_r4 = (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) != 0) {
        var_r4 = (s32) (0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x08000000) != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 2) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x38CC) <= 0)) {
        var_r4 = (s32) (0);
    }
    if (var_r4 != 0) {
        fn_80074040((s8 *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1640) == 0) {
            fn_80061434((s8 *) (arg0));
            fn_80070280((s8 *) (arg0));
            fn_80067960((s8 *) (arg0));
            fn_80067C94((s8 *) (arg0));
        }
    }
    fn_80067580((s8 *) (arg0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFF7FFF));
}

// asm_to_cpp: fn_8005F2D8
asm void fn_8005F2D8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x1
    bl fn_800609D8
    subic r0, r3, 0x1
    subfe r31, r0, r3
    lwz r0, 0x6c(r29)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8005F314
    li r30, 0x0
lbl_8005F314:
    lwz r3, 0x377c(r29)
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    cmpwi r3, 0x0
    beq lbl_8005F378
    cmpwi r31, 0x0
    beq lbl_8005F348
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
    b lbl_8005F354
lbl_8005F348:
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_8005F354:
    cmpwi r30, 0x0
    beq lbl_8005F36C
    lwz r0, 0x0(r3)
    ori r0, r0, 0x8
    stw r0, 0x0(r3)
    b lbl_8005F378
lbl_8005F36C:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x0(r3)
lbl_8005F378:
    lwz r3, 0x377c(r29)
    bl fn_8018280C
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005F398
asm void fn_8005F398(s32 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r3
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8005F86C
    li r30, 0x0
    li r28, 0x0
    lis r3, lbl_803906D0@ha
    addi r27, r3, lbl_803906D0@l
lbl_8005F3D0:
    lwzx r3, r27, r28
    lwz r31, 0xc(r3)
    b lbl_8005F450
lbl_8005F3DC:
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0x8000
    stw r0, 0x0(r3)
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x0(r3)
    lwz r3, 0x0(r31)
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_8005F44C
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8005F44C
    lwz r0, 0x1640(r3)
    stw r0, 0x1648(r3)
    lwz r3, 0x0(r31)
    lwz r4, 0x1640(r3)
    cmpwi r4, 0x0
    beq lbl_8005F444
    ble lbl_8005F44C
    subi r0, r4, 0x1
    stw r0, 0x1640(r3)
    b lbl_8005F44C
lbl_8005F444:
    addi r3, r3, 0x160
    bl fn_800787D0
lbl_8005F44C:
    lwz r31, 0xc(r31)
lbl_8005F450:
    cmpwi r31, 0x0
    bne lbl_8005F3DC
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x4
    blt lbl_8005F3D0
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F478:
    lwzx r3, r28, r30
    lwz r26, 0xc(r3)
    b lbl_8005F490
lbl_8005F484:
    lwz r3, 0x0(r26)
    bl fn_80067F84
    lwz r26, 0xc(r26)
lbl_8005F490:
    cmpwi r26, 0x0
    bne lbl_8005F484
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F478
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F4B8:
    lwzx r3, r28, r30
    lwz r26, 0xc(r3)
    b lbl_8005F4D0
lbl_8005F4C4:
    lwz r3, 0x0(r26)
    bl fn_80067B60
    lwz r26, 0xc(r26)
lbl_8005F4D0:
    cmpwi r26, 0x0
    bne lbl_8005F4C4
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F4B8
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F4F8:
    lwzx r3, r28, r30
    lwz r26, 0xc(r3)
    b lbl_8005F510
lbl_8005F504:
    lwz r3, 0x0(r26)
    bl fn_8007F700
    lwz r26, 0xc(r26)
lbl_8005F510:
    cmpwi r26, 0x0
    bne lbl_8005F504
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F4F8
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_80395728@ha
    addi r28, r3, lbl_80395728@l
    lis r3, lbl_803906D0@ha
    addi r31, r3, lbl_803906D0@l
lbl_8005F540:
    lwzx r3, r31, r30
    lwz r26, 0xc(r3)
    b lbl_8005F5D8
lbl_8005F54C:
    lwz r0, 0x14(r28)
    cmplwi r0, 0x1
    bne lbl_8005F5B0
    cmpwi r27, 0x1
    beq lbl_8005F588
    li r25, 0x0
lbl_8005F564:
    cmpw r25, r27
    beq lbl_8005F578
    lwz r3, 0x0(r26)
    mr r4, r25
    bl fn_8006ECB8
lbl_8005F578:
    addi r25, r25, 0x1
    cmpwi r25, 0x4
    blt lbl_8005F564
    b lbl_8005F5D4
lbl_8005F588:
    li r25, 0x0
lbl_8005F58C:
    cmpw r25, r27
    beq lbl_8005F5A0
    lwz r3, 0x0(r26)
    mr r4, r25
    bl fn_8006ECB8
lbl_8005F5A0:
    addi r25, r25, 0x1
    cmpwi r25, 0x4
    blt lbl_8005F58C
    b lbl_8005F5D4
lbl_8005F5B0:
    li r25, 0x0
lbl_8005F5B4:
    cmpw r25, r27
    beq lbl_8005F5C8
    lwz r3, 0x0(r26)
    mr r4, r25
    bl fn_8006ECB8
lbl_8005F5C8:
    addi r25, r25, 0x1
    cmpwi r25, 0x4
    blt lbl_8005F5B4
lbl_8005F5D4:
    lwz r26, 0xc(r26)
lbl_8005F5D8:
    cmpwi r26, 0x0
    bne lbl_8005F54C
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F540
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F600:
    lwzx r3, r28, r30
    lwz r31, 0xc(r3)
    b lbl_8005F618
lbl_8005F60C:
    lwz r3, 0x0(r31)
    bl fn_80070958
    lwz r31, 0xc(r31)
lbl_8005F618:
    cmpwi r31, 0x0
    bne lbl_8005F60C
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F600
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F640:
    lwzx r3, r28, r30
    lwz r31, 0xc(r3)
    b lbl_8005F658
lbl_8005F64C:
    lwz r3, 0x0(r31)
    bl fn_8006E26C
    lwz r31, 0xc(r31)
lbl_8005F658:
    cmpwi r31, 0x0
    bne lbl_8005F64C
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F640
    bl fn_801714F0
    cmpwi r3, 0x0
    beq lbl_8005F6E0
    bl fn_801719B8
    cmpwi r3, 0x0
    beq lbl_8005F734
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F698:
    lwzx r3, r28, r30
    lwz r31, 0xc(r3)
    b lbl_8005F6C4
lbl_8005F6A4:
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8005F6C0
    lwz r3, 0x377c(r3)
    bl fn_801827C4
lbl_8005F6C0:
    lwz r31, 0xc(r31)
lbl_8005F6C4:
    cmpwi r31, 0x0
    bne lbl_8005F6A4
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F698
    b lbl_8005F734
lbl_8005F6E0:
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F6F0:
    lwzx r3, r28, r30
    lwz r31, 0xc(r3)
    b lbl_8005F71C
lbl_8005F6FC:
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_8005F718
    lwz r3, 0x377c(r3)
    bl fn_801827C4
lbl_8005F718:
    lwz r31, 0xc(r31)
lbl_8005F71C:
    cmpwi r31, 0x0
    bne lbl_8005F6FC
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F6F0
lbl_8005F734:
    bl fn_8007F85C
    li r3, 0x0
    lis r4, lbl_803906D0@ha
    addi r5, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8005F74C:
    lwzx r4, r5, r3
    lwz r7, 0xc(r4)
    b lbl_8005F7A4
lbl_8005F758:
    lwz r6, 0x0(r7)
    lwz r0, 0x50(r6)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8005F788
    lwz r4, 0x60(r6)
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    bne lbl_8005F7A0
    oris r0, r4, 0x8000
    stw r0, 0x60(r6)
    b lbl_8005F7A0
lbl_8005F788:
    lwz r4, 0x60(r6)
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8005F7A0
    clrlwi r0, r4, 1
    stw r0, 0x60(r6)
lbl_8005F7A0:
    lwz r7, 0xc(r7)
lbl_8005F7A4:
    cmpwi r7, 0x0
    bne lbl_8005F758
    addi r3, r3, 0x4
    bdnz lbl_8005F74C
    bl fn_8005E0BC
    cmpwi r3, 0x2
    blt lbl_8005F86C
    li r27, 0x0
    li r30, 0x0
    lis r3, lbl_803906D0@ha
    addi r28, r3, lbl_803906D0@l
lbl_8005F7D0:
    lwzx r3, r28, r30
    lwz r31, 0xc(r3)
    b lbl_8005F854
lbl_8005F7DC:
    lwz r3, 0x0(r31)
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_8005F7FC
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005F804
lbl_8005F7FC:
    lwz r31, 0xc(r31)
    b lbl_8005F854
lbl_8005F804:
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8005F844
    bl fn_8005E4A4
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_8005F830
    lwz r3, 0x0(r31)
    lwz r4, 0x3854(r4)
    bl fn_800602FC
    b lbl_8005F83C
lbl_8005F830:
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_800602FC
lbl_8005F83C:
    lwz r31, 0xc(r31)
    b lbl_8005F854
lbl_8005F844:
    bl fn_8005FE70
    lwz r3, 0x0(r31)
    bl fn_80060104
    lwz r31, 0xc(r31)
lbl_8005F854:
    cmpwi r31, 0x0
    bne lbl_8005F7DC
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x4
    blt lbl_8005F7D0
lbl_8005F86C:
    mr r3, r29
    bl fn_8005FB40
    mr r3, r29
    bl fn_80060320
    mr r3, r29
    bl fn_800677D8
    addi r3, r29, 0x160
    bl fn_800789C4
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

void fn_8005F8A4(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r4;
    s8 *temp_r3;

    M2C_FIELD(arg0, s32 *, 0x38C8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x38C8) & 0xFFFFFFDF));
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0xFFFFFBFF));
    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0xFFFFF7FF);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (temp_r5);
    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x68));
    if ((s32) (temp_r4 & 0x100000) != 0) {
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) ((s32) (temp_r5 | 0x800));
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) ((s32) (temp_r4 & 0xFFEFFFFF));
    }
    fn_8006760C((s8 *) (arg0));
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x1644));
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1640) = (s32) (temp_r0);
        M2C_FIELD(arg0, s32 *, 0x1644) = (s32) (0);
    }
    fn_8005EAF4();
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x8000) == 0) {
        temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x3864));
        if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x9B0) > 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x64) | 4));
        } else {
            M2C_FIELD(arg0, s32 *, 0x64) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x64) & 0xFFFFFFFB));
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x64) | 4));
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) != 0) {
        var_r4 = (s32) (0);
    } else {
        var_r4 = (s32) (fn_80096630((s8 *) (arg0), (s32) (0)));
    }
    fn_8008C630((s8 *) (arg0), (s32) (var_r4));
    fn_8008C058((s8 *) (arg0));
    if (((s32) (M2C_FIELD(arg0, s32 *, 0) & 2) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1640) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x163C) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) == 0)) {
        fn_8008C500((s8 *) (arg0));
        fn_8006137C((s8 *) (arg0));
        fn_80071FD8((s32) (arg0));
        fn_80072AC8((s32) (arg0));
        fn_800748A8((s32) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFEFFFF));
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (0);
}

// asm_to_cpp: fn_8005FA34
asm void fn_8005FA34(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r30, r3
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_8005FB28
    li r31, 0x0
    li r29, 0x0
    li r28, 0x1
    lis r3, lbl_803906D0@ha
    addi r27, r3, lbl_803906D0@l
lbl_8005FA6C:
    lwzx r3, r27, r29
    lwz r0, 0x390c(r30)
    cmplw r0, r3
    beq lbl_8005FAD8
    lwz r26, 0xc(r3)
    b lbl_8005FAD0
lbl_8005FA84:
    lwz r3, 0x0(r26)
    lwz r0, 0x4(r3)
    slw r4, r28, r0
    lwz r3, 0x80(r30)
    and r0, r3, r4
    cmpwi r0, 0x0
    bne lbl_8005FACC
    or r0, r3, r4
    stw r0, 0x80(r30)
    lwz r4, 0x0(r26)
    lwz r3, 0x80(r4)
    lwz r0, 0x4(r30)
    slw r0, r28, r0
    or r0, r3, r0
    stw r0, 0x80(r4)
    mr r3, r30
    lwz r4, 0x0(r26)
    bl fn_80073974
lbl_8005FACC:
    lwz r26, 0xc(r26)
lbl_8005FAD0:
    cmpwi r26, 0x0
    bne lbl_8005FA84
lbl_8005FAD8:
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_8005FA6C
    mr r3, r30
    bl fn_80073EB8
    mr r3, r30
    bl fn_80069840
    mr r3, r30
    bl fn_800680C8
    mr r3, r30
    bl fn_80060DCC
    mr r3, r30
    bl fn_80060EDC
    mr r3, r30
    bl fn_80060A74
    mr r3, r30
    bl fn_80061B60
    mr r3, r30
    bl fn_800A50A4
lbl_8005FB28:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005FB40
asm void fn_8005FB40(s32 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005FB5C
    li r0, 0x1
    stw r0, 0x163c(r3)
    blr
lbl_8005FB5C:
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    beqlr
    li r8, 0x0
    li r4, 0x0
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_8005FB80:
    lwzx r5, r6, r4
    lwz r7, 0xc(r5)
    b lbl_8005FBA8
lbl_8005FB8C:
    lwz r5, 0x0(r7)
    lwz r0, 0x68(r5)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8005FBA4
    addi r8, r8, 0x1
lbl_8005FBA4:
    lwz r7, 0xc(r7)
lbl_8005FBA8:
    cmpwi r7, 0x0
    bne lbl_8005FB8C
    addi r4, r4, 0x4
    bdnz lbl_8005FB80
    cmpwi r8, 0x0
    bnelr
    li r0, 0x0
    stw r0, 0x163c(r3)
    blr
}

// asm_to_cpp: fn_8005FBCC
asm void fn_8005FBCC(s8 *arg0, u32 arg1, s32 arg2) {
    nofralloc
    lwz r6, 0xc(r3)
    b lbl_8005FC18
lbl_8005FBD4:
    lwz r3, 0x0(r6)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005FC14
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_8005FC14
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8005FC14
    cmplw r3, r4
    beq lbl_8005FC14
    stw r5, 0x1644(r3)
lbl_8005FC14:
    lwz r6, 0xc(r6)
lbl_8005FC18:
    cmpwi r6, 0x0
    bne lbl_8005FBD4
    blr
}

void fn_8005FC24(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if ((u32) M2C_FIELD(&lbl_80395728, u32 *, 0x14) == 1U) {
        if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        }
        fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
        return;
    }
    temp_r0 = (s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x118));
    if (temp_r0 == 1) {
        temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 8));
        switch (temp_r0_2) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
            return;
        case 1:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        case 2:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
            return;
        case 3:                                     /* switch 1 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        }
    } else if (temp_r0 == 2) {
        temp_r0_3 = (s32) (M2C_FIELD(arg0, s32 *, 8));
        switch (temp_r0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (2))));
            return;
        case 1:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (2))));
            return;
        case 2:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        case 3:                                     /* switch 2 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        }
    } else if ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 4) == 1) {
        temp_r0_4 = (s32) (M2C_FIELD(arg0, s32 *, 8));
        switch (temp_r0_4) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (2))));
            return;
        case 1:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (3))));
            return;
        case 2:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (0))));
            return;
        case 3:                                     /* switch 3 */
            fn_800602FC((s8 *) (arg0), (s8 *) (fn_8005E2F4((s32) (1))));
            return;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (-1);
        M2C_FIELD(arg0, s32 *, 0x3854) = (s32) (0);
    }
}

// asm_to_cpp: fn_8005FE70
asm void fn_8005FE70(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    lwz r31, 0x3854(r3)
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r5, 0xc(r4)
    lwz r4, 0x118(r5)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    ble lbl_800600EC
    lwz r0, 0xb98(r3)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_800600EC
    lwz r0, 0x4(r5)
    cmpwi r0, 0x1
    beq lbl_8005FED8
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    bne lbl_800600EC
lbl_8005FED8:
    cmpwi r31, 0x0
    beq lbl_800600EC
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_800600EC
    lwz r0, 0x5c(r30)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_800600EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    bne lbl_8005FFF4
    lwz r3, 0x8(r31)
    addi r29, r3, 0x1
    b lbl_8005FF7C
lbl_8005FF24:
    mr r3, r29
    bl fn_8005E2F4
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_8005FF78
    cmplw r3, r30
    beq lbl_8005FF78
    lwz r5, 0x10(r3)
    lwz r0, 0x10(r30)
    cmpw r5, r0
    beq lbl_8005FF78
    lwz r3, 0x0(r3)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005FF78
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8005FF78
    mr r3, r30
    bl fn_800602FC
    b lbl_800600EC
lbl_8005FF78:
    addi r29, r29, 0x1
lbl_8005FF7C:
    cmpwi r29, 0x19
    blt lbl_8005FF24
    li r29, 0x0
    b lbl_8005FFE4
lbl_8005FF8C:
    mr r3, r29
    bl fn_8005E2F4
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_8005FFE0
    cmplw r3, r30
    beq lbl_8005FFE0
    lwz r5, 0x10(r3)
    lwz r0, 0x10(r30)
    cmpw r5, r0
    beq lbl_8005FFE0
    lwz r3, 0x0(r3)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8005FFE0
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8005FFE0
    mr r3, r30
    bl fn_800602FC
    b lbl_800600EC
lbl_8005FFE0:
    addi r29, r29, 0x1
lbl_8005FFE4:
    lwz r0, 0x8(r31)
    cmpw r29, r0
    blt lbl_8005FF8C
    b lbl_800600EC
lbl_8005FFF4:
    lwz r3, 0x8(r31)
    addi r29, r3, 0x1
    b lbl_80060068
lbl_80060000:
    mr r3, r29
    bl fn_8005E2F4
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80060064
    cmplw r3, r30
    beq lbl_80060064
    lwz r5, 0x10(r3)
    lwz r0, 0x10(r30)
    cmpw r5, r0
    beq lbl_80060064
    lwz r3, 0x0(r3)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80060064
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80060064
    mr r3, r30
    bl fn_800602FC
    li r3, 0x7d3
    addi r4, r30, 0x84
    li r5, 0x0
    bl fn_80099FD8
    b lbl_800600EC
lbl_80060064:
    addi r29, r29, 0x1
lbl_80060068:
    cmpwi r29, 0x4
    blt lbl_80060000
    li r29, 0x0
    b lbl_800600E0
lbl_80060078:
    mr r3, r29
    bl fn_8005E2F4
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_800600DC
    cmplw r3, r30
    beq lbl_800600DC
    lwz r5, 0x10(r3)
    lwz r0, 0x10(r30)
    cmpw r5, r0
    beq lbl_800600DC
    lwz r3, 0x0(r3)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800600DC
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_800600DC
    mr r3, r30
    bl fn_800602FC
    li r3, 0x7d4
    addi r4, r30, 0x84
    li r5, 0x0
    bl fn_80099FD8
    b lbl_800600EC
lbl_800600DC:
    addi r29, r29, 0x1
lbl_800600E0:
    lwz r0, 0x8(r31)
    cmpw r29, r0
    blt lbl_80060078
lbl_800600EC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80060104
asm void fn_80060104(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006013C
    bl fn_8005E4A4
    mr r4, r3
    mr r3, r31
    bl fn_800602FC
    b lbl_800602E8
lbl_8006013C:
    lwz r3, 0xac(r3)
    bl fn_8005E2CC
    mr r0, r3
    cmpwi r3, 0x0
    beq lbl_800601FC
    li r7, 0x0
    lwz r5, 0x10(r31)
    lwz r4, 0x10(r3)
    cmpw r5, r4
    bne lbl_80060168
    li r7, 0x1
lbl_80060168:
    lwz r5, 0x0(r3)
    rlwinm r4, r5, 0, 30, 30
    cmpwi r4, 0x0
    bne lbl_8006017C
    li r7, 0x1
lbl_8006017C:
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r6, 0xc(r4)
    lwz r4, 0x10(r6)
    subi r4, r4, 0x1
    cmplwi r4, 0x3
    bgt lbl_800601A8
    rlwinm r4, r5, 0, 19, 19
    cmpwi r4, 0x0
    beq lbl_800601A8
    li r7, 0x1
lbl_800601A8:
    rlwinm r4, r5, 0, 27, 27
    cmpwi r4, 0x0
    beq lbl_800601B8
    li r7, 0x1
lbl_800601B8:
    lwz r4, 0x118(r6)
    subi r4, r4, 0x1
    cmplwi r4, 0x1
    bgt lbl_800601F4
    lwz r4, 0x38cc(r3)
    cmpwi r4, 0x0
    bgt lbl_800601E0
    rlwinm r4, r5, 0, 4, 4
    cmpwi r4, 0x0
    bne lbl_800601F0
lbl_800601E0:
    lwz r3, 0x140(r3)
    subi r3, r3, 0x24c
    cmplwi r3, 0x1
    bgt lbl_800601F4
lbl_800601F0:
    li r7, 0x1
lbl_800601F4:
    cmpwi r7, 0x0
    beq lbl_800602E8
lbl_800601FC:
    li r5, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r7, 0xc(r3)
    lis r3, lbl_803906D0@ha
    addi r6, r3, lbl_803906D0@l
    li r3, 0x4
    mtctr r3
lbl_8006021C:
    lwzx r4, r6, r5
    lwz r3, 0x390c(r31)
    cmplw r3, r4
    beq lbl_800602B4
    lwz r9, 0xc(r4)
    b lbl_800602AC
lbl_80060234:
    lwz r4, 0x0(r9)
    lwz r8, 0x0(r4)
    rlwinm r3, r8, 0, 19, 19
    cmpwi r3, 0x0
    bne lbl_800602A8
    rlwinm r3, r8, 0, 27, 27
    cmpwi r3, 0x0
    bne lbl_800602A8
    rlwinm r3, r8, 0, 30, 30
    cmpwi r3, 0x0
    beq lbl_800602A8
    lwz r3, 0x118(r7)
    subi r3, r3, 0x1
    cmplwi r3, 0x1
    bgt lbl_8006029C
    rlwinm r3, r8, 0, 4, 4
    cmpwi r3, 0x0
    bne lbl_800602A8
    lwz r3, 0x140(r4)
    cmpwi r3, 0x24c
    beq lbl_800602A8
    cmpwi r3, 0x24d
    beq lbl_800602A8
    mr r3, r31
    bl fn_800602FC
    b lbl_800602E8
lbl_8006029C:
    mr r3, r31
    bl fn_800602FC
    b lbl_800602E8
lbl_800602A8:
    lwz r9, 0xc(r9)
lbl_800602AC:
    cmpwi r9, 0x0
    bne lbl_80060234
lbl_800602B4:
    addi r5, r5, 0x4
    bdnz lbl_8006021C
    lwz r3, 0x118(r7)
    subi r3, r3, 0x1
    cmplwi r3, 0x1
    bgt lbl_800602DC
    mr r3, r31
    mr r4, r0
    bl fn_800602FC
    b lbl_800602E8
lbl_800602DC:
    mr r3, r31
    li r4, 0x0
    bl fn_800602FC
lbl_800602E8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_800602FC(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, s8 **, 0x3854) = (s8 *) (arg1);
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 4));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (-1);
}

} // extern "C"
