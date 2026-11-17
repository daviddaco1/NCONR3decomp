#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct SK_B60 { u32 a; u32 b; u32 c; u32 d; };
extern u8 lbl_8035A350[];
extern u8 lbl_803A65E0[];
extern u8 lbl_803A68F8[];
extern u8 lbl_803A78F8[];
extern u8 lbl_803A7918[];
extern u8 lbl_803A7938[];
extern u8 lbl_803A7950[];
extern u8 lbl_803A7980[];
extern u8 lbl_803A7BC0[];
extern u8 lbl_803A7BE0[];
extern u8 lbl_803A7C00[];
extern u8 lbl_803A7C20[];
extern u8 lbl_803A7F20[];
extern u8 lbl_803A7F40[];
extern u8 lbl_803A7F60[];
extern u8 lbl_803A7F80[];
extern u8 lbl_803A7FA8[];
extern u8 lbl_803A7FD0[];
extern u8 lbl_803A7FF8[];
extern u8 lbl_803A8310[];
extern u8 lbl_803A9310[];
extern u8 lbl_803A9628[];
extern u8 lbl_803AA628[];
extern u8 lbl_803AA648[];
extern u8 lbl_803AA668[];
extern u8 lbl_803AA674[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049D700;
extern s32 *lbl_8049D708;
extern s32 lbl_8049D710;
extern s32 lbl_8049D718;
extern s32 lbl_8049D720;
extern s32 lbl_8049D724;
extern s32 lbl_8049D728;
extern s32 lbl_8049D72C;
extern s32 lbl_8049D730;
extern s32 lbl_8049D734;
extern s32 lbl_8049D738;
extern s32 lbl_8049D740;
extern s32 lbl_8049D748;
extern s32 lbl_8049D74C;
__declspec(section ".sdata2") extern const f32 lbl_804A0B38[];

s32 AIGetDMAStartAddr(void);
void AIInitDMA(s32 arg0, s32 arg1);
s32 AIRegisterDMACallback(s32 arg0);
void AIStartDMA(void);
void DCFlushRange(s32 arg0, s32 arg1);
void DCInvalidateRange(s32 arg0, s32 arg1);
M2C_UNK DVDCancel(s32 arg0);
s32 DVDClose(s32 arg0);
s32 DVDReadAsyncPrio(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 DVDReadPrio(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetTevSwapModeTable(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void OSCancelThread(s32 arg0);
s32 OSCreateThread(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 OSDisableInterrupts(void);
s32 OSEnableInterrupts(void);
void OSInitMessageQueue(s32 arg0, s32 arg1, s32 arg2);
s32 OSReceiveMessage(s32 arg0, s32 arg1, s32 arg2);
s32 OSRestoreInterrupts(s32 arg0);
s32 OSSendMessage(s32 arg0, s32 arg1, s32 arg2);
s32 OSSuspendThread(s32 arg0);
s32 VIGetNextField(void);
s32 VISetPostRetraceCallback(s32 arg0);
u16 * fn_80136B14(s32 arg0);
s32 fn_80136B1C(s32 arg0);
u16 fn_80136B24(s32 arg0);
s32 fn_80136B60(s32 arg0, s32 arg1);
s32 fn_80136BFC(s8 *arg0);
s32 fn_80136C54(s32 arg0);
s32 fn_80136CA8(s32 arg0);
void fn_80136D94(s32 arg0);
s32 fn_80136D9C(void);
s32 fn_80136DA4(void);
s32 fn_80136DB4(void);
s32 fn_80136DDC(void);
s32 * fn_80136E78(s32 arg0, s32 arg1);
s32 fn_80136F28(s8 *arg0, s32 arg1);
void fn_80137364(void);
void fn_80137368(void);
s32 fn_8013736C(s32 arg0);
void fn_801373D0(s32 arg0);
s32 fn_80137410(s32 arg0, s32 arg1);
void fn_801374EC(void);
void fn_80137508(void);
void fn_80137544(void);
void fn_8013756C(s32 *arg0);
void fn_80137614(s32 **arg0);
s32 ** fn_801376D4(s32 arg0, s32 arg1);
void fn_80137708(s32 **arg0);
s32 ** fn_8013771C(s32 arg0);
void fn_80137760(s32 **arg0);
void fn_80137774(void);
void fn_8013788C(s8 *arg0);
void fn_80137D38(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, u16 arg5, u16 arg6, s16 arg7);
void fn_80137F38(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80137F44(void);
void fn_80137F48(u16 arg0, u16 arg1);
void fn_80137F60(s16 arg0, s16 arg1, s16 arg2);
void fn_80137F80(void);
s32 fn_80137F8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80137FD4(s32 arg0);
void fn_80138118(void);
s32 fn_801383D8(void);
u32 fn_8013842C(void);
s32 fn_80138738(void);
void fn_80138774(s32 **arg0);
s32 fn_801389F8(void);
void fn_80138A58(void);
s32 fn_80138B10(void);
s32 fn_80138DD4(void);
s32 fn_80138F7C(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
s32 fn_8013904C(s32 arg0);
s32 fn_80139094(s32 arg0);
s32 fn_801390DC(void);
void fn_801390EC(s32 **arg0);
s32 ** fn_80139100(void);
void fn_80139144(void);
void fn_80139184(void);
void fn_801392E8(M2C_UNK *arg0, M2C_UNK *arg1, u32 arg2);
s32 fn_801397E0(void);
s32 fn_80139818(s32 arg0);
void fn_801398C8(void);
void fn_801398E4(void);
void fn_80139920(void);
s32 ** fn_80139A00(void);
void fn_80139A34(s32 **arg0);
s32 ** fn_80139A48(void);
void fn_80139A7C(s32 **arg0);
s32 ** fn_80139A90(void);
void fn_80139AC4(s32 **arg0);
s32 fn_80139AD8(s32 arg0, s32 arg1);
void fn_80139BB8(void);
void fn_80139BD4(void);
void fn_80139C10(void);
void fn_80139CDC(s32 *arg0);
s32 ** fn_80139F50(s32 arg0, s32 arg1);
void fn_80139F84(s32 **arg0);
s32 ** fn_80139F98(s32 arg0);
void fn_80139FDC(s32 **arg0);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2);
void fn_801773E0(s32 arg0);
s32 fn_801780F8(s32 arg0);
s32 fn_8018DE10(void);
void fn_802E1450(void);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
s32 fn_8031D460(s8 *arg0);
s32 fn_80329400(void);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

u16 * fn_80136B14(s32 arg0) {
    return (u16 *) (arg0 + 0x24);
}

s32 fn_80136B1C(s32 arg0) {
    return (s32) (arg0 + 0x28);
}

s32 fn_80136BFC(s8 *arg0) {
    s32 temp_r5;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0x20));
    return (s32) ((((u32) (temp_r5 & 0xFF000000) >> 0x18U) | ((u32) (temp_r5 & 0xFF0000) >> 8U) | (((u8) temp_r5 << 0x18) | ((temp_r5 & 0xFF00) << 8))) == 0x20061122);
}

s32 fn_80136C54(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170E2C((s32) (lbl_8049D700), (s32) (arg0), (s32) (0)));
    memset((s32) (temp_r3), (s32) (0), (s32) (arg0));
    return (s32) (temp_r3);
}

s32 fn_80136CA8(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170E2C((s32) (lbl_8049D700), (s32) (arg0), (s32) (0)));
    memset((s32) (temp_r3), (s32) (0), (s32) (arg0));
    return (s32) (temp_r3);
}

void fn_80136D94(s32 arg0) {
    lbl_8049D700 = arg0;
}

s32 fn_80136D9C(void) {
    return (s32) (lbl_8049D700);
}

s32 fn_80136DA4(void) {
    return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8));
}

s32 fn_80136DB4(void) {
    if ((s32 *) lbl_8049D708 != NULL) {
        return (s32) ((*lbl_8049D708 - 2) == 0);
    }
    return (s32) (1);
}

s32 fn_80136DDC(void) {
    s32 *temp_r31;
    s32 temp_r0;

    temp_r31 = (s32 *) (lbl_8049D708);
    if (temp_r31 == NULL) {
        return (s32) (1);
    }
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x44) < 0x3C) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(temp_r31, s32 *, 0));
    switch (temp_r0) {                              /* irregular */
    case 1:
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0x58) != 0) {
            fn_80138A58();
            fn_801383D8();
            fn_801373D0((s32) (M2C_FIELD(temp_r31, s32 *, 0x1C)));
            M2C_FIELD(temp_r31, s32 *, 0x58) = (s32) (0);
        }
        /* fallthrough */
    case 2:
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (0xF0);
        break;
    }
    fn_801773E0((s32) ((s32) temp_r31));
    return (s32) (1);
}

void fn_80137364(void) {
}

void fn_80137368(void) {
}

s32 fn_8013736C(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170410((s32) (1), (s32) (((((arg0 + 0x1F) & 0xFFFFFFE0) + 0x3F) & 0xFFFFFFE0) + 0x20), (s32) (0), (s32) (0x4004)));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x838) = (s32) (temp_r3);
    return (s32) (fn_80170E2C((s32) (temp_r3), (s32) (arg0), (s32) (0x4004)));
}

void fn_801373D0(s32 arg0) {
    fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x838)), (s8 *) ((s8 *) arg0));
    fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x838)));
}

#pragma dont_inline on
void fn_801374EC(void) {
    if (*(u32 *)&lbl_8049D710 != 0) {
        fn_8031D460((s8 *)lbl_803A65E0);
    }
}
#pragma dont_inline reset

void fn_80137544(void) {
    s32 **temp_r3;

loop_1:
    temp_r3 = (s32 **) (fn_80139A00());
    fn_80137614((s32 **) (temp_r3));
    fn_80139AC4((s32 **) (temp_r3));
    goto loop_1;
}

s32 ** fn_801376D4(s32 arg0, s32 arg1) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A78F8), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80137708(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A78F8), (s32) ((s32) arg0), (s32) (0));
}

s32 ** fn_8013771C(s32 arg0) {
    s32 **sp8;

    if (OSReceiveMessage((s32) ((s32) &lbl_803A7918), (s32) ((s32) &sp8), (s32) (arg0)) == 1) {
        return (s32 **) (sp8);
    }
    return (s32 **) (NULL);
}

void fn_80137760(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7918), (s32) ((s32) arg0), (s32) (1));
}

void fn_80137774(void) {
    GXSetZMode((s32) (1), (s32) (7), (s32) (0));
    GXSetBlendMode((s32) (0), (s32) (1), (s32) (0), (s32) (0xF));
    GXSetNumTexGens((s32) (1));
    GXSetNumChans((s32) (0));
    fn_802E4A28((s32) (1));
    fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (0xFF));
    fn_802E43CC((s32) (0), (s32) (3));
    fn_802E4750((s32) (0), (s32) (0), (s32) (0));
    fn_802E4750((s32) (1), (s32) (0), (s32) (0));
    fn_802E4750((s32) (2), (s32) (0), (s32) (0));
    fn_802E4750((s32) (3), (s32) (0), (s32) (0));
    GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
    GXSetTevSwapModeTable((s32) (1), (s32) (0), (s32) (0), (s32) (0), (s32) (3));
    GXSetTevSwapModeTable((s32) (2), (s32) (1), (s32) (1), (s32) (1), (s32) (3));
    GXSetTevSwapModeTable((s32) (3), (s32) (2), (s32) (2), (s32) (2), (s32) (3));
}

void fn_80137F38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_80137F44(void) {
}

void fn_80137F48(u16 arg0, u16 arg1) {
    GXWGFifo.u16 = arg0;
    GXWGFifo.u16 = arg1;
}

void fn_80137F60(s16 arg0, s16 arg1, s16 arg2) {
    GXWGFifo.s16 = arg0;
    GXWGFifo.s16 = arg1;
    GXWGFifo.s16 = arg2;
}

void fn_80137F80(void) {
    lbl_8049D738 = 1;
}

s32 fn_80137F8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    lbl_8049D738 = 0;
    DVDReadAsyncPrio((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) ((s32) fn_80137F80), (s32) (2));
    do {
        fn_801780F8((s32) (0));
    } while ((s32) lbl_8049D738 != 1);
    return (s32) (lbl_8049D738);
}

void fn_80138118(void) {
    s32 temp_r31;

    temp_r31 = (s32) (OSDisableInterrupts());
    if ((s32) lbl_8049D728 != 0) {
        AIRegisterDMACallback((s32) (lbl_8049D728));
    }
    OSRestoreInterrupts((s32) (temp_r31));
    lbl_8049D718 = 0;
}

s32 fn_801383D8(void) {
    if (((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) && ((s32) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) == 0)) {
        M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) = (s32) (0);
        DVDClose((s32) ((s32) &lbl_803A7980));
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80138738(void) {
    s32 sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7BC0), (s32) ((s32) &sp8), (s32) (1));
    return (s32) (sp8 != 0);
}

void fn_80138774(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7BC0), (s32) ((s32) arg0), (s32) (1));
}

s32 fn_80138B10(void) {
    if (((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) && ((u8) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) == 2)) {
        M2C_FIELD(&lbl_803A7980, s8 *, 0xA5) = (s8) (4);
        M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) = (u8) (4U);
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_801390DC(void) {
    return (s32) ((s32) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4));
}

void fn_801390EC(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7BE0), (s32) ((s32) arg0), (s32) (0));
}

s32 ** fn_80139100(void) {
    s32 **sp8;

    if (OSReceiveMessage((s32) ((s32) &lbl_803A7BE0), (s32) ((s32) &sp8), (s32) (0)) == 1) {
        return (s32 **) (sp8);
    }
    return (s32 **) (NULL);
}

void fn_80139144(void) {
    s32 **temp_r3;

    fn_802E1450();
    if ((s32) lbl_8049D718 != 0) {
loop_1:
        temp_r3 = (s32 **) (fn_80139100());
        if (temp_r3 != NULL) {
            fn_80139F84((s32 **) (temp_r3));
            goto loop_1;
        }
    }
}

s32 fn_801397E0(void) {
    if ((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) {
        return (s32) ((s32) M2C_FIELD(&lbl_803A7980, f32 *, 0xDC));
    }
    return (s32) (-1);
}

#pragma dont_inline on
void fn_801398C8(void) {
    if (*(u32 *)&lbl_8049D740 != 0) {
        fn_8031D460((s8 *)lbl_803A7FF8);
    }
}
#pragma dont_inline reset

s32 ** fn_80139A00(void) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7F40), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139A34(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7F40), (s32) ((s32) arg0), (s32) (1));
}

s32 ** fn_80139A48(void) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7F20), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139A7C(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7F20), (s32) ((s32) arg0), (s32) (1));
}

s32 ** fn_80139A90(void) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7F60), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139AC4(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7F60), (s32) ((s32) arg0), (s32) (1));
}

#pragma dont_inline on
void fn_80139BB8(void) {
    if (*(u32 *)&lbl_8049D748 != 0) {
        fn_8031D460((s8 *)lbl_803A9310);
    }
}
#pragma dont_inline reset

s32 ** fn_80139F50(s32 arg0, s32 arg1) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803AA628), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139F84(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803AA628), (s32) ((s32) arg0), (s32) (0));
}

s32 ** fn_80139F98(s32 arg0) {
    s32 **sp8;

    if (OSReceiveMessage((s32) ((s32) &lbl_803AA648), (s32) ((s32) &sp8), (s32) (arg0)) == 1) {
        return (s32 **) (sp8);
    }
    return (s32 **) (NULL);
}

void fn_80139FDC(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803AA648), (s32) ((s32) arg0), (s32) (1));
}

#pragma dont_inline on
u16 fn_80136B24(s32 arg0) {
    u16 temp_r4;

    temp_r4 = (u16) (*fn_80136B14((s32) (arg0)));
    return (u16) ((u16) (((u8) temp_r4 << 8) | ((s32) (temp_r4 & 0xFF00) >> 8)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801389F8(void) {
    if (((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) && (((u8) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) == 1) || ((u8) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) == 4))) {
        M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) = (u8) (2U);
        M2C_FIELD(&lbl_803A7980, s32 *, 0xD0) = (s32) (0);
        M2C_FIELD(&lbl_803A7980, s32 *, 0xD4) = (s32) (0);
        M2C_FIELD(&lbl_803A7980, s32 *, 0xCC) = (s32) (-1);
        M2C_FIELD(&lbl_803A7980, s32 *, 0xC8) = (s32) (-1);
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8013904C(s32 arg0) {
    if ((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) {
        memcpy((s32) (arg0), (s32) ((s32) ((s8 *) &lbl_803A7980 + 0x80)), (s32) (0xC));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80139094(s32 arg0) {
    if ((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) {
        memcpy((s32) (arg0), (s32) ((s32) ((s8 *) &lbl_803A7980 + 0x8C)), (s32) (0x10));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80136E78(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    if ((s32 *) lbl_8049D708 != NULL) {
        return (s32 *) (NULL);
    }
    temp_r3 = (s32 *) (fn_801771D4((s32) (5), (s8 *) (fn_80136F28), (s32) (0x68)));
    lbl_8049D708 = temp_r3;
    memset((s32) ((s32) temp_r3), (s32) (0), (s32) (0x68));
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg1);
    M2C_FIELD(temp_r3, s32 *, 0x54) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x58) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x5C) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x50) = (s32) ((s32) *(s32 *)((s8 *) &lbl_8035A350 + (M2C_FIELD(temp_r3, s32 *, 8) * 4)));
    M2C_FIELD(temp_r3, s32 *, 0x54) = (s32) (1);
    M2C_FIELD(temp_r3, s32 *, 0x5C) = (s32) (0);
    return (s32 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80137410(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        if (OSCreateThread((s8 *) (&lbl_803A65E0), (s32) ((s32) fn_8013756C), (s32) (arg1), (s32) ((s32) ((s8 *) &lbl_803A68F8 + 0x1000)), (s32) (0x1000), (s32) (arg0), (s32) (1)) == 0) {
            return (s32) (0);
        }
        goto block_5;
    }
    if (OSCreateThread((s8 *) (&lbl_803A65E0), (s32) ((s32) fn_80137544), (s32) (0), (s32) ((s32) ((s8 *) &lbl_803A68F8 + 0x1000)), (s32) (0x1000), (s32) (arg0), (s32) (1)) == 0) {
        return (s32) (0);
    }
block_5:
    OSInitMessageQueue((s32) ((s32) &lbl_803A78F8), (s32) ((s32) &lbl_803A7938), (s32) (6));
    OSInitMessageQueue((s32) ((s32) &lbl_803A7918), (s32) ((s32) &lbl_803A7950), (s32) (6));
    lbl_8049D710 = 1;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80137508(void) {
    if ((s32) lbl_8049D710 != 0) {
        OSCancelThread((s32) ((s32) &lbl_803A65E0));
        lbl_8049D710 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80139818(s32 arg0) {
    if (OSCreateThread((s8 *) (&lbl_803A7FF8), (s32) ((s32) fn_80139920), (s32) (0), (s32) ((s32) ((s8 *) &lbl_803A8310 + 0x1000)), (s32) (0x1000), (s32) (arg0), (s32) (1)) == 0) {
        return (s32) (0);
    }
    OSInitMessageQueue((s32) ((s32) &lbl_803A7F20), (s32) ((s32) &lbl_803A7F80), (s32) (0xA));
    OSInitMessageQueue((s32) ((s32) &lbl_803A7F40), (s32) ((s32) &lbl_803A7FA8), (s32) (0xA));
    OSInitMessageQueue((s32) ((s32) &lbl_803A7F60), (s32) ((s32) &lbl_803A7FD0), (s32) (0xA));
    lbl_8049D740 = 1;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801398E4(void) {
    if ((s32) lbl_8049D740 != 0) {
        OSCancelThread((s32) ((s32) &lbl_803A7FF8));
        lbl_8049D740 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80139AD8(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        if (OSCreateThread((s8 *) (&lbl_803A9310), (s32) ((s32) fn_80139CDC), (s32) (arg1), (s32) ((s32) ((s8 *) &lbl_803A9628 + 0x1000)), (s32) (0x1000), (s32) (arg0), (s32) (1)) == 0) {
            return (s32) (0);
        }
        goto block_5;
    }
    if (OSCreateThread((s8 *) (&lbl_803A9310), (s32) ((s32) fn_80139C10), (s32) (0), (s32) ((s32) ((s8 *) &lbl_803A9628 + 0x1000)), (s32) (0x1000), (s32) (arg0), (s32) (1)) == 0) {
        return (s32) (0);
    }
block_5:
    OSInitMessageQueue((s32) ((s32) &lbl_803AA628), (s32) ((s32) &lbl_803AA668), (s32) (3));
    OSInitMessageQueue((s32) ((s32) &lbl_803AA648), (s32) ((s32) &lbl_803AA674), (s32) (3));
    lbl_8049D748 = 1;
    lbl_8049D74C = 1;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80139BD4(void) {
    if ((s32) lbl_8049D748 != 0) {
        OSCancelThread((s32) ((s32) &lbl_803A9310));
        lbl_8049D748 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80137FD4(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;

    memset((s32) ((s32) &lbl_803A7980), (s32) (0), (s32) (0x1F8));
    M2C_FIELD(&lbl_803A7980, s32 *, 0x1F0) = (s32) (1);
    if (fn_8018DE10() == 3) {
        M2C_FIELD(&lbl_803A7980, s32 *, 0x1F0) = (s32) (0);
    }
    OSInitMessageQueue((s32) ((s32) &lbl_803A7BE0), (s32) ((s32) &lbl_803A7C00), (s32) (3));
    if (fn_80329400() == 0) {
        return (s32) (0);
    }
    temp_r31 = (s32) (OSDisableInterrupts());
    lbl_8049D734 = arg0;
    lbl_8049D724 = 0;
    lbl_8049D72C = 0;
    lbl_8049D730 = 0;
    temp_r3 = (s32) (AIRegisterDMACallback((s32) ((s32) fn_80139184)));
    lbl_8049D728 = temp_r3;
    if ((temp_r3 == 0) && ((s32) lbl_8049D734 != 0)) {
        AIRegisterDMACallback((s32) (0));
        OSRestoreInterrupts((s32) (temp_r31));
        return (s32) (0);
    }
    OSRestoreInterrupts((s32) (temp_r31));
    if ((s32) lbl_8049D734 == 0) {
        memset((s32) ((s32) &lbl_803A7C20), (s32) (0), (s32) (0x300));
        DCFlushRange((s32) ((s32) &lbl_803A7C20), (s32) (0x300));
        AIInitDMA((s32) ((s32) ((s8 *) &lbl_803A7C20 + (lbl_8049D724 * 0x180))), (s32) (0x180));
        AIStartDMA();
    }
    lbl_8049D718 = 1;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80139184(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r30;
    s32 temp_r30_2;

    if ((s32) lbl_8049D734 == 0) {
        temp_r0 = (s32) (lbl_8049D724 ^ 1);
        lbl_8049D724 = temp_r0;
        AIInitDMA((s32) ((s32) ((s8 *) &lbl_803A7C20 + (temp_r0 * 0x180))), (s32) (0x180));
        temp_r30 = (s32) (OSEnableInterrupts());
        fn_801392E8((M2C_UNK *) ((s8 *) &lbl_803A7C20 + (lbl_8049D724 * 0x180)), (M2C_UNK *) (NULL), (u32) (0x60U));
        DCFlushRange((s32) ((s32) ((s8 *) &lbl_803A7C20 + (lbl_8049D724 * 0x180))), (s32) (0x180));
        OSRestoreInterrupts((s32) (temp_r30));
        return;
    }
    if ((s32) lbl_8049D734 == 1) {
        if ((s32) lbl_8049D72C != 0) {
            lbl_8049D730 = lbl_8049D72C;
        }
        ((M2C_UNK (*)()) lbl_8049D728)();
        lbl_8049D72C = AIGetDMAStartAddr() + 0x80000000;
    } else {
        ((M2C_UNK (*)()) lbl_8049D728)();
        lbl_8049D730 = AIGetDMAStartAddr() + 0x80000000;
    }
    temp_r0_2 = (s32) (lbl_8049D724 ^ 1);
    lbl_8049D724 = temp_r0_2;
    AIInitDMA((s32) ((s32) ((s8 *) &lbl_803A7C20 + (temp_r0_2 * 0x180))), (s32) (0x180));
    temp_r30_2 = (s32) (OSEnableInterrupts());
    if ((s32) lbl_8049D730 != 0) {
        DCInvalidateRange((s32) (lbl_8049D730), (s32) (0x180));
    }
    fn_801392E8((M2C_UNK *) ((s8 *) &lbl_803A7C20 + (lbl_8049D724 * 0x180)), (M2C_UNK *) ((s32 *) lbl_8049D730), (u32) (0x60U));
    DCFlushRange((s32) ((s32) ((s8 *) &lbl_803A7C20 + (lbl_8049D724 * 0x180))), (s32) (0x180));
    OSRestoreInterrupts((s32) (temp_r30_2));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80138A58(void) {
    if (((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) && ((s32) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) != 0)) {
        M2C_FIELD(&lbl_803A7980, s8 *, 0xA5) = (s8) (0);
        M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) = (u8) (0U);
        VISetPostRetraceCallback((s32) (lbl_8049D720));
        if ((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xB0) == 0) {
            DVDCancel((s32) ((s32) &lbl_803A7980));
            fn_801398E4();
        }
        fn_80139BD4();
        if ((s32) M2C_FIELD(&lbl_803A7980, u8 *, 0xA7) != 0) {
            fn_80137508();
        }
        do {

        } while (fn_80139100() != 0);
        M2C_FIELD(&lbl_803A7980, f32 *, 0xDC) = (f32) M2C_FIELD(&lbl_803A7980, f32 *, 0xE0);
        M2C_FIELD(&lbl_803A7980, s32 *, 0xE8) = (s32) (0);
        M2C_FIELD(&lbl_803A7980, s32 *, 0xA8) = (s32) (0);
        M2C_FIELD(&lbl_803A7980, s32 *, 0xAC) = (s32) (0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
u32 fn_8013842C(void) {
    u32 size;

    if (M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) {
        if (M2C_FIELD(&lbl_803A7980, s32 *, 0xB0) != 0) {
            size = (u32) ((M2C_FIELD(&lbl_803A7980, u32 *, 0x58) + 0x1F) & ~0x1F);
        } else {
            size = (u32) (((M2C_FIELD(&lbl_803A7980, u32 *, 0x44) + 0x1F) & ~0x1F) * 10);
        }
        size += ((M2C_FIELD(&lbl_803A7980, u32 *, 0x80) * M2C_FIELD(&lbl_803A7980, u32 *, 0x84) + 0x1F) & ~0x1F) * 3;
        size += ((M2C_FIELD(&lbl_803A7980, u32 *, 0x80) * M2C_FIELD(&lbl_803A7980, u32 *, 0x84) / 4 + 0x1F) & ~0x1F) * 3;
        size += ((M2C_FIELD(&lbl_803A7980, u32 *, 0x80) * M2C_FIELD(&lbl_803A7980, u32 *, 0x84) / 4 + 0x1F) & ~0x1F) * 3;
        if (M2C_FIELD(&lbl_803A7980, u8 *, 0xA7) != 0) {
            size += ((M2C_FIELD(&lbl_803A7980, u32 *, 0x48) * 4 + 0x1F) & ~0x1F) * 6;
        }
        return (u32) (size + 0x1000);
    }
    return (u32) (0);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80138DD4(void) {
    if (M2C_FIELD(&lbl_803A7980, s32 *, 0x88) & 1) {
        if (VIGetNextField() == 0) {
            return (s32) (1);
        }
    } else if (M2C_FIELD(&lbl_803A7980, s32 *, 0x88) & 2) {
        if (VIGetNextField() == 1U) {
            return (s32) (1);
        }
    } else {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80138F7C(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s8 *m = (s8 *) &lbl_803A7980;
    s32 *b;

    if (M2C_FIELD(m, s32 *, 0xA0) != 0 && M2C_FIELD(m, u8 *, 0xA4) != 0 && M2C_FIELD(m, s32 **, 0xF8) != NULL) {
        fn_8013788C((s8 *) ((s8 *) arg0));
        b = (s32 *) (M2C_FIELD(m, s32 **, 0xF8));
        ((void (*)(s32, s32, s32, s16, s16, s16, s16, s16, s16)) fn_80137D38)(b[0], b[1], b[2], arg1, arg2, (s16) M2C_FIELD(m, s32 *, 0x80), (s16) M2C_FIELD(m, s32 *, 0x84), arg3, arg4);
        fn_80137774();
        return (s32) ((M2C_FIELD(m, s32 **, 0xF8)[3] + M2C_FIELD(m, s32 *, 0xC0)) % M2C_FIELD(m, u32 *, 0x50));
    }
    return (s32) (-1);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_80139920(void) {
//{
    s32 **buf;
    s32 offset;
    s32 size;
    s32 frame;
    s32 r;
    u32 n;
    u32 m;
//}

    frame = (s32) (0);
    offset = (s32) (M2C_FIELD(&lbl_803A7980, s32 *, 0xB8));
    size = (s32) (M2C_FIELD(&lbl_803A7980, s32 *, 0xBC));
    while (1) {
        buf = (s32 **) (fn_80139A48());
        r = (s32) (DVDReadPrio((s32) ((s32) &lbl_803A7980), (s32) (M2C_FIELD(buf, s32 *, 0)), (s32) (size), (s32) (offset), (s32) (2)));
        if (r != size) {
            if (r == -1) {
                M2C_FIELD(&lbl_803A7980, s32 *, 0xA8) = (s32) (-1);
            }
            if (frame == 0) {
                fn_80138774((s32 **) (NULL));
            }
            OSSuspendThread((s32) ((s32) &lbl_803A7FF8));
        }
        M2C_FIELD(buf, s32 *, 4) = (s32) (frame);
        fn_80139A34((s32 **) (buf));
        offset += size;
        size = (s32) (*M2C_FIELD(buf, s32 **, 0));
        m = (u32) ((frame + M2C_FIELD(&lbl_803A7980, s32 *, 0xC0)) % M2C_FIELD(&lbl_803A7980, u32 *, 0x50));
        if (m == M2C_FIELD(&lbl_803A7980, u32 *, 0x50) - 1) {
            if (M2C_FIELD(&lbl_803A7980, u8 *, 0xA6) & 1) {
                offset = (s32) (M2C_FIELD(&lbl_803A7980, s32 *, 0x64));
            } else {
                OSSuspendThread((s32) ((s32) &lbl_803A7FF8));
            }
        }
        frame++;
    }
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80136B60(s32 arg0, s32 arg1) {
    s32 var_r31;
    u32 v;
    s32 temp_r0;

    var_r31 = (s32) (0);
    if (((s32 (*)(s32)) fn_80136B24)(arg0) <= arg1) {
        return (s32) (0);
    }
    v = (u32) (((SK_B60 *) fn_80136B1C((s32) (arg0)))[arg1].b);
    temp_r0 = (s32) (((v & 0xFF000000) >> 0x18U) | ((v & 0xFF0000) >> 8U) | (((v & 0xFF) << 0x18) | ((v & 0xFF00) << 8)));
    if (temp_r0 != 0) {
        var_r31 = (s32) (arg0 + temp_r0);
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset

} // extern "C"
