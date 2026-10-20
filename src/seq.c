#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_8035AAC8;

/*
Decompilation failure in function fn_8013A288:

Found bctr instruction at seq.s line 312, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013AE84:

Found bctr instruction at seq.s line 1124, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013B558:

Found bctr instruction at seq.s line 1583, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013B754:

Found bctr instruction at seq.s line 1720, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013C0A8:

Found bctr instruction at seq.s line 2328, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013CB20:

Found bctr instruction at seq.s line 3009, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013D4C8:

Found bctr instruction at seq.s line 3638, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013DAC8:

Found bctr instruction at seq.s line 4033, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013DEEC:

Found bctr instruction at seq.s line 4305, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013E3BC:

Found bctr instruction at seq.s line 4619, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8013E6DC:

Found bctr instruction at seq.s line 4832, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s32 * fn_8013ECB0();
s32 fn_8013EE80();
void fn_8013EE98();
s32 fn_8013EEAC();
s32 fn_8013EEC4();

s32 *fn_8013ECB0(s32 arg0, s8 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

// fn_8013EE80: definicion C reemplazada por asm (ver abajo)


void fn_8013EE98(s8 *arg0, s32 arg1) {
    s32 *temp_r5;

    temp_r5 = M2C_FIELD(arg0, s8 **, 0x5C) - 4;
    M2C_FIELD(arg0, s8 **, 0x5C) = temp_r5;
    *temp_r5 = arg1;
}

// fn_8013EEAC: definicion C reemplazada por asm (ver abajo)


s32 fn_8013EEC4(s8 *arg0, s32 arg1) {
    return arg1 - M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 0x5C);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A0B60;
extern float lbl_804A0B68;
extern float lbl_804A0B70;
extern u8 jumptable_8035A5E0[];
extern u8 jumptable_8035A728[];
extern u8 jumptable_8035A808[];
extern u8 jumptable_8035A828[];
extern u8 jumptable_8035A8A0[];
extern u8 jumptable_8035A918[];
extern u8 jumptable_8035A990[];
extern u8 jumptable_8035A9E4[];
extern u8 jumptable_8035AA24[];
extern u8 jumptable_8035AA74[];
extern u8 jumptable_8035AAA8[];
extern void _restgpr_27();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_27();
extern void _savegpr_28();
extern void _savegpr_29();
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B04();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_8001D9D0();
extern void fn_8001F9C8();
extern void fn_80042FFC();
extern void fn_8011F190();
extern int fn_8013A288();
extern int fn_8013AE84();
extern int fn_8013B558();
extern int fn_8013B754();
extern int fn_8013C0A8();
extern int fn_8013CB20();
extern int fn_8013D4C8();
extern int fn_8013DAC8();
extern int fn_8013DEEC();
extern int fn_8013E3BC();
extern int fn_8013E6DC();
s32 * fn_8013ECB0();
s32 fn_8013EE80(s8 *arg0);
s32 fn_8013EEAC(s8 *arg0, s32 arg1);
extern void fn_80164604();
extern void fn_80164668();
extern void fn_80164DB8();
extern void fn_80164DEC();
extern void fn_801653A0();
extern void fn_80165C74();
extern void fn_80165CC4();
extern void fn_801734E4();
extern void fn_80173580();
extern void fn_801735E8();
extern void fn_80173750();
extern void fn_80173754();
extern void fn_80173758();
extern void fn_8017375C();
extern void fn_801739BC();
extern void fn_80173B20();
extern void fn_80173F88();
extern void fn_80173F8C();
extern void fn_80173FAC();
extern void fn_80177138();
extern void fn_80177148();
extern void fn_801773E0();
extern void fn_8017742C();
extern void fn_8017743C();
extern void fn_8017750C();
extern void fn_80177654();

// asm_to_cpp: fn_8013A288
asm int fn_8013A288() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r31, r4
    mr r29, r5
    lwz r30, 0x0(r5)
    srwi r0, r30, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x51
    bgt lbl_8013AE50
    lis r6, jumptable_8035A5E0@ha
    addi r6, r6, jumptable_8035A5E0@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    srawi r3, r0, 16
    addi r0, r3, 0x4
    cmplwi r0, 0x3
    ble lbl_8013A308
    lwz r3, 0x0(r4)
    clrlwi r0, r30, 16
    slwi r0, r0, 8
    add r0, r3, r0
    stw r0, 0x0(r4)
    addi r0, r5, 0x4
    stw r0, 0x58(r4)
lbl_8013A308:
    li r29, 0x0
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    lwz r4, 0xc(r28)
    lwz r0, 0x4(r4)
    srawi r4, r0, 16
    addi r0, r4, 0x4
    cmplwi r0, 0x3
    ble lbl_8013A350
    lwz r5, 0x0(r31)
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, 0x0(r31)
    stw r3, 0x58(r31)
lbl_8013A350:
    li r29, 0x0
    b lbl_8013AE68
    extsh r31, r30
    mulli r30, r31, 0x60
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    lwz r0, 0xc(r28)
    add r4, r0, r30
    stw r3, 0x58(r4)
    li r0, 0x0
    lwz r3, 0xc(r28)
    stwx r0, r3, r30
    addi r29, r29, 0x8
    lwz r5, 0xc(r28)
    lwz r4, 0x4(r5)
    srawi r3, r4, 16
    addi r0, r3, 0x4
    cmplwi r0, 0x3
    bgt lbl_8013A3D0
    clrlwi r0, r4, 16
    cmpw r0, r31
    beq lbl_8013AE68
    lwz r4, 0x18(r28)
    lhz r3, 0xa(r28)
    lhz r0, 0x6(r28)
    subf r0, r31, r0
    mullw r0, r3, r0
    slwi r0, r0, 2
    add r0, r4, r0
    add r3, r5, r30
    stw r0, 0x5c(r3)
    b lbl_8013AE68
lbl_8013A3D0:
    lwz r4, 0x18(r28)
    lhz r3, 0xa(r28)
    lhz r0, 0x6(r28)
    subf r0, r31, r0
    mullw r0, r3, r0
    slwi r0, r0, 2
    add r0, r4, r0
    add r3, r5, r30
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r28)
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 16
    cmpw r0, r31
    bne lbl_8013AE68
    add r3, r3, r30
    lwz r29, 0x58(r3)
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x8(r1)
    lwz r31, 0x0(r3)
    mulli r30, r31, 0x60
    mr r3, r28
    lwz r4, 0x0(r29)
    bl fn_8013EEAC
    lwz r0, 0xc(r28)
    add r4, r0, r30
    stw r3, 0x58(r4)
    li r0, 0x0
    lwz r3, 0xc(r28)
    stwx r0, r3, r30
    addi r29, r29, 0x4
    lwz r5, 0xc(r28)
    lwz r4, 0x4(r5)
    srawi r3, r4, 16
    addi r0, r3, 0x4
    cmplwi r0, 0x3
    bgt lbl_8013A4A4
    clrlwi r0, r4, 16
    cmpw r0, r31
    beq lbl_8013AE68
    lwz r4, 0x18(r28)
    lhz r3, 0xa(r28)
    lhz r0, 0x6(r28)
    subf r0, r31, r0
    mullw r0, r3, r0
    slwi r0, r0, 2
    add r0, r4, r0
    add r3, r5, r30
    stw r0, 0x5c(r3)
    b lbl_8013AE68
lbl_8013A4A4:
    lwz r4, 0x18(r28)
    lhz r3, 0xa(r28)
    lhz r0, 0x6(r28)
    subf r0, r31, r0
    mullw r0, r3, r0
    slwi r0, r0, 2
    add r0, r4, r0
    add r3, r5, r30
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r28)
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 16
    cmpw r0, r31
    bne lbl_8013AE68
    add r3, r3, r30
    lwz r29, 0x58(r3)
    b lbl_8013AE68
    li r4, 0x0
    lwz r3, 0xc(r3)
    extsh r0, r30
    mulli r0, r0, 0x60
    add r3, r3, r0
    stw r4, 0x58(r3)
    addi r29, r5, 0x4
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    li r5, 0x0
    lwz r4, 0xc(r28)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x60
    add r3, r4, r0
    stw r5, 0x58(r3)
    b lbl_8013AE68
    lwz r3, 0xc(r3)
    extsh r0, r30
    mulli r0, r0, 0x60
    add r3, r3, r0
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_8013A55C
    li r29, 0x0
    b lbl_8013AE68
lbl_8013A55C:
    addi r29, r5, 0x4
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r4, 0xc(r28)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x60
    add r3, r4, r0
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_8013AE68
    li r29, 0x0
    b lbl_8013AE68
    srwi r30, r30, 8
    extsb r31, r30
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    mr r0, r31
    mulli r0, r0, 0x60
    lwz r3, 0x8(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r28)
    add r3, r3, r0
    stw r4, 0x58(r3)
    li r4, 0x0
    lwz r3, 0xc(r28)
    stwx r4, r3, r0
    lwz r6, 0xc(r28)
    lwz r4, 0x4(r6)
    srawi r3, r4, 16
    addi r3, r3, 0x4
    cmplwi r3, 0x3
    bgt lbl_8013A628
    clrlwi r3, r4, 16
    cmpw r3, r31
    beq lbl_8013AE68
    lwz r5, 0x18(r28)
    lhz r4, 0xa(r28)
    lhz r3, 0x6(r28)
    subf r3, r31, r3
    mullw r3, r4, r3
    slwi r3, r3, 2
    add r4, r5, r3
    add r3, r6, r0
    stw r4, 0x5c(r3)
    b lbl_8013AE68
lbl_8013A628:
    lwz r5, 0x18(r28)
    lhz r4, 0xa(r28)
    lhz r3, 0x6(r28)
    subf r3, r31, r3
    mullw r3, r4, r3
    slwi r3, r3, 2
    add r4, r5, r3
    add r3, r6, r0
    stw r4, 0x5c(r3)
    lwz r4, 0xc(r28)
    lwz r3, 0x4(r4)
    clrlwi r3, r3, 16
    cmpw r3, r31
    bne lbl_8013AE68
    add r3, r4, r0
    lwz r29, 0x58(r3)
    b lbl_8013AE68
    lwz r3, 0xc(r3)
    extsh r0, r30
    mulli r0, r0, 0x60
    add r3, r3, r0
    lwz r0, 0x58(r3)
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    addi r29, r5, 0x4
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r4, 0xc(r28)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x60
    add r3, r4, r0
    lwz r0, 0x58(r3)
    stw r0, 0x4c(r31)
    stw r0, 0x54(r31)
    b lbl_8013AE68
    lwz r3, 0xc(r3)
    extsh r0, r30
    mulli r0, r0, 0x60
    add r3, r3, r0
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_8013A6E8
    li r29, 0x0
    b lbl_8013AE68
lbl_8013A6E8:
    addi r29, r5, 0x4
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    srwi r0, r30, 8
    extsb r0, r0
    mulli r4, r0, 0xc
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 16
    lwz r3, 0x10(r28)
    sthx r0, r3, r4
    lwz r3, 0x10(r28)
    lhzx r0, r3, r4
    stw r0, 0x4c(r31)
    stw r0, 0x54(r31)
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    srwi r0, r30, 8
    extsb r0, r0
    mulli r6, r0, 0xc
    lwz r5, 0x10(r28)
    lhzx r4, r5, r6
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    or r0, r4, r0
    clrlwi r0, r0, 16
    sthx r0, r5, r6
    lwz r3, 0x10(r28)
    lhzx r0, r3, r6
    stw r0, 0x4c(r31)
    stw r0, 0x54(r31)
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    srwi r0, r30, 8
    extsb r0, r0
    mulli r6, r0, 0xc
    lwz r5, 0x10(r28)
    lhzx r4, r5, r6
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    and r0, r4, r0
    clrlwi r0, r0, 16
    sthx r0, r5, r6
    lwz r3, 0x10(r28)
    lhzx r0, r3, r6
    stw r0, 0x4c(r31)
    stw r0, 0x54(r31)
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    srwi r0, r30, 8
    extsb r0, r0
    mulli r6, r0, 0xc
    lwz r5, 0x10(r28)
    lhzx r4, r5, r6
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    andc r0, r4, r0
    clrlwi r0, r0, 16
    sthx r0, r5, r6
    lwz r3, 0x10(r28)
    lhzx r0, r3, r6
    stw r0, 0x4c(r31)
    stw r0, 0x54(r31)
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x8(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x10(r28)
    srwi r0, r30, 8
    extsb r0, r0
    mulli r0, r0, 0xc
    lhzx r0, r3, r0
    and r0, r4, r0
    stw r0, 0x4c(r31)
    stw r0, 0x54(r31)
    b lbl_8013AE68
    lwz r4, 0x10(r3)
    addi r4, r4, 0x8
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    mulli r0, r0, 0xc
    lwzx r3, r4, r0
    srwi r0, r30, 8
    extsb r0, r0
    mulli r0, r0, 0xc
    stwx r3, r4, r0
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bne lbl_8013A8B0
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A8B0:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    beq lbl_8013A8D4
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A8D4:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    ble lbl_8013A8F8
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A8F8:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    blt lbl_8013A91C
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A91C:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bge lbl_8013A940
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A940:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bgt lbl_8013A964
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A964:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bge lbl_8013A988
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A988:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    blt lbl_8013A9AC
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A9AC:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r6, 0x50(r4)
    cmpwi r6, 0x0
    bge lbl_8013A9D0
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A9D0:
    subi r0, r6, 0x1
    stw r0, 0x50(r4)
    cmpwi r0, 0x0
    beq lbl_8013A9F0
    lwz r4, 0x4(r5)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013A9F0:
    addi r29, r5, 0x8
    b lbl_8013AE68
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bne lbl_8013AA44
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AA44:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    beq lbl_8013AA78
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AA78:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    ble lbl_8013AAAC
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AAAC:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    blt lbl_8013AAE0
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AAE0:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bge lbl_8013AB14
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AB14:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bgt lbl_8013AB48
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AB48:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bge lbl_8013AB7C
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AB7C:
    addi r29, r5, 0x8
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    blt lbl_8013ABB0
    mr r3, r31
    addi r4, r5, 0x8
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0x4(r29)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013ABB0:
    addi r29, r5, 0x8
    b lbl_8013AE68
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bne lbl_8013ABE4
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013ABE4:
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    beq lbl_8013AC08
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013AC08:
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    ble lbl_8013AC2C
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013AC2C:
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    blt lbl_8013AC50
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013AC50:
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bge lbl_8013AC74
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013AC74:
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bgt lbl_8013AC98
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013AC98:
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    bge lbl_8013ACBC
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013ACBC:
    addi r29, r5, 0x4
    b lbl_8013AE68
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    blt lbl_8013ACE0
    mr r3, r31
    bl fn_8013EE80
    mr r29, r3
    b lbl_8013AE68
lbl_8013ACE0:
    addi r29, r5, 0x4
    b lbl_8013AE68
    mr r3, r31
    lwz r4, 0x50(r4)
    bl fn_8013EE98
    mr r3, r28
    mr r4, r31
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x50(r31)
    mr r3, r31
    addi r4, r29, 0x4
    bl fn_8013EE98
    b lbl_8013AE68
    li r28, 0x1
    mr r3, r31
    bl fn_8013EE80
    mr r4, r3
    lwz r3, 0x50(r31)
    cmpwi r3, 0x0
    blt lbl_8013AD58
    subi r0, r3, 0x1
    stw r0, 0x50(r31)
    cmpwi r0, 0x0
    bgt lbl_8013AD58
    li r28, 0x0
lbl_8013AD58:
    cmpwi r28, 0x0
    beq lbl_8013AD70
    mr r29, r4
    mr r3, r31
    bl fn_8013EE98
    b lbl_8013AE68
lbl_8013AD70:
    mr r3, r31
    bl fn_8013EE80
    stw r3, 0x50(r31)
    addi r29, r29, 0x4
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    lwz r4, 0x8(r1)
    lwz r5, 0x0(r4)
    lwz r6, 0x0(r3)
    addi r29, r3, 0x4
    slwi r0, r5, 2
    lwzx r0, r29, r0
    clrlwi r4, r0, 8
    cmpwi r5, 0x0
    blt lbl_8013ADC4
    cmpw r5, r6
    bge lbl_8013ADC4
    cmpwi r0, 0x0
    bne lbl_8013ADD0
lbl_8013ADC4:
    slwi r0, r6, 2
    add r29, r29, r0
    b lbl_8013AE68
lbl_8013ADD0:
    mr r3, r28
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
    addi r5, r1, 0x8
    mr r6, r29
    bl fn_80164EC8
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r3)
    addi r29, r3, 0x4
    slwi r0, r4, 2
    lwzx r0, r29, r0
    clrlwi r30, r0, 8
    cmpwi r4, 0x0
    blt lbl_8013AE20
    cmpw r4, r5
    bge lbl_8013AE20
    cmpwi r0, 0x0
    bne lbl_8013AE2C
lbl_8013AE20:
    slwi r0, r5, 2
    add r29, r29, r0
    b lbl_8013AE68
lbl_8013AE2C:
    mr r3, r31
    slwi r0, r5, 2
    add r4, r29, r0
    bl fn_8013EE98
    mr r3, r28
    mr r4, r30
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013AE68
lbl_8013AE50:
    mr r3, r28
    mr r4, r31
    mr r5, r29
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013AE68:
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8013AE84
asm int fn_8013AE84() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r7, 0x0(r5)
    srwi r0, r7, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x37
    bgt lbl_8013B524
    lis r6, jumptable_8035A728@ha
    addi r6, r6, jumptable_8035A728@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r29)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_80164828
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r29)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_8016478C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_8016499C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_8013AF80:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013AFBC
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013AFBC
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013AFBC
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013AFBC
    addi r31, r31, 0x4
    b lbl_8013AF80
lbl_8013AFBC:
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_801648C4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_8013AFF4:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B030
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013B030
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013B030
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B030
    addi r31, r31, 0x4
    b lbl_8013AFF4
lbl_8013B030:
    addi r31, r31, 0x4
    b lbl_8013B53C
    lwz r29, 0x5c(r4)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    bl fn_8016499C
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8013B53C
    lwz r29, 0x5c(r4)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    bl fn_801648C4
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_8017743C
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_801773E0
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8013B53C
    addi r31, r5, 0x4
    lwz r3, 0xc(r3)
    lwz r0, 0x34(r3)
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    b lbl_8013B53C
    addi r31, r5, 0x4
    lwz r0, 0xc(r3)
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8017750C
    b lbl_8013B53C
    addi r31, r5, 0x4
    bl fn_8017742C
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_80177520
    b lbl_8013B53C
    lwz r29, 0x5c(r4)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x0(r29)
    bl fn_80177654
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80164604
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80164668
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80164750
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80164750
    cmpwi r3, 0x0
    beq lbl_8013B53C
    li r31, 0x0
    b lbl_8013B53C
    bl fn_801645A0
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x14(r3)
    lwz r0, 0x38(r3)
    stw r0, 0x4c(r30)
    stw r0, 0x54(r30)
    b lbl_8013B53C
    addi r31, r5, 0x4
    mr r3, r31
    bl fn_80164DB8
    cmpwi r3, 0x0
    beq lbl_8013B31C
    li r0, 0x1
    stw r0, 0x54(r30)
    b lbl_8013B324
lbl_8013B31C:
    li r0, 0x0
    stw r0, 0x54(r30)
lbl_8013B324:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B360
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013B360
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013B360
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B360
    addi r31, r31, 0x4
    b lbl_8013B324
lbl_8013B360:
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    bl fn_80164DB8
    cmpwi r3, 0x0
    beq lbl_8013B398
    li r0, 0x1
    stw r0, 0x54(r30)
    b lbl_8013B53C
lbl_8013B398:
    li r0, 0x0
    stw r0, 0x54(r30)
    b lbl_8013B53C
    srwi r0, r7, 8
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8013B3C8
    cmpwi r0, 0x1
    beq lbl_8013B3D8
    cmpwi r0, 0x2
    beq lbl_8013B3E8
    b lbl_8013B3F4
lbl_8013B3C8:
    bl fn_80177138
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8013B3F4
lbl_8013B3D8:
    bl fn_80177148
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
    b lbl_8013B3F4
lbl_8013B3E8:
    bl fn_80177168
    stw r3, 0x4c(r30)
    stw r3, 0x54(r30)
lbl_8013B3F4:
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    addi r31, r3, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    addi r31, r3, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
lbl_8013B440:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B47C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013B47C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013B47C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B47C
    addi r31, r31, 0x4
    b lbl_8013B440
lbl_8013B47C:
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
lbl_8013B498:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B4D4
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013B4D4
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013B4D4
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013B4D4
    addi r31, r31, 0x4
    b lbl_8013B498
lbl_8013B4D4:
    addi r31, r31, 0x4
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8013B53C
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x4
    stw r0, 0x5c(r30)
    b lbl_8013B53C
lbl_8013B524:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013B53C:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8013B558
asm int fn_8013B558() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    mr r31, r5
    lwz r6, 0x0(r5)
    srwi r0, r6, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x7
    bgt lbl_8013B720
    lis r5, jumptable_8035A808@ha
    addi r5, r5, jumptable_8035A808@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
    b lbl_8013B738
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    lwz r3, 0x8(r1)
    stw r0, 0x0(r3)
    b lbl_8013B738
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0xc(r1)
    lwz r5, 0x0(r4)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r3, 0x8(r1)
    stw r5, 0x0(r3)
    b lbl_8013B738
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    mr r3, r27
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EE98
    b lbl_8013B738
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    mr r3, r27
    bl fn_8013EE80
    lwz r4, 0xc(r1)
    stw r3, 0x0(r4)
    b lbl_8013B738
    clrlwi r29, r6, 24
    srwi r0, r6, 8
    clrlwi r28, r0, 24
    slwi r30, r28, 2
    b lbl_8013B698
lbl_8013B684:
    mr r3, r27
    lwzx r4, r27, r30
    bl fn_8013EE98
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_8013B698:
    cmpw r28, r29
    ble lbl_8013B684
    addi r31, r31, 0x4
    b lbl_8013B738
    srwi r0, r6, 8
    clrlwi r29, r0, 24
    clrlwi r28, r6, 24
    slwi r30, r28, 2
    b lbl_8013B6D0
lbl_8013B6BC:
    mr r3, r27
    bl fn_8013EE80
    stwx r3, r27, r30
    subi r28, r28, 0x1
    subi r30, r30, 0x4
lbl_8013B6D0:
    cmpw r28, r29
    bge lbl_8013B6BC
    addi r31, r31, 0x4
    b lbl_8013B738
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r31
    bl fn_80165074
    lwz r4, 0x8(r1)
    lwz r7, 0x0(r4)
    lwz r6, 0xc(r28)
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    mulli r5, r0, 0x60
    lwz r0, 0x0(r3)
    slwi r4, r0, 2
    add r0, r6, r5
    stwx r7, r4, r0
    addi r31, r3, 0x4
    b lbl_8013B738
lbl_8013B720:
    mr r3, r28
    mr r4, r27
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013B738:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8013B754
asm int fn_8013B754() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x1d
    bgt lbl_8013C074
    lis r5, jumptable_8035A828@ha
    addi r5, r5, jumptable_8035A828@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r29)
    lwz r3, 0x8(r3)
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8013B7E8
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x26
    lwz r5, 0x14(r1)
    lwz r5, 0x0(r5)
    opword 0x4CC63182
    bl sprintf
    b lbl_8013B83C
lbl_8013B7E8:
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8013B818
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x2c
    lwz r5, 0x14(r1)
    lwz r5, 0x0(r5)
    opword 0x4CC63182
    bl sprintf
    b lbl_8013B83C
lbl_8013B818:
    lwz r3, 0x14(r1)
    lwz r5, 0x0(r3)
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x30
    mr r6, r5
    opword 0x4CC63182
    bl sprintf
lbl_8013B83C:
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_80164DEC
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    subf r0, r4, r0
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    and r0, r4, r0
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    nor r0, r0, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    neg r0, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x14(r1)
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x14(r1)
    lwz r3, 0x0(r4)
    subi r0, r3, 0x1
    stw r0, 0x0(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    lfd f1, lbl_804A0B60
    xoris r0, r0, 0x8000
    stw r0, 0x11c(r1)
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    b lbl_8013C08C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r5, r3
    lwz r4, 0x14(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8013BA54
    mr r3, r29
    lwz r4, 0x0(r5)
    bl fn_8013EEAC
    mr r31, r3
    b lbl_8013C08C
lbl_8013BA54:
    addi r31, r3, 0x4
    b lbl_8013C08C
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r5, r3
    lwz r4, 0x14(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_8013BA90
    mr r3, r29
    lwz r4, 0x0(r5)
    bl fn_8013EEAC
    mr r31, r3
    b lbl_8013C08C
lbl_8013BA90:
    addi r31, r3, 0x4
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    add r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    subf r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    mullw r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    divw r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    slw r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    sraw r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lwz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    and r0, r4, r0
    stw r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    and r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lwz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    or r0, r4, r0
    stw r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    or r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lwz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    andc r0, r4, r0
    stw r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    andc r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lwz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x0(r3)
    xor r0, r4, r0
    stw r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    xor r0, r4, r0
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_801725D4
    lwz r4, 0x14(r1)
    stw r3, 0x0(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_801728DC
    lwz r4, 0x14(r1)
    stw r3, 0x0(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lwz r6, 0x0(r6)
    bl fn_8017291C
    lwz r4, 0x14(r1)
    stw r3, 0x0(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013C08C
lbl_8013C074:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013C08C:
    mr r3, r31
    addi r11, r1, 0x130
    bl _restgpr_29
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_8013C0A8
asm int fn_8013C0A8() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x1d
    bgt lbl_8013CAEC
    lis r5, jumptable_8035A8A0@ha
    addi r5, r5, jumptable_8035A8A0@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r29)
    lwz r3, 0x8(r3)
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8013C140
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x26
    lwz r5, 0x14(r1)
    lbz r5, 0x0(r5)
    extsb r5, r5
    opword 0x4CC63182
    bl sprintf
    b lbl_8013C19C
lbl_8013C140:
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8013C174
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x2c
    lwz r5, 0x14(r1)
    lbz r5, 0x0(r5)
    extsb r5, r5
    opword 0x4CC63182
    bl sprintf
    b lbl_8013C19C
lbl_8013C174:
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x30
    extsb r5, r0
    mr r6, r5
    opword 0x4CC63182
    bl sprintf
lbl_8013C19C:
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_80164DEC
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r4, r0
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    subf r0, r4, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r4, r0
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    and r0, r4, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    nor r0, r0, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    neg r0, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x14(r1)
    lbz r3, 0x0(r4)
    addi r0, r3, 0x1
    extsb r0, r0
    stb r0, 0x0(r4)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x14(r1)
    lbz r3, 0x0(r4)
    subi r0, r3, 0x1
    extsb r0, r0
    stb r0, 0x0(r4)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    lfd f1, lbl_804A0B60
    xoris r0, r0, 0x8000
    stw r0, 0x11c(r1)
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    b lbl_8013CB04
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r5, r3
    lwz r4, 0x14(r1)
    lbz r0, 0x0(r4)
    extsb r0, r0
    cmpwi r0, 0x0
    bne lbl_8013C3F0
    mr r3, r29
    lwz r4, 0x0(r5)
    bl fn_8013EEAC
    mr r31, r3
    b lbl_8013CB04
lbl_8013C3F0:
    addi r31, r3, 0x4
    b lbl_8013CB04
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r5, r3
    lwz r4, 0x14(r1)
    lbz r0, 0x0(r4)
    extsb r0, r0
    cmpwi r0, 0x0
    beq lbl_8013C430
    mr r3, r29
    lwz r4, 0x0(r5)
    bl fn_8013EEAC
    mr r31, r3
    b lbl_8013CB04
lbl_8013C430:
    addi r31, r3, 0x4
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    add r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lbz r4, 0x0(r3)
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    subf r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    mullw r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r4, r0
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    divw r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r4, r0
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    extsb r3, r0
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r4, r0
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    slw r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    extsb r4, r0
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    sraw r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lbz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    and r0, r4, r0
    extsb r0, r0
    stb r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    and r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lbz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    or r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lbz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    andc r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lbz r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lbz r0, 0x0(r3)
    xor r0, r4, r0
    extsb r0, r0
    stb r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lbz r0, 0x0(r3)
    xor r0, r4, r0
    extsb r0, r0
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lbz r3, 0x0(r3)
    extsb r3, r3
    lwz r4, 0xc(r1)
    lbz r4, 0x0(r4)
    extsb r4, r4
    bl fn_801725D4
    extsb r0, r3
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lbz r3, 0x0(r3)
    extsb r3, r3
    lwz r4, 0x10(r1)
    lbz r4, 0x0(r4)
    extsb r4, r4
    lwz r5, 0xc(r1)
    lbz r5, 0x0(r5)
    extsb r5, r5
    lwz r6, 0x8(r1)
    lbz r6, 0x0(r6)
    extsb r6, r6
    bl fn_801728DC
    extsb r0, r3
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lbz r3, 0x0(r3)
    extsb r3, r3
    lwz r4, 0x10(r1)
    lbz r4, 0x0(r4)
    extsb r4, r4
    lwz r5, 0xc(r1)
    lbz r5, 0x0(r5)
    extsb r5, r5
    lwz r6, 0x8(r1)
    lbz r6, 0x0(r6)
    extsb r6, r6
    bl fn_8017291C
    extsb r0, r3
    lwz r3, 0x14(r1)
    stb r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0x54(r30)
    b lbl_8013CB04
lbl_8013CAEC:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013CB04:
    mr r3, r31
    addi r11, r1, 0x130
    bl _restgpr_29
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_8013CB20
asm int fn_8013CB20() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x1d
    bgt lbl_8013D494
    lis r5, jumptable_8035A918@ha
    addi r5, r5, jumptable_8035A918@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r29)
    lwz r3, 0x8(r3)
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8013CBB4
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x26
    lwz r5, 0x14(r1)
    lha r5, 0x0(r5)
    opword 0x4CC63182
    bl sprintf
    b lbl_8013CC08
lbl_8013CBB4:
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8013CBE4
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x2c
    lwz r5, 0x14(r1)
    lha r5, 0x0(r5)
    opword 0x4CC63182
    bl sprintf
    b lbl_8013CC08
lbl_8013CBE4:
    lwz r3, 0x14(r1)
    lha r5, 0x0(r3)
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x30
    mr r6, r5
    opword 0x4CC63182
    bl sprintf
lbl_8013CC08:
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_80164DEC
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    subf r0, r4, r0
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x14(r1)
    lha r4, 0x0(r3)
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    and r0, r4, r0
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    nor r0, r0, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    neg r0, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x14(r1)
    lha r3, 0x0(r4)
    addi r0, r3, 0x1
    extsh r0, r0
    sth r0, 0x0(r4)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x14(r1)
    lha r3, 0x0(r4)
    subi r0, r3, 0x1
    extsh r0, r0
    sth r0, 0x0(r4)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    lfd f1, lbl_804A0B60
    xoris r0, r0, 0x8000
    stw r0, 0x11c(r1)
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    lwz r3, 0x14(r1)
    stw r0, 0x0(r3)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r5, r3
    lwz r4, 0x14(r1)
    lha r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8013CE2C
    mr r3, r29
    lwz r4, 0x0(r5)
    bl fn_8013EEAC
    mr r31, r3
    b lbl_8013D4AC
lbl_8013CE2C:
    addi r31, r3, 0x4
    b lbl_8013D4AC
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r5, r3
    lwz r4, 0x14(r1)
    lha r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_8013CE68
    mr r3, r29
    lwz r4, 0x0(r5)
    bl fn_8013EEAC
    mr r31, r3
    b lbl_8013D4AC
lbl_8013CE68:
    addi r31, r3, 0x4
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    add r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0xc(r1)
    lha r4, 0x0(r3)
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    subf r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    mullw r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    divw r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r3, 0x0(r3)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    slw r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    sraw r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lha r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    and r0, r4, r0
    extsh r0, r0
    sth r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    and r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lha r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    or r0, r4, r0
    extsh r0, r0
    sth r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    or r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lha r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    andc r0, r4, r0
    extsh r0, r0
    sth r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    andc r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x14(r1)
    lha r4, 0x0(r5)
    lwz r3, 0x10(r1)
    lha r0, 0x0(r3)
    xor r0, r4, r0
    extsh r0, r0
    sth r0, 0x0(r5)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r4, 0x0(r3)
    lwz r3, 0xc(r1)
    lha r0, 0x0(r3)
    xor r0, r4, r0
    extsh r0, r0
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lha r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lha r4, 0x0(r4)
    bl fn_801725D4
    extsh r0, r3
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lha r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lha r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lha r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lha r6, 0x0(r6)
    bl fn_801728DC
    extsh r0, r3
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lha r3, 0x0(r3)
    lwz r4, 0x10(r1)
    lha r4, 0x0(r4)
    lwz r5, 0xc(r1)
    lha r5, 0x0(r5)
    lwz r6, 0x8(r1)
    lha r6, 0x0(r6)
    bl fn_8017291C
    extsh r0, r3
    lwz r3, 0x14(r1)
    sth r0, 0x0(r3)
    lwz r3, 0x14(r1)
    lha r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013D4AC
lbl_8013D494:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013D4AC:
    mr r3, r31
    addi r11, r1, 0x130
    bl _restgpr_29
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_8013D4C8
asm int fn_8013D4C8() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x14
    bgt lbl_8013DA94
    lis r5, jumptable_8035A990@ha
    addi r5, r5, jumptable_8035A990@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    addi r3, r1, 0x18
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x3a
    lwz r5, 0x14(r1)
    lfs f1, 0x0(r5)
    opword 0x4CC63242
    bl sprintf
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_80164DEC
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f0, 0x0(r3)
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x14(r1)
    lfs f3, 0x0(r4)
    lfs f2, 0x0(r3)
    fsubs f0, f3, f2
    lfs f1, lbl_804A0B70
    fcmpo cr0, f0, f1
    ble lbl_8013D5BC
    li r0, 0x1
    stw r0, 0x54(r30)
    b lbl_8013DAAC
lbl_8013D5BC:
    fsubs f0, f2, f3
    fcmpo cr0, f0, f1
    ble lbl_8013D5D4
    li r0, -0x1
    stw r0, 0x54(r30)
    b lbl_8013DAAC
lbl_8013D5D4:
    li r0, 0x0
    stw r0, 0x54(r30)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r3, 0xc(r1)
    lfs f1, 0x0(r4)
    lfs f0, 0x0(r3)
    fadds f0, f1, f0
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r3, 0xc(r1)
    lfs f1, 0x0(r4)
    lfs f0, 0x0(r3)
    fsubs f0, f1, f0
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r3, 0xc(r1)
    lfs f1, 0x0(r4)
    lfs f0, 0x0(r3)
    fmuls f0, f1, f0
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r4, 0x10(r1)
    lwz r3, 0xc(r1)
    lfs f1, 0x0(r4)
    lfs f0, 0x0(r3)
    fdivs f0, f1, f0
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f0, 0x0(r3)
    fneg f0, f0
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x10(r1)
    lfs f2, 0x0(r3)
    lwz r3, 0xc(r1)
    lfs f3, 0x0(r3)
    lwz r3, 0x8(r1)
    lfs f4, 0x0(r3)
    bl fn_801728FC
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x14(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0x10(r1)
    lfs f2, 0x0(r3)
    lwz r3, 0xc(r1)
    lfs f3, 0x0(r3)
    lwz r3, 0x8(r1)
    lfs f4, 0x0(r3)
    bl fn_8017298C
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0xc(r1)
    lfs f2, 0x0(r3)
    bl fn_80172608
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    lwz r4, 0x10(r1)
    lfs f1, 0x0(r3)
    lfs f0, 0x4(r3)
    fdivs f1, f1, f0
    lfs f0, 0x0(r4)
    fmuls f1, f0, f1
    lfs f0, 0x8(r3)
    fadds f0, f0, f1
    lwz r4, 0x14(r1)
    stfs f0, 0x0(r4)
    addi r31, r3, 0xc
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    bl fn_8001DA9C
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    bl fn_80018C2C
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    bl fn_80018C3C
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    li r0, 0x0
    lwz r4, 0x10(r1)
    la r3, lbl_804A0B70
    lfs f0, 0x4(r3)
    lfs f1, 0x0(r4)
    fcmpo cr0, f0, f1
    bge lbl_8013D954
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_8013D954
    li r0, 0x1
lbl_8013D954:
    cmpwi r0, 0x0
    beq lbl_8013D968
    lfs f1, 0x0(r4)
    bl fn_801A3278
    b lbl_8013D970
lbl_8013D968:
    la r3, lbl_804A0B70
    lfs f1, 0xc(r3)
lbl_8013D970:
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    lwz r3, 0xc(r1)
    lfs f2, 0x0(r3)
    bl fn_800674B8
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r4, 0x14(r1)
    lwz r3, 0x10(r1)
    lfs f0, 0x0(r3)
    fctiwz f0, f0
    stfd f0, 0x118(r1)
    lwz r0, 0x11c(r1)
    stw r0, 0x0(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x54(r30)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    bl fn_80018BD4
    lwz r3, 0x14(r1)
    stfs f1, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    la r4, lbl_804A0B70
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    lfs f0, 0x10(r4)
    fmuls f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
    addi r5, r1, 0x14
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    la r4, lbl_804A0B70
    lwz r3, 0x10(r1)
    lfs f1, 0x0(r3)
    lfs f0, 0x14(r4)
    fmuls f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    b lbl_8013DAAC
lbl_8013DA94:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013DAAC:
    mr r3, r31
    addi r11, r1, 0x130
    bl _restgpr_29
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_8013DAC8
asm int fn_8013DAC8() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_28
    mr r28, r3
    mr r30, r4
    mr r29, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xf
    bgt lbl_8013DEB8
    lis r5, jumptable_8035A9E4@ha
    addi r5, r5, jumptable_8035A9E4@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    addi r3, r1, 0x10
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x41
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    opword 0x4CC63182
    bl sprintf
    mr r3, r28
    addi r4, r1, 0x10
    bl fn_80164DEC
    b lbl_8013DED0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013DED0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r0, 0x8(r1)
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
    b lbl_8013DED0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    mr r3, r28
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    lwz r4, 0xc(r1)
    stw r3, 0x0(r4)
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r4, 0xc(r1)
    lwz r3, 0x0(r4)
    addi r0, r3, 0x4
    stw r0, 0x0(r4)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r4, 0xc(r1)
    lwz r3, 0x0(r4)
    subi r0, r3, 0x4
    stw r0, 0x0(r4)
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x54(r30)
    b lbl_8013DED0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    mr r3, r28
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    lwz r4, 0xc(r1)
    stw r3, 0x0(r4)
    b lbl_8013DED0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    mr r3, r28
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEC4
    lwz r4, 0xc(r1)
    stw r3, 0x0(r4)
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    mr r3, r30
    lwz r4, 0xc(r1)
    bl fn_8013EE98
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    mr r3, r30
    bl fn_8013EE80
    lwz r4, 0xc(r1)
    stw r3, 0x0(r4)
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r3, r28
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r0, 0x54(r30)
    cmpwi r0, 0x0
    bne lbl_8013DED0
    mr r3, r28
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    lwz r0, 0x54(r30)
    cmpwi r0, 0x0
    beq lbl_8013DED0
    mr r3, r28
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013DED0
    addi r5, r1, 0xc
    mr r6, r29
    bl fn_80164EC8
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_8013EE98
    mr r3, r28
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    mr r29, r3
    b lbl_8013DED0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    lwz r3, 0xc(r1)
    lwz r30, 0x0(r3)
    mulli r31, r30, 0x60
    mr r3, r28
    lwz r4, 0x8(r1)
    lwz r4, 0x0(r4)
    bl fn_8013EEAC
    lwz r0, 0xc(r28)
    add r4, r0, r31
    stw r3, 0x58(r4)
    li r0, 0x0
    lwz r3, 0xc(r28)
    stwx r0, r3, r31
    lwz r5, 0xc(r28)
    lwz r3, 0x4(r5)
    srawi r4, r3, 16
    addi r0, r4, 0x4
    cmplwi r0, 0x3
    bgt lbl_8013DE34
    clrlwi r0, r3, 16
    cmpw r0, r30
    beq lbl_8013DED0
    lwz r4, 0x18(r28)
    lhz r3, 0xa(r28)
    lhz r0, 0x6(r28)
    subf r0, r30, r0
    mullw r0, r3, r0
    slwi r0, r0, 2
    add r0, r4, r0
    add r3, r5, r31
    stw r0, 0x5c(r3)
    b lbl_8013DED0
lbl_8013DE34:
    lwz r4, 0x18(r28)
    lhz r3, 0xa(r28)
    lhz r0, 0x6(r28)
    subf r0, r30, r0
    mullw r0, r3, r0
    slwi r0, r0, 2
    add r0, r4, r0
    add r3, r5, r31
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r28)
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 16
    cmpw r0, r30
    bne lbl_8013DED0
    add r3, r3, r31
    lwz r29, 0x58(r3)
    b lbl_8013DED0
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mr r7, r29
    bl fn_80165074
    mr r29, r3
    mr r3, r28
    lwz r4, 0x0(r29)
    bl fn_8013EEAC
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
    addi r29, r29, 0x4
    b lbl_8013DED0
lbl_8013DEB8:
    mr r3, r28
    mr r4, r30
    mr r5, r29
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013DED0:
    mr r3, r29
    addi r11, r1, 0x120
    bl _restgpr_28
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: fn_8013DEEC
asm int fn_8013DEEC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x13
    bgt lbl_8013E388
    lis r5, jumptable_8035AA24@ha
    addi r5, r5, jumptable_8035AA24@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    bl fn_80173F88
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    bl fn_80173F8C
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    bl fn_80019DAC
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    mr r4, r31
    bl fn_80019DAC
    addi r31, r31, 0xc
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    mr r6, r31
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lfs f1, 0x0(r4)
    lwz r4, 0x14(r1)
    lfs f2, 0x0(r4)
    lwz r4, 0x10(r1)
    lfs f3, 0x0(r4)
    bl fn_80018B0C
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r5, 0x14(r1)
    bl fn_80018B00
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r5, 0x14(r1)
    bl fn_8001B8B8
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r5, 0x14(r1)
    bl fn_8011F190
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    la r6, lbl_804A0B70
    lwz r5, 0xc(r1)
    lfs f1, 0x8(r6)
    lfs f0, 0x0(r5)
    fdivs f1, f1, f0
    bl fn_80018B08
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r5, 0x8(r1)
    lfs f1, 0x0(r5)
    bl fn_80018B08
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    la r5, lbl_804A0B70
    lfs f1, 0x4(r5)
    bl fn_80018B08
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    bl fn_8001B8B0
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x18(r1)
    bl fn_8001B8BC
    lwz r3, 0x1c(r1)
    stfs f1, 0x0(r3)
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r4, 0x14(r1)
    bl fn_8001D9AC
    lwz r3, 0x1c(r1)
    stfs f1, 0x0(r3)
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x10
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r5, 0x14(r1)
    lwz r6, 0x10(r1)
    lfs f1, 0x0(r6)
    bl fn_8001D9D0
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r5, 0x14(r1)
    bl fn_8001F9C8
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x18(r1)
    lwz r4, 0x14(r1)
    bl fn_8001B8B4
    lwz r3, 0x1c(r1)
    stfs f1, 0x0(r3)
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x14(r1)
    bl fn_80018AF8
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    addi r6, r1, 0x18
    mr r7, r31
    bl fn_80165074
    mr r6, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x14
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    lwz r4, 0x18(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x14(r1)
    bl fn_80018B04
    b lbl_8013E3A0
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x1c(r1)
    bl fn_80042FFC
    b lbl_8013E3A0
lbl_8013E388:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013E3A0:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8013E3BC
asm int fn_8013E3BC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xc
    bgt lbl_8013E6A8
    lis r5, jumptable_8035AA74@ha
    addi r5, r5, jumptable_8035AA74@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80173FAC
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_801734E4
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    bl fn_801735E8
    addi r31, r31, 0x4
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    addi r3, r1, 0x20
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80173580
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    addi r5, r1, 0x20
    bl fn_801735E8
    addi r31, r31, 0x4
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    addi r3, r1, 0x14
    lwz r4, 0x4(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80173580
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    addi r5, r1, 0x14
    bl fn_801735E8
    addi r31, r31, 0x8
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80173580
    addi r31, r31, 0x4
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lwz r5, 0x0(r5)
    bl fn_80173580
    lwz r3, 0x10(r1)
    mr r4, r3
    la r5, lbl_804A0B70
    lfs f1, 0x4(r5)
    bl fn_80018B08
    addi r31, r31, 0x4
    b lbl_8013E6C0
    addi r5, r1, 0x10
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    bl fn_80173750
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x8(r1)
    lwz r5, 0x0(r5)
    bl fn_8017375C
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80173754
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80173758
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    bl fn_80173B20
    addi r31, r31, 0x4
    b lbl_8013E6C0
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x10(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r31)
    lwz r5, 0xc(r1)
    lfs f1, 0x0(r5)
    bl fn_801739BC
    addi r31, r31, 0x4
    b lbl_8013E6C0
lbl_8013E6A8:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013E6C0:
    mr r3, r31
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8013E6DC
asm int fn_8013E6DC() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x190
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r0, 0x4330
    stw r0, 0x150(r1)
    lis r0, 0x4330
    stw r0, 0x158(r1)
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0x7
    bgt lbl_8013EC78
    lis r5, jumptable_8035AAA8@ha
    addi r5, r5, jumptable_8035AAA8@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r5, r1, 0x24
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    addi r3, r1, 0x50
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    addi r4, r4, 0x49
    lwz r5, 0x24(r1)
    lwz r0, 0x0(r5)
    srwi r5, r0, 24
    extrwi r6, r0, 8, 8
    extrwi r7, r0, 8, 16
    clrlwi r8, r0, 24
    opword 0x4CC63182
    bl sprintf
    mr r3, r29
    addi r4, r1, 0x50
    bl fn_80164DEC
    b lbl_8013EC90
    addi r5, r1, 0x14
    addi r6, r1, 0x20
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    srwi r0, r0, 24
    lfd f1, lbl_804A0B68
    stw r0, 0x154(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x0(r3)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 8, 8
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x4(r3)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 8, 16
    stw r0, 0x154(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0x8(r3)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 24
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f1
    lwz r3, 0x14(r1)
    stfs f0, 0xc(r3)
    b lbl_8013EC90
    addi r5, r1, 0x24
    addi r6, r1, 0x10
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r5, 0x10(r1)
    lfs f0, 0x0(r5)
    fctiwz f0, f0
    stfd f0, 0x160(r1)
    lwz r0, 0x164(r1)
    slwi r3, r0, 24
    lfs f0, 0x4(r5)
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r0, 0x16c(r1)
    slwi r0, r0, 16
    or r4, r3, r0
    lfs f0, 0xc(r5)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r3, 0x174(r1)
    lfs f0, 0x8(r5)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r0, 0x17c(r1)
    slwi r0, r0, 8
    or r0, r3, r0
    or r0, r4, r0
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    b lbl_8013EC90
    addi r5, r1, 0x24
    addi r6, r1, 0x20
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    b lbl_8013EC90
    addi r5, r1, 0x24
    addi r6, r1, 0x20
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    srwi r3, r0, 24
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    srwi r4, r0, 24
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x154(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f1
    stfs f0, 0x40(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    extrwi r3, r0, 8, 8
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    extrwi r4, r0, 8, 8
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f1
    stfs f0, 0x44(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    extrwi r3, r0, 8, 16
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    extrwi r4, r0, 8, 16
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x154(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f1
    stfs f0, 0x48(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    clrlwi r3, r0, 24
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    clrlwi r4, r0, 24
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f1
    stfs f1, 0x4c(r1)
    lfs f0, 0x40(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r0, 0x17c(r1)
    slwi r3, r0, 24
    lfs f0, 0x44(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    slwi r0, r0, 16
    or r4, r3, r0
    fctiwz f0, f1
    stfd f0, 0x168(r1)
    lwz r3, 0x16c(r1)
    lfs f0, 0x48(r1)
    fctiwz f0, f0
    stfd f0, 0x160(r1)
    lwz r0, 0x164(r1)
    slwi r0, r0, 8
    or r0, r3, r0
    or r0, r4, r0
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    b lbl_8013EC90
    addi r5, r1, 0x24
    addi r6, r1, 0x20
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    srwi r3, r0, 24
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    srwi r0, r0, 24
    neg r4, r0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x154(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f1
    stfs f0, 0x30(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    extrwi r3, r0, 8, 8
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    extrwi r0, r0, 8, 8
    neg r4, r0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    extrwi r3, r0, 8, 16
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    extrwi r0, r0, 8, 16
    neg r4, r0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x154(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f1
    stfs f0, 0x38(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x0(r3)
    clrlwi r3, r0, 24
    lwz r4, 0x1c(r1)
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 24
    neg r4, r0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    lfd f1, lbl_804A0B60
    xoris r0, r3, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f1, f0, f1
    stfs f1, 0x3c(r1)
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r0, 0x17c(r1)
    slwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    slwi r0, r0, 16
    or r4, r3, r0
    fctiwz f0, f1
    stfd f0, 0x168(r1)
    lwz r3, 0x16c(r1)
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x160(r1)
    lwz r0, 0x164(r1)
    slwi r0, r0, 8
    or r0, r3, r0
    or r0, r4, r0
    lwz r3, 0x24(r1)
    stw r0, 0x0(r3)
    b lbl_8013EC90
    addi r5, r1, 0x24
    addi r6, r1, 0x20
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x1c
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r1)
    lwz r4, 0x0(r4)
    lwz r5, 0x18(r1)
    lfs f1, 0x0(r5)
    bl fn_80172750
    lwz r4, 0x24(r1)
    stw r3, 0x0(r4)
    b lbl_8013EC90
    addi r5, r1, 0x24
    addi r6, r1, 0x20
    mr r7, r31
    bl fn_80165074
    mr r31, r3
    lwz r3, 0x20(r1)
    lwz r4, 0x0(r3)
    lwz r3, 0x24(r1)
    lwz r0, 0x0(r3)
    subf r0, r4, r0
    stw r0, 0x54(r30)
    b lbl_8013EC90
lbl_8013EC78:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013EC90:
    mr r3, r31
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_29
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8013ECB0
asm s32 * fn_8013ECB0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r6, 0x0(r5)
    srwi r0, r6, 16
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8013ECEC
    cmpwi r0, 0x1
    beq lbl_8013ED00
    cmpwi r0, 0x2
    beq lbl_8013ED14
    b lbl_8013EE5C
lbl_8013ECEC:
    li r0, 0x0
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    addi r31, r5, 0x4
    b lbl_8013EE68
lbl_8013ED00:
    lwz r3, 0x4(r5)
    lwz r4, 0x8(r5)
    bl fn_80165CC4
    addi r31, r31, 0xc
    b lbl_8013EE68
lbl_8013ED14:
    srwi r0, r6, 8
    clrlwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_8013ED48
    cmpwi r0, 0x1
    beq lbl_8013ED9C
    cmpwi r0, 0x2
    beq lbl_8013EDCC
    cmpwi r0, 0x3
    beq lbl_8013EDFC
    cmpwi r0, 0x4
    beq lbl_8013EE2C
    b lbl_8013EE68
lbl_8013ED48:
    addi r31, r5, 0x4
    mr r3, r31
    opword 0x4CC63182
    bl fn_80165C74
lbl_8013ED58:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013ED94
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013ED94
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013ED94
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013ED94
    addi r31, r31, 0x4
    b lbl_8013ED58
lbl_8013ED94:
    addi r31, r31, 0x4
    b lbl_8013EE68
lbl_8013ED9C:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_8035AAC8@ha
    addi r3, r3, lbl_8035AAC8@l
    addi r3, r3, 0x5c
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    opword 0x4CC63182
    bl fn_80165C74
    b lbl_8013EE68
lbl_8013EDCC:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_8035AAC8@ha
    addi r3, r3, lbl_8035AAC8@l
    addi r3, r3, 0x5f
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    opword 0x4CC63182
    bl fn_80165C74
    b lbl_8013EE68
lbl_8013EDFC:
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_8035AAC8@ha
    addi r3, r3, lbl_8035AAC8@l
    addi r3, r3, 0x62
    lwz r4, 0x8(r1)
    lfs f1, 0x0(r4)
    opword 0x4CC63242
    bl fn_80165C74
    b lbl_8013EE68
lbl_8013EE2C:
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    lis r3, lbl_8035AAC8@ha
    addi r3, r3, lbl_8035AAC8@l
    addi r3, r3, 0x65
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    opword 0x4CC63182
    bl fn_80165C74
    b lbl_8013EE68
lbl_8013EE5C:
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013EE68:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8013EE80
asm s32 fn_8013EE80(s8 *arg0) {
    nofralloc
    lwz r4, 0x5c(r3)
    lwz r5, 0x0(r4)
    addi r0, r4, 0x4
    stw r0, 0x5c(r3)
    mr r3, r5
    blr
}

// asm_to_cpp: fn_8013EEAC
asm s32 fn_8013EEAC(s8 *arg0, s32 arg1) {
    nofralloc
    addi r0, r4, 0x3
    clrrwi r4, r0, 2
    lwz r3, 0xc(r3)
    lwz r0, 0x5c(r3)
    add r3, r0, r4
    blr
}
