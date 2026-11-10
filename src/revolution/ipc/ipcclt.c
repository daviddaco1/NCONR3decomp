#include <revolution/IPC.h>
#include <revolution/OS.h>
#include <string.h>

#define IPC_QUEUE_CAPACITY 16
#define IPC_HEAP_SIZE_OLD 0x800
#define IPC_HEAP_SIZE 0x1000

typedef struct IPCRequestQueue {
    u32 sent;                                // at 0x0
    u32 queued;                              // at 0x4
    u32 front;                               // at 0x8
    u32 back;                                // at 0xC
    IPCRequestEx* queue[IPC_QUEUE_CAPACITY]; // at 0x10
} IPCRequestQueue;

static s32 __mailboxAck = 1;
static s32 hid = -1;

static BOOL __relnchFl = FALSE;
static IPCRequestEx* __relnchRpc = NULL;
static IPCRequestEx* __relnchRpcSave = NULL;

static IPCRequestQueue __responses;

static OSAlarm __timeout_alarm;

static IPCRequestEx __rpcBuf;

size_t strnlen(const char* s, size_t maxlen);

size_t strnlen(const char* s, size_t maxlen) {
    const u8* p = (const u8*)s;
    while (*p && maxlen-- > 0) {
        p++;
    }
    return (uintptr_t)p - (uintptr_t)s;
}

static IPCRequestEx* ipcAllocReq(void) {
    return (IPCRequestEx*)iosAllocAligned(hid, sizeof(IPCRequestEx), 32);
}

static s32 ipcFree(void* block) {
    iosFree(hid, block);
    return IPC_RESULT_OK;
}

static DECOMP_INLINE s32 __ipcQueueRequest(IPCRequestEx* req) {
    s32 ret = IPC_RESULT_OK;
    s32 waiting;

    waiting =
        (__responses.queued < __responses.sent)
            // Difference of count
            ? __responses.queued - __responses.sent
            // Is queue full?
            : (__responses.queued - __responses.sent) >= IPC_QUEUE_CAPACITY;

    if (waiting != 0) {
        ret = IPC_RESULT_BUSY_INTERNAL;
    } else {
        __responses.queue[__responses.back] = req;
        __responses.back = (__responses.back + 1) % IPC_QUEUE_CAPACITY;
        __responses.queued++;
        IPCiProfQueueReq(req, req->base.fd);
    }

    return ret;
}

static DECOMP_INLINE s32 __ipcSendRequest(void) {
    s32 ret = IPC_RESULT_OK;
    IPCRequestEx* req;
    s32 waiting;

    waiting = (__responses.queued < __responses.sent)
                  // Difference of sent/queued
                  ? __responses.queued - __responses.sent
                  // Are no requests waiting
                  : (__responses.queued - __responses.sent) == 0;

    if (waiting != 0) {
        ret = IPC_RESULT_BUSY_INTERNAL;
    } else {
        req = __responses.queue[__responses.front];
        if (req == NULL) {
            goto exit;
        }

        if (req->reboot) {
            __mailboxAck--;
        }

        IPCWriteReg(IPC_IPC_PPCMSG, (u32)OSCachedToPhysical(req));
        __responses.front = (__responses.front + 1) % IPC_QUEUE_CAPACITY;
        __responses.sent++;
        __mailboxAck--;
        IPCWriteReg(IPC_IPC_PPCCTRL, (IPCReadReg(IPC_IPC_PPCCTRL) & 0x30) | 1);
    }

exit:
    return ret;
}

static void IpcReplyHandler(s32 intr, OSContext* ctx) {
#pragma unused(intr)

    IPCRequestEx* req;
    IPCIoctlvArgs* args;
    u32 reg;
    OSContext temp;
    int i;

    reg = IPCReadReg(IPC_IPC_ARMMSG);
    if (reg != 0) {
        req = (IPCRequestEx*)OSPhysicalToCached(reg);

        IPCWriteReg(IPC_IPC_PPCCTRL, (IPCReadReg(IPC_IPC_PPCCTRL) & 0x30) | 4);
        ACRWriteReg(ACR_PPCIRQFLAG, 0x40000000);
        DCInvalidateRange(&req->base, sizeof(IPCRequest));

        // Not type??
        switch (req->base.fd) {
        case IPC_REQ_READ:
            req->base.rw.data = (req->base.rw.data != NULL)
                                    ? OSPhysicalToCached((u32)req->base.rw.data)
                                    : NULL;

            if (req->base.ret > 0) {
                DCInvalidateRange(req->base.rw.data, req->base.ret);
            }
            break;
        case IPC_REQ_IOCTL:
            req->base.ioctl.out =
                (req->base.ioctl.out != NULL)
                    ? OSPhysicalToCached((u32)req->base.ioctl.out)
                    : NULL;

            DCInvalidateRange(req->base.ioctl.in, req->base.ioctl.inSize);
            DCInvalidateRange(req->base.ioctl.out, req->base.ioctl.outSize);
            break;
        case IPC_REQ_IOCTLV:
            args = &req->base.ioctlv;

            req->base.ioctlv.vectors =
                (req->base.ioctlv.vectors != NULL)
                    ? OSPhysicalToCached((u32)req->base.ioctlv.vectors)
                    : NULL;

            DCInvalidateRange(req->base.ioctlv.vectors,
                              (args->inCount + args->outCount) *
                                  sizeof(IPCIOVector));

            for (i = 0; i < args->inCount + args->outCount; i++) {
                // Just trust me
                i++;
                i--;

                req->base.ioctlv.vectors[i].base =
                    (args->vectors[i].base != NULL)
                        ? OSPhysicalToCached((u32)args->vectors[i].base)
                        : NULL;
                DCInvalidateRange(args->vectors[i].base,
                                  req->base.ioctlv.vectors[i].length);
            }

            if (__relnchFl && __relnchRpc == req) {
                __relnchFl = FALSE;
                if (__mailboxAck < 1) {
                    __mailboxAck++;
                }
            }
            break;
        }

        if (req->callback != NULL) {
            OSClearContext(&temp);
            OSSetCurrentContext(&temp);
            req->callback(req->base.ret, req->callbackArg);
            OSClearContext(&temp);
            OSSetCurrentContext(ctx);
            ipcFree(req);
        } else {
            OSWakeupThread(&req->queue);
        }

        IPCWriteReg(IPC_IPC_PPCCTRL, (IPCReadReg(IPC_IPC_PPCCTRL) & 0x30) | 8);
        IPCiProfReply(req, req->base.fd);
    }
}

static void IpcAckHandler(u8 intr, OSContext* ctx) {
#pragma unused(intr)
#pragma unused(ctx)

    IPCWriteReg(IPC_IPC_PPCCTRL, (IPCReadReg(IPC_IPC_PPCCTRL) & 0x30) | 2);
    ACRWriteReg(ACR_PPCIRQFLAG, 0x40000000);

    if (__mailboxAck < 1) {
        __mailboxAck++;
        IPCiProfAck();
    }

    if (__mailboxAck > 0) {
        if (__relnchFl) {
            __relnchRpc->base.ret = IPC_RESULT_OK;
            __relnchFl = FALSE;
            OSWakeupThread(&__relnchRpc->queue);
            IPCWriteReg(IPC_IPC_PPCCTRL,
                        (IPCReadReg(IPC_IPC_PPCCTRL) & 0x30) | 8);
        }
        __ipcSendRequest();
    }
}

static void IPCInterruptHandler(s32 intr, OSContext* ctx) {
    if ((IPCReadReg(IPC_IPC_PPCCTRL) & 0x14) == 0x14) {
        IpcReplyHandler(intr, ctx);
    }

    if ((IPCReadReg(IPC_IPC_PPCCTRL) & 0x22) == 0x22) {
        IpcAckHandler(intr, ctx);
    }
}

// IPCCltInit: definicion C reemplazada por asm (ver abajo)
s32 IPCCltInit(void);



s32 IPCCltReInit(void) {

    s32 err = 0;
    void* lo;

    lo = IPCGetBufferLo();
    if ((char*)lo + IPC_HEAP_SIZE_OLD > IPCGetBufferHi()) {
        err = IPC_RESULT_ALLOC_FAILED;
    } else {
        hid = iosCreateHeap(lo, IPC_HEAP_SIZE_OLD);
        IPCSetBufferLo((char*)lo + IPC_HEAP_SIZE_OLD);
    }

    return err;
}

static s32 __ios_Ipc1(s32 fd, IPCRequestType type, IPCAsyncCallback callback,
                      void* callbackArg, IPCRequestEx** out) {
    IPCRequest* req;
    s32 ret = IPC_RESULT_OK;

    if (out == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        *out = ipcAllocReq();
        if (*out == NULL) {
            ret = IPC_RESULT_ALLOC_FAILED;
        } else {
            req = &(*out)->base;

            (*out)->callback = callback;
            (*out)->callbackArg = callbackArg;
            (*out)->reboot = FALSE;

            req->type = type;
            req->fd = fd;
        }
    }

    return ret;
}

static s32 __ios_Ipc2(IPCRequestEx* req, IPCAsyncCallback callback) {
    s32 ret = IPC_RESULT_OK;
    BOOL enabled;

    if (req == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        if (callback == NULL) {
            OSInitThreadQueue(&req->queue);
        }
        DCFlushRange(&req->base, sizeof(IPCRequest));

        enabled = OSDisableInterrupts();

        ret = __ipcQueueRequest(req);
        if (ret != IPC_RESULT_OK) {
            OSRestoreInterrupts(enabled);
            if (callback != NULL) {
                ipcFree(req);
            }
        } else {
            if (__mailboxAck > 0) {
                __ipcSendRequest();
            }

            if (callback == NULL) {
                OSSleepThread(&req->queue);
            }

            OSRestoreInterrupts(enabled);

            if (callback == NULL) {
                ret = req->base.ret;
            }
        }
    }

    if (req != NULL && callback == NULL) {
        ipcFree(req);
    }

    return ret;
}

//unused
void __ios_Ipc2WithTimeout(){
}

//unused
void __timeout_cb(){
}

static s32 __ios_Open(IPCRequestEx* req, const char* path, IPCOpenMode mode) {
    s32 ret = IPC_RESULT_OK;

    if (req == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        DCFlushRange(path, strnlen(path, 64) + 1);
        req->base.open.path = (const char*)OSCachedToPhysical(path);
        req->base.open.mode = mode;
    }

    return ret;
}

// IOS_OpenAsync: definicion C reemplazada por asm (ver abajo)
s32 IOS_OpenAsync(const char* path, IPCOpenMode mode, IPCAsyncCallback callback,
                  void* callbackArg);


// IOS_Open: definicion C reemplazada por asm (ver abajo)
s32 IOS_Open(const char* path, IPCOpenMode mode);


//unused
void IOS_OpenWithTimeout(){
}

s32 IOS_CloseAsync(s32 fd, IPCAsyncCallback callback, void* callbackArg) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_CLOSE, callback, callbackArg, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Ipc2(req, callback);
    }

    return ret;
}

s32 IOS_Close(s32 fd) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_CLOSE, NULL, NULL, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Ipc2(req, NULL);
    }

    return ret;
}

//unused
void IOS_CloseWithTimeout(){
}

static s32 __ios_Read(IPCRequestEx* req, void* buf, s32 len) {
    s32 ret = IPC_RESULT_OK;

    if (req == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        DCInvalidateRange(buf, len);
        req->base.rw.data = (buf != NULL) ? OSCachedToPhysical(buf) : NULL;
        req->base.rw.length = len;
    }

    return ret;
}

s32 IOS_ReadAsync(s32 fd, void* buf, s32 len, IPCAsyncCallback callback,
                  void* callbackArg) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_READ, callback, callbackArg, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Read(req, buf, len);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, callback);
        }
    }

    return ret;
}

s32 IOS_Read(s32 fd, void* buf, s32 len) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_READ, NULL, NULL, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Read(req, buf, len);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, NULL);
        }
    }

    return ret;
}

static s32 __ios_Write(IPCRequestEx* req, const void* buf, s32 len) {
    s32 ret = IPC_RESULT_OK;

    if (req == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        req->base.rw.data = (buf != NULL) ? OSCachedToPhysical(buf) : NULL;
        req->base.rw.length = len;
        DCFlushRange(buf, len);
    }

    return ret;
}

s32 IOS_WriteAsync(s32 fd, const void* buf, s32 len, IPCAsyncCallback callback,
                   void* callbackArg) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_WRITE, callback, callbackArg, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Write(req, buf, len);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, callback);
        }
    }

    return ret;
}

s32 IOS_Write(s32 fd, const void* buf, s32 len) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_WRITE, NULL, NULL, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Write(req, buf, len);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, NULL);
        }
    }

    return ret;
}

static s32 __ios_Seek(IPCRequestEx* req, s32 offset, IPCSeekMode mode) {
    s32 ret = IPC_RESULT_OK;

    if (req == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        req->base.seek.offset = offset;
        req->base.seek.mode = mode;
    }

    return ret;
}

s32 IOS_SeekAsync(s32 fd, s32 offset, IPCSeekMode mode,
                  IPCAsyncCallback callback, void* callbackArg) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_SEEK, callback, callbackArg, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Seek(req, offset, mode);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, callback);
        }
    }

    return ret;
}

//unused
s32 IOS_Seek(s32 fd, s32 offset, IPCSeekMode mode) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_SEEK, NULL, NULL, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Seek(req, offset, mode);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, NULL);
        }
    }

    return ret;
}

static s32 __ios_Ioctl(IPCRequestEx* req, s32 type, void* in, s32 inSize,
                       void* out, s32 outSize) {
    s32 ret = IPC_RESULT_OK;

    if (req == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        req->base.ioctl.type = type;
        req->base.ioctl.out = (out != NULL) ? OSCachedToPhysical(out) : NULL;
        req->base.ioctl.outSize = outSize;
        req->base.ioctl.in = (in != NULL) ? OSCachedToPhysical(in) : NULL;
        req->base.ioctl.inSize = inSize;

        DCFlushRange(in, inSize);
        DCFlushRange(out, outSize);
    }

    return ret;
}

s32 IOS_IoctlAsync(s32 fd, s32 type, void* in, s32 inSize, void* out,
                   s32 outSize, IPCAsyncCallback callback, void* callbackArg) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_IOCTL, callback, callbackArg, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Ioctl(req, type, in, inSize, out, outSize);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, callback);
        }
    }

    return ret;
}

s32 IOS_Ioctl(s32 fd, s32 type, void* in, s32 inSize, void* out, s32 outSize) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_IOCTL, NULL, NULL, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Ioctl(req, type, in, inSize, out, outSize);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, NULL);
        }
    }

    return ret;
}

static s32 __ios_Ioctlv(IPCRequestEx* req, s32 type, s32 inCount, s32 outCount,
                        IPCIOVector* vectors) {
    int i;
    s32 ret = IPC_RESULT_OK;

    if (req == NULL) {
        ret = IPC_RESULT_INVALID_INTERNAL;
    } else {
        req->base.ioctlv.type = type;
        req->base.ioctlv.inCount = inCount;
        req->base.ioctlv.outCount = outCount;
        req->base.ioctlv.vectors = vectors;

        for (i = 0; i < req->base.ioctlv.outCount; i++) {
            DCFlushRange(req->base.ioctlv.vectors[inCount + i].base,
                         req->base.ioctlv.vectors[inCount + i].length);

            req->base.ioctlv.vectors[inCount + i].base =
                (req->base.ioctlv.vectors[inCount + i].base != NULL)
                    ? OSCachedToPhysical(
                          req->base.ioctlv.vectors[inCount + i].base)
                    : NULL;
        }

        for (i = 0; i < req->base.ioctlv.inCount; i++) {
            DCFlushRange(req->base.ioctlv.vectors[i].base,
                         req->base.ioctlv.vectors[i].length);

            req->base.ioctlv.vectors[i].base =
                (req->base.ioctlv.vectors[i].base != NULL)
                    ? OSCachedToPhysical(req->base.ioctlv.vectors[i].base)
                    : NULL;
        }

        DCFlushRange(req->base.ioctlv.vectors,
                     (req->base.ioctlv.inCount + req->base.ioctlv.outCount) *
                         sizeof(IPCIOVector));

        req->base.ioctlv.vectors =
            (vectors != NULL) ? OSCachedToPhysical(vectors) : NULL;
    }

    return ret;
}

s32 IOS_IoctlvAsync(s32 fd, s32 type, s32 inCount, s32 outCount,
                    IPCIOVector* vectors, IPCAsyncCallback callback,
                    void* callbackArg) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_IOCTLV, callback, callbackArg, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Ioctlv(req, type, inCount, outCount, vectors);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, callback);
        }
    }

    return ret;
}

s32 IOS_Ioctlv(s32 fd, s32 type, s32 inCount, s32 outCount,
               IPCIOVector* vectors) {
    IPCRequestEx* req;
    s32 ret = __ios_Ipc1(fd, IPC_REQ_IOCTLV, NULL, NULL, &req);
    if (ret == IPC_RESULT_OK) {
        ret = __ios_Ioctlv(req, type, inCount, outCount, vectors);
        if (ret == IPC_RESULT_OK) {
            ret = __ios_Ipc2(req, NULL);
        }
    }

    return ret;
}

s32 IOS_IoctlvReboot(s32 fd, s32 type, s32 inCount, s32 outCount,
                     IPCIOVector* vectors) {
    IPCRequestEx* req;
    BOOL enabled;
    s32 ret;

    enabled = OSDisableInterrupts();

    if(__relnchFl){
         OSRestoreInterrupts(enabled);
        ret = -10;
    }else{
        __relnchFl = TRUE;
        OSRestoreInterrupts(enabled);
        ret = __ios_Ipc1(fd, IPC_REQ_IOCTLV, NULL, NULL, &req);

        if (ret == IPC_RESULT_OK) {
            __relnchRpcSave = req;
            req->reboot = TRUE;
            
            ret = __ios_Ioctlv(req, type, inCount, outCount, vectors);
            if (ret == IPC_RESULT_OK) {
                memcpy(&__rpcBuf,req,sizeof(IPCRequestEx));

                __relnchRpc = &__rpcBuf;

                OSInitThreadQueue(&req->queue);
                DCFlushRange(&req->base, sizeof(IPCRequest));

                enabled = OSDisableInterrupts();
                ret = __ipcQueueRequest(req);
                
                if (ret != IPC_RESULT_OK) {
                    OSRestoreInterrupts(enabled);
                } else {
                    if (__mailboxAck > 0) {
                        __ipcSendRequest();
                    }

                    OSSleepThread(&__relnchRpc->queue);
                    OSRestoreInterrupts(enabled);
                    ret = __relnchRpc->base.ret;
                }
            }
        }

        __relnchFl = FALSE;
        __relnchRpcSave = NULL;

        if (req != NULL && ret) {
            ipcFree(req);
        }

    }

    return ret;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float initialized_654_8049E20C;
s32 IOS_Open(const char* path, IPCOpenMode mode);
s32 IOS_OpenAsync(const char* path, IPCOpenMode mode, IPCAsyncCallback callback,
                  void* callbackArg);
s32 IPCCltInit(void);
extern void IPCInit();
extern void IPCiProfInit();
extern void _restgpr_27();
extern void _savegpr_27();

// asm_to_cpp: IOS_Open
asm s32 IOS_Open(const char* path, IPCOpenMode mode) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addic. r0, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_8030617C
    li r30, -0x4
    b lbl_803061C4
lbl_8030617C:
    lwz r3, hid
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_803061A0
    li r30, -0x16
    b lbl_803061C4
lbl_803061A0:
    li r5, 0x0
    li r0, 0x1
    stw r5, 0x20(r3)
    lwz r4, 0x8(r1)
    stw r5, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r5, 0x8(r3)
lbl_803061C4:
    cmpwi r30, 0x0
    bne lbl_80306240
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_803061E4
    li r30, -0x4
    b lbl_80306228
lbl_803061E4:
    mr r3, r28
    li r4, 0x40
    b lbl_803061F4
lbl_803061F0:
    addi r3, r3, 0x1
lbl_803061F4:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8030620C
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_803061F0
lbl_8030620C:
    subf r4, r28, r3
    mr r3, r28
    addi r4, r4, 0x1
    bl DCFlushRange
    addis r0, r28, 0x8000
    stw r0, 0xc(r31)
    stw r29, 0x10(r31)
lbl_80306228:
    cmpwi r30, 0x0
    bne lbl_80306240
    lwz r3, 0x8(r1)
    li r4, 0x0
    bl __ios_Ipc2
    mr r30, r3
lbl_80306240:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: IOS_OpenAsync
asm s32 IOS_OpenAsync(const char* path, IPCOpenMode mode, IPCAsyncCallback callback,
                  void* callbackArg) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    addic. r0, r1, 0x8
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r31, r6
    li r30, 0x0
    bne lbl_80306064
    li r30, -0x4
    b lbl_803060AC
lbl_80306064:
    lwz r3, hid
    li r4, 0x40
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80306088
    li r30, -0x16
    b lbl_803060AC
lbl_80306088:
    stw r29, 0x20(r3)
    li r5, 0x0
    li r0, 0x1
    lwz r4, 0x8(r1)
    stw r31, 0x24(r4)
    lwz r4, 0x8(r1)
    stw r5, 0x28(r4)
    stw r0, 0x0(r3)
    stw r5, 0x8(r3)
lbl_803060AC:
    cmpwi r30, 0x0
    bne lbl_80306128
    lwz r31, 0x8(r1)
    li r30, 0x0
    cmpwi r31, 0x0
    bne lbl_803060CC
    li r30, -0x4
    b lbl_80306110
lbl_803060CC:
    mr r3, r27
    li r4, 0x40
    b lbl_803060DC
lbl_803060D8:
    addi r3, r3, 0x1
lbl_803060DC:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_803060F4
    cmpwi r4, 0x0
    subi r4, r4, 0x1
    bne lbl_803060D8
lbl_803060F4:
    subf r4, r27, r3
    mr r3, r27
    addi r4, r4, 0x1
    bl DCFlushRange
    addis r0, r27, 0x8000
    stw r0, 0xc(r31)
    stw r28, 0x10(r31)
lbl_80306110:
    cmpwi r30, 0x0
    bne lbl_80306128
    lwz r3, 0x8(r1)
    mr r4, r29
    bl __ios_Ipc2
    mr r30, r3
lbl_80306128:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: IPCCltInit
asm s32 IPCCltInit(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, initialized_654_8049E20C
    stw r31, 0x1c(r1)
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    bne lbl_80305D58
    li r0, 0x1
    stw r0, initialized_654_8049E20C
    bl IPCInit
    bl IPCGetBufferLo
    mr r29, r3
    addi r31, r3, 0x1000
    bl IPCGetBufferHi
    cmplw r31, r3
    ble lbl_80305D18
    li r30, -0x16
    b lbl_80305D58
lbl_80305D18:
    mr r3, r29
    li r4, 0x1000
    bl iosCreateHeap
    stw r3, hid
    mr r3, r31
    bl IPCSetBufferLo
    lis r4, IPCInterruptHandler@ha
    li r3, 0x1b
    addi r4, r4, IPCInterruptHandler@l
    bl __OSSetInterruptHandler
    li r3, 0x10
    bl __OSUnmaskInterrupts
    li r3, 0x1
    li r4, 0x38
    bl IPCWriteReg
    bl IPCiProfInit
lbl_80305D58:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
