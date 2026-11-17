#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s32 lbl_8049E5D0;
extern s32 lbl_8049E5D8;
extern s32 lbl_8049E5F4;

s32 fn_80338DF8();
s32 fn_80338E00();
void fn_80338E10();
void fn_80338E50();
void fn_80338E5C();
void fn_80338E60();
void fn_80338F28();
s32 fn_80338F8C();
void fn_80338FA0();
void fn_80339124();
s32 fn_803392B0();
void fn_803392C0();
void fn_803393C4();
void fn_803394B0();

s32 fn_80338DF8(void) {
    return 0;
}

s32 fn_80338E00(s32 arg0) {
    return (s32) (-arg0 | arg0) >> 0x1F;
}

void fn_80338E50(void) {
    lbl_8049E5D0 = 0;
}

void fn_80338E5C(void) {

}

s32 fn_80338F8C(void) {
    return lbl_8049E5D8 != 0;
}

void fn_80338FA0(s32 arg0, u32 arg1);

void fn_80339124(M2C_UNK arg_sp0);

s32 fn_803392B0(s32 arg0) {
    s32 temp_r3;

    temp_r3 = lbl_8049E5F4;
    lbl_8049E5F4 = arg0;
    return temp_r3;
}

void fn_803394B0(s32 arg0, s32 arg1) {

}

void fn_80338E10(s32 arg0, s32 arg1);
void fn_80338E60(s32 arg0, u32 arg1);
void fn_80338F28(void);
void fn_80338FA0();
void fn_80339124();
void fn_803392C0(void);
void fn_803393C4(void);
