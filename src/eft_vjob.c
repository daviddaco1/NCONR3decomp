#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern s32 **lbl_8049D6BC;

void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_8002211C(s8 *arg0);
void fn_8011FD98(s32 arg0);
void fn_8011FDDC(s8 *arg0);
void fn_8011FE34(s8 *arg0, s8 *arg1);

void fn_8011FD98(s32 arg0) {
    if (arg0 != 0) {
        fn_8002211C((s8 *) (arg0 + 0x10));
        fn_80019D94((M2C_UNK **) (lbl_8049D6BC), (s32) (arg0));
    }
}

void fn_8011FDDC(s8 *arg0) {
    s8 *item;
    s8 **node = *(s8 ***)(arg0 + 8);
    while ((item = *node) != (s8 *)1) {
        fn_8002211C((s8 *)(item + 0x10));
        fn_80019D94((M2C_UNK **)lbl_8049D6BC, (s32)item);
        node = *(s8 ***)(node + 2);
    }
}

void fn_8011FE34(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, s8 *, 0) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, s8 *, 2) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 8));
    M2C_FIELD(arg0, s8 *, 3) = (s8) ((s8) M2C_FIELD(arg1, f32 *, 0xC));
}

} // extern "C"
