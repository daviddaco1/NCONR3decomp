#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803492A0[];
extern u8 lbl_803492C4[];
extern u8 lbl_803492D0[];
extern u8 lbl_803492E8[];
extern u8 lbl_803492FC[];
extern u8 lbl_80349348[];
extern u8 lbl_8034935C[];
extern u8 lbl_80349380[];
extern u8 lbl_80349390[];
extern u8 lbl_803493A8[];
extern u8 lbl_803493BC[];
extern u8 lbl_80349408[];
extern u8 lbl_8034941C[];
extern u8 lbl_80349450[];
extern u8 lbl_80349468[];

void C_QUATMtx(s32 arg0, s32 arg1);
s8 * Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode(s32 *arg0, s8 *arg1);
void PSMTXQuat(s32 arg0, s32 arg1);
s32 _restgpr_29();
s32 _savegpr_29();
M2C_UNK fn_80018B90(s32 arg0);
f32 fn_80018B94(s32 arg0, s32 arg1, s32 arg2);
void fn_80028EBC(s32 *arg0, s32 *arg1);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AF5C(s32 arg0);
s32 fn_8003D58C(s8 *arg0);
void fn_8003D594(s32 arg0);
void fn_8003D598(s32 arg0);
void fn_80047C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 * fn_80047C8C(s32 *arg0, s32 arg1);
s32 fn_80047CBC(s32 arg0);
s32 fn_80047D0C(s8 *arg0, s8 *arg1);
s32 fn_80047D80(s8 *arg0, s8 *arg1);
s32 fn_80047DF4(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047E74(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047F10(s32 *arg0, s32 arg1);
s8 * fn_80047F24(s8 *arg0, s32 *arg1);
s32 fn_80047FAC(s8 *arg0, s8 *arg1);
s32 fn_80048194(s8 *arg0, s8 *arg1);
s32 fn_8004837C(s8 *arg0);
s32 fn_8004838C(s8 *arg0);
s32 fn_8004839C(s8 *arg0, s32 arg1);
s32 * fn_800483EC(s32 *arg0, s32 arg1);
s32 fn_8004841C(s32 arg0);
s32 fn_8004846C(s8 *arg0, s32 arg1);
s8 * fn_800484BC(s8 *arg0, s8 *arg1);
s8 * fn_800484FC(s8 *arg0, s8 *arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

void fn_80047C40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8002AF5C((s32) (arg0));
    fn_80018B94((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

s32 * fn_80047C8C(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

// asm_to_cpp: fn_80047CBC
asm s32 fn_80047CBC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80047CF4
    lis r3, lbl_803492C4@ha
    addi r3, r3, lbl_803492C4@l
    li r4, 0x233
    lis r5, lbl_803492A0@ha
    addi r5, r5, lbl_803492A0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80047CF4:
    addi r3, r31, 0x34
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80047D0C
asm s32 fn_80047D0C(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8004837C
    cmpwi r3, 0x0
    beq lbl_80047D4C
    cmpwi r31, 0x0
    beq lbl_80047D4C
    lwz r3, 0x18(r30)
    mr r4, r31
    bl fn_80047FAC
    b lbl_80047D68
lbl_80047D4C:
    lis r3, lbl_80349468@ha
    addi r3, r3, lbl_80349468@l
    li r4, 0xca
    addi r5, r3, 0x74
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80047D68:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80047D80
asm s32 fn_80047D80(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8004838C
    cmpwi r3, 0x0
    beq lbl_80047DC0
    cmpwi r31, 0x0
    beq lbl_80047DC0
    lwz r3, 0x1c(r30)
    mr r4, r31
    bl fn_80048194
    b lbl_80047DDC
lbl_80047DC0:
    lis r3, lbl_80349468@ha
    addi r3, r3, lbl_80349468@l
    li r4, 0xdd
    addi r5, r3, 0x74
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80047DDC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80047DF4(s8 *arg0, s32 *arg1, s8 *arg2) {
    s32 sp8;
    s8 *temp_r3;

    sp8 = (s32) (*arg1);
    temp_r3 = (s8 *) (fn_80047F24((s8 *) (M2C_FIELD(arg0, s8 **, 0x18)), (s32 *) (&sp8)));
    if (temp_r3 != NULL) {
        fn_800484BC((s8 *) (temp_r3 + 0x94), (s8 *) (arg2));
        M2C_FIELD(temp_r3, f32 *, 0xA4) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
        M2C_FIELD(temp_r3, f32 *, 0xA8) = (f32) M2C_FIELD(arg2, f32 *, 0x1C);
        M2C_FIELD(temp_r3, f32 *, 0xAC) = (f32) M2C_FIELD(arg2, f32 *, 0x2C);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80047E74(s8 *arg0, s32 *arg1, s8 *arg2) {
    s32 sp8;
    s32 *temp_r3;

    sp8 = (s32) (*arg1);
    temp_r3 = (s32 *) (fn_80047F24((s8 *) (M2C_FIELD(arg0, s8 **, 0x18)), (s32 *) (&sp8)));
    if (temp_r3 != NULL) {
        if (fn_80047F10((s32 *) (temp_r3), (s32) (2)) != 0) {
            fn_800484FC((s8 *) (arg2), (s8 *) ((s8 *)temp_r3 + 0x94));
        } else {
            fn_8002AE08((s32) ((s32) arg2));
        }
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(temp_r3, f32 *, 0xA4);
        M2C_FIELD(arg2, f32 *, 0x1C) = (f32) M2C_FIELD(temp_r3, f32 *, 0xA8);
        M2C_FIELD(arg2, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0xAC);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80047F10(s32 *arg0, s32 arg1) {
    return (s32) ((*arg0 & arg1) != 0);
}

// asm_to_cpp: fn_80047F24
asm s8 * fn_80047F24(s8 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lhz r4, 0x2(r4)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80047F70
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_80047F94
lbl_80047F70:
    lis r3, lbl_80349450@ha
    addi r3, r3, lbl_80349450@l
    li r4, 0x1e1
    lis r5, lbl_8034941C@ha
    addi r5, r5, lbl_8034941C@l
    li r6, 0x0
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80047F94:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80047FAC
asm s32 fn_80047FAC(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8004815C
    lhz r4, 0x2(r4)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8004815C
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r6, r3, r0
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_8004803C
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8004803C
    li r10, 0x0
lbl_8004803C:
    cmpwi r10, 0x0
    bne lbl_80048058
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80048058
    li r9, 0x0
lbl_80048058:
    cmpwi r9, 0x0
    bne lbl_80048070
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80048070
    li r8, 0x0
lbl_80048070:
    cmpwi r8, 0x0
    bne lbl_8004808C
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8004808C
    li r7, 0x0
lbl_8004808C:
    cmpwi r7, 0x0
    bne lbl_800480A8
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800480A8
    li r5, 0x0
lbl_800480A8:
    cmpwi r5, 0x0
    bne lbl_800480C4
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800480C4
    li r4, 0x0
lbl_800480C4:
    cmpwi r4, 0x0
    bne lbl_800480E8
    lis r3, lbl_80349408@ha
    addi r3, r3, lbl_80349408@l
    li r4, 0x1c3
    lis r5, lbl_803493BC@ha
    addi r5, r5, lbl_803493BC@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_800480E8:
    addi r3, r30, 0x18
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8004839C
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_8003D598
    mr r3, r30
    bl fn_8003D58C
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8003D594
    li r4, 0x0
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    stwx r4, r3, r0
    stw r4, 0x0(r31)
    lwz r3, 0xc(r30)
    subi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x1
    b lbl_8004817C
lbl_8004815C:
    lis r3, lbl_803493A8@ha
    addi r3, r3, lbl_803493A8@l
    li r4, 0x1d6
    lis r5, lbl_80349390@ha
    addi r5, r5, lbl_80349390@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8004817C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80048194
asm s32 fn_80048194(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_80048344
    lhz r4, 0x2(r4)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80048344
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r6, r3, r0
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80048224
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80048224
    li r10, 0x0
lbl_80048224:
    cmpwi r10, 0x0
    bne lbl_80048240
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80048240
    li r9, 0x0
lbl_80048240:
    cmpwi r9, 0x0
    bne lbl_80048258
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80048258
    li r8, 0x0
lbl_80048258:
    cmpwi r8, 0x0
    bne lbl_80048274
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80048274
    li r7, 0x0
lbl_80048274:
    cmpwi r7, 0x0
    bne lbl_80048290
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80048290
    li r5, 0x0
lbl_80048290:
    cmpwi r5, 0x0
    bne lbl_800482AC
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800482AC
    li r4, 0x0
lbl_800482AC:
    cmpwi r4, 0x0
    bne lbl_800482D0
    lis r3, lbl_80349348@ha
    addi r3, r3, lbl_80349348@l
    li r4, 0x1c3
    lis r5, lbl_803492FC@ha
    addi r5, r5, lbl_803492FC@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_800482D0:
    addi r3, r30, 0x18
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8004846C
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_8003D598
    mr r3, r30
    bl fn_8003D58C
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8003D594
    li r4, 0x0
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    stwx r4, r3, r0
    stw r4, 0x0(r31)
    lwz r3, 0xc(r30)
    subi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x1
    b lbl_80048364
lbl_80048344:
    lis r3, lbl_803492E8@ha
    addi r3, r3, lbl_803492E8@l
    li r4, 0x1d6
    lis r5, lbl_803492D0@ha
    addi r5, r5, lbl_803492D0@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80048364:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8004837C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x18) != 0);
}

s32 fn_8004838C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x1C) != 0);
}

s32 fn_8004839C(s8 *arg0, s32 arg1) {
    s32 spC;
    s8 *sp8;

    sp8 = (s8 *) (Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode((s32 *) ((s32 *) arg0), (s8 *) (fn_8004841C((s32) (arg1)))));
    return (s32) (*fn_800483EC((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 * fn_800483EC(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

// asm_to_cpp: fn_8004841C
asm s32 fn_8004841C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80048454
    lis r3, lbl_80349380@ha
    addi r3, r3, lbl_80349380@l
    li r4, 0x233
    lis r5, lbl_8034935C@ha
    addi r5, r5, lbl_8034935C@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80048454:
    addi r3, r31, 0xe0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8004846C
asm s32 fn_8004846C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    bl fn_80047CBC
    mr r4, r3
    mr r3, r31
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80047C8C
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s8 * fn_800484BC(s8 *arg0, s8 *arg1) {
    C_QUATMtx((s32) ((s32) arg0), (s32) (fn_80018B90((s32) ((s32) arg1))));
    return (s8 *) (arg0);
}

s8 * fn_800484FC(s8 *arg0, s8 *arg1) {
    PSMTXQuat((s32) (fn_8002AE3C((s32) ((s32) arg0))), (s32) ((s32) arg1));
    return (s8 *) (arg0);
}

} // extern "C"
