#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_80453F78;

void btm_discovery_db_init();
void btm_discovery_db_reset();
void btm_discovery_timeout();

// btm_discovery_db_init: definicion C reemplazada por asm (ver abajo)


// btm_discovery_db_reset: definicion C reemplazada por asm (ver abajo)


void btm_discovery_timeout(void) {

}

// ---- Funciones aun sin C que matchee (asm generado) ----
void btm_discovery_db_init(void);
void btm_discovery_db_reset(void);
extern void btu_stop_timer();

// asm_to_cpp: btm_discovery_db_init
asm void btm_discovery_db_init(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x1020
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    addi r0, r31, 0x6d4
    stw r0, 0x1678(r31)
    addi r3, r31, 0x658
    bl memset
    li r3, 0x1
    li r4, 0x2
    li r0, 0x1002
    sth r3, 0x670(r31)
    lwz r3, 0x1678(r31)
    addi r6, r31, 0x674
    sth r4, 0x674(r31)
    li r4, 0xfa0
    li r5, 0x1
    li r7, 0x0
    sth r0, 0x678(r31)
    li r8, 0x0
    bl SDP_InitDiscoveryDb
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: btm_discovery_db_reset
asm void btm_discovery_db_reset(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    addi r3, r31, 0x658
    bl btu_stop_timer
    lbz r0, 0x1674(r31)
    cmpwi r0, 0x0
    beq lbl_802AF714
    lwz r12, 0x6d0(r31)
    li r0, 0x0
    stb r0, 0x1674(r31)
    cmpwi r12, 0x0
    stw r0, 0x6d0(r31)
    beq lbl_802AF714
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802AF714:
    lis r31, lbl_80453F78@ha
    li r4, 0x0
    addi r31, r31, lbl_80453F78@l
    li r5, 0x1020
    addi r0, r31, 0x6d4
    stw r0, 0x1678(r31)
    addi r3, r31, 0x658
    bl memset
    li r3, 0x1
    li r4, 0x2
    li r0, 0x1002
    sth r3, 0x670(r31)
    lwz r3, 0x1678(r31)
    addi r6, r31, 0x674
    sth r4, 0x674(r31)
    li r4, 0xfa0
    li r5, 0x1
    li r7, 0x0
    sth r0, 0x678(r31)
    li r8, 0x0
    bl SDP_InitDiscoveryDb
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
