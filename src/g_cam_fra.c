#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s8 *fn_8005D830();                 /* extern */
M2C_UNK fn_8008B160(); /* extern */
M2C_UNK memcpy();                /* extern */
M2C_UNK memset();                /* extern */
s32 fn_8009D038();                            /* static */
extern M2C_UNK lbl_8034B178;
extern s32 lbl_8034CA58;
extern s32 lbl_8034CD6C;
extern M2C_UNK lbl_80390580;
extern M2C_UNK lbl_803906D0;
extern M2C_UNK lbl_80395728;
extern M2C_UNK lbl_803A19E8;
extern s32 lbl_803A1BE8;
extern s32 lbl_803A1C00;
extern s32 lbl_803A1C88;
extern M2C_UNK lbl_803A1CD0;
extern M2C_UNK lbl_803BE030;
extern M2C_UNK lbl_803C1A40;
extern M2C_UNK lbl_803C22B0;
extern u8 lbl_8049C308;
extern s32 *lbl_8049D5B8;
static M2C_UNK lbl_8049F550;                        /* unable to generate initializer: unknown type; const */

void fn_80099CF8();
s32 * fn_80099F64();
s32 * fn_80099FD8();
s32 * fn_8009A02C();
s32 * fn_8009A09C();
void fn_8009A198();
void fn_8009A208();
void fn_8009A278();
s32 * fn_8009A2E8();
void fn_8009A3A8();
void fn_8009A414();
void fn_8009A474();
void fn_8009A4D4();
void fn_8009A544();
void fn_8009A628();
void fn_8009A694();
void fn_8009A700();
void fn_8009A76C();
void fn_8009A7CC();
void fn_8009A7D8();
s32 fn_8009A7E4();
void fn_8009A83C();
s32 fn_8009A88C();
s32 fn_8009A8D8();
s32 fn_8009ADC8();
s32 fn_8009AF5C();
s32 fn_8009AF68();
s32 fn_8009AF78();
s32 fn_8009AF88();
s32 fn_8009AF9C();
s32 fn_8009AFAC();
s32 fn_8009AFBC();
void fn_8009AFCC();
s32 fn_8009AFDC();
void fn_8009B028();
void fn_8009B044();
void fn_8009B05C();
void fn_8009B194();
void fn_8009D07C();
s32 fn_8009D2A8();
s32 fn_8009D370();
s32 fn_8009D3F4();
s32 fn_8009D480();
s32 fn_8009D4FC();
s32 fn_8009D578();
s32 fn_8009D614();
s32 fn_8009D76C();
s32 fn_8009D838();
s32 fn_8009D95C();
s32 fn_8009D9EC();
s32 fn_8009DA88();
s32 fn_8009DB00();
s32 fn_8009DB68();
s32 fn_8009DCF0();
s32 fn_8009DEC4();
s32 fn_8009DFD4();
s32 fn_8009E0E0();
s32 fn_8009E178();
s32 fn_8009E240();
s32 fn_8009E414();
s32 fn_8009E524();
s32 fn_8009E690();
s32 fn_8009E7C4();
s32 fn_8009E8E0();
s32 fn_8009EA94();
s32 fn_8009EC0C();
s32 fn_8009ED58();
s32 fn_8009EEA4();
s32 fn_8009EFD0();
s32 fn_8009F0EC();
s32 fn_8009F1BC();
s32 fn_8009F2F4();
s32 fn_8009F37C();
s32 fn_8009F48C();
s32 fn_8009F58C();
s32 fn_8009F6E8();
s32 fn_8009F7F8();
s32 fn_8009F908();
s32 fn_8009FA44();
s32 fn_8009FB54();
s32 fn_8009FCAC();
s32 fn_8009FDE8();
s32 fn_8009FEF8();
void fn_800A0008();
void fn_800A00F8();
void fn_800A01E8();
void fn_800A0240();
void fn_800A0310();
void fn_800A033C();
void fn_800A06C4();
s32 fn_800A0768();
s32 * fn_800A0BF0();
s32 fn_800A0BFC();
void fn_800A0C6C();
s32 fn_800A0C90();
s32 fn_800A0C98();
s32 fn_800A0D24();
s32 fn_800A0D6C();
s32 fn_800A0D94();
s32 fn_800A0E04();
s8 * fn_800A0F08();
s8 * fn_800A0F50();
s32 fn_800A0F98();
void fn_800A1040();
s32 fn_800A11B8();
s32 fn_800A1234();
s32 fn_800A12D4();
void fn_800A1344();

void fn_80099CF8(s32 arg0);

s32 *fn_80099F64(s32 arg0) {
    s32 *temp_r3;

    if ((s32) lbl_8049C308 == 0) {
        return NULL;
    }
    if (arg0 < 0) {
        return NULL;
    }
    temp_r3 = fn_8018E7C4((s32 *) arg0);
    if (temp_r3 == NULL) {
        return NULL;
    }
    *temp_r3 |= 0x20;
    fn_8009A7E4((s32) temp_r3);
    return temp_r3;
}

s32 *fn_80099FD8(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s32 *temp_r3;

    temp_r3 = fn_80099F64(arg0);
    if (temp_r3 != NULL) {
        fn_8018ED80(temp_r3, (s32 *) arg1, arg2);
    }
    return temp_r3;
}

s32 *fn_8009A02C(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r3;

    if ((s32) lbl_8049C308 == 0) {
        return NULL;
    }
    if (arg0 < 0) {
        return NULL;
    }
    temp_r3 = fn_8018E9AC(arg0, 0, arg1, arg2);
    if (temp_r3 == NULL) {
        return NULL;
    }
    *temp_r3 |= 0x20;
    return temp_r3;
}

// fn_8009A09C: definicion C reemplazada por asm (ver abajo)


// fn_8009A198: definicion C reemplazada por asm (ver abajo)


// fn_8009A208: definicion C reemplazada por asm (ver abajo)


// fn_8009A278: definicion C reemplazada por asm (ver abajo)


// fn_8009A2E8: definicion C reemplazada por asm (ver abajo)


// fn_8009A3A8: definicion C reemplazada por asm (ver abajo)


// fn_8009A414: definicion C reemplazada por asm (ver abajo)


// fn_8009A474: definicion C reemplazada por asm (ver abajo)



// fn_8009A544: definicion C reemplazada por asm (ver abajo)


void fn_8009A628(s32 arg0, s32 arg1);

// fn_8009A694: definicion C reemplazada por asm (ver abajo)


// fn_8009A700: definicion C reemplazada por asm (ver abajo)


// fn_8009A76C: definicion C reemplazada por asm (ver abajo)


void fn_8009A7CC(void) {
    lbl_8049C308 = 1;
}

void fn_8009A7D8(void) {
    lbl_8049C308 = 0;
}

// fn_8009A7E4: definicion C reemplazada por asm (ver abajo)


// fn_8009A83C: definicion C reemplazada por asm (ver abajo)


s32 fn_8009A88C(void) {
    s32 var_r31;

    var_r31 = -1;
    if (((s32 *) lbl_8049D5B8 != NULL) && (fn_80136DB4() == 0)) {
        var_r31 = M2C_FIELD(lbl_8049D5B8, s32 *, 0x44);
    }
    return var_r31;
}

// fn_8009A8D8: definicion C reemplazada por asm (ver abajo)


// fn_8009ADC8: definicion C reemplazada por asm (ver abajo)


// fn_8009AF5C: definicion C reemplazada por asm (ver abajo)


// fn_8009AF68: definicion C reemplazada por asm (ver abajo)


// fn_8009AF78: definicion C reemplazada por asm (ver abajo)


// fn_8009AF88: definicion C reemplazada por asm (ver abajo)


// fn_8009AF9C: definicion C reemplazada por asm (ver abajo)


// fn_8009AFAC: definicion C reemplazada por asm (ver abajo)


// fn_8009AFBC: definicion C reemplazada por asm (ver abajo)


// fn_8009AFCC: definicion C reemplazada por asm (ver abajo)


// fn_8009AFDC: definicion C reemplazada por asm (ver abajo)


// fn_8009B028: definicion C reemplazada por asm (ver abajo)


// fn_8009B044: definicion C reemplazada por asm (ver abajo)


// fn_8009B05C: definicion C reemplazada por asm (ver abajo)


// fn_8009B194: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_8009B344:

Found bctr instruction at g_cam_fra.s line 3647, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_8009D038:

Found bctr instruction at g_cam_fra.s line 5495, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void fn_8009D07C(void) {

}

/*
Decompilation failure in function fn_8009D080:

Found bctr instruction at g_cam_fra.s line 5534, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// fn_8009D2A8: definicion C reemplazada por asm (ver abajo)


s32 fn_8009D370(s8 *arg0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r3 = fn_8008CCC8();
    if ((((s32) M2C_FIELD(spC, s32 *, 0x140) == 0xE0) && ((s32) M2C_FIELD(spC, s32 *, 0x15F8) == 6)) || (temp_r3 != 0)) {
        fn_800A0310(spC, sp8);
        var_r31 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 3;
    }
    return var_r31;
}

// fn_8009D3F4: definicion C reemplazada por asm (ver abajo)


s32 fn_8009D480(s8 *arg0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r3 = fn_8008CCC8();
    if (((u32) (M2C_FIELD(spC, s32 *, 0x140) - 0x30) <= 0xCU) || (temp_r3 != 0)) {
        fn_800A0310(spC, sp8);
        var_r31 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 5;
    }
    return var_r31;
}

// fn_8009D4FC: definicion C reemplazada por asm (ver abajo)


// fn_8009D578: definicion C reemplazada por asm (ver abajo)


// fn_8009D614: definicion C reemplazada por asm (ver abajo)


// fn_8009D76C: definicion C reemplazada por asm (ver abajo)


// fn_8009D838: definicion C reemplazada por asm (ver abajo)


// fn_8009D95C: definicion C reemplazada por asm (ver abajo)


// fn_8009D9EC: definicion C reemplazada por asm (ver abajo)


s32 fn_8009DA88(s8 *arg0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r3 = fn_8008CCC8();
    if (((s32) M2C_FIELD(spC, s32 *, 0x164C) == 1) || (temp_r3 != 0)) {
        fn_800A0310(spC, sp8);
        var_r31 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
    return var_r31;
}

s32 fn_8009DB00(s8 *arg0) {
    s32 *spC;
    s32 *sp8;
    s32 var_r31;

    var_r31 = -1;
    fn_800A01E8(&spC, &sp8);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 4) {
        fn_800A0310(sp8, sp8);
        var_r31 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 0xE;
    }
    return var_r31;
}

s32 fn_8009DB68(s8 *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r31;
    s32 temp_r4;
    s32 var_r30;

    var_r30 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r31 = fn_8008CCC8();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r4) {                              /* irregular */
    case 0:
        if ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x201) <= 1U) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 1:
        if (((s32) M2C_FIELD(spC, s32 *, 0x38B8) == 0) && ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x203) <= 1U)) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 2:
        if (((s32) M2C_FIELD(spC, s32 *, 0x38B8) == 0) && ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x205) <= 1U)) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 3:
        if (((s32) M2C_FIELD(spC, s32 *, 0x38B8) == 0) && ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x207) <= 1U)) {
            fn_800A0310(spC, sp8);
            var_r30 = 7;
            M2C_FIELD(arg0, s32 *, 0x10) = 0x10;
        }
        break;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) && ((s32) M2C_FIELD(spC, s32 *, 0x140) == 1)) {
        fn_800A0310(spC, sp8);
        var_r30 = 6;
        M2C_FIELD(arg0, s32 *, 8) = 0xF;
        M2C_FIELD(arg0, s32 *, 0xC) = 4;
    }
    if (temp_r31 != 0) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x10;
    }
    return var_r30;
}

s32 fn_8009DCF0(s8 *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r31;
    s32 temp_r4;
    s32 var_r30;

    var_r30 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r31 = fn_8008CCC8();
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r4) {                              /* irregular */
    case 0:
        if ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x201) <= 1U) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
        break;
    case 1:
        if (((s32) M2C_FIELD(spC, s32 *, 0x38B8) == 0) && ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x203) <= 1U)) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
        break;
    case 2:
        if (((s32) M2C_FIELD(spC, s32 *, 0x38B8) == 0) && ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x205) <= 1U)) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
        break;
    case 3:
        if (((s32) M2C_FIELD(spC, s32 *, 0x38B8) == 0) && ((u32) (M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) - 0x207) <= 1U)) {
            fn_800A0310(spC, sp8);
            var_r30 = 7;
            M2C_FIELD(arg0, s32 *, 0x10) = -1;
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
        break;
    }
    if ((((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) && ((s32) M2C_FIELD(spC, s32 *, 0x140) == 1)) || ((s32) M2C_FIELD(arg0, s32 *, 0x18) >= 0x258)) {
        fn_800A0310(spC, sp8);
        var_r30 = 6;
        M2C_FIELD(arg0, s32 *, 8) = 0x11;
        M2C_FIELD(arg0, s32 *, 0xC) = 4;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    if (temp_r31 != 0) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    return var_r30;
}

s32 fn_8009DEC4(s8 *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r4;
    s32 var_r30;

    var_r30 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r31 = fn_8008CCC8();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r4) {                              /* irregular */
    case 0:
        if ((s32) M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) == 0x261) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 1:
        if ((s32) M2C_FIELD(M2C_FIELD(sp8, s8 **, 0x3780), s32 *, 0x20) == 0x58) {
            fn_800A0310(spC, sp8);
            var_r30 = 7;
            M2C_FIELD(arg0, s32 *, 0x10) = 0x14;
        }
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        temp_r0 = M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20);
        if ((temp_r0 != 0x261) && (temp_r0 != 0x262)) {
            fn_800A0310(spC, sp8);
            var_r30 = 6;
            M2C_FIELD(arg0, s32 *, 8) = 0x13;
            M2C_FIELD(arg0, s32 *, 0xC) = 4;
        }
    }
    if (temp_r31 != 0) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x14;
    }
    return var_r30;
}

// fn_8009DFD4: definicion C reemplazada por asm (ver abajo)


s32 fn_8009E0E0(s8 *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r31;
    s32 var_r30;

    var_r30 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r31 = fn_8008CCC8();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 2) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x16;
    }
    if (temp_r31 != 0) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x16;
        M2C_FIELD(arg0, s32 *, 0xC) = 3;
    }
    return var_r30;
}

s32 fn_8009E178(s8 *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r31;
    s32 var_r30;

    var_r30 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r31 = fn_8008CCC8();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x18;
    }
    if ((s32) M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) == 0x262) {
        fn_800A0310(spC, sp8);
        var_r30 = 6;
        M2C_FIELD(arg0, s32 *, 8) = 0x17;
        M2C_FIELD(arg0, s32 *, 0xC) = 3;
    }
    if (temp_r31 != 0) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x18;
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
    }
    return var_r30;
}

s32 fn_8009E240(s8 *arg0, M2C_UNK arg_sp0);

// fn_8009E414: definicion C reemplazada por asm (ver abajo)


s32 fn_8009E524(s8 *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r30;

    var_r30 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r31 = fn_8008CCC8();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r4) {                              /* irregular */
    case 0:
        if ((s32) M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) == 0x261) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 1:
        if ((s32) M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) == 0x263) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 2:
        if ((s32) M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) == 0x264) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 3:
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        break;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    if (((temp_r5 == 1) && ((temp_r0 = M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20), ((temp_r0 == 0x262) != 0)) || (temp_r0 == 0x264))) || ((temp_r5 == 2) && ((s32) M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) == 0x262))) {
        fn_800A0310(spC, sp8);
        var_r30 = 6;
        M2C_FIELD(arg0, s32 *, 8) = 0x1D;
        M2C_FIELD(arg0, s32 *, 0xC) = 4;
    }
    if (temp_r31 != 0) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
    return var_r30;
}

// fn_8009E690: definicion C reemplazada por asm (ver abajo)


// fn_8009E7C4: definicion C reemplazada por asm (ver abajo)


s32 fn_8009E8E0(s8 *arg0, M2C_UNK arg_sp0);

s32 fn_8009EA94(s8 *arg0, M2C_UNK arg_sp0);

// fn_8009EC0C: definicion C reemplazada por asm (ver abajo)


// fn_8009ED58: definicion C reemplazada por asm (ver abajo)


// fn_8009EEA4: definicion C reemplazada por asm (ver abajo)


// fn_8009EFD0: definicion C reemplazada por asm (ver abajo)


// fn_8009F0EC: definicion C reemplazada por asm (ver abajo)


// fn_8009F1BC: definicion C reemplazada por asm (ver abajo)


// fn_8009F2F4: definicion C reemplazada por asm (ver abajo)


// fn_8009F37C: definicion C reemplazada por asm (ver abajo)


// fn_8009F48C: definicion C reemplazada por asm (ver abajo)


// fn_8009F58C: definicion C reemplazada por asm (ver abajo)


// fn_8009F6E8: definicion C reemplazada por asm (ver abajo)


// fn_8009F7F8: definicion C reemplazada por asm (ver abajo)


// fn_8009F908: definicion C reemplazada por asm (ver abajo)


// fn_8009FA44: definicion C reemplazada por asm (ver abajo)


// fn_8009FB54: definicion C reemplazada por asm (ver abajo)


// fn_8009FCAC: definicion C reemplazada por asm (ver abajo)


// fn_8009FDE8: definicion C reemplazada por asm (ver abajo)


// fn_8009FEF8: definicion C reemplazada por asm (ver abajo)


// fn_800A0008: definicion C reemplazada por asm (ver abajo)


// fn_800A00F8: definicion C reemplazada por asm (ver abajo)


// fn_800A01E8: definicion C reemplazada por asm (ver abajo)


// fn_800A0240: definicion C reemplazada por asm (ver abajo)


void fn_800A0310(s8 *arg0, s8 *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) | 0x80040000);
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0x58) = (s32) (M2C_FIELD(arg1, s32 *, 0x58) | 0x80040000);
    }
}

// fn_800A033C: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_800A0360:

Found bctr instruction at g_cam_fra.s line 9281, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// fn_800A06C4: definicion C reemplazada por asm (ver abajo)


// fn_800A0768: definicion C reemplazada por asm (ver abajo)


// fn_800A0BF0: definicion C reemplazada por asm (ver abajo)


// fn_800A0BFC: definicion C reemplazada por asm (ver abajo)


// fn_800A0C6C: definicion C reemplazada por asm (ver abajo)


s32 fn_800A0C90(void) {
    return 0;
}

// fn_800A0C98: definicion C reemplazada por asm (ver abajo)


// fn_800A0D24: definicion C reemplazada por asm (ver abajo)


// fn_800A0D6C: definicion C reemplazada por asm (ver abajo)


// fn_800A0D94: definicion C reemplazada por asm (ver abajo)


s32 fn_800A0E04(s8 *arg0);

// fn_800A0F08: definicion C reemplazada por asm (ver abajo)


// fn_800A0F50: definicion C reemplazada por asm (ver abajo)


// fn_800A0F98: definicion C reemplazada por asm (ver abajo)


void fn_800A1040(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

// fn_800A11B8: definicion C reemplazada por asm (ver abajo)


s32 fn_800A1234(s32 arg0, s32 arg1);

// fn_800A12D4: definicion C reemplazada por asm (ver abajo)


void fn_800A1344(s32 arg0, s32 arg1) {
    fn_80182BB4(M2C_FIELD(M2C_FIELD(fn_800A4DFC(arg0), s8 **, 8), s32 *, 0x377C), -1, 0, arg1);
}

/*
Decompilation failure in function fn_800A1388:

Found bctr instruction at g_cam_fra.s line 10472, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049F548;
extern float lbl_8049F560;
extern float lbl_8049F578;
extern u8 jumptable_8034CB68[];
extern u8 jumptable_8034CC14[];
extern u8 jumptable_8034CC5C[];
extern u8 jumptable_8034CC80[];
extern u8 jumptable_8034CD48[];
extern u8 lbl_8034CA78[];
extern void _restgpr_21();
extern void _restgpr_23();
extern void _restgpr_27();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_21();
extern void _savegpr_23();
extern void _savegpr_27();
extern void _savegpr_28();
extern void _savegpr_29();
extern void fn_8005791C();
extern void fn_8005793C();
extern void fn_800602FC();
extern void fn_80074FF4();
extern void fn_80075850();
extern void fn_800917D8();
extern void fn_80096378();
extern void fn_80096D38();
void fn_80099CF8();
s32 *fn_8009A09C(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_8009A198(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_8009A208(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_8009A278(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
s32 *fn_8009A2E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_8009A3A8(s32 arg0, M2C_UNK arg_sp0);
void fn_8009A414(s32 arg0);
void fn_8009A474(s32 arg0);
void fn_8009A4D4();
void fn_8009A544(s32 arg0, s32 arg1);
void fn_8009A628();
void fn_8009A694(s32 arg0, s32 arg1);
void fn_8009A700(s32 arg0, s32 arg1);
void fn_8009A76C(s32 arg0);
s32 fn_8009A7E4(s32 arg0);
void fn_8009A83C(void);
s32 fn_8009A8D8(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 fn_8009ADC8(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
s32 fn_8009AF5C(void);
s32 fn_8009AF68(void);
s32 fn_8009AF78(void);
s32 fn_8009AF88(s32 arg0);
s32 fn_8009AF9C(void);
s32 fn_8009AFAC(void);
s32 fn_8009AFBC(void);
void fn_8009AFCC(s32 arg0);
s32 fn_8009AFDC(void);
void fn_8009B028(s32 arg0, s32 arg1);
void fn_8009B044(s32 arg0);
void fn_8009B05C(s32 arg0);
void fn_8009B194(s32 arg0, s32 arg1, s32 arg2);
extern int fn_8009B344();
s32 fn_8009D038();
extern int fn_8009D080();
s32 fn_8009D2A8(s8 *arg0);
s32 fn_8009D3F4(s8 *arg0);
s32 fn_8009D4FC(s8 *arg0);
s32 fn_8009D578(s8 *arg0);
s32 fn_8009D614(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_8009D76C(s8 *arg0);
s32 fn_8009D838(s8 *arg0);
s32 fn_8009D95C(s8 *arg0);
s32 fn_8009D9EC(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_8009DFD4(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_8009E240();
s32 fn_8009E414(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_8009E690(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_8009E7C4(s8 *arg0);
s32 fn_8009E8E0();
s32 fn_8009EA94();
s32 fn_8009EC0C(s8 *arg0);
s32 fn_8009ED58(s8 *arg0);
s32 fn_8009EEA4(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_8009EFD0(s8 *arg0);
s32 fn_8009F0EC(s8 *arg0);
s32 fn_8009F1BC(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_8009F2F4(s32 **arg0);
s32 fn_8009F37C(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009F48C(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009F58C(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009F6E8(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009F7F8(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009F908(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009FA44(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009FB54(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009FCAC(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009FDE8(s32 **arg0, M2C_UNK arg_sp0);
s32 fn_8009FEF8(s32 **arg0, M2C_UNK arg_sp0);
void fn_800A0008(s32 **arg0);
void fn_800A00F8(s32 **arg0);
void fn_800A01E8(s32 **arg0, s32 **arg1);
void fn_800A0240(s32 **arg0, s32 **arg1);
void fn_800A033C(s8 *arg0);
extern int fn_800A0360();
void fn_800A06C4(s32 arg0);
s32 fn_800A0768(s8 *arg0, M2C_UNK arg_sp0);
s32 *fn_800A0BF0(void);
s32 fn_800A0BFC(s32 arg0);
void fn_800A0C6C(void);
s32 fn_800A0C98(s32 arg0);
s32 fn_800A0D24(s8 *arg0);
s32 fn_800A0D6C(s8 *arg0);
s32 fn_800A0D94(s8 *arg0);
s32 fn_800A0E04();
s8 *fn_800A0F08(u32 arg0);
s8 *fn_800A0F50(s32 arg0);
s32 fn_800A0F98(M2C_UNK arg_sp0);
void fn_800A1040();
s32 fn_800A11B8(s32 arg0, s32 arg1);
s32 fn_800A1234();
s32 fn_800A12D4(s32 arg0, s32 arg1);
extern int fn_800A1388();
extern void fn_800A5008();
extern void fn_80170E18();
extern void fn_80171454();
extern void fn_801773E0();
extern void fn_8017776C();
extern void fn_80181EE4();
extern void fn_8018C01C();
extern void fn_8018EA44();
extern void fn_8018EAB0();
extern void fn_8018EB84();
extern void fn_8018EC38();
extern void fn_8018ECA0();
extern void fn_8018EFA4();

// asm_to_cpp: fn_80099CF8
asm void fn_80099CF8() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    stfd f28, 0x50(r1)
    opword 0xF3810058
    stfd f27, 0x40(r1)
    opword 0xF3610048
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r27, r3
    li r29, 0x0
    li r28, 0x0
    li r26, 0x0
    la r3, lbl_8049F550
    lfs f28, 0x4(r3)
    lis r4, lbl_803A19E8@ha
    addi r31, r4, lbl_803A19E8@l
    lfd f29, lbl_8049F548
    lis r24, 0x4330
    lfs f30, 0x8(r3)
    lfs f31, 0xc(r3)
lbl_80099D64:
    add r30, r27, r26
    lwz r3, 0x0(r30)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80099E8C
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bgt lbl_80099E8C
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bgt lbl_80099E8C
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_80099E8C
    li r23, 0x0
    li r25, 0x0
lbl_80099DA4:
    lwzx r4, r31, r25
    cmpwi r4, 0x0
    beq lbl_80099E00
    cmplw r4, r30
    beq lbl_80099E00
    lwz r3, 0x4(r4)
    lwz r0, 0x4(r30)
    cmpw r3, r0
    bne lbl_80099E00
    lfs f1, 0x38(r4)
    lfs f0, 0x38(r30)
    fsubs f1, f1, f0
    bl fn_80018BD4
    fcmpo cr0, f1, f28
    bge lbl_80099E00
    lwz r0, 0x0(r30)
    ori r0, r0, 0x100
    stw r0, 0x0(r30)
    lwzx r3, r31, r25
    lwz r0, 0x0(r3)
    ori r0, r0, 0x100
    stw r0, 0x0(r3)
    addi r29, r29, 0x1
lbl_80099E00:
    addi r23, r23, 0x1
    addi r25, r25, 0x8
    cmpwi r23, 0x40
    blt lbl_80099DA4
    cmpwi r29, 0x0
    ble lbl_80099E8C
    addi r0, r29, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r24, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f29
    fdivs f27, f30, f0
    fmuls f0, f31, f27
    fadds f27, f27, f0
    li r25, 0x0
    li r30, 0x0
lbl_80099E44:
    add r3, r27, r30
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80099E7C
    ori r0, r4, 0x200
    stw r0, 0x0(r3)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x0(r3)
    lfs f0, 0x34(r3)
    fmuls f1, f0, f27
    li r4, 0x0
    bl fn_8018ECA0
lbl_80099E7C:
    addi r25, r25, 0x1
    addi r30, r30, 0x58
    cmpwi r25, 0x18
    blt lbl_80099E44
lbl_80099E8C:
    addi r28, r28, 0x1
    addi r26, r26, 0x58
    cmpwi r28, 0x18
    blt lbl_80099D64
    li r3, 0x0
    li r0, 0x18
    mtctr r0
lbl_80099EA8:
    lwzx r0, r27, r3
    rlwinm r0, r0, 0, 24, 21
    stwx r0, r27, r3
    addi r3, r3, 0x58
    bdnz lbl_80099EA8
    li r24, 0x0
    li r27, 0x0
    lis r3, lbl_803A19E8@ha
    addi r25, r3, lbl_803A19E8@l
lbl_80099ECC:
    add r3, r25, r27
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80099F00
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    blt lbl_80099F00
    li r4, 0x0
    li r5, 0x8
    bl memset
lbl_80099F00:
    addi r24, r24, 0x1
    addi r27, r27, 0x8
    cmpwi r24, 0x40
    blt lbl_80099ECC
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    li r0, 0x58
    opword 0x1381000C
    lfd f28, 0x50(r1)
    li r0, 0x48
    opword 0x1361000C
    lfd f27, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

s32 *fn_8009A09C(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 var_r30;
    s8 *temp_r31;

    if ((s32) lbl_8049C308 == 0) {
        return NULL;
    }
    if (arg0 < 0) {
        return NULL;
    }
    temp_r31 = fn_8005E2CC((u32) arg1);
    var_r30 = 0;
loop_5:
    temp_r3_2 = fn_8018E734(var_r30);
    if (((s32) (M2C_FIELD(temp_r3_2, s32 *, 0) & 0x40) != 0) && ((s32) M2C_FIELD(temp_r3_2, s32 *, 0x54) == arg1)) {
        if (temp_r31 != NULL) {
            if ((s32) (M2C_FIELD(temp_r31, s32 *, 0x68) & 0x10000) != 0) {
                return NULL;
            }
            fn_8018EA44(temp_r3_2);
            goto block_12;
        }
        goto block_12;
    }
    var_r30 += 1;
    if (var_r30 >= 0x18) {
block_12:
        if (temp_r31 != NULL) {
            M2C_FIELD(temp_r31, s32 *, 0x68) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x68) & 0xFFFEFFFF);
        }
        temp_r3 = fn_8018E7C4((s32 *) arg0);
        if (temp_r3 == NULL) {
            return NULL;
        }
        M2C_FIELD(temp_r3, s32 *, 0) |= 0x40;
        M2C_FIELD(temp_r3, s32 *, 0x54) = arg1;
        return temp_r3;
    }
    goto loop_5;
}

void fn_8009A198(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 *temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x40) != 0) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x54) == arg0)) {
            fn_8018EAB0(temp_r3, arg1);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

void fn_8009A208(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 *temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x40) != 0) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x54) == arg0)) {
            fn_8018EB84(temp_r3, arg1);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

void fn_8009A278(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 *temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x40) != 0) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x54) == arg0)) {
            fn_8018EC38((s32) temp_r3, arg1);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

// asm_to_cpp: fn_8009A2E8
asm s32 *fn_8009A2E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lbz r0, lbl_8049C308
    cmpwi r0, 0x0
    bne lbl_8009A31C
    li r3, 0x0
    b lbl_8009A390
lbl_8009A31C:
    cmpwi r3, 0x0
    bge lbl_8009A32C
    li r3, 0x0
    b lbl_8009A390
lbl_8009A32C:
    cmpwi r6, 0x0
    beq lbl_8009A360
    li r31, 0x0
lbl_8009A338:
    mr r3, r31
    bl fn_8018E734
    lwz r0, 0x4(r3)
    cmpw r0, r28
    bne lbl_8009A354
    li r3, 0x0
    b lbl_8009A390
lbl_8009A354:
    addi r31, r31, 0x1
    cmpwi r31, 0x18
    blt lbl_8009A338
lbl_8009A360:
    mr r3, r30
    bl fn_8009A3A8
    mr r3, r28
    mr r4, r29
    bl fn_8018E940
    cmpwi r3, 0x0
    bne lbl_8009A384
    li r3, 0x0
    b lbl_8009A390
lbl_8009A384:
    lwz r0, 0x0(r3)
    ori r0, r0, 0x10
    stw r0, 0x0(r3)
lbl_8009A390:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8009A3A8(s32 arg0, M2C_UNK arg_sp0) {
    s32 *temp_r3;
    s32 var_r29;

    var_r29 = 0;
    do {
        temp_r3 = fn_8018E734(var_r29);
        if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x10) != 0) {
            fn_8018EAB0(temp_r3, arg0);
            M2C_FIELD(temp_r3, s32 *, 4) = -1;
        }
        var_r29 += 1;
    } while (var_r29 < 0x18);
}

void fn_8009A414(s32 arg0) {
    s32 *temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if ((s32) (*temp_r3 & 0x10) != 0) {
            fn_8018EB84(temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

void fn_8009A474(s32 arg0) {
    s32 *temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if ((s32) (*temp_r3 & 0x10) != 0) {
            fn_8018EC38((s32) temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

// asm_to_cpp: fn_8009A4D4
asm void fn_8009A4D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    fmr f31, f1
    mr r30, r3
    li r31, 0x0
lbl_8009A4F8:
    mr r3, r31
    bl fn_8018E734
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8009A51C
    fmr f1, f31
    mr r4, r30
    bl fn_8018ECA0
lbl_8009A51C:
    addi r31, r31, 0x1
    cmpwi r31, 0x18
    blt lbl_8009A4F8
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009A544
asm void fn_8009A544(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0xc98(r3)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8009A57C
    rlwinm r31, r4, 0, 31, 29
lbl_8009A57C:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8009A58C
    rlwinm r31, r31, 0, 30, 28
lbl_8009A58C:
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8009A59C
    rlwinm r31, r31, 0, 29, 27
lbl_8009A59C:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8009A5AC
    rlwinm r31, r31, 0, 28, 26
lbl_8009A5AC:
    bl fn_8005CFCC
    cmpwi r3, 0x0
    beq lbl_8009A5FC
    bl fn_80169518
    cmpwi r3, 0x0
    bne lbl_8009A5E0
    rlwinm r0, r31, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8009A610
    rlwinm r31, r31, 0, 31, 26
    ori r31, r31, 0x2
    b lbl_8009A5FC
    b lbl_8009A610
lbl_8009A5E0:
    rlwinm r0, r31, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8009A610
    rlwinm r31, r31, 0, 31, 26
    ori r31, r31, 0x2
    b lbl_8009A5FC
    b lbl_8009A610
lbl_8009A5FC:
    cmpwi r31, 0x0
    beq lbl_8009A610
    mr r3, r30
    mr r4, r31
    bl fn_8018EFA4
lbl_8009A610:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8009A628
asm void fn_8009A628() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_8009A64C
    bl fn_8009A3A8
lbl_8009A64C:
    li r31, 0x0
lbl_8009A650:
    mr r3, r31
    bl fn_8018E734
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8009A670
    mr r4, r30
    bl fn_8018EAB0
lbl_8009A670:
    addi r31, r31, 0x1
    cmpwi r31, 0x18
    blt lbl_8009A650
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8009A694(s32 arg0, s32 arg1) {
    s32 *temp_r3;
    s32 var_r31;

    if (arg1 != 0) {
        fn_8009A414(arg0);
    }
    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if ((s32) (*temp_r3 & 0x10) == 0) {
            fn_8018EB84(temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

void fn_8009A700(s32 arg0, s32 arg1) {
    s32 *temp_r3;
    s32 var_r31;

    if (arg1 != 0) {
        fn_8009A474(arg0);
    }
    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if ((s32) (*temp_r3 & 0x10) == 0) {
            fn_8018EC38((s32) temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

void fn_8009A76C(s32 arg0) {
    s32 *temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = fn_8018E734(var_r31);
        if ((s32) (*temp_r3 & 0x80) != 0) {
            fn_8018EAB0(temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 0x18);
}

// asm_to_cpp: fn_8009A7E4
asm s32 fn_8009A7E4(s32 arg0) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_8009A7F4
    li r3, 0x0
    blr
lbl_8009A7F4:
    li r4, 0x0
    lis r5, lbl_803A19E8@ha
    addi r5, r5, lbl_803A19E8@l
    li r0, 0x40
    mtctr r0
lbl_8009A808:
    add r6, r5, r4
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_8009A82C
    stw r3, 0x0(r6)
    li r0, 0x0
    stw r0, 0x4(r6)
    li r3, 0x1
    blr
lbl_8009A82C:
    addi r4, r4, 0x8
    bdnz lbl_8009A808
    li r3, 0x0
    blr
}

void fn_8009A83C(void) {
    s32 temp_r3;

    temp_r3 = fn_801771D4(3, fn_8009A8D8, 0xC);
    memset(temp_r3, 0, 0xC);
    fn_801773E0(temp_r3);
}

// asm_to_cpp: fn_8009A8D8
asm s32 fn_8009A8D8(s8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    lis r5, lbl_803A1BE8@ha
    addi r31, r5, lbl_803A1BE8@l
    cmpwi r4, 0x0
    beq lbl_8009A908
    li r3, 0x0
    b lbl_8009ADB0
lbl_8009A908:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8009A930
    cmpwi r0, 0x1
    beq lbl_8009AC68
    cmpwi r0, 0xf0
    beq lbl_8009ACC4
    cmpwi r0, 0xf1
    beq lbl_8009ACCC
    b lbl_8009AD68
lbl_8009A930:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl memset
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x18(r3)
    stw r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8009A97C
    cmpwi r0, 0x1
    beq lbl_8009A9F4
    cmpwi r0, 0x2
    beq lbl_8009AA78
    cmpwi r0, 0xc
    beq lbl_8009AB30
    cmpwi r0, 0xd
    beq lbl_8009ABBC
    b lbl_8009AC48
lbl_8009A97C:
    li r0, 0x3
    stw r0, 0xc(r31)
    li r29, 0x0
    stw r29, 0x8(r31)
    li r0, 0x10
    stw r0, 0x10(r31)
    li r0, -0x1
    stw r0, 0x14(r31)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x21(r3)
    cmpwi r0, 0x0
    beq lbl_8009A9D4
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009A9C8
    li r0, 0x13
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009A9C8:
    li r0, 0x9
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009A9D4:
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009A9EC
    li r0, 0x12
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009A9EC:
    stw r29, 0x8(r31)
    b lbl_8009AC48
lbl_8009A9F4:
    li r29, 0x3
    stw r29, 0xc(r31)
    li r0, 0x0
    stw r0, 0x10(r31)
    stw r0, 0x14(r31)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0x10(r3)
    lwz r0, 0x0(r31)
    ori r0, r0, 0x1
    stw r0, 0x0(r31)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x21(r3)
    cmpwi r0, 0x0
    beq lbl_8009AA58
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009AA4C
    li r0, 0xc
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AA4C:
    li r0, 0xa
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AA58:
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009AA6C
    stw r29, 0x8(r31)
    b lbl_8009AC48
lbl_8009AA6C:
    li r0, 0x1
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AA78:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r0, 0x44(r3)
    cmpwi r0, 0x5
    beq lbl_8009AA94
    cmpwi r0, 0x7
    bne lbl_8009AAB0
lbl_8009AA94:
    li r3, 0x7
    li r4, 0x12
    li r5, 0x2
    li r6, 0x0
    li r7, 0x0
    bl fn_8005793C
    b lbl_8009AAC8
lbl_8009AAB0:
    li r0, 0x3
    stw r0, 0xc(r31)
    li r0, 0x9
    stw r0, 0x10(r31)
    li r0, 0x0
    stw r0, 0x14(r31)
lbl_8009AAC8:
    lwz r0, 0x0(r31)
    ori r0, r0, 0x1
    stw r0, 0x0(r31)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x21(r3)
    cmpwi r0, 0x0
    beq lbl_8009AB0C
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009AB00
    li r0, 0xd
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AB00:
    li r0, 0xb
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AB0C:
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009AB24
    li r0, 0x4
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AB24:
    li r0, 0x2
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AB30:
    li r29, 0x3
    stw r29, 0xc(r31)
    li r0, 0x6
    stw r0, 0x10(r31)
    li r0, -0x1
    stw r0, 0x14(r31)
    li r0, 0x5a
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0x10(r3)
    lwz r0, 0x0(r31)
    ori r0, r0, 0x1
    stw r0, 0x0(r31)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x21(r3)
    cmpwi r0, 0x0
    beq lbl_8009AB9C
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009AB90
    li r0, 0xc
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AB90:
    li r0, 0xa
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AB9C:
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009ABB0
    stw r29, 0x8(r31)
    b lbl_8009AC48
lbl_8009ABB0:
    li r0, 0x1
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009ABBC:
    li r0, 0x3
    stw r0, 0xc(r31)
    li r0, 0x6
    stw r0, 0x10(r31)
    li r0, -0x1
    stw r0, 0x14(r31)
    li r0, 0x5a
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0x10(r3)
    lwz r0, 0x0(r31)
    ori r0, r0, 0x1
    stw r0, 0x0(r31)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x21(r3)
    cmpwi r0, 0x0
    beq lbl_8009AC28
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009AC1C
    li r0, 0xd
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AC1C:
    li r0, 0xb
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AC28:
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_8009AC40
    li r0, 0x4
    stw r0, 0x8(r31)
    b lbl_8009AC48
lbl_8009AC40:
    li r0, 0x2
    stw r0, 0x8(r31)
lbl_8009AC48:
    lwz r3, 0x8(r31)
    li r4, 0x0
    bl fn_80136E78
    stw r3, lbl_8049D5B8
    lwz r3, 0x0(r30)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
    b lbl_8009AD68
lbl_8009AC68:
    li r29, 0x0
    bl fn_80136DB4
    cmpwi r3, 0x0
    beq lbl_8009AC7C
    li r29, 0x1
lbl_8009AC7C:
    lwz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8009ACA8
    lis r3, lbl_803BE030@ha
    addi r3, r3, lbl_803BE030@l
    lwz r0, 0x50(r3)
    andi. r0, r0, 0x110
    cmpwi r0, 0x0
    beq lbl_8009ACA8
    li r29, 0x1
lbl_8009ACA8:
    cmpwi r29, 0x0
    beq lbl_8009AD68
    bl fn_80136DDC
    cmpwi r3, 0x0
    beq lbl_8009AD68
    li r0, 0xf0
    stw r0, 0x0(r30)
lbl_8009ACC4:
    li r0, 0xf1
    stw r0, 0x0(r30)
lbl_8009ACCC:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r0, 0x44(r3)
    cmpwi r0, 0x5
    beq lbl_8009ACE8
    cmpwi r0, 0x7
    bne lbl_8009AD04
lbl_8009ACE8:
    li r3, 0x7
    li r4, 0x12
    li r5, 0x2
    li r6, 0x0
    li r7, 0x0
    bl fn_8005793C
    b lbl_8009AD18
lbl_8009AD04:
    lwz r3, 0xc(r31)
    lwz r4, 0x10(r31)
    lwz r5, 0x14(r31)
    li r6, 0x0
    bl fn_8005791C
lbl_8009AD18:
    lis r7, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r7)
    ori r0, r0, 0x1
    stw r0, lbl_80390580@l(r7)
    li r3, 0x0
    li r4, 0x0
    lis r5, lbl_803C22B0@ha
    addi r5, r5, lbl_803C22B0@l
    lwz r5, 0x54(r5)
    lhz r5, 0xe(r5)
    li r6, 0x1e0
    addi r7, r7, lbl_80390580@l
    lwz r7, 0x3c(r7)
    bl fn_8018C01C
    mr r3, r30
    bl fn_8017776C
    li r0, 0x0
    stw r0, lbl_8049D5B8
    li r3, 0x0
    b lbl_8009ADB0
lbl_8009AD68:
    lwz r0, 0x8(r30)
    cmplwi r0, 0x3
    bge lbl_8009ADA0
    li r3, 0x0
    li r4, 0x0
    lis r5, lbl_803C22B0@ha
    addi r5, r5, lbl_803C22B0@l
    lwz r5, 0x54(r5)
    lhz r5, 0xe(r5)
    li r6, 0x1e0
    lis r7, lbl_80390580@ha
    addi r7, r7, lbl_80390580@l
    lwz r7, 0x3c(r7)
    bl fn_8018C01C
lbl_8009ADA0:
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    li r3, 0x0
lbl_8009ADB0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009ADC8
asm s32 fn_8009ADC8(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_28
    mr r29, r3
    mr r30, r4
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    addi r31, r3, 0x10
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x5
    bne lbl_8009AE34
    addi r3, r1, 0x8
    li r4, 0x9
    mr r5, r29
    mr r6, r30
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r28, r3
    b lbl_8009AF04
lbl_8009AE34:
    addi r3, r1, 0x8
    li r4, 0x12
    mr r5, r29
    mr r6, r30
    li r7, 0x0
    bl fn_8008B160
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x3
    beq lbl_8009AE78
    cmpwi r0, 0x4
    beq lbl_8009AE94
    cmpwi r0, 0x2
    beq lbl_8009AEB4
    cmpwi r0, 0x5
    beq lbl_8009AED4
    b lbl_8009AEF0
lbl_8009AE78:
    addi r3, r1, 0x8
    lis r4, lbl_8034CA58@ha
    addi r4, r4, lbl_8034CA58@l
    mr r5, r3
    opword 0x4CC63182
    bl sprintf
    b lbl_8009AEF0
lbl_8009AE94:
    addi r3, r1, 0x8
    lis r4, lbl_8034CA58@ha
    addi r4, r4, lbl_8034CA58@l
    addi r4, r4, 0x7
    mr r5, r3
    opword 0x4CC63182
    bl sprintf
    b lbl_8009AEF0
lbl_8009AEB4:
    addi r3, r1, 0x8
    lis r4, lbl_8034CA58@ha
    addi r4, r4, lbl_8034CA58@l
    addi r4, r4, 0xe
    mr r5, r3
    opword 0x4CC63182
    bl sprintf
    b lbl_8009AEF0
lbl_8009AED4:
    addi r3, r1, 0x8
    lis r4, lbl_8034CA58@ha
    addi r4, r4, lbl_8034CA58@l
    addi r4, r4, 0x15
    mr r5, r3
    opword 0x4CC63182
    bl sprintf
lbl_8009AEF0:
    addi r3, r1, 0x8
    li r4, 0x5
    li r5, 0x0
    bl fn_80153D90
    mr r28, r3
lbl_8009AF04:
    lis r3, lbl_803A1C00@ha
    stw r29, lbl_803A1C00@l(r3)
    addi r3, r3, lbl_803A1C00@l
    stw r30, 0x4(r3)
    addi r3, r3, 0x10
    li r4, 0x0
    li r5, 0x78
    bl memset
    li r3, 0x0
    mr r4, r3
    li r0, 0x4
    mtctr r0
lbl_8009AF34:
    stwx r4, r31, r3
    addi r3, r3, 0x18
    bdnz lbl_8009AF34
    mr r3, r28
    addi r11, r1, 0x120
    bl _restgpr_28
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: fn_8009AF5C
asm s32 fn_8009AF5C(void) {
    nofralloc
    lis r3, lbl_803A1C00@ha
    lwz r3, lbl_803A1C00@l(r3)
    blr
}

// asm_to_cpp: fn_8009AF68
asm s32 fn_8009AF68(void) {
    nofralloc
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    lwz r3, 0x4(r3)
    blr
}

// asm_to_cpp: fn_8009AF78
asm s32 fn_8009AF78(void) {
    nofralloc
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    lwz r3, 0x8(r3)
    blr
}

// asm_to_cpp: fn_8009AF88
asm s32 fn_8009AF88(s32 arg0) {
    nofralloc
    lis r4, lbl_803A1C00@ha
    addi r4, r4, lbl_803A1C00@l
    lwz r0, 0x8(r4)
    and r3, r0, r3
    blr
}

// asm_to_cpp: fn_8009AF9C
asm s32 fn_8009AF9C(void) {
    nofralloc
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    lwz r3, 0x7c(r3)
    blr
}

// asm_to_cpp: fn_8009AFAC
asm s32 fn_8009AFAC(void) {
    nofralloc
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    lwz r3, 0x80(r3)
    blr
}

// asm_to_cpp: fn_8009AFBC
asm s32 fn_8009AFBC(void) {
    nofralloc
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    lwz r3, 0x84(r3)
    blr
}

// asm_to_cpp: fn_8009AFCC
asm void fn_8009AFCC(s32 arg0) {
    nofralloc
    lis r4, lbl_803A1C00@ha
    addi r4, r4, lbl_803A1C00@l
    stw r3, 0xc(r4)
    blr
}

// asm_to_cpp: fn_8009AFDC
asm s32 fn_8009AFDC(void) {
    nofralloc
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    lwz r3, 0xc(r3)
    cmpwi r3, 0x1
    bne lbl_8009AFF8
    li r3, 0x1
    blr
lbl_8009AFF8:
    cmpwi r3, 0x0
    bne lbl_8009B008
    li r3, 0x0
    blr
lbl_8009B008:
    cmpwi r3, 0x2
    bne lbl_8009B018
    li r3, 0x0
    blr
lbl_8009B018:
    subi r3, r3, 0x3
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// asm_to_cpp: fn_8009B028
asm void fn_8009B028(s32 arg0, s32 arg1) {
    nofralloc
    lis r5, lbl_803A1C00@ha
    addi r5, r5, lbl_803A1C00@l
    mulli r0, r3, 0x18
    add r3, r5, r0
    addi r3, r3, 0x10
    li r5, 0x18
    b memcpy
}

// asm_to_cpp: fn_8009B044
asm void fn_8009B044(s32 arg0) {
    nofralloc
    mr r4, r3
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    addi r3, r3, 0x70
    li r5, 0x18
    b memcpy
}

// asm_to_cpp: fn_8009B05C
asm void fn_8009B05C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lis r3, lbl_803A1C00@ha
    addi r3, r3, lbl_803A1C00@l
    addi r31, r3, 0x10
    bl fn_800917D8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    lis r6, lbl_80395728@ha
    addi r11, r6, lbl_80395728@l
    mr r10, r5
    mr r9, r5
    mr r8, r5
    mr r7, r5
    li r0, 0x4
    mtctr r0
lbl_8009B0B0:
    add r6, r11, r3
    stw r10, 0x18(r6)
    stw r9, 0x1c(r6)
    stw r8, 0x20(r6)
    stw r7, 0x24(r6)
    add r12, r31, r4
    lwz r0, 0x0(r12)
    stw r0, 0x28(r6)
    lwz r0, 0x4(r12)
    stw r0, 0x2c(r6)
    lwz r0, 0x8(r12)
    stw r0, 0x30(r6)
    lwz r0, 0xc(r12)
    stw r0, 0x34(r6)
    lwz r0, 0x14(r12)
    stw r0, 0x38(r6)
    lwz r0, 0x10(r12)
    add r6, r11, r5
    stw r0, 0xbf0(r6)
    addi r3, r3, 0x78
    addi r4, r4, 0x18
    addi r5, r5, 0x4
    bdnz lbl_8009B0B0
    lwz r0, 0x60(r31)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0xbe4(r3)
    lwz r0, 0x64(r31)
    stw r0, 0xbe8(r3)
    lwz r0, 0x68(r31)
    stw r0, 0xc00(r3)
    cmpwi r30, 0x0
    beq lbl_8009B140
    li r0, 0x12
    stw r0, 0x4(r3)
    b lbl_8009B148
lbl_8009B140:
    li r0, 0xe
    stw r0, 0x4(r3)
lbl_8009B148:
    lis r5, lbl_803A1C00@ha
    lwz r0, lbl_803A1C00@l(r5)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    stw r0, 0x8(r4)
    addi r3, r5, lbl_803A1C00@l
    lwz r0, 0x4(r3)
    stw r0, 0xc(r4)
    li r3, 0x2
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8005791C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8009B194
asm void fn_8009B194(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r31, r5
    cmpwi r3, 0x4
    beq lbl_8009B294
    bge lbl_8009B1E0
    cmpwi r3, 0x1
    beq lbl_8009B234
    bge lbl_8009B1D4
    cmpwi r3, 0x0
    bge lbl_8009B1FC
    b lbl_8009B32C
lbl_8009B1D4:
    cmpwi r3, 0x3
    bge lbl_8009B27C
    b lbl_8009B240
lbl_8009B1E0:
    cmpwi r3, 0xff
    beq lbl_8009B31C
    bge lbl_8009B32C
    cmpwi r3, 0x6
    beq lbl_8009B310
    bge lbl_8009B32C
    b lbl_8009B2D0
lbl_8009B1FC:
    li r3, 0x5
    li r6, 0xff
    li r7, 0x0
    bl fn_8005793C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0x10(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8009B32C
    mr r3, r30
    mr r4, r31
    bl fn_80096378
    b lbl_8009B32C
lbl_8009B234:
    li r3, 0x0
    bl fn_8009B05C
    b lbl_8009B32C
lbl_8009B240:
    li r3, 0x6
    li r4, 0x2
    li r5, 0xff
    li r6, 0x0
    bl fn_8005791C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0x10(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8009B32C
    li r3, 0x0
    li r4, 0x0
    bl fn_80096378
    b lbl_8009B32C
lbl_8009B27C:
    li r3, 0x3
    li r4, 0x0
    li r5, 0xff
    li r6, 0x0
    bl fn_8005791C
    b lbl_8009B32C
lbl_8009B294:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0x10(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8009B2B8
    mr r3, r30
    mr r4, r31
    bl fn_80096378
lbl_8009B2B8:
    li r3, 0x3
    li r4, 0x0
    li r5, 0xff
    li r6, 0x0
    bl fn_8005791C
    b lbl_8009B32C
lbl_8009B2D0:
    li r3, 0x7
    li r6, 0xff
    li r7, 0x0
    bl fn_8005793C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r30, 0x8(r3)
    stw r31, 0xc(r3)
    lwz r3, 0x10(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8009B32C
    mr r3, r30
    mr r4, r31
    bl fn_80096378
    b lbl_8009B32C
lbl_8009B310:
    li r3, 0x1
    bl fn_8009B05C
    b lbl_8009B32C
lbl_8009B31C:
    li r0, 0x1
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    stb r0, 0x38(r3)
lbl_8009B32C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8009B344
asm int fn_8009B344() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    li r29, 0x0
    stw r29, 0x14(r1)
    stw r29, 0x10(r1)
    stw r29, 0xc(r1)
    stw r29, 0x8(r1)
    lis r4, lbl_80390580@ha
    addi r30, r4, lbl_80390580@l
    lwz r31, 0xc(r30)
    lwz r0, 0x78(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8009D020
    cmpwi r3, 0x0
    beq lbl_8009B39C
    cmpwi r3, 0x1
    beq lbl_8009B584
    b lbl_8009D020
lbl_8009B39C:
    lwz r3, 0x7c(r31)
    subi r0, r3, 0x2a
    cmplwi r0, 0x11
    bgt lbl_8009D020
    lis r3, jumptable_8034CC14@ha
    addi r3, r3, jumptable_8034CC14@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r29, 0x88(r31)
    li r3, 0x1
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x3
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x3
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x1a
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x1b
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x18
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x19
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x1b
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x1a
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x1c
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    li r3, 0x1a
    bl fn_8005E41C
    stw r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x8000
    stw r0, 0x74(r3)
    b lbl_8009D020
    stw r29, 0x88(r31)
    b lbl_8009D020
    li r29, 0x0
lbl_8009B530:
    mr r3, r29
    bl fn_8005E2CC
    stw r3, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_8009B56C
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8009B56C
    lwz r3, 0x3774(r3)
    cmpwi r3, 0x0
    beq lbl_8009B56C
    lwz r0, 0x0(r3)
    ori r0, r0, 0x100
    stw r0, 0x0(r3)
lbl_8009B56C:
    addi r29, r29, 0x1
    cmpwi r29, 0x19
    blt lbl_8009B530
    li r0, 0x0
    stw r0, 0x88(r31)
    b lbl_8009D020
lbl_8009B584:
    stw r29, 0x34(r30)
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    cmplwi r0, 0x2a
    bgt lbl_8009D020
    lis r3, jumptable_8034CB68@ha
    addi r3, r3, jumptable_8034CB68@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r4, 0xc(r30)
    lwz r3, 0x6c(r4)
    li r0, -0x17
    and r0, r3, r0
    stw r0, 0x6c(r4)
    lwz r0, 0x78(r31)
    rlwinm r0, r0, 0, 30, 26
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0xc004
    ori r0, r0, 0x8
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x600
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x10
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x4000
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x600
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8104
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x580
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    li r0, 0x25
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x7e0
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    li r0, 0x25
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xfa0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x74(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    li r0, 0x3
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xfc0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8000
    ori r0, r0, 0x20
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    li r0, 0x14
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0xc004
    ori r0, r0, 0x8
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x600
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0xc004
    ori r0, r0, 0x8
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x10
    stw r0, 0x78(r31)
    li r0, 0x14
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r0, 0x78(r31)
    rlwinm r0, r0, 0, 30, 27
    stw r0, 0x78(r31)
    li r0, 0x13
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x600
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8002
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x30
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x34
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x12
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x1c
    stw r0, 0x78(r31)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    li r0, 0x16
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xe42
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    ori r0, r0, 0x1100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xe42
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x100
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xe42
    ori r0, r0, 0x7
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x8
    stw r0, 0x78(r31)
    lwz r0, 0x78(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x78(r31)
    li r0, 0x17
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x2003
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x662
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x1180
    stw r0, 0x5c(r3)
    lwz r5, 0x14(r1)
    lwz r4, 0x74(r5)
    lis r3, 0xf800
    subi r0, r3, 0x5
    and r0, r4, r0
    stw r0, 0x74(r5)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xe42
    ori r0, r0, 0x7
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xe42
    ori r0, r0, 0x7
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x78(r31)
    lwz r0, 0x78(r31)
    ori r0, r0, 0x8
    stw r0, 0x78(r31)
    li r0, 0x1b
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x642
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    li r0, 0x1d
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 16, 13
    stw r0, 0x58(r3)
    lwz r5, 0x14(r1)
    lwz r4, 0x5c(r5)
    lis r3, 0xfffe
    subi r0, r3, 0x181
    and r0, r4, r0
    stw r0, 0x5c(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x7
    stw r0, 0x74(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    ori r0, r0, 0x1000
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    li r0, 0x1e
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x3
    ori r0, r0, 0x1000
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    ori r0, r0, 0x5
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x782
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x1
    ori r0, r0, 0x1000
    stw r0, 0x58(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x1
    ori r0, r0, 0x1000
    stw r0, 0x58(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0xc004
    ori r0, r0, 0x8
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0xc004
    ori r0, r0, 0xa
    stw r0, 0x58(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x8080
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xc00
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    ori r0, r0, 0x2
    stw r0, 0x58(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    lwz r5, 0x10(r1)
    lwz r4, 0x74(r5)
    lis r3, 0xf800
    subi r0, r3, 0x5
    and r0, r4, r0
    stw r0, 0x74(r5)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    li r0, 0x22
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x8180
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    li r0, 0x25
    lwz r3, 0xc(r30)
    stw r0, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xfc0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x8180
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xf80
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x180
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x7c0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x8080
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x7c0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xc00
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    stw r0, 0x58(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0xc00
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    stw r0, 0x58(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x7c0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x8080
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x7c0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x7c0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x8080
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x7c0
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
    b lbl_8009D020
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r3, 0xc(r30)
    lwz r0, 0x6c(r3)
    ori r0, r0, 0x2
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r31)
    ori r0, r0, 0xc
    stw r0, 0x78(r31)
    lwz r3, 0xc(r30)
    stw r29, 0x70(r3)
    lwz r5, 0x14(r1)
    lwz r0, 0x74(r5)
    lis r3, 0xf020
    subi r4, r3, 0x4
    and r0, r0, r4
    stw r0, 0x74(r5)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    and r0, r0, r4
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x780
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0xa
    ori r0, r0, 0x80
    stw r0, 0x5c(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x380
    ori r0, r0, 0x3
    stw r0, 0x74(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x2
    ori r0, r0, 0x8080
    stw r0, 0x5c(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x40
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x10(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x74(r3)
    oris r0, r0, 0x40
    ori r0, r0, 0x1
    stw r0, 0x74(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    ori r0, r0, 0x100
    stw r0, 0x58(r3)
    lwz r3, 0x8(r1)
    lwz r0, 0x5c(r3)
    oris r0, r0, 0x8
    stw r0, 0x5c(r3)
lbl_8009D020:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8009D038
asm s32 fn_8009D038() {
    nofralloc
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8009D050
    li r3, -0x1
    blr
lbl_8009D050:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bge lbl_8009D064
    li r3, -0x1
    blr
lbl_8009D064:
    slwi r0, r0, 2
    lis r4, lbl_8034CA78@ha
    addi r4, r4, lbl_8034CA78@l
    lwzx r12, r4, r0
    mtctr r12
    bctr
}

// asm_to_cpp: fn_8009D080
asm int fn_8009D080() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    lwz r3, 0xc(r1)
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8009D0C4
    bl fn_8008CCC8
    b lbl_8009D0CC
lbl_8009D0C4:
    li r3, -0x1
    b lbl_8009D290
lbl_8009D0CC:
    lwz r0, 0xc(r30)
    cmplwi r0, 0x7
    bgt lbl_8009D28C
    lis r4, jumptable_8034CC5C@ha
    addi r4, r4, jumptable_8034CC5C@l
    slwi r0, r0, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r4, 0xc(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x2
    beq lbl_8009D108
    cmpwi r3, 0x0
    beq lbl_8009D28C
lbl_8009D108:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D28C
    lwz r4, 0xc(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x3
    beq lbl_8009D138
    cmpwi r3, 0x0
    beq lbl_8009D28C
lbl_8009D138:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D28C
    cmpwi r3, 0x0
    bne lbl_8009D17C
    lwz r3, 0xc(r1)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8009D28C
    lwz r3, 0x140(r3)
    subi r0, r3, 0x14
    cmplwi r0, 0x8
    bgt lbl_8009D28C
lbl_8009D17C:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D28C
    lwz r4, 0xc(r1)
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8009D1B0
    cmpwi r3, 0x0
    beq lbl_8009D28C
lbl_8009D1B0:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D28C
    lwz r4, 0xc(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x4
    beq lbl_8009D1E0
    cmpwi r3, 0x0
    beq lbl_8009D28C
lbl_8009D1E0:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D28C
    lwz r4, 0xc(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x7
    beq lbl_8009D210
    cmpwi r3, 0x0
    beq lbl_8009D28C
lbl_8009D210:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D28C
    lwz r4, 0xc(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x5
    beq lbl_8009D240
    cmpwi r3, 0x0
    beq lbl_8009D28C
lbl_8009D240:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D28C
    lwz r4, 0xc(r1)
    lwz r0, 0x50(r4)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8009D274
    cmpwi r3, 0x0
    beq lbl_8009D28C
lbl_8009D274:
    mr r3, r4
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x1
    stw r0, 0x10(r30)
lbl_8009D28C:
    mr r3, r31
lbl_8009D290:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009D2A8
asm s32 fn_8009D2A8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_8009D2EC
    cmpwi r0, 0x1
    beq lbl_8009D320
    b lbl_8009D354
lbl_8009D2EC:
    lwz r4, 0xc(r1)
    lwz r4, 0x140(r4)
    subi r0, r4, 0xb0
    cmplwi r0, 0xf
    ble lbl_8009D308
    cmpwi r3, 0x0
    beq lbl_8009D354
lbl_8009D308:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D354
lbl_8009D320:
    lwz r5, 0xc(r1)
    lwz r4, 0x140(r5)
    subi r0, r4, 0xa0
    cmplwi r0, 0xf
    ble lbl_8009D33C
    cmpwi r3, 0x0
    beq lbl_8009D354
lbl_8009D33C:
    mr r3, r5
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x2
    stw r0, 0x10(r30)
lbl_8009D354:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009D3F4
asm s32 fn_8009D3F4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    lwz r4, 0xc(r1)
    lwz r4, 0x140(r4)
    subi r0, r4, 0x190
    cmplwi r0, 0x2
    ble lbl_8009D43C
    cmpwi r3, 0x0
    beq lbl_8009D464
lbl_8009D43C:
    lwz r3, 0xc(r1)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_8009D464
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x4
    stw r0, 0x10(r30)
lbl_8009D464:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8009D4FC(s8 *arg0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r3 = fn_8008CCC8();
    if (((s32) (M2C_FIELD(spC, s32 *, 0x6C) & 0x10000000) != 0) || (temp_r3 != 0)) {
        fn_800A0310(spC, sp8);
        var_r31 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 6;
    }
    return var_r31;
}

s32 fn_8009D578(s8 *arg0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r3 = fn_8008CCC8();
    M2C_FIELD(spC, s32 *, 0x58) = (s32) (M2C_FIELD(spC, s32 *, 0x58) | 0x20000000);
    if (((s32) (M2C_FIELD(spC, s32 *, 0x50) & 0x40) != 0) || (temp_r3 != 0)) {
        fn_800A0310(spC, sp8);
        var_r31 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = 7;
        M2C_FIELD(spC, s32 *, 0x58) = (s32) (M2C_FIELD(spC, s32 *, 0x58) & 0xDFFFFFFF);
    }
    return var_r31;
}

// asm_to_cpp: fn_8009D614
asm s32 fn_8009D614(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    li r31, -0x1
    li r29, 0x0
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    lwz r3, 0xc(r1)
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8009D65C
    bl fn_8008CCC8
    mr r29, r3
lbl_8009D65C:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_8009D684
    cmpwi r0, 0x1
    beq lbl_8009D6B8
    cmpwi r0, 0xa
    beq lbl_8009D6EC
    cmpwi r0, 0xb
    beq lbl_8009D71C
    b lbl_8009D744
lbl_8009D684:
    lwz r3, 0xc(r1)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8009D6A0
    cmpwi r29, 0x0
    beq lbl_8009D744
lbl_8009D6A0:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D744
lbl_8009D6B8:
    cmpwi r29, 0x0
    bne lbl_8009D6D0
    lwz r0, 0x14(r30)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8009D744
lbl_8009D6D0:
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x8
    stw r0, 0x10(r30)
    b lbl_8009D744
lbl_8009D6EC:
    lwz r3, 0x8(r1)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8009D744
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    stw r0, 0x58(r3)
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    b lbl_8009D744
lbl_8009D71C:
    lwz r3, 0x8(r1)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8009D744
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8004
    stw r0, 0x58(r3)
    li r0, 0x0
    stw r0, 0xc(r30)
lbl_8009D744:
    lwz r3, 0xc(r1)
    lwz r0, 0x50(r3)
    stw r0, 0x14(r30)
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009D76C
asm s32 fn_8009D76C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_8009D7B0
    cmpwi r0, 0x1
    beq lbl_8009D7E4
    b lbl_8009D81C
lbl_8009D7B0:
    lwz r4, 0xc(r1)
    lwz r0, 0x50(r4)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8009D7CC
    cmpwi r3, 0x0
    beq lbl_8009D81C
lbl_8009D7CC:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x7d9
    bl fn_80099F64
    b lbl_8009D81C
lbl_8009D7E4:
    lwz r4, 0xc(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x1c3
    beq lbl_8009D804
    cmpwi r0, 0x1c4
    beq lbl_8009D804
    cmpwi r3, 0x0
    beq lbl_8009D81C
lbl_8009D804:
    mr r3, r4
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x9
    stw r0, 0x10(r30)
lbl_8009D81C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009D838
asm s32 fn_8009D838(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    beq lbl_8009D87C
    cmpwi r4, 0x1
    beq lbl_8009D8C8
    b lbl_8009D940
lbl_8009D87C:
    lwz r3, 0x8(r1)
    lwz r3, 0x3780(r3)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x31
    bne lbl_8009D940
    addi r0, r4, 0x1
    stw r0, 0xc(r30)
    lwz r5, 0xc(r1)
    lwz r4, 0x58(r5)
    lis r3, 0x7ffe
    subi r0, r3, 0x1
    and r0, r4, r0
    stw r0, 0x58(r5)
    li r0, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
    b lbl_8009D940
lbl_8009D8C8:
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x10(r4)
    cmpwi r0, 0x9
    beq lbl_8009D8FC
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_8009D8FC
    cmpwi r3, 0x0
    bne lbl_8009D928
    b lbl_8009D940
lbl_8009D8FC:
    lwz r3, 0xc(r1)
    lwz r3, 0x140(r3)
    subi r0, r3, 0x1aa
    cmplwi r0, 0x1
    ble lbl_8009D928
    cmpwi r3, 0x1a4
    beq lbl_8009D928
    cmpwi r3, 0x1a6
    beq lbl_8009D928
    cmpwi r3, 0x1a8
    bne lbl_8009D940
lbl_8009D928:
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0xb
    stw r0, 0x10(r30)
lbl_8009D940:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009D95C
asm s32 fn_8009D95C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    lwz r4, 0xc(r1)
    lwz r0, 0x164c(r4)
    cmpwi r0, 0x1
    beq lbl_8009D9A0
    cmpwi r3, 0x0
    beq lbl_8009D9D0
lbl_8009D9A0:
    mr r3, r4
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, -0x1
    stw r0, 0x10(r30)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 28, 25
    stw r0, 0x6c(r3)
lbl_8009D9D0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009D9EC
asm s32 fn_8009D9EC(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    mr r31, r3
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8009DA3C
    cmpwi r31, 0x0
    bne lbl_8009DA54
    b lbl_8009DA6C
lbl_8009DA3C:
    lwz r3, 0x8(r1)
    lfs f1, 0x161c(r3)
    lfs f0, lbl_8049F560
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8009DA6C
lbl_8009DA54:
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x7
    li r0, 0xa
    stw r0, 0x10(r29)
lbl_8009DA6C:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009DFD4
asm s32 fn_8009DFD4(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    mr r29, r3
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    beq lbl_8009E024
    cmpwi r4, 0x1
    beq lbl_8009E044
    cmpwi r4, 0x2
    beq lbl_8009E064
    b lbl_8009E08C
lbl_8009E024:
    lwz r3, 0x8(r1)
    lwz r3, 0x3780(r3)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x261
    bne lbl_8009E08C
    addi r0, r4, 0x1
    stw r0, 0xc(r30)
    b lbl_8009E08C
lbl_8009E044:
    lwz r3, 0x8(r1)
    lwz r3, 0x3780(r3)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x262
    bne lbl_8009E08C
    addi r0, r4, 0x1
    stw r0, 0xc(r30)
    b lbl_8009E08C
lbl_8009E064:
    lwz r3, 0xc(r1)
    lwz r4, 0x3780(r3)
    lwz r0, 0x20(r4)
    cmpwi r0, 0x66
    bne lbl_8009E08C
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x15
    stw r0, 0x10(r30)
lbl_8009E08C:
    cmpwi r29, 0x0
    beq lbl_8009E0C4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x9
    beq lbl_8009E0C4
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x15
    stw r0, 0x10(r30)
lbl_8009E0C4:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009E240
asm s32 fn_8009E240() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    li r30, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    mr r31, r3
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_8009E290
    cmpwi r0, 0x1
    beq lbl_8009E340
    cmpwi r0, 0x2
    beq lbl_8009E378
    b lbl_8009E390
lbl_8009E290:
    lwz r3, 0x8(r1)
    lwz r3, 0x3780(r3)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x31
    bne lbl_8009E390
    la r4, lbl_8049F560
    lfs f2, 0x4(r4)
    lwz r3, 0xc(r1)
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc0(r3)
    lwz r3, 0xc(r1)
    lfs f1, 0x8(r4)
    lfs f0, 0x12c(r3)
    fmuls f0, f1, f0
    fdivs f1, f2, f0
    lfs f0, 0xc(r4)
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x118(r3)
    lwz r3, 0xc(r1)
    stfs f1, 0x124(r3)
    lwz r3, 0xc(r1)
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x54(r3)
    lfs f0, 0x10(r4)
    fcmpo cr0, f1, f0
    ble lbl_8009E320
    lwz r3, 0xc(r1)
    lwz r0, 0x54(r3)
    oris r0, r0, 0x2
    stw r0, 0x54(r3)
    b lbl_8009E330
lbl_8009E320:
    lwz r3, 0xc(r1)
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x54(r3)
lbl_8009E330:
    lwz r3, 0xc(r29)
    addi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_8009E390
lbl_8009E340:
    lwz r3, 0xc(r1)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8009E390
    lwz r3, 0x8(r1)
    li r4, 0x1
    bl fn_8007F21C
    cmpwi r3, 0x0
    bne lbl_8009E390
    lwz r3, 0xc(r29)
    addi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_8009E390
lbl_8009E378:
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x7
    li r0, 0x1a
    stw r0, 0x10(r29)
lbl_8009E390:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_8009E3D8
    lwz r3, 0x8(r1)
    li r4, 0x1
    bl fn_8007F21C
    cmpwi r3, 0x0
    bne lbl_8009E3D8
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x6
    li r0, 0x19
    stw r0, 0x8(r29)
    li r0, 0x4
    stw r0, 0xc(r29)
    li r0, 0x0
    stw r0, 0x18(r29)
lbl_8009E3D8:
    cmpwi r31, 0x0
    beq lbl_8009E3F8
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x7
    li r0, 0x1a
    stw r0, 0x10(r29)
lbl_8009E3F8:
    mr r3, r30
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8009E414
asm s32 fn_8009E414(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    li r30, -0x1
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A01E8
    bl fn_8008CCC8
    mr r31, r3
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_8009E464
    cmpwi r0, 0x1
    beq lbl_8009E478
    cmpwi r0, 0x2
    beq lbl_8009E490
    b lbl_8009E4A8
lbl_8009E464:
    lwz r3, 0xc(r1)
    lwz r0, 0x58(r3)
    oris r0, r0, 0x8003
    stw r0, 0x58(r3)
    b lbl_8009E4A8
lbl_8009E478:
    lwz r4, 0xc(r1)
    lwz r3, 0x58(r4)
    clrlwi r0, r3, 16
    rlwimi r0, r3, 0, 1, 13
    stw r0, 0x58(r4)
    b lbl_8009E4A8
lbl_8009E490:
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x7
    li r0, 0x1c
    stw r0, 0x10(r29)
lbl_8009E4A8:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_8009E4E8
    lwz r3, 0x8(r1)
    li r4, 0x1
    bl fn_8007F21C
    cmpwi r3, 0x0
    bne lbl_8009E4E8
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x6
    li r0, 0x1b
    stw r0, 0x8(r29)
    li r0, 0x4
    stw r0, 0xc(r29)
lbl_8009E4E8:
    cmpwi r31, 0x0
    beq lbl_8009E508
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x7
    li r0, 0x1c
    stw r0, 0x10(r29)
lbl_8009E508:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8009E690(s8 *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    s32 *sp8;
    s32 temp_r31;
    s32 temp_r4;
    s32 var_r30;

    var_r30 = -1;
    fn_800A01E8(&spC, &sp8);
    temp_r31 = fn_8008CCC8();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r4) {                              /* irregular */
    case 1:
        if ((s32) M2C_FIELD(M2C_FIELD(spC, s8 **, 0x3780), s32 *, 0x20) == 0x262) {
            M2C_FIELD(spC, s32 *, 0x5C) = (s32) (M2C_FIELD(spC, s32 *, 0x5C) | 0x20000);
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        }
        break;
    case 2:
        if ((s32) (M2C_FIELD(sp8, s32 *, 0x50) & 0x8000) != 0) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r4 + 1);
        }
        break;
    case 3:
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        break;
    }
    if ((s32) M2C_FIELD(M2C_FIELD(sp8, s8 **, 0x3780), s32 *, 0x20) == 0x31) {
        fn_800A0310(spC, sp8);
        var_r30 = 6;
        M2C_FIELD(arg0, s32 *, 8) = 0x1F;
        M2C_FIELD(arg0, s32 *, 0xC) = 4;
        M2C_FIELD(spC, s32 *, 0x5C) = (s32) (M2C_FIELD(spC, s32 *, 0x5C) & 0xFFFDFFFF);
    }
    if (temp_r31 != 0) {
        fn_800A0310(spC, sp8);
        var_r30 = 7;
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
    return var_r30;
}

// asm_to_cpp: fn_8009E7C4
asm s32 fn_8009E7C4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    lwz r5, 0x14(r1)
    lwz r4, 0xb94(r5)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8009E81C
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8009E82C
lbl_8009E81C:
    lwz r0, 0x5c(r5)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r5)
    b lbl_8009E838
lbl_8009E82C:
    lwz r0, 0x5c(r5)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x5c(r5)
lbl_8009E838:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x24f
    bne lbl_8009E85C
    li r0, 0x26
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
lbl_8009E85C:
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8009E884
    li r0, 0x0
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
lbl_8009E884:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x241
    bne lbl_8009E898
    li r3, 0x1
lbl_8009E898:
    cmpwi r3, 0x0
    beq lbl_8009E8C4
    mr r3, r4
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x22
    stw r0, 0x10(r30)
lbl_8009E8C4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009E8E0
asm s32 fn_8009E8E0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    mr r30, r3
    lwz r3, 0xc(r1)
    la r4, lbl_8049F560
    lfs f1, 0x14(r4)
    bl fn_8006AEA0
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_8009E944
    cmpwi r0, 0x1
    beq lbl_8009E9E8
    b lbl_8009EA00
lbl_8009E944:
    lwz r4, 0x14(r1)
    lwz r0, 0x50(r4)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8009E984
    lwz r3, 0xb94(r4)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8009E984
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8009E984
    lwz r0, 0x5c(r4)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x5c(r4)
    b lbl_8009E990
lbl_8009E984:
    lwz r0, 0x5c(r4)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r4)
lbl_8009E990:
    lwz r3, 0x14(r1)
    lwz r0, 0x140(r3)
    cmpwi r0, 0x241
    beq lbl_8009E9B8
    cmpwi r0, 0x243
    beq lbl_8009E9B8
    cmpwi r0, 0x245
    beq lbl_8009E9B8
    cmpwi r0, 0x247
    bne lbl_8009EA00
lbl_8009E9B8:
    li r0, 0x0
    stw r0, 0x14(r29)
    lwz r3, 0x14(r1)
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    lwz r3, 0xc(r29)
    addi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_8009EA00
lbl_8009E9E8:
    lwz r3, 0x14(r29)
    addi r0, r3, 0x1
    stw r0, 0x14(r29)
    cmpwi r0, 0x46
    ble lbl_8009EA00
    li r30, 0x1
lbl_8009EA00:
    lwz r3, 0x14(r1)
    lwz r0, 0x140(r3)
    cmpwi r0, 0x24f
    bne lbl_8009EA24
    li r0, 0x26
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
lbl_8009EA24:
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8009EA4C
    li r0, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
lbl_8009EA4C:
    cmpwi r30, 0x0
    beq lbl_8009EA78
    lwz r3, 0x14(r1)
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x23
    stw r0, 0x10(r29)
lbl_8009EA78:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8009EA94
asm s32 fn_8009EA94() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    mr r30, r3
    lwz r3, 0x14(r1)
    la r4, lbl_8049F560
    lfs f1, 0x14(r4)
    bl fn_8006AEA0
    lwz r4, 0x14(r1)
    lwz r3, 0x50(r4)
    rlwinm r0, r3, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8009EB20
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8009EB20
    lwz r0, 0x5c(r4)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x5c(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    ori r0, r0, 0x4000
    stw r0, 0x5c(r3)
    b lbl_8009EB3C
lbl_8009EB20:
    lwz r0, 0x5c(r4)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r4)
    lwz r3, 0x14(r1)
    lwz r0, 0x5c(r3)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x5c(r3)
lbl_8009EB3C:
    lwz r3, 0x14(r1)
    lwz r0, 0x140(r3)
    cmpwi r0, 0x24f
    bne lbl_8009EB60
    li r0, 0x26
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
lbl_8009EB60:
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8009EB88
    li r0, 0x22
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
lbl_8009EB88:
    lwz r3, 0x14(r1)
    lwz r0, 0x140(r3)
    cmpwi r0, 0x241
    beq lbl_8009EBA0
    cmpwi r0, 0x245
    bne lbl_8009EBA4
lbl_8009EBA0:
    li r30, 0x1
lbl_8009EBA4:
    cmpwi r30, 0x0
    beq lbl_8009EBF0
    lwz r3, 0x10(r1)
    lwz r3, 0x3774(r3)
    bl fn_80096D38
    li r0, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
    lwz r3, 0x14(r1)
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x24
    stw r0, 0x10(r29)
lbl_8009EBF0:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8009EC0C
asm s32 fn_8009EC0C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    lwz r5, 0x14(r1)
    lwz r0, 0x50(r5)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8009EC84
    lwz r4, 0xb94(r5)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8009EC84
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8009EC84
    lwz r0, 0x5c(r5)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x5c(r5)
    b lbl_8009EC90
lbl_8009EC84:
    lwz r0, 0x5c(r5)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r5)
lbl_8009EC90:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x24f
    bne lbl_8009ECB4
    li r0, 0x26
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
lbl_8009ECB4:
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8009ECDC
    li r0, 0x25
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
lbl_8009ECDC:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x24b
    bne lbl_8009ECF0
    li r3, 0x1
lbl_8009ECF0:
    cmpwi r3, 0x0
    beq lbl_8009ED3C
    lwz r3, 0x10(r1)
    lwz r3, 0x3774(r3)
    bl fn_80096D38
    li r0, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
    lwz r3, 0x14(r1)
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x25
    stw r0, 0x10(r30)
lbl_8009ED3C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009ED58
asm s32 fn_8009ED58(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    lwz r5, 0x14(r1)
    lwz r0, 0x50(r5)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8009EDD0
    lwz r4, 0xb94(r5)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8009EDD0
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8009EDD0
    lwz r0, 0x5c(r5)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x5c(r5)
    b lbl_8009EDDC
lbl_8009EDD0:
    lwz r0, 0x5c(r5)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r5)
lbl_8009EDDC:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x24f
    bne lbl_8009EE20
    li r0, 0x26
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
    lwz r4, 0x10(r1)
    lwz r0, 0x5c(r4)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r4)
    lwz r4, 0x8(r1)
    lwz r0, 0x5c(r4)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r4)
lbl_8009EE20:
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8009EE48
    li r0, 0x0
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
lbl_8009EE48:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x241
    bne lbl_8009EE5C
    li r3, 0x1
lbl_8009EE5C:
    cmpwi r3, 0x0
    beq lbl_8009EE88
    mr r3, r4
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x26
    stw r0, 0x10(r30)
lbl_8009EE88:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009EEA4
asm s32 fn_8009EEA4(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r31, r3
    li r30, -0x1
    li r29, 0x0
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    beq lbl_8009EEFC
    cmpwi r4, 0x1
    beq lbl_8009EF20
    cmpwi r4, 0x2
    beq lbl_8009EF50
    b lbl_8009EF68
lbl_8009EEFC:
    lwz r3, 0x14(r1)
    lwz r0, 0x140(r3)
    cmpwi r0, 0x249
    bne lbl_8009EF68
    li r0, 0x0
    stw r0, 0x14(r31)
    addi r0, r4, 0x1
    stw r0, 0xc(r31)
    b lbl_8009EF68
lbl_8009EF20:
    lwz r3, 0x14(r31)
    addi r0, r3, 0x1
    stw r0, 0x14(r31)
    cmpwi r0, 0x14
    ble lbl_8009EF68
    lwz r3, 0x10(r1)
    lwz r4, 0xc(r1)
    bl fn_800602FC
    lwz r3, 0xc(r31)
    addi r0, r3, 0x1
    stw r0, 0xc(r31)
    b lbl_8009EF68
lbl_8009EF50:
    lwz r3, 0x14(r31)
    addi r0, r3, 0x1
    stw r0, 0x14(r31)
    cmpwi r0, 0x3c
    ble lbl_8009EF68
    li r29, 0x1
lbl_8009EF68:
    cmpwi r29, 0x0
    beq lbl_8009EFB4
    lwz r3, 0x10(r1)
    lwz r3, 0x3774(r3)
    bl fn_80096D38
    li r0, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
    lwz r3, 0x14(r1)
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r30, 0x7
    li r0, 0x27
    stw r0, 0x10(r31)
lbl_8009EFB4:
    mr r3, r30
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8009EFD0
asm s32 fn_8009EFD0(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    lwz r5, 0x14(r1)
    lwz r4, 0xb94(r5)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8009F038
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8009F038
    lwz r0, 0x5c(r5)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x5c(r5)
    b lbl_8009F044
lbl_8009F038:
    lwz r0, 0x5c(r5)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r5)
lbl_8009F044:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x24f
    bne lbl_8009F068
    li r0, 0x26
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
lbl_8009F068:
    lwz r4, 0xc(r1)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8009F090
    li r0, 0x0
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    stw r0, 0x70(r4)
lbl_8009F090:
    lwz r4, 0xc(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x24c
    bne lbl_8009F0A4
    li r3, 0x1
lbl_8009F0A4:
    cmpwi r3, 0x0
    beq lbl_8009F0D0
    lwz r3, 0x14(r1)
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x28
    stw r0, 0x10(r30)
lbl_8009F0D0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009F0EC
asm s32 fn_8009F0EC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    lwz r5, 0x14(r1)
    lwz r4, 0xb94(r5)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8009F154
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8009F154
    lwz r0, 0x5c(r5)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x5c(r5)
    b lbl_8009F160
lbl_8009F154:
    lwz r0, 0x5c(r5)
    ori r0, r0, 0x8000
    stw r0, 0x5c(r5)
lbl_8009F160:
    lwz r4, 0x14(r1)
    lwz r0, 0x140(r4)
    cmpwi r0, 0x24f
    bne lbl_8009F174
    li r3, 0x1
lbl_8009F174:
    cmpwi r3, 0x0
    beq lbl_8009F1A0
    mr r3, r4
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, 0x29
    stw r0, 0x10(r30)
lbl_8009F1A0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009F1BC
asm s32 fn_8009F1BC(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    li r31, -0x1
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800A01E8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800A0240
    bl fn_8008CCC8
    mr r30, r3
    lwz r3, 0x14(r1)
    lwz r0, 0xb94(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8009F21C
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x74(r3)
    b lbl_8009F228
lbl_8009F21C:
    lwz r0, 0x74(r3)
    oris r0, r0, 0x400
    stw r0, 0x74(r3)
lbl_8009F228:
    lwz r4, 0x14(r1)
    lwz r3, 0x44(r4)
    lwz r0, 0x40(r4)
    cmpw r3, r0
    bne lbl_8009F250
    lwz r5, 0xc(r1)
    lwz r3, 0x44(r5)
    lwz r0, 0x40(r5)
    cmpw r3, r0
    beq lbl_8009F25C
lbl_8009F250:
    lwz r0, 0x74(r4)
    oris r0, r0, 0x400
    stw r0, 0x74(r4)
lbl_8009F25C:
    lwz r3, 0x14(r1)
    lwz r0, 0x140(r3)
    cmpwi r0, 0x1d0
    bne lbl_8009F274
    li r0, 0x1
    stw r0, 0xc(r29)
lbl_8009F274:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_8009F2AC
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_8009F2A8
    lwz r3, 0x10(r1)
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8009F2AC
lbl_8009F2A8:
    li r30, 0x1
lbl_8009F2AC:
    cmpwi r30, 0x0
    beq lbl_8009F2D8
    lwz r3, 0x14(r1)
    lwz r4, 0x10(r1)
    bl fn_800A0310
    lwz r3, 0xc(r1)
    lwz r4, 0x8(r1)
    bl fn_800A0310
    li r31, 0x7
    li r0, -0x1
    stw r0, 0x10(r29)
lbl_8009F2D8:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_8009F2F4(s32 **arg0) {
    s32 temp_r5;
    s32 var_r4;
    s32 var_r6;

    var_r6 = -1;
    temp_r5 = **arg0;
    if ((s32) (temp_r5 & 0xC000060F) != 0) {
        var_r4 = 0;
        if (((s32) (temp_r5 & 0xA) == 0) && ((s32) (temp_r5 & 0x10) != 0)) {
            var_r4 = 1;
        }
        switch (var_r4) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r6 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r6 = 0xA;
            break;
        }
    }
    return var_r6;
}

s32 fn_8009F37C(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r30;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r29;
    s32 var_r3;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0);
    var_r29 = -1;
    fn_8005E41C(2U);
    temp_r3 = fn_8005E41C(1U);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 2U) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x193))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    temp_r4_2 = *temp_r30;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r29 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r29 = 0xA;
            break;
        }
    }
    return var_r29;
}

s32 fn_8009F48C(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r30;
    s32 temp_r4;
    s32 var_r29;
    s32 var_r3;
    s8 *temp_r3;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0);
    var_r29 = -1;
    fn_8005E41C(1U);
    temp_r3 = fn_8005E41C(3U);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0) && (((s32) M2C_FIELD(temp_r3, s32 *, 0x9C4) == 0xB3) || ((s32) (M2C_FIELD(temp_r3, s32 *, 0x64) & 0x200) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
    }
    temp_r4 = *temp_r30;
    if ((s32) (temp_r4 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4 & 0xA) == 0) && ((s32) (temp_r4 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r29 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r29 = 0xA;
            break;
        }
    }
    return var_r29;
}

// asm_to_cpp: fn_8009F58C
asm s32 fn_8009F58C(s32 **arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    lwz r31, 0x0(r3)
    li r30, -0x1
    li r3, 0x1
    bl fn_8005E41C
    mr r27, r3
    li r3, 0x3
    bl fn_8005E41C
    mr r28, r3
    li r3, 0x2
    bl fn_8005E41C
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8009F620
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_8009F620
    lwz r4, 0x3864(r28)
    cmpwi r4, 0x0
    beq lbl_8009F620
    lwz r4, 0x18(r4)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_8009F620
    lwz r0, 0x9c4(r28)
    cmpwi r0, 0x10c
    beq lbl_8009F618
    cmpwi r0, 0x1d0
    bne lbl_8009F620
lbl_8009F618:
    li r0, 0x1
    stw r0, 0x14(r29)
lbl_8009F620:
    lwz r0, 0x0(r27)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8009F640
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8009F658
lbl_8009F640:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_8009F658
    mr r3, r29
    bl fn_800A00F8
    li r30, 0xa
lbl_8009F658:
    lwz r4, 0x0(r31)
    lis r3, 0xc000
    addi r0, r3, 0x60f
    and r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_8009F6CC
    li r3, 0x0
    andi. r0, r4, 0xa
    cmpwi r0, 0x0
    bne lbl_8009F69C
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8009F69C
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_8009F69C
    li r3, 0x1
lbl_8009F69C:
    cmpwi r3, 0x1
    beq lbl_8009F6B0
    cmpwi r3, 0x0
    beq lbl_8009F6C0
    b lbl_8009F6CC
lbl_8009F6B0:
    mr r3, r29
    bl fn_800A0008
    li r30, 0xa
    b lbl_8009F6CC
lbl_8009F6C0:
    mr r3, r29
    bl fn_800A00F8
    li r30, 0xa
lbl_8009F6CC:
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8009F6E8(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r30;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r29;
    s32 var_r3;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0);
    var_r29 = -1;
    fn_8005E41C(8U);
    temp_r3 = fn_8005E41C(0x1AU);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 8U) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x193))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    temp_r4_2 = *temp_r30;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r29 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r29 = 0xA;
            break;
        }
    }
    return var_r29;
}

s32 fn_8009F7F8(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r30;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r29;
    s32 var_r3;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0);
    var_r29 = -1;
    fn_8005E41C(0xBU);
    temp_r3 = fn_8005E41C(0x1BU);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 0xBU) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x193))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    temp_r4_2 = *temp_r30;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r29 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r29 = 0xA;
            break;
        }
    }
    return var_r29;
}

s32 fn_8009F908(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r28;
    s32 *temp_r29;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r31;
    s32 var_r3;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r28 = M2C_FIELD(arg0, s8 **, 0);
    var_r31 = -1;
    temp_r29 = fn_8005E41C(1U);
    temp_r3 = fn_8005E41C(0x18U);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 1U) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x194))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    if (((s32) (*temp_r29 & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        fn_800A00F8(arg0);
        var_r31 = 0xA;
    }
    temp_r4_2 = *temp_r28;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r31 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r31 = 0xA;
            break;
        }
    }
    return var_r31;
}

s32 fn_8009FA44(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r30;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r29;
    s32 var_r3;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0);
    var_r29 = -1;
    fn_8005E41C(7U);
    temp_r3 = fn_8005E41C(0x19U);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 7U) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x193))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    temp_r4_2 = *temp_r30;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r29 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r29 = 0xA;
            break;
        }
    }
    return var_r29;
}

s32 fn_8009FB54(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r27;
    s32 *temp_r28;
    s32 *temp_r3;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r31;
    s32 var_r3;
    s8 *temp_r29;
    s8 *temp_r4;

    temp_r27 = M2C_FIELD(arg0, s8 **, 0);
    var_r31 = -1;
    temp_r28 = fn_8005E41C(2U);
    temp_r29 = fn_8005E41C(0x1BU);
    temp_r3 = fn_8005E41C(0x2CU);
    if (((s32) (M2C_FIELD(temp_r29, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r29, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 2U) && ((temp_r0 = M2C_FIELD(temp_r29, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x193))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    if ((((s32) (*temp_r28 & 0x1000) != 0) || ((s32) (*temp_r3 & 0x1000) != 0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        fn_800A00F8(arg0);
        var_r31 = 0xA;
    }
    temp_r4_2 = *temp_r27;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r31 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r31 = 0xA;
            break;
        }
    }
    return var_r31;
}

s32 fn_8009FCAC(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r28;
    s32 *temp_r29;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r31;
    s32 var_r3;
    s32 var_r5;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r28 = M2C_FIELD(arg0, s8 **, 0);
    var_r31 = -1;
    temp_r29 = fn_8005E41C(3U);
    temp_r3 = fn_8005E41C(0x1AU);
    temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
    if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 3U) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x198))) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
    }
    if (((s32) (*temp_r29 & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        fn_800A00F8(arg0);
        var_r31 = 0xA;
    }
    temp_r4_2 = *temp_r28;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r5 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r5 = 1;
        }
        var_r3 = 0;
        if ((var_r5 != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r31 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r31 = 0xA;
            break;
        }
    }
    return var_r31;
}

s32 fn_8009FDE8(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r30;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r29;
    s32 var_r3;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0);
    var_r29 = -1;
    fn_8005E41C(0x2CU);
    temp_r3 = fn_8005E41C(0x1CU);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 0x2CU) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x193))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    temp_r4_2 = *temp_r30;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r29 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r29 = 0xA;
            break;
        }
    }
    return var_r29;
}

s32 fn_8009FEF8(s32 **arg0, M2C_UNK arg_sp0) {
    s32 *temp_r30;
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_r29;
    s32 var_r3;
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0);
    var_r29 = -1;
    fn_8005E41C(1U);
    temp_r3 = fn_8005E41C(0x1AU);
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x1000) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_r4 = M2C_FIELD(temp_r3, s8 **, 0x3864);
        if ((temp_r4 != NULL) && ((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 1U) && ((temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x9C4), ((temp_r0 == 0x101) != 0)) || (temp_r0 == 0x195))) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
    }
    temp_r4_2 = *temp_r30;
    if ((s32) (temp_r4_2 & 0xC000060F) != 0) {
        var_r3 = 0;
        if (((s32) (temp_r4_2 & 0xA) == 0) && ((s32) (temp_r4_2 & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
            var_r3 = 1;
        }
        switch (var_r3) {                           /* irregular */
        case 1:
            fn_800A0008(arg0);
            var_r29 = 0xA;
            break;
        case 0:
            fn_800A00F8(arg0);
            var_r29 = 0xA;
            break;
        }
    }
    return var_r29;
}

// asm_to_cpp: fn_800A0008
asm void fn_800A0008(s32 **arg0) {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r5, 0x0(r3)
    lis r4, 0x4000
    subi r0, r4, 0x610
    and r0, r5, r0
    stw r0, 0x0(r3)
    li r7, 0x0
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_800A0030:
    add r5, r3, r7
    lbz r0, 0x24(r5)
    cmpwi r0, 0x0
    beq lbl_800A0050
    add r6, r3, r4
    lwz r5, 0x14(r6)
    subi r0, r5, 0x1
    stw r0, 0x14(r6)
lbl_800A0050:
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800A0030
    lwz r0, 0x0(r3)
    oris r0, r0, 0x4000
    ori r0, r0, 0x4
    stw r0, 0x0(r3)
    li r0, 0x1
    stb r0, 0x24(r3)
    li r0, 0x0
    stb r0, 0x25(r3)
    stb r0, 0x26(r3)
    stb r0, 0x27(r3)
    li r7, 0x0
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_800A0094:
    add r5, r3, r7
    lbz r0, 0x24(r5)
    cmpwi r0, 0x0
    beq lbl_800A00B4
    add r6, r3, r4
    lwz r5, 0x14(r6)
    addi r0, r5, 0x1
    stw r0, 0x14(r6)
lbl_800A00B4:
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800A0094
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_800A00CC:
    add r5, r3, r4
    lwz r5, 0x14(r5)
    lwz r0, 0x30(r3)
    cmpw r5, r0
    blt lbl_800A00EC
    lwz r0, 0x0(r3)
    ori r0, r0, 0x100
    stw r0, 0x0(r3)
lbl_800A00EC:
    addi r4, r4, 0x4
    bdnz lbl_800A00CC
    blr
}

// asm_to_cpp: fn_800A00F8
asm void fn_800A00F8(s32 **arg0) {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r5, 0x0(r3)
    lis r4, 0x4000
    subi r0, r4, 0x610
    and r0, r5, r0
    stw r0, 0x0(r3)
    li r7, 0x0
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_800A0120:
    add r5, r3, r7
    lbz r0, 0x24(r5)
    cmpwi r0, 0x0
    beq lbl_800A0140
    add r6, r3, r4
    lwz r5, 0x14(r6)
    subi r0, r5, 0x1
    stw r0, 0x14(r6)
lbl_800A0140:
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800A0120
    lwz r0, 0x0(r3)
    oris r0, r0, 0x8000
    ori r0, r0, 0x4
    stw r0, 0x0(r3)
    li r4, 0x0
    stb r4, 0x24(r3)
    li r0, 0x1
    stb r0, 0x25(r3)
    stb r4, 0x26(r3)
    stb r4, 0x27(r3)
    li r7, 0x0
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_800A0184:
    add r5, r3, r7
    lbz r0, 0x24(r5)
    cmpwi r0, 0x0
    beq lbl_800A01A4
    add r6, r3, r4
    lwz r5, 0x14(r6)
    addi r0, r5, 0x1
    stw r0, 0x14(r6)
lbl_800A01A4:
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800A0184
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_800A01BC:
    add r5, r3, r4
    lwz r5, 0x14(r5)
    lwz r0, 0x30(r3)
    cmpw r5, r0
    blt lbl_800A01DC
    lwz r0, 0x0(r3)
    ori r0, r0, 0x100
    stw r0, 0x0(r3)
lbl_800A01DC:
    addi r4, r4, 0x4
    bdnz lbl_800A01BC
    blr
}

// asm_to_cpp: fn_800A01E8
asm void fn_800A01E8(s32 **arg0, s32 **arg1) {
    nofralloc
    lis r5, lbl_803906D0@ha
    lwz r5, lbl_803906D0@l(r5)
    lwz r5, 0xc(r5)
    cmpwi r5, 0x0
    beq lbl_800A0208
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    b lbl_800A0210
lbl_800A0208:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_800A0210:
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwz r3, 0x4(r3)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_800A0234
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    blr
lbl_800A0234:
    li r0, 0x0
    stw r0, 0x0(r4)
    blr
}

// asm_to_cpp: fn_800A0240
asm void fn_800A0240(s32 **arg0, s32 **arg1) {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_800A02A4
    lis r5, lbl_803906D0@ha
    lwz r7, lbl_803906D0@l(r5)
    lwz r8, 0xc(r7)
    cmpwi r8, 0x0
    beq lbl_800A029C
    b lbl_800A0290
lbl_800A0260:
    lwz r6, 0x0(r8)
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800A028C
    lwz r5, 0xc(r7)
    lwz r0, 0x0(r5)
    cmplw r6, r0
    beq lbl_800A028C
    stw r6, 0x0(r3)
    b lbl_800A02A4
lbl_800A028C:
    lwz r8, 0xc(r8)
lbl_800A0290:
    cmpwi r8, 0x0
    bne lbl_800A0260
    b lbl_800A02A4
lbl_800A029C:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_800A02A4:
    cmpwi r4, 0x0
    beqlr
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwz r6, 0x4(r3)
    lwz r7, 0xc(r6)
    cmpwi r7, 0x0
    beq lbl_800A0304
    b lbl_800A02F8
lbl_800A02C8:
    lwz r5, 0x0(r7)
    lwz r0, 0x0(r5)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800A02F4
    lwz r3, 0xc(r6)
    lwz r0, 0x0(r3)
    cmplw r5, r0
    beq lbl_800A02F4
    stw r5, 0x0(r4)
    blr
lbl_800A02F4:
    lwz r7, 0xc(r7)
lbl_800A02F8:
    cmpwi r7, 0x0
    bne lbl_800A02C8
    blr
lbl_800A0304:
    li r0, 0x0
    stw r0, 0x0(r4)
    blr
}

// asm_to_cpp: fn_800A033C
asm void fn_800A033C(s8 *arg0) {
    nofralloc
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r4)
    stw r0, 0x10c(r3)
    cmpwi r0, 0x1a
    bnelr
    li r0, 0xa
    stw r0, 0x114(r3)
    blr
}

// asm_to_cpp: fn_800A0360
asm int fn_800A0360() {
    nofralloc
    lwz r4, 0x10c(r3)
    subi r0, r4, 0x14
    cmplwi r0, 0x5
    ble lbl_800A0388
    subi r0, r4, 0x1b
    cmplwi r0, 0x2
    ble lbl_800A0388
    cmpwi r4, 0x1a
    beq lbl_800A03CC
    b lbl_800A06BC
lbl_800A0388:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800A06BC
    ori r0, r4, 0x4
    stw r0, 0x0(r3)
    li r5, 0x0
    stb r5, 0x24(r3)
    li r0, 0x1
    stb r0, 0x25(r3)
    lwz r4, 0x18(r3)
    addi r0, r4, 0x1
    stw r0, 0x18(r3)
    stb r5, 0x26(r3)
    stb r5, 0x27(r3)
    li r3, 0xa
    blr
lbl_800A03CC:
    lis r4, lbl_803906D0@ha
    lwz r4, lbl_803906D0@l(r4)
    lwz r4, 0xc(r4)
    lwz r5, 0x0(r4)
    lwz r0, 0x18(r5)
    cmplwi r0, 0x31
    bgt lbl_800A05DC
    lis r5, jumptable_8034CC80@ha
    addi r5, r5, jumptable_8034CC80@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    li r0, 0x2a
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x17
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x16
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x17
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x4c
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x37
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1f
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x17
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x3d
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1d
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x38
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x22
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x4d
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0xb
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1e
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1e
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1c
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x3b
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1f
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x2d
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x21
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x63
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x35
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x3a
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0xb
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x63
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x10
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x14
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x59
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x10
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x18
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1a
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0xf
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x3c
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x2a
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x17
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x26
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x1e
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x26
    stw r0, 0x114(r3)
    b lbl_800A05DC
    li r0, 0x2e
    stw r0, 0x114(r3)
lbl_800A05DC:
    li r7, 0x0
    b lbl_800A0618
lbl_800A05E4:
    lwz r5, 0x0(r4)
    lwz r6, 0x0(r5)
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A0614
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800A0614
    lwz r0, 0x9ac(r5)
    cmpw r7, r0
    bge lbl_800A0614
    mr r7, r0
lbl_800A0614:
    lwz r4, 0xc(r4)
lbl_800A0618:
    cmpwi r4, 0x0
    bne lbl_800A05E4
    lwz r0, 0x114(r3)
    cmpw r0, r7
    bgt lbl_800A0668
    lwz r0, 0x0(r3)
    oris r0, r0, 0x4000
    ori r0, r0, 0x4
    stw r0, 0x0(r3)
    li r0, 0x1
    stb r0, 0x24(r3)
    lwz r4, 0x14(r3)
    addi r0, r4, 0x1
    stw r0, 0x14(r3)
    li r0, 0x0
    stb r0, 0x25(r3)
    stb r0, 0x26(r3)
    stb r0, 0x27(r3)
    li r3, 0xa
    blr
lbl_800A0668:
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    blt lbl_800A06BC
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bgt lbl_800A06BC
    lwz r0, 0x0(r3)
    oris r0, r0, 0x8000
    ori r0, r0, 0x4
    stw r0, 0x0(r3)
    li r5, 0x0
    stb r5, 0x24(r3)
    li r0, 0x1
    stb r0, 0x25(r3)
    lwz r4, 0x18(r3)
    addi r0, r4, 0x1
    stw r0, 0x18(r3)
    stb r5, 0x26(r3)
    stb r5, 0x27(r3)
    li r3, 0xa
    blr
lbl_800A06BC:
    li r3, -0x1
    blr
}

// asm_to_cpp: fn_800A06C4
asm void fn_800A06C4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r4, lbl_803A1C88@ha
    addi r31, r4, lbl_803A1C88@l
    cmpwi r3, 0x0
    bne lbl_800A0754
    mr r3, r31
    li r4, 0x0
    li r5, 0x48
    bl memset
    li r4, 0x1
    stw r4, 0x0(r31)
    li r3, 0x0
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r4, 0x10(r31)
    stw r4, 0x14(r31)
    stw r4, 0x18(r31)
    li r0, 0x5
    stw r0, 0x20(r31)
    stw r3, 0x24(r31)
    stw r4, 0x2c(r31)
    stw r4, 0x28(r31)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_800A0754
    bl fn_8009AF9C
    stw r3, 0x20(r31)
    bl fn_8009AFAC
    stw r3, 0x10(r31)
    bl fn_8009AFBC
    stw r3, 0x2c(r31)
lbl_800A0754:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A0768
asm s32 fn_800A0768(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r21, r3
    lis r3, lbl_803A1C88@ha
    addi r25, r3, lbl_803A1C88@l
    li r22, -0x1
    lwz r0, lbl_803A1C88@l(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800A07A4
    li r3, -0x1
    b lbl_800A0BD8
lbl_800A07A4:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_800A07C0
    li r3, -0x1
    b lbl_800A0BD8
lbl_800A07C0:
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    beq lbl_800A07E0
    cmpwi r0, 0x1
    beq lbl_800A07E8
    cmpwi r0, 0xf0
    beq lbl_800A0B54
    b lbl_800A0B98
lbl_800A07E0:
    li r0, 0x1
    stw r0, 0x8(r25)
lbl_800A07E8:
    lis r3, lbl_803906D0@ha
    lwz r3, lbl_803906D0@l(r3)
    lwz r5, 0xc(r3)
    li r7, 0x0
    li r6, 0x0
    li r23, 0x0
    b lbl_800A0848
lbl_800A0804:
    lwz r3, 0x0(r5)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800A0844
    addi r7, r7, 0x1
    cmpwi r3, 0x0
    beq lbl_800A0828
    lwz r23, 0x18(r3)
lbl_800A0828:
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_800A0840
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A0844
lbl_800A0840:
    addi r6, r6, 0x1
lbl_800A0844:
    lwz r5, 0xc(r5)
lbl_800A0848:
    cmpwi r5, 0x0
    bne lbl_800A0804
    cmpw r7, r6
    bne lbl_800A0884
    lwz r0, 0x0(r21)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x4
    stw r0, 0x0(r21)
    li r0, 0x1
    stb r0, 0x25(r21)
    lwz r3, 0x18(r21)
    addi r0, r3, 0x1
    stw r0, 0x18(r21)
    li r22, 0xa
    b lbl_800A0AF4
lbl_800A0884:
    lwz r0, 0x20(r25)
    cmpwi r0, 0x0
    ble lbl_800A0AB0
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwz r3, 0x4(r3)
    lwz r28, 0xc(r3)
    li r27, 0x0
    li r26, 0x0
    li r24, 0x0
    li r30, 0xa
    li r31, 0x0
    lis r3, lbl_80395728@ha
    addi r29, r3, lbl_80395728@l
    b lbl_800A09C4
lbl_800A08C0:
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r4)
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800A09A4
    addi r27, r27, 0x1
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_800A08F0
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A0970
lbl_800A08F0:
    lwz r0, 0x4(r29)
    cmplwi r0, 0x12
    beq lbl_800A096C
    lwz r3, 0x0(r25)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A096C
    cmpwi r4, 0x0
    beq lbl_800A0950
    lwz r0, 0x44(r25)
    cmplw r4, r0
    bne lbl_800A0950
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A0950
    ori r0, r3, 0x2
    stw r0, 0x0(r25)
    addi r3, r25, 0x34
    addi r4, r4, 0x90
    bl fn_80019DAC
    stw r30, 0x40(r25)
    stw r31, 0x44(r25)
    b lbl_800A096C
lbl_800A0950:
    cmpwi r4, 0x0
    beq lbl_800A096C
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A096C
    stw r4, 0x44(r25)
lbl_800A096C:
    addi r26, r26, 0x1
lbl_800A0970:
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r4)
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800A0994
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A09A0
lbl_800A0994:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A09A4
lbl_800A09A0:
    addi r24, r24, 0x1
lbl_800A09A4:
    cmpwi r4, 0x0
    beq lbl_800A09C0
    lwz r3, 0x3774(r4)
    cmpwi r3, 0x0
    beq lbl_800A09C0
    lwz r0, 0x2c(r25)
    stw r0, 0x108(r3)
lbl_800A09C0:
    lwz r28, 0xc(r28)
lbl_800A09C4:
    cmpwi r28, 0x0
    bne lbl_800A08C0
    subf r0, r26, r27
    stw r0, 0x14(r25)
    subf r26, r24, r27
    lwz r4, 0x18(r25)
    cmpw r4, r0
    ble lbl_800A0A38
    lwz r3, 0x24(r25)
    subf r0, r0, r4
    add r0, r3, r0
    stw r0, 0x24(r25)
    li r3, 0x5a
    li r4, 0x78
    bl fn_8005CF00
    stw r3, 0x30(r25)
    lwz r3, 0x24(r25)
    srawi r0, r3, 2
    addze r0, r0
    slwi r0, r0, 2
    subf r0, r0, r3
    cmpwi r0, 0x0
    bne lbl_800A0A38
    lwz r3, 0x2c(r25)
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0x2c(r25)
lbl_800A0A38:
    lwz r5, 0x14(r25)
    stw r5, 0x18(r25)
    cmpwi r26, 0x8
    bge lbl_800A0A88
    lwz r0, 0x10(r25)
    cmpw r5, r0
    bge lbl_800A0A88
    lwz r3, 0x24(r25)
    lwz r4, 0x20(r25)
    cmpw r3, r4
    bge lbl_800A0A88
    subf r0, r5, r0
    stw r0, 0x1c(r25)
    add r3, r3, r5
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_800A0A90
    subf r0, r3, r4
    stw r0, 0x1c(r25)
    b lbl_800A0A90
lbl_800A0A88:
    li r0, 0x0
    stw r0, 0x1c(r25)
lbl_800A0A90:
    cmpwi r26, 0x8
    bge lbl_800A0AF4
    subfic r3, r26, 0x8
    lwz r0, 0x1c(r25)
    cmpw r0, r3
    ble lbl_800A0AF4
    stw r3, 0x1c(r25)
    b lbl_800A0AF4
lbl_800A0AB0:
    lwz r0, 0x0(r21)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x4
    stw r0, 0x0(r21)
    li r0, 0x1
    stb r0, 0x24(r21)
    lwz r3, 0x14(r21)
    addi r0, r3, 0x1
    stw r0, 0x14(r21)
    li r3, 0x0
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_800A0AF0
    lwz r0, 0x0(r21)
    ori r0, r0, 0x400
    stw r0, 0x0(r21)
lbl_800A0AF0:
    li r22, 0xa
lbl_800A0AF4:
    cmpwi r23, 0xb
    beq lbl_800A0B0C
    cmpwi r23, 0xf
    beq lbl_800A0B14
    li r3, 0x4
    b lbl_800A0B18
lbl_800A0B0C:
    li r3, 0x3
    b lbl_800A0B18
lbl_800A0B14:
    li r3, 0x3
lbl_800A0B18:
    lwz r0, 0x14(r25)
    cmpw r0, r3
    blt lbl_800A0B3C
    bl fn_801714F0
    cmpwi r3, 0x0
    bne lbl_800A0B98
    li r3, 0x1
    bl fn_80171454
    b lbl_800A0B98
lbl_800A0B3C:
    bl fn_801714F0
    cmpwi r3, 0x0
    beq lbl_800A0B98
    li r3, 0x0
    bl fn_80171454
    b lbl_800A0B98
lbl_800A0B54:
    lwz r0, 0x0(r21)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x4
    stw r0, 0x0(r21)
    li r0, 0x1
    stb r0, 0x24(r21)
    lwz r3, 0x14(r21)
    addi r0, r3, 0x1
    stw r0, 0x14(r21)
    li r3, 0x0
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_800A0B94
    lwz r0, 0x0(r21)
    ori r0, r0, 0x400
    stw r0, 0x0(r21)
lbl_800A0B94:
    li r22, 0xa
lbl_800A0B98:
    lwz r3, 0x30(r25)
    cmpwi r3, 0x0
    ble lbl_800A0BAC
    subi r0, r3, 0x1
    stw r0, 0x30(r25)
lbl_800A0BAC:
    addi r3, r21, 0x74
    bl fn_8009D038
    cmpwi r3, 0x0
    blt lbl_800A0BC0
    mr r22, r3
lbl_800A0BC0:
    cmpwi r22, 0xa
    bne lbl_800A0BD4
    lwz r0, 0x0(r21)
    ori r0, r0, 0x100
    stw r0, 0x0(r21)
lbl_800A0BD4:
    mr r3, r22
lbl_800A0BD8:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800A0BF0
asm s32 *fn_800A0BF0(void) {
    nofralloc
    lis r3, lbl_803A1C88@ha
    addi r3, r3, lbl_803A1C88@l
    blr
}

// asm_to_cpp: fn_800A0BFC
asm s32 fn_800A0BFC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r5, r3
    lis r4, lbl_803A1CD0@ha
    lwz r0, lbl_803A1CD0@l(r4)
    cmpwi r0, 0x0
    beq lbl_800A0C24
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_800A0C24:
    cmpwi r3, 0x20
    ble lbl_800A0C34
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_800A0C34:
    lis r4, lbl_803A1CD0@ha
    stw r3, lbl_803A1CD0@l(r4)
    li r0, 0x0
    addi r3, r4, lbl_803A1CD0@l
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    li r4, 0x0
    slwi r5, r5, 2
    bl memset
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A0C6C
asm void fn_800A0C6C(void) {
    nofralloc
    lis r3, lbl_803A1CD0@ha
    lwz r0, lbl_803A1CD0@l(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, lbl_803A1CD0@l(r3)
    addi r3, r3, lbl_803A1CD0@l
    stw r0, 0x4(r3)
    blr
}

// asm_to_cpp: fn_800A0C98
asm s32 fn_800A0C98(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    addi r4, r4, 0x3d8
    stw r3, 0x10(r4)
    li r0, 0x0
    stw r0, 0x14(r4)
    stw r0, 0x18(r4)
    stw r0, 0x0(r4)
    stw r0, 0x1c(r4)
    stw r0, 0x20(r4)
    li r3, -0x1
    bl fn_8005D830
    lis r4, lbl_803A1CD0@ha
    addi r5, r4, lbl_803A1CD0@l
    lwz r0, 0x4(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    stw r3, 0x8(r4)
    lwz r4, 0x4(r5)
    addi r0, r4, 0x1
    stw r0, 0x4(r5)
    lwz r0, 0x7c(r3)
    ori r0, r0, 0x2
    stw r0, 0x7c(r3)
    lwz r0, 0x7c(r3)
    ori r0, r0, 0x1
    stw r0, 0x7c(r3)
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A0D24
asm s32 fn_800A0D24(s8 *arg0) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_800A0D34
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_800A0D34:
    lis r4, lbl_803A1CD0@ha
    addi r5, r4, lbl_803A1CD0@l
    lwz r0, 0x4(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    stw r3, 0x8(r4)
    lwz r4, 0x4(r5)
    addi r0, r4, 0x1
    stw r0, 0x4(r5)
    lwz r0, 0x7c(r3)
    ori r0, r0, 0x1
    stw r0, 0x7c(r3)
    li r3, 0x1
    blr
}

s32 fn_800A0D6C(s8 *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x7C);
    if ((s32) (temp_r4 & 2) == 0) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r4 & 0xFFFFFFFD);
    return 1;
}

// asm_to_cpp: fn_800A0D94
asm s32 fn_800A0D94(s8 *arg0) {
    nofralloc
    lwz r0, 0x7c(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A0DAC
    li r3, 0x1
    blr
lbl_800A0DAC:
    li r8, 0x0
    li r4, 0x0
    li r5, 0xf0
    lis r6, lbl_803A1CD0@ha
    addi r7, r6, lbl_803A1CD0@l
    b lbl_800A0DF0
lbl_800A0DC4:
    add r6, r7, r4
    lwz r6, 0x8(r6)
    cmplw r6, r3
    bne lbl_800A0DE8
    lwz r6, 0x20(r6)
    lwz r0, 0x0(r6)
    cmpwi r0, 0xf0
    beq lbl_800A0DE8
    stw r5, 0x0(r6)
lbl_800A0DE8:
    addi r8, r8, 0x1
    addi r4, r4, 0x4
lbl_800A0DF0:
    lwz r0, 0x4(r7)
    cmpw r8, r0
    blt lbl_800A0DC4
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_800A0E04
asm s32 fn_800A0E04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x7c(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A0E30
    li r3, 0x1
    b lbl_800A0EF4
lbl_800A0E30:
    clrrwi r0, r4, 1
    stw r0, 0x7c(r3)
    li r8, 0x0
    lis r4, lbl_803A1CD0@ha
    addi r5, r4, lbl_803A1CD0@l
    li r6, 0x0
    b lbl_800A0EA8
lbl_800A0E4C:
    slwi r4, r8, 2
    add r7, r5, r4
    lwz r0, 0x8(r7)
    cmplw r0, r3
    bne lbl_800A0EA4
    stw r6, 0x8(r7)
    b lbl_800A0E7C
lbl_800A0E68:
    add r7, r5, r4
    lwz r0, 0xc(r7)
    stw r0, 0x8(r7)
    addi r8, r8, 0x1
    addi r4, r4, 0x4
lbl_800A0E7C:
    lwz r7, 0x4(r5)
    subi r0, r7, 0x1
    cmpw r8, r0
    blt lbl_800A0E68
    slwi r0, r7, 2
    add r4, r5, r0
    stw r6, 0x4(r4)
    lwz r4, 0x4(r5)
    subi r0, r4, 0x1
    stw r0, 0x4(r5)
lbl_800A0EA4:
    addi r8, r8, 0x1
lbl_800A0EA8:
    lwz r0, 0x4(r5)
    cmpw r8, r0
    blt lbl_800A0E4C
    lwz r0, 0x7c(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x7c(r3)
    cmpwi r3, 0x0
    beq lbl_800A0EE0
    lwz r3, 0x377c(r3)
    bl fn_80181EE4
    lwz r3, 0x3908(r31)
    bl fn_8005D3E8
    lwz r3, 0x3910(r31)
    bl fn_80170560
lbl_800A0EE0:
    cmpwi r31, 0x0
    beq lbl_800A0EF0
    mr r3, r31
    bl fn_80170E18
lbl_800A0EF0:
    li r3, 0x1
lbl_800A0EF4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800A0F08
asm s8 *fn_800A0F08(u32 arg0) {
    nofralloc
    li r4, 0x0
    lis r5, lbl_803A1CD0@ha
    addi r6, r5, lbl_803A1CD0@l
    lwz r0, 0x4(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A0F48
lbl_800A0F24:
    add r5, r6, r4
    lwz r5, 0x8(r5)
    lwz r0, 0x18(r5)
    cmplw r0, r3
    bne lbl_800A0F40
    mr r3, r5
    blr
lbl_800A0F40:
    addi r4, r4, 0x4
    bdnz lbl_800A0F24
lbl_800A0F48:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_800A0F50
asm s8 *fn_800A0F50(s32 arg0) {
    nofralloc
    li r4, 0x0
    lis r5, lbl_803A1CD0@ha
    addi r6, r5, lbl_803A1CD0@l
    lwz r0, 0x4(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_800A0F90
lbl_800A0F6C:
    add r5, r6, r4
    lwz r5, 0x8(r5)
    lwz r0, 0x4(r5)
    cmpw r0, r3
    bne lbl_800A0F88
    mr r3, r5
    blr
lbl_800A0F88:
    addi r4, r4, 0x4
    bdnz lbl_800A0F6C
lbl_800A0F90:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_800A0F98
asm s32 fn_800A0F98(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lis r3, lbl_803A1CD0@ha
    addi r30, r3, lbl_803A1CD0@l
    lwz r3, 0x4(r30)
    subi r29, r3, 0x1
    slwi r31, r29, 2
    b lbl_800A0FD8
lbl_800A0FC4:
    add r3, r30, r31
    lwz r3, 0x8(r3)
    bl fn_800A0D6C
    subi r29, r29, 0x1
    subi r31, r31, 0x4
lbl_800A0FD8:
    cmpwi r29, 0x0
    bge lbl_800A0FC4
    li r31, 0x0
    lis r5, lbl_803A1CD0@ha
    addi r3, r5, lbl_803A1CD0@l
    stw r31, 0x4(r3)
    addi r3, r3, 0x8
    li r4, 0x0
    lwz r0, lbl_803A1CD0@l(r5)
    slwi r5, r0, 2
    bl memset
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r31, 0x3e8(r3)
    stw r31, 0x3ec(r3)
    stw r31, 0x3f0(r3)
    stw r31, 0x3d8(r3)
    stw r31, 0x3f4(r3)
    stw r31, 0x3f8(r3)
    li r3, 0x1
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800A1040
asm void fn_800A1040() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    bl fn_800A4DFC
    mr r31, r3
    lwz r4, 0x8(r3)
    lwz r0, 0x7c(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A11A4
    addi r3, r1, 0x28
    lwz r4, 0x18(r4)
    bl fn_800A5008
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A10B0
    lwz r3, 0x8(r31)
    addi r4, r1, 0x28
    li r5, 0x0
    li r6, 0x0
    bl fn_800753E4
    cmpwi r3, 0x0
    bne lbl_800A10B0
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0xfc(r31)
lbl_800A10B0:
    lwz r4, 0xfc(r31)
    rlwinm r0, r4, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800A11A4
    lwz r3, 0xf4(r31)
    cmpwi r3, 0x0
    blt lbl_800A10D8
    subi r0, r3, 0x1
    stw r0, 0xf4(r31)
    b lbl_800A11A4
lbl_800A10D8:
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800A1120
    lwz r3, 0x8(r31)
    addi r4, r1, 0x28
    bl fn_80075A30
    lfs f1, lbl_8049F578
    la r3, lbl_8049F578
    lfs f2, 0x4(r3)
    bl fn_8005CF48
    fctiwz f0, f1
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0xf4(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0xfc(r31)
    b lbl_800A11A4
lbl_800A1120:
    lwz r6, 0xf8(r31)
    cmpwi r6, 0xb
    blt lbl_800A1154
    addi r3, r1, 0x8
    lis r4, lbl_8034CD6C@ha
    addi r4, r4, lbl_8034CD6C@l
    lis r5, lbl_8034B178@ha
    addi r5, r5, lbl_8034B178@l
    lwz r5, 0x2c(r5)
    subi r6, r6, 0xb
    opword 0x4CC63182
    bl sprintf
    b lbl_800A117C
lbl_800A1154:
    addi r3, r1, 0x8
    lis r4, lbl_8034CD6C@ha
    addi r4, r4, lbl_8034CD6C@l
    addi r4, r4, 0x7
    slwi r0, r6, 2
    lis r5, lbl_8034B178@ha
    addi r5, r5, lbl_8034B178@l
    lwzx r5, r5, r0
    opword 0x4CC63182
    bl sprintf
lbl_800A117C:
    lwz r3, 0x8(r31)
    addi r4, r1, 0x28
    addi r5, r1, 0x8
    li r6, 0x0
    bl fn_80075858
    li r0, 0x2
    stw r0, 0xf4(r31)
    lwz r0, 0xfc(r31)
    ori r0, r0, 0x10
    stw r0, 0xfc(r31)
lbl_800A11A4:
    lwz r31, 0x5c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_800A11B8
asm s32 fn_800A11B8(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    bl fn_800A4DFC
    mr r31, r3
    lwz r4, 0x8(r3)
    lwz r0, 0x7c(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A11F4
    li r3, 0x0
    b lbl_800A121C
lbl_800A11F4:
    addi r3, r1, 0x8
    lwz r4, 0x18(r4)
    bl fn_800A5008
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_80074FF4
    lwz r0, 0xfc(r31)
    ori r0, r0, 0x2
    stw r0, 0xfc(r31)
    li r3, 0x1
lbl_800A121C:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800A1234
asm s32 fn_800A1234() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    bl fn_800A4DFC
    mr r31, r3
    lwz r4, 0x8(r3)
    lwz r0, 0x7c(r4)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800A1270
    li r3, 0x0
    b lbl_800A12BC
lbl_800A1270:
    addi r3, r1, 0x8
    lwz r4, 0x18(r4)
    bl fn_800A5008
    lwz r3, 0x8(r31)
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_80075850
    lfs f1, lbl_8049F578
    la r3, lbl_8049F578
    lfs f2, 0x4(r3)
    bl fn_8005CF48
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0xf4(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0xfc(r31)
    li r3, 0x1
lbl_800A12BC:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

s32 fn_800A12D4(s32 arg0, s32 arg1) {
    s32 *temp_r3;
    s8 *temp_r4;

    temp_r3 = fn_800A4DFC(arg0);
    temp_r4 = M2C_FIELD(temp_r3, s8 **, 8);
    if ((s32) (M2C_FIELD(temp_r4, s32 *, 0x7C) & 2) == 0) {
        return 0;
    }
    if ((s32) (M2C_FIELD(temp_r3, s32 *, 0xFC) & 2) != 0) {
        return 0;
    }
    fn_80075B5C(temp_r4, arg1);
    return 1;
}

// asm_to_cpp: fn_800A1388
asm int fn_800A1388() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r4
    mr r31, r5
    fmr f31, f1
    bl fn_800A4DFC
    lwz r5, 0x8(r3)
    lwz r6, 0x3780(r5)
    addi r3, r6, 0x40
    li r4, 0x0
    lwz r0, 0x7c(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800A14AC
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800A13F0
    subi r0, r30, 0x1
    cntlzw r0, r0
    srwi r5, r0, 5
    addi r30, r5, 0x1
lbl_800A13F0:
    cmplwi r31, 0x8
    bgt lbl_800A1454
    lis r5, jumptable_8034CD48@ha
    addi r5, r5, jumptable_8034CD48@l
    slwi r0, r31, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    li r4, 0x190
    b lbl_800A1454
    li r4, 0x191
    b lbl_800A1454
    li r4, 0x192
    b lbl_800A1454
    li r4, 0x193
    b lbl_800A1454
    li r4, 0x194
    b lbl_800A1454
    li r4, 0x195
    b lbl_800A1454
    li r4, 0x196
    b lbl_800A1454
    li r4, 0x197
    b lbl_800A1454
    li r4, 0x199
lbl_800A1454:
    cmpwi r30, 0x1
    bne lbl_800A1484
    lwz r0, 0x0(r3)
    oris r0, r0, 0x200
    ori r0, r0, 0x140
    stw r0, 0x0(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    fmr f1, f31
    bl fn_801831EC
    b lbl_800A14AC
lbl_800A1484:
    addi r3, r6, 0x80
    lwz r0, 0x0(r3)
    oris r0, r0, 0x400
    ori r0, r0, 0x544
    stw r0, 0x0(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    fmr f1, f31
    bl fn_801831EC
lbl_800A14AC:
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
