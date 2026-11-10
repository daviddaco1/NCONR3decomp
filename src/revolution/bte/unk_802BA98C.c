#include "hidd_int.h"

#include <cstring>

#include "bt_trace.h"
#include "bt_types.h"
#include "data_types.h"

#include "btu.h"
#include "hiddefs.h"
#include "hidd_api.h"

static tHID_STATUS hidd_no_conn_proc_evt(UINT8 event, void *p_data);
static tHID_STATUS hidd_connecting_proc_evt(UINT8 event, void *p_data);
static tHID_STATUS hidd_connected_proc_evt(UINT8 event, void *p_data);
static tHID_STATUS hidd_disc_ing_proc_evt(UINT8 event, void *p_data);


tHID_DEV_CTB hd_cb;



char hidd_mgmt_trace_repage[0x20] = "hidd_proc_repage_timeout";

void hidd_proc_repage_timeout(void)
{
    HIDD_TRACE(DEBUG, hidd_mgmt_trace_repage);

    ++hd_cb.conn_tries;

    if (hidd_conn_initiate())
    {
        if (hd_cb.conn_tries > 15)
        {
            hd_cb.dev_state = 0;
            (*hd_cb.callback)(1, 0, NULL);
        }
        else
        {
            btu_start_timer(&hd_cb.conn.timer_entry, 22, 1);
        }
    }
    else
    {
        (*hd_cb.callback)(2, hd_cb.conn_tries, NULL);
    }
}





// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_80375900[];
extern u8 lbl_80375918[];
extern u8 lbl_80456AF0[];
extern void LogMsg_0();
extern int fn_802BA98C();
extern int fn_802BA9F4();
extern void memset();

// asm_to_cpp: fn_802BA98C
asm int fn_802BA98C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x144
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80456AF0@ha
    addi r3, r31, lbl_80456AF0@l
    bl memset
    lis r3, hidd_proc_repage_timeout@ha
    addi r5, r31, lbl_80456AF0@l
    li r6, 0x1
    li r4, 0x40
    addi r3, r3, hidd_proc_repage_timeout@l
    li r0, 0x0
    stb r6, 0xca(r5)
    sth r4, 0xcc(r5)
    stb r6, 0x106(r5)
    sth r4, 0x108(r5)
    stw r3, 0x2c(r5)
    stb r0, 0x141(r5)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802BA9F4
asm int fn_802BA9F4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80456AF0@ha
    addi r29, r29, lbl_80456AF0@l
    lbz r0, 0x141(r29)
    cmplwi r0, 0x4
    blt lbl_802BAA34
    lis r3, 0x1e
    lis r4, lbl_80375900@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375900@l
    bl LogMsg_0
lbl_802BAA34:
    li r0, 0x0
    li r30, 0x1
    lis r31, lbl_80456AF0@ha
    sth r0, 0x14(r29)
    addi r4, r31, lbl_80456AF0@l
    li r3, 0x11
    sth r0, 0x16(r29)
    stb r30, 0x11(r29)
    bl L2CA_ConnectReq
    clrlwi. r0, r3, 16
    sth r3, 0x14(r29)
    bne lbl_802BAA90
    addi r3, r31, lbl_80456AF0@l
    lbz r0, 0x141(r3)
    cmplwi r0, 0x2
    blt lbl_802BAA88
    lis r3, 0x1e
    lis r4, lbl_80375918@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375918@l
    bl LogMsg_0
lbl_802BAA88:
    li r3, 0xe
    b lbl_802BAA98
lbl_802BAA90:
    stb r30, 0x10(r29)
    li r3, 0x0
lbl_802BAA98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
