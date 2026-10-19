// Generated from gl_model.s
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef float f32;
typedef double f64;

extern "C" void _restgpr_17();
extern "C" void _restgpr_18();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_17();
extern "C" void _savegpr_18();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018AD0();
extern "C" void fn_80019D5C();
extern "C" void fn_80019D70();
extern "C" void fn_80019D94();
extern "C" void fn_8001B8BC();
extern "C" void fn_8001B8C0();
extern "C" void fn_8001D9A4();
extern "C" void fn_8001D9D0();
extern "C" void fn_8001F9C8();
extern "C" void fn_80020D1C();
extern "C" void fn_8002211C();
extern "C" void fn_80035E80();
extern "C" void fn_80035EE0();
extern "C" void fn_80035F10();
extern "C" void fn_80035F40();
extern "C" void fn_80035F70();
extern "C" void fn_80035FA0();
extern "C" void fn_80048600();
extern "C" void fn_80048634();
extern "C" void fn_80048680();
extern "C" void fn_800486D4();
extern "C" void fn_80048720();
extern "C" void fn_80061FB8();
extern "C" void fn_80165C74();
extern "C" void fn_80170E2C();
extern "C" void fn_80170E84();
extern "C" void fn_80171130();
extern "C" void fn_801734E4();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80182FE0();
extern "C" void fn_80183158();
extern "C" void fn_80183170();
extern "C" void fn_801831EC();
extern "C" void fn_8018331C();
extern "C" void fn_80183348();
extern "C" void fn_801833C8();
extern "C" void fn_801834FC();
extern "C" void fn_801838E8();
extern "C" void fn_80183950();
extern "C" void fn_801839C8();
extern "C" void fn_80183C00();
extern "C" void fn_80183C48();
extern "C" void fn_80183CA0();
extern "C" void fn_80183D68();
extern "C" void fn_801844E4();
extern "C" void fn_8018454C();
extern "C" void fn_8018462C();
extern "C" void fn_8018495C();
extern "C" void fn_80184A58();
extern "C" void fn_80185138();
extern "C" void fn_80185194();
extern "C" void fn_801851D8();
extern "C" void fn_80185288();
extern "C" void fn_801852C4();
extern "C" void fn_801852C8();
extern "C" void fn_801852E4();
extern "C" void fn_801856BC();
extern "C" void fn_80185A94();
extern "C" void fn_80185B40();
extern "C" void fn_80185BA4();
extern "C" void fn_80185BDC();
extern "C" void fn_80185D30();
extern "C" void fn_80185DE4();
extern "C" void fn_80185FAC();
extern "C" void fn_80186078();
extern "C" void fn_8018622C();
extern "C" void fn_801862FC();
extern "C" void fn_80186374();
extern "C" void fn_801863E0();
extern "C" void fn_801864A4();
extern "C" void fn_801864DC();
extern "C" void fn_801865AC();
extern "C" void fn_80186638();
extern "C" void fn_801866D0();
extern "C" void fn_80186734();
extern "C" void fn_8018677C();
extern "C" void fn_80186808();
extern "C" void fn_80186A40();
extern "C" void fn_80186AAC();
extern "C" void fn_80186AEC();
extern "C" void fn_80186BA0();
extern "C" void fn_80186C44();
extern "C" void fn_80190804();
extern "C" void fn_801912E4();
extern "C" void strcat();
extern "C" void fn_801D3AA8();
extern "C" void fn_801D3AE0();
extern "C" void fn_8030CC40();
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void* memset(void*, int, unsigned int);
extern "C" int sprintf(char*, const char*, ...);
extern "C" char* strcpy(char*, const char*);
extern "C" unsigned int strlen(const char*);

extern "C" u8 lbl_8035E7B0[];
extern "C" u8 lbl_8035E7C0[];
extern "C" u8 lbl_8035E800[];
extern "C" u8 lbl_8035E840[];
extern "C" u8 lbl_8035E8F8[];
extern "C" u8 lbl_8035E9B0[];
extern "C" u8 lbl_8035EA30[];
extern "C" u8 lbl_803D1CB0[];

// SDA21 variables
extern "C" double lbl_804A0FD8;
extern "C" float lbl_804A0FE0;
extern "C" float lbl_804A1018;
extern "C" float lbl_804A1020;

extern "C" asm void fn_80182FE0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r6, 0x38(r3)
    lwz r29, 0x0(r6)
    mr r30, r7
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bgt lbl_80183020
    li r3, 0x0
    b lbl_80183140
lbl_80183020:
    cmpwi r7, 0x0
    bne lbl_80183060
    slwi r31, r4, 6
    slwi r0, r5, 2
    add r4, r31, r0
    addi r0, r4, 0xf
    clrrwi r25, r0, 4
    lwz r3, 0x110(r3)
    mulli r0, r29, 0xa0
    add r4, r0, r25
    li r5, 0x4
    bl fn_80170E2C
    mr r30, r3
    lwz r0, 0x110(r26)
    stw r0, 0x3c(r3)
    b lbl_80183088
lbl_80183060:
    slwi r31, r4, 6
    slwi r0, r5, 2
    add r3, r31, r0
    addi r0, r3, 0xf
    clrrwi r25, r0, 4
    mr r3, r30
    li r4, 0x0
    mulli r0, r29, 0xa0
    add r5, r0, r25
    bl memset
lbl_80183088:
    li r3, 0x0
    add r8, r30, r25
    add r9, r30, r31
    li r7, 0x2
    lfs f1, lbl_804A0FE0
    la r4, lbl_804A0FE0
    lfs f0, 0x4(r4)
    mr r6, r3
    mr r5, r3
    mr r4, r3
    mr r0, r3
    mtctr r27
    cmpwi r27, 0x0
    ble lbl_80183100
lbl_801830C0:
    add r10, r30, r3
    stw r7, 0x0(r10)
    stw r8, 0x4(r10)
    stfs f1, 0x8(r10)
    stfs f1, 0xc(r10)
    stfs f0, 0x10(r10)
    stw r6, 0x1c(r10)
    stw r5, 0x20(r10)
    stw r4, 0x24(r10)
    stw r0, 0x28(r10)
    stw r29, 0x2c(r10)
    stw r9, 0x30(r10)
    stw r28, 0x34(r10)
    stw r26, 0x38(r10)
    addi r3, r3, 0x40
    bdnz lbl_801830C0
lbl_80183100:
    li r3, 0x0
    li r0, 0x0
    mtctr r28
    cmpwi r28, 0x0
    ble lbl_80183124
lbl_80183114:
    lwz r4, 0x30(r30)
    stwx r0, r4, r3
    addi r3, r3, 0x4
    bdnz lbl_80183114
lbl_80183124:
    mr r3, r30
    li r4, 0x0
    bl fn_8018495C
    mr r3, r30
    li r4, 0x0
    bl fn_801839C8
    mr r3, r30
lbl_80183140:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

extern "C" asm void fn_80183158() {
    nofralloc
    mr r4, r3
    cmpwi r3, 0x0
    beqlr
    lwz r3, 0x3c(r3)
    b fn_80170E84
    blr
}

extern "C" asm void fn_80183170() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    li r30, 0x0
    li r31, 0x0
    b lbl_801831C4
lbl_80183198:
    mr r3, r28
    lwz r4, 0x30(r28)
    lwzx r4, r4, r31
    mr r5, r29
    bl fn_80183C48
    cmpwi r3, 0x0
    beq lbl_801831BC
    mr r3, r30
    b lbl_801831D4
lbl_801831BC:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_801831C4:
    lwz r0, 0x34(r28)
    cmpw r30, r0
    blt lbl_80183198
    li r3, -0x1
lbl_801831D4:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801831EC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    fmr f31, f1
    la r4, lbl_804A0FE0
    lfs f1, 0x4(r4)
    stfs f1, 0xc(r3)
    stfs f1, 0x18(r3)
    lfs f0, 0xc(r4)
    fmuls f1, f0, f1
    lfs f0, lbl_804A0FE0
    fcmpo cr0, f1, f0
    ble lbl_80183250
    lfs f0, 0x8(r4)
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    b lbl_80183264
lbl_80183250:
    lfs f0, 0x8(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
lbl_80183264:
    lfd f1, lbl_804A0FD8
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    la r4, lbl_804A0FE0
    lfs f0, 0x10(r4)
    fdivs f0, f1, f0
    stfs f0, 0x8(r3)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_801832AC
    rlwinm r0, r4, 0, 23, 21
    xori r0, r0, 0x4
    stw r0, 0x0(r3)
lbl_801832AC:
    li r30, 0x0
    li r31, 0x0
    b lbl_801832E8
lbl_801832B8:
    mr r3, r28
    lwz r4, 0x30(r28)
    lwzx r4, r4, r31
    mr r5, r29
    fmr f1, f31
    bl fn_80183CA0
    cmpwi r3, 0x0
    beq lbl_801832E0
    mr r3, r30
    b lbl_801832F8
lbl_801832E0:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_801832E8:
    lwz r0, 0x34(r28)
    cmpw r30, r0
    blt lbl_801832B8
    li r3, -0x1
lbl_801832F8:
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

extern "C" asm void fn_8018331C() {
    nofralloc
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80183340
    rlwinm r0, r4, 0, 23, 21
    xori r0, r0, 0x4
    stw r0, 0x0(r3)
    li r3, 0x1
    blr
lbl_80183340:
    li r3, 0x0
    blr
}

extern "C" asm void fn_80183348() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r30, 0x0
    li r31, 0x0
    b lbl_801833A0
lbl_80183374:
    mr r3, r27
    lwz r4, 0x30(r28)
    lwzx r4, r4, r31
    mr r5, r29
    bl fn_80183C48
    cmpwi r3, 0x0
    beq lbl_80183398
    mr r3, r30
    b lbl_801833B0
lbl_80183398:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_801833A0:
    lwz r0, 0x34(r28)
    cmpw r30, r0
    blt lbl_80183374
    li r3, -0x1
lbl_801833B0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801833C8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    fmr f31, f1
    la r4, lbl_804A0FE0
    lfs f1, 0x4(r4)
    stfs f1, 0xc(r3)
    stfs f1, 0x18(r3)
    lfs f0, 0xc(r4)
    fmuls f1, f0, f1
    lfs f0, lbl_804A0FE0
    fcmpo cr0, f1, f0
    ble lbl_80183430
    lfs f0, 0x8(r4)
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    b lbl_80183444
lbl_80183430:
    lfs f0, 0x8(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
lbl_80183444:
    lfd f1, lbl_804A0FD8
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    la r4, lbl_804A0FE0
    lfs f0, 0x10(r4)
    fdivs f0, f1, f0
    stfs f0, 0x8(r3)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8018348C
    rlwinm r0, r4, 0, 23, 21
    xori r0, r0, 0x4
    stw r0, 0x0(r3)
lbl_8018348C:
    li r30, 0x0
    li r31, 0x0
    b lbl_801834C8
lbl_80183498:
    mr r3, r27
    lwz r4, 0x30(r28)
    lwzx r4, r4, r31
    mr r5, r29
    fmr f1, f31
    bl fn_80183CA0
    cmpwi r3, 0x0
    beq lbl_801834C0
    mr r3, r30
    b lbl_801834D8
lbl_801834C0:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_801834C8:
    lwz r0, 0x34(r28)
    cmpw r30, r0
    blt lbl_80183498
    li r3, -0x1
lbl_801834D8:
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

extern "C" asm void fn_801834FC() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    addi r11, r1, 0x50
    bl _savegpr_17
    mr r28, r3
    mr r29, r4
    mr r17, r5
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r3)
    lwz r5, 0x1c(r4)
    stw r5, 0x1c(r3)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r3)
    cmpwi r5, 0x0
    bne lbl_80183574
    li r3, 0x0
    b lbl_801838C4
lbl_80183574:
    li r22, 0x0
    li r18, 0x0
    li r23, 0x0
    lfs f31, lbl_804A0FE0
    b lbl_8018363C
lbl_80183588:
    lwz r0, 0x4(r28)
    add r20, r0, r18
    lwz r0, 0x4(r29)
    add r21, r0, r18
    lwz r3, 0x0(r28)
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_801835BC
    lwz r0, 0x0(r20)
    and r0, r0, r3
    clrrwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_80183634
lbl_801835BC:
    lwz r0, 0xc(r20)
    cmpwi r0, 0x0
    beq lbl_80183634
    li r24, 0x0
    li r19, 0x0
lbl_801835D0:
    add r3, r20, r19
    addi r31, r3, 0x10
    add r3, r21, r19
    addi r30, r3, 0x10
    cmpw r22, r17
    bge lbl_80183600
    lwz r0, 0x0(r30)
    stw r0, 0x0(r31)
    addi r3, r31, 0x10
    addi r4, r30, 0x10
    bl fn_80018AD0
    b lbl_8018360C
lbl_80183600:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x2
    stw r0, 0x0(r31)
lbl_8018360C:
    stw r23, 0x0(r31)
    stw r23, 0x4(r31)
    stfs f31, 0x8(r31)
    stw r23, 0xc(r31)
    stw r23, 0x20(r31)
    stw r23, 0x24(r31)
    addi r24, r24, 0x1
    addi r19, r19, 0x30
    cmpwi r24, 0x3
    blt lbl_801835D0
lbl_80183634:
    addi r22, r22, 0x1
    addi r18, r18, 0xa0
lbl_8018363C:
    lwz r0, 0x2c(r28)
    cmpw r22, r0
    blt lbl_80183588
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80183660
    lwz r17, 0x28(r28)
    b lbl_80183664
lbl_80183660:
    lwz r17, 0x24(r28)
lbl_80183664:
    lwz r3, 0x1c(r28)
    lwz r19, 0x4(r3)
    li r18, 0x0
    lis r3, fn_801851D8@ha
    addi r22, r3, fn_801851D8@l
    li r23, 0x8
    lis r3, fn_801852C4@ha
    addi r24, r3, fn_801852C4@l
    li r25, 0x28
    lis r3, fn_80185288@ha
    addi r26, r3, fn_80185288@l
    li r27, 0x10
    b lbl_801838B0
lbl_80183698:
    lha r4, 0x4(r19)
    cmpwi r4, 0x0
    blt lbl_801838A8
    cmpwi r17, 0x0
    beq lbl_801836CC
    lha r0, 0x0(r17)
    cmpw r4, r0
    bge lbl_801836CC
    slwi r0, r4, 1
    add r3, r17, r0
    lha r4, 0x2(r3)
    cmpwi r4, 0x0
    blt lbl_801838A8
lbl_801836CC:
    lwz r0, 0x2c(r28)
    cmpw r4, r0
    bge lbl_801838A8
    mulli r3, r4, 0xa0
    lwz r0, 0x4(r28)
    add r21, r0, r3
    lwz r0, 0x4(r29)
    add r20, r0, r3
    lwz r3, 0x0(r28)
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80183710
    lwz r0, 0x0(r21)
    and r0, r0, r3
    clrrwi r0, r0, 24
    cmpwi r0, 0x0
    beq lbl_801838A8
lbl_80183710:
    lwz r3, 0x38(r28)
    bl fn_8018149C
    stw r3, 0xc(r21)
    lwz r0, 0x0(r19)
    rlwinm r4, r0, 0, 6, 6
    cmpwi r4, 0x0
    beq lbl_801837A4
    clrlwi r4, r0, 31
    cmpwi r4, 0x0
    beq lbl_80183748
    addi r31, r21, 0x10
    addi r30, r20, 0x10
    stw r22, 0x20(r31)
    stw r23, 0x24(r31)
lbl_80183748:
    rlwinm r4, r0, 0, 30, 30
    cmpwi r4, 0x0
    beq lbl_80183764
    addi r31, r21, 0x40
    addi r30, r20, 0x40
    stw r22, 0x20(r31)
    stw r23, 0x24(r31)
lbl_80183764:
    rlwinm r4, r0, 0, 27, 29
    cmpwi r4, 0x0
    beq lbl_80183780
    addi r31, r21, 0x70
    addi r30, r20, 0x70
    stw r22, 0x20(r31)
    stw r23, 0x24(r31)
lbl_80183780:
    rlwinm r4, r0, 0, 14, 14
    cmpwi r4, 0x0
    beq lbl_80183798
    stw r22, 0x20(r31)
    stw r23, 0x24(r31)
    b lbl_80183824
lbl_80183798:
    stw r26, 0x20(r31)
    stw r27, 0x24(r31)
    b lbl_80183824
lbl_801837A4:
    rlwinm r4, r0, 0, 5, 5
    cmpwi r4, 0x0
    beq lbl_80183824
    clrlwi r4, r0, 31
    cmpwi r4, 0x0
    beq lbl_801837CC
    addi r31, r21, 0x10
    addi r30, r20, 0x10
    stw r24, 0x20(r31)
    stw r25, 0x24(r31)
lbl_801837CC:
    rlwinm r4, r0, 0, 30, 30
    cmpwi r4, 0x0
    beq lbl_801837E8
    addi r31, r21, 0x40
    addi r30, r20, 0x40
    stw r24, 0x20(r31)
    stw r25, 0x24(r31)
lbl_801837E8:
    rlwinm r4, r0, 0, 27, 29
    cmpwi r4, 0x0
    beq lbl_80183804
    addi r31, r21, 0x70
    addi r30, r20, 0x70
    stw r24, 0x20(r31)
    stw r25, 0x24(r31)
lbl_80183804:
    rlwinm r4, r0, 0, 14, 14
    cmpwi r4, 0x0
    beq lbl_8018381C
    stw r22, 0x20(r31)
    stw r23, 0x24(r31)
    b lbl_80183824
lbl_8018381C:
    stw r26, 0x20(r31)
    stw r27, 0x24(r31)
lbl_80183824:
    stw r19, 0xc(r31)
    lwz r4, 0x0(r30)
    stw r4, 0x0(r31)
    lwz r4, 0x4(r30)
    stw r4, 0x4(r31)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r31)
    clrlwi r4, r0, 31
    cmpwi r4, 0x0
    beq lbl_80183854
    addi r4, r3, 0x10
    stw r4, 0x28(r31)
lbl_80183854:
    rlwinm r4, r0, 0, 30, 30
    cmpwi r4, 0x0
    beq lbl_80183868
    addi r4, r3, 0x20
    stw r4, 0x28(r31)
lbl_80183868:
    rlwinm r0, r0, 0, 27, 29
    cmpwi r0, 0x0
    beq lbl_8018387C
    addi r0, r3, 0x30
    stw r0, 0x28(r31)
lbl_8018387C:
    addi r3, r31, 0x10
    addi r4, r30, 0x10
    bl fn_80018AD0
    lwz r0, 0x0(r21)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x0(r21)
    lwz r3, 0x0(r21)
    lwz r0, 0x0(r20)
    rlwinm r0, r0, 0, 18, 18
    or r0, r3, r0
    stw r0, 0x0(r21)
lbl_801838A8:
    addi r18, r18, 0x1
    addi r19, r19, 0x20
lbl_801838B0:
    lwz r3, 0x1c(r28)
    lha r0, 0x2(r3)
    cmpw r18, r0
    blt lbl_80183698
    li r3, 0x1
lbl_801838C4:
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

extern "C" asm void fn_801838E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r7
    li r30, 0x0
    li r31, 0x0
    b lbl_80183930
lbl_80183918:
    add r3, r26, r31
    add r4, r27, r31
    mr r5, r29
    bl fn_801834FC
    addi r30, r30, 0x1
    addi r31, r31, 0x40
lbl_80183930:
    cmpw r30, r28
    blt lbl_80183918
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80183950() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    li r30, 0x0
    li r31, 0x0
    b lbl_801839A0
lbl_80183978:
    lwz r3, 0x30(r28)
    lwzx r3, r3, r31
    mr r4, r29
    bl fn_80183C00
    cmpwi r3, 0x0
    beq lbl_80183998
    li r3, 0x1
    b lbl_801839B0
lbl_80183998:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_801839A0:
    lwz r0, 0x34(r28)
    cmpw r30, r0
    blt lbl_80183978
    li r3, 0x0
lbl_801839B0:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801839C8() {
    nofralloc
    lis r4, lbl_8035E840@ha
    addi r0, r4, lbl_8035E840@l
    stw r0, 0x24(r3)
    lis r4, lbl_8035E8F8@ha
    addi r0, r4, lbl_8035E8F8@l
    stw r0, 0x28(r3)
    lis r7, 0x100
    addi r0, r7, 0x44c1
    lwz r4, 0x4(r3)
    stw r0, 0x0(r4)
    la r6, lbl_804A0FE0
    lfs f0, 0x14(r6)
    lwz r4, 0x4(r3)
    stfs f0, 0x8(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x0(r4)
    oris r0, r0, 0x40
    stw r0, 0x0(r4)
    addi r0, r7, 0x2140
    lwz r4, 0x4(r3)
    stw r0, 0xa0(r4)
    lfs f0, 0x18(r6)
    lwz r4, 0x4(r3)
    stfs f0, 0xa4(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0xa0(r4)
    oris r0, r0, 0x20
    stw r0, 0xa0(r4)
    addi r5, r7, 0x4c0
    lwz r4, 0x4(r3)
    stw r5, 0x140(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x140(r4)
    oris r0, r0, 0x80
    stw r0, 0x140(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x1e0(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x280(r4)
    addi r0, r7, 0x14c0
    lwz r4, 0x4(r3)
    stw r0, 0x320(r4)
    lfs f0, 0x8(r6)
    lwz r4, 0x4(r3)
    stfs f0, 0x324(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3c0(r4)
    lwz r4, 0x4(r3)
    stfs f0, 0x3c4(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x460(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x500(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x5a0(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x640(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x6e0(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x780(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x820(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x8c0(r4)
    lwz r4, 0x4(r3)
    stw r5, 0x960(r4)
    lwz r4, 0x4(r3)
    stw r5, 0xa00(r4)
    lwz r4, 0x4(r3)
    stw r5, 0xaa0(r4)
    lwz r4, 0x4(r3)
    stw r5, 0xb40(r4)
    lwz r4, 0x4(r3)
    stw r5, 0xbe0(r4)
    lwz r4, 0x4(r3)
    stw r5, 0xc80(r4)
    lis r4, 0x200
    addi r0, r4, 0x4c0
    lwz r4, 0x4(r3)
    stw r0, 0x2580(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2620(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x26c0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2760(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2800(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x28a0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2940(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x29e0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2a80(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2b20(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2bc0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2c60(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2d00(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2da0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2e40(r4)
    lis r4, 0x400
    addi r0, r4, 0x4c0
    lwz r4, 0x4(r3)
    stw r0, 0x2ee0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x2f80(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3020(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x30c0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3160(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3200(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x32a0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3340(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x33e0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3480(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3520(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x35c0(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3660(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3700(r4)
    lwz r3, 0x4(r3)
    stw r0, 0x37a0(r3)
    blr
}

extern "C" asm void fn_80183C00() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_80183C10
    li r3, 0x0
    blr
lbl_80183C10:
    lha r5, 0x4(r3)
    cmpw r4, r5
    blt lbl_80183C2C
    lha r0, 0x6(r3)
    add r0, r5, r0
    cmpw r4, r0
    blt lbl_80183C34
lbl_80183C2C:
    li r3, 0x0
    blr
lbl_80183C34:
    lwz r3, 0x8(r3)
    subf r0, r5, r4
    slwi r0, r0, 2
    lwzx r3, r3, r0
    blr
}

extern "C" asm void fn_80183C48() {
    nofralloc
    cmpwi r4, 0x0
    bne lbl_80183C58
    li r3, 0x0
    blr
lbl_80183C58:
    li r0, 0x0
    stw r0, 0x1c(r3)
    lha r6, 0x4(r4)
    cmpw r5, r6
    blt lbl_80183C7C
    lha r0, 0x6(r4)
    add r0, r6, r0
    cmpw r5, r0
    blt lbl_80183C84
lbl_80183C7C:
    li r3, 0x0
    blr
lbl_80183C84:
    lwz r3, 0x8(r4)
    subf r0, r6, r5
    slwi r0, r0, 2
    lwzx r3, r3, r0
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

extern "C" asm void fn_80183CA0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r4, 0x0
    bne lbl_80183CC4
    li r3, 0x0
    b lbl_80183D54
lbl_80183CC4:
    li r0, 0x0
    stw r0, 0x1c(r3)
    lha r6, 0x4(r4)
    cmpw r5, r6
    blt lbl_80183CE8
    lha r0, 0x6(r4)
    add r0, r6, r0
    cmpw r5, r0
    blt lbl_80183CF0
lbl_80183CE8:
    li r3, 0x0
    b lbl_80183D54
lbl_80183CF0:
    lwz r4, 0x8(r4)
    subf r0, r6, r5
    slwi r0, r0, 2
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    bne lbl_80183D10
    li r3, 0x0
    b lbl_80183D54
lbl_80183D10:
    stw r4, 0x1c(r3)
    stw r5, 0x20(r3)
    lfs f0, lbl_804A0FE0
    fcmpu cr0, f0, f1
    bne lbl_80183D30
    lfs f0, 0x8(r4)
    stfs f0, 0x14(r3)
    b lbl_80183D34
lbl_80183D30:
    stfs f1, 0x14(r3)
lbl_80183D34:
    mr r3, r31
    li r4, 0x0
    bl fn_8018462C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r31)
    mr r3, r31
    bl fn_80183D68
lbl_80183D54:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80183D68() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    stfd f30, 0xb0(r1)
    opword 0xF3C100B8
    stfd f29, 0xa0(r1)
    opword 0xF3A100A8
    stfd f28, 0x90(r1)
    opword 0xF3810098
    stfd f27, 0x80(r1)
    opword 0xF3610088
    stfd f26, 0x70(r1)
    opword 0xF3410078
    addi r11, r1, 0x70
    bl _savegpr_17
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_80183DD4
    li r3, 0x0
    b lbl_80184484
lbl_80183DD4:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80183DEC
    lwz r18, 0x28(r3)
    b lbl_80183DF0
lbl_80183DEC:
    lwz r18, 0x24(r3)
lbl_80183DF0:
    lwz r3, 0x1c(r3)
    lwz r21, 0x4(r3)
    li r20, 0x0
    lis r3, fn_801851D8@ha
    addi r24, r3, fn_801851D8@l
    li r25, 0x8
    lis r3, fn_801852C4@ha
    addi r26, r3, fn_801852C4@l
    li r27, 0x28
    lis r3, fn_80185288@ha
    addi r28, r3, fn_80185288@l
    li r30, 0x10
    lfs f29, lbl_804A0FE0
    lis r29, lbl_8035E7B0@ha
    la r3, lbl_804A0FE0
    lfs f30, 0x14(r3)
    lfs f27, 0x1c(r3)
    lfs f28, 0x20(r3)
    lfd f31, lbl_804A0FD8
    lfs f26, 0x24(r3)
    b lbl_801842C0
lbl_80183E44:
    lha r4, 0x4(r21)
    cmpwi r4, 0x0
    blt lbl_801842B8
    cmpwi r18, 0x0
    beq lbl_80183E78
    lha r0, 0x0(r18)
    cmpw r4, r0
    bge lbl_80183E78
    addi r0, r4, 0x1
    slwi r0, r0, 1
    lhax r4, r18, r0
    cmpwi r4, 0x0
    blt lbl_801842B8
lbl_80183E78:
    lwz r0, 0x2c(r31)
    cmpw r4, r0
    bge lbl_801842B8
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    lwz r3, 0x4(r31)
    mulli r0, r4, 0xa0
    add r22, r3, r0
    lwz r5, 0x0(r31)
    rlwinm r0, r5, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80183EC0
    lwz r3, 0x0(r22)
    clrrwi r0, r5, 24
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_801842B8
lbl_80183EC0:
    lwz r3, 0x38(r31)
    bl fn_8018149C
    mr r23, r3
    stw r3, 0xc(r22)
    lwz r19, 0x0(r21)
    rlwinm r0, r19, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80183F4C
    clrlwi r0, r19, 31
    cmpwi r0, 0x0
    beq lbl_80183EF8
    addi r17, r22, 0x10
    stw r24, 0x20(r17)
    stw r25, 0x24(r17)
lbl_80183EF8:
    rlwinm r0, r19, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80183F10
    addi r17, r22, 0x40
    stw r24, 0x20(r17)
    stw r25, 0x24(r17)
lbl_80183F10:
    rlwinm r0, r19, 0, 27, 29
    cmpwi r0, 0x0
    beq lbl_80183F28
    addi r17, r22, 0x70
    stw r24, 0x20(r17)
    stw r25, 0x24(r17)
lbl_80183F28:
    rlwinm r0, r19, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80183F40
    stw r24, 0x20(r17)
    stw r25, 0x24(r17)
    b lbl_80183FC0
lbl_80183F40:
    stw r28, 0x20(r17)
    stw r30, 0x24(r17)
    b lbl_80183FC0
lbl_80183F4C:
    rlwinm r0, r19, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80183FC0
    clrlwi r0, r19, 31
    cmpwi r0, 0x0
    beq lbl_80183F70
    addi r17, r22, 0x10
    stw r26, 0x20(r17)
    stw r27, 0x24(r17)
lbl_80183F70:
    rlwinm r0, r19, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80183F88
    addi r17, r22, 0x40
    stw r26, 0x20(r17)
    stw r27, 0x24(r17)
lbl_80183F88:
    rlwinm r0, r19, 0, 27, 29
    cmpwi r0, 0x0
    beq lbl_80183FA0
    addi r17, r22, 0x70
    stw r26, 0x20(r17)
    stw r27, 0x24(r17)
lbl_80183FA0:
    rlwinm r0, r19, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80183FB8
    stw r24, 0x20(r17)
    stw r25, 0x24(r17)
    b lbl_80183FC0
lbl_80183FB8:
    stw r28, 0x20(r17)
    stw r30, 0x24(r17)
lbl_80183FC0:
    stw r21, 0xc(r17)
    lwz r0, 0x0(r17)
    clrrwi r0, r0, 1
    stw r0, 0x0(r17)
    clrlwi r0, r19, 31
    cmpwi r0, 0x0
    beq lbl_801840F4
    addi r0, r3, 0x10
    stw r0, 0x28(r17)
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_801840F4
    addi r3, r17, 0x10
    lwz r4, 0x28(r17)
    bl fn_80018AD0
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80184064
    lwz r3, 0x0(r22)
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80184030
    lfs f0, 0x10(r17)
    fneg f0, f0
    stfs f0, 0x10(r17)
    b lbl_80184064
lbl_80184030:
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8018404C
    lfs f0, 0x14(r17)
    fneg f0, f0
    stfs f0, 0x14(r17)
    b lbl_80184064
lbl_8018404C:
    rlwinm r0, r3, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80184064
    lfs f0, 0x18(r17)
    fneg f0, f0
    stfs f0, 0x18(r17)
lbl_80184064:
    lwz r3, 0x0(r22)
    rlwinm r0, r3, 0, 18, 18
    rlwimi r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80184090
    lfs f1, 0x18(r17)
    fcmpo cr0, f1, f29
    ble lbl_80184090
    lfs f0, 0x4(r22)
    fdivs f0, f1, f0
    stfs f0, 0x18(r17)
lbl_80184090:
    lwz r0, 0x0(r22)
    rlwinm r0, r0, 0, 11, 12
    cmpwi r0, 0x0
    beq lbl_801840B0
    lfs f1, 0x18(r17)
    lfs f0, 0x8(r22)
    fadds f0, f1, f0
    stfs f0, 0x18(r17)
lbl_801840B0:
    lwz r3, 0x0(r22)
    rlwinm r0, r3, 0, 17, 17
    rlwimi r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_801840D4
    lfs f1, 0x14(r17)
    lfs f0, 0x8(r22)
    fdivs f0, f1, f0
    stfs f0, 0x14(r17)
lbl_801840D4:
    lwz r0, 0x0(r22)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_801840F4
    lfs f1, 0x10(r17)
    lfs f0, 0x8(r22)
    fdivs f0, f1, f0
    stfs f0, 0x10(r17)
lbl_801840F4:
    rlwinm r0, r19, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80184124
    addi r0, r23, 0x20
    stw r0, 0x28(r17)
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80184124
    addi r3, r17, 0x10
    lwz r4, 0x28(r17)
    bl fn_80018AD0
lbl_80184124:
    rlwinm r0, r19, 0, 27, 29
    cmpwi r0, 0x0
    beq lbl_801842B8
    addi r0, r23, 0x30
    stw r0, 0x28(r17)
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_801842B8
    addi r3, r17, 0x10
    lwz r4, 0x28(r17)
    bl fn_80018AD0
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_801841D4
    lwz r3, 0x0(r22)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80184184
    lfs f0, 0x10(r17)
    fneg f0, f0
    stfs f0, 0x10(r17)
    b lbl_801841B8
lbl_80184184:
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_801841A0
    lfs f0, 0x14(r17)
    fneg f0, f0
    stfs f0, 0x14(r17)
    b lbl_801841B8
lbl_801841A0:
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_801841B8
    lfs f0, 0x18(r17)
    fneg f0, f0
    stfs f0, 0x18(r17)
lbl_801841B8:
    lwz r0, 0x0(r22)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_801841D4
    lfs f0, 0x1c(r17)
    fneg f0, f0
    stfs f0, 0x1c(r17)
lbl_801841D4:
    lwz r0, 0x0(r22)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80184210
    addi r3, r17, 0x10
    addi r4, r29, lbl_8035E7B0@l
    mr r5, r3
    lfs f0, 0x4(r22)
    fdivs f1, f30, f0
    bl fn_8001D9D0
    lfs f0, 0x4(r22)
    fdivs f1, f30, f0
    lfs f0, 0x1c(r17)
    fmuls f0, f0, f1
    stfs f0, 0x1c(r17)
lbl_80184210:
    lfs f0, 0x1c(r17)
    fmuls f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    stfs f0, 0x1c(r17)
    lfs f0, 0x10(r17)
    fcmpo cr0, f0, f26
    ble lbl_801842B8
    lfs f0, 0x14(r17)
    fmuls f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    stfs f0, 0x14(r17)
    lfs f0, 0x18(r17)
    fmuls f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    stfs f0, 0x18(r17)
lbl_801842B8:
    addi r20, r20, 0x1
    addi r21, r21, 0x20
lbl_801842C0:
    lwz r3, 0x1c(r31)
    lha r0, 0x2(r3)
    cmpw r20, r0
    blt lbl_80183E44
    li r18, 0x0
    li r19, 0x0
    la r3, lbl_804A0FE0
    lfs f30, 0x1c(r3)
    lfs f29, 0x20(r3)
    lfd f31, lbl_804A0FD8
    lfs f28, 0x24(r3)
    b lbl_80184474
lbl_801842F0:
    lwz r0, 0x4(r31)
    add r22, r0, r19
    lwz r0, 0xc(r22)
    cmpwi r0, 0x0
    beq lbl_8018446C
    lwz r4, 0x0(r31)
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80184328
    lwz r3, 0x0(r22)
    clrrwi r0, r4, 24
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_8018446C
lbl_80184328:
    lwz r3, 0x38(r31)
    mr r4, r18
    bl fn_8018149C
    mr r29, r3
    li r17, 0x0
    li r20, 0x0
lbl_80184340:
    add r30, r22, r20
    lwz r3, 0x10(r30)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8018445C
    clrrwi r0, r3, 1
    stw r0, 0x10(r30)
    cmpwi r17, 0x1
    beq lbl_8018438C
    bge lbl_80184374
    cmpwi r17, 0x0
    bge lbl_80184380
    b lbl_801843A0
lbl_80184374:
    cmpwi r17, 0x3
    bge lbl_801843A0
    b lbl_80184398
lbl_80184380:
    addi r0, r29, 0x10
    stw r0, 0x38(r30)
    b lbl_801843A0
lbl_8018438C:
    addi r0, r29, 0x20
    stw r0, 0x38(r30)
    b lbl_801843A0
lbl_80184398:
    addi r0, r29, 0x30
    stw r0, 0x38(r30)
lbl_801843A0:
    addi r3, r30, 0x20
    lwz r4, 0x38(r30)
    bl fn_80018AD0
    cmpwi r17, 0x2
    bne lbl_8018445C
    lfs f0, 0x2c(r30)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fmuls f0, f29, f0
    stfs f0, 0x2c(r30)
    lfs f0, 0x20(r30)
    fcmpo cr0, f0, f28
    ble lbl_8018445C
    lfs f0, 0x24(r30)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fmuls f0, f29, f0
    stfs f0, 0x24(r30)
    lfs f0, 0x28(r30)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fmuls f0, f29, f0
    stfs f0, 0x28(r30)
lbl_8018445C:
    addi r17, r17, 0x1
    addi r20, r20, 0x30
    cmpwi r17, 0x3
    blt lbl_80184340
lbl_8018446C:
    addi r18, r18, 0x1
    addi r19, r19, 0xa0
lbl_80184474:
    lwz r0, 0x2c(r31)
    cmpw r18, r0
    blt lbl_801842F0
    li r3, 0x1
lbl_80184484:
    li r0, 0xc8
    opword 0x13E1000C
    lfd f31, 0xc0(r1)
    li r0, 0xb8
    opword 0x13C1000C
    lfd f30, 0xb0(r1)
    li r0, 0xa8
    opword 0x13A1000C
    lfd f29, 0xa0(r1)
    li r0, 0x98
    opword 0x1381000C
    lfd f28, 0x90(r1)
    li r0, 0x88
    opword 0x1361000C
    lfd f27, 0x80(r1)
    li r0, 0x78
    opword 0x1341000C
    lfd f26, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_17
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

extern "C" asm void fn_801844E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl fn_8001B8BC
    lfs f0, lbl_804A0FE0
    fcmpu cr0, f0, f1
    bne lbl_80184528
    la r3, lbl_804A0FE0
    lfs f1, 0x0(r31)
    lfs f0, 0x28(r3)
    fadds f0, f1, f0
    stfs f0, 0x0(r31)
lbl_80184528:
    mr r3, r30
    mr r4, r31
    bl fn_8001B8C0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018454C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f0, 0x0(r3)
    stfs f0, 0x20(r1)
    lfs f0, 0x10(r3)
    stfs f0, 0x24(r1)
    lfs f0, 0x20(r3)
    stfs f0, 0x28(r1)
    lfs f1, lbl_804A0FE0
    stfs f1, 0x14(r1)
    la r4, lbl_804A0FE0
    lfs f0, 0x14(r4)
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r1)
    lfs f0, 0x18(r3)
    stfs f0, 0xc(r1)
    lfs f0, 0x28(r3)
    stfs f0, 0x10(r1)
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_801844E4
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_801844E4
    lfs f0, 0x20(r1)
    stfs f0, 0x0(r31)
    lfs f0, 0x24(r1)
    stfs f0, 0x10(r31)
    lfs f0, 0x28(r1)
    stfs f0, 0x20(r31)
    lfs f0, 0x14(r1)
    stfs f0, 0x4(r31)
    lfs f0, 0x18(r1)
    stfs f0, 0x14(r31)
    lfs f0, 0x1c(r1)
    stfs f0, 0x24(r31)
    lfs f0, 0x8(r1)
    stfs f0, 0x8(r31)
    lfs f0, 0xc(r1)
    stfs f0, 0x18(r31)
    lfs f0, 0x10(r1)
    stfs f0, 0x28(r31)
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

extern "C" asm void fn_8018462C() {
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
    stfd f27, 0x50(r1)
    opword 0xF3610058
    addi r11, r1, 0x50
    bl _savegpr_22
    mr r26, r3
    lwz r0, 0x0(r3)
    ori r0, r0, 0x80
    stw r0, 0x0(r3)
    li r27, 0x0
    li r24, 0x0
    la r3, lbl_804A0FE0
    lfs f30, 0x1c(r3)
    lis r30, 0x4330
    lfs f28, 0x20(r3)
    lfd f31, lbl_804A0FD8
    lfs f27, 0x24(r3)
    li r31, 0x0
    lfs f29, lbl_804A0FE0
    lis r22, lbl_8035E7C0@ha
    addi r23, r22, lbl_8035E7C0@l
    li r25, 0x3
    b lbl_801848FC
lbl_801846B0:
    lwz r0, 0x4(r26)
    add r29, r0, r24
    lwz r28, 0xc(r29)
    cmpwi r28, 0x0
    beq lbl_801848F4
    lwz r4, 0x0(r26)
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_801846E8
    lwz r3, 0x0(r29)
    clrrwi r0, r4, 24
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_801848F4
lbl_801846E8:
    li r6, 0x0
    li r3, 0x0
    mtctr r25
lbl_801846F4:
    add r5, r29, r3
    cmpwi r6, 0x2
    beq lbl_80184708
    bge lbl_801847E4
    b lbl_801847E4
lbl_80184708:
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x0
    beq lbl_8018472C
    lfs f0, 0x2c(r5)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    b lbl_80184744
lbl_8018472C:
    lwz r4, 0x38(r5)
    lfs f0, 0xc(r4)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
lbl_80184744:
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r30, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    stfs f0, 0x2c(r5)
    lfs f0, 0x20(r5)
    fcmpo cr0, f0, f27
    ble lbl_801847E4
    lfs f0, 0x24(r5)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r30, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    stfs f0, 0x24(r5)
    lfs f0, 0x28(r5)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    stw r30, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    stfs f0, 0x28(r5)
lbl_801847E4:
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x0
    beq lbl_80184800
    lwz r0, 0x10(r5)
    ori r0, r0, 0x3
    stw r0, 0x10(r5)
    b lbl_8018480C
lbl_80184800:
    lwz r0, 0x10(r5)
    ori r0, r0, 0x2
    stw r0, 0x10(r5)
lbl_8018480C:
    stw r31, 0x14(r5)
    stfs f29, 0x18(r5)
    stw r31, 0x1c(r5)
    stw r31, 0x30(r5)
    stw r31, 0x34(r5)
    addi r6, r6, 0x1
    addi r3, r3, 0x30
    bdnz lbl_801846F4
    lwz r0, 0x0(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_801848F4
    lwz r0, 0x0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_801848F4
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801848F4
    lwz r0, 0x10(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x10(r29)
    lwz r0, 0x40(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x40(r29)
    lwz r0, 0x70(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x70(r29)
    addi r3, r29, 0x20
    addi r4, r22, lbl_8035E7C0@l
    bl fn_80018AD0
    addi r3, r29, 0x50
    addi r4, r23, 0x10
    bl fn_80018AD0
    addi r3, r29, 0x80
    addi r4, r23, 0x20
    bl fn_80018AD0
    addi r3, r28, 0x10
    mr r4, r23
    bl fn_80018AD0
    addi r3, r28, 0x20
    addi r4, r23, 0x10
    bl fn_80018AD0
    addi r3, r28, 0x30
    addi r4, r23, 0x20
    bl fn_80018AD0
    lwz r5, 0x38(r26)
    addi r3, r5, 0xa0
    mr r4, r3
    addi r5, r5, 0xd0
    bl fn_8017375C
    lwz r3, 0x38(r26)
    addi r3, r3, 0xa0
    bl fn_8018454C
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x0(r28)
lbl_801848F4:
    addi r27, r27, 0x1
    addi r24, r24, 0xa0
lbl_801848FC:
    lwz r0, 0x2c(r26)
    cmpw r27, r0
    blt lbl_801846B0
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
    li r0, 0x58
    opword 0x1361000C
    lfd f27, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

extern "C" asm void fn_8018495C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r30, r3
    li r31, 0x0
    li r29, 0x0
    li r24, 0x0
    lfs f31, lbl_804A0FE0
    lis r3, lbl_8035E7C0@ha
    addi r25, r3, lbl_8035E7C0@l
    lis r3, lbl_8035E800@ha
    addi r26, r3, lbl_8035E800@l
    lis r23, 0x100
    b lbl_80184A28
lbl_801849A4:
    lwz r0, 0x4(r30)
    add r22, r0, r29
    stw r23, 0x0(r22)
    stw r24, 0xc(r22)
    lwz r0, 0x2c(r30)
    cmpw r31, r0
    bge lbl_801849D0
    lwz r3, 0x38(r30)
    mr r4, r31
    bl fn_8018149C
    stw r3, 0xc(r22)
lbl_801849D0:
    li r21, 0x0
    li r28, 0x0
    li r27, 0x0
lbl_801849DC:
    add r3, r22, r28
    stw r24, 0x10(r3)
    stw r24, 0x14(r3)
    stfs f31, 0x18(r3)
    stw r24, 0x1c(r3)
    stw r24, 0x30(r3)
    addi r3, r3, 0x20
    add r4, r25, r27
    bl fn_80018AD0
    add r0, r26, r27
    add r3, r22, r28
    stw r0, 0x38(r3)
    addi r21, r21, 0x1
    addi r28, r28, 0x30
    addi r27, r27, 0x10
    cmpwi r21, 0x3
    blt lbl_801849DC
    addi r31, r31, 0x1
    addi r29, r29, 0xa0
lbl_80184A28:
    lwz r0, 0x2c(r30)
    cmpw r31, r0
    blt lbl_801849A4
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

extern "C" asm void fn_80184A58() {
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
    addi r11, r1, 0x40
    bl _savegpr_22
    mr r24, r3
    lwz r30, 0x0(r3)
    lfs f31, lbl_804A0FE0
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_80184AA4
    li r3, 0x0
    b lbl_801850FC
lbl_80184AA4:
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    beq lbl_80184AB8
    li r3, 0x0
    b lbl_801850FC
lbl_80184AB8:
    la r4, lbl_804A0FE0
    lfs f1, 0xc(r4)
    lfs f0, 0x10(r3)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f31
    ble lbl_80184AE8
    lfs f0, 0x8(r4)
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    b lbl_80184AFC
lbl_80184AE8:
    lfs f0, 0x8(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
lbl_80184AFC:
    lfd f1, lbl_804A0FD8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r5, lbl_804A0FE0
    lfs f0, 0x10(r5)
    fdivs f1, f1, f0
    lfs f0, 0x8(r3)
    fadds f0, f0, f1
    stfs f0, 0x8(r3)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80184C88
    rlwinm r0, r4, 0, 31, 29
    stw r0, 0x0(r3)
    rlwinm r0, r30, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80184C88
    lfs f0, 0xc(r3)
    lwz r4, 0x1c(r3)
    lfs f1, 0xc(r4)
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_80184BE4
    lfs f0, 0xc(r5)
    fmuls f1, f0, f1
    lfs f0, lbl_804A0FE0
    fcmpo cr0, f1, f0
    ble lbl_80184B98
    lfs f0, 0x8(r5)
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    b lbl_80184BAC
lbl_80184B98:
    lfs f0, 0x8(r5)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
lbl_80184BAC:
    lfd f1, lbl_804A0FD8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r4, lbl_804A0FE0
    lfs f0, 0x10(r4)
    fdivs f1, f1, f0
    lfs f0, 0x8(r3)
    fsubs f0, f0, f1
    stfs f0, 0x8(r3)
    b lbl_80184C64
lbl_80184BE4:
    lfs f2, lbl_804A0FE0
    fcmpo cr0, f0, f2
    opword 0x4C401382
    bne lbl_80184C64
    lfs f0, 0xc(r5)
    fmuls f1, f0, f1
    fcmpo cr0, f1, f2
    ble lbl_80184C1C
    lfs f0, 0x8(r5)
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    b lbl_80184C30
lbl_80184C1C:
    lfs f0, 0x8(r5)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
lbl_80184C30:
    lfd f1, lbl_804A0FD8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r4, lbl_804A0FE0
    lfs f0, 0x10(r4)
    fdivs f1, f1, f0
    lfs f0, 0x8(r3)
    fadds f0, f0, f1
    stfs f0, 0x8(r3)
lbl_80184C64:
    lwz r0, 0x0(r3)
    ori r0, r0, 0x40
    stw r0, 0x0(r3)
    mr r3, r24
    li r4, 0x0
    bl fn_8018462C
    mr r3, r24
    bl fn_80183D68
    lwz r30, 0x0(r24)
lbl_80184C88:
    la r3, lbl_804A0FE0
    lfs f1, 0x8(r24)
    lfs f0, 0x2c(r3)
    fdivs f1, f1, f0
    stfs f1, 0xc(r24)
    rlwinm r0, r30, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80184CCC
    lfs f0, 0x14(r24)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80184CC8
    lwz r0, 0x0(r24)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x0(r24)
    b lbl_80184CCC
lbl_80184CC8:
    fmr f31, f0
lbl_80184CCC:
    rlwinm r0, r30, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80184CE8
    lwz r0, 0x0(r24)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x0(r24)
    lfs f31, lbl_804A0FE0
lbl_80184CE8:
    lwz r0, 0x0(r24)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x0(r24)
    li r28, 0x0
    li r23, 0x0
    lis r31, lbl_8035E7B0@ha
    lfs f29, lbl_804A0FE0
    la r3, lbl_804A0FE0
    lfs f30, 0x14(r3)
    b lbl_801850A4
lbl_80184D10:
    lwz r0, 0x4(r24)
    add r27, r0, r23
    lwz r26, 0xc(r27)
    cmpwi r26, 0x0
    beq lbl_8018509C
    lwz r0, 0x0(r26)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8018509C
    lwz r3, 0x0(r27)
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_8018509C
    rlwinm r0, r30, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80184D60
    clrrwi r0, r30, 24
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_8018509C
lbl_80184D60:
    li r29, 0x0
    li r22, 0x0
lbl_80184D68:
    add r3, r27, r22
    lwz r4, 0x1c(r3)
    cmpwi r4, 0x0
    beq lbl_80185004
    lwz r25, 0x0(r4)
    addi r3, r3, 0x10
    lfs f1, 0xc(r24)
    fmr f2, f31
    lfs f3, 0x18(r24)
    bl fn_801852C8
    rlwinm r0, r30, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80184E78
    clrlwi r0, r25, 31
    cmpwi r0, 0x0
    beq lbl_80184DFC
    lwz r3, 0x0(r27)
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80184DC8
    lfs f0, 0x10(r26)
    fneg f0, f0
    stfs f0, 0x10(r26)
    b lbl_80184DFC
lbl_80184DC8:
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80184DE4
    lfs f0, 0x14(r26)
    fneg f0, f0
    stfs f0, 0x14(r26)
    b lbl_80184DFC
lbl_80184DE4:
    rlwinm r0, r3, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80184DFC
    lfs f0, 0x18(r26)
    fneg f0, f0
    stfs f0, 0x18(r26)
lbl_80184DFC:
    rlwinm r0, r25, 0, 27, 29
    cmpwi r0, 0x0
    beq lbl_80184E78
    lwz r3, 0x0(r27)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80184E28
    lfs f0, 0x30(r26)
    fneg f0, f0
    stfs f0, 0x30(r26)
    b lbl_80184E5C
lbl_80184E28:
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80184E44
    lfs f0, 0x34(r26)
    fneg f0, f0
    stfs f0, 0x34(r26)
    b lbl_80184E5C
lbl_80184E44:
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80184E5C
    lfs f0, 0x38(r26)
    fneg f0, f0
    stfs f0, 0x38(r26)
lbl_80184E5C:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80184E78
    lfs f0, 0x3c(r26)
    fneg f0, f0
    stfs f0, 0x3c(r26)
lbl_80184E78:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80184EB8
    rlwinm r0, r25, 0, 27, 29
    cmpwi r0, 0x0
    beq lbl_80184EB8
    addi r3, r26, 0x30
    addi r4, r31, lbl_8035E7B0@l
    mr r5, r3
    lfs f1, 0x4(r27)
    bl fn_8001D9D0
    lfs f1, 0x3c(r26)
    lfs f0, 0x4(r27)
    fmuls f0, f1, f0
    stfs f0, 0x3c(r26)
lbl_80184EB8:
    lwz r3, 0x0(r27)
    rlwinm r0, r3, 0, 18, 18
    rlwimi r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80184EF0
    clrlwi r0, r25, 31
    cmpwi r0, 0x0
    beq lbl_80184EF0
    lfs f1, 0x18(r26)
    fcmpo cr0, f1, f29
    ble lbl_80184EF0
    lfs f0, 0x4(r27)
    fmuls f0, f1, f0
    stfs f0, 0x18(r26)
lbl_80184EF0:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 11, 12
    cmpwi r0, 0x0
    beq lbl_80184F1C
    clrlwi r0, r25, 31
    cmpwi r0, 0x0
    beq lbl_80184F1C
    lfs f1, 0x18(r26)
    lfs f0, 0x8(r27)
    fsubs f0, f1, f0
    stfs f0, 0x18(r26)
lbl_80184F1C:
    lwz r3, 0x0(r27)
    rlwinm r0, r3, 0, 17, 17
    rlwimi r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80184F4C
    clrlwi r0, r25, 31
    cmpwi r0, 0x0
    beq lbl_80184F4C
    lfs f1, 0x14(r26)
    lfs f0, 0x8(r27)
    fmuls f0, f1, f0
    stfs f0, 0x14(r26)
lbl_80184F4C:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80184F78
    clrlwi r0, r25, 31
    cmpwi r0, 0x0
    beq lbl_80184F78
    lfs f1, 0x10(r26)
    lfs f0, 0x8(r27)
    fmuls f0, f1, f0
    stfs f0, 0x10(r26)
lbl_80184F78:
    lwz r0, 0x0(r27)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80184FA0
    rlwinm r0, r25, 0, 27, 29
    cmpwi r0, 0x0
    beq lbl_80184FA0
    stfs f30, 0x30(r26)
    stfs f29, 0x34(r26)
    stfs f29, 0x38(r26)
lbl_80184FA0:
    lwz r0, 0x0(r26)
    ori r0, r0, 0xe00
    stw r0, 0x0(r26)
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80184FC8
    lwz r0, 0x0(r26)
    ori r0, r0, 0x8
    stw r0, 0x0(r26)
lbl_80184FC8:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_80184FE4
    lwz r0, 0x0(r26)
    ori r0, r0, 0x10
    stw r0, 0x0(r26)
lbl_80184FE4:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8018508C
    lwz r0, 0x0(r26)
    ori r0, r0, 0x20
    stw r0, 0x0(r26)
    b lbl_8018508C
lbl_80185004:
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8018508C
    addi r3, r3, 0x10
    lfs f1, 0xc(r24)
    fmr f2, f31
    lfs f3, 0x18(r24)
    mr r4, r29
    bl fn_80185A94
    lwz r0, 0x0(r26)
    ori r0, r0, 0xe00
    stw r0, 0x0(r26)
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80185054
    lwz r0, 0x0(r26)
    ori r0, r0, 0x8
    stw r0, 0x0(r26)
lbl_80185054:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_80185070
    lwz r0, 0x0(r26)
    ori r0, r0, 0x10
    stw r0, 0x0(r26)
lbl_80185070:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8018508C
    lwz r0, 0x0(r26)
    ori r0, r0, 0x20
    stw r0, 0x0(r26)
lbl_8018508C:
    addi r29, r29, 0x1
    addi r22, r22, 0x30
    cmpwi r29, 0x3
    blt lbl_80184D68
lbl_8018509C:
    addi r28, r28, 0x1
    addi r23, r23, 0xa0
lbl_801850A4:
    lwz r0, 0x2c(r24)
    cmpw r28, r0
    blt lbl_80184D10
    lfs f1, 0xc(r24)
    lfs f0, 0x10(r24)
    fadds f1, f1, f0
    lwz r3, 0x1c(r24)
    lfs f0, 0xc(r3)
    fcmpo cr0, f1, f0
    ble lbl_801850DC
    lwz r0, 0x0(r24)
    ori r0, r0, 0x2
    stw r0, 0x0(r24)
    b lbl_801850F8
lbl_801850DC:
    lfs f0, lbl_804A0FE0
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801850F8
    lwz r0, 0x0(r24)
    ori r0, r0, 0x2
    stw r0, 0x0(r24)
lbl_801850F8:
    li r3, 0x1
lbl_801850FC:
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    li r0, 0x58
    opword 0x13C1000C
    lfd f30, 0x50(r1)
    li r0, 0x48
    opword 0x13A1000C
    lfd f29, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

extern "C" asm void fn_80185138() {
    nofralloc
    stwu r1, -0x20(r1)
    lhz r0, 0x0(r4)
    slwi r0, r0, 16
    stw r0, 0x14(r1)
    lhz r0, 0x2(r4)
    slwi r0, r0, 16
    stw r0, 0x10(r1)
    lhz r0, 0x4(r4)
    slwi r0, r0, 16
    stw r0, 0xc(r1)
    lhz r0, 0x6(r4)
    slwi r0, r0, 16
    stw r0, 0x8(r1)
    lfs f0, 0x14(r1)
    stfs f0, 0x0(r3)
    lfs f0, 0x10(r1)
    stfs f0, 0x4(r3)
    lfs f0, 0xc(r1)
    stfs f0, 0x8(r3)
    lfs f0, 0x8(r1)
    stfs f0, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80185194() {
    nofralloc
    lwz r5, 0x4(r4)
    lwz r6, 0x8(r4)
    lwz r7, 0xc(r4)
    lwz r0, 0x0(r4)
    srawi r0, r0, 16
    clrlwi r0, r0, 16
    sth r0, 0x0(r3)
    srawi r0, r5, 16
    clrlwi r0, r0, 16
    sth r0, 0x2(r3)
    srawi r0, r6, 16
    clrlwi r0, r0, 16
    sth r0, 0x4(r3)
    srawi r0, r7, 16
    clrlwi r0, r0, 16
    sth r0, 0x6(r3)
    blr
}

extern "C" asm void fn_801851D8() {
    nofralloc
    clrlwi r11, r1, 28
    opword 0x216BFFB0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stw r31, -0x14(r12)
    stw r30, -0x18(r12)
    mr r30, r3
    lwz r31, 0x14(r4)
    slwi r0, r5, 3
    add r31, r31, r0
    lwz r4, 0x10(r4)
    addi r0, r5, 0x1
    slwi r3, r0, 2
    slwi r0, r5, 2
    lfsx f2, r4, r3
    lfsx f0, r4, r0
    fsubs f2, f2, f0
    fsubs f0, f1, f0
    fdivs f31, f0, f2
    addi r3, r1, 0x20
    mr r4, r31
    bl fn_80185138
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    bl fn_80185138
    mr r3, r30
    addi r4, r1, 0x20
    addi r5, r1, 0x10
    fmr f1, f31
    bl fn_80020D1C
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    lwz r31, -0x14(r10)
    lwz r30, -0x18(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

extern "C" asm void fn_80185288() {
    nofralloc
    lwz r7, 0x14(r4)
    slwi r0, r5, 4
    add r7, r7, r0
    lwz r6, 0x10(r4)
    slwi r4, r5, 2
    addi r0, r5, 0x1
    slwi r0, r0, 2
    lfsx f2, r6, r0
    lfsx f0, r6, r4
    fsubs f2, f2, f0
    fsubs f0, f1, f0
    fdivs f1, f0, f2
    mr r4, r7
    addi r5, r7, 0x10
    b fn_80020D1C
}

extern "C" asm void fn_801852C4() {
    nofralloc
    blr
}

extern "C" asm void fn_801852C8() {
    nofralloc
    lwz r4, 0xc(r3)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_801852E0
    b fn_801852E4
lbl_801852E0:
    b fn_801856BC
}

extern "C" asm void fn_801852E4() {
    nofralloc
    clrlwi r11, r1, 28
    opword 0x216BFFA0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stw r31, -0x34(r12)
    stw r30, -0x38(r12)
    mr r30, r3
    fmr f29, f1
    fmr f30, f2
    fmr f31, f3
    lwz r31, 0xc(r3)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80185484
    lfs f0, lbl_804A0FE0
    fcmpu cr0, f0, f2
    bne lbl_80185364
    rlwinm r0, r4, 0, 31, 29
    stw r0, 0x0(r3)
    addi r3, r3, 0x10
    lwz r4, 0x28(r30)
    bl fn_80018AD0
    b lbl_80185484
lbl_80185364:
    lwz r4, 0x10(r31)
    lha r3, 0x6(r31)
    subi r5, r3, 0x1
    slwi r0, r5, 2
    lfsx f0, r4, r0
    fcmpo cr0, f0, f2
    opword 0x4C401382
    bne lbl_801853A0
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80185138
    b lbl_80185464
lbl_801853A0:
    lfs f0, 0x0(r4)
    fcmpo cr0, f0, f2
    opword 0x4C411382
    bne lbl_801853C0
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    bl fn_80185138
    b lbl_80185464
lbl_801853C0:
    li r5, 0x0
    li r3, 0x0
    b lbl_80185454
lbl_801853CC:
    lwz r4, 0x10(r31)
    lfsx f0, r4, r3
    fcmpu cr0, f2, f0
    bne lbl_801853F8
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80185138
    b lbl_80185464
lbl_801853F8:
    addi r6, r5, 0x1
    slwi r0, r6, 2
    lfsx f0, r4, r0
    fcmpu cr0, f2, f0
    bne lbl_80185428
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r6, r0
    add r4, r4, r0
    bl fn_80185138
    b lbl_80185464
lbl_80185428:
    fcmpo cr0, f0, f2
    ble lbl_8018544C
    addi r3, r1, 0x10
    mr r4, r31
    fmr f1, f30
    lwz r12, 0x20(r30)
    mtctr r12
    bctrl
    b lbl_80185464
lbl_8018544C:
    addi r5, r5, 0x1
    addi r3, r3, 0x4
lbl_80185454:
    lha r4, 0x6(r31)
    subi r0, r4, 0x1
    cmpw r5, r0
    blt lbl_801853CC
lbl_80185464:
    lwz r3, 0x28(r30)
    addi r4, r30, 0x10
    addi r5, r1, 0x10
    fsubs f1, f29, f31
    fsubs f0, f30, f31
    fdivs f1, f1, f0
    bl fn_80020D1C
    b lbl_8018567C
lbl_80185484:
    lwz r6, 0x10(r31)
    lha r3, 0x6(r31)
    subi r5, r3, 0x1
    slwi r0, r5, 2
    lfsx f0, r6, r0
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_801854CC
    lwz r3, 0x28(r30)
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80185138
    addi r3, r30, 0x10
    lwz r4, 0x28(r30)
    bl fn_80018AD0
    b lbl_8018567C
lbl_801854CC:
    lfs f0, 0x0(r6)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_801854F8
    lwz r3, 0x28(r30)
    lwz r4, 0x14(r31)
    bl fn_80185138
    addi r3, r30, 0x10
    lwz r4, 0x28(r30)
    bl fn_80018AD0
    b lbl_8018567C
lbl_801854F8:
    lwz r5, 0x4(r30)
    slwi r4, r5, 2
    lfsx f0, r6, r4
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_801855BC
    b lbl_801855A8
lbl_80185514:
    lwz r3, 0x10(r31)
    lfsx f0, r3, r4
    fcmpu cr0, f29, f0
    bne lbl_80185544
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80185138
    b lbl_8018566C
lbl_80185544:
    addi r6, r5, 0x1
    slwi r0, r6, 2
    lfsx f0, r3, r0
    fcmpu cr0, f29, f0
    bne lbl_80185578
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r6, r0
    add r4, r4, r0
    bl fn_80185138
    b lbl_8018566C
lbl_80185578:
    fcmpo cr0, f0, f29
    ble lbl_801855A0
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    mr r4, r31
    fmr f1, f29
    lwz r12, 0x20(r30)
    mtctr r12
    bctrl
    b lbl_8018566C
lbl_801855A0:
    addi r5, r5, 0x1
    addi r4, r4, 0x4
lbl_801855A8:
    lha r3, 0x6(r31)
    subi r0, r3, 0x1
    cmpw r5, r0
    blt lbl_80185514
    b lbl_8018566C
lbl_801855BC:
    subi r5, r5, 0x1
    slwi r3, r5, 2
    addi r0, r5, 0x1
    mtctr r0
    cmpwi r5, 0x0
    blt lbl_8018566C
lbl_801855D4:
    lwz r4, 0x10(r31)
    lfsx f1, r4, r3
    fcmpu cr0, f29, f1
    bne lbl_80185604
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80185138
    b lbl_8018566C
lbl_80185604:
    addi r6, r5, 0x1
    slwi r0, r6, 2
    lfsx f0, r4, r0
    fcmpu cr0, f29, f0
    bne lbl_80185638
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r6, r0
    add r4, r4, r0
    bl fn_80185138
    b lbl_8018566C
lbl_80185638:
    fcmpo cr0, f1, f29
    bge lbl_80185660
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    mr r4, r31
    fmr f1, f29
    lwz r12, 0x20(r30)
    mtctr r12
    bctrl
    b lbl_8018566C
lbl_80185660:
    subi r5, r5, 0x1
    subi r3, r3, 0x4
    bdnz lbl_801855D4
lbl_8018566C:
    stfs f29, 0x8(r30)
    lwz r3, 0x28(r30)
    addi r4, r30, 0x10
    bl fn_80018AD0
lbl_8018567C:
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    lwz r31, -0x34(r10)
    lwz r30, -0x38(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

extern "C" asm void fn_801856BC() {
    nofralloc
    clrlwi r11, r1, 28
    opword 0x216BFFA0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stw r31, -0x34(r12)
    stw r30, -0x38(r12)
    mr r30, r3
    fmr f29, f1
    fmr f30, f2
    fmr f31, f3
    lwz r31, 0xc(r3)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8018585C
    lfs f0, lbl_804A0FE0
    fcmpu cr0, f0, f2
    bne lbl_8018573C
    rlwinm r0, r4, 0, 31, 29
    stw r0, 0x0(r3)
    addi r3, r3, 0x10
    lwz r4, 0x28(r30)
    bl fn_80018AD0
    b lbl_8018585C
lbl_8018573C:
    lwz r4, 0x10(r31)
    lha r3, 0x6(r31)
    subi r5, r3, 0x1
    slwi r0, r5, 2
    lfsx f0, r4, r0
    fcmpo cr0, f0, f2
    opword 0x4C401382
    bne lbl_80185778
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80018AD0
    b lbl_8018583C
lbl_80185778:
    lfs f0, 0x0(r4)
    fcmpo cr0, f0, f2
    opword 0x4C411382
    bne lbl_80185798
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    bl fn_80018AD0
    b lbl_8018583C
lbl_80185798:
    li r5, 0x0
    li r3, 0x0
    b lbl_8018582C
lbl_801857A4:
    lwz r4, 0x10(r31)
    lfsx f0, r4, r3
    fcmpu cr0, f2, f0
    bne lbl_801857D0
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80018AD0
    b lbl_8018583C
lbl_801857D0:
    addi r6, r5, 0x1
    slwi r0, r6, 2
    lfsx f0, r4, r0
    fcmpu cr0, f2, f0
    bne lbl_80185800
    addi r3, r1, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r6, r0
    add r4, r4, r0
    bl fn_80018AD0
    b lbl_8018583C
lbl_80185800:
    fcmpo cr0, f0, f2
    ble lbl_80185824
    addi r3, r1, 0x10
    mr r4, r31
    fmr f1, f30
    lwz r12, 0x20(r30)
    mtctr r12
    bctrl
    b lbl_8018583C
lbl_80185824:
    addi r5, r5, 0x1
    addi r3, r3, 0x4
lbl_8018582C:
    lha r4, 0x6(r31)
    subi r0, r4, 0x1
    cmpw r5, r0
    blt lbl_801857A4
lbl_8018583C:
    lwz r3, 0x28(r30)
    addi r4, r30, 0x10
    addi r5, r1, 0x10
    fsubs f1, f29, f31
    fsubs f0, f30, f31
    fdivs f1, f1, f0
    bl fn_80020D1C
    b lbl_80185A54
lbl_8018585C:
    lwz r6, 0x10(r31)
    lha r3, 0x6(r31)
    subi r5, r3, 0x1
    slwi r0, r5, 2
    lfsx f0, r6, r0
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_801858A4
    lwz r3, 0x28(r30)
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80018AD0
    addi r3, r30, 0x10
    lwz r4, 0x28(r30)
    bl fn_80018AD0
    b lbl_80185A54
lbl_801858A4:
    lfs f0, 0x0(r6)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_801858D0
    lwz r3, 0x28(r30)
    lwz r4, 0x14(r31)
    bl fn_80018AD0
    addi r3, r30, 0x10
    lwz r4, 0x28(r30)
    bl fn_80018AD0
    b lbl_80185A54
lbl_801858D0:
    lwz r5, 0x4(r30)
    slwi r4, r5, 2
    lfsx f0, r6, r4
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_80185994
    b lbl_80185980
lbl_801858EC:
    lwz r3, 0x10(r31)
    lfsx f0, r3, r4
    fcmpu cr0, f29, f0
    bne lbl_8018591C
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80018AD0
    b lbl_80185A44
lbl_8018591C:
    addi r6, r5, 0x1
    slwi r0, r6, 2
    lfsx f0, r3, r0
    fcmpu cr0, f29, f0
    bne lbl_80185950
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r6, r0
    add r4, r4, r0
    bl fn_80018AD0
    b lbl_80185A44
lbl_80185950:
    fcmpo cr0, f0, f29
    ble lbl_80185978
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    mr r4, r31
    fmr f1, f29
    lwz r12, 0x20(r30)
    mtctr r12
    bctrl
    b lbl_80185A44
lbl_80185978:
    addi r5, r5, 0x1
    addi r4, r4, 0x4
lbl_80185980:
    lha r3, 0x6(r31)
    subi r0, r3, 0x1
    cmpw r5, r0
    blt lbl_801858EC
    b lbl_80185A44
lbl_80185994:
    subi r5, r5, 0x1
    slwi r3, r5, 2
    addi r0, r5, 0x1
    mtctr r0
    cmpwi r5, 0x0
    blt lbl_80185A44
lbl_801859AC:
    lwz r4, 0x10(r31)
    lfsx f1, r4, r3
    fcmpu cr0, f29, f1
    bne lbl_801859DC
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r5, r0
    add r4, r4, r0
    bl fn_80018AD0
    b lbl_80185A44
lbl_801859DC:
    addi r6, r5, 0x1
    slwi r0, r6, 2
    lfsx f0, r4, r0
    fcmpu cr0, f29, f0
    bne lbl_80185A10
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    lwz r4, 0x14(r31)
    lwz r0, 0x24(r30)
    mullw r0, r6, r0
    add r4, r4, r0
    bl fn_80018AD0
    b lbl_80185A44
lbl_80185A10:
    fcmpo cr0, f1, f29
    bge lbl_80185A38
    stw r5, 0x4(r30)
    addi r3, r30, 0x10
    mr r4, r31
    fmr f1, f29
    lwz r12, 0x20(r30)
    mtctr r12
    bctrl
    b lbl_80185A44
lbl_80185A38:
    subi r5, r5, 0x1
    subi r3, r3, 0x4
    bdnz lbl_801859AC
lbl_80185A44:
    stfs f29, 0x8(r30)
    lwz r3, 0x28(r30)
    addi r4, r30, 0x10
    bl fn_80018AD0
lbl_80185A54:
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    lwz r31, -0x34(r10)
    lwz r30, -0x38(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

extern "C" asm void fn_80185A94() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lfs f0, lbl_804A0FE0
    fcmpu cr0, f0, f2
    beq lbl_80185AC8
    fcmpo cr0, f1, f2
    opword 0x4C411382
    bne lbl_80185B00
lbl_80185AC8:
    lwz r3, 0x28(r3)
    slwi r0, r4, 4
    lis r4, lbl_8035E7C0@ha
    addi r31, r4, lbl_8035E7C0@l
    add r4, r31, r0
    bl fn_80018AD0
    addi r3, r29, 0x10
    slwi r0, r30, 4
    add r4, r31, r0
    bl fn_80018AD0
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r29)
    b lbl_80185B28
lbl_80185B00:
    lwz r3, 0x28(r3)
    addi r4, r29, 0x10
    slwi r6, r30, 4
    lis r5, lbl_8035E7C0@ha
    addi r0, r5, lbl_8035E7C0@l
    add r5, r0, r6
    fsubs f1, f1, f3
    fsubs f0, f2, f3
    fdivs f1, f1, f0
    bl fn_80020D1C
lbl_80185B28:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80185B40() {
    nofralloc
    lwz r3, 0x1c(r3)
    lwz r4, 0x4(r3)
    lwz r6, 0x10(r4)
    lha r0, 0x4(r4)
    cmpwi r0, 0x0
    bge lbl_80185B9C
    li r5, 0x0
    li r3, 0x0
    lha r0, 0x6(r4)
    la r4, lbl_804A0FE0
    lfs f0, 0x30(r4)
    fadds f0, f0, f1
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_80185B9C
lbl_80185B7C:
    lfsx f1, r6, r3
    fcmpo cr0, f1, f0
    ble lbl_80185B90
    subi r3, r5, 0x1
    blr
lbl_80185B90:
    addi r5, r5, 0x1
    addi r3, r3, 0x4
    bdnz lbl_80185B7C
lbl_80185B9C:
    subi r3, r5, 0x1
    blr
}

extern "C" asm void fn_80185BA4() {
    nofralloc
    lwz r3, 0x1c(r3)
    lwz r3, 0x4(r3)
    lwz r5, 0x10(r3)
    lha r0, 0x4(r3)
    cmpwi r0, 0x0
    bge lbl_80185BD4
    lha r0, 0x6(r3)
    cmpw r4, r0
    bge lbl_80185BD4
    slwi r0, r4, 2
    lfsx f1, r5, r0
    blr
lbl_80185BD4:
    lfs f1, lbl_804A0FE0
    blr
}

extern "C" asm void fn_80185BDC() {
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_25
    mr r25, r3
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_80185D18
    bl fn_80185D30
    lis r28, lbl_8035EA30@ha
    addi r3, r28, lbl_8035EA30@l
    lwz r4, 0x0(r25)
    lwz r5, 0x20(r25)
    lfs f1, 0xc(r25)
    lfs f2, 0x10(r25)
    opword 0x4CC63242
    bl fn_80165C74
    lwz r31, 0x1c(r25)
    lfs f1, 0xc(r31)
    bl fn_80061FB8
    mr r30, r3
    lfs f1, 0x8(r31)
    bl fn_80061FB8
    mr r29, r3
    lfs f1, 0xc(r25)
    bl fn_80061FB8
    mr r4, r3
    addi r28, r28, lbl_8035EA30@l
    addi r3, r28, 0x25
    mr r5, r29
    lfs f1, 0x8(r31)
    mr r6, r30
    lfs f2, 0xc(r31)
    opword 0x4CC63242
    bl fn_80165C74
    lwz r3, 0x1c(r25)
    lwz r26, 0x4(r3)
    lwz r25, 0x10(r26)
    lha r0, 0x4(r26)
    cmpwi r0, 0x0
    bge lbl_80185D00
    li r29, 0x0
    stb r29, 0x108(r1)
    li r27, 0x0
    mr r31, r29
    li r30, 0xa
    b lbl_80185CF4
lbl_80185C9C:
    lfsx f1, r25, r31
    bl fn_80061FB8
    mr r5, r3
    addi r3, r1, 0x8
    addi r4, r28, 0x42
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x108
    addi r4, r1, 0x8
    bl strcat
    divw r0, r27, r30
    mullw r0, r0, r30
    subf r0, r0, r27
    cmpwi r0, 0x9
    bne lbl_80185CEC
    addi r3, r28, 0x46
    addi r4, r1, 0x108
    opword 0x4CC63182
    bl fn_80165C74
    stb r29, 0x108(r1)
lbl_80185CEC:
    addi r27, r27, 0x1
    addi r31, r31, 0x4
lbl_80185CF4:
    lha r0, 0x6(r26)
    cmpw r27, r0
    blt lbl_80185C9C
lbl_80185D00:
    lis r3, lbl_8035EA30@ha
    addi r3, r3, lbl_8035EA30@l
    addi r3, r3, 0x46
    addi r4, r1, 0x108
    opword 0x4CC63182
    bl fn_80165C74
lbl_80185D18:
    addi r11, r1, 0x230
    bl _restgpr_25
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

extern "C" asm void fn_80185D30() {
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x220
    bl _savegpr_27
    mr r27, r3
    addi r3, r1, 0x108
    lis r4, lbl_8035EA30@ha
    addi r29, r4, lbl_8035EA30@l
    addi r4, r29, 0xc8
    opword 0x4CC63182
    bl sprintf
    lwz r28, 0x0(r27)
    li r27, 0x0
    li r31, 0x0
    lis r3, lbl_8035E9B0@ha
    addi r30, r3, lbl_8035E9B0@l
lbl_80185D74:
    clrlwi r0, r28, 31
    cmpwi r0, 0x0
    beq lbl_80185DA0
    addi r3, r1, 0x8
    addi r4, r29, 0xcd
    lwzx r5, r30, r31
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x108
    addi r4, r1, 0x8
    bl strcat
lbl_80185DA0:
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    srwi r28, r28, 1
    cmplwi r27, 0x20
    blt lbl_80185D74
    lis r3, lbl_8035EA30@ha
    addi r3, r3, lbl_8035EA30@l
    addi r3, r3, 0x46
    addi r4, r1, 0x108
    opword 0x4CC63182
    bl fn_80165C74
    addi r11, r1, 0x220
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

extern "C" asm void fn_80185DE4() {
    nofralloc
    clrlwi r11, r1, 28
    opword 0x216BFF90
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    subi r11, r12, 0x10
    bl _savegpr_18
    mr r23, r3
    li r25, 0x0
    lhz r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_80185E24
    mr r25, r23
lbl_80185E24:
    lwz r0, 0x8(r3)
    add r27, r0, r25
    lha r30, 0x6(r3)
    li r31, 0x0
    li r22, 0x0
    la r3, lbl_804A0FE0
    lfs f31, 0x34(r3)
    b lbl_80185F7C
lbl_80185E44:
    lwzx r0, r27, r22
    cmpwi r0, 0x0
    beq lbl_80185F74
    add r3, r25, r0
    li r24, 0x0
    lhz r0, 0x2(r23)
    cmpwi r0, 0x0
    bne lbl_80185E68
    mr r24, r3
lbl_80185E68:
    lwz r0, 0x4(r3)
    add r26, r0, r24
    lha r28, 0x2(r3)
    li r29, 0x0
    b lbl_80185F6C
lbl_80185E7C:
    lwz r3, 0x0(r26)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80185F64
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80185F0C
    lha r0, 0x4(r26)
    cmpwi r0, 0x0
    blt lbl_80185F64
    lwz r0, 0x14(r26)
    add r18, r0, r24
    lha r19, 0x6(r26)
    li r20, 0x0
    li r21, 0x0
    b lbl_80185F00
lbl_80185EBC:
    addi r3, r1, 0x10
    add r4, r18, r21
    bl fn_80185138
    lfs f0, 0x10(r1)
    fmuls f0, f0, f31
    stfs f0, 0x10(r1)
    lfs f0, 0x14(r1)
    fmuls f0, f0, f31
    stfs f0, 0x14(r1)
    lfs f0, 0x18(r1)
    fmuls f0, f0, f31
    stfs f0, 0x18(r1)
    add r3, r18, r21
    addi r4, r1, 0x10
    bl fn_80185194
    addi r20, r20, 0x1
    addi r21, r21, 0x8
lbl_80185F00:
    cmpw r20, r19
    blt lbl_80185EBC
    b lbl_80185F64
lbl_80185F0C:
    lha r0, 0x4(r26)
    cmpwi r0, 0x0
    blt lbl_80185F64
    lwz r0, 0x14(r26)
    add r5, r0, r24
    lha r19, 0x6(r26)
    li r3, 0x0
    mtctr r19
    cmpwi r19, 0x0
    ble lbl_80185F64
lbl_80185F34:
    lfsx f0, r5, r3
    fmuls f0, f0, f31
    stfsx f0, r5, r3
    add r4, r5, r3
    lfs f0, 0x4(r4)
    fmuls f0, f0, f31
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r4)
    fmuls f0, f0, f31
    stfs f0, 0x8(r4)
    addi r3, r3, 0x10
    bdnz lbl_80185F34
lbl_80185F64:
    addi r26, r26, 0x20
    addi r29, r29, 0x1
lbl_80185F6C:
    cmpw r29, r28
    blt lbl_80185E7C
lbl_80185F74:
    addi r31, r31, 0x1
    addi r22, r22, 0x4
lbl_80185F7C:
    cmpw r31, r30
    blt lbl_80185E44
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    subi r11, r10, 0x10
    bl _restgpr_18
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

extern "C" asm void fn_80185FAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lhz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_80185FCC
    li r3, 0x1
    b lbl_80186068
lbl_80185FCC:
    li r0, 0x1
    sth r0, 0x2(r3)
    lwz r0, 0x8(r3)
    add r5, r0, r3
    stw r5, 0x8(r3)
    li r6, 0x0
    li r4, 0x0
    b lbl_80186050
lbl_80185FEC:
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    beq lbl_80186048
    add r0, r0, r3
    stwx r0, r5, r4
    lwzx r8, r5, r4
    lwz r0, 0x4(r8)
    add r0, r0, r8
    stw r0, 0x4(r8)
    lwz r9, 0x4(r8)
    li r7, 0x0
    b lbl_8018603C
lbl_8018601C:
    lwz r0, 0x10(r9)
    add r0, r0, r8
    stw r0, 0x10(r9)
    lwz r0, 0x14(r9)
    add r0, r0, r8
    stw r0, 0x14(r9)
    addi r9, r9, 0x20
    addi r7, r7, 0x1
lbl_8018603C:
    lha r0, 0x2(r8)
    cmpw r7, r0
    blt lbl_8018601C
lbl_80186048:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
lbl_80186050:
    lha r0, 0x6(r3)
    cmpw r6, r0
    blt lbl_80185FEC
    li r4, 0x0
    bl fn_80185DE4
    li r3, 0x0
lbl_80186068:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80186078() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r31, r3
    mr r29, r4
    cmpwi r4, 0x0
    beq lbl_80186164
    li r30, 0x0
    stw r30, 0x0(r3)
    stw r30, 0x4(r3)
    li r0, 0x4
    stw r0, 0x8(r3)
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_801D3AA8
    lbz r0, 0x8(r1)
    stb r0, 0xc(r31)
    lbz r0, 0x9(r1)
    stb r0, 0xd(r31)
    lbz r0, 0xa(r1)
    stb r0, 0xe(r31)
    mr r3, r29
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801D3AA8
    lbz r0, 0xb(r1)
    stb r0, 0xf(r31)
    stw r30, 0x10(r31)
    mr r3, r29
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_801D3AE0
    lbz r0, 0x8(r1)
    stb r0, 0x14(r31)
    lbz r0, 0x9(r1)
    stb r0, 0x15(r31)
    lbz r0, 0xa(r1)
    stb r0, 0x16(r31)
    lbz r0, 0xb(r1)
    stb r0, 0x17(r31)
    li r0, 0xff
    stb r0, 0x1b(r31)
    stb r0, 0x1a(r31)
    stb r0, 0x19(r31)
    stb r0, 0x18(r31)
    stb r0, 0x1f(r31)
    stb r0, 0x1e(r31)
    stb r0, 0x1d(r31)
    stb r0, 0x1c(r31)
    sth r30, 0x26(r31)
    sth r30, 0x24(r31)
    sth r30, 0x22(r31)
    sth r30, 0x20(r31)
    stw r30, 0x28(r31)
    stw r30, 0x2c(r31)
    b lbl_801861D8
lbl_80186164:
    li r4, 0x0
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    li r0, 0x4
    stw r0, 0x8(r3)
    li r0, 0xff
    stb r0, 0xf(r3)
    stb r0, 0xe(r3)
    stb r0, 0xd(r3)
    stb r0, 0xc(r3)
    stw r4, 0x10(r3)
    stb r0, 0x17(r3)
    stb r0, 0x16(r3)
    stb r0, 0x15(r3)
    stb r0, 0x14(r3)
    stb r0, 0x1b(r3)
    stb r0, 0x1a(r3)
    stb r0, 0x19(r3)
    stb r0, 0x18(r3)
    stb r0, 0x1f(r3)
    stb r0, 0x1e(r3)
    stb r0, 0x1d(r3)
    stb r0, 0x1c(r3)
    sth r4, 0x26(r3)
    sth r4, 0x24(r3)
    sth r4, 0x22(r3)
    sth r4, 0x20(r3)
    stw r4, 0x28(r3)
    stw r4, 0x2c(r3)
lbl_801861D8:
    li r3, 0x0
    lfs f1, lbl_804A1018
    la r4, lbl_804A1018
    lfs f0, 0x4(r4)
    li r0, 0x8
    mtctr r0
lbl_801861F0:
    add r4, r31, r3
    stfs f1, 0x30(r4)
    stfs f1, 0x50(r4)
    stfs f0, 0x70(r4)
    stfs f0, 0x90(r4)
    stfs f1, 0xb0(r4)
    addi r3, r3, 0x4
    bdnz lbl_801861F0
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018622C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r5, 0x0
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    mr r4, r5
    li r0, 0x3
    mtctr r0
lbl_80186264:
    add r6, r3, r4
    stw r5, 0x10(r6)
    stw r5, 0x14(r6)
    stw r5, 0x18(r6)
    addi r4, r4, 0xc
    bdnz lbl_80186264
    addi r3, r3, 0x40
    addi r4, r30, 0x224
    addi r5, r30, 0x1f4
    bl fn_80190804
    lis r31, 0x1
    subi r0, r31, 0x1
    stw r0, 0x160(r30)
    addi r3, r30, 0x164
    bl fn_8030CC40
    addi r3, r30, 0x194
    bl fn_8030CC40
    addi r3, r30, 0x1c4
    bl fn_8030CC40
    subi r0, r31, 0x1
    stw r0, 0x264(r30)
    li r5, 0x0
    stw r5, 0x268(r30)
    stw r5, 0x26c(r30)
    li r3, 0x0
    li r0, 0x4
    mtctr r0
lbl_801862D0:
    add r4, r30, r3
    stw r5, 0x270(r4)
    addi r3, r3, 0x4
    bdnz lbl_801862D0
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_801862FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r0, 0x26c(r3)
    cmpwi r0, 0x0
    beq lbl_80186328
    addi r3, r3, 0x26c
    bl fn_80048600
lbl_80186328:
    li r30, 0x0
    li r31, 0x0
lbl_80186330:
    add r3, r29, r31
    addi r3, r3, 0x270
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80186348
    bl fn_80048720
lbl_80186348:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmplwi r30, 0x4
    blt lbl_80186330
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80186374() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x26c(r3)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x4
    bl fn_80048680
    cmpwi r3, 0x1
    beq lbl_801863C4
    lwz r0, 0x26c(r30)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_80048634
    b lbl_801863C8
lbl_801863C4:
    li r3, 0x0
lbl_801863C8:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801863E0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    li r31, 0x1
    lwz r0, 0x26c(r3)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80048680
    cmpwi r3, 0x0
    bne lbl_80186438
    lwz r0, 0x26c(r30)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x4
    bl fn_80048680
    cmpwi r3, 0x0
    bne lbl_80186438
    li r31, 0x0
lbl_80186438:
    cmpwi r31, 0x0
    beq lbl_80186488
    lwz r0, 0x26c(r30)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0x18
    bl fn_800486D4
    cmpwi r3, 0x0
    beq lbl_80186488
    lwz r0, 0x40(r30)
    ori r0, r0, 0xe00
    stw r0, 0x40(r30)
    lfs f0, 0x24(r1)
    stfs f0, 0x50(r30)
    lfs f0, 0x34(r1)
    stfs f0, 0x54(r30)
    lfs f0, 0x44(r1)
    stfs f0, 0x58(r30)
    li r3, 0x1
    b lbl_8018648C
lbl_80186488:
    li r3, 0x0
lbl_8018648C:
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

extern "C" asm void fn_801864A4() {
    nofralloc
    cmplwi r4, 0x1c
    bge lbl_801864D4
    slwi r0, r4, 2
    add r4, r3, r0
    lwz r4, 0x60(r4)
    lwz r0, 0xd4(r3)
    cmplw r4, r0
    bge lbl_801864D4
    lwz r3, 0xd0(r3)
    mulli r0, r4, 0x280
    add r3, r3, r0
    blr
lbl_801864D4:
    li r3, 0x0
    blr
}

extern "C" asm void fn_801864DC() {
    nofralloc
    rlwinm r0, r4, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80186504
    lfs f0, 0x24(r3)
    lfs f1, lbl_804A1020
    fmuls f0, f0, f1
    stfs f0, 0x24(r3)
    lfs f0, 0x18(r3)
    fmuls f0, f0, f1
    stfs f0, 0x18(r3)
lbl_80186504:
    rlwinm r0, r4, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_8018652C
    lfs f0, 0x8(r3)
    lfs f1, lbl_804A1020
    fmuls f0, f0, f1
    stfs f0, 0x8(r3)
    lfs f0, 0x20(r3)
    fmuls f0, f0, f1
    stfs f0, 0x20(r3)
lbl_8018652C:
    rlwinm r0, r4, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80186554
    lfs f0, 0x10(r3)
    lfs f1, lbl_804A1020
    fmuls f0, f0, f1
    stfs f0, 0x10(r3)
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    stfs f0, 0x4(r3)
lbl_80186554:
    rlwinm r0, r4, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80186570
    lfs f1, 0xc(r3)
    lfs f0, lbl_804A1020
    fmuls f0, f1, f0
    stfs f0, 0xc(r3)
lbl_80186570:
    rlwinm r0, r4, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8018658C
    lfs f1, 0x1c(r3)
    lfs f0, lbl_804A1020
    fmuls f0, f1, f0
    stfs f0, 0x1c(r3)
lbl_8018658C:
    rlwinm r0, r4, 0, 10, 10
    cmpwi r0, 0x0
    beqlr
    lfs f1, 0x2c(r3)
    lfs f0, lbl_804A1020
    fmuls f0, f1, f0
    stfs f0, 0x2c(r3)
    blr
}

extern "C" asm void fn_801865AC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r3, 0x268(r3)
    cmpwi r3, 0x0
    beq lbl_80186608
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80186608
    addi r3, r1, 0x8
    addi r4, r31, 0x1c4
    bl fn_801734E4
    addi r3, r31, 0x1c4
    lwz r4, 0x268(r31)
    addi r4, r4, 0x1c4
    bl fn_801734E4
    lwz r3, 0x268(r31)
    addi r3, r3, 0x1c4
    addi r4, r1, 0x8
    bl fn_801734E4
lbl_80186608:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x4
    stw r0, 0x0(r31)
    addi r3, r31, 0x1c4
    lwz r0, 0x40(r31)
    rlwinm r4, r0, 0, 10, 15
    bl fn_801864DC
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

extern "C" asm void fn_80186638() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xf8(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80186668
    li r3, 0x0
    b lbl_801866B8
lbl_80186668:
    li r31, 0x0
    b lbl_801866A8
lbl_80186670:
    mr r3, r30
    mr r4, r31
    bl fn_801864A4
    cmpwi r3, 0x0
    beq lbl_801866A4
    addi r4, r3, 0x40
    cmpwi r4, 0x0
    beq lbl_801866A4
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 10, 15
    cmpwi r0, 0x0
    beq lbl_801866A4
    bl fn_801865AC
lbl_801866A4:
    addi r31, r31, 0x1
lbl_801866A8:
    lwz r0, 0xd4(r30)
    cmplw r31, r0
    blt lbl_80186670
    li r3, 0x1
lbl_801866B8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_801866D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmpwi r3, 0x0
    bne lbl_801866F0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_801866F0:
    li r0, 0x0
    lis r4, lbl_803D1CB0@ha
    stw r0, lbl_803D1CB0@l(r4)
    addi r31, r4, lbl_803D1CB0@l
    sth r0, 0x4(r31)
    clrlwi r3, r3, 16
    sth r3, 0x6(r31)
    li r4, 0x80
    bl fn_80171130
    stw r3, 0x8(r31)
    addi r3, r31, 0xc
    bl fn_80019D5C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80186734() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803D1CB0@ha
    addi r3, r3, lbl_803D1CB0@l
    lwz r31, 0x14(r3)
    b lbl_8018675C
lbl_80186754:
    lwz r31, 0x8(r31)
    bl fn_80186808
lbl_8018675C:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_80186754
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018677C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    li r30, 0x0
    lis r3, lbl_803D1CB0@ha
    addi r3, r3, lbl_803D1CB0@l
    lwz r31, 0x14(r3)
    b lbl_801867E0
lbl_801867AC:
    lwz r31, 0x8(r31)
    cmpwi r28, 0x0
    beq lbl_801867C8
    lwz r0, 0x0(r3)
    and r0, r28, r0
    cmpwi r0, 0x0
    beq lbl_801867E0
lbl_801867C8:
    lwz r0, 0x0(r3)
    and r0, r0, r29
    cmpwi r0, 0x0
    bne lbl_801867E0
    bl fn_80186808
    addi r30, r30, 0x1
lbl_801867E0:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_801867AC
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80186808() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_80186830
    li r3, 0x0
    b lbl_80186A28
lbl_80186830:
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    bne lbl_80186840
    b lbl_80186A28
lbl_80186840:
    clrlwi r0, r6, 31
    cmpwi r0, 0x0
    beq lbl_80186850
    b lbl_80186A28
lbl_80186850:
    lis r4, lbl_803D1CB0@ha
    addi r5, r4, lbl_803D1CB0@l
    lhz r4, 0x4(r5)
    subi r0, r4, 0x1
    clrlwi r0, r0, 16
    sth r0, 0x4(r5)
    lwz r31, 0x18(r3)
    li r4, 0x0
    stb r4, 0x1c(r3)
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80186890
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_80186890:
    rlwinm r0, r6, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80186904
    lwz r4, 0x70(r3)
    cmpwi r4, 0x0
    beq lbl_801868B0
    lwz r3, 0x8(r3)
    bl fn_80170E84
lbl_801868B0:
    lwz r4, 0x74(r30)
    cmpwi r4, 0x0
    beq lbl_801868C4
    lwz r3, 0x8(r30)
    bl fn_80170E84
lbl_801868C4:
    lwz r4, 0x78(r30)
    cmpwi r4, 0x0
    beq lbl_801868D8
    lwz r3, 0x8(r30)
    bl fn_80170E84
lbl_801868D8:
    lwz r4, 0x7c(r30)
    cmpwi r4, 0x0
    beq lbl_801868EC
    lwz r3, 0x8(r30)
    bl fn_80170E84
lbl_801868EC:
    lwz r3, 0x5c(r30)
    bl fn_80035EE0
    lwz r3, 0x8(r30)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_80186904:
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80186920
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_80186920:
    rlwinm r0, r6, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8018693C
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_8018693C:
    rlwinm r0, r6, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80186958
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_80186958:
    rlwinm r0, r6, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80186974
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_80186974:
    rlwinm r0, r6, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80186990
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_80186990:
    rlwinm r0, r6, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_801869AC
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_801869AC:
    rlwinm r0, r6, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_801869C8
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_801869C8:
    rlwinm r0, r6, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_801869DC
    bl fn_801912E4
    b lbl_801869FC
lbl_801869DC:
    rlwinm r0, r6, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_801869F8
    lwz r3, 0x8(r3)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    b lbl_801869FC
lbl_801869F8:
    stw r4, 0x1(r0)
lbl_801869FC:
    li r0, 0x0
    stw r0, 0x5c(r30)
    stw r0, 0x0(r30)
    addi r3, r30, 0x10
    bl fn_8002211C
    lis r3, lbl_803D1CB0@ha
    addi r3, r3, lbl_803D1CB0@l
    lwz r3, 0x8(r3)
    mr r4, r30
    bl fn_80019D94
    lwz r3, 0x0(r31)
lbl_80186A28:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80186A40() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, 0x0
    lis r3, lbl_803D1CB0@ha
    addi r3, r3, lbl_803D1CB0@l
    lwz r31, 0x14(r3)
    b lbl_80186A84
lbl_80186A6C:
    lwz r31, 0x8(r31)
    lwz r0, 0x8(r3)
    cmplw r0, r29
    bne lbl_80186A84
    bl fn_80186808
    addi r30, r30, 0x1
lbl_80186A84:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_80186A6C
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80186AAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    stw r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_80186AD8
    bl fn_80186808
    li r3, 0x1
    b lbl_80186ADC
lbl_80186AD8:
    li r3, 0x0
lbl_80186ADC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80186AEC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    bl strlen
    mr r31, r3
    lis r3, lbl_803D1CB0@ha
    addi r4, r3, lbl_803D1CB0@l
    lhz r3, 0x4(r4)
    addi r0, r3, 0x1
    clrlwi r0, r0, 16
    sth r0, 0x4(r4)
    lwz r3, 0x8(r4)
    bl fn_80019D70
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_80186B40
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80186B40:
    mr r3, r30
    li r4, 0x0
    li r5, 0x80
    bl memset
    mr r3, r30
    addi r4, r30, 0x10
    lis r5, lbl_803D1CB0@ha
    addi r5, r5, lbl_803D1CB0@l
    addi r5, r5, 0xc
    bl fn_8001D9A4
    cmpwi r31, 0x3f
    ble lbl_80186B78
    add r3, r31, r29
    subi r29, r3, 0x3f
lbl_80186B78:
    addi r3, r30, 0x1c
    mr r4, r29
    bl strcpy
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80186BA0() {
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
    cmpwi r6, 0x0
    beq lbl_80186C2C
    cmpwi r3, 0x0
    bne lbl_80186BD8
    b lbl_80186C2C
lbl_80186BD8:
    mr r3, r31
    bl fn_80035E80
    stw r30, 0x8(r28)
    li r0, 0x4
    sth r0, 0x4(r28)
    stw r29, 0x0(r28)
    li r0, 0x1
    stw r0, 0xc(r28)
    stw r31, 0x5c(r28)
    mr r3, r31
    bl fn_80035F10
    stw r3, 0x60(r28)
    mr r3, r31
    bl fn_80035F40
    stw r3, 0x64(r28)
    mr r3, r31
    bl fn_80035FA0
    stw r3, 0x68(r28)
    mr r3, r31
    bl fn_80035F70
    stw r3, 0x6c(r28)
lbl_80186C2C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80186C44() {
    nofralloc
    cmpwi r6, 0x0
    beqlr
    cmpwi r3, 0x0
    bne lbl_80186C58
    blr
lbl_80186C58:
    stw r6, 0x5c(r3)
    stw r5, 0x8(r3)
    li r0, 0x80
    sth r0, 0x4(r3)
    stw r4, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    blr
}
