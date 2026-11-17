#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();            /* extern */

void btu_init_core();
void BTE_Init();
s32 fn_802B6FD8();
void fn_802B70B8();

void btu_init_core(s32 arg0) {
    btm_init();
    l2c_init();
    sdp_init();
    btm_discovery_db_init();
}

void BTE_Init(void);
s32 fn_802B6FD8(void);
void fn_802B70B8(void);
