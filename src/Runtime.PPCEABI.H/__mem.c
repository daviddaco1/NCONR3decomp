#include "types.h"
#include "Runtime.PPCEABI.H/__mem.h"

asm void* memcpy(void* dest, const void* src, size_t size)
{
	// Return if size is 0
	cmplwi cr1, r5, 0
	beqlr cr1

	cmplw cr1, r4, r3
	blt cr1, reverse
	beqlr cr1

	li r6, 0x80
	cmplw cr5, r5, r6
	blt cr5, test_word_alignment

	clrlwi r9, r4, 0x1d
	clrlwi r10, r3, 0x1d
	subf r8, r10, r3

	// Request a data cache block fetch
	dcbt 0, r4

	xor. r11, r10, r9
	bne byte_setup
	andi. r10, r10, 7
	beq+ double_copy_setup
	li r6, 8
	subf r9, r9, r6
	addi r8, r3, 0
	mtctr r9
	subf r5, r9, r5

byte_loop_double_align:
	lbz r9, 0(r4)
	addi r4, r4, 1
	stb r9, 0(r8)
	addi r8, r8, 1
	bdnz byte_loop_double_align

double_copy_setup:
	srwi r6, r5, 5
	mtctr r6

double_loop:
	lfd f1, 0(r4)
	lfd f2, 8(r4)
	lfd f3, 0x10(r4)
	lfd f4, 0x18(r4)
	addi r4, r4, 0x20
	stfd f1, 0(r8)
	stfd f2, 8(r8)
	stfd f3, 0x10(r8)
	stfd f4, 0x18(r8)

	addi r8, r8, 0x20
	bdnz double_loop
	andi. r6, r5, 0x1f
	beqlr
	addi r4, r4, -1
	mtctr r6
	addi r8, r8, -1

byte_loop_1:
	lbzu r9, 1(r4)
	stbu r9, 1(r8)
	bdnz byte_loop_1
	blr

test_word_alignment:
	li r6, 0x14
	cmplw cr5, r5, r6
	ble cr5, byte_setup
	clrlwi r9, r4, 0x1e
	clrlwi r10, r3, 0x1e
	xor. r11, r10, r9
	bne byte_setup
	li r6, 4
	subf r9, r9, r6
	addi r8, r3, 0
	subf r5, r9, r5
	mtctr r9

byte_loop_word_align:
	lbz r9, 0(r4)
	addi r4, r4, 1
	stb r9, 0(r8)
	addi r8, r8, 1
	bdnz byte_loop_word_align

word_copy_setup:
	srwi r6, r5, 4
	mtctr r6

word_loop:
	lwz r9, 0(r4)
	lwz r10, 4(r4)
	lwz r11, 8(r4)
	lwz r12, 0xc(r4)
	addi r4, r4, 0x10
	stw r9, 0(r8)
	stw r10, 4(r8)
	stw r11, 8(r8)
	stw r12, 0xc(r8)
	addi r8, r8, 0x10
	bdnz word_loop

	andi. r6, r5, 0xf
	beqlr
	addi r4, r4, -1
	mtctr r6
	addi r8, r8, -1

byte_loop_2:
	lbzu r9, 1(r4)
	stbu r9, 1(r8)
	bdnz byte_loop_2
	blr

byte_setup:
	addi r7, r4, -1
	addi r8, r3, -1
	mtctr r5

byte_loop_3:
	lbzu r9, 1(r7)
	stbu r9, 1(r8)
	bdnz byte_loop_3
	blr

reverse:
	add r4, r4, r5
	add r12, r3, r5
	li r6, 0x80
	cmplw cr5, r5, r6
	blt cr5, reverse_test_word_alignment
	clrlwi r9, r4, 0x1d
	clrlwi r10, r12, 0x1d
	xor. r11, r10, r9
	bne reverse_byte_setup
	andi. r10, r10, 7
	beq+ reverse_double_copy_setup
	mtctr r10

reverse_byte_loop_double_align:
	lbzu r9, -1(r4)
	stbu r9, -1(r12)
	bdnz reverse_byte_loop_double_align

reverse_double_copy_setup:
	subf r5, r10, r5
	srwi r6, r5, 5
	mtctr r6

reverse_double_loop:
	lfd f1, -8(r4)
	lfd f2, -0x10(r4)
	lfd f3, -0x18(r4)
	lfd f4, -0x20(r4)
	addi r4, r4, -32
	stfd f1, -8(r12)
	stfd f2, -0x10(r12)
	stfd f3, -0x18(r12)
	stfdu f4, -0x20(r12)

	bdnz reverse_double_loop

	andi. r6, r5, 0x1f
	beqlr
	mtctr r6

reverse_byte_loop_1:
	lbzu r9, -1(r4)
	stbu r9, -1(r12)
	bdnz reverse_byte_loop_1
	blr

reverse_test_word_alignment:
	li r6, 0x14
	cmplw cr5, r5, r6
	ble cr5, reverse_byte_setup
	clrlwi r9, r4, 0x1e
	clrlwi r10, r12, 0x1e
	xor. r11, r10, r9
	bne reverse_byte_setup
	andi. r10, r10, 7
	beq+ reverse_word_loop_setup
	mtctr r10

reverse_byte_loop_word_align:
	lbzu r9, -1(r4)
	stbu r9, -1(r12)
	bdnz reverse_byte_loop_word_align

reverse_word_loop_setup:
	subf r5, r10, r5
	srwi r6, r5, 4
	mtctr r6

reverse_word_loop:
	lwz r9, -4(r4)
	lwz r10, -8(r4)
	lwz r11, -0xc(r4)
	lwz r8, -0x10(r4)
	addi r4, r4, -16
	stw r9, -4(r12)
	stw r10, -8(r12)
	stw r11, -0xc(r12)
	stwu r8, -0x10(r12)
	bdnz reverse_word_loop

	andi. r6, r5, 0xf
	beqlr
	mtctr r6

reverse_byte_loop_2:
	lbzu r9, -1(r4)
	stbu r9, -1(r12)
	bdnz reverse_byte_loop_2
	blr

reverse_byte_setup:
	mtctr r5

reverse_byte_loop_3:
	lbzu r9, -1(r4)
	stbu r9, -1(r12)
	bdnz reverse_byte_loop_3
	blr
}

asm void __fill_mem(void* dst, int val, u32 n)
{
	cmplwi  r5, 32
	clrlwi  r7, r4, 24
	addi    r6, r3, -1
	blt     lbl_tail
	not     r0, r6
	clrlwi. r0, r0, 30
	beq     lbl_2c
	subf    r5, r0, r5
lbl_20:
	addic.  r0, r0, -1
	stbu    r7, 1(r6)
	bne     lbl_20
lbl_2c:
	cmpwi   r7, 0
	beq     lbl_4c
	slwi    r4, r7, 8
	slwi    r3, r7, 24
	slwi    r0, r7, 16
	or      r4, r7, r4
	or      r0, r3, r0
	or      r7, r4, r0
lbl_4c:
	srwi.   r0, r5, 5
	addi    r3, r6, -3
	beq     lbl_80
lbl_58:
	stw     r7, 4(r3)
	addic.  r0, r0, -1
	stw     r7, 8(r3)
	stw     r7, 12(r3)
	stw     r7, 16(r3)
	stw     r7, 20(r3)
	stw     r7, 24(r3)
	stw     r7, 28(r3)
	stwu    r7, 32(r3)
	bne     lbl_58
lbl_80:
	rlwinm. r0, r5, 30, 29, 31
	beq     lbl_94
lbl_88:
	addic.  r0, r0, -1
	stwu    r7, 4(r3)
	bne     lbl_88
lbl_94:
	addi    r6, r3, 3
	clrlwi  r5, r5, 30
lbl_tail:
	cmpwi   r5, 0
	beqlr
lbl_a4:
	addic.  r5, r5, -1
	stbu    r7, 1(r6)
	bne     lbl_a4
	blr
}

void* memset(void* dst, int val, size_t n)
{
	__fill_mem(dst, val, n);

	return (dst);
}
