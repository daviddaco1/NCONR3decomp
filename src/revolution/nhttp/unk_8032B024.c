#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern s32 lbl_803421C0;
/*
Decompilation failure in function fn_8032CB2C:

Unable to determine jump table for bctr instruction at unk_8032B024.s line 1988.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

/*
Decompilation failure in function fn_8032D1CC:

Cannot find branch target fn_8032D048
*/

struct SK_fn_803332CC_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
extern s32 lbl_803421C0;
extern s32 lbl_8049D3C0;
extern s32 lbl_8049D454;
extern s32 lbl_8049D460;
extern s32 lbl_8049E564;
extern s32 lbl_8049E578;
extern s32 lbl_8049E57C;

s32 NWC24GetErrorCode(void);
s32 NWC24IsMsgLibOpenBlocking(void);
s32 NWC24IsMsgLibOpened(void);
s32 NWC24IsMsgLibOpenedByTool(void);
void NWC24iRegister(void);
s32 OSCreateThread(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 OSDisableInterrupts(void);
void OSInitMessageQueue(s32 arg0, s32 arg1, s32 arg2);
void OSInitMutex(s32 arg0);
void OSLockMutex(s32 arg0);
s32 OSReceiveMessage(s32 arg0, s32 arg1, s32 arg2);
void OSRegisterVersion(s32 arg0);
s32 OSRestoreInterrupts(s32 arg0);
s32 OSSendMessage(s32 arg0, s32 arg1, s32 arg2);
void OSUnlockMutex(s32 arg0);
s32 fn_8031D320(void *arg0, s32 *arg1);
s32 fn_8031D460(void *arg0);
s32 * fn_8032B024(s8 *arg0);
s32 * fn_8032B11C(s8 *arg0);
s32 fn_8032B378(M2C_UNK *arg0);
s32 * fn_8032B4A0(s32 *arg0, s32 *arg1, s32 *arg2, M2C_UNK arg_sp0);
void fn_8032B7B0(void);
s32 fn_8032B8A0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8032BD18(s32 arg0);
void fn_8032C1C4(s8 *arg0);
void fn_8032C204(s32 *arg0, s32 arg1, u32 arg2);
void fn_8032C2F4(s32 *arg0, s32 arg1);
s32 * fn_8032C41C(void);
void fn_8032C428(s32 *arg0);
M2C_UNK fn_8032CB2C(s32 arg0);
void fn_8032CCE0(s32 *arg0);
s32 * fn_8032CD10(s32 *arg0, s32 arg1);
s32 fn_8032CD6C(s32 *arg0);
void fn_8032CDB0(s8 *arg0, s32 arg1);
void fn_8032CDB8(s8 *arg0, s32 arg1);
s32 fn_8032CDC0(s8 *arg0);
M2C_UNK fn_8032CF58(s32 arg0, s32 arg1);
s32 fn_8032D048(M2C_UNK **arg0, s8 *arg1, u8 *arg2, M2C_UNK *arg3);
s8 ** fn_8032D184(s8 ***arg0);
M2C_UNK fn_8032D1CC(s32 arg0);
void fn_8032D378(s32 *arg0);
s32 fn_8032D570(s32 *arg0, s32 *arg1);
s32 fn_8032D5C4(s32 arg0);
void fn_8032D5C8(s8 *arg0);
void fn_8032D5D4(s32 *arg0);
void fn_8032D614(void);
void fn_8032D618(s32 arg0);
void fn_8032D61C(s32 arg0);
s32 fn_8032D620(s8 *arg0, s32 arg1, s32 arg2);
void fn_8032D6B4(s8 *arg0, s8 *arg1);
void fn_8032D6FC(s32 arg0);
void fn_8032D724(s32 arg0);
void fn_8032D730(s32 arg0, s32 arg1);
s32 fn_8032D7C8(void);
s32 fn_8032DE10(s32 *arg0, u32 arg1);
s32 fn_8032DE2C(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 *arg4);
void fn_8032DE88(s32 **arg0);
void fn_8032E8C4(M2C_UNK *arg0, M2C_UNK *arg1);
s32 fn_8032E990(s32 *arg0, s8 *arg1, s32 *arg2, M2C_UNK arg_sp0);
s32 fn_8032EAC4(s32 arg0);
s32 fn_8032EB1C(s32 *arg0);
s32 fn_8032EBF0(s32 *arg0, s32 *arg1, s32 arg2);
s32 fn_8032EFD8(s32 arg0, M2C_UNK *arg1, M2C_UNK *arg2, M2C_UNK *arg3, M2C_UNK *arg4, s32 arg5);
void fn_8032F2F8(M2C_UNK *arg0, s32 arg1, s32 *arg2);
s32 * fn_8032F34C(s32 arg0, s8 *arg1);
void fn_8032F3C0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8032F3C8(s32 arg0, s32 arg1);
void fn_8032F3CC(s32 arg0, s32 *arg1);
s32 fn_8032F3D8(s32 *arg0, u8 *arg1, s32 arg2);
s32 fn_8032F4A4(u8 *arg0);
s32 fn_8032F514(u8 *arg0, s32 arg1);
s8 fn_8032F628(u8 *arg0, s32 arg1);
s32 fn_8032F74C(u8 *arg0, s32 arg1);
s32 fn_8032F7EC(s8 *arg0, u32 arg1, M2C_UNK arg_sp0);
s32 fn_8032F968(u8 *arg0, u8 *arg1);
s32 fn_8032FA1C(u8 *arg0, s32 arg1);
void fn_8032FD34(s8 *arg0);
void fn_8032FD40(s8 *arg0);
s32 fn_8032FD4C(s8 *arg0);
s32 fn_8032FD54(s32 *arg0, s32 arg1);
s32 fn_8032FE1C(s32 *arg0, s32 *arg1, s32 arg2, s32 *arg3, s32 *arg4, s32 arg5, M2C_UNK arg_sp0);
s32 fn_80330190(s32 *arg0, s32 *arg1);
void fn_803326D4(void);
s32 fn_80332AAC(M2C_UNK *arg0, s32 *arg1, s32 *arg2);
s32 fn_80332BBC(s32 *arg0);
void fn_80332C94(M2C_UNK *arg0);
M2C_UNK fn_80332CC8(void);
s8 * fn_80332ED0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
M2C_UNK fn_80332FA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_803331AC(s32 *arg0);
void fn_80333248(M2C_UNK *arg0);
s32 fn_803332CC(s32 *arg0, s32 *arg1);
s32 fn_80333334(s8 *arg0);
s32 fn_80333394(s8 *arg0, s32 arg1);
s32 fn_80333688(s8 *arg0);
s32 fn_803336E8(s8 *arg0);
void fn_80333758(s32 *arg0);
s8 * fn_803337D4(M2C_UNK *arg0, s8 *arg1, u32 arg2);
s32 fn_803338E4(s32 arg0, s32 arg1);
s32 fn_80333914(s32 arg0, s32 arg1);
s8 * fn_80333944(s32 arg0, s32 arg1);
s8 * fn_8033397C(s32 arg0, s32 arg1);
M2C_UNK fn_803339BC(s32 arg0, s32 arg1);
s8 * fn_803339CC(s32 arg0, s8 *arg1);
s8 * fn_80333A10(s32 arg0, s8 *arg1);
s32 fn_80333A54(void);
s32 fn_80333A74(s32 *arg0, s8 *arg1, s32 *arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_80333B5C(s32 *arg0, s8 *arg1);
s32 fn_80333C74(s32 *arg0, s8 *arg1);
s32 fn_80333D8C(s32 arg0, M2C_UNK *arg1);
M2C_UNK * fn_80333DE4(void);
void fn_80333E4C(void);
M2C_UNK * fn_80333E50(M2C_UNK *arg0);
s32 ** fn_80333E58(s32 *arg0);
s8 * fn_80333E60(s32 *arg0);
M2C_UNK * fn_80333E68(M2C_UNK *arg0);
void fn_80333E70(s32 *arg0, s32 arg1);
s32 fn_80333E80(s32 *arg0);
void fn_80333E98(void);
s32 fn_80333EF8(s8 *arg0);
s32 fn_803340D4(s32 arg0);
M2C_UNK fn_80336274(s32 arg0);
M2C_UNK fn_8033660C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK fn_803367AC(s32 arg0, s32 arg1);
M2C_UNK fn_803371D0(s32 arg0, s32 arg1, u8 *arg2, s32 **arg3);
void fn_803374B4(s32 *arg0);
s32 fn_80338054(s32 arg0);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
s32 strcmp(s32 arg0, s32 arg1);

s32 NWC24GetErrorCode(void) {
    return (s32) (lbl_8049D3C0);
}

s32 fn_8032BD18(s32 arg0) {
    return (s32) (fn_8032B378((M2C_UNK *) ((s32 *) arg0)));
}

void fn_8032C1C4(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0x67452301);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0xEFCDAB89);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0x98BADCFE);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0x10325476);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
}

void fn_8032CCE0(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x7D4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7D8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7C4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7C8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7CC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7D0) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x7DC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7E0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7E4) = (s32) (0);
}

s32 * fn_8032CD10(s32 *arg0, s32 arg1) {
    s32 *(*temp_r12)(s32 *, s32);

    temp_r12 = M2C_FIELD(fn_80333DE4(), s32 *(**)(s32 *, s32), 0x7C4);
    if (temp_r12 != NULL) {
        return (s32 *) (temp_r12(arg0, arg1));
    }
    return (s32 *) (NULL);
}

s32 fn_8032CD6C(s32 *arg0) {
    s32 *(*temp_r12)(s32 *);
    s32 *var_r3;

    var_r3 = (s32 *) (fn_80333DE4());
    temp_r12 = M2C_FIELD(var_r3, s32 *(**)(s32 *), 0x7C8);
    if (temp_r12 != NULL) {
        var_r3 = (s32 *) (temp_r12(arg0));
    }
    return (s32) ((s32) var_r3);
}

void fn_8032CDB0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7D8) = (s32) (arg1);
}

void fn_8032CDB8(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7D4) = (s32) (arg1);
}

s32 fn_8032CDC0(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x7D4));
}

void fn_8032D378(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
}

void fn_8032D5C8(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (0);
}

void fn_8032D5D4(s32 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        OSInitMutex((s32) ((s32) arg0));
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (1);
    }
}

void fn_8032D614(void) {

}

void fn_8032D618(s32 arg0) {
    OSLockMutex((s32) (arg0));
}

void fn_8032D61C(s32 arg0) {
    OSUnlockMutex((s32) (arg0));
}

s32 fn_8032D620(s8 *arg0, s32 arg1, s32 arg2) {
    if (fn_8032FD4C((s8 *) (arg0)) == 0) {
        OSInitMessageQueue((s32) ((s32) arg0), (s32) ((s32) (arg0 + 0x20)), (s32) (3));
        fn_8032FD40((s8 *) (arg0));
    }
    OSCreateThread((s32) ((s32) (arg0 + 0x30)), (s32) ((s32) fn_8032D7C8), (s32) (0), (s32) (arg2 + 0x2000), (s32) (0x2000), (s32) (arg1), (s32) (0));
    fn_8031D460((void *) (arg0 + 0x30));
    return (s32) (1);
}

void fn_8032D6B4(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg1, s32 *, 0x7DC) = (s32) (1);
    OSSendMessage((s32) ((s32) arg0), (s32) (0), (s32) (0));
    fn_8031D320((void *) (arg0 + 0x30), (s32 *) (NULL));
}

void fn_8032D6FC(s32 arg0) {
    M2C_UNK sp8;

    OSReceiveMessage((s32) (arg0), (s32) ((s32) &sp8), (s32) (1));
}

void fn_8032D724(s32 arg0) {
    OSSendMessage((s32) (arg0), (s32) (0), (s32) (0));
}

s32 fn_8032D7C8(void) {
    fn_803326D4();
    return (s32) (0);
}

s32 fn_8032DE10(s32 *arg0, u32 arg1) {
    return (s32) ((u32) M2C_FIELD(arg0, u32 *, 0x1C) <= arg1);
}

s32 fn_8032DE2C(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s8 *temp_r9;

    temp_r9 = (s8 *) (M2C_FIELD(arg1, s8 **, 0x2C));
    return (s32) (fn_8032EFD8((s32) (arg0), (M2C_UNK *) (arg1), (M2C_UNK *) ((s32 *) arg2), (M2C_UNK *) ((s8 *) M2C_FIELD(temp_r9, s32 *, 0x28) + arg3), (M2C_UNK *) (M2C_FIELD(temp_r9, s32 *, 0x1C) - arg3), (s32) ((s32) arg4)));
}

void fn_8032DE88(s32 **arg0) {
    *arg0 = NULL;
}

s32 fn_8032EAC4(s32 arg0) {
    M2C_UNK sp8;
    s32 var_r31;

    var_r31 = (s32) (0);
    if (arg0 == -1) {
        var_r31 = (s32) (-1);
    } else if (fn_8033660C((s32) (arg0), (s32) ((s32) &sp8), (s32) (1), (s32) (4)) != -6) {
        var_r31 = (s32) (-1);
    }
    return (s32) (var_r31);
}

s32 fn_8032EBF0(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r3;

    fn_8032D618((s32) ((s32) arg0));
    temp_r3 = (s32) (M2C_FIELD(arg1, s32 *, 0xAC));
    if (temp_r3 > 0) {
        fn_80338054((s32) (temp_r3));
        M2C_FIELD(arg1, s32 *, 0xAC) = (s32) (-1);
    }
    fn_8032D61C((s32) ((s32) arg0));
    return (s32) (fn_80336274((s32) (arg2)));
}

s32 * fn_8032F34C(s32 arg0, s8 *arg1) {
    s32 *spC;
    s32 *sp8;

    spC = (s32 *) (NULL);
    if (fn_803371D0((s32) ((s32) arg1), (s32) (0), (u8 *) (NULL), (s32 **) (&sp8)) == 0) {
        fn_8032F3C0((s32) ((s32) &spC), (s32) (M2C_FIELD(sp8, s32 *, 0x18) + 4), (s32) (4));
        fn_803374B4((s32 *) (sp8));
    } else {
        spC = (s32 *) (NULL);
    }
    return (s32 *) (spC);
}

void fn_8032F3C0(s32 arg0, s32 arg1, s32 arg2) {
    memcpy((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

s32 fn_8032F3C8(s32 arg0, s32 arg1) {
    return (s32) (strcmp((s32) (arg0), (s32) (arg1)));
}

void fn_8032F3CC(s32 arg0, s32 *arg1) {
    memset((s32) (arg0), (s32) (0), (s32) ((s32) arg1));
}

void fn_8032FD34(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x348) = (s32) (0);
}

void fn_8032FD40(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x348) = (s32) (1);
}

s32 fn_8032FD4C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x348));
}

s32 fn_80333334(s8 *arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80333A10((s32) (fn_80333E68((M2C_UNK *) (fn_80333DE4()))), (s8 *) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (-1);
    }
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x14) != 0) {
        return (s32) (M2C_FIELD(temp_r3, s32 *, 0x18));
    }
    return (s32) (-1);
}

s32 fn_80333394(s8 *arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_803339CC((s32) (fn_80333E68((M2C_UNK *) (fn_80333DE4()))), (s8 *) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (-1);
    }
    M2C_FIELD(temp_r3, s32 *, 0xCC) = (s32) (arg1);
    return (s32) (0);
}

s8 * fn_80333944(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) ((s8 *) arg1), (u32) (0U)));
    if (temp_r3 != NULL) {
        return (s8 *) (M2C_FIELD(temp_r3, s8 **, 0x10));
    }
    return (s8 *) (NULL);
}

s8 * fn_8033397C(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) ((s8 *) arg1), (u32) (0U)));
    if (temp_r3 != NULL) {
        return (s8 *) (M2C_FIELD(temp_r3, s8 **, 0x14));
    }
    return (s8 *) (NULL);
}

s8 * fn_803339CC(s32 arg0, s8 *arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) (arg1), (u32) (0U)));
    if (temp_r3 != NULL) {
        return (s8 *) (M2C_FIELD(temp_r3, s8 **, 0x10));
    }
    return (s8 *) (arg1);
}

s8 * fn_80333A10(s32 arg0, s8 *arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) (arg1), (u32) (0U)));
    if (temp_r3 != NULL) {
        return (s8 *) (M2C_FIELD(temp_r3, s8 **, 0x14));
    }
    return (s8 *) (arg1);
}

void fn_80333E4C(void) {

}

s32 ** fn_80333E58(s32 *arg0) {
    return (s32 **) ((s32 **) ((s8 *)arg0 + 0x808));
}

s8 * fn_80333E60(s32 *arg0) {
    return (s8 *) ((s8 *)arg0 + 0x840);
}

void fn_80333E70(s32 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg1);
    }
}

s32 fn_80333E80(s32 *arg0) {
    if (arg0 != NULL) {
        return (s32) (M2C_FIELD(arg0, s32 *, 0x2C));
    }
    return (s32) (0);
}

void NWC24iRegister(void) {
    if ((s32) lbl_8049E57C == 0) {
        OSRegisterVersion((s32) (lbl_8049D460));
        lbl_8049E57C = 1;
    }
}

s32 NWC24IsMsgLibOpened(void) {
    return (s32) ((lbl_8049E578 - 1) == 0);
}

s32 NWC24IsMsgLibOpenedByTool(void) {
    return (s32) ((lbl_8049E578 - 2) == 0);
}

s32 NWC24IsMsgLibOpenBlocking(void) {
    return (s32) ((lbl_8049E578 - 3) == 0);
}

s32 fn_803340D4(s32 arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r31;

    var_r31 = (s32) (0);
    temp_r3 = (s32) (OSDisableInterrupts());
    if (arg0 != 0) {
        if ((s32) lbl_8049E578 == 0) {
            lbl_8049E578 = 3;
        } else if ((s32) lbl_8049E578 == 1) {
            var_r31 = (s32) (-0xA);
        } else {
            var_r31 = (s32) (-0x1A);
        }
    } else {
        temp_r4 = (s32) ((lbl_8049E578 - 3) == 0);
        if (temp_r4 != 0) {
            lbl_8049E578 = 0;
        }
        if (temp_r4 == 0) {
            var_r31 = (s32) (-9);
        }
    }
    OSRestoreInterrupts((s32) (temp_r3));
    return (s32) (var_r31);
}

#pragma dont_inline on
s32 fn_8032D5C4(s32 arg0) {
    return (s32) (fn_8032D184((s8 ***) ((s8 ***) arg0)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8032F2F8(M2C_UNK *arg0, s32 arg1, s32 *arg2) {
    fn_8032D618((s32) ((s32) arg0));
    if ((s32) arg2 >= 0) {
        fn_803367AC((s32) ((s32) arg2), (s32) (2));
    }
    fn_8032D61C((s32) ((s32) arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80332C94(M2C_UNK *arg0) {
    fn_8032CF58((s32) (fn_80333DE4()), (s32) ((s32) arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80332CC8(void) {
    return (M2C_UNK) (fn_8032CDC0((s8 *) (fn_80333DE4())));
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80332FA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if ((s32) lbl_8049E564 == 0) {
        OSRegisterVersion((s32) (lbl_8049D454));
        lbl_8049E564 = 1;
    }
    return (M2C_UNK) (fn_80332ED0((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (0), (s32) (0)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80333248(M2C_UNK *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = (s32) (fn_80333E68((M2C_UNK *) (fn_80333DE4())));
    temp_r3_2 = (s32) (fn_803339BC((s32) (temp_r3), (s32) ((s32) arg0)));
    if (temp_r3_2 != 0) {
        if (fn_8033397C((s32) (temp_r3), (s32) (temp_r3_2)) != NULL) {
            fn_8032E8C4((M2C_UNK *) ((s32 *) temp_r3), (M2C_UNK *) (M2C_FIELD(temp_r3_2, s8 **, 0x14)));
        }
        fn_80333914((s32) (temp_r3), (s32) (temp_r3_2));
        fn_8032CD6C((s32 *) ((s32 *) temp_r3_2));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_803332CC(s32 *arg0, s32 *arg1) {
    SK_fn_803332CC_8 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_803339BC((s32) (fn_80333E68((M2C_UNK *) (fn_80333DE4()))), (s32) ((s32) arg0)));
    if (temp_r3 != 0) {
        sp8.f_0 = 0;
        return (s32) (fn_80332AAC((M2C_UNK *) ((s32 *) temp_r3), (s32 *) (arg1), (s32 *) (&sp8)));
    }
    return (s32) (-1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_803336E8(s8 *arg0) {
    s32 var_r5;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_803339CC((s32) (fn_80333E68((M2C_UNK *) (fn_80333DE4()))), (s8 *) (arg0)));
    if (temp_r3 == NULL) {
        var_r5 = (s32) (-1);
    } else {
        M2C_FIELD(temp_r3, s32 *, 0xDC) = (s32) (0);
        var_r5 = (s32) (0);
        M2C_FIELD(temp_r3, s32 *, 0xC8) = (s32) (1);
        M2C_FIELD(temp_r3, s32 *, 0xB0) = (s32) (0);
        M2C_FIELD(temp_r3, s32 *, 0xB4) = (s32) (0);
        M2C_FIELD(temp_r3, s32 *, 0xB8) = (s32) (0);
        M2C_FIELD(temp_r3, s32 *, 0xBC) = (s32) (0);
    }
    return (s32) (var_r5);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_803338E4(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) ((s8 *) arg1), (u32) (3U)));
    return (s32) ((s32) ~(temp_r3 | -temp_r3) >> 0x1F);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80333914(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) ((s8 *) arg1), (u32) (4U)));
    return (s32) ((s32) ~(temp_r3 | -temp_r3) >> 0x1F);
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_803339BC(s32 arg0, s32 arg1) {
    return (M2C_UNK) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) ((s8 *) arg1), (u32) (2U)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80333D8C(s32 arg0, M2C_UNK *arg1) {
    s8 *(*temp_r12)(s32 *, M2C_UNK, M2C_UNK);
    s8 *var_r3;

    var_r3 = (s8 *) (fn_803337D4((M2C_UNK *) ((s32 *) arg0), (s8 *) (arg1), (u32) (0U)));
    if (var_r3 != NULL) {
        temp_r12 = M2C_FIELD(arg1, s8 *(**)(s32 *, M2C_UNK, M2C_UNK), 0x1C);
        if (temp_r12 != NULL) {
            var_r3 = (s8 *) (temp_r12(arg1, 4, 0));
        }
    }
    return (s32) ((s32) var_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK * fn_80333E50(M2C_UNK *arg0) {
    return (M2C_UNK *) ((s8 *)arg0 + 0x800);
}
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK * fn_80333E68(M2C_UNK *arg0) {
    return (M2C_UNK *) ((s8 *)arg0 + 0x80C);
}
#pragma dont_inline reset

} // extern "C"
