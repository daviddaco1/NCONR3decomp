// Macros que emite m2c en modo --valid-syntax (tools/m2c_pass.py). Reimplementacion propia
// (mismos nombres) para que el C generado compile; reemplazarlas a medida que se tipan los structs.
#ifndef M2C_MACROS_H
#define M2C_MACROS_H

#include "types.h"

#ifndef NULL
#define NULL 0
#endif

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8*)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_STRUCT_COPY(dst, src, size) (*(dst) = *(src))
#define M2C_MEMCPY_ALIGNED(dst, src, size) (*(dst) = *(src))
#define M2C_MEMCPY_UNALIGNED(dst, src, size) (*(dst) = *(src))
#define M2C_LWL(expr) (expr)
#define M2C_FIRST3BYTES(expr) (expr)
#define M2C_UNALIGNED32(expr) (expr)
#define M2C_CARRY 0
#define M2C_OVERFLOW(expr) 0
#define M2C_ERROR(desc) (0)
#define M2C_TRAP_IF(cond) (0)
#define M2C_BREAK() (0)
#define M2C_SYNC() (0)
#define M2C_DCACHE_CLEAN(addr) (0)
#define M2C_DCACHE_INVALIDATE(addr) (0)
#define M2C_DCACHE_CLEAN_INVALIDATE(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO_LOCKED(addr) (0)
#define M2C_ICACHE_INVALIDATE(addr) (0)
#define M2C_PREFETCH(addr) (0)
#define M2C_PREFETCH_STORE(addr) (0)

#endif
