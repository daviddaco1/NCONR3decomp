/**
 * Modified from decompilation by riidefi in WiiCore
 */

#include <revolution/OS/OSError.h>

#include <revolution/ARC.h>

#include <ctype.h>

#define ARC_FILE_MAGIC 0x55AA382D

#define ARCNodeIsFolder(node) ((node).packed_type_name & 0xFF000000)
#define ARCNodeGetName(node) ((node).packed_type_name & 0x00FFFFFF)

typedef struct ARCNode {
    union {
        struct {
            u32 is_folder : 8;
            u32 name : 24;
        };
        u32 packed_type_name;
    }; // at 0x0

    union {
        struct {
            u32 offset;
            u32 size;
        } file;

        struct {
            u32 parent;
            u32 sibling_next;
        } folder;
    }; // at 0x4
} ARCNode;

typedef struct ARCHeader {
    u32 magic; // at 0x0

    struct {
        s32 offset; // at 0x4
        s32 size;   // at 0x8
    } nodes;

    struct {
        s32 offset; // at 0xC
    } files;

    char UNK_0x10[0x10];
} ARCHeader;

static u32 entryToPath(ARCHandle* handle, u32 entrynum, char* string,
                       u32 maxlen);

static BOOL isSame(const char* lhs, const char* rhs) {
    while (rhs[0] != '\0') {
        if (tolower(*lhs++) != tolower(*rhs++))
            return FALSE;
    }

    if (lhs[0] == '/' || lhs[0] == '\0') {
        return TRUE;
    }

    return FALSE;
}

static u32 myStrncpy(char* dst, char* src, u32 maxlen) {
    u32 i;
    for (i = maxlen; i != 0 && src[0] != '\0'; --i) {
        *dst++ = *src++;
    }

    return maxlen - i;
}

static BOOL ARCConvertEntrynumToPath(ARCHandle* handle, s32 entrynum,
                                     char* string, u32 maxlen) {
    ARCNode* nodes = handle->FSTStart;
    u32 written = entryToPath(handle, entrynum, string, maxlen);

    if (written == maxlen) {
        string[maxlen - 1] = '\0';
        return FALSE;
    }

    if (ARCNodeIsFolder(nodes[entrynum])) {
        if (written == maxlen - 1) {
            string[written] = '\0';
            return FALSE;
        }

        string[written++] = '/';
    }

    string[written] = '\0';
    return TRUE;
}

BOOL ARCGetCurrentDir(ARCHandle* handle, char* string, u32 maxlen) {
    return ARCConvertEntrynumToPath(handle, handle->currDir, string, maxlen);
}

// ARCInitHandle: definicion C reemplazada por asm (ver abajo)


BOOL ARCOpen(ARCHandle* handle, const char* path, ARCFileInfo* info) {
    ARCNode* nodes = handle->FSTStart;
    s32 entrynum = ARCConvertPathToEntrynum(handle, path);

    if (entrynum < 0) {
        char dir[128];
        ARCGetCurrentDir(handle, dir, sizeof(dir));

        OSReport("Warning: ARCOpen(): file '%s' was not found under %s in the "
                 "archive.\n",
                 path, dir);

        return FALSE;
    }

    if (entrynum < 0 || ARCNodeIsFolder(nodes[entrynum])) {
        return FALSE;
    }

    info->handle = handle;
    info->startOffset = nodes[entrynum].file.offset;
    info->length = nodes[entrynum].file.size;
    return TRUE;
}

BOOL ARCFastOpen(ARCHandle* handle, s32 entrynum, ARCFileInfo* info) {
    ARCNode* nodes = handle->FSTStart;

    if (entrynum < 0 || entrynum >= handle->entryNum ||
        ARCNodeIsFolder(nodes[entrynum])) {
        return FALSE;
    }

    info->handle = handle;
    info->startOffset = nodes[entrynum].file.offset;
    info->length = nodes[entrynum].file.size;

    return TRUE;
}

// ARCConvertPathToEntrynum: definicion C reemplazada por asm (ver abajo)


//unused
void ARCEntrynumIsDir(){
}

// entryToPath: definicion C reemplazada por asm (ver abajo)


void* ARCGetStartAddrInMem(ARCFileInfo* info) {
    return (u8*)info->handle->archiveStartAddr + info->startOffset;
}

// ARCGetStartOffset: definicion C reemplazada por asm (ver abajo)


// ARCGetLength: definicion C reemplazada por asm (ver abajo)


BOOL ARCClose(ARCFileInfo* info) {
#pragma unused(info)

    return TRUE;
}

BOOL ARCChangeDir(ARCHandle* handle, const char* path) {
    s32 entrynum = ARCConvertPathToEntrynum(handle, path);
    ARCNode* nodes = handle->FSTStart;

    if (entrynum < 0 || !ARCNodeIsFolder(nodes[entrynum])) {
        return FALSE;
    }

    handle->currDir = entrynum;
    return TRUE;
}

BOOL ARCOpenDir(ARCHandle* handle, const char* path, ARCDir* dir) {
    s32 entrynum = ARCConvertPathToEntrynum(handle, path);
    ARCNode* nodes = handle->FSTStart;

    if (entrynum < 0 || !ARCNodeIsFolder(nodes[entrynum])) {
        return FALSE;
    }

    dir->handle = handle;
    dir->entryNum = entrynum;
    dir->location = entrynum + 1;
    dir->next = nodes[entrynum].folder.sibling_next;
    return TRUE;
}

// ARCReadDir: definicion C reemplazada por asm (ver abajo)


BOOL ARCCloseDir(ARCDir* dir) {
#pragma unused(dir)

    return TRUE;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049CF28;
extern u8 lbl_8035FBD8[];
extern u8 lbl_8036F308[];
extern u8 lbl_8036F32C[];
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_8029B248();
extern void fn_8029B4EC();
u32 fn_8029B968(u32 *arg0);

// asm_to_cpp: ARCInitHandle
asm BOOL ARCInitHandle(void* bin, ARCHandle* handle) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x0(r3)
    subis r0, r5, 0x55aa
    cmplwi r0, 0x382d
    beq lbl_8029B1EC
    lis r5, lbl_8036F308@ha
    la r3, lbl_8049CF28
    addi r5, r5, lbl_8036F308@l
    li r4, 0x4a
    opword 0x4CC63182
    bl OSPanic
lbl_8029B1EC:
    stw r30, 0x0(r31)
    li r0, 0x0
    li r3, 0x1
    lwz r4, 0x4(r30)
    add r6, r30, r4
    stw r6, 0x4(r31)
    lwz r4, 0xc(r30)
    add r4, r30, r4
    stw r4, 0x8(r31)
    lwz r5, 0x8(r6)
    mulli r4, r5, 0xc
    stw r5, 0xc(r31)
    add r4, r6, r4
    stw r4, 0x10(r31)
    lwz r4, 0x8(r30)
    stw r4, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8029B248
asm void fn_8029B248() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_26
    lwz r28, 0x4(r3)
    mr r26, r3
    mr r27, r4
    mr r29, r5
    bl ARCConvertPathToEntrynum
    cmpwi r3, 0x0
    bge lbl_8029B49C
    lwz r29, 0x18(r26)
    lwz r28, 0x4(r26)
    cmpwi r29, 0x0
    bne lbl_8029B290
    li r4, 0x0
    b lbl_8029B424
lbl_8029B290:
    mulli r0, r29, 0xc
    lwz r7, 0x10(r26)
    add r3, r28, r0
    lwzx r0, r28, r0
    lwz r3, 0x4(r3)
    clrlwi r0, r0, 8
    cmpwi r3, 0x0
    add r30, r7, r0
    bne lbl_8029B2BC
    li r4, 0x0
    b lbl_8029B3C8
lbl_8029B2BC:
    mulli r0, r3, 0xc
    add r3, r28, r0
    lwzx r0, r28, r0
    lwz r3, 0x4(r3)
    clrlwi r0, r0, 8
    cmpwi r3, 0x0
    add r31, r7, r0
    bne lbl_8029B2E4
    li r4, 0x0
    b lbl_8029B36C
lbl_8029B2E4:
    mulli r4, r3, 0xc
    mr r3, r26
    addi r5, r1, 0x8
    li r6, 0x80
    lwzx r0, r28, r4
    add r4, r28, r4
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    add r26, r7, r0
    bl entryToPath
    cmplwi r3, 0x80
    mr r4, r3
    bne lbl_8029B31C
    b lbl_8029B36C
lbl_8029B31C:
    addi r4, r3, 0x1
    addi r5, r1, 0x8
    li r0, 0x2f
    stbx r0, r5, r3
    subfic r6, r4, 0x80
    mr r3, r6
    add r5, r5, r4
    b lbl_8029B350
lbl_8029B33C:
    lbz r0, 0x0(r26)
    subi r3, r3, 0x1
    addi r26, r26, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
lbl_8029B350:
    cmpwi r3, 0x0
    beq lbl_8029B364
    lbz r0, 0x0(r26)
    extsb. r0, r0
    bne lbl_8029B33C
lbl_8029B364:
    subf r0, r3, r6
    add r4, r4, r0
lbl_8029B36C:
    cmplwi r4, 0x80
    bne lbl_8029B378
    b lbl_8029B3C8
lbl_8029B378:
    addi r5, r4, 0x1
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    subfic r6, r5, 0x80
    mr r4, r6
    add r3, r3, r5
    b lbl_8029B3AC
lbl_8029B398:
    lbz r0, 0x0(r31)
    subi r4, r4, 0x1
    addi r31, r31, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_8029B3AC:
    cmpwi r4, 0x0
    beq lbl_8029B3C0
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_8029B398
lbl_8029B3C0:
    subf r0, r4, r6
    add r4, r5, r0
lbl_8029B3C8:
    cmplwi r4, 0x80
    bne lbl_8029B3D4
    b lbl_8029B424
lbl_8029B3D4:
    addi r5, r4, 0x1
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    subfic r6, r5, 0x80
    mr r4, r6
    add r3, r3, r5
    b lbl_8029B408
lbl_8029B3F4:
    lbz r0, 0x0(r30)
    subi r4, r4, 0x1
    addi r30, r30, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_8029B408:
    cmpwi r4, 0x0
    beq lbl_8029B41C
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_8029B3F4
lbl_8029B41C:
    subf r0, r4, r6
    add r4, r5, r0
lbl_8029B424:
    cmplwi r4, 0x80
    bne lbl_8029B438
    li r0, 0x0
    stb r0, 0x87(r1)
    b lbl_8029B47C
lbl_8029B438:
    mulli r0, r29, 0xc
    lwzx r0, r28, r0
    clrrwi. r0, r0, 24
    beq lbl_8029B470
    cmplwi r4, 0x7f
    bne lbl_8029B460
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r4
    b lbl_8029B47C
lbl_8029B460:
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    addi r4, r4, 0x1
lbl_8029B470:
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r4
lbl_8029B47C:
    lis r3, lbl_8036F32C@ha
    mr r4, r27
    addi r3, r3, lbl_8036F32C@l
    addi r5, r1, 0x8
    opword 0x4CC63182
    bl OSReport
    li r3, 0x0
    b lbl_8029B4D4
lbl_8029B49C:
    blt lbl_8029B4B0
    mulli r3, r3, 0xc
    lwzx r0, r28, r3
    clrrwi. r0, r0, 24
    beq lbl_8029B4B8
lbl_8029B4B0:
    li r3, 0x0
    b lbl_8029B4D4
lbl_8029B4B8:
    stw r26, 0x0(r29)
    add r4, r28, r3
    li r3, 0x1
    lwz r0, 0x4(r4)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r29)
lbl_8029B4D4:
    addi r11, r1, 0xa0
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_8029B4EC
asm void fn_8029B4EC() {
    nofralloc
    cmpwi r4, 0x0
    lwz r6, 0x4(r3)
    blt lbl_8029B514
    lwz r0, 0xc(r3)
    cmplw r4, r0
    bge lbl_8029B514
    mulli r4, r4, 0xc
    lwzx r0, r6, r4
    clrrwi. r0, r0, 24
    beq lbl_8029B51C
lbl_8029B514:
    li r3, 0x0
    blr
lbl_8029B51C:
    stw r3, 0x0(r5)
    add r4, r6, r4
    li r3, 0x1
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    blr
}

// asm_to_cpp: ARCConvertPathToEntrynum
asm s32 ARCConvertPathToEntrynum(ARCHandle* handle, const char* path) {
    nofralloc
    stwu r1, -0x10(r1)
    lis r5, lbl_8035FBD8@ha
    addi r5, r5, lbl_8035FBD8@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r8, 0x18(r3)
    lwz r9, 0x4(r3)
    lwz r6, 0x38(r5)
lbl_8029B55C:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_8029B570
    mr r3, r8
    b lbl_8029B790
lbl_8029B570:
    cmpwi r0, 0x2f
    bne lbl_8029B584
    li r8, 0x0
    addi r4, r4, 0x1
    b lbl_8029B55C
lbl_8029B584:
    cmpwi r0, 0x2e
    bne lbl_8029B5F8
    lbz r0, 0x1(r4)
    extsb r0, r0
    cmpwi r0, 0x2e
    bne lbl_8029B5D8
    lbz r0, 0x2(r4)
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_8029B5C0
    mulli r0, r8, 0xc
    addi r4, r4, 0x3
    add r5, r9, r0
    lwz r8, 0x4(r5)
    b lbl_8029B55C
lbl_8029B5C0:
    cmpwi r0, 0x0
    bne lbl_8029B5F8
    mulli r0, r8, 0xc
    add r3, r9, r0
    lwz r3, 0x4(r3)
    b lbl_8029B790
lbl_8029B5D8:
    cmpwi r0, 0x2f
    bne lbl_8029B5E8
    addi r4, r4, 0x2
    b lbl_8029B55C
lbl_8029B5E8:
    cmpwi r0, 0x0
    bne lbl_8029B5F8
    mr r3, r8
    b lbl_8029B790
lbl_8029B5F8:
    mr r7, r4
    b lbl_8029B604
lbl_8029B600:
    addi r7, r7, 0x1
lbl_8029B604:
    lbz r5, 0x0(r7)
    extsb. r0, r5
    beq lbl_8029B618
    cmpwi r0, 0x2f
    bne lbl_8029B600
lbl_8029B618:
    mulli r0, r8, 0xc
    extsb r11, r5
    subf r7, r4, r7
    neg r10, r11
    add r5, r9, r0
    addi r8, r8, 0x1
    or r0, r10, r11
    lwz r5, 0x8(r5)
    srwi r0, r0, 31
    b lbl_8029B764
lbl_8029B640:
    mulli r10, r8, 0xc
    add r12, r9, r10
lbl_8029B648:
    lwz r31, 0x0(r12)
    clrrwi. r10, r31, 24
    bne lbl_8029B65C
    cmpwi r0, 0x1
    beq lbl_8029B744
lbl_8029B65C:
    lwz r11, 0x10(r3)
    clrlwi r10, r31, 8
    add r30, r11, r10
    lbzx r10, r11, r10
    cmpwi r10, 0x2e
    bne lbl_8029B68C
    lbz r10, 0x1(r30)
    extsb. r10, r10
    bne lbl_8029B68C
    addi r12, r12, 0xc
    addi r8, r8, 0x1
    b lbl_8029B648
lbl_8029B68C:
    mr r12, r4
    b lbl_8029B70C
lbl_8029B694:
    lbz r11, 0x0(r30)
    li r10, 0x0
    addi r30, r30, 0x1
    extsb. r31, r11
    blt lbl_8029B6B0
    cmpwi r31, 0x100
    blt lbl_8029B6B4
lbl_8029B6B0:
    li r10, 0x1
lbl_8029B6B4:
    cmpwi r10, 0x0
    beq lbl_8029B6C0
    b lbl_8029B6C8
lbl_8029B6C0:
    lwz r10, 0x10(r6)
    lbzx r31, r10, r31
lbl_8029B6C8:
    lbz r11, 0x0(r12)
    li r10, 0x0
    addi r12, r12, 0x1
    extsb. r11, r11
    blt lbl_8029B6E4
    cmpwi r11, 0x100
    blt lbl_8029B6E8
lbl_8029B6E4:
    li r10, 0x1
lbl_8029B6E8:
    cmpwi r10, 0x0
    beq lbl_8029B6F4
    b lbl_8029B6FC
lbl_8029B6F4:
    lwz r10, 0x10(r6)
    lbzx r11, r10, r11
lbl_8029B6FC:
    cmpw r11, r31
    beq lbl_8029B70C
    li r10, 0x0
    b lbl_8029B73C
lbl_8029B70C:
    lbz r10, 0x0(r30)
    extsb. r10, r10
    bne lbl_8029B694
    lbz r10, 0x0(r12)
    extsb r10, r10
    cmpwi r10, 0x2f
    beq lbl_8029B730
    cmpwi r10, 0x0
    bne lbl_8029B738
lbl_8029B730:
    li r10, 0x1
    b lbl_8029B73C
lbl_8029B738:
    li r10, 0x0
lbl_8029B73C:
    cmpwi r10, 0x1
    beq lbl_8029B774
lbl_8029B744:
    mulli r10, r8, 0xc
    add r11, r9, r10
    lwzx r10, r9, r10
    clrrwi. r10, r10, 24
    beq lbl_8029B760
    lwz r8, 0x8(r11)
    b lbl_8029B764
lbl_8029B760:
    addi r8, r8, 0x1
lbl_8029B764:
    cmplw r8, r5
    blt lbl_8029B640
    li r3, -0x1
    b lbl_8029B790
lbl_8029B774:
    cmpwi r0, 0x0
    bne lbl_8029B784
    mr r3, r8
    b lbl_8029B790
lbl_8029B784:
    add r4, r7, r4
    addi r4, r4, 0x1
    b lbl_8029B55C
lbl_8029B790:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: entryToPath
asm static u32 entryToPath(ARCHandle* handle, u32 entrynum, char* string,
                       u32 maxlen) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    lwz r7, 0x4(r3)
    mr r28, r5
    mr r29, r6
    bne lbl_8029B7D0
    li r3, 0x0
    b lbl_8029B950
lbl_8029B7D0:
    mulli r0, r4, 0xc
    lwz r8, 0x10(r3)
    add r4, r7, r0
    lwzx r0, r7, r0
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    cmpwi r4, 0x0
    add r30, r8, r0
    bne lbl_8029B7FC
    li r4, 0x0
    b lbl_8029B8F4
lbl_8029B7FC:
    mulli r0, r4, 0xc
    add r4, r7, r0
    lwzx r0, r7, r0
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    cmpwi r4, 0x0
    add r31, r8, r0
    bne lbl_8029B824
    li r4, 0x0
    b lbl_8029B89C
lbl_8029B824:
    mulli r4, r4, 0xc
    lwzx r0, r7, r4
    add r4, r7, r4
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    add r27, r8, r0
    bl entryToPath
    cmplw r3, r29
    mr r4, r3
    bne lbl_8029B850
    b lbl_8029B89C
lbl_8029B850:
    addi r4, r3, 0x1
    li r0, 0x2f
    subf r6, r4, r29
    stbx r0, r28, r3
    add r3, r28, r4
    mr r5, r6
    b lbl_8029B880
lbl_8029B86C:
    lbz r0, 0x0(r27)
    subi r5, r5, 0x1
    addi r27, r27, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_8029B880:
    cmpwi r5, 0x0
    beq lbl_8029B894
    lbz r0, 0x0(r27)
    extsb. r0, r0
    bne lbl_8029B86C
lbl_8029B894:
    subf r0, r5, r6
    add r4, r4, r0
lbl_8029B89C:
    cmplw r4, r29
    bne lbl_8029B8A8
    b lbl_8029B8F4
lbl_8029B8A8:
    addi r3, r4, 0x1
    li r0, 0x2f
    subf r6, r3, r29
    stbx r0, r28, r4
    add r4, r28, r3
    mr r5, r6
    b lbl_8029B8D8
lbl_8029B8C4:
    lbz r0, 0x0(r31)
    subi r5, r5, 0x1
    addi r31, r31, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_8029B8D8:
    cmpwi r5, 0x0
    beq lbl_8029B8EC
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_8029B8C4
lbl_8029B8EC:
    subf r0, r5, r6
    add r4, r3, r0
lbl_8029B8F4:
    cmplw r4, r29
    bne lbl_8029B904
    mr r3, r4
    b lbl_8029B950
lbl_8029B904:
    addi r6, r4, 0x1
    li r0, 0x2f
    subf r5, r6, r29
    stbx r0, r28, r4
    add r3, r28, r6
    mr r4, r5
    b lbl_8029B934
lbl_8029B920:
    lbz r0, 0x0(r30)
    subi r4, r4, 0x1
    addi r30, r30, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_8029B934:
    cmpwi r4, 0x0
    beq lbl_8029B948
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_8029B920
lbl_8029B948:
    subf r0, r4, r5
    add r3, r6, r0
lbl_8029B950:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

#pragma dont_inline on
u32 fn_8029B968(u32 *arg0) {
    return *(u32 *)arg0[0] + arg0[1];
}

u32 ARCGetStartOffset(ARCFileInfo* info) {
    return info->length;
}

u32 ARCGetLength(ARCFileInfo* info) {
    return 1;
}
#pragma dont_inline reset

// asm_to_cpp: ARCReadDir
asm BOOL ARCReadDir(ARCDir* dir, ARCDirEntry* entry) {
    nofralloc
    lwz r7, 0x8(r3)
    lwz r9, 0x0(r3)
    mulli r0, r7, 0xc
    lwz r8, 0x4(r9)
    add r6, r8, r0
lbl_8029BA74:
    lwz r0, 0x4(r3)
    cmplw r7, r0
    ble lbl_8029BA8C
    lwz r0, 0xc(r3)
    cmplw r0, r7
    bgt lbl_8029BA94
lbl_8029BA8C:
    li r3, 0x0
    blr
lbl_8029BA94:
    stw r9, 0x0(r4)
    stw r7, 0x4(r4)
    lwz r0, 0x0(r6)
    clrrwi r5, r0, 24
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    stw r0, 0x8(r4)
    lwz r0, 0x0(r6)
    lwz r5, 0x10(r9)
    clrlwi r0, r0, 8
    add r5, r5, r0
    stw r5, 0xc(r4)
    lbz r0, 0x0(r5)
    cmpwi r0, 0x2e
    bne lbl_8029BAEC
    lbz r0, 0x1(r5)
    extsb. r0, r0
    bne lbl_8029BAEC
    addi r6, r6, 0xc
    addi r7, r7, 0x1
    b lbl_8029BA74
lbl_8029BAEC:
    mulli r4, r7, 0xc
    lwzx r0, r8, r4
    clrrwi. r0, r0, 24
    beq lbl_8029BB08
    add r4, r8, r4
    lwz r0, 0x8(r4)
    b lbl_8029BB0C
lbl_8029BB08:
    addi r0, r7, 0x1
lbl_8029BB0C:
    stw r0, 0x8(r3)
    li r3, 0x1
    blr
}
