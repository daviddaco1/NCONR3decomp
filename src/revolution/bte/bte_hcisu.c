#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s8 *lbl_8049DFE8;
extern s32 lbl_8049DFEC;

/*
Decompilation failure in function bte_hcisu_send:

Unable to determine jump table for bctr instruction at bte_hcisu.s line 16.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void bte_hcisu_task();
void bta_ci_hci_msg_handler();

void bte_hcisu_task(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_r12_2)(s32);

    if ((s8 *) lbl_8049DFE8 != NULL) {
        temp_r12 = M2C_FIELD(lbl_8049DFE8, M2C_UNK (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0);
        if (temp_r12 != NULL) {
            temp_r12(2, 1, 0x800);
        }
        temp_r12_2 = M2C_FIELD(lbl_8049DFE8, M2C_UNK (**)(s32), 4);
        if (temp_r12_2 != NULL) {
            temp_r12_2(lbl_8049DFEC);
        }
    }
}

/*
Decompilation failure in function bte_hcisu_close:

Unable to determine jump table for bctr instruction at bte_hcisu.s line 61.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void bta_ci_hci_msg_handler(s32 arg0) {
    GKI_send_msg(2U, 0U, arg0);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GKI_freebuf();
extern int bte_hcisu_close();
extern int bte_hcisu_send();

// asm_to_cpp: bte_hcisu_send
asm int bte_hcisu_send() {
    nofralloc
    sth r4, 0x0(r3)
    lwz r4, lbl_8049DFE8
    cmpwi r4, 0x0
    beq lbl_802A5214
    lwz r12, 0xc(r4)
    mtctr r12
    bctr
lbl_802A5214:
    b GKI_freebuf
}

// asm_to_cpp: bte_hcisu_close
asm int bte_hcisu_close() {
    nofralloc
    lwz r3, lbl_8049DFE8
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}
