#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

u16 __ptmf_scall();                           /* extern */
M2C_UNK memset();           /* extern */
extern s32 lbl_8037DEC0[];
extern s32 lbl_8037DF08[];
extern u32 lbl_80462520[];

void fn_802FFD48();
s32 fn_802FFD58();
s32 fn_802FFD98();
s32 fn_802FFEF8();
void fn_80300130();
s32 fn_80300140();
s32 fn_80300180();
s32 fn_803002E0();
f32 fn_80300518();
s32 fn_803005A4();
s8 * fn_803005AC();
s32 fn_80300608();
f32 fn_80300660();
void fn_803006EC(s8 *arg0, f32 farg0);
void fn_803006F4(s8 *arg0, f32 farg0);
f32 fn_803006FC();
s32 fn_80300704();
void fn_8030070C();
s32 fn_80300714();
f32 fn_8030071C();
f32 fn_80300938();
s32 fn_80300B70();
void fn_80300F4C();
f32 fn_80301064();
f32 fn_803017B4();
void fn_80301F04();
void fn_80301FA8();
void fn_80302048();
void fn_80302248();
void fn_80302254();
void fn_80302BA4();
void fn_80302BD0();
void fn_80302C08();
void fn_80302C40();
void fn_80302CC0();
void fn_80302CF8();
s8 fn_803037F4();
s8 fn_80303848();
void fn_8030385C();
void fn_80303884();
void fn_803038B0();

void fn_802FFD48(s32 **arg0) {
    *(void **)arg0 = lbl_8037DF08;
}

s32 fn_802FFD58(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

void fn_80300130(s32 **arg0) {
    *(void **)arg0 = lbl_8037DEC0;
}

s32 fn_80300140(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

f32 fn_80300518(u8 *arg0);

s32 fn_803005A4(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

s32 fn_80300608(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        fn_802FD8B0(arg0, 0, arg2);
        if (arg1 > 0) {
            dtor_80136CFC(arg0);
        }
    }
    return arg0;
}

f32 fn_80300660(u8 *arg0);

f32 fn_803006FC(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x4C);
}

s32 fn_80300704(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void fn_8030070C(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
}

s32 fn_80300714(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

s32 fn_80300B70(u8 *arg0, f32 *arg1, s32 arg2, s32 arg3);

f32 fn_80301064(u8 *arg0, s32 arg1, s32 arg2);

void fn_80302254(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void fn_80302BA4(s8 *arg0);

void fn_80302BD0(s8 *arg0, s32 arg1);

void fn_80302C08(s8 *arg0, s32 arg1);

void fn_80302C40(s8 *arg0, s32 arg1);

void fn_80302CC0(s8 *arg0, s32 arg1, s32 arg2);

void fn_80302CF8(void);

void fn_803038B0(u32 arg0);

void fn_802FFD48(s32 **arg0);
s32 fn_802FFD98(s32 arg0, s32 arg1, s8 *arg2);
s32 fn_802FFEF8(s32 arg0, s8 *arg1, s32 arg2, s8 *arg3);
void fn_80300130(s32 **arg0);
s32 fn_80300180(s32 arg0, s32 arg1, s8 *arg2);
s32 fn_803002E0(s32 arg0, s8 *arg1, s32 arg2, s8 *arg3);
f32 fn_80300518();
s8 *fn_803005AC(s8 *arg0);
f32 fn_80300660();
void fn_803006EC(s8 *arg0, f32 farg0);
void fn_803006F4(s8 *arg0, f32 farg0);
f32 fn_8030071C(u8 *arg0, s32 arg1, s32 arg2);
f32 fn_80300938(u8 *arg0, s32 arg1, s32 arg2);
s32 fn_80300B70();
void fn_80300F4C(u8 *arg0, f32 *arg1, s32 arg2, s32 arg3);
f32 fn_80301064();
f32 fn_803017B4(u8 *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4);
void fn_80301F04(void);
void fn_80301FA8(u8 *arg0);
void fn_80302048(M2C_UNK arg_sp0);
void fn_80302248(u32 arg0);
void fn_80302254();
void fn_80302BA4();
void fn_80302BD0();
void fn_80302C08();
void fn_80302C40();
void fn_80302CC0();
void fn_80302CF8();
s8 fn_803037F4();
s8 fn_80303848(s32 arg0);
void fn_8030385C(s32 arg0);
void fn_80303884(s32 arg0);
void fn_803038B0();

void fn_803006EC(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x50) = farg0;
}

void fn_803006F4(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x4C) = farg0;
}

void fn_80302248(u32 arg0) {
    lbl_80462520[0] = arg0;
}
