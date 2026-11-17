#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_80035AC0_arg0 {
    u8 pad_0[0x8];
    s8 * f_8;
    u8 pad_C[0x8];
    u32 f_14;
};
struct S_fn_80035AE4_arg0 {
    u8 pad_0[0xC];
    s8 * f_C;
    u8 pad_10[0x4];
    u32 f_14;
};

void GXCopyTex(u32 arg0, s32 arg1);
s32 GXGetTexObjData(s8 *arg0);
s32 GXGetTexObjFmt(s8 *arg0);
u16 GXGetTexObjHeight(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
void GXInvalidateTexAll(void);
void GXSetCopyFilter(s32 arg0, s8 *arg1, s32 arg2, s8 *arg3);
void GXSetTexCopyDst(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetTexCopySrc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK * GetRenderModeObj__Q34nw4r3g3d8G3DStateFv(void);
s8 * dtor_80027B08(s8 *arg0, s16 arg1);
void fn_80027B74(s32 arg0);
s32 fn_8002B99C(s8 *arg0);
void fn_80034E28(s32 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, u8 arg5, u8 arg6);
void fn_80034F44(s8 *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, s32 arg5, u8 arg6, u8 arg7);
void fn_80035050(s8 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
s8 * fn_800352C0(s8 *arg0, s16 arg1);
void fn_800358B8(s8 *arg0, u32 arg1, u8 arg2, u32 arg3, s32 arg4, s32 arg5);
s32 fn_80035A30(s8 *arg0, u32 arg1);
s32 fn_80035A58(s8 *arg0, u32 arg1);
s32 fn_80035A80(s8 *arg0, u32 arg1, s32 arg2);
s8 * fn_80035AC0(S_fn_80035AC0_arg0 *arg0, u32 arg1);
s8 * fn_80035AE4(S_fn_80035AE4_arg0 *arg0, u32 arg1);
s32 fn_80035D9C(s8 *arg0);
u32 fn_80035DAC(s8 *arg0, u32 arg1);
s32 fn_802E151C(void);

s8 * fn_800352C0(s8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        dtor_80027B08((s8 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            fn_80027B74((s32) ((s32) arg0));
        }
    }
    return (s8 *) (arg0);
}

s32 fn_80035A80(s8 *arg0, u32 arg1, s32 arg2) {
    u32 temp_r0;
    u32 temp_r5;

    if (arg2 != 0) {
        temp_r5 = (u32) ((arg1 + arg2) - 1);
        temp_r0 = (u32) (M2C_FIELD(arg0, u32 *, 0x14));
        if ((arg1 < temp_r0) && (temp_r5 < temp_r0)) {
            M2C_FIELD(arg0, u32 *, 0x18) = (u32) (arg1);
            M2C_FIELD(arg0, u32 *, 0x1C) = (u32) (temp_r5);
            M2C_FIELD(arg0, u32 *, 0x20) = (u32) (arg1);
            return (s32) (1);
        }
    }
    return (s32) (0);
}

s32 fn_80035D9C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xC) != 0);
}

s32 fn_80035A30(s8 *arg0, u32 arg1) {
    if (arg1 < *(u32 *)(arg0 + 0x14)) {
        (*(u8 **)(arg0 + 0x10))[arg1] = 1;
        return 1;
    }
    return 0;
}

s32 fn_80035A58(s8 *arg0, u32 arg1) {
    if (arg1 < *(u32 *)(arg0 + 0x14)) {
        (*(u8 **)(arg0 + 0x10))[arg1] = 0;
        return 1;
    }
    return 0;
}

#pragma dont_inline on
s8 * fn_80035AC0(S_fn_80035AC0_arg0 *arg0, u32 arg1) {
    if (arg1 < (u32) arg0->f_14) {
        return (s8 *) (*(s32 *)(arg0->f_8 + (arg1 * 4)));
    }
    return (s8 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80035AE4(S_fn_80035AE4_arg0 *arg0, u32 arg1) {
    if ((fn_80035D9C((s8 *) (arg0)) != 0) && (arg1 < (u32) arg0->f_14)) {
        return (s8 *) (*(s32 *)(arg0->f_C + (arg1 * 4)));
    }
    return (s8 *) (NULL);
}
#pragma dont_inline reset

u32 fn_80035DAC(s8 *arg0, u32 arg1) {
    if (arg1 < *(u32 *)(arg0 + 0x14)) {
        return (*(u8 **)(arg0 + 0x10))[arg1] == 1;
    }
    return 0;
}

#pragma dont_inline on
void fn_80034E28(s32 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, u8 arg5, u8 arg6) {
    s32 *temp_r31;
    s32 fmt;
    s32 w;
    s32 h;
    u32 data;
    s32 var_r26;

    w = (s32) (((s32 (*)(s8 *)) GXGetTexObjWidth)((s8 *) arg0));
    h = (s32) (((s32 (*)(s8 *)) GXGetTexObjHeight)((s8 *) arg0));
    fmt = (s32) (GXGetTexObjFmt((s8 *) ((s8 *) arg0)));
    data = (u32) (GXGetTexObjData((s8 *) ((s8 *) arg0)) + 0x80000000);
    if (((u16) w != arg3) || ((u16) h != arg4)) {
        var_r26 = (s32) (1);
    } else {
        var_r26 = (s32) (0);
    }
    temp_r31 = (s32 *) (GetRenderModeObj__Q34nw4r3g3d8G3DStateFv());
    if (arg6 != 1) {
        GXSetCopyFilter((s32) (0), (s8 *) (NULL), (s32) (0), (s8 *) (NULL));
    }
    GXSetTexCopySrc((s32) ((s32) arg1), (s32) ((s32) arg2), (s32) ((s32) arg3), (s32) ((s32) arg4));
    ((void (*)(u16, u16, s32, s32)) GXSetTexCopyDst)(w, h, fmt, var_r26);
    GXCopyTex((u32) (data), (s32) ((s32) arg5));
    if (arg6 != 1) {
        GXSetCopyFilter((s32) ((s32) M2C_FIELD(temp_r31, u8 *, 0x19)), (s8 *) ((s8 *)temp_r31 + 0x1A), (s32) (1), (s8 *) ((s8 *)temp_r31 + 0x32));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80034F44(s8 *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, s32 arg5, u8 arg6, u8 arg7) {
    s32 *temp_r31;
    s32 var_r28;
    s32 w;
    s32 h;

    w = (s32) (((s32 (*)(s8 *)) GXGetTexObjWidth)(arg0 + 8));
    h = (s32) (((s32 (*)(s8 *)) GXGetTexObjHeight)(arg0 + 8));
    if (((u16) w != arg3) || ((u16) h != arg4)) {
        var_r28 = (s32) (1);
    } else {
        var_r28 = (s32) (0);
    }
    temp_r31 = (s32 *) (GetRenderModeObj__Q34nw4r3g3d8G3DStateFv());
    if (arg7 != 1) {
        GXSetCopyFilter((s32) (0), (s8 *) (NULL), (s32) (0), (s8 *) (NULL));
    }
    GXSetTexCopySrc((s32) ((s32) arg1), (s32) ((s32) arg2), (s32) ((s32) arg3), (s32) ((s32) arg4));
    ((void (*)(u16, u16, s32, s32)) GXSetTexCopyDst)(w, h, arg5, var_r28);
    GXCopyTex((u32) (M2C_FIELD(arg0, u32 *, 0x28)), (s32) ((s32) arg6));
    if (arg7 != 1) {
        GXSetCopyFilter((s32) ((s32) M2C_FIELD(temp_r31, u8 *, 0x19)), (s8 *) ((s8 *)temp_r31 + 0x1A), (s32) (1), (s8 *) ((s8 *)temp_r31 + 0x32));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80035050(s8 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4) {
    s32 *temp_r31;
    s32 temp_r29;
    s32 temp_r30;

    temp_r29 = (s32) (((s32 (*)(s8 *)) GXGetTexObjWidth)(arg0 + 8));
    temp_r30 = (s32) (((s32 (*)(s8 *)) GXGetTexObjHeight)(arg0 + 8));
    temp_r31 = (s32 *) (GetRenderModeObj__Q34nw4r3g3d8G3DStateFv());
    if (arg4 != 1) {
        GXSetCopyFilter((s32) (0), (s8 *) (NULL), (s32) (0), (s8 *) (NULL));
    }
    ((void (*)(u16, u16, u16, u16)) GXSetTexCopySrc)(0, 0, temp_r29, temp_r30);
    ((void (*)(u16, u16, s32, u8)) GXSetTexCopyDst)(temp_r29, temp_r30, arg1, (s32) arg2);
    GXCopyTex((u32) (M2C_FIELD(arg0, u32 *, 0x28)), (s32) ((s32) arg3));
    if (arg4 != 1) {
        GXSetCopyFilter((s32) ((s32) M2C_FIELD(temp_r31, u8 *, 0x19)), (s8 *) ((s8 *)temp_r31 + 0x1A), (s32) (1), (s8 *) ((s8 *)temp_r31 + 0x32));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800358B8(s8 *arg0, u32 arg1, u8 arg2, u32 arg3, s32 arg4, s32 arg5) {
    s32 *rm;
    s8 *tex2;
    s8 *tex;
    s8 *obj;
    s32 fmt;

    tex = (s8 *) (fn_80035AC0((S_fn_80035AC0_arg0 *) (arg0), (u32) (arg1)));
    if (tex != NULL) {
        rm = (s32 *) (GetRenderModeObj__Q34nw4r3g3d8G3DStateFv());
        if ((fn_80035DAC((s8 *) (arg0), (u32) (arg1)) != 1) && (rm != NULL)) {
            obj = (s8 *) (fn_8002B99C((s8 *) (tex)));
            fmt = (s32) (GXGetTexObjFmt((s8 *) (obj)));
            if (fmt == 1) {
                fmt = (s32) (0x27);
            }
            if (arg3 != 1) {
                u16 h = GXGetTexObjHeight((s8 *) (obj));
                u16 w = GXGetTexObjWidth((s8 *) (obj));
                fn_80034F44((s8 *) (tex), (u16) (0U), (u16) (0U), (u16) (w), (u16) (h), (s32) (fmt), (u8) (arg2), (u8) (0U));
            } else {
                fn_80034F44((s8 *) (tex), (u16) (0U), (u16) (0U), (u16) (M2C_FIELD(rm, u16 *, 4)), (u16) (M2C_FIELD(rm, u16 *, 6)), (s32) (fmt), (u8) (arg2), (u8) (0U));
            }
            if (arg4 != 0) {
                tex2 = (s8 *) (fn_80035AE4((S_fn_80035AE4_arg0 *) (arg0), (u32) (arg1)));
                if (tex2 != NULL) {
                    switch (GXGetTexObjFmt((s8 *) (fn_8002B99C((s8 *) (tex2))))) {
                    case 1:
                        fmt = (s32) (0x11);
                        break;
                    case 3:
                        fmt = (s32) (0x13);
                        break;
                    default:
                        fmt = (s32) (0x16);
                        break;
                    }
                    fn_80035050((s8 *) (tex2), (s32) (fmt), (u8) (0U), (u8) (arg2), (u8) (0U));
                }
            }
            if (arg5 != 0) {
                fn_802E151C();
                GXInvalidateTexAll();
            }
        }
    }
}
#pragma dont_inline reset

} // extern "C"
