#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct N2D_GDControl {
    u8 *start;
    u8 *ptr;
    u8 *top;
    u8 *end;
};

extern u8 lbl_8034F470[];
extern u8 lbl_8034F5A0[];
extern s32 lbl_8049D6C0;
extern s32 lbl_8049D6C8;
extern u32 lbl_8049D6CC;
extern s8 *lbl_8049E180;
__declspec(section ".sdata2") extern const f32 lbl_804A08E8[];

void DCFlushRange(s32 arg0, s32 arg1);
s32 GDOverflowed();
void GXCallDisplayList(s32 arg0, s32 arg1);
f32 fn_80121D98(s32 arg0);
void fn_801220B4(s8 *arg0);
void fn_8012212C(void);
s32 fn_80122138(void);
s32 fn_80122168(void);
void fn_80122174(s32 arg0);
void fn_80122188(u8 arg0);
void fn_801221C0(u8 arg0);
void fn_801221D8(u32 arg0);
void fn_801221F8(u16 arg0);
s32 fn_80122240(void);
void fn_80122254(s8 *arg0);
s32 fn_8012225C(s8 *arg0);
s32 fn_8012226C(s32 *arg0);
void fn_80122274(void);
void fn_80122278(s32 arg0, s32 arg1, u16 arg2);
void fn_801222B4(u8 arg0);
void fn_801222BC(u8 arg0);
void fn_801222C4(u8 arg0);
void fn_801222CC(s8 *arg0, s8 *arg1);
void fn_80122330(s8 *arg0, s8 *arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

f32 fn_80121D98(s32 arg0) {
    return ((f32 *)lbl_8034F470)[arg0];
}

void fn_8012212C(void) {
    lbl_8049D6CC = 0;
}

s32 fn_80122138(void) {
    u32 temp_r4;

    temp_r4 = (u32) (lbl_8049D6CC);
    if (temp_r4 >= (u32) lbl_8049D6C8) {
        return (s32) (0);
    }
    lbl_8049D6CC = temp_r4 + 1;
    return (s32) (lbl_8049D6C0 + (temp_r4 * 0xA0));
}

s32 fn_80122168(void) {
    return (s32) (M2C_FIELD(lbl_8049E180, s32 *, 8));
}

void fn_80122174(s32 arg0) {
    M2C_FIELD(lbl_8049E180, s32 *, 8) = (s32) ((s32) (M2C_FIELD(lbl_8049E180, s32 *, 0) + arg0));
}

void fn_80122188(u8 arg0) {
    fn_801221D8((s32) (1));
    fn_801221C0((u8) (arg0));
}

void fn_801221C0(u8 arg0) {
    struct N2D_GDControl *dl = (struct N2D_GDControl *)lbl_8049E180;
    *dl->top++ = arg0;
}

#pragma dont_inline on
void fn_801221D8(u32 arg0) {
    struct N2D_GDControl *dl = (struct N2D_GDControl *)lbl_8049E180;
    if (dl->top + arg0 > dl->end) {
        GDOverflowed();
    }
}
#pragma dont_inline reset

void fn_801221F8(u16 arg0) {
    fn_801221D8((s32) (2));
    fn_801221C0((u8) ((u8) ((s32) arg0 >> 8)));
    fn_801221C0((u8) ((u8) arg0));
}

s32 fn_80122240(void) {
    return (s32) (M2C_FIELD(lbl_8049E180, s32 *, 8) - M2C_FIELD(lbl_8049E180, s32 *, 0));
}

void fn_80122254(s8 *arg0) {
    lbl_8049E180 = arg0;
}

s32 fn_8012225C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0));
}

s32 fn_8012226C(s32 *arg0) {
    return (s32) (*arg0);
}

void fn_80122274(void) {
}

#pragma dont_inline on
extern "C" void fn_801222B4(u8 arg0) {
    fn_80122188(arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
extern "C" void fn_801222BC(u8 arg0) {
    fn_80122188(arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
extern "C" void fn_801222C4(u8 arg0) {
    fn_80122188(arg0);
}
#pragma dont_inline reset

void fn_801222CC(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
}

void fn_80122330(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
}

#pragma dont_inline on
void fn_80122278(s32 arg0, s32 arg1, u16 arg2) {
    fn_80122188((u8) ((u8) (arg1 | arg0)));
    fn_801221F8((u16) (arg2));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801220B4(s8 *arg0) {

    if (arg0 == NULL) {
        fn_801A9384((s32) &lbl_8034F5A0, 0xA6, (s32) ((s8 *) &lbl_8034F5A0 + 0x53));
    }
    DCFlushRange((s32) (M2C_FIELD(arg0, s32 *, 0x60)), (s32) (0x80));
    GXCallDisplayList((s32) (fn_8012226C((s32 *) (arg0 + 0x74))), (s32) ((fn_8012225C((s8 *) (arg0 + 0x74)))));
}
#pragma dont_inline reset

} // extern "C"
