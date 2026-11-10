#include "rvlArchive.h"
#include "binary_format.h" // rvlArchiveHeader
#include <ctype.h>         // tolower

bool __rvlGetCurrentPath(rvlArchive* self, char* string, u32 capacity);

// pData must be nonconst
bool ARCInitHandle(void* pData, rvlArchive* pOut) {
  expects(pData != nullptr && pOut != nullptr);

  const rvlArchiveHeader* pHeader = (rvlArchiveHeader*)pData;
  if (!rvlArchiveHeaderVerify(pHeader))
    ARCHIVE_THROW_INVALID_HEADER();

  pOut->mHeader = pData;

  const rvlArchiveNode* nodes = rvlArchiveHeaderGetNodes(pHeader);
  pOut->mNodes = nodes;

  pOut->mFileData = rvlArchiveHeaderGetFileData(pHeader);
  // The right bound of the root node is the number of nodes
  pOut->mCount = nodes[0].folder.sibling_next;
  // Strings exist directly after the last node.
  pOut->mStrings = (const char*)(nodes + pOut->mCount);
  pOut->mFstSize = (u32)pHeader->nodes.size;
  pOut->mCurrentPath = 0;

  return true;
}

int ARCOpen(const rvlArchive* self, const char* path, rvlArchiveFile* pOut) {
  expects(self != nullptr && path != nullptr && pOut != nullptr);

  const rvlArchiveNode* nodes = self->mNodes;
  const s32 resolved = ARCConvertPathToEntrynum((rvlArchive*)self, path);

  if (!rvlArchiveEntryHandleIsValid(resolved)) {
    char current_path[128];

    __rvlGetCurrentPath((rvlArchive*)self, current_path, sizeof(current_path));
    ARCHIVE_LOG_FILE_NOT_FOUND(path, current_path);

    return false;
  }

  if (!rvlArchiveEntryHandleIsValid(resolved) ||
      rvlArchiveNodeIsFolder(nodes[resolved])) {
    return false;
  }

  pOut->parent = (rvlArchive*)self;
  pOut->offset = nodes[resolved].file.offset;
  pOut->size = nodes[resolved].file.size;
  return true;
}

int ARCFastOpen(const rvlArchive* self, s32 resolved, rvlArchiveFile* pOut) {
  expects(self != nullptr && pOut != nullptr);

  const rvlArchiveNode* nodes = self->mNodes;

  // Although resolve will never return a handle beyond the node count,
  // the user may, so an additional check is needed.
  if (!rvlArchiveEntryHandleIsValid(resolved) || resolved >= self->mCount ||
      rvlArchiveNodeIsFolder(nodes[resolved])) {
    return false;
  }

  pOut->parent = (rvlArchive*)self;
  pOut->offset = nodes[resolved].file.offset;
  pOut->size = nodes[resolved].file.size;

  return true;
}

// seen in debug builds as a standalone function
inline int __rvlPathCompare(const char* lhs, const char* rhs) {
  while (rhs[0] != '\0') {
    if (tolower(*lhs++) != tolower(*rhs++))
      return false;
  }

  if (lhs[0] == '/' || lhs[0] == '\0')
    return true;

  return false;
}

inline u32 __rvlPathCopy(char* dst, char* src, u32 capacity) {
  u32 i;
  for (i = capacity; i != 0 && src[0] != '\0'; --i)
    *dst++ = *src++;

  return capacity - i;
}

s32 ARCConvertPathToEntrynum(rvlArchive* self, const char* path) {
  s32 name_length;                                       // r7
  u32 it = self->mCurrentPath;                           // r8
  rvlArchiveNode* nodes = (rvlArchiveNode*)self->mNodes; // r9

  while (true) {
    // End of string -> return what we have
    if (path[0] == '\0')
      return it;

    // Ignore initial slash: /Path/File vs Path/File
    if (path[0] == '/') {
      it = 0;
      ++path;
      continue;
    }

    // Handle special cases:
    // -../-, -.., -./-, -.
    if (path[0] == '.') {
      if (path[1] == '.') {
        // Seek to parent ../
        if (path[2] == '/') {
          it = nodes[it].folder.parent;
          path += 3;
          continue;
        }
        // Return parent folder immediately
        if (path[2] == '\0')
          return nodes[it].folder.parent;
        // Malformed: fall through, causing infinite loop
        goto compare;
      }

      // "." directory does nothing
      if (path[1] == '/') {
        path += 2;
        continue;
      }

      // Ignore trailing dot
      if (path[1] == '\0')
        return it;
    }

  compare:
    // We've ensured the directory is not special.
    // Isolate the name of the current item in the path string.
    const char* name_end = path;
    while (name_end[0] != '\0' && name_end[0] != '/')
      ++name_end;

    // If the name was delimited by a '/' rather than truncated.
    // This must be expressed as a ternary, and an enum cannot be used..
    int name_delimited_by_slash = (name_end[0] != '\0') ? 1 : 0;
    name_length = name_end - path;

    // Traverse all children of the parent.
    const u32 anchor = it;
    ++it;
    while (it < nodes[anchor].folder.sibling_next) {
      while (true) {
        if (rvlArchiveNodeIsFolder(nodes[it]) ||
            name_delimited_by_slash != true) {
          char* name_of_it =
              ((char*)self->mStrings) + rvlArchiveNodeGetName(nodes[it]);

          // Skip empty directories
          if (name_of_it[0] == '.' && name_of_it[1] == '\0') {
            ++it;
            continue;
          }

          // Advance to the next item in the path
          if (__rvlPathCompare(path, name_of_it) == true) {
            goto descend;
          }
        }

        if (rvlArchiveNodeIsFolder(nodes[it])) {
          it = nodes[it].folder.sibling_next;
          break;
        }

        ++it;
        break;
      }
    }

    return -1;

  descend:
    // If the path was truncated, there is nowhere else to go
    // These basic blocks have to go here right at the end, accessed via a goto.
    // An odd choice.
    if (!name_delimited_by_slash)
      return it;

    path += name_length + 1;
  }
}

static u32 __rvlMakePathRecursive(rvlArchive* self, u32 resolved, char* string,
                                  u32 capacity) {
  rvlArchiveNode* nodes = (rvlArchiveNode*)self->mNodes;

  if (resolved == 0)
    return 0;

  char* name = ((char*)self->mStrings) + nodes[resolved].name;

  u32 written = __rvlMakePathRecursive(self, nodes[resolved].folder.parent,
                                       string, capacity);

  if (written == capacity)
    return written;

  string[written++] = '/';
  return written + __rvlPathCopy(string + written, name, capacity - written);
}

inline bool __rvlMakePath(rvlArchive* self, s32 resolved, char* string,
                          u32 capacity) {
  rvlArchiveNode* nodes = (rvlArchiveNode*)self->mNodes;

  u32 written = __rvlMakePathRecursive(self, resolved, string, capacity);
  if (written == capacity) {
    string[capacity - 1] = '\0';
    return false;
  }

  if (rvlArchiveNodeIsFolder(nodes[resolved])) {
    if (written == capacity - 1) {
      string[written] = '\0';
      return false;
    }

    string[written++] = '/';
  }

  string[written] = '\0';
  return true;
}

inline bool __rvlGetCurrentPath(rvlArchive* self, char* string, u32 capacity) {
  return __rvlMakePath(self, self->mCurrentPath, string, capacity);
}

void* ARCGetStartAddrInMem(rvlArchiveFile* self) {
  return (char*)(self->parent->mHeader) + self->offset;
}

// ARCGetStartOffset: definicion C reemplazada por asm (ver abajo)
s32 ARCGetStartOffset(const rvlArchiveFile* self);


// ARCGetLength: definicion C reemplazada por asm (ver abajo)
u32 ARCGetLength(const rvlArchiveFile* self);


bool ARCClose(rvlArchiveFile* self) { return true; }

bool ARCChangeDir(rvlArchive* self, const char* path) {
  const s32 resolved = ARCConvertPathToEntrynum((rvlArchive*)self, path);
  rvlArchiveNode* nodes = (rvlArchiveNode*)self->mNodes;

  if (!rvlArchiveEntryHandleIsValid(resolved) ||
      !rvlArchiveNodeIsFolder(nodes[resolved]))
    return false;

  self->mCurrentPath = resolved;
  return true;
}

bool ARCOpenDir(const rvlArchive* self, const char* path,
                rvlArchiveFolderRange* pOut) {
  const s32 resolved = ARCConvertPathToEntrynum((rvlArchive*)self, path);
  const rvlArchiveNode* nodes = self->mNodes;

  if (resolved < 0 || (nodes[resolved].packed_type_name & 0xff000000) == 0)
    return false;

  pOut->parent = (rvlArchive*)self;
  pOut->path_begin = resolved;
  pOut->path_it = resolved + 1;
  pOut->path_end = nodes[resolved].folder.sibling_next;
  return true;
}

bool ARCReadDir(rvlArchiveFolderRange* self, rvlArchiveEntry* pOut) {
  expects(self->parent != nullptr);

  u32 it;                // regalloc fun!
  rvlArchiveNode* nodes; // this must not be const lest regalloc change and the
                         // function grow in size

  rvlArchive* arc = self->parent;
  nodes = (rvlArchiveNode*)arc->mNodes;

  it = self->path_it;

  // while (A) produces a nop
  while (true) {
    if (it <= self->path_begin || self->path_end <= it)
      return false;

    pOut->parent = arc;
    pOut->path = it;
    // All non-file entries are folders.
    // Collapse to one specific value.
    pOut->node_type = rvlArchiveNodeIsFolder(nodes[it]) //
                          ? RVL_ARCHIVE_FOLDER
                          : RVL_ARCHIVE_FILE;
    pOut->name = arc->mStrings + nodes[it].name;

    // skip '.' directories
    if (pOut->name[0] == '.' && pOut->name[1] == '\0') {
      ++it;
      continue;
    }

    self->path_it = rvlArchiveNodeIsFolder(nodes[it]) //
                        ? nodes[it].folder.sibling_next
                        : it + 1;
    return true;
  }
}

bool ARCCloseDir(rvlArchiveFolderRange* self) { return true; }

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_8036F32C[];
u32 ARCGetLength(const rvlArchiveFile* self);
s32 ARCGetStartOffset(const rvlArchiveFile* self);
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern int entryToPath();
extern int fn_8029B248();
extern int fn_8029B4EC();
extern int fn_8029B968();

// asm_to_cpp: ARCGetLength
asm u32 ARCGetLength(const rvlArchiveFile* self) {
    nofralloc
    li r3, 0x1
    blr
}

// asm_to_cpp: ARCGetStartOffset
asm s32 ARCGetStartOffset(const rvlArchiveFile* self) {
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

// asm_to_cpp: entryToPath
asm int entryToPath() {
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

// asm_to_cpp: fn_8029B248
asm int fn_8029B248() {
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
asm int fn_8029B4EC() {
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

// asm_to_cpp: fn_8029B968
asm int fn_8029B968() {
    nofralloc
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r4)
    add r3, r3, r0
    blr
}
