#include <revolution/IPC.h>

#define IPC_REQUEST_MAX 32

static s32 IpcNumUnIssuedReqs;
static s32 IpcNumPendingReqs;

static IPCRequestEx* IpcReqPtrArray[IPC_REQUEST_MAX];
static s32 IpcFdArray[IPC_REQUEST_MAX];

static void AddReqInfo(IPCRequestEx* req, s32 fd);
static void DelReqInfo(IPCRequestEx* req, s32 fd);

DECOMP_FORCEACTIVE(ipcProfile_c, IpcFdArray);

//unused
void IPCGetNumPendingReqs(){
}

//unused
void IPCGetNumUnIssuedReqs(){
}

//unused
void IPCGetQueueStatus(){
}

// IPCiProfInit: definicion C reemplazada por asm (ver abajo)


// IPCiProfQueueReq: definicion C reemplazada por asm (ver abajo)


void IPCiProfAck(void) {
    IpcNumUnIssuedReqs--;
}

// IPCiProfReply: definicion C reemplazada por asm (ver abajo)


static void AddReqInfo(IPCRequestEx* req, s32 fd) {
    u32 i;

    for (i = 0; i < IPC_REQUEST_MAX; i++) {
        if (IpcReqPtrArray[i] == NULL && IpcFdArray[i] == -1) {
            IpcReqPtrArray[i] = req;
            IpcFdArray[i] = fd;
            return;
        }
    }
}

static void DelReqInfo(IPCRequestEx* req, s32 fd) {
    u32 i;

    for (i = 0; i < IPC_REQUEST_MAX; i++) {
        if (req == IpcReqPtrArray[i] && IpcFdArray[i] == fd) {
            IpcReqPtrArray[i] = NULL;
            IpcFdArray[i] = -1;
            return;
        }
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float IpcNumPendingReqs_8049E210;
extern float IpcNumUnIssuedReqs_8049E214;
extern u8 IpcFdArray_80463180[];
extern u8 IpcReqPtrArray_80463200[];

// asm_to_cpp: IPCiProfInit
asm void IPCiProfInit(void) {
    nofralloc
    li r4, 0x0
    lis r5, IpcReqPtrArray_80463200@ha
    lis r6, IpcFdArray_80463180@ha
    li r0, 0x2
    stw r4, IpcNumPendingReqs_8049E210
    addi r5, r5, IpcReqPtrArray_80463200@l
    addi r6, r6, IpcFdArray_80463180@l
    li r3, -0x1
    stw r4, IpcNumUnIssuedReqs_8049E214
    mtctr r0
lbl_80307750:
    stw r4, 0x0(r5)
    stw r3, 0x0(r6)
    stw r4, 0x4(r5)
    stw r3, 0x4(r6)
    stw r4, 0x8(r5)
    stw r3, 0x8(r6)
    stw r4, 0xc(r5)
    stw r3, 0xc(r6)
    stw r4, 0x10(r5)
    stw r3, 0x10(r6)
    stw r4, 0x14(r5)
    stw r3, 0x14(r6)
    stw r4, 0x18(r5)
    stw r3, 0x18(r6)
    stw r4, 0x1c(r5)
    stw r3, 0x1c(r6)
    stw r4, 0x20(r5)
    stw r3, 0x20(r6)
    stw r4, 0x24(r5)
    stw r3, 0x24(r6)
    stw r4, 0x28(r5)
    stw r3, 0x28(r6)
    stw r4, 0x2c(r5)
    stw r3, 0x2c(r6)
    stw r4, 0x30(r5)
    stw r3, 0x30(r6)
    stw r4, 0x34(r5)
    stw r3, 0x34(r6)
    stw r4, 0x38(r5)
    stw r3, 0x38(r6)
    stw r4, 0x3c(r5)
    addi r5, r5, 0x40
    stw r3, 0x3c(r6)
    addi r6, r6, 0x40
    bdnz lbl_80307750
    blr
}

// asm_to_cpp: IPCiProfQueueReq
asm void IPCiProfQueueReq(IPCRequestEx* req, s32 fd) {
    nofralloc
    lwz r6, IpcNumPendingReqs_8049E210
    lis r8, IpcReqPtrArray_80463200@ha
    lwz r5, IpcNumUnIssuedReqs_8049E214
    lis r9, IpcFdArray_80463180@ha
    addi r6, r6, 0x1
    li r0, 0x20
    addi r5, r5, 0x1
    stw r6, IpcNumPendingReqs_8049E210
    addi r8, r8, IpcReqPtrArray_80463200@l
    addi r9, r9, IpcFdArray_80463180@l
    stw r5, IpcNumUnIssuedReqs_8049E214
    li r7, 0x0
    mtctr r0
lbl_80307814:
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    bne lbl_8030784C
    lwz r0, 0x0(r9)
    cmpwi r0, -0x1
    bne lbl_8030784C
    lis r6, IpcReqPtrArray_80463200@ha
    lis r5, IpcFdArray_80463180@ha
    slwi r0, r7, 2
    addi r6, r6, IpcReqPtrArray_80463200@l
    addi r5, r5, IpcFdArray_80463180@l
    stwx r3, r6, r0
    stwx r4, r5, r0
    blr
lbl_8030784C:
    addi r8, r8, 0x4
    addi r9, r9, 0x4
    addi r7, r7, 0x1
    bdnz lbl_80307814
    blr
}

// asm_to_cpp: IPCiProfReply
asm void IPCiProfReply(IPCRequestEx* req, s32 fd) {
    nofralloc
    lwz r5, IpcNumPendingReqs_8049E210
    lis r6, IpcReqPtrArray_80463200@ha
    lis r7, IpcFdArray_80463180@ha
    li r0, 0x20
    subi r5, r5, 0x1
    addi r6, r6, IpcReqPtrArray_80463200@l
    stw r5, IpcNumPendingReqs_8049E210
    addi r7, r7, IpcFdArray_80463180@l
    li r5, 0x0
    mtctr r0
lbl_80307898:
    lwz r0, 0x0(r6)
    cmplw r3, r0
    bne lbl_803078D8
    lwz r0, 0x0(r7)
    cmpw r4, r0
    bne lbl_803078D8
    lis r4, IpcReqPtrArray_80463200@ha
    lis r3, IpcFdArray_80463180@ha
    slwi r6, r5, 2
    li r5, 0x0
    addi r4, r4, IpcReqPtrArray_80463200@l
    addi r3, r3, IpcFdArray_80463180@l
    li r0, -0x1
    stwx r5, r4, r6
    stwx r0, r3, r6
    blr
lbl_803078D8:
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r5, r5, 0x1
    bdnz lbl_80307898
    blr
}
