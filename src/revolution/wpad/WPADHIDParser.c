#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK fn_8028E678(s8 *, s32, u8, void (*)(s32, s32)); /* extern */
f64 memcpy();       /* extern */
M2C_UNK memset();           /* extern */
M2C_UNK __wpadGetExtType();                 /* static */

void __wpadAbortInitExtension();
void __wpadGetDevConfig();
void fn_8028FAA4();
void __wpadGetGameInfo();
s32 WPADiHIDParser();
void __a1_20_status_report();
void __a1_21_user_data();
void __a1_22_ack();
void fn_80290E90();
void __parse_dpdex_data();
void __parse_cl_data();
void __parse_vs_data();
void __a1_30_data_type();
void __a1_31_data_type();
void fn_80291D80();
void __a1_33_data_type();
void fn_802921E0();
void fn_802923C8();
void __a1_36_data_type();
void fn_80292880();
void __a1_3d_data_type();
void fn_80292D7C();
void fn_80292F38();
void __a1_unused_report();

void __wpadAbortInitExtension(s32 arg0, s32 arg1, M2C_UNK arg_sp0);

void __wpadGetDevConfig(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_8028FAA4(s32 arg0, s32 arg1, M2C_UNK arg_sp0);

/*
Decompilation failure in function __wpadGetExtType:

Found bctr instruction at WPADHIDParser.s line 1240, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void __wpadGetGameInfo(s32 arg0, s32 arg1, s32 arg2);

s32 WPADiHIDParser(s32 arg0, u8 *arg1, M2C_UNK arg_sp0);

void __a1_20_status_report(s32 arg0, s8 *arg1, s32 *arg2, M2C_UNK arg_sp0);

void __a1_21_user_data(s32 arg0, s8 *arg1, s32 *arg2, M2C_UNK arg_sp0);

void __a1_22_ack(s32 arg0, s8 *arg1, s32 *arg2, M2C_UNK arg_sp0);

void __parse_cl_data(s32 arg0, u16 **arg1, s32 arg2, s8 *arg3, u32 arg4);

void __a1_30_data_type(s32 arg0, s8 *arg1, s8 *arg2);

void __a1_31_data_type(s32 arg0, s8 *arg1, s8 *arg2);

void fn_80291D80(s32 arg0, s8 *arg1, u16 *arg2);

void __a1_33_data_type(s32 arg0, s8 *arg1, s8 *arg2);

void fn_802921E0(s32 arg0, s8 *arg1, s8 *arg2);

void fn_802923C8(s32 arg0, s8 *arg1, u16 *arg2, M2C_UNK arg_sp0);

void __a1_36_data_type(s32 arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_80292880(s32 arg0, s8 *arg1, u16 *arg2, M2C_UNK arg_sp0);

void __a1_3d_data_type(s32 arg0, s32 arg1, u16 *arg2);

void fn_80292D7C(s32 arg0, s8 *arg1, s8 *arg2, M2C_UNK arg_sp0);

void fn_80292F38(s32 arg0, s8 *arg1, s8 *arg2, M2C_UNK arg_sp0);

void __a1_unused_report(void) {

}

s32 WPADiHIDParser();
void __a1_20_status_report();
void __a1_21_user_data();
void __a1_22_ack();
void __a1_30_data_type();
void __a1_31_data_type();
void __a1_33_data_type();
void __a1_36_data_type();
void __a1_3d_data_type();
void __parse_cl_data();
void __parse_dpdex_data();
void __parse_vs_data(s32 arg0, s8 **arg1, s32 arg2, u16 **arg3, s32 arg4);
void __wpadAbortInitExtension();
void __wpadGetDevConfig();
M2C_UNK __wpadGetExtType();
void __wpadGetGameInfo();
void fn_8028FAA4();
void fn_80290E90();
void fn_80291D80();
void fn_802921E0();
void fn_802923C8();
void fn_80292880();
void fn_80292D7C();
void fn_80292F38();
