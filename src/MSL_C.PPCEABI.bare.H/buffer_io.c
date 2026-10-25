#include "PowerPC_EABI_Support/MSL_C/MSL_Common/buffer_io.h"
#include <stdio.h>

//unused
void __convert_from_newlines(){
}

//unused
void __convert_to_newlines(){
}

void __prep_buffer(FILE* file)
{
    file->buffer_ptr = file->buffer;
    file->buffer_len = file->buffer_size;
    file->buffer_len = file->buffer_len - (file->position & file->buffer_alignment);
    file->buffer_pos = file->position;
    return;
}

//unused
void __load_buffer(){
}

int __flush_buffer(FILE* file, size_t* length)
{
    size_t bufferLen;
    int writeCode;

    bufferLen = file->buffer_ptr - file->buffer;
    if (bufferLen) {
        file->buffer_len = bufferLen;
        writeCode = file->write_proc(file->handle, file->buffer, &file->buffer_len, file->ref_con);
        if (length) {
            *length = file->buffer_len;
        }
        if (writeCode) {
            return writeCode;
        }
        file->position += file->buffer_len;
    }

    file->buffer_ptr = file->buffer;
    file->buffer_len = file->buffer_size;
    file->buffer_len = file->buffer_len - (file->position & file->buffer_alignment);
    file->buffer_pos = file->position;
    return 0;
}

//unused
void setvbuf(){
}

//unused
void setbuf(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_8035FBD8[];
extern void fn_80197C00();
extern void fn_80197DB4();
extern void fn_80197DE8();

// asm_to_cpp: fn_80197C00
asm void fn_80197C00() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r6, 0x18(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x1c(r3)
    lwz r4, 0x20(r3)
    and r0, r6, r0
    stw r5, 0x24(r3)
    subf r0, r0, r4
    stw r0, 0x28(r3)
    stw r6, 0x34(r3)
    bne lbl_80197C4C
    stw r4, 0x28(r3)
lbl_80197C4C:
    lwz r12, 0x3c(r31)
    addi r5, r31, 0x28
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r31)
    lwz r6, 0x48(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x2
    bne lbl_80197C78
    li r0, 0x0
    stw r0, 0x28(r31)
lbl_80197C78:
    cmpwi r30, 0x0
    beq lbl_80197C88
    lwz r0, 0x28(r31)
    stw r0, 0x0(r30)
lbl_80197C88:
    cmpwi r3, 0x0
    beq lbl_80197C94
    b lbl_80197CE4
lbl_80197C94:
    lwz r0, 0x4(r31)
    lwz r4, 0x18(r31)
    extrwi. r0, r0, 1, 12
    lwz r3, 0x28(r31)
    add r0, r4, r3
    stw r0, 0x18(r31)
    bne lbl_80197CE0
    lwz r4, 0x1c(r31)
    mtctr r3
    cmpwi r3, 0x0
    beq lbl_80197CE0
lbl_80197CC0:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    cmplwi r0, 0xa
    bne lbl_80197CDC
    lwz r3, 0x18(r31)
    addi r0, r3, 0x1
    stw r0, 0x18(r31)
lbl_80197CDC:
    bdnz lbl_80197CC0
lbl_80197CE0:
    li r3, 0x0
lbl_80197CE4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80197DB4
asm void fn_80197DB4() {
    nofralloc
    cmplwi r3, 0xff
    li r0, 0x1
    bgt lbl_80197DC4
    li r0, 0x0
lbl_80197DC4:
    cmpwi r0, 0x0
    bnelr
    lis r4, lbl_8035FBD8@ha
    addi r4, r4, lbl_8035FBD8@l
    lwz r4, 0x38(r4)
    lwz r4, 0x10(r4)
    lbzx r3, r4, r3
    blr
}

void fn_80197DE4(void) {
    fn_80197DE8();
}
