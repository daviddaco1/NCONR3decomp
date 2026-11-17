#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK __DBIntrHandler();                          /* static */
M2C_UNK __DBMtrHandler();                           /* static */
extern M2C_UNK (*lbl_8049D93C)();

/*
Decompilation failure in function __DBMtrHandler:

Unable to determine jump table for bctr instruction at DebuggerDriver.s line 17.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

/*
Decompilation failure in function __DBIntrHandler:

Unable to determine jump table for bctr instruction at DebuggerDriver.s line 30.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void DBInitComm();
void DBInitInterrupts();
s32 DBQueryData();
s32 DBRead();
s32 DBWrite();
void DBOpen();
void DBClose();

void DBInitInterrupts(void) {
    __OSMaskInterrupts(0x18000);
    __OSMaskInterrupts(0x40);
    lbl_8049D93C = __DBMtrHandler;
    __OSSetInterruptHandler(0x19, (s32) __DBIntrHandler);
    __OSUnmaskInterrupts(0x40);
}

void DBOpen(void) {

}

void DBClose(void) {

}

void DBInitComm(s8 **arg0, s32 arg1);
s32 DBQueryData(void);
s32 DBRead(s32 arg0, s32 arg1);
s32 DBWrite(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
M2C_UNK __DBIntrHandler();
M2C_UNK __DBMtrHandler();
