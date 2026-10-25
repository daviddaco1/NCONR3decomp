#include <revolution/ESP.h>

static s32 __esFd = -1;

s32 ESP_InitLib(void) {
    s32 ret = 0;

    if (__esFd < 0) {
        __esFd = IOS_Open("/dev/es", 0);

        if (__esFd < 0) {
            ret = __esFd;
        }
    }

    return ret;
}

s32 ESP_CloseLib(void) {
    s32 ret = 0;

    if (__esFd >= 0) {
        ret = IOS_Close(__esFd);
        if (ret == 0) {
            __esFd = -1;
        }
    }

    return ret;
}

//unused
void ESP_ImportTicket(){
}

//unused
void ESP_ImportTitleInit(){
}

//unused
void ESP_ImportContentBegin(){
}

//unused
void ESP_ImportContentData(){
}

//unused
void ESP_ImportContentEnd(){
}

//unused
void ESP_ImportTitleDone(){
}

//unused
void ESP_ImportTitleCancel(){
}

// ESP_LaunchTitle: definicion C reemplazada por asm (ver abajo)


//unused
void ESP_OpenContentFile(){
}

//unused
void ESP_OpenTitleContentFile(){
}

//unused
void ESP_ReadContentFile(){
}

//unused
void ESP_SeekContentFile(){
}

//unused
void ESP_CloseContentFile(){
}

//unused
void ESP_ListOwnedTitles(){
}

//unused
void ESP_ListTitlesOnCard(){
}

//unused
void ESP_ListTitleContentsOnCard(){
}

//unused
void ESP_ListTmdContentsOnCard(){
}

// ESP_GetTicketViews: definicion C reemplazada por asm (ver abajo)


// ESP_DiGetTicketView: definicion C reemplazada por asm (ver abajo)


// ESP_DiGetTmd: definicion C reemplazada por asm (ver abajo)


//unused
void ESP_GetTmd(){
}

//unused
void ESP_GetTmdSize(){
}

//unused
s32 ESP_GetTmdView(ESTitleId titleId, ESTmdView* tmdView, u32* size) {
}

// ESP_GetDataDir: definicion C reemplazada por asm (ver abajo)


s32 ESP_GetTitleId(ESTitleId* titleId) {
    s32 rv = 0;
    u8 __esBuf[256] ALIGN(32);
    IPCIOVector* v = (IPCIOVector *)(__esBuf + 256 - 6 * sizeof(IPCIOVector));

    if (__esFd < 0 || titleId == (ESTitleId*)NULL) {
        rv = -1017;
        goto out;
    }

    v[0].base = __esBuf;
    v[0].length = sizeof(ESTitleId);

    rv = IOS_Ioctlv(__esFd, 32, 0, 1, v);

    if (rv == 0) {
        *titleId = *(ESTitleId*)__esBuf;
    }

out:
    return rv;
}

//unused
void ESP_GetDeviceId(){
}

s32 ESP_GetConsumption(ESTicketId ticketId, ESLpEntry* entries, u32* nEntries) {
    s32 rv = 0;
    u8 __esBuf[256] ALIGN(32);
    IPCIOVector* v = (IPCIOVector *)(__esBuf + 256 - 6 * sizeof(IPCIOVector));
    ESTicketId* p1 = (ESTicketId*)__esBuf;
    u32* p2 = (u32*)(__esBuf + 32);

    if (__esFd < 0) {
        rv = -1017;
        goto out;
    }

    if (((u32)entries & 31)) {
        rv = -1017;
        goto out;
    }

    *p1 = ticketId;
    v[0].base = (u8*)p1;
    v[0].length = sizeof(ESTicketId);

    if (entries == (ESLpEntry*)NULL) {
        v[1].base = NULL;
        v[1].length = 0;
    } else {
        v[1].base = (u8*)entries;
        v[1].length = sizeof(ESLpEntry) * (*nEntries);
        *p2 = *nEntries;
    }

    v[2].base = (u8*)p2;
    v[2].length = 4;
    rv = IOS_Ioctlv(__esFd, 22, 1, 2, v);
    *nEntries = *p2;
out:
    return rv;
}

//unused
void ESP_GetDeviceCert(){
}

//unused
void ESP_Encrypt(){
}

//unused
void ESP_Decrypt(){
}

//unused
void ESP_Sign(){
}

//unused
void ESP_VerifySign(){
}

//unused
void ESP_DeleteTitleContent(){
}

//unused
void ESP_DeleteContent(){
}

//unused
void ESP_ExportTitleInit(){
}

//unused
void ESP_ExportContentBegin(){
}

//unused
void ESP_ExportContentData(){
}

//unused
void ESP_ExportContentEnd(){
}

//unused
void ESP_ExportTitleDone(){
}

//unused
void ESP_GetTicket(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float __esFd_8049D038;
extern void fn_802D926C();

// asm_to_cpp: ESP_LaunchTitle
asm s32 ESP_LaunchTitle(u64 titleID, ESTicketView *pTicketView) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x120
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r10, r1, 0x20
    lwz r9, __esFd_8049D038
    cmpwi r9, 0x0
    bge lbl_802D920C
    li r3, -0x3f9
    b lbl_802D9258
lbl_802D920C:
    clrlwi. r0, r5, 27
    beq lbl_802D921C
    li r3, -0x3f9
    b lbl_802D9258
lbl_802D921C:
    li r8, 0x8
    li r0, 0xd8
    stw r4, 0x24(r1)
    li r4, 0x8
    li r6, 0x0
    stw r3, 0x20(r1)
    mr r3, r9
    stw r5, 0xf8(r1)
    li r5, 0x2
    stw r10, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r0, 0xfc(r1)
    bl IOS_IoctlvReboot
    li r0, -0x1
    stw r0, __esFd_8049D038
lbl_802D9258:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_802D926C
asm void fn_802D926C() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r11, r1, 0x20
    stw r31, -0x4(r12)
    mr r31, r6
    addi r12, r1, 0x40
    lwz r10, __esFd_8049D038
    cmpwi r10, 0x0
    blt lbl_802D92B0
    li r8, 0x0
    cmplw r6, r8
    bne lbl_802D92B8
lbl_802D92B0:
    li r3, -0x3f9
    b lbl_802D936C
lbl_802D92B8:
    clrlwi. r0, r5, 27
    beq lbl_802D92C8
    li r3, -0x3f9
    b lbl_802D936C
lbl_802D92C8:
    cmplw r5, r8
    stw r4, 0x24(r1)
    stw r3, 0x20(r1)
    bne lbl_802D9318
    li r5, 0x8
    li r0, 0x4
    stw r5, 0xf4(r1)
    mr r3, r10
    li r4, 0x12
    li r5, 0x1
    stw r11, 0xf0(r1)
    li r6, 0x1
    stw r12, 0xf8(r1)
    stw r0, 0xfc(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bne lbl_802D936C
    lwz r0, 0x40(r1)
    stw r0, 0x0(r31)
    b lbl_802D936C
lbl_802D9318:
    lwz r9, 0x0(r6)
    cmpwi r9, 0x0
    bne lbl_802D932C
    li r3, -0x3f9
    b lbl_802D936C
lbl_802D932C:
    li r8, 0x8
    li r0, 0x4
    stw r5, 0x100(r1)
    mr r3, r10
    li r4, 0x13
    li r5, 0x2
    stw r9, 0x40(r1)
    stw r11, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r12, 0xf8(r1)
    stw r0, 0xfc(r1)
    lwz r0, 0x0(r6)
    li r6, 0x1
    mulli r0, r0, 0xd8
    stw r0, 0x104(r1)
    bl IOS_Ioctlv
lbl_802D936C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: ESP_DiGetTicketView
asm s32 ESP_DiGetTicketView(const void* ticket, ESTicketView* ticketView) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x120
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    lwz r0, __esFd_8049D038
    cmpwi r0, 0x0
    blt lbl_802D93B8
    li r5, 0x0
    cmplw r4, r5
    bne lbl_802D93C0
lbl_802D93B8:
    li r3, -0x3f9
    b lbl_802D9414
lbl_802D93C0:
    clrlwi. r0, r3, 27
    bne lbl_802D93D0
    clrlwi. r0, r4, 27
    beq lbl_802D93D8
lbl_802D93D0:
    li r3, -0x3f9
    b lbl_802D9414
lbl_802D93D8:
    cmplw r3, r5
    stw r3, 0xf0(r1)
    bne lbl_802D93EC
    stw r5, 0xf4(r1)
    b lbl_802D93F4
lbl_802D93EC:
    li r0, 0x2a4
    stw r0, 0xf4(r1)
lbl_802D93F4:
    li r0, 0xd8
    stw r4, 0xf8(r1)
    lwz r3, __esFd_8049D038
    li r4, 0x1b
    stw r0, 0xfc(r1)
    li r5, 0x1
    li r6, 0x1
    bl IOS_Ioctlv
lbl_802D9414:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: ESP_DiGetTmd
asm s32 ESP_DiGetTmd(ESTitleMeta* tmd, u32* tmdSize) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r8, r1, 0x20
    stw r31, -0x4(r12)
    mr r31, r4
    lwz r6, __esFd_8049D038
    cmpwi r6, 0x0
    blt lbl_802D9468
    li r5, 0x0
    cmplw r4, r5
    bne lbl_802D9470
lbl_802D9468:
    li r3, -0x3f9
    b lbl_802D9500
lbl_802D9470:
    clrlwi. r0, r3, 27
    beq lbl_802D9480
    li r3, -0x3f9
    b lbl_802D9500
lbl_802D9480:
    cmplw r3, r5
    bne lbl_802D94BC
    li r0, 0x4
    mr r3, r6
    stw r8, 0xf0(r1)
    li r4, 0x39
    li r5, 0x0
    li r6, 0x1
    stw r0, 0xf4(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bne lbl_802D9500
    lwz r0, 0x20(r1)
    stw r0, 0x0(r31)
    b lbl_802D9500
lbl_802D94BC:
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    bne lbl_802D94D0
    li r3, -0x3f9
    b lbl_802D9500
lbl_802D94D0:
    li r0, 0x4
    stw r3, 0xf8(r1)
    mr r3, r6
    li r6, 0x1
    stw r5, 0x20(r1)
    li r5, 0x1
    stw r8, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r0, 0x0(r4)
    li r4, 0x3a
    stw r0, 0xfc(r1)
    bl IOS_Ioctlv
lbl_802D9500:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: ESP_GetTicketViews
asm s32 ESP_GetTicketViews(ESTitleId titleId, ESTicketView* ticketViewList, u32* ticketViewCnt) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r11, r1, 0x20
    stw r31, -0x4(r12)
    mr r31, r6
    addi r12, r1, 0x40
    lwz r10, __esFd_8049D038
    cmpwi r10, 0x0
    blt lbl_802D955C
    li r8, 0x0
    cmplw r6, r8
    bne lbl_802D9564
lbl_802D955C:
    li r3, -0x3f9
    b lbl_802D9614
lbl_802D9564:
    clrlwi. r0, r5, 27
    beq lbl_802D9574
    li r3, -0x3f9
    b lbl_802D9614
lbl_802D9574:
    cmplw r5, r8
    stw r4, 0x24(r1)
    stw r3, 0x20(r1)
    bne lbl_802D95C4
    li r5, 0x8
    li r0, 0x4
    stw r5, 0xf4(r1)
    mr r3, r10
    li r4, 0x14
    li r5, 0x1
    stw r11, 0xf0(r1)
    li r6, 0x1
    stw r12, 0xf8(r1)
    stw r0, 0xfc(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bne lbl_802D9614
    lwz r0, 0x40(r1)
    stw r0, 0x0(r31)
    b lbl_802D9614
lbl_802D95C4:
    lwz r9, 0x0(r6)
    cmpwi r9, 0x0
    bne lbl_802D95D8
    li r3, -0x3f9
    b lbl_802D9614
lbl_802D95D8:
    li r8, 0x8
    li r0, 0x4
    stw r5, 0x100(r1)
    mr r3, r10
    li r4, 0x15
    li r5, 0x2
    stw r9, 0x40(r1)
    stw r11, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r12, 0xf8(r1)
    stw r0, 0xfc(r1)
    lwz r0, 0x0(r6)
    li r6, 0x1
    stw r0, 0x104(r1)
    bl IOS_Ioctlv
lbl_802D9614:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: ESP_GetDataDir
asm s32 ESP_GetDataDir(ESTitleId titleId, char* dataDir) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x120
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r10, r1, 0x20
    lwz r9, __esFd_8049D038
    cmpwi r9, 0x0
    blt lbl_802D9664
    li r0, 0x0
    cmplw r5, r0
    bne lbl_802D966C
lbl_802D9664:
    li r3, -0x3f9
    b lbl_802D96B0
lbl_802D966C:
    clrlwi. r0, r5, 27
    beq lbl_802D967C
    li r3, -0x3f9
    b lbl_802D96B0
lbl_802D967C:
    li r8, 0x8
    li r0, 0x1e
    stw r4, 0x24(r1)
    li r4, 0x1d
    li r6, 0x1
    stw r3, 0x20(r1)
    mr r3, r9
    stw r5, 0xf8(r1)
    li r5, 0x1
    stw r10, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r0, 0xfc(r1)
    bl IOS_Ioctlv
lbl_802D96B0:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}
