#include "PowerPC_EABI_Support/MSL_C/MSL_Common/buffer_io.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"
#include <stdlib.h>
#include <stdio.h>

//unused
void remove(){
}

//unused
void rename(){
}

//unused
void tmpnam(){
}

//unused
void tmpnam_s(){
}

//unused
void tmpfile(){
}

//unused
void tmpfile_s(){
}

int fclose(FILE* file)
{
    int flush_result, close_result;

    if (file == nullptr)
        return (-1);
    if (file->mode.file_kind == __closed_file)
        return (0);

    flush_result = fflush(file);

    close_result = (*file->close_proc)(file->handle);

    file->mode.file_kind = __closed_file;
    file->handle = 0;

    if (file->state.free_buffer)
        free(file->buffer);
    return ((flush_result || close_result) ? -1 : 0);
}

int fflush(FILE* file)
{
    int pos;

    if (file == nullptr) {
        return __flush_all();
    }

    if (file->state.error != 0 || file->mode.file_kind == __closed_file) {
        return -1;
    }

    if (file->mode.io_mode == 1) {
        return 0;
    }

    if (file->state.io_state >= 3) {
        file->state.io_state = 2;
    }

    if (file->state.io_state == 2) {
        file->buffer_len = 0;
    }

    if (file->state.io_state != 1) {
        file->state.io_state = 0;
        return 0;
    }

    if (file->mode.file_kind != __disk_file) {
        pos = 0;
    } else {
        pos = ftell(file);
    }

    if (__flush_buffer(file, 0) != 0) {
        file->state.error = 1;
        file->buffer_len = 0;
        return -1;
    }

    file->state.io_state = 0;
    file->position = pos;
    file->buffer_len = 0;
    return 0;
}

//unused
void fopen(){
}

//unused
void fopen_s(){
}

//unused
void freopen(){
}

//unused
void freopen_s(){
}

//unused
void __reopen(){
}

//unused
void __handle_open(){
}

//unused
void __handle_reopen(){
}

//unused
void __get_file_modes(){
}

//unused
void __set_ref_con(){
}

//unused
void __set_idle_proc(){
}

//unused
void __msl_strnicmp(){
}

//unused
void __msl_strrev(){
}

//unused
void __msl_itoa(){
}

//unused
void __msl_strdup(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_8035FBD8[];
extern void fn_80198624();

// asm_to_cpp: fn_80198624
asm void fn_80198624() {
    nofralloc
    lis r6, lbl_8035FBD8@ha
    addi r6, r6, lbl_8035FBD8@l
    lwz r6, 0x38(r6)
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_801986D4
lbl_8019863C:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_80198658
    li r5, 0x0
lbl_80198658:
    cmpwi r5, 0x0
    beq lbl_80198664
    b lbl_8019866C
lbl_80198664:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_8019866C:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_8019868C
    li r5, 0x0
lbl_8019868C:
    cmpwi r5, 0x0
    beq lbl_80198698
    b lbl_801986A0
lbl_80198698:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_801986A0:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_801986B4
    li r3, -0x1
    blr
lbl_801986B4:
    ble lbl_801986C0
    li r3, 0x1
    blr
lbl_801986C0:
    cmpwi r7, 0x0
    bne lbl_801986D0
    li r3, 0x0
    blr
lbl_801986D0:
    bdnz lbl_8019863C
lbl_801986D4:
    li r3, 0x0
    blr
}
