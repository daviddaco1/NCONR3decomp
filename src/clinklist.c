#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80359980[];
extern u8 lbl_803A4830[];
extern u8 lbl_803A4C30[];
extern float lbl_8049C340;
extern float lbl_8049D6F8;

M2C_UNK GetResNode__Q34nw4r3g3d6ResMdlCFPCc(s8 **arg0, s32 arg1);
s32 GetScnMtxPos__Q34nw4r3g3d12ScnMdlSimpleCFPQ34nw4r4math5MTX34Q44nw4r3g3d6ScnObj13ScnObjMtxTypeUl(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 VIGetDimmingCount(void);
void _restgpr_24();
void _restgpr_26();
void _restgpr_28();
void _restgpr_29();
void _savegpr_24();
void _savegpr_26();
void _savegpr_28();
void _savegpr_29();
s32 * fn_80029A90(s32 *arg0, s32 arg1);
s32 fn_8002A30C(s32 *arg0, s32 *arg1);
s32 fn_8002AE00(s8 *arg0);
void fn_8002AE40(s32 arg0);
s32 * fn_8002AEE0(s32 *arg0, s32 arg1);
s32 fn_800320A4(s8 **arg0);
s32 fn_80033F08(s32 *arg0);
void fn_800340D8(s32 *arg0, s32 arg1);
void fn_80034128(s32 *arg0, s8 *arg1);
void fn_80034178(s32 *arg0, s32 arg1);
M2C_UNK fn_800341DC(s32 *arg0);
M2C_UNK fn_8003452C(s32 *arg0);
s32 * fn_80034638(s32 *arg0, s32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8008AE14(void);
void fn_80125DE0(s32 arg0, s32 arg1);
void fn_8012FE70();
s8 * fn_8012FED4(s8 *arg0, s32 arg1);
void fn_8012FF14(s8 *arg0, s32 arg1);
void fn_80130100(s8 *arg0);
void fn_8013026C(u8 arg0, s32 arg1);
void fn_80130348(u8 arg0);
void fn_80130410(void);
void fn_80130478(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80130504(u32 arg0);
s32 * fn_801305BC(void);
void fn_80130640(void);
s32 fn_80130674(void);
void fn_8013067C(void);
void fn_80130680(void);
void fn_8013069C(s32 arg0);
void fn_801306FC(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2);
void fn_80130764(void);
s32 fn_8013098C(s8 *arg0);
void fn_801309EC(s8 *arg0);
s32 fn_80130A78(s8 *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
u8 fn_80130AE8(s8 *arg0, u8 arg1);
s32 fn_80130AF8(s8 *arg0, u8 *arg1);
u8 * fn_80130B30(s8 *arg0, s32 arg1);
s32 fn_80130C28(s8 *arg0, s8 *arg1, u8 *arg2, s32 arg3);
u8 * fn_80130D4C(s8 *arg0, s32 arg1);
s32 fn_80130DB0(s8 *arg0, s8 *arg1);
s8 * fn_80130F38(s8 *arg0);
s32 fn_80130F40(s8 *arg0, s32 arg1);
s32 fn_80130FD0(s8 *arg0, M2C_UNK *arg1);
s32 fn_80131060(s8 *arg0, s32 arg1);
s32 fn_8013108C(s32 *arg0, s32 arg1);
s32 fn_8013123C(s32 arg0);
s32 fn_80131288(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_80134304(s8 ***arg0, s32 arg1);
void fn_80134630(s8 **arg0, s32 arg1);
void fn_80134664(s8 ***arg0, s32 arg1);
s32 fn_80134DD0(s8 ***arg0);
u8 fn_80134DE8(s8 **arg0);
s32 fn_80135484(s8 **arg0);
s8 * fn_801354A0(s8 ***arg0, s32 *arg1);
u8 fn_801359DC(s8 **arg0);
M2C_UNK fn_80136524(void);
s32 fn_8013652C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80136CA8(s32 arg0);
void fn_80136D48(s32 arg0);
void fn_8017776C(s32 arg0);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_80130100
asm void fn_80130100(s8 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80130254
    li r29, 0x0
    li r30, 0x0
    b lbl_80130154
lbl_8013012C:
    lwz r3, 0x118(r31)
    lwzx r0, r3, r30
    stw r0, 0x28(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x2c(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x28
    bl fn_8002A30C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_80130154:
    lwz r3, 0x30(r31)
    lwz r0, 0x60(r3)
    cmpw r29, r0
    blt lbl_8013012C
    li r29, 0x0
    li r30, 0x0
    b lbl_80130198
lbl_80130170:
    lwz r3, 0x11c(r31)
    lwzx r0, r3, r30
    stw r0, 0x20(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x24(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    bl fn_8002A30C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_80130198:
    lwz r3, 0x30(r31)
    lwz r0, 0x64(r3)
    cmpw r29, r0
    blt lbl_80130170
    li r29, 0x0
    li r30, 0x0
    b lbl_801301DC
lbl_801301B4:
    lwz r3, 0x120(r31)
    lwzx r0, r3, r30
    stw r0, 0x18(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    bl fn_8002A30C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_801301DC:
    lwz r3, 0x30(r31)
    lwz r0, 0x68(r3)
    cmpw r29, r0
    blt lbl_801301B4
    li r29, 0x0
    li r30, 0x0
    b lbl_80130220
lbl_801301F8:
    lwz r3, 0x124(r31)
    lwzx r0, r3, r30
    stw r0, 0x10(r1)
    lwz r0, 0x114(r31)
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_8002A30C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
lbl_80130220:
    lwz r3, 0x30(r31)
    lwz r0, 0x6c(r3)
    cmpw r29, r0
    blt lbl_801301F8
    lwz r0, 0x114(r31)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x0
    bl fn_800340D8
    lwz r0, 0x114(r31)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80033F08
lbl_80130254:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8013026C
asm void fn_8013026C(u8 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r4
    extrwi r7, r3, 12, 12
    clrlwi r4, r3, 24
    li r6, 0x0
    li r3, 0x0
    lis r5, lbl_803A4830@ha
    addi r5, r5, lbl_803A4830@l
    li r0, 0x80
    mtctr r0
lbl_801302A4:
    lhax r0, r5, r3
    cmpw r7, r0
    beq lbl_801302BC
    addi r6, r6, 0x1
    addi r3, r3, 0x8
    bdnz lbl_801302A4
lbl_801302BC:
    cmpwi r6, 0x80
    beq lbl_80130330
    cmpwi r4, 0xff
    beq lbl_801302F4
    lis r3, lbl_803A4830@ha
    addi r3, r3, lbl_803A4830@l
    slwi r0, r6, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    bl fn_8012FED4
    li r4, 0x0
    mr r5, r29
    bl fn_8012FF14
    b lbl_80130330
lbl_801302F4:
    li r30, 0x0
    slwi r4, r6, 3
    lis r3, lbl_803A4830@ha
    addi r0, r3, lbl_803A4830@l
    add r31, r0, r4
lbl_80130308:
    lwz r3, 0x4(r31)
    mr r4, r30
    bl fn_8012FED4
    cmpwi r3, 0x0
    beq lbl_80130330
    li r4, 0x0
    mr r5, r29
    bl fn_8012FF14
    addi r30, r30, 0x1
    b lbl_80130308
lbl_80130330:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80130348
asm void fn_80130348(u8 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    extrwi r7, r3, 12, 12
    clrlwi r4, r3, 24
    li r6, 0x0
    li r3, 0x0
    lis r5, lbl_803A4830@ha
    addi r5, r5, lbl_803A4830@l
    li r0, 0x80
    mtctr r0
lbl_8013037C:
    lhax r0, r5, r3
    cmpw r7, r0
    beq lbl_80130394
    addi r6, r6, 0x1
    addi r3, r3, 0x8
    bdnz lbl_8013037C
lbl_80130394:
    cmpwi r6, 0x80
    beq lbl_801303F8
    cmpwi r4, 0xff
    beq lbl_801303C4
    lis r3, lbl_803A4830@ha
    addi r3, r3, lbl_803A4830@l
    slwi r0, r6, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    bl fn_8012FED4
    bl fn_80130100
    b lbl_801303F8
lbl_801303C4:
    li r30, 0x0
    slwi r4, r6, 3
    lis r3, lbl_803A4830@ha
    addi r0, r3, lbl_803A4830@l
    add r31, r0, r4
lbl_801303D8:
    lwz r3, 0x4(r31)
    mr r4, r30
    bl fn_8012FED4
    cmpwi r3, 0x0
    beq lbl_801303F8
    bl fn_80130100
    addi r30, r30, 0x1
    b lbl_801303D8
lbl_801303F8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80130410
asm void fn_80130410(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803A4830@ha
    addi r30, r3, lbl_803A4830@l
lbl_80130434:
    lhax r0, r30, r31
    cmpwi r0, -0x1
    beq lbl_80130450
    clrlwi r0, r0, 20
    slwi r0, r0, 8
    ori r3, r0, 0xff
    bl fn_80130348
lbl_80130450:
    addi r29, r29, 0x1
    addi r31, r31, 0x8
    cmpwi r29, 0x80
    blt lbl_80130434
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_80130478(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 spC;
    s32 sp8;

    if ((arg1 != NULL) && ((s32) (arg4 & 0x08000000) == 0)) {
        if ((fn_8005E8F0((u32) (0U)) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) == 0)) {
            spC = (s32) (M2C_FIELD(arg1, s32 *, 0x114));
            fn_80034128((s32 *) (&spC), (s8 *) ((s8 *)0x40));
            return;
        }
        sp8 = (s32) (M2C_FIELD(arg1, s32 *, 0x114));
        fn_800340D8((s32 *) (&sp8), (s32) (0x40));
    }
}

// asm_to_cpp: fn_80130504
asm s32 fn_80130504(u32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x1
    bl fn_8012FE70
    cmpwi r3, 0x0
    bne lbl_80130534
    li r3, -0x1
    b lbl_801305A4
lbl_80130534:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_80130558
    oris r0, r4, 0x2
    stw r0, 0x0(r3)
    extrwi r0, r30, 12, 12
    slwi r3, r0, 8
    b lbl_801305A4
lbl_80130558:
    lwz r5, 0x18(r3)
    b lbl_80130594
lbl_80130560:
    lwz r3, 0x0(r4)
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_8013058C
    oris r0, r3, 0x2
    stw r0, 0x0(r4)
    extrwi r0, r30, 12, 12
    slwi r3, r0, 8
    clrlwi r0, r31, 24
    or r3, r3, r0
    b lbl_801305A4
lbl_8013058C:
    addi r31, r31, 0x1
    lwz r5, 0x8(r5)
lbl_80130594:
    lwz r4, 0x0(r5)
    cmplwi r4, 0x1
    bne lbl_80130560
    li r3, -0x1
lbl_801305A4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801305BC
asm s32 * fn_801305BC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8012FE70
    cmpwi r3, 0x0
    bne lbl_801305DC
    li r3, 0x0
    b lbl_80130630
lbl_801305DC:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_801305F8
    oris r0, r4, 0x2
    stw r0, 0x0(r3)
    b lbl_80130630
lbl_801305F8:
    lwz r5, 0x18(r3)
    b lbl_80130620
lbl_80130600:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_8013061C
    oris r0, r4, 0x2
    stw r0, 0x0(r3)
    b lbl_80130630
lbl_8013061C:
    lwz r5, 0x8(r5)
lbl_80130620:
    lwz r3, 0x0(r5)
    cmplwi r3, 0x1
    bne lbl_80130600
    li r3, 0x0
lbl_80130630:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80130640
asm void fn_80130640(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8012FE70
    cmpwi r3, 0x0
    beq lbl_80130664
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x0(r3)
lbl_80130664:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80130674(void) {
    return (s32) (1);
}

void fn_8013067C(void) {
    fn_80130680();
}

// asm_to_cpp: fn_80130680
asm void fn_80130680(void) {
    nofralloc
    li r0, 0x0
    lis r3, lbl_803A4C30@ha
    addi r3, r3, lbl_803A4C30@l
    stw r0, 0x400(r3)
    li r4, 0x0
    li r5, 0x400
    b memset
}

// asm_to_cpp: fn_8013069C
asm void fn_8013069C(s32 arg0) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lis r4, lbl_803A4C30@ha
    addi r5, r4, lbl_803A4C30@l
    lwz r6, 0x400(r5)
    cmplwi r6, 0x100
    bgelr
    li r4, 0x0
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_801306DC
lbl_801306C8:
    lwzx r0, r5, r4
    cmplw r0, r3
    beqlr
    addi r4, r4, 0x4
    bdnz lbl_801306C8
lbl_801306DC:
    slwi r0, r6, 2
    lis r4, lbl_803A4C30@ha
    addi r4, r4, lbl_803A4C30@l
    stwx r3, r4, r0
    lwz r3, 0x400(r4)
    addi r0, r3, 0x1
    stw r0, 0x400(r4)
    blr
}

// asm_to_cpp: fn_801306FC
asm void fn_801306FC(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2) {
    nofralloc
    li r8, 0x0
    subi r6, r3, 0x1
    b lbl_80130758
lbl_80130708:
    li r3, 0x0
    subf r0, r8, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_80130754
lbl_8013071C:
    add r7, r5, r3
    lfs f1, 0x4(r7)
    lfs f0, 0x0(r7)
    fcmpo cr0, f1, f0
    bge lbl_8013074C
    stfs f1, 0x0(r7)
    stfs f0, 0x4(r7)
    add r7, r4, r3
    lwz r9, 0x0(r7)
    lwz r0, 0x4(r7)
    stw r0, 0x0(r7)
    stw r9, 0x4(r7)
lbl_8013074C:
    addi r3, r3, 0x4
    bdnz lbl_8013071C
lbl_80130754:
    addi r8, r8, 0x1
lbl_80130758:
    cmpw r8, r6
    blt lbl_80130708
    blr
}

// asm_to_cpp: fn_80130764
asm void fn_80130764(void) {
    nofralloc
    stwu r1, -0x880(r1)
    mflr r0
    stw r0, 0x884(r1)
    addi r11, r1, 0x880
    bl _savegpr_24
    addi r3, r1, 0x28
    bl fn_8002AE40
    addi r3, r1, 0x24
    li r4, 0x0
    bl fn_8002AEE0
    li r30, 0x0
    li r26, 0x0
    lis r3, lbl_803A4C30@ha
    addi r29, r3, lbl_803A4C30@l
    addi r27, r1, 0x458
    addi r25, r1, 0x58
    b lbl_80130824
lbl_801307A8:
    lwzx r3, r29, r26
    li r4, 0x0
    bl fn_80181504
    mr r28, r3
    lwzx r3, r29, r26
    lwz r0, 0x114(r3)
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    bl fn_8003452C
    mr r24, r3
    bl fn_8002AE00
    stw r3, 0x1c(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x1c
    bl fn_80029A90
    addi r3, r1, 0x24
    lwz r4, 0x4(r28)
    bl GetResNode__Q34nw4r3g3d6ResMdlCFPCc
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800320A4
    mr r6, r3
    mr r3, r24
    addi r4, r1, 0x28
    li r5, 0x2
    bl GetScnMtxPos__Q34nw4r3g3d12ScnMdlSimpleCFPQ34nw4r4math5MTX34Q44nw4r3g3d6ScnObj13ScnObjMtxTypeUl
    stwx r30, r27, r26
    lfs f0, 0x54(r1)
    stfsx f0, r25, r26
    addi r30, r30, 0x1
    addi r26, r26, 0x4
lbl_80130824:
    lwz r3, 0x400(r29)
    cmplw r30, r3
    blt lbl_801307A8
    addi r4, r1, 0x458
    addi r5, r1, 0x58
    bl fn_801306FC
    li r29, 0x0
    li r26, 0x0
    lis r3, lbl_803A4C30@ha
    addi r31, r3, lbl_803A4C30@l
    addi r30, r1, 0x458
    b lbl_80130968
lbl_80130854:
    li r28, 0x1
    li r27, 0x1
    lwzx r0, r30, r26
    slwi r0, r0, 2
    lwzx r3, r31, r0
    lwz r0, 0x114(r3)
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    bl fn_800341DC
    mr r25, r3
    li r24, 0x0
    b lbl_801308CC
lbl_80130884:
    lwzx r0, r30, r26
    slwi r0, r0, 2
    lwzx r3, r31, r0
    lwz r0, 0x114(r3)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    mr r4, r24
    bl fn_80034638
    lbz r0, 0xf(r3)
    cmpwi r0, 0x0
    bne lbl_801308B8
    li r27, 0x0
    b lbl_801308D8
lbl_801308B8:
    cmplwi r0, 0xff
    beq lbl_801308C8
    li r28, 0x0
    b lbl_801308D8
lbl_801308C8:
    addi r24, r24, 0x1
lbl_801308CC:
    lwz r0, 0xdc(r25)
    cmplw r24, r0
    blt lbl_80130884
lbl_801308D8:
    cmpwi r27, 0x0
    beq lbl_801308FC
    lwzx r0, r30, r26
    slwi r0, r0, 2
    lwzx r3, r31, r0
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    b lbl_80130914
lbl_801308FC:
    lwzx r0, r30, r26
    slwi r0, r0, 2
    lwzx r3, r31, r0
    lwz r0, 0x0(r3)
    ori r0, r0, 0x1
    stw r0, 0x0(r3)
lbl_80130914:
    cmpwi r28, 0x0
    beq lbl_80130940
    lwzx r0, r30, r26
    slwi r0, r0, 2
    lwzx r3, r31, r0
    lwz r0, 0x114(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x7b
    bl fn_80034178
    b lbl_80130960
lbl_80130940:
    lwzx r0, r30, r26
    slwi r0, r0, 2
    lwzx r3, r31, r0
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r29, 0x8d
    bl fn_80034178
lbl_80130960:
    addi r29, r29, 0x1
    addi r26, r26, 0x4
lbl_80130968:
    lwz r0, 0x400(r31)
    cmplw r29, r0
    blt lbl_80130854
    addi r11, r1, 0x880
    bl _restgpr_24
    lwz r0, 0x884(r1)
    mtlr r0
    addi r1, r1, 0x880
    blr
}

s32 fn_8013098C(s8 *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, u8 *, 0) != 0) {
        temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 4));
        if (temp_r3 != 0) {
            fn_80136D48((s32) (temp_r3));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
        }
        M2C_FIELD(arg0, u8 *, 0) = (u8) (0U);
        return (s32) (1);
    }
    return (s32) (0);
}

// asm_to_cpp: fn_801309EC
asm void fn_801309EC(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x4(r3)
    cmpwi r31, 0x0
    beq lbl_80130A4C
    mr r3, r31
    li r4, 0x0
    lwz r0, 0x14(r30)
    mulli r5, r0, 0x14
    bl memset
    li r5, 0x0
    li r3, 0x0
    b lbl_80130A40
lbl_80130A30:
    add r4, r31, r3
    stw r5, 0x4(r4)
    addi r5, r5, 0x1
    addi r3, r3, 0x14
lbl_80130A40:
    lwz r0, 0x14(r30)
    cmpw r5, r0
    blt lbl_80130A30
lbl_80130A4C:
    li r0, 0x0
    stw r0, 0x10(r30)
    stw r0, 0x18(r30)
    stw r0, 0x1c(r30)
    stw r0, 0x20(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80130A78(s8 *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    fn_8013098C((s8 *) (arg0));
    if (arg2 != 0) {
        M2C_FIELD(arg0, s8 *, 0) = (s8) (0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (arg2);
    } else {
        M2C_FIELD(arg0, s8 *, 0) = (s8) (1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (fn_80136CA8((s32) (arg1 * 0x14)));
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1);
    return (s32) (1);
}

// asm_to_cpp: fn_80130AE8
asm u8 fn_80130AE8(s8 *arg0, u8 arg1) {
    nofralloc
    lbz r0, 0x8(r3)
    stb r4, 0x8(r3)
    mr r3, r0
    blr
}

s32 fn_80130AF8(s8 *arg0, u8 *arg1) {
    s8 *temp_r5;
    s8 *temp_r5_2;

    temp_r5 = (s8 *) (M2C_FIELD(arg1, s8 **, 0xC));
    if (temp_r5 == NULL) {
        M2C_FIELD(arg0, s8 **, 0x1C) = (s8 *) (arg1);
    } else {
        M2C_FIELD(temp_r5, s8 **, 0x10) = (s8 *) (arg1);
    }
    temp_r5_2 = (s8 *) (M2C_FIELD(arg1, s8 **, 0x10));
    if (temp_r5_2 == NULL) {
        M2C_FIELD(arg0, s8 **, 0x20) = (s8 *) (arg1);
    } else {
        M2C_FIELD(temp_r5_2, s8 **, 0xC) = (s8 *) (arg1);
    }
    return (s32) (1);
}

// asm_to_cpp: fn_80130B30
asm u8 * fn_80130B30(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    mr r30, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_80130B70
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0xe2
    addi r5, r3, 0xe
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130B70:
    li r5, 0x0
    cmpwi r30, 0x0
    bne lbl_80130B8C
    lwz r3, 0x10(r31)
    addi r0, r3, 0x1
    stw r0, 0x10(r31)
    b lbl_80130B9C
lbl_80130B8C:
    lwz r3, 0x14(r31)
    divwu r0, r30, r3
    mullw r0, r0, r3
    subf r5, r0, r30
lbl_80130B9C:
    li r6, 0x0
    lwz r4, 0x14(r31)
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_80130C0C
lbl_80130BB0:
    add r3, r5, r6
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r7, r0, r3
    lwz r3, 0x4(r31)
    mulli r0, r7, 0x14
    add r3, r3, r0
    lbz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_80130BE0
    cmpwi r7, 0x0
    beq lbl_80130C04
lbl_80130BE0:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80130C04
    li r0, 0x1
    stb r0, 0x0(r3)
    lwz r4, 0x18(r31)
    addi r0, r4, 0x1
    stw r0, 0x18(r31)
    b lbl_80130C10
lbl_80130C04:
    addi r6, r6, 0x1
    bdnz lbl_80130BB0
lbl_80130C0C:
    li r3, 0x0
lbl_80130C10:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80130C28
asm s32 fn_80130C28(s8 *arg0, s8 *arg1, u8 *arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    lbz r0, 0x1(r5)
    cmpwi r0, 0x0
    beq lbl_80130C70
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x11e
    addi r5, r3, 0x46
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130C70:
    cmpwi r29, 0x0
    bne lbl_80130CD8
    cmpwi r31, 0x0
    beq lbl_80130CAC
    lwz r0, 0x20(r28)
    cmpwi r0, 0x0
    beq lbl_80130CAC
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x122
    addi r5, r3, 0x9d
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
    b lbl_80130D34
lbl_80130CAC:
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    beq lbl_80130CD8
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x126
    addi r5, r3, 0xe3
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
    b lbl_80130D34
lbl_80130CD8:
    cmpwi r31, 0x0
    beq lbl_80130D00
    stw r29, 0xc(r30)
    cmpwi r29, 0x0
    beq lbl_80130CF4
    lwz r0, 0x10(r29)
    b lbl_80130CF8
lbl_80130CF4:
    li r0, 0x0
lbl_80130CF8:
    stw r0, 0x10(r30)
    b lbl_80130D1C
lbl_80130D00:
    cmpwi r29, 0x0
    beq lbl_80130D10
    lwz r0, 0xc(r29)
    b lbl_80130D14
lbl_80130D10:
    li r0, 0x0
lbl_80130D14:
    stw r0, 0xc(r30)
    stw r29, 0x10(r30)
lbl_80130D1C:
    li r0, 0x1
    stb r0, 0x1(r30)
    mr r3, r28
    mr r4, r30
    bl fn_80130AF8
    li r3, 0x1
lbl_80130D34:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80130D4C
asm u8 * fn_80130D4C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    li r4, 0x0
    bl fn_80130B30
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80130D94
    stw r30, 0x8(r3)
    mr r3, r29
    lwz r4, 0x20(r29)
    mr r5, r31
    li r6, 0x1
    bl fn_80130C28
lbl_80130D94:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80130DB0
asm s32 fn_80130DB0(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_80130DF0
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x1f0
    addi r5, r3, 0x1d9
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130DF0:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_80130E04
    li r3, 0x0
    b lbl_80130F20
lbl_80130E04:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_80130EB0
    lwz r0, 0x20(r30)
    cmplw r31, r0
    beq lbl_80130E34
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x204
    addi r5, r3, 0x207
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130E34:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_80130E58
    stw r0, 0x20(r30)
    li r0, 0x0
    lwz r3, 0xc(r31)
    stw r0, 0x10(r3)
    stw r0, 0xc(r31)
    b lbl_80130F04
lbl_80130E58:
    lwz r0, 0x1c(r30)
    cmplw r0, r31
    beq lbl_80130E7C
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x20f
    addi r5, r3, 0x22c
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130E7C:
    li r0, 0x0
    stw r0, 0x20(r30)
    stw r0, 0x1c(r30)
    lwz r0, 0x18(r30)
    cmpwi r0, 0x1
    beq lbl_80130F04
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x212
    addi r5, r3, 0x251
    opword 0x4CC63182
    bl fn_801A9384
    b lbl_80130F04
lbl_80130EB0:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    bne lbl_80130EF4
    lwz r0, 0x1c(r30)
    cmplw r0, r31
    beq lbl_80130EE0
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x21d
    addi r5, r3, 0x22c
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130EE0:
    lwz r3, 0x10(r31)
    stw r3, 0x1c(r30)
    li r0, 0x0
    stw r0, 0xc(r3)
    b lbl_80130F04
lbl_80130EF4:
    stw r0, 0x10(r3)
    lwz r0, 0xc(r31)
    lwz r3, 0x10(r31)
    stw r0, 0xc(r3)
lbl_80130F04:
    li r0, 0x0
    stb r0, 0x0(r31)
    stb r0, 0x1(r31)
    lwz r3, 0x18(r30)
    subi r0, r3, 0x1
    stw r0, 0x18(r30)
    li r3, 0x1
lbl_80130F20:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s8 * fn_80130F38(s8 *arg0) {
    return (s8 *) (M2C_FIELD(arg0, s8 **, 0x1C));
}

// asm_to_cpp: fn_80130F40
asm s32 fn_80130F40(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_80130F80
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x270
    addi r5, r3, 0x27c
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130F80:
    mr r3, r30
    mr r4, r31
    bl fn_80131060
    cmpwi r3, 0x0
    bne lbl_80130FAC
    lis r3, lbl_80359980@ha
    addi r3, r3, lbl_80359980@l
    li r4, 0x271
    addi r5, r3, 0x2ac
    opword 0x4CC63182
    bl fn_801A9384
lbl_80130FAC:
    lwz r3, 0x4(r30)
    mulli r0, r31, 0x14
    add r3, r3, r0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80130FD0
asm s32 fn_80130FD0(s8 *arg0, M2C_UNK *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r7, 0x0
    li r5, 0x0
    li r6, -0x1
    b lbl_80131000
lbl_80130FF4:
    stwx r6, r4, r5
    addi r7, r7, 0x1
    addi r5, r5, 0x4
lbl_80131000:
    lwz r0, 0x14(r3)
    cmpw r7, r0
    blt lbl_80130FF4
    bl fn_80130F38
    li r5, 0x0
    li r4, 0x0
lbl_80131018:
    cmpwi r3, 0x0
    bne lbl_80131030
    li r3, -0x1
    slwi r0, r5, 2
    stwx r3, r31, r0
    b lbl_80131048
lbl_80131030:
    lwz r0, 0x4(r3)
    stwx r0, r31, r4
    lwz r3, 0x10(r3)
    addi r5, r5, 0x1
    addi r4, r4, 0x4
    b lbl_80131018
lbl_80131048:
    mr r3, r5
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80131060
asm s32 fn_80131060(s8 *arg0, s32 arg1) {
    nofralloc
    li r5, 0x0
    lbz r0, 0x8(r3)
    neg r0, r0
    cmpw r4, r0
    ble lbl_80131084
    lwz r0, 0x14(r3)
    cmpw r4, r0
    bge lbl_80131084
    li r5, 0x1
lbl_80131084:
    mr r3, r5
    blr
}

// asm_to_cpp: fn_8013108C
asm s32 fn_8013108C(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x340
    bl _savegpr_26
    lwz r5, lbl_8049D6F8
    cmpwi r5, 0x0
    beq lbl_80131218
    cmpwi r4, 0x0
    beq lbl_801311D4
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_801310CC
    li r0, 0xf1
    stw r0, 0x0(r3)
    b lbl_801311E8
lbl_801310CC:
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_801311E8
    lbz r0, lbl_8049C340
    cmpwi r0, 0x0
    beq lbl_801311CC
    addi r28, r1, 0x8
    lwz r3, 0x8(r5)
    mr r4, r28
    bl fn_80130FD0
    mr r30, r3
    li r27, 0x0
    li r31, 0x0
    b lbl_801311BC
lbl_80131104:
    lwzx r26, r28, r31
    mr r3, r26
    bl fn_80136524
    mr r29, r3
    bl fn_80134DD0
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80131130
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_801311B4
lbl_80131130:
    bl VIGetDimmingCount
    cmpwi r3, 0x0
    beq lbl_801311B4
    mr r3, r29
    li r4, 0x0
    bl fn_80134630
    mr r3, r29
    bl fn_80134DE8
    cmpwi r3, 0x0
    beq lbl_80131194
    mr r3, r29
    li r4, 0x0
    bl fn_801354A0
    cmpwi r3, 0x0
    beq lbl_8013117C
    mr r3, r29
    li r4, 0x0
    li r5, -0x1
    bl fn_80134304
lbl_8013117C:
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80131194
    mr r3, r29
    li r4, 0x0
    bl fn_80134664
lbl_80131194:
    mr r3, r29
    bl fn_801359DC
    cmpwi r3, 0x0
    beq lbl_801311B4
    mr r3, r29
    bl fn_80135484
    mr r4, r26
    bl fn_80125DE0
lbl_801311B4:
    addi r27, r27, 0x1
    addi r31, r31, 0x4
lbl_801311BC:
    cmpw r27, r30
    blt lbl_80131104
    li r0, 0x0
    stb r0, lbl_8049C340
lbl_801311CC:
    li r3, 0x0
    b lbl_80131224
lbl_801311D4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0xff
    bne lbl_801311E8
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_801311E8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80131200
    cmpwi r0, 0xf1
    beq lbl_8013120C
    b lbl_80131210
lbl_80131200:
    li r0, 0x1
    stw r0, 0x0(r3)
    b lbl_80131210
lbl_8013120C:
    bl fn_8017776C
lbl_80131210:
    li r3, 0x0
    b lbl_80131224
lbl_80131218:
    bne lbl_80131220
    bl fn_8017776C
lbl_80131220:
    li r3, 0x0
lbl_80131224:
    addi r11, r1, 0x340
    bl _restgpr_26
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

// asm_to_cpp: fn_8013123C
asm s32 fn_8013123C(s32 arg0) {
    nofralloc
    subi r0, r3, 0x24
    cmplwi r0, 0x19
    bgt lbl_80131250
    addi r3, r3, 0x1a
    blr
lbl_80131250:
    subi r0, r3, 0x58
    cmplwi r0, 0x14
    bgt lbl_80131264
    addi r3, r3, 0x1a
    blr
lbl_80131264:
    subi r0, r3, 0x6e
    cmplwi r0, 0x3
    bgt lbl_80131278
    addi r3, r3, 0x19
    blr
lbl_80131278:
    cmpwi r3, 0x6d
    bnelr
    li r3, 0x50
    blr
}

// asm_to_cpp: fn_80131288
asm s32 fn_80131288(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x1
    mr r3, r29
    li r4, 0x0
    lwz r5, 0x0(r28)
    subi r5, r5, 0x1
    bl fn_8013652C
    cmpw r29, r3
    bne lbl_801312D8
    lwz r4, 0xc(r28)
    slwi r0, r3, 2
    stwx r30, r4, r0
    b lbl_80131308
lbl_801312D8:
    lwz r3, 0x4(r28)
    addi r0, r3, 0x1
    stw r0, 0x4(r28)
    cmpwi r30, 0x0
    beq lbl_80131304
    mr r3, r30
    li r4, 0x1
    lwz r12, 0xc(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_80131304:
    li r31, 0x0
lbl_80131308:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

} // extern "C"
