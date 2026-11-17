#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();                       /* extern */
extern s32 (*lbl_8049CF40)(s32);
extern M2C_UNK (*lbl_8049CF44)(s32);

s32 AXFXChorusExpGetMemSize();
s32 AXFXChorusExpInit();
s32 AXFXChorusExpSettingsUpdate();
void AXFXChorusExpCallback();
s32 fn_802A1E68();
void __CalcLFO();

s32 AXFXChorusExpGetMemSize(s32 arg0) {
    return 0x9600;
}

void AXFXChorusExpCallback(s8 *arg0, s32 *arg1);

void __CalcLFO(s32 *arg0, s8 *arg1);

void AXFXChorusExpCallback();
s32 AXFXChorusExpInit(s32 *arg0, M2C_UNK arg_sp0);
s32 AXFXChorusExpSettingsUpdate(s32 *arg0, M2C_UNK arg_sp0);
void __CalcLFO();
s32 fn_802A1E68(s32 *arg0);

void AXFXChorusExpShutdown(s32* self) {
 u32 i;
 s32 enabled=OSDisableInterrupts();
 self[31]|=1;
 for(i=0;i<3;i++,self++){
 if(*self)lbl_8049CF44(*self);
 *self=0;
 }
 OSRestoreInterrupts(enabled);
}