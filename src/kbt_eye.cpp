#include "types.h"

// Translation unit: kbt_eye.cpp (3 funciones). Reescrito a C; misma plantilla que ten_eye.cpp.

extern "C" void* fn_800F5B78(void* obj, int id, int arg);
extern "C" void* fn_80170E2C(void* heap, u32 size, int arg);
extern "C" void fn_800F5B14(void* obj, void* data, int id, int arg);
extern "C" void* memset(void* dst, int val, u32 n);

extern "C" int fn_800DF888(void* obj, void* arg, void* buf);
extern "C" int fn_800DF930(void* obj, void* arg, void* found);

#pragma dont_inline on
extern "C" int fn_800DF880(void* obj, void* arg) {
    return fn_800DF888(obj, arg, 0);
}

extern "C" int fn_800DF888(void* obj, void* arg, void* buf) {
    void* found = fn_800F5B78(obj, 0x52, 0);
    if (found == 0) {
        buf = buf ? buf : fn_80170E2C(*(void**)((u8*)obj + 0x110), 0x700, 0);
        memset(buf, 0, 0x700);
        fn_800F5B14(obj, buf, 0x52, 0);
        return 0;
    }
    return fn_800DF930(obj, arg, found);
}

extern "C" int fn_800DF930(void* obj, void* arg, void* found) {
    return 1;
}
#pragma dont_inline reset
