#include "types.h"

// Translation unit: src/krs_eye.cpp
// Total functions: 19

// Small Data symbols (@sda21)
extern "C" float lbl_804A0310;

// Forward declarations
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018AF4();
extern "C" void fn_80018AF8();
extern "C" void fn_80018AFC();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_80020D20();
extern "C" void fn_800515D8();
extern "C" void fn_800515DC();
extern "C" void fn_800EA154();
extern "C" void fn_800EA15C();
extern "C" void fn_800EAE74();
extern "C" void fn_800EB5B8();
extern "C" void fn_800EBA1C();
extern "C" void fn_800EC030();
extern "C" void fn_800EC644();
extern "C" void fn_800ECAA8();
extern "C" void fn_800ED0D4();
extern "C" void fn_800ED700();
extern "C" void fn_800ED8CC();
extern "C" void fn_800EDA94();
extern "C" void fn_800EDC60();
extern "C" void fn_800EDE28();
extern "C" void fn_800EDFF4();
extern "C" void fn_800EE1BC();
extern "C" void fn_800EE388();
extern "C" void fn_800EE550();
extern "C" void fn_800EEA94();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_800EA154
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EA154() {
    nofralloc
    li r5, 0x0
    b fn_800EA15C
}

// ----------------------------------------------------------------------------
// fn_800EA15C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EA15C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    mr r31, r5
    li r4, 0x22
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800EAE50
    cmpwi r31, 0x0
    beq lbl_800EA1A0
    b lbl_800EA1B4
lbl_800EA1A0:
    lwz r3, 0x110(r30)
    li r4, 0x1180
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800EA1B4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x1180
    bl memset
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x24(r31)
    addi r3, r31, 0x28
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x88(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x8c(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_8018149C
    stw r3, 0x90(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_8018149C
    stw r3, 0x94(r31)
    mr r3, r30
    li r4, 0xb5
    bl fn_8018149C
    stw r3, 0x98(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_80181504
    stw r3, 0x9c(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_80181504
    stw r3, 0xa0(r31)
    mr r3, r30
    li r4, 0xb5
    bl fn_80181504
    stw r3, 0xa4(r31)
    addi r3, r31, 0xa8
    lwz r4, 0x8c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x90(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x138
    addi r4, r31, 0xa8
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x1c8(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x1cc(r31)
    mr r3, r30
    li r4, 0xb6
    bl fn_8018149C
    stw r3, 0x1d0(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_8018149C
    stw r3, 0x1d4(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_8018149C
    stw r3, 0x1d8(r31)
    mr r3, r30
    li r4, 0xb6
    bl fn_80181504
    stw r3, 0x1dc(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_80181504
    stw r3, 0x1e0(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_80181504
    stw r3, 0x1e4(r31)
    addi r3, r31, 0x1e8
    lwz r4, 0x1cc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1d0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x278
    addi r4, r31, 0x1e8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x308(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x30c(r31)
    mr r3, r30
    li r4, 0xb9
    bl fn_8018149C
    stw r3, 0x310(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_8018149C
    stw r3, 0x314(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_8018149C
    stw r3, 0x318(r31)
    mr r3, r30
    li r4, 0xb9
    bl fn_80181504
    stw r3, 0x31c(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_80181504
    stw r3, 0x320(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_80181504
    stw r3, 0x324(r31)
    addi r3, r31, 0x328
    lwz r4, 0x30c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x310(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x3b8
    addi r4, r31, 0x328
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x448(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x44c(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_8018149C
    stw r3, 0x450(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_8018149C
    stw r3, 0x454(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_8018149C
    stw r3, 0x458(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_80181504
    stw r3, 0x45c(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_80181504
    stw r3, 0x460(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_80181504
    stw r3, 0x464(r31)
    addi r3, r31, 0x468
    lwz r4, 0x44c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x450(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x4f8
    addi r4, r31, 0x468
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x588(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x58c(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_8018149C
    stw r3, 0x590(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_80181504
    stw r3, 0x594(r31)
    addi r3, r31, 0x598
    lwz r4, 0x58c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x590(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x5c8
    addi r4, r31, 0x598
    bl fn_801734E4
    mr r3, r30
    li r4, 0xbf
    bl fn_8018149C
    stw r3, 0x5f8(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_80181504
    stw r3, 0x5fc(r31)
    mr r3, r30
    li r4, 0xc0
    bl fn_8018149C
    stw r3, 0x600(r31)
    mr r3, r30
    li r4, 0xc1
    bl fn_8018149C
    stw r3, 0x604(r31)
    mr r3, r30
    li r4, 0xc2
    bl fn_8018149C
    stw r3, 0x608(r31)
    mr r3, r30
    li r4, 0xc0
    bl fn_80181504
    stw r3, 0x60c(r31)
    mr r3, r30
    li r4, 0xc1
    bl fn_80181504
    stw r3, 0x610(r31)
    mr r3, r30
    li r4, 0xc2
    bl fn_80181504
    stw r3, 0x614(r31)
    addi r3, r31, 0x618
    lwz r4, 0x5fc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x600(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x6a8
    addi r4, r31, 0x618
    bl fn_801734E4
    mr r3, r30
    li r4, 0xbf
    bl fn_8018149C
    stw r3, 0x738(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_80181504
    stw r3, 0x73c(r31)
    mr r3, r30
    li r4, 0xc3
    bl fn_8018149C
    stw r3, 0x740(r31)
    mr r3, r30
    li r4, 0xc4
    bl fn_8018149C
    stw r3, 0x744(r31)
    mr r3, r30
    li r4, 0xc5
    bl fn_8018149C
    stw r3, 0x748(r31)
    mr r3, r30
    li r4, 0xc3
    bl fn_80181504
    stw r3, 0x74c(r31)
    mr r3, r30
    li r4, 0xc4
    bl fn_80181504
    stw r3, 0x750(r31)
    mr r3, r30
    li r4, 0xc5
    bl fn_80181504
    stw r3, 0x754(r31)
    addi r3, r31, 0x758
    lwz r4, 0x73c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x740(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x7e8
    addi r4, r31, 0x758
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x878(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x87c(r31)
    mr r3, r30
    li r4, 0xc6
    bl fn_8018149C
    stw r3, 0x880(r31)
    mr r3, r30
    li r4, 0xc7
    bl fn_8018149C
    stw r3, 0x884(r31)
    mr r3, r30
    li r4, 0xc8
    bl fn_8018149C
    stw r3, 0x888(r31)
    mr r3, r30
    li r4, 0xc6
    bl fn_80181504
    stw r3, 0x88c(r31)
    mr r3, r30
    li r4, 0xc7
    bl fn_80181504
    stw r3, 0x890(r31)
    mr r3, r30
    li r4, 0xc8
    bl fn_80181504
    stw r3, 0x894(r31)
    addi r3, r31, 0x898
    lwz r4, 0x87c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x880(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x928
    addi r4, r31, 0x898
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x9b8(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x9bc(r31)
    mr r3, r30
    li r4, 0xc9
    bl fn_8018149C
    stw r3, 0x9c0(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_8018149C
    stw r3, 0x9c4(r31)
    mr r3, r30
    li r4, 0xcb
    bl fn_8018149C
    stw r3, 0x9c8(r31)
    mr r3, r30
    li r4, 0xc9
    bl fn_80181504
    stw r3, 0x9cc(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_80181504
    stw r3, 0x9d0(r31)
    mr r3, r30
    li r4, 0xcb
    bl fn_80181504
    stw r3, 0x9d4(r31)
    addi r3, r31, 0x9d8
    lwz r4, 0x9bc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x9c0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xa68
    addi r4, r31, 0x9d8
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb
    bl fn_8018149C
    stw r3, 0xaf8(r31)
    mr r3, r30
    li r4, 0xb
    bl fn_80181504
    stw r3, 0xafc(r31)
    mr r3, r30
    li r4, 0xc
    bl fn_8018149C
    stw r3, 0xb00(r31)
    mr r3, r30
    li r4, 0xd
    bl fn_8018149C
    stw r3, 0xb04(r31)
    mr r3, r30
    li r4, 0xe
    bl fn_8018149C
    stw r3, 0xb08(r31)
    mr r3, r30
    li r4, 0xc
    bl fn_80181504
    stw r3, 0xb0c(r31)
    mr r3, r30
    li r4, 0xd
    bl fn_80181504
    stw r3, 0xb10(r31)
    mr r3, r30
    li r4, 0xe
    bl fn_80181504
    stw r3, 0xb14(r31)
    mr r3, r30
    li r4, 0xb
    bl fn_8018149C
    stw r3, 0xb18(r31)
    mr r3, r30
    li r4, 0xb
    bl fn_80181504
    stw r3, 0xb1c(r31)
    mr r3, r30
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0xb20(r31)
    mr r3, r30
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0xb24(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0xb28(r31)
    mr r3, r30
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0xb2c(r31)
    mr r3, r30
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0xb30(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0xb34(r31)
    addi r3, r31, 0xb38
    lwz r4, 0xb1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0xb20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xbc8
    addi r4, r31, 0xb38
    bl fn_801734E4
    mr r3, r30
    li r4, 0x7
    bl fn_8018149C
    stw r3, 0xc58(r31)
    mr r3, r30
    li r4, 0x7
    bl fn_80181504
    stw r3, 0xc5c(r31)
    mr r3, r30
    li r4, 0x8
    bl fn_8018149C
    stw r3, 0xc60(r31)
    mr r3, r30
    li r4, 0x9
    bl fn_8018149C
    stw r3, 0xc64(r31)
    mr r3, r30
    li r4, 0xa
    bl fn_8018149C
    stw r3, 0xc68(r31)
    mr r3, r30
    li r4, 0x8
    bl fn_80181504
    stw r3, 0xc6c(r31)
    mr r3, r30
    li r4, 0x9
    bl fn_80181504
    stw r3, 0xc70(r31)
    mr r3, r30
    li r4, 0xa
    bl fn_80181504
    stw r3, 0xc74(r31)
    mr r3, r30
    li r4, 0x7
    bl fn_8018149C
    stw r3, 0xc78(r31)
    mr r3, r30
    li r4, 0x7
    bl fn_80181504
    stw r3, 0xc7c(r31)
    mr r3, r30
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0xc80(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0xc84(r31)
    mr r3, r30
    li r4, 0xa9
    bl fn_8018149C
    stw r3, 0xc88(r31)
    mr r3, r30
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0xc8c(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0xc90(r31)
    mr r3, r30
    li r4, 0xa9
    bl fn_80181504
    stw r3, 0xc94(r31)
    addi r3, r31, 0xc98
    lwz r4, 0xc7c(r31)
    addi r4, r4, 0x224
    lwz r5, 0xc80(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xd28
    addi r4, r31, 0xc98
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0xdb8(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0xdbc(r31)
    mr r3, r30
    li r4, 0x4
    bl fn_8018149C
    stw r3, 0xdc0(r31)
    mr r3, r30
    li r4, 0x4
    bl fn_80181504
    stw r3, 0xdc4(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xdc8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xdcc(r31)
    mr r3, r30
    li r4, 0x12
    bl fn_8018149C
    stw r3, 0xdd0(r31)
    mr r3, r30
    li r4, 0x12
    bl fn_80181504
    stw r3, 0xdd4(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0xdd8(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_80181504
    stw r3, 0xddc(r31)
    mr r3, r30
    li r4, 0x14
    bl fn_8018149C
    stw r3, 0xde0(r31)
    mr r3, r30
    li r4, 0x14
    bl fn_80181504
    stw r3, 0xde4(r31)
    mr r3, r30
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0xde8(r31)
    mr r3, r30
    li r4, 0xf
    bl fn_80181504
    stw r3, 0xdec(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0xdf0(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_80181504
    stw r3, 0xdf4(r31)
    mr r3, r30
    li r4, 0x11
    bl fn_8018149C
    stw r3, 0xdf8(r31)
    mr r3, r30
    li r4, 0x11
    bl fn_80181504
    stw r3, 0xdfc(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0xe00(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_80181504
    stw r3, 0xe04(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_8018149C
    stw r3, 0xe08(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_80181504
    stw r3, 0xe0c(r31)
    addi r3, r31, 0xe10
    lwz r4, 0xe04(r31)
    addi r4, r4, 0x224
    lwz r5, 0xe08(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xe40
    addi r4, r31, 0xe10
    bl fn_801734E4
    mr r3, r30
    li r4, 0xae
    bl fn_8018149C
    stw r3, 0xe70(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_80181504
    stw r3, 0xe74(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_8018149C
    stw r3, 0xe78(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_80181504
    stw r3, 0xe7c(r31)
    addi r3, r31, 0xe80
    lwz r4, 0xe74(r31)
    addi r4, r4, 0x224
    lwz r5, 0xe78(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xeb0
    addi r4, r31, 0xe80
    bl fn_801734E4
    mr r3, r30
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0xee0(r31)
    mr r3, r30
    li r4, 0x13
    bl fn_80181504
    stw r3, 0xee4(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_8018149C
    stw r3, 0xee8(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_80181504
    stw r3, 0xeec(r31)
    addi r3, r31, 0xef0
    lwz r4, 0xee4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xee8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xf20
    addi r4, r31, 0xef0
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb0
    bl fn_8018149C
    stw r3, 0xf50(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_80181504
    stw r3, 0xf54(r31)
    mr r3, r30
    li r4, 0xb1
    bl fn_8018149C
    stw r3, 0xf58(r31)
    mr r3, r30
    li r4, 0xb1
    bl fn_80181504
    stw r3, 0xf5c(r31)
    addi r3, r31, 0xf60
    lwz r4, 0xf54(r31)
    addi r4, r4, 0x224
    lwz r5, 0xf58(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xf90
    addi r4, r31, 0xf60
    bl fn_801734E4
    mr r3, r30
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0xfc0(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_80181504
    stw r3, 0xfc4(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_8018149C
    stw r3, 0xfc8(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_80181504
    stw r3, 0xfcc(r31)
    addi r3, r31, 0xfd0
    lwz r4, 0xfc4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xfc8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1000
    addi r4, r31, 0xfd0
    bl fn_801734E4
    mr r3, r30
    li r4, 0xaa
    bl fn_8018149C
    stw r3, 0x1030(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_80181504
    stw r3, 0x1034(r31)
    mr r3, r30
    li r4, 0xab
    bl fn_8018149C
    stw r3, 0x1038(r31)
    mr r3, r30
    li r4, 0xab
    bl fn_80181504
    stw r3, 0x103c(r31)
    addi r3, r31, 0x1040
    lwz r4, 0x1034(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1038(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1070
    addi r4, r31, 0x1040
    bl fn_801734E4
    mr r3, r30
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0x10a0(r31)
    mr r3, r30
    li r4, 0x10
    bl fn_80181504
    stw r3, 0x10a4(r31)
    mr r3, r30
    li r4, 0xac
    bl fn_8018149C
    stw r3, 0x10a8(r31)
    mr r3, r30
    li r4, 0xac
    bl fn_80181504
    stw r3, 0x10ac(r31)
    addi r3, r31, 0x10b0
    lwz r4, 0x10a4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x10a8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x10e0
    addi r4, r31, 0x10b0
    bl fn_801734E4
    mr r3, r30
    li r4, 0xac
    bl fn_8018149C
    stw r3, 0x1110(r31)
    mr r3, r30
    li r4, 0xac
    bl fn_80181504
    stw r3, 0x1114(r31)
    mr r3, r30
    li r4, 0xad
    bl fn_8018149C
    stw r3, 0x1118(r31)
    mr r3, r30
    li r4, 0xad
    bl fn_80181504
    stw r3, 0x111c(r31)
    addi r3, r31, 0x1120
    lwz r4, 0x1114(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1118(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1150
    addi r4, r31, 0x1120
    bl fn_801734E4
    mr r3, r30
    mr r4, r31
    li r5, 0x22
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800EAE5C
lbl_800EAE50:
    mr r3, r30
    mr r4, r29
    bl fn_800EAE74
lbl_800EAE5C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800EAE74
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EAE74() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x280
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
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    lfs f31, lbl_804A0310
    la r31, lbl_804A0310
    lfs f29, 0x4(r31)
    lwz r29, 0x104(r3)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x220(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x224(r1)
    stfs f31, 0x228(r1)
    stfs f29, 0x22c(r1)
    stfs f29, 0x210(r1)
    stfs f31, 0x214(r1)
    stfs f31, 0x218(r1)
    stfs f29, 0x21c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x1f0(r1)
    stw r0, 0x1f4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x1f8(r1)
    stw r0, 0x1fc(r1)
    addi r7, r1, 0x1f0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x200(r1)
    stw r0, 0x204(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x208(r1)
    stw r0, 0x20c(r1)
    addi r6, r1, 0x200
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ED700
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x1d0(r1)
    stw r0, 0x1d4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x1d8(r1)
    stw r0, 0x1dc(r1)
    addi r7, r1, 0x1d0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x1e0(r1)
    stw r0, 0x1e4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x1e8(r1)
    stw r0, 0x1ec(r1)
    addi r6, r1, 0x1e0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ED8CC
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x1b8(r1)
    stw r0, 0x1bc(r1)
    addi r7, r1, 0x1b0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x1c0(r1)
    stw r0, 0x1c4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x1c8(r1)
    stw r0, 0x1cc(r1)
    addi r6, r1, 0x1c0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDA94
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x190(r1)
    stw r0, 0x194(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x198(r1)
    stw r0, 0x19c(r1)
    addi r7, r1, 0x190
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x1a0(r1)
    stw r0, 0x1a4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x1a8(r1)
    stw r0, 0x1ac(r1)
    addi r6, r1, 0x1a0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDC60
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x170(r1)
    stw r0, 0x174(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x178(r1)
    stw r0, 0x17c(r1)
    addi r7, r1, 0x170
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x180(r1)
    stw r0, 0x184(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x188(r1)
    stw r0, 0x18c(r1)
    addi r6, r1, 0x180
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDE28
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x158(r1)
    stw r0, 0x15c(r1)
    addi r7, r1, 0x150
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x160(r1)
    stw r0, 0x164(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x168(r1)
    stw r0, 0x16c(r1)
    addi r6, r1, 0x160
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EDFF4
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x130(r1)
    stw r0, 0x134(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    addi r7, r1, 0x130
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x140(r1)
    stw r0, 0x144(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x148(r1)
    stw r0, 0x14c(r1)
    addi r6, r1, 0x140
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EE1BC
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    addi r7, r1, 0x110
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x120(r1)
    stw r0, 0x124(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    addi r6, r1, 0x120
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EE388
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_800EB574
    lfs f1, lbl_804A0310
    stfs f1, 0x220(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x224(r1)
    stfs f1, 0x228(r1)
    fmr f0, f29
    stfs f0, 0x22c(r1)
    stfs f0, 0x210(r1)
    stfs f1, 0x214(r1)
    stfs f1, 0x218(r1)
    stfs f0, 0x21c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    addi r7, r1, 0xf0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    addi r6, r1, 0x100
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EB5B8
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EBA1C
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EC030
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EC644
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ECAA8
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800ED0D4
    lfs f1, lbl_804A0310
    stfs f1, 0x220(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x224(r1)
    stfs f1, 0x228(r1)
    fmr f0, f29
    stfs f0, 0x22c(r1)
    stfs f0, 0x210(r1)
    stfs f1, 0x214(r1)
    stfs f1, 0x218(r1)
    stfs f0, 0x21c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x14(r31)
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EE550
    lwz r3, 0x210(r1)
    lwz r0, 0x214(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x218(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x220(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x228(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r27
    mr r4, r28
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800EEA94
lbl_800EB574:
    li r3, 0x1
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
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EB5B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EB5B8() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x150
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_28
    mr r31, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x20(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x28
    addi r4, r1, 0xc0
    bl fn_801734E4
    addi r3, r1, 0x80
    addi r4, r31, 0x28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r31, 0x58
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f30
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xb10(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f1, lbl_804A0310
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800EB820
    cmpwi r28, 0x2e
    beq lbl_800EB858
    bge lbl_800EB80C
    cmpwi r28, 0x2a
    bge lbl_800EB800
    cmpwi r28, 0x12
    bge lbl_800EB8C8
    cmpwi r28, 0x10
    bge lbl_800EB858
    b lbl_800EB8C8
lbl_800EB800:
    cmpwi r28, 0x2c
    bge lbl_800EB8C8
    b lbl_800EB858
lbl_800EB80C:
    cmpwi r28, 0x6b
    bge lbl_800EB8C8
    cmpwi r28, 0x66
    bge lbl_800EB858
    b lbl_800EB8C8
lbl_800EB820:
    cmpwi r28, 0x8b
    beq lbl_800EB858
    bge lbl_800EB84C
    cmpwi r28, 0x88
    bge lbl_800EB840
    cmpwi r28, 0x86
    bge lbl_800EB8C8
    b lbl_800EB858
lbl_800EB840:
    cmpwi r28, 0x8a
    bge lbl_800EB8C8
    b lbl_800EB858
lbl_800EB84C:
    cmpwi r28, 0xb1
    beq lbl_800EB858
    b lbl_800EB8C8
lbl_800EB858:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB874
    stfs f0, 0x20(r1)
lbl_800EB874:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB890
    stfs f0, 0x24(r1)
lbl_800EB890:
    lfs f1, 0x24(r1)
    lfs f0, lbl_804A0310
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EB8A8
    stfs f0, 0x24(r1)
lbl_800EB8A8:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB954
    stfs f0, 0x28(r1)
    b lbl_800EB954
lbl_800EB8C8:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB8E4
    stfs f0, 0x20(r1)
lbl_800EB8E4:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB900
    stfs f0, 0x24(r1)
lbl_800EB900:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EB91C
    stfs f0, 0x24(r1)
lbl_800EB91C:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EB938
    stfs f0, 0x28(r1)
lbl_800EB938:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EB954
    stfs f0, 0x28(r1)
lbl_800EB954:
    lwz r3, 0x20(r31)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x20(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EBA1C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EBA1C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x200
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
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    subi r11, r12, 0xc0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f20, f1
    fmr f21, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f26, 0x4(r3)
    lfs f27, 0x3c(r3)
    lfs f28, 0x18(r3)
    lfs f29, 0x20(r3)
    lfs f22, lbl_804A0310
    lfs f23, 0x30(r3)
    lfs f25, 0x38(r3)
    lfs f24, 0x34(r3)
    lfs f31, 0x40(r3)
    lfs f30, 0x24(r3)
lbl_800EBB7C:
    add r3, r27, r25
    lwz r3, 0x90(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800EBBE0
    add r4, r27, r26
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x8c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xa8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EBC28
lbl_800EBBE0:
    add r4, r27, r26
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x9c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xa8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EBC28:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xa8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x138
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f20
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800EBCE0
    bge lbl_800EBCC0
    cmpwi r31, 0x0
    bge lbl_800EBCCC
    b lbl_800EBD04
lbl_800EBCC0:
    cmpwi r31, 0x3
    bge lbl_800EBD04
    b lbl_800EBCF4
lbl_800EBCCC:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EBD04
lbl_800EBCE0:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EBD04
lbl_800EBCF4:
    addi r3, r1, 0x90
    lwz r4, 0xb14(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EBD04:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f22, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x30(r1)
    stfs f23, 0x38(r1)
    stfs f22, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800EBD6C
    b lbl_800EBD74
lbl_800EBD6C:
    stfs f24, 0x34(r1)
    b lbl_800EBD78
lbl_800EBD74:
    stfs f25, 0x34(r1)
lbl_800EBD78:
    cmpwi r28, 0x84
    bge lbl_800EBDC8
    cmpwi r28, 0x2e
    beq lbl_800EBE00
    bge lbl_800EBDB4
    cmpwi r28, 0x2a
    bge lbl_800EBDA8
    cmpwi r28, 0x12
    bge lbl_800EBE54
    cmpwi r28, 0x10
    bge lbl_800EBE00
    b lbl_800EBE54
lbl_800EBDA8:
    cmpwi r28, 0x2c
    bge lbl_800EBE54
    b lbl_800EBE00
lbl_800EBDB4:
    cmpwi r28, 0x6b
    bge lbl_800EBE54
    cmpwi r28, 0x66
    bge lbl_800EBE00
    b lbl_800EBE54
lbl_800EBDC8:
    cmpwi r28, 0x8b
    beq lbl_800EBE00
    bge lbl_800EBDF4
    cmpwi r28, 0x88
    bge lbl_800EBDE8
    cmpwi r28, 0x86
    bge lbl_800EBE54
    b lbl_800EBE00
lbl_800EBDE8:
    cmpwi r28, 0x8a
    bge lbl_800EBE54
    b lbl_800EBE00
lbl_800EBDF4:
    cmpwi r28, 0xb1
    beq lbl_800EBE00
    b lbl_800EBE54
lbl_800EBE00:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800EBE10
    stfs f26, 0x20(r1)
lbl_800EBE10:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_800EBE20
    stfs f27, 0x24(r1)
lbl_800EBE20:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800EBE30
    stfs f28, 0x24(r1)
lbl_800EBE30:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_800EBE40
    stfs f29, 0x28(r1)
lbl_800EBE40:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    ble lbl_800EBEB8
    stfs f30, 0x28(r1)
    b lbl_800EBEB8
lbl_800EBE54:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800EBE68
    stfs f28, 0x20(r1)
lbl_800EBE68:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EBE7C
    stfs f27, 0x24(r1)
lbl_800EBE7C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800EBE90
    stfs f25, 0x24(r1)
lbl_800EBE90:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EBEA4
    stfs f31, 0x28(r1)
lbl_800EBEA4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EBEB8
    stfs f28, 0x28(r1)
lbl_800EBEB8:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800EBED4
    stfs f0, 0x24(r1)
lbl_800EBED4:
    add r4, r27, r25
    lwz r3, 0x90(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x90(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x90(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800EBB7C
    li r3, 0x1
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
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    subi r11, r10, 0xc0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EC030
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EC030() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x200
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
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    subi r11, r12, 0xc0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f20, f1
    fmr f21, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f26, 0x4(r3)
    lfs f27, 0x3c(r3)
    lfs f28, 0x18(r3)
    lfs f29, 0x20(r3)
    lfs f22, lbl_804A0310
    lfs f23, 0x30(r3)
    lfs f25, 0x38(r3)
    lfs f24, 0x34(r3)
    lfs f31, 0x40(r3)
    lfs f30, 0x24(r3)
lbl_800EC190:
    add r3, r27, r25
    lwz r3, 0x1d0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800EC1F4
    add r4, r27, r26
    addi r3, r4, 0x278
    addi r4, r4, 0x1e8
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1cc(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x1d0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x1e8
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EC23C
lbl_800EC1F4:
    add r4, r27, r26
    addi r3, r4, 0x278
    addi r4, r4, 0x1e8
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1dc(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x1d0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x1e8
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EC23C:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x1e8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x278
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f20
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800EC2F4
    bge lbl_800EC2D4
    cmpwi r31, 0x0
    bge lbl_800EC2E0
    b lbl_800EC318
lbl_800EC2D4:
    cmpwi r31, 0x3
    bge lbl_800EC318
    b lbl_800EC308
lbl_800EC2E0:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EC318
lbl_800EC2F4:
    addi r3, r1, 0x90
    lwz r4, 0xb10(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EC318
lbl_800EC308:
    addi r3, r1, 0x90
    lwz r4, 0xb14(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EC318:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f22, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x30(r1)
    stfs f23, 0x38(r1)
    stfs f22, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800EC380
    b lbl_800EC388
lbl_800EC380:
    stfs f24, 0x34(r1)
    b lbl_800EC38C
lbl_800EC388:
    stfs f25, 0x34(r1)
lbl_800EC38C:
    cmpwi r28, 0x84
    bge lbl_800EC3DC
    cmpwi r28, 0x2e
    beq lbl_800EC414
    bge lbl_800EC3C8
    cmpwi r28, 0x2a
    bge lbl_800EC3BC
    cmpwi r28, 0x12
    bge lbl_800EC468
    cmpwi r28, 0x10
    bge lbl_800EC414
    b lbl_800EC468
lbl_800EC3BC:
    cmpwi r28, 0x2c
    bge lbl_800EC468
    b lbl_800EC414
lbl_800EC3C8:
    cmpwi r28, 0x6b
    bge lbl_800EC468
    cmpwi r28, 0x66
    bge lbl_800EC414
    b lbl_800EC468
lbl_800EC3DC:
    cmpwi r28, 0x8b
    beq lbl_800EC414
    bge lbl_800EC408
    cmpwi r28, 0x88
    bge lbl_800EC3FC
    cmpwi r28, 0x86
    bge lbl_800EC468
    b lbl_800EC414
lbl_800EC3FC:
    cmpwi r28, 0x8a
    bge lbl_800EC468
    b lbl_800EC414
lbl_800EC408:
    cmpwi r28, 0xb1
    beq lbl_800EC414
    b lbl_800EC468
lbl_800EC414:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_800EC424
    stfs f26, 0x20(r1)
lbl_800EC424:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_800EC434
    stfs f27, 0x24(r1)
lbl_800EC434:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_800EC444
    stfs f28, 0x24(r1)
lbl_800EC444:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    bge lbl_800EC454
    stfs f29, 0x28(r1)
lbl_800EC454:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    ble lbl_800EC4CC
    stfs f30, 0x28(r1)
    b lbl_800EC4CC
lbl_800EC468:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800EC47C
    stfs f28, 0x20(r1)
lbl_800EC47C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EC490
    stfs f27, 0x24(r1)
lbl_800EC490:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800EC4A4
    stfs f25, 0x24(r1)
lbl_800EC4A4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EC4B8
    stfs f31, 0x28(r1)
lbl_800EC4B8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EC4CC
    stfs f28, 0x28(r1)
lbl_800EC4CC:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800EC4E8
    stfs f0, 0x24(r1)
lbl_800EC4E8:
    add r4, r27, r25
    lwz r3, 0x1d0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1d0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x1d0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800EC190
    li r3, 0x1
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
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    subi r11, r10, 0xc0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EC644
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EC644() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x150
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_28
    mr r31, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x590(r31)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r31, 0x5c8
    addi r4, r31, 0x598
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x58c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x590(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x598
    addi r4, r1, 0xc0
    bl fn_801734E4
    addi r3, r1, 0x80
    addi r4, r31, 0x598
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r31, 0x5c8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f30
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0xc70(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f1, lbl_804A0310
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_800EC8AC
    cmpwi r28, 0x2e
    beq lbl_800EC8E4
    bge lbl_800EC898
    cmpwi r28, 0x2a
    bge lbl_800EC88C
    cmpwi r28, 0x12
    bge lbl_800EC954
    cmpwi r28, 0x10
    bge lbl_800EC8E4
    b lbl_800EC954
lbl_800EC88C:
    cmpwi r28, 0x2c
    bge lbl_800EC954
    b lbl_800EC8E4
lbl_800EC898:
    cmpwi r28, 0x6b
    bge lbl_800EC954
    cmpwi r28, 0x66
    bge lbl_800EC8E4
    b lbl_800EC954
lbl_800EC8AC:
    cmpwi r28, 0x8b
    beq lbl_800EC8E4
    bge lbl_800EC8D8
    cmpwi r28, 0x88
    bge lbl_800EC8CC
    cmpwi r28, 0x86
    bge lbl_800EC954
    b lbl_800EC8E4
lbl_800EC8CC:
    cmpwi r28, 0x8a
    bge lbl_800EC954
    b lbl_800EC8E4
lbl_800EC8D8:
    cmpwi r28, 0xb1
    beq lbl_800EC8E4
    b lbl_800EC954
lbl_800EC8E4:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC900
    stfs f0, 0x20(r1)
lbl_800EC900:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC91C
    stfs f0, 0x24(r1)
lbl_800EC91C:
    lfs f1, 0x24(r1)
    lfs f0, lbl_804A0310
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC934
    stfs f0, 0x24(r1)
lbl_800EC934:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC9E0
    stfs f0, 0x28(r1)
    b lbl_800EC9E0
lbl_800EC954:
    lfs f1, 0x20(r1)
    la r3, lbl_804A0310
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC970
    stfs f0, 0x20(r1)
lbl_800EC970:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC98C
    stfs f0, 0x24(r1)
lbl_800EC98C:
    lfs f1, 0x24(r1)
    la r3, lbl_804A0310
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC9A8
    stfs f0, 0x24(r1)
lbl_800EC9A8:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800EC9C4
    stfs f0, 0x28(r1)
lbl_800EC9C4:
    lfs f1, 0x28(r1)
    la r3, lbl_804A0310
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800EC9E0
    stfs f0, 0x28(r1)
lbl_800EC9E0:
    lwz r3, 0x590(r31)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x590(r31)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x590(r31)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x590(r31)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x590(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x590(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800ECAA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800ECAA8() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x210
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
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    subi r11, r12, 0xd0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    fmr f20, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f25, 0x4(r3)
    lfs f26, 0x3c(r3)
    lfs f27, 0x18(r3)
    lfs f28, 0x20(r3)
    lfs f21, lbl_804A0310
    lfs f22, 0x30(r3)
    lfs f24, 0x38(r3)
    lfs f23, 0x34(r3)
    lfs f30, 0x44(r3)
    lfs f31, 0x4c(r3)
    lfs f29, 0x24(r3)
lbl_800ECC14:
    add r3, r27, r25
    lwz r3, 0x600(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800ECC78
    add r4, r27, r26
    addi r3, r4, 0x6a8
    addi r4, r4, 0x618
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x5fc(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x600(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x618
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800ECCC0
lbl_800ECC78:
    add r4, r27, r26
    addi r3, r4, 0x6a8
    addi r4, r4, 0x618
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x60c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x600(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x618
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800ECCC0:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x618
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x6a8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f19
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800ECD78
    bge lbl_800ECD58
    cmpwi r31, 0x0
    bge lbl_800ECD64
    b lbl_800ECD9C
lbl_800ECD58:
    cmpwi r31, 0x3
    bge lbl_800ECD9C
    b lbl_800ECD8C
lbl_800ECD64:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ECD9C
lbl_800ECD78:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ECD9C
lbl_800ECD8C:
    addi r3, r1, 0x90
    lwz r4, 0xc74(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800ECD9C:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f21, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x30(r1)
    stfs f22, 0x38(r1)
    stfs f21, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800ECE04
    b lbl_800ECE0C
lbl_800ECE04:
    stfs f23, 0x34(r1)
    b lbl_800ECE10
lbl_800ECE0C:
    stfs f24, 0x34(r1)
lbl_800ECE10:
    cmpwi r28, 0x84
    bge lbl_800ECE60
    cmpwi r28, 0x2e
    beq lbl_800ECE98
    bge lbl_800ECE4C
    cmpwi r28, 0x2a
    bge lbl_800ECE40
    cmpwi r28, 0x12
    bge lbl_800ECEEC
    cmpwi r28, 0x10
    bge lbl_800ECE98
    b lbl_800ECEEC
lbl_800ECE40:
    cmpwi r28, 0x2c
    bge lbl_800ECEEC
    b lbl_800ECE98
lbl_800ECE4C:
    cmpwi r28, 0x6b
    bge lbl_800ECEEC
    cmpwi r28, 0x66
    bge lbl_800ECE98
    b lbl_800ECEEC
lbl_800ECE60:
    cmpwi r28, 0x8b
    beq lbl_800ECE98
    bge lbl_800ECE8C
    cmpwi r28, 0x88
    bge lbl_800ECE80
    cmpwi r28, 0x86
    bge lbl_800ECEEC
    b lbl_800ECE98
lbl_800ECE80:
    cmpwi r28, 0x8a
    bge lbl_800ECEEC
    b lbl_800ECE98
lbl_800ECE8C:
    cmpwi r28, 0xb1
    beq lbl_800ECE98
    b lbl_800ECEEC
lbl_800ECE98:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    bge lbl_800ECEA8
    stfs f25, 0x20(r1)
lbl_800ECEA8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    bge lbl_800ECEB8
    stfs f26, 0x24(r1)
lbl_800ECEB8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    ble lbl_800ECEC8
    stfs f27, 0x24(r1)
lbl_800ECEC8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    bge lbl_800ECED8
    stfs f28, 0x28(r1)
lbl_800ECED8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    ble lbl_800ECF50
    stfs f29, 0x28(r1)
    b lbl_800ECF50
lbl_800ECEEC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800ECF00
    stfs f27, 0x20(r1)
lbl_800ECF00:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800ECF14
    stfs f26, 0x24(r1)
lbl_800ECF14:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800ECF28
    stfs f24, 0x24(r1)
lbl_800ECF28:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800ECF3C
    stfs f30, 0x28(r1)
lbl_800ECF3C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800ECF50
    stfs f31, 0x28(r1)
lbl_800ECF50:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800ECF6C
    stfs f0, 0x24(r1)
lbl_800ECF6C:
    add r4, r27, r25
    lwz r3, 0x600(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x600(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x600(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x600(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x600(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x600(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800ECC14
    li r3, 0x1
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
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    subi r11, r10, 0xd0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800ED0D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800ED0D4() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x210
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
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    subi r11, r12, 0xd0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f19, f1
    fmr f20, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0310
    lfs f25, 0x4(r3)
    lfs f26, 0x3c(r3)
    lfs f27, 0x18(r3)
    lfs f28, 0x20(r3)
    lfs f21, lbl_804A0310
    lfs f22, 0x30(r3)
    lfs f24, 0x38(r3)
    lfs f23, 0x34(r3)
    lfs f30, 0x44(r3)
    lfs f31, 0x4c(r3)
    lfs f29, 0x24(r3)
lbl_800ED240:
    add r3, r27, r25
    lwz r3, 0x740(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800ED2A4
    add r4, r27, r26
    addi r3, r4, 0x7e8
    addi r4, r4, 0x758
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x73c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x740(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x758
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800ED2EC
lbl_800ED2A4:
    add r4, r27, r26
    addi r3, r4, 0x7e8
    addi r4, r4, 0x758
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x74c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x740(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x758
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800ED2EC:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x758
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x7e8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f19
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x1
    beq lbl_800ED3A4
    bge lbl_800ED384
    cmpwi r31, 0x0
    bge lbl_800ED390
    b lbl_800ED3C8
lbl_800ED384:
    cmpwi r31, 0x3
    bge lbl_800ED3C8
    b lbl_800ED3B8
lbl_800ED390:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ED3C8
lbl_800ED3A4:
    addi r3, r1, 0x90
    lwz r4, 0xc70(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800ED3C8
lbl_800ED3B8:
    addi r3, r1, 0x90
    lwz r4, 0xc74(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800ED3C8:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f21, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x30(r1)
    stfs f22, 0x38(r1)
    stfs f21, 0x3c(r1)
    cmpwi r31, 0x0
    beq lbl_800ED430
    b lbl_800ED438
lbl_800ED430:
    stfs f23, 0x34(r1)
    b lbl_800ED43C
lbl_800ED438:
    stfs f24, 0x34(r1)
lbl_800ED43C:
    cmpwi r28, 0x84
    bge lbl_800ED48C
    cmpwi r28, 0x2e
    beq lbl_800ED4C4
    bge lbl_800ED478
    cmpwi r28, 0x2a
    bge lbl_800ED46C
    cmpwi r28, 0x12
    bge lbl_800ED518
    cmpwi r28, 0x10
    bge lbl_800ED4C4
    b lbl_800ED518
lbl_800ED46C:
    cmpwi r28, 0x2c
    bge lbl_800ED518
    b lbl_800ED4C4
lbl_800ED478:
    cmpwi r28, 0x6b
    bge lbl_800ED518
    cmpwi r28, 0x66
    bge lbl_800ED4C4
    b lbl_800ED518
lbl_800ED48C:
    cmpwi r28, 0x8b
    beq lbl_800ED4C4
    bge lbl_800ED4B8
    cmpwi r28, 0x88
    bge lbl_800ED4AC
    cmpwi r28, 0x86
    bge lbl_800ED518
    b lbl_800ED4C4
lbl_800ED4AC:
    cmpwi r28, 0x8a
    bge lbl_800ED518
    b lbl_800ED4C4
lbl_800ED4B8:
    cmpwi r28, 0xb1
    beq lbl_800ED4C4
    b lbl_800ED518
lbl_800ED4C4:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    bge lbl_800ED4D4
    stfs f25, 0x20(r1)
lbl_800ED4D4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    bge lbl_800ED4E4
    stfs f26, 0x24(r1)
lbl_800ED4E4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    ble lbl_800ED4F4
    stfs f27, 0x24(r1)
lbl_800ED4F4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    bge lbl_800ED504
    stfs f28, 0x28(r1)
lbl_800ED504:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    ble lbl_800ED57C
    stfs f29, 0x28(r1)
    b lbl_800ED57C
lbl_800ED518:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800ED52C
    stfs f27, 0x20(r1)
lbl_800ED52C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800ED540
    stfs f26, 0x24(r1)
lbl_800ED540:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800ED554
    stfs f24, 0x24(r1)
lbl_800ED554:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800ED568
    stfs f30, 0x28(r1)
lbl_800ED568:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800ED57C
    stfs f31, 0x28(r1)
lbl_800ED57C:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800ED598
    stfs f0, 0x24(r1)
lbl_800ED598:
    add r4, r27, r25
    lwz r3, 0x740(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x740(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x740(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x740(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f20, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x740(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x740(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800ED240
    li r3, 0x1
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
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    subi r11, r10, 0xd0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800ED700
// ----------------------------------------------------------------------------
extern "C" asm void fn_800ED700() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xe04(r31)
    addi r4, r4, 0x224
    lwz r5, 0xe08(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdd4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xe08(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xe08(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xe08(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xe08(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xe08(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xe08(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800ED8CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800ED8CC() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xe74(r31)
    addi r4, r4, 0x224
    lwz r5, 0xe78(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdd4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xe78(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xe78(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xe78(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xe78(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xe78(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xe78(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EDA94
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EDA94() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xee4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xee8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xde4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0x10(r1)
    lfs f0, 0xbc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xee8(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xee8(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xee8(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xee8(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xee8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xee8(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EDC60
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EDC60() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xf54(r31)
    addi r4, r4, 0x224
    lwz r5, 0xf58(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xde4(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xf58(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xf58(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xf58(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xf58(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xf58(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xf58(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EDE28
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EDE28() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0xfc4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xfc8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdec(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0xfc8(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0xfc8(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0xfc8(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0xfc8(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0xfc8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0xfc8(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EDFF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EDFF4() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0x1034(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1038(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdec(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0x1038(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x1038(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x1038(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0x1038(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0x1038(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x1038(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EE1BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EE1BC() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0x10a4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x10a8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdfc(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    la r4, lbl_804A0310
    lfs f2, 0x18(r4)
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0x10(r1)
    lfs f0, 0xbc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0x10a8(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x10a8(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x10a8(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0x10a8(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0x10a8(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x10a8(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EE388
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EE388() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xb0
    lwz r4, 0x1114(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1118(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0xe0
    addi r4, r1, 0xb0
    bl fn_80173754
    addi r3, r1, 0x80
    lwz r4, 0xdfc(r31)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0x10
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x10
    addi r4, r1, 0x80
    mr r5, r3
    bl fn_80018AF8
    lfs f1, 0xbc(r1)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f0, lbl_804A0310
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    lwz r3, 0x1118(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x1118(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x1118(r31)
    stfs f0, 0x38(r3)
    lfs f0, lbl_804A0310
    lwz r3, 0x1118(r31)
    stfs f0, 0x3c(r3)
    lwz r3, 0x1118(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    lwz r3, 0x1118(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r31, -0x4(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EE550
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EE550() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1e0
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
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    subi r11, r12, 0xa0
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f22, f1
    fmr f23, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_804A0310
    lfs f27, 0x50(r3)
    lfs f28, 0x54(r3)
    lfs f29, 0x8(r3)
    lfs f24, lbl_804A0310
    lfs f26, 0x18(r3)
    lfs f25, 0x4c(r3)
    lfs f31, 0x44(r3)
    lfs f30, 0x4(r3)
lbl_800EE694:
    cmpwi r31, 0x0
    bne lbl_800EE6DC
    add r4, r28, r27
    addi r3, r4, 0xbc8
    addi r4, r4, 0xb38
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xb1c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xb20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xb38
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EE724
lbl_800EE6DC:
    add r4, r28, r27
    addi r3, r4, 0xbc8
    addi r4, r4, 0xb38
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0xb2c(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xb20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xb38
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EE724:
    addi r3, r1, 0x80
    add r4, r28, r27
    addi r4, r4, 0xb38
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r28, r27
    addi r4, r4, 0xbc8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f22
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800EE7DC
    bge lbl_800EE7BC
    cmpwi r31, 0x0
    bge lbl_800EE7C8
    b lbl_800EE804
lbl_800EE7BC:
    cmpwi r31, 0x3
    bge lbl_800EE804
    b lbl_800EE7F0
lbl_800EE7C8:
    addi r3, r1, 0x90
    lwz r4, 0xdbc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EE814
lbl_800EE7DC:
    addi r3, r1, 0x90
    lwz r4, 0xe7c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EE814
lbl_800EE7F0:
    addi r3, r1, 0x90
    lwz r4, 0xe0c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EE814
lbl_800EE804:
    addi r3, r1, 0x90
    lwz r4, 0xe0c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EE814:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f24, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x10(r1)
    stfs f24, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800EE888
    stfs f26, 0x30(r1)
lbl_800EE888:
    cmpwi r31, 0x0
    bne lbl_800EE8E4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EE8A4
    stfs f27, 0x34(r1)
lbl_800EE8A4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EE8B8
    stfs f28, 0x34(r1)
lbl_800EE8B8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800EE8CC
    stfs f29, 0x38(r1)
lbl_800EE8CC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800EE934
    stfs f30, 0x38(r1)
    b lbl_800EE934
lbl_800EE8E4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EE8F8
    stfs f31, 0x34(r1)
lbl_800EE8F8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EE90C
    stfs f26, 0x34(r1)
lbl_800EE90C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EE920
    stfs f31, 0x38(r1)
lbl_800EE920:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EE934
    stfs f26, 0x38(r1)
lbl_800EE934:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x18(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800EE950
    stfs f0, 0x38(r1)
lbl_800EE950:
    add r4, r28, r26
    lwz r3, 0xb20(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xb20(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xb20(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xb20(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xb20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0xb20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800EE694
    li r3, 0x1
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
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    subi r11, r10, 0xa0
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800EEA94
// ----------------------------------------------------------------------------
extern "C" asm void fn_800EEA94() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1e0
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
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    subi r11, r12, 0xa0
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f22, f1
    fmr f23, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0310
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_804A0310
    lfs f27, 0x50(r3)
    lfs f28, 0x54(r3)
    lfs f29, 0x8(r3)
    lfs f24, lbl_804A0310
    lfs f26, 0x18(r3)
    lfs f25, 0x4c(r3)
    lfs f31, 0x44(r3)
    lfs f30, 0x4(r3)
lbl_800EEBD8:
    cmpwi r31, 0x0
    bne lbl_800EEC20
    add r4, r28, r27
    addi r3, r4, 0xd28
    addi r4, r4, 0xc98
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xc7c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xc80(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xc98
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800EEC68
lbl_800EEC20:
    add r4, r28, r27
    addi r3, r4, 0xd28
    addi r4, r4, 0xc98
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0xc8c(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0xc80(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0xc98
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800EEC68:
    addi r3, r1, 0x80
    add r4, r28, r27
    addi r4, r4, 0xc98
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r28, r27
    addi r4, r4, 0xd28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f22
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x1
    beq lbl_800EED20
    bge lbl_800EED00
    cmpwi r31, 0x0
    bge lbl_800EED0C
    b lbl_800EED48
lbl_800EED00:
    cmpwi r31, 0x3
    bge lbl_800EED48
    b lbl_800EED34
lbl_800EED0C:
    addi r3, r1, 0x90
    lwz r4, 0xdbc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EED58
lbl_800EED20:
    addi r3, r1, 0x90
    lwz r4, 0x103c(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EED58
lbl_800EED34:
    addi r3, r1, 0x90
    lwz r4, 0xfcc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800EED58
lbl_800EED48:
    addi r3, r1, 0x90
    lwz r4, 0xfcc(r28)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800EED58:
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f24, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x10(r1)
    stfs f24, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800EEDCC
    stfs f26, 0x30(r1)
lbl_800EEDCC:
    cmpwi r31, 0x0
    bne lbl_800EEE28
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800EEDE8
    stfs f27, 0x34(r1)
lbl_800EEDE8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800EEDFC
    stfs f28, 0x34(r1)
lbl_800EEDFC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800EEE10
    stfs f29, 0x38(r1)
lbl_800EEE10:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800EEE78
    stfs f30, 0x38(r1)
    b lbl_800EEE78
lbl_800EEE28:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EEE3C
    stfs f31, 0x34(r1)
lbl_800EEE3C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EEE50
    stfs f26, 0x34(r1)
lbl_800EEE50:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800EEE64
    stfs f31, 0x38(r1)
lbl_800EEE64:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800EEE78
    stfs f26, 0x38(r1)
lbl_800EEE78:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800EEE94
    stfs f0, 0x38(r1)
lbl_800EEE94:
    add r4, r28, r26
    lwz r3, 0xc80(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xc80(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xc80(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xc80(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xc80(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0xc80(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800EEBD8
    li r3, 0x1
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
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    subi r11, r10, 0xa0
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

