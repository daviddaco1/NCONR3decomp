#include <types.h>

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/FILE_POS.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/buffer_io.h"
#include <errno.h>

int _ftell(FILE* file)
{
    int charsInUndoBuffer = 0;
    int position;

    u8 tmp_kind = file->mode.file_kind;
    if (!(tmp_kind == __disk_file || tmp_kind == __console_file) || file->state.error) {
        errno = EFPOS;
        return -1;
    }

    if (file->state.io_state == __neutral)
        return (file->position);

    position = file->buffer_pos + (file->buffer_ptr - file->buffer);

    if (file->state.io_state >= __rereading) {
        charsInUndoBuffer = file->state.io_state - __rereading + 1;
        position -= charsInUndoBuffer;
    }

    if (!file->mode.binary_io) {
        int n = file->buffer_ptr - file->buffer - charsInUndoBuffer;
        u8* p = (u8*)file->buffer;

        while (n--)
            if (*p++ == '\n')
                position++;
    }

    return (position);
}

int ftell(FILE* stream)
{
    int retval;

    retval = (long)_ftell(stream);
    return retval;
}

//unused
void fgetpos(){
}

int _fseek(FILE* file, u32 offset, int whence)
{
    int bufferCode;
    int pos;
    int adjust;
    u32 state;
    int buffLen;

    char* ptr;

    if (file->mode.file_kind != 1 || file->state.error != 0) {
        errno = EFPOS;
        return -1;
    }

    if (file->state.io_state == 1) {
        if (__flush_buffer(file, nullptr) != 0) {
            file->state.error = 1;
            file->buffer_len = 0;
            errno = EFPOS;
            return -1;
        }
    }

    if(whence == SEEK_CUR){
        whence = SEEK_SET;
        offset += _ftell(file);
    }

    if ((whence != SEEK_END) && (file->mode.io_mode != 3) && (file->state.io_state == 2 || file->state.io_state == 3)) {
        if ((offset >= file->position) || !(offset >= file->buffer_pos)) {
            file->state.io_state = 0;
        } else {
            file->buffer_ptr = file->buffer + (offset - file->buffer_pos);
            file->buffer_len = file->position - offset;
            file->state.io_state = 2;
        }
    } else {
        file->state.io_state = 0;
    }

    if (file->state.io_state == 0) {
        if (file->position_proc != nullptr && (int)file->position_proc(file->handle, &offset, whence, file->ref_con)) {
            file->state.error = 1;
            file->buffer_len = 0;
            errno = EFPOS;
            return -1;
        } else {
            file->state.eof = 0;
            file->position = offset;
            file->buffer_len = 0;
        }
    }

    return 0;
}

//unused
int fseek(FILE* stream, u32 offset, int whence)
{
    int code;
    code = _fseek(stream, offset, whence); // 0 if successful, -1 if error
    return code;
}

//unused
void fsetpos(){
}

//unused
void rewind(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_8019894C();
extern void fn_80198950();

// asm_to_cpp: fn_8019894C
asm void fn_8019894C() {
    nofralloc
    b _fseek
}

// asm_to_cpp: fn_80198950
asm void fn_80198950() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0xa(r3)
    bl _fseek
    stb r31, 0xa(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
