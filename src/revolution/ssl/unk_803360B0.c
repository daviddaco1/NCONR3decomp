#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK SOiFree();                 /* extern */
s32 SOiPrepareTempRm();        /* extern */
s32 _restgpr_24();                               /* extern */
s32 _restgpr_25();                               /* extern */
s32 _restgpr_26();                               /* extern */
u64 _savegpr_24();                                  /* extern */
u64 _savegpr_25();                                  /* extern */
u64 _savegpr_26();                                  /* extern */
M2C_UNK memcpy();                    /* extern */
M2C_UNK memset();             /* extern */
extern s32 lbl_8049D478;
extern s32 lbl_8049E5C0;

s32 fn_803360B0();
s32 fn_80336184();
s32 fn_80336274();
s32 fn_80336318();
s32 fn_80336400();
s32 fn_803364E8();
s32 fn_803365E4();
s32 fn_8033660C();
s32 fn_80336630();
s32 fn_80336658();
s32 fn_8033667C();
s32 fn_803367AC();
s32 fn_80336860();
s32 fn_803369BC();
s32 * fn_80336AC8();
s32 fn_80336B1C();
u16 fn_80336B20();
s32 fn_80336B28();
u16 fn_80336B2C();
void fn_80336B34();
void fn_80336DEC();
s32 fn_80337018();
s32 * fn_80337090();
s32 fn_803371D0();
void fn_803374B4();
s32 fn_80337518();
s32 fn_8033761C();
s32 fn_803377F8();
s32 fn_80337950();
s32 fn_80337A18();
s32 fn_80337AC4();
s32 fn_80337D94();
s32 fn_80338054();
s32 fn_80338100();
s32 fn_8033826C();
s32 fn_803383B4();
s32 fn_8033847C();
void fn_80338544();
void fn_80338548();
void fn_8033854C();
void fn_80338550();
s32 fn_80338648();
void fn_80338654(u32 arg0, u16 *arg1, u16 *arg2);
s32 fn_80338664();
s32 fn_8033878C();
s32 fn_80338790();

s32 fn_80336184(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 temp_r3;
    s32 var_r30;
    s32 var_r3;

    if ((s32) lbl_8049E5C0 == 0) {
        OSRegisterVersion(lbl_8049D478);
        lbl_8049E5C0 = 1;
    }
    var_r3 = SOiPrepare(0, &sp8);
    if (var_r3 == 0) {
        if (arg0 == 0x17) {
            var_r30 = -5;
        } else {
            temp_r3 = SOiAlloc(0xC, 0x20);
            if (temp_r3 == 0) {
                var_r30 = -0x31;
            } else {
                M2C_FIELD(temp_r3, s32 *, 0) = arg0;
                M2C_FIELD(temp_r3, s32 *, 4) = arg1;
                M2C_FIELD(temp_r3, s32 *, 8) = arg2;
                var_r30 = IOS_Ioctl(sp8, 0xF, (u8 *) temp_r3, 0xC, NULL, 0);
                SOiFree(0xC, temp_r3, 0x20);
            }
        }
        var_r3 = SOiConclude(0, var_r30);
    }
    return var_r3;
}

s32 fn_80336274(s32 arg0);

s32 fn_803365E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4);

s32 fn_8033660C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

s32 fn_80336630(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4);

s32 fn_80336658(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

s32 fn_8033667C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);

s32 fn_80336B1C(s32 arg0) {
    return arg0;
}

s32 fn_80336B28(s32 arg0) {
    return arg0;
}

void fn_80336B34(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0);

void fn_80336DEC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0);

s32 fn_80337018(void) {
    s32 sp8;
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    temp_r3 = SOiPrepare(0, &sp8);
    if (temp_r3 == 0) {
        var_r30 = IOS_Ioctl(sp8, 0x10, NULL, 0, NULL, 0);
        SOiConclude(0, temp_r3);
    }
    return var_r30;
}

s32 *fn_80337090(s32 arg0, M2C_UNK arg_sp0);

void fn_803374B4(s32 *arg0) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    if ((SOiIsInitialized() == 1) && (arg0 != NULL)) {
        SOiFree(0xA, (s32) arg0, 0x840);
    }
    OSRestoreInterrupts(temp_r31);
}

s32 fn_8033761C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, M2C_UNK arg_sp0);

s32 fn_80337950(s32 arg0, s32 arg1, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 arg_sp60, s32 *arg_sp80);

s32 fn_80337A18(s32 arg0, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 *arg_sp60);

s32 fn_80338054(s32 arg0, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 *arg_sp60);

s32 fn_80338100(s32 arg0, s32 arg1, s32 arg2, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp24, s32 arg_sp28, s32 arg_sp2C, s32 arg_sp30, s32 arg_sp34, s32 arg_sp38, s32 arg_sp3C, s32 arg_sp40, s32 *arg_sp60);

s32 fn_8033826C(s32 arg0, s32 arg1, s32 arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 *arg_sp60);

s32 fn_803383B4(s32 arg0, s32 arg1, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 arg_sp60, s32 *arg_sp80);

s32 fn_8033847C(s32 arg0, s32 arg1, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 arg_sp60, s32 *arg_sp80);

void fn_80338544(s32 arg0) {
    OSInitMutex((s8 *) arg0);
}

void fn_80338548(s32 arg0) {
    OSLockMutex((s8 *) arg0);
}

void fn_8033854C(s32 arg0) {
    OSUnlockMutex((s8 *) arg0);
}

s32 fn_80338648(s32 arg0, s32 arg1) {
    return (arg0 << 0x10) + arg1;
}

s32 fn_8033878C(s32 arg0, s32 arg1) {
    return fn_80338790(arg0, arg1);
}

s32 fn_803360B0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80336274();
s32 fn_80336318(s32 arg0, u8 *arg1);
s32 fn_80336400(s32 arg0, u8 *arg1);
s32 fn_803364E8(s32 arg0, u8 *arg1, M2C_UNK arg_sp0);
s32 fn_803365E4();
s32 fn_8033660C();
s32 fn_80336630();
s32 fn_80336658();
s32 fn_8033667C();
s32 fn_803367AC(s32 arg0, s32 arg1);
s32 fn_80336860(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_803369BC(s32 arg0, s32 *arg1, M2C_UNK arg_sp0);
s32 *fn_80336AC8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
u16 fn_80336B20();
u16 fn_80336B2C();
void fn_80336B34();
void fn_80336DEC();
s32 * fn_80337090();
s32 fn_803371D0(s32 arg0, s32 arg1, u8 *arg2, s32 **arg3, M2C_UNK arg_sp0);
s32 fn_80337518(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_8033761C();
s32 fn_803377F8();
s32 fn_80337950();
s32 fn_80337A18();
s32 fn_80337AC4();
s32 fn_80337D94();
s32 fn_80338054();
s32 fn_80338100();
s32 fn_8033826C();
s32 fn_803383B4();
s32 fn_8033847C();
void fn_80338550();
void fn_80338654(u32 arg0, u16 *arg1, u16 *arg2);
s32 fn_80338664(s32 arg0, s32 arg1);
s32 fn_80338790(s32 arg0, s32 arg1);

#pragma dont_inline on
u16 fn_80336B20(u32 arg0) {
    return (u16)arg0;
}
#pragma dont_inline reset

#pragma dont_inline on
u16 fn_80336B2C(u32 arg0) {
    return (u16)arg0;
}
#pragma dont_inline reset

void fn_80338654(u32 arg0, u16 *arg1, u16 *arg2) {
    *arg1 = arg0 >> 16;
    *arg2 = arg0;
}
