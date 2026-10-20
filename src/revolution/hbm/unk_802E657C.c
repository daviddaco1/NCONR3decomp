#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK AXGetAuxACallback();          /* extern */
M2C_UNK AXRegisterAuxACallback(void (*)(), s8 *); /* extern */
s32 AXRegisterCallback(void (*)(), void (*)());     /* extern */
M2C_UNK GXSetVtxAttrFmt(); /* extern */
M2C_UNK GXSetVtxDesc();             /* extern */
u64 OSGetTime();                                    /* extern */
M2C_UNK OSSetAlarm(s8 *, void (*)(), M2C_UNK, s32, void (*)()); /* extern */
M2C_UNK OSSetPeriodicAlarm(s8 *, s32, u64, u32, M2C_UNK, s32, void (*)(), M2C_UNK); /* extern */
s32 fn_8028AD00(s32, s8 *, void (*)(s32, s32));   /* extern */
M2C_UNK fn_8028B73C(s32, void (*)(s32, s32), void (*)(s32, s32), M2C_UNK); /* extern */
M2C_UNK **fn_8030CAF0();             /* extern */
M2C_UNK fn_8030CB00();               /* extern */
M2C_UNK memset();                       /* extern */
M2C_UNK fn_802E8600();                           /* static */
M2C_UNK fn_802EB568();               /* static */
M2C_UNK fn_802EEC48();                   /* static */
M2C_UNK fn_802EFA78();                           /* static */
M2C_UNK fn_802F0538();                           /* static */
extern f32 lbl_80341A38;
extern f32 lbl_80341A48;
extern f32 lbl_80341A4C;
extern f32 lbl_80341A50;
extern f32 lbl_80341A54;
extern M2C_UNK lbl_80341A58;
extern M2C_UNK lbl_80341A6C;
extern M2C_UNK lbl_80341A90;
extern M2C_UNK lbl_80341A98;
extern M2C_UNK lbl_80341AF8;
extern f32 lbl_80341D74;
extern f32 lbl_80341D88;
extern f32 lbl_80341DC0;
extern f32 lbl_80341DF0;
extern f32 lbl_80341DF4;
extern f32 lbl_80341E08;
extern f32 lbl_80341E0C;
extern M2C_UNK lbl_8037B2D8;
extern s32 lbl_8037B380;
extern s32 lbl_8037B420;
extern M2C_UNK lbl_8037B490;
extern M2C_UNK lbl_8037B548;
extern M2C_UNK lbl_8037B858;
extern s32 lbl_8037B910;
extern s32 lbl_8037B914;
extern M2C_UNK lbl_8037B918;
extern s32 lbl_8037B970;
extern u8 *lbl_8037B9B0;
extern u8 *lbl_8037C2B0;
extern s32 lbl_8037C408;
extern M2C_UNK lbl_8037C540;
extern s32 lbl_8037C608;
extern s32 lbl_80462228;
extern M2C_UNK lbl_80462230;
extern M2C_UNK lbl_804622F8;
extern M2C_UNK lbl_804623B8;
extern s8 *lbl_804623C8;
extern s8 *lbl_804623D0;
extern M2C_UNK lbl_804623D8;
extern s32 lbl_804623E8;
extern M2C_UNK lbl_804623F0;
extern M2C_UNK lbl_80462408;
extern s32 lbl_80462438;
extern s32 lbl_80462440;
extern M2C_UNK lbl_80462448;
extern M2C_UNK lbl_80462450;
extern M2C_UNK lbl_80462458;

void fn_802E657C();
s32 fn_802E6740();
s32 fn_802E6948();
u8 fn_802E6950();
void fn_802E695C();
void fn_802E6980();
s32 fn_802E6984();
void fn_802E698C();
void fn_802E6998();
void fn_802E699C();
s32 ** fn_802E69A0();
void fn_802E6A5C();
void fn_802E6AC4();
void fn_802E6AF0();
void fn_802E6BB4();
void fn_802E6BBC();
s32 fn_802E6C5C();
s32 fn_802E6C88();
u8 fn_802E6E2C();
void fn_802E6E34();
void fn_802E6E64();
void fn_802E6ECC();
void fn_802E6ED0();
void fn_802E6F38();
void fn_802E6F3C();
void fn_802E6FB4();
s32 ** fn_802E6FBC();
s32 fn_802E7110();
s32 fn_802E7150();
void fn_802E71CC();
void fn_802E745C();
s32 * fn_802E7464();
void fn_802E7488();
s32 fn_802E75A4();
void fn_802E761C();
s32 fn_802E76EC();
s32 fn_802E7818();
void fn_802E7820();
s32 fn_802E79C0();
s32 fn_802E7AC0();
s32 fn_802E7ACC();
void fn_802E7BA8();
void fn_802E7BAC();
s32 fn_802E7BB0();
void fn_802E7BB8();
void fn_802E7BC0();
s32 fn_802E7BC4();
void fn_802E7BF8();
s32 fn_802E7C00();
void fn_802E7C08();
void fn_802E7C10();
void fn_802E7D24();
void fn_802E7E34();
s8 * fn_802E7EA0();
void fn_802E7F5C();
void fn_802E8000();
void fn_802E8074();
void fn_802E81F8();
void fn_802E820C();
void fn_802E8228();
void fn_802E8238();
void fn_802E823C();
void fn_802E8244();
s32 fn_802E82E0();
void fn_802E8340();
void fn_802E8350();
void fn_802E8588();
s32 fn_802E8598();
void fn_802E859C();
s32 fn_802E8630();
void fn_802E86B4();
u8 fn_802E86D8();
void fn_802E86FC();
void fn_802E871C();
void fn_802E8984();
s8 * fn_802E89B0();
s32 ** fn_802E8A6C();
void fn_802E8B10();
void fn_802E8BE4();
void fn_802E8C38();
void fn_802E8C68();
void fn_802E8D48();
void fn_802E8D78();
void fn_802E8E5C();
void fn_802E8EE8();
s32 fn_802E8F80();
s32 fn_802E8F9C();
s32 fn_802E8FCC();
s8 * fn_802E8FE8();
void fn_802E91A4();
s32 fn_802E9208();
void fn_802E9460();
void fn_802E95A4();
void fn_802E9798();
void fn_802E979C();
void fn_802E997C();
void fn_802E9A9C();
s32 fn_802E9AA0();
void fn_802E9AB0();
void fn_802E9AC0();
void fn_802E9BE8();
void fn_802E9C18();
void fn_802E9C54();
s32 fn_802E9C78();
void fn_802E9C9C();
void fn_802E9CD0();
void fn_802E9CF4();
void fn_802E9D48();
void fn_802E9D6C();
s8 * fn_802E9F24();
s32 ** fn_802EA030();
void fn_802EA09C();
s8 * fn_802EA0E8();
void fn_802EA0F4();
void fn_802EA954();
void fn_802EAAAC();
void fn_802EAB30();
void fn_802EAFD0();
void fn_802EB1D0();
void fn_802EB300();
void fn_802ED238();
void fn_802ED438();
void fn_802ED590();
void fn_802ED674();
void fn_802ED698();
void fn_802ED79C();
void fn_802EE0E8();
void fn_802EE980();
void fn_802F1774();
s32 fn_802F19D4();
s32 fn_802F1A84();
void fn_802F1AA0();
void fn_802F1BC4();
void fn_802F1C84();
void fn_802F1E7C();
u16 fn_802F1ECC();
f32 fn_802F1FBC();
u16 fn_802F2180();
s32 fn_802F218C();
s32 ** fn_802F21C4();
void fn_802F2250();
void fn_802F2398();
void fn_802F2498();
void fn_802F2554();
void fn_802F2744();
s8 * fn_802F2A34();



s32 fn_802E6948(void) {
    return 1;
}

u8 fn_802E6950(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + arg1), u8 *, 4);
}

void fn_802E695C(void) {

}

/*
Decompilation failure in function fn_802E6960:

Unable to determine jump table for bctr instruction at unk_802E657C.s line 289.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void fn_802E6980(void) {

}

s32 fn_802E6984(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}


void fn_802E6998(void) {

}

void fn_802E699C(void) {

}

// fn_802E69A0: definicion C reemplazada por asm (ver abajo)


// fn_802E6A5C: definicion C reemplazada por asm (ver abajo)


void fn_802E6AC4(s8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

// fn_802E6AF0: definicion C reemplazada por asm (ver abajo)


void fn_802E6BB4(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}

// fn_802E6BBC: definicion C reemplazada por asm (ver abajo)




u8 fn_802E6E2C(s8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x24);
}

void fn_802E6E34(s8 *arg0, s32 arg1, s8 *arg2) {
    if (arg1 & M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(arg0, s8 *, 0x18) = 1;
    }
}

// fn_802E6E64: definicion C reemplazada por asm (ver abajo)


void fn_802E6ECC(void) {

}

// fn_802E6ED0: definicion C reemplazada por asm (ver abajo)


void fn_802E6F38(void) {

}

// fn_802E6F3C: definicion C reemplazada por asm (ver abajo)



s32 **fn_802E6FBC(s32 **arg0, s32 arg1);

s32 fn_802E7110(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

s32 fn_802E7150(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

/*
Decompilation failure in function fn_802E7190:

Found bctr instruction at unk_802E657C.s line 956, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802E71B4:

Unable to determine jump table for bctr instruction at unk_802E657C.s line 966.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void fn_802E71CC(s8 *arg0, s8 *arg1, M2C_UNK arg_sp0);

void fn_802E745C(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
}

// fn_802E7464: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_802E7470:

Unable to determine jump table for bctr instruction at unk_802E657C.s line 1178.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void fn_802E7488(s8 *arg0, s8 *arg1, M2C_UNK arg_sp0);

s32 fn_802E75A4(s8 *arg0, u32 arg1);

void fn_802E761C(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);


s32 fn_802E7818(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

// fn_802E7820: definicion C reemplazada por asm (ver abajo)


s32 fn_802E79C0(s8 *arg0);

s32 fn_802E7AC0(s8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xCF) & 1;
}

s32 fn_802E7ACC(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

/*
Decompilation failure in function fn_802E7AD4:

Cannot find branch target fn_802E79C0
*/

void fn_802E7BA8(void) {

}

void fn_802E7BAC(void) {

}

s32 fn_802E7BB0(void) {
    return 0;
}

void fn_802E7BB8(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

void fn_802E7BC0(void) {

}

s32 fn_802E7BC4(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

/*
Decompilation failure in function fn_802E7BCC:

Unable to determine jump table for bctr instruction at unk_802E657C.s line 1769.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void fn_802E7BF8(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_802E7C00(void) {
    return 0;
}

void fn_802E7C08(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}

void fn_802E7C10(s32 arg0, s32 arg1);

void fn_802E7D24(s32 arg0, s32 arg1);

void fn_802E7E34(s32 arg0);

s8 *fn_802E7EA0(s8 *arg0, s32 arg1, s32 arg2);

// fn_802E7F5C: definicion C reemplazada por asm (ver abajo)


void fn_802E8000(s8 *arg0);

// fn_802E8074: definicion C reemplazada por asm (ver abajo)


void fn_802E81F8(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

// fn_802E820C: definicion C reemplazada por asm (ver abajo)


void fn_802E8228(s32 *arg0) {
    fn_802E8E5C(M2C_FIELD(arg0, s8 **, 0x20), M2C_FIELD(arg0, s32 *, 0));
}

void fn_802E8238(s32 arg0) {

}


// fn_802E8244: definicion C reemplazada por asm (ver abajo)


s32 fn_802E82E0(s8 *arg0, s32 arg1) {
    if (fn_802E8F80(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0)) == 0) {
        return 0;
    }
    return fn_802E8F9C(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0), arg1);
}

void fn_802E8340(s32 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x42) = 0;
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
}

void fn_802E8350(s8 *arg0, M2C_UNK arg_sp0);

void fn_802E8588(s32 *arg0) {
    fn_802E8FCC(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0));
}

s32 fn_802E8598(s32 arg0) {
    return arg0;
}

// fn_802E859C: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_802E8600:

Cannot find branch target fn_8028AF20
*/

s32 fn_802E8630(s32 *arg0, s8 *arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 >= 4) {
        return -2;
    }
    if ((fn_802E8F80(M2C_FIELD(arg0, s32 *, 0x20), temp_r0) != 0) || ((s32) M2C_FIELD(arg0, u8 *, 0x1C) != 0)) {
        return -2;
    }
    return fn_8028AD00(M2C_FIELD(arg0, s32 *, 0), arg1, fn_802E86B4);
}

// fn_802E86B4: definicion C reemplazada por asm (ver abajo)


// fn_802E86D8: definicion C reemplazada por asm (ver abajo)


// fn_802E86FC: definicion C reemplazada por asm (ver abajo)


// fn_802E871C: definicion C reemplazada por asm (ver abajo)


void fn_802E8984(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = -1;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = -1;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = -1;
}

// fn_802E89B0: definicion C reemplazada por asm (ver abajo)


// fn_802E8A6C: definicion C reemplazada por asm (ver abajo)


// fn_802E8B10: definicion C reemplazada por asm (ver abajo)


// fn_802E8BE4: definicion C reemplazada por asm (ver abajo)


void fn_802E8C38(s32 arg0);

// fn_802E8C68: definicion C reemplazada por asm (ver abajo)


void fn_802E8D48(s32 arg0);

// fn_802E8D78: definicion C reemplazada por asm (ver abajo)


void fn_802E8E5C(s8 *arg0, s32 arg1);


s32 fn_802E8F80(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 0x68)), s32 *, 0x50) != 0;
}

s32 fn_802E8F9C(s32 arg0, s32 arg1, s32 arg2);

s32 fn_802E8FCC(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 0x68)), u8 *, 0x62) != 0;
}

// fn_802E8FE8: definicion C reemplazada por asm (ver abajo)


// fn_802E91A4: definicion C reemplazada por asm (ver abajo)


// fn_802E9208: definicion C reemplazada por asm (ver abajo)


// fn_802E9460: definicion C reemplazada por asm (ver abajo)


// fn_802E95A4: definicion C reemplazada por asm (ver abajo)


void fn_802E9798(void) {

}

// fn_802E979C: definicion C reemplazada por asm (ver abajo)



void fn_802E9A9C(s32 arg0) {
    fn_80302248((u32) arg0);
}

s32 fn_802E9AA0(s32 arg0);

// fn_802E9AB0: definicion C reemplazada por asm (ver abajo)


// fn_802E9AC0: definicion C reemplazada por asm (ver abajo)


// fn_802E9BE8: definicion C reemplazada por asm (ver abajo)


// fn_802E9C18: definicion C reemplazada por asm (ver abajo)


void fn_802E9C54(void) {
    fn_802ED438(fn_802EA0E8());
}

s32 fn_802E9C78(void) {
    return fn_802F1A84(fn_802EA0E8());
}

void fn_802E9C9C(s8 *arg0) {
    fn_802F1AA0(fn_802EA0E8(), (s32) arg0);
}

void fn_802E9CD0(void) {
    fn_802F1C84(fn_802EA0E8());
}

void fn_802E9CF4(s32 arg0, s8 *arg1, u32 arg2) {
    fn_802EA0E8();
    fn_802E95A4(arg0, arg1, arg2);
}

void fn_802E9D48(void) {
    fn_802F1E7C(fn_802EA0E8());
}

// fn_802E9D6C: definicion C reemplazada por asm (ver abajo)


// fn_802E9F24: definicion C reemplazada por asm (ver abajo)


// fn_802EA030: definicion C reemplazada por asm (ver abajo)


void fn_802EA09C(s8 *arg0);

// fn_802EA0E8: definicion C reemplazada por asm (ver abajo)


void fn_802EA0F4(s8 *arg0);

void fn_802EA954(s8 *arg0, M2C_UNK arg_sp0);

// fn_802EAAAC: definicion C reemplazada por asm (ver abajo)


void fn_802EAB30(s8 *arg0);

// fn_802EAFD0: definicion C reemplazada por asm (ver abajo)


// fn_802EB1D0: definicion C reemplazada por asm (ver abajo)


// fn_802EB300: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_802EB568:

Found bctr instruction at unk_802E657C.s line 6142, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// fn_802ED238: definicion C reemplazada por asm (ver abajo)


void fn_802ED438(s8 *arg0, s32 arg1);

void fn_802ED590(s32 arg0);

void fn_802ED674(s32 arg0) {
    OSGetAlarmUserData(arg0);
    fn_802E8600();
}

void fn_802ED698(s32 arg0);

/*
Decompilation failure in function fn_802ED764:

Found bctr instruction at unk_802E657C.s line 8432, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void fn_802ED79C(s8 *arg0, s8 *arg1);

void fn_802EE0E8(s8 *arg0, s32 arg1);

// fn_802EE980: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_802EEC48:

Found bctr instruction at unk_802E657C.s line 9988, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802EFA78:

Found bctr instruction at unk_802E657C.s line 11021, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802F0538:

Found bctr instruction at unk_802E657C.s line 11911, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// fn_802F1774: definicion C reemplazada por asm (ver abajo)


s32 fn_802F19D4(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);

s32 fn_802F1A84(s8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0x12) {
        return -1;
    }
    return M2C_FIELD(arg0, s32 *, 0xB8);
}

// fn_802F1AA0: definicion C reemplazada por asm (ver abajo)


// fn_802F1BC4: definicion C reemplazada por asm (ver abajo)


// fn_802F1C84: definicion C reemplazada por asm (ver abajo)


void fn_802F1E7C(s8 *arg0);



u16 fn_802F2180(s8 *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), u16 *, 8);
}

// fn_802F218C: definicion C reemplazada por asm (ver abajo)


// fn_802F21C4: definicion C reemplazada por asm (ver abajo)


void fn_802F2250(s8 *arg0, s8 *arg1, s8 **arg2, M2C_UNK arg_sp0);

void fn_802F2398(s8 *arg0, s8 **arg1, s32 arg2, M2C_UNK arg_sp0);

void fn_802F2498(s8 *arg0, s32 arg1);

void fn_802F2554(s8 *arg0, s32 arg1, s8 *arg2);

void fn_802F2744(s8 *arg0, s32 arg1, s8 *arg2);

// fn_802F2A34: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 jumptable_8037C478[];
extern u8 jumptable_8037C4C8[];
extern u8 jumptable_8037C4F0[];
extern u8 jumptable_8037C518[];
extern u8 lbl_80341DA0[];
extern u8 lbl_8037C2FC[];
extern void AIInit();
extern void AXFXReverbHiInit();
extern void AXInit();
extern void AddAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimationLink();
extern void GXClearVtxDesc();
extern void GXSetAlphaUpdate();
extern void GXSetBlendMode();
extern void GXSetChanCtrl();
extern void GXSetCullMode();
extern void GXSetCurrentMtx();
extern void GXSetDispCopyGamma();
extern void GXSetLineWidth();
extern void GXSetNumChans();
extern void GXSetNumTexGens();
extern void GXSetTexCoordScaleManually();
extern void GXSetZMode();
extern void GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv();
extern void HBMSYNInit();
extern void HBMSYNRunAudioFrame();
extern void List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv();
extern void List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs();
extern void List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv();
extern void OSCancelAlarm();
extern void OSCreateAlarm();
extern void OSInitMessageQueue();
extern void OSInitMutex();
extern void OSRegisterVersion();
extern void OSSetAlarmUserData();
extern void PSMTXTrans();
extern void VIFlush();
extern void VISetBlack();
extern void _restgpr_14();
extern void _restgpr_20();
extern void _restgpr_21();
extern void _restgpr_22();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_20();
extern void _savegpr_21();
extern void _savegpr_22();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void do_calc__Q210homebutton18GroupAnmControllerFv();
extern void fn_802896A8();
extern void fn_8028A8F8();
extern void fn_8028AFEC();
extern void fn_8028B23C();
extern void fn_8028CD8C();
extern void fn_8028EE58();
extern void fn_8029D3E0();
extern void fn_8029D3E8();
extern void fn_8029D3F0();
extern void fn_802A219C();
extern void fn_802A21A8();
extern void fn_802E430C();
extern void fn_802E43CC();
extern void fn_802E4460();
extern void fn_802E44A0();
extern void fn_802E44E0();
extern void fn_802E4538();
extern void fn_802E4590();
extern void fn_802E4750();
extern void fn_802E4808();
extern void fn_802E48CC();
extern void fn_802E4A28();
extern void fn_802E62C8();
extern void fn_802E6300();
void fn_802E657C();
s32 fn_802E6740();
extern int fn_802E6960();
void fn_802E698C();
s32 **fn_802E69A0(s32 **arg0, s32 arg1);
void fn_802E6A5C(s8 *arg0);
void fn_802E6AF0(s8 *arg0, s8 **arg1);
void fn_802E6BBC(s8 *arg0, u32 arg1);
s32 fn_802E6C5C();
s32 fn_802E6C88();
void fn_802E6E64(s8 *arg0);
void fn_802E6ED0(s8 *arg0);
void fn_802E6F3C(s8 *arg0, s32 arg1);
void fn_802E6FB4();
s32 ** fn_802E6FBC();
extern int fn_802E7190();
extern int fn_802E71B4();
void fn_802E71CC();
s32 *fn_802E7464(void);
extern int fn_802E7470();
void fn_802E7488();
s32 fn_802E75A4();
void fn_802E761C();
s32 fn_802E76EC();
void fn_802E7820(s8 *arg0);
s32 fn_802E79C0();
extern int fn_802E7AD4();
extern int fn_802E7BCC();
void fn_802E7C10();
void fn_802E7D24();
void fn_802E7E34();
s8 * fn_802E7EA0();
void fn_802E7F5C(s32 *arg0);
void fn_802E8000();
void fn_802E8074(s32 *arg0, s8 *arg1, s32 arg2);
void fn_802E820C(s32 *arg0);
void fn_802E823C();
void fn_802E8244(s32 *arg0, s32 arg1, s32 arg4);
void fn_802E8350();
void fn_802E859C(s32 *arg0);
M2C_UNK fn_802E8600();
void fn_802E86B4(s32 arg0, s32 arg1);
u8 fn_802E86D8(s32 *arg0);
void fn_802E86FC(s32 *arg0);
void fn_802E871C(M2C_UNK arg_sp0);
s8 *fn_802E89B0(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 **fn_802E8A6C(s32 **arg0, s32 arg1);
void fn_802E8B10(s8 *arg0, M2C_UNK arg_sp0);
void fn_802E8BE4(s32 **arg0);
void fn_802E8C38();
void fn_802E8C68(s32 arg0, s32 arg1);
void fn_802E8D48();
void fn_802E8D78(s32 arg0, s32 arg1);
void fn_802E8E5C();
void fn_802E8EE8();
s32 fn_802E8F9C();
s8 *fn_802E8FE8(s32 arg0);
void fn_802E91A4(void);
s32 fn_802E9208(M2C_UNK arg_sp0);
void fn_802E9460(s32 arg0);
void fn_802E95A4(s32 arg0, s8 *arg1, u32 arg2);
void fn_802E979C(M2C_UNK arg_sp0);
void fn_802E997C();
s32 fn_802E9AA0();
void fn_802E9AB0(s32 **arg0);
void fn_802E9AC0(s8 *arg0, s32 arg1);
void fn_802E9BE8(void);
void fn_802E9C18(s8 *arg0);
void fn_802E9D6C(s32 arg0, s32 arg1);
s8 *fn_802E9F24(s8 *arg0, s32 arg1);
s32 **fn_802EA030(s32 **arg0, s32 arg1);
void fn_802EA09C();
s8 *fn_802EA0E8(void);
void fn_802EA0F4();
void fn_802EA954();
void fn_802EAAAC(s8 *arg0);
void fn_802EAB30();
void fn_802EAFD0(s8 *arg0, s32 arg1, s32 arg2);
void fn_802EB1D0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802EB300(s8 *arg0, s32 *arg1, M2C_UNK arg_sp0);
M2C_UNK fn_802EB568();
void fn_802ED238(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_802ED438();
void fn_802ED590();
void fn_802ED698();
extern int fn_802ED764();
void fn_802ED79C();
void fn_802EE0E8();
void fn_802EE980(s8 *arg0);
M2C_UNK fn_802EEC48();
M2C_UNK fn_802EFA78();
M2C_UNK fn_802F0538();
void fn_802F1774(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_802F19D4();
void fn_802F1AA0(s8 *arg0, s32 arg1);
void fn_802F1BC4(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3);
void fn_802F1C84(s8 *arg0);
void fn_802F1E7C();
u16 fn_802F1ECC();
f32 fn_802F1FBC();
s32 fn_802F218C(s8 *arg0);
s32 **fn_802F21C4(s32 **arg0, s32 arg1);
void fn_802F2250();
void fn_802F2398();
void fn_802F2498();
void fn_802F2554();
void fn_802F2744();
s8 *fn_802F2A34(s8 *arg0, u32 arg1);
extern void fn_802F6E0C();
extern void fn_802F6EE4();
extern void fn_802F809C();
extern void fn_802F84E0();
extern void fn_80302048();
extern void fn_80302CF8();
extern void fn_803053AC();
extern void fn_803053D4();
extern void fn_80305558();
extern void fn_803055E8();
extern void fn_80305680();
extern void fn_803057C0();
extern void fn_8030CB10();
extern void log();
extern void strcat();
extern void strcpy();
extern void strncpy();

// asm_to_cpp: fn_802E657C
asm void fn_802E657C() {
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
    fmr f27, f1
    fmr f28, f2
    stw r31, 0x3c(r1)
    fmr f29, f3
    fmr f30, f4
    mr r31, r4
    stw r30, 0x38(r1)
    fmr f31, f5
    mr r30, r3
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCullMode
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x0
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x4
    bl fn_802E43CC
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x5
    bl GXSetBlendMode
    lis r4, lbl_80341A38@ha
    addi r3, r1, 0x8
    lfs f1, lbl_80341A38@l(r4)
    fmr f2, f1
    fmr f3, f1
    bl PSMTXTrans
    addi r3, r1, 0x8
    li r4, 0x0
    bl GXLoadPosMtxImm
    mr r3, r30
    li r4, 0x0
    bl GXSetLineWidth
    li r3, 0xa8
    li r4, 0x0
    li r5, 0x2
    bl GXBegin
    lis r3, 0xcc01
    stfs f27, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f31, -0x8000(r3)
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
    stfs f29, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    opword 0xE3C10078
    lfd f30, 0x70(r1)
    opword 0xE3A10068
    lfd f29, 0x60(r1)
    opword 0xE3810058
    lfd f28, 0x50(r1)
    opword 0xE3610048
    lfd f27, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r0, 0x94(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_802E6740
asm s32 fn_802E6740() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f2
    stfd f30, 0x20(r1)
    fmr f30, f1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r8
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802E691C
    lwz r12, 0x0(r28)
    fmr f1, f30
    fmr f2, f31
    mr r3, r28
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802E6898
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802E682C
    lwz r12, 0x0(r28)
    fmr f1, f30
    fmr f2, f31
    mr r3, r28
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r6, r30
    li r5, 0x3
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_802E6890
lbl_802E682C:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r6, r30
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_802E6890:
    li r31, 0x1
    b lbl_802E691C
lbl_802E6898:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802E691C
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r6, r30
    li r5, 0x2
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_802E691C:
    lfd f31, 0x28(r1)
    mr r3, r31
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802E6960
asm int fn_802E6960() {
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

// asm_to_cpp: fn_802E698C
asm void fn_802E698C() {
    nofralloc
    add r3, r3, r4
    stb r5, 0x4(r3)
    blr
}

// asm_to_cpp: fn_802E69A0
asm s32 **fn_802E69A0(s32 **arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_802E6A3C
    lis r5, lbl_8037B420@ha
    li r4, 0x0
    addi r5, r5, lbl_8037B420@l
    stw r5, 0x0(r3)
    addi r3, r3, 0x8
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
    b lbl_802E6A24
lbl_802E69E8:
    mr r4, r31
    addi r3, r29, 0x8
    bl List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_802E6A0C
    mr r4, r31
    bl fn_8030CB00
    b lbl_802E6A14
lbl_802E6A0C:
    mr r3, r31
    bl dtor_80136CFC
lbl_802E6A14:
    addi r3, r29, 0x8
    li r4, 0x0
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
lbl_802E6A24:
    cmpwi r31, 0x0
    bne lbl_802E69E8
    cmpwi r30, 0x0
    ble lbl_802E6A3C
    mr r3, r29
    bl dtor_80136CFC
lbl_802E6A3C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E6A5C
asm void fn_802E6A5C(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_802E6AA0
lbl_802E6A7C:
    addi r3, r30, 0x8
    clrlwi r4, r31, 16
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_802E6AA0:
    lhz r0, 0x10(r30)
    cmplw r31, r0
    blt lbl_802E6A7C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E6AF0
asm void fn_802E6AF0(s8 *arg0, s8 **arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r31, r3
    mr r3, r30
    mr r4, r29
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_802E6B74
    li r4, 0x10
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802E6B64
    stw r31, 0x0(r3)
    stw r30, 0x4(r3)
lbl_802E6B64:
    mr r4, r3
    addi r3, r29, 0x8
    bl List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
    b lbl_802E6B98
lbl_802E6B74:
    li r3, 0x10
    bl fn_80136C54
    cmpwi r3, 0x0
    beq lbl_802E6B8C
    stw r31, 0x0(r3)
    stw r30, 0x4(r3)
lbl_802E6B8C:
    mr r4, r3
    addi r3, r29, 0x8
    bl List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
lbl_802E6B98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E6BBC
asm void fn_802E6BBC(s8 *arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x8
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
    b lbl_802E6C0C
lbl_802E6BF0:
    lwz r0, 0x4(r31)
    cmplw r0, r30
    beq lbl_802E6C14
    mr r4, r31
    addi r3, r29, 0x8
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
lbl_802E6C0C:
    cmpwi r31, 0x0
    bne lbl_802E6BF0
lbl_802E6C14:
    mr r4, r31
    addi r3, r29, 0x8
    bl List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_802E6C38
    mr r4, r31
    bl fn_8030CB00
    b lbl_802E6C40
lbl_802E6C38:
    mr r3, r31
    bl dtor_80136CFC
lbl_802E6C40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E6C5C
asm s32 fn_802E6C5C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    clrlwi r4, r4, 16
    addi r3, r3, 0x8
    stw r0, 0x14(r1)
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    lwz r0, 0x14(r1)
    lwz r3, 0x4(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E6C88
asm s32 fn_802E6C88() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x58(r1)
    stfd f30, 0x50(r1)
    bl _savegpr_22
    fmr f30, f1
    mr r22, r3
    fmr f31, f2
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_802E6D44
lbl_802E6CD4:
    addi r3, r22, 0x8
    clrlwi r4, r28, 16
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    mr r31, r3
    lwz r3, 0x4(r3)
    fmr f1, f30
    mr r4, r23
    lwz r12, 0x0(r3)
    fmr f2, f31
    mr r5, r24
    mr r6, r25
    lwz r12, 0x48(r12)
    mr r7, r26
    mr r8, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802E6D40
    lwz r3, 0x4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802E6D3C
    lwz r29, 0x4(r31)
lbl_802E6D3C:
    li r30, 0x1
lbl_802E6D40:
    addi r28, r28, 0x1
lbl_802E6D44:
    lhz r0, 0x10(r22)
    cmplw r28, r0
    blt lbl_802E6CD4
    cmpwi r29, 0x0
    beq lbl_802E6E08
    cmpwi r24, 0x0
    beq lbl_802E6DB0
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r24
    addi r5, r1, 0x14
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r22)
    mr r4, r3
    mr r3, r22
    mr r6, r27
    lwz r12, 0x34(r12)
    li r5, 0x0
    mtctr r12
    bctrl
lbl_802E6DB0:
    cmpwi r26, 0x0
    beq lbl_802E6E08
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r26
    addi r5, r1, 0x8
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r22)
    mr r4, r3
    mr r3, r22
    mr r6, r27
    lwz r12, 0x34(r12)
    li r5, 0x5
    mtctr r12
    bctrl
lbl_802E6E08:
    lfd f31, 0x58(r1)
    mr r3, r30
    lfd f30, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_802E6E64
asm void fn_802E6E64(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_802E6EA8
lbl_802E6E84:
    addi r3, r30, 0x8
    clrlwi r4, r31, 16
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_802E6EA8:
    lhz r0, 0x10(r30)
    cmplw r31, r0
    blt lbl_802E6E84
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E6ED0
asm void fn_802E6ED0(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_802E6F14
lbl_802E6EF0:
    addi r3, r30, 0x8
    clrlwi r4, r31, 16
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_802E6F14:
    lhz r0, 0x10(r30)
    cmplw r31, r0
    blt lbl_802E6EF0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E6F3C
asm void fn_802E6F3C(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_802E6F8C
lbl_802E6F64:
    addi r3, r29, 0x8
    clrlwi r4, r31, 16
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    lwz r3, 0x4(r3)
    mr r4, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_802E6F8C:
    lhz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_802E6F64
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E6FB4
asm void fn_802E6FB4() {
    nofralloc
    stb r4, 0x24(r3)
    blr
}

// asm_to_cpp: fn_802E6FBC
asm s32 ** fn_802E6FBC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_802E70F0
    lis r5, lbl_8037B380@ha
    li r4, 0x0
    addi r5, r5, lbl_8037B380@l
    stw r5, 0x0(r3)
    addi r3, r3, 0x18
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
    b lbl_802E706C
lbl_802E7004:
    mr r4, r31
    addi r3, r29, 0x18
    bl List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_802E7034
    lwz r4, 0x4(r31)
    bl fn_8030CB00
    lwz r3, 0x14(r29)
    mr r4, r31
    bl fn_8030CB00
    b lbl_802E705C
lbl_802E7034:
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_802E7054
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_802E7054:
    mr r3, r31
    bl dtor_80136CFC
lbl_802E705C:
    addi r3, r29, 0x18
    li r4, 0x0
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
lbl_802E706C:
    cmpwi r31, 0x0
    bne lbl_802E7004
    cmpwi r29, 0x0
    beq lbl_802E70E0
    lis r5, lbl_8037B420@ha
    addi r3, r29, 0x8
    addi r5, r5, lbl_8037B420@l
    li r4, 0x0
    stw r5, 0x0(r29)
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
    b lbl_802E70D8
lbl_802E709C:
    mr r4, r31
    addi r3, r29, 0x8
    bl List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_802E70C0
    mr r4, r31
    bl fn_8030CB00
    b lbl_802E70C8
lbl_802E70C0:
    mr r3, r31
    bl dtor_80136CFC
lbl_802E70C8:
    addi r3, r29, 0x8
    li r4, 0x0
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r31, r3
lbl_802E70D8:
    cmpwi r31, 0x0
    bne lbl_802E709C
lbl_802E70E0:
    cmpwi r30, 0x0
    ble lbl_802E70F0
    mr r3, r29
    bl dtor_80136CFC
lbl_802E70F0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E7190
asm int fn_802E7190() {
    nofralloc
    li r0, 0x0
    lis r5, lbl_80462228@ha
    stw r0, lbl_80462228@l(r5)
    lwz r4, 0x10(r4)
    lwz r12, 0x0(r3)
    addi r4, r4, 0x10
    lwz r12, 0x5c(r12)
    mtctr r12
    bctr
}

// asm_to_cpp: fn_802E71B4
asm int fn_802E71B4() {
    nofralloc
    lwz r12, 0x0(r3)
    lwz r4, 0x10(r4)
    lwz r12, 0x5c(r12)
    addi r4, r4, 0x10
    mtctr r12
    bctr
}

// asm_to_cpp: fn_802E71CC
asm void fn_802E71CC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r23, lbl_8037B490@ha
    lis r25, lbl_8037B2D8@ha
    lis r31, lbl_80462448@ha
    lis r30, lbl_80462458@ha
    lwz r27, 0x4(r4)
    mr r28, r3
    addi r23, r23, lbl_8037B490@l
    addi r25, r25, lbl_8037B2D8@l
    addi r31, r31, lbl_80462448@l
    addi r30, r30, lbl_80462458@l
    addi r26, r4, 0x4
    lis r22, lbl_80462228@ha
    li r24, 0x0
    b lbl_802E743C
lbl_802E7218:
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    beq lbl_802E7298
    li r4, 0x30
    bl fn_8030CAF0
    mr r29, r3
    lwz r3, 0x14(r28)
    li r4, 0x10
    bl fn_8030CAF0
    cmpwi r29, 0x0
    mr r21, r3
    beq lbl_802E7280
    lwz r0, lbl_80462228@l(r22)
    mr r3, r29
    stw r23, 0x0(r29)
    stb r24, 0x18(r29)
    stw r24, 0x1c(r29)
    stw r0, 0x20(r29)
    stb r24, 0x24(r29)
    stw r24, 0x28(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r25, 0x0(r29)
    stw r24, 0x2c(r29)
lbl_802E7280:
    cmpwi r21, 0x0
    beq lbl_802E72FC
    subi r0, r27, 0x4
    stw r0, 0x0(r21)
    stw r29, 0x4(r21)
    b lbl_802E72FC
lbl_802E7298:
    li r3, 0x30
    bl fn_80136C54
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802E72DC
    lwz r0, lbl_80462228@l(r22)
    stw r23, 0x0(r3)
    stb r24, 0x18(r3)
    stw r24, 0x1c(r3)
    stw r0, 0x20(r3)
    stb r24, 0x24(r3)
    stw r24, 0x28(r3)
    lwz r12, 0xc(r23)
    mtctr r12
    bctrl
    stw r25, 0x0(r29)
    stw r24, 0x2c(r29)
lbl_802E72DC:
    li r3, 0x10
    bl fn_80136C54
    cmpwi r3, 0x0
    beq lbl_802E72F8
    subi r0, r27, 0x4
    stw r0, 0x0(r3)
    stw r29, 0x4(r3)
lbl_802E72F8:
    mr r21, r3
lbl_802E72FC:
    mr r4, r21
    addi r3, r28, 0x18
    bl List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
    lwz r4, lbl_80462228@l(r22)
    subi r21, r27, 0x4
    mr r3, r29
    addi r0, r4, 0x1
    mr r4, r21
    stw r0, lbl_80462228@l(r22)
    lwz r12, 0x0(r29)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802E735C
lbl_802E7348:
    cmplw r3, r31
    bne lbl_802E7358
    li r0, 0x1
    b lbl_802E7368
lbl_802E7358:
    lwz r3, 0x0(r3)
lbl_802E735C:
    cmpwi r3, 0x0
    bne lbl_802E7348
    li r0, 0x0
lbl_802E7368:
    cmpwi r0, 0x0
    beq lbl_802E7378
    mr r0, r21
    b lbl_802E737C
lbl_802E7378:
    li r0, 0x0
lbl_802E737C:
    cmpwi r0, 0x0
    beq lbl_802E739C
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_802E739C:
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802E73C8
lbl_802E73B4:
    cmplw r3, r30
    bne lbl_802E73C4
    li r0, 0x1
    b lbl_802E73D4
lbl_802E73C4:
    lwz r3, 0x0(r3)
lbl_802E73C8:
    cmpwi r3, 0x0
    bne lbl_802E73B4
    li r0, 0x0
lbl_802E73D4:
    cmpwi r0, 0x0
    beq lbl_802E73E4
    mr r0, r21
    b lbl_802E73E8
lbl_802E73E4:
    li r0, 0x0
lbl_802E73E8:
    cmpwi r0, 0x0
    beq lbl_802E7408
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_802E7408:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    addi r4, r21, 0x10
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    lwz r27, 0x0(r27)
lbl_802E743C:
    cmplw r27, r26
    bne lbl_802E7218
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_802E7464
asm s32 *fn_802E7464(void) {
    nofralloc
    lis r3, lbl_80462440@ha
    addi r3, r3, lbl_80462440@l
    blr
}

// asm_to_cpp: fn_802E7470
asm int fn_802E7470() {
    nofralloc
    lwz r12, 0x0(r3)
    lwz r4, 0x10(r4)
    lwz r12, 0x60(r12)
    addi r4, r4, 0x10
    mtctr r12
    bctr
}

// asm_to_cpp: fn_802E7488
asm void fn_802E7488() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r31, 0x4(r4)
    mr r26, r3
    addi r30, r4, 0x4
    lis r29, lbl_80462228@ha
    b lbl_802E7584
lbl_802E74B0:
    addi r3, r26, 0x18
    li r4, 0x0
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r27, r3
    subi r28, r31, 0x4
    b lbl_802E74E4
lbl_802E74C8:
    lwz r0, 0x0(r27)
    cmplw r0, r28
    beq lbl_802E74EC
    mr r4, r27
    addi r3, r26, 0x18
    bl List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
    mr r27, r3
lbl_802E74E4:
    cmpwi r27, 0x0
    bne lbl_802E74C8
lbl_802E74EC:
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r4, 0x4(r27)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    mr r4, r27
    addi r3, r26, 0x18
    bl List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
    lwz r3, lbl_80462228@l(r29)
    subi r0, r3, 0x1
    stw r0, lbl_80462228@l(r29)
    lwz r3, 0x14(r26)
    cmpwi r3, 0x0
    beq lbl_802E7540
    lwz r4, 0x4(r27)
    bl fn_8030CB00
    lwz r3, 0x14(r26)
    mr r4, r27
    bl fn_8030CB00
    b lbl_802E7568
lbl_802E7540:
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_802E7560
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_802E7560:
    mr r3, r27
    bl dtor_80136CFC
lbl_802E7568:
    lwz r12, 0x0(r26)
    mr r3, r26
    addi r4, r31, 0xc
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_802E7584:
    cmplw r31, r30
    bne lbl_802E74B0
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E75A4
asm s32 fn_802E75A4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_802E75F0
lbl_802E75CC:
    addi r3, r29, 0x18
    clrlwi r4, r31, 16
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    lwz r0, 0x0(r3)
    cmplw r0, r30
    bne lbl_802E75EC
    lwz r3, 0x4(r3)
    b lbl_802E7600
lbl_802E75EC:
    addi r31, r31, 0x1
lbl_802E75F0:
    lhz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_802E75CC
    li r3, 0x0
lbl_802E7600:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E761C
asm void fn_802E761C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_80462408@ha
    mr r26, r3
    mr r27, r4
    li r28, 0x0
    addi r29, r29, lbl_80462408@l
    b lbl_802E76C8
lbl_802E7648:
    addi r3, r26, 0x18
    clrlwi r4, r28, 16
    bl List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
    lwz r30, 0x0(r3)
    mr r31, r3
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802E7688
lbl_802E7674:
    cmplw r3, r29
    bne lbl_802E7684
    li r0, 0x1
    b lbl_802E7694
lbl_802E7684:
    lwz r3, 0x0(r3)
lbl_802E7688:
    cmpwi r3, 0x0
    bne lbl_802E7674
    li r0, 0x0
lbl_802E7694:
    cmpwi r0, 0x0
    beq lbl_802E76A0
    b lbl_802E76A4
lbl_802E76A0:
    li r30, 0x0
lbl_802E76A4:
    cmpwi r30, 0x0
    beq lbl_802E76C4
    lwz r3, 0x4(r31)
    mr r4, r27
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_802E76C4:
    addi r28, r28, 0x1
lbl_802E76C8:
    lhz r0, 0x10(r26)
    cmplw r28, r0
    blt lbl_802E7648
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E76EC
asm s32 fn_802E76EC() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    fmr f30, f1
    fmr f31, f2
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_802E7730
    li r3, 0x0
    b lbl_802E77F0
lbl_802E7730:
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802E7758
    li r3, 0x0
    b lbl_802E77F0
lbl_802E7758:
    lwz r3, 0x2c(r30)
    addi r4, r1, 0x38
    addi r3, r3, 0x84
    bl PSMTXInverse
    lis r3, lbl_80341A38@ha
    stfs f30, 0x8(r1)
    lfs f0, lbl_80341A38@l(r3)
    addi r3, r1, 0x38
    stfs f31, 0xc(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0x28
    stfs f0, 0x10(r1)
    bl fn_8030D7E0
    lwz r4, 0x2c(r30)
    mr r5, r31
    addi r3, r1, 0x18
    bl fn_802F84E0
    lfs f0, 0x18(r1)
    lfs f1, 0x28(r1)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_802E77EC
    lfs f0, 0x20(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_802E77EC
    lfs f0, 0x24(r1)
    lfs f1, 0x2c(r1)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_802E77EC
    lfs f0, 0x1c(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_802E77EC
    li r3, 0x1
    b lbl_802E77F0
lbl_802E77EC:
    li r3, 0x0
lbl_802E77F0:
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    opword 0xE3C10078
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r0, 0x94(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_802E7820
asm void fn_802E7820(s8 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stw r31, 0x1c(r1)
    lis r31, lbl_80341A38@ha
    addi r31, r31, lbl_80341A38@l
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r3, 0x28(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802E7998
    lwz r3, 0x2c(r30)
    addi r4, r31, 0x4
    lbz r6, 0x4(r31)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lfs f31, 0x90(r3)
    lfs f30, 0xa0(r3)
    lbz r5, 0x1(r4)
    lbz r3, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    lbz r0, 0x4(r30)
    stfs f1, 0x10(r1)
    cmpwi r0, 0x0
    stfs f0, 0x14(r1)
    beq lbl_802E78C8
    li r3, 0x0
    li r0, 0xff
    stb r3, 0x8(r1)
    stb r0, 0xa(r1)
lbl_802E78C8:
    lfs f1, 0x8(r31)
    addi r4, r1, 0x8
    lfs f0, 0x14(r1)
    li r3, 0x8
    lfs f2, 0x10(r1)
    fmuls f0, f0, f1
    lfs f5, 0x0(r31)
    fmuls f3, f2, f1
    fsubs f2, f30, f0
    fsubs f1, f31, f3
    fadds f3, f31, f3
    fmr f4, f2
    bl fn_802E657C
    lfs f1, 0x10(r1)
    addi r4, r1, 0x8
    lfs f2, 0x8(r31)
    li r3, 0x8
    lfs f0, 0x14(r1)
    fmuls f1, f1, f2
    lfs f5, 0x0(r31)
    fmuls f0, f0, f2
    fadds f1, f31, f1
    fsubs f2, f30, f0
    fadds f4, f30, f0
    fmr f3, f1
    bl fn_802E657C
    lfs f1, 0x8(r31)
    addi r4, r1, 0x8
    lfs f0, 0x14(r1)
    li r3, 0x8
    lfs f2, 0x10(r1)
    fmuls f0, f0, f1
    lfs f5, 0x0(r31)
    fmuls f3, f2, f1
    fadds f2, f30, f0
    fadds f1, f31, f3
    fsubs f3, f31, f3
    fmr f4, f2
    bl fn_802E657C
    lfs f1, 0x10(r1)
    addi r4, r1, 0x8
    lfs f2, 0x8(r31)
    li r3, 0x8
    lfs f0, 0x14(r1)
    fmuls f1, f1, f2
    lfs f5, 0x0(r31)
    fmuls f0, f0, f2
    fsubs f1, f31, f1
    fadds f2, f30, f0
    fsubs f4, f30, f0
    fmr f3, f1
    bl fn_802E657C
lbl_802E7998:
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_802E79C0
asm s32 fn_802E79C0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E79E4
    li r3, 0x0
    b lbl_802E7AAC
lbl_802E79E4:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E79F8
    li r3, 0x1
    b lbl_802E7AAC
lbl_802E79F8:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7A0C
    li r3, 0x0
    b lbl_802E7AAC
lbl_802E7A0C:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E7A20
    li r3, 0x1
    b lbl_802E7AAC
lbl_802E7A20:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7A34
    li r3, 0x0
    b lbl_802E7AAC
lbl_802E7A34:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E7A48
    li r3, 0x1
    b lbl_802E7AAC
lbl_802E7A48:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7A5C
    li r3, 0x0
    b lbl_802E7AAC
lbl_802E7A5C:
    lwz r31, 0xc(r3)
    cmpwi r31, 0x0
    bne lbl_802E7A70
    li r3, 0x1
    b lbl_802E7AAC
lbl_802E7A70:
    mr r3, r31
    bl fn_802E7AC0
    cmpwi r3, 0x0
    bne lbl_802E7A88
    li r3, 0x0
    b lbl_802E7AAC
lbl_802E7A88:
    mr r3, r31
    bl fn_802E7ACC
    cmpwi r3, 0x0
    bne lbl_802E7AA0
    li r3, 0x1
    b lbl_802E7AAC
lbl_802E7AA0:
    mr r3, r31
    bl fn_802E7ACC
    bl fn_802E79C0
lbl_802E7AAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E7AD4
asm int fn_802E7AD4() {
    nofralloc
    lwz r3, 0x2c(r3)
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7AEC
    li r3, 0x0
    blr
lbl_802E7AEC:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E7B00
    li r3, 0x1
    blr
lbl_802E7B00:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7B14
    li r3, 0x0
    blr
lbl_802E7B14:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E7B28
    li r3, 0x1
    blr
lbl_802E7B28:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7B3C
    li r3, 0x0
    blr
lbl_802E7B3C:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E7B50
    li r3, 0x1
    blr
lbl_802E7B50:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7B64
    li r3, 0x0
    blr
lbl_802E7B64:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E7B78
    li r3, 0x1
    blr
lbl_802E7B78:
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    bne lbl_802E7B8C
    li r3, 0x0
    blr
lbl_802E7B8C:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    bne lbl_802E7BA0
    li r3, 0x1
    blr
lbl_802E7BA0:
    b fn_802E79C0
    blr
}

// asm_to_cpp: fn_802E7BCC
asm int fn_802E7BCC() {
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0x4(r3)
    mr r0, r3
    beqlr
    mr r3, r4
    mr r4, r0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
    blr
}

// asm_to_cpp: fn_802E7C10
asm void fn_802E7C10() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_802E7C4C
    bge lbl_802E7CC8
    cmpwi r4, -0x1
    bge lbl_802E7C94
    b lbl_802E7CC8
lbl_802E7C4C:
    lis r28, lbl_804623B8@ha
    slwi r29, r3, 2
    addi r28, r28, lbl_804623B8@l
    lwzx r4, r28, r29
    lbz r0, 0x40(r4)
    cmpwi r0, 0x0
    bne lbl_802E7C80
    lis r4, fn_802E7D24@ha
    addi r4, r4, fn_802E7D24@l
    bl fn_8028AB54
    lwzx r3, r28, r29
    li r0, 0x1
    stb r0, 0x40(r3)
lbl_802E7C80:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_8028B73C
    b lbl_802E7CC8
lbl_802E7C94:
    lis r29, lbl_804623B8@ha
    slwi r28, r3, 2
    addi r29, r29, lbl_804623B8@l
    lwzx r4, r29, r28
    lwz r4, 0x28(r4)
    bl fn_8028AB54
    lwzx r3, r29, r28
    li r0, 0x0
    stb r0, 0x40(r3)
    lwzx r3, r29, r28
    stb r0, 0x42(r3)
    lwzx r3, r29, r28
    stb r0, 0x43(r3)
lbl_802E7CC8:
    lis r3, lbl_804623B8@ha
    slwi r0, r30, 2
    addi r3, r3, lbl_804623B8@l
    lwzx r3, r3, r0
    lwz r12, 0x24(r3)
    cmpwi r12, 0x0
    beq lbl_802E7D04
    lis r3, fn_802E7C10@ha
    addi r3, r3, fn_802E7C10@l
    cmplw r12, r3
    beq lbl_802E7D04
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
lbl_802E7D04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E7D24
asm void fn_802E7D24() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0xff
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_802E7D54
    b lbl_802E7DE8
lbl_802E7D54:
    lis r4, lbl_804623B8@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_804623B8@l
    lwzx r29, r4, r0
    lwz r28, 0x0(r29)
    mr r3, r28
    bl fn_8028B6F8
    cmpwi r3, 0x0
    beq lbl_802E7DE8
    mr r3, r28
    li r4, 0x2
    li r5, 0x0
    bl fn_8028B73C
    mulli r0, r28, 0x30
    lis r3, lbl_804622F8@ha
    mr r4, r28
    addi r3, r3, lbl_804622F8@l
    add r28, r3, r0
    mr r3, r28
    bl OSSetAlarmUserData
    mr r3, r28
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_802E7E34@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802E7E34@l
    srwi r0, r0, 2
    mr r3, r28
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x3e8
    bl OSSetAlarm
    li r0, 0x1
    stb r0, 0x41(r29)
lbl_802E7DE8:
    lis r3, lbl_804623B8@ha
    slwi r0, r30, 2
    addi r3, r3, lbl_804623B8@l
    lwzx r3, r3, r0
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_802E7E14
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
lbl_802E7E14:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E7E34
asm void fn_802E7E34() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSGetAlarmUserData
    lis r4, lbl_804623B8@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_804623B8@l
    lwzx r31, r4, r0
    lwz r30, 0x0(r31)
    mr r3, r30
    bl fn_8028B6F8
    cmpwi r3, 0x0
    beq lbl_802E7E80
    mr r3, r30
    li r4, 0x3
    li r5, 0x0
    bl fn_8028B73C
lbl_802E7E80:
    li r0, 0x0
    stb r0, 0x41(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E7EA0
asm s8 * fn_802E7EA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80341A48@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1
    lfs f0, lbl_80341A48@l(r6)
    cmpwi r4, 0x4
    stw r31, 0x1c(r1)
    lis r31, lbl_80462230@ha
    addi r31, r31, lbl_80462230@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r4, 0x0(r3)
    stb r7, 0x1c(r3)
    stfs f0, 0x4(r3)
    stw r5, 0x20(r3)
    stw r7, 0x24(r3)
    stw r7, 0x28(r3)
    stb r7, 0x40(r3)
    stb r7, 0x41(r3)
    stb r0, 0x44(r3)
    bge lbl_802E7F38
    mulli r30, r4, 0x30
    addi r3, r31, 0x0
    addi r0, r31, 0x8
    stbx r7, r3, r4
    add r3, r0, r30
    bl OSCreateAlarm
    addi r0, r31, 0xc8
    add r3, r0, r30
    bl OSCreateAlarm
    slwi r0, r29, 2
    addi r3, r31, 0x188
    stwx r28, r3, r0
lbl_802E7F38:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E7F5C
asm void fn_802E7F5C(s32 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_8028EE58
    lis r4, fn_802E7C10@ha
    lwz r3, 0x0(r30)
    addi r4, r4, fn_802E7C10@l
    bl fn_8028AACC
    stw r3, 0x24(r30)
    li r3, 0x1
    bl fn_8028EE58
    lis r4, fn_802E7D24@ha
    lwz r3, 0x0(r30)
    addi r4, r4, fn_802E7D24@l
    bl fn_8028AB54
    li r31, 0x1
    stw r3, 0x28(r30)
    lwz r3, 0x0(r30)
    addi r4, r1, 0x8
    stb r31, 0x44(r30)
    bl fn_8028A9B8
    cmpwi r3, 0x0
    beq lbl_802E7FD8
    bge lbl_802E7FE8
    cmpwi r3, -0x1
    bge lbl_802E7FE0
    b lbl_802E7FE8
lbl_802E7FD8:
    stb r31, 0x40(r30)
    b lbl_802E7FE8
lbl_802E7FE0:
    li r0, 0x0
    stb r0, 0x40(r30)
lbl_802E7FE8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E8000
asm void fn_802E8000() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x0(r3)
    bl fn_8028B73C
    li r3, 0x0
    bl fn_8028EE58
    lwz r3, 0x0(r30)
    lwz r4, 0x24(r30)
    bl fn_8028AACC
    li r3, 0x1
    bl fn_8028EE58
    li r31, 0x0
    lwz r3, 0x0(r30)
    stw r31, 0x24(r30)
    lwz r4, 0x28(r30)
    bl fn_8028AB54
    stw r31, 0x28(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8074
asm void fn_802E8074(s32 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beqlr
    cmpwi r5, 0x0
    beq lbl_802E80C8
    lbz r0, 0x5c(r6)
    cmplwi r0, 0x2
    bne lbl_802E80B4
    lwz r0, 0xc(r4)
    cmplwi r0, 0x2
    bne lbl_802E80B4
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    b lbl_802E80C8
lbl_802E80B4:
    lfs f0, 0x20(r6)
    lwz r5, 0x0(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0x24(r5)
    stfs f0, 0xc(r3)
lbl_802E80C8:
    lwz r7, 0x0(r4)
    lwz r0, 0x4(r7)
    stw r0, 0x10(r3)
    lwz r6, 0x0(r7)
    stw r6, 0x14(r3)
    lwz r0, 0x8(r7)
    stw r0, 0x18(r3)
    lbz r0, 0x5c(r7)
    cmplwi r0, 0x2
    bnelr
    lwz r0, 0xc(r4)
    cmplwi r0, 0x2
    bnelr
    lwz r0, 0x60(r7)
    lwz r4, 0x64(r7)
    rlwinm. r5, r0, 0, 27, 27
    lwz r5, 0x68(r7)
    beq lbl_802E8118
    ori r6, r6, 0x800
    stw r6, 0x14(r3)
lbl_802E8118:
    rlwinm. r6, r4, 0, 27, 27
    beq lbl_802E812C
    lwz r6, 0x10(r3)
    ori r6, r6, 0x800
    stw r6, 0x10(r3)
lbl_802E812C:
    rlwinm. r6, r5, 0, 27, 27
    beq lbl_802E8140
    lwz r6, 0x18(r3)
    ori r6, r6, 0x800
    stw r6, 0x18(r3)
lbl_802E8140:
    rlwinm. r6, r0, 0, 21, 21
    beq lbl_802E8154
    lwz r6, 0x14(r3)
    ori r6, r6, 0x10
    stw r6, 0x14(r3)
lbl_802E8154:
    rlwinm. r6, r4, 0, 21, 21
    beq lbl_802E8168
    lwz r6, 0x10(r3)
    ori r6, r6, 0x10
    stw r6, 0x10(r3)
lbl_802E8168:
    rlwinm. r6, r5, 0, 21, 21
    beq lbl_802E817C
    lwz r6, 0x18(r3)
    ori r6, r6, 0x10
    stw r6, 0x18(r3)
lbl_802E817C:
    rlwinm. r6, r0, 0, 19, 19
    beq lbl_802E8190
    lwz r6, 0x14(r3)
    ori r6, r6, 0x1000
    stw r6, 0x14(r3)
lbl_802E8190:
    rlwinm. r6, r4, 0, 19, 19
    beq lbl_802E81A4
    lwz r6, 0x10(r3)
    ori r6, r6, 0x1000
    stw r6, 0x10(r3)
lbl_802E81A4:
    rlwinm. r6, r5, 0, 19, 19
    beq lbl_802E81B8
    lwz r6, 0x18(r3)
    ori r6, r6, 0x1000
    stw r6, 0x18(r3)
lbl_802E81B8:
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_802E81CC
    lwz r0, 0x14(r3)
    ori r0, r0, 0x8000
    stw r0, 0x14(r3)
lbl_802E81CC:
    rlwinm. r0, r4, 0, 20, 20
    beq lbl_802E81E0
    lwz r0, 0x10(r3)
    ori r0, r0, 0x8000
    stw r0, 0x10(r3)
lbl_802E81E0:
    rlwinm. r0, r5, 0, 20, 20
    beqlr
    lwz r0, 0x18(r3)
    ori r0, r0, 0x8000
    stw r0, 0x18(r3)
    blr
}

// asm_to_cpp: fn_802E820C
asm void fn_802E820C(s32 *arg0) {
    nofralloc
    lis r5, lbl_80341A4C@ha
    lis r4, lbl_80341A50@ha
    lfs f1, lbl_80341A4C@l(r5)
    lfs f0, lbl_80341A50@l(r4)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

// asm_to_cpp: fn_802E823C
asm void fn_802E823C() {
    nofralloc
    stfs f1, 0x4(r3)
    blr
}

// asm_to_cpp: fn_802E8244
asm void fn_802E8244(s32 *arg0, s32 arg1, s32 arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x41(r3)
    cmpwi r0, 0x0
    bne lbl_802E82CC
    lis r5, lbl_80341A54@ha
    lfs f1, 0x4(r3)
    lfs f0, lbl_80341A54@l(r5)
    mr r5, r4
    lwz r3, 0x20(r3)
    fmuls f0, f0, f1
    lwz r4, 0x0(r31)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r6, 0xc(r1)
    extsb r6, r6
    bl fn_802E8EE8
    lwz r3, 0x0(r31)
    bl fn_8028B6F8
    cmpwi r3, 0x0
    beq lbl_802E82CC
    lbz r0, 0x42(r31)
    cmpwi r0, 0x0
    bne lbl_802E82BC
    bl OSGetTime
    stw r4, 0x34(r31)
    stw r3, 0x30(r31)
lbl_802E82BC:
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x42(r31)
    stb r0, 0x43(r31)
lbl_802E82CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E8350
asm void fn_802E8350() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r27, 0x0(r3)
    mr r31, r3
    lwz r3, 0x20(r3)
    mr r4, r27
    bl fn_802E8F80
    cmpwi r3, 0x0
    bne lbl_802E83F4
    lbz r0, 0x42(r31)
    cmpwi r0, 0x0
    beq lbl_802E8570
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    bne lbl_802E83B0
    bl OSGetTime
    li r0, 0x1
    stw r4, 0x3c(r31)
    stw r3, 0x38(r31)
    stb r0, 0x43(r31)
    b lbl_802E8570
lbl_802E83B0:
    bl OSGetTime
    lis r5, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r5)
    addi r3, r3, 0x4dd3
    lwz r5, 0x3c(r31)
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    subf r3, r5, r4
    srwi r0, r0, 6
    divwu r0, r3, r0
    cmplwi r0, 0x3e8
    blt lbl_802E8570
    li r0, 0x0
    stb r0, 0x42(r31)
    stb r0, 0x43(r31)
    b lbl_802E8570
lbl_802E83F4:
    lbz r0, 0x42(r31)
    cmpwi r0, 0x0
    beq lbl_802E84CC
    li r28, 0x0
    stb r28, 0x43(r31)
    bl OSGetTime
    lis r29, 0x8000
    lis r30, 0x1062
    lwz r0, 0xf8(r29)
    lis r3, 0x7
    lwz r7, 0x34(r31)
    addi r6, r30, 0x4dd3
    srwi r5, r0, 2
    addi r0, r3, 0x5300
    mulhwu r3, r6, r5
    subf r4, r7, r4
    srwi r3, r3, 6
    divwu r3, r4, r3
    cmplw r3, r0
    blt lbl_802E84CC
    lwz r27, 0x0(r31)
    stb r28, 0x42(r31)
    mr r3, r27
    stb r28, 0x43(r31)
    bl fn_8028B6F8
    cmpwi r3, 0x0
    beq lbl_802E8570
    mr r3, r27
    li r4, 0x2
    li r5, 0x0
    bl fn_8028B73C
    mulli r0, r27, 0x30
    lis r3, lbl_804622F8@ha
    mr r4, r27
    addi r3, r3, lbl_804622F8@l
    add r27, r3, r0
    mr r3, r27
    bl OSSetAlarmUserData
    mr r3, r27
    bl OSCancelAlarm
    lwz r0, 0xf8(r29)
    lis r7, fn_802E7E34@ha
    addi r4, r30, 0x4dd3
    mr r3, r27
    srwi r0, r0, 2
    addi r7, r7, fn_802E7E34@l
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x3e8
    bl OSSetAlarm
    li r0, 0x1
    stb r0, 0x41(r31)
    b lbl_802E8570
lbl_802E84CC:
    lbz r0, 0x41(r31)
    cmpwi r0, 0x0
    bne lbl_802E8570
    mr r3, r27
    bl fn_802896B8
    clrlwi r0, r3, 24
    cmplwi r0, 0x55
    bgt lbl_802E8570
    lwz r27, 0x0(r31)
    mr r3, r27
    bl fn_8028B6F8
    cmpwi r3, 0x0
    beq lbl_802E8570
    mr r3, r27
    li r4, 0x2
    li r5, 0x0
    bl fn_8028B73C
    mulli r0, r27, 0x30
    lis r3, lbl_804622F8@ha
    mr r4, r27
    addi r3, r3, lbl_804622F8@l
    add r27, r3, r0
    mr r3, r27
    bl OSSetAlarmUserData
    mr r3, r27
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_802E7E34@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802E7E34@l
    srwi r0, r0, 2
    mr r3, r27
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x3e8
    bl OSSetAlarm
    li r0, 0x1
    stb r0, 0x41(r31)
lbl_802E8570:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E859C
asm void fn_802E859C(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    cmpwi r4, 0x4
    bge lbl_802E85EC
    lbz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_802E85EC
    lwz r3, 0x20(r3)
    bl fn_802E8F80
    cmpwi r3, 0x0
    bne lbl_802E85EC
    li r0, 0x1
    lwz r3, 0x0(r31)
    stb r0, 0x1c(r31)
    li r4, 0x1
    bl fn_8028AF20
lbl_802E85EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8600
asm M2C_UNK fn_802E8600() {
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x4
    bgelr
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    li r4, 0x0
    stb r0, 0x1c(r3)
    mr r3, r5
    b fn_8028AF20
    blr
}

// asm_to_cpp: fn_802E86B4
asm void fn_802E86B4(s32 arg0, s32 arg1) {
    nofralloc
    cmpwi r4, 0x0
    bnelr
    cmpwi r3, 0x4
    bgelr
    lis r4, lbl_80462230@ha
    li r0, 0x1
    addi r4, r4, lbl_80462230@l
    stbx r0, r4, r3
    blr
}

// asm_to_cpp: fn_802E86D8
asm u8 fn_802E86D8(s32 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    blt lbl_802E86EC
    li r3, 0x0
    blr
lbl_802E86EC:
    lis r3, lbl_80462230@ha
    addi r3, r3, lbl_80462230@l
    lbzx r3, r3, r0
    blr
}

// asm_to_cpp: fn_802E86FC
asm void fn_802E86FC(s32 *arg0) {
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x4
    bgelr
    lis r3, lbl_80462230@ha
    li r0, 0x0
    addi r3, r3, lbl_80462230@l
    stbx r0, r3, r4
    blr
}

// asm_to_cpp: fn_802E871C
asm void fn_802E871C(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r3, lbl_804623C8@ha
    lwz r29, lbl_804623C8@l(r3)
    cmpwi r29, 0x0
    beq lbl_802E896C
    li r28, 0x0
    li r31, 0x0
    lis r30, 0x6666
    li r26, -0x1
lbl_802E8750:
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    beq lbl_802E895C
    mr r3, r28
    bl fn_8028B6F8
    cmpwi r3, 0x0
    beq lbl_802E895C
    bl OSDisableInterrupts
    mr r27, r3
    mr r3, r28
    bl fn_8028CF14
    cmpwi r3, 0x0
    beq lbl_802E8934
    lwz r0, 0x54(r29)
    addi r7, r1, 0x20
    lbz r8, 0x5d(r29)
    li r5, 0x28
    srwi r9, r0, 1
    lwz r6, 0x50(r29)
    cmplwi r9, 0x28
    extsb r8, r8
    bgt lbl_802E87AC
    mr r5, r9
lbl_802E87AC:
    cmplwi r5, 0x0
    addi r4, r30, 0x6667
    ble lbl_802E8874
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_802E8848
lbl_802E87C4:
    lha r0, 0x0(r6)
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x0(r7)
    lha r0, 0x2(r6)
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x2(r7)
    lha r0, 0x4(r6)
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x4(r7)
    lha r0, 0x6(r6)
    addi r6, r6, 0x8
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x6(r7)
    addi r7, r7, 0x8
    bdnz lbl_802E87C4
    andi. r5, r5, 0x3
    beq lbl_802E8874
lbl_802E8848:
    mtctr r5
lbl_802E884C:
    lha r0, 0x0(r6)
    addi r6, r6, 0x2
    mullw r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x0(r7)
    addi r7, r7, 0x2
    bdnz lbl_802E884C
lbl_802E8874:
    cmplwi r9, 0x28
    bgt lbl_802E88D4
    subfic r3, r9, 0x28
    cmplwi r3, 0x0
    ble lbl_802E88D4
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_802E88C4
lbl_802E8894:
    sth r31, 0x0(r7)
    sth r31, 0x2(r7)
    sth r31, 0x4(r7)
    sth r31, 0x6(r7)
    sth r31, 0x8(r7)
    sth r31, 0xa(r7)
    sth r31, 0xc(r7)
    sth r31, 0xe(r7)
    addi r7, r7, 0x10
    bdnz lbl_802E8894
    andi. r3, r3, 0x7
    beq lbl_802E88D4
lbl_802E88C4:
    mtctr r3
lbl_802E88C8:
    sth r31, 0x0(r7)
    addi r7, r7, 0x2
    bdnz lbl_802E88C8
lbl_802E88D4:
    lbz r0, 0x5c(r29)
    addi r3, r29, 0x30
    addi r5, r1, 0x20
    addi r7, r1, 0x8
    cntlzw r0, r0
    li r6, 0x28
    srwi r4, r0, 5
    bl fn_802873F8
    mr r3, r28
    addi r4, r1, 0x8
    li r5, 0x14
    bl fn_8028CF98
    stb r31, 0x5c(r29)
    stb r31, 0x5e(r29)
    lwz r3, 0x50(r29)
    addi r0, r3, 0x50
    stw r0, 0x50(r29)
    lwz r3, 0x54(r29)
    subic. r0, r3, 0x50
    stw r0, 0x54(r29)
    bgt lbl_802E8954
    stw r26, 0x58(r29)
    stw r31, 0x50(r29)
    b lbl_802E8954
lbl_802E8934:
    lbz r3, 0x5e(r29)
    addi r3, r3, 0x1
    clrlwi r0, r3, 24
    stb r3, 0x5e(r29)
    extsb r0, r0
    cmpwi r0, 0x3c
    ble lbl_802E8954
    stw r31, 0x50(r29)
lbl_802E8954:
    mr r3, r27
    bl OSRestoreInterrupts
lbl_802E895C:
    addi r28, r28, 0x1
    addi r29, r29, 0x68
    cmpwi r28, 0x4
    blt lbl_802E8750
lbl_802E896C:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_802E89B0
asm s8 *fn_802E89B0(s8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_8037B548@ha
    cmpwi r4, 0x0
    addi r6, r6, lbl_8037B548@l
    lis r5, lbl_804623C8@ha
    stw r6, 0x1f0(r3)
    mr r26, r3
    stw r3, lbl_804623C8@l(r5)
    beq lbl_802E8A04
    mr r3, r4
    addi r4, r26, 0x1d0
    bl ARCInitHandle
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x1ec(r26)
    b lbl_802E8A0C
lbl_802E8A04:
    li r0, 0x0
    stb r0, 0x1ec(r3)
lbl_802E8A0C:
    addi r3, r26, 0x1a0
    bl OSCreateAlarm
    mr r28, r26
    li r27, 0x0
    li r29, 0x0
    li r30, -0x1
    li r31, 0x1
lbl_802E8A28:
    mr r3, r28
    bl OSCreateAlarm
    stw r29, 0x50(r28)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    stw r30, 0x58(r28)
    stb r31, 0x5c(r28)
    stb r31, 0x62(r28)
    addi r28, r28, 0x68
    blt lbl_802E8A28
    addi r11, r1, 0x20
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E8A6C
asm s32 **fn_802E8A6C(s32 **arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_802E8AEC
    lis r5, lbl_8037B548@ha
    li r0, 0x0
    addi r5, r5, lbl_8037B548@l
    lis r4, lbl_804623C8@ha
    stw r5, 0x1f0(r3)
    stw r0, lbl_804623C8@l(r4)
    stb r0, 0x1ec(r3)
    addi r3, r3, 0x1a0
    bl OSCancelAlarm
    mr r31, r28
    li r30, 0x0
lbl_802E8AC4:
    mr r3, r31
    bl OSCancelAlarm
    addi r30, r30, 0x1
    addi r31, r31, 0x68
    cmpwi r30, 0x4
    blt lbl_802E8AC4
    cmpwi r29, 0x0
    ble lbl_802E8AEC
    mr r3, r28
    bl dtor_80136CFC
lbl_802E8AEC:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E8B10
asm void fn_802E8B10(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x1ec(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_802E8BCC
    addi r3, r3, 0x1a0
    bl OSCreateAlarm
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x431c
    lwz r0, 0xf8(r6)
    lis r6, 0x1062
    addi r10, r6, 0x4dd3
    lis r9, fn_802E871C@ha
    srwi r0, r0, 2
    subi r5, r5, 0x217d
    mulhwu r8, r5, r0
    lis r7, 0x66
    mr r6, r4
    subi r0, r7, 0x4655
    mr r5, r3
    addi r3, r31, 0x1a0
    srwi r4, r8, 15
    addi r9, r9, fn_802E871C@l
    mullw r0, r4, r0
    li r7, 0x0
    mulhwu r0, r10, r0
    srwi r8, r0, 9
    bl OSSetPeriodicAlarm
    li r27, 0x0
    li r28, 0x0
    li r29, -0x1
    li r30, 0x1
lbl_802E8BA4:
    mr r3, r31
    bl OSCreateAlarm
    stw r28, 0x50(r31)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    stw r29, 0x58(r31)
    stb r30, 0x5c(r31)
    stb r30, 0x62(r31)
    addi r31, r31, 0x68
    blt lbl_802E8BA4
lbl_802E8BCC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E8BE4
asm void fn_802E8BE4(s32 **arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x1a0
    bl OSCancelAlarm
    li r31, 0x0
lbl_802E8C08:
    mr r3, r30
    bl OSCancelAlarm
    addi r31, r31, 0x1
    addi r30, r30, 0x68
    cmpwi r31, 0x4
    blt lbl_802E8C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8C38
asm void fn_802E8C38() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetAlarmUserData
    lis r5, fn_802E8C68@ha
    li r4, 0x1
    addi r5, r5, fn_802E8C68@l
    bl fn_8028B73C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8C68
asm void fn_802E8C68(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_804623C8@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r6, lbl_804623C8@l(r5)
    cmpwi r6, 0x0
    beq lbl_802E8D34
    cmpwi r4, -0x1
    beq lbl_802E8D34
    bge lbl_802E8CA4
    cmpwi r4, -0x3
    beq lbl_802E8CD0
    bge lbl_802E8CE4
    b lbl_802E8D34
lbl_802E8CA4:
    cmpwi r4, 0x1
    bge lbl_802E8D34
    mulli r0, r3, 0x68
    lis r5, fn_802E8D78@ha
    li r7, 0x1
    addi r5, r5, fn_802E8D78@l
    add r6, r6, r0
    li r4, 0x4
    stb r7, 0x5c(r6)
    bl fn_8028B73C
    b lbl_802E8D34
lbl_802E8CD0:
    mulli r0, r3, 0x68
    li r4, 0x0
    add r3, r6, r0
    stb r4, 0x62(r3)
    b lbl_802E8D34
lbl_802E8CE4:
    mulli r0, r3, 0x68
    mr r4, r3
    add r31, r6, r0
    mr r3, r31
    bl OSSetAlarmUserData
    mr r3, r31
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_802E8C38@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802E8C38@l
    srwi r0, r0, 2
    mr r3, r31
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x32
    bl OSSetAlarm
lbl_802E8D34:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8D48
asm void fn_802E8D48() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetAlarmUserData
    lis r5, fn_802E8D78@ha
    li r4, 0x4
    addi r5, r5, fn_802E8D78@l
    bl fn_8028B73C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8D78
asm void fn_802E8D78(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_804623C8@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r5, lbl_804623C8@l(r5)
    cmpwi r5, 0x0
    beq lbl_802E8E48
    cmpwi r4, -0x1
    beq lbl_802E8DE4
    bge lbl_802E8DB4
    cmpwi r4, -0x3
    beq lbl_802E8DD0
    bge lbl_802E8DF8
    b lbl_802E8E48
lbl_802E8DB4:
    cmpwi r4, 0x1
    bge lbl_802E8E48
    mulli r0, r3, 0x68
    li r4, 0x1
    add r3, r5, r0
    stb r4, 0x62(r3)
    b lbl_802E8E48
lbl_802E8DD0:
    mulli r0, r3, 0x68
    li r4, 0x0
    add r3, r5, r0
    stb r4, 0x62(r3)
    b lbl_802E8E48
lbl_802E8DE4:
    mulli r0, r3, 0x68
    li r4, 0x0
    add r3, r5, r0
    stb r4, 0x62(r3)
    b lbl_802E8E48
lbl_802E8DF8:
    mulli r0, r3, 0x68
    mr r4, r3
    add r31, r5, r0
    mr r3, r31
    bl OSSetAlarmUserData
    mr r3, r31
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_802E8D48@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802E8D48@l
    srwi r0, r0, 2
    mr r3, r31
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x32
    bl OSSetAlarm
lbl_802E8E48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8E5C
asm void fn_802E8E5C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x1ec(r3)
    cmpwi r0, 0x0
    beq lbl_802E8ED0
    lis r5, fn_802E8C68@ha
    mr r3, r31
    addi r5, r5, fn_802E8C68@l
    li r4, 0x1
    bl fn_8028B73C
    mulli r4, r31, 0x68
    li r3, 0x0
    li r0, 0x1
    add r4, r30, r4
    stw r3, 0x30(r4)
    stw r3, 0x34(r4)
    stw r3, 0x38(r4)
    stw r3, 0x3c(r4)
    stw r3, 0x40(r4)
    stw r3, 0x44(r4)
    stw r3, 0x48(r4)
    stw r3, 0x4c(r4)
    stb r0, 0x5c(r4)
    stb r3, 0x62(r4)
lbl_802E8ED0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E8EE8
asm void fn_802E8EE8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lbz r0, 0x1ec(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r0, 0x0
    mr r29, r6
    beq lbl_802E8F68
    mr r4, r28
    addi r5, r1, 0x8
    addi r3, r3, 0x1d0
    bl fn_8029B4EC
    addi r3, r1, 0x8
    bl fn_8029B968
    mr r30, r3
    addi r3, r1, 0x8
    bl ARCGetStartOffset
    mr r31, r3
    addi r3, r1, 0x8
    bl ARCGetLength
    mulli r3, r27, 0x68
    li r0, 0x0
    add r3, r26, r3
    stb r0, 0x5e(r3)
    stw r28, 0x58(r3)
    stw r31, 0x54(r3)
    stb r29, 0x5d(r3)
    stw r30, 0x50(r3)
lbl_802E8F68:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802E8F9C
asm s32 fn_802E8F9C() {
    nofralloc
    mulli r0, r4, 0x68
    add r3, r3, r0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_802E8FC4
    lwz r0, 0x58(r3)
    cmpw r5, r0
    bne lbl_802E8FC4
    li r3, 0x1
    blr
lbl_802E8FC4:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_802E8FE8
asm s8 *fn_802E8FE8(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x17
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_802E9020
    bge lbl_802E9014
    cmpwi r3, 0x4
    beq lbl_802E9020
    b lbl_802E9038
lbl_802E9014:
    cmpwi r3, 0x19
    beq lbl_802E9020
    b lbl_802E9038
lbl_802E9020:
    lis r4, lbl_804623D0@ha
    li r0, 0x3
    lwz r4, lbl_804623D0@l(r4)
    addis r5, r4, 0x1
    subi r5, r5, 0x4750
    b lbl_802E9044
lbl_802E9038:
    lis r4, lbl_804623D0@ha
    li r0, 0x4
    lwz r5, lbl_804623D0@l(r4)
lbl_802E9044:
    mr r4, r5
    li r31, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_802E9088
lbl_802E905C:
    lbz r0, 0x2e1c(r4)
    cmpwi r0, 0x0
    bne lbl_802E907C
    mulli r4, r6, 0x2e2c
    li r0, 0x1
    add r31, r5, r4
    stb r0, 0x2e1c(r31)
    b lbl_802E9088
lbl_802E907C:
    addi r4, r4, 0x2e2c
    addi r6, r6, 0x1
    bdnz lbl_802E905C
lbl_802E9088:
    cmpwi r31, 0x0
    bne lbl_802E9188
    cmpwi r3, 0x17
    beq lbl_802E90B4
    bge lbl_802E90A8
    cmpwi r3, 0x4
    beq lbl_802E90B4
    b lbl_802E90C8
lbl_802E90A8:
    cmpwi r3, 0x19
    beq lbl_802E90B4
    b lbl_802E90C8
lbl_802E90B4:
    lis r3, lbl_804623D0@ha
    lwz r4, lbl_804623D0@l(r3)
    addis r3, r4, 0x1
    addi r3, r3, 0x433c
    b lbl_802E90D8
lbl_802E90C8:
    lis r3, lbl_804623D0@ha
    lwz r4, lbl_804623D0@l(r3)
    addis r3, r4, 0x1
    addi r3, r3, 0x4334
lbl_802E90D8:
    lwz r31, 0x0(r3)
    lwz r0, 0x2e28(r31)
    cmpwi r0, 0x17
    beq lbl_802E9104
    bge lbl_802E90F8
    cmpwi r0, 0x4
    beq lbl_802E9104
    b lbl_802E9110
lbl_802E90F8:
    cmpwi r0, 0x19
    beq lbl_802E9104
    b lbl_802E9110
lbl_802E9104:
    addis r30, r4, 0x1
    addi r30, r30, 0x433c
    b lbl_802E9118
lbl_802E9110:
    addis r30, r4, 0x1
    addi r30, r30, 0x4334
lbl_802E9118:
    mr r3, r31
    li r4, 0x0
    bl fn_80305680
    mr r3, r31
    bl fn_803055E8
    li r0, 0x0
    stb r0, 0x2e1c(r31)
    lwz r3, 0x2e24(r31)
    cmpwi r3, 0x0
    bne lbl_802E914C
    lwz r0, 0x2e20(r31)
    stw r0, 0x0(r30)
    b lbl_802E9154
lbl_802E914C:
    lwz r0, 0x2e20(r31)
    stw r0, 0x2e20(r3)
lbl_802E9154:
    lwz r3, 0x2e20(r31)
    cmpwi r3, 0x0
    bne lbl_802E916C
    lwz r0, 0x2e24(r31)
    stw r0, 0x4(r30)
    b lbl_802E9174
lbl_802E916C:
    lwz r0, 0x2e24(r31)
    stw r0, 0x2e24(r3)
lbl_802E9174:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x2e20(r31)
    stw r3, 0x2e24(r31)
    stb r0, 0x2e1c(r31)
lbl_802E9188:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E91A4
asm void fn_802E91A4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_804623D0@ha
    lwz r3, lbl_804623D0@l(r31)
    cmpwi r3, 0x0
    beq lbl_802E91F4
    addis r3, r3, 0x1
    li r4, 0x1
    li r5, 0x0
    addi r3, r3, 0x4680
    bl OSSendMessage
    lwz r3, lbl_804623D0@l(r31)
    addis r3, r3, 0x1
    lwz r12, 0x4348(r3)
    cmpwi r12, 0x0
    beq lbl_802E91F4
    mtctr r12
    bctrl
lbl_802E91F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E9208
asm s32 fn_802E9208(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r30, 0x0
    lis r31, lbl_804623D0@ha
    stw r30, 0x8(r1)
lbl_802E9228:
    lwz r3, lbl_804623D0@l(r31)
    addi r4, r1, 0x8
    li r5, 0x1
    addis r3, r3, 0x1
    addi r3, r3, 0x4680
    bl OSReceiveMessage
    lwz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_802E943C
    bl fn_803053D4
    bl HBMSYNRunAudioFrame
    bl fn_80302CF8
    lwz r3, lbl_804623D0@l(r31)
    cmpwi r3, 0x0
    beq lbl_802E9228
    addis r3, r3, 0x1
    lwz r27, 0x4334(r3)
    b lbl_802E9344
lbl_802E9270:
    lbz r0, 0x2e1c(r27)
    lwz r28, 0x2e20(r27)
    cmpwi r0, 0x0
    beq lbl_802E9340
    mr r3, r27
    bl fn_803057B8
    cmpwi r3, 0x0
    bne lbl_802E9340
    lwz r0, 0x418(r27)
    cmpwi r0, 0x0
    bne lbl_802E9340
    lwz r0, 0x2e28(r27)
    cmpwi r0, 0x17
    beq lbl_802E92C4
    bge lbl_802E92B8
    cmpwi r0, 0x4
    beq lbl_802E92C4
    b lbl_802E92D4
lbl_802E92B8:
    cmpwi r0, 0x19
    beq lbl_802E92C4
    b lbl_802E92D4
lbl_802E92C4:
    lwz r3, lbl_804623D0@l(r31)
    addis r29, r3, 0x1
    addi r29, r29, 0x433c
    b lbl_802E92E0
lbl_802E92D4:
    lwz r3, lbl_804623D0@l(r31)
    addis r29, r3, 0x1
    addi r29, r29, 0x4334
lbl_802E92E0:
    mr r3, r27
    li r4, 0x0
    bl fn_80305680
    mr r3, r27
    bl fn_803055E8
    stb r30, 0x2e1c(r27)
    lwz r3, 0x2e24(r27)
    cmpwi r3, 0x0
    bne lbl_802E9310
    lwz r0, 0x2e20(r27)
    stw r0, 0x0(r29)
    b lbl_802E9318
lbl_802E9310:
    lwz r0, 0x2e20(r27)
    stw r0, 0x2e20(r3)
lbl_802E9318:
    lwz r3, 0x2e20(r27)
    cmpwi r3, 0x0
    bne lbl_802E9330
    lwz r0, 0x2e24(r27)
    stw r0, 0x4(r29)
    b lbl_802E9338
lbl_802E9330:
    lwz r0, 0x2e24(r27)
    stw r0, 0x2e24(r3)
lbl_802E9338:
    stw r30, 0x2e20(r27)
    stw r30, 0x2e24(r27)
lbl_802E9340:
    mr r27, r28
lbl_802E9344:
    cmpwi r27, 0x0
    bne lbl_802E9270
    lwz r3, lbl_804623D0@l(r31)
    addis r3, r3, 0x1
    lwz r29, 0x433c(r3)
    b lbl_802E9430
lbl_802E935C:
    lbz r0, 0x2e1c(r29)
    lwz r28, 0x2e20(r29)
    cmpwi r0, 0x0
    beq lbl_802E942C
    mr r3, r29
    bl fn_803057B8
    cmpwi r3, 0x0
    bne lbl_802E942C
    lwz r0, 0x418(r29)
    cmpwi r0, 0x0
    bne lbl_802E942C
    lwz r0, 0x2e28(r29)
    cmpwi r0, 0x17
    beq lbl_802E93B0
    bge lbl_802E93A4
    cmpwi r0, 0x4
    beq lbl_802E93B0
    b lbl_802E93C0
lbl_802E93A4:
    cmpwi r0, 0x19
    beq lbl_802E93B0
    b lbl_802E93C0
lbl_802E93B0:
    lwz r3, lbl_804623D0@l(r31)
    addis r27, r3, 0x1
    addi r27, r27, 0x433c
    b lbl_802E93CC
lbl_802E93C0:
    lwz r3, lbl_804623D0@l(r31)
    addis r27, r3, 0x1
    addi r27, r27, 0x4334
lbl_802E93CC:
    mr r3, r29
    li r4, 0x0
    bl fn_80305680
    mr r3, r29
    bl fn_803055E8
    stb r30, 0x2e1c(r29)
    lwz r3, 0x2e24(r29)
    cmpwi r3, 0x0
    bne lbl_802E93FC
    lwz r0, 0x2e20(r29)
    stw r0, 0x0(r27)
    b lbl_802E9404
lbl_802E93FC:
    lwz r0, 0x2e20(r29)
    stw r0, 0x2e20(r3)
lbl_802E9404:
    lwz r3, 0x2e20(r29)
    cmpwi r3, 0x0
    bne lbl_802E941C
    lwz r0, 0x2e24(r29)
    stw r0, 0x4(r27)
    b lbl_802E9424
lbl_802E941C:
    lwz r0, 0x2e24(r29)
    stw r0, 0x2e24(r3)
lbl_802E9424:
    stw r30, 0x2e20(r29)
    stw r30, 0x2e24(r29)
lbl_802E942C:
    mr r29, r28
lbl_802E9430:
    cmpwi r29, 0x0
    bne lbl_802E935C
    b lbl_802E9228
lbl_802E943C:
    cmplwi r0, 0x8
    bne lbl_802E9228
    addi r11, r1, 0x30
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802E9460
asm void fn_802E9460(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_804623D0@ha
    stw r0, 0x34(r1)
    slwi r0, r3, 2
    addi r5, r1, 0x8
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r6, lbl_804623D0@l(r4)
    lis r4, lbl_8037B858@ha
    addi r4, r4, lbl_8037B858@l
    addis r3, r6, 0x1
    lwzx r4, r4, r0
    addi r3, r3, 0x434c
    bl fn_8029B248
    cmpwi r3, 0x0
    beq lbl_802E94BC
    addi r3, r1, 0x8
    bl fn_8029B968
    mr r31, r3
    b lbl_802E94C0
lbl_802E94BC:
    li r31, 0x0
lbl_802E94C0:
    cmpwi r31, 0x0
    beq lbl_802E9588
    mr r3, r29
    bl fn_802E8FE8
    lis r4, lbl_804623D0@ha
    mr r30, r3
    lwz r5, lbl_804623D0@l(r4)
    mr r4, r31
    li r7, 0x0
    addis r6, r5, 0x1
    lwz r5, 0x46b4(r6)
    lwz r6, 0x46b8(r6)
    bl fn_80305558
    mr r3, r30
    li r4, 0x1
    bl fn_80305680
    cmpwi r29, 0x17
    stw r29, 0x2e28(r30)
    beq lbl_802E9528
    bge lbl_802E951C
    cmpwi r29, 0x4
    beq lbl_802E9528
    b lbl_802E953C
lbl_802E951C:
    cmpwi r29, 0x19
    beq lbl_802E9528
    b lbl_802E953C
lbl_802E9528:
    lis r3, lbl_804623D0@ha
    lwz r3, lbl_804623D0@l(r3)
    addis r4, r3, 0x1
    addi r4, r4, 0x433c
    b lbl_802E954C
lbl_802E953C:
    lis r3, lbl_804623D0@ha
    lwz r3, lbl_804623D0@l(r3)
    addis r4, r3, 0x1
    addi r4, r4, 0x4334
lbl_802E954C:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    bne lbl_802E9570
    stw r30, 0x0(r4)
    li r0, 0x0
    stw r30, 0x4(r4)
    stw r0, 0x2e20(r30)
    stw r0, 0x2e24(r30)
    b lbl_802E9588
lbl_802E9570:
    stw r30, 0x2e20(r3)
    li r0, 0x0
    lwz r3, 0x4(r4)
    stw r3, 0x2e24(r30)
    stw r0, 0x2e20(r30)
    stw r30, 0x4(r4)
lbl_802E9588:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802E95A4
asm void fn_802E95A4(s32 arg0, s8 *arg1, u32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x2
    stw r0, 0x34(r1)
    subi r0, r6, 0x7900
    cmplw r5, r0
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    blt lbl_802E977C
    bl fn_8029AD3C
    cmpwi r3, 0x0
    bne lbl_802E95F0
    li r3, 0x0
    bl AIInit
    bl AXInit
lbl_802E95F0:
    bl fn_80302048
    bl HBMSYNInit
    bl fn_803053AC
    addis r4, r30, 0x1
    li r6, 0x0
    addi r5, r30, 0x5c58
    stb r6, 0x2e1c(r30)
    addi r0, r4, 0x4700
    mr r3, r29
    stw r6, 0x2e20(r30)
    stw r6, 0x2e24(r30)
    stb r6, 0x5c48(r30)
    stw r6, 0x5c4c(r30)
    stw r6, 0x5c50(r30)
    stb r6, 0x2e1c(r5)
    stw r6, 0x2e20(r5)
    stw r6, 0x2e24(r5)
    stb r6, -0x4760(r4)
    stw r6, -0x475c(r4)
    stw r6, -0x4758(r4)
    stb r6, -0x1934(r4)
    stw r6, -0x1930(r4)
    stw r6, -0x192c(r4)
    stb r6, 0x14f8(r4)
    stw r6, 0x14fc(r4)
    stw r6, 0x1500(r4)
    stb r6, 0x4324(r4)
    stw r6, 0x4328(r4)
    stw r6, 0x432c(r4)
    stw r6, 0x46b4(r4)
    stw r6, 0x46b8(r4)
    stw r0, 0x46b0(r4)
    stw r6, 0x4334(r4)
    stw r6, 0x4338(r4)
    stw r6, 0x433c(r4)
    stw r6, 0x4340(r4)
    stw r6, 0x4348(r4)
    addi r4, r4, 0x434c
    bl ARCInitHandle
    cmpwi r3, 0x0
    beq lbl_802E977C
    addis r3, r30, 0x1
    lis r4, lbl_80341A58@ha
    addi r4, r4, lbl_80341A58@l
    addi r5, r1, 0x14
    addi r3, r3, 0x434c
    bl fn_8029B248
    cmpwi r3, 0x0
    beq lbl_802E977C
    addi r3, r1, 0x14
    bl fn_8029B968
    addis r5, r30, 0x1
    lis r4, lbl_80341A6C@ha
    stw r3, 0x46b4(r5)
    mr r3, r5
    addi r4, r4, lbl_80341A6C@l
    addi r5, r1, 0x8
    addi r3, r3, 0x434c
    bl fn_8029B248
    cmpwi r3, 0x0
    beq lbl_802E977C
    addi r3, r1, 0x8
    bl fn_8029B968
    addis r4, r30, 0x1
    li r5, 0x4
    stw r3, 0x46b8(r4)
    mr r3, r4
    addi r3, r3, 0x4680
    addi r4, r4, 0x46a0
    bl OSInitMessageQueue
    addis r3, r30, 0x1
    subis r7, r31, 0x1
    lwz r0, 0x46b0(r3)
    subi r6, r7, 0x4700
    lis r4, fn_802E9208@ha
    li r5, 0x0
    addi r4, r4, fn_802E9208@l
    add r6, r0, r6
    li r8, 0x4
    li r9, 0x0
    addi r3, r3, 0x4368
    subi r7, r7, 0x4700
    bl fn_8031CDF0
    cmpwi r3, 0x0
    beq lbl_802E977C
    lis r4, lbl_804623D0@ha
    addis r3, r30, 0x1
    stw r30, lbl_804623D0@l(r4)
    addi r3, r3, 0x4368
    bl fn_8031D460
    bl OSDisableInterrupts
    lis r4, fn_802E91A4@ha
    mr r31, r3
    addi r3, r4, fn_802E91A4@l
    bl AXRegisterCallback
    addis r4, r30, 0x1
    stw r3, 0x4348(r4)
    mr r3, r31
    bl OSRestoreInterrupts
lbl_802E977C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802E979C
asm void fn_802E979C(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_804623D0@ha
    lwz r0, lbl_804623D0@l(r31)
    cmpwi r0, 0x0
    beq lbl_802E9964
    li r27, 0x0
    li r28, 0x0
    li r30, 0x0
lbl_802E97CC:
    lwz r3, lbl_804623D0@l(r31)
    add r26, r3, r28
    lbz r0, 0x2e1c(r26)
    cmpwi r0, 0x0
    beq lbl_802E987C
    lwz r0, 0x2e28(r26)
    cmpwi r0, 0x17
    beq lbl_802E9808
    bge lbl_802E97FC
    cmpwi r0, 0x4
    beq lbl_802E9808
    b lbl_802E9814
lbl_802E97FC:
    cmpwi r0, 0x19
    beq lbl_802E9808
    b lbl_802E9814
lbl_802E9808:
    addis r29, r3, 0x1
    addi r29, r29, 0x433c
    b lbl_802E981C
lbl_802E9814:
    addis r29, r3, 0x1
    addi r29, r29, 0x4334
lbl_802E981C:
    mr r3, r26
    li r4, 0x0
    bl fn_80305680
    mr r3, r26
    bl fn_803055E8
    stb r30, 0x2e1c(r26)
    lwz r3, 0x2e24(r26)
    cmpwi r3, 0x0
    bne lbl_802E984C
    lwz r0, 0x2e20(r26)
    stw r0, 0x0(r29)
    b lbl_802E9854
lbl_802E984C:
    lwz r0, 0x2e20(r26)
    stw r0, 0x2e20(r3)
lbl_802E9854:
    lwz r3, 0x2e20(r26)
    cmpwi r3, 0x0
    bne lbl_802E986C
    lwz r0, 0x2e24(r26)
    stw r0, 0x4(r29)
    b lbl_802E9874
lbl_802E986C:
    lwz r0, 0x2e24(r26)
    stw r0, 0x2e24(r3)
lbl_802E9874:
    stw r30, 0x2e20(r26)
    stw r30, 0x2e24(r26)
lbl_802E987C:
    addi r27, r27, 0x1
    addi r28, r28, 0x2e2c
    cmpwi r27, 0x4
    blt lbl_802E97CC
    li r26, 0x0
    li r28, 0x0
    li r31, 0x0
    lis r30, lbl_804623D0@ha
lbl_802E989C:
    lwz r4, lbl_804623D0@l(r30)
    addis r0, r4, 0x1
    add r3, r0, r28
    lbz r0, -0x1934(r3)
    subi r27, r3, 0x4750
    cmpwi r0, 0x0
    beq lbl_802E9954
    lwz r0, 0x2e28(r27)
    cmpwi r0, 0x17
    beq lbl_802E98E0
    bge lbl_802E98D4
    cmpwi r0, 0x4
    beq lbl_802E98E0
    b lbl_802E98EC
lbl_802E98D4:
    cmpwi r0, 0x19
    beq lbl_802E98E0
    b lbl_802E98EC
lbl_802E98E0:
    addis r29, r4, 0x1
    addi r29, r29, 0x433c
    b lbl_802E98F4
lbl_802E98EC:
    addis r29, r4, 0x1
    addi r29, r29, 0x4334
lbl_802E98F4:
    mr r3, r27
    li r4, 0x0
    bl fn_80305680
    mr r3, r27
    bl fn_803055E8
    stb r31, 0x2e1c(r27)
    lwz r3, 0x2e24(r27)
    cmpwi r3, 0x0
    bne lbl_802E9924
    lwz r0, 0x2e20(r27)
    stw r0, 0x0(r29)
    b lbl_802E992C
lbl_802E9924:
    lwz r0, 0x2e20(r27)
    stw r0, 0x2e20(r3)
lbl_802E992C:
    lwz r3, 0x2e20(r27)
    cmpwi r3, 0x0
    bne lbl_802E9944
    lwz r0, 0x2e24(r27)
    stw r0, 0x4(r29)
    b lbl_802E994C
lbl_802E9944:
    lwz r0, 0x2e24(r27)
    stw r0, 0x2e24(r3)
lbl_802E994C:
    stw r31, 0x2e20(r27)
    stw r31, 0x2e24(r27)
lbl_802E9954:
    addi r26, r26, 0x1
    addi r28, r28, 0x2e2c
    cmpwi r26, 0x3
    blt lbl_802E989C
lbl_802E9964:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E997C
asm void fn_802E997C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_804623D0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80341A58@ha
    addi r31, r31, lbl_80341A58@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, lbl_804623D0@l(r3)
    cmpwi r0, 0x0
    beq lbl_802E9A7C
    lfs f0, 0x28(r31)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_802E99C8
    li r29, -0x388
    b lbl_802E99EC
lbl_802E99C8:
    bl log
    frsp f2, f1
    lfs f1, 0x30(r31)
    lfs f0, 0x2c(r31)
    fmuls f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r29, 0xc(r1)
lbl_802E99EC:
    cmpwi r29, 0x3c
    ble lbl_802E99F8
    li r29, 0x3c
lbl_802E99F8:
    cmpwi r29, -0x388
    bge lbl_802E9A04
    li r29, -0x388
lbl_802E9A04:
    li r28, 0x0
    li r30, 0x0
    lis r31, lbl_804623D0@ha
lbl_802E9A10:
    lwz r0, lbl_804623D0@l(r31)
    add r3, r0, r30
    lbz r0, 0x2e1c(r3)
    cmpwi r0, 0x0
    beq lbl_802E9A2C
    mr r4, r29
    bl fn_803057C0
lbl_802E9A2C:
    addi r28, r28, 0x1
    addi r30, r30, 0x2e2c
    cmpwi r28, 0x4
    blt lbl_802E9A10
    li r28, 0x0
    li r30, 0x0
    lis r31, lbl_804623D0@ha
lbl_802E9A48:
    lwz r3, lbl_804623D0@l(r31)
    addis r0, r3, 0x1
    add r3, r0, r30
    subi r3, r3, 0x4750
    lbz r0, 0x2e1c(r3)
    cmpwi r0, 0x0
    beq lbl_802E9A6C
    mr r4, r29
    bl fn_803057C0
lbl_802E9A6C:
    addi r28, r28, 0x1
    addi r30, r30, 0x2e2c
    cmpwi r28, 0x3
    blt lbl_802E9A48
lbl_802E9A7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E9AA0
asm s32 fn_802E9AA0() {
    nofralloc
    lis r5, lbl_8037B914@ha
    mr r4, r3
    lwz r3, lbl_8037B914@l(r5)
    b fn_8030CAF0
}

// asm_to_cpp: fn_802E9AB0
asm void fn_802E9AB0(s32 **arg0) {
    nofralloc
    lis r5, lbl_8037B914@ha
    mr r4, r3
    lwz r3, lbl_8037B914@l(r5)
    b fn_8030CB00
}

// asm_to_cpp: fn_802E9AC0
asm void fn_802E9AC0(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x3c(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    beq lbl_802E9AEC
    li r4, 0x0
    b lbl_802E9B00
lbl_802E9AEC:
    lwz r0, 0x10(r3)
    li r4, 0x2
    cmpwi r0, 0x0
    beq lbl_802E9B00
    li r4, 0x1
lbl_802E9B00:
    cmpwi r4, 0x1
    bne lbl_802E9B38
    lwz r3, 0x10(r3)
    li r5, 0x0
    lwz r4, 0x2c(r31)
    bl MEMCreateExpHeapEx
    lis r30, lbl_804623D8@ha
    mr r4, r3
    addi r3, r30, lbl_804623D8@l
    li r5, 0x20
    bl fn_8030CB10
    addi r0, r30, lbl_804623D8@l
    lis r3, lbl_8037B914@ha
    stw r0, lbl_8037B914@l(r3)
lbl_802E9B38:
    lwz r5, 0x3c(r31)
    cmpwi r5, 0x0
    beq lbl_802E9B4C
    li r3, 0x0
    b lbl_802E9B60
lbl_802E9B4C:
    lwz r0, 0x10(r31)
    li r3, 0x2
    cmpwi r0, 0x0
    beq lbl_802E9B60
    li r3, 0x1
lbl_802E9B60:
    cmpwi r3, 0x1
    beq lbl_802E9B9C
    bge lbl_802E9B78
    cmpwi r3, 0x0
    bge lbl_802E9B84
    b lbl_802E9BC0
lbl_802E9B78:
    cmpwi r3, 0x3
    bge lbl_802E9BC0
    b lbl_802E9BB0
lbl_802E9B84:
    lwz r0, 0x3c(r31)
    lis r4, lbl_80462438@ha
    lis r3, lbl_8037B914@ha
    stw r5, lbl_80462438@l(r4)
    stw r0, lbl_8037B914@l(r3)
    b lbl_802E9BC0
lbl_802E9B9C:
    lis r4, lbl_8037B914@ha
    lis r3, lbl_80462438@ha
    lwz r0, lbl_8037B914@l(r4)
    stw r0, lbl_80462438@l(r3)
    b lbl_802E9BC0
lbl_802E9BB0:
    lis r4, lbl_80462438@ha
    lis r3, lbl_8037B914@ha
    lwz r0, lbl_80462438@l(r4)
    stw r0, lbl_8037B914@l(r3)
lbl_802E9BC0:
    mr r3, r31
    bl fn_802EA09C
    bl fn_802EA0E8
    bl fn_802EA0F4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E9BE8
asm void fn_802E9BE8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8037B910@ha
    stw r0, 0x14(r1)
    lwz r3, lbl_8037B910@l(r3)
    bl OSRegisterVersion
    bl fn_802EA0E8
    bl fn_802EAB30
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E9C18
asm void fn_802E9C18(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802EA0E8
    mr r4, r31
    bl fn_802EB568
    bl fn_802EA0E8
    bl fn_802F1A84
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802E9D6C
asm void fn_802E9D6C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x44(r1)
    bl GXSetCullMode
    addi r3, r1, 0x8
    bl PSMTXIdentity
    addi r3, r1, 0x8
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    li r3, 0x0
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x2
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x7
    li r4, 0x0
    li r5, 0x1
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x5
    bl GXSetBlendMode
    li r3, 0x0
    bl GXSetAlphaUpdate
    li r3, 0x0
    li r4, 0x7
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x0
    bl GXSetDispCopyGamma
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_802E9F24
asm s8 *fn_802E9F24(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    stw r4, 0x4(r3)
    stw r31, 0x8(r3)
    stw r31, 0x238(r3)
    stw r31, 0x250(r3)
    addi r3, r3, 0x258
    bl fn_802F3D6C
    li r4, 0x1
    li r0, -0x1
    li r5, 0x1e
    li r3, 0x2
    stw r31, 0x454(r28)
    li r29, 0x0
    li r30, 0x0
    stw r5, 0x458(r28)
    stw r31, 0x45c(r28)
    stb r31, 0x461(r28)
    stb r31, 0x462(r28)
    stb r31, 0x463(r28)
    stb r4, 0x460(r28)
    stw r4, 0x618(r28)
    stw r3, 0x14(r28)
    stw r0, 0xb8(r28)
    stw r0, 0x18(r28)
    stw r31, 0x1c(r28)
    stw r31, 0x0(r28)
    stw r31, 0x68(r28)
    stb r31, 0x8e(r28)
    stw r31, 0x6c(r28)
    stw r31, 0x70(r28)
    stw r31, 0x74(r28)
    stw r31, 0x78(r28)
    stb r31, 0x8f(r28)
    stb r31, 0x90(r28)
    stb r31, 0x97(r28)
lbl_802E9FD0:
    add r3, r28, r30
    addi r3, r3, 0x468
    bl OSCreateAlarm
    add r3, r28, r30
    addi r3, r3, 0x528
    bl OSCreateAlarm
    addi r29, r29, 0x1
    addi r30, r30, 0x30
    cmpwi r29, 0x4
    blt lbl_802E9FD0
    addi r3, r28, 0x5e8
    bl OSCreateAlarm
    lis r3, lbl_804623F0@ha
    addi r3, r3, lbl_804623F0@l
    bl OSInitMutex
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802EA030
asm s32 **fn_802EA030(s32 **arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802EA080
    addic. r3, r3, 0x24
    beq lbl_802EA064
    li r4, 0x0
    bl fn_802FF21C
lbl_802EA064:
    mr r3, r30
    li r4, 0x0
    bl fn_802F96E0
    cmpwi r31, 0x0
    ble lbl_802EA080
    mr r3, r30
    bl dtor_80136CFC
lbl_802EA080:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802EA09C
asm void fn_802EA09C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x7a0
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA0D4
    beq lbl_802EA0CC
    mr r4, r31
    bl fn_802E9F24
lbl_802EA0CC:
    lis r4, lbl_804623E8@ha
    stw r3, lbl_804623E8@l(r4)
lbl_802EA0D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802EA0E8
asm s8 *fn_802EA0E8(void) {
    nofralloc
    lis r3, lbl_804623E8@ha
    lwz r3, lbl_804623E8@l(r3)
    blr
}

// asm_to_cpp: fn_802EA0F4
asm void fn_802EA0F4() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    addi r11, r1, 0xc0
    bl _savegpr_21
    li r0, 0x0
    lis r27, lbl_80341A90@ha
    lis r28, lbl_8037B918@ha
    stb r0, 0x94(r3)
    mr r31, r3
    addi r27, r27, lbl_80341A90@l
    stb r0, 0x95(r3)
    addi r28, r28, lbl_8037B918@l
    stb r0, 0x96(r3)
    bl fn_802EA954
    mr r3, r31
    bl fn_802EAAAC
    li r3, 0xb0
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA15C
    beq lbl_802EA158
    bl fn_802F2C8C
lbl_802EA158:
    stw r3, 0x24c(r31)
lbl_802EA15C:
    lwz r4, 0x4(r31)
    addi r5, r28, 0xb30
    lwz r3, 0x24c(r31)
    lwz r4, 0x0(r4)
    bl Attach__Q36nw4hbm3lyt19ArcResourceAccessorFPvPCc
    lwz r3, 0x4(r31)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802EA1F8
    mr r21, r31
    addi r22, r28, 0x40
    li r23, 0x0
lbl_802EA18C:
    li r3, 0x24
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA1A8
    beq lbl_802EA1A4
    bl fn_802F42F4
lbl_802EA1A4:
    stw r3, 0x23c(r21)
lbl_802EA1A8:
    lwz r3, 0x24c(r31)
    li r4, 0x0
    lwz r5, 0x0(r22)
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x23c(r21)
    lwz r5, 0x24c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r23, r23, 0x1
    addi r22, r22, 0x4
    cmpwi r23, 0x4
    addi r21, r21, 0x4
    blt lbl_802EA18C
lbl_802EA1F8:
    li r3, 0x24
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA214
    beq lbl_802EA210
    bl fn_802F42F4
lbl_802EA210:
    stw r3, 0x238(r31)
lbl_802EA214:
    lwz r3, 0x24c(r31)
    li r4, 0x0
    lwz r5, 0xb0(r31)
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x238(r31)
    lwz r5, 0x24c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x238(r31)
    lwz r3, 0x10(r3)
    lwz r24, 0x14(r3)
    addi r21, r3, 0x14
    b lbl_802EA294
lbl_802EA264:
    addi r3, r24, 0xb0
    addi r4, r28, 0xb38
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802EA290
    lfs f0, 0x2dc(r27)
    stfs f0, 0x40(r24)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x44(r24)
    b lbl_802EA29C
lbl_802EA290:
    lwz r24, 0x0(r24)
lbl_802EA294:
    cmplw r24, r21
    bne lbl_802EA264
lbl_802EA29C:
    lfd f31, 0x2e8(r27)
    mr r26, r31
    addi r25, r27, 0x8
    addi r30, r28, 0x1ac
    addi r29, r28, 0x150
    li r24, 0x0
    lis r21, 0x4330
    b lbl_802EA3E4
lbl_802EA2BC:
    lwz r4, 0xb4(r31)
    addi r3, r1, 0x48
    bl strcpy
    lwz r0, 0x4(r25)
    addi r3, r1, 0x48
    slwi r0, r0, 2
    lwzx r4, r30, r0
    bl strcat
    lwz r3, 0x24c(r31)
    addi r5, r1, 0x48
    li r4, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r22, r3
    li r3, 0x28
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA31C
    beq lbl_802EA318
    bl __ct__Q210homebutton18GroupAnmControllerFv
lbl_802EA318:
    stw r3, 0x2c0(r26)
lbl_802EA31C:
    lwz r3, 0x238(r31)
    mr r4, r22
    lwz r5, 0x24c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r4, 0x2c0(r26)
    lwz r0, 0x0(r25)
    stw r3, 0x24(r4)
    slwi r0, r0, 2
    lwz r3, 0x238(r31)
    lwzx r4, r29, r0
    lwz r3, 0x14(r3)
    bl fn_802F40D8
    lwz r4, 0x2c0(r26)
    stw r3, 0x20(r4)
    lwz r3, 0x2c0(r26)
    lwz r3, 0x20(r3)
    lwz r23, 0x10(r3)
    addi r22, r3, 0x10
    b lbl_802EA398
lbl_802EA374:
    lwz r3, 0x8(r23)
    li r5, 0x0
    lwz r4, 0x2c0(r26)
    lwz r12, 0x0(r3)
    lwz r4, 0x24(r4)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r23, 0x0(r23)
lbl_802EA398:
    cmplw r23, r22
    bne lbl_802EA374
    lwz r3, 0x2c0(r26)
    lwz r3, 0x24(r3)
    bl fn_802F2180
    clrlwi r0, r3, 16
    lwz r5, 0x4(r31)
    stw r0, 0x8c(r1)
    li r4, 0x0
    lwz r3, 0x2c0(r26)
    stw r21, 0x88(r1)
    lfs f2, 0x2e0(r27)
    lfd f0, 0x88(r1)
    lfs f3, 0x30(r5)
    fsubs f1, f0, f31
    bl fn_802E62C8
    addi r25, r25, 0x8
    addi r26, r26, 0x4
    addi r24, r24, 0x1
lbl_802EA3E4:
    lwz r0, 0x10(r31)
    cmpw r24, r0
    blt lbl_802EA2BC
    lfd f31, 0x2e8(r27)
    mr r25, r31
    addi r26, r27, 0x68
    addi r29, r28, 0x610
    addi r30, r28, 0x838
    li r24, 0x0
    lis r21, 0x4330
lbl_802EA40C:
    lwz r4, 0xb4(r31)
    addi r3, r1, 0x48
    bl strcpy
    lwz r0, 0x4(r26)
    addi r3, r1, 0x48
    slwi r0, r0, 2
    lwzx r4, r29, r0
    bl strcat
    lwz r3, 0x24c(r31)
    addi r5, r1, 0x48
    li r4, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r22, r3
    li r3, 0x28
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA46C
    beq lbl_802EA468
    bl __ct__Q210homebutton18GroupAnmControllerFv
lbl_802EA468:
    stw r3, 0x2f0(r25)
lbl_802EA46C:
    lwz r3, 0x238(r31)
    mr r4, r22
    lwz r5, 0x24c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r4, 0x2f0(r25)
    lwz r0, 0x0(r26)
    stw r3, 0x24(r4)
    slwi r0, r0, 2
    lwz r3, 0x238(r31)
    lwzx r4, r30, r0
    lwz r3, 0x14(r3)
    bl fn_802F40D8
    lwz r4, 0x2f0(r25)
    stw r3, 0x20(r4)
    lwz r3, 0x2f0(r25)
    lwz r3, 0x20(r3)
    lwz r22, 0x10(r3)
    addi r23, r3, 0x10
    b lbl_802EA4E8
lbl_802EA4C4:
    lwz r3, 0x8(r22)
    li r5, 0x0
    lwz r4, 0x2f0(r25)
    lwz r12, 0x0(r3)
    lwz r4, 0x24(r4)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r22, 0x0(r22)
lbl_802EA4E8:
    cmplw r22, r23
    bne lbl_802EA4C4
    lwz r3, 0x2f0(r25)
    lwz r3, 0x24(r3)
    bl fn_802F2180
    clrlwi r0, r3, 16
    lwz r5, 0x4(r31)
    stw r0, 0x8c(r1)
    li r4, 0x0
    lwz r3, 0x2f0(r25)
    stw r21, 0x88(r1)
    lfs f2, 0x2e0(r27)
    lfd f0, 0x88(r1)
    lfs f3, 0x30(r5)
    fsubs f1, f0, f31
    bl fn_802E62C8
    addi r24, r24, 0x1
    addi r25, r25, 0x4
    cmpwi r24, 0x4a
    addi r26, r26, 0x8
    blt lbl_802EA40C
    lfd f31, 0x2e8(r27)
    mr r30, r31
    addi r29, r28, 0x2f0
    addi r26, r28, 0x400
    li r25, 0x0
    lis r24, 0x4330
lbl_802EA554:
    lwz r4, 0xb4(r31)
    addi r3, r1, 0x48
    bl strcpy
    lwz r4, 0x0(r29)
    addi r3, r1, 0x48
    bl strcat
    lwz r3, 0x24c(r31)
    addi r5, r1, 0x48
    li r4, 0x0
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r21, r3
    li r3, 0x28
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA5AC
    beq lbl_802EA5A8
    bl __ct__Q210homebutton18GroupAnmControllerFv
lbl_802EA5A8:
    stw r3, 0x418(r30)
lbl_802EA5AC:
    lwz r3, 0x238(r31)
    mr r4, r21
    lwz r5, 0x24c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r4, 0x418(r30)
    stw r3, 0x24(r4)
    lwz r3, 0x238(r31)
    lwz r4, 0x0(r26)
    lwz r3, 0x14(r3)
    bl fn_802F40D8
    lwz r4, 0x418(r30)
    stw r3, 0x20(r4)
    lwz r3, 0x418(r30)
    lwz r3, 0x20(r3)
    lwz r22, 0x10(r3)
    addi r23, r3, 0x10
    b lbl_802EA620
lbl_802EA5FC:
    lwz r3, 0x8(r22)
    li r5, 0x0
    lwz r4, 0x418(r30)
    lwz r12, 0x0(r3)
    lwz r4, 0x24(r4)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r22, 0x0(r22)
lbl_802EA620:
    cmplw r22, r23
    bne lbl_802EA5FC
    lwz r3, 0x418(r30)
    lwz r3, 0x24(r3)
    bl fn_802F2180
    clrlwi r0, r3, 16
    lwz r5, 0x4(r31)
    stw r0, 0x8c(r1)
    li r4, 0x0
    lwz r3, 0x418(r30)
    stw r24, 0x88(r1)
    lfs f2, 0x2e0(r27)
    lfd f0, 0x88(r1)
    lfs f3, 0x30(r5)
    fsubs f1, f0, f31
    bl fn_802E62C8
    addi r25, r25, 0x1
    addi r30, r30, 0x4
    cmpwi r25, 0xf
    addi r26, r26, 0x4
    addi r29, r29, 0x4
    blt lbl_802EA554
    li r3, 0xc
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA6A0
    beq lbl_802EA69C
    lis r4, lbl_8037C540@ha
    addi r4, r4, lbl_8037C540@l
    stw r4, 0x0(r3)
    stw r31, 0x8(r3)
lbl_802EA69C:
    stw r3, 0x254(r31)
lbl_802EA6A0:
    li r3, 0x2c
    bl fn_802E9AA0
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_802EA728
    beq lbl_802EA724
    lis r5, lbl_8037B914@ha
    lwz r0, 0x254(r31)
    lis r4, lbl_8037B420@ha
    lwz r5, lbl_8037B914@l(r5)
    addi r4, r4, lbl_8037B420@l
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r5, 0x14(r3)
    beq lbl_802EA6F8
    mr r3, r0
    mr r4, r21
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_802EA6F8:
    addi r3, r21, 0x8
    li r4, 0x8
    bl List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs
    lis r4, lbl_8037B380@ha
    li r0, 0x0
    addi r4, r4, lbl_8037B380@l
    addi r3, r21, 0x18
    stw r4, 0x0(r21)
    li r4, 0x8
    stw r0, 0x24(r21)
    bl List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs
lbl_802EA724:
    stw r21, 0x250(r31)
lbl_802EA728:
    lwz r3, 0x250(r31)
    lwz r4, 0x238(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r3, 0x1f8
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA764
    beq lbl_802EA760
    lwz r4, 0x4(r31)
    lwz r4, 0x4(r4)
    bl fn_802E89B0
lbl_802EA760:
    stw r3, 0x2bc(r31)
lbl_802EA764:
    mr r21, r31
    li r22, 0x0
lbl_802EA76C:
    li r3, 0x48
    bl fn_802E9AA0
    cmpwi r3, 0x0
    beq lbl_802EA790
    beq lbl_802EA78C
    lwz r5, 0x2bc(r31)
    mr r4, r22
    bl fn_802E7EA0
lbl_802EA78C:
    stw r3, 0x2ac(r21)
lbl_802EA790:
    addi r22, r22, 0x1
    addi r21, r21, 0x4
    cmpwi r22, 0x4
    blt lbl_802EA76C
    lwz r3, 0x250(r31)
    addi r4, r31, 0x258
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r31)
    addi r3, r1, 0x18
    lfs f1, 0x2e4(r27)
    lfs f0, 0x34(r4)
    lbz r4, 0x8f(r31)
    fdivs f0, f1, f0
    lbz r0, 0x2a8(r31)
    rlwimi r0, r4, 5, 26, 26
    stfs f1, 0x14(r1)
    stfs f1, 0x2a0(r31)
    stb r0, 0x2a8(r31)
    stfs f0, 0x10(r1)
    stfs f0, 0x29c(r31)
    bl PSMTXIdentity
    lwz r3, 0x18(r1)
    lis r27, lbl_80462450@ha
    lwz r0, 0x1c(r1)
    addi r29, r28, 0x9e4
    addi r27, r27, lbl_80462450@l
    li r28, 0x0
    stw r3, 0x25c(r31)
    li r30, 0x0
    stw r0, 0x260(r31)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r3, 0x264(r31)
    stw r0, 0x268(r31)
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r3, 0x26c(r31)
    stw r0, 0x270(r31)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r3, 0x274(r31)
    stw r0, 0x278(r31)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r3, 0x27c(r31)
    stw r0, 0x280(r31)
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x284(r31)
    stw r0, 0x288(r31)
lbl_802EA864:
    lwz r3, 0x238(r31)
    li r5, 0x1
    lwz r4, 0x0(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    mr r21, r3
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802EA8B0
lbl_802EA89C:
    cmplw r3, r27
    bne lbl_802EA8AC
    li r0, 0x1
    b lbl_802EA8BC
lbl_802EA8AC:
    lwz r3, 0x0(r3)
lbl_802EA8B0:
    cmpwi r3, 0x0
    bne lbl_802EA89C
    li r0, 0x0
lbl_802EA8BC:
    cmpwi r0, 0x0
    beq lbl_802EA8C8
    b lbl_802EA8CC
lbl_802EA8C8:
    li r21, 0x0
lbl_802EA8CC:
    lwz r3, 0x4(r31)
    add r0, r30, r31
    li r5, 0x0
    lwz r3, 0x1c(r3)
    mulli r3, r3, 0x18
    add r3, r3, r0
    lwz r4, 0xbc(r3)
    mr r3, r4
lbl_802EA8EC:
    lhz r0, 0x0(r3)
    cmplwi r0, 0x22
    beq lbl_802EA904
    addi r3, r3, 0x2
    addi r5, r5, 0x1
    b lbl_802EA8EC
lbl_802EA904:
    lwz r12, 0x0(r21)
    clrlwi r6, r5, 16
    mr r3, r21
    li r5, 0x0
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x3
    addi r29, r29, 0x4
    blt lbl_802EA864
    opword 0xE3E100C8
    addi r11, r1, 0xc0
    lfd f31, 0xc0(r1)
    bl _restgpr_21
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: fn_802EA954
asm void fn_802EA954() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r4, 0x4(r3)
    mr r29, r3
    li r28, 0x0
    lwz r31, 0xc(r4)
    lwz r0, 0x28(r4)
    mr r3, r31
    add r30, r31, r0
    b lbl_802EA99C
lbl_802EA988:
    extsb r0, r4
    cmpwi r0, 0x2c
    beq lbl_802EA9A8
    addi r28, r28, 0x1
    addi r3, r3, 0x1
lbl_802EA99C:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    bne lbl_802EA988
lbl_802EA9A8:
    addi r3, r28, 0x1
    bl fn_802E9AA0
    stw r3, 0xb0(r29)
    mr r4, r31
    mr r5, r28
    bl strncpy
    lwz r4, 0xb0(r29)
    add r3, r28, r31
    li r0, 0x0
    li r27, 0x0
    addi r31, r3, 0x1
    stbx r0, r4, r28
    mr r3, r31
    b lbl_802EA9F4
lbl_802EA9E0:
    extsb r0, r4
    cmpwi r0, 0x2c
    beq lbl_802EAA00
    addi r27, r27, 0x1
    addi r3, r3, 0x1
lbl_802EA9F4:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    bne lbl_802EA9E0
lbl_802EAA00:
    addi r3, r27, 0x1
    bl fn_802E9AA0
    stw r3, 0xb4(r29)
    mr r4, r31
    mr r5, r27
    bl strncpy
    lwz r3, 0xb4(r29)
    li r4, 0x0
    mr r5, r29
    add r31, r31, r27
    stbx r4, r3, r27
    li r8, 0x0
    li r9, 0x0
    li r3, 0x1
    b lbl_802EAA6C
lbl_802EAA3C:
    extsb r0, r7
    cmpwi r0, 0x2c
    bne lbl_802EAA68
    lbz r0, 0x1(r6)
    cmpwi r0, 0x31
    bne lbl_802EAA5C
    stw r3, 0xa0(r5)
    b lbl_802EAA60
lbl_802EAA5C:
    stw r4, 0xa0(r5)
lbl_802EAA60:
    addi r5, r5, 0x4
    addi r9, r9, 0x1
lbl_802EAA68:
    addi r8, r8, 0x1
lbl_802EAA6C:
    lbzx r7, r31, r8
    add r6, r31, r8
    extsb. r0, r7
    beq lbl_802EAA84
    cmplw r6, r30
    blt lbl_802EAA3C
lbl_802EAA84:
    slwi r0, r9, 2
    stw r9, 0xc(r29)
    subf r0, r9, r0
    addi r11, r1, 0x20
    stw r0, 0x10(r29)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802EAAAC
asm void fn_802EAAAC(s8 *arg0) {
    nofralloc
    lwz r4, 0x4(r3)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    lwz r11, 0x8(r4)
    li r7, 0x0
    mr r6, r11
    b lbl_802EAB20
lbl_802EAACC:
    cmplwi r0, 0x22
    bne lbl_802EAB18
    cmpwi r10, 0x0
    bne lbl_802EAB14
    mulli r4, r9, 0x18
    addi r5, r8, 0x1
    add r0, r7, r3
    slwi r5, r5, 1
    addi r9, r9, 0x1
    li r10, 0x1
    cmpwi r9, 0xa
    add r5, r11, r5
    add r4, r4, r0
    stw r5, 0xbc(r4)
    bne lbl_802EAB18
    li r9, 0x0
    addi r7, r7, 0x4
    b lbl_802EAB18
lbl_802EAB14:
    li r10, 0x0
lbl_802EAB18:
    addi r6, r6, 0x2
    addi r8, r8, 0x1
lbl_802EAB20:
    lhz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_802EAACC
    blr
}

// asm_to_cpp: fn_802EAB30
asm void fn_802EAB30() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    addi r11, r1, 0x60
    bl _savegpr_26
    lbz r0, 0x94(r3)
    lis r30, lbl_80341A90@ha
    lis r31, lbl_8037B918@ha
    mr r29, r3
    cmpwi r0, 0x0
    addi r30, r30, lbl_80341A90@l
    addi r31, r31, lbl_8037B918@l
    bne lbl_802EAFA8
    li r0, 0x1
    stb r0, 0x94(r3)
    bl fn_802896A4
    li r28, 0x0
    lbz r0, 0x97(r29)
    stb r28, 0x95(r29)
    lis r4, lbl_804623E8@ha
    lfs f2, 0x2f0(r30)
    cmpwi r0, 0x0
    stb r28, 0x96(r29)
    lfs f1, 0x2f4(r30)
    stb r28, 0x9a(r29)
    stb r28, 0x98(r29)
    stw r28, 0x20c(r29)
    lwz r3, lbl_804623E8@l(r4)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x61c(r29)
    lwz r3, lbl_804623E8@l(r4)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x620(r29)
    beq lbl_802EAC2C
    addi r3, r29, 0x634
    bl AXFXReverbHiShutdown
    lwz r3, 0x794(r29)
    lwz r4, 0x798(r29)
    bl AXRegisterAuxACallback
    lwz r3, 0x62c(r29)
    lwz r4, 0x630(r29)
    bl fn_802A219C
    lhz r3, 0x624(r29)
    bl fn_8029D3E0
    lhz r3, 0x626(r29)
    bl fn_8029D3E8
    lhz r3, 0x628(r29)
    bl fn_8029D3F0
    stb r28, 0x97(r29)
lbl_802EAC2C:
    li r0, 0x0
    stw r0, 0x20(r29)
    stw r0, 0x24(r29)
    stw r0, 0x28(r29)
    stw r0, 0x2c(r29)
    stw r0, 0x30(r29)
    stw r0, 0x34(r29)
    stw r0, 0x38(r29)
    stw r0, 0x3c(r29)
    stw r0, 0x40(r29)
    stw r0, 0x44(r29)
    stw r0, 0x48(r29)
    stw r0, 0x4c(r29)
    stw r0, 0x50(r29)
    stw r0, 0x54(r29)
    stw r0, 0x14(r29)
    lwz r3, 0x250(r29)
    stw r0, 0x0(r29)
    stb r0, 0x90(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x250(r29)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addi r27, r31, 0x98
    li r26, 0x0
    b lbl_802EAD00
lbl_802EACAC:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r27)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x250(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_802EAD00:
    lwz r0, 0xc(r29)
    cmpw r26, r0
    blt lbl_802EACAC
    mr r3, r29
    bl fn_802EE980
    lwz r4, 0x238(r29)
    addi r3, r1, 0x20
    bl GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv
    lfs f0, 0x20(r1)
    addi r4, r29, 0x258
    lwz r3, 0x238(r29)
    stfs f0, 0x28c(r29)
    lfs f0, 0x24(r1)
    stfs f0, 0x290(r29)
    lfs f0, 0x28(r1)
    stfs f0, 0x294(r29)
    lfs f0, 0x2c(r1)
    stfs f0, 0x298(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f0, 0x2f8(r30)
    mr r27, r29
    lfs f31, 0x2e0(r30)
    li r26, 0x0
    frsp f30, f0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
lbl_802EAD74:
    lwz r3, 0x23c(r27)
    addi r4, r29, 0x258
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x23c(r27)
    li r5, 0x1
    lwz r4, 0x58(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    stfs f30, 0x2c(r3)
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    addi r27, r27, 0x4
    stfs f30, 0x30(r3)
    stfs f30, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x34(r3)
    blt lbl_802EAD74
    li r28, 0x0
lbl_802EADD8:
    lwz r3, 0x250(r29)
    mr r4, r28
    lfs f1, 0x2fc(r30)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    cmpwi r28, 0x8
    blt lbl_802EADD8
    lfs f31, 0x2e0(r30)
    mr r27, r29
    li r26, 0x0
    li r28, 0x0
lbl_802EAE24:
    stw r28, 0x58(r27)
    lwz r3, 0x2ac(r27)
    bl fn_802E820C
    lwz r3, 0x2ac(r27)
    bl fn_802E81F8
    lwz r3, 0x2ac(r27)
    bl fn_802E8238
    lwz r3, 0x2ac(r27)
    bl fn_802E86FC
    lwz r3, 0x2ac(r27)
    bl fn_802E7F5C
    lwz r3, 0x2ac(r27)
    bl fn_802E8340
    stfs f31, 0x210(r27)
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    stfs f31, 0x220(r27)
    addi r27, r27, 0x4
    blt lbl_802EAE24
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x900(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb40
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x238(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0x998
    addi r28, r4, 0x8
    li r27, 0x2
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
lbl_802EAED8:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r27, r27, 0x1
    cmpwi r27, 0x7
    addi r28, r28, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_802EAED8
    addi r28, r31, 0x9e4
    li r27, 0x0
lbl_802EAF1C:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r27, r27, 0x1
    cmpwi r27, 0x3
    addi r28, r28, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_802EAF1C
    lwz r3, 0x2bc(r29)
    bl fn_802E8B10
    mr r3, r29
    li r4, 0x0
    bl fn_802EB568
    lis r3, lbl_804623E8@ha
    lfs f1, 0x300(r30)
    lwz r4, lbl_804623E8@l(r3)
    li r0, 0x1
    li r3, 0x0
    lwz r4, 0x4(r4)
    lfs f0, 0x30(r4)
    fdivs f0, f1, f0
    stb r0, 0x460(r29)
    stw r3, 0x454(r29)
    stw r3, 0x45c(r29)
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x458(r29)
lbl_802EAFA8:
    opword 0xE3E10078
    lfd f31, 0x70(r1)
    opword 0xE3C10068
    addi r11, r1, 0x60
    lfd f30, 0x60(r1)
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_802EAFD0
asm void fn_802EAFD0(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r31, lbl_80341A90@ha
    mr r29, r3
    addi r31, r31, lbl_80341A90@l
    bl fn_8028CD58
    clrlwi r0, r3, 24
    lis r26, 0x4330
    stw r0, 0xc(r1)
    li r3, 0x7f
    lfd f3, 0x2e8(r31)
    stw r26, 0x8(r1)
    lfs f1, 0x308(r31)
    lfd f2, 0x8(r1)
    lfs f0, 0x304(r31)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x84(r29)
    bl fn_8028CD8C
    lfd f30, 0x310(r31)
    mr r25, r29
    lfs f31, 0x30c(r31)
    li r27, 0x0
lbl_802EB058:
    lwz r0, 0x84(r29)
    stw r26, 0x10(r1)
    xoris r0, r0, 0x8000
    lwz r3, 0x2ac(r25)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    fdivs f1, f0, f31
    bl fn_802E823C
    lwz r3, 0x2ac(r25)
    bl fn_802E8228
    addi r27, r27, 0x1
    addi r25, r25, 0x4
    cmpwi r27, 0x4
    blt lbl_802EB058
    li r30, 0x0
    li r26, 0x1
    li r27, 0x25
    li r28, 0x25
lbl_802EB0A4:
    lwz r0, 0x84(r29)
    cmpw r30, r0
    bge lbl_802EB128
    addi r5, r31, 0x68
    addi r3, r30, 0x15
    li r4, 0x0
    mtctr r27
lbl_802EB0C0:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EB0DC
    lwz r0, 0x4(r5)
    cmpwi r0, 0xa
    bne lbl_802EB0DC
    b lbl_802EB10C
lbl_802EB0DC:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EB0FC
    lwz r0, 0xc(r5)
    cmpwi r0, 0xa
    bne lbl_802EB0FC
    b lbl_802EB10C
lbl_802EB0FC:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EB0C0
    li r4, -0x1
lbl_802EB10C:
    slwi r0, r4, 2
    add r3, r29, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    stw r26, 0x14(r25)
    b lbl_802EB19C
lbl_802EB128:
    addi r5, r31, 0x68
    addi r3, r30, 0x15
    li r4, 0x0
    mtctr r28
lbl_802EB138:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EB154
    lwz r0, 0x4(r5)
    cmpwi r0, 0x9
    bne lbl_802EB154
    b lbl_802EB184
lbl_802EB154:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EB174
    lwz r0, 0xc(r5)
    cmpwi r0, 0x9
    bne lbl_802EB174
    b lbl_802EB184
lbl_802EB174:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EB138
    li r4, -0x1
lbl_802EB184:
    slwi r0, r4, 2
    add r3, r29, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    stw r26, 0x14(r25)
lbl_802EB19C:
    addi r30, r30, 0x1
    cmpwi r30, 0xa
    blt lbl_802EB0A4
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_802EB1D0
asm void fn_802EB1D0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80341A90@ha
    addi r31, r31, lbl_80341A90@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EB210
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802EB210:
    bl fn_8029D3B0
    sth r3, 0x624(r30)
    bl fn_8029D3B8
    sth r3, 0x626(r30)
    bl fn_8029D3C0
    sth r3, 0x628(r30)
    addi r3, r30, 0x62c
    addi r4, r30, 0x630
    bl fn_802A21A8
    addi r3, r30, 0x794
    addi r4, r30, 0x798
    bl AXGetAuxACallback
    lis r3, fn_802E9AA0@ha
    lis r4, fn_802E9AB0@ha
    addi r3, r3, fn_802E9AA0@l
    addi r4, r4, fn_802E9AB0@l
    bl fn_802A219C
    lfs f3, 0x2e0(r31)
    addi r3, r30, 0x634
    lfs f2, 0x318(r31)
    lfs f1, 0x31c(r31)
    lfs f0, 0x2e4(r31)
    stfs f3, 0x78c(r30)
    stfs f2, 0x784(r30)
    stfs f1, 0x77c(r30)
    stfs f3, 0x788(r30)
    stfs f3, 0x790(r30)
    stfs f0, 0x780(r30)
    bl AXFXReverbHiInit
    lis r3, AXFXReverbHiCallback@ha
    addi r4, r30, 0x634
    addi r3, r3, AXFXReverbHiCallback@l
    bl AXRegisterAuxACallback
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_8029D3E0
    li r3, 0x0
    bl fn_8029D3E8
    li r3, 0x0
    bl fn_8029D3F0
    lwz r3, 0x4(r30)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_802EB2D4
    li r3, 0x1
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802EB2D4:
    bl SCGetSoundMode
    clrlwi r3, r3, 24
    bl fn_802E9A9C
    li r0, 0x1
    stb r0, 0x97(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802EB300
asm void fn_802EB300(s8 *arg0, s32 *arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r24, r3
    mr r28, r4
    mr r27, r24
    addi r26, r3, 0x1ac
    li r25, 0x0
    lis r29, lbl_8037B970@ha
    lis r30, lbl_80341AF8@ha
    li r31, 0x1
    li r21, 0x0
    li r22, 0x25
    li r23, 0x25
lbl_802EB340:
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_802EB418
    lwz r3, 0x4(r24)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802EB38C
    lwz r3, 0x23c(r27)
    li r5, 0x1
    lwz r4, lbl_8037B970@l(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
lbl_802EB38C:
    addi r5, r30, lbl_80341AF8@l
    addi r3, r25, 0x1f
    li r4, 0x0
    mtctr r22
lbl_802EB39C:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EB3B8
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_802EB3B8
    b lbl_802EB3E8
lbl_802EB3B8:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EB3D8
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_802EB3D8
    b lbl_802EB3E8
lbl_802EB3D8:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EB39C
    li r4, -0x1
lbl_802EB3E8:
    slwi r0, r4, 2
    add r3, r24, r0
    lwz r20, 0x2f0(r3)
    mr r3, r20
    bl fn_802E6300
    stw r31, 0x14(r20)
    add r3, r24, r25
    mr r4, r26
    stb r31, 0x80(r3)
    lwz r3, 0x2ac(r27)
    bl fn_802E8630
    b lbl_802EB4D0
lbl_802EB418:
    lwz r3, 0x4(r24)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802EB454
    lwz r3, 0x23c(r27)
    li r5, 0x1
    lwz r4, lbl_8037B970@l(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_802EB454:
    addi r5, r30, lbl_80341AF8@l
    addi r3, r25, 0x1f
    li r4, 0x0
    mtctr r23
lbl_802EB464:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EB480
    lwz r0, 0x4(r5)
    cmpwi r0, 0x10
    bne lbl_802EB480
    b lbl_802EB4B0
lbl_802EB480:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EB4A0
    lwz r0, 0xc(r5)
    cmpwi r0, 0x10
    bne lbl_802EB4A0
    b lbl_802EB4B0
lbl_802EB4A0:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EB464
    li r4, -0x1
lbl_802EB4B0:
    slwi r0, r4, 2
    add r3, r24, r0
    lwz r20, 0x2f0(r3)
    mr r3, r20
    bl fn_802E6300
    stw r31, 0x14(r20)
    add r3, r24, r25
    stb r21, 0x80(r3)
lbl_802EB4D0:
    addi r25, r25, 0x1
    addi r27, r27, 0x4
    cmpwi r25, 0x4
    addi r26, r26, 0x18
    addi r28, r28, 0x10
    blt lbl_802EB340
    lis r22, lbl_8037C408@ha
    li r21, 0x0
    addi r22, r22, lbl_8037C408@l
lbl_802EB4F4:
    mr r23, r22
    li r20, 0x0
lbl_802EB4FC:
    lwz r3, 0x238(r24)
    li r5, 0x1
    lwz r4, 0x0(r23)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r20, r20, 0x1
    cmpwi r20, 0x4
    addi r23, r23, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_802EB4FC
    addi r21, r21, 0x1
    addi r22, r22, 0x10
    cmpwi r21, 0x4
    blt lbl_802EB4F4
    li r0, 0x0
    addi r11, r1, 0x40
    stw r0, 0x7c(r24)
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_802EB568
asm M2C_UNK fn_802EB568() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r28, r3
    lwz r3, 0x250(r3)
    lis r0, 0x4330
    lis r30, lbl_80341A90@ha
    lwz r12, 0x0(r3)
    lis r31, lbl_8037B918@ha
    mr r29, r4
    stw r0, 0x10(r1)
    lwz r12, 0x10(r12)
    addi r30, r30, lbl_80341A90@l
    stw r0, 0x18(r1)
    addi r31, r31, lbl_8037B918@l
    mtctr r12
    bctrl
    mr r25, r28
    li r26, 0x0
    b lbl_802EB5E0
lbl_802EB5D0:
    lwz r3, 0x2c0(r25)
    bl do_calc__Q210homebutton18GroupAnmControllerFv
    addi r25, r25, 0x4
    addi r26, r26, 0x1
lbl_802EB5E0:
    lwz r0, 0x10(r28)
    cmpw r26, r0
    blt lbl_802EB5D0
    mr r25, r28
    li r26, 0x0
lbl_802EB5F4:
    lwz r3, 0x418(r25)
    bl do_calc__Q210homebutton18GroupAnmControllerFv
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0xf
    blt lbl_802EB5F4
    mr r25, r28
    li r26, 0x0
lbl_802EB614:
    lwz r3, 0x2f0(r25)
    bl do_calc__Q210homebutton18GroupAnmControllerFv
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4a
    blt lbl_802EB614
    lfs f30, 0x2e0(r30)
    mr r25, r28
    lfs f31, 0x320(r30)
    li r26, 0x0
lbl_802EB63C:
    lfs f1, 0x210(r25)
    fcmpo cr0, f1, f30
    ble lbl_802EB6C4
    add r3, r28, r26
    lbz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_802EB668
    lwz r3, 0x2ac(r25)
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_802EB688
lbl_802EB668:
    stfs f30, 0x210(r25)
    stfs f30, 0x220(r25)
    lwz r3, 0x2ac(r25)
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_802EB6F0
    bl fn_802E8600
    b lbl_802EB6F0
lbl_802EB688:
    lwz r3, 0x4(r28)
    lfs f0, 0x30(r3)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f30
    stfs f0, 0x210(r25)
    opword 0x4C401382
    beq lbl_802EB6B0
    lwz r0, 0x14(r28)
    cmpwi r0, 0x11
    bne lbl_802EB6F0
lbl_802EB6B0:
    lwz r3, 0x2ac(r25)
    bl fn_802E8600
    stfs f30, 0x210(r25)
    stfs f31, 0x220(r25)
    b lbl_802EB6F0
lbl_802EB6C4:
    lfs f1, 0x220(r25)
    fcmpo cr0, f1, f30
    ble lbl_802EB6F0
    lwz r3, 0x4(r28)
    lfs f0, 0x30(r3)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f30
    stfs f0, 0x220(r25)
    opword 0x4C401382
    bne lbl_802EB6F0
    stfs f30, 0x220(r25)
lbl_802EB6F0:
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_802EB63C
    lwz r0, 0x14(r28)
    cmplwi r0, 0x13
    bgt lbl_802ECEB8
    lis r3, jumptable_8037C478@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8037C478@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x4(r28)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_802EB7F4
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EB744:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x2
    bne lbl_802EB760
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_802EB760
    b lbl_802EB790
lbl_802EB760:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x2
    bne lbl_802EB780
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_802EB780
    b lbl_802EB790
lbl_802EB780:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EB744
    li r3, -0x1
lbl_802EB790:
    stw r3, 0x18(r28)
    addi r4, r31, 0xb50
    lwz r3, 0x238(r28)
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb58
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x238(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_802EB8B0
lbl_802EB7F4:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EB804:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_802EB820
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_802EB820
    b lbl_802EB850
lbl_802EB820:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_802EB840
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_802EB840
    b lbl_802EB850
lbl_802EB840:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EB804
    li r3, -0x1
lbl_802EB850:
    stw r3, 0x18(r28)
    addi r4, r31, 0xb50
    lwz r3, 0x238(r28)
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb58
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x238(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_802EB8B0:
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r27, 0x2f0(r3)
    mr r3, r27
    bl fn_802E6300
    li r0, 0x1
    cmpwi r29, 0x0
    stw r0, 0x14(r27)
    beq lbl_802ECEB8
    stw r0, 0x14(r28)
    mr r3, r28
    mr r4, r29
    bl fn_802EB300
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2f0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    mr r3, r28
    bl fn_802EAFD0
    bl fn_8028B020
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0x8c(r28)
    beq lbl_802EBA1C
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EB938:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_802EB954
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_802EB954
    b lbl_802EB984
lbl_802EB954:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_802EB974
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_802EB974
    b lbl_802EB984
lbl_802EB974:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EB938
    li r3, -0x1
lbl_802EB984:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x2f0(r3)
    mr r3, r27
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r27)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EB9B0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_802EB9CC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_802EB9CC
    b lbl_802EB9FC
lbl_802EB9CC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_802EB9EC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_802EB9EC
    b lbl_802EB9FC
lbl_802EB9EC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EB9B0
    li r3, -0x1
lbl_802EB9FC:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x2f0(r3)
    mr r3, r27
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r27)
    b lbl_802EBB0C
lbl_802EBA1C:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EBA2C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_802EBA48
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_802EBA48
    b lbl_802EBA78
lbl_802EBA48:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_802EBA68
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_802EBA68
    b lbl_802EBA78
lbl_802EBA68:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EBA2C
    li r3, -0x1
lbl_802EBA78:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x2f0(r3)
    mr r3, r27
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r27)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EBAA4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_802EBAC0
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_802EBAC0
    b lbl_802EBAF0
lbl_802EBAC0:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_802EBAE0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_802EBAE0
    b lbl_802EBAF0
lbl_802EBAE0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EBAA4
    li r3, -0x1
lbl_802EBAF0:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x2f0(r3)
    mr r3, r27
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r27)
lbl_802EBB0C:
    mr r3, r28
    bl fn_802EB1D0
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EBB38
    li r3, 0x5
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802EBB38:
    cmpwi r3, 0x0
    bne lbl_802EBB48
    li r3, 0x0
    bl fn_802E9460
lbl_802EBB48:
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_802ECEB8
    lwz r4, 0x18(r28)
    slwi r0, r4, 2
    add r3, r28, r0
    lwz r3, 0x2f0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802EBBF0
    cmpwi r4, 0x5
    beq lbl_802EBBF0
    addi r25, r31, 0xaf0
    li r31, 0x0
lbl_802EBB80:
    mr r26, r25
    li r27, 0x0
lbl_802EBB88:
    lwz r3, 0x238(r28)
    li r5, 0x1
    lwz r4, 0x0(r26)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    addi r26, r26, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_802EBB88
    addi r31, r31, 0x1
    addi r25, r25, 0x10
    cmpwi r31, 0x4
    blt lbl_802EBB80
    li r0, 0x5
    stw r0, 0x18(r28)
    lwz r27, 0x42c(r28)
    mr r3, r27
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r27)
lbl_802EBBF0:
    lwz r3, 0x230(r28)
    subic. r0, r3, 0x1
    stw r0, 0x230(r28)
    bgt lbl_802ECEB8
    li r25, 0x0
lbl_802EBC04:
    mr r3, r25
    bl fn_8028A8F8
    addi r25, r25, 0x1
    cmpwi r25, 0x4
    blt lbl_802EBC04
    li r0, 0x4
    lis r3, lbl_804623E8@ha
    stw r0, 0x14(r28)
    lfs f1, 0x324(r30)
    lwz r3, lbl_804623E8@l(r3)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x234(r28)
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2f0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    lwz r0, 0x234(r28)
    cmpwi r0, 0x0
    ble lbl_802EBCB8
    li r25, 0x0
lbl_802EBC78:
    mr r3, r25
    addi r4, r1, 0x8
    bl fn_8028A9B8
    cmpwi r3, -0x1
    bne lbl_802EBC98
    addi r25, r25, 0x1
    cmpwi r25, 0x4
    blt lbl_802EBC78
lbl_802EBC98:
    cmpwi r25, 0x4
    bge lbl_802EBCB0
    lwz r3, 0x234(r28)
    subi r0, r3, 0x1
    stw r0, 0x234(r28)
    b lbl_802ECEB8
lbl_802EBCB0:
    li r0, 0x0
    stw r0, 0x234(r28)
lbl_802EBCB8:
    li r27, 0x0
    li r0, 0x5
    lis r3, fn_802ED764@ha
    stw r0, 0x14(r28)
    addi r3, r3, fn_802ED764@l
    stw r27, 0x1c(r28)
    stw r27, 0x9c(r28)
    bl fn_802896A8
    stw r3, 0x20c(r28)
    li r0, 0x1
    lwz r3, 0x2ac(r28)
    stb r27, 0x92(r28)
    stb r27, 0x93(r28)
    stb r0, 0x44(r3)
    lwz r3, 0x2b0(r28)
    stb r0, 0x44(r3)
    lwz r3, 0x2b4(r28)
    stb r0, 0x44(r3)
    lwz r3, 0x2b8(r28)
    stb r0, 0x44(r3)
    bl fn_802896A0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0x91(r28)
    bne lbl_802ECEB8
    addi r3, r28, 0x5e8
    bl OSCancelAlarm
    addi r3, r28, 0x5e8
    li r4, 0x0
    bl OSSetAlarmUserData
    lis r4, 0x8000
    lis r7, fn_802ED698@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802ED698@l
    srwi r0, r0, 2
    addi r3, r28, 0x5e8
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
    b lbl_802ECEB8
    lbz r0, 0x91(r28)
    cmpwi r0, 0x0
    beq lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x418(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    bne lbl_802EBE54
    li r25, 0x0
    li r27, 0x1
    li r31, 0x25
lbl_802EBDAC:
    addi r5, r30, 0x68
    addi r3, r25, 0x6
    li r4, 0x0
    mtctr r31
lbl_802EBDBC:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EBDD8
    lwz r0, 0x4(r5)
    cmpwi r0, 0x7
    bne lbl_802EBDD8
    b lbl_802EBE08
lbl_802EBDD8:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EBDF8
    lwz r0, 0xc(r5)
    cmpwi r0, 0x7
    bne lbl_802EBDF8
    b lbl_802EBE08
lbl_802EBDF8:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EBDBC
    li r4, -0x1
lbl_802EBE08:
    slwi r0, r4, 2
    add r3, r28, r0
    lwz r26, 0x2f0(r3)
    mr r3, r26
    bl fn_802E6300
    addi r25, r25, 0x1
    stw r27, 0x14(r26)
    cmpwi r25, 0x5
    blt lbl_802EBDAC
    mr r3, r28
    bl fn_802F1774
    lwz r3, 0x450(r28)
    li r0, 0x2
    stw r0, 0x18(r3)
    lwz r25, 0x450(r28)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r25)
lbl_802EBE54:
    lbz r0, 0x80(r28)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_802EBE98
    lbz r0, 0x81(r28)
    li r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802EBE98
    lbz r0, 0x82(r28)
    li r3, 0x2
    cmpwi r0, 0x0
    beq lbl_802EBE98
    lbz r0, 0x83(r28)
    li r3, 0x3
    cmpwi r0, 0x0
    beq lbl_802EBE98
    li r3, 0x4
lbl_802EBE98:
    cmpwi r3, 0x4
    blt lbl_802EBEA8
    li r0, 0x1
    stb r0, 0x93(r28)
lbl_802EBEA8:
    lbz r0, 0x93(r28)
    cmpwi r0, 0x0
    beq lbl_802EBFB4
    lwz r0, 0x14(r28)
    cmpwi r0, 0x6
    beq lbl_802EBF34
    lwz r0, 0x88(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2ac(r3)
    bl fn_802E8588
    cmpwi r3, 0x0
    beq lbl_802EBEFC
    lwz r0, 0x88(r28)
    li r4, 0x5
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2ac(r3)
    bl fn_802E82E0
    cmpwi r3, 0x0
    beq lbl_802EBF0C
lbl_802EBEFC:
    lwz r0, 0x620(r28)
    li r3, 0x6
    stw r3, 0x14(r28)
    stw r0, 0x1c(r28)
lbl_802EBF0C:
    lwz r4, 0x9c(r28)
    lwz r3, 0x620(r28)
    addi r0, r4, 0x1
    cmpw r0, r3
    stw r0, 0x9c(r28)
    ble lbl_802ECEB8
    li r0, 0x6
    stw r3, 0x1c(r28)
    stw r0, 0x14(r28)
    b lbl_802ECEB8
lbl_802EBF34:
    lwz r3, 0x1c(r28)
    lwz r0, 0x61c(r28)
    addi r3, r3, 0x1
    cmpw r3, r0
    stw r3, 0x1c(r28)
    ble lbl_802ECEB8
    li r0, 0x7
    stw r0, 0x14(r28)
    bl fn_802896A4
    cmpwi r3, 0x0
    bne lbl_802EBFA8
    addi r3, r28, 0x5e8
    bl OSCancelAlarm
    addi r3, r28, 0x5e8
    li r4, 0x1
    bl OSSetAlarmUserData
    lis r4, 0x8000
    lis r7, fn_802ED698@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802ED698@l
    srwi r0, r0, 2
    addi r3, r28, 0x5e8
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
lbl_802EBFA8:
    li r0, 0x1
    stb r0, 0x92(r28)
    b lbl_802ECEB8
lbl_802EBFB4:
    lwz r3, 0x1c(r28)
    lwz r0, 0x61c(r28)
    addi r3, r3, 0x1
    cmpw r3, r0
    stw r3, 0x1c(r28)
    ble lbl_802ECEB8
    li r0, 0x7
    stw r0, 0x14(r28)
    bl fn_802896A4
    cmpwi r3, 0x0
    bne lbl_802EC028
    addi r3, r28, 0x5e8
    bl OSCancelAlarm
    addi r3, r28, 0x5e8
    li r4, 0x1
    bl OSSetAlarmUserData
    lis r4, 0x8000
    lis r7, fn_802ED698@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802ED698@l
    srwi r0, r0, 2
    addi r3, r28, 0x5e8
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
lbl_802EC028:
    li r0, 0x1
    stb r0, 0x92(r28)
    b lbl_802ECEB8
    lbz r0, 0x92(r28)
    cmpwi r0, 0x0
    beq lbl_802ECEB8
    lwz r3, 0x20c(r28)
    bl fn_802896A8
    lwz r3, 0x2bc(r28)
    bl fn_802E8984
    li r25, 0x0
lbl_802EC054:
    lwz r3, 0x250(r28)
    mr r4, r25
    lfs f1, 0x2fc(r30)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r25, r25, 0x1
    cmpwi r25, 0x8
    blt lbl_802EC054
    li r0, 0x6
    stw r0, 0x18(r28)
    lwz r25, 0x430(r28)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    li r4, 0x8
    stw r0, 0x14(r25)
    li r0, 0x0
    li r3, 0x0
    stw r4, 0x14(r28)
    lwz r4, 0x450(r28)
    stw r0, 0x18(r4)
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EC0E4
    li r3, 0x5
    li r4, 0x15
    mtctr r12
    bctrl
lbl_802EC0E4:
    cmpwi r3, 0x0
    bne lbl_802ECEB8
    li r3, 0x15
    bl fn_802E9460
    b lbl_802ECEB8
    lwz r4, 0x18(r28)
    slwi r0, r4, 2
    add r3, r28, r0
    lwz r3, 0x418(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    cmpwi r4, 0xd
    bne lbl_802EC240
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EC12C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x11
    bne lbl_802EC148
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_802EC148
    b lbl_802EC178
lbl_802EC148:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x11
    bne lbl_802EC168
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_802EC168
    b lbl_802EC178
lbl_802EC168:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EC12C
    li r3, -0x1
lbl_802EC178:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r25)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EC1A4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x12
    bne lbl_802EC1C0
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_802EC1C0
    b lbl_802EC1F0
lbl_802EC1C0:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x12
    bne lbl_802EC1E0
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_802EC1E0
    b lbl_802EC1F0
lbl_802EC1E0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EC1A4
    li r3, -0x1
lbl_802EC1F0:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    addi r3, r31, 0x9e4
    stw r0, 0x14(r25)
    li r5, 0x1
    lwz r6, 0x238(r28)
    lwz r4, 0x8(r3)
    lwz r3, 0x10(r6)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    b lbl_802EC2A4
lbl_802EC240:
    cmpwi r4, 0x6
    bne lbl_802EC2A4
    lwz r3, 0x238(r28)
    li r5, 0x1
    lwz r4, 0x9e4(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0x9e4
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x238(r28)
    lwz r4, 0x4(r4)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_802EC2A4:
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2f0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    lbz r0, 0x8c(r28)
    cmpwi r0, 0x0
    beq lbl_802EC2F8
    mr r25, r28
    li r26, 0x0
lbl_802EC2E0:
    lwz r3, 0x2ac(r25)
    bl fn_802E8600
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_802EC2E0
lbl_802EC2F8:
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x418(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    lwz r3, 0x0(r28)
    li r0, 0x0
    stw r0, 0x6c(r28)
    cmpwi r3, 0x1
    stw r0, 0x70(r28)
    stw r0, 0x74(r28)
    stw r0, 0x78(r28)
    beq lbl_802EC394
    addi r3, r31, 0x998
    li r26, 0x2
    addi r25, r3, 0x8
lbl_802EC34C:
    lwz r3, 0x238(r28)
    li r5, 0x1
    lwz r4, 0x0(r25)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r26, r26, 0x1
    cmpwi r26, 0x7
    addi r25, r25, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_802EC34C
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_802EC3F4
lbl_802EC394:
    bne lbl_802EC3F4
    li r0, 0xa
    stw r0, 0x18(r28)
    lwz r25, 0x440(r28)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x14(r25)
    stw r0, 0x18(r28)
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EC3DC
    li r3, 0x5
    li r4, 0x7
    mtctr r12
    bctrl
lbl_802EC3DC:
    cmpwi r3, 0x0
    bne lbl_802EC3EC
    li r3, 0x7
    bl fn_802E9460
lbl_802EC3EC:
    li r0, 0x8
    stw r0, 0x14(r28)
lbl_802EC3F4:
    mr r3, r28
    bl fn_802EE980
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2c0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    li r0, 0x7
    stw r0, 0x18(r28)
    lwz r25, 0x434(r28)
    mr r3, r25
    bl fn_802E6300
    li r3, 0x1
    li r0, 0xc
    stw r3, 0x14(r25)
    stw r0, 0x14(r28)
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x418(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    mr r3, r28
    bl fn_802EE980
    mr r3, r28
    bl fn_802F1774
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2f0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    lwz r5, 0xb8(r28)
    cmpwi r5, 0x0
    blt lbl_802EC504
    lwz r0, 0x458(r28)
    li r4, 0x1
    li r3, 0x13
    lfd f1, 0x310(r30)
    xoris r0, r0, 0x8000
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    stw r4, 0x45c(r28)
    fsubs f0, f0, f1
    stw r3, 0x14(r28)
    stfs f0, 0x79c(r28)
    beq lbl_802EC530
    lwz r3, 0x4(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_802EC530
    fctiwz f0, f0
    li r3, 0x3
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    mtctr r12
    bctrl
    b lbl_802EC530
lbl_802EC504:
    mr r3, r28
    bl fn_802EE980
    li r0, 0xd
    stw r0, 0x18(r28)
    lwz r25, 0x44c(r28)
    mr r3, r25
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x8
    stw r3, 0x14(r25)
    stw r0, 0x14(r28)
lbl_802EC530:
    li r25, 0x0
lbl_802EC534:
    lwz r3, 0x250(r28)
    mr r4, r25
    lfs f1, 0x2fc(r30)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r25, r25, 0x1
    cmpwi r25, 0x8
    blt lbl_802EC534
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x418(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    lwz r6, 0x238(r28)
    addi r3, r31, 0x9e4
    lwz r4, 0x8(r3)
    li r5, 0x1
    lwz r3, 0x10(r6)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x4(r28)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_802EC634
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EC5E0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x3
    bne lbl_802EC5FC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    bne lbl_802EC5FC
    b lbl_802EC62C
lbl_802EC5FC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x3
    bne lbl_802EC61C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_802EC61C
    b lbl_802EC62C
lbl_802EC61C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EC5E0
    li r3, -0x1
lbl_802EC62C:
    stw r3, 0x18(r28)
    b lbl_802EC694
lbl_802EC634:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EC644:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_802EC660
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    bne lbl_802EC660
    b lbl_802EC690
lbl_802EC660:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x1
    bne lbl_802EC680
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_802EC680
    b lbl_802EC690
lbl_802EC680:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EC644
    li r3, -0x1
lbl_802EC690:
    stw r3, 0x18(r28)
lbl_802EC694:
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x10
    stw r0, 0x14(r25)
    lwz r0, 0x18(r28)
    stw r3, 0x14(r28)
    slwi r0, r0, 2
    lwz r3, 0x4(r28)
    add r4, r28, r0
    lwz r4, 0x2f0(r4)
    lfs f0, 0x4(r4)
    stfs f0, 0x79c(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_802ECEB8
    fctiwz f0, f0
    li r3, 0x2
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    mtctr r12
    bctrl
    b lbl_802ECEB8
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x2c0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEB8
    lwz r3, 0x458(r28)
    li r5, 0x1
    lwz r0, 0xb8(r28)
    li r4, 0x13
    xoris r3, r3, 0x8000
    lfd f1, 0x310(r30)
    stw r3, 0x1c(r1)
    cmpwi r0, 0x3
    lfd f0, 0x18(r1)
    stw r5, 0x45c(r28)
    fsubs f0, f0, f1
    stb r5, 0x9a(r28)
    stw r4, 0x14(r28)
    stfs f0, 0x79c(r28)
    beq lbl_802ECEB8
    lwz r3, 0x4(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_802ECEB8
    fctiwz f0, f0
    li r3, 0x3
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    mtctr r12
    bctrl
    b lbl_802ECEB8
    lwz r0, 0x0(r28)
    cmpwi r0, 0x2
    bgt lbl_802EC7A0
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r31, 0x2f0(r3)
lbl_802EC7A0:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x1
    beq lbl_802EC7E0
    lwz r0, 0xb8(r28)
    li r3, 0x11
    stw r3, 0x14(r28)
    cmpwi r0, 0x3
    beq lbl_802ECEB8
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_802EC7D4
    li r3, 0x0
    bl fn_8029D3E0
lbl_802EC7D4:
    lfs f1, 0x2e0(r30)
    bl fn_802E997C
    b lbl_802ECEB8
lbl_802EC7E0:
    lfs f0, 0xc(r31)
    lfs f1, 0x4(r31)
    lwz r0, 0xb8(r28)
    fsubs f1, f1, f0
    lfs f0, 0x79c(r28)
    cmpwi r0, 0x3
    fdivs f30, f1, f0
    beq lbl_802ECEB8
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_802EC828
    lfs f0, 0x328(r30)
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    clrlwi r3, r3, 16
    bl fn_8029D3E0
lbl_802EC828:
    fmr f1, f30
    bl fn_802E997C
    b lbl_802ECEB8
    lwz r0, 0xb8(r28)
    li r3, 0x12
    stw r3, 0x14(r28)
    cmpwi r0, 0x3
    beq lbl_802EC898
    bl fn_802E979C
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_802EC890
    addi r3, r28, 0x634
    bl AXFXReverbHiShutdown
    lwz r3, 0x794(r28)
    lwz r4, 0x798(r28)
    bl AXRegisterAuxACallback
    lwz r3, 0x62c(r28)
    lwz r4, 0x630(r28)
    bl fn_802A219C
    lhz r3, 0x624(r28)
    bl fn_8029D3E0
    lhz r3, 0x626(r28)
    bl fn_8029D3E8
    lhz r3, 0x628(r28)
    bl fn_8029D3F0
lbl_802EC890:
    li r0, 0x0
    stb r0, 0x97(r28)
lbl_802EC898:
    lwz r0, 0x84(r28)
    lfd f2, 0x310(r30)
    xoris r0, r0, 0x8000
    lfs f0, 0x32c(r30)
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    clrlwi r3, r3, 24
    bl fn_8028CD8C
    li r3, 0x0
    bl fn_8028B23C
    lwz r3, 0x2bc(r28)
    bl fn_802E8984
    lwz r3, 0x2bc(r28)
    bl fn_802E8BE4
    mr r25, r28
    li r26, 0x0
lbl_802EC8EC:
    lwz r3, 0x2ac(r25)
    bl fn_802E8600
    lwz r3, 0x2ac(r25)
    bl fn_802E8000
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_802EC8EC
    lwz r0, 0xb8(r28)
    cmpwi r0, 0x3
    beq lbl_802EC938
    lwz r3, 0x4(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_802EC938
    li r3, 0x4
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802EC938:
    li r3, 0x0
    li r8, 0x0
    li r4, 0x25
    li r0, 0x25
    li r5, 0x25
lbl_802EC94C:
    addi r10, r30, 0x68
    addi r7, r3, 0x1f
    li r9, 0x0
    mtctr r5
lbl_802EC95C:
    lwz r6, 0x0(r10)
    cmpw r7, r6
    bne lbl_802EC978
    lwz r6, 0x4(r10)
    cmpwi r6, 0x11
    bne lbl_802EC978
    b lbl_802EC9A8
lbl_802EC978:
    lwz r6, 0x8(r10)
    addi r9, r9, 0x1
    cmpw r7, r6
    bne lbl_802EC998
    lwz r6, 0xc(r10)
    cmpwi r6, 0x11
    bne lbl_802EC998
    b lbl_802EC9A8
lbl_802EC998:
    addi r10, r10, 0x10
    addi r9, r9, 0x1
    bdnz lbl_802EC95C
    li r9, -0x1
lbl_802EC9A8:
    slwi r6, r9, 2
    addi r10, r30, 0x68
    add r6, r28, r6
    addi r7, r3, 0x1f
    lwz r6, 0x2f0(r6)
    li r9, 0x0
    stw r8, 0x14(r6)
    mtctr r4
lbl_802EC9C8:
    lwz r6, 0x0(r10)
    cmpw r7, r6
    bne lbl_802EC9E4
    lwz r6, 0x4(r10)
    cmpwi r6, 0x12
    bne lbl_802EC9E4
    b lbl_802ECA14
lbl_802EC9E4:
    lwz r6, 0x8(r10)
    addi r9, r9, 0x1
    cmpw r7, r6
    bne lbl_802ECA04
    lwz r6, 0xc(r10)
    cmpwi r6, 0x12
    bne lbl_802ECA04
    b lbl_802ECA14
lbl_802ECA04:
    addi r10, r10, 0x10
    addi r9, r9, 0x1
    bdnz lbl_802EC9C8
    li r9, -0x1
lbl_802ECA14:
    slwi r6, r9, 2
    addi r10, r30, 0x68
    add r6, r28, r6
    addi r7, r3, 0x1f
    lwz r6, 0x2f0(r6)
    li r9, 0x0
    stw r8, 0x14(r6)
    mtctr r0
lbl_802ECA34:
    lwz r6, 0x0(r10)
    cmpw r7, r6
    bne lbl_802ECA50
    lwz r6, 0x4(r10)
    cmpwi r6, 0xf
    bne lbl_802ECA50
    b lbl_802ECA80
lbl_802ECA50:
    lwz r6, 0x8(r10)
    addi r9, r9, 0x1
    cmpw r7, r6
    bne lbl_802ECA70
    lwz r6, 0xc(r10)
    cmpwi r6, 0xf
    bne lbl_802ECA70
    b lbl_802ECA80
lbl_802ECA70:
    addi r10, r10, 0x10
    addi r9, r9, 0x1
    bdnz lbl_802ECA34
    li r9, -0x1
lbl_802ECA80:
    slwi r6, r9, 2
    addi r3, r3, 0x1
    add r6, r28, r6
    lwz r6, 0x2f0(r6)
    cmpwi r3, 0x4
    stw r8, 0x14(r6)
    blt lbl_802EC94C
    li r0, 0x0
    stb r0, 0x94(r28)
    b lbl_802ECEB8
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_802ECEB8
    lbz r0, 0x95(r28)
    cmpwi r0, 0x0
    beq lbl_802ECAD4
    mr r3, r28
    mr r4, r29
    bl fn_802EB300
    li r0, 0x0
    stb r0, 0x95(r28)
lbl_802ECAD4:
    lbz r0, 0x96(r28)
    cmpwi r0, 0x0
    beq lbl_802ECCEC
    mr r3, r28
    bl fn_802EAFD0
    bl fn_8028B020
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0x8c(r28)
    beq lbl_802ECBF4
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802ECB10:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_802ECB2C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_802ECB2C
    b lbl_802ECB5C
lbl_802ECB2C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_802ECB4C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_802ECB4C
    b lbl_802ECB5C
lbl_802ECB4C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802ECB10
    li r3, -0x1
lbl_802ECB5C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r25)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802ECB88:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_802ECBA4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_802ECBA4
    b lbl_802ECBD4
lbl_802ECBA4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_802ECBC4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_802ECBC4
    b lbl_802ECBD4
lbl_802ECBC4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802ECB88
    li r3, -0x1
lbl_802ECBD4:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r25)
    b lbl_802ECCE4
lbl_802ECBF4:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802ECC04:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_802ECC20
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_802ECC20
    b lbl_802ECC50
lbl_802ECC20:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_802ECC40
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_802ECC40
    b lbl_802ECC50
lbl_802ECC40:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802ECC04
    li r3, -0x1
lbl_802ECC50:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r25)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802ECC7C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_802ECC98
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_802ECC98
    b lbl_802ECCC8
lbl_802ECC98:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_802ECCB8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_802ECCB8
    b lbl_802ECCC8
lbl_802ECCB8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802ECC7C
    li r3, -0x1
lbl_802ECCC8:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r25)
lbl_802ECCE4:
    li r0, 0x0
    stb r0, 0x96(r28)
lbl_802ECCEC:
    lwz r4, 0x45c(r28)
    cmpwi r4, 0x1
    bne lbl_802ECD10
    lwz r3, 0x454(r28)
    lwz r0, 0x458(r28)
    cmpw r3, r0
    bne lbl_802ECD10
    li r0, 0x1
    b lbl_802ECD30
lbl_802ECD10:
    cmpwi r4, 0x2
    bne lbl_802ECD2C
    lwz r0, 0x454(r28)
    cmpwi r0, 0x0
    bne lbl_802ECD2C
    li r0, 0x1
    b lbl_802ECD30
lbl_802ECD2C:
    li r0, 0x0
lbl_802ECD30:
    cmpwi r0, 0x0
    beq lbl_802ECE54
    lbz r0, 0x98(r28)
    cmpwi r0, 0x0
    beq lbl_802ECD60
    lbz r0, 0x92(r28)
    cmpwi r0, 0x0
    beq lbl_802ECEB8
    lwz r3, 0x20c(r28)
    bl fn_802896A8
    li r0, 0x0
    stb r0, 0x98(r28)
lbl_802ECD60:
    lbz r0, 0x99(r28)
    cmpwi r0, 0x0
    beq lbl_802ECDF8
    lwz r3, 0x42c(r28)
    bl fn_802E6300
    lwz r3, 0x42c(r28)
    li r27, 0x0
    li r5, 0x1
    stw r27, 0x14(r3)
    lwz r3, 0x238(r28)
    lwz r4, 0x9e4(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0x9e4
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x238(r28)
    lwz r4, 0x4(r4)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x450(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802ECDF8
    bl fn_802E6300
    lwz r3, 0x450(r28)
    stw r27, 0x14(r3)
lbl_802ECDF8:
    lwz r0, 0x618(r28)
    li r3, 0x11
    stw r3, 0x14(r28)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_802ECE1C
    lbz r0, 0x460(r28)
    cmpwi r0, 0x0
    bne lbl_802ECE20
lbl_802ECE1C:
    li r3, 0x1
lbl_802ECE20:
    bl VISetBlack
    bl VIFlush
    lwz r0, 0xb8(r28)
    cmpwi r0, 0x3
    beq lbl_802ECEB8
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_802ECE48
    li r3, 0x0
    bl fn_8029D3E0
lbl_802ECE48:
    lfs f1, 0x2e0(r30)
    bl fn_802E997C
    b lbl_802ECEB8
lbl_802ECE54:
    lwz r4, 0x454(r28)
    lwz r3, 0x458(r28)
    lwz r0, 0xb8(r28)
    subf r3, r4, r3
    lfd f2, 0x310(r30)
    xoris r3, r3, 0x8000
    lfs f0, 0x79c(r28)
    stw r3, 0x1c(r1)
    cmpwi r0, 0x3
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fdivs f30, f1, f0
    beq lbl_802ECEB8
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_802ECEB0
    lfs f0, 0x328(r30)
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    clrlwi r3, r3, 16
    bl fn_8029D3E0
lbl_802ECEB0:
    fmr f1, f30
    bl fn_802E997C
lbl_802ECEB8:
    lwz r5, 0x6c(r28)
    cmpwi r5, 0x0
    beq lbl_802ECF40
    lwz r0, 0x14(r28)
    li r4, 0x1
    cmpwi r0, 0x2
    bne lbl_802ECEF4
    lwz r3, 0x448(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802ECEF4
    lwz r3, 0x424(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802ECEF8
lbl_802ECEF4:
    li r4, 0x0
lbl_802ECEF8:
    cmpwi r4, 0x0
    beq lbl_802ECF40
    cmpwi r5, 0x0
    beq lbl_802ECF38
    lwz r0, 0x74(r28)
    cmpw r5, r0
    beq lbl_802ECF38
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r25, 0x418(r3)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r25)
    lwz r0, 0x6c(r28)
    stw r0, 0x74(r28)
lbl_802ECF38:
    li r0, 0x0
    stw r0, 0x6c(r28)
lbl_802ECF40:
    lwz r3, 0x70(r28)
    cmpwi r3, 0x0
    beq lbl_802ED178
    li r4, 0x25
    addi r5, r30, 0x68
    li r0, 0x1
    li r8, 0x0
    mtctr r4
lbl_802ECF60:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x4
    bne lbl_802ECF7C
    lwz r4, 0x4(r5)
    cmpwi r4, 0x2
    bne lbl_802ECF7C
    b lbl_802ECFAC
lbl_802ECF7C:
    lwz r4, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r4, 0x4
    bne lbl_802ECF9C
    lwz r4, 0xc(r5)
    cmpwi r4, 0x2
    bne lbl_802ECF9C
    b lbl_802ECFAC
lbl_802ECF9C:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_802ECF60
    li r8, -0x1
lbl_802ECFAC:
    li r4, 0x25
    addi r5, r30, 0x68
    li r7, 0x0
    mtctr r4
lbl_802ECFBC:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x5
    bne lbl_802ECFD8
    lwz r4, 0x4(r5)
    cmpwi r4, 0x3
    bne lbl_802ECFD8
    b lbl_802ED008
lbl_802ECFD8:
    lwz r4, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x5
    bne lbl_802ECFF8
    lwz r4, 0xc(r5)
    cmpwi r4, 0x3
    bne lbl_802ECFF8
    b lbl_802ED008
lbl_802ECFF8:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_802ECFBC
    li r7, -0x1
lbl_802ED008:
    li r4, 0x25
    addi r5, r30, 0x68
    li r6, 0x0
    mtctr r4
lbl_802ED018:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x4
    bne lbl_802ED034
    lwz r4, 0x4(r5)
    cmpwi r4, 0x13
    bne lbl_802ED034
    b lbl_802ED064
lbl_802ED034:
    lwz r4, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r4, 0x4
    bne lbl_802ED054
    lwz r4, 0xc(r5)
    cmpwi r4, 0x13
    bne lbl_802ED054
    b lbl_802ED064
lbl_802ED054:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_802ED018
    li r6, -0x1
lbl_802ED064:
    li r4, 0x25
    addi r9, r30, 0x68
    li r5, 0x0
    mtctr r4
lbl_802ED074:
    lwz r4, 0x0(r9)
    cmpwi r4, 0x5
    bne lbl_802ED090
    lwz r4, 0x4(r9)
    cmpwi r4, 0x14
    bne lbl_802ED090
    b lbl_802ED0C0
lbl_802ED090:
    lwz r4, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r4, 0x5
    bne lbl_802ED0B0
    lwz r4, 0xc(r9)
    cmpwi r4, 0x14
    bne lbl_802ED0B0
    b lbl_802ED0C0
lbl_802ED0B0:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802ED074
    li r5, -0x1
lbl_802ED0C0:
    lwz r4, 0x14(r28)
    cmpwi r4, 0x2
    bne lbl_802ED12C
    slwi r4, r8, 2
    add r4, r28, r4
    lwz r4, 0x2f0(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    beq lbl_802ED12C
    slwi r4, r7, 2
    add r4, r28, r4
    lwz r4, 0x2f0(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    beq lbl_802ED12C
    slwi r4, r6, 2
    add r4, r28, r4
    lwz r4, 0x2f0(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    beq lbl_802ED12C
    slwi r4, r5, 2
    add r4, r28, r4
    lwz r4, 0x2f0(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    bne lbl_802ED130
lbl_802ED12C:
    li r0, 0x0
lbl_802ED130:
    cmpwi r0, 0x0
    beq lbl_802ED178
    cmpwi r3, 0x0
    beq lbl_802ED170
    lwz r0, 0x78(r28)
    cmpw r3, r0
    beq lbl_802ED170
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x2f0(r3)
    mr r3, r25
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r25)
    lwz r0, 0x70(r28)
    stw r0, 0x78(r28)
lbl_802ED170:
    li r0, 0x0
    stw r0, 0x70(r28)
lbl_802ED178:
    cmpwi r29, 0x0
    beq lbl_802ED18C
    mr r3, r28
    mr r4, r29
    bl fn_802ED79C
lbl_802ED18C:
    lwz r3, 0x238(r28)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x238(r28)
    addi r4, r28, 0x258
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r28)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802ED1FC
    mr r25, r28
    li r26, 0x0
lbl_802ED1D4:
    lwz r3, 0x23c(r25)
    addi r4, r28, 0x258
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_802ED1D4
lbl_802ED1FC:
    lwz r3, 0x68(r28)
    cmpwi r3, 0x2
    bgt lbl_802ED210
    addi r0, r3, 0x1
    stw r0, 0x68(r28)
lbl_802ED210:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    addi r11, r1, 0x50
    lfd f30, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_802ED238
asm void fn_802ED238(s8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mulli r6, r4, 0x18
    lis r5, lbl_8037C408@ha
    slwi r0, r4, 4
    addi r5, r5, lbl_8037C408@l
    mr r30, r3
    mr r31, r4
    add r29, r5, r0
    add r28, r3, r6
    li r27, 0x0
lbl_802ED270:
    lbz r0, 0x1c0(r28)
    cmpw r27, r0
    bge lbl_802ED2B0
    lwz r3, 0x238(r30)
    li r5, 0x1
    lwz r4, 0x0(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_802ED2DC
lbl_802ED2B0:
    lwz r3, 0x238(r30)
    li r5, 0x1
    lwz r4, 0x0(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_802ED2DC:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x4
    blt lbl_802ED270
    lbz r0, 0x1c0(r28)
    cmplwi r0, 0x2
    bge lbl_802ED37C
    lis r5, lbl_80341AF8@ha
    li r0, 0x25
    addi r5, r5, lbl_80341AF8@l
    addi r3, r31, 0x1f
    li r4, 0x0
    mtctr r0
lbl_802ED310:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802ED32C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x15
    bne lbl_802ED32C
    b lbl_802ED35C
lbl_802ED32C:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802ED34C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x15
    bne lbl_802ED34C
    b lbl_802ED35C
lbl_802ED34C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802ED310
    li r4, -0x1
lbl_802ED35C:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_802ED3FC
lbl_802ED37C:
    lis r5, lbl_80341AF8@ha
    li r0, 0x25
    addi r5, r5, lbl_80341AF8@l
    addi r3, r31, 0x1f
    li r4, 0x0
    mtctr r0
lbl_802ED394:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802ED3B0
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_802ED3B0
    b lbl_802ED3E0
lbl_802ED3B0:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802ED3D0
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_802ED3D0
    b lbl_802ED3E0
lbl_802ED3D0:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802ED394
    li r4, -0x1
lbl_802ED3E0:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
lbl_802ED3FC:
    lwz r0, 0x7c(r30)
    cmpwi r0, 0x64
    bge lbl_802ED410
    li r0, 0x0
    stw r0, 0x7c(r30)
lbl_802ED410:
    slwi r0, r31, 2
    add r3, r30, r0
    lwz r3, 0x2ac(r3)
    bl fn_802E86FC
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802ED438
asm void fn_802ED438() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    bl fn_802E9D6C
    lwz r3, 0x238(r29)
    addi r4, r29, 0x258
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r29)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802ED4AC
    addi r31, r29, 0xc
    li r30, 0x3
lbl_802ED488:
    lwz r3, 0x23c(r31)
    addi r4, r29, 0x258
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    subic. r30, r30, 0x1
    subi r31, r31, 0x4
    bge lbl_802ED488
lbl_802ED4AC:
    lwz r4, 0x454(r29)
    lwz r0, 0x458(r29)
    slwi r3, r4, 8
    subf r3, r4, r3
    divw r0, r3, r0
    clrlwi r31, r0, 24
    bl fn_802E9D6C
    lbz r0, 0x460(r29)
    cmpwi r0, 0x0
    beq lbl_802ED4F8
    lbz r4, 0x461(r29)
    lbz r3, 0x462(r29)
    lbz r0, 0x463(r29)
    stb r4, 0x8(r1)
    stb r3, 0x9(r1)
    stb r0, 0xa(r1)
    stb r31, 0xb(r1)
    lwz r0, 0x8(r1)
    b lbl_802ED508
lbl_802ED4F8:
    li r0, 0x0
    stw r0, 0xc(r1)
    stb r31, 0xf(r1)
    lwz r0, 0xc(r1)
lbl_802ED508:
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0x1
    bl fn_802E4590
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lis r5, lbl_80341D88@ha
    lis r4, 0xcc01
    lfs f0, lbl_80341D88@l(r5)
    lis r3, lbl_80341DC0@ha
    stfs f0, -0x8000(r4)
    lfs f0, lbl_80341D88@l(r5)
    stfs f0, -0x8000(r4)
    lfs f0, lbl_80341D88@l(r5)
    stfs f0, -0x8000(r4)
    lfs f0, lbl_80341DC0@l(r3)
    stfs f0, -0x8000(r4)
    lfs f0, lbl_80341DC0@l(r3)
    stfs f0, -0x8000(r4)
    lfs f0, lbl_80341DC0@l(r3)
    stfs f0, -0x8000(r4)
    lfs f0, lbl_80341DC0@l(r3)
    stfs f0, -0x8000(r4)
    lfs f0, lbl_80341D88@l(r5)
    stfs f0, -0x8000(r4)
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802ED590
asm void fn_802ED590() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl OSGetAlarmUserData
    lis r4, lbl_804623E8@ha
    srwi r29, r3, 16
    lwz r30, lbl_804623E8@l(r4)
    clrlwi r28, r3, 16
    mr r3, r29
    bl fn_8028B6F8
    cmpwi r3, 0x0
    beq lbl_802ED5E8
    slwi r0, r29, 2
    add r31, r30, r0
    lwz r3, 0x2ac(r31)
    bl fn_802E8588
    cmpwi r3, 0x0
    bne lbl_802ED648
lbl_802ED5E8:
    mulli r4, r29, 0x30
    slwi r3, r29, 16
    addi r0, r29, 0x2
    add r5, r30, r4
    addi r30, r5, 0x528
    or r4, r3, r0
    mr r3, r30
    bl OSSetAlarmUserData
    mr r3, r30
    bl OSCancelAlarm
    lis r4, 0x8000
    lis r7, fn_802ED590@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802ED590@l
    srwi r0, r0, 2
    mr r3, r30
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x32
    bl OSSetAlarm
    b lbl_802ED654
lbl_802ED648:
    lwz r3, 0x2ac(r31)
    mr r4, r28
    bl fn_802E8244
lbl_802ED654:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802ED698
asm void fn_802ED698() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_804623E8@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r31, lbl_804623E8@l(r4)
    bl OSGetAlarmUserData
    cmpwi r3, 0x0
    mr r30, r3
    li r29, 0x0
    bne lbl_802ED6E8
    bl fn_802896A0
    cmpwi r3, 0x0
    beq lbl_802ED6F8
    li r0, 0x1
    li r29, 0x1
    stb r0, 0x91(r31)
    b lbl_802ED6F8
lbl_802ED6E8:
    bl fn_802896A4
    cmpwi r3, 0x0
    beq lbl_802ED6F8
    li r29, 0x1
lbl_802ED6F8:
    cmpwi r29, 0x0
    bne lbl_802ED748
    addi r3, r31, 0x5e8
    bl OSCancelAlarm
    mr r4, r30
    addi r3, r31, 0x5e8
    bl OSSetAlarmUserData
    lis r4, 0x8000
    lis r7, fn_802ED698@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802ED698@l
    srwi r0, r0, 2
    addi r3, r31, 0x5e8
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
lbl_802ED748:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802ED764
asm int fn_802ED764() {
    nofralloc
    cmpwi r3, 0x1
    bne lbl_802ED77C
    lis r5, lbl_804623E8@ha
    li r0, 0x1
    lwz r5, lbl_804623E8@l(r5)
    stb r0, 0x92(r5)
lbl_802ED77C:
    lis r5, lbl_804623E8@ha
    lwz r5, lbl_804623E8@l(r5)
    lwz r12, 0x20c(r5)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

// asm_to_cpp: fn_802ED79C
asm void fn_802ED79C() {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    opword 0xF3E100F8
    stfd f30, 0xe0(r1)
    opword 0xF3C100E8
    stfd f29, 0xd0(r1)
    opword 0xF3A100D8
    stfd f28, 0xc0(r1)
    opword 0xF38100C8
    stfd f27, 0xb0(r1)
    opword 0xF36100B8
    addi r11, r1, 0xb0
    bl _savegpr_14
    lwz r0, 0x45c(r3)
    lis r28, lbl_80341A90@ha
    lis r29, lbl_8037B918@ha
    mr r15, r3
    cmpwi r0, 0x1
    addi r28, r28, lbl_80341A90@l
    addi r29, r29, lbl_8037B918@l
    bne lbl_802ED808
    lwz r5, 0x454(r3)
    addi r0, r5, 0x1
    stw r0, 0x454(r3)
    b lbl_802ED81C
lbl_802ED808:
    cmpwi r0, 0x2
    bne lbl_802ED81C
    lwz r5, 0x454(r3)
    subi r0, r5, 0x1
    stw r0, 0x454(r3)
lbl_802ED81C:
    lwz r0, 0x454(r3)
    cmpwi r0, 0x0
    bge lbl_802ED834
    li r0, 0x0
    stw r0, 0x454(r3)
    b lbl_802ED844
lbl_802ED834:
    lwz r5, 0x458(r3)
    cmpw r0, r5
    ble lbl_802ED844
    stw r5, 0x454(r3)
lbl_802ED844:
    lfs f31, 0x334(r28)
    mr r27, r4
    lfs f27, 0x31c(r28)
    mr r26, r15
    lfs f29, 0x33c(r28)
    mr r25, r4
    lfs f30, 0x2e0(r28)
    addi r24, r3, 0x1ac
    lfs f28, 0x338(r28)
    addi r23, r3, 0x468
    addi r21, r3, 0x528
    addi r20, r29, 0xaf0
    li r17, 0x0
    li r22, 0x0
    li r30, 0x1
    li r31, 0x0
    lis r14, 0x8000
lbl_802ED888:
    lwz r6, 0x0(r27)
    cmpwi r6, 0x0
    beq lbl_802EDE40
    lbz r0, 0x5d(r6)
    extsb r5, r0
    cmpwi r5, -0x1
    beq lbl_802ED9D4
    lis r3, lbl_804623E8@ha
    lwz r4, 0x58(r26)
    lwz r3, lbl_804623E8@l(r3)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f31, f0
    fadds f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0x60(r1)
    lwz r0, 0x64(r1)
    cmpw r4, r0
    ble lbl_802ED96C
    cmpwi r5, 0x0
    beq lbl_802ED8E4
    cmpwi r5, -0x7
    bne lbl_802ED974
lbl_802ED8E4:
    lwz r0, 0xc(r27)
    cmplwi r0, 0x2
    bne lbl_802ED8FC
    lbz r0, 0x5c(r6)
    cmplwi r0, 0x2
    beq lbl_802ED918
lbl_802ED8FC:
    lbz r0, 0x5e(r6)
    extsb. r0, r0
    ble lbl_802ED910
    li r5, 0x1
    b lbl_802ED91C
lbl_802ED910:
    li r5, 0x0
    b lbl_802ED91C
lbl_802ED918:
    li r5, 0x1
lbl_802ED91C:
    lwz r3, 0x2ac(r26)
    mr r4, r25
    bl fn_802E8074
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802ED974
    lwz r3, 0x23c(r26)
    li r5, 0x1
    lwz r4, 0x58(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_802ED974
lbl_802ED96C:
    addi r0, r4, 0x1
    stw r0, 0x58(r26)
lbl_802ED974:
    lwz r0, 0xc(r27)
    cmplwi r0, 0x2
    bne lbl_802ED990
    lwz r3, 0x0(r27)
    lbz r0, 0x5c(r3)
    cmplwi r0, 0x2
    beq lbl_802EDA18
lbl_802ED990:
    lwz r3, 0x0(r27)
    lbz r0, 0x5e(r3)
    extsb. r0, r0
    bgt lbl_802EDA18
    mr r3, r17
    addi r4, r1, 0x8
    bl fn_8028A9B8
    lwz r4, 0x0(r27)
    lbz r0, 0x5d(r4)
    extsb r0, r0
    cmpwi r0, -0x2
    beq lbl_802EDA18
    cmpwi r3, -0x2
    beq lbl_802EDA18
    lwz r3, 0x2ac(r26)
    bl fn_802E820C
    b lbl_802EDA18
lbl_802ED9D4:
    lwz r3, 0x2ac(r26)
    bl fn_802E820C
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802EDA18
    lwz r3, 0x23c(r26)
    li r5, 0x1
    lwz r4, 0x58(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_802EDA18:
    add r3, r15, r17
    lbz r0, 0x80(r3)
    cmpwi r0, 0x0
    bne lbl_802EDC6C
    stw r17, 0x88(r15)
    mr r4, r24
    stb r30, 0x80(r3)
    lwz r3, 0x2ac(r26)
    bl fn_802E8630
    li r0, 0x25
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
lbl_802EDA50:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EDA6C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_802EDA6C
    b lbl_802EDA9C
lbl_802EDA6C:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EDA8C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_802EDA8C
    b lbl_802EDA9C
lbl_802EDA8C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EDA50
    li r4, -0x1
lbl_802EDA9C:
    slwi r0, r4, 2
    add r3, r15, r0
    lwz r16, 0x2f0(r3)
    mr r3, r16
    bl fn_802E6300
    li r0, 0x25
    stw r30, 0x14(r16)
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
lbl_802EDAC8:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EDAE4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x12
    bne lbl_802EDAE4
    b lbl_802EDB14
lbl_802EDAE4:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EDB04
    lwz r0, 0xc(r5)
    cmpwi r0, 0x12
    bne lbl_802EDB04
    b lbl_802EDB14
lbl_802EDB04:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EDAC8
    li r4, -0x1
lbl_802EDB14:
    slwi r0, r4, 2
    addi r6, r28, 0x68
    add r4, r15, r0
    addi r3, r17, 0x1f
    lwz r4, 0x2f0(r4)
    li r0, 0x25
    li r5, 0x0
    stw r31, 0x14(r4)
    mtctr r0
lbl_802EDB38:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_802EDB54
    lwz r0, 0x4(r6)
    cmpwi r0, 0xf
    bne lbl_802EDB54
    b lbl_802EDB84
lbl_802EDB54:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_802EDB74
    lwz r0, 0xc(r6)
    cmpwi r0, 0xf
    bne lbl_802EDB74
    b lbl_802EDB84
lbl_802EDB74:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802EDB38
    li r5, -0x1
lbl_802EDB84:
    slwi r0, r5, 2
    add r3, r15, r0
    lwz r16, 0x2f0(r3)
    mr r3, r16
    bl fn_802E6300
    stw r30, 0x14(r16)
    li r3, 0x0
    lwz r4, 0x4(r15)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EDBC0
    addi r4, r17, 0x11
    li r3, 0x5
    mtctr r12
    bctrl
lbl_802EDBC0:
    cmpwi r3, 0x0
    bne lbl_802EDBD0
    addi r3, r17, 0x11
    bl fn_802E9460
lbl_802EDBD0:
    lwz r3, 0x2ac(r26)
    bl fn_802E8228
    lwz r3, 0x2ac(r26)
    bl fn_802E859C
    lwz r4, 0x2ac(r26)
    mr r3, r23
    bl OSSetAlarmUserData
    mr r3, r23
    bl OSCancelAlarm
    lwz r0, 0xf8(r14)
    lis r3, 0x1062
    addi r6, r3, 0x4dd3
    lis r4, fn_802ED674@ha
    srwi r0, r0, 2
    mr r3, r23
    mulhwu r0, r6, r0
    addi r7, r4, fn_802ED674@l
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x12c
    bl OSSetAlarm
    addi r0, r17, 0x2
    mr r3, r21
    or r4, r22, r0
    bl OSSetAlarmUserData
    mr r3, r21
    bl OSCancelAlarm
    lwz r0, 0xf8(r14)
    lis r3, 0x1062
    addi r6, r3, 0x4dd3
    lis r4, fn_802ED590@ha
    srwi r0, r0, 2
    mr r3, r21
    mulhwu r0, r6, r0
    addi r7, r4, fn_802ED590@l
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x190
    bl OSSetAlarm
lbl_802EDC6C:
    lwz r3, 0x0(r27)
    lbz r0, 0x5d(r3)
    extsb. r0, r0
    beq lbl_802EDC84
    cmpwi r0, -0x7
    bne lbl_802EDE20
lbl_802EDC84:
    lwz r0, 0xc(r27)
    cmplwi r0, 0x2
    bne lbl_802EDCB8
    lbz r0, 0x5c(r3)
    cmplwi r0, 0x2
    bne lbl_802EDCB8
    stfs f30, 0x48(r1)
    stfs f30, 0x4c(r1)
    stfs f28, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f28, 0x5c(r1)
    b lbl_802EDCF4
lbl_802EDCB8:
    lwz r0, 0x38(r3)
    lwz r3, 0x34(r3)
    stw r0, 0x1c(r1)
    lfs f0, 0x1c(r1)
    stw r3, 0x18(r1)
    fneg f1, f0
    lfs f2, 0x18(r1)
    bl fn_802FD350
    fmuls f0, f29, f1
    stfs f30, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f0, 0x5c(r1)
lbl_802EDCF4:
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802EDD74
    lwz r3, 0x23c(r26)
    li r5, 0x1
    lwz r4, 0x64(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f0, 0x54(r1)
    li r5, 0x1
    lfs f1, 0x58(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x5c(r1)
    stfs f1, 0x3c(r3)
    stfs f0, 0x40(r3)
    lwz r3, 0x23c(r26)
    lwz r4, 0x70(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f0, 0x54(r1)
    lfs f1, 0x58(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x5c(r1)
    stfs f1, 0x3c(r3)
    stfs f0, 0x40(r3)
lbl_802EDD74:
    lwz r0, 0x7c(r15)
    cmpwi r0, 0x64
    ble lbl_802EDD8C
    lwz r3, 0x2ac(r26)
    mr r4, r24
    bl fn_802E8630
lbl_802EDD8C:
    mr r3, r15
    mr r4, r17
    bl fn_802EE0E8
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802EDE20
    lwz r3, 0x2ac(r26)
    bl fn_802E8598
    lwz r4, 0x238(r15)
    mr r16, r3
    addi r3, r1, 0x20
    bl GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv
    lwz r3, 0x23c(r26)
    li r5, 0x1
    lfs f1, 0x8(r16)
    lfs f0, 0x28(r1)
    lwz r3, 0x10(r3)
    fmuls f2, f1, f0
    lfs f1, 0xc(r16)
    lfs f0, 0x2c(r1)
    lwz r12, 0x0(r3)
    fmuls f0, f1, f0
    stfs f2, 0x10(r1)
    lwz r12, 0x3c(r12)
    lwz r4, 0x58(r29)
    stfs f0, 0x14(r1)
    mtctr r12
    bctrl
    lfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    stfs f0, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f30, 0x38(r1)
    stfs f30, 0x34(r3)
lbl_802EDE20:
    lwz r3, 0x2ac(r26)
    bl fn_802E86D8
    cmpwi r3, 0x0
    beq lbl_802EE05C
    mr r3, r15
    mr r4, r17
    bl fn_802ED238
    b lbl_802EE05C
lbl_802EDE40:
    add r18, r15, r17
    lbz r0, 0x80(r18)
    cmpwi r0, 0x0
    beq lbl_802EDFE0
    li r0, 0x25
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
lbl_802EDE64:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EDE80
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_802EDE80
    b lbl_802EDEB0
lbl_802EDE80:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EDEA0
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_802EDEA0
    b lbl_802EDEB0
lbl_802EDEA0:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EDE64
    li r4, -0x1
lbl_802EDEB0:
    slwi r0, r4, 2
    add r3, r15, r0
    lwz r16, 0x2f0(r3)
    mr r3, r16
    bl fn_802E6300
    li r0, 0x25
    stw r30, 0x14(r16)
    addi r5, r28, 0x68
    addi r3, r17, 0x1f
    li r4, 0x0
    mtctr r0
lbl_802EDEDC:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EDEF8
    lwz r0, 0x4(r5)
    cmpwi r0, 0x12
    bne lbl_802EDEF8
    b lbl_802EDF28
lbl_802EDEF8:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EDF18
    lwz r0, 0xc(r5)
    cmpwi r0, 0x12
    bne lbl_802EDF18
    b lbl_802EDF28
lbl_802EDF18:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EDEDC
    li r4, -0x1
lbl_802EDF28:
    slwi r0, r4, 2
    add r3, r15, r0
    lwz r16, 0x2f0(r3)
    mr r3, r16
    bl fn_802E6300
    stw r30, 0x14(r16)
    mr r19, r20
    li r16, 0x0
lbl_802EDF48:
    lwz r3, 0x238(r15)
    li r5, 0x1
    lwz r4, 0x0(r19)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r16, r16, 0x1
    cmpwi r16, 0x4
    addi r19, r19, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_802EDF48
    lwz r3, 0x4(r15)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_802EDFC0
    lwz r3, 0x23c(r26)
    li r5, 0x1
    lwz r4, 0x58(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_802EDFC0:
    stw r31, 0x58(r26)
    stb r31, 0x80(r18)
    lwz r3, 0x2ac(r26)
    bl fn_802E820C
    lwz r3, 0x2ac(r26)
    bl fn_802E81F8
    lwz r3, 0x2ac(r26)
    bl fn_802E8238
lbl_802EDFE0:
    cmpwi r17, 0x0
    bge lbl_802EE02C
    li r16, 0x0
lbl_802EDFEC:
    lwz r3, 0x250(r15)
    mr r4, r16
    lfs f1, 0x2fc(r28)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r16, r16, 0x1
    cmpwi r16, 0x8
    blt lbl_802EDFEC
    b lbl_802EE05C
lbl_802EE02C:
    lwz r3, 0x250(r15)
    mr r4, r17
    lfs f1, 0x2fc(r28)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
lbl_802EE05C:
    addi r17, r17, 0x1
    addis r22, r22, 0x1
    cmpwi r17, 0x4
    addi r21, r21, 0x30
    addi r20, r20, 0x10
    addi r27, r27, 0x10
    addi r26, r26, 0x4
    addi r25, r25, 0x10
    addi r24, r24, 0x18
    addi r23, r23, 0x30
    blt lbl_802ED888
    lwz r3, 0x7c(r15)
    cmpwi r3, 0x64
    ble lbl_802EE0A0
    li r0, 0x0
    stw r0, 0x7c(r15)
    b lbl_802EE0A8
lbl_802EE0A0:
    addi r0, r3, 0x1
    stw r0, 0x7c(r15)
lbl_802EE0A8:
    opword 0xE3E100F8
    lfd f31, 0xf0(r1)
    opword 0xE3C100E8
    lfd f30, 0xe0(r1)
    opword 0xE3A100D8
    lfd f29, 0xd0(r1)
    opword 0xE38100C8
    lfd f28, 0xc0(r1)
    opword 0xE36100B8
    addi r11, r1, 0xb0
    lfd f27, 0xb0(r1)
    bl _restgpr_14
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

// asm_to_cpp: fn_802EE0E8
asm void fn_802EE0E8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    lis r5, 0x4330
    stw r31, 0x2c(r1)
    lis r31, lbl_80341A90@ha
    addi r31, r31, lbl_80341A90@l
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    lwz r0, 0x14(r3)
    stw r5, 0x8(r1)
    cmpwi r0, 0x2
    stw r5, 0x10(r1)
    bne lbl_802EE8F8
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x2ac(r3)
    bl fn_802E8598
    lfs f3, 0x340(r31)
    mr r29, r3
    lfs f2, 0x8(r3)
    lfs f1, 0x344(r31)
    lfs f0, 0xc(r3)
    fmuls f3, f3, f2
    lbz r0, 0x8f(r30)
    fmuls f0, f1, f0
    lfs f2, 0x31c(r31)
    cmpwi r0, 0x0
    fmuls f1, f3, f2
    fmuls f3, f0, f2
    beq lbl_802EE194
    lwz r3, 0x4(r30)
    lfs f2, 0x34(r3)
    lfs f0, 0x38(r3)
    fmuls f1, f1, f2
    fmuls f3, f3, f0
lbl_802EE194:
    lwz r3, 0x250(r30)
    fneg f2, f3
    mr r4, r28
    mr r8, r29
    lwz r12, 0x0(r3)
    lwz r5, 0x10(r29)
    lwz r12, 0x30(r12)
    lwz r6, 0x14(r29)
    lwz r7, 0x18(r29)
    mtctr r12
    bctrl
    lwz r3, 0x10(r29)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_802EE334
    lwz r0, 0x14(r30)
    cmpwi r0, 0x2
    bne lbl_802EE334
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    bne lbl_802EE298
    lwz r3, 0x250(r30)
    mr r4, r28
    lfs f1, 0x2e0(r31)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    lfs f2, 0x348(r31)
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    lwz r29, 0x428(r30)
    mr r3, r29
    bl fn_802E6300
    li r31, 0x1
    li r0, 0x2
    stw r31, 0x14(r29)
    stw r0, 0x18(r30)
    lwz r29, 0x420(r30)
    mr r3, r29
    bl fn_802E6300
    stw r31, 0x14(r29)
    lwz r29, 0x444(r30)
    mr r3, r29
    bl fn_802E6300
    stw r31, 0x14(r29)
    li r3, 0xa
    li r0, 0x0
    stw r3, 0x14(r30)
    li r3, 0x0
    lwz r4, 0x4(r30)
    stw r0, 0x0(r30)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE284
    li r3, 0x5
    li r4, 0x8
    mtctr r12
    bctrl
lbl_802EE284:
    cmpwi r3, 0x0
    bne lbl_802EE950
    li r3, 0x8
    bl fn_802E9460
    b lbl_802EE950
lbl_802EE298:
    cmpwi r0, 0x0
    bne lbl_802EE950
    lwz r3, 0x424(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802EE2B8
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_802EE2B8:
    lwz r3, 0x448(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802EE2D0
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_802EE2D0:
    li r3, 0x0
    li r0, 0x4
    stw r3, 0xb8(r30)
    stw r0, 0x18(r30)
    lwz r29, 0x428(r30)
    mr r3, r29
    bl fn_802E6300
    li r3, 0x1
    li r0, 0xe
    stw r3, 0x14(r29)
    li r3, 0x0
    stw r0, 0x14(r30)
    lwz r4, 0x4(r30)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE320
    li r3, 0x5
    li r4, 0x1
    mtctr r12
    bctrl
lbl_802EE320:
    cmpwi r3, 0x0
    bne lbl_802EE950
    li r3, 0x1
    bl fn_802E9460
    b lbl_802EE950
lbl_802EE334:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    bne lbl_802EE950
    lwz r0, 0x14(r30)
    cmpwi r0, 0x2
    bne lbl_802EE950
    rlwinm. r0, r3, 0, 19, 19
    beq lbl_802EE620
    lwz r3, 0x84(r30)
    cmpwi r3, 0x0
    ble lbl_802EE5E8
    subi r3, r3, 0x1
    li r0, 0x25
    stw r3, 0x84(r30)
    addi r3, r3, 0x15
    addi r5, r31, 0x68
    li r4, 0x0
    mtctr r0
lbl_802EE37C:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EE398
    lwz r0, 0x4(r5)
    cmpwi r0, 0xa
    bne lbl_802EE398
    b lbl_802EE3C8
lbl_802EE398:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EE3B8
    lwz r0, 0xc(r5)
    cmpwi r0, 0xa
    bne lbl_802EE3B8
    b lbl_802EE3C8
lbl_802EE3B8:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EE37C
    li r4, -0x1
lbl_802EE3C8:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r30, r0
    addi r6, r31, 0x68
    lwz r3, 0x2f0(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r30)
    addi r3, r3, 0x15
    mtctr r0
lbl_802EE3F4:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_802EE410
    lwz r0, 0x4(r6)
    cmpwi r0, 0x9
    bne lbl_802EE410
    b lbl_802EE440
lbl_802EE410:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_802EE430
    lwz r0, 0xc(r6)
    cmpwi r0, 0x9
    bne lbl_802EE430
    b lbl_802EE440
lbl_802EE430:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802EE3F4
    li r5, -0x1
lbl_802EE440:
    slwi r0, r5, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r29)
    addi r4, r31, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EE46C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xb
    bne lbl_802EE488
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_802EE488
    b lbl_802EE4B8
lbl_802EE488:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xb
    bne lbl_802EE4A8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_802EE4A8
    b lbl_802EE4B8
lbl_802EE4A8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EE46C
    li r3, -0x1
lbl_802EE4B8:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    lwz r0, 0x84(r30)
    cmpwi r0, 0x0
    bne lbl_802EE564
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE504
    li r3, 0x5
    li r4, 0xc
    mtctr r12
    bctrl
lbl_802EE504:
    cmpwi r3, 0x0
    bne lbl_802EE514
    li r3, 0xc
    bl fn_802E9460
lbl_802EE514:
    lfd f31, 0x310(r31)
    mr r29, r30
    lfs f30, 0x30c(r31)
    li r31, 0x0
lbl_802EE524:
    lwz r0, 0x84(r30)
    lwz r3, 0x2ac(r29)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_802E823C
    lwz r3, 0x2ac(r29)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_802EE524
    b lbl_802EE950
lbl_802EE564:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE588
    li r3, 0x5
    li r4, 0xa
    mtctr r12
    bctrl
lbl_802EE588:
    cmpwi r3, 0x0
    bne lbl_802EE598
    li r3, 0xa
    bl fn_802E9460
lbl_802EE598:
    lfd f31, 0x310(r31)
    mr r29, r30
    lfs f30, 0x30c(r31)
    li r31, 0x0
lbl_802EE5A8:
    lwz r0, 0x84(r30)
    lwz r3, 0x2ac(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_802E823C
    lwz r3, 0x2ac(r29)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_802EE5A8
    b lbl_802EE950
lbl_802EE5E8:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE60C
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_802EE60C:
    cmpwi r3, 0x0
    bne lbl_802EE950
    li r3, 0xd
    bl fn_802E9460
    b lbl_802EE950
lbl_802EE620:
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_802EE950
    lwz r3, 0x84(r30)
    cmpwi r3, 0xa
    bge lbl_802EE8C0
    li r0, 0x25
    addi r3, r3, 0x15
    addi r5, r31, 0x68
    li r4, 0x0
    mtctr r0
lbl_802EE648:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EE664
    lwz r0, 0x4(r5)
    cmpwi r0, 0x9
    bne lbl_802EE664
    b lbl_802EE694
lbl_802EE664:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802EE684
    lwz r0, 0xc(r5)
    cmpwi r0, 0x9
    bne lbl_802EE684
    b lbl_802EE694
lbl_802EE684:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EE648
    li r4, -0x1
lbl_802EE694:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r30, r0
    addi r6, r31, 0x68
    lwz r3, 0x2f0(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r30)
    addi r3, r3, 0x15
    mtctr r0
lbl_802EE6C0:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_802EE6DC
    lwz r0, 0x4(r6)
    cmpwi r0, 0xa
    bne lbl_802EE6DC
    b lbl_802EE70C
lbl_802EE6DC:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_802EE6FC
    lwz r0, 0xc(r6)
    cmpwi r0, 0xa
    bne lbl_802EE6FC
    b lbl_802EE70C
lbl_802EE6FC:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802EE6C0
    li r5, -0x1
lbl_802EE70C:
    slwi r0, r5, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r29)
    addi r5, r31, 0x68
    li r4, 0x0
    lwz r3, 0x84(r30)
    addi r3, r3, 0x1
    stw r3, 0x84(r30)
    mtctr r0
lbl_802EE744:
    lwz r0, 0x0(r5)
    cmpwi r0, 0xc
    bne lbl_802EE760
    lwz r0, 0x4(r5)
    cmpwi r0, 0x5
    bne lbl_802EE760
    b lbl_802EE790
lbl_802EE760:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0xc
    bne lbl_802EE780
    lwz r0, 0xc(r5)
    cmpwi r0, 0x5
    bne lbl_802EE780
    b lbl_802EE790
lbl_802EE780:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802EE744
    li r4, -0x1
lbl_802EE790:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    lwz r0, 0x84(r30)
    cmpwi r0, 0xa
    bne lbl_802EE83C
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE7DC
    li r3, 0x5
    li r4, 0xb
    mtctr r12
    bctrl
lbl_802EE7DC:
    cmpwi r3, 0x0
    bne lbl_802EE7EC
    li r3, 0xb
    bl fn_802E9460
lbl_802EE7EC:
    lfd f31, 0x310(r31)
    mr r29, r30
    lfs f30, 0x30c(r31)
    li r31, 0x0
lbl_802EE7FC:
    lwz r0, 0x84(r30)
    lwz r3, 0x2ac(r29)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_802E823C
    lwz r3, 0x2ac(r29)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_802EE7FC
    b lbl_802EE950
lbl_802EE83C:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE860
    li r3, 0x5
    li r4, 0x9
    mtctr r12
    bctrl
lbl_802EE860:
    cmpwi r3, 0x0
    bne lbl_802EE870
    li r3, 0x9
    bl fn_802E9460
lbl_802EE870:
    lfd f30, 0x310(r31)
    mr r29, r30
    lfs f31, 0x30c(r31)
    li r31, 0x0
lbl_802EE880:
    lwz r0, 0x84(r30)
    lwz r3, 0x2ac(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    fdivs f1, f0, f31
    bl fn_802E823C
    lwz r3, 0x2ac(r29)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_802EE880
    b lbl_802EE950
lbl_802EE8C0:
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EE8E4
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_802EE8E4:
    cmpwi r3, 0x0
    bne lbl_802EE950
    li r3, 0xd
    bl fn_802E9460
    b lbl_802EE950
lbl_802EE8F8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_802EE950
    lwz r0, 0x14(r3)
    cmpwi r0, 0x5
    bne lbl_802EE950
    lwz r0, 0x18(r3)
    slwi r0, r0, 2
    add r5, r3, r0
    lwz r5, 0x418(r5)
    lwz r0, 0x14(r5)
    cmpwi r0, 0x1
    beq lbl_802EE950
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x2ac(r3)
    bl fn_802E8598
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802EE950
    lwz r0, 0x61c(r30)
    stw r0, 0x1c(r30)
lbl_802EE950:
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x54(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_802EE980
asm void fn_802EE980(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    beq lbl_802EEA90
    bge lbl_802EE9B8
    cmpwi r0, 0x0
    bge lbl_802EE9C4
    b lbl_802EEC2C
lbl_802EE9B8:
    cmpwi r0, 0x3
    bge lbl_802EEC2C
    b lbl_802EEB64
lbl_802EE9C4:
    lis r31, lbl_8037C2B0@ha
    li r30, 0x0
    addi r31, r31, lbl_8037C2B0@l
lbl_802EE9D0:
    cmpwi r30, 0x2
    blt lbl_802EE9E0
    cmpwi r30, 0x9
    bne lbl_802EEA30
lbl_802EE9E0:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x250(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    b lbl_802EEA7C
lbl_802EEA30:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x250(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_802EEA7C:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_802EE9D0
    b lbl_802EEC2C
lbl_802EEA90:
    lis r31, lbl_8037C2B0@ha
    li r30, 0x0
    addi r31, r31, lbl_8037C2B0@l
lbl_802EEA9C:
    cmpwi r30, 0x0
    ble lbl_802EEAAC
    cmpwi r30, 0x7
    blt lbl_802EEAB4
lbl_802EEAAC:
    cmpwi r30, 0x9
    bne lbl_802EEB04
lbl_802EEAB4:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x250(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    b lbl_802EEB50
lbl_802EEB04:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x250(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_802EEB50:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_802EEA9C
    b lbl_802EEC2C
lbl_802EEB64:
    lis r31, lbl_8037C2B0@ha
    li r30, 0x0
    addi r31, r31, lbl_8037C2B0@l
lbl_802EEB70:
    cmpwi r30, 0x7
    blt lbl_802EEB80
    cmpwi r30, 0x9
    bne lbl_802EEBD0
lbl_802EEB80:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x250(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    b lbl_802EEC1C
lbl_802EEBD0:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x250(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_802EEC1C:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_802EEB70
lbl_802EEC2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802EEC48
asm M2C_UNK fn_802EEC48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r30, lbl_80341A90@ha
    mr r26, r3
    mr r27, r5
    addi r30, r30, lbl_80341A90@l
    bl fn_802F19D4
    lwz r4, 0x14(r26)
    mr r31, r3
    li r28, 0x0
    cmpwi r4, 0x2
    bne lbl_802EF9A0
    cmpwi r3, -0x1
    beq lbl_802EF9A0
    slwi r0, r3, 2
    add r5, r26, r0
    lwz r0, 0x20(r5)
    cmpwi r0, 0x0
    bne lbl_802EF9A0
    lwz r5, 0x0(r26)
    cmpwi r5, 0x2
    beq lbl_802EED74
    lwz r0, 0xc(r26)
    cmpw r3, r0
    bge lbl_802EED74
    lwz r0, 0x10(r26)
    addi r5, r30, 0x8
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_802EECF8
lbl_802EECD0:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EECEC
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_802EECEC
    b lbl_802EECFC
lbl_802EECEC:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_802EECD0
lbl_802EECF8:
    li r4, -0x1
lbl_802EECFC:
    slwi r0, r4, 2
    add r3, r26, r0
    lwz r29, 0x2c0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    bne lbl_802EF9A0
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EED6C
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EED54
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EED54:
    cmpwi r3, 0x0
    bne lbl_802EED64
    li r3, 0x4
    bl fn_802E9460
lbl_802EED64:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EED6C:
    li r28, 0x1
    b lbl_802EF9A0
lbl_802EED74:
    lwz r0, 0xc(r26)
    subf r0, r0, r3
    cmplwi r0, 0x9
    bgt lbl_802EF9A0
    lis r3, jumptable_8037C4C8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8037C4C8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r5, 0x0
    bne lbl_802EF9A0
    cmpwi r4, 0x2
    li r4, 0x1
    bne lbl_802EEDD0
    lwz r3, 0x448(r26)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802EEDD0
    lwz r3, 0x424(r26)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802EEDD4
lbl_802EEDD0:
    li r4, 0x0
lbl_802EEDD4:
    cmpwi r4, 0x0
    beq lbl_802EEE50
    lwz r28, 0x424(r26)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r4, 0x3
    stw r0, 0x14(r28)
    li r3, 0x0
    lwz r0, 0x68(r26)
    stw r4, 0x74(r26)
    cmpwi r0, 0x2
    stw r3, 0x6c(r26)
    ble lbl_802EEE48
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EEE30
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EEE30:
    cmpwi r3, 0x0
    bne lbl_802EEE40
    li r3, 0x4
    bl fn_802E9460
lbl_802EEE40:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EEE48:
    li r28, 0x1
    b lbl_802EF9A0
lbl_802EEE50:
    li r0, 0x3
    stw r0, 0x6c(r26)
    b lbl_802EF9A0
    cmpwi r5, 0x0
    bne lbl_802EF128
    li r0, 0x25
    addi r3, r30, 0x68
    li r29, 0x0
    mtctr r0
lbl_802EEE74:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bne lbl_802EEE90
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl_802EEE90
    b lbl_802EEEC0
lbl_802EEE90:
    lwz r0, 0x8(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x4
    bne lbl_802EEEB0
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_802EEEB0
    b lbl_802EEEC0
lbl_802EEEB0:
    addi r3, r3, 0x10
    addi r29, r29, 0x1
    bdnz lbl_802EEE74
    li r29, -0x1
lbl_802EEEC0:
    li r3, 0x25
    addi r5, r30, 0x68
    li r0, 0x1
    li r8, 0x0
    mtctr r3
lbl_802EEED4:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802EEEF0
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_802EEEF0
    b lbl_802EEF20
lbl_802EEEF0:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_802EEF10
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_802EEF10
    b lbl_802EEF20
lbl_802EEF10:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_802EEED4
    li r8, -0x1
lbl_802EEF20:
    li r3, 0x25
    addi r5, r30, 0x68
    li r7, 0x0
    mtctr r3
lbl_802EEF30:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_802EEF4C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_802EEF4C
    b lbl_802EEF7C
lbl_802EEF4C:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_802EEF6C
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_802EEF6C
    b lbl_802EEF7C
lbl_802EEF6C:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_802EEF30
    li r7, -0x1
lbl_802EEF7C:
    li r3, 0x25
    addi r5, r30, 0x68
    li r6, 0x0
    mtctr r3
lbl_802EEF8C:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802EEFA8
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_802EEFA8
    b lbl_802EEFD8
lbl_802EEFA8:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_802EEFC8
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_802EEFC8
    b lbl_802EEFD8
lbl_802EEFC8:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_802EEF8C
    li r6, -0x1
lbl_802EEFD8:
    li r3, 0x25
    addi r9, r30, 0x68
    li r5, 0x0
    mtctr r3
lbl_802EEFE8:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_802EF004
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_802EF004
    b lbl_802EF034
lbl_802EF004:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_802EF024
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_802EF024
    b lbl_802EF034
lbl_802EF024:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802EEFE8
    li r5, -0x1
lbl_802EF034:
    cmpwi r4, 0x2
    bne lbl_802EF09C
    slwi r3, r8, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EF09C
    slwi r3, r7, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EF09C
    slwi r3, r6, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EF09C
    slwi r3, r5, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_802EF0A0
lbl_802EF09C:
    li r0, 0x0
lbl_802EF0A0:
    cmpwi r0, 0x0
    beq lbl_802EF120
    slwi r0, r29, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    stw r29, 0x78(r26)
    cmpwi r0, 0x2
    stw r3, 0x70(r26)
    ble lbl_802EF118
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF100
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF100:
    cmpwi r3, 0x0
    bne lbl_802EF110
    li r3, 0x4
    bl fn_802E9460
lbl_802EF110:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF118:
    li r28, 0x1
    b lbl_802EF9A0
lbl_802EF120:
    stw r29, 0x70(r26)
    b lbl_802EF9A0
lbl_802EF128:
    cmpwi r5, 0x1
    bne lbl_802EF9A0
    li r0, 0x25
    addi r3, r30, 0x68
    li r29, 0x0
    mtctr r0
lbl_802EF140:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bne lbl_802EF15C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x13
    bne lbl_802EF15C
    b lbl_802EF18C
lbl_802EF15C:
    lwz r0, 0x8(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x4
    bne lbl_802EF17C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x13
    bne lbl_802EF17C
    b lbl_802EF18C
lbl_802EF17C:
    addi r3, r3, 0x10
    addi r29, r29, 0x1
    bdnz lbl_802EF140
    li r29, -0x1
lbl_802EF18C:
    li r3, 0x25
    addi r5, r30, 0x68
    li r0, 0x1
    li r8, 0x0
    mtctr r3
lbl_802EF1A0:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802EF1BC
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_802EF1BC
    b lbl_802EF1EC
lbl_802EF1BC:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_802EF1DC
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_802EF1DC
    b lbl_802EF1EC
lbl_802EF1DC:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_802EF1A0
    li r8, -0x1
lbl_802EF1EC:
    li r3, 0x25
    addi r5, r30, 0x68
    li r7, 0x0
    mtctr r3
lbl_802EF1FC:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_802EF218
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_802EF218
    b lbl_802EF248
lbl_802EF218:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_802EF238
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_802EF238
    b lbl_802EF248
lbl_802EF238:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_802EF1FC
    li r7, -0x1
lbl_802EF248:
    li r3, 0x25
    addi r5, r30, 0x68
    li r6, 0x0
    mtctr r3
lbl_802EF258:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802EF274
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_802EF274
    b lbl_802EF2A4
lbl_802EF274:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_802EF294
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_802EF294
    b lbl_802EF2A4
lbl_802EF294:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_802EF258
    li r6, -0x1
lbl_802EF2A4:
    li r3, 0x25
    addi r9, r30, 0x68
    li r5, 0x0
    mtctr r3
lbl_802EF2B4:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_802EF2D0
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_802EF2D0
    b lbl_802EF300
lbl_802EF2D0:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_802EF2F0
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_802EF2F0
    b lbl_802EF300
lbl_802EF2F0:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802EF2B4
    li r5, -0x1
lbl_802EF300:
    cmpwi r4, 0x2
    bne lbl_802EF368
    slwi r3, r8, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EF368
    slwi r3, r7, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EF368
    slwi r3, r6, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EF368
    slwi r3, r5, 2
    add r3, r26, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_802EF36C
lbl_802EF368:
    li r0, 0x0
lbl_802EF36C:
    cmpwi r0, 0x0
    beq lbl_802EF3EC
    slwi r0, r29, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    stw r29, 0x78(r26)
    cmpwi r0, 0x2
    stw r3, 0x70(r26)
    ble lbl_802EF3E4
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF3CC
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF3CC:
    cmpwi r3, 0x0
    bne lbl_802EF3DC
    li r3, 0x4
    bl fn_802E9460
lbl_802EF3DC:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF3E4:
    li r28, 0x1
    b lbl_802EF9A0
lbl_802EF3EC:
    stw r29, 0x70(r26)
    b lbl_802EF9A0
    cmpwi r5, 0x1
    bne lbl_802EF9A0
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EF40C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x6
    bne lbl_802EF428
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_802EF428
    b lbl_802EF458
lbl_802EF428:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x6
    bne lbl_802EF448
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_802EF448
    b lbl_802EF458
lbl_802EF448:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EF40C
    li r3, -0x1
lbl_802EF458:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EF4BC
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF4A4
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF4A4:
    cmpwi r3, 0x0
    bne lbl_802EF4B4
    li r3, 0x4
    bl fn_802E9460
lbl_802EF4B4:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF4BC:
    li r28, 0x1
    b lbl_802EF9A0
    cmpwi r5, 0x1
    bne lbl_802EF9A0
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EF4DC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x7
    bne lbl_802EF4F8
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_802EF4F8
    b lbl_802EF528
lbl_802EF4F8:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x7
    bne lbl_802EF518
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_802EF518
    b lbl_802EF528
lbl_802EF518:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EF4DC
    li r3, -0x1
lbl_802EF528:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EF58C
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF574
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF574:
    cmpwi r3, 0x0
    bne lbl_802EF584
    li r3, 0x4
    bl fn_802E9460
lbl_802EF584:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF58C:
    li r28, 0x1
    b lbl_802EF9A0
    cmpwi r5, 0x1
    bne lbl_802EF9A0
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EF5AC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x8
    bne lbl_802EF5C8
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_802EF5C8
    b lbl_802EF5F8
lbl_802EF5C8:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x8
    bne lbl_802EF5E8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_802EF5E8
    b lbl_802EF5F8
lbl_802EF5E8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EF5AC
    li r3, -0x1
lbl_802EF5F8:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EF65C
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF644
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF644:
    cmpwi r3, 0x0
    bne lbl_802EF654
    li r3, 0x4
    bl fn_802E9460
lbl_802EF654:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF65C:
    li r28, 0x1
    b lbl_802EF9A0
    cmpwi r5, 0x1
    bne lbl_802EF9A0
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EF67C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x9
    bne lbl_802EF698
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_802EF698
    b lbl_802EF6C8
lbl_802EF698:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x9
    bne lbl_802EF6B8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_802EF6B8
    b lbl_802EF6C8
lbl_802EF6B8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EF67C
    li r3, -0x1
lbl_802EF6C8:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EF72C
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF714
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF714:
    cmpwi r3, 0x0
    bne lbl_802EF724
    li r3, 0x4
    bl fn_802E9460
lbl_802EF724:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF72C:
    li r28, 0x1
    b lbl_802EF9A0
    cmpwi r5, 0x1
    bne lbl_802EF9A0
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EF74C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xa
    bne lbl_802EF768
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_802EF768
    b lbl_802EF798
lbl_802EF768:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xa
    bne lbl_802EF788
    lwz r0, 0xc(r4)
    cmpwi r0, 0x4
    bne lbl_802EF788
    b lbl_802EF798
lbl_802EF788:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EF74C
    li r3, -0x1
lbl_802EF798:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EF7FC
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF7E4
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF7E4:
    cmpwi r3, 0x0
    bne lbl_802EF7F4
    li r3, 0x4
    bl fn_802E9460
lbl_802EF7F4:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF7FC:
    li r28, 0x1
    b lbl_802EF9A0
    cmpwi r5, 0x2
    bne lbl_802EF9A0
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EF81C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x11
    bne lbl_802EF838
    lwz r0, 0x4(r4)
    cmpwi r0, 0xb
    bne lbl_802EF838
    b lbl_802EF868
lbl_802EF838:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x11
    bne lbl_802EF858
    lwz r0, 0xc(r4)
    cmpwi r0, 0xb
    bne lbl_802EF858
    b lbl_802EF868
lbl_802EF858:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EF81C
    li r3, -0x1
lbl_802EF868:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EF8CC
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF8B4
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF8B4:
    cmpwi r3, 0x0
    bne lbl_802EF8C4
    li r3, 0x4
    bl fn_802E9460
lbl_802EF8C4:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF8CC:
    li r28, 0x1
    b lbl_802EF9A0
    cmpwi r5, 0x2
    bne lbl_802EF9A0
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802EF8EC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x12
    bne lbl_802EF908
    lwz r0, 0x4(r4)
    cmpwi r0, 0xb
    bne lbl_802EF908
    b lbl_802EF938
lbl_802EF908:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x12
    bne lbl_802EF928
    lwz r0, 0xc(r4)
    cmpwi r0, 0xb
    bne lbl_802EF928
    b lbl_802EF938
lbl_802EF928:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802EF8EC
    li r3, -0x1
lbl_802EF938:
    slwi r0, r3, 2
    add r3, r26, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x68(r26)
    cmpwi r0, 0x2
    ble lbl_802EF99C
    lwz r4, 0x4(r26)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802EF984
    li r3, 0x5
    li r4, 0x4
    mtctr r12
    bctrl
lbl_802EF984:
    cmpwi r3, 0x0
    bne lbl_802EF994
    li r3, 0x4
    bl fn_802E9460
lbl_802EF994:
    li r0, 0x0
    stw r0, 0x68(r26)
lbl_802EF99C:
    li r28, 0x1
lbl_802EF9A0:
    lwz r3, 0xc(r26)
    addi r4, r3, 0x1
    cmpw r31, r4
    beq lbl_802EF9BC
    addi r0, r3, 0x9
    cmpw r31, r0
    bne lbl_802EF9F0
lbl_802EF9BC:
    slwi r0, r4, 2
    add r4, r26, r0
    lwz r3, 0x20(r4)
    addi r0, r3, 0x1
    stw r0, 0x20(r4)
    lwz r3, 0xc(r26)
    addi r0, r3, 0x9
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x20(r4)
    addi r0, r3, 0x1
    stw r0, 0x20(r4)
    b lbl_802EFA04
lbl_802EF9F0:
    slwi r0, r31, 2
    add r4, r26, r0
    lwz r3, 0x20(r4)
    addi r0, r3, 0x1
    stw r0, 0x20(r4)
lbl_802EFA04:
    cmpwi r28, 0x0
    beq lbl_802EFA60
    cmpwi r27, 0x0
    beq lbl_802EFA60
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x2ac(r4)
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_802EFA60
    lfs f1, 0x220(r4)
    lfs f0, 0x2e0(r30)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_802EFA60
    lfs f0, 0x34c(r30)
    stfs f0, 0x210(r4)
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x2ac(r3)
    bl fn_802E859C
lbl_802EFA60:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802EFA78
asm M2C_UNK fn_802EFA78() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl fn_802F19D4
    slwi r0, r3, 2
    add r6, r30, r0
    lwz r4, 0x20(r6)
    cmpwi r4, 0x0
    ble lbl_802EFB04
    lwz r5, 0xc(r30)
    addi r7, r5, 0x1
    cmpw r3, r7
    beq lbl_802EFAC8
    addi r0, r5, 0x9
    cmpw r3, r0
    bne lbl_802EFAFC
lbl_802EFAC8:
    slwi r0, r7, 2
    add r5, r30, r0
    lwz r4, 0x20(r5)
    subi r0, r4, 0x1
    stw r0, 0x20(r5)
    lwz r4, 0xc(r30)
    addi r0, r4, 0x9
    slwi r0, r0, 2
    add r5, r30, r0
    lwz r4, 0x20(r5)
    subi r0, r4, 0x1
    stw r0, 0x20(r5)
    b lbl_802EFB04
lbl_802EFAFC:
    subi r0, r4, 0x1
    stw r0, 0x20(r6)
lbl_802EFB04:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x2
    bne lbl_802F051C
    cmpwi r3, -0x1
    beq lbl_802F051C
    lwz r0, 0x20(r6)
    cmpwi r0, 0x0
    bne lbl_802F051C
    lwz r5, 0x0(r30)
    cmpwi r5, 0x2
    beq lbl_802EFBA4
    lwz r0, 0xc(r30)
    cmpw r3, r0
    bge lbl_802EFBA4
    lwz r0, 0x10(r30)
    lis r5, lbl_80341A98@ha
    addi r5, r5, lbl_80341A98@l
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_802EFB80
lbl_802EFB58:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802EFB74
    lwz r0, 0x4(r5)
    cmpwi r0, 0x2
    bne lbl_802EFB74
    b lbl_802EFB84
lbl_802EFB74:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_802EFB58
lbl_802EFB80:
    li r4, -0x1
lbl_802EFB84:
    slwi r0, r4, 2
    add r3, r30, r0
    lwz r30, 0x2c0(r3)
    mr r3, r30
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r30)
    b lbl_802F051C
lbl_802EFBA4:
    lwz r0, 0xc(r30)
    subf r0, r0, r3
    cmplwi r0, 0x9
    bgt lbl_802F051C
    lis r3, jumptable_8037C4F0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8037C4F0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r5, 0x0
    bne lbl_802F051C
    cmpwi r4, 0x2
    li r4, 0x1
    bne lbl_802EFC00
    lwz r3, 0x448(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_802EFC00
    lwz r3, 0x424(r30)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802EFC04
lbl_802EFC00:
    li r4, 0x0
lbl_802EFC04:
    cmpwi r4, 0x0
    beq lbl_802EFC34
    lwz r31, 0x448(r30)
    mr r3, r31
    bl fn_802E6300
    li r0, 0x1
    li r3, 0xc
    stw r0, 0x14(r31)
    li r0, 0x0
    stw r3, 0x74(r30)
    stw r0, 0x6c(r30)
    b lbl_802F051C
lbl_802EFC34:
    li r0, 0xc
    stw r0, 0x6c(r30)
    b lbl_802F051C
    cmpwi r5, 0x0
    bne lbl_802EFED4
    lis r3, lbl_80341AF8@ha
    li r0, 0x25
    addi r3, r3, lbl_80341AF8@l
    li r31, 0x0
    mtctr r0
lbl_802EFC5C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x5
    bne lbl_802EFC78
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    bne lbl_802EFC78
    b lbl_802EFCA8
lbl_802EFC78:
    lwz r0, 0x8(r3)
    addi r31, r31, 0x1
    cmpwi r0, 0x5
    bne lbl_802EFC98
    lwz r0, 0xc(r3)
    cmpwi r0, 0x3
    bne lbl_802EFC98
    b lbl_802EFCA8
lbl_802EFC98:
    addi r3, r3, 0x10
    addi r31, r31, 0x1
    bdnz lbl_802EFC5C
    li r31, -0x1
lbl_802EFCA8:
    lis r5, lbl_80341AF8@ha
    li r3, 0x25
    addi r5, r5, lbl_80341AF8@l
    li r0, 0x1
    li r8, 0x0
    mtctr r3
lbl_802EFCC0:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802EFCDC
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_802EFCDC
    b lbl_802EFD0C
lbl_802EFCDC:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_802EFCFC
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_802EFCFC
    b lbl_802EFD0C
lbl_802EFCFC:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_802EFCC0
    li r8, -0x1
lbl_802EFD0C:
    lis r5, lbl_80341AF8@ha
    li r3, 0x25
    addi r5, r5, lbl_80341AF8@l
    li r7, 0x0
    mtctr r3
lbl_802EFD20:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_802EFD3C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_802EFD3C
    b lbl_802EFD6C
lbl_802EFD3C:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_802EFD5C
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_802EFD5C
    b lbl_802EFD6C
lbl_802EFD5C:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_802EFD20
    li r7, -0x1
lbl_802EFD6C:
    lis r5, lbl_80341AF8@ha
    li r3, 0x25
    addi r5, r5, lbl_80341AF8@l
    li r6, 0x0
    mtctr r3
lbl_802EFD80:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802EFD9C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_802EFD9C
    b lbl_802EFDCC
lbl_802EFD9C:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_802EFDBC
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_802EFDBC
    b lbl_802EFDCC
lbl_802EFDBC:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_802EFD80
    li r6, -0x1
lbl_802EFDCC:
    lis r9, lbl_80341AF8@ha
    li r3, 0x25
    addi r9, r9, lbl_80341AF8@l
    li r5, 0x0
    mtctr r3
lbl_802EFDE0:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_802EFDFC
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_802EFDFC
    b lbl_802EFE2C
lbl_802EFDFC:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_802EFE1C
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_802EFE1C
    b lbl_802EFE2C
lbl_802EFE1C:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802EFDE0
    li r5, -0x1
lbl_802EFE2C:
    cmpwi r4, 0x2
    bne lbl_802EFE94
    slwi r3, r8, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EFE94
    slwi r3, r7, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EFE94
    slwi r3, r6, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802EFE94
    slwi r3, r5, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_802EFE98
lbl_802EFE94:
    li r0, 0x0
lbl_802EFE98:
    cmpwi r0, 0x0
    beq lbl_802EFECC
    slwi r0, r31, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14(r29)
    stw r31, 0x78(r30)
    stw r0, 0x70(r30)
    b lbl_802F051C
lbl_802EFECC:
    stw r31, 0x70(r30)
    b lbl_802F051C
lbl_802EFED4:
    cmpwi r5, 0x1
    bne lbl_802F051C
    lis r3, lbl_80341AF8@ha
    li r0, 0x25
    addi r3, r3, lbl_80341AF8@l
    li r31, 0x0
    mtctr r0
lbl_802EFEF0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x5
    bne lbl_802EFF0C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x14
    bne lbl_802EFF0C
    b lbl_802EFF3C
lbl_802EFF0C:
    lwz r0, 0x8(r3)
    addi r31, r31, 0x1
    cmpwi r0, 0x5
    bne lbl_802EFF2C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x14
    bne lbl_802EFF2C
    b lbl_802EFF3C
lbl_802EFF2C:
    addi r3, r3, 0x10
    addi r31, r31, 0x1
    bdnz lbl_802EFEF0
    li r31, -0x1
lbl_802EFF3C:
    lis r5, lbl_80341AF8@ha
    li r3, 0x25
    addi r5, r5, lbl_80341AF8@l
    li r0, 0x1
    li r8, 0x0
    mtctr r3
lbl_802EFF54:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802EFF70
    lwz r3, 0x4(r5)
    cmpwi r3, 0x2
    bne lbl_802EFF70
    b lbl_802EFFA0
lbl_802EFF70:
    lwz r3, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r3, 0x4
    bne lbl_802EFF90
    lwz r3, 0xc(r5)
    cmpwi r3, 0x2
    bne lbl_802EFF90
    b lbl_802EFFA0
lbl_802EFF90:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_802EFF54
    li r8, -0x1
lbl_802EFFA0:
    lis r5, lbl_80341AF8@ha
    li r3, 0x25
    addi r5, r5, lbl_80341AF8@l
    li r7, 0x0
    mtctr r3
lbl_802EFFB4:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x5
    bne lbl_802EFFD0
    lwz r3, 0x4(r5)
    cmpwi r3, 0x3
    bne lbl_802EFFD0
    b lbl_802F0000
lbl_802EFFD0:
    lwz r3, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r3, 0x5
    bne lbl_802EFFF0
    lwz r3, 0xc(r5)
    cmpwi r3, 0x3
    bne lbl_802EFFF0
    b lbl_802F0000
lbl_802EFFF0:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_802EFFB4
    li r7, -0x1
lbl_802F0000:
    lis r5, lbl_80341AF8@ha
    li r3, 0x25
    addi r5, r5, lbl_80341AF8@l
    li r6, 0x0
    mtctr r3
lbl_802F0014:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x4
    bne lbl_802F0030
    lwz r3, 0x4(r5)
    cmpwi r3, 0x13
    bne lbl_802F0030
    b lbl_802F0060
lbl_802F0030:
    lwz r3, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r3, 0x4
    bne lbl_802F0050
    lwz r3, 0xc(r5)
    cmpwi r3, 0x13
    bne lbl_802F0050
    b lbl_802F0060
lbl_802F0050:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_802F0014
    li r6, -0x1
lbl_802F0060:
    lis r9, lbl_80341AF8@ha
    li r3, 0x25
    addi r9, r9, lbl_80341AF8@l
    li r5, 0x0
    mtctr r3
lbl_802F0074:
    lwz r3, 0x0(r9)
    cmpwi r3, 0x5
    bne lbl_802F0090
    lwz r3, 0x4(r9)
    cmpwi r3, 0x14
    bne lbl_802F0090
    b lbl_802F00C0
lbl_802F0090:
    lwz r3, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r3, 0x5
    bne lbl_802F00B0
    lwz r3, 0xc(r9)
    cmpwi r3, 0x14
    bne lbl_802F00B0
    b lbl_802F00C0
lbl_802F00B0:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802F0074
    li r5, -0x1
lbl_802F00C0:
    cmpwi r4, 0x2
    bne lbl_802F0128
    slwi r3, r8, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802F0128
    slwi r3, r7, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802F0128
    slwi r3, r6, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    beq lbl_802F0128
    slwi r3, r5, 2
    add r3, r30, r3
    lwz r3, 0x2f0(r3)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x1
    bne lbl_802F012C
lbl_802F0128:
    li r0, 0x0
lbl_802F012C:
    cmpwi r0, 0x0
    beq lbl_802F0160
    slwi r0, r31, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14(r29)
    stw r31, 0x78(r30)
    stw r0, 0x70(r30)
    b lbl_802F051C
lbl_802F0160:
    stw r31, 0x70(r30)
    b lbl_802F051C
    cmpwi r5, 0x1
    bne lbl_802F051C
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F0184:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x6
    bne lbl_802F01A0
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_802F01A0
    b lbl_802F01D0
lbl_802F01A0:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x6
    bne lbl_802F01C0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_802F01C0
    b lbl_802F01D0
lbl_802F01C0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F0184
    li r3, -0x1
lbl_802F01D0:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_802F051C
    cmpwi r5, 0x1
    bne lbl_802F051C
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F020C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x7
    bne lbl_802F0228
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_802F0228
    b lbl_802F0258
lbl_802F0228:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x7
    bne lbl_802F0248
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_802F0248
    b lbl_802F0258
lbl_802F0248:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F020C
    li r3, -0x1
lbl_802F0258:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_802F051C
    cmpwi r5, 0x1
    bne lbl_802F051C
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F0294:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x8
    bne lbl_802F02B0
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_802F02B0
    b lbl_802F02E0
lbl_802F02B0:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x8
    bne lbl_802F02D0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_802F02D0
    b lbl_802F02E0
lbl_802F02D0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F0294
    li r3, -0x1
lbl_802F02E0:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_802F051C
    cmpwi r5, 0x1
    bne lbl_802F051C
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F031C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x9
    bne lbl_802F0338
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_802F0338
    b lbl_802F0368
lbl_802F0338:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x9
    bne lbl_802F0358
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_802F0358
    b lbl_802F0368
lbl_802F0358:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F031C
    li r3, -0x1
lbl_802F0368:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_802F051C
    cmpwi r5, 0x1
    bne lbl_802F051C
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F03A4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xa
    bne lbl_802F03C0
    lwz r0, 0x4(r4)
    cmpwi r0, 0x7
    bne lbl_802F03C0
    b lbl_802F03F0
lbl_802F03C0:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xa
    bne lbl_802F03E0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x7
    bne lbl_802F03E0
    b lbl_802F03F0
lbl_802F03E0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F03A4
    li r3, -0x1
lbl_802F03F0:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_802F051C
    cmpwi r5, 0x2
    bne lbl_802F051C
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F042C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x11
    bne lbl_802F0448
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_802F0448
    b lbl_802F0478
lbl_802F0448:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x11
    bne lbl_802F0468
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_802F0468
    b lbl_802F0478
lbl_802F0468:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F042C
    li r3, -0x1
lbl_802F0478:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
    b lbl_802F051C
    cmpwi r5, 0x2
    bne lbl_802F051C
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F04B4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x12
    bne lbl_802F04D0
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_802F04D0
    b lbl_802F0500
lbl_802F04D0:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x12
    bne lbl_802F04F0
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_802F04F0
    b lbl_802F0500
lbl_802F04F0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F04B4
    li r3, -0x1
lbl_802F0500:
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r29, 0x2f0(r3)
    mr r3, r29
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r29)
lbl_802F051C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F0538
asm M2C_UNK fn_802F0538() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_27
    lis r0, 0x4330
    lis r30, lbl_80341A90@ha
    stw r0, 0x8(r1)
    mr r29, r3
    addi r30, r30, lbl_80341A90@l
    stw r0, 0x10(r1)
    bl fn_802F19D4
    lwz r0, 0x14(r29)
    mr r31, r3
    cmpwi r0, 0x2
    bne lbl_802F174C
    cmpwi r3, -0x1
    beq lbl_802F174C
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    bne lbl_802F07F8
    lwz r0, 0xc(r29)
    cmpw r3, r0
    bge lbl_802F07F8
    lwz r6, 0x10(r29)
    addi r0, r3, 0x1
    stw r0, 0xb8(r29)
    addi r5, r30, 0x8
    addi r3, r3, 0x4
    li r4, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_802F05F4
lbl_802F05CC:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802F05E8
    lwz r0, 0x4(r5)
    cmpwi r0, 0x1
    bne lbl_802F05E8
    b lbl_802F05F8
lbl_802F05E8:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_802F05CC
lbl_802F05F4:
    li r4, -0x1
lbl_802F05F8:
    slwi r0, r4, 2
    stw r4, 0x18(r29)
    add r3, r29, r0
    lwz r30, 0x2c0(r3)
    mr r3, r30
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x14(r30)
    lwz r4, 0x4(r29)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F063C
    li r3, 0x5
    li r4, 0x5
    mtctr r12
    bctrl
lbl_802F063C:
    cmpwi r3, 0x0
    bne lbl_802F064C
    li r3, 0x5
    bl fn_802E9460
lbl_802F064C:
    slwi r0, r31, 2
    add r3, r29, r0
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_802F07EC
    li r3, 0xb
    li r0, 0x2
    stw r3, 0x14(r29)
    lis r4, lbl_8037C2FC@ha
    lwz r3, 0x238(r29)
    addi r4, r4, lbl_8037C2FC@l
    stw r0, 0x0(r29)
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r4, 0x8(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    lis r28, lbl_80462450@ha
    mr r30, r3
    lwz r12, 0xc(r12)
    addi r28, r28, lbl_80462450@l
    mtctr r12
    bctrl
    b lbl_802F06CC
lbl_802F06B8:
    cmplw r3, r28
    bne lbl_802F06C8
    li r0, 0x1
    b lbl_802F06D8
lbl_802F06C8:
    lwz r3, 0x0(r3)
lbl_802F06CC:
    cmpwi r3, 0x0
    bne lbl_802F06B8
    li r0, 0x0
lbl_802F06D8:
    cmpwi r0, 0x0
    beq lbl_802F06E4
    b lbl_802F06E8
lbl_802F06E4:
    li r30, 0x0
lbl_802F06E8:
    lwz r5, 0x4(r29)
    addi r0, r31, 0x1
    lwz r3, 0x24(r5)
    and. r0, r3, r0
    beq lbl_802F073C
    lwz r3, 0x1c(r5)
    addi r0, r31, 0x2
    slwi r7, r0, 2
    li r6, 0x0
    mulli r0, r3, 0x18
    add r0, r29, r0
    add r3, r0, r7
    lwz r3, 0xbc(r3)
lbl_802F071C:
    clrlslwi r0, r6, 16, 1
    lhzx r0, r3, r0
    cmplwi r0, 0xff1f
    beq lbl_802F0778
    cmplwi r0, 0x3f
    beq lbl_802F0778
    addi r6, r6, 0x1
    b lbl_802F071C
lbl_802F073C:
    lwz r0, 0x1c(r5)
    addi r3, r31, 0x2
    slwi r7, r3, 2
    li r6, 0x0
    mulli r3, r0, 0x18
    add r0, r7, r29
    add r3, r3, r0
    lwz r4, 0xbc(r3)
lbl_802F075C:
    clrlslwi r0, r6, 16, 1
    add r3, r4, r0
    lhz r0, 0x2(r3)
    cmplwi r0, 0x22
    beq lbl_802F0778
    addi r6, r6, 0x1
    b lbl_802F075C
lbl_802F0778:
    lwz r0, 0x1c(r5)
    clrlwi r4, r6, 16
    lwz r12, 0x0(r30)
    mr r3, r30
    mulli r6, r0, 0x18
    addi r0, r4, 0x1
    lwz r12, 0x70(r12)
    li r5, 0x0
    add r4, r29, r6
    add r4, r4, r7
    clrlwi r6, r0, 16
    lwz r4, 0xbc(r4)
    mtctr r12
    bctrl
    lwz r3, 0x238(r29)
    lis r4, lbl_8037C2FC@ha
    addi r4, r4, lbl_8037C2FC@l
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r4, 0x8(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_802F174C
lbl_802F07EC:
    li r0, 0xf
    stw r0, 0x14(r29)
    b lbl_802F174C
lbl_802F07F8:
    lwz r0, 0xc(r29)
    subf r0, r0, r3
    cmplwi r0, 0x9
    bgt lbl_802F174C
    lis r3, jumptable_8037C518@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8037C518@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x448(r29)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802F0838
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_802F0838:
    lwz r3, 0x424(r29)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_802F0850
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_802F0850:
    li r3, 0x0
    li r0, 0x4
    stw r3, 0xb8(r29)
    stw r0, 0x18(r29)
    lwz r28, 0x428(r29)
    mr r3, r28
    bl fn_802E6300
    li r3, 0x1
    li r0, 0xe
    stw r3, 0x14(r28)
    li r3, 0x0
    stw r0, 0x14(r29)
    lwz r4, 0x4(r29)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F08A0
    li r3, 0x5
    li r4, 0x1
    mtctr r12
    bctrl
lbl_802F08A0:
    cmpwi r3, 0x0
    bne lbl_802F174C
    li r3, 0x1
    bl fn_802E9460
    b lbl_802F174C
    cmpwi r4, 0x1
    bne lbl_802F0940
    lwz r28, 0x428(r29)
    mr r3, r28
    bl fn_802E6300
    li r30, 0x1
    stw r30, 0x14(r28)
    lwz r28, 0x444(r29)
    mr r3, r28
    bl fn_802E6300
    stw r30, 0x14(r28)
    li r0, 0x2
    stw r0, 0x18(r29)
    lwz r28, 0x420(r29)
    mr r3, r28
    bl fn_802E6300
    stw r30, 0x14(r28)
    li r3, 0xa
    li r0, 0x0
    stw r3, 0x14(r29)
    li r3, 0x0
    lwz r4, 0x4(r29)
    stw r0, 0x0(r29)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F092C
    li r3, 0x5
    li r4, 0x8
    mtctr r12
    bctrl
lbl_802F092C:
    cmpwi r3, 0x0
    bne lbl_802F174C
    li r3, 0x8
    bl fn_802E9460
    b lbl_802F174C
lbl_802F0940:
    cmpwi r4, 0x0
    bne lbl_802F174C
    lwz r28, 0x41c(r29)
    mr r3, r28
    bl fn_802E6300
    li r30, 0x1
    li r0, 0x9
    stw r30, 0x14(r28)
    stw r0, 0x18(r29)
    lwz r28, 0x43c(r29)
    mr r3, r28
    bl fn_802E6300
    stw r30, 0x14(r28)
    li r0, 0xa
    lis r3, lbl_8037C2B0@ha
    li r30, 0x2
    addi r3, r3, lbl_8037C2B0@l
    stw r0, 0x14(r29)
    addi r28, r3, 0x8
lbl_802F098C:
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x0(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r30, r30, 0x1
    cmpwi r30, 0x7
    addi r28, r28, 0x4
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    blt lbl_802F098C
    li r0, 0x1
    lwz r4, 0x4(r29)
    stw r0, 0x0(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F09F8
    li r3, 0x5
    li r4, 0x5
    mtctr r12
    bctrl
lbl_802F09F8:
    cmpwi r3, 0x0
    bne lbl_802F174C
    li r3, 0x5
    bl fn_802E9460
    b lbl_802F174C
    lwz r3, 0x84(r29)
    cmpwi r3, 0x0
    ble lbl_802F0CA0
    subi r3, r3, 0x1
    li r0, 0x25
    stw r3, 0x84(r29)
    addi r3, r3, 0x15
    addi r5, r30, 0x68
    li r4, 0x0
    mtctr r0
lbl_802F0A34:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802F0A50
    lwz r0, 0x4(r5)
    cmpwi r0, 0xa
    bne lbl_802F0A50
    b lbl_802F0A80
lbl_802F0A50:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802F0A70
    lwz r0, 0xc(r5)
    cmpwi r0, 0xa
    bne lbl_802F0A70
    b lbl_802F0A80
lbl_802F0A70:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802F0A34
    li r4, -0x1
lbl_802F0A80:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r29, r0
    addi r6, r30, 0x68
    lwz r3, 0x2f0(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r29)
    addi r3, r3, 0x15
    mtctr r0
lbl_802F0AAC:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_802F0AC8
    lwz r0, 0x4(r6)
    cmpwi r0, 0x9
    bne lbl_802F0AC8
    b lbl_802F0AF8
lbl_802F0AC8:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_802F0AE8
    lwz r0, 0xc(r6)
    cmpwi r0, 0x9
    bne lbl_802F0AE8
    b lbl_802F0AF8
lbl_802F0AE8:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802F0AAC
    li r5, -0x1
lbl_802F0AF8:
    slwi r0, r5, 2
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r0, 0x84(r29)
    cmpwi r0, 0x0
    bne lbl_802F0BA4
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F0B44
    li r3, 0x5
    li r4, 0xc
    mtctr r12
    bctrl
lbl_802F0B44:
    cmpwi r3, 0x0
    bne lbl_802F0B54
    li r3, 0xc
    bl fn_802E9460
lbl_802F0B54:
    lfd f31, 0x310(r30)
    mr r28, r29
    lfs f30, 0x30c(r30)
    li r31, 0x0
lbl_802F0B64:
    lwz r0, 0x84(r29)
    lwz r3, 0x2ac(r28)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_802E823C
    lwz r3, 0x2ac(r28)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x4
    blt lbl_802F0B64
    b lbl_802F0C24
lbl_802F0BA4:
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F0BC8
    li r3, 0x5
    li r4, 0xa
    mtctr r12
    bctrl
lbl_802F0BC8:
    cmpwi r3, 0x0
    bne lbl_802F0BD8
    li r3, 0xa
    bl fn_802E9460
lbl_802F0BD8:
    lfd f31, 0x310(r30)
    mr r28, r29
    lfs f30, 0x30c(r30)
    li r31, 0x0
lbl_802F0BE8:
    lwz r0, 0x84(r29)
    lwz r3, 0x2ac(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_802E823C
    lwz r3, 0x2ac(r28)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x4
    blt lbl_802F0BE8
lbl_802F0C24:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F0C34:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xb
    bne lbl_802F0C50
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_802F0C50
    b lbl_802F0C80
lbl_802F0C50:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xb
    bne lbl_802F0C70
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_802F0C70
    b lbl_802F0C80
lbl_802F0C70:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F0C34
    li r3, -0x1
lbl_802F0C80:
    slwi r0, r3, 2
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    b lbl_802F174C
lbl_802F0CA0:
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F0CC4
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_802F0CC4:
    cmpwi r3, 0x0
    bne lbl_802F174C
    li r3, 0xd
    bl fn_802E9460
    b lbl_802F174C
    lwz r3, 0x84(r29)
    cmpwi r3, 0xa
    bge lbl_802F0F6C
    li r0, 0x25
    addi r3, r3, 0x15
    addi r5, r30, 0x68
    li r4, 0x0
    mtctr r0
lbl_802F0CF8:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_802F0D14
    lwz r0, 0x4(r5)
    cmpwi r0, 0x9
    bne lbl_802F0D14
    b lbl_802F0D44
lbl_802F0D14:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_802F0D34
    lwz r0, 0xc(r5)
    cmpwi r0, 0x9
    bne lbl_802F0D34
    b lbl_802F0D44
lbl_802F0D34:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_802F0CF8
    li r4, -0x1
lbl_802F0D44:
    slwi r0, r4, 2
    li r4, 0x0
    add r3, r29, r0
    addi r6, r30, 0x68
    lwz r3, 0x2f0(r3)
    li r0, 0x25
    li r5, 0x0
    stw r4, 0x14(r3)
    lwz r3, 0x84(r29)
    addi r3, r3, 0x15
    mtctr r0
lbl_802F0D70:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_802F0D8C
    lwz r0, 0x4(r6)
    cmpwi r0, 0xa
    bne lbl_802F0D8C
    b lbl_802F0DBC
lbl_802F0D8C:
    lwz r0, 0x8(r6)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_802F0DAC
    lwz r0, 0xc(r6)
    cmpwi r0, 0xa
    bne lbl_802F0DAC
    b lbl_802F0DBC
lbl_802F0DAC:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_802F0D70
    li r5, -0x1
lbl_802F0DBC:
    slwi r0, r5, 2
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    lwz r3, 0x84(r29)
    addi r0, r3, 0x1
    cmpwi r0, 0xa
    stw r0, 0x84(r29)
    bne lbl_802F0E70
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F0E10
    li r3, 0x5
    li r4, 0xb
    mtctr r12
    bctrl
lbl_802F0E10:
    cmpwi r3, 0x0
    bne lbl_802F0E20
    li r3, 0xb
    bl fn_802E9460
lbl_802F0E20:
    lfd f31, 0x310(r30)
    mr r28, r29
    lfs f30, 0x30c(r30)
    li r31, 0x0
lbl_802F0E30:
    lwz r0, 0x84(r29)
    lwz r3, 0x2ac(r28)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fdivs f1, f0, f30
    bl fn_802E823C
    lwz r3, 0x2ac(r28)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x4
    blt lbl_802F0E30
    b lbl_802F0EF0
lbl_802F0E70:
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F0E94
    li r3, 0x5
    li r4, 0x9
    mtctr r12
    bctrl
lbl_802F0E94:
    cmpwi r3, 0x0
    bne lbl_802F0EA4
    li r3, 0x9
    bl fn_802E9460
lbl_802F0EA4:
    lfd f30, 0x310(r30)
    mr r28, r29
    lfs f31, 0x30c(r30)
    li r31, 0x0
lbl_802F0EB4:
    lwz r0, 0x84(r29)
    lwz r3, 0x2ac(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    fdivs f1, f0, f31
    bl fn_802E823C
    lwz r3, 0x2ac(r28)
    li r4, 0x1
    bl fn_802E8244
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x4
    blt lbl_802F0EB4
lbl_802F0EF0:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F0F00:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xc
    bne lbl_802F0F1C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_802F0F1C
    b lbl_802F0F4C
lbl_802F0F1C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xc
    bne lbl_802F0F3C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_802F0F3C
    b lbl_802F0F4C
lbl_802F0F3C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F0F00
    li r3, -0x1
lbl_802F0F4C:
    slwi r0, r3, 2
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    stw r0, 0x14(r28)
    b lbl_802F174C
lbl_802F0F6C:
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F0F90
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_802F0F90:
    cmpwi r3, 0x0
    bne lbl_802F174C
    li r3, 0xd
    bl fn_802E9460
    b lbl_802F174C
    lbz r0, 0x8c(r29)
    cmpwi r0, 0x0
    bne lbl_802F10EC
    li r0, 0x1
    li r3, 0x1
    stb r0, 0x8c(r29)
    bl fn_8028AFEC
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F0FD0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_802F0FEC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_802F0FEC
    b lbl_802F101C
lbl_802F0FEC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_802F100C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_802F100C
    b lbl_802F101C
lbl_802F100C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F0FD0
    li r3, -0x1
lbl_802F101C:
    slwi r0, r3, 2
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r28)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F1048:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x10
    bne lbl_802F1064
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_802F1064
    b lbl_802F1094
lbl_802F1064:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x10
    bne lbl_802F1084
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_802F1084
    b lbl_802F1094
lbl_802F1084:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F1048
    li r3, -0x1
lbl_802F1094:
    slwi r0, r3, 2
    stw r3, 0x18(r29)
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x14(r28)
    lwz r4, 0x4(r29)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F10D8
    li r3, 0x5
    li r4, 0xe
    mtctr r12
    bctrl
lbl_802F10D8:
    cmpwi r3, 0x0
    bne lbl_802F119C
    li r3, 0xe
    bl fn_802E9460
    b lbl_802F119C
lbl_802F10EC:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F10FC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x10
    bne lbl_802F1118
    lwz r0, 0x4(r4)
    cmpwi r0, 0xe
    bne lbl_802F1118
    b lbl_802F1148
lbl_802F1118:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x10
    bne lbl_802F1138
    lwz r0, 0xc(r4)
    cmpwi r0, 0xe
    bne lbl_802F1138
    b lbl_802F1148
lbl_802F1138:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F10FC
    li r3, -0x1
lbl_802F1148:
    slwi r0, r3, 2
    stw r3, 0x18(r29)
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x14(r28)
    lwz r4, 0x4(r29)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F118C
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_802F118C:
    cmpwi r3, 0x0
    bne lbl_802F119C
    li r3, 0xd
    bl fn_802E9460
lbl_802F119C:
    lfs f31, 0x2e0(r30)
    mr r28, r29
    li r30, 0x0
lbl_802F11A8:
    lwz r3, 0x2ac(r28)
    bl fn_802E859C
    stfs f31, 0x210(r28)
    addi r30, r30, 0x1
    cmpwi r30, 0x4
    stfs f31, 0x220(r28)
    addi r28, r28, 0x4
    blt lbl_802F11A8
    li r0, 0x9
    stw r0, 0x14(r29)
    b lbl_802F174C
    lbz r0, 0x8c(r29)
    cmpwi r0, 0x0
    beq lbl_802F131C
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x8c(r29)
    bl fn_8028AFEC
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F1200:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_802F121C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_802F121C
    b lbl_802F124C
lbl_802F121C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_802F123C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_802F123C
    b lbl_802F124C
lbl_802F123C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F1200
    li r3, -0x1
lbl_802F124C:
    slwi r0, r3, 2
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x25
    stw r3, 0x14(r28)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F1278:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_802F1294
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_802F1294
    b lbl_802F12C4
lbl_802F1294:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_802F12B4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_802F12B4
    b lbl_802F12C4
lbl_802F12B4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F1278
    li r3, -0x1
lbl_802F12C4:
    slwi r0, r3, 2
    stw r3, 0x18(r29)
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x14(r28)
    lwz r4, 0x4(r29)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F1308
    li r3, 0x5
    li r4, 0xf
    mtctr r12
    bctrl
lbl_802F1308:
    cmpwi r3, 0x0
    bne lbl_802F1350
    li r3, 0xf
    bl fn_802E9460
    b lbl_802F1350
lbl_802F131C:
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F1340
    li r3, 0x5
    li r4, 0xd
    mtctr r12
    bctrl
lbl_802F1340:
    cmpwi r3, 0x0
    bne lbl_802F1350
    li r3, 0xd
    bl fn_802E9460
lbl_802F1350:
    li r0, 0x9
    stw r0, 0x14(r29)
    b lbl_802F174C
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F136C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xf
    bne lbl_802F1388
    lwz r0, 0x4(r4)
    cmpwi r0, 0x5
    bne lbl_802F1388
    b lbl_802F13B8
lbl_802F1388:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xf
    bne lbl_802F13A8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x5
    bne lbl_802F13A8
    b lbl_802F13B8
lbl_802F13A8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F136C
    li r3, -0x1
lbl_802F13B8:
    slwi r0, r3, 2
    stw r3, 0x18(r29)
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r3, 0x1
    li r0, 0x3
    stw r3, 0x14(r28)
    mr r28, r29
    lfs f31, 0x2e0(r30)
    li r27, 0x0
    stw r0, 0x14(r29)
    li r31, 0x0
    stb r3, 0x90(r29)
lbl_802F13F4:
    stfs f31, 0x210(r28)
    stfs f31, 0x220(r28)
    lwz r3, 0x2ac(r28)
    bl fn_802E8600
    lwz r3, 0x2ac(r28)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    addi r28, r28, 0x4
    stb r31, 0x44(r3)
    blt lbl_802F13F4
    lis r3, lbl_804623E8@ha
    lfs f1, 0x300(r30)
    lwz r4, lbl_804623E8@l(r3)
    lis r30, lbl_8037C2FC@ha
    lwz r3, 0x238(r29)
    li r5, 0x1
    lwz r4, 0x4(r4)
    lfs f0, 0x30(r4)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x230(r29)
    lwz r3, 0x10(r3)
    lwz r4, lbl_8037C2FC@l(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r30, lbl_8037C2FC@l
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x238(r29)
    lwz r4, 0x4(r4)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x4(r29)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_802F14D4
    li r3, 0x5
    li r4, 0x5
    mtctr r12
    bctrl
    mr r4, r3
lbl_802F14D4:
    cmpwi r4, 0x0
    bne lbl_802F14E4
    li r3, 0x5
    bl fn_802E9460
lbl_802F14E4:
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F1508
    li r3, 0x5
    li r4, 0x10
    mtctr r12
    bctrl
lbl_802F1508:
    cmpwi r3, 0x0
    bne lbl_802F174C
    li r3, 0x10
    bl fn_802E9460
    b lbl_802F174C
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F152C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x13
    bne lbl_802F1548
    lwz r0, 0x4(r4)
    cmpwi r0, 0xd
    bne lbl_802F1548
    b lbl_802F1578
lbl_802F1548:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x13
    bne lbl_802F1568
    lwz r0, 0xc(r4)
    cmpwi r0, 0xd
    bne lbl_802F1568
    b lbl_802F1578
lbl_802F1568:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F152C
    li r3, -0x1
lbl_802F1578:
    slwi r0, r3, 2
    stw r3, 0x18(r29)
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r3, 0xd
    stw r0, 0x14(r28)
    li r0, 0x0
    lwz r4, 0xb8(r29)
    stw r3, 0x14(r29)
    cmpwi r4, 0x1
    stw r0, 0x0(r29)
    bne lbl_802F15F4
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F15D8
    li r3, 0x5
    li r4, 0x2
    mtctr r12
    bctrl
lbl_802F15D8:
    cmpwi r3, 0x0
    bne lbl_802F15E8
    li r3, 0x2
    bl fn_802E9460
lbl_802F15E8:
    li r0, 0x0
    stb r0, 0x460(r29)
    b lbl_802F174C
lbl_802F15F4:
    cmpwi r4, 0x2
    bne lbl_802F163C
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F1620
    li r3, 0x5
    li r4, 0x3
    mtctr r12
    bctrl
lbl_802F1620:
    cmpwi r3, 0x0
    bne lbl_802F1630
    li r3, 0x3
    bl fn_802E9460
lbl_802F1630:
    li r0, 0x1
    stb r0, 0x460(r29)
    b lbl_802F174C
lbl_802F163C:
    cmpwi r4, 0x4
    bne lbl_802F174C
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F1668
    li r3, 0x5
    li r4, 0x3
    mtctr r12
    bctrl
lbl_802F1668:
    cmpwi r3, 0x0
    bne lbl_802F1678
    li r3, 0x3
    bl fn_802E9460
lbl_802F1678:
    li r0, 0x0
    stb r0, 0x460(r29)
    b lbl_802F174C
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_802F1694:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x14
    bne lbl_802F16B0
    lwz r0, 0x4(r4)
    cmpwi r0, 0xd
    bne lbl_802F16B0
    b lbl_802F16E0
lbl_802F16B0:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x14
    bne lbl_802F16D0
    lwz r0, 0xc(r4)
    cmpwi r0, 0xd
    bne lbl_802F16D0
    b lbl_802F16E0
lbl_802F16D0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F1694
    li r3, -0x1
lbl_802F16E0:
    slwi r0, r3, 2
    stw r3, 0x18(r29)
    add r3, r29, r0
    lwz r28, 0x2f0(r3)
    mr r3, r28
    bl fn_802E6300
    li r0, 0x1
    li r4, 0xd
    stw r0, 0x14(r28)
    li r5, -0x1
    li r0, 0x0
    li r3, 0x0
    stw r4, 0x14(r29)
    lwz r4, 0x4(r29)
    stw r5, 0xb8(r29)
    stw r0, 0x0(r29)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_802F173C
    li r3, 0x5
    li r4, 0x6
    mtctr r12
    bctrl
lbl_802F173C:
    cmpwi r3, 0x0
    bne lbl_802F174C
    li r3, 0x6
    bl fn_802E9460
lbl_802F174C:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_802F1774
asm void fn_802F1774(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r31, r3
    li r25, 0x0
    mr r26, r31
    lis r28, lbl_80341A98@ha
    li r29, 0x1
    li r30, 0x0
    b lbl_802F1818
lbl_802F17A4:
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    beq lbl_802F1810
    lwz r0, 0x10(r31)
    addi r4, r28, lbl_80341A98@l
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_802F17F0
lbl_802F17C8:
    lwz r0, 0x0(r4)
    cmpw r25, r0
    bne lbl_802F17E4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x2
    bne lbl_802F17E4
    b lbl_802F17F4
lbl_802F17E4:
    addi r4, r4, 0x8
    addi r3, r3, 0x1
    bdnz lbl_802F17C8
lbl_802F17F0:
    li r3, -0x1
lbl_802F17F4:
    slwi r0, r3, 2
    add r3, r31, r0
    lwz r27, 0x2c0(r3)
    mr r3, r27
    bl fn_802E6300
    stw r29, 0x14(r27)
    stw r30, 0x20(r26)
lbl_802F1810:
    addi r26, r26, 0x4
    addi r25, r25, 0x1
lbl_802F1818:
    lwz r0, 0xc(r31)
    cmpw r25, r0
    blt lbl_802F17A4
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_802F1864
    lwz r27, 0x448(r31)
    mr r3, r27
    bl fn_802E6300
    li r0, 0x1
    li r4, 0x0
    stw r0, 0x14(r27)
    lwz r3, 0xc(r31)
    addi r0, r3, 0x1
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x20(r3)
lbl_802F1864:
    lwz r3, 0xc(r31)
    addi r0, r3, 0x1
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_802F19BC
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_802F192C
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bne lbl_802F19BC
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F18AC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x5
    bne lbl_802F18C8
    lwz r0, 0x4(r4)
    cmpwi r0, 0x14
    bne lbl_802F18C8
    b lbl_802F18F8
lbl_802F18C8:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x5
    bne lbl_802F18E8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x14
    bne lbl_802F18E8
    b lbl_802F18F8
lbl_802F18E8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F18AC
    li r3, -0x1
lbl_802F18F8:
    slwi r0, r3, 2
    add r3, r31, r0
    lwz r27, 0x2f0(r3)
    mr r3, r27
    bl fn_802E6300
    li r0, 0x1
    li r4, 0x0
    stw r0, 0x14(r27)
    lwz r0, 0xc(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x20(r3)
    b lbl_802F19BC
lbl_802F192C:
    lis r4, lbl_80341AF8@ha
    li r0, 0x25
    addi r4, r4, lbl_80341AF8@l
    li r3, 0x0
    mtctr r0
lbl_802F1940:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x5
    bne lbl_802F195C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x3
    bne lbl_802F195C
    b lbl_802F198C
lbl_802F195C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x5
    bne lbl_802F197C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x3
    bne lbl_802F197C
    b lbl_802F198C
lbl_802F197C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_802F1940
    li r3, -0x1
lbl_802F198C:
    slwi r0, r3, 2
    add r3, r31, r0
    lwz r27, 0x2f0(r3)
    mr r3, r27
    bl fn_802E6300
    li r0, 0x1
    li r4, 0x0
    stw r0, 0x14(r27)
    lwz r0, 0xc(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x20(r3)
lbl_802F19BC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802F19D4
asm s32 fn_802F19D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8037B9B0@ha
    lwz r30, 0xc(r3)
    addi r28, r4, 0xb4
    li r29, -0x1
    addi r31, r31, lbl_8037B9B0@l
    li r27, 0x0
    b lbl_802F1A28
lbl_802F1A04:
    lwz r4, 0x0(r31)
    mr r3, r28
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802F1A20
    mr r29, r27
    b lbl_802F1A30
lbl_802F1A20:
    addi r31, r31, 0x4
    addi r27, r27, 0x1
lbl_802F1A28:
    cmpw r27, r30
    blt lbl_802F1A04
lbl_802F1A30:
    lis r31, lbl_8037C2B0@ha
    li r27, 0x0
    addi r31, r31, lbl_8037C2B0@l
lbl_802F1A3C:
    lwz r4, 0x0(r31)
    mr r3, r28
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802F1A58
    add r29, r27, r30
    b lbl_802F1A68
lbl_802F1A58:
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0xa
    blt lbl_802F1A3C
lbl_802F1A68:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F1AA0
asm void fn_802F1AA0(s8 *arg0, s32 arg1) {
    nofralloc
    neg r5, r4
    stwu r1, -0x20(r1)
    or r5, r5, r4
    srwi. r4, r5, 31
    lbz r0, 0x2a8(r3)
    rlwimi r0, r5, 6, 26, 26
    stb r0, 0x2a8(r3)
    stb r4, 0x8f(r3)
    beq lbl_802F1B44
    lwz r5, 0x4(r3)
    lwz r4, 0x238(r3)
    lfs f1, 0x38(r5)
    lfs f0, 0x34(r5)
    lwz r4, 0x10(r4)
    stfs f0, 0x10(r1)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r4, 0x4(r3)
    stfs f1, 0x14(r1)
    lwz r0, 0x20(r4)
    stfs f0, 0x18(r1)
    cmpwi r0, 0x0
    stfs f1, 0x1c(r1)
    bne lbl_802F1BBC
    lwz r4, 0x23c(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r4, 0x240(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r4, 0x244(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r3, 0x248(r3)
    lwz r3, 0x10(r3)
    stfs f0, 0x44(r3)
    stfs f1, 0x48(r3)
    b lbl_802F1BBC
lbl_802F1B44:
    lwz r4, 0x238(r3)
    lis r5, lbl_80341D74@ha
    lfs f0, lbl_80341D74@l(r5)
    lwz r4, 0x10(r4)
    stfs f0, 0x8(r1)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r4, 0x4(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0x20(r4)
    stfs f0, 0x18(r1)
    cmpwi r0, 0x0
    stfs f0, 0x1c(r1)
    bne lbl_802F1BBC
    lwz r4, 0x23c(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r4, 0x240(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r4, 0x244(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r3, 0x248(r3)
    lwz r3, 0x10(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
lbl_802F1BBC:
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F1BC4
asm void fn_802F1BC4(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    cmpwi r30, 0x1
    lwz r5, 0x8(r29)
    mr r4, r3
    beq lbl_802F1C38
    bge lbl_802F1C2C
    cmpwi r30, 0x0
    bge lbl_802F1C54
    b lbl_802F1C68
lbl_802F1C2C:
    cmpwi r30, 0x3
    bge lbl_802F1C68
    b lbl_802F1C48
lbl_802F1C38:
    mr r3, r5
    mr r5, r31
    bl fn_802EEC48
    b lbl_802F1C68
lbl_802F1C48:
    mr r3, r5
    bl fn_802EFA78
    b lbl_802F1C68
lbl_802F1C54:
    lwz r0, 0x10(r31)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_802F1C68
    mr r3, r5
    bl fn_802F0538
lbl_802F1C68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F1C84
asm void fn_802F1C84(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x9a(r3)
    cmpwi r0, 0x0
    bne lbl_802F1E60
    li r0, 0x1
    mr r30, r31
    stb r0, 0x9a(r3)
    li r29, 0x0
lbl_802F1CBC:
    lwz r3, 0x2ac(r30)
    bl fn_802E8600
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_802F1CBC
    lwz r3, 0x14(r31)
    li r0, 0x0
    stb r0, 0x95(r31)
    cmpwi r3, 0x3
    stb r0, 0x96(r31)
    stb r0, 0x98(r31)
    stb r0, 0x99(r31)
    beq lbl_802F1D38
    bge lbl_802F1D10
    cmpwi r3, 0x1
    beq lbl_802F1D2C
    bge lbl_802F1DF8
    cmpwi r3, 0x0
    bge lbl_802F1D24
    b lbl_802F1DF8
lbl_802F1D10:
    cmpwi r3, 0x8
    bge lbl_802F1DF8
    cmpwi r3, 0x5
    bge lbl_802F1D38
    b lbl_802F1DF8
lbl_802F1D24:
    li r0, 0x1
    stb r0, 0x95(r31)
lbl_802F1D2C:
    li r0, 0x1
    stb r0, 0x96(r31)
    b lbl_802F1DF8
lbl_802F1D38:
    cmpwi r3, 0x3
    bne lbl_802F1D4C
    lwz r0, 0x18(r31)
    cmpwi r0, 0x5
    beq lbl_802F1D60
lbl_802F1D4C:
    cmpwi r3, 0x5
    bne lbl_802F1D74
    lbz r0, 0x91(r31)
    cmpwi r0, 0x0
    bne lbl_802F1D74
lbl_802F1D60:
    addi r3, r31, 0x5e8
    bl OSCancelAlarm
    lwz r3, 0x20c(r31)
    bl fn_802896A8
    b lbl_802F1DF0
lbl_802F1D74:
    lbz r0, 0x92(r31)
    cmpwi r0, 0x0
    bne lbl_802F1DE8
    cmpwi r3, 0x3
    ble lbl_802F1DE8
    li r0, 0x1
    stb r0, 0x98(r31)
    bl fn_802896A4
    cmpwi r3, 0x0
    bne lbl_802F1DF0
    addi r3, r31, 0x5e8
    bl OSCancelAlarm
    addi r3, r31, 0x5e8
    li r4, 0x1
    bl OSSetAlarmUserData
    lis r4, 0x8000
    lis r7, fn_802ED698@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_802ED698@l
    srwi r0, r0, 2
    addi r3, r31, 0x5e8
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
    b lbl_802F1DF0
lbl_802F1DE8:
    lwz r3, 0x20c(r31)
    bl fn_802896A8
lbl_802F1DF0:
    li r0, 0x1
    stb r0, 0x99(r31)
lbl_802F1DF8:
    lwz r3, 0x458(r31)
    lis r0, 0x4330
    lis r4, lbl_80341DA0@ha
    li r7, 0x13
    xoris r3, r3, 0x8000
    li r6, 0x1
    stw r3, 0xc(r1)
    li r5, 0x2
    lfd f1, lbl_80341DA0@l(r4)
    stw r0, 0x8(r1)
    lwz r3, 0x4(r31)
    lfd f0, 0x8(r1)
    stw r7, 0x14(r31)
    fsubs f0, f0, f1
    stw r6, 0x45c(r31)
    stw r5, 0xb8(r31)
    stfs f0, 0x79c(r31)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_802F1E60
    fctiwz f0, f0
    li r3, 0x3
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    mtctr r12
    bctrl
lbl_802F1E60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F1E7C
asm void fn_802F1E7C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_802E9798
    li r31, 0x0
lbl_802F1E9C:
    lwz r3, 0x2ac(r30)
    bl fn_802E8350
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmpwi r31, 0x4
    blt lbl_802F1E9C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802F1ECC
asm u16 fn_802F1ECC() {
    nofralloc
    cmplwi r4, 0x1
    beq lbl_802F1EE4
    lfs f0, 0x0(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_802F1EEC
lbl_802F1EE4:
    lhz r3, 0x4(r3)
    blr
lbl_802F1EEC:
    slwi r0, r4, 3
    add r5, r3, r0
    lfs f0, -0x8(r5)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_802F1F0C
    lhz r3, -0x4(r5)
    blr
lbl_802F1F0C:
    subi r5, r4, 0x1
    li r6, 0x0
    b lbl_802F1F50
lbl_802F1F18:
    add r4, r6, r5
    srwi r0, r4, 31
    add r4, r0, r4
    extlwi r0, r4, 29, 2
    lfsx f0, r3, r0
    srawi r4, r4, 1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_802F1F44
    mr r5, r4
lbl_802F1F44:
    cmpwi r0, 0x0
    bne lbl_802F1F50
    mr r6, r4
lbl_802F1F50:
    subi r0, r5, 0x1
    cmpw r6, r0
    beq lbl_802F1F64
    cmpw r6, r5
    bne lbl_802F1F18
lbl_802F1F64:
    slwi r5, r5, 3
    lis r4, lbl_80341DF0@ha
    lfsx f2, r3, r5
    li r0, 0x0
    lfs f0, lbl_80341DF0@l(r4)
    fsubs f1, f1, f2
    fcmpo cr0, f0, f1
    bge lbl_802F1F98
    lis r4, lbl_80341DF4@ha
    lfs f0, lbl_80341DF4@l(r4)
    fcmpo cr0, f1, f0
    bge lbl_802F1F98
    li r0, 0x1
lbl_802F1F98:
    cmpwi r0, 0x0
    beq lbl_802F1FAC
    add r3, r3, r5
    lhz r3, 0x4(r3)
    blr
lbl_802F1FAC:
    slwi r0, r6, 3
    add r3, r3, r0
    lhz r3, 0x4(r3)
    blr
}

// asm_to_cpp: fn_802F1FBC
asm f32 fn_802F1FBC() {
    nofralloc
    stwu r1, -0x20(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    cmplwi r4, 0x1
    lis r6, lbl_80341DF0@ha
    addi r6, r6, lbl_80341DF0@l
    beq lbl_802F1FE8
    lfs f0, 0x0(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_802F1FF0
lbl_802F1FE8:
    lfs f1, 0x4(r3)
    b lbl_802F2170
lbl_802F1FF0:
    mulli r0, r4, 0xc
    add r5, r3, r0
    lfs f0, -0xc(r5)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_802F2010
    lfs f1, -0x8(r5)
    b lbl_802F2170
lbl_802F2010:
    subi r8, r4, 0x1
    li r7, 0x0
    b lbl_802F2058
lbl_802F201C:
    add r5, r7, r8
    srwi r0, r5, 31
    add r0, r0, r5
    srawi r5, r0, 1
    mulli r0, r5, 0xc
    lfsx f0, r3, r0
    fcmpo cr0, f1, f0
    opword 0x4C401382
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_802F204C
    mr r8, r5
lbl_802F204C:
    cmpwi r0, 0x0
    bne lbl_802F2058
    mr r7, r5
lbl_802F2058:
    subi r0, r8, 0x1
    cmpw r7, r0
    beq lbl_802F206C
    cmpw r7, r8
    bne lbl_802F201C
lbl_802F206C:
    mulli r5, r8, 0xc
    lfs f0, 0x0(r6)
    li r0, 0x0
    lfsx f2, r3, r5
    add r9, r3, r5
    mulli r5, r7, 0xc
    fsubs f2, f1, f2
    add r5, r3, r5
    fcmpo cr0, f0, f2
    bge lbl_802F20A4
    lfs f0, 0x4(r6)
    fcmpo cr0, f2, f0
    bge lbl_802F20A4
    li r0, 0x1
lbl_802F20A4:
    cmpwi r0, 0x0
    beq lbl_802F20E4
    subi r0, r4, 0x1
    cmplw r8, r0
    bge lbl_802F20DC
    addi r0, r8, 0x1
    lfs f1, 0x0(r9)
    mulli r0, r0, 0xc
    lfsx f0, r3, r0
    fcmpu cr0, f1, f0
    bne lbl_802F20DC
    add r3, r3, r0
    lfs f1, 0x4(r3)
    b lbl_802F2170
lbl_802F20DC:
    lfs f1, 0x4(r9)
    b lbl_802F2170
lbl_802F20E4:
    lfs f2, 0x0(r5)
    lfs f0, 0x0(r9)
    fsubs f7, f1, f2
    lfs f6, 0x8(r6)
    fsubs f0, f0, f2
    lfs f4, 0xc(r6)
    lfs f1, 0x10(r6)
    fmuls f2, f7, f7
    fdivs f5, f6, f0
    lfs f0, 0x14(r6)
    lfs f8, 0x4(r5)
    lfs f9, 0x4(r9)
    lfs f10, 0x8(r5)
    lfs f11, 0x8(r9)
    fmuls f12, f5, f2
    fmuls f2, f12, f5
    fmuls f3, f4, f12
    fmuls f13, f7, f2
    fmuls f2, f1, f2
    fmuls f31, f13, f5
    fsubs f3, f13, f3
    fsubs f5, f13, f12
    fmuls f1, f4, f31
    fmuls f0, f0, f31
    fadds f3, f7, f3
    fsubs f1, f1, f2
    fadds f0, f0, f2
    fmuls f2, f10, f3
    fadds f1, f6, f1
    fmuls f0, f9, f0
    fmuls f3, f11, f5
    fmuls f1, f8, f1
    fadds f0, f1, f0
    fadds f0, f2, f0
    fadds f1, f3, f0
lbl_802F2170:
    opword 0xE3E10018
    lfd f31, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F218C
asm s32 fn_802F218C(s8 *arg0) {
    nofralloc
    lis r4, lbl_80341E08@ha
    li r0, 0x0
    lfs f0, lbl_80341E08@l(r4)
    lis r4, lbl_8037C608@ha
    addi r4, r4, lbl_8037C608@l
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x10(r3)
    stw r4, 0x0(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    sth r0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_802F21C4
asm s32 **fn_802F21C4(s32 **arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802F2234
    lwz r4, 0x18(r3)
    lis r5, lbl_8037C608@ha
    addi r5, r5, lbl_8037C608@l
    cmpwi r4, 0x0
    stw r5, 0x0(r3)
    beq lbl_802F220C
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
lbl_802F220C:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_802F2224
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
lbl_802F2224:
    cmpwi r31, 0x0
    ble lbl_802F2234
    mr r3, r30
    bl dtor_80136CFC
lbl_802F2234:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802F2250
asm void fn_802F2250() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lhz r6, 0xc(r4)
    li r0, 0x0
    stw r4, 0xc(r3)
    mr r30, r3
    cmpwi r6, 0x0
    mr r31, r4
    stw r0, 0x14(r3)
    mr r24, r5
    beq lbl_802F2308
    lis r3, lbl_80462438@ha
    clrlslwi r4, r6, 16, 2
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    stw r3, 0x14(r30)
    beq lbl_802F2308
    lwz r3, 0xc(r30)
    li r25, 0x0
    li r26, 0x0
    lis r29, 0x7469
    addi r28, r3, 0x14
    mr r27, r28
    b lbl_802F22F8
lbl_802F22C0:
    lwz r12, 0x0(r24)
    mr r3, r24
    lwz r0, 0x0(r27)
    addi r4, r29, 0x6d67
    lwz r12, 0xc(r12)
    li r6, 0x0
    add r5, r28, r0
    mtctr r12
    bctrl
    lwz r4, 0x14(r30)
    addi r27, r27, 0x4
    addi r25, r25, 0x1
    stwx r3, r4, r26
    addi r26, r26, 0x4
lbl_802F22F8:
    lwz r3, 0xc(r30)
    lhz r0, 0xc(r3)
    cmpw r25, r0
    blt lbl_802F22C0
lbl_802F2308:
    lhz r0, 0xe(r31)
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    slwi r4, r0, 4
    bl fn_8030CAF0
    cmpwi r3, 0x0
    stw r3, 0x18(r30)
    beq lbl_802F2380
    lhz r0, 0xe(r31)
    li r4, 0x0
    sth r0, 0x1c(r30)
    slwi r5, r0, 4
    bl memset
    li r5, 0x0
    li r4, 0x0
    b lbl_802F2370
lbl_802F2348:
    lwz r3, 0x18(r30)
    clrlslwi r0, r5, 16, 4
    add. r3, r3, r0
    beq lbl_802F236C
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stb r4, 0xe(r3)
    stw r4, 0x8(r3)
    sth r4, 0xc(r3)
lbl_802F236C:
    addi r5, r5, 0x1
lbl_802F2370:
    lhz r0, 0xe(r31)
    clrlwi r3, r5, 16
    cmplw r3, r0
    blt lbl_802F2348
lbl_802F2380:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802F2398
asm void fn_802F2398() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0xc(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r0, 0x10(r6)
    li r30, 0x0
    add r31, r6, r0
    b lbl_802F246C
lbl_802F23CC:
    clrlslwi r0, r30, 16, 2
    lwzx r0, r31, r0
    add r4, r4, r0
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_802F2428
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r5, r29
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802F2468
    lwz r0, 0x18(r27)
    clrlslwi r5, r30, 16, 4
    add r4, r0, r5
    stw r27, 0x8(r4)
    sth r30, 0xc(r4)
    lwz r0, 0x18(r27)
    add r4, r0, r5
    bl AddAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimationLink
    b lbl_802F2468
lbl_802F2428:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r5, r29
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802F2468
    lwz r0, 0x18(r27)
    clrlslwi r5, r30, 16, 4
    add r4, r0, r5
    stw r27, 0x8(r4)
    sth r30, 0xc(r4)
    lwz r0, 0x18(r27)
    add r4, r0, r5
    bl fn_802F809C
lbl_802F2468:
    addi r30, r30, 0x1
lbl_802F246C:
    lwz r4, 0xc(r27)
    clrlwi r3, r30, 16
    lhz r0, 0xe(r4)
    cmplw r3, r0
    blt lbl_802F23CC
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F2498
asm void fn_802F2498() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, 0xc(r3)
    lwz r0, 0x10(r5)
    add r31, r5, r0
    b lbl_802F2520
lbl_802F24D0:
    clrlslwi r0, r30, 16, 2
    lwzx r0, r31, r0
    add r4, r4, r0
    lbz r0, 0x15(r4)
    cmplwi r0, 0x1
    bne lbl_802F251C
    addi r3, r29, 0x4
    bl EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_802F251C
    lwz r0, 0x18(r28)
    clrlslwi r5, r30, 16, 4
    mr r3, r29
    add r4, r0, r5
    stw r28, 0x8(r4)
    sth r30, 0xc(r4)
    lwz r0, 0x18(r28)
    add r4, r0, r5
    bl fn_802F809C
lbl_802F251C:
    addi r30, r30, 0x1
lbl_802F2520:
    lwz r4, 0xc(r28)
    clrlwi r3, r30, 16
    lhz r0, 0xe(r4)
    cmplw r3, r0
    blt lbl_802F24D0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F2554
asm void fn_802F2554() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_21
    lwz r7, 0xc(r3)
    lis r6, lbl_80341E0C@ha
    lis r31, 0x524c
    slwi r4, r4, 2
    lwz r0, 0x10(r7)
    mr r22, r3
    lfs f31, lbl_80341E0C@l(r6)
    mr r23, r5
    add r0, r7, r0
    addi r30, r31, 0x5643
    lwzx r0, r4, r0
    li r24, 0x0
    add r28, r7, r0
    addi r26, r28, 0x18
    b lbl_802F2710
lbl_802F25B4:
    lwz r0, 0x0(r26)
    lwzx r3, r28, r0
    add r27, r28, r0
    addi r25, r27, 0x8
    cmpw r3, r30
    beq lbl_802F269C
    bge lbl_802F25E0
    addi r0, r31, 0x5041
    cmpw r3, r0
    beq lbl_802F25F0
    b lbl_802F2708
lbl_802F25E0:
    addi r0, r31, 0x5649
    cmpw r3, r0
    beq lbl_802F2640
    b lbl_802F2708
lbl_802F25F0:
    lfs f30, 0x10(r22)
    li r29, 0x0
    b lbl_802F2630
lbl_802F25FC:
    lwz r0, 0x0(r25)
    fmr f1, f30
    add r21, r27, r0
    lwz r0, 0x8(r21)
    lhz r4, 0x4(r21)
    add r3, r21, r0
    bl fn_802F1FBC
    lbz r0, 0x1(r21)
    addi r25, r25, 0x4
    addi r29, r29, 0x1
    slwi r0, r0, 2
    add r3, r23, r0
    stfs f1, 0x2c(r3)
lbl_802F2630:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_802F25FC
    b lbl_802F2708
lbl_802F2640:
    lfs f30, 0x10(r22)
    li r29, 0x0
    b lbl_802F268C
lbl_802F264C:
    lwz r0, 0x0(r25)
    fmr f1, f30
    add r3, r27, r0
    lwz r0, 0x8(r3)
    lhz r4, 0x4(r3)
    add r3, r3, r0
    bl fn_802F1ECC
    clrlwi r4, r3, 16
    lbz r0, 0xcf(r23)
    neg r3, r4
    addi r25, r25, 0x4
    or r3, r3, r4
    rlwinm r0, r0, 0, 24, 30
    rlwimi r0, r3, 1, 31, 31
    addi r29, r29, 0x1
    stb r0, 0xcf(r23)
lbl_802F268C:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_802F264C
    b lbl_802F2708
lbl_802F269C:
    lbz r0, 0x4(r27)
    li r29, 0x0
    lfs f30, 0x10(r22)
    cmpwi r0, 0x0
    ble lbl_802F2708
    b lbl_802F26FC
lbl_802F26B4:
    lwz r0, 0x0(r25)
    fmr f1, f30
    add r21, r27, r0
    lwz r0, 0x8(r21)
    lhz r4, 0x4(r21)
    add r3, r21, r0
    bl fn_802F1FBC
    fadds f0, f1, f31
    opword 0xF001A008
    mr r3, r23
    lwz r12, 0x0(r23)
    lbz r5, 0x8(r1)
    lwz r12, 0x30(r12)
    lbz r4, 0x1(r21)
    mtctr r12
    bctrl
    addi r25, r25, 0x4
    addi r29, r29, 0x1
lbl_802F26FC:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_802F26B4
lbl_802F2708:
    addi r26, r26, 0x4
    addi r24, r24, 0x1
lbl_802F2710:
    lbz r0, 0x14(r28)
    cmpw r24, r0
    blt lbl_802F25B4
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_802F2744
asm void fn_802F2744() {
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
    bl _savegpr_20
    lwz r7, 0xc(r3)
    lis r6, lbl_80341E0C@ha
    lis r31, 0x524c
    slwi r4, r4, 2
    lwz r0, 0x10(r7)
    mr r21, r3
    lfs f30, lbl_80341E0C@l(r6)
    mr r22, r5
    add r0, r7, r0
    addi r30, r31, 0x5450
    lwzx r0, r4, r0
    li r23, 0x0
    add r28, r7, r0
    addi r26, r28, 0x18
    b lbl_802F29F8
lbl_802F27AC:
    lwz r0, 0x0(r26)
    lwzx r3, r28, r0
    add r27, r28, r0
    addi r25, r27, 0x8
    cmpw r3, r30
    beq lbl_802F28FC
    bge lbl_802F27E8
    addi r0, r31, 0x4d43
    cmpw r3, r0
    beq lbl_802F27F8
    bge lbl_802F29F0
    addi r0, r31, 0x494d
    cmpw r3, r0
    beq lbl_802F297C
    b lbl_802F29F0
lbl_802F27E8:
    addi r0, r31, 0x5453
    cmpw r3, r0
    beq lbl_802F2884
    b lbl_802F29F0
lbl_802F27F8:
    lbz r0, 0x4(r27)
    li r24, 0x0
    lfs f31, 0x10(r21)
    cmpwi r0, 0x0
    ble lbl_802F29F0
    b lbl_802F2874
lbl_802F2810:
    lwz r0, 0x0(r25)
    fmr f1, f31
    add r20, r27, r0
    lwz r0, 0x8(r20)
    lhz r4, 0x4(r20)
    add r3, r20, r0
    bl fn_802F1FBC
    fadds f0, f1, f30
    opword 0xF001D008
    li r6, -0x400
    lha r0, 0x8(r1)
    cmpwi r0, -0x400
    blt lbl_802F2848
    mr r6, r0
lbl_802F2848:
    extsh r0, r6
    lbz r4, 0x1(r20)
    cmpwi r0, 0x3ff
    mr r3, r22
    li r5, 0x3ff
    bgt lbl_802F2864
    mr r5, r6
lbl_802F2864:
    extsh r5, r5
    bl fn_802F6EE4
    addi r25, r25, 0x4
    addi r24, r24, 0x1
lbl_802F2874:
    lbz r0, 0x4(r27)
    cmpw r24, r0
    blt lbl_802F2810
    b lbl_802F29F0
lbl_802F2884:
    lfs f29, 0x10(r21)
    li r29, 0x0
    b lbl_802F28EC
lbl_802F2890:
    lwz r3, 0x0(r25)
    lwz r0, 0x4c(r22)
    add r20, r27, r3
    lbzx r3, r27, r3
    extrwi r0, r0, 4, 4
    cmplw r3, r0
    bge lbl_802F28E4
    lwz r0, 0x8(r20)
    fmr f1, f29
    lhz r4, 0x4(r20)
    add r3, r20, r0
    bl fn_802F1FBC
    fmr f31, f1
    lbz r24, 0x1(r20)
    lbz r20, 0x0(r20)
    mr r3, r22
    bl fn_802F6B9C
    mulli r4, r20, 0x14
    slwi r0, r24, 2
    add r3, r3, r4
    stfsx f31, r3, r0
lbl_802F28E4:
    addi r25, r25, 0x4
    addi r29, r29, 0x1
lbl_802F28EC:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_802F2890
    b lbl_802F29F0
lbl_802F28FC:
    lwz r24, 0x14(r21)
    cmpwi r24, 0x0
    beq lbl_802F29F0
    lfs f29, 0x10(r21)
    li r29, 0x0
    b lbl_802F296C
lbl_802F2914:
    lwz r3, 0x0(r25)
    lwz r0, 0x50(r22)
    add r20, r27, r3
    lbzx r3, r27, r3
    srwi r0, r0, 28
    cmplw r3, r0
    bge lbl_802F2964
    lbz r0, 0x1(r20)
    cmpwi r0, 0x0
    bne lbl_802F2964
    lwz r0, 0x8(r20)
    fmr f1, f29
    lhz r4, 0x4(r20)
    add r3, r20, r0
    bl fn_802F1ECC
    clrlslwi r0, r3, 16, 2
    lbz r4, 0x0(r20)
    lwzx r5, r24, r0
    mr r3, r22
    bl fn_802F6E0C
lbl_802F2964:
    addi r25, r25, 0x4
    addi r29, r29, 0x1
lbl_802F296C:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_802F2914
    b lbl_802F29F0
lbl_802F297C:
    lfs f29, 0x10(r21)
    li r29, 0x0
    b lbl_802F29E4
lbl_802F2988:
    lwz r3, 0x0(r25)
    lwz r0, 0x4c(r22)
    add r24, r27, r3
    lbzx r3, r27, r3
    extrwi r0, r0, 2, 12
    cmplw r3, r0
    bge lbl_802F29DC
    lwz r0, 0x8(r24)
    fmr f1, f29
    lhz r4, 0x4(r24)
    add r3, r24, r0
    bl fn_802F1FBC
    fmr f31, f1
    lbz r20, 0x1(r24)
    lbz r24, 0x0(r24)
    mr r3, r22
    bl fn_802F6BD0
    mulli r4, r24, 0x14
    slwi r0, r20, 2
    add r3, r3, r4
    stfsx f31, r3, r0
lbl_802F29DC:
    addi r25, r25, 0x4
    addi r29, r29, 0x1
lbl_802F29E4:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_802F2988
lbl_802F29F0:
    addi r26, r26, 0x4
    addi r23, r23, 0x1
lbl_802F29F8:
    lbz r0, 0x14(r28)
    cmpw r23, r0
    blt lbl_802F27AC
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    addi r11, r1, 0x40
    lfd f29, 0x40(r1)
    bl _restgpr_20
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_802F2A34
asm s8 *fn_802F2A34(s8 *arg0, u32 arg1) {
    nofralloc
    lwz r5, 0x4(r3)
    addi r0, r3, 0x4
    b lbl_802F2A58
lbl_802F2A40:
    lwz r3, 0x8(r5)
    cmplw r4, r3
    bne lbl_802F2A54
    mr r3, r5
    blr
lbl_802F2A54:
    lwz r5, 0x0(r5)
lbl_802F2A58:
    cmplw r5, r0
    bne lbl_802F2A40
    li r3, 0x0
    blr
}
