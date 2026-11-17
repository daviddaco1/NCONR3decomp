#include "types.h"
#include "hbm_charwriter_compat.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXInitTexObj(); /* extern */
M2C_UNK GXSetTexCoordGen2(); /* extern */
M2C_UNK GXSetVtxAttrFmt(); /* extern */
M2C_UNK GXSetVtxDesc();             /* extern */

s8 * fn_802FD684();
s32 fn_802FD8B0();
void fn_802FD8F0();
s32 fn_802FD8F8();
void fn_802FD900();
f32 fn_802FE7EC();
f32 fn_802FE7F4();
void fn_802FE7FC();
f32 fn_802FE8CC();
f32 fn_802FE930();
f32 fn_802FE994();
u8 fn_802FE9F8();
f32 fn_802FEA00();
f32 fn_802FEA08();
void fn_802FEB44(s8 *arg0, f32 farg0, f32 farg1);
void fn_802FEB50(s8 *arg0, f32 farg0);
void fn_802FEB58(s8 *arg0, f32 farg0);
void fn_802FEB60(s8 *arg0, f32 farg0);
void fn_802FEB70(s8 *arg0, f32 farg0);
f32 fn_802FEB80();
f32 fn_802FEB88();
void fn_802FEB90();
void fn_802FEE14();
void fn_802FF174();
s8 * fn_802FF21C();
s32 * fn_802FF2A0();
s32 fn_802FF2E8();

s32 fn_802FD8B0(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

void fn_802FD8F0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

s32 fn_802FD8F8(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

f32 fn_802FE7EC(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

f32 fn_802FE7F4(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x28);
}

u8 fn_802FE9F8(s8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x43);
}

f32 fn_802FEA00(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x44);
}

f32 fn_802FEA08(s8 *arg0, s32 arg1);

f32 fn_802FEB80(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

f32 fn_802FEB88(s8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}

s32 *fn_802FF2A0(s32 *arg0, s32 **arg1);

s32 fn_802FF2E8(s32 *arg0, s8 *arg1, s32 arg2, s32 *arg3);

s8 *fn_802FD684(s8 *arg0);
void fn_802FD900(s8 *arg0);
void fn_802FE7FC();
f32 fn_802FE8CC(s8 *arg0);
f32 fn_802FE930(s8 *arg0);
f32 fn_802FE994(s8 *arg0);
f32 fn_802FEA08();
void fn_802FEB44(s8 *arg0, f32 farg0, f32 farg1);
void fn_802FEB50(s8 *arg0, f32 farg0);
void fn_802FEB58(s8 *arg0, f32 farg0);
void fn_802FEB60(s8 *arg0, f32 farg0);
void fn_802FEB70(s8 *arg0, f32 farg0);
void fn_802FEB90();
void fn_802FEE14(u8 *arg0, u8 *arg1);
void fn_802FF174(s8 *arg0, s32 arg1);
s8 *fn_802FF21C(s8 *arg0, s32 arg1);
s32 * fn_802FF2A0();
s32 fn_802FF2E8();

void fn_802FE378(HbmCharWriter* p, HbmColor min, HbmColor max) {
    p->mColorMapping.min = min;
    p->mColorMapping.max = max;
}

void fn_802FE3BC(HbmCharWriter* p, s32 mode) {
    p->mTextColor.gradationMode = mode;
    HbmUpdateVertexColor(p);
}

void fn_802FE50C(HbmCharWriter* p, HbmColor start) {
    p->mTextColor.start = start;
    HbmUpdateVertexColor(p);
}

void fn_802FE66C(HbmCharWriter* p, HbmColor start, HbmColor end) {
    p->mTextColor.start = start;
    p->mTextColor.end = end;
    HbmUpdateVertexColor(p);
}

void fn_802FEB44(s8 *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x30) = farg1;
}

void fn_802FEB50(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
}

void fn_802FEB58(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
}

void fn_802FEB60(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) += farg0;
}

void fn_802FEB70(s8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x30) += farg0;
}
