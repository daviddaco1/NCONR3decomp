#include "types.h"
#include "m2c_macros.h"


extern "C" {


extern const char lbl_803480B0[];
extern const char lbl_803480D0[];
extern const char lbl_803480E0[];
extern s32 lbl_8049C288;
__declspec(section ".sdata2") extern const char lbl_8049C290[];
extern float lbl_8049E898;

s32 Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile(s32 *arg0, s32 *arg1);
s32 CheckRevision__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjCI(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjLOD(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);
s32 GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
s32 GetResAnmClrNumEntries__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
s32 GetResAnmTexPatNumEntries__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
s32 GetResAnmTexSrtNumEntries__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
s32 GetResTex__Q34nw4r3g3d7ResFileCFPCc(s32 arg0, s32 arg1);
s32 GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
s32 GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
void Init__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void Release__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void Terminate__Q34nw4r3g3d7ResFileFv(s32 *arg0);
s32 _restgpr_29();
s32 _savegpr_29();
s32 fn_80016D48(s32 *arg0);
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_80035E80(s32 arg0);
void fn_80035EE0(s32 arg0);
s32 fn_80035F10(s32 arg0);
s32 fn_80035F40(s32 arg0);
s32 fn_80035F70(s32 arg0);
s32 fn_80035FA0(s32 arg0);
s32 fn_80035FD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003611C(s32 *arg0);
void fn_80036148(s32 *arg0);
s32 fn_8003617C(s32 *arg0);
s32 * fn_80036184(s32 *arg0, s32 arg1);
void fn_800361B4(s32 *arg0, s32 *arg1);
s32 fn_800361C0(s32 arg0);
M2C_UNK fn_800361F0(s32 *arg0);
s32 * fn_80036254(void);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);


void fn_80035EE0(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    fn_80036148((s32 *) (&sp8));
}

s32 fn_80035F10(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv((s32 *) (&sp8)));
}

s32 fn_80035F40(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmClrNumEntries__Q34nw4r3g3d7ResFileCFv((s32 *) (&sp8)));
}

s32 fn_80035F70(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmTexPatNumEntries__Q34nw4r3g3d7ResFileCFv((s32 *) (&sp8)));
}

s32 fn_80035FA0(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmTexSrtNumEntries__Q34nw4r3g3d7ResFileCFv((s32 *) (&sp8)));
}

#pragma dont_inline on
void fn_8003611C(s32 *arg0) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile((s32 *) (arg0), (s32 *) (&sp8));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80036148(s32 *arg0) {
    Release__Q34nw4r3g3d7ResFileFv((s32 *) (arg0));
    Terminate__Q34nw4r3g3d7ResFileFv((s32 *) (arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003617C(s32 *arg0) {
    return (s32) (*arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80036184(s32 *arg0, s32 arg1) {
    fn_800361B4((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800361B4(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80036254(void) {
    return (s32 *) (&lbl_8049C288);
}
#pragma dont_inline reset

void fn_80035E80(s32 arg0) {
    s32 file;
    fn_80016E44((s32)&file, arg0);
    if (!CheckRevision__Q34nw4r3g3d7ResFileCFv(&file)) {
        fn_801A9384((s32)lbl_803480E0, 33, (s32)(lbl_803480E0 + 0x19));
    }
    Init__Q34nw4r3g3d7ResFileFv(&file);
    fn_8003611C(&file);
}

s32 fn_800361C0(s32 arg0) {
    return (s32) ((M2C_FIELD(fn_800361F0((s32 *) ((s32 *) arg0)), s32 *, 0x18) & 1) != 0);
}

M2C_UNK fn_800361F0(s32 *arg0) {
    if (fn_80016D48(arg0) == 0) {
        fn_801A9384((s32)lbl_803480D0, 38, (s32)lbl_803480B0, fn_80036254(), lbl_8049C290);
    }
    return (M2C_UNK)fn_8003617C(arg0);
}

#pragma dont_inline on
s32 fn_80035FD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK sp34;
    s32 sp30;
    s8 *sp2C;
    f32 sp28;
    f32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    u16 sp14;
    u16 sp12;
    s8 sp10;

    fn_80016E44((s32) ((s32) &sp34), (s32) (arg1));
    sp18 = (s32) (GetResTex__Q34nw4r3g3d7ResFileCFPCc((s32) ((s32) &sp34), (s32) (arg2)));
    fn_80036184((s32 *) (&sp30), (s32) ((s32) &sp18));
    if (fn_80016D48((s32 *) (&sp30)) != 0) {
        if (fn_800361C0((s32) ((s32) &sp30)) != 0) {
            GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc((s8 **) ((s8 **) &sp30), (s8 **) (&sp2C), (u16 *) (&sp14), (u16 *) (&sp12), (s32 *) (&sp20), (f32 *) (&sp28), (f32 *) (&sp24), (s8 *) (&sp10));
            ((void (*)(s8 *, s32, s32, s32, s32, s32, s32, s32, s32)) GXInitTexObjCI)((s8 *) arg0, (s32) sp2C, (s32) sp14, (s32) sp12, sp20, arg3, arg3, (s32) (u8) sp10, 0);
        } else {
            GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc((s8 **) ((s8 **) &sp30), (s8 **) (&sp2C), (u16 *) (&sp14), (u16 *) (&sp12), (s32 *) (&sp1C), (f32 *) (&sp28), (f32 *) (&sp24), (s8 *) (&sp10));
            GXInitTexObj((s32) (arg0), (s32) ((s32) sp2C), (s32) ((s32) sp14), (s32) ((s32) sp12), (s32) (sp1C), (s32) (arg3), (s32) (arg3), (s32) ((s32) (u8) sp10));
        }
        GXInitTexObjLOD((s32) (arg0), (s32) (0), (s32) (0), sp28, sp24, lbl_8049E898, (s32) (0), (s32) (0), (s32) (0));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

} // extern "C"
