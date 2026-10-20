#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s32 lbl_8049E598;

s32 NWC24iOpenResourceManager();
s32 NWC24iCloseResourceManager();
s32 NWC24iIoctlResourceManager();
s32 NWC24iIoctlResourceManagerAsync();
s32 NWC24iIsAsyncRequestPending();
s32 CallbackAsyncIpc();

s32 NWC24iOpenResourceManager(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_r3;
    s32 var_r3;

    if (arg2 == NULL) {
        return -3;
    }
    temp_r3 = IOS_Open((u8 *) arg1, arg3);
    *arg2 = temp_r3;
    if (temp_r3 < 0) {
        if (temp_r3 == -6) {
            return -0x1D;
        }
        var_r3 = -0x2A;
        if (temp_r3 == -8) {
            return -0x1A;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_r3;
    }
    var_r3 = 0;
    return var_r3;
}

// NWC24iCloseResourceManager: definicion C reemplazada por asm (ver abajo)


// NWC24iIoctlResourceManager: definicion C reemplazada por asm (ver abajo)


// NWC24iIoctlResourceManagerAsync: definicion C reemplazada por asm (ver abajo)


s32 NWC24iIsAsyncRequestPending(void) {
    return lbl_8049E598;
}

// CallbackAsyncIpc: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
s32 CallbackAsyncIpc(s32 arg0, s32 *arg1);
s32 NWC24iCloseResourceManager(s32 arg0, s32 arg1);
s32 NWC24iIoctlResourceManager(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 NWC24iIoctlResourceManagerAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

// asm_to_cpp: NWC24iCloseResourceManager
asm s32 NWC24iCloseResourceManager(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x14(r1)
    bl IOS_Close
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_80334DE4
    li r3, -0x2a
lbl_80334DE4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: NWC24iIoctlResourceManager
asm s32 NWC24iIoctlResourceManager(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    mr r5, r6
    mr r6, r7
    mr r7, r8
    mr r8, r9
    bl IOS_Ioctl
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_80334E2C
    li r3, -0x2a
lbl_80334E2C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: NWC24iIoctlResourceManagerAsync
asm s32 NWC24iIoctlResourceManagerAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    lis r11, CallbackAsyncIpc@ha
    mr r5, r6
    mr r6, r7
    mr r7, r8
    mr r8, r9
    addi r9, r11, CallbackAsyncIpc@l
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    bge lbl_80334E7C
    li r3, -0x2a
    b lbl_80334E88
lbl_80334E7C:
    li r0, 0x1
    li r3, 0x0
    stw r0, lbl_8049E598
lbl_80334E88:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: CallbackAsyncIpc
asm s32 CallbackAsyncIpc(s32 arg0, s32 *arg1) {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_80334EAC
    stw r3, 0x0(r4)
lbl_80334EAC:
    li r0, 0x0
    li r3, 0x0
    stw r0, lbl_8049E598
    blr
}
