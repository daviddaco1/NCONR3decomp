// Generated from gl_effect.s
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef float f32;
typedef double f64;

extern "C" void DCFlushRange();
extern "C" void DCInvalidateRange();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void dtor_80136CFC();
extern "C" void dtor_8018B534();
extern "C" void fn_80016CAC();
extern "C" void fn_80016CCC();
extern "C" void fn_80016D40();
extern "C" void fn_80016D44();
extern "C" void fn_80016E44();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_80018C2C();
extern "C" void fn_80018C3C();
extern "C" void fn_80019D5C();
extern "C" void fn_80019D70();
extern "C" void fn_80019D94();
extern "C" void fn_80019DAC();
extern "C" void fn_8001B8BC();
extern "C" void fn_8001D9A4();
extern "C" void fn_8001DA9C();
extern "C" void fn_8002211C();
extern "C" void fn_80027AF8();
extern "C" void fn_8002AB0C();
extern "C" void fn_8002AB30();
extern "C" void fn_8002ADF8();
extern "C" void fn_8002AE08();
extern "C" void fn_8002AE3C();
extern "C" void fn_8002AE40();
extern "C" void fn_8002AF5C();
extern "C" void fn_8002AFB4();
extern "C" void fn_8002B060();
extern "C" void fn_8002B9F4();
extern "C" void fn_80030E80();
extern "C" void fn_800341DC();
extern "C" void fn_800344B0();
extern "C" void fn_800344D4();
extern "C" void fn_800389F4();
extern "C" void fn_80038AB8();
extern "C" void fn_80038EB4();
extern "C" void fn_8003946C();
extern "C" void fn_800394E4();
extern "C" void fn_80039598();
extern "C" void fn_8003A130();
extern "C" void fn_8003D500();
extern "C" void fn_8003D59C();
extern "C" void fn_8003F5C8();
extern "C" void fn_8003F82C();
extern "C" void fn_8003FA5C();
extern "C" void fn_80044680();
extern "C" void fn_8005E7D4();
extern "C" void fn_8005E8F0();
extern "C" void fn_800609D8();
extern "C" void fn_80061FA0();
extern "C" void fn_8008AE14();
extern "C" void fn_8012B7A4();
extern "C" void fn_80146EF0();
extern "C" void fn_80146F20();
extern "C" void fn_80146F28();
extern "C" void fn_801665A8();
extern "C" void fn_80166638();
extern "C" void fn_80166894();
extern "C" void fn_80167138();
extern "C" void fn_80167154();
extern "C" void fn_80170410();
extern "C" void fn_80170560();
extern "C" void fn_80170DFC();
extern "C" void fn_80170E18();
extern "C" void fn_80170E2C();
extern "C" void fn_80170E84();
extern "C" void fn_80171130();
extern "C" void fn_8017291C();
extern "C" void fn_80172A18();
extern "C" void fn_801734E4();
extern "C" void fn_801734EC();
extern "C" void fn_80173580();
extern "C" void fn_801735E8();
extern "C" void fn_801736E0();
extern "C" void fn_80173740();
extern "C" void fn_80173750();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_80173760();
extern "C" void fn_8017A018();
extern "C" void fn_8017ADBC();
extern "C" void fn_8017AE60();
extern "C" void fn_8017B004();
extern "C" void fn_8017B074();
extern "C" void fn_8017C22C();
extern "C" void fn_80185FAC();
extern "C" void fn_80186AEC();
extern "C" void fn_80186BA0();
extern "C" void fn_80186C44();
extern "C" void fn_80186C78();
extern "C" void fn_801872F0();
extern "C" void fn_80187334();
extern "C" void fn_8018738C();
extern "C" void fn_80187794();
extern "C" void fn_80187814();
extern "C" void fn_80187830();
extern "C" void fn_8018784C();
extern "C" void fn_80187A6C();
extern "C" void fn_80187B5C();
extern "C" void fn_80187BFC();
extern "C" void fn_80187C20();
extern "C" void fn_80187C48();
extern "C" void fn_80187CD8();
extern "C" void fn_80187D60();
extern "C" void fn_80187DA4();
extern "C" void fn_80187E40();
extern "C" void fn_80187EFC();
extern "C" void fn_80187FB8();
extern "C" void fn_80187FF4();
extern "C" void fn_80188038();
extern "C" void fn_8018807C();
extern "C" void fn_801880FC();
extern "C" void fn_80188180();
extern "C" void fn_80188340();
extern "C" void fn_8018839C();
extern "C" void fn_801883F8();
extern "C" void fn_80188454();
extern "C" void fn_801884B0();
extern "C" void fn_80188524();
extern "C" void fn_80188598();
extern "C" void fn_801885CC();
extern "C" void fn_801886CC();
extern "C" void fn_80188780();
extern "C" void fn_801887F4();
extern "C" void fn_80188874();
extern "C" void fn_801888CC();
extern "C" void fn_80188924();
extern "C" void fn_801889D0();
extern "C" void fn_80188A44();
extern "C" void fn_80188ABC();
extern "C" void fn_80189024();
extern "C" void fn_801890A4();
extern "C" void fn_801891B4();
extern "C" void fn_80189280();
extern "C" void fn_8018934C();
extern "C" void fn_801893C4();
extern "C" void fn_80189450();
extern "C" void fn_801895CC();
extern "C" void fn_801896B0();
extern "C" void fn_801896C0();
extern "C" void fn_801896F4();
extern "C" void fn_80189728();
extern "C" void fn_80189774();
extern "C" void fn_80189794();
extern "C" void fn_801897D0();
extern "C" void fn_8018980C();
extern "C" void fn_80189854();
extern "C" void fn_80189924();
extern "C" void fn_801899D0();
extern "C" void fn_80189CE4();
extern "C" void fn_80189D00();
extern "C" void fn_80189D60();
extern "C" void fn_80189D94();
extern "C" void fn_80189DC8();
extern "C" void fn_80189DE8();
extern "C" void fn_80189E10();
extern "C" void fn_80189E18();
extern "C" void fn_80189E24();
extern "C" void fn_80189E28();
extern "C" void fn_80189E30();
extern "C" void fn_8018A398();
extern "C" void fn_8018A430();
extern "C" void fn_8018A4C8();
extern "C" void fn_8018A560();
extern "C" void fn_8018A5F8();
extern "C" void fn_8018A7B0();
extern "C" void fn_8018A864();
extern "C" void fn_8018A874();
extern "C" void fn_8018A884();
extern "C" void fn_8018A894();
extern "C" void fn_8018A8A4();
extern "C" void fn_8018A900();
extern "C" void fn_8018AA68();
extern "C" void fn_8018AB34();
extern "C" void fn_8018ABF0();
extern "C" void fn_8018ACAC();
extern "C" void fn_8018ACC8();
extern "C" void fn_8018AD48();
extern "C" void fn_8018AD5C();
extern "C" void fn_8018ADA4();
extern "C" void fn_8018ADC0();
extern "C" void fn_8018AE04();
extern "C" void fn_8018AE0C();
extern "C" void fn_8018AE14();
extern "C" void fn_8018AE30();
extern "C" void fn_8018AE4C();
extern "C" void fn_8018AE68();
extern "C" void fn_8018AEE8();
extern "C" void fn_8018AEFC();
extern "C" void fn_8018AF44();
extern "C" void fn_8018AF60();
extern "C" void fn_8018AFA4();
extern "C" void fn_8018AFAC();
extern "C" void fn_8018AFB4();
extern "C" void fn_8018AFD0();
extern "C" void fn_8018AFEC();
extern "C" void fn_8018B008();
extern "C" void fn_8018B088();
extern "C" void fn_8018B09C();
extern "C" void fn_8018B0E4();
extern "C" void fn_8018B100();
extern "C" void fn_8018B144();
extern "C" void fn_8018B14C();
extern "C" void fn_8018B154();
extern "C" void fn_8018B170();
extern "C" void fn_8018B18C();
extern "C" void fn_8018B1A8();
extern "C" void fn_8018B228();
extern "C" void fn_8018B23C();
extern "C" void fn_8018B284();
extern "C" void fn_8018B2A0();
extern "C" void fn_8018B2E4();
extern "C" void fn_8018B2EC();
extern "C" void fn_8018B2F4();
extern "C" void fn_8018B310();
extern "C" void fn_8018B32C();
extern "C" void fn_8018B578();
extern "C" void fn_8018B588();
extern "C" void fn_8018B5A0();
extern "C" void fn_8018B5D0();
extern "C" void fn_8018B600();
extern "C" void fn_8018B630();
extern "C" void fn_8018B634();
extern "C" void fn_8018B670();
extern "C" void fn_8018B6A4();
extern "C" void fn_8018B6AC();
extern "C" void fn_8018B6B4();
extern "C" void fn_8018B6BC();
extern "C" void fn_8018B6C4();
extern "C" void fn_8018B780();
extern "C" void fn_8018B784();
extern "C" void fn_8018B7B4();
extern "C" void fn_8018B7DC();
extern "C" void fn_8018B7E8();
extern "C" void fn_8018B808();
extern "C" void fn_8018B830();
extern "C" void fn_8018B858();
extern "C" void fn_8018B870();
extern "C" void fn_8018B888();
extern "C" void fn_8018B890();
extern "C" void fn_8018B898();
extern "C" void fn_8018B8D0();
extern "C" void fn_8018B908();
extern "C" void fn_8018B940();
extern "C" void fn_8018B948();
extern "C" void fn_8018B950();
extern "C" void fn_8018BA04();
extern "C" void fn_8018BA78();
extern "C" void fn_8018BB64();
extern "C" void fn_8018BD44();
extern "C" void fn_8018BDC8();
extern "C" void fn_8018BE8C();
extern "C" void fn_8018BED4();
extern "C" void fn_8018BED8();
extern "C" void fn_8018C004();
extern "C" void fn_8018C01C();
extern "C" void fn_8018C184();
extern "C" void fn_8018C38C();
extern "C" void fn_8018C434();
extern "C" void fn_8018C544();
extern "C" void fn_8018C6D0();
extern "C" void fn_8018C980();
extern "C" void fn_8018C9DC();
extern "C" void fn_8018CA80();
extern "C" void fn_8018CA8C();
extern "C" void fn_8018CA90();
extern "C" void fn_8018CA9C();
extern "C" void fn_8018CAB0();
extern "C" void fn_8018CAC0();
extern "C" void fn_8018CAF0();
extern "C" void fn_8018CB4C();
extern "C" void fn_8018CB84();
extern "C" void fn_8018CBAC();
extern "C" void fn_8018CBDC();
extern "C" void fn_8018CC00();
extern "C" void fn_8018CC1C();
extern "C" void fn_8018CDA0();
extern "C" void fn_8018CDB4();
extern "C" void fn_8018CFCC();
extern "C" void fn_8018D00C();
extern "C" void fn_8018D080();
extern "C" void fn_8018D090();
extern "C" void fn_8018D0B0();
extern "C" void fn_8018D0D0();
extern "C" void fn_8018D0EC();
extern "C" void fn_8018D16C();
extern "C" void fn_8018D180();
extern "C" void fn_8018D304();
extern "C" void fn_8018D364();
extern "C" void fn_8018D408();
extern "C" void fn_8018D55C();
extern "C" void fn_8018DD8C();
extern "C" void fn_8018DE10();
extern "C" void fn_8018E108();
extern "C" void fn_8018E114();
extern "C" void fn_8018E390();
extern "C" void fn_8018E470();
extern "C" void fn_8018E734();
extern "C" void fn_8018F600();
extern "C" void fn_8018F7B8();
extern "C" void fn_80193934();
extern "C" void fn_80195934();
extern "C" void fn_80197DB4();
extern "C" void fn_8019CC7C();
extern "C" void fn_801A3344();
extern "C" void fn_801A9384();
extern "C" void fn_801A9BA4();
extern "C" void fn_801A9C7C();
extern "C" void fn_801AA370();
extern "C" void fn_801AA55C();
extern "C" void fn_801AA568();
extern "C" void fn_801AA71C();
extern "C" void fn_801AA8B0();
extern "C" void fn_801AA94C();
extern "C" void fn_801AAA44();
extern "C" void fn_801AAAD4();
extern "C" void fn_801AAB64();
extern "C" void fn_801AAC04();
extern "C" void fn_801ACD98();
extern "C" void fn_801ACFD4();
extern "C" void fn_801B865C();
extern "C" void fn_801B866C();
extern "C" void fn_801B8A6C();
extern "C" void fn_801B8B8C();
extern "C" void fn_801B8E24();
extern "C" void fn_801B9068();
extern "C" void fn_801B9108();
extern "C" void fn_801B916C();
extern "C" void fn_801B920C();
extern "C" void fn_801BA190();
extern "C" void fn_801BA1A0();
extern "C" void fn_801BA1B4();
extern "C" void fn_801BA1DC();
extern "C" void fn_801BA208();
extern "C" void fn_801CE9C4();
extern "C" void fn_801CE9D4();
extern "C" void fn_801CE9EC();
extern "C" void fn_801CE9F8();
extern "C" void fn_801CFA28();
extern "C" void fn_801E2B68();
extern "C" void fn_801E93B8();
extern "C" void fn_801EDC60();
extern "C" void fn_801EDCBC();
extern "C" void fn_801EDD00();
extern "C" void fn_801F43C4();
extern "C" void fn_80201A84();
extern "C" void fn_80201AA8();
extern "C" void fn_8020B99C();
extern "C" void fn_80213774();
extern "C" void fn_802156E4();
extern "C" void fn_80215804();
extern "C" void fn_80217DE4();
extern "C" void fn_80217E5C();
extern "C" void fn_80218B14();
extern "C" void fn_80218B94();
extern "C" void fn_80222BAC();
extern "C" void fn_80222BC4();
extern "C" void fn_80222D54();
extern "C" void fn_80222DC0();
extern "C" void fn_80222DE0();
extern "C" void fn_8029AC1C();
extern "C" void fn_8029AD3C();
extern "C" void fn_8029AD58();
extern "C" void fn_8029BB20();
extern "C" void fn_8029BB74();
extern "C" void fn_802DFDF8();
extern "C" void fn_802E0688();
extern "C" void fn_802E06BC();
extern "C" void fn_802E0DC0();
extern "C" void fn_802E0DD0();
extern "C" void fn_802E0FF8();
extern "C" void fn_802E1ABC();
extern "C" void fn_802E1CE0();
extern "C" void fn_802E1D30();
extern "C" void fn_802E1D64();
extern "C" void fn_802E1DA0();
extern "C" void fn_802E1DE4();
extern "C" void fn_802E2ED8();
extern "C" void fn_802E2EFC();
extern "C" void fn_802E37E0();
extern "C" void fn_802E39C4();
extern "C" void fn_802E430C();
extern "C" void fn_802E432C();
extern "C" void fn_802E43CC();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4750();
extern "C" void fn_802E478C();
extern "C" void fn_802E4808();
extern "C" void fn_802E4840();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void fn_802E4A4C();
extern "C" void fn_802E4DD8();
extern "C" void fn_802E4EFC();
extern "C" void fn_802E4F4C();
extern "C" void fn_802E4F78();
extern "C" void fn_802E4FA4();
extern "C" void fn_802E4FD8();
extern "C" void fn_802E50DC();
extern "C" void fn_802E51B0();
extern "C" void fn_802E5264();
extern "C" void fn_802E5314();
extern "C" void fn_802E5554();
extern "C" void fn_802E574C();
extern "C" void fn_802E576C();
extern "C" void fn_802E59DC();
extern "C" void fn_8030C478();
extern "C" void fn_8030D448();
extern "C" void fn_8030DA54();
extern "C" void fn_8031C828();
extern "C" void fn_8031CDF0();
extern "C" void fn_8031D460();
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void* memset(void*, int, unsigned int);
extern "C" int sprintf(char*, const char*, ...);
extern "C" char* strcpy(char*, const char*);
extern "C" unsigned int strlen(const char*);

extern "C" u8 fn_8018DA70[];
extern "C" u8 fn_801A971C[];
extern "C" u8 fn_801A9780[];
extern "C" u8 fn_801AADB4[];
extern "C" u8 fn_801AAE0C[];
extern "C" u8 fn_801B5504[];
extern "C" u8 fn_801B5514[];
extern "C" u8 fn_801B6324[];
extern "C" u8 fn_801B6628[];
extern "C" u8 lbl_8035EC58[];
extern "C" u8 lbl_8035ECA0[];
extern "C" u8 lbl_8035EDC0[];
extern "C" u8 lbl_8035EE4C[];
extern "C" u8 lbl_8035EE88[];
extern "C" u8 lbl_8035EECC[];
extern "C" u8 lbl_8035EF08[];
extern "C" u8 lbl_8035EF48[];
extern "C" u8 lbl_8035EFD0[];
extern "C" u8 lbl_8035F060[];
extern "C" u8 lbl_8035F074[];
extern "C" u8 lbl_8035F0C4[];
extern "C" u8 lbl_8035F0D8[];
extern "C" u8 lbl_8035F200[];
extern "C" u8 lbl_8035F214[];
extern "C" u8 lbl_8035F244[];
extern "C" u8 lbl_8035F258[];
extern "C" u8 lbl_8035F274[];
extern "C" u8 lbl_8035F288[];
extern "C" u8 lbl_8035F3B8[];
extern "C" u8 lbl_80390580[];
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];
extern "C" u8 lbl_803D1CB0[];
extern "C" u8 lbl_803D1CC8[];
extern "C" u8 lbl_803D1F08[];
extern "C" u8 lbl_803D1FBC[];
extern "C" u8 lbl_803D2154[];
extern "C" u8 lbl_803D224C[];
extern "C" u8 lbl_803D3278[];
extern "C" u8 lbl_803D3590[];
extern "C" u8 lbl_803D35B0[];

// SDA21 variables
extern "C" u32 lbl_8049C3A8;
extern "C" u32 lbl_8049D838;
extern "C" u32 lbl_8049D83C;
extern "C" u32 lbl_8049D840;
extern "C" u32 lbl_8049D844;
extern "C" u32 lbl_8049D848;
extern "C" u32 lbl_8049D84C;
extern "C" u32 lbl_8049D850;
extern "C" u32 lbl_8049D854;
extern "C" u32 lbl_8049D858;
extern "C" u32 lbl_8049D860;
extern "C" u32 lbl_8049D864;
extern "C" u32 lbl_8049D868;
extern "C" u32 lbl_8049D86C;
extern "C" u32 lbl_8049D870;
extern "C" u32 lbl_8049D874;
extern "C" u32 lbl_8049D878;
extern "C" u32 lbl_8049D87C;
extern "C" u32 lbl_8049D880;
extern "C" u32 lbl_8049D888;
extern "C" u32 lbl_8049D88C;
extern "C" u32 lbl_8049D890;
extern "C" u32 lbl_8049D894;
extern "C" u32 lbl_8049D898;
extern "C" u32 lbl_8049D89C;
extern "C" float lbl_804A1028;
extern "C" double lbl_804A1048;
extern "C" double lbl_804A1050;
extern "C" float lbl_804A1058;
extern "C" double lbl_804A1078;
extern "C" double lbl_804A1080;
extern "C" float lbl_804A1088;
extern "C" float lbl_804A10A0;

extern "C" asm void fn_80186C78() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_28
    mr r6, r3
    mr r30, r5
    li r31, 0x0
    lis r3, lbl_803D1CB0@ha
    lwz r0, lbl_803D1CB0@l(r3)
    or r29, r4, r0
    rlwinm r0, r29, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80186CC8
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    bl fn_80166894
    b lbl_80186E64
lbl_80186CC8:
    rlwinm r0, r29, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80186CF0
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x5
    bl fn_80166894
    b lbl_80186E64
lbl_80186CF0:
    rlwinm r0, r29, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80186D18
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0xc
    bl fn_80166894
    b lbl_80186E64
lbl_80186D18:
    rlwinm r0, r29, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80186D40
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x13
    bl fn_80166894
    b lbl_80186E64
lbl_80186D40:
    rlwinm r0, r29, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80186D68
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x1a
    bl fn_80166894
    b lbl_80186E64
lbl_80186D68:
    rlwinm r0, r29, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80186D90
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x21
    bl fn_80166894
    b lbl_80186E64
lbl_80186D90:
    rlwinm r0, r29, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80186DB8
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x26
    bl fn_80166894
    b lbl_80186E64
lbl_80186DB8:
    rlwinm r0, r29, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80186DE0
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x2b
    bl fn_80166894
    b lbl_80186E64
lbl_80186DE0:
    rlwinm r0, r29, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80186E08
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x32
    bl fn_80166894
    b lbl_80186E64
lbl_80186E08:
    rlwinm r0, r29, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80186E30
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x39
    bl fn_80166894
    b lbl_80186E64
lbl_80186E30:
    rlwinm r0, r29, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80186E58
    addi r3, r1, 0x8
    mr r4, r6
    lis r5, lbl_8035EC58@ha
    addi r5, r5, lbl_8035EC58@l
    addi r5, r5, 0x3e
    bl fn_80166894
    b lbl_80186E64
lbl_80186E58:
    addi r3, r1, 0x8
    mr r4, r6
    bl strcpy
lbl_80186E64:
    addi r3, r1, 0x8
    bl fn_80167138
    clrrwi r0, r29, 31
    cmpwi r0, 0x0
    beq lbl_80186EA0
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187794
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80186EA0
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D8
lbl_80186EA0:
    lis r3, 0x2000
    addi r0, r3, 0x9fe
    and r0, r29, r0
    cmpwi r0, 0x0
    bne lbl_80186EC0
    addi r3, r1, 0x8
    bl fn_8018738C
    mr r29, r3
lbl_80186EC0:
    rlwinm r0, r29, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80186F1C
    addi r3, r1, 0x8
    mr r4, r30
    rlwinm r5, r29, 0, 1, 1
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80186EF0
    li r3, 0x0
    b lbl_801872D8
lbl_80186EF0:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x2
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_80186F1C:
    rlwinm r5, r29, 0, 29, 29
    cmpwi r5, 0x0
    beq lbl_80186F68
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80186F48
    li r3, 0x0
    b lbl_801872D8
lbl_80186F48:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    mr r4, r29
    mr r5, r30
    mr r6, r28
    bl fn_80186BA0
    b lbl_801872D4
lbl_80186F68:
    rlwinm r5, r29, 0, 28, 28
    cmpwi r5, 0x0
    beq lbl_80186FC0
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80186F94
    li r3, 0x0
    b lbl_801872D8
lbl_80186F94:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x8
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_80186FC0:
    rlwinm r5, r29, 0, 27, 27
    cmpwi r5, 0x0
    beq lbl_80187018
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80186FEC
    li r3, 0x0
    b lbl_801872D8
lbl_80186FEC:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x10
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_80187018:
    rlwinm r5, r29, 0, 26, 26
    cmpwi r5, 0x0
    beq lbl_80187070
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80187044
    li r3, 0x0
    b lbl_801872D8
lbl_80187044:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x20
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_80187070:
    rlwinm r5, r29, 0, 25, 25
    cmpwi r5, 0x0
    beq lbl_801870C8
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_8018709C
    li r3, 0x0
    b lbl_801872D8
lbl_8018709C:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x40
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_801870C8:
    rlwinm r5, r29, 0, 24, 24
    cmpwi r5, 0x0
    beq lbl_8018711C
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_801870F4
    li r3, 0x0
    b lbl_801872D8
lbl_801870F4:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    mr r4, r29
    mr r5, r30
    mr r6, r28
    bl fn_80186C44
    mr r3, r28
    bl fn_80185FAC
    b lbl_801872D4
lbl_8018711C:
    rlwinm r5, r29, 0, 23, 23
    cmpwi r5, 0x0
    beq lbl_80187174
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80187148
    li r3, 0x0
    b lbl_801872D8
lbl_80187148:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x100
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_80187174:
    rlwinm r5, r29, 0, 22, 22
    cmpwi r5, 0x0
    beq lbl_801871CC
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_801871A0
    li r3, 0x0
    b lbl_801872D8
lbl_801871A0:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x200
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_801871CC:
    rlwinm r5, r29, 0, 20, 20
    cmpwi r5, 0x0
    beq lbl_80187224
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_801871F8
    li r3, 0x0
    b lbl_801872D8
lbl_801871F8:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x800
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_80187224:
    rlwinm r5, r29, 0, 19, 19
    cmpwi r5, 0x0
    beq lbl_8018727C
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80187250
    li r3, 0x0
    b lbl_801872D8
lbl_80187250:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x1000
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
    b lbl_801872D4
lbl_8018727C:
    rlwinm r0, r29, 0, 2, 2
    cmpwi r0, 0x0
    beq lbl_801872D4
    addi r3, r1, 0x8
    mr r4, r30
    li r5, 0x0
    bl fn_80187814
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_801872AC
    li r3, 0x0
    b lbl_801872D8
lbl_801872AC:
    addi r3, r1, 0x8
    bl fn_80186AEC
    mr r31, r3
    stw r28, 0x5c(r3)
    stw r30, 0x8(r3)
    li r0, 0x0
    sth r0, 0x4(r3)
    stw r29, 0x0(r3)
    li r0, 0x1
    stw r0, 0xc(r3)
lbl_801872D4:
    mr r3, r31
lbl_801872D8:
    addi r11, r1, 0x120
    bl _restgpr_28
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

extern "C" asm void fn_801872F0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r0, r3
    mr r31, r4
    addi r3, r1, 0x8
    mr r4, r0
    bl fn_80016E44
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_801CFA28
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80187334() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl strlen
    cmpwi r3, 0x3f
    ble lbl_80187368
    add r3, r3, r31
    subi r31, r3, 0x3f
lbl_80187368:
    mr r3, r30
    mr r4, r31
    bl fn_8019CC7C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018738C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r4, 0x2e
    bl fn_80167154
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80187778
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x2e
    bne lbl_80187778
    lbz r30, 0x1(r3)
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x73
    bne lbl_80187408
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x65
    bne lbl_80187408
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x71
    bne lbl_80187408
    li r3, 0x2
    b lbl_8018777C
lbl_80187408:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x62
    bne lbl_80187470
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_80187470
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_80187470
    lbz r3, 0x4(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x65
    bne lbl_80187470
    lbz r3, 0x5(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x73
    bne lbl_80187470
    li r3, 0x4
    b lbl_8018777C
lbl_80187470:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x62
    bne lbl_801874D8
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_801874D8
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x65
    bne lbl_801874D8
    lbz r3, 0x4(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x66
    bne lbl_801874D8
    lbz r3, 0x5(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x66
    bne lbl_801874D8
    li r3, 0x10
    b lbl_8018777C
lbl_801874D8:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x62
    bne lbl_80187540
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_80187540
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x65
    bne lbl_80187540
    lbz r3, 0x4(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x66
    bne lbl_80187540
    lbz r3, 0x5(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x74
    bne lbl_80187540
    li r3, 0x20
    b lbl_8018777C
lbl_80187540:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x62
    bne lbl_801875A8
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_801875A8
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x74
    bne lbl_801875A8
    lbz r3, 0x4(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x65
    bne lbl_801875A8
    lbz r3, 0x5(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x78
    bne lbl_801875A8
    li r3, 0x8
    b lbl_8018777C
lbl_801875A8:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x63
    bne lbl_801875E8
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x6f
    bne lbl_801875E8
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x6c
    bne lbl_801875E8
    li r3, 0x40
    b lbl_8018777C
lbl_801875E8:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x6d
    bne lbl_80187628
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x6f
    bne lbl_80187628
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x74
    bne lbl_80187628
    li r3, 0x80
    b lbl_8018777C
lbl_80187628:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x62
    bne lbl_80187690
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_80187690
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x73
    bne lbl_80187690
    lbz r3, 0x4(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x63
    bne lbl_80187690
    lbz r3, 0x5(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x61
    bne lbl_80187690
    li r3, 0x100
    b lbl_8018777C
lbl_80187690:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x62
    bne lbl_801876F8
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_801876F8
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x70
    bne lbl_801876F8
    lbz r3, 0x4(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x6c
    bne lbl_801876F8
    lbz r3, 0x5(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x74
    bne lbl_801876F8
    li r3, 0x200
    b lbl_8018777C
lbl_801876F8:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x61
    bne lbl_80187738
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x72
    bne lbl_80187738
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x63
    bne lbl_80187738
    li r3, 0x800
    b lbl_8018777C
lbl_80187738:
    extsb r3, r30
    bl fn_80197DB4
    cmpwi r3, 0x74
    bne lbl_80187778
    lbz r3, 0x2(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x70
    bne lbl_80187778
    lbz r3, 0x3(r31)
    extsb r3, r3
    bl fn_80197DB4
    cmpwi r3, 0x6c
    bne lbl_80187778
    li r3, 0x1000
    b lbl_8018777C
lbl_80187778:
    li r3, 0x0
lbl_8018777C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80187794() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    lis r3, lbl_803D1CB0@ha
    addi r3, r3, lbl_803D1CB0@l
    lwz r30, 0x14(r3)
    b lbl_801877EC
lbl_801877C0:
    lwz r0, 0x8(r31)
    cmplw r0, r29
    bne lbl_801877E8
    addi r3, r31, 0x1c
    mr r4, r28
    bl fn_80187334
    cmpwi r3, 0x0
    bne lbl_801877E8
    mr r3, r31
    b lbl_801877FC
lbl_801877E8:
    lwz r30, 0x8(r30)
lbl_801877EC:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_801877C0
    li r3, 0x0
lbl_801877FC:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80187814() {
    nofralloc
    rlwinm r0, r5, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_80187828
    li r5, 0x0
    b fn_80166638
lbl_80187828:
    li r5, 0x0
    b fn_801665A8
}

extern "C" asm void fn_80187830() {
    nofralloc
    mr r8, r3
    li r3, 0x100
    li r4, 0x100
    li r5, 0x100
    li r6, 0x9c4
    li r7, 0x3
    b fn_8018784C
}

extern "C" asm void fn_8018784C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_21
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    lwz r0, lbl_8049D838
    cmpwi r0, 0x0
    beq lbl_80187890
    li r3, 0x1
    b lbl_80187A4C
lbl_80187890:
    lwz r0, lbl_8049D840
    cmpwi r0, 0x0
    beq lbl_801878A4
    li r3, 0x1
    b lbl_80187A4C
lbl_801878A4:
    clrlwi r3, r3, 16
    clrlwi r4, r4, 16
    clrlwi r5, r5, 16
    clrlwi r6, r6, 16
    bl fn_8018A7B0
    addi r0, r3, 0x1f
    clrrwi r30, r0, 5
    addi r3, r30, 0xc60
    bl fn_80170DFC
    stw r3, lbl_8049D838
    addi r4, r30, 0xc60
    bl DCFlushRange
    lwz r0, lbl_8049D838
    cmpwi r0, 0x0
    bne lbl_801878E8
    li r3, 0x2
    b lbl_80187A4C
lbl_801878E8:
    li r3, 0x100
    li r4, 0x54
    bl fn_80171130
    stw r3, lbl_8049D844
    li r3, 0x101
    li r4, 0x4
    bl fn_80171130
    stw r3, lbl_8049D848
    li r0, 0x0
    stw r0, lbl_8049D850
    stw r0, lbl_8049D854
    stw r0, lbl_8049D858
    lwz r0, lbl_8049D844
    cmpwi r0, 0x0
    beq lbl_8018792C
    cmpwi r3, 0x0
    bne lbl_80187964
lbl_8018792C:
    cmpwi r0, 0x0
    beq lbl_80187944
    mr r3, r0
    bl fn_80170E18
    li r0, 0x0
    stw r0, lbl_8049D844
lbl_80187944:
    lwz r3, lbl_8049D848
    cmpwi r3, 0x0
    beq lbl_8018795C
    bl fn_80170E18
    li r0, 0x0
    stw r0, lbl_8049D848
lbl_8018795C:
    li r3, 0x2
    b lbl_80187A4C
lbl_80187964:
    lwz r22, lbl_8049D838
    addi r21, r22, 0x40
    li r3, 0x3c
    mr r4, r22
    bl fn_8003D59C
    mr r23, r3
    cmpwi r23, 0x0
    beq lbl_801879C4
    stw r1, 0x1c(r31)
    mr r4, r21
    mr r5, r30
    mr r6, r24
    mr r7, r25
    mr r8, r26
    mr r9, r27
    bl fn_80189E30
    b lbl_801879C4
    mr r3, r23
    mr r4, r22
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_801879C4:
    stw r23, lbl_8049D83C
    bl fn_801AA55C
    lwz r4, lbl_8049D83C
    mr r5, r28
    bl fn_80189DE8
    cmpwi r29, 0x0
    beq lbl_801879E4
    stw r30, 0x0(r29)
lbl_801879E4:
    li r0, 0x1
    stw r0, lbl_8049D840
    li r22, 0x0
    b lbl_80187A28
lbl_801879F4:
    li r24, 0x0
    mulli r4, r22, 0x60
    lis r3, lbl_803D1CC8@ha
    addi r0, r3, lbl_803D1CC8@l
    add r23, r0, r4
    b lbl_80187A1C
lbl_80187A0C:
    mulli r0, r24, 0xc
    add r3, r23, r0
    bl fn_80019D5C
    addi r24, r24, 0x1
lbl_80187A1C:
    cmpwi r24, 0x8
    blt lbl_80187A0C
    addi r22, r22, 0x1
lbl_80187A28:
    cmpwi r22, 0x6
    blt lbl_801879F4
    lwz r0, lbl_8049D838
    add r3, r0, r30
    addi r0, r3, 0x40
    stw r0, lbl_8049D84C
    li r0, 0x1
    stw r0, lbl_8049C3A8
    li r3, 0x0
lbl_80187A4C:
    mr r10, r31
    addi r11, r10, 0x50
    bl _restgpr_21
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

extern "C" asm void fn_80187A6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, lbl_8049C3A8
    lwz r3, lbl_8049D848
    bl fn_80019D70
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80187AA0
    li r3, 0x0
    b lbl_80187B44
lbl_80187AA0:
    lwz r3, lbl_8049C3A8
    b lbl_80187ACC
lbl_80187AA8:
    li r4, 0x1
    li r5, 0x1
    li r6, 0x100
    bl fn_8017291C
    stw r3, lbl_8049C3A8
    cmpw r3, r30
    bne lbl_80187ACC
    li r3, 0x0
    b lbl_80187B44
lbl_80187ACC:
    lwz r5, lbl_8049D84C
    slwi r4, r3, 2
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    bne lbl_80187AA8
    stwx r31, r5, r4
    lwz r3, lbl_8049D84C
    lwz r0, lbl_8049C3A8
    slwi r0, r0, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    beq lbl_80187B40
    li r4, 0x0
    stw r4, 0x0(r3)
    lwz r5, lbl_8049C3A8
    lwz r3, lbl_8049D84C
    slwi r0, r5, 2
    lwzx r3, r3, r0
    stw r5, 0x4(r3)
    lwz r3, lbl_8049D84C
    lwz r0, lbl_8049C3A8
    slwi r0, r0, 2
    lwzx r3, r3, r0
    stw r4, 0x8(r3)
    lwz r3, lbl_8049D84C
    lwz r0, lbl_8049C3A8
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_80187B44
lbl_80187B40:
    li r3, 0x0
lbl_80187B44:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80187B5C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmpwi r3, 0x0
    blt lbl_80187B7C
    cmpwi r3, 0x100
    ble lbl_80187B84
lbl_80187B7C:
    li r3, 0x0
    b lbl_80187BE8
lbl_80187B84:
    slwi r31, r3, 2
    lwz r3, lbl_8049D84C
    lwzx r4, r3, r31
    cmpwi r4, 0x0
    bne lbl_80187BA0
    li r3, 0x0
    b lbl_80187BE8
lbl_80187BA0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_80187BB4
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80187BB4:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x1
    ble lbl_80187BD0
    subi r0, r3, 0x1
    stw r0, 0x0(r4)
    li r3, 0x0
    b lbl_80187BE8
lbl_80187BD0:
    lwz r3, lbl_8049D848
    bl fn_80019D94
    li r0, 0x0
    lwz r3, lbl_8049D84C
    stwx r0, r3, r31
    li r3, 0x1
lbl_80187BE8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80187BFC() {
    nofralloc
    li r3, 0x0
    mr r5, r3
    li r0, 0x101
    mtctr r0
lbl_80187C0C:
    lwz r4, lbl_8049D84C
    stwx r5, r4, r3
    addi r3, r3, 0x4
    bdnz lbl_80187C0C
    blr
}

extern "C" asm void fn_80187C20() {
    nofralloc
    cmpwi r3, 0x0
    blt lbl_80187C30
    cmpwi r3, 0x100
    ble lbl_80187C38
lbl_80187C30:
    li r3, 0x0
    blr
lbl_80187C38:
    lwz r4, lbl_8049D84C
    slwi r0, r3, 2
    lwzx r3, r4, r0
    blr
}

extern "C" asm void fn_80187C48() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D840
    cmpwi r0, 0x0
    beq lbl_80187CC8
    bl fn_80188874
    bl fn_801883F8
    bl fn_80188454
    bl fn_8018839C
    bl fn_80187D60
    bl fn_80187BFC
    lwz r3, lbl_8049D844
    cmpwi r3, 0x0
    beq lbl_80187C90
    bl fn_80170E18
    li r0, 0x0
    stw r0, lbl_8049D844
lbl_80187C90:
    lwz r3, lbl_8049D848
    cmpwi r3, 0x0
    beq lbl_80187CA8
    bl fn_80170E18
    li r0, 0x0
    stw r0, lbl_8049D848
lbl_80187CA8:
    lwz r3, lbl_8049D838
    cmpwi r3, 0x0
    beq lbl_80187CC0
    bl fn_80170E18
    li r0, 0x0
    stw r0, lbl_8049D838
lbl_80187CC0:
    li r0, 0x0
    stw r0, lbl_8049D840
lbl_80187CC8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80187CD8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80187D4C
    lwz r4, lbl_8049D84C
    lwz r0, 0x50(r3)
    slwi r0, r0, 2
    lwzx r3, r4, r0
    cmpwi r3, 0x0
    beq lbl_80187D14
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_80187D14:
    addi r3, r1, 0x8
    bl fn_8018B5D0
    mr r4, r3
    addi r3, r31, 0x10
    bl fn_8018B5A0
    lwz r3, 0x50(r31)
    bl fn_80187B5C
    cmpwi r3, 0x0
    beq lbl_80187D4C
    addi r3, r31, 0x4
    bl fn_8002211C
    lwz r3, lbl_8049D844
    mr r4, r31
    bl fn_80019D94
lbl_80187D4C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80187D60() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8049D838
    cmpwi r0, 0x0
    beq lbl_80187D90
    bl fn_801B866C
    mr r31, r3
    bl fn_801B9108
    mr r3, r31
    bl fn_801B920C
lbl_80187D90:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80187DA4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_801B866C
    mr r31, r3
    mr r3, r29
    li r4, 0x10
    mr r5, r30
    bl fn_80186C78
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80187E28
    mr r3, r31
    lwz r4, 0x5c(r4)
    bl fn_801B8A6C
    mr r3, r29
    li r4, 0x20
    mr r5, r30
    bl fn_80186C78
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80187E28
    mr r3, r31
    lwz r4, 0x5c(r4)
    bl fn_801B8B8C
    mr r3, r31
    bl fn_801B8E24
    bl fn_802E0DC0
    bl fn_802E39C4
lbl_80187E28:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80187E40() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r28, r5
    mr r29, r6
    bl fn_801B866C
    mr r30, r3
    cmpwi r28, 0x0
    beq lbl_80187E7C
    cmpwi r29, 0x0
    bne lbl_80187E84
lbl_80187E7C:
    li r3, 0x0
    b lbl_80187EE4
lbl_80187E84:
    li r0, 0x0
    stw r0, 0x0(r29)
    stw r0, 0x0(r28)
    mr r3, r27
    bl fn_8018807C
    cmpwi r3, 0x0
    ble lbl_80187EA8
    li r3, 0x0
    b lbl_80187EE4
lbl_80187EA8:
    mr r3, r27
    li r4, 0x10
    mr r5, r31
    bl fn_80186C78
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80187ECC
    li r3, 0x0
    b lbl_80187EE4
lbl_80187ECC:
    mr r3, r30
    lwz r4, 0x5c(r31)
    bl fn_801B8A6C
    stw r31, 0x0(r28)
    stw r3, 0x0(r29)
    li r3, 0x1
lbl_80187EE4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80187EFC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r31, r4
    mr r28, r5
    mr r29, r6
    bl fn_801B866C
    mr r30, r3
    cmpwi r28, 0x0
    beq lbl_80187F38
    cmpwi r29, 0x0
    bne lbl_80187F40
lbl_80187F38:
    li r3, 0x0
    b lbl_80187FA0
lbl_80187F40:
    li r0, 0x0
    stw r0, 0x0(r29)
    stw r0, 0x0(r28)
    mr r3, r27
    bl fn_801880FC
    cmpwi r3, 0x0
    ble lbl_80187F64
    li r3, 0x0
    b lbl_80187FA0
lbl_80187F64:
    mr r3, r27
    li r4, 0x20
    mr r5, r31
    bl fn_80186C78
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80187F88
    li r3, 0x0
    b lbl_80187FA0
lbl_80187F88:
    mr r3, r30
    lwz r4, 0x5c(r31)
    bl fn_801B8B8C
    stw r31, 0x0(r28)
    stw r3, 0x0(r29)
    li r3, 0x1
lbl_80187FA0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80187FB8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_801B866C
    bl fn_801B8E24
    mr r31, r3
    bl fn_802E0DC0
    bl fn_802E39C4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80187FF4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801B866C
    cmpwi r31, 0x0
    beq lbl_80188020
    mr r4, r31
    bl fn_801B9068
    b lbl_80188024
lbl_80188020:
    li r3, 0x0
lbl_80188024:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80188038() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801B866C
    cmpwi r31, 0x0
    beq lbl_80188064
    mr r4, r31
    bl fn_801B916C
    b lbl_80188068
lbl_80188064:
    li r3, 0x0
lbl_80188068:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018807C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    bl fn_801B866C
    mr r31, r3
    li r29, 0x0
    bl fn_8018B6B4
    mr r30, r3
    b lbl_801880D8
lbl_801880AC:
    mr r3, r30
    bl fn_8018B6A4
    mr r4, r28
    bl fn_8019CC7C
    cmpwi r3, 0x0
    bne lbl_801880C8
    addi r29, r29, 0x1
lbl_801880C8:
    mr r3, r31
    mr r4, r30
    bl fn_80222DE0
    mr r30, r3
lbl_801880D8:
    cmpwi r30, 0x0
    bne lbl_801880AC
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801880FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    bl fn_801B866C
    mr r31, r3
    li r29, 0x0
    addi r3, r3, 0x10
    bl fn_8018B6B4
    mr r30, r3
    b lbl_8018815C
lbl_80188130:
    mr r3, r30
    bl fn_8018B6AC
    mr r4, r28
    bl fn_8019CC7C
    cmpwi r3, 0x0
    bne lbl_8018814C
    addi r29, r29, 0x1
lbl_8018814C:
    mr r3, r31
    mr r4, r30
    bl fn_80222DE0
    mr r30, r3
lbl_8018815C:
    cmpwi r30, 0x0
    bne lbl_80188130
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80188180() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r24, r3
    mr r30, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    bl fn_801AA55C
    mr r29, r3
    bl fn_80189E10
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r31, r3
    bl fn_80187A6C
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_801881E0
    li r3, 0x0
    b lbl_80188328
lbl_801881E0:
    cmpwi r31, 0x100
    blt lbl_801881F0
    li r3, 0x0
    b lbl_80188328
lbl_801881F0:
    lwz r3, lbl_8049C3A8
    li r4, 0x1
    li r5, 0x1
    li r6, 0x100
    bl fn_8017291C
    stw r3, lbl_8049C3A8
    cmplwi r24, 0x4d
    ble lbl_80188218
    li r3, 0x0
    b lbl_80188328
lbl_80188218:
    cmpwi r30, 0x0
    bge lbl_80188228
    li r3, 0x0
    b lbl_80188328
lbl_80188228:
    addi r3, r1, 0x8
    lis r4, lbl_8035F288@ha
    addi r4, r4, lbl_8035F288@l
    addi r4, r4, 0x122
    slwi r0, r24, 2
    lis r5, lbl_8035ECA0@ha
    addi r5, r5, lbl_8035ECA0@l
    lwzx r5, r5, r0
    mr r6, r30
    opword 0x4CC63182
    bl sprintf
    mr r3, r25
    mr r4, r26
    li r5, 0x0
    bl fn_80188924
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80188324
    li r31, 0x0
    stw r31, 0x18(r3)
    stw r26, 0x1c(r3)
    stw r25, 0x20(r3)
    stw r27, 0x24(r3)
    stw r31, 0x28(r3)
    addi r3, r3, 0x2c
    lfs f1, lbl_804A1028
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    stw r31, 0x38(r30)
    la r3, lbl_804A1028
    lfs f0, 0x4(r3)
    stfs f0, 0x3c(r30)
    stfs f0, 0x40(r30)
    mr r3, r29
    addi r4, r1, 0x8
    li r5, 0x2
    li r6, 0x0
    bl fn_801AA71C
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_801882F0
    addi r3, r30, 0x10
    bl fn_8018B600
    lwz r0, 0x4(r28)
    stw r0, 0x50(r30)
    li r0, 0x1
    stw r0, 0x0(r28)
    stw r30, 0x8(r28)
    b lbl_80188324
lbl_801882F0:
    addi r3, r30, 0x4
    bl fn_8002211C
    lwz r3, lbl_8049D844
    mr r4, r30
    bl fn_80019D94
    lwz r3, lbl_8049D848
    mr r4, r28
    bl fn_80019D94
    lwz r3, lbl_8049D84C
    lwz r0, 0x4(r28)
    slwi r0, r0, 2
    stwx r31, r3, r0
    li r28, 0x0
lbl_80188324:
    mr r3, r28
lbl_80188328:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

extern "C" asm void fn_80188340() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_801AA55C
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_80188384
    mr r3, r30
    bl fn_801A9BA4
    mr r3, r30
    bl fn_801A9C7C
    mr r3, r31
    mr r4, r30
    bl fn_801AA8B0
lbl_80188384:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018839C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    bl fn_801AA55C
    mr r29, r3
    li r30, 0x0
    addis r31, r3, 0x1
    b lbl_801883D4
lbl_801883C4:
    mr r3, r29
    mr r4, r30
    bl fn_801AA94C
    addi r30, r30, 0x1
lbl_801883D4:
    lwz r0, -0x3fec(r31)
    cmplw r30, r0
    blt lbl_801883C4
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801883F8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    bl fn_801AA55C
    mr r29, r3
    li r30, 0x0
    addis r31, r3, 0x1
    b lbl_80188430
lbl_80188420:
    mr r3, r29
    mr r4, r30
    bl fn_801AAA44
    addi r30, r30, 0x1
lbl_80188430:
    lwz r0, -0x3fec(r31)
    cmplw r30, r0
    blt lbl_80188420
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80188454() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    bl fn_801AA55C
    mr r29, r3
    li r30, 0x0
    addis r31, r3, 0x1
    b lbl_8018848C
lbl_8018847C:
    mr r3, r29
    mr r4, r30
    bl fn_801AAAD4
    addi r30, r30, 0x1
lbl_8018848C:
    lwz r0, -0x3fec(r31)
    cmplw r30, r0
    blt lbl_8018847C
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801884B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_801AA55C
    mr r31, r3
    addis r3, r3, 0x1
    lwz r0, -0x3fec(r3)
    cmplw r29, r0
    bgt lbl_8018850C
    cmplw r30, r0
    ble lbl_80188504
    b lbl_8018850C
    b lbl_80188504
lbl_801884F4:
    mr r3, r31
    mr r4, r29
    bl fn_801AAA44
    addi r29, r29, 0x1
lbl_80188504:
    cmpw r29, r30
    ble lbl_801884F4
lbl_8018850C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80188524() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_801AA55C
    mr r31, r3
    addis r3, r3, 0x1
    lwz r0, -0x3fec(r3)
    cmplw r29, r0
    bgt lbl_80188580
    cmplw r30, r0
    ble lbl_80188578
    b lbl_80188580
    b lbl_80188578
lbl_80188568:
    mr r3, r31
    mr r4, r29
    bl fn_801AAAD4
    addi r29, r29, 0x1
lbl_80188578:
    cmpw r29, r30
    ble lbl_80188568
lbl_80188580:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80188598() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801AA55C
    mr r4, r31
    bl fn_80189E18
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_801885CC() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    lwz r0, lbl_8049D840
    cmpwi r0, 0x0
    beq lbl_801886B4
    bl fn_801AA55C
    mr r31, r3
    addis r3, r3, 0x1
    lwz r0, -0x3fec(r3)
    cmplw r28, r0
    bgt lbl_801886B4
    cmplw r29, r0
    ble lbl_80188618
    b lbl_801886B4
lbl_80188618:
    li r3, 0x0
    bl fn_80016CAC
    mr r30, r3
    addi r3, r1, 0x18
    bl fn_8002AE40
    addi r3, r1, 0x8
    addi r4, r30, 0x4
    bl fn_8012B7A4
    addi r3, r1, 0x18
    bl fn_8002AE08
    addi r3, r1, 0x18
    bl fn_8002AE3C
    mr r4, r30
    bl fn_8017B004
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x18
    lfs f1, 0x40(r30)
    lfs f2, 0x44(r30)
    bl fn_801AAC04
    li r3, 0x0
    bl fn_801893C4
    cmpwi r3, 0x0
    bne lbl_80188698
    b lbl_80188690
lbl_8018867C:
    mr r3, r31
    mr r4, r28
    li r5, 0x0
    bl fn_801AAB64
    addi r28, r28, 0x1
lbl_80188690:
    cmpw r28, r29
    ble lbl_8018867C
lbl_80188698:
    li r31, 0x0
lbl_8018869C:
    li r3, 0x0
    mr r4, r31
    bl fn_80188ABC
    addi r31, r31, 0x1
    cmpwi r31, 0x8
    blt lbl_8018869C
lbl_801886B4:
    addi r11, r1, 0x60
    bl _restgpr_28
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

extern "C" asm void fn_801886CC() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    mr r29, r3
    lwz r0, lbl_8049D840
    cmpwi r0, 0x0
    beq lbl_80188768
    cmpwi r3, 0x0
    beq lbl_80188768
    bl fn_801AA55C
    mr r31, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r30, r3
    addi r3, r1, 0x18
    bl fn_8002AE40
    addi r3, r1, 0x8
    addi r4, r30, 0x4
    bl fn_8012B7A4
    addi r3, r1, 0x18
    bl fn_8002AE08
    addi r3, r1, 0x18
    bl fn_8002AE3C
    mr r4, r30
    bl fn_8017B004
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x18
    lfs f1, 0x40(r30)
    lfs f2, 0x44(r30)
    bl fn_801AAC04
    mr r3, r29
    li r4, 0x0
    lwz r12, 0x1c(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
lbl_80188768:
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

extern "C" asm void fn_80188780() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    lwz r0, lbl_8049D840
    cmpwi r0, 0x0
    beq lbl_801887E0
    cmpwi r3, 0x0
    beq lbl_801887E0
    addi r3, r1, 0x8
    bl fn_8018B6C4
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x1c(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    bl fn_802E59DC
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl fn_802E4FA4
lbl_801887E0:
    lwz r31, 0xac(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

extern "C" asm void fn_801887F4() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8018B6C4
    addi r3, r1, 0x10
    bl fn_8002AE40
    mr r3, r31
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0xc
    addi r4, r1, 0x10
    bl fn_801E93B8
    mr r3, r30
    addi r4, r1, 0x10
    bl fn_8018B780
    li r3, 0x7ff
    bl fn_801E2B68
    bl fn_8018C980
    bl fn_8018C9DC
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

extern "C" asm void fn_80188874() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r31, 0x0
lbl_8018888C:
    li r30, 0x0
lbl_80188890:
    mr r3, r31
    mr r4, r30
    bl fn_801888CC
    addi r30, r30, 0x1
    cmpwi r30, 0x8
    blt lbl_80188890
    addi r31, r31, 0x1
    cmpwi r31, 0x6
    blt lbl_8018888C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_801888CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r5, lbl_803D1CC8@ha
    addi r5, r5, lbl_803D1CC8@l
    mulli r0, r3, 0x60
    add r3, r5, r0
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r31, 0x8(r3)
    b lbl_80188904
lbl_801888FC:
    bl fn_801889D0
    lwz r31, 0x8(r31)
lbl_80188904:
    lwz r3, 0x0(r31)
    cmplwi r3, 0x1
    bne lbl_801888FC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80188924() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lwz r3, lbl_8049D844
    bl fn_80019D70
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8018895C
    li r3, 0x0
    b lbl_801889B8
lbl_8018895C:
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x50
    bl memset
    mr r3, r31
    addi r4, r31, 0x4
    mulli r6, r29, 0x60
    lis r5, lbl_803D1CC8@ha
    addi r0, r5, lbl_803D1CC8@l
    mulli r5, r30, 0xc
    add r0, r0, r6
    add r5, r5, r0
    bl fn_8001D9A4
    la r3, lbl_804A1028
    lfs f0, 0x4(r3)
    stfs f0, 0x3c(r31)
    stfs f0, 0x40(r31)
    li r0, 0x0
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x28(r31)
    mr r3, r31
lbl_801889B8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801889D0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    bl fn_801AA55C
    mr r31, r3
    cmpwi r29, 0x0
    beq lbl_80188A2C
    mr r3, r29
    bl fn_80189D00
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80188A24
    bl fn_801A9BA4
    mr r3, r30
    bl fn_801A9C7C
    mr r3, r31
    mr r4, r30
    bl fn_801AA8B0
lbl_80188A24:
    mr r3, r29
    bl fn_80187CD8
lbl_80188A2C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80188A44() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_801AA55C
    mr r31, r3
    mr r3, r30
    bl fn_80189DC8
    cmpwi r3, 0x0
    beq lbl_80188AA4
    mr r3, r30
    bl fn_80187C20
    bl fn_80189CE4
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80188AA4
    bl fn_801A9BA4
    mr r3, r30
    bl fn_801A9C7C
    mr r3, r31
    mr r4, r30
    bl fn_801AA8B0
lbl_80188AA4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80188ABC() {
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    opword 0xF3E10208
    stfd f30, 0x1f0(r1)
    opword 0xF3C101F8
    stfd f29, 0x1e0(r1)
    opword 0xF3A101E8
    stfd f28, 0x1d0(r1)
    opword 0xF38101D8
    addi r11, r1, 0x1d0
    bl _savegpr_27
    mr r27, r3
    lwz r0, lbl_8049D840
    cmpwi r0, 0x0
    beq lbl_80188FDC
    lis r5, lbl_803D1CC8@ha
    addi r5, r5, lbl_803D1CC8@l
    mulli r0, r3, 0x60
    add r3, r5, r0
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r30, 0x8(r3)
    lfs f28, lbl_804A1028
    la r3, lbl_804A1028
    lfs f29, 0x8(r3)
    lfs f31, 0x4(r3)
    lfs f30, 0xc(r3)
    b lbl_80188FD0
lbl_80188B34:
    mr r3, r31
    bl fn_80189D00
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_80188B78
    lwz r3, lbl_8049D84C
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    beq lbl_80188FCC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_80188FCC
    mr r3, r31
    bl fn_80187CD8
    b lbl_80188FCC
lbl_80188B78:
    mr r3, r31
    bl fn_801895CC
    cmpwi r3, 0x0
    bne lbl_80188FCC
    mr r3, r31
    bl fn_801893C4
    cmpwi r3, 0x0
    bne lbl_80188FCC
    lwz r4, 0x18(r31)
    rlwinm r0, r4, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80188BC4
    lwz r3, 0x44(r31)
    cmpwi r3, 0x0
    beq lbl_80188BC4
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_80188FCC
lbl_80188BC4:
    rlwinm r0, r4, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80188C04
    lwz r3, 0x48(r31)
    cmpwi r3, 0x0
    beq lbl_80188C04
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    cmpwi r3, 0x0
    beq lbl_80188C04
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80188FCC
lbl_80188C04:
    mr r3, r28
    li r4, 0x0
    bl fn_8018B870
    mr r3, r28
    li r4, 0x0
    bl fn_8018B858
    lwz r0, 0x18(r31)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80188C74
    mr r3, r28
    bl fn_80146F20
    mr r5, r3
    addi r3, r1, 0x24
    li r4, 0x3
    bl fn_80173580
    mr r3, r27
    addi r4, r1, 0x24
    lfs f1, 0x3c(r31)
    bl fn_801899D0
    cmpwi r3, 0x0
    bne lbl_80188C74
    mr r3, r28
    li r4, 0x1
    bl fn_8018B870
    mr r3, r28
    li r4, 0x1
    bl fn_8018B858
lbl_80188C74:
    li r29, 0x0
    lwz r0, 0x18(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80188E1C
    lwz r0, 0x28(r31)
    cmpwi r0, 0x0
    beq lbl_80188E1C
    addi r3, r1, 0x180
    bl fn_80173750
    addi r3, r1, 0x150
    bl fn_80173750
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80188CCC
    mr r3, r28
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0x180
    bl fn_801734E4
    li r29, 0x1
lbl_80188CCC:
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80188D1C
    addi r3, r1, 0x180
    li r4, 0x0
    lwz r5, 0x28(r31)
    li r6, 0x0
    bl fn_801736E0
    addi r3, r1, 0x180
    li r4, 0x1
    lwz r5, 0x28(r31)
    li r6, 0x1
    bl fn_801736E0
    addi r3, r1, 0x180
    li r4, 0x2
    lwz r5, 0x28(r31)
    li r6, 0x2
    bl fn_801736E0
    li r29, 0x1
lbl_80188D1C:
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80188DBC
    addi r3, r1, 0xf0
    lwz r4, 0x28(r31)
    bl fn_801734E4
    addi r3, r1, 0xf0
    mr r4, r3
    bl fn_80173760
    addi r3, r1, 0x18
    lfs f1, lbl_804A1028
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0xf0
    li r4, 0x3
    addi r5, r1, 0x18
    bl fn_801735E8
    addi r3, r1, 0xf0
    mr r4, r3
    bl fn_80173754
    addi r3, r1, 0xf0
    lwz r4, 0x28(r31)
    mr r5, r3
    bl fn_8017375C
    addi r3, r1, 0x18
    lfs f1, 0xf0(r1)
    lfs f2, 0x104(r1)
    lfs f3, 0x118(r1)
    bl fn_80018B0C
    addi r3, r1, 0x150
    mr r4, r3
    addi r5, r1, 0x18
    bl fn_80173740
    addi r3, r1, 0x180
    addi r4, r1, 0x150
    mr r5, r3
    bl fn_8017375C
    li r29, 0x1
lbl_80188DBC:
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80188E04
    addi r3, r1, 0xc
    lwz r4, 0x28(r31)
    addi r5, r31, 0x2c
    bl fn_80018AF8
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80188DF0
    stfs f28, 0x10(r1)
lbl_80188DF0:
    addi r3, r1, 0x180
    li r4, 0x3
    addi r5, r1, 0xc
    bl fn_801734EC
    li r29, 0x1
lbl_80188E04:
    addi r3, r1, 0x90
    addi r4, r1, 0x180
    bl fn_80146EF0
    mr r4, r3
    mr r3, r28
    bl fn_801AA370
lbl_80188E1C:
    lwz r0, 0x18(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80188FB4
    cmpwi r29, 0x0
    beq lbl_80188E44
    addi r3, r1, 0xc0
    addi r4, r1, 0x180
    bl fn_801734E4
    b lbl_80188E58
lbl_80188E44:
    mr r3, r28
    bl fn_80146F20
    mr r4, r3
    addi r3, r1, 0xc0
    bl fn_801734E4
lbl_80188E58:
    addi r3, r1, 0x54
    li r4, 0x0
    addi r5, r1, 0xc0
    bl fn_80173580
    addi r3, r1, 0x48
    li r4, 0x1
    addi r5, r1, 0xc0
    bl fn_80173580
    addi r3, r1, 0x3c
    li r4, 0x2
    addi r5, r1, 0xc0
    bl fn_80173580
    addi r3, r1, 0x54
    bl fn_8001B8BC
    fcmpo cr0, f1, f29
    blt lbl_80188EA8
    addi r3, r1, 0x54
    bl fn_8001B8BC
    fcmpo cr0, f1, f30
    ble lbl_80188EB4
lbl_80188EA8:
    stfs f31, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f28, 0x5c(r1)
lbl_80188EB4:
    addi r3, r1, 0x48
    bl fn_8001B8BC
    fcmpo cr0, f1, f29
    blt lbl_80188ED4
    addi r3, r1, 0x48
    bl fn_8001B8BC
    fcmpo cr0, f1, f30
    ble lbl_80188EE0
lbl_80188ED4:
    stfs f28, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f28, 0x50(r1)
lbl_80188EE0:
    addi r3, r1, 0x3c
    bl fn_8001B8BC
    fcmpo cr0, f1, f29
    blt lbl_80188F00
    addi r3, r1, 0x3c
    bl fn_8001B8BC
    fcmpo cr0, f1, f30
    ble lbl_80188F0C
lbl_80188F00:
    stfs f28, 0x3c(r1)
    stfs f28, 0x40(r1)
    stfs f31, 0x44(r1)
lbl_80188F0C:
    lfs f0, 0x40(r31)
    fcmpo cr0, f0, f29
    bge lbl_80188F1C
    stfs f29, 0x40(r31)
lbl_80188F1C:
    addi r3, r1, 0x54
    mr r4, r3
    lfs f1, 0x40(r31)
    bl fn_80018B08
    addi r3, r1, 0x120
    li r4, 0x0
    addi r5, r1, 0x54
    bl fn_801735E8
    addi r3, r1, 0x48
    mr r4, r3
    lfs f1, 0x40(r31)
    bl fn_80018B08
    addi r3, r1, 0x120
    li r4, 0x1
    addi r5, r1, 0x48
    bl fn_801735E8
    addi r3, r1, 0x3c
    mr r4, r3
    lfs f1, 0x40(r31)
    bl fn_80018B08
    addi r3, r1, 0x120
    li r4, 0x2
    addi r5, r1, 0x3c
    bl fn_801735E8
    addi r3, r1, 0x30
    li r4, 0x3
    addi r5, r1, 0xc0
    bl fn_80173580
    addi r3, r1, 0x120
    li r4, 0x3
    addi r5, r1, 0x30
    bl fn_801735E8
    addi r3, r1, 0x60
    addi r4, r1, 0x120
    bl fn_80146EF0
    mr r4, r3
    mr r3, r28
    bl fn_801AA370
lbl_80188FB4:
    mr r3, r28
    li r4, 0x0
    lwz r12, 0x1c(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
lbl_80188FCC:
    lwz r30, 0x8(r30)
lbl_80188FD0:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_80188B34
lbl_80188FDC:
    li r0, 0x208
    opword 0x13E1000C
    lfd f31, 0x200(r1)
    li r0, 0x1f8
    opword 0x13C1000C
    lfd f30, 0x1f0(r1)
    li r0, 0x1e8
    opword 0x13A1000C
    lfd f29, 0x1e0(r1)
    li r0, 0x1d8
    opword 0x1381000C
    lfd f28, 0x1d0(r1)
    addi r11, r1, 0x1d0
    bl _restgpr_27
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

extern "C" asm void fn_80189024() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x2
    bne lbl_80189064
    bl fn_8017A018
    cmpwi r3, 0x0
    bne lbl_8018908C
lbl_80189064:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801890A4
    li r3, 0x0
    bl fn_802E59DC
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl fn_802E4FA4
lbl_8018908C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801890A4() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x190
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r3, r1, 0xd8
    bl fn_8018B6C4
    addi r3, r1, 0x8
    bl fn_8002AE40
    addi r3, r1, 0x8
    bl fn_8002AE08
    lwz r0, lbl_8049D840
    cmpwi r0, 0x0
    beq lbl_8018919C
    addi r3, r1, 0x38
    mr r4, r26
    bl fn_801887F4
    addi r3, r1, 0xd8
    addi r4, r1, 0x38
    bl fn_801891B4
    lis r3, lbl_803D1CC8@ha
    addi r3, r3, lbl_803D1CC8@l
    mulli r0, r26, 0x60
    add r3, r3, r0
    mulli r0, r27, 0xc
    add r3, r3, r0
    lwz r30, 0x8(r3)
    b lbl_80189190
lbl_80189120:
    mr r3, r31
    bl fn_80189D00
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8018918C
    lwz r0, 0x1c(r31)
    cmpw r0, r27
    bne lbl_8018918C
    lwz r0, 0x20(r31)
    cmpw r0, r26
    bne lbl_8018918C
    mr r3, r31
    bl fn_80189450
    cmpwi r3, 0x0
    bne lbl_8018918C
    lwz r0, 0x24(r31)
    cmpw r0, r28
    bne lbl_8018918C
    mr r3, r31
    addi r4, r1, 0xd8
    bl fn_8018934C
    mr r3, r29
    addi r4, r1, 0xd8
    lwz r12, 0x1c(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_8018918C:
    lwz r30, 0x8(r30)
lbl_80189190:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_80189120
lbl_8018919C:
    addi r11, r1, 0x190
    bl _restgpr_26
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

extern "C" asm void fn_801891B4() {
    nofralloc
    subi r7, r3, 0x4
    subi r6, r4, 0x4
    li r0, 0x6
    mtctr r0
lbl_801891C4:
    lwz r5, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_801891C4
    addi r7, r3, 0x2c
    addi r6, r4, 0x2c
    li r0, 0x6
    mtctr r0
lbl_801891E8:
    lwz r5, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_801891E8
    lbz r0, 0x60(r4)
    stb r0, 0x60(r3)
    lwz r0, 0x64(r4)
    stw r0, 0x64(r3)
    lwz r0, 0x68(r4)
    stw r0, 0x68(r3)
    lbz r0, 0x6c(r4)
    stb r0, 0x6c(r3)
    lwz r0, 0x70(r4)
    stw r0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lfs f0, 0x78(r4)
    stfs f0, 0x78(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lwz r0, 0x84(r4)
    stw r0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lwz r5, 0x8c(r4)
    lwz r0, 0x90(r4)
    stw r5, 0x8c(r3)
    stw r0, 0x90(r3)
    lwz r0, 0x94(r4)
    stw r0, 0x94(r3)
    lwz r0, 0x98(r4)
    stw r0, 0x98(r3)
    lwz r0, 0x9c(r4)
    stw r0, 0x9c(r3)
    blr
}

extern "C" asm void fn_80189280() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r21, r3
    bl fn_801AA55C
    mr r23, r3
    li r26, 0x0
    li r31, 0x0
    lis r3, lbl_803D1CC8@ha
    addi r29, r3, lbl_803D1CC8@l
lbl_801892B0:
    li r25, 0x0
    li r30, 0x0
    add r28, r29, r31
lbl_801892BC:
    add r3, r28, r30
    lwz r24, 0x8(r3)
    b lbl_80189308
lbl_801892C8:
    mr r3, r27
    bl fn_80189D00
    mr r22, r3
    lwz r0, 0x18(r27)
    and r0, r0, r21
    cmpwi r0, 0x0
    bne lbl_80189304
    cmpwi r3, 0x0
    beq lbl_80189304
    bl fn_801A9BA4
    mr r3, r22
    bl fn_801A9C7C
    mr r3, r23
    mr r4, r22
    bl fn_801AA8B0
lbl_80189304:
    lwz r24, 0x8(r24)
lbl_80189308:
    lwz r27, 0x0(r24)
    cmplwi r27, 0x1
    bne lbl_801892C8
    addi r25, r25, 0x1
    addi r30, r30, 0xc
    cmpwi r25, 0x8
    blt lbl_801892BC
    addi r26, r26, 0x1
    addi r31, r31, 0x60
    cmpwi r26, 0x6
    blt lbl_801892B0
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

extern "C" asm void fn_8018934C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    lwz r0, 0x18(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_801893A8
    addi r3, r1, 0x10
    li r4, 0x0
    bl fn_8018D00C
    lwz r0, 0x24(r1)
    stw r0, 0x8(r1)
    mr r3, r31
    lwz r4, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    lfs f4, 0x20(r1)
    addi r5, r1, 0x8
    bl fn_8018B7E8
    b lbl_801893B0
lbl_801893A8:
    mr r3, r31
    bl fn_8018B7DC
lbl_801893B0:
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

extern "C" asm void fn_801893C4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8008AE14
    cmpwi r3, 0x0
    beq lbl_801893EC
    li r3, 0x1
    b lbl_8018943C
lbl_801893EC:
    cmpwi r31, 0x0
    beq lbl_80189438
    lwz r0, 0x18(r31)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80189438
    lwz r3, 0x44(r31)
    cmpwi r3, 0x0
    beq lbl_80189438
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    beq lbl_80189424
    li r3, 0x1
    b lbl_8018943C
lbl_80189424:
    lwz r0, 0x1640(r3)
    cmpwi r0, 0x0
    ble lbl_80189438
    li r3, 0x1
    b lbl_8018943C
lbl_80189438:
    li r3, 0x0
lbl_8018943C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80189450() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801895B4
    lwz r4, 0x18(r3)
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_80189484
    li r3, 0x1
    b lbl_801895B8
lbl_80189484:
    rlwinm r0, r4, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_801894B4
    lwz r5, 0x44(r3)
    cmpwi r5, 0x0
    beq lbl_801894B4
    lwz r0, 0x58(r5)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_801894B4
    li r3, 0x1
    b lbl_801895B8
lbl_801894B4:
    rlwinm r0, r4, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_801894FC
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_801894FC
    lwz r0, 0x114(r3)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800341DC
    cmpwi r3, 0x0
    beq lbl_801894FC
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_801894FC
    li r3, 0x1
    b lbl_801895B8
lbl_801894FC:
    lwz r4, 0x18(r31)
    rlwinm r0, r4, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80189534
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    rlwinm r0, r3, 0, 19, 19
    rlwimi r0, r3, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_80189534
    li r3, 0x1
    b lbl_801895B8
lbl_80189534:
    rlwinm r0, r4, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_8018955C
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_8018955C
    li r3, 0x1
    b lbl_801895B8
lbl_8018955C:
    lwz r0, 0x18(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80189584
    li r3, 0x0
    bl fn_8005E8F0
    cmpwi r3, 0x0
    beq lbl_80189584
    li r3, 0x1
    b lbl_801895B8
lbl_80189584:
    lwz r0, 0x18(r31)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_801895B4
    lwz r3, 0x44(r31)
    cmpwi r3, 0x0
    beq lbl_801895B4
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_801895B4
    li r3, 0x1
    b lbl_801895B8
lbl_801895B4:
    li r3, 0x0
lbl_801895B8:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801895CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80189D00
    cmpwi r31, 0x0
    beq lbl_80189698
    lwz r5, 0x18(r31)
    rlwinm r0, r5, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80189640
    lwz r4, 0x44(r31)
    cmpwi r4, 0x0
    beq lbl_80189640
    lwz r0, 0x50(r4)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80189640
    la r4, lbl_804A1028
    lfs f0, 0x4(r4)
    stfs f0, 0x40(r31)
    li r0, 0x0
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    bl fn_80188340
    li r3, 0x1
    b lbl_8018969C
lbl_80189640:
    rlwinm r0, r5, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80189698
    lwz r5, 0x44(r31)
    cmpwi r5, 0x0
    beq lbl_80189698
    lwz r4, 0x4c(r31)
    cmpwi r4, 0x0
    beq lbl_80189698
    lwz r0, 0x140(r5)
    cmpw r0, r4
    beq lbl_80189698
    la r4, lbl_804A1028
    lfs f0, 0x4(r4)
    stfs f0, 0x40(r31)
    li r0, 0x0
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    bl fn_80188340
    li r3, 0x1
    b lbl_8018969C
lbl_80189698:
    li r3, 0x0
lbl_8018969C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_801896B0() {
    nofralloc
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    blr
}

extern "C" asm void fn_801896C0() {
    nofralloc
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    bge lbl_801896DC
    lwz r0, 0x20(r3)
    ori r0, r0, 0x4
    stw r0, 0x20(r3)
    blr
lbl_801896DC:
    lwz r0, 0x20(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x20(r3)
    clrlwi r0, r4, 16
    sth r0, 0x3c(r3)
    blr
}

extern "C" asm void fn_801896F4() {
    nofralloc
    lfs f1, 0x0(r4)
    la r4, lbl_804A1028
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    bge lbl_80189710
    fmr f1, f0
    b lbl_80189720
lbl_80189710:
    lfs f0, 0x10(r4)
    fcmpo cr0, f1, f0
    ble lbl_80189720
    fmr f1, f0
lbl_80189720:
    stfs f1, 0x28(r3)
    blr
}

extern "C" asm void fn_80189728() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_801ACFD4
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801CE9C4
    addi r3, r1, 0xc
    bl fn_801CE9EC
    stfs f1, 0x28(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_80189774() {
    nofralloc
    lwz r4, 0x0(r4)
    rlwinm r4, r4, 0, 25, 26
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x20(r3)
    or r0, r0, r4
    stw r0, 0x20(r3)
    blr
}

extern "C" asm void fn_80189794() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_8012B7A4
    mr r4, r3
    mr r3, r31
    bl fn_8018B898
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_801897D0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_8012B7A4
    mr r4, r3
    mr r3, r31
    bl fn_8018B8D0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018980C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r1, 0x14
    bl fn_80019DAC
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8012B7A4
    mr r4, r3
    mr r3, r31
    bl fn_8018B908
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

extern "C" asm void fn_80189854() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_8018B888
    mr r31, r3
    lfs f31, 0x0(r30)
    bl fn_8018B6BC
    mr r30, r3
    b lbl_801898F8
lbl_80189890:
    addi r3, r1, 0x10
    mr r4, r29
    bl fn_801B865C
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801CE9D4
    addi r3, r1, 0x14
    bl fn_801CE9F8
    lfs f0, 0x0(r3)
    fmuls f0, f31, f0
    stfs f0, 0x30(r30)
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_801B865C
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801CE9D4
    addi r3, r1, 0xc
    bl fn_801CE9F8
    lfs f0, 0x4(r3)
    fmuls f0, f31, f0
    stfs f0, 0x34(r30)
    mr r3, r31
    mr r4, r30
    bl fn_80222DC0
    mr r30, r3
lbl_801898F8:
    cmpwi r30, 0x0
    bne lbl_80189890
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

extern "C" asm void fn_80189924() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    bl fn_8018B888
    mr r31, r3
    bl fn_8018B6BC
    mr r30, r3
    b lbl_801899B0
lbl_80189950:
    addi r3, r1, 0x10
    mr r4, r29
    bl fn_801B865C
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801CE9D4
    addi r3, r1, 0x14
    bl fn_801CE9F8
    lfs f0, 0x0(r3)
    stfs f0, 0x30(r30)
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_801B865C
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801CE9D4
    addi r3, r1, 0xc
    bl fn_801CE9F8
    lfs f0, 0x4(r3)
    stfs f0, 0x34(r30)
    mr r3, r31
    mr r4, r30
    bl fn_80222DC0
    mr r30, r3
lbl_801899B0:
    cmpwi r30, 0x0
    bne lbl_80189950
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

extern "C" asm void fn_801899D0() {
    nofralloc
    clrlwi r11, r1, 28
    opword 0x216BFF00
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
    subi r11, r12, 0x30
    bl _savegpr_29
    mr r29, r4
    fmr f29, f1
    bl fn_8017ADBC
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_80189A28
    li r3, 0x0
    b lbl_80189CA4
lbl_80189A28:
    la r31, lbl_804A1028
    lfs f1, 0x38(r3)
    lfs f0, 0x18(r31)
    fmuls f1, f1, f0
    lfs f0, 0x14(r31)
    fmuls f1, f0, f1
    bl fn_801A3344
    lfs f2, 0x4(r31)
    fdivs f31, f2, f1
    lfs f30, 0x3c(r30)
    fmuls f0, f31, f31
    fadds f1, f2, f0
    bl fn_8001DA9C
    fdivs f0, f31, f1
    stfs f0, 0x60(r1)
    lfs f0, lbl_804A1028
    stfs f0, 0x64(r1)
    fmuls f1, f31, f31
    lfs f0, 0x4(r31)
    fadds f1, f0, f1
    bl fn_8001DA9C
    lfs f0, 0x4(r31)
    fdivs f0, f0, f1
    fneg f2, f0
    stfs f2, 0x68(r1)
    lfs f1, lbl_804A1028
    stfs f1, 0x6c(r1)
    lfs f0, 0x60(r1)
    fneg f0, f0
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    frsp f0, f2
    stfs f0, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    fmuls f1, f31, f31
    fmuls f0, f30, f30
    fadds f1, f1, f0
    bl fn_8001DA9C
    fneg f0, f31
    fdivs f0, f0, f1
    stfs f0, 0x84(r1)
    fmuls f1, f31, f31
    fmuls f0, f30, f30
    fadds f1, f1, f0
    bl fn_8001DA9C
    fmuls f0, f30, f30
    fdivs f0, f0, f1
    fneg f2, f0
    stfs f2, 0x88(r1)
    lfs f1, lbl_804A1028
    stfs f1, 0x8c(r1)
    stfs f1, 0x90(r1)
    lfs f0, 0x84(r1)
    fneg f0, f0
    stfs f0, 0x94(r1)
    frsp f0, f2
    stfs f0, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    lfs f0, 0x1c(r31)
    stfs f0, 0xa8(r1)
    lfs f0, 0x40(r30)
    fneg f0, f0
    stfs f0, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f1, 0xb4(r1)
    lfs f0, 0x4(r31)
    stfs f0, 0xb8(r1)
    lfs f0, 0x44(r30)
    stfs f0, 0xbc(r1)
    addi r3, r1, 0x10
    mr r4, r30
    bl fn_8017AE60
    addi r3, r1, 0x30
    addi r4, r30, 0x4
    addi r5, r1, 0x10
    addi r6, r30, 0x1c
    bl fn_8030D448
    addi r3, r1, 0x20
    addi r4, r1, 0x30
    mr r5, r29
    bl fn_80018AF8
    lfs f0, 0x4(r31)
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x60
    bl fn_80201AA8
    fmr f30, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x60
    bl fn_80201A84
    fdivs f1, f1, f30
    fneg f0, f29
    fcmpo cr0, f1, f0
    bge lbl_80189BB0
    li r3, 0x0
    b lbl_80189CA4
lbl_80189BB0:
    addi r3, r1, 0x70
    bl fn_80201AA8
    fmr f30, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x70
    bl fn_80201A84
    fdivs f1, f1, f30
    fneg f0, f29
    fcmpo cr0, f1, f0
    bge lbl_80189BE0
    li r3, 0x0
    b lbl_80189CA4
lbl_80189BE0:
    addi r3, r1, 0x80
    bl fn_80201AA8
    fmr f30, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x80
    bl fn_80201A84
    fdivs f1, f1, f30
    fneg f0, f29
    fcmpo cr0, f1, f0
    bge lbl_80189C10
    li r3, 0x0
    b lbl_80189CA4
lbl_80189C10:
    addi r3, r1, 0x90
    bl fn_80201AA8
    fmr f30, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x90
    bl fn_80201A84
    fdivs f1, f1, f30
    fneg f0, f29
    fcmpo cr0, f1, f0
    bge lbl_80189C40
    li r3, 0x0
    b lbl_80189CA4
lbl_80189C40:
    addi r3, r1, 0xa0
    bl fn_80201AA8
    fmr f30, f1
    addi r3, r1, 0x20
    addi r4, r1, 0xa0
    bl fn_80201A84
    fdivs f1, f1, f30
    fneg f0, f29
    fcmpo cr0, f1, f0
    bge lbl_80189C70
    li r3, 0x0
    b lbl_80189CA4
lbl_80189C70:
    addi r3, r1, 0xb0
    bl fn_80201AA8
    fmr f30, f1
    addi r3, r1, 0x20
    addi r4, r1, 0xb0
    bl fn_80201A84
    fdivs f1, f1, f30
    fneg f0, f29
    fcmpo cr0, f1, f0
    bge lbl_80189CA0
    li r3, 0x0
    b lbl_80189CA4
lbl_80189CA0:
    li r3, 0x1
lbl_80189CA4:
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
    subi r11, r10, 0x30
    bl _restgpr_29
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

extern "C" asm void fn_80189CE4() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_80189CF4
    li r3, 0x0
    blr
lbl_80189CF4:
    lwz r3, 0x8(r3)
    b fn_80189D00
    blr
}

extern "C" asm void fn_80189D00() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80189D48
    addi r3, r3, 0x10
    bl fn_801BA1DC
    cmpwi r3, 0x0
    beq lbl_80189D48
    addi r3, r31, 0x10
    bl fn_8018B634
    cmpwi r3, 0x0
    beq lbl_80189D48
    addi r3, r31, 0x10
    bl fn_8018B630
    b lbl_80189D4C
lbl_80189D48:
    li r3, 0x0
lbl_80189D4C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80189D60() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80187C20
    cmpwi r3, 0x0
    beq lbl_80189D84
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_80189D84:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80189D94() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80187C20
    cmpwi r3, 0x0
    beq lbl_80189DB8
    lwz r4, 0x0(r3)
    subi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_80189DB8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_80189DC8() {
    nofralloc
    cmpwi r3, 0x0
    blt lbl_80189DD8
    cmpwi r3, 0x100
    ble lbl_80189DE0
lbl_80189DD8:
    li r3, 0x0
    blr
lbl_80189DE0:
    li r3, 0x1
    blr
}

extern "C" asm void fn_80189DE8() {
    nofralloc
    stw r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_80189DFC
    mr r4, r5
    b fn_801AA568
lbl_80189DFC:
    li r0, 0x0
    addis r3, r3, 0x1
    stw r0, -0x3fec(r3)
    stw r0, -0x3fe8(r3)
    blr
}

extern "C" asm void fn_80189E10() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

extern "C" asm void fn_80189E18() {
    nofralloc
    addis r3, r3, 0x1
    stb r4, -0x3f9c(r3)
    blr
}

extern "C" asm void fn_80189E24() {
    nofralloc
    blr
}

extern "C" asm void fn_80189E28() {
    nofralloc
    mr r3, r4
    blr
}

extern "C" asm void fn_80189E30() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_23
    mr r31, r1
    mr r29, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r28, r8
    mr r27, r9
    bl fn_8018B578
    lis r3, lbl_8035EDC0@ha
    addi r0, r3, lbl_8035EDC0@l
    stw r0, 0x0(r29)
    clrlwi r0, r23, 27
    cmpwi r0, 0x0
    beq lbl_80189EA0
    lis r3, lbl_8035F0C4@ha
    addi r3, r3, lbl_8035F0C4@l
    li r4, 0x10b
    lis r5, lbl_8035F074@ha
    addi r5, r5, lbl_8035F074@l
    mr r6, r23
    opword 0x4CC63182
    bl fn_801A9384
lbl_80189EA0:
    li r3, 0x18
    li r4, 0x20
    bl fn_8018B588
    mr r30, r3
    stw r25, 0x4(r29)
    stw r26, 0xc(r29)
    stw r28, 0x14(r29)
    stw r27, 0x1c(r29)
    li r0, 0x0
    stw r0, 0x8(r29)
    stw r0, 0x10(r29)
    stw r0, 0x18(r29)
    stw r0, 0x20(r29)
    stw r0, 0x2c(r29)
    stw r0, 0x30(r29)
    stw r0, 0x34(r29)
    stw r0, 0x38(r29)
    add r0, r23, r24
    stw r0, 0x28(r29)
    mr r3, r23
    li r4, 0x20
    bl fn_8018B588
    stw r3, 0x24(r29)
    li r4, 0x0
    lwz r0, 0x28(r29)
    cmplw r3, r0
    bge lbl_80189F1C
    subf r0, r3, r0
    cmplw r0, r30
    ble lbl_80189F1C
    li r4, 0x1
lbl_80189F1C:
    cmpwi r4, 0x0
    bne lbl_80189F40
    lis r3, lbl_8035F060@ha
    addi r3, r3, lbl_8035F060@l
    li r4, 0x123
    lis r5, lbl_8035EFD0@ha
    addi r5, r5, lbl_8035EFD0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80189F40:
    lwz r3, 0x24(r29)
    stw r3, 0x30(r29)
    li r4, 0x0
    stw r4, 0x0(r3)
    lwz r3, 0x30(r29)
    stw r4, 0x4(r3)
    lwz r3, 0x30(r29)
    stw r4, 0x8(r3)
    lwz r3, 0x30(r29)
    stw r4, 0xc(r3)
    lwz r3, 0x30(r29)
    stb r4, 0x14(r3)
    lwz r3, 0x24(r29)
    lwz r0, 0x28(r29)
    subf r0, r3, r0
    subf r0, r30, r0
    lwz r3, 0x30(r29)
    stw r0, 0x10(r3)
    lwz r0, 0x30(r29)
    stw r0, 0x38(r29)
    stw r4, 0x2c(r29)
    li r27, 0x0
    lwz r28, 0x4(r29)
    cmpwi r28, 0x0
    ble lbl_8018A024
    mr r3, r29
    mulli r4, r28, 0xa0
    addi r4, r4, 0x20
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r30, r3
    mulli r3, r28, 0xa0
    addi r3, r3, 0x10
    mr r4, r30
    bl fn_80189E28
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_8018A024
    stw r1, 0xc4(r31)
    lis r4, fn_801A971C@ha
    addi r4, r4, fn_801A971C@l
    lis r5, fn_801A9780@ha
    addi r5, r5, fn_801A9780@l
    li r6, 0xa0
    mr r7, r28
    bl fn_80193934
    mr r27, r3
    b lbl_8018A024
    mr r3, r27
    mr r4, r30
    bl fn_80189E24
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A024:
    mr r3, r29
    li r4, 0x24
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r28, r3
    li r3, 0x24
    mr r4, r28
    bl fn_8003D59C
    mr r30, r3
    cmpwi r30, 0x0
    beq lbl_8018A088
    stw r1, 0xac(r31)
    lwz r4, 0x4(r29)
    mr r5, r27
    bl fn_8018A560
    b lbl_8018A088
    mr r3, r30
    mr r4, r28
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A088:
    stw r30, 0x8(r29)
    li r27, 0x0
    lwz r30, 0xc(r29)
    cmpwi r30, 0x0
    ble lbl_8018A11C
    mr r3, r29
    mulli r4, r30, 0x154
    addi r4, r4, 0x20
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r28, r3
    mulli r3, r30, 0x154
    addi r3, r3, 0x10
    mr r4, r28
    bl fn_80189E28
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_8018A11C
    stw r1, 0x94(r31)
    lis r4, fn_801AADB4@ha
    addi r4, r4, fn_801AADB4@l
    lis r5, fn_801AAE0C@ha
    addi r5, r5, fn_801AAE0C@l
    li r6, 0x154
    mr r7, r30
    bl fn_80193934
    mr r27, r3
    b lbl_8018A11C
    mr r3, r27
    mr r4, r28
    bl fn_80189E24
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A11C:
    mr r3, r29
    li r4, 0x24
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r28, r3
    li r3, 0x24
    mr r4, r28
    bl fn_8003D59C
    mr r30, r3
    cmpwi r30, 0x0
    beq lbl_8018A180
    stw r1, 0x7c(r31)
    lwz r4, 0xc(r29)
    mr r5, r27
    bl fn_8018A4C8
    b lbl_8018A180
    mr r3, r30
    mr r4, r28
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A180:
    stw r30, 0x10(r29)
    li r27, 0x0
    lwz r30, 0x14(r29)
    cmpwi r30, 0x0
    ble lbl_8018A214
    mr r3, r29
    mulli r4, r30, 0xbc
    addi r4, r4, 0x20
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r28, r3
    mulli r3, r30, 0xbc
    addi r3, r3, 0x10
    mr r4, r28
    bl fn_80189E28
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_8018A214
    stw r1, 0x64(r31)
    lis r4, fn_801B6324@ha
    addi r4, r4, fn_801B6324@l
    lis r5, fn_801B6628@ha
    addi r5, r5, fn_801B6628@l
    li r6, 0xbc
    mr r7, r30
    bl fn_80193934
    mr r27, r3
    b lbl_8018A214
    mr r3, r27
    mr r4, r28
    bl fn_80189E24
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A214:
    mr r3, r29
    li r4, 0x24
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r28, r3
    li r3, 0x24
    mr r4, r28
    bl fn_8003D59C
    mr r30, r3
    cmpwi r30, 0x0
    beq lbl_8018A278
    stw r1, 0x4c(r31)
    lwz r4, 0x14(r29)
    mr r5, r27
    bl fn_8018A430
    b lbl_8018A278
    mr r3, r30
    mr r4, r28
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A278:
    stw r30, 0x18(r29)
    li r27, 0x0
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    ble lbl_8018A30C
    mr r3, r29
    mulli r4, r30, 0xe4
    addi r4, r4, 0x20
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r28, r3
    mulli r3, r30, 0xe4
    addi r3, r3, 0x10
    mr r4, r28
    bl fn_80189E28
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_8018A30C
    stw r1, 0x34(r31)
    lis r4, fn_801B5504@ha
    addi r4, r4, fn_801B5504@l
    lis r5, fn_801B5514@ha
    addi r5, r5, fn_801B5514@l
    li r6, 0xe4
    mr r7, r30
    bl fn_80193934
    mr r27, r3
    b lbl_8018A30C
    mr r3, r27
    mr r4, r28
    bl fn_80189E24
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A30C:
    mr r3, r29
    li r4, 0x24
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    mr r28, r3
    li r3, 0x24
    mr r4, r28
    bl fn_8003D59C
    mr r30, r3
    cmpwi r30, 0x0
    beq lbl_8018A370
    stw r1, 0x1c(r31)
    lwz r4, 0x1c(r29)
    mr r5, r27
    bl fn_8018A398
    b lbl_8018A370
    mr r3, r30
    mr r4, r28
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_8018A370:
    stw r30, 0x20(r29)
    mr r3, r29
    mr r10, r31
    addi r11, r10, 0xf0
    bl _restgpr_23
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

extern "C" asm void fn_8018A398() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lis r4, lbl_8035EE4C@ha
    addi r0, r4, lbl_8035EE4C@l
    stw r0, 0x20(r3)
    addi r3, r3, 0x4
    li r4, 0x0
    bl fn_80222BAC
    addi r3, r27, 0x10
    li r4, 0x0
    bl fn_80222BAC
    li r0, 0xe4
    stw r0, 0x1c(r27)
    stw r29, 0x0(r27)
    li r30, 0x0
    li r31, 0x0
    b lbl_8018A40C
lbl_8018A3F4:
    add r4, r29, r31
    stw r30, 0x8(r4)
    addi r3, r27, 0x4
    bl fn_80222BC4
    addi r30, r30, 0x1
    addi r31, r31, 0xe4
lbl_8018A40C:
    cmplw r30, r28
    blt lbl_8018A3F4
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018A430() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lis r4, lbl_8035EE88@ha
    addi r0, r4, lbl_8035EE88@l
    stw r0, 0x20(r3)
    addi r3, r3, 0x4
    li r4, 0x0
    bl fn_80222BAC
    addi r3, r27, 0x10
    li r4, 0x0
    bl fn_80222BAC
    li r0, 0xbc
    stw r0, 0x1c(r27)
    stw r29, 0x0(r27)
    li r30, 0x0
    li r31, 0x0
    b lbl_8018A4A4
lbl_8018A48C:
    add r4, r29, r31
    stw r30, 0x8(r4)
    addi r3, r27, 0x4
    bl fn_80222BC4
    addi r30, r30, 0x1
    addi r31, r31, 0xbc
lbl_8018A4A4:
    cmplw r30, r28
    blt lbl_8018A48C
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018A4C8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lis r4, lbl_8035EECC@ha
    addi r0, r4, lbl_8035EECC@l
    stw r0, 0x20(r3)
    addi r3, r3, 0x4
    li r4, 0x0
    bl fn_80222BAC
    addi r3, r27, 0x10
    li r4, 0x0
    bl fn_80222BAC
    li r0, 0x154
    stw r0, 0x1c(r27)
    stw r29, 0x0(r27)
    li r30, 0x0
    li r31, 0x0
    b lbl_8018A53C
lbl_8018A524:
    add r4, r29, r31
    stw r30, 0x8(r4)
    addi r3, r27, 0x4
    bl fn_80222BC4
    addi r30, r30, 0x1
    addi r31, r31, 0x154
lbl_8018A53C:
    cmplw r30, r28
    blt lbl_8018A524
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018A560() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lis r4, lbl_8035EF08@ha
    addi r0, r4, lbl_8035EF08@l
    stw r0, 0x20(r3)
    addi r3, r3, 0x4
    li r4, 0x0
    bl fn_80222BAC
    addi r3, r27, 0x10
    li r4, 0x0
    bl fn_80222BAC
    li r0, 0xa0
    stw r0, 0x1c(r27)
    stw r29, 0x0(r27)
    li r30, 0x0
    li r31, 0x0
    b lbl_8018A5D4
lbl_8018A5BC:
    add r4, r29, r31
    stw r30, 0x8(r4)
    addi r3, r27, 0x4
    bl fn_80222BC4
    addi r30, r30, 0x1
    addi r31, r31, 0xa0
lbl_8018A5D4:
    cmplw r30, r28
    blt lbl_8018A5BC
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018A5F8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    li r3, 0x18
    li r4, 0x20
    bl fn_8018B588
    mr r31, r3
    mr r3, r29
    li r4, 0x20
    bl fn_8018B588
    lwz r4, 0x30(r30)
    b lbl_8018A770
lbl_8018A638:
    lwz r6, 0x10(r4)
    cmplw r6, r3
    blt lbl_8018A76C
    add r5, r3, r31
    addi r0, r5, 0x20
    cmplw r6, r0
    bge lbl_8018A6B8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_8018A66C
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    b lbl_8018A674
lbl_8018A66C:
    lwz r0, 0x4(r4)
    stw r0, 0x30(r30)
lbl_8018A674:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_8018A688
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_8018A688:
    lwz r3, 0x2c(r30)
    cmpwi r3, 0x0
    beq lbl_8018A698
    stw r4, 0x0(r3)
lbl_8018A698:
    lwz r0, 0x2c(r30)
    stw r0, 0x4(r4)
    li r0, 0x0
    stw r0, 0x0(r4)
    li r0, 0x1
    stb r0, 0x14(r4)
    stw r4, 0x2c(r30)
    b lbl_8018A764
lbl_8018A6B8:
    add r0, r4, r31
    add r6, r3, r0
    lwz r0, 0x0(r4)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r6)
    lwz r0, 0x10(r4)
    subf r0, r3, r0
    subf r0, r31, r0
    stw r0, 0x10(r6)
    li r0, 0x0
    stb r0, 0x14(r6)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r6)
    lwz r5, 0xc(r4)
    cmpwi r5, 0x0
    beq lbl_8018A700
    stw r6, 0x8(r5)
lbl_8018A700:
    stw r4, 0x8(r6)
    stw r6, 0xc(r4)
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_8018A71C
    stw r6, 0x4(r5)
    b lbl_8018A720
lbl_8018A71C:
    stw r6, 0x30(r30)
lbl_8018A720:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_8018A734
    lwz r5, 0x4(r6)
    stw r6, 0x0(r5)
lbl_8018A734:
    lwz r5, 0x2c(r30)
    cmpwi r5, 0x0
    beq lbl_8018A744
    stw r4, 0x0(r5)
lbl_8018A744:
    lwz r0, 0x2c(r30)
    stw r0, 0x4(r4)
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r3, 0x10(r4)
    li r0, 0x1
    stb r0, 0x14(r4)
    stw r4, 0x2c(r30)
lbl_8018A764:
    add r3, r4, r31
    b lbl_8018A798
lbl_8018A76C:
    lwz r4, 0x4(r4)
lbl_8018A770:
    cmpwi r4, 0x0
    bne lbl_8018A638
    lis r3, lbl_8035F274@ha
    addi r3, r3, lbl_8035F274@l
    li r4, 0x244
    lis r5, lbl_8035F258@ha
    addi r5, r5, lbl_8035F258@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8018A798:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018A7B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    clrlwi r0, r4, 16
    mulli r3, r0, 0x154
    addi r3, r3, 0x20
    li r4, 0x20
    bl fn_8018B588
    mr r31, r3
    clrlwi r0, r27, 16
    mulli r3, r0, 0xa0
    addi r3, r3, 0x20
    li r4, 0x20
    bl fn_8018B588
    add r31, r3, r31
    clrlwi r0, r28, 16
    mulli r3, r0, 0xbc
    addi r3, r3, 0x20
    li r4, 0x20
    bl fn_8018B588
    add r31, r31, r3
    clrlwi r0, r29, 16
    mulli r3, r0, 0xe4
    addi r3, r3, 0x20
    li r4, 0x20
    bl fn_8018B588
    add r31, r31, r3
    mulli r3, r30, 0x1c
    addi r3, r3, 0x20
    li r4, 0x20
    bl fn_8018B588
    add r3, r31, r3
    addi r3, r3, 0x220
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018A864() {
    nofralloc
    lwz r3, 0x8(r4)
    addis r0, r3, 0x1
    stw r0, 0x8(r4)
    blr
}

extern "C" asm void fn_8018A874() {
    nofralloc
    lwz r3, 0x8(r4)
    addis r0, r3, 0x1
    stw r0, 0x8(r4)
    blr
}

extern "C" asm void fn_8018A884() {
    nofralloc
    lwz r3, 0x8(r4)
    addis r0, r3, 0x1
    stw r0, 0x8(r4)
    blr
}

extern "C" asm void fn_8018A894() {
    nofralloc
    lwz r3, 0x8(r4)
    addis r0, r3, 0x1
    stw r0, 0x8(r4)
    blr
}

extern "C" asm void fn_8018A8A4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_8018A8E4
    li r4, 0x0
    bl dtor_8018B534
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_8018A8E4
    mr r3, r30
    bl dtor_80136CFC
lbl_8018A8E4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018A900() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r22, r3
    lwz r3, 0x18(r3)
    addi r3, r3, 0x10
    bl fn_8018B6BC
    mr r26, r3
    lis r27, lbl_8035F244@ha
    lis r28, lbl_8035F214@ha
    lis r30, lbl_8035F200@ha
    lis r31, lbl_8035F0D8@ha
    b lbl_8018AA18
lbl_8018A93C:
    lwz r3, 0x18(r22)
    addi r3, r3, 0x10
    mr r4, r26
    bl fn_80222DC0
    mr r25, r3
    lwz r24, 0x44(r26)
    b lbl_8018AA0C
lbl_8018A958:
    lhz r0, 0x4e(r26)
    add r3, r24, r0
    lwz r23, 0x4(r3)
    mr r3, r24
    bl fn_8018B940
    cmpwi r3, 0x0
    beq lbl_8018A988
    addi r3, r27, lbl_8035F244@l
    li r4, 0x17a
    addi r5, r28, lbl_8035F214@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8018A988:
    li r29, 0x0
    lwz r3, 0xc8(r24)
    bl fn_80146F28
    cmpwi r3, 0x1
    beq lbl_8018A9BC
    lwz r3, 0xc8(r24)
    bl fn_80146F28
    cmpwi r3, 0x2
    beq lbl_8018A9BC
    lwz r3, 0xc8(r24)
    bl fn_80146F28
    cmpwi r3, 0x3
    bne lbl_8018A9C0
lbl_8018A9BC:
    li r29, 0x1
lbl_8018A9C0:
    cmpwi r29, 0x0
    bne lbl_8018A9DC
    addi r3, r30, lbl_8035F200@l
    li r4, 0x17d
    addi r5, r31, lbl_8035F0D8@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8018A9DC:
    lwz r3, 0xc8(r24)
    mr r4, r24
    bl fn_8018B890
    lwz r3, 0x20(r22)
    addi r3, r3, 0x10
    mr r4, r24
    bl fn_80222D54
    lwz r3, 0x20(r22)
    addi r3, r3, 0x4
    mr r4, r24
    bl fn_80222BC4
    mr r24, r23
lbl_8018AA0C:
    cmpwi r24, 0x0
    bne lbl_8018A958
    mr r26, r25
lbl_8018AA18:
    cmpwi r26, 0x0
    bne lbl_8018A93C
    lwz r3, 0x18(r22)
    cmpwi r3, 0x0
    beq lbl_8018AA30
    bl fn_8018ABF0
lbl_8018AA30:
    lwz r3, 0x10(r22)
    cmpwi r3, 0x0
    beq lbl_8018AA40
    bl fn_8018AB34
lbl_8018AA40:
    lwz r3, 0x8(r22)
    cmpwi r3, 0x0
    beq lbl_8018AA50
    bl fn_8018AA68
lbl_8018AA50:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

extern "C" asm void fn_8018AA68() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    addi r3, r3, 0x10
    bl fn_8018B6BC
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_8018AB1C
    addi r3, r29, 0x10
    mr r4, r31
    bl fn_80222DC0
    mr r30, r3
    b lbl_8018AB14
lbl_8018AAA8:
    mr r3, r31
    bl fn_80146F28
    cmpwi r3, 0x3
    bne lbl_8018AB00
    mr r3, r31
    bl fn_8018B940
    cmpwi r3, 0x0
    bne lbl_8018AB00
    lwz r3, 0x20(r31)
    addis r3, r3, 0x1
    lwz r3, -0x3fe8(r3)
    lwz r0, 0x40(r31)
    mulli r0, r0, 0x1c
    add r3, r3, r0
    mr r4, r31
    bl fn_8018B948
    addi r3, r29, 0x10
    mr r4, r31
    bl fn_80222D54
    addi r3, r29, 0x4
    mr r4, r31
    bl fn_80222BC4
lbl_8018AB00:
    mr r31, r30
    addi r3, r29, 0x10
    mr r4, r30
    bl fn_80222DC0
    mr r30, r3
lbl_8018AB14:
    cmpwi r31, 0x0
    bne lbl_8018AAA8
lbl_8018AB1C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018AB34() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    addi r3, r3, 0x10
    bl fn_8018B6BC
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_8018ABD8
    addi r3, r29, 0x10
    mr r4, r31
    bl fn_80222DC0
    mr r30, r3
    b lbl_8018ABD0
lbl_8018AB74:
    mr r3, r31
    bl fn_80146F28
    cmpwi r3, 0x3
    bne lbl_8018ABBC
    mr r3, r31
    bl fn_8018B940
    cmpwi r3, 0x0
    bne lbl_8018ABBC
    lwz r3, 0xbc(r31)
    addi r3, r3, 0x24
    mr r4, r31
    bl fn_8018B948
    addi r3, r29, 0x10
    mr r4, r31
    bl fn_80222D54
    addi r3, r29, 0x4
    mr r4, r31
    bl fn_80222BC4
lbl_8018ABBC:
    mr r31, r30
    addi r3, r29, 0x10
    mr r4, r30
    bl fn_80222DC0
    mr r30, r3
lbl_8018ABD0:
    cmpwi r31, 0x0
    bne lbl_8018AB74
lbl_8018ABD8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018ABF0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    addi r3, r3, 0x10
    bl fn_8018B6BC
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_8018AC94
    addi r3, r29, 0x10
    mr r4, r31
    bl fn_80222DC0
    mr r30, r3
    b lbl_8018AC8C
lbl_8018AC30:
    mr r3, r31
    bl fn_80146F28
    cmpwi r3, 0x3
    bne lbl_8018AC78
    mr r3, r31
    bl fn_8018B940
    cmpwi r3, 0x0
    bne lbl_8018AC78
    lwz r3, 0x20(r31)
    addi r3, r3, 0xc0
    mr r4, r31
    bl fn_8018B948
    addi r3, r29, 0x10
    mr r4, r31
    bl fn_80222D54
    addi r3, r29, 0x4
    mr r4, r31
    bl fn_80222BC4
lbl_8018AC78:
    mr r31, r30
    addi r3, r29, 0x10
    mr r4, r30
    bl fn_80222DC0
    mr r30, r3
lbl_8018AC8C:
    cmpwi r31, 0x0
    bne lbl_8018AC30
lbl_8018AC94:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018ACAC() {
    nofralloc
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    bne lbl_8018ACC0
    li r3, 0x0
    blr
lbl_8018ACC0:
    b fn_8018ACC8
    blr
}

extern "C" asm void fn_8018ACC8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x4
    bl fn_8018B6BC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8018ACFC
    li r3, 0x0
    b lbl_8018AD30
lbl_8018ACFC:
    mr r3, r30
    mr r4, r31
    lwz r12, 0x20(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222D54
    addi r3, r30, 0x10
    mr r4, r31
    bl fn_80222BC4
    mr r3, r31
lbl_8018AD30:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018AD48() {
    nofralloc
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_8018AD5C
    blr
}

extern "C" asm void fn_8018AD5C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r3, 0x10
    bl fn_80222D54
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222BC4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018ADA4() {
    nofralloc
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    bne lbl_8018ADB8
    li r3, 0x0
    blr
lbl_8018ADB8:
    b fn_8018ADC0
    blr
}

extern "C" asm void fn_8018ADC0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8018AE04
    mr r31, r3
    mr r3, r30
    bl fn_8018AE0C
    add r3, r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018AE04() {
    nofralloc
    lhz r3, 0xc(r3)
    blr
}

extern "C" asm void fn_8018AE0C() {
    nofralloc
    lhz r3, 0x18(r3)
    blr
}

extern "C" asm void fn_8018AE14() {
    nofralloc
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    bne lbl_8018AE28
    li r3, 0x0
    blr
lbl_8018AE28:
    b fn_8018AE0C
    blr
}

extern "C" asm void fn_8018AE30() {
    nofralloc
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    bne lbl_8018AE44
    li r3, 0x0
    blr
lbl_8018AE44:
    b fn_8018AE04
    blr
}

extern "C" asm void fn_8018AE4C() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_8018AE60
    li r3, 0x0
    blr
lbl_8018AE60:
    b fn_8018AE68
    blr
}

extern "C" asm void fn_8018AE68() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x4
    bl fn_8018B6BC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8018AE9C
    li r3, 0x0
    b lbl_8018AED0
lbl_8018AE9C:
    mr r3, r30
    mr r4, r31
    lwz r12, 0x20(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222D54
    addi r3, r30, 0x10
    mr r4, r31
    bl fn_80222BC4
    mr r3, r31
lbl_8018AED0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018AEE8() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_8018AEFC
    blr
}

extern "C" asm void fn_8018AEFC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r3, 0x10
    bl fn_80222D54
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222BC4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018AF44() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_8018AF58
    li r3, 0x0
    blr
lbl_8018AF58:
    b fn_8018AF60
    blr
}

extern "C" asm void fn_8018AF60() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8018AFA4
    mr r31, r3
    mr r3, r30
    bl fn_8018AFAC
    add r3, r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018AFA4() {
    nofralloc
    lhz r3, 0xc(r3)
    blr
}

extern "C" asm void fn_8018AFAC() {
    nofralloc
    lhz r3, 0x18(r3)
    blr
}

extern "C" asm void fn_8018AFB4() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_8018AFC8
    li r3, 0x0
    blr
lbl_8018AFC8:
    b fn_8018AFAC
    blr
}

extern "C" asm void fn_8018AFD0() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_8018AFE4
    li r3, 0x0
    blr
lbl_8018AFE4:
    b fn_8018AFA4
    blr
}

extern "C" asm void fn_8018AFEC() {
    nofralloc
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    bne lbl_8018B000
    li r3, 0x0
    blr
lbl_8018B000:
    b fn_8018B008
    blr
}

extern "C" asm void fn_8018B008() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x4
    bl fn_8018B6BC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8018B03C
    li r3, 0x0
    b lbl_8018B070
lbl_8018B03C:
    mr r3, r30
    mr r4, r31
    lwz r12, 0x20(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222D54
    addi r3, r30, 0x10
    mr r4, r31
    bl fn_80222BC4
    mr r3, r31
lbl_8018B070:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B088() {
    nofralloc
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_8018B09C
    blr
}

extern "C" asm void fn_8018B09C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r3, 0x10
    bl fn_80222D54
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222BC4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B0E4() {
    nofralloc
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    bne lbl_8018B0F8
    li r3, 0x0
    blr
lbl_8018B0F8:
    b fn_8018B100
    blr
}

extern "C" asm void fn_8018B100() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8018B144
    mr r31, r3
    mr r3, r30
    bl fn_8018B14C
    add r3, r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B144() {
    nofralloc
    lhz r3, 0xc(r3)
    blr
}

extern "C" asm void fn_8018B14C() {
    nofralloc
    lhz r3, 0x18(r3)
    blr
}

extern "C" asm void fn_8018B154() {
    nofralloc
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    bne lbl_8018B168
    li r3, 0x0
    blr
lbl_8018B168:
    b fn_8018B14C
    blr
}

extern "C" asm void fn_8018B170() {
    nofralloc
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    bne lbl_8018B184
    li r3, 0x0
    blr
lbl_8018B184:
    b fn_8018B144
    blr
}

extern "C" asm void fn_8018B18C() {
    nofralloc
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    bne lbl_8018B1A0
    li r3, 0x0
    blr
lbl_8018B1A0:
    b fn_8018B1A8
    blr
}

extern "C" asm void fn_8018B1A8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x4
    bl fn_8018B6BC
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8018B1DC
    li r3, 0x0
    b lbl_8018B210
lbl_8018B1DC:
    mr r3, r30
    mr r4, r31
    lwz r12, 0x20(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222D54
    addi r3, r30, 0x10
    mr r4, r31
    bl fn_80222BC4
    mr r3, r31
lbl_8018B210:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B228() {
    nofralloc
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_8018B23C
    blr
}

extern "C" asm void fn_8018B23C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r3, 0x10
    bl fn_80222D54
    addi r3, r30, 0x4
    mr r4, r31
    bl fn_80222BC4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B284() {
    nofralloc
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    bne lbl_8018B298
    li r3, 0x0
    blr
lbl_8018B298:
    b fn_8018B2A0
    blr
}

extern "C" asm void fn_8018B2A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8018B2E4
    mr r31, r3
    mr r3, r30
    bl fn_8018B2EC
    add r3, r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B2E4() {
    nofralloc
    lhz r3, 0xc(r3)
    blr
}

extern "C" asm void fn_8018B2EC() {
    nofralloc
    lhz r3, 0x18(r3)
    blr
}

extern "C" asm void fn_8018B2F4() {
    nofralloc
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    bne lbl_8018B308
    li r3, 0x0
    blr
lbl_8018B308:
    b fn_8018B2EC
    blr
}

extern "C" asm void fn_8018B310() {
    nofralloc
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    bne lbl_8018B324
    li r3, 0x0
    blr
lbl_8018B324:
    b fn_8018B2E4
    blr
}

extern "C" asm void fn_8018B32C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    mr r30, r4
    li r3, 0x18
    li r4, 0x20
    bl fn_8018B588
    subf r4, r3, r30
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_8018B370
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    b lbl_8018B378
lbl_8018B370:
    lwz r0, 0x4(r4)
    stw r0, 0x2c(r31)
lbl_8018B378:
    lwz r5, 0x4(r4)
    cmpwi r5, 0x0
    beq lbl_8018B38C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
lbl_8018B38C:
    li r5, 0x0
    lwz r6, 0x8(r4)
    cmpwi r6, 0x0
    beq lbl_8018B3AC
    lbz r0, 0x14(r6)
    cmpwi r0, 0x0
    bne lbl_8018B3AC
    mr r5, r6
lbl_8018B3AC:
    li r6, 0x0
    lwz r7, 0xc(r4)
    cmpwi r7, 0x0
    beq lbl_8018B3CC
    lbz r0, 0x14(r7)
    cmpwi r0, 0x0
    bne lbl_8018B3CC
    mr r6, r7
lbl_8018B3CC:
    cmpwi r5, 0x0
    beq lbl_8018B47C
    cmpwi r6, 0x0
    beq lbl_8018B44C
    lwz r7, 0x0(r6)
    cmpwi r7, 0x0
    beq lbl_8018B3F4
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    b lbl_8018B3FC
lbl_8018B3F4:
    lwz r0, 0x4(r6)
    stw r0, 0x30(r31)
lbl_8018B3FC:
    lwz r7, 0x4(r6)
    cmpwi r7, 0x0
    beq lbl_8018B410
    lwz r0, 0x0(r6)
    stw r0, 0x0(r7)
lbl_8018B410:
    lwz r8, 0x10(r5)
    slwi r7, r3, 1
    lwz r3, 0x10(r4)
    lwz r0, 0x10(r6)
    add r3, r7, r3
    add r0, r8, r0
    add r0, r3, r0
    stw r0, 0x10(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
    lwz r3, 0xc(r6)
    cmpwi r3, 0x0
    beq lbl_8018B51C
    stw r5, 0x8(r3)
    b lbl_8018B51C
lbl_8018B44C:
    lwz r0, 0x10(r5)
    lwz r6, 0x10(r4)
    add r0, r0, r3
    add r0, r6, r0
    stw r0, 0x10(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r3, 0xc(r4)
    cmpwi r3, 0x0
    beq lbl_8018B51C
    stw r5, 0x8(r3)
    b lbl_8018B51C
lbl_8018B47C:
    cmpwi r6, 0x0
    beq lbl_8018B4F4
    lwz r7, 0x0(r6)
    cmpwi r7, 0x0
    beq lbl_8018B498
    stw r4, 0x4(r7)
    b lbl_8018B49C
lbl_8018B498:
    stw r4, 0x30(r31)
lbl_8018B49C:
    lwz r7, 0x4(r6)
    cmpwi r7, 0x0
    beq lbl_8018B4AC
    stw r4, 0x0(r7)
lbl_8018B4AC:
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    lwz r0, 0x10(r4)
    lwz r7, 0x10(r6)
    add r0, r0, r3
    add r0, r7, r0
    stw r0, 0x10(r4)
    li r0, 0x0
    stb r0, 0x14(r4)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r4)
    lwz r3, 0xc(r6)
    cmpwi r3, 0x0
    beq lbl_8018B51C
    stw r5, 0x8(r3)
    b lbl_8018B51C
lbl_8018B4F4:
    lwz r3, 0x30(r31)
    cmpwi r3, 0x0
    beq lbl_8018B504
    stw r4, 0x0(r3)
lbl_8018B504:
    lwz r0, 0x30(r31)
    stw r0, 0x4(r4)
    li r0, 0x0
    stw r0, 0x0(r4)
    stb r0, 0x14(r4)
    stw r4, 0x30(r31)
lbl_8018B51C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void dtor_8018B534() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_8018B560
    extsh r0, r4
    cmpwi r0, 0x0
    ble lbl_8018B560
    bl dtor_80136CFC
lbl_8018B560:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B578() {
    nofralloc
    lis r4, lbl_8035EF48@ha
    addi r0, r4, lbl_8035EF48@l
    stw r0, 0x0(r3)
    blr
}

extern "C" asm void fn_8018B588() {
    nofralloc
    subi r0, r4, 0x1
    nor r5, r0, r0
    add r3, r4, r3
    subi r0, r3, 0x1
    and r3, r5, r0
    blr
}

extern "C" asm void fn_8018B5A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BA1A0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B5D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BA190
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B600() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801BA1B4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B630() {
    nofralloc
    b fn_801BA208
}

extern "C" asm void fn_8018B634() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8018B670
    li r0, 0x0
    cmpwi r3, 0x1
    beq lbl_8018B658
    cmpwi r3, 0x2
    bne lbl_8018B65C
lbl_8018B658:
    li r0, 0x1
lbl_8018B65C:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B670() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_801BA208
    cmpwi r3, 0x0
    bne lbl_8018B690
    li r3, 0x0
    b lbl_8018B694
lbl_8018B690:
    bl fn_80146F28
lbl_8018B694:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B6A4() {
    nofralloc
    addi r3, r3, 0x10
    blr
}

extern "C" asm void fn_8018B6AC() {
    nofralloc
    addi r3, r3, 0x10
    blr
}

extern "C" asm void fn_8018B6B4() {
    nofralloc
    li r4, 0x0
    b fn_80222DE0
}

extern "C" asm void fn_8018B6BC() {
    nofralloc
    li r4, 0x0
    b fn_80222DC0
}

extern "C" asm void fn_8018B6C4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002AE40
    addi r3, r31, 0x30
    bl fn_8002AE40
    addi r3, r31, 0x8c
    bl fn_8002AF5C
    mr r3, r31
    bl fn_8002AE08
    addi r3, r31, 0x30
    bl fn_8002AE08
    li r4, 0x0
    stb r4, 0x60(r31)
    stw r4, 0x64(r31)
    stw r4, 0x68(r31)
    li r0, 0x1
    stb r0, 0x6c(r31)
    stw r4, 0x70(r31)
    lfs f1, lbl_804A1028
    stfs f1, 0x74(r31)
    la r3, lbl_804A1028
    lfs f0, 0x4(r3)
    stfs f0, 0x78(r31)
    stfs f1, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f1, 0x88(r31)
    stfs f1, 0x8c(r31)
    stfs f1, 0x90(r31)
    stfs f1, 0x94(r31)
    li r0, 0xff
    stb r0, 0x9a(r31)
    stb r0, 0x99(r31)
    stb r0, 0x98(r31)
    stb r0, 0x9b(r31)
    stb r4, 0x9e(r31)
    stb r4, 0x9d(r31)
    stb r4, 0x9c(r31)
    stb r0, 0x9f(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B780() {
    nofralloc
    b fn_8018B784
}

extern "C" asm void fn_8018B784() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8018B7B4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B7B4() {
    nofralloc
    subi r6, r3, 0x4
    subi r5, r4, 0x4
    li r0, 0x6
    mtctr r0
lbl_8018B7C4:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_8018B7C4
    blr
}

extern "C" asm void fn_8018B7DC() {
    nofralloc
    li r0, 0x0
    stw r0, 0x70(r3)
    blr
}

extern "C" asm void fn_8018B7E8() {
    nofralloc
    stw r4, 0x70(r3)
    stfs f1, 0x74(r3)
    stfs f2, 0x78(r3)
    stfs f3, 0x7c(r3)
    stfs f4, 0x80(r3)
    addi r3, r3, 0x84
    mr r4, r5
    b fn_80030E80
}

extern "C" asm void fn_8018B808() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_8018B820
    lwz r0, 0x50(r3)
    ori r0, r0, 0x2
    stw r0, 0x50(r3)
    blr
lbl_8018B820:
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x50(r3)
    blr
}

extern "C" asm void fn_8018B830() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_8018B848
    lwz r0, 0x50(r3)
    ori r0, r0, 0x1
    stw r0, 0x50(r3)
    blr
lbl_8018B848:
    lwz r0, 0x50(r3)
    clrrwi r0, r0, 1
    stw r0, 0x50(r3)
    blr
}

extern "C" asm void fn_8018B858() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    subic r0, r4, 0x1
    subfe r4, r0, r4
    b fn_8018B808
    blr
}

extern "C" asm void fn_8018B870() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    subic r0, r4, 0x1
    subfe r4, r0, r4
    b fn_8018B830
    blr
}

extern "C" asm void fn_8018B888() {
    nofralloc
    addi r3, r3, 0x38
    blr
}

extern "C" asm void fn_8018B890() {
    nofralloc
    addi r3, r3, 0x38
    b fn_8018B948
}

extern "C" asm void fn_8018B898() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x90
    bl fn_8002B060
    mr r3, r31
    bl fn_801ACD98
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B8D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x9c
    bl fn_8002B060
    mr r3, r31
    bl fn_801ACD98
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B908() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xa8
    bl fn_8002B060
    mr r3, r31
    bl fn_801ACD98
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018B940() {
    nofralloc
    lwz r3, 0x10(r3)
    blr
}

extern "C" asm void fn_8018B948() {
    nofralloc
    addi r3, r3, 0xc
    b fn_80222D54
}

extern "C" asm void fn_8018B950() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8049D860
    cmpwi r0, 0x0
    bne lbl_8018B984
    lis r31, 0x1
    addi r3, r31, -0x8000
    bl fn_80170DFC
    stw r3, lbl_8049D860
    addi r4, r31, -0x8000
    bl DCInvalidateRange
lbl_8018B984:
    lwz r0, lbl_8049D864
    cmpwi r0, 0x0
    bne lbl_8018B9A8
    lis r31, 0x1
    addi r3, r31, -0x8000
    bl fn_80170DFC
    stw r3, lbl_8049D864
    addi r4, r31, -0x8000
    bl DCInvalidateRange
lbl_8018B9A8:
    lwz r0, lbl_8049D86C
    cmpwi r0, 0x0
    bne lbl_8018B9CC
    lis r31, 0x1
    addi r3, r31, -0x8000
    bl fn_80170DFC
    stw r3, lbl_8049D86C
    addi r4, r31, -0x8000
    bl DCInvalidateRange
lbl_8018B9CC:
    lwz r0, lbl_8049D868
    cmpwi r0, 0x0
    bne lbl_8018B9F0
    lis r31, 0x1
    addi r3, r31, -0x8000
    bl fn_80170DFC
    stw r3, lbl_8049D868
    addi r4, r31, -0x8000
    bl DCInvalidateRange
lbl_8018B9F0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018BA04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802E0688
    cmplwi r31, 0x1
    bne lbl_8018BA4C
    li r3, 0x9
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xb
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xd
    li r4, 0x1
    bl fn_802DFDF8
    b lbl_8018BA64
lbl_8018BA4C:
    li r3, 0x9
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xb
    li r4, 0x1
    bl fn_802DFDF8
lbl_8018BA64:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018BA78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x1
    bl fn_802E2ED8
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x2
    li r9, 0x2
    bl fn_802E2EFC
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x4
    bl fn_802E43CC
    li r3, 0x0
    bl fn_802E0FF8
    li r3, 0x0
    bl fn_802E1DA0
    bl fn_8018C980
    bl fn_8018C9DC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_802E4EFC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_802E06BC
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_802E06BC
    li r3, 0x0
    bl fn_8018BA04
    bl fn_802E0688
    li r3, 0x9
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xb
    li r4, 0x1
    bl fn_802DFDF8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018BB64() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r3, 0x7ff
    bl fn_801E2B68
    li r3, 0x1
    bl fn_802E2ED8
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x2
    li r9, 0x2
    bl fn_802E2EFC
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_802E478C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_8018CA80
    li r3, 0x1
    bl fn_802E0FF8
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8018CA80
    addi r3, r1, 0x8
    bl fn_80173750
    addi r3, r1, 0x8
    li r4, 0x1e
    li r5, 0x1
    bl fn_802E576C
    bl fn_8018C9DC
    li r3, 0x0
    bl fn_802E1DA0
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_802E4EFC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_802E06BC
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_802E06BC
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_802E06BC
    li r3, 0x1
    bl fn_8018BA04
    bl fn_802E0688
    li r3, 0x9
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xb
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xd
    li r4, 0x1
    bl fn_802DFDF8
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

extern "C" asm void fn_8018BD44() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r3, r1, 0x8
    bl fn_80016D44
    bl fn_8018BA78
    addi r3, r1, 0x8
    lfs f1, lbl_804A1058
    la r5, lbl_804A1058
    lfs f2, 0x4(r5)
    fmr f3, f1
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lwz r4, 0x54(r4)
    lhz r0, 0xe(r4)
    lfd f4, lbl_804A1048
    stw r0, 0x4c(r1)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    lfs f6, 0x8(r5)
    bl fn_80016CCC
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_802E5554
    li r3, 0x3c
    bl fn_802E574C
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

extern "C" asm void fn_8018BDC8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r3, r1, 0x8
    bl fn_80016D44
    addi r3, r1, 0x8
    bl fn_80016D40
    bl fn_8030DA54
    bl fn_8018BB64
    lis r3, lbl_803C22B0@ha
    addi r4, r3, lbl_803C22B0@l
    lbz r0, 0x21(r4)
    cmpwi r0, 0x0
    bne lbl_8018BE44
    addi r3, r1, 0x8
    lfs f1, lbl_804A1058
    la r5, lbl_804A1058
    lfs f2, 0x4(r5)
    fmr f3, f1
    lwz r4, 0x54(r4)
    lhz r0, 0xe(r4)
    lfd f4, lbl_804A1048
    stw r0, 0x4c(r1)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    lfs f6, 0x8(r5)
    bl fn_80016CCC
    b lbl_8018BE68
lbl_8018BE44:
    addi r3, r1, 0x8
    lfs f1, lbl_804A1058
    la r4, lbl_804A1058
    lfs f2, 0x4(r4)
    fmr f3, f1
    lfs f4, 0xc(r4)
    fmr f5, f1
    lfs f6, 0x8(r4)
    bl fn_80016CCC
lbl_8018BE68:
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_802E5554
    li r3, 0x3c
    bl fn_802E574C
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

extern "C" asm void fn_8018BE8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802E5264
    cmpwi r3, 0x0
    bne lbl_8018BEB4
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8018BEB4:
    lwz r0, 0x0(r31)
    add r0, r0, r3
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018BED4() {
    nofralloc
    b fn_8018BDC8
}

extern "C" asm void fn_8018BED8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D87C
    cmpwi r0, 0x0
    beq lbl_8018BF3C
    li r3, 0x0
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_8018BF34
    bl fn_8018BA78
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    bl fn_802E4FA4
    li r3, 0x0
    bl fn_8017C22C
    lwz r3, lbl_8049D86C
    lwz r4, lbl_8049D87C
    bl DCFlushRange
    lwz r3, lbl_8049D86C
    lwz r4, lbl_8049D87C
    bl fn_802E5314
lbl_8018BF34:
    li r0, 0x0
    stw r0, lbl_8049D87C
lbl_8018BF3C:
    lwz r0, lbl_8049D878
    cmpwi r0, 0x0
    beq lbl_8018BF94
    li r3, 0x0
    bl fn_8017ADBC
    cmpwi r3, 0x0
    beq lbl_8018BF8C
    bl fn_8018BA78
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl fn_802E4FA4
    li r3, 0x0
    bl fn_8017C22C
    lwz r3, lbl_8049D868
    lwz r4, lbl_8049D878
    bl DCFlushRange
    lwz r3, lbl_8049D868
    lwz r4, lbl_8049D878
    bl fn_802E5314
lbl_8018BF8C:
    li r0, 0x0
    stw r0, lbl_8049D878
lbl_8018BF94:
    lwz r0, lbl_8049D870
    cmpwi r0, 0x0
    beq lbl_8018BFC4
    bl fn_8018BD44
    lwz r3, lbl_8049D860
    lwz r4, lbl_8049D870
    bl DCFlushRange
    lwz r3, lbl_8049D860
    lwz r4, lbl_8049D870
    bl fn_802E5314
    li r0, 0x0
    stw r0, lbl_8049D870
lbl_8018BFC4:
    lwz r0, lbl_8049D874
    cmpwi r0, 0x0
    beq lbl_8018BFF4
    bl fn_8018BDC8
    lwz r3, lbl_8049D864
    lwz r4, lbl_8049D874
    bl DCFlushRange
    lwz r3, lbl_8049D864
    lwz r4, lbl_8049D874
    bl fn_802E5314
    li r0, 0x0
    stw r0, lbl_8049D874
lbl_8018BFF4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018C004() {
    nofralloc
    li r0, 0x0
    stw r0, lbl_8049D87C
    stw r0, lbl_8049D878
    stw r0, lbl_8049D874
    stw r0, lbl_8049D870
    blr
}

extern "C" asm void fn_8018C01C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r30, r3
    mr r27, r4
    mr r29, r5
    mr r28, r6
    mr r31, r7
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r3, 0x0
    bl fn_8018BA04
    lwz r5, lbl_8049D870
    lwz r0, lbl_8049D860
    add r3, r0, r5
    lis r4, 0x1
    addi r0, r4, -0x8000
    subf r4, r5, r0
    bl fn_802E51B0
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_802E1ABC
    lfd f2, lbl_804A1050
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    add r29, r30, r29
    lfd f2, lbl_804A1050
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    add r28, r27, r28
    lfd f2, lbl_804A1050
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r28, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    lfd f2, lbl_804A1050
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r28, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    bl fn_8018CA8C
    la r3, lbl_8049D870
    bl fn_8018BE8C
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

extern "C" asm void fn_8018C184() {
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
    stfd f28, 0x30(r1)
    opword 0xF3810038
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r30, r3
    mr r26, r4
    mr r29, r5
    mr r27, r6
    mr r31, r7
    mr r28, r8
    fmr f28, f1
    fmr f29, f2
    fmr f30, f3
    fmr f31, f4
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r3, 0x1
    bl fn_8018BA04
    lwz r5, lbl_8049D874
    lwz r0, lbl_8049D864
    add r3, r0, r5
    lis r4, 0x1
    addi r0, r4, -0x8000
    subf r4, r5, r0
    bl fn_802E51B0
    mr r3, r28
    li r4, 0x0
    bl fn_802E37E0
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_802E1ABC
    lfd f2, lbl_804A1050
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r26, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    fmr f1, f28
    fmr f2, f29
    bl fn_8018CAB0
    add r29, r30, r29
    lfd f2, lbl_804A1050
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r26, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    fmr f1, f30
    fmr f2, f29
    bl fn_8018CAB0
    add r28, r26, r27
    lfd f2, lbl_804A1050
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r28, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    fmr f1, f30
    fmr f2, f31
    bl fn_8018CAB0
    lfd f2, lbl_804A1050
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r28, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    lfs f3, lbl_804A1058
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    fmr f1, f28
    fmr f2, f31
    bl fn_8018CAB0
    bl fn_8018CA8C
    la r3, lbl_8049D874
    bl fn_8018BE8C
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    li r0, 0x58
    opword 0x13C1000C
    lfd f30, 0x50(r1)
    li r0, 0x48
    opword 0x13A1000C
    lfd f29, 0x40(r1)
    li r0, 0x38
    opword 0x1381000C
    lfd f28, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

extern "C" asm void fn_8018C38C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r3, 0x0
    bl fn_8018BA04
    lwz r5, lbl_8049D878
    lwz r0, lbl_8049D868
    add r3, r0, r5
    lis r4, 0x1
    addi r0, r4, -0x8000
    subf r4, r5, r0
    bl fn_802E51B0
    li r3, 0xa8
    li r4, 0x0
    li r5, 0x2
    bl fn_802E1ABC
    lfs f1, 0x0(r29)
    lfs f2, 0x4(r29)
    lfs f3, 0x8(r29)
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    lfs f1, 0x0(r30)
    lfs f2, 0x4(r30)
    lfs f3, 0x8(r30)
    bl fn_8018CA9C
    mr r3, r31
    bl fn_8018CA90
    bl fn_8018CA8C
    la r3, lbl_8049D878
    bl fn_8018BE8C
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018C434() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    stw r31, 0x24(r1)
    mr r31, r3
    fmr f31, f1
    addi r3, r1, 0x14
    li r4, 0x3
    mr r5, r31
    bl fn_80173580
    addi r3, r1, 0x8
    li r4, 0x0
    mr r5, r31
    bl fn_80173580
    addi r3, r1, 0x8
    mr r4, r3
    fmr f1, f31
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    mr r5, r3
    bl fn_80018B00
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    lis r5, 0xff00
    addi r5, r5, 0xff
    bl fn_8018C38C
    addi r3, r1, 0x8
    li r4, 0x1
    mr r5, r31
    bl fn_80173580
    addi r3, r1, 0x8
    mr r4, r3
    fmr f1, f31
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    mr r5, r3
    bl fn_80018B00
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    lis r5, 0xff
    addi r5, r5, 0xff
    bl fn_8018C38C
    addi r3, r1, 0x8
    li r4, 0x2
    mr r5, r31
    bl fn_80173580
    addi r3, r1, 0x8
    mr r4, r3
    fmr f1, f31
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    mr r5, r3
    bl fn_80018B00
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    lis r5, 0x1
    subi r5, r5, 0x1
    bl fn_8018C38C
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

extern "C" asm void fn_8018C544() {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    opword 0xF3E10158
    stfd f30, 0x140(r1)
    opword 0xF3C10148
    stfd f29, 0x130(r1)
    opword 0xF3A10138
    stfd f28, 0x120(r1)
    opword 0xF3810128
    addi r11, r1, 0x120
    bl _savegpr_28
    mr r29, r3
    fmr f28, f1
    mr r28, r4
    li r3, 0x0
    bl fn_8017ADBC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8017B074
    addi r3, r1, 0x8
    li r4, 0x3
    mr r5, r29
    bl fn_801734EC
    lfs f29, lbl_804A1058
    li r29, 0x0
    li r31, 0x0
    la r3, lbl_804A1058
    lfs f31, 0x10(r3)
lbl_8018C5BC:
    addi r30, r1, 0x38
    add r30, r30, r31
    fmr f1, f29
    bl fn_80018C3C
    fmuls f30, f28, f1
    fmr f1, f29
    bl fn_80018C2C
    fmuls f1, f28, f1
    mr r3, r30
    fmr f2, f30
    lfs f3, lbl_804A1058
    bl fn_80018B0C
    mr r3, r30
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_80018AF8
    fadds f29, f29, f31
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    cmpwi r29, 0x11
    blt lbl_8018C5BC
    li r3, 0x0
    bl fn_8018BA04
    lwz r5, lbl_8049D878
    lwz r0, lbl_8049D868
    add r3, r0, r5
    lis r4, 0x1
    addi r0, r4, -0x8000
    subf r4, r5, r0
    bl fn_802E51B0
    li r3, 0xb0
    li r4, 0x0
    li r5, 0x11
    bl fn_802E1ABC
    li r30, 0x0
    li r31, 0x0
lbl_8018C64C:
    addi r3, r1, 0x38
    add r3, r3, r31
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8018CA9C
    mr r3, r28
    bl fn_8018CA90
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x11
    blt lbl_8018C64C
    bl fn_8018CA8C
    la r3, lbl_8049D878
    bl fn_8018BE8C
    li r0, 0x158
    opword 0x13E1000C
    lfd f31, 0x150(r1)
    li r0, 0x148
    opword 0x13C1000C
    lfd f30, 0x140(r1)
    li r0, 0x138
    opword 0x13A1000C
    lfd f29, 0x130(r1)
    li r0, 0x128
    opword 0x1381000C
    lfd f28, 0x120(r1)
    addi r11, r1, 0x120
    bl _restgpr_28
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

extern "C" asm void fn_8018C6D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x6
    li r4, 0x0
    bl fn_802E1CE0
    li r3, 0x6
    li r4, 0x0
    bl fn_802E1D30
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    bl fn_802E1D64
    li r3, 0x2
    bl fn_802E1DA0
    li r3, 0x0
    bl fn_802E59DC
    li r3, 0x0
    bl fn_802E1DE4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_8018CAC0
    addi r4, r1, 0x8
    lwz r0, 0xc(r1)
    stw r0, 0x8(r1)
    li r3, 0x0
    lfs f1, lbl_804A1058
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_802E4A4C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4DD8
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_802E4EFC
    li r3, 0x1
    bl fn_802E4F4C
    li r3, 0x1
    bl fn_802E4F78
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl fn_802E4FA4
    li r3, 0x0
    bl fn_802E4FD8
    li r3, 0x0
    li r4, 0xff
    bl fn_802E50DC
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x7
    li r4, 0x0
    li r5, 0x1
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x9
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0xa
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0xb
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0xd
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0xe
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0xf
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_802E478C
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    bl fn_8018C9DC
    li r3, 0x0
    bl fn_802E2ED8
    li r3, 0x0
    bl fn_802E0FF8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018C980() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_8018CAC0
    addi r4, r1, 0x8
    lwz r0, 0xc(r1)
    stw r0, 0x8(r1)
    li r3, 0x0
    lfs f1, lbl_804A1058
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_802E4A4C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4DD8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018C9DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x2
    bl fn_802E432C
    li r3, 0x3
    bl fn_802E432C
    li r3, 0x4
    bl fn_802E432C
    li r3, 0x5
    bl fn_802E432C
    li r3, 0x6
    bl fn_802E432C
    li r3, 0x7
    bl fn_802E432C
    li r3, 0x8
    bl fn_802E432C
    li r3, 0x9
    bl fn_802E432C
    li r3, 0xa
    bl fn_802E432C
    li r3, 0xb
    bl fn_802E432C
    li r3, 0xc
    bl fn_802E432C
    li r3, 0xd
    bl fn_802E432C
    li r3, 0xe
    bl fn_802E432C
    li r3, 0xf
    bl fn_802E432C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018CA80() {
    nofralloc
    li r7, 0x0
    li r8, 0x7d
    b fn_802E0DD0
}

extern "C" asm void fn_8018CA8C() {
    nofralloc
    blr
}

extern "C" asm void fn_8018CA90() {
    nofralloc
    lis r4, 0xcc01
    stw r3, -0x8000(r4)
    blr
}

extern "C" asm void fn_8018CA9C() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

extern "C" asm void fn_8018CAB0() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

extern "C" asm void fn_8018CAC0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8003D500
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018CAF0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D880
    cmpwi r0, 0x0
    bne lbl_8018CB3C
    bl fn_80039598
    cmpwi r3, 0x0
    beq lbl_8018CB3C
    bl fn_8018CC1C
    b lbl_8018CB20
    b lbl_8018CB3C
lbl_8018CB20:
    bl fn_800389F4
    stw r3, lbl_8049D880
    bl fn_80044680
    cmpwi r3, 0x0
    beq lbl_8018CB3C
    bl fn_8002B9F4
    bl fn_8018CDA0
lbl_8018CB3C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018CB4C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8049D880
    bl fn_8002ADF8
    mr r4, r31
    bl fn_801EDC60
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018CB84() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049D880
    bl fn_8002ADF8
    bl fn_801EDCBC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018CBAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8002AB0C
    bl fn_800344B0
    bl fn_80038AB8
    bl fn_8002AB30
    bl fn_8018CDB4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018CBDC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8018E114
    bl fn_800344D4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018CC00() {
    nofralloc
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x40(r3)
    cmplwi r0, 0x1
    beqlr
    b fn_80038EB4
    blr
}

extern "C" asm void fn_8018CC1C() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x2
    li r5, 0x2
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x3
    li r5, -0x1
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x4
    li r5, -0x1
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x5
    li r5, -0x1
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x6
    li r5, -0x1
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x7
    li r5, -0x1
    bl fn_8003946C
    li r3, 0x0
    li r4, 0x0
    bl fn_8003F5C8
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x44
    bl memset
    li r3, 0x0
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_8003FA5C
    li r29, 0x2
    stw r29, 0x8(r1)
    addi r3, r1, 0x24
    lfs f1, lbl_804A1088
    la r30, lbl_804A1088
    lfs f2, 0x4(r30)
    lfs f3, 0x8(r30)
    bl fn_80018B0C
    li r3, 0x0
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_8003F82C
    li r31, 0x1
    stw r31, 0x8(r1)
    li r3, 0x0
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_8003F82C
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x44
    bl memset
    li r3, 0x0
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_8003FA5C
    stw r29, 0x8(r1)
    addi r3, r1, 0x24
    lfs f1, lbl_804A1088
    lfs f2, 0x4(r30)
    lfs f3, 0x8(r30)
    bl fn_80018B0C
    li r3, 0x0
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_8003F82C
    stw r31, 0x8(r1)
    li r0, 0x0
    stw r0, 0xc(r1)
    li r3, 0x0
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_8003F82C
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

extern "C" asm void fn_8018CDA0() {
    nofralloc
    lis r3, lbl_803D1F08@ha
    addi r3, r3, lbl_803D1F08@l
    li r4, 0x0
    li r5, 0xa4
    b memset
}

extern "C" asm void fn_8018CDB4() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_803D1F08@ha
    addi r31, r3, lbl_803D1F08@l
    lbz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8018CFA8
    addi r30, r31, 0x14
    lwz r3, 0x8(r31)
    addi r0, r3, 0x1
    stw r0, 0x8(r31)
    lfd f2, lbl_804A1078
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0xc(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f31, f1, f0
    lwz r0, 0x8c(r31)
    stw r0, 0x0(r30)
    lfs f1, 0x78(r31)
    lfs f2, 0x90(r31)
    fmr f3, f31
    bl fn_80172A18
    stfs f1, 0x4(r30)
    lfs f1, 0x7c(r31)
    lfs f2, 0x94(r31)
    fmr f3, f31
    bl fn_80172A18
    stfs f1, 0x8(r30)
    lbz r0, 0x88(r31)
    lfd f2, lbl_804A1080
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lbz r0, 0xa0(r31)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    fmr f3, f31
    bl fn_80172A18
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x14(r30)
    lbz r0, 0x89(r31)
    lfd f2, lbl_804A1080
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lbz r0, 0xa1(r31)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    fmr f3, f31
    bl fn_80172A18
    fctiwz f0, f1
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    stb r0, 0x15(r30)
    lbz r0, 0x8a(r31)
    lfd f2, lbl_804A1080
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lbz r0, 0xa2(r31)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    fmr f3, f31
    bl fn_80172A18
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    stb r0, 0x16(r30)
    lbz r0, 0x8b(r31)
    lfd f2, lbl_804A1080
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lbz r0, 0xa3(r31)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f2
    fmr f3, f31
    bl fn_80172A18
    fctiwz f0, f1
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stb r0, 0x17(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_8018CFCC
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8018CF7C
    mr r3, r30
    li r4, 0x1
    bl fn_8018CFCC
    b lbl_8018CF90
lbl_8018CF7C:
    li r0, 0x0
    stw r0, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    bl fn_8018CFCC
lbl_8018CF90:
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    cmpw r3, r0
    blt lbl_8018CFA8
    li r0, 0x0
    stb r0, 0x4(r31)
lbl_8018CFA8:
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

extern "C" asm void fn_8018CFCC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r5, r3
    lwz r0, 0x14(r3)
    stw r0, 0x8(r1)
    mr r3, r4
    lwz r4, 0x0(r5)
    lfs f1, 0x4(r5)
    lfs f2, 0x8(r5)
    addi r5, r1, 0x8
    bl fn_800394E4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018D00C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    lwz r3, lbl_8049D880
    bl fn_8002ADF8
    mr r4, r31
    bl fn_801EDD00
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8003A130
    addi r3, r1, 0xc
    mr r4, r30
    addi r5, r30, 0x4
    addi r6, r30, 0x8
    addi r7, r30, 0xc
    addi r8, r30, 0x10
    addi r9, r30, 0x14
    bl fn_801F43C4
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018D080() {
    nofralloc
    lis r4, lbl_803D1F08@ha
    addi r4, r4, lbl_803D1F08@l
    stw r3, 0x10(r4)
    blr
}

extern "C" asm void fn_8018D090() {
    nofralloc
    mr r4, r3
    lis r3, lbl_803D1F08@ha
    addi r3, r3, lbl_803D1F08@l
    lwz r0, 0x10(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2c
    b fn_8018D00C
}

extern "C" asm void fn_8018D0B0() {
    nofralloc
    mr r4, r3
    lis r3, lbl_803D1F08@ha
    addi r3, r3, lbl_803D1F08@l
    lwz r0, 0x10(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2c
    b fn_8018CFCC
}

extern "C" asm void fn_8018D0D0() {
    nofralloc
    lis r3, lbl_803D1F08@ha
    addi r3, r3, lbl_803D1F08@l
    lwz r0, 0x10(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    addi r3, r3, 0x2c
    blr
}

extern "C" asm void fn_8018D0EC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lis r30, lbl_803D1F08@ha
    addi r31, r30, lbl_803D1F08@l
    addi r3, r31, 0x74
    li r4, 0x0
    bl fn_8018D00C
    addi r3, r31, 0x8c
    mr r4, r27
    li r5, 0x18
    bl memcpy
    lwz r0, lbl_803D1F08@l(r30)
    rlwinm r0, r0, 0, 24, 22
    or r0, r0, r29
    stw r0, lbl_803D1F08@l(r30)
    li r0, 0x1
    stb r0, 0x4(r31)
    li r0, 0x0
    stw r0, 0x8(r31)
    stw r28, 0xc(r31)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018D16C() {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_8035F3B8@ha
    addi r3, r3, lbl_8035F3B8@l
    lwzx r3, r3, r0
    blr
}

extern "C" asm void fn_8018D180() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_8018D2EC
    li r3, 0x0
    bl fn_8029AD58
    bl fn_8029BB20
    li r3, 0x1
    lis r4, 0x3f
    addi r4, r4, 0x40
    li r5, 0x0
    li r6, 0x4004
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r31, r4, lbl_803C1A40@l
    stw r3, 0x80c(r31)
    li r3, 0x1
    lis r4, 0x16
    li r5, 0x0
    li r6, 0x4004
    bl fn_80170410
    stw r3, 0x82c(r31)
    lwz r3, 0x80c(r31)
    lis r4, 0x3f
    li r5, 0x0
    bl fn_80170E2C
    stw r3, lbl_8049D888
    addi r3, r1, 0x8
    bl fn_8018E390
    li r0, 0x4
    stw r0, 0x8(r1)
    li r3, 0x4000
    stw r3, 0xc(r1)
    li r0, 0x3
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80218B14
    mr r30, r3
    lwz r3, 0x82c(r31)
    mr r4, r30
    li r5, 0x0
    bl fn_80170E2C
    mr r4, r3
    stw r3, lbl_8049D88C
    addi r3, r1, 0x8
    mr r5, r30
    bl fn_80218B94
    bl fn_8018DE10
    cmpwi r3, 0x1
    beq lbl_8018D268
    bl fn_8018DE10
    cmpwi r3, 0x2
    bne lbl_8018D270
lbl_8018D268:
    li r3, 0x0
    bl fn_8018DD8C
lbl_8018D270:
    li r31, 0x0
lbl_8018D274:
    mr r3, r31
    bl fn_8018E734
    bl fn_8018D304
    addi r31, r31, 0x1
    cmpwi r31, 0x18
    blt lbl_8018D274
    lis r3, lbl_803D3590@ha
    addi r3, r3, lbl_803D3590@l
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r31, lbl_803D35B0@ha
    addi r3, r31, lbl_803D35B0@l
    li r4, 0x0
    li r5, 0x1368
    bl memset
    bl fn_8018F600
    bl fn_8018E108
    addi r31, r31, lbl_803D35B0@l
    addi r3, r31, 0x1050
    lis r4, fn_8018DA70@ha
    addi r4, r4, fn_8018DA70@l
    mr r5, r31
    addi r6, r31, 0x1048
    li r7, 0x1000
    li r8, 0x3
    li r9, 0x1
    bl fn_8031CDF0
    addi r3, r31, 0x1050
    bl fn_8031D460
lbl_8018D2EC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

extern "C" asm void fn_8018D304() {
    nofralloc
    li r4, 0x0
    stw r4, 0x0(r3)
    li r0, -0x1
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
    stw r4, 0x14(r3)
    stw r4, 0x18(r3)
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r4, 0x24(r3)
    lfs f0, lbl_804A10A0
    stfs f0, 0x34(r3)
    la r4, lbl_804A10A0
    lfs f0, 0x4(r4)
    stfs f0, 0x38(r3)
    stw r0, 0x54(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    addi r3, r3, 0x28
    b fn_80061FA0
}

extern "C" asm void fn_8018D364() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018D3F4
    bl fn_8018D408
    bl fn_8029BB74
    li r3, 0x0
    bl fn_8029AC1C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x80c(r3)
    cmpwi r3, 0x0
    beq lbl_8018D3D4
    lwz r4, lbl_8049D888
    cmpwi r4, 0x0
    beq lbl_8018D3BC
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D888
lbl_8018D3BC:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r3, 0x80c(r31)
    bl fn_80170560
    li r0, 0x0
    stw r0, 0x80c(r31)
lbl_8018D3D4:
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r3, 0x82c(r31)
    cmpwi r3, 0x0
    beq lbl_8018D3F4
    bl fn_80170560
    li r0, 0x0
    stw r0, 0x82c(r31)
lbl_8018D3F4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018D408() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018D548
    bl fn_8018F7B8
    li r31, 0x0
lbl_8018D42C:
    mr r3, r31
    bl fn_8018E734
    bl fn_8018D304
    addi r31, r31, 0x1
    cmpwi r31, 0x18
    blt lbl_8018D42C
    lis r3, lbl_803D3590@ha
    addi r3, r3, lbl_803D3590@l
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r4, lbl_8049D894
    cmpwi r4, 0x0
    beq lbl_8018D47C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x82c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D894
lbl_8018D47C:
    lwz r4, lbl_8049D898
    cmpwi r4, 0x0
    beq lbl_8018D4A0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x82c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D898
lbl_8018D4A0:
    bl fn_8018E108
    lis r31, lbl_803D2154@ha
    addi r3, r31, lbl_803D2154@l
    bl fn_802156E4
    cmpwi r3, 0x0
    beq lbl_8018D4C0
    addi r3, r31, lbl_803D2154@l
    bl fn_80215804
lbl_8018D4C0:
    lis r31, lbl_803D1FBC@ha
    addi r3, r31, lbl_803D1FBC@l
    bl fn_80213774
    cmpwi r3, 0x0
    beq lbl_8018D4F0
    lis r3, lbl_803D3278@ha
    addi r3, r3, lbl_803D3278@l
    bl fn_8031C828
    cmpwi r3, 0x0
    beq lbl_8018D4F0
    addi r3, r31, lbl_803D1FBC@l
    bl fn_8020B99C
lbl_8018D4F0:
    lis r31, lbl_803D224C@ha
    addi r3, r31, lbl_803D224C@l
    bl fn_8018E470
    cmpwi r3, 0x0
    beq lbl_8018D50C
    addi r3, r31, lbl_803D224C@l
    bl fn_80217DE4
lbl_8018D50C:
    lwz r4, lbl_8049D89C
    cmpwi r4, 0x0
    beq lbl_8018D530
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x82c(r3)
    bl fn_80170E84
    li r0, 0x0
    stw r0, lbl_8049D89C
lbl_8018D530:
    lwz r3, lbl_8049D890
    cmpwi r3, 0x0
    beq lbl_8018D548
    bl fn_8030C478
    li r0, 0x0
    stw r0, lbl_8049D890
lbl_8018D548:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

extern "C" asm void fn_8018D55C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_8029AD3C
    cmpwi r3, 0x0
    beq lbl_8018D594
    lis r31, lbl_803D224C@ha
    addi r3, r31, lbl_803D224C@l
    bl fn_8018E470
    cmpwi r3, 0x0
    beq lbl_8018D594
    addi r3, r31, lbl_803D224C@l
    bl fn_80217E5C
lbl_8018D594:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
