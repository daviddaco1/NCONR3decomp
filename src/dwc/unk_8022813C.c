#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

void * memset(void *dest, int ch, u32 count);

extern const char lbl_80363008[];
extern const char lbl_80363018[];
extern const char lbl_80363118[];
extern const char lbl_80363128[];
extern const char lbl_80363154[];
extern const char lbl_803631C8[];
extern const char lbl_803631E8[];
extern const char lbl_80363204[];
extern s32 lbl_8049C548;
extern s32 lbl_8049DAE8;
extern u8 *lbl_8049DAEC;
extern s32 lbl_8049DAF0;
extern s32 lbl_8049DAF4;
extern s32 lbl_8049DAF8;
extern s32 lbl_8049DAFC;
extern s32 lbl_8049DB00;
extern u8 *lbl_8049DB08;
extern s64 OSGetTime(void);
extern void fn_8024BC0C();
extern void CloseStatsConnection();
extern s32 lbl_8049DB0C;
extern s32 *lbl_8049DB10;
extern s32 lbl_8049DB14;
extern s32 lbl_8049DB18;
extern s32 lbl_8049DB1C;
extern s32 lbl_8049DB20;
extern s32 lbl_8049DB28;

u32 fn_8022813C();
s32 fn_802282CC();
s32 fn_8022849C();
s32 fn_802284B4();
void fn_80228560();
s32 fn_8022857C();
void fn_80228590();
s32 fn_802285A8();
void fn_802286A0();
s32 fn_802286F4();
s32 fn_802286FC();
u8 * fn_80228708();
u8 * fn_8022876C();
s8 * fn_802287E4();
u8 * fn_8022884C();
s8 * fn_80228940();
void fn_802289A8();
void fn_80270384(void);
void fn_802703D4(void);
s32 fn_80228CF8();
s32 fn_80228D3C();
s32 fn_80228DF0();
s32 fn_80228E28();
s32 fn_80228FB4();
void fn_80229234();
s32 fn_802292B0();
void fn_802293D8();
void fn_80229464(const char* key, const char* val, char* dst, char sep);
void fn_802294BC(const char* key, const char* val, char* dst, char sep);
s32 fn_8022954C();
s32 fn_802296A4();
u32 fn_802297EC();
u8 fn_80229810();
u8 fn_80229974();
s32 fn_80229A30();
s32 fn_80229AC8();
void fn_80229AF8();
s32 fn_80229BD0();
s32 fn_80229DE0();
s32 fn_80229E08();
s32 fn_80229F58();
s32 fn_8022A0A8();
s32 fn_8022A1F8();
s32 fn_8022A348();
void fn_8022A52C();
s32 fn_8022A668();
s32 fn_8022AB1C();
s32 fn_8022AB40();
void fn_8022ACA0(void *arg0, s32 *arg1);
s32 fn_8022AD30(void *arg0, s32 *arg1);
s32 fn_8022AF1C();
u8 * fn_8022AF38(s32 index);
s32 fn_8022AFA4();
void fn_8022B06C();
s32 fn_8022B0AC();
void fn_8022B1C4();
s32 fn_8022B53C();
u8 * fn_8022B6E4();
s32 fn_8022B8F4();
s32 fn_8022B9C0();
s32 fn_8022BB20();
void fn_8022BFD4();
void fn_8022C284();
void fn_8022CB28();
void fn_8022CB34();
s32 fn_8022CDB8();
s32 fn_8022CF0C();
s32 fn_8022CF58();
s8 * fn_8022D0DC();
void fn_8022D0F8();
void fn_8022D184();
u8 * fn_8022D1B8();
void fn_8022D2D4();
s32 fn_8022D53C();
s32 fn_8022D708();
void fn_8022D968();
s32 fn_8022DBD0();
s32 fn_8022DBF8();
void fn_8022DEB8();

u32 fn_8022813C(s32 *arg0, s32 arg1, u8 *arg2, u32 arg3);

s32 fn_802282CC(u8 *arg0, s32 arg1, u8 *arg2, u32 arg3);

s32 fn_8022849C(u8 **arg0) {
    if (arg0 != NULL) {
        *arg0 = lbl_8049DAEC;
    }
    return lbl_8049DAE8;
}

s32 fn_802284B4(u8 **errorCode, s32 *errorType) {
    if (errorCode != NULL) {
        *errorCode = lbl_8049DAEC;
    }
    if (errorType != NULL) {
        switch (lbl_8049DAE8) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 14:
        case 16:
        case 18:
        case 21:
            *errorType = 6;
            break;
        case 6:
            *errorType = 3;
            break;
        case 7:
            *errorType = 4;
            break;
        case 13:
            *errorType = 5;
            break;
        case 22:
            *errorType = 8;
            break;
        case 10:
        case 11:
        case 12:
        case 23:
            *errorType = 1;
            break;
        case 15:
        case 17:
        case 19:
        case 20:
        case 24:
            *errorType = 2;
            break;
        case 1:
        case 9:
            *errorType = 7;
            break;
        default:
            *errorType = 0;
            break;
        }
    }
    return lbl_8049DAE8;
}

void fn_80228560(void) {
    if ((s32) lbl_8049DAE8 != 9) {
        lbl_8049DAE8 = 0;
        lbl_8049DAEC = NULL;
    }
}

s32 fn_8022857C(void) {
    return lbl_8049DAE8 != 0;
}

#pragma dont_inline on
void fn_80228590(s32 arg0, u8 *arg1) {
    if ((s32) lbl_8049DAE8 != 9) {
        lbl_8049DAE8 = arg0;
        lbl_8049DAEC = arg1;
    }
}
#pragma dont_inline reset

s32 fn_802285A8(M2C_UNK arg_sp0);

void fn_802286A0(void);

s32 fn_802286F4(void) {
    return lbl_8049DAF0;
}

s32 fn_802286FC(s32 arg0_x, s32 arg1_x) {
    lbl_8049DAFC = arg0_x;
    lbl_8049DAF8 = arg1_x;
    return arg0_x;
}

u8 *fn_80228708(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *var_r5;

    temp_r3 = ((u8 *(*)(s32, s32, s32)) lbl_8049DAFC)(arg0, arg1 + 0x20, 0x20);
    if (temp_r3 == NULL) {
        var_r5 = NULL;
    } else {
        var_r5 = temp_r3 + 0x20;
        M2C_FIELD(temp_r3, s32 *, 0) = 0x4457434D;
        M2C_FIELD(temp_r3, s32 *, 4) = arg1;
    }
    return var_r5;
}

u8 *fn_8022876C(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;

    temp_r3 = ((u8 *(*)(s32, s32, s32)) lbl_8049DAFC)(arg0, arg1 + 0x20, arg2);
    if (temp_r3 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r3, s32 *, 0) = 0x4457434D;
    M2C_FIELD(temp_r3, s32 *, 4) = arg1;
    return temp_r3 + 0x20;
}

#pragma dont_inline on
void fn_802287C8(s32 arg0, u8 *arg1, s32 arg2) {
    if (arg1 != NULL) {
        ((void (*)(s32, u8 *, s32)) lbl_8049DAF8)(arg0, arg1 - 0x20, arg2);
    }
}
#pragma dont_inline reset

s8 *fn_802287E4(s32 arg0) {
    s8 *temp_r3;
    s8 *var_r5;

    temp_r3 = ((s8 *(*)(M2C_UNK, s32, M2C_UNK)) lbl_8049DAFC)(9, arg0 + 0x20, 0x20);
    if (temp_r3 == NULL) {
        var_r5 = NULL;
    } else {
        var_r5 = temp_r3 + 0x20;
        M2C_FIELD(temp_r3, s32 *, 0) = 0x4457434D;
        M2C_FIELD(temp_r3, s32 *, 4) = arg0;
    }
    return var_r5;
}

typedef struct DWCi_AllocateHeader {
    u32 magic;
    u32 size;
    u8 pad[24];
} DWCi_AllocateHeader;

u8 *fn_8022884C(u8 *ptr, u32 new_size) {
    u8 *new_ptr;
    DWCi_AllocateHeader *header;
    u32 old_size;
    DWCi_AllocateHeader *old_header;

    header = (DWCi_AllocateHeader *) ((u8 *(*)(s32, u32, s32)) lbl_8049DAFC)(9, new_size + 0x20, 0x20);
    if (header == NULL) {
        new_ptr = NULL;
    } else {
        new_ptr = (u8 *) header + 0x20;
        header->magic = 0x4457434D;
        header->size = new_size;
    }

    if (new_ptr == NULL) {
        new_ptr = NULL;
    } else if (ptr != NULL) {
        old_header = (DWCi_AllocateHeader *) (ptr - 0x20);
        old_size = old_header->size;
        fn_8024BC0C(new_ptr, ptr, (old_size > new_size) ? new_size : old_size);
        if (ptr != NULL) {
            ((void (*)(s32, void *, u32)) lbl_8049DAF8)(9, old_header, old_size);
        }
    }

    return new_ptr;
}

void fn_8022891C(u8 *arg0) {
    if (arg0 != NULL) {
        ((void (*)(s32, u8 *, s32)) lbl_8049DAF8)(9, arg0 - 0x20, 0);
    }
}

s8 *fn_80228940(s32 arg0, s32 arg1) {
    s8 *temp_r3;
    s8 *var_r5;

    temp_r3 = ((s8 *(*)(M2C_UNK, s32, s32)) lbl_8049DAFC)(9, arg1 + 0x20, arg0);
    if (temp_r3 == NULL) {
        var_r5 = NULL;
    } else {
        var_r5 = temp_r3 + 0x20;
        M2C_FIELD(temp_r3, s32 *, 0) = 0x4457434D;
        M2C_FIELD(temp_r3, s32 *, 4) = arg1;
    }
    return var_r5;
}

void fn_802289A8(s32 arg0) {
    lbl_8049DB00 = arg0;
}

s32 fn_80228CF8(s32 arg0) {
    fn_802289B0(4, lbl_80363008);
    fn_80270384();
    lbl_8049DB0C++;
    return 1;
}

typedef struct DWCUnkNode {
    u8 pad[0x10];
    u8 *field_0x10;
    s32 field_0x14;
    struct DWCUnkNode *next;
} DWCUnkNode;

s32 fn_80228D3C(void) {
    DWCUnkNode *curr;
    DWCUnkNode *node;

    fn_802289B0(4, lbl_80363018);
    if (lbl_8049DB0C <= 0) {
        return 1;
    }
    fn_802703D4();
    if (--lbl_8049DB0C == 0) {
        node = (DWCUnkNode *)lbl_8049DB08;
        while (node != NULL) {
            curr = node;
            node = node->next;
            if (curr->field_0x10 != NULL) {
                fn_802287C8(6, curr->field_0x10, 0);
            }
            fn_802287C8(6, (u8 *)curr, 0);
        }
        lbl_8049DB08 = NULL;
    }
    return 1;
}

s32 fn_80228DF0(void);

s32 fn_80228E28(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4, M2C_UNK arg_sp0);

typedef struct {
    void *userdata;
    void *unused;
    void (*callback)(void*, void*, void*, void*, void*, void*);
} CallbackObj_80228F84;

void fn_80228F84(void *a0, void *a1, void *a2, void *a3, void *a4, void *a5, CallbackObj_80228F84 *obj) {
    if (obj->callback != 0) {
        obj->callback(a1, a2, a3, a4, a5, obj->userdata);
    }
}

s32 fn_80228FB4(M2C_UNK arg_sp0);

void fn_802293D8(DWCUnkNode *node);

void fn_80229234(s32 arg0) {
    DWCUnkNode *node;

    fn_80270654();
    node = (DWCUnkNode *)lbl_8049DB08;
    while (node != NULL && node->field_0x14 != arg0) {
        node = node->next;
    }
    if (node != NULL) {
        if (node->field_0x10 != NULL) {
            fn_802287C8(6, node->field_0x10, 0);
        }
        fn_802293D8(node);
    }
}

s32 fn_802292B0(s32 arg0_x);

void fn_802293D8(DWCUnkNode *node);

void fn_80229464(const char* key, const char* val, char* dst, char sep) {
    snprintf(dst, 0x1000, lbl_80363118, sep, key, sep, val);
    strlen(dst);
}

void fn_802294BC(const char* key, const char* val, char* dst, char sep) {
    char* end = (char*)strchr(dst, 0);
    snprintf(end, 0x1000, lbl_80363118, sep, key, sep, val);
    strlen(end);
    strlen(dst);
}

s32 fn_802296A4(s32 arg0);

u32 fn_802297EC(u16 *arg0) {
    u32 count = 0;
    while (*arg0 != 0) {
        arg0++;
        count++;
    }
    return count;
}

u8 fn_80229810(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3);

u8 fn_80229974(s32 arg0, u8 *arg1, s32 *arg2);

s32 fn_8022B0AC(s32 arg0, s32 arg1, u8 *arg2);

s32 fn_80229A30(s32 *arg0, s32 arg1) {
    u8 buf[256];
    s32 len;

    if (lbl_8049DB10 == NULL || !fn_8022DBD0()) {
        return 0;
    }
    len = fn_8022813C(arg0, arg1, buf, 0xFF);
    if (len == -1) {
        return 0;
    }
    buf[len] = 0;
    return fn_8022B0AC(-1, 0, buf) == 0;
}

s32 fn_80229AC8(void) {
    if (((s32 *) lbl_8049DB10 != NULL) && ((u8) (M2C_FIELD(lbl_8049DB10, u8 *, 0x22) + 0xFF) <= 1U)) {
        return 0;
    }
    return 1;
}

void fn_80229AF8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (lbl_8049DB10 != NULL && fn_8022DBD0() != 0 && fn_8022D0DC() != NULL) {
        void *buddy = fn_8024EA20(fn_8022D0DC(), arg0);
        if (buddy != 0 && (s32)buddy != -1) {
            if (gpIsBuddy(*(void **)((u8 *)lbl_8049DB10 + 4), buddy) != 0) {
                gpDeleteBuddy(*(void **)((u8 *)lbl_8049DB10 + 4), buddy);
                fn_802289B0(4, lbl_80363128);
                goto done;
            }
        }
    }
    fn_802289B0(4, lbl_80363154);
done:
    memset(arg0, 0, 12);
}

s32 fn_80229BD0(s32 arg0, s32 arg1);

void fn_80229D74(void) {
    if (lbl_8049DB18 == 1) {
        lbl_8049DB1C = 1;
    } else if (lbl_8049DB20 == 0) {
        lbl_8049DB20 = 1;
        CloseStatsConnection();
        lbl_8049DB20 = 0;
    }

    lbl_8049DB14 = 0;
    if (lbl_8049DB10 != 0) {
        *(s32*)((u8*)lbl_8049DB10 + 0x24) = 0;
    }
}

s32 fn_80229DE0(s32 arg0, s32 arg1) {
    if ((s32 *) lbl_8049DB10 == NULL) {
        return 0;
    }
    M2C_FIELD(lbl_8049DB10, s32 *, 0x58) = arg0;
    M2C_FIELD(lbl_8049DB10, s32 *, 0x5C) = arg1;
    return 1;
}

s32 fn_80229E08(s32 arg0, s32 arg1);

s32 fn_80229F58(s32 arg0, s32 arg1);

s32 fn_8022A0A8(s32 arg0, s32 arg1);

s32 fn_8022A1F8(s32 arg0, s32 arg1);

s32 fn_8022A348(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void fn_8022A52C(s32 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4);

s32 fn_8022A668(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);

s32 fn_8022AB1C(void) {
    s32 ret = 0;
    if (lbl_8049DB10 != 0) {
        if (*lbl_8049DB10 == 1) {
            ret = 1;
        }
    }
    return ret;
}

s32 fn_8022AB40(s32 arg0_x, s32 arg1_x, s32 arg2_x, s32 arg3_x, s32 arg4_x, s32 arg5_x, s32 arg6_x, s32 arg7_x) {
    u8 temp_r3;

    M2C_FIELD(lbl_8049DB10, s32 *, 0x30) = arg2_x;
    M2C_FIELD(lbl_8049DB10, s32 *, 0x34) = arg3_x;
    M2C_FIELD(lbl_8049DB10, s32 *, 0x38) = arg4_x;
    M2C_FIELD(lbl_8049DB10, s32 *, 0x3C) = arg5_x;
    M2C_FIELD(lbl_8049DB10, s32 *, 0x40) = arg6_x;
    M2C_FIELD(lbl_8049DB10, s32 *, 0x44) = arg7_x;
    M2C_FIELD(lbl_8049DB10, s8 *, 0x21) = 0;
    M2C_FIELD(lbl_8049DB10, s8 *, 0x22) = 0;
    M2C_FIELD(lbl_8049DB10, u8 *, 0x23) = 0U;
    M2C_FIELD(lbl_8049DB10, s8 *, 0x20) = 0;
    M2C_FIELD(lbl_8049DB10, s32 *, 0) = 1;
    if ((s32) M2C_FIELD(lbl_8049DB10, s32 *, 0x1C) == 0) {
        M2C_FIELD(lbl_8049DB10, u8 *, 0x23) = (u8) (M2C_FIELD(lbl_8049DB10, u8 *, 0x23) + 1);
    }
    temp_r3 = M2C_FIELD(lbl_8049DB10, u8 *, 0x23);
    M2C_FIELD(lbl_8049DB10, u8 *, 0x23) = (u8) (temp_r3 + 1);
    return (s32) temp_r3;
}

void fn_8022ABD0(s32 arg0, u8 *arg1) {
    if (lbl_8049DB10 == NULL || arg0 == 0) {
        return;
    }
    fn_80228590(arg0, arg1);
    if (fn_8022AB1C()) {
        u8 *field_60 = M2C_FIELD(lbl_8049DB10, u8 **, 0x60);
        if (field_60 != NULL) {
            fn_802287C8(4, field_60, 0);
            M2C_FIELD(lbl_8049DB10, u8 **, 0x60) = NULL;
        }
        ((void (*)(s32, u8, void *)) M2C_FIELD(lbl_8049DB10, void **, 0x30))(
            arg0, M2C_FIELD(lbl_8049DB10, u8 *, 0x21), M2C_FIELD(lbl_8049DB10, void **, 0x34));
    }
    if (lbl_8049DB10 != NULL) {
        M2C_FIELD(lbl_8049DB10, s32 *, 0) = 0;
        M2C_FIELD(lbl_8049DB10, u8 *, 0x22) = 0;
        M2C_FIELD(lbl_8049DB10, u8 *, 0x23) = 0;
    }
}

extern void gpGetInfo();

void fn_8022ACA0(void *arg0, s32 *arg1) {
    fn_802289B0(0x20000, lbl_803631C8, *arg1);
    if (*(s32 *)((u8 *)lbl_8049DB10 + 0x1C) != 0) {
        fn_802289B0(0x20000, lbl_803631E8);
        gpGetInfo(arg0, *arg1, 0, 0, fn_8022BFD4, 0);
    }
}

s32 fn_8022AD30(void *arg0, s32 *arg1) {
    fn_802289B0(0x20000, lbl_80363204, *arg1);
    fn_802289B0(0x20000, lbl_803631E8);
    gpGetInfo(arg0, *arg1, 0, 0, fn_8022C284, 0);
    return 1;
}

s32 fn_8022AF1C(void) {
    if ((s32 *) lbl_8049DB10 != NULL) {
        return M2C_FIELD(lbl_8049DB10, s32 *, 0x18);
    }
    return 0;
}

u8 *fn_8022AF38(s32 index) {
    u8 *base;
    void *res;

    base = *(u8**)((u8*)lbl_8049DB10 + 0x1C);
    if (base == 0) {
        return 0;
    }

    res = fn_8024EA20(fn_8022D0DC(), base + index * 12);
    if (res == 0 || (s32)res == -1) {
        res = 0;
    }

    return res;
}

s32 fn_8022AFA4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 offset;
    u8 *base;
    s32 i;
    void *res;

    if (lbl_8049DB10 == NULL || arg0 == NULL) {
        return -1;
    }
    for (i = 0, offset = 0; i < *(s32 *)((u8 *)lbl_8049DB10 + 0x18); offset += 12, i++) {
        base = *(u8 **)((u8 *)lbl_8049DB10 + 0x1C);
        if (base == NULL) {
            res = NULL;
        } else {
            res = fn_8024EA20(fn_8022D0DC(), base + offset);
            if (res == NULL || (s32)res == -1) {
                res = NULL;
            }
        }
        if ((s32)arg0 == (s32)res) {
            return i;
        }
    }
    return -1;
}

void fn_8022B06C(void) {
    if (lbl_8049DB10 != 0) {
        *(s32*)(lbl_8049DB10 + 2) = 0;
        *(s64*)((u8*)lbl_8049DB10 + 0x10) = OSGetTime();
    }
}

s32 fn_8022B0AC(s32 arg0, s32 arg1, u8 *arg2);

void fn_8022B1C4(void) {
    lbl_8049DB10 = NULL;
}

s32 fn_8022B53C(s32 arg0, s32 arg1, u8 *arg2, M2C_UNK arg_sp0);

u8 *fn_8022B6E4(u8 *arg0, u8 *arg1, s32 arg2, M2C_UNK arg_sp0);

s32 fn_8022B8F4(u8 *arg0, u8 **arg1, s32 arg2, s32 arg3) {
    s32 index;
    void *buddy;

    index = 0;
    if (lbl_8049DB10 == NULL || fn_8022DBD0() == 0) {
        return 0;
    }

    buddy = fn_8024EA20(fn_8022D0DC(), arg0);
    if ((s32)buddy > 0) {
        if (gpGetBuddyIndex(*(void **)((u8 *)lbl_8049DB10 + 4), buddy, &index) != 0) {
            return 0;
        }
    }

    if ((s32)buddy <= 0 || index == -1) {
        return 0;
    }

    return (u8)(fn_802589A8(*(void **)((u8 *)lbl_8049DB10 + 4), index, arg1) == 0);
}

s32 fn_8022B9C0(s32 arg0);

s32 fn_8022BB20(s32 arg0_x);

void fn_8022BFD4(s8 *arg0, s8 *arg1, M2C_UNK arg_sp0);

void fn_8022C284(s32 arg0, s8 *arg1, M2C_UNK arg_sp0);

void fn_8022CB28(void) {
    lbl_8049DB20 = 1;
}

void fn_8022CB34(void) {
    lbl_8049DB20 = 0;
}

s32 fn_8022CDB8(M2C_UNK arg_sp0);

s32 fn_8022CF0C(s32 arg0, s32 arg1) {
    if (fn_8022D53C() != 0) {
        M2C_FIELD(lbl_8049DB28, s32 *, 4) = 1;
        M2C_FIELD(lbl_8049DB28, s32 *, 0x30) = 0;
        return 1;
    }
    return 0;
}

s32 fn_8022CF58(u8 *arg0);

s8 *fn_8022D0DC(void) {
    if ((s32) lbl_8049DB28 != 0) {
        return M2C_FIELD(lbl_8049DB28, s8 **, 0x1C);
    }
    return NULL;
}

void fn_8022D0F8(s32 arg0, s32 arg1);

void fn_8022D184(void) {
    if (fn_8024FA5C() == 0) {
        fn_8024F18C();
    }
    lbl_8049DB28 = 0;
}

u8 *fn_8022D1B8(u8 *arg0);

void fn_8022D2D4(s8 *arg0, s8 *arg1, M2C_UNK arg_sp0);

s32 fn_8022D53C(void);

s32 fn_8022D708(void);

void fn_8022D968(s8 *arg0, s8 *arg1);

s32 fn_8022DBD0(void) {
    if (((s32) lbl_8049DB28 != 0) && ((s32) M2C_FIELD(lbl_8049DB28, s32 *, 4) == 5)) {
        return 1;
    }
    return 0;
}

s32 fn_8022DBF8(void **arg0, void **arg1) {
    s32 ready;
    u8 *ptr = (u8*)lbl_8049DB28;

    if (ptr != 0 && *(s32*)(ptr + 4) == 5) {
        ready = 1;
    } else {
        ready = 0;
    }

    if (!ready) {
        return 0;
    }

    *arg0 = (void*)(ptr + 0x4C);
    *arg1 = (void*)((u8*)lbl_8049DB28 + 0x14C);
    return 1;
}

void fn_8022DEB8(void);

extern s64 OSGetTime(void);
u32 fn_8022813C();
s32 fn_802282CC();
s32 fn_802284B4();
s32 fn_802285A8();
void fn_802286A0();
u8 * fn_80228708();
u8 * fn_8022876C();
void fn_802287C8();
u8 * fn_8022884C();
void fn_8022891C();
// M2C_UNK fn_802289B0();
s32 fn_80228CF8(s32 arg0);
s32 fn_80228D3C();
s32 fn_80228DF0(void);
s32 fn_80228E28();
// extern int fn_80228F84();
s32 fn_80228FB4();
void fn_80229234();
s32 fn_802292B0(s32 arg0_x);
void fn_802293D8();
void fn_80229464(const char* key, const char* val, char* dst, char sep);
void fn_802294BC(const char* key, const char* val, char* dst, char sep);
s32 fn_8022954C();
s32 fn_802296A4();
u32 fn_802297EC(u16 *arg0);
u8 fn_80229810();
u8 fn_80229974(s32 arg0, u8 *arg1, s32 *arg2);
s32 fn_80229A30();
void fn_80229AF8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80229BD0(s32 arg0, s32 arg1);
void fn_80229D74();
s32 fn_80229E08(s32 arg0, s32 arg1);
s32 fn_80229F58(s32 arg0, s32 arg1);
s32 fn_8022A0A8(s32 arg0, s32 arg1);
s32 fn_8022A1F8(s32 arg0, s32 arg1);
s32 fn_8022A348(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8022A52C();
s32 fn_8022A668();
s32 fn_8022AB1C(void);
void fn_8022ABD0(s32 arg0, u8 *arg1);
void fn_8022ACA0(void *arg0, s32 *arg1);
s32 fn_8022AD30(void *arg0, s32 *arg1);
u8 * fn_8022AF38(s32 index);
s32 fn_8022AFA4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8022B06C(void);
s32 fn_8022B0AC();
s32 fn_8022B53C();
u8 * fn_8022B6E4();
s32 fn_8022B8F4();
s32 fn_8022B9C0();
s32 fn_8022BB20();
void fn_8022BFD4();
void fn_8022C284();
s32 fn_8022CDB8();
s32 fn_8022CF58();
void fn_8022D0F8(s32 arg0, s32 arg1);
u8 * fn_8022D1B8();
void fn_8022D2D4();
s32 fn_8022D53C(void);
s32 fn_8022D708();
void fn_8022D968();
s32 fn_8022DBF8();
void fn_8022DEB8(void);
// extern void fn_8024BC0C();
extern void fn_80270384();
extern void fn_802703D4();
extern void fn_80270648();
extern void fn_80270654();
extern void gpGetInfo();
extern void gsiMemoryCallbacksSet();

#pragma dont_inline on
void fn_802286A0(void) {
    gsiMemoryCallbacksSet((s32) fn_802287E4, (s32) fn_8022891C, (s32) fn_8022884C, (s32) fn_80228940);
    fn_802557FC(&lbl_8049C548);
    fn_8024DB2C();
    lbl_8049DAF4 = 0;
}
#pragma dont_inline reset

s32 fn_802289B0(s32 arg0, const void *arg1, ...);

#pragma dont_inline on
s32 fn_80228DF0(void) {
    if (fn_8022857C() != 0) {
        return 0;
    }
    fn_80270648();
    return 1;
}
#pragma dont_inline reset

