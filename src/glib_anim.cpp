#include "types.h"

// Translation unit: src/glib_anim.cpp
// Total functions: 172

// Small Data symbols (@sda21)
extern "C" float lbl_8049C1C8;
extern "C" float lbl_8049C1CC;
extern "C" float lbl_8049C1D0;
extern "C" float lbl_8049C1D4;
extern "C" float lbl_8049C1D8;
extern "C" float lbl_8049C1DC;
extern "C" float lbl_8049C1E0;
extern "C" float lbl_8049E7B8;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C4D0[];
extern "C" u8 lbl_8033C500[];
extern "C" u8 lbl_8033C530[];
extern "C" u8 lbl_8033C560[];
extern "C" u8 lbl_8033C5B0[];
extern "C" u8 lbl_8033C5D8[];
extern "C" u8 lbl_8033C600[];
extern "C" u8 lbl_8033C610[];
extern "C" u8 lbl_80346630[];
extern "C" u8 lbl_80346678[];
extern "C" u8 lbl_803466C0[];
extern "C" u8 lbl_803466EC[];
extern "C" u8 lbl_80346710[];
extern "C" u8 lbl_80346728[];
extern "C" u8 lbl_8034673C[];
extern "C" u8 lbl_80346788[];
extern "C" u8 lbl_8034679C[];
extern "C" u8 lbl_803467D8[];
extern "C" u8 lbl_803467EC[];
extern "C" u8 lbl_80346824[];
extern "C" u8 lbl_80346838[];
extern "C" u8 lbl_8034685C[];
extern "C" u8 lbl_80346868[];
extern "C" u8 lbl_8034688C[];
extern "C" u8 lbl_80346898[];
extern "C" u8 lbl_803468CC[];
extern "C" u8 lbl_803468E0[];
extern "C" u8 lbl_80346914[];
extern "C" u8 lbl_80346924[];
extern "C" u8 lbl_80346930[];
extern "C" u8 lbl_8034694C[];
extern "C" u8 lbl_80346960[];
extern "C" u8 lbl_8034696C[];
extern "C" u8 lbl_80346988[];
extern "C" u8 lbl_8034699C[];
extern "C" u8 lbl_803469AC[];
extern "C" u8 lbl_803469C8[];
extern "C" u8 lbl_803469E0[];
extern "C" u8 lbl_803469F0[];
extern "C" u8 lbl_80346A0C[];
extern "C" u8 lbl_80346A24[];
extern "C" u8 lbl_80346A30[];
extern "C" u8 lbl_80346A4C[];
extern "C" u8 lbl_80346A60[];
extern "C" u8 lbl_80346A6C[];
extern "C" u8 lbl_80346A88[];
extern "C" u8 lbl_80346A9C[];
extern "C" u8 lbl_80346AA8[];
extern "C" u8 lbl_80346AC4[];
extern "C" u8 lbl_80346AD8[];

// Forward declarations
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void dtor_80026A40();
extern "C" void dtor_80027B08();
extern "C" void dtor_80029584();
extern "C" void dtor_80136CFC();
extern "C" void fn_80024CF0();
extern "C" void fn_80025060();
extern "C" void fn_800253C8();
extern "C" void fn_80025738();
extern "C" void fn_80025AA8();
extern "C" void fn_80025E18();
extern "C" void fn_80026188();
extern "C" void fn_800264D0();
extern "C" void fn_800265E0();
extern "C" void fn_800266A4();
extern "C" void fn_80026A9C();
extern "C" void fn_80026B44();
extern "C" void fn_80026D3C();
extern "C" void fn_80026DC8();
extern "C" void fn_80026E54();
extern "C" void fn_8002701C();
extern "C" void fn_800271DC();
extern "C" void fn_800273A4();
extern "C" void fn_8002756C();
extern "C" void fn_80027734();
extern "C" void fn_800278FC();
extern "C" void fn_80027ABC();
extern "C" void fn_80027AF8();
extern "C" void fn_80027AFC();
extern "C" void fn_80027B04();
extern "C" void fn_80027B74();
extern "C" void fn_80027B78();
extern "C" void fn_80027B7C();
extern "C" void fn_80027B84();
extern "C" void fn_80027CAC();
extern "C" void fn_80027CCC();
extern "C" void fn_80027CD8();
extern "C" void fn_80027CE0();
extern "C" void fn_80027CE8();
extern "C" void fn_80027D18();
extern "C" void fn_80027E3C();
extern "C" void fn_80027E4C();
extern "C" void fn_80027E60();
extern "C" void fn_80027E70();
extern "C" void fn_80027E74();
extern "C" void fn_80027E7C();
extern "C" void fn_80027E90();
extern "C" void fn_80027EEC();
extern "C" void fn_80027F30();
extern "C" void fn_80027F34();
extern "C" void fn_80027F70();
extern "C" void fn_80027FD4();
extern "C" void fn_80027FE0();
extern "C" void fn_80028004();
extern "C" void fn_80028034();
extern "C" void fn_80028040();
extern "C" void fn_8002805C();
extern "C" void fn_80028064();
extern "C" void fn_80028074();
extern "C" void fn_80028090();
extern "C" void fn_80028098();
extern "C" void fn_800280A8();
extern "C" void fn_800280C4();
extern "C" void fn_800280CC();
extern "C" void fn_800280DC();
extern "C" void fn_800280F8();
extern "C" void fn_80028100();
extern "C" void fn_80028110();
extern "C" void fn_8002812C();
extern "C" void fn_80028134();
extern "C" void fn_80028144();
extern "C" void fn_80028160();
extern "C" void fn_80028168();
extern "C" void fn_80028178();
extern "C" void fn_80028194();
extern "C" void fn_8002819C();
extern "C" void fn_800281AC();
extern "C" void fn_80028228();
extern "C" void fn_80028264();
extern "C" void fn_800282B4();
extern "C" void fn_800282BC();
extern "C" void fn_800282EC();
extern "C" void fn_800282F4();
extern "C" void fn_800282FC();
extern "C" void fn_80028378();
extern "C" void fn_80028380();
extern "C" void fn_800283FC();
extern "C" void fn_80028404();
extern "C" void fn_80028480();
extern "C" void fn_800284FC();
extern "C" void fn_80028578();
extern "C" void fn_800285F4();
extern "C" void fn_80028630();
extern "C" void fn_80028694();
extern "C" void fn_800286A0();
extern "C" void fn_800286C4();
extern "C" void fn_800286F4();
extern "C" void fn_80028700();
extern "C" void fn_80028708();
extern "C" void fn_80028738();
extern "C" void fn_80028774();
extern "C" void fn_800287D8();
extern "C" void fn_800287E4();
extern "C" void fn_80028808();
extern "C" void fn_80028838();
extern "C" void fn_80028844();
extern "C" void fn_8002884C();
extern "C" void fn_8002887C();
extern "C" void fn_800288B8();
extern "C" void fn_8002891C();
extern "C" void fn_80028928();
extern "C" void fn_8002894C();
extern "C" void fn_8002897C();
extern "C" void fn_80028988();
extern "C" void fn_80028990();
extern "C" void fn_800289C0();
extern "C" void fn_800289FC();
extern "C" void fn_80028A60();
extern "C" void fn_80028A6C();
extern "C" void fn_80028A90();
extern "C" void fn_80028AC0();
extern "C" void fn_80028ACC();
extern "C" void fn_80028AD4();
extern "C" void fn_80028B04();
extern "C" void fn_80028B40();
extern "C" void fn_80028BA4();
extern "C" void fn_80028BB0();
extern "C" void fn_80028BD4();
extern "C" void fn_80028C04();
extern "C" void fn_80028C10();
extern "C" void fn_80028C18();
extern "C" void fn_80028C48();
extern "C" void fn_80028C84();
extern "C" void fn_80028CE8();
extern "C" void fn_80028CF4();
extern "C" void fn_80028D18();
extern "C" void fn_80028D48();
extern "C" void fn_80028D54();
extern "C" void fn_80028D5C();
extern "C" void fn_80028D8C();
extern "C" void fn_80028DC8();
extern "C" void fn_80028E08();
extern "C" void fn_80028E40();
extern "C" void fn_80028E58();
extern "C" void fn_80028E8C();
extern "C" void fn_80028EBC();
extern "C" void fn_80028EC8();
extern "C" void fn_80028EF8();
extern "C" void fn_80028F00();
extern "C" void fn_80028F40();
extern "C" void fn_80028F70();
extern "C" void fn_80028FA8();
extern "C" void fn_80028FB0();
extern "C" void fn_80028FD4();
extern "C" void fn_80029024();
extern "C" void fn_8002902C();
extern "C" void fn_8002905C();
extern "C" void fn_80029090();
extern "C" void fn_800290C4();
extern "C" void fn_80029110();
extern "C" void fn_8002916C();
extern "C" void fn_800291BC();
extern "C" void fn_800291EC();
extern "C" void fn_8002922C();
extern "C" void fn_80029244();
extern "C" void fn_80029294();
extern "C" void fn_8002929C();
extern "C" void fn_800292A4();
extern "C" void fn_80029404();
extern "C" void fn_8002940C();
extern "C" void fn_800294BC();
extern "C" void fn_800295E0();
extern "C" void fn_80029764();
extern "C" void fn_80029930();
extern "C" void fn_80029934();
extern "C" void fn_800299F4();
extern "C" void fn_80195934();
extern "C" void fn_8019EE08();
extern "C" void fn_801A9384();
extern "C" void fn_801D8B78();
extern "C" void fn_801D9268();
extern "C" void fn_801D9FEC();
extern "C" void fn_801DAA18();
extern "C" void fn_801DC5C4();
extern "C" void fn_801DD398();
extern "C" void fn_801DE2C8();
extern "C" void fn_801DF1B4();
extern "C" void fn_801DF268();
extern "C" void fn_801DF270();
extern "C" void fn_80222DFC();
extern "C" void fn_80222EC8();
extern "C" void fn_80222F0C();
extern "C" void fn_80222F38();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030CB00();

// ----------------------------------------------------------------------------
// fn_80024CF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80024CF0() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r30, 0x0
    lwz r0, 0x0(r6)
    stw r0, 0x14(r31)
    lwz r0, 0x0(r5)
    stw r0, 0x18(r31)
    li r3, 0x0
    addi r4, r31, 0x1c
    addi r5, r31, 0x18
    addi r6, r31, 0x14
    bl fn_801DC5C4
    li r3, 0x30
    bl fn_80027CCC
    mr r29, r3
    cmpwi r25, 0x0
    beq lbl_80024E4C
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r25, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80024D94
    clrrwi r3, r25, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80024D94
    li r9, 0x0
lbl_80024D94:
    cmpwi r9, 0x0
    bne lbl_80024DB0
    clrrwi r3, r25, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80024DB0
    li r8, 0x0
lbl_80024DB0:
    cmpwi r8, 0x0
    bne lbl_80024DC8
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80024DC8
    li r7, 0x0
lbl_80024DC8:
    cmpwi r7, 0x0
    bne lbl_80024DE4
    clrrwi r3, r25, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80024DE4
    li r6, 0x0
lbl_80024DE4:
    cmpwi r6, 0x0
    bne lbl_80024E00
    clrrwi r3, r25, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80024E00
    li r5, 0x0
lbl_80024E00:
    cmpwi r5, 0x0
    bne lbl_80024E1C
    clrrwi r3, r25, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80024E1C
    li r4, 0x0
lbl_80024E1C:
    cmpwi r4, 0x0
    bne lbl_80024E40
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x30
    addi r5, r3, 0xe
    mr r6, r25
    opword 0x4CC63182
    bl fn_801A9384
lbl_80024E40:
    lwz r0, 0x1c(r31)
    add r0, r29, r0
    stw r0, 0x0(r25)
lbl_80024E4C:
    cmpwi r24, 0x0
    beq lbl_8002503C
    mr r3, r24
    mr r4, r29
    bl fn_80027B04
    mr r29, r3
    clrlwi r0, r29, 30
    cmpwi r0, 0x0
    beq lbl_80024E88
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x3b
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_80024E88:
    cmpwi r29, 0x0
    bne lbl_80024E98
    li r3, 0x0
    b lbl_80025040
lbl_80024E98:
    lwz r0, 0x0(r27)
    stw r0, 0xc(r31)
    lwz r0, 0x0(r26)
    stw r0, 0x10(r31)
    mr r3, r24
    li r4, 0x0
    addi r5, r31, 0x10
    addi r6, r31, 0xc
    mr r7, r28
    bl fn_801DC5C4
    mr r28, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80024F00
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80024F00
    li r10, 0x0
lbl_80024F00:
    cmpwi r10, 0x0
    bne lbl_80024F1C
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80024F1C
    li r9, 0x0
lbl_80024F1C:
    cmpwi r9, 0x0
    bne lbl_80024F34
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80024F34
    li r8, 0x0
lbl_80024F34:
    cmpwi r8, 0x0
    bne lbl_80024F50
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80024F50
    li r7, 0x0
lbl_80024F50:
    cmpwi r7, 0x0
    bne lbl_80024F6C
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80024F6C
    li r6, 0x0
lbl_80024F6C:
    cmpwi r6, 0x0
    bne lbl_80024F88
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80024F88
    li r5, 0x0
lbl_80024F88:
    cmpwi r5, 0x0
    bne lbl_80024FAC
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x42
    addi r5, r3, 0x70
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_80024FAC:
    lwz r0, 0x0(r27)
    stw r0, 0x8(r31)
    mr r3, r28
    addi r4, r31, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80024FEC
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x45
    addi r5, r3, 0xa4
    opword 0x4CC63182
    bl fn_801A9384
lbl_80024FEC:
    li r3, 0x30
    mr r4, r29
    bl fn_80027AFC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8002503C
    stw r1, 0x34(r31)
    mr r4, r24
    mr r5, r28
    li r6, 0x0
    li r7, 0x1
    bl fn_800266A4
    b lbl_8002503C
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8002503C:
    mr r3, r30
lbl_80025040:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_24
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80025060
// ----------------------------------------------------------------------------
extern "C" asm void fn_80025060() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    mr r31, r1
    mr r25, r3
    mr r26, r4
    mr r28, r5
    mr r27, r6
    li r30, 0x0
    lwz r0, 0x0(r6)
    stw r0, 0x14(r31)
    lwz r0, 0x0(r5)
    stw r0, 0x18(r31)
    li r3, 0x0
    addi r4, r31, 0x1c
    addi r5, r31, 0x18
    addi r6, r31, 0x14
    bl fn_801D8B78
    li r3, 0x30
    bl fn_80027CCC
    mr r29, r3
    cmpwi r26, 0x0
    beq lbl_800251B8
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r26, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80025100
    clrrwi r3, r26, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80025100
    li r9, 0x0
lbl_80025100:
    cmpwi r9, 0x0
    bne lbl_8002511C
    clrrwi r3, r26, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8002511C
    li r8, 0x0
lbl_8002511C:
    cmpwi r8, 0x0
    bne lbl_80025134
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80025134
    li r7, 0x0
lbl_80025134:
    cmpwi r7, 0x0
    bne lbl_80025150
    clrrwi r3, r26, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80025150
    li r6, 0x0
lbl_80025150:
    cmpwi r6, 0x0
    bne lbl_8002516C
    clrrwi r3, r26, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8002516C
    li r5, 0x0
lbl_8002516C:
    cmpwi r5, 0x0
    bne lbl_80025188
    clrrwi r3, r26, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80025188
    li r4, 0x0
lbl_80025188:
    cmpwi r4, 0x0
    bne lbl_800251AC
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x66
    addi r5, r3, 0xe
    mr r6, r26
    opword 0x4CC63182
    bl fn_801A9384
lbl_800251AC:
    lwz r0, 0x1c(r31)
    add r0, r29, r0
    stw r0, 0x0(r26)
lbl_800251B8:
    cmpwi r25, 0x0
    beq lbl_800253A4
    mr r3, r25
    mr r4, r29
    bl fn_80027B04
    mr r29, r3
    clrlwi r0, r29, 30
    cmpwi r0, 0x0
    beq lbl_800251F4
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x71
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_800251F4:
    cmpwi r29, 0x0
    bne lbl_80025204
    li r3, 0x0
    b lbl_800253A8
lbl_80025204:
    lwz r0, 0x0(r27)
    stw r0, 0xc(r31)
    lwz r0, 0x0(r28)
    stw r0, 0x10(r31)
    mr r3, r25
    li r4, 0x0
    addi r5, r31, 0x10
    addi r6, r31, 0xc
    bl fn_801D8B78
    mr r28, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80025268
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80025268
    li r10, 0x0
lbl_80025268:
    cmpwi r10, 0x0
    bne lbl_80025284
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80025284
    li r9, 0x0
lbl_80025284:
    cmpwi r9, 0x0
    bne lbl_8002529C
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_8002529C
    li r8, 0x0
lbl_8002529C:
    cmpwi r8, 0x0
    bne lbl_800252B8
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800252B8
    li r7, 0x0
lbl_800252B8:
    cmpwi r7, 0x0
    bne lbl_800252D4
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_800252D4
    li r6, 0x0
lbl_800252D4:
    cmpwi r6, 0x0
    bne lbl_800252F0
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800252F0
    li r5, 0x0
lbl_800252F0:
    cmpwi r5, 0x0
    bne lbl_80025314
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x78
    addi r5, r3, 0x70
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025314:
    lwz r0, 0x0(r27)
    stw r0, 0x8(r31)
    mr r3, r28
    addi r4, r31, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80025354
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x7b
    addi r5, r3, 0xa4
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025354:
    li r3, 0x30
    mr r4, r29
    bl fn_80027AFC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_800253A4
    stw r1, 0x34(r31)
    mr r4, r25
    mr r5, r28
    li r6, 0x0
    li r7, 0x2
    bl fn_800266A4
    b lbl_800253A4
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_800253A4:
    mr r3, r30
lbl_800253A8:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_25
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_800253C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800253C8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r30, 0x0
    lwz r0, 0x0(r6)
    stw r0, 0x14(r31)
    lwz r0, 0x0(r5)
    stw r0, 0x18(r31)
    li r3, 0x0
    addi r4, r31, 0x1c
    addi r5, r31, 0x18
    addi r6, r31, 0x14
    bl fn_801D9FEC
    li r3, 0x30
    bl fn_80027CCC
    mr r29, r3
    cmpwi r25, 0x0
    beq lbl_80025524
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r25, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_8002546C
    clrrwi r3, r25, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8002546C
    li r9, 0x0
lbl_8002546C:
    cmpwi r9, 0x0
    bne lbl_80025488
    clrrwi r3, r25, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80025488
    li r8, 0x0
lbl_80025488:
    cmpwi r8, 0x0
    bne lbl_800254A0
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_800254A0
    li r7, 0x0
lbl_800254A0:
    cmpwi r7, 0x0
    bne lbl_800254BC
    clrrwi r3, r25, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800254BC
    li r6, 0x0
lbl_800254BC:
    cmpwi r6, 0x0
    bne lbl_800254D8
    clrrwi r3, r25, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800254D8
    li r5, 0x0
lbl_800254D8:
    cmpwi r5, 0x0
    bne lbl_800254F4
    clrrwi r3, r25, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800254F4
    li r4, 0x0
lbl_800254F4:
    cmpwi r4, 0x0
    bne lbl_80025518
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x9d
    addi r5, r3, 0xe
    mr r6, r25
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025518:
    lwz r0, 0x1c(r31)
    add r0, r29, r0
    stw r0, 0x0(r25)
lbl_80025524:
    cmpwi r24, 0x0
    beq lbl_80025714
    mr r3, r24
    mr r4, r29
    bl fn_80027B04
    mr r29, r3
    clrlwi r0, r29, 30
    cmpwi r0, 0x0
    beq lbl_80025560
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0xa8
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025560:
    cmpwi r29, 0x0
    bne lbl_80025570
    li r3, 0x0
    b lbl_80025718
lbl_80025570:
    lwz r0, 0x0(r27)
    stw r0, 0xc(r31)
    lwz r0, 0x0(r26)
    stw r0, 0x10(r31)
    mr r3, r24
    li r4, 0x0
    addi r5, r31, 0x10
    addi r6, r31, 0xc
    mr r7, r28
    bl fn_801D9FEC
    mr r28, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800255D8
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800255D8
    li r10, 0x0
lbl_800255D8:
    cmpwi r10, 0x0
    bne lbl_800255F4
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_800255F4
    li r9, 0x0
lbl_800255F4:
    cmpwi r9, 0x0
    bne lbl_8002560C
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_8002560C
    li r8, 0x0
lbl_8002560C:
    cmpwi r8, 0x0
    bne lbl_80025628
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80025628
    li r7, 0x0
lbl_80025628:
    cmpwi r7, 0x0
    bne lbl_80025644
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80025644
    li r6, 0x0
lbl_80025644:
    cmpwi r6, 0x0
    bne lbl_80025660
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80025660
    li r5, 0x0
lbl_80025660:
    cmpwi r5, 0x0
    bne lbl_80025684
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0xaf
    addi r5, r3, 0x70
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025684:
    lwz r0, 0x0(r27)
    stw r0, 0x8(r31)
    mr r3, r28
    addi r4, r31, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_800256C4
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0xb2
    addi r5, r3, 0xa4
    opword 0x4CC63182
    bl fn_801A9384
lbl_800256C4:
    li r3, 0x30
    mr r4, r29
    bl fn_80027AFC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80025714
    stw r1, 0x34(r31)
    mr r4, r24
    mr r5, r28
    li r6, 0x0
    li r7, 0x3
    bl fn_800266A4
    b lbl_80025714
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_80025714:
    mr r3, r30
lbl_80025718:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_24
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80025738
// ----------------------------------------------------------------------------
extern "C" asm void fn_80025738() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r30, 0x0
    lwz r0, 0x0(r6)
    stw r0, 0x14(r31)
    lwz r0, 0x0(r5)
    stw r0, 0x18(r31)
    li r3, 0x0
    addi r4, r31, 0x1c
    addi r5, r31, 0x18
    addi r6, r31, 0x14
    bl fn_801DAA18
    li r3, 0x30
    bl fn_80027CCC
    mr r29, r3
    cmpwi r25, 0x0
    beq lbl_80025894
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r25, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_800257DC
    clrrwi r3, r25, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800257DC
    li r9, 0x0
lbl_800257DC:
    cmpwi r9, 0x0
    bne lbl_800257F8
    clrrwi r3, r25, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800257F8
    li r8, 0x0
lbl_800257F8:
    cmpwi r8, 0x0
    bne lbl_80025810
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80025810
    li r7, 0x0
lbl_80025810:
    cmpwi r7, 0x0
    bne lbl_8002582C
    clrrwi r3, r25, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8002582C
    li r6, 0x0
lbl_8002582C:
    cmpwi r6, 0x0
    bne lbl_80025848
    clrrwi r3, r25, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80025848
    li r5, 0x0
lbl_80025848:
    cmpwi r5, 0x0
    bne lbl_80025864
    clrrwi r3, r25, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80025864
    li r4, 0x0
lbl_80025864:
    cmpwi r4, 0x0
    bne lbl_80025888
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0xd4
    addi r5, r3, 0xe
    mr r6, r25
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025888:
    lwz r0, 0x1c(r31)
    add r0, r29, r0
    stw r0, 0x0(r25)
lbl_80025894:
    cmpwi r24, 0x0
    beq lbl_80025A84
    mr r3, r24
    mr r4, r29
    bl fn_80027B04
    mr r29, r3
    clrlwi r0, r29, 30
    cmpwi r0, 0x0
    beq lbl_800258D0
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0xdf
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_800258D0:
    cmpwi r29, 0x0
    bne lbl_800258E0
    li r3, 0x0
    b lbl_80025A88
lbl_800258E0:
    lwz r0, 0x0(r27)
    stw r0, 0xc(r31)
    lwz r0, 0x0(r26)
    stw r0, 0x10(r31)
    mr r3, r24
    li r4, 0x0
    addi r5, r31, 0x10
    addi r6, r31, 0xc
    mr r7, r28
    bl fn_801DAA18
    mr r28, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80025948
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80025948
    li r10, 0x0
lbl_80025948:
    cmpwi r10, 0x0
    bne lbl_80025964
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80025964
    li r9, 0x0
lbl_80025964:
    cmpwi r9, 0x0
    bne lbl_8002597C
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_8002597C
    li r8, 0x0
lbl_8002597C:
    cmpwi r8, 0x0
    bne lbl_80025998
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80025998
    li r7, 0x0
lbl_80025998:
    cmpwi r7, 0x0
    bne lbl_800259B4
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_800259B4
    li r6, 0x0
lbl_800259B4:
    cmpwi r6, 0x0
    bne lbl_800259D0
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800259D0
    li r5, 0x0
lbl_800259D0:
    cmpwi r5, 0x0
    bne lbl_800259F4
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0xe6
    addi r5, r3, 0x70
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_800259F4:
    lwz r0, 0x0(r27)
    stw r0, 0x8(r31)
    mr r3, r28
    addi r4, r31, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80025A34
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0xe9
    addi r5, r3, 0xa4
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025A34:
    li r3, 0x30
    mr r4, r29
    bl fn_80027AFC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80025A84
    stw r1, 0x34(r31)
    mr r4, r24
    mr r5, r28
    li r6, 0x0
    li r7, 0x4
    bl fn_800266A4
    b lbl_80025A84
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_80025A84:
    mr r3, r30
lbl_80025A88:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_24
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80025AA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80025AA8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r30, 0x0
    lwz r0, 0x0(r6)
    stw r0, 0x14(r31)
    lwz r0, 0x0(r5)
    stw r0, 0x18(r31)
    li r3, 0x0
    addi r4, r31, 0x1c
    addi r5, r31, 0x18
    addi r6, r31, 0x14
    bl fn_801D9268
    li r3, 0x30
    bl fn_80027CCC
    mr r29, r3
    cmpwi r25, 0x0
    beq lbl_80025C04
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r25, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80025B4C
    clrrwi r3, r25, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80025B4C
    li r9, 0x0
lbl_80025B4C:
    cmpwi r9, 0x0
    bne lbl_80025B68
    clrrwi r3, r25, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80025B68
    li r8, 0x0
lbl_80025B68:
    cmpwi r8, 0x0
    bne lbl_80025B80
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80025B80
    li r7, 0x0
lbl_80025B80:
    cmpwi r7, 0x0
    bne lbl_80025B9C
    clrrwi r3, r25, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80025B9C
    li r6, 0x0
lbl_80025B9C:
    cmpwi r6, 0x0
    bne lbl_80025BB8
    clrrwi r3, r25, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80025BB8
    li r5, 0x0
lbl_80025BB8:
    cmpwi r5, 0x0
    bne lbl_80025BD4
    clrrwi r3, r25, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80025BD4
    li r4, 0x0
lbl_80025BD4:
    cmpwi r4, 0x0
    bne lbl_80025BF8
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x10b
    addi r5, r3, 0xe
    mr r6, r25
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025BF8:
    lwz r0, 0x1c(r31)
    add r0, r29, r0
    stw r0, 0x0(r25)
lbl_80025C04:
    cmpwi r24, 0x0
    beq lbl_80025DF4
    mr r3, r24
    mr r4, r29
    bl fn_80027B04
    mr r29, r3
    clrlwi r0, r29, 30
    cmpwi r0, 0x0
    beq lbl_80025C40
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x116
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025C40:
    cmpwi r29, 0x0
    bne lbl_80025C50
    li r3, 0x0
    b lbl_80025DF8
lbl_80025C50:
    lwz r0, 0x0(r27)
    stw r0, 0xc(r31)
    lwz r0, 0x0(r26)
    stw r0, 0x10(r31)
    mr r3, r24
    li r4, 0x0
    addi r5, r31, 0x10
    addi r6, r31, 0xc
    mr r7, r28
    bl fn_801D9268
    mr r28, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80025CB8
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80025CB8
    li r10, 0x0
lbl_80025CB8:
    cmpwi r10, 0x0
    bne lbl_80025CD4
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80025CD4
    li r9, 0x0
lbl_80025CD4:
    cmpwi r9, 0x0
    bne lbl_80025CEC
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80025CEC
    li r8, 0x0
lbl_80025CEC:
    cmpwi r8, 0x0
    bne lbl_80025D08
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80025D08
    li r7, 0x0
lbl_80025D08:
    cmpwi r7, 0x0
    bne lbl_80025D24
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80025D24
    li r6, 0x0
lbl_80025D24:
    cmpwi r6, 0x0
    bne lbl_80025D40
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80025D40
    li r5, 0x0
lbl_80025D40:
    cmpwi r5, 0x0
    bne lbl_80025D64
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x11d
    addi r5, r3, 0x70
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025D64:
    lwz r0, 0x0(r27)
    stw r0, 0x8(r31)
    mr r3, r28
    addi r4, r31, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80025DA4
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x120
    addi r5, r3, 0xa4
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025DA4:
    li r3, 0x30
    mr r4, r29
    bl fn_80027AFC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80025DF4
    stw r1, 0x34(r31)
    mr r4, r24
    mr r5, r28
    li r6, 0x0
    li r7, 0x5
    bl fn_800266A4
    b lbl_80025DF4
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_80025DF4:
    mr r3, r30
lbl_80025DF8:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_24
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80025E18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80025E18() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r30, 0x0
    lwz r0, 0x0(r6)
    stw r0, 0x14(r31)
    lwz r0, 0x0(r5)
    stw r0, 0x18(r31)
    li r3, 0x0
    addi r4, r31, 0x1c
    addi r5, r31, 0x18
    addi r6, r31, 0x14
    bl fn_801DD398
    li r3, 0x30
    bl fn_80027CCC
    mr r29, r3
    cmpwi r25, 0x0
    beq lbl_80025F74
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r25, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80025EBC
    clrrwi r3, r25, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80025EBC
    li r9, 0x0
lbl_80025EBC:
    cmpwi r9, 0x0
    bne lbl_80025ED8
    clrrwi r3, r25, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80025ED8
    li r8, 0x0
lbl_80025ED8:
    cmpwi r8, 0x0
    bne lbl_80025EF0
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80025EF0
    li r7, 0x0
lbl_80025EF0:
    cmpwi r7, 0x0
    bne lbl_80025F0C
    clrrwi r3, r25, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80025F0C
    li r6, 0x0
lbl_80025F0C:
    cmpwi r6, 0x0
    bne lbl_80025F28
    clrrwi r3, r25, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80025F28
    li r5, 0x0
lbl_80025F28:
    cmpwi r5, 0x0
    bne lbl_80025F44
    clrrwi r3, r25, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80025F44
    li r4, 0x0
lbl_80025F44:
    cmpwi r4, 0x0
    bne lbl_80025F68
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x142
    addi r5, r3, 0xe
    mr r6, r25
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025F68:
    lwz r0, 0x1c(r31)
    add r0, r29, r0
    stw r0, 0x0(r25)
lbl_80025F74:
    cmpwi r24, 0x0
    beq lbl_80026164
    mr r3, r24
    mr r4, r29
    bl fn_80027B04
    mr r29, r3
    clrlwi r0, r29, 30
    cmpwi r0, 0x0
    beq lbl_80025FB0
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x14d
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_80025FB0:
    cmpwi r29, 0x0
    bne lbl_80025FC0
    li r3, 0x0
    b lbl_80026168
lbl_80025FC0:
    lwz r0, 0x0(r27)
    stw r0, 0xc(r31)
    lwz r0, 0x0(r26)
    stw r0, 0x10(r31)
    mr r3, r24
    li r4, 0x0
    addi r5, r31, 0x10
    addi r6, r31, 0xc
    mr r7, r28
    bl fn_801DD398
    mr r28, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80026028
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80026028
    li r10, 0x0
lbl_80026028:
    cmpwi r10, 0x0
    bne lbl_80026044
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80026044
    li r9, 0x0
lbl_80026044:
    cmpwi r9, 0x0
    bne lbl_8002605C
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_8002605C
    li r8, 0x0
lbl_8002605C:
    cmpwi r8, 0x0
    bne lbl_80026078
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80026078
    li r7, 0x0
lbl_80026078:
    cmpwi r7, 0x0
    bne lbl_80026094
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80026094
    li r6, 0x0
lbl_80026094:
    cmpwi r6, 0x0
    bne lbl_800260B0
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800260B0
    li r5, 0x0
lbl_800260B0:
    cmpwi r5, 0x0
    bne lbl_800260D4
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x154
    addi r5, r3, 0x70
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_800260D4:
    lwz r0, 0x0(r27)
    stw r0, 0x8(r31)
    mr r3, r28
    addi r4, r31, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80026114
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x157
    addi r5, r3, 0xa4
    opword 0x4CC63182
    bl fn_801A9384
lbl_80026114:
    li r3, 0x30
    mr r4, r29
    bl fn_80027AFC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80026164
    stw r1, 0x34(r31)
    mr r4, r24
    mr r5, r28
    li r6, 0x0
    li r7, 0x6
    bl fn_800266A4
    b lbl_80026164
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_80026164:
    mr r3, r30
lbl_80026168:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_24
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80026188
// ----------------------------------------------------------------------------
extern "C" asm void fn_80026188() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r30, 0x0
    lwz r0, 0x0(r5)
    stw r0, 0xc(r31)
    li r3, 0x0
    addi r4, r31, 0x10
    addi r5, r31, 0xc
    mr r6, r28
    bl fn_801DE2C8
    li r3, 0x30
    bl fn_80027CCC
    mr r29, r3
    cmpwi r25, 0x0
    beq lbl_800262DC
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r25, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80026224
    clrrwi r3, r25, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80026224
    li r9, 0x0
lbl_80026224:
    cmpwi r9, 0x0
    bne lbl_80026240
    clrrwi r3, r25, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80026240
    li r8, 0x0
lbl_80026240:
    cmpwi r8, 0x0
    bne lbl_80026258
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80026258
    li r7, 0x0
lbl_80026258:
    cmpwi r7, 0x0
    bne lbl_80026274
    clrrwi r3, r25, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80026274
    li r6, 0x0
lbl_80026274:
    cmpwi r6, 0x0
    bne lbl_80026290
    clrrwi r3, r25, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80026290
    li r5, 0x0
lbl_80026290:
    cmpwi r5, 0x0
    bne lbl_800262AC
    clrrwi r3, r25, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800262AC
    li r4, 0x0
lbl_800262AC:
    cmpwi r4, 0x0
    bne lbl_800262D0
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x179
    addi r5, r3, 0xe
    mr r6, r25
    opword 0x4CC63182
    bl fn_801A9384
lbl_800262D0:
    lwz r0, 0x10(r31)
    add r0, r29, r0
    stw r0, 0x0(r25)
lbl_800262DC:
    cmpwi r24, 0x0
    beq lbl_800264AC
    mr r3, r24
    mr r4, r29
    bl fn_80027B04
    mr r29, r3
    clrlwi r0, r29, 30
    cmpwi r0, 0x0
    beq lbl_80026318
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x184
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_80026318:
    cmpwi r29, 0x0
    bne lbl_80026328
    li r3, 0x0
    b lbl_800264B0
lbl_80026328:
    lwz r0, 0x0(r26)
    stw r0, 0x8(r31)
    mr r3, r24
    li r4, 0x0
    addi r5, r31, 0x8
    mr r6, r28
    bl fn_801DE2C8
    mr r28, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80026384
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80026384
    li r10, 0x0
lbl_80026384:
    cmpwi r10, 0x0
    bne lbl_800263A0
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_800263A0
    li r9, 0x0
lbl_800263A0:
    cmpwi r9, 0x0
    bne lbl_800263B8
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800263B8
    li r8, 0x0
lbl_800263B8:
    cmpwi r8, 0x0
    bne lbl_800263D4
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800263D4
    li r7, 0x0
lbl_800263D4:
    cmpwi r7, 0x0
    bne lbl_800263F0
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_800263F0
    li r6, 0x0
lbl_800263F0:
    cmpwi r6, 0x0
    bne lbl_8002640C
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8002640C
    li r5, 0x0
lbl_8002640C:
    cmpwi r5, 0x0
    bne lbl_80026430
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x18b
    addi r5, r3, 0x70
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_80026430:
    cmpwi r27, 0x0
    beq lbl_8002644C
    mr r3, r28
    lis r4, fn_801DF270@ha
    addi r4, r4, fn_801DF270@l
    bl fn_80027CD8
    b lbl_8002645C
lbl_8002644C:
    mr r3, r28
    lis r4, fn_801DF268@ha
    addi r4, r4, fn_801DF268@l
    bl fn_80027CD8
lbl_8002645C:
    li r3, 0x30
    mr r4, r29
    bl fn_80027AFC
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_800264AC
    stw r1, 0x2c(r31)
    mr r4, r24
    li r5, 0x0
    mr r6, r28
    li r7, 0x7
    bl fn_800266A4
    b lbl_800264AC
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_800264AC:
    mr r3, r30
lbl_800264B0:
    mr r10, r31
    addi r11, r10, 0x50
    bl _restgpr_24
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_800264D0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800264D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, 0x14
    bl fn_80027E4C
    cmpwi r3, 0x0
    beq lbl_8002653C
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_80026518
    lfs f1, 0x18(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_80026530
lbl_80026518:
    lwz r3, 0xc(r31)
    lfs f1, 0x18(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_80026530:
    mr r3, r31
    li r4, 0x10
    bl fn_80027E3C
lbl_8002653C:
    mr r3, r31
    li r4, 0x1
    bl fn_80027E4C
    cmpwi r3, 0x0
    beq lbl_800265CC
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_80026594
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lfs f0, 0x20(r31)
    fcmpu cr0, f0, f1
    beq lbl_800265CC
    lwz r3, 0x8(r31)
    fmr f1, f0
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_800265CC
lbl_80026594:
    lwz r3, 0xc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lfs f0, 0x20(r31)
    fcmpu cr0, f0, f1
    beq lbl_800265CC
    lwz r3, 0xc(r31)
    fmr f1, f0
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_800265CC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800265E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800265E0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, 0x2
    bl fn_80027E4C
    cmplwi r3, 0x1
    beq lbl_80026654
    mr r3, r31
    li r4, 0x4
    bl fn_80027E4C
    cmplwi r3, 0x1
    beq lbl_80026654
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_8002663C
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    stfs f1, 0x18(r31)
    b lbl_80026654
lbl_8002663C:
    lwz r3, 0xc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    stfs f1, 0x18(r31)
lbl_80026654:
    mr r3, r31
    li r4, 0x2
    bl fn_80027E4C
    cmplwi r3, 0x1
    beq lbl_80026690
    lfs f1, 0x18(r31)
    lfs f0, 0x20(r31)
    fadds f1, f1, f0
    lfs f0, 0x1c(r31)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80026690
    mr r3, r31
    li r4, 0x2
    bl fn_80027E60
lbl_80026690:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800266A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800266A4() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lis r0, 0x4330
    stw r0, 0x40(r1)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    bl fn_80027B84
    lis r3, lbl_803466C0@ha
    addi r0, r3, lbl_803466C0@l
    stw r0, 0x4(r27)
    stw r28, 0x8(r27)
    stw r29, 0xc(r27)
    addi r3, r27, 0x28
    bl fn_80028D8C
    addi r31, r27, 0x10
    mr r3, r31
    bl fn_80027E70
    stw r30, 0x4(r31)
    cmpwi r28, 0x0
    beq lbl_8002674C
    mr r3, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    stfs f1, 0x10(r31)
    mr r3, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lfs f0, 0x10(r31)
    fsubs f0, f1, f0
    stfs f0, 0x8(r31)
    b lbl_80026784
lbl_8002674C:
    mr r3, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    stfs f1, 0x10(r31)
    mr r3, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lfs f0, 0x10(r31)
    fsubs f0, f1, f0
    stfs f0, 0x8(r31)
lbl_80026784:
    cmplwi r30, 0x1
    beq lbl_800267C0
    cmplwi r30, 0x2
    beq lbl_80026818
    cmplwi r30, 0x3
    beq lbl_80026870
    cmplwi r30, 0x4
    beq lbl_800268C8
    cmplwi r30, 0x5
    beq lbl_80026920
    cmplwi r30, 0x6
    beq lbl_80026978
    cmplwi r30, 0x7
    beq lbl_800269D0
    b lbl_80026A24
lbl_800267C0:
    mr r3, r28
    bl fn_80028578
    bl fn_80028D54
    stw r3, 0x20(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x20
    bl fn_80028D18
    addi r3, r1, 0x3c
    bl fn_80028CF4
    lfd f1, lbl_8049E7B8
    xoris r0, r3, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    addi r3, r1, 0x3c
    bl fn_80028C48
    cmpwi r3, 0x0
    beq lbl_80026A24
    bl fn_8019EE08
    stw r3, 0x14(r31)
    b lbl_80026A24
lbl_80026818:
    mr r3, r28
    bl fn_800284FC
    bl fn_80028C10
    stw r3, 0x1c(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x1c
    bl fn_80028BD4
    addi r3, r1, 0x38
    bl fn_80028BB0
    lfd f1, lbl_8049E7B8
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    addi r3, r1, 0x38
    bl fn_80028B04
    cmpwi r3, 0x0
    beq lbl_80026A24
    bl fn_8019EE08
    stw r3, 0x14(r31)
    b lbl_80026A24
lbl_80026870:
    mr r3, r28
    bl fn_80028480
    bl fn_80028ACC
    stw r3, 0x18(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x18
    bl fn_80028A90
    addi r3, r1, 0x34
    bl fn_80028A6C
    lfd f1, lbl_8049E7B8
    xoris r0, r3, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    addi r3, r1, 0x34
    bl fn_800289C0
    cmpwi r3, 0x0
    beq lbl_80026A24
    bl fn_8019EE08
    stw r3, 0x14(r31)
    b lbl_80026A24
lbl_800268C8:
    mr r3, r28
    bl fn_80028404
    bl fn_80028988
    stw r3, 0x14(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x14
    bl fn_8002894C
    addi r3, r1, 0x30
    bl fn_80028928
    lfd f1, lbl_8049E7B8
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    addi r3, r1, 0x30
    bl fn_8002887C
    cmpwi r3, 0x0
    beq lbl_80026A24
    bl fn_8019EE08
    stw r3, 0x14(r31)
    b lbl_80026A24
lbl_80026920:
    mr r3, r28
    bl fn_80028380
    bl fn_80028844
    stw r3, 0x10(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x10
    bl fn_80028808
    addi r3, r1, 0x2c
    bl fn_800287E4
    lfd f1, lbl_8049E7B8
    xoris r0, r3, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    addi r3, r1, 0x2c
    bl fn_80028738
    cmpwi r3, 0x0
    beq lbl_80026A24
    bl fn_8019EE08
    stw r3, 0x14(r31)
    b lbl_80026A24
lbl_80026978:
    mr r3, r28
    bl fn_800282FC
    bl fn_80028700
    stw r3, 0xc(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0xc
    bl fn_800286C4
    addi r3, r1, 0x28
    bl fn_800286A0
    lfd f1, lbl_8049E7B8
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    addi r3, r1, 0x28
    bl fn_800285F4
    cmpwi r3, 0x0
    beq lbl_80026A24
    bl fn_8019EE08
    stw r3, 0x14(r31)
    b lbl_80026A24
lbl_800269D0:
    mr r3, r29
    bl fn_800281AC
    bl fn_80027CE0
    stw r3, 0x8(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x8
    bl fn_80028004
    addi r3, r1, 0x24
    bl fn_80027FE0
    lfd f1, lbl_8049E7B8
    xoris r0, r3, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r31)
    addi r3, r1, 0x24
    bl fn_80027F34
    cmpwi r3, 0x0
    beq lbl_80026A24
    bl fn_8019EE08
    stw r3, 0x14(r31)
lbl_80026A24:
    mr r3, r27
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// dtor_80026A40
// ----------------------------------------------------------------------------
extern "C" asm void dtor_80026A40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80026A80
    li r4, 0x0
    bl fn_80027EEC
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80026A80
    mr r3, r30
    bl dtor_80136CFC
lbl_80026A80:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80026A9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80026A9C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80026B28
    lis r4, lbl_803466C0@ha
    addi r0, r4, lbl_803466C0@l
    stw r0, 0x4(r3)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_80026AE4
    bl fn_801DF1B4
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_80026AE4:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_80026AFC
    bl fn_801DF1B4
    li r0, 0x0
    stw r0, 0xc(r30)
lbl_80026AFC:
    addi r3, r30, 0x28
    li r4, -0x1
    bl dtor_80026A40
    mr r3, r30
    li r4, 0x0
    bl dtor_80027B08
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80026B28
    mr r3, r30
    bl fn_80027B74
lbl_80026B28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80026B44
// ----------------------------------------------------------------------------
extern "C" asm void fn_80026B44() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r31, r1
    mr r25, r3
    mr r26, r4
    mr r27, r5
    li r29, 0x0
    li r3, 0x20
    bl fn_80027CCC
    mr r30, r3
    slwi r0, r27, 2
    add r3, r3, r0
    bl fn_80027CCC
    mr r28, r3
    cmpwi r26, 0x0
    beq lbl_80026C7C
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r26, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80026BCC
    clrrwi r3, r26, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80026BCC
    li r9, 0x0
lbl_80026BCC:
    cmpwi r9, 0x0
    bne lbl_80026BE8
    clrrwi r3, r26, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80026BE8
    li r8, 0x0
lbl_80026BE8:
    cmpwi r8, 0x0
    bne lbl_80026C00
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80026C00
    li r7, 0x0
lbl_80026C00:
    cmpwi r7, 0x0
    bne lbl_80026C1C
    clrrwi r3, r26, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80026C1C
    li r6, 0x0
lbl_80026C1C:
    cmpwi r6, 0x0
    bne lbl_80026C38
    clrrwi r3, r26, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80026C38
    li r5, 0x0
lbl_80026C38:
    cmpwi r5, 0x0
    bne lbl_80026C54
    clrrwi r3, r26, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80026C54
    li r4, 0x0
lbl_80026C54:
    cmpwi r4, 0x0
    bne lbl_80026C78
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x281
    addi r5, r3, 0xe
    mr r6, r26
    opword 0x4CC63182
    bl fn_801A9384
lbl_80026C78:
    stw r28, 0x0(r26)
lbl_80026C7C:
    cmpwi r25, 0x0
    beq lbl_80026D18
    mr r3, r25
    mr r4, r28
    bl fn_80027B04
    mr r26, r3
    clrlwi r0, r26, 30
    cmpwi r0, 0x0
    beq lbl_80026CB8
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x28c
    addi r5, r3, 0x42
    opword 0x4CC63182
    bl fn_801A9384
lbl_80026CB8:
    cmpwi r26, 0x0
    bne lbl_80026CC8
    li r3, 0x0
    b lbl_80026D1C
lbl_80026CC8:
    add r28, r26, r30
    li r3, 0x20
    mr r4, r26
    bl fn_80027AFC
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_80026D18
    stw r1, 0x1c(r31)
    mr r4, r25
    mr r5, r28
    mr r6, r27
    bl fn_80027ABC
    b lbl_80026D18
    mr r3, r29
    mr r4, r26
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_80026D18:
    mr r3, r29
lbl_80026D1C:
    mr r10, r31
    addi r11, r10, 0x40
    bl _restgpr_25
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80026D3C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80026D3C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    ble lbl_80026DB4
    bl fn_8002929C
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_8002902C
    b lbl_80026D8C
lbl_80026D74:
    addi r3, r1, 0x14
    bl fn_80028FB0
    bl fn_800264D0
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_80028F00
lbl_80026D8C:
    mr r3, r31
    bl fn_80029294
    stw r3, 0x8(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80028DC8
    cmpwi r3, 0x0
    bne lbl_80026D74
lbl_80026DB4:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80026DC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80026DC8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    ble lbl_80026E40
    bl fn_8002929C
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_8002902C
    b lbl_80026E18
lbl_80026E00:
    addi r3, r1, 0x14
    bl fn_80028FB0
    bl fn_800265E0
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_80028F00
lbl_80026E18:
    mr r3, r31
    bl fn_80029294
    stw r3, 0x8(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80028DC8
    cmpwi r3, 0x0
    bne lbl_80026E00
lbl_80026E40:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80026E54
// ----------------------------------------------------------------------------
extern "C" asm void fn_80026E54() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    bl fn_8002940C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80026EA0
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x2ce
    addi r5, r3, 0xc2
    opword 0x4CC63182
    bl fn_801A9384
lbl_80026EA0:
    lwz r0, 0x0(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x10(r1)
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r30
    bl fn_80024CF0
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80026F0C
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80026F0C
    li r10, 0x0
lbl_80026F0C:
    cmpwi r10, 0x0
    bne lbl_80026F28
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80026F28
    li r9, 0x0
lbl_80026F28:
    cmpwi r9, 0x0
    bne lbl_80026F40
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80026F40
    li r8, 0x0
lbl_80026F40:
    cmpwi r8, 0x0
    bne lbl_80026F5C
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80026F5C
    li r7, 0x0
lbl_80026F5C:
    cmpwi r7, 0x0
    bne lbl_80026F78
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80026F78
    li r6, 0x0
lbl_80026F78:
    cmpwi r6, 0x0
    bne lbl_80026F94
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80026F94
    li r5, 0x0
lbl_80026F94:
    cmpwi r5, 0x0
    bne lbl_80026FB8
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x2d1
    addi r5, r3, 0xe7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80026FB8:
    mr r3, r29
    mr r4, r30
    bl fn_80029404
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800292A4
    cmpwi r3, 0x0
    beq lbl_80026FE8
    mr r3, r31
    b lbl_80027004
lbl_80026FE8:
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x2d7
    addi r5, r3, 0x120
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80027004:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8002701C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002701C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r29, r3
    mr r28, r4
    mr r30, r5
    bl fn_8002940C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80027064
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x2e8
    addi r5, r3, 0xc2
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027064:
    lwz r0, 0x0(r30)
    stw r0, 0xc(r1)
    lwz r0, 0x0(r28)
    stw r0, 0x10(r1)
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    bl fn_80025060
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800270CC
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800270CC
    li r10, 0x0
lbl_800270CC:
    cmpwi r10, 0x0
    bne lbl_800270E8
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_800270E8
    li r9, 0x0
lbl_800270E8:
    cmpwi r9, 0x0
    bne lbl_80027100
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80027100
    li r8, 0x0
lbl_80027100:
    cmpwi r8, 0x0
    bne lbl_8002711C
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8002711C
    li r7, 0x0
lbl_8002711C:
    cmpwi r7, 0x0
    bne lbl_80027138
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80027138
    li r6, 0x0
lbl_80027138:
    cmpwi r6, 0x0
    bne lbl_80027154
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80027154
    li r5, 0x0
lbl_80027154:
    cmpwi r5, 0x0
    bne lbl_80027178
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x2eb
    addi r5, r3, 0xe7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027178:
    mr r3, r29
    mr r4, r30
    bl fn_80029404
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800292A4
    cmpwi r3, 0x0
    beq lbl_800271A8
    mr r3, r31
    b lbl_800271C4
lbl_800271A8:
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x2f1
    addi r5, r3, 0x120
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_800271C4:
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800271DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800271DC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    bl fn_8002940C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80027228
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x302
    addi r5, r3, 0xc2
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027228:
    lwz r0, 0x0(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x10(r1)
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r30
    bl fn_800253C8
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80027294
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80027294
    li r10, 0x0
lbl_80027294:
    cmpwi r10, 0x0
    bne lbl_800272B0
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_800272B0
    li r9, 0x0
lbl_800272B0:
    cmpwi r9, 0x0
    bne lbl_800272C8
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800272C8
    li r8, 0x0
lbl_800272C8:
    cmpwi r8, 0x0
    bne lbl_800272E4
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800272E4
    li r7, 0x0
lbl_800272E4:
    cmpwi r7, 0x0
    bne lbl_80027300
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80027300
    li r6, 0x0
lbl_80027300:
    cmpwi r6, 0x0
    bne lbl_8002731C
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8002731C
    li r5, 0x0
lbl_8002731C:
    cmpwi r5, 0x0
    bne lbl_80027340
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x305
    addi r5, r3, 0xe7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027340:
    mr r3, r29
    mr r4, r30
    bl fn_80029404
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800292A4
    cmpwi r3, 0x0
    beq lbl_80027370
    mr r3, r31
    b lbl_8002738C
lbl_80027370:
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x30b
    addi r5, r3, 0x120
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8002738C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800273A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800273A4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    bl fn_8002940C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800273F0
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x31c
    addi r5, r3, 0xc2
    opword 0x4CC63182
    bl fn_801A9384
lbl_800273F0:
    lwz r0, 0x0(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x10(r1)
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r30
    bl fn_80025738
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_8002745C
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8002745C
    li r10, 0x0
lbl_8002745C:
    cmpwi r10, 0x0
    bne lbl_80027478
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80027478
    li r9, 0x0
lbl_80027478:
    cmpwi r9, 0x0
    bne lbl_80027490
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80027490
    li r8, 0x0
lbl_80027490:
    cmpwi r8, 0x0
    bne lbl_800274AC
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800274AC
    li r7, 0x0
lbl_800274AC:
    cmpwi r7, 0x0
    bne lbl_800274C8
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_800274C8
    li r6, 0x0
lbl_800274C8:
    cmpwi r6, 0x0
    bne lbl_800274E4
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800274E4
    li r5, 0x0
lbl_800274E4:
    cmpwi r5, 0x0
    bne lbl_80027508
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x31f
    addi r5, r3, 0xe7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027508:
    mr r3, r29
    mr r4, r30
    bl fn_80029404
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800292A4
    cmpwi r3, 0x0
    beq lbl_80027538
    mr r3, r31
    b lbl_80027554
lbl_80027538:
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x325
    addi r5, r3, 0x120
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80027554:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8002756C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002756C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    bl fn_8002940C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800275B8
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x336
    addi r5, r3, 0xc2
    opword 0x4CC63182
    bl fn_801A9384
lbl_800275B8:
    lwz r0, 0x0(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x10(r1)
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r30
    bl fn_80025AA8
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80027624
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80027624
    li r10, 0x0
lbl_80027624:
    cmpwi r10, 0x0
    bne lbl_80027640
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80027640
    li r9, 0x0
lbl_80027640:
    cmpwi r9, 0x0
    bne lbl_80027658
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80027658
    li r8, 0x0
lbl_80027658:
    cmpwi r8, 0x0
    bne lbl_80027674
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80027674
    li r7, 0x0
lbl_80027674:
    cmpwi r7, 0x0
    bne lbl_80027690
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80027690
    li r6, 0x0
lbl_80027690:
    cmpwi r6, 0x0
    bne lbl_800276AC
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800276AC
    li r5, 0x0
lbl_800276AC:
    cmpwi r5, 0x0
    bne lbl_800276D0
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x339
    addi r5, r3, 0xe7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_800276D0:
    mr r3, r29
    mr r4, r30
    bl fn_80029404
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800292A4
    cmpwi r3, 0x0
    beq lbl_80027700
    mr r3, r31
    b lbl_8002771C
lbl_80027700:
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x33f
    addi r5, r3, 0x120
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8002771C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80027734
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027734() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    bl fn_8002940C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80027780
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x350
    addi r5, r3, 0xc2
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027780:
    lwz r0, 0x0(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x10(r1)
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    mr r7, r30
    bl fn_80025E18
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800277EC
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800277EC
    li r10, 0x0
lbl_800277EC:
    cmpwi r10, 0x0
    bne lbl_80027808
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80027808
    li r9, 0x0
lbl_80027808:
    cmpwi r9, 0x0
    bne lbl_80027820
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80027820
    li r8, 0x0
lbl_80027820:
    cmpwi r8, 0x0
    bne lbl_8002783C
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8002783C
    li r7, 0x0
lbl_8002783C:
    cmpwi r7, 0x0
    bne lbl_80027858
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80027858
    li r6, 0x0
lbl_80027858:
    cmpwi r6, 0x0
    bne lbl_80027874
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80027874
    li r5, 0x0
lbl_80027874:
    cmpwi r5, 0x0
    bne lbl_80027898
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x353
    addi r5, r3, 0xe7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027898:
    mr r3, r29
    mr r4, r30
    bl fn_80029404
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800292A4
    cmpwi r3, 0x0
    beq lbl_800278C8
    mr r3, r31
    b lbl_800278E4
lbl_800278C8:
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x359
    addi r5, r3, 0x120
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_800278E4:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800278FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800278FC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    bl fn_8002940C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80027948
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x36a
    addi r5, r3, 0xc2
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027948:
    lwz r0, 0x0(r27)
    stw r0, 0xc(r1)
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    mr r6, r28
    mr r7, r30
    bl fn_80026188
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800279AC
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800279AC
    li r10, 0x0
lbl_800279AC:
    cmpwi r10, 0x0
    bne lbl_800279C8
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_800279C8
    li r9, 0x0
lbl_800279C8:
    cmpwi r9, 0x0
    bne lbl_800279E0
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800279E0
    li r8, 0x0
lbl_800279E0:
    cmpwi r8, 0x0
    bne lbl_800279FC
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800279FC
    li r7, 0x0
lbl_800279FC:
    cmpwi r7, 0x0
    bne lbl_80027A18
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80027A18
    li r6, 0x0
lbl_80027A18:
    cmpwi r6, 0x0
    bne lbl_80027A34
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80027A34
    li r5, 0x0
lbl_80027A34:
    cmpwi r5, 0x0
    bne lbl_80027A58
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x36d
    addi r5, r3, 0xe7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027A58:
    mr r3, r29
    mr r4, r30
    bl fn_80029404
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800292A4
    cmpwi r3, 0x0
    beq lbl_80027A88
    mr r3, r31
    b lbl_80027AA4
lbl_80027A88:
    lis r3, lbl_80346AD8@ha
    addi r3, r3, lbl_80346AD8@l
    li r4, 0x373
    addi r5, r3, 0x120
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80027AA4:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80027ABC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027ABC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800295E0
    lis r3, lbl_80346630@ha
    addi r0, r3, lbl_80346630@l
    stw r0, 0x4(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027AF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027AF8() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80027AFC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027AFC() {
    nofralloc
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_80027B04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027B04() {
    nofralloc
    b fn_8030CAF0
}

// ----------------------------------------------------------------------------
// dtor_80027B08
// ----------------------------------------------------------------------------
extern "C" asm void dtor_80027B08() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80027B58
    lis r4, lbl_803466EC@ha
    addi r0, r4, lbl_803466EC@l
    stw r0, 0x4(r3)
    bl fn_80027B7C
    mr r4, r30
    bl fn_80027B78
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80027B58
    mr r3, r30
    bl fn_80027B74
lbl_80027B58:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027B74
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027B74() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80027B78
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027B78() {
    nofralloc
    b fn_8030CB00
}

// ----------------------------------------------------------------------------
// fn_80027B7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027B7C() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80027B84
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027B84() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r6, r4
    lis r5, lbl_803466EC@ha
    addi r0, r5, lbl_803466EC@l
    stw r0, 0x4(r3)
    stw r4, 0x0(r3)
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    li r11, 0x1
    clrrwi r12, r4, 24
    addis r0, r12, 0x8000
    cmplwi r0, 0x0
    beq lbl_80027BE8
    clrrwi r3, r4, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80027BE8
    li r11, 0x0
lbl_80027BE8:
    cmpwi r11, 0x0
    bne lbl_80027C04
    clrrwi r3, r4, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80027C04
    li r10, 0x0
lbl_80027C04:
    cmpwi r10, 0x0
    bne lbl_80027C1C
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_80027C1C
    li r9, 0x0
lbl_80027C1C:
    cmpwi r9, 0x0
    bne lbl_80027C38
    clrrwi r3, r4, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80027C38
    li r8, 0x0
lbl_80027C38:
    cmpwi r8, 0x0
    bne lbl_80027C54
    clrrwi r3, r4, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80027C54
    li r7, 0x0
lbl_80027C54:
    cmpwi r7, 0x0
    bne lbl_80027C70
    clrrwi r3, r4, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80027C70
    li r5, 0x0
lbl_80027C70:
    cmpwi r5, 0x0
    bne lbl_80027C94
    lis r3, lbl_803468CC@ha
    addi r3, r3, lbl_803468CC@l
    li r4, 0x3d
    lis r5, lbl_80346898@ha
    addi r5, r5, lbl_80346898@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027C94:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027CAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027CAC() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    li r4, 0x1
    lwz r12, 0x4(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// fn_80027CCC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027CCC() {
    nofralloc
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    blr
}

// ----------------------------------------------------------------------------
// fn_80027CD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027CD8() {
    nofralloc
    addi r3, r3, 0xc
    b fn_80027D18
}

// ----------------------------------------------------------------------------
// fn_80027CE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027CE0() {
    nofralloc
    lwz r3, 0x20(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80027CE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027CE8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C600@ha
    addi r4, r4, lbl_8033C600@l
    bl fn_800282F4
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027D18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027D18() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r4, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80027D70
    clrrwi r3, r4, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80027D70
    li r10, 0x0
lbl_80027D70:
    cmpwi r10, 0x0
    bne lbl_80027D8C
    clrrwi r3, r4, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80027D8C
    li r9, 0x0
lbl_80027D8C:
    cmpwi r9, 0x0
    bne lbl_80027DA4
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80027DA4
    li r8, 0x0
lbl_80027DA4:
    cmpwi r8, 0x0
    bne lbl_80027DC0
    clrrwi r3, r4, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80027DC0
    li r7, 0x0
lbl_80027DC0:
    cmpwi r7, 0x0
    bne lbl_80027DDC
    clrrwi r3, r4, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80027DDC
    li r6, 0x0
lbl_80027DDC:
    cmpwi r6, 0x0
    bne lbl_80027DF8
    clrrwi r3, r4, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80027DF8
    li r5, 0x0
lbl_80027DF8:
    cmpwi r5, 0x0
    bne lbl_80027E20
    lis r3, lbl_80346914@ha
    addi r3, r3, lbl_80346914@l
    li r4, 0x5f
    lis r5, lbl_803468E0@ha
    addi r5, r5, lbl_803468E0@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027E20:
    stw r31, 0x10(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027E3C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027E3C() {
    nofralloc
    lwz r0, 0x10(r3)
    andc r0, r0, r4
    stw r0, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80027E4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027E4C() {
    nofralloc
    lwz r0, 0x10(r3)
    and r3, r0, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80027E60
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027E60() {
    nofralloc
    lwz r0, 0x10(r3)
    or r0, r0, r4
    stw r0, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80027E70
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027E70() {
    nofralloc
    b fn_800299F4
}

// ----------------------------------------------------------------------------
// fn_80027E74
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027E74() {
    nofralloc
    li r3, 0x5
    blr
}

// ----------------------------------------------------------------------------
// fn_80027E7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027E7C() {
    nofralloc
    clrlwi r3, r4, 16
    subi r0, r3, 0x5
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_80027E90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027E90() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80027ED0
    li r4, 0x0
    bl fn_800294BC
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80027ED0
    mr r3, r30
    bl fn_80027B74
lbl_80027ED0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027EEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027EEC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80027F18
    extsh r0, r4
    cmpwi r0, 0x0
    ble lbl_80027F18
    bl dtor_80136CFC
lbl_80027F18:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027F30
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027F30() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80027F34
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027F34() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80027F70
    mr r4, r3
    mr r3, r31
    lwz r4, 0x2c(r4)
    bl fn_80028040
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027F70
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027F70() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028064
    cmpwi r3, 0x0
    bne lbl_80027FB8
    bl fn_80027FD4
    mr r6, r3
    lis r3, lbl_80346988@ha
    addi r3, r3, lbl_80346988@l
    li r4, 0x28
    lis r5, lbl_8034696C@ha
    addi r5, r5, lbl_8034696C@l
    la r7, lbl_8049C1CC
    opword 0x4CC63182
    bl fn_801A9384
lbl_80027FB8:
    mr r3, r31
    bl fn_8002805C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80027FD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027FD4() {
    nofralloc
    lis r3, lbl_80346960@ha
    addi r3, r3, lbl_80346960@l
    blr
}

// ----------------------------------------------------------------------------
// fn_80027FE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80027FE0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80027F70
    lhz r3, 0x34(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028004
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028004() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028034
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028034
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028034() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028040
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028040() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_80028054
    add r3, r0, r4
    blr
lbl_80028054:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8002805C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002805C() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028064
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028064() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80028074
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028074() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_80028088
    add r3, r0, r4
    blr
lbl_80028088:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80028090
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028090() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028098
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028098() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_800280A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800280A8() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_800280BC
    add r3, r0, r4
    blr
lbl_800280BC:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_800280C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800280C4() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800280CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800280CC() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_800280DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800280DC() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_800280F0
    add r3, r0, r4
    blr
lbl_800280F0:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_800280F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800280F8() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028100
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028100() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80028110
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028110() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_80028124
    add r3, r0, r4
    blr
lbl_80028124:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8002812C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002812C() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028134
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028134() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80028144
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028144() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_80028158
    add r3, r0, r4
    blr
lbl_80028158:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80028160
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028160() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028168
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028168() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80028178
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028178() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8002818C
    add r3, r0, r4
    blr
lbl_8002818C:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80028194
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028194() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002819C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002819C() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_800281AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800281AC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_800281FC
    bl fn_80027CE8
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_800281FC
    li r31, 0x1
lbl_800281FC:
    cmpwi r31, 0x0
    beq lbl_8002820C
    mr r3, r30
    b lbl_80028210
lbl_8002820C:
    li r3, 0x0
lbl_80028210:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80028228
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028228() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    bl fn_800282BC
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80028264
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80028264
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028264() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800282B4
    mr r31, r3
    mr r3, r30
    bl fn_800282B4
    subf r0, r3, r31
    cntlzw r0, r0
    srwi r3, r0, 5
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800282B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800282B4() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800282BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800282BC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C610@ha
    addi r4, r4, lbl_8033C610@l
    bl fn_800282EC
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800282EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800282EC() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800282F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800282F4() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800282FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800282FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_8002834C
    bl fn_80028708
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8002834C
    li r31, 0x1
lbl_8002834C:
    cmpwi r31, 0x0
    beq lbl_8002835C
    mr r3, r30
    b lbl_80028360
lbl_8002835C:
    li r3, 0x0
lbl_80028360:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80028378
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028378() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028380
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028380() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_800283D0
    bl fn_8002884C
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_800283D0
    li r31, 0x1
lbl_800283D0:
    cmpwi r31, 0x0
    beq lbl_800283E0
    mr r3, r30
    b lbl_800283E4
lbl_800283E0:
    li r3, 0x0
lbl_800283E4:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800283FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800283FC() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028404
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028404() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_80028454
    bl fn_80028990
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80028454
    li r31, 0x1
lbl_80028454:
    cmpwi r31, 0x0
    beq lbl_80028464
    mr r3, r30
    b lbl_80028468
lbl_80028464:
    li r3, 0x0
lbl_80028468:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80028480
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028480() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_800284D0
    bl fn_80028AD4
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_800284D0
    li r31, 0x1
lbl_800284D0:
    cmpwi r31, 0x0
    beq lbl_800284E0
    mr r3, r30
    b lbl_800284E4
lbl_800284E0:
    li r3, 0x0
lbl_800284E4:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800284FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800284FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_8002854C
    bl fn_80028C18
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8002854C
    li r31, 0x1
lbl_8002854C:
    cmpwi r31, 0x0
    beq lbl_8002855C
    mr r3, r30
    b lbl_80028560
lbl_8002855C:
    li r3, 0x0
lbl_80028560:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80028578
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028578() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_800285C8
    bl fn_80028D5C
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_800285C8
    li r31, 0x1
lbl_800285C8:
    cmpwi r31, 0x0
    beq lbl_800285D8
    mr r3, r30
    b lbl_800285DC
lbl_800285D8:
    li r3, 0x0
lbl_800285DC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800285F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800285F4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028630
    mr r4, r3
    mr r3, r31
    lwz r4, 0x1c(r4)
    bl fn_80028074
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028630
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028630() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028098
    cmpwi r3, 0x0
    bne lbl_80028678
    bl fn_80028694
    mr r6, r3
    lis r3, lbl_8034694C@ha
    addi r3, r3, lbl_8034694C@l
    li r4, 0xa6
    lis r5, lbl_80346930@ha
    addi r5, r5, lbl_80346930@l
    la r7, lbl_8049C1C8
    opword 0x4CC63182
    bl fn_801A9384
lbl_80028678:
    mr r3, r31
    bl fn_80028090
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028694
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028694() {
    nofralloc
    lis r3, lbl_80346924@ha
    addi r3, r3, lbl_80346924@l
    blr
}

// ----------------------------------------------------------------------------
// fn_800286A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800286A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80028630
    lhz r3, 0x24(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800286C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800286C4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800286F4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800286F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800286F4() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028700
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028700() {
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028708
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028708() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C5D8@ha
    addi r4, r4, lbl_8033C5D8@l
    bl fn_80028378
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028738
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028738() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028774
    mr r4, r3
    mr r3, r31
    lwz r4, 0x18(r4)
    bl fn_800280A8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028774
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028774() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800280CC
    cmpwi r3, 0x0
    bne lbl_800287BC
    bl fn_800287D8
    mr r6, r3
    lis r3, lbl_80346A88@ha
    addi r3, r3, lbl_80346A88@l
    li r4, 0x27
    lis r5, lbl_80346A6C@ha
    addi r5, r5, lbl_80346A6C@l
    la r7, lbl_8049C1DC
    opword 0x4CC63182
    bl fn_801A9384
lbl_800287BC:
    mr r3, r31
    bl fn_800280C4
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800287D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800287D8() {
    nofralloc
    lis r3, lbl_80346A60@ha
    addi r3, r3, lbl_80346A60@l
    blr
}

// ----------------------------------------------------------------------------
// fn_800287E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800287E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80028774
    lhz r3, 0x20(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028808
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028808() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028838
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028838
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028838() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028844
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028844() {
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002884C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002884C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C500@ha
    addi r4, r4, lbl_8033C500@l
    bl fn_800283FC
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002887C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002887C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800288B8
    mr r4, r3
    mr r3, r31
    lwz r4, 0x18(r4)
    bl fn_800280DC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800288B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800288B8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028100
    cmpwi r3, 0x0
    bne lbl_80028900
    bl fn_8002891C
    mr r6, r3
    lis r3, lbl_803469C8@ha
    addi r3, r3, lbl_803469C8@l
    li r4, 0x26
    lis r5, lbl_803469AC@ha
    addi r5, r5, lbl_803469AC@l
    la r7, lbl_8049C1D0
    opword 0x4CC63182
    bl fn_801A9384
lbl_80028900:
    mr r3, r31
    bl fn_800280F8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002891C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002891C() {
    nofralloc
    lis r3, lbl_8034699C@ha
    addi r3, r3, lbl_8034699C@l
    blr
}

// ----------------------------------------------------------------------------
// fn_80028928
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028928() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800288B8
    lhz r3, 0x20(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002894C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002894C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002897C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002897C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002897C() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028988
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028988() {
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028990
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028990() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C560@ha
    addi r4, r4, lbl_8033C560@l
    bl fn_800283FC
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800289C0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800289C0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800289FC
    mr r4, r3
    mr r3, r31
    lwz r4, 0x28(r4)
    bl fn_80028110
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800289FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800289FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028134
    cmpwi r3, 0x0
    bne lbl_80028A44
    bl fn_80028A60
    mr r6, r3
    lis r3, lbl_80346A0C@ha
    addi r3, r3, lbl_80346A0C@l
    li r4, 0x5c
    lis r5, lbl_803469F0@ha
    addi r5, r5, lbl_803469F0@l
    la r7, lbl_8049C1D4
    opword 0x4CC63182
    bl fn_801A9384
lbl_80028A44:
    mr r3, r31
    bl fn_8002812C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028A60
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028A60() {
    nofralloc
    lis r3, lbl_803469E0@ha
    addi r3, r3, lbl_803469E0@l
    blr
}

// ----------------------------------------------------------------------------
// fn_80028A6C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028A6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800289FC
    lhz r3, 0x30(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028A90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028A90() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028AC0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028AC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028AC0() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028ACC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028ACC() {
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028AD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028AD4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C530@ha
    addi r4, r4, lbl_8033C530@l
    bl fn_800283FC
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028B04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028B04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028B40
    mr r4, r3
    mr r3, r31
    lwz r4, 0x18(r4)
    bl fn_80028144
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028B40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028B40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028168
    cmpwi r3, 0x0
    bne lbl_80028B88
    bl fn_80028BA4
    mr r6, r3
    lis r3, lbl_80346A4C@ha
    addi r3, r3, lbl_80346A4C@l
    li r4, 0x27
    lis r5, lbl_80346A30@ha
    addi r5, r5, lbl_80346A30@l
    la r7, lbl_8049C1D8
    opword 0x4CC63182
    bl fn_801A9384
lbl_80028B88:
    mr r3, r31
    bl fn_80028160
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028BA4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028BA4() {
    nofralloc
    lis r3, lbl_80346A24@ha
    addi r3, r3, lbl_80346A24@l
    blr
}

// ----------------------------------------------------------------------------
// fn_80028BB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028BB0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80028B40
    lhz r3, 0x20(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028BD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028BD4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028C04
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028C04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028C04() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028C10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028C10() {
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028C18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028C18() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C4D0@ha
    addi r4, r4, lbl_8033C4D0@l
    bl fn_80028378
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028C48
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028C48() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028C84
    mr r4, r3
    mr r3, r31
    lwz r4, 0x18(r4)
    bl fn_80028178
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028C84
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028C84() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002819C
    cmpwi r3, 0x0
    bne lbl_80028CCC
    bl fn_80028CE8
    mr r6, r3
    lis r3, lbl_80346AC4@ha
    addi r3, r3, lbl_80346AC4@l
    li r4, 0x27
    lis r5, lbl_80346AA8@ha
    addi r5, r5, lbl_80346AA8@l
    la r7, lbl_8049C1E0
    opword 0x4CC63182
    bl fn_801A9384
lbl_80028CCC:
    mr r3, r31
    bl fn_80028194
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028CE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028CE8() {
    nofralloc
    lis r3, lbl_80346A9C@ha
    addi r3, r3, lbl_80346A9C@l
    blr
}

// ----------------------------------------------------------------------------
// fn_80028CF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028CF4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80028C84
    lhz r3, 0x20(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028D18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028D18() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028D48
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028D48
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028D48() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028D54
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028D54() {
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028D5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028D5C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C5B0@ha
    addi r4, r4, lbl_8033C5B0@l
    bl fn_80028378
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028D8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028D8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80027F30
    li r0, 0x0
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028DC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028DC8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80028E08
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028E08
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028E08() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80028E40
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028E40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028E40() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_80028E58
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028E58() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80028EC8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80028E8C
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028E8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028E8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028EBC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028EBC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028EBC() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028EC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028EC8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    addi r4, r4, 0x4
    bl fn_80028EF8
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028EF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028EF8() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028F00
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028F00() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_8002902C
    mr r3, r31
    bl fn_80028F40
    lwz r3, 0x8(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80028F40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028F40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028F70
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028F70
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028F70() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x0(r3)
    bl fn_80028FA8
    stw r3, 0x0(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028FA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028FA8() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80028FB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028FB0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029024
    bl fn_80028FD4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80028FD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80028FD4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8002900C
    lis r3, lbl_8034688C@ha
    addi r3, r3, lbl_8034688C@l
    li r4, 0x23d
    lis r5, lbl_80346868@ha
    addi r5, r5, lbl_80346868@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8002900C:
    subi r3, r31, 0x28
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80029024
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029024() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002902C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002902C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028EBC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002905C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002905C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029090
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80028E8C
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80029090
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029090() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r3, 0x4
    bl fn_80028FA8
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80028EF8
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800290C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800290C4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80028E58
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_80029110
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80029110
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029110() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    mr r3, r5
    bl fn_8002916C
    mr r5, r3
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80222F0C
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_80028E8C
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002916C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002916C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800291A4
    lis r3, lbl_8034685C@ha
    addi r3, r3, lbl_8034685C@l
    li r4, 0x233
    lis r5, lbl_80346838@ha
    addi r5, r5, lbl_80346838@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_800291A4:
    addi r3, r31, 0x28
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800291BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800291BC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800291EC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800291EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800291EC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80027F30
    addi r3, r31, 0x4
    bl fn_80028D8C
    mr r3, r31
    bl fn_8002922C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002922C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002922C() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r0, r3, 0x4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80029244
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029244() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8002916C
    mr r4, r3
    mr r3, r31
    bl fn_80222F38
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80028E8C
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80029294
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029294() {
    nofralloc
    addi r3, r3, 0x14
    b fn_80028E58
}

// ----------------------------------------------------------------------------
// fn_8002929C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002929C() {
    nofralloc
    addi r3, r3, 0x14
    b fn_8002905C
}

// ----------------------------------------------------------------------------
// fn_800292A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800292A4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r5, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80029300
    clrrwi r3, r5, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80029300
    li r10, 0x0
lbl_80029300:
    cmpwi r10, 0x0
    bne lbl_8002931C
    clrrwi r3, r5, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8002931C
    li r9, 0x0
lbl_8002931C:
    cmpwi r9, 0x0
    bne lbl_80029334
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80029334
    li r8, 0x0
lbl_80029334:
    cmpwi r8, 0x0
    bne lbl_80029350
    clrrwi r3, r5, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80029350
    li r7, 0x0
lbl_80029350:
    cmpwi r7, 0x0
    bne lbl_8002936C
    clrrwi r3, r5, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8002936C
    li r6, 0x0
lbl_8002936C:
    cmpwi r6, 0x0
    bne lbl_80029388
    clrrwi r3, r5, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80029388
    li r4, 0x0
lbl_80029388:
    cmpwi r4, 0x0
    bne lbl_800293B0
    lis r3, lbl_80346824@ha
    addi r3, r3, lbl_80346824@l
    li r4, 0x105
    lis r5, lbl_803467EC@ha
    addi r5, r5, lbl_803467EC@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_800293B0:
    mr r3, r29
    lhz r4, 0x2(r30)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_800293E8
    lwz r3, 0xc(r29)
    lhz r0, 0x0(r30)
    slwi r0, r0, 2
    stwx r31, r3, r0
    li r3, 0x1
    b lbl_800293EC
lbl_800293E8:
    li r3, 0x0
lbl_800293EC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80029404
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029404() {
    nofralloc
    addi r3, r3, 0x14
    b fn_800290C4
}

// ----------------------------------------------------------------------------
// fn_8002940C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002940C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r5, 0x10(r3)
    lwz r0, 0x8(r3)
    cmplw r0, r5
    bge lbl_800294A0
    li r31, 0x0
    li r4, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_800294A0
lbl_80029450:
    lwz r5, 0xc(r3)
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    bne lbl_80029494
    mr r3, r30
    lwz r12, 0x4(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    sth r3, 0xa(r1)
    clrlwi r0, r31, 16
    sth r0, 0x8(r1)
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    lwz r3, 0x8(r1)
    b lbl_800294A4
lbl_80029494:
    addi r31, r31, 0x1
    addi r4, r4, 0x4
    bdnz lbl_80029450
lbl_800294A0:
    li r3, 0x0
lbl_800294A4:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800294BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800294BC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    cmpwi r3, 0x0
    beq lbl_80029568
    lis r4, lbl_80346678@ha
    addi r0, r4, lbl_80346678@l
    stw r0, 0x4(r3)
    addi r3, r3, 0x14
    bl fn_80222EC8
    li r29, 0x0
    li r31, 0x0
    mr r30, r31
    b lbl_80029528
lbl_80029504:
    lwz r3, 0xc(r27)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_80029520
    bl fn_80027CAC
    lwz r3, 0xc(r27)
    stwx r30, r3, r31
lbl_80029520:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_80029528:
    lwz r0, 0x10(r27)
    cmplw r29, r0
    blt lbl_80029504
    li r0, 0x0
    stw r0, 0x8(r27)
    addi r3, r27, 0x14
    li r4, -0x1
    bl dtor_80029584
    mr r3, r27
    li r4, 0x0
    bl dtor_80027B08
    extsh r0, r28
    cmpwi r0, 0x0
    ble lbl_80029568
    mr r3, r27
    bl fn_80027B74
lbl_80029568:
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// dtor_80029584
// ----------------------------------------------------------------------------
extern "C" asm void dtor_80029584() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_800295C4
    li r4, 0x0
    bl fn_80222DFC
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_800295C4
    mr r3, r30
    bl dtor_80136CFC
lbl_800295C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800295E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800295E0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r31, r3
    mr r29, r5
    mr r30, r6
    bl fn_80027B84
    lis r3, lbl_80346678@ha
    addi r0, r3, lbl_80346678@l
    stw r0, 0x4(r31)
    li r0, 0x0
    stw r0, 0x8(r31)
    stw r29, 0xc(r31)
    stw r30, 0x10(r31)
    addi r3, r31, 0x14
    bl fn_800291BC
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r6, 0xc(r31)
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80029668
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80029668
    li r10, 0x0
lbl_80029668:
    cmpwi r10, 0x0
    bne lbl_80029684
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80029684
    li r9, 0x0
lbl_80029684:
    cmpwi r9, 0x0
    bne lbl_8002969C
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_8002969C
    li r8, 0x0
lbl_8002969C:
    cmpwi r8, 0x0
    bne lbl_800296B8
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800296B8
    li r7, 0x0
lbl_800296B8:
    cmpwi r7, 0x0
    bne lbl_800296D4
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800296D4
    li r5, 0x0
lbl_800296D4:
    cmpwi r5, 0x0
    bne lbl_800296F0
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800296F0
    li r4, 0x0
lbl_800296F0:
    cmpwi r4, 0x0
    bne lbl_80029714
    lis r3, lbl_803467D8@ha
    addi r3, r3, lbl_803467D8@l
    li r4, 0x148
    lis r5, lbl_8034679C@ha
    addi r5, r5, lbl_8034679C@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029714:
    li r6, 0x0
    li r3, 0x0
    mr r5, r3
    b lbl_80029734
lbl_80029724:
    lwz r4, 0xc(r31)
    stwx r5, r4, r3
    addi r6, r6, 0x1
    addi r3, r3, 0x4
lbl_80029734:
    lwz r0, 0x10(r31)
    cmplw r6, r0
    blt lbl_80029724
    addi r3, r31, 0x14
    bl fn_80222EC8
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80029764
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029764() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_800298F8
    lhz r4, 0x2(r4)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_800298F8
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r6, r3, r0
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800297F4
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800297F4
    li r10, 0x0
lbl_800297F4:
    cmpwi r10, 0x0
    bne lbl_80029810
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80029810
    li r9, 0x0
lbl_80029810:
    cmpwi r9, 0x0
    bne lbl_80029828
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80029828
    li r8, 0x0
lbl_80029828:
    cmpwi r8, 0x0
    bne lbl_80029844
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80029844
    li r7, 0x0
lbl_80029844:
    cmpwi r7, 0x0
    bne lbl_80029860
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80029860
    li r5, 0x0
lbl_80029860:
    cmpwi r5, 0x0
    bne lbl_8002987C
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8002987C
    li r4, 0x0
lbl_8002987C:
    cmpwi r4, 0x0
    bne lbl_800298A0
    lis r3, lbl_80346788@ha
    addi r3, r3, lbl_80346788@l
    li r4, 0x114
    lis r5, lbl_8034673C@ha
    addi r5, r5, lbl_8034673C@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_800298A0:
    addi r3, r30, 0x14
    lwz r4, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_80029244
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_80027CAC
    li r4, 0x0
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    stwx r4, r3, r0
    stw r4, 0x0(r31)
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    stw r0, 0x8(r30)
    li r3, 0x1
    b lbl_80029918
lbl_800298F8:
    lis r3, lbl_80346728@ha
    addi r3, r3, lbl_80346728@l
    li r4, 0x11c
    lis r5, lbl_80346710@ha
    addi r5, r5, lbl_80346710@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80029918:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80029930
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029930() {
    nofralloc
    b fn_80029934
}

