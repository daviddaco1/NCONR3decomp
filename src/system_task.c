#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern float lbl_8049D500;
extern s32 lbl_8049D50C;
extern float lbl_8049D510;
extern float lbl_8049ED98;
extern float lbl_8049EDA0;
extern float lbl_8049EDA8;
extern float lbl_8049EDE0;

void PSQUATScale(s32 arg0, s32 arg1, f32 arg2);
s32 _restgpr_25();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_25();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
M2C_UNK fn_80019E14(s32 arg0, s32 arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8005CF00(s32 arg0, s32 arg1);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
void fn_80060320(s8 *arg0);
void fn_80060848(s8 *arg0);
void fn_80060918(s32 arg0, s32 arg1);
s32 fn_8006093C(s8 *arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_80060A74();
void fn_80060AD4(s8 *arg0);
s32 fn_80060B30(s8 *arg0, f32 farg0);
void fn_80060C24(s8 *arg0, s32 arg1);
void fn_80060D74(s8 *arg0);
void fn_80060DCC(s8 *arg0);
void fn_80060EDC(s8 *arg0);
s32 fn_80060FB8(s8 *arg0);
void fn_8006137C(s8 *arg0);
void fn_80061434(s8 *arg0);
void fn_800618C4(s8 *arg0);
void fn_800618DC(s8 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_80061944(s8 *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_800619B0(s8 *arg0);
void fn_80061B60(s8 *arg0);
void fn_80061CEC(s8 *arg0);
void fn_80061E08(s8 *arg0, s32 arg1);
s32 fn_80061F18(s8 *arg0);
void fn_80061F84(s8 *arg0, f32 farg0, f32 farg1);
void fn_80061FA0(M2C_UNK *arg0);
s32 fn_80061FB8(f32 farg0, s32 arg1);
void fn_80062018(s8 *arg0, s32 arg1, s32 arg2);
void fn_80062050(s8 *arg0, s32 arg1, s32 arg2);
void fn_8006205C(s8 *arg0);
s32 fn_800620C8(s8 *arg0);
s32 fn_800622DC(s8 *arg0);
s32 fn_80062D40(s8 *arg0);
s32 fn_80062F34(s8 *arg0);
s32 fn_80066E2C(s32 *arg0);
f32 fn_800674B8(s32 arg0, s32 arg1);
void fn_800674E4(s8 *arg0);
s32 fn_80068524();
void fn_8006A020(s32 *arg0, s32 arg1);
f32 fn_8006AFE8(s8 *arg0);
s32 fn_8006B078(s32 *arg0);
void fn_8006B0B8(s8 *arg0, s8 *arg1);
void fn_8006B1D0(s8 *arg0);
void fn_8006B2E4(s8 *arg0);
void fn_8006B380(s8 *arg0);
void fn_8006B40C(s8 *arg0);
void fn_8006B498(s8 *arg0);
void fn_8006EA1C(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_80070740();
void fn_800711E8(s32 *arg0, s32 arg1);
void fn_80071FB4(s8 *arg0);
void fn_80072A6C(s8 *arg0);
void fn_80072A84(s8 *arg0);
void fn_80072AA0(s8 *arg0);
void fn_80074E50(s8 *arg0, s32 arg1);
void fn_8007600C(s8 *arg0);
s32 fn_80089F38(s8 *arg0, s32 arg1, s8 *arg2, s32 arg3);
s32 fn_8008AE14(void);
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
s32 * fn_80099FD8(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8009A09C(s32 arg0, s32 arg1);
s32 fn_8011FE90();
f32 fn_80172688(f32 farg0);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80173580();
M2C_UNK fn_8017CF8C(s8 *arg0, s32 arg1, f32 *arg2, f32 farg0);
s32 fn_80181568(s8 *arg0, s32 arg1);
void fn_80182220(s8 *arg0, f32 farg0);
void fn_80182518(s8 *arg0, s8 *arg1);
void fn_80182744(s32 arg0, s8 *arg1);
s32 fn_80183D68(s8 *arg0);
void fn_8018EEC0(s32 arg0, f32 farg0);
M2C_UNK fn_8030DE44(s32 arg0, s32 arg1);

// asm_to_cpp: fn_80060320
asm void fn_80060320(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r31, r3
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_80060830
    lwz r0, 0x1640(r3)
    cmpwi r0, 0x0
    bne lbl_80060830
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80060830
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_800604C4
    bl fn_8005E4A4
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_800604C4
    li r29, 0x0
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80060394
    li r29, 0x1
lbl_80060394:
    mr r3, r30
    bl fn_8006AFE8
    lfs f0, lbl_8049ED98
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800603B0
    li r29, 0x1
lbl_800603B0:
    lwz r3, 0x0(r30)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800603E4
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800603E4
    lwz r0, 0x70(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800603E4
    li r29, 0x1
lbl_800603E4:
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80060404
    lwz r0, 0x70(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80060404
    li r29, 0x1
lbl_80060404:
    cmpwi r29, 0x0
    beq lbl_800604C4
    lwz r0, 0x18(r31)
    cmplwi r0, 0x19
    bne lbl_8006045C
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x3ec
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    b lbl_8006049C
lbl_8006045C:
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x14
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_8006049C:
    mr r3, r31
    bl fn_80071FB4
    mr r3, r31
    bl fn_80072A6C
    mr r3, r31
    bl fn_80072A84
    mr r3, r31
    bl fn_80072AA0
    mr r3, r31
    bl fn_80060848
lbl_800604C4:
    lwz r4, 0x70(r31)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800605A4
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_80060500
    lwz r3, 0x50(r31)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800605A4
    rlwinm r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_800605A4
lbl_80060500:
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    bne lbl_800605A4
    lwz r0, 0x18(r31)
    cmplwi r0, 0x19
    bne lbl_8006055C
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x3ec
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    b lbl_8006059C
lbl_8006055C:
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x14
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_8006059C:
    mr r3, r31
    bl fn_80060848
lbl_800605A4:
    lwz r0, 0x70(r31)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80060688
    mr r3, r31
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_80060688
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_800605F0
    lwz r3, 0x50(r3)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_800605F0
    rlwinm r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80060688
lbl_800605F0:
    lwz r0, 0x18(r31)
    cmplwi r0, 0x19
    bne lbl_80060640
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x3ec
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    b lbl_80060680
lbl_80060640:
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x14
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_80060680:
    mr r3, r31
    bl fn_80060848
lbl_80060688:
    lwz r3, 0x70(r31)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006075C
    lwz r0, 0x68(r31)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_800606B8
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8006075C
lbl_800606B8:
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8006075C
    lwz r0, 0x18(r31)
    cmplwi r0, 0x19
    bne lbl_80060714
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x3ec
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    b lbl_80060754
lbl_80060714:
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x14
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_80060754:
    mr r3, r31
    bl fn_80060848
lbl_8006075C:
    lwz r0, 0x70(r31)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80060830
    lwz r0, 0x18(r31)
    cmplwi r0, 0x19
    bne lbl_800607BC
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x3ec
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    b lbl_800607FC
lbl_800607BC:
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x14
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_800607FC:
    mr r3, r31
    bl fn_80071FB4
    mr r3, r31
    bl fn_80072A6C
    mr r3, r31
    bl fn_80072A84
    mr r3, r31
    bl fn_80072AA0
    mr r3, r31
    bl fn_80060848
    lwz r0, 0x70(r31)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x70(r31)
lbl_80060830:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80060848
asm void fn_80060848(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    bl fn_8005E4A4
    mr r31, r3
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_800608EC
    li r30, 0x1
    li r29, 0x0
    li r4, 0x0
    bl fn_8005E4D4
    b lbl_800608BC
lbl_8006088C:
    cmplw r28, r3
    beq lbl_800608AC
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_800608AC
    li r30, 0x0
    b lbl_800608C4
lbl_800608AC:
    addi r29, r29, 0x1
    mr r3, r31
    mr r4, r29
    bl fn_8005E4D4
lbl_800608BC:
    cmpwi r3, 0x0
    bne lbl_8006088C
lbl_800608C4:
    cmpwi r30, 0x0
    beq lbl_800608E0
    lwz r4, 0x0(r31)
    lis r3, 0xffe0
    subi r0, r3, 0x201
    and r0, r4, r0
    stw r0, 0x0(r31)
lbl_800608E0:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x0(r28)
lbl_800608EC:
    lwz r0, 0x70(r28)
    ori r0, r0, 0x1
    stw r0, 0x70(r28)
    mr r3, r28
    bl fn_80060D74
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_80060918(s32 arg0, s32 arg1) {
    fn_80060848((s8 *) (fn_8005E4D4((s8 *) (arg0), (s32) (arg1))));
}

// asm_to_cpp: fn_8006093C
asm s32 fn_8006093C(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_80060958
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80060960
lbl_80060958:
    li r6, 0x0
    b lbl_80060964
lbl_80060960:
    li r6, 0x1
lbl_80060964:
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    lwz r0, 0x4(r3)
    mulli r0, r0, 0x78
    add r5, r5, r0
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x1
    bne lbl_80060988
    li r6, 0x0
lbl_80060988:
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    lwz r5, 0xc(r5)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800609A8
    li r6, 0x0
lbl_800609A8:
    lwz r0, 0x58(r3)
    and r0, r0, r4
    cmpwi r0, 0x0
    beq lbl_800609BC
    li r6, 0x0
lbl_800609BC:
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800609D0
    li r6, 0x0
lbl_800609D0:
    mr r3, r6
    blr
}

// asm_to_cpp: fn_800609D8
asm s32 fn_800609D8(s8 *arg0) {
    nofralloc
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_800609F4
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800609FC
lbl_800609F4:
    li r5, 0x0
    b lbl_80060A00
lbl_800609FC:
    li r5, 0x1
lbl_80060A00:
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r3)
    mulli r0, r0, 0x78
    add r4, r4, r0
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x1
    bne lbl_80060A24
    li r5, 0x0
lbl_80060A24:
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80060A44
    li r5, 0x0
lbl_80060A44:
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_80060A58
    li r5, 0x0
lbl_80060A58:
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80060A6C
    li r5, 0x0
lbl_80060A6C:
    mr r3, r5
    blr
}

// asm_to_cpp: fn_80060A74
asm s32 fn_80060A74() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 16, 16
    rlwimi r0, r4, 0, 11, 11
    cmpwi r0, 0x0
    bnelr
    lwz r5, 0x3780(r3)
    lwz r4, 0x0(r5)
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_80060AB8
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x0
    beqlr
lbl_80060AB8:
    lwz r4, 0x0(r5)
    li r0, -0x205
    and r0, r4, r0
    stw r0, 0x0(r5)
    lwz r3, 0x3780(r3)
    b fn_80183D68
    blr
}

void fn_80060AD4(s8 *arg0) {
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0x40) != 0) {
        fn_80071FB4((s8 *) (arg0));
        fn_80072A6C((s8 *) (arg0));
        fn_80072A84((s8 *) (arg0));
        fn_80072AA0((s8 *) (arg0));
        fn_80060848((s8 *) (arg0));
    }
}

// asm_to_cpp: fn_80060B30
asm s32 fn_80060B30(s8 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    addi r11, r1, 0x38
    bl _savegpr_25
    mr r25, r3
    fmr f31, f1
    lwz r3, 0x377c(r3)
    li r4, 0x0
    bl fn_80019E14
    mr r27, r3
    li r26, 0x0
    li r31, 0x0
    lis r3, lbl_803906D0@ha
    addi r30, r3, lbl_803906D0@l
lbl_80060B70:
    lwzx r3, r30, r31
    lwz r0, 0x390c(r25)
    cmplw r0, r3
    beq lbl_80060BF4
    lwz r29, 0xc(r3)
    b lbl_80060BEC
lbl_80060B88:
    lwz r3, 0x0(r29)
    lwz r28, 0x37c4(r3)
    b lbl_80060BDC
lbl_80060B94:
    addi r3, r1, 0x8
    li r4, 0x3
    mr r5, r27
    bl fn_80173580
    lwz r5, 0x0(r28)
    cmpwi r5, 0x0
    beq lbl_80060BD8
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r5, 0x314
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    fcmpo cr0, f1, f31
    bge lbl_80060BD8
    li r3, 0x1
    b lbl_80060C08
lbl_80060BD8:
    lwz r28, 0x8(r28)
lbl_80060BDC:
    lwz r0, 0x0(r28)
    cmplwi r0, 0x1
    bne lbl_80060B94
    lwz r29, 0xc(r29)
lbl_80060BEC:
    cmpwi r29, 0x0
    bne lbl_80060B88
lbl_80060BF4:
    addi r26, r26, 0x1
    addi r31, r31, 0x4
    cmpwi r26, 0x4
    blt lbl_80060B70
    li r3, 0x0
lbl_80060C08:
    lfd f31, 0x38(r1)
    addi r11, r1, 0x38
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80060C24
asm void fn_80060C24(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    stw r30, 0x50(r3)
    stw r30, 0x54(r3)
    stw r30, 0x58(r3)
    stw r30, 0x5c(r3)
    stw r30, 0x60(r3)
    stw r30, 0x64(r3)
    stw r30, 0x68(r3)
    stw r30, 0x6c(r3)
    stw r30, 0x78(r3)
    stw r30, 0x7c(r3)
    lfs f0, lbl_8049EDA8
    stfs f0, 0x12c(r3)
    la r31, lbl_8049EDA8
    lfs f0, 0x4(r31)
    stfs f0, 0x130(r3)
    li r0, -0x1
    stw r0, 0x140(r3)
    stw r0, 0x144(r3)
    stw r0, 0x148(r3)
    stw r0, 0x150(r3)
    stw r0, 0x158(r3)
    stw r0, 0x15c(r3)
    addi r3, r3, 0x160
    bl fn_8007600C
    stw r30, 0x9ac(r29)
    stw r30, 0x9b0(r29)
    stw r30, 0x9b4(r29)
    stw r30, 0x15f8(r29)
    stw r30, 0x9c8(r29)
    stw r30, 0x9cc(r29)
    stw r30, 0x9d0(r29)
    stw r30, 0x9d4(r29)
    stw r30, 0x9d8(r29)
    stw r30, 0x9dc(r29)
    stw r30, 0x9e0(r29)
    li r0, 0x1e00
    stw r0, 0x9e4(r29)
    stw r30, 0x9e8(r29)
    stw r30, 0x9ec(r29)
    stw r30, 0x9f0(r29)
    stw r30, 0x9f4(r29)
    stw r30, 0x9f8(r29)
    stw r30, 0x9fc(r29)
    stw r30, 0xa00(r29)
    stw r30, 0xa04(r29)
    stw r30, 0xa08(r29)
    lfs f0, 0x4(r31)
    stfs f0, 0xa0c(r29)
    stw r30, 0x1640(r29)
    stw r30, 0x1644(r29)
    stw r30, 0x1650(r29)
    stfs f0, 0xa20(r29)
    stw r30, 0x3878(r29)
    stw r30, 0x38c0(r29)
    stw r30, 0x38c4(r29)
    addi r3, r1, 0x8
    bl fn_80061FA0
    lfs f31, 0x8(r31)
    lwz r3, 0x377c(r29)
    li r4, 0x3
    bl fn_80181568
    mr r4, r3
    addi r3, r29, 0x98c
    addi r5, r1, 0x8
    fmr f1, f31
    bl fn_8017CF8C
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

void fn_80060D74(s8 *arg0) {
    fn_80060C24((s8 *) (arg0), (s32) (0));
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0xFFFFFFDF));
    fn_800674E4((s8 *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) M2C_FIELD(arg0, f32 *, 0xA20);
    fn_80182518((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s8 *) (arg0 + 0x84));
}

// asm_to_cpp: fn_80060DCC
asm void fn_80060DCC(s8 *arg0) {
    nofralloc
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 21, 19
    stw r0, 0x68(r3)
    lwz r5, 0x54(r3)
    lis r4, 0xf000
    subi r0, r4, 0x5802
    and r0, r5, r0
    stw r0, 0x54(r3)
    li r4, 0x0
    lis r5, lbl_803906D0@ha
    addi r6, r5, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_80060E00:
    lwzx r5, r6, r4
    lwz r0, 0x390c(r3)
    cmplw r0, r5
    beq lbl_80060ED0
    lwz r8, 0xc(r5)
    b lbl_80060EC8
lbl_80060E18:
    lwz r5, 0x0(r8)
    lwz r0, 0x50(r5)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80060E38
    lwz r0, 0x54(r3)
    ori r0, r0, 0x1000
    stw r0, 0x54(r3)
lbl_80060E38:
    lwz r5, 0x0(r8)
    lwz r5, 0x50(r5)
    rlwinm r0, r5, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_80060E68
    rlwinm r0, r5, 0, 20, 20
    rlwimi r0, r5, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_80060E68
    lwz r0, 0x54(r3)
    ori r0, r0, 0x800
    stw r0, 0x54(r3)
lbl_80060E68:
    lwz r7, 0x0(r8)
    lwz r5, 0x50(r7)
    rlwinm r0, r5, 0, 16, 16
    rlwimi r0, r5, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_80060E98
    lwz r5, 0x54(r7)
    rlwinm r0, r5, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_80060E98
    rlwinm r0, r5, 0, 3, 1
    stw r0, 0x54(r7)
lbl_80060E98:
    lwz r7, 0x0(r8)
    lwz r0, 0x50(r7)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    bne lbl_80060EC4
    lwz r5, 0x54(r7)
    rlwinm r0, r5, 0, 6, 6
    cmpwi r0, 0x0
    bne lbl_80060EC4
    rlwinm r0, r5, 0, 2, 0
    stw r0, 0x54(r7)
lbl_80060EC4:
    lwz r8, 0xc(r8)
lbl_80060EC8:
    cmpwi r8, 0x0
    bne lbl_80060E18
lbl_80060ED0:
    addi r4, r4, 0x4
    bdnz lbl_80060E00
    blr
}

// asm_to_cpp: fn_80060EDC
asm void fn_80060EDC(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80066E2C
    clrlwi r6, r3, 18
    cmpwi r3, 0x0
    blt lbl_80060FA4
    lwz r5, 0x140(r31)
    cmpw r5, r6
    beq lbl_80060FA4
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x14(r4)
    cmpwi r0, 0x7
    beq lbl_80060F3C
    cmpwi r0, 0x1
    bne lbl_80060F78
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r4)
    cmplwi r0, 0x12
    bne lbl_80060F78
lbl_80060F3C:
    cmpwi r5, -0x1
    bne lbl_80060F60
    lwz r4, 0x3780(r31)
    cmpwi r4, 0x0
    beq lbl_80060F78
    lwz r0, 0x0(r4)
    ori r0, r0, 0x2000
    stw r0, 0x0(r4)
    b lbl_80060F78
lbl_80060F60:
    lwz r4, 0x3780(r31)
    cmpwi r4, 0x0
    beq lbl_80060F78
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x0(r4)
lbl_80060F78:
    stw r6, 0x140(r31)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80060F98
    lwz r0, 0x54(r31)
    ori r0, r0, 0x40
    stw r0, 0x54(r31)
    b lbl_80060FA4
lbl_80060F98:
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x54(r31)
lbl_80060FA4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80060FB8
asm s32 fn_80060FB8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    lwz r5, 0x0(r3)
    rlwinm r0, r5, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80060FF8
    lis r4, 0xfff6
    subi r0, r4, 0x1
    and r0, r5, r0
    stw r0, 0x0(r3)
    lwz r0, 0x14c(r3)
    stw r0, 0x140(r3)
lbl_80060FF8:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80061028
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80061028
    rlwinm r0, r4, 0, 14, 11
    stw r0, 0x0(r3)
    lwz r0, 0x14c(r3)
    stw r0, 0x140(r3)
lbl_80061028:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80061128
    li r31, 0x0
    rlwinm r0, r4, 0, 13, 11
    stw r0, 0x0(r3)
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006105C
    mr r3, r30
    bl fn_80060D74
lbl_8006105C:
    li r4, 0x0
    lwz r3, 0x50(r30)
    andis. r0, r3, 0x4010
    cmpwi r0, 0x0
    beq lbl_80061074
    li r4, 0x1
lbl_80061074:
    lwz r0, 0x60(r30)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80061088
    li r4, 0x1
lbl_80061088:
    lwz r0, 0x68(r30)
    andis. r0, r0, 0x8c0
    cmpwi r0, 0x0
    beq lbl_8006109C
    li r4, 0x1
lbl_8006109C:
    cmpwi r4, 0x0
    bne lbl_80061128
    clrrwi r6, r3, 31
    lwz r4, 0x70(r30)
    rlwinm r5, r4, 0, 30, 30
    cmpwi r5, 0x0
    bne lbl_800610C0
    rlwinm r0, r3, 0, 14, 16
    or r6, r6, r0
lbl_800610C0:
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800610D0
    oris r31, r31, 0x8000
lbl_800610D0:
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800610E4
    oris r31, r31, 0x3
    ori r31, r31, 0x8000
lbl_800610E4:
    and r0, r6, r31
    cmpwi r0, 0x0
    bne lbl_80061128
    rlwinm r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80061128
    cmpwi r5, 0x0
    beq lbl_8006110C
    mr r3, r30
    bl fn_80060D74
lbl_8006110C:
    lwz r0, 0x14c(r30)
    stw r0, 0x140(r30)
    li r0, -0x1
    stw r0, 0x144(r30)
    lwz r0, 0x70(r30)
    ori r0, r0, 0x400
    stw r0, 0x70(r30)
lbl_80061128:
    lwz r5, 0x140(r30)
    cmpwi r5, 0x0
    bge lbl_8006113C
    li r3, 0x0
    b lbl_80061364
lbl_8006113C:
    lwz r0, 0x144(r30)
    cmpw r5, r0
    beq lbl_80061360
    cmpwi r5, 0xa0
    blt lbl_80061174
    lwz r4, 0x54(r30)
    lis r3, 0xf000
    subi r0, r3, 0x4002
    and r0, r4, r0
    stw r0, 0x54(r30)
    subi r0, r5, 0xa0
    clrlwi r0, r0, 20
    stw r0, 0x158(r30)
    b lbl_80061198
lbl_80061174:
    lwz r4, 0x50(r30)
    lis r3, 0x8000
    addi r0, r3, 0x408
    and r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_80061198
    lwz r0, 0x6c(r30)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x6c(r30)
lbl_80061198:
    lwz r0, 0x54(r30)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800611B4
    lwz r0, 0x6c(r30)
    oris r0, r0, 0x2000
    stw r0, 0x6c(r30)
lbl_800611B4:
    lwz r4, 0x54(r30)
    lis r3, 0x7ff4
    addi r0, r3, 0x7fc7
    and r0, r4, r0
    stw r0, 0x54(r30)
    lwz r4, 0x6c(r30)
    lis r3, 0xa70e
    addi r0, r3, 0x2042
    and r0, r4, r0
    rlwinm r0, r0, 0, 15, 12
    stw r0, 0x6c(r30)
    lwz r4, 0x78(r30)
    lis r3, 0xfde8
    subi r0, r3, 0x1
    and r0, r4, r0
    stw r0, 0x78(r30)
    lwz r0, 0x68(r30)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80061218
    lwz r0, 0x58(r30)
    oris r0, r0, 0x6000
    ori r0, r0, 0x8
    stw r0, 0x58(r30)
    b lbl_80061248
lbl_80061218:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006123C
    lwz r4, 0x58(r30)
    lis r3, 0xc000
    subi r0, r3, 0x9
    and r0, r4, r0
    stw r0, 0x58(r30)
lbl_8006123C:
    lwz r0, 0x58(r30)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x58(r30)
lbl_80061248:
    lwz r4, 0x58(r30)
    lis r3, 0xe087
    addi r0, r3, 0x785a
    and r0, r4, r0
    stw r0, 0x58(r30)
    lwz r4, 0x5c(r30)
    lis r3, 0x3fba
    addi r0, r3, 0x1fff
    and r0, r4, r0
    stw r0, 0x5c(r30)
    lwz r4, 0x68(r30)
    lis r3, 0xf7eb
    addi r0, r3, 0x69fb
    and r3, r4, r0
    stw r3, 0x68(r30)
    lwz r0, 0x18(r30)
    cmplwi r0, 0x32
    bne lbl_80061298
    clrlwi r0, r3, 1
    stw r0, 0x68(r30)
lbl_80061298:
    lwz r0, 0x18(r30)
    cmplwi r0, 0x2c
    bne lbl_800612B0
    lwz r0, 0x68(r30)
    clrlwi r0, r0, 1
    stw r0, 0x68(r30)
lbl_800612B0:
    lwz r0, 0x6c(r30)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x6c(r30)
    lwz r0, 0x74(r30)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x74(r30)
    lwz r0, 0x78(r30)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x78(r30)
    lwz r0, 0x38c8(r30)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x38c8(r30)
    mr r3, r30
    bl fn_80070740
    lwz r3, 0x140(r30)
    cmpwi r3, 0x2000
    blt lbl_800612FC
    subi r0, r3, 0x2000
    stw r0, 0x140(r30)
lbl_800612FC:
    lwz r0, 0xc0(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc0(r30)
    mr r3, r30
    bl fn_800618C4
    lwz r0, 0x140(r30)
    stw r0, 0x144(r30)
    la r29, lbl_8049EDA8
    lfs f0, 0x4(r29)
    stfs f0, 0xec(r30)
    stfs f0, 0xf0(r30)
    li r31, 0x0
    stw r31, 0x134(r30)
    addi r3, r30, 0x160
    bl fn_8007600C
    lfs f0, 0x4(r29)
    stfs f0, 0x130(r30)
    stw r31, 0x9c8(r30)
    li r0, -0x1
    stw r0, 0x9cc(r30)
    mr r3, r30
    li r4, 0x1
    bl fn_80074E50
    li r3, 0x1
    b lbl_80061364
lbl_80061360:
    li r3, 0x0
lbl_80061364:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8006137C(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB8));
    if (temp_r4 != 0) {
        temp_r0 = (s32) (temp_r4 - 1);
        M2C_FIELD(arg0, s32 *, 0xEB8) = (s32) (temp_r0);
        if (temp_r0 == 0) {
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
        }
    }
    temp_r4_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x1634));
    if (temp_r4_2 != 0) {
        temp_r0_2 = (s32) (temp_r4_2 - 1);
        M2C_FIELD(arg0, s32 *, 0x1634) = (s32) (temp_r0_2);
        if (temp_r0_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x1630) = (s32) (-1);
        }
    }
    temp_r4_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x1608));
    if ((temp_r4_3 != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x15FC) & 0x8000) == 0)) {
        temp_r0_3 = (s32) (temp_r4_3 - 1);
        M2C_FIELD(arg0, s32 *, 0x1608) = (s32) (temp_r0_3);
        if (temp_r0_3 == 0) {
            M2C_FIELD(arg0, s32 *, 0x1600) = (s32) (-1);
            M2C_FIELD(arg0, s32 *, 0x1610) = (s32) (-1);
        }
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x80000000) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x13E4) != (s32) M2C_FIELD(arg0, s32 *, 0x13E8))) {
        M2C_FIELD(arg0, s32 *, 0x13E8) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0x13E4) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0x13EC) = (s32) (-1);
    }
}

// asm_to_cpp: fn_80061434
asm void fn_80061434(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    lfs f1, 0x130(r3)
    lfs f0, 0x12c(r3)
    fadds f0, f1, f0
    stfs f0, 0x130(r3)
    lwz r4, 0x9b0(r3)
    subi r0, r4, 0x1
    stw r0, 0x9b0(r3)
    cmpwi r0, 0x0
    bgt lbl_800614AC
    lwz r4, 0x3854(r3)
    cmpwi r4, 0x0
    beq lbl_800614A0
    lwz r0, 0x50(r4)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_800614AC
    li r0, 0x0
    stw r0, 0x9ac(r3)
    stw r0, 0x9b4(r3)
    stw r0, 0x9c0(r4)
    b lbl_800614AC
lbl_800614A0:
    li r0, 0x0
    stw r0, 0x9ac(r3)
    stw r0, 0x9b4(r3)
lbl_800614AC:
    lwz r0, 0x64(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800614D0
    lwz r4, 0xa14(r3)
    cmpwi r4, 0x0
    blt lbl_800614D0
    subi r0, r4, 0x1
    stw r0, 0xa14(r3)
lbl_800614D0:
    la r5, lbl_8049EDA8
    lfs f1, 0xc(r5)
    lfs f0, 0x12c(r3)
    fmuls f0, f1, f0
    lwz r4, 0x3780(r3)
    stfs f0, 0x10(r4)
    lfs f0, 0x4(r5)
    lfs f3, 0x378c(r3)
    fcmpu cr0, f0, f3
    beq lbl_80061534
    lwz r4, 0x3780(r3)
    lfs f2, 0xc(r4)
    lfs f1, 0x3784(r3)
    lfs f0, 0x10(r5)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    opword 0x4C411382
    bne lbl_80061534
    lfs f0, 0x3788(r3)
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_80061534
    lfs f0, 0x10(r4)
    fmuls f0, f0, f3
    stfs f0, 0x10(r4)
lbl_80061534:
    lwz r5, 0x9e8(r3)
    cmpwi r5, 0x0
    ble lbl_80061580
    la r4, lbl_8049EDA8
    lfs f1, 0x14(r4)
    lfs f0, 0x12c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    subf r0, r0, r5
    stw r0, 0x9e8(r3)
    cmpwi r0, 0x0
    ble lbl_80061578
    lwz r0, 0x140(r3)
    cmpwi r0, 0x1
    beq lbl_80061580
lbl_80061578:
    li r0, 0x0
    stw r0, 0x9e8(r3)
lbl_80061580:
    lwz r0, 0x178(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800615C8
    lfs f1, 0x1cc(r3)
    la r4, lbl_8049EDA8
    lfs f0, 0x18(r4)
    fcmpo cr0, f1, f0
    bge lbl_800615C8
    lfs f1, 0x1d0(r3)
    lfs f0, 0x12c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800615C8
    lwz r0, 0x68(r3)
    ori r0, r0, 0x4000
    stw r0, 0x68(r3)
    b lbl_800615D4
lbl_800615C8:
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x68(r3)
lbl_800615D4:
    lwz r5, 0x9ec(r3)
    cmpwi r5, 0x0
    ble lbl_80061664
    lwz r0, 0xb98(r3)
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8006161C
    la r4, lbl_8049EDA8
    lfs f1, 0x1c(r4)
    lfs f0, 0x12c(r3)
    fmuls f1, f1, f0
    lfs f0, 0x14(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    subf r0, r0, r5
    stw r0, 0x9ec(r3)
lbl_8006161C:
    la r4, lbl_8049EDA8
    lfs f1, 0x14(r4)
    lfs f0, 0x12c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r0, 0x9ec(r3)
    subf r0, r4, r0
    stw r0, 0x9ec(r3)
    cmpwi r0, 0x0
    bgt lbl_80061654
    li r0, 0x0
    stw r0, 0x9ec(r3)
lbl_80061654:
    mr r3, r31
    bl fn_80072A6C
    mr r3, r31
    bl fn_80072A84
lbl_80061664:
    lwz r4, 0xa00(r31)
    cmpwi r4, 0x0
    ble lbl_800616A4
    la r3, lbl_8049EDA8
    lfs f1, 0x14(r3)
    lfs f0, 0x12c(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    subf r0, r0, r4
    stw r0, 0xa00(r31)
    cmpwi r0, 0x0
    bgt lbl_800616A4
    li r0, 0x0
    stw r0, 0xa00(r31)
lbl_800616A4:
    lwz r4, 0xa04(r31)
    cmpwi r4, 0x0
    ble lbl_800616F8
    la r3, lbl_8049EDA8
    lfs f1, 0x14(r3)
    lfs f0, 0x12c(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    subf r0, r0, r4
    stw r0, 0xa04(r31)
    cmpwi r0, 0x0
    bgt lbl_800616F8
    li r0, 0x0
    stw r0, 0xa04(r31)
    lwz r4, 0x78(r31)
    lis r3, 0xf801
    subi r0, r3, 0x5
    and r0, r4, r0
    stw r0, 0x78(r31)
lbl_800616F8:
    lwz r3, 0x1650(r31)
    li r4, 0x1
    li r5, 0x0
    lis r30, 0x2
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0x1650(r31)
    lwz r3, 0xa10(r31)
    li r4, 0x1
    li r5, 0x0
    subi r6, r30, 0x7961
    bl fn_801728DC
    stw r3, 0xa10(r31)
    cmpwi r3, 0x14
    blt lbl_8006174C
    lwz r0, 0xb98(r31)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8006174C
    li r0, 0x0
    stw r0, 0xa10(r31)
lbl_8006174C:
    lwz r3, 0x9d0(r31)
    cmpwi r3, 0x0
    ble lbl_80061770
    subi r0, r3, 0x1
    stw r0, 0x9d0(r31)
    cmpwi r0, 0x0
    bgt lbl_80061770
    li r0, 0x0
    stw r0, 0x9d0(r31)
lbl_80061770:
    lwz r3, 0x9dc(r31)
    cmpwi r3, 0x0
    ble lbl_80061794
    subi r0, r3, 0x1
    stw r0, 0x9dc(r31)
    cmpwi r0, 0x0
    bgt lbl_80061794
    li r0, 0x0
    stw r0, 0x9dc(r31)
lbl_80061794:
    lwz r3, 0x50(r31)
    rlwinm r0, r3, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_80061854
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_80061854
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80061854
    lwz r4, 0x9d4(r31)
    cmpwi r4, 0x0
    ble lbl_80061854
    la r3, lbl_8049EDA8
    lfs f1, 0x14(r3)
    lfs f0, 0x12c(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    subf r0, r0, r4
    stw r0, 0x9d4(r31)
    cmpwi r0, 0x0
    bge lbl_80061800
    li r0, 0x0
    stw r0, 0x9d4(r31)
lbl_80061800:
    lwz r0, 0xb98(r31)
    clrlwi r0, r0, 26
    cmpwi r0, 0x0
    beq lbl_80061854
    lwz r4, 0x9d4(r31)
    cmpwi r4, 0x0
    beq lbl_80061840
    la r3, lbl_8049EDA8
    lfs f1, 0x14(r3)
    lfs f0, 0x12c(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    subf r0, r0, r4
    stw r0, 0x9d4(r31)
lbl_80061840:
    lwz r0, 0x9d4(r31)
    cmpwi r0, 0x0
    bge lbl_80061854
    li r0, 0x0
    stw r0, 0x9d4(r31)
lbl_80061854:
    lwz r0, 0x38c0(r31)
    cmpwi r0, 0x0
    beq lbl_800618A4
    lwz r0, 0x17c(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800618AC
    lwz r3, 0x38c4(r31)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0x38c4(r31)
    cmpwi r3, 0x258
    ble lbl_800618AC
    li r0, 0x0
    stw r0, 0x38c4(r31)
    stw r0, 0x38c0(r31)
    b lbl_800618AC
lbl_800618A4:
    li r0, 0x0
    stw r0, 0x38c4(r31)
lbl_800618AC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800618C4
asm void fn_800618C4(s8 *arg0) {
    nofralloc
    la r4, lbl_8049EDA8
    lfs f0, 0x4(r4)
    stfs f0, 0x3784(r3)
    stfs f0, 0x3788(r3)
    stfs f0, 0x378c(r3)
    blr
}

// asm_to_cpp: fn_800618DC
asm void fn_800618DC(s8 *arg0, s32 arg1, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8006193C
    stfs f1, 0x3784(r3)
    stfs f2, 0x3788(r3)
    frsp f2, f2
    frsp f0, f1
    fsubs f2, f2, f0
    lfd f1, lbl_8049EDA0
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r4, lbl_8049EDA8
    lfs f0, 0x20(r4)
    fdivs f1, f1, f0
    lfs f0, 0x24(r4)
    fsubs f0, f1, f0
    fdivs f0, f2, f0
    stfs f0, 0x378c(r3)
lbl_8006193C:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80061944
asm void fn_80061944(s8 *arg0, s32 arg1, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800619A8
    stfs f1, 0x3784(r3)
    stfs f2, 0x3788(r3)
    frsp f2, f2
    frsp f0, f1
    fsubs f2, f2, f0
    lfd f1, lbl_8049EDA0
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r4, lbl_8049EDA8
    lfs f0, 0x20(r4)
    fdivs f1, f1, f0
    lfs f0, 0x24(r4)
    fsubs f0, f1, f0
    fadds f0, f0, f2
    fdivs f0, f2, f0
    stfs f0, 0x378c(r3)
lbl_800619A8:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800619B0
asm void fn_800619B0(s8 *arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r31, r3
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80061B3C
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80061B3C
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_80061B3C
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80061B3C
    lwz r0, 0x50(r31)
    andis. r0, r0, 0xc010
    cmpwi r0, 0x0
    bne lbl_80061B3C
    lwz r0, 0x68(r31)
    rlwinm r0, r0, 0, 8, 9
    cmpwi r0, 0x0
    bne lbl_80061B3C
    lwz r0, 0x58(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80061B3C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 12, 14
    cmpwi r0, 0x0
    bne lbl_80061B3C
    mr r3, r31
    bl fn_8005E4A4
    mr r30, r3
    lwz r0, 0x58(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80061B3C
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_80061B3C
    lwz r3, 0x50(r3)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80061B3C
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x20
    bl fn_80182744
    lwz r3, 0x377c(r30)
    addi r4, r1, 0x14
    bl fn_80182744
    lfs f31, 0x24(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8001B8B8
    stfs f31, 0xc(r1)
    addi r3, r1, 0x8
    bl fn_8001B8BC
    la r30, lbl_8049EDA8
    lfs f0, 0x28(r30)
    fcmpo cr0, f1, f0
    ble lbl_80061B3C
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x8
    mr r4, r3
    lfs f1, 0x28(r30)
    bl PSQUATScale
    lfs f1, 0x8(r1)
    lfs f0, 0x14(r1)
    fadds f0, f1, f0
    stfs f0, 0x8(r1)
    stfs f31, 0xc(r1)
    lfs f1, 0x10(r1)
    lfs f0, 0x1c(r1)
    fadds f0, f1, f0
    stfs f0, 0x10(r1)
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x8
    lfs f1, 0x2c(r30)
    bl fn_8001D9D0
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x20
    bl fn_80182518
    lwz r3, 0x377c(r31)
    addi r4, r31, 0x84
    bl fn_80182744
lbl_80061B3C:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80061B60
asm void fn_80061B60(s8 *arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r31, r3
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80061CC8
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80061CC8
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_80061CC8
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80061CC8
    lwz r0, 0x50(r31)
    andis. r0, r0, 0xc010
    cmpwi r0, 0x0
    bne lbl_80061CC8
    lwz r0, 0x68(r31)
    rlwinm r0, r0, 0, 8, 9
    cmpwi r0, 0x0
    bne lbl_80061CC8
    lwz r0, 0x58(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80061CC8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 12, 14
    cmpwi r0, 0x0
    bne lbl_80061CC8
    mr r3, r31
    bl fn_8005E4A4
    mr r30, r3
    lwz r0, 0x58(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80061CC8
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_80061CC8
    lwz r3, 0x50(r3)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80061CC8
    lwz r3, 0x377c(r31)
    addi r4, r1, 0x20
    bl fn_80182744
    lwz r3, 0x377c(r30)
    addi r4, r1, 0x14
    bl fn_80182744
    lfs f31, 0x24(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8001B8B8
    stfs f31, 0xc(r1)
    addi r3, r1, 0x8
    bl fn_8001B8BC
    fmr f31, f1
    la r3, lbl_8049EDA8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    ble lbl_80061CAC
    lwz r0, 0x140(r31)
    cmpwi r0, 0x1
    bne lbl_80061CA4
    li r0, 0xaf
    stw r0, 0x14c(r31)
    lwz r0, 0x0(r31)
    oris r0, r0, 0x2
    stw r0, 0x0(r31)
lbl_80061CA4:
    mr r3, r31
    bl fn_800619B0
lbl_80061CAC:
    la r3, lbl_8049EDA8
    lfs f0, 0x30(r3)
    fcmpo cr0, f31, f0
    bge lbl_80061CC8
    lwz r0, 0x6c(r31)
    ori r0, r0, 0x1000
    stw r0, 0x6c(r31)
lbl_80061CC8:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80061CEC
asm void fn_80061CEC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r30, r3
    lwz r0, 0x164c(r3)
    mulli r0, r0, 0x350
    add r4, r3, r0
    addi r31, r4, 0x1654
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_80061DF0
    li r3, 0x0
    li r4, 0x12c
    bl fn_8005CF00
    li r0, 0x96
    srawi r4, r3, 31
    li r28, 0x0
    subfc r0, r0, r3
    adde r29, r4, r28
    mr r3, r30
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_80061D78
    lwz r0, 0x0(r30)
    oris r0, r0, 0x80
    stw r0, 0x0(r30)
    slwi r0, r29, 2
    add r3, r31, r0
    lwz r3, 0x344(r3)
    lwz r4, 0x4(r30)
    bl fn_8009A09C
    b lbl_80061DF0
lbl_80061D78:
    lwz r0, 0x1650(r30)
    cmpwi r0, 0x1e
    blt lbl_80061DF0
    stw r28, 0x1650(r30)
    lwz r0, 0x60(r30)
    rlwinm r0, r0, 0, 25, 27
    cmplwi r0, 0x10
    beq lbl_80061DAC
    cmplwi r0, 0x20
    beq lbl_80061DC4
    cmplwi r0, 0x40
    beq lbl_80061DDC
    b lbl_80061DF0
lbl_80061DAC:
    slwi r0, r29, 2
    add r3, r31, r0
    lwz r3, 0x32c(r3)
    lwz r4, 0x4(r30)
    bl fn_8009A09C
    b lbl_80061DF0
lbl_80061DC4:
    slwi r0, r29, 2
    add r3, r31, r0
    lwz r3, 0x334(r3)
    lwz r4, 0x4(r30)
    bl fn_8009A09C
    b lbl_80061DF0
lbl_80061DDC:
    slwi r0, r29, 2
    add r3, r31, r0
    lwz r3, 0x33c(r3)
    lwz r4, 0x4(r30)
    bl fn_8009A09C
lbl_80061DF0:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80061E08
asm void fn_80061E08(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r3
    mr r27, r4
    lwz r29, 0x3780(r3)
    lwz r4, 0x3854(r3)
    cmpwi r4, 0x0
    beq lbl_80061E90
    lwz r28, 0x3780(r4)
    lwz r0, 0x9cc(r4)
    cmpwi r0, 0x0
    blt lbl_80061F00
    lwz r0, 0x54(r3)
    ori r0, r0, 0x10
    stw r0, 0x54(r3)
    lwz r0, 0x9cc(r4)
    cmpwi r0, 0x0
    bne lbl_80061E7C
    lwz r3, 0x1c(r28)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    mr r30, r3
    lfs f1, 0xc(r28)
    bl fn_80061FB8
    subf r3, r3, r30
    addi r0, r3, 0x1
lbl_80061E7C:
    lwz r3, 0x3854(r31)
    lwz r3, 0x9c8(r3)
    add r0, r0, r27
    add r0, r3, r0
    b lbl_80061EB0
lbl_80061E90:
    lwz r3, 0x1c(r29)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    mr r30, r3
    lfs f1, 0xc(r29)
    bl fn_80061FB8
    subf r3, r3, r30
    addi r0, r3, 0x1
lbl_80061EB0:
    lfs f1, 0xc(r29)
    stfs f1, 0x3784(r31)
    lwz r3, 0x1c(r29)
    lfs f0, 0xc(r3)
    stfs f0, 0x3788(r31)
    fsubs f2, f0, f1
    lfd f1, lbl_8049EDA0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049EDA8
    lfs f0, 0x20(r3)
    fdivs f1, f1, f0
    lfs f0, 0x24(r3)
    fsubs f0, f1, f0
    fdivs f0, f2, f0
    stfs f0, 0x378c(r31)
lbl_80061F00:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80061F18
asm s32 fn_80061F18(s8 *arg0) {
    nofralloc
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r5, 0xc(r4)
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80061F3C
    li r3, 0x0
    blr
lbl_80061F3C:
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r4)
    cmplwi r0, 0xc
    beq lbl_80061F58
    cmplwi r0, 0x1e
    bne lbl_80061F7C
lbl_80061F58:
    lwz r0, 0x6c(r5)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80061F7C
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80061F7C
    li r3, 0x0
    blr
lbl_80061F7C:
    li r3, 0x1
    blr
}

void fn_80061F84(s8 *arg0, f32 farg0, f32 farg1) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x9A4) + farg0;
    M2C_FIELD(arg0, f32 *, 0x9A4) = temp_f0;
    if (farg1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x9A4) = farg1;
    }
}

// asm_to_cpp: fn_80061FA0
asm void fn_80061FA0(M2C_UNK *arg0) {
    nofralloc
    la r4, lbl_8049EDA8
    lfs f0, 0x4(r4)
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

s32 fn_80061FB8(f32 farg0, s32 arg1) {
    f32 temp_f1;
    s32 var_r3;
    s32 var_r3_2;

    temp_f1 = M2C_FIELD(&lbl_8049EDA8, f32 *, 0x20) * farg0;
    if (temp_f1 > M2C_FIELD(&lbl_8049EDA8, f32 *, 4)) {
        var_r3_2 = (s32) ((s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x34) + temp_f1));
    } else {
        var_r3_2 = (s32) ((s32) (temp_f1 - M2C_FIELD(&lbl_8049EDA8, f32 *, 0x34)));
    }
    var_r3 = (s32) (var_r3_2 - 1);
    if (var_r3 < 0) {
        var_r3 = (s32) (0);
    }
    return (s32) (var_r3);
}

void fn_80062018(s8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x15F8));
    if (temp_r0 < 0x40) {
        M2C_FIELD((arg0 + (temp_r0 * 8)), s32 *, 0x13FC) = (s32) (arg1);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x15F8) * 8)), s32 *, 0x13F8) = (s32) (arg2);
        M2C_FIELD(arg0, s32 *, 0x15F8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x15F8) + 1));
    }
}

void fn_80062050(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x15F8) = (s32) (0);
    fn_80062018((s8 *) (arg0), (s32) (arg1), (s32) (arg2));
}

void fn_8006205C(s8 *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0xB94) & 0x800) != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0x01000000) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x200) == 0)) {
        if ((s32) (lbl_8049D50C & 2) != 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 1));
            return;
        }
        if ((s32) (lbl_8049D50C & 1) == 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 1));
        }
    }
}

// asm_to_cpp: fn_800620C8
asm s32 fn_800620C8(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x50(r3)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80062284
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80062260
    li r0, 0x30
    stw r0, 0x140(r3)
    li r0, -0x1
    stw r0, 0x144(r3)
    lwz r4, 0x60(r3)
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80062124
    bl fn_8006B498
    b lbl_80062138
lbl_80062124:
    rlwinm r0, r4, 0, 17, 17
    rlwimi r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80062138
    bl fn_8006B40C
lbl_80062138:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800621AC
lbl_80062148:
    lfs f1, 0xf8(r31)
    lfs f0, lbl_8049EDE0
    fcmpu cr0, f1, f0
    bne lbl_80062164
    la r3, lbl_8049EDE0
    lfs f0, 0x4(r3)
    stfs f0, 0xf8(r31)
lbl_80062164:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 17, 17
    rlwimi r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80062184
    li r0, 0x94
    stw r0, lbl_8049D500
    b lbl_80062260
lbl_80062184:
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800621A0
    li r0, 0x34
    stw r0, lbl_8049D500
    b lbl_80062260
lbl_800621A0:
    li r0, 0x33
    stw r0, lbl_8049D500
    b lbl_80062260
lbl_800621AC:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800621C8
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_80062148
lbl_800621C8:
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80062224
    lfs f0, lbl_8049EDE0
    stfs f0, 0xf8(r31)
    stfs f0, 0xf4(r31)
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80062200
    li r0, 0x38
    stw r0, lbl_8049D500
    b lbl_80062260
lbl_80062200:
    rlwinm r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80062218
    li r0, 0x36
    stw r0, lbl_8049D500
    b lbl_80062260
lbl_80062218:
    li r0, 0x37
    stw r0, lbl_8049D500
    b lbl_80062260
lbl_80062224:
    lfs f0, lbl_8049EDE0
    stfs f0, 0xf8(r31)
    stfs f0, 0xf4(r31)
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8006224C
    li r0, 0x32
    stw r0, lbl_8049D500
    b lbl_80062260
lbl_8006224C:
    rlwinm r0, r3, 0, 13, 13
    subfic r0, r0, 0x0
    subfe r3, r0, r0
    addi r0, r3, 0x31
    stw r0, lbl_8049D500
lbl_80062260:
    lwz r4, 0x54(r31)
    lis r3, 0xfe00
    subi r0, r3, 0x5
    and r0, r4, r0
    stw r0, 0x54(r31)
    mr r3, r31
    bl fn_8006205C
    lwz r3, lbl_8049D500
    b lbl_800622C8
lbl_80062284:
    lwz r5, 0x54(r3)
    lis r4, 0xfe00
    subi r0, r4, 0x5
    and r0, r5, r0
    ori r0, r0, 0x1
    stw r0, 0x54(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_800622B8
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800622C4
lbl_800622B8:
    lfs f0, lbl_8049EDE0
    stfs f0, 0x10c(r3)
    stfs f0, 0x110(r3)
lbl_800622C4:
    li r3, -0x2
lbl_800622C8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800622DC
asm s32 fn_800622DC(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80062348
    lwz r4, 0x54(r3)
    rlwinm r0, r4, 0, 29, 29
    rlwimi r0, r4, 0, 6, 6
    cmpwi r0, 0x0
    bne lbl_80062324
    lwz r0, 0x60(r3)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80062348
lbl_80062324:
    lwz r5, 0x54(r3)
    lis r4, 0xfe00
    subi r0, r4, 0x5
    and r0, r5, r0
    stw r0, 0x54(r3)
    lwz r0, 0x60(r3)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x60(r3)
    b lbl_80062360
lbl_80062348:
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_80062360
    li r3, -0x2
    b lbl_80062D2C
lbl_80062360:
    lwz r0, 0x54(r3)
    rlwinm r4, r0, 0, 6, 4
    stw r4, 0x54(r3)
    lwz r5, 0x0(r3)
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800623D4
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800623D4
    rlwinm r0, r5, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_800623D4
    rlwinm r0, r5, 0, 22, 20
    stw r0, 0x0(r3)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_800623D4
    rlwinm r0, r4, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_800623C4
    lis r4, 0x8
    addi r0, r4, 0x841
    stw r0, 0x60(r3)
    b lbl_800623CC
lbl_800623C4:
    li r0, 0x41
    stw r0, 0x60(r3)
lbl_800623CC:
    li r0, 0x0
    stw r0, 0x64(r3)
lbl_800623D4:
    lwz r5, 0x60(r3)
    rlwinm r0, r5, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_800623F4
    lwz r0, 0x78(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_80062420
lbl_800623F4:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 20, 21
    cmpwi r0, 0x0
    bne lbl_80062420
    lwz r0, 0x18(r3)
    cmplwi r0, 0x1c
    bne lbl_800624F4
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800624F4
lbl_80062420:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_800624A0
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_80062500
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_80062460
    lwz r0, 0x78(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80062468
lbl_80062460:
    li r0, 0x0
    b lbl_80062474
lbl_80062468:
    lis r4, 0xa800
    addi r0, r4, 0x6d00
    and r0, r5, r0
lbl_80062474:
    cmpwi r0, 0x0
    bne lbl_80062490
    lfs f0, lbl_8049EDE0
    stfs f0, 0x10c(r3)
    stfs f0, 0x110(r3)
    li r3, -0x2
    b lbl_80062D2C
lbl_80062490:
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x68(r3)
    b lbl_80062500
lbl_800624A0:
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_800624C0
    lwz r0, 0x78(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800624E4
lbl_800624C0:
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_800624E4
    li r0, 0x6c
    stw r0, 0x150(r3)
    stw r0, lbl_8049D500
    li r3, 0x6c
    b lbl_80062D2C
lbl_800624E4:
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x68(r3)
    b lbl_80062500
lbl_800624F4:
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x68(r3)
lbl_80062500:
    lwz r4, 0x64(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80062524
    lwz r0, 0x60(r3)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x60(r3)
    rlwinm r0, r4, 0, 31, 29
    stw r0, 0x64(r3)
lbl_80062524:
    li r0, -0x1
    stw r0, 0x144(r3)
    mr r3, r31
    bl fn_80072A6C
    mr r3, r31
    bl fn_80061CEC
    lwz r3, 0x64(r31)
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80062588
    lwz r4, 0x50(r31)
    rlwinm r0, r4, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_8006256C
    li r3, 0x92
    stw r3, lbl_8049D500
    li r3, 0x92
    b lbl_80062D2C
lbl_8006256C:
    rlwinm r0, r4, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80062588
    li r3, 0x93
    stw r3, lbl_8049D500
    li r3, 0x93
    b lbl_80062D2C
lbl_80062588:
    lwz r4, 0x60(r31)
    rlwinm r0, r4, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_800625D4
    lwz r5, 0x50(r31)
    rlwinm r0, r5, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_800625B8
    li r3, 0x69
    stw r3, lbl_8049D500
    li r3, 0x69
    b lbl_80062D2C
lbl_800625B8:
    rlwinm r0, r5, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_800625D4
    li r3, 0x6a
    stw r3, lbl_8049D500
    li r3, 0x6a
    b lbl_80062D2C
lbl_800625D4:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80062708
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80062608
    lwz r0, 0x60(r31)
    oris r0, r0, 0x8
    stw r0, 0x60(r31)
    mr r3, r31
    bl fn_8006B1D0
    b lbl_80062838
lbl_80062608:
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006262C
    lwz r0, 0x60(r31)
    oris r0, r0, 0x8
    stw r0, 0x60(r31)
    mr r3, r31
    bl fn_8006B1D0
    b lbl_80062838
lbl_8006262C:
    rlwinm r0, r4, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80062650
    lwz r0, 0x60(r31)
    oris r0, r0, 0x8
    stw r0, 0x60(r31)
    mr r3, r31
    bl fn_8006B2E4
    b lbl_80062838
lbl_80062650:
    rlwinm r0, r4, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80062674
    lwz r0, 0x60(r31)
    oris r0, r0, 0x8
    stw r0, 0x60(r31)
    mr r3, r31
    bl fn_8006B380
    b lbl_80062838
lbl_80062674:
    rlwinm r0, r4, 0, 17, 17
    rlwimi r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006269C
    lwz r0, 0x60(r31)
    oris r0, r0, 0x8
    stw r0, 0x60(r31)
    mr r3, r31
    bl fn_8006B40C
    b lbl_80062838
lbl_8006269C:
    li r0, -0x1
    stw r0, 0x144(r31)
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_800626C4
    li r3, 0x6c
    stw r3, 0x150(r31)
    stw r3, lbl_8049D500
    b lbl_80062D2C
lbl_800626C4:
    lwz r0, 0x60(r31)
    rlwinm r0, r0, 0, 23, 21
    oris r0, r0, 0x8
    ori r0, r0, 0x880
    stw r0, 0x60(r31)
    lwz r3, 0x3864(r31)
    cmpwi r3, 0x0
    beq lbl_800626E8
    b lbl_800626EC
lbl_800626E8:
    lwz r3, 0x3854(r31)
lbl_800626EC:
    cmpwi r3, 0x0
    beq lbl_800626FC
    mr r4, r31
    bl fn_8006B0B8
lbl_800626FC:
    li r3, 0x5b
    stw r3, lbl_8049D500
    b lbl_80062D2C
lbl_80062708:
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_80062738
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006272C
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_80062738
lbl_8006272C:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80062744
lbl_80062738:
    mr r3, r31
    bl fn_8006B1D0
    b lbl_800627B0
lbl_80062744:
    rlwinm r0, r4, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80062768
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80062768
    mr r3, r31
    bl fn_8006B2E4
    b lbl_800627B0
lbl_80062768:
    rlwinm r0, r4, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_8006278C
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8006278C
    mr r3, r31
    bl fn_8006B380
    b lbl_800627B0
lbl_8006278C:
    rlwinm r0, r4, 0, 17, 17
    rlwimi r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_800627B0
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_800627B0
    mr r3, r31
    bl fn_8006B40C
lbl_800627B0:
    lwz r0, 0x50(r31)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800627E0
    la r3, lbl_8049EDE0
    lfs f0, 0x10c(r31)
    lfs f1, 0x8(r3)
    fmuls f0, f0, f1
    stfs f0, 0x10c(r31)
    lfs f0, 0x100(r31)
    fmuls f0, f0, f1
    stfs f0, 0x100(r31)
lbl_800627E0:
    lfs f1, lbl_8049EDE0
    lfs f0, 0x10c(r31)
    fcmpu cr0, f1, f0
    beq lbl_800627FC
    fcmpo cr0, f0, f1
    bge lbl_800627FC
    stfs f1, 0x10c(r31)
lbl_800627FC:
    lwz r0, 0x60(r31)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80062814
    lfs f0, lbl_8049EDE0
    stfs f0, 0x10c(r31)
lbl_80062814:
    lwz r3, 0x9b8(r31)
    addi r0, r3, 0x7f48
    cmplwi r0, 0x7e91
    bgt lbl_80062838
    la r3, lbl_8049EDE0
    lfs f1, 0x100(r31)
    lfs f0, 0xc(r3)
    fmuls f0, f1, f0
    stfs f0, 0x100(r31)
lbl_80062838:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_800628D4
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_80062868
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80062898
lbl_80062868:
    mr r3, r31
    bl fn_8006B1D0
    lwz r0, 0x60(r31)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006288C
    li r3, 0x64
    stw r3, lbl_8049D500
    b lbl_80062D2C
lbl_8006288C:
    li r3, 0x65
    stw r3, lbl_8049D500
    b lbl_80062D2C
lbl_80062898:
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_800628BC
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_800628C8
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_800628C8
lbl_800628BC:
    li r3, 0x65
    stw r3, lbl_8049D500
    b lbl_80062D2C
lbl_800628C8:
    li r3, 0x6b
    stw r3, lbl_8049D500
    b lbl_80062D2C
lbl_800628D4:
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    bne lbl_800628FC
    lwz r0, 0xb94(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800628FC
    li r3, 0x45
    stw r3, lbl_8049D500
    b lbl_8006295C
lbl_800628FC:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80062918
    li r3, 0x42
    stw r3, lbl_8049D500
    b lbl_8006295C
lbl_80062918:
    rlwinm r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80062930
    li r3, 0x42
    stw r3, lbl_8049D500
    b lbl_8006295C
lbl_80062930:
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80062948
    li r3, 0x41
    stw r3, lbl_8049D500
    b lbl_8006295C
lbl_80062948:
    rlwinm r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8006295C
    li r3, 0x40
    stw r3, lbl_8049D500
lbl_8006295C:
    lwz r3, 0x64(r31)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80062998
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_80062984
    li r3, 0x65
    stw r3, lbl_8049D500
    b lbl_80062998
lbl_80062984:
    li r3, 0x58
    stw r3, lbl_8049D500
    mr r3, r31
    li r4, 0x2
    bl fn_800711E8
lbl_80062998:
    lwz r0, 0x60(r31)
    rlwinm r0, r0, 0, 2, 2
    cmpwi r0, 0x0
    beq lbl_800629B0
    li r3, 0x98
    stw r3, lbl_8049D500
lbl_800629B0:
    lwz r0, 0x64(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800629E4
    lwz r3, 0x60(r31)
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    beq lbl_800629E4
    rlwinm r3, r3, 0, 24, 24
    subic r0, r3, 0x1
    subfe r3, r0, r3
    addi r0, r3, 0x99
    stw r0, lbl_8049D500
lbl_800629E4:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80062A60
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80062A34
    rlwinm r0, r3, 0, 28, 29
    cmplwi r0, 0x8
    beq lbl_80062A1C
    cmplwi r0, 0x4
    beq lbl_80062A28
    b lbl_80062A60
lbl_80062A1C:
    li r3, 0x59
    stw r3, lbl_8049D500
    b lbl_80062A60
lbl_80062A28:
    li r3, 0x58
    stw r3, lbl_8049D500
    b lbl_80062A60
lbl_80062A34:
    rlwinm r0, r3, 0, 28, 29
    cmplwi r0, 0x4
    beq lbl_80062A4C
    cmplwi r0, 0x8
    beq lbl_80062A58
    b lbl_80062A60
lbl_80062A4C:
    li r3, 0x59
    stw r3, lbl_8049D500
    b lbl_80062A60
lbl_80062A58:
    li r3, 0x58
    stw r3, lbl_8049D500
lbl_80062A60:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80062A88
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    li r0, 0x4f
    bne lbl_80062A84
    li r0, 0x53
lbl_80062A84:
    stw r0, lbl_8049D500
lbl_80062A88:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80062B24
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80062AC8
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    bne lbl_80062ABC
    li r3, 0x51
    stw r3, lbl_8049D500
    b lbl_80062B24
lbl_80062ABC:
    li r3, 0x50
    stw r3, lbl_8049D500
    b lbl_80062B24
lbl_80062AC8:
    rlwinm r0, r3, 0, 28, 29
    cmplwi r0, 0x4
    beq lbl_80062AE0
    cmplwi r0, 0x8
    beq lbl_80062AEC
    b lbl_80062AF4
lbl_80062AE0:
    li r3, 0x84
    stw r3, lbl_8049D500
    b lbl_80062AF4
lbl_80062AEC:
    li r3, 0x85
    stw r3, lbl_8049D500
lbl_80062AF4:
    lwz r0, 0x60(r31)
    clrlwi r0, r0, 30
    cmplwi r0, 0x1
    beq lbl_80062B10
    cmplwi r0, 0x2
    beq lbl_80062B1C
    b lbl_80062B24
lbl_80062B10:
    li r3, 0x88
    stw r3, lbl_8049D500
    b lbl_80062B24
lbl_80062B1C:
    li r3, 0x89
    stw r3, lbl_8049D500
lbl_80062B24:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80062B64
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80062B4C
    li r3, 0x5b
    stw r3, lbl_8049D500
    b lbl_80062B64
lbl_80062B4C:
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    li r0, 0x80
    bne lbl_80062B60
    li r0, 0x82
lbl_80062B60:
    stw r0, lbl_8049D500
lbl_80062B64:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80062BB8
    rlwinm r0, r3, 0, 28, 29
    cmplwi r0, 0x4
    beq lbl_80062B8C
    cmplwi r0, 0x8
    beq lbl_80062B98
    b lbl_80062BA0
lbl_80062B8C:
    li r3, 0x5f
    stw r3, lbl_8049D500
    b lbl_80062BA0
lbl_80062B98:
    li r3, 0x5e
    stw r3, lbl_8049D500
lbl_80062BA0:
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80062BB8
    li r3, 0x53
    stw r3, lbl_8049D500
lbl_80062BB8:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80062C78
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80062C1C
    rlwinm r0, r3, 0, 28, 29
    cmplwi r0, 0x4
    beq lbl_80062BEC
    cmplwi r0, 0x8
    beq lbl_80062BF8
    b lbl_80062C00
lbl_80062BEC:
    li r3, 0x55
    stw r3, lbl_8049D500
    b lbl_80062C00
lbl_80062BF8:
    li r3, 0x56
    stw r3, lbl_8049D500
lbl_80062C00:
    lwz r0, 0x60(r31)
    clrlwi r0, r0, 30
    cmplwi r0, 0x1
    bne lbl_80062C78
    li r3, 0x60
    stw r3, lbl_8049D500
    b lbl_80062C78
lbl_80062C1C:
    rlwinm r0, r3, 0, 28, 29
    cmplwi r0, 0x4
    beq lbl_80062C34
    cmplwi r0, 0x8
    beq lbl_80062C40
    b lbl_80062C48
lbl_80062C34:
    li r3, 0x87
    stw r3, lbl_8049D500
    b lbl_80062C48
lbl_80062C40:
    li r3, 0x86
    stw r3, lbl_8049D500
lbl_80062C48:
    lwz r0, 0x60(r31)
    clrlwi r0, r0, 30
    cmplwi r0, 0x1
    beq lbl_80062C64
    cmplwi r0, 0x2
    beq lbl_80062C70
    b lbl_80062C78
lbl_80062C64:
    li r3, 0x8c
    stw r3, lbl_8049D500
    b lbl_80062C78
lbl_80062C70:
    li r3, 0x8d
    stw r3, lbl_8049D500
lbl_80062C78:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_80062CD0
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80062CB8
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    bne lbl_80062CAC
    li r3, 0x57
    stw r3, lbl_8049D500
    b lbl_80062CD0
lbl_80062CAC:
    li r3, 0x54
    stw r3, lbl_8049D500
    b lbl_80062CD0
lbl_80062CB8:
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    li r0, 0x81
    bne lbl_80062CCC
    li r0, 0x83
lbl_80062CCC:
    stw r0, lbl_8049D500
lbl_80062CD0:
    lwz r3, 0x60(r31)
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80062D28
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80062D10
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    bne lbl_80062D04
    li r3, 0x91
    stw r3, lbl_8049D500
    b lbl_80062D28
lbl_80062D04:
    li r3, 0x90
    stw r3, lbl_8049D500
    b lbl_80062D28
lbl_80062D10:
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    li r0, 0x81
    bne lbl_80062D24
    li r0, 0x83
lbl_80062D24:
    stw r0, lbl_8049D500
lbl_80062D28:
    lwz r3, lbl_8049D500
lbl_80062D2C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80062D40
asm s32 fn_80062D40(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80062DE0
    andi. r0, r4, 0x2800
    cmpwi r0, 0x0
    beq lbl_80062D90
    cmplwi r0, 0x2000
    beq lbl_80062DA0
    cmplwi r0, 0x800
    beq lbl_80062DC0
    cmplwi r0, 0x2800
    beq lbl_80062DC0
    b lbl_80062DE0
lbl_80062D90:
    lwz r0, 0x54(r3)
    ori r0, r0, 0x4000
    stw r0, 0x54(r3)
    b lbl_80062DE0
lbl_80062DA0:
    lwz r0, 0x54(r3)
    ori r0, r0, 0x4000
    stw r0, 0x54(r3)
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_80062DE0
    bl fn_8006205C
    b lbl_80062DE0
lbl_80062DC0:
    rlwinm r0, r4, 0, 17, 17
    cmpwi r0, 0x0
    bne lbl_80062DE0
    lwz r0, 0x54(r3)
    ori r0, r0, 0x4000
    stw r0, 0x54(r3)
    mr r3, r31
    bl fn_8006205C
lbl_80062DE0:
    li r4, 0x1
    lwz r0, 0x74(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80062DF8
    li r4, 0x0
lbl_80062DF8:
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80062E0C
    li r4, 0x0
lbl_80062E0C:
    lfs f1, 0x3890(r31)
    lfs f0, lbl_8049EDE0
    fcmpo cr0, f1, f0
    bge lbl_80062E20
    li r4, 0x0
lbl_80062E20:
    lwz r3, 0x50(r31)
    rlwinm r0, r3, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80062E34
    li r4, 0x0
lbl_80062E34:
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80062E44
    li r4, 0x0
lbl_80062E44:
    cmpwi r4, 0x0
    beq lbl_80062F18
    lwz r30, lbl_8049D500
    li r3, 0x0
    lwz r0, lbl_8049D510
    cmpwi r0, 0x200
    beq lbl_80062E6C
    cmpwi r0, 0x100
    beq lbl_80062E78
    b lbl_80062E80
lbl_80062E6C:
    li r30, 0x1c8
    li r3, 0x1
    b lbl_80062E80
lbl_80062E78:
    li r30, 0x1c9
    li r3, 0x1
lbl_80062E80:
    lwz r0, lbl_8049D50C
    cmpwi r0, 0x4
    beq lbl_80062EB0
    cmpwi r0, 0x1
    beq lbl_80062EBC
    cmpwi r0, 0x5
    beq lbl_80062EBC
    cmpwi r0, 0x2
    beq lbl_80062EC8
    cmpwi r0, 0x6
    beq lbl_80062EC8
    b lbl_80062ED0
lbl_80062EB0:
    li r30, 0x1c5
    li r3, 0x1
    b lbl_80062ED0
lbl_80062EBC:
    li r30, 0x1c6
    li r3, 0x1
    b lbl_80062ED0
lbl_80062EC8:
    li r30, 0x1c7
    li r3, 0x1
lbl_80062ED0:
    cmpwi r3, 0x0
    beq lbl_80062F18
    addi r3, r31, 0x84
    mr r4, r3
    addi r5, r31, 0x3884
    la r6, lbl_8049EDE0
    lfs f1, 0x8(r6)
    bl fn_8001D9D0
    lfs f0, 0x3880(r31)
    stfs f0, 0x88(r31)
    lwz r3, 0x377c(r31)
    addi r4, r31, 0x84
    bl fn_80182518
    li r0, 0x0
    stw r0, 0x3878(r31)
    stw r30, lbl_8049D500
    mr r3, r30
    b lbl_80062F1C
lbl_80062F18:
    li r3, -0x2
lbl_80062F1C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80062F34
asm s32 fn_80062F34(s8 *arg0) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r31, r3
    lwz r5, 0x50(r3)
    rlwinm r0, r5, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_80062F6C
    lwz r3, lbl_8049D500
    b lbl_800632BC
lbl_80062F6C:
    lfs f1, 0xf4(r3)
    la r4, lbl_8049EDE0
    lfs f0, 0x10(r4)
    fcmpo cr0, f1, f0
    bge lbl_80063070
    rlwinm r0, r5, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80063070
    lwz r4, 0x18(r3)
    subi r0, r4, 0x2d
    cmplwi r0, 0x1
    bgt lbl_80062FD8
    lwz r3, 0x377c(r3)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x3c
    li r4, 0x3
    bl fn_80173580
    lwz r3, 0x377c(r31)
    li r4, 0x3
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x30
    li r4, 0x3
    bl fn_80173580
    b lbl_80063010
lbl_80062FD8:
    lwz r3, 0x377c(r3)
    li r4, 0x14
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x3c
    li r4, 0x3
    bl fn_80173580
    lwz r3, 0x377c(r31)
    li r4, 0x14
    bl fn_80181568
    mr r5, r3
    addi r3, r1, 0x30
    li r4, 0x3
    bl fn_80173580
lbl_80063010:
    lfs f2, 0x34(r1)
    la r3, lbl_8049EDE0
    lfs f1, 0x14(r3)
    lfs f0, 0xa20(r31)
    fadds f1, f1, f0
    fcmpo cr0, f2, f1
    blt lbl_80063038
    lfs f0, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_80063070
lbl_80063038:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80063054
    lwz r3, 0x150(r31)
    stw r3, lbl_8049D500
    b lbl_800632BC
lbl_80063054:
    lwz r0, 0x140(r31)
    cmpwi r0, 0x5a
    beq lbl_80063070
    li r0, 0x5a
    stw r0, lbl_8049D500
    li r3, 0x5a
    b lbl_800632BC
lbl_80063070:
    lwz r0, 0x54(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800632B8
    li r4, 0x1
    lwz r3, 0x50(r31)
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80063098
    li r4, 0x0
lbl_80063098:
    andi. r0, r3, 0x8800
    cmpwi r0, 0x0
    bne lbl_800630A8
    li r4, 0x0
lbl_800630A8:
    lwz r0, 0x74(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_800630BC
    li r4, 0x0
lbl_800630BC:
    lwz r3, 0x3878(r31)
    cmpwi r3, 0x0
    beq lbl_800630DC
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_800630DC
    li r4, 0x0
lbl_800630DC:
    cmpwi r4, 0x0
    beq lbl_800632B8
    mr r3, r31
    bl fn_80068524
    addi r3, r31, 0x84
    lwz r4, 0x3878(r31)
    addi r4, r4, 0x5e0
    bl fn_8001D9AC
    fmr f31, f1
    addi r3, r31, 0x90
    lwz r4, 0x3878(r31)
    addi r4, r4, 0x5e0
    bl fn_8001D9AC
    fcmpo cr0, f31, f1
    bge lbl_800632B8
    addi r3, r1, 0x24
    lwz r4, 0x3878(r31)
    addi r4, r4, 0x5e0
    addi r5, r31, 0x84
    bl fn_8001B8B8
    lfs f1, 0x24(r1)
    lfs f0, 0x2c(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    stfs f1, 0xa0(r31)
    lwz r3, 0x377c(r31)
    frsp f1, f1
    bl fn_80182220
    addi r3, r31, 0x84
    mr r4, r3
    lwz r5, 0x3878(r31)
    addi r5, r5, 0x5e0
    la r30, lbl_8049EDE0
    lfs f1, 0x8(r30)
    bl fn_8001D9D0
    li r0, 0x1cc
    stw r0, lbl_8049D500
    mr r3, r31
    lwz r0, 0x164c(r31)
    mulli r0, r0, 0x350
    add r4, r31, r0
    lfs f1, 0x18(r30)
    lfs f0, 0x1974(r4)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    neg r4, r0
    bl fn_8006A020
    lwz r3, 0x3864(r31)
    cmpwi r3, 0x0
    beq lbl_800631F4
    li r4, 0x1
    lwz r0, 0x164c(r31)
    mulli r0, r0, 0x350
    add r5, r31, r0
    lfs f1, 0x18(r30)
    lfs f0, 0x1974(r5)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r5, 0x4c(r1)
    bl fn_8006EA1C
    lwz r3, 0x3864(r31)
    mr r4, r31
    lwz r0, 0x9ac(r3)
    mulli r5, r0, 0x12c
    addi r5, r5, 0x5dc
    bl fn_80094AB4
lbl_800631F4:
    lwz r3, 0x3878(r31)
    li r4, 0x3e8
    mr r5, r31
    li r6, 0x0
    bl fn_80089F38
    cmpwi r3, 0x1
    beq lbl_800632A8
    addi r3, r1, 0x24
    addi r4, r31, 0x84
    lwz r5, 0x3878(r31)
    addi r5, r5, 0x5e0
    la r30, lbl_8049EDE0
    lfs f1, 0x8(r30)
    bl fn_8001D9D0
    addi r3, r1, 0x18
    lwz r4, 0x3878(r31)
    addi r4, r4, 0x5e0
    addi r5, r31, 0x84
    bl fn_8001B8B8
    addi r3, r1, 0x18
    mr r4, r3
    bl fn_8001B8B0
    li r3, 0x0
    stw r3, 0x8(r1)
    stw r3, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    addi r5, r1, 0x24
    addi r6, r1, 0x18
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
    li r3, 0x7aa
    addi r4, r1, 0x24
    li r5, 0x0
    bl fn_80099FD8
    cmpwi r3, 0x0
    beq lbl_800632A8
    lfs f1, 0x1c(r30)
    bl fn_8018EEC0
lbl_800632A8:
    li r0, 0x0
    stw r0, 0x3878(r31)
    lwz r3, lbl_8049D500
    b lbl_800632BC
lbl_800632B8:
    li r3, -0x2
lbl_800632BC:
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

} // extern "C"
