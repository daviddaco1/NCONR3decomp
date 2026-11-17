#include <stdarg.h>
#include "types.h"

extern void vprintf(const char*, va_list);

void OSReport(const char* msg, ...) {
    va_list list;
    va_start(list, msg);
    vprintf(msg, list);
    va_end(list);
}

void fn_80315F98(const char* msg, va_list list) {
    vprintf(msg, list);
}
