#ifndef RVL_MTX_H
#define RVL_MTX_H

#include "types.h"

/* Tipos de revolution/mtx.h */
typedef struct Vec {
    f32 x, y, z;
} Vec;

typedef f32 Mtx[3][4];
typedef f32 Mtx44[4][4];

#endif
