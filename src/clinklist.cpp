#include "types.h"

// Forward declarations de todas las funciones
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80029A90();
extern "C" void fn_8002A30C();
extern "C" void fn_8002AE00();
extern "C" void fn_8002AE40();
extern "C" void fn_8002AEE0();
extern "C" void fn_800320A4();
extern "C" void fn_80033F08();
extern "C" void fn_800340D8();
extern "C" void fn_80034128();
extern "C" void fn_80034178();
extern "C" void fn_800341DC();
extern "C" void fn_8003452C();
extern "C" void fn_80034638();
extern "C" void fn_8005E7D4();
extern "C" void fn_8005E8F0();
extern "C" void fn_8008AE14();
extern "C" void fn_80125DE0();
extern "C" void fn_8012FE70();
extern "C" void fn_8012FED4();
extern "C" void fn_8012FF14();
extern "C" void fn_80130100();
extern "C" void fn_8013026C();
extern "C" void fn_80130348();
extern "C" void fn_80130410();
extern "C" void fn_80130478();
extern "C" void fn_80130504();
extern "C" void fn_801305BC();
extern "C" void fn_80130640();
extern "C" void fn_80130674();
extern "C" void fn_8013067C();
extern "C" void fn_80130680();
extern "C" void fn_8013069C();
extern "C" void fn_801306FC();
extern "C" void fn_80130764();
extern "C" void fn_8013098C();
extern "C" void fn_801309EC();
extern "C" void fn_80130A78();
extern "C" void fn_80130AE8();
extern "C" void fn_80130AF8();
extern "C" void fn_80130B30();
extern "C" void fn_80130C28();
extern "C" void fn_80130D4C();
extern "C" void fn_80130DB0();
extern "C" void fn_80130F38();
extern "C" void fn_80130F40();
extern "C" void fn_80130FD0();
extern "C" void fn_80131060();
extern "C" void fn_8013108C();
extern "C" void fn_8013123C();
extern "C" void fn_80131288();
extern "C" void fn_80134304();
extern "C" void fn_80134630();
extern "C" void fn_80134664();
extern "C" void fn_80134DD0();
extern "C" void fn_80134DE8();
extern "C" void fn_80135484();
extern "C" void fn_801354A0();
extern "C" void fn_801359DC();
extern "C" void fn_80136524();
extern "C" void fn_8013652C();
extern "C" void fn_80136CA8();
extern "C" void fn_80136D48();
extern "C" void fn_8017776C();
extern "C" void fn_80181504();
extern "C" void fn_801A9384();
extern "C" void fn_801D0C3C();
extern "C" void fn_801F032C();
extern "C" void fn_80284760();
extern "C" void* memset(void* dst, int val, size_t n);

extern "C" u8 lbl_80359980[];
extern "C" u8 lbl_803A4830[];
extern "C" u8 lbl_803A4C30[];
extern "C" u8 lbl_8049C340;
extern "C" u32 lbl_8049D6F8;

extern "C" asm void fn_80130100()
{
	stwu r1,-64(r1)
	mflr r0
	stw r0,68(r1)
	addi r11,r1,64
	bl _savegpr_29
	mr r31,r3
	cmpwi r3,0
	beq lbl_80130254
	li r29,0
	li r30,0
	b lbl_80130154
lbl_8013012C:
	lwz r3,280(r31)
	lwzx r0,r3,r30
	stw r0,40(r1)
	lwz r0,276(r31)
	stw r0,44(r1)
	addi r3,r1,44
	addi r4,r1,40
	bl fn_8002A30C
	addi r29,r29,1
	addi r30,r30,4
lbl_80130154:
	lwz r3,48(r31)
	lwz r0,96(r3)
	cmpw r29,r0
	blt lbl_8013012C
	li r29,0
	li r30,0
	b lbl_80130198
lbl_80130170:
	lwz r3,284(r31)
	lwzx r0,r3,r30
	stw r0,32(r1)
	lwz r0,276(r31)
	stw r0,36(r1)
	addi r3,r1,36
	addi r4,r1,32
	bl fn_8002A30C
	addi r29,r29,1
	addi r30,r30,4
lbl_80130198:
	lwz r3,48(r31)
	lwz r0,100(r3)
	cmpw r29,r0
	blt lbl_80130170
	li r29,0
	li r30,0
	b lbl_801301DC
lbl_801301B4:
	lwz r3,288(r31)
	lwzx r0,r3,r30
	stw r0,24(r1)
	lwz r0,276(r31)
	stw r0,28(r1)
	addi r3,r1,28
	addi r4,r1,24
	bl fn_8002A30C
	addi r29,r29,1
	addi r30,r30,4
lbl_801301DC:
	lwz r3,48(r31)
	lwz r0,104(r3)
	cmpw r29,r0
	blt lbl_801301B4
	li r29,0
	li r30,0
	b lbl_80130220
lbl_801301F8:
	lwz r3,292(r31)
	lwzx r0,r3,r30
	stw r0,16(r1)
	lwz r0,276(r31)
	stw r0,20(r1)
	addi r3,r1,20
	addi r4,r1,16
	bl fn_8002A30C
	addi r29,r29,1
	addi r30,r30,4
lbl_80130220:
	lwz r3,48(r31)
	lwz r0,108(r3)
	cmpw r29,r0
	blt lbl_801301F8
	lwz r0,276(r31)
	stw r0,12(r1)
	addi r3,r1,12
	li r4,0
	bl fn_800340D8
	lwz r0,276(r31)
	stw r0,8(r1)
	addi r3,r1,8
	bl fn_80033F08
lbl_80130254:
	addi r11,r1,64
	bl _restgpr_29
	lwz r0,68(r1)
	mtlr r0
	addi r1,r1,64
	blr 
}

extern "C" asm void fn_8013026C()
{
	stwu r1,-32(r1)
	mflr r0
	stw r0,36(r1)
	addi r11,r1,32
	bl _savegpr_29
	mr r29,r4
	rlwinm r7,r3,24,20,31
	clrlwi r4,r3,24
	li r6,0
	li r3,0
	lis r5, lbl_803A4830@ha
	addi r5, r5, lbl_803A4830@l
	li r0,128
	mtctr r0
lbl_801302A4:
	lhax r0,r5,r3
	cmpw r7,r0
	beq lbl_801302BC
	addi r6,r6,1
	addi r3,r3,8
	bdnz lbl_801302A4
lbl_801302BC:
	cmpwi r6,128
	beq lbl_80130330
	cmpwi r4,255
	beq lbl_801302F4
	lis r3, lbl_803A4830@ha
	addi r3, r3, lbl_803A4830@l
	slwi r0,r6,3
	add r3,r3,r0
	lwz r3,4(r3)
	bl fn_8012FED4
	li r4,0
	mr r5,r29
	bl fn_8012FF14
	b lbl_80130330
lbl_801302F4:
	li r30,0
	slwi r4,r6,3
	lis r3, lbl_803A4830@ha
	addi r0, r3, lbl_803A4830@l
	add r31,r0,r4
lbl_80130308:
	lwz r3,4(r31)
	mr r4,r30
	bl fn_8012FED4
	cmpwi r3,0
	beq lbl_80130330
	li r4,0
	mr r5,r29
	bl fn_8012FF14
	addi r30,r30,1
	b lbl_80130308
lbl_80130330:
	addi r11,r1,32
	bl _restgpr_29
	lwz r0,36(r1)
	mtlr r0
	addi r1,r1,32
	blr 
}

extern "C" asm void fn_80130348()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	stw r30,8(r1)
	rlwinm r7,r3,24,20,31
	clrlwi r4,r3,24
	li r6,0
	li r3,0
	lis r5, lbl_803A4830@ha
	addi r5, r5, lbl_803A4830@l
	li r0,128
	mtctr r0
lbl_8013037C:
	lhax r0,r5,r3
	cmpw r7,r0
	beq lbl_80130394
	addi r6,r6,1
	addi r3,r3,8
	bdnz lbl_8013037C
lbl_80130394:
	cmpwi r6,128
	beq lbl_801303F8
	cmpwi r4,255
	beq lbl_801303C4
	lis r3, lbl_803A4830@ha
	addi r3, r3, lbl_803A4830@l
	slwi r0,r6,3
	add r3,r3,r0
	lwz r3,4(r3)
	bl fn_8012FED4
	bl fn_80130100
	b lbl_801303F8
lbl_801303C4:
	li r30,0
	slwi r4,r6,3
	lis r3, lbl_803A4830@ha
	addi r0, r3, lbl_803A4830@l
	add r31,r0,r4
lbl_801303D8:
	lwz r3,4(r31)
	mr r4,r30
	bl fn_8012FED4
	cmpwi r3,0
	beq lbl_801303F8
	bl fn_80130100
	addi r30,r30,1
	b lbl_801303D8
lbl_801303F8:
	lwz r31,12(r1)
	lwz r30,8(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80130410()
{
	stwu r1,-32(r1)
	mflr r0
	stw r0,36(r1)
	addi r11,r1,32
	bl _savegpr_29
	li r29,0
	li r31,0
	lis r3, lbl_803A4830@ha
	addi r30, r3, lbl_803A4830@l
lbl_80130434:
	lhax r0,r30,r31
	cmpwi r0,-1
	beq lbl_80130450
	clrlwi r0,r0,20
	slwi r0,r0,8
	ori r3,r0,255
	bl fn_80130348
lbl_80130450:
	addi r29,r29,1
	addi r31,r31,8
	cmpwi r29,128
	blt lbl_80130434
	addi r11,r1,32
	bl _restgpr_29
	lwz r0,36(r1)
	mtlr r0
	addi r1,r1,32
	blr 
}

extern "C" asm void fn_80130478()
{
	stwu r1,-32(r1)
	mflr r0
	stw r0,36(r1)
	stw r31,28(r1)
	mr r31,r4
	cmpwi r4,0
	beq lbl_801304F0
	rlwinm r0,r7,0,4,4
	cmpwi r0,0
	bne lbl_801304F0
	li r3,0
	bl fn_8005E8F0
	cmpwi r3,0
	bne lbl_801304DC
	li r3,0
	li r4,1
	bl fn_8005E7D4
	cmpwi r3,0
	bne lbl_801304DC
	lwz r0,276(r31)
	stw r0,12(r1)
	addi r3,r1,12
	li r4,64
	bl fn_80034128
	b lbl_801304F0
lbl_801304DC:
	lwz r0,276(r31)
	stw r0,8(r1)
	addi r3,r1,8
	li r4,64
	bl fn_800340D8
lbl_801304F0:
	lwz r31,28(r1)
	lwz r0,36(r1)
	mtlr r0
	addi r1,r1,32
	blr 
}

extern "C" asm void fn_80130504()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	stw r30,8(r1)
	mr r30,r3
	li r31,1
	bl fn_8012FE70
	cmpwi r3,0
	bne lbl_80130534
	li r3,-1
	b lbl_801305A4
lbl_80130534:
	lwz r4,0(r3)
	rlwinm r0,r4,0,14,14
	cmpwi r0,0
	bne lbl_80130558
	oris r0,r4,2
	stw r0,0(r3)
	rlwinm r0,r30,24,20,31
	slwi r3,r0,8
	b lbl_801305A4
lbl_80130558:
	lwz r5,24(r3)
	b lbl_80130594
lbl_80130560:
	lwz r3,0(r4)
	rlwinm r0,r3,0,14,14
	cmpwi r0,0
	bne lbl_8013058C
	oris r0,r3,2
	stw r0,0(r4)
	rlwinm r0,r30,24,20,31
	slwi r3,r0,8
	clrlwi r0,r31,24
	or r3,r3,r0
	b lbl_801305A4
lbl_8013058C:
	addi r31,r31,1
	lwz r5,8(r5)
lbl_80130594:
	lwz r4,0(r5)
	cmplwi r4,1
	bne lbl_80130560
	li r3,-1
lbl_801305A4:
	lwz r31,12(r1)
	lwz r30,8(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_801305BC()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	bl fn_8012FE70
	cmpwi r3,0
	bne lbl_801305DC
	li r3,0
	b lbl_80130630
lbl_801305DC:
	lwz r4,0(r3)
	rlwinm r0,r4,0,14,14
	cmpwi r0,0
	bne lbl_801305F8
	oris r0,r4,2
	stw r0,0(r3)
	b lbl_80130630
lbl_801305F8:
	lwz r5,24(r3)
	b lbl_80130620
lbl_80130600:
	lwz r4,0(r3)
	rlwinm r0,r4,0,14,14
	cmpwi r0,0
	bne lbl_8013061C
	oris r0,r4,2
	stw r0,0(r3)
	b lbl_80130630
lbl_8013061C:
	lwz r5,8(r5)
lbl_80130620:
	lwz r3,0(r5)
	cmplwi r3,1
	bne lbl_80130600
	li r3,0
lbl_80130630:
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80130640()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	bl fn_8012FE70
	cmpwi r3,0
	beq lbl_80130664
	lwz r0,0(r3)
	rlwinm r0,r0,0,15,13
	stw r0,0(r3)
lbl_80130664:
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80130674()
{
	li r3,1
	blr 
}

extern "C" void fn_8013067C()
{
	fn_80130680();
}

#pragma schedule off
extern "C" void fn_80130680()
{
	*(u32*)(lbl_803A4C30 + 1024) = 0;
	memset(lbl_803A4C30, 0, 1024);
}
#pragma schedule reset

extern "C" asm void fn_8013069C()
{
	cmpwi r3,0
	beqlr 
	lis r4, lbl_803A4C30@ha
	addi r5, r4, lbl_803A4C30@l
	lwz r6,1024(r5)
	cmplwi r6,256
	bgelr 
	li r4,0
	mtctr r6
	cmplwi r6,0
	ble lbl_801306DC
lbl_801306C8:
	lwzx r0,r5,r4
	cmplw r0,r3
	beqlr 
	addi r4,r4,4
	bdnz lbl_801306C8
lbl_801306DC:
	slwi r0,r6,2
	lis r4, lbl_803A4C30@ha
	addi r4, r4, lbl_803A4C30@l
	stwx r3,r4,r0
	lwz r3,1024(r4)
	addi r0,r3,1
	stw r0,1024(r4)
	blr 
}

extern "C" asm void fn_801306FC()
{
	li r8,0
	addi r6,r3,-1
	b lbl_80130758
lbl_80130708:
	li r3,0
	subf r0,r8,r6
	mtctr r0
	cmpwi r0,0
	ble lbl_80130754
lbl_8013071C:
	add r7,r5,r3
	lfs f1,4(r7)
	lfs f0,0(r7)
	fcmpo cr0,f1,f0
	bge lbl_8013074C
	stfs f1,0(r7)
	stfs f0,4(r7)
	add r7,r4,r3
	lwz r9,0(r7)
	lwz r0,4(r7)
	stw r0,0(r7)
	stw r9,4(r7)
lbl_8013074C:
	addi r3,r3,4
	bdnz lbl_8013071C
lbl_80130754:
	addi r8,r8,1
lbl_80130758:
	cmpw r8,r6
	blt lbl_80130708
	blr 
}

extern "C" asm void fn_80130764()
{
	stwu r1,-2176(r1)
	mflr r0
	stw r0,2180(r1)
	addi r11,r1,2176
	bl _savegpr_24
	addi r3,r1,40
	bl fn_8002AE40
	addi r3,r1,36
	li r4,0
	bl fn_8002AEE0
	li r30,0
	li r26,0
	lis r3, lbl_803A4C30@ha
	addi r29, r3, lbl_803A4C30@l
	addi r27,r1,1112
	addi r25,r1,88
	b lbl_80130824
lbl_801307A8:
	lwzx r3,r29,r26
	li r4,0
	bl fn_80181504
	mr r28,r3
	lwzx r3,r29,r26
	lwz r0,276(r3)
	stw r0,32(r1)
	addi r3,r1,32
	bl fn_8003452C
	mr r24,r3
	bl fn_8002AE00
	stw r3,28(r1)
	addi r3,r1,36
	addi r4,r1,28
	bl fn_80029A90
	addi r3,r1,36
	lwz r4,4(r28)
	bl fn_801D0C3C
	stw r3,24(r1)
	addi r3,r1,24
	bl fn_800320A4
	mr r6,r3
	mr r3,r24
	addi r4,r1,40
	li r5,2
	bl fn_801F032C
	stwx r30,r27,r26
	lfs f0,84(r1)
	stfsx f0,r25,r26
	addi r30,r30,1
	addi r26,r26,4
lbl_80130824:
	lwz r3,1024(r29)
	cmplw r30,r3
	blt lbl_801307A8
	addi r4,r1,1112
	addi r5,r1,88
	bl fn_801306FC
	li r29,0
	li r26,0
	lis r3, lbl_803A4C30@ha
	addi r31, r3, lbl_803A4C30@l
	addi r30,r1,1112
	b lbl_80130968
lbl_80130854:
	li r28,1
	li r27,1
	lwzx r0,r30,r26
	slwi r0,r0,2
	lwzx r3,r31,r0
	lwz r0,276(r3)
	stw r0,20(r1)
	addi r3,r1,20
	bl fn_800341DC
	mr r25,r3
	li r24,0
	b lbl_801308CC
lbl_80130884:
	lwzx r0,r30,r26
	slwi r0,r0,2
	lwzx r3,r31,r0
	lwz r0,276(r3)
	stw r0,16(r1)
	addi r3,r1,16
	mr r4,r24
	bl fn_80034638
	lbz r0,15(r3)
	cmpwi r0,0
	bne lbl_801308B8
	li r27,0
	b lbl_801308D8
lbl_801308B8:
	cmplwi r0,255
	beq lbl_801308C8
	li r28,0
	b lbl_801308D8
lbl_801308C8:
	addi r24,r24,1
lbl_801308CC:
	lwz r0,220(r25)
	cmplw r24,r0
	blt lbl_80130884
lbl_801308D8:
	cmpwi r27,0
	beq lbl_801308FC
	lwzx r0,r30,r26
	slwi r0,r0,2
	lwzx r3,r31,r0
	lwz r0,0(r3)
	clrrwi r0,r0,1
	stw r0,0(r3)
	b lbl_80130914
lbl_801308FC:
	lwzx r0,r30,r26
	slwi r0,r0,2
	lwzx r3,r31,r0
	lwz r0,0(r3)
	ori r0,r0,1
	stw r0,0(r3)
lbl_80130914:
	cmpwi r28,0
	beq lbl_80130940
	lwzx r0,r30,r26
	slwi r0,r0,2
	lwzx r3,r31,r0
	lwz r0,276(r3)
	stw r0,12(r1)
	addi r3,r1,12
	li r4,123
	bl fn_80034178
	b lbl_80130960
lbl_80130940:
	lwzx r0,r30,r26
	slwi r0,r0,2
	lwzx r3,r31,r0
	lwz r0,276(r3)
	stw r0,8(r1)
	addi r3,r1,8
	addi r4,r29,141
	bl fn_80034178
lbl_80130960:
	addi r29,r29,1
	addi r26,r26,4
lbl_80130968:
	lwz r0,1024(r31)
	cmplw r29,r0
	blt lbl_80130854
	addi r11,r1,2176
	bl _restgpr_24
	lwz r0,2180(r1)
	mtlr r0
	addi r1,r1,2176
	blr 
}

extern "C" asm void fn_8013098C()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	mr r31,r3
	lbz r0,0(r3)
	cmpwi r0,0
	beq lbl_801309D4
	lwz r3,4(r3)
	cmpwi r3,0
	beq lbl_801309C4
	bl fn_80136D48
	li r0,0
	stw r0,4(r31)
lbl_801309C4:
	li r0,0
	stb r0,0(r31)
	li r3,1
	b lbl_801309D8
lbl_801309D4:
	li r3,0
lbl_801309D8:
	lwz r31,12(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_801309EC()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	stw r30,8(r1)
	mr r30,r3
	lwz r31,4(r3)
	cmpwi r31,0
	beq lbl_80130A4C
	mr r3,r31
	li r4,0
	lwz r0,20(r30)
	mulli r5,r0,20
	bl memset
	li r5,0
	li r3,0
	b lbl_80130A40
lbl_80130A30:
	add r4,r31,r3
	stw r5,4(r4)
	addi r5,r5,1
	addi r3,r3,20
lbl_80130A40:
	lwz r0,20(r30)
	cmpw r5,r0
	blt lbl_80130A30
lbl_80130A4C:
	li r0,0
	stw r0,16(r30)
	stw r0,24(r30)
	stw r0,28(r30)
	stw r0,32(r30)
	lwz r31,12(r1)
	lwz r30,8(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80130A78()
{
	stwu r1,-32(r1)
	mflr r0
	stw r0,36(r1)
	addi r11,r1,32
	bl _savegpr_29
	mr r29,r3
	mr r30,r4
	mr r31,r5
	bl fn_8013098C
	cmpwi r31,0
	beq lbl_80130AB4
	li r0,0
	stb r0,0(r29)
	stw r31,4(r29)
	b lbl_80130AC8
lbl_80130AB4:
	li r0,1
	stb r0,0(r29)
	mulli r3,r30,20
	bl fn_80136CA8
	stw r3,4(r29)
lbl_80130AC8:
	stw r30,20(r29)
	li r3,1
	addi r11,r1,32
	bl _restgpr_29
	lwz r0,36(r1)
	mtlr r0
	addi r1,r1,32
	blr 
}

extern "C" asm void fn_80130AE8()
{
	lbz r0,8(r3)
	stb r4,8(r3)
	mr r3,r0
	blr 
}

extern "C" asm void fn_80130AF8()
{
	lwz r5,12(r4)
	cmpwi r5,0
	bne lbl_80130B0C
	stw r4,28(r3)
	b lbl_80130B10
lbl_80130B0C:
	stw r4,16(r5)
lbl_80130B10:
	lwz r5,16(r4)
	cmpwi r5,0
	bne lbl_80130B24
	stw r4,32(r3)
	b lbl_80130B28
lbl_80130B24:
	stw r4,12(r5)
lbl_80130B28:
	li r3,1
	blr 
}

extern "C" asm void fn_80130B30()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	stw r30,8(r1)
	mr r31,r3
	mr r30,r4
	lwz r0,4(r3)
	cmpwi r0,0
	bne lbl_80130B70
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,226
	addi r5,r3,14
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130B70:
	li r5,0
	cmpwi r30,0
	bne lbl_80130B8C
	lwz r3,16(r31)
	addi r0,r3,1
	stw r0,16(r31)
	b lbl_80130B9C
lbl_80130B8C:
	lwz r3,20(r31)
	divwu r0,r30,r3
	mullw r0,r0,r3
	subf r5,r0,r30
lbl_80130B9C:
	li r6,0
	lwz r4,20(r31)
	mtctr r4
	cmpwi r4,0
	ble lbl_80130C0C
lbl_80130BB0:
	add r3,r5,r6
	divw r0,r3,r4
	mullw r0,r0,r4
	subf r7,r0,r3
	lwz r3,4(r31)
	mulli r0,r7,20
	add r3,r3,r0
	lbz r0,8(r31)
	cmpwi r0,0
	bne lbl_80130BE0
	cmpwi r7,0
	beq lbl_80130C04
lbl_80130BE0:
	lbz r0,0(r3)
	cmpwi r0,0
	bne lbl_80130C04
	li r0,1
	stb r0,0(r3)
	lwz r4,24(r31)
	addi r0,r4,1
	stw r0,24(r31)
	b lbl_80130C10
lbl_80130C04:
	addi r6,r6,1
	bdnz lbl_80130BB0
lbl_80130C0C:
	li r3,0
lbl_80130C10:
	lwz r31,12(r1)
	lwz r30,8(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80130C28()
{
	stwu r1,-32(r1)
	mflr r0
	stw r0,36(r1)
	addi r11,r1,32
	bl _savegpr_28
	mr r28,r3
	mr r29,r4
	mr r30,r5
	mr r31,r6
	lbz r0,1(r5)
	cmpwi r0,0
	beq lbl_80130C70
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,286
	addi r5,r3,70
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130C70:
	cmpwi r29,0
	bne lbl_80130CD8
	cmpwi r31,0
	beq lbl_80130CAC
	lwz r0,32(r28)
	cmpwi r0,0
	beq lbl_80130CAC
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,290
	addi r5,r3,157
	crclr 4*cr1+eq
	bl fn_801A9384
	li r3,0
	b lbl_80130D34
lbl_80130CAC:
	lwz r0,28(r28)
	cmpwi r0,0
	beq lbl_80130CD8
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,294
	addi r5,r3,227
	crclr 4*cr1+eq
	bl fn_801A9384
	li r3,0
	b lbl_80130D34
lbl_80130CD8:
	cmpwi r31,0
	beq lbl_80130D00
	stw r29,12(r30)
	cmpwi r29,0
	beq lbl_80130CF4
	lwz r0,16(r29)
	b lbl_80130CF8
lbl_80130CF4:
	li r0,0
lbl_80130CF8:
	stw r0,16(r30)
	b lbl_80130D1C
lbl_80130D00:
	cmpwi r29,0
	beq lbl_80130D10
	lwz r0,12(r29)
	b lbl_80130D14
lbl_80130D10:
	li r0,0
lbl_80130D14:
	stw r0,12(r30)
	stw r29,16(r30)
lbl_80130D1C:
	li r0,1
	stb r0,1(r30)
	mr r3,r28
	mr r4,r30
	bl fn_80130AF8
	li r3,1
lbl_80130D34:
	addi r11,r1,32
	bl _restgpr_28
	lwz r0,36(r1)
	mtlr r0
	addi r1,r1,32
	blr 
}

extern "C" asm void fn_80130D4C()
{
	stwu r1,-32(r1)
	mflr r0
	stw r0,36(r1)
	addi r11,r1,32
	bl _savegpr_29
	mr r29,r3
	mr r30,r4
	li r4,0
	bl fn_80130B30
	mr r31,r3
	cmpwi r3,0
	beq lbl_80130D94
	stw r30,8(r3)
	mr r3,r29
	lwz r4,32(r29)
	mr r5,r31
	li r6,1
	bl fn_80130C28
lbl_80130D94:
	mr r3,r31
	addi r11,r1,32
	bl _restgpr_29
	lwz r0,36(r1)
	mtlr r0
	addi r1,r1,32
	blr 
}

extern "C" asm void fn_80130DB0()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	stw r30,8(r1)
	mr r30,r3
	mr r31,r4
	lwz r0,4(r3)
	cmpwi r0,0
	bne lbl_80130DF0
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,496
	addi r5,r3,473
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130DF0:
	lbz r0,0(r31)
	cmpwi r0,0
	bne lbl_80130E04
	li r3,0
	b lbl_80130F20
lbl_80130E04:
	lwz r0,16(r31)
	cmpwi r0,0
	bne lbl_80130EB0
	lwz r0,32(r30)
	cmplw r31,r0
	beq lbl_80130E34
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,516
	addi r5,r3,519
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130E34:
	lwz r0,12(r31)
	cmpwi r0,0
	beq lbl_80130E58
	stw r0,32(r30)
	li r0,0
	lwz r3,12(r31)
	stw r0,16(r3)
	stw r0,12(r31)
	b lbl_80130F04
lbl_80130E58:
	lwz r0,28(r30)
	cmplw r0,r31
	beq lbl_80130E7C
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,527
	addi r5,r3,556
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130E7C:
	li r0,0
	stw r0,32(r30)
	stw r0,28(r30)
	lwz r0,24(r30)
	cmpwi r0,1
	beq lbl_80130F04
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,530
	addi r5,r3,593
	crclr 4*cr1+eq
	bl fn_801A9384
	b lbl_80130F04
lbl_80130EB0:
	lwz r3,12(r31)
	cmpwi r3,0
	bne lbl_80130EF4
	lwz r0,28(r30)
	cmplw r0,r31
	beq lbl_80130EE0
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,541
	addi r5,r3,556
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130EE0:
	lwz r3,16(r31)
	stw r3,28(r30)
	li r0,0
	stw r0,12(r3)
	b lbl_80130F04
lbl_80130EF4:
	stw r0,16(r3)
	lwz r0,12(r31)
	lwz r3,16(r31)
	stw r0,12(r3)
lbl_80130F04:
	li r0,0
	stb r0,0(r31)
	stb r0,1(r31)
	lwz r3,24(r30)
	addi r0,r3,-1
	stw r0,24(r30)
	li r3,1
lbl_80130F20:
	lwz r31,12(r1)
	lwz r30,8(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80130F38()
{
	lwz r3,28(r3)
	blr 
}

extern "C" asm void fn_80130F40()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	stw r30,8(r1)
	mr r30,r3
	mr r31,r4
	lwz r0,4(r3)
	cmpwi r0,0
	bne lbl_80130F80
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,624
	addi r5,r3,636
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130F80:
	mr r3,r30
	mr r4,r31
	bl fn_80131060
	cmpwi r3,0
	bne lbl_80130FAC
	lis r3, lbl_80359980@ha
	addi r3, r3, lbl_80359980@l
	li r4,625
	addi r5,r3,684
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80130FAC:
	lwz r3,4(r30)
	mulli r0,r31,20
	add r3,r3,r0
	lwz r31,12(r1)
	lwz r30,8(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80130FD0()
{
	stwu r1,-16(r1)
	mflr r0
	stw r0,20(r1)
	stw r31,12(r1)
	mr r31,r4
	li r7,0
	li r5,0
	li r6,-1
	b lbl_80131000
lbl_80130FF4:
	stwx r6,r4,r5
	addi r7,r7,1
	addi r5,r5,4
lbl_80131000:
	lwz r0,20(r3)
	cmpw r7,r0
	blt lbl_80130FF4
	bl fn_80130F38
	li r5,0
	li r4,0
lbl_80131018:
	cmpwi r3,0
	bne lbl_80131030
	li r3,-1
	slwi r0,r5,2
	stwx r3,r31,r0
	b lbl_80131048
lbl_80131030:
	lwz r0,4(r3)
	stwx r0,r31,r4
	lwz r3,16(r3)
	addi r5,r5,1
	addi r4,r4,4
	b lbl_80131018
lbl_80131048:
	mr r3,r5
	lwz r31,12(r1)
	lwz r0,20(r1)
	mtlr r0
	addi r1,r1,16
	blr 
}

extern "C" asm void fn_80131060()
{
	li r5,0
	lbz r0,8(r3)
	neg r0,r0
	cmpw r4,r0
	ble lbl_80131084
	lwz r0,20(r3)
	cmpw r4,r0
	bge lbl_80131084
	li r5,1
lbl_80131084:
	mr r3,r5
	blr 
}

extern "C" asm void fn_8013108C()
{
	stwu r1,-832(r1)
	mflr r0
	stw r0,836(r1)
	addi r11,r1,832
	bl _savegpr_26
	lwz r5, lbl_8049D6F8
	cmpwi r5,0
	beq lbl_80131218
	cmpwi r4,0
	beq lbl_801311D4
	clrlwi r0,r4,31
	cmpwi r0,0
	beq lbl_801310CC
	li r0,241
	stw r0,0(r3)
	b lbl_801311E8
lbl_801310CC:
	rlwinm r0,r4,0,25,25
	cmpwi r0,0
	beq lbl_801311E8
	lbz r0, lbl_8049C340
	cmpwi r0,0
	beq lbl_801311CC
	addi r28,r1,8
	lwz r3,8(r5)
	mr r4,r28
	bl fn_80130FD0
	mr r30,r3
	li r27,0
	li r31,0
	b lbl_801311BC
lbl_80131104:
	lwzx r26,r28,r31
	mr r3,r26
	bl fn_80136524
	mr r29,r3
	bl fn_80134DD0
	rlwinm r0,r3,0,23,23
	cmpwi r0,0
	beq lbl_80131130
	bl fn_8008AE14
	cmpwi r3,0
	bne lbl_801311B4
lbl_80131130:
	bl fn_80284760
	cmpwi r3,0
	beq lbl_801311B4
	mr r3,r29
	li r4,0
	bl fn_80134630
	mr r3,r29
	bl fn_80134DE8
	cmpwi r3,0
	beq lbl_80131194
	mr r3,r29
	li r4,0
	bl fn_801354A0
	cmpwi r3,0
	beq lbl_8013117C
	mr r3,r29
	li r4,0
	li r5,-1
	bl fn_80134304
lbl_8013117C:
	bl fn_8008AE14
	cmpwi r3,0
	bne lbl_80131194
	mr r3,r29
	li r4,0
	bl fn_80134664
lbl_80131194:
	mr r3,r29
	bl fn_801359DC
	cmpwi r3,0
	beq lbl_801311B4
	mr r3,r29
	bl fn_80135484
	mr r4,r26
	bl fn_80125DE0
lbl_801311B4:
	addi r27,r27,1
	addi r31,r31,4
lbl_801311BC:
	cmpw r27,r30
	blt lbl_80131104
	li r0,0
	stb r0, lbl_8049C340
lbl_801311CC:
	li r3,0
	b lbl_80131224
lbl_801311D4:
	lwz r0,0(r3)
	cmpwi r0,255
	bne lbl_801311E8
	li r0,0
	stw r0,0(r3)
lbl_801311E8:
	lwz r0,0(r3)
	cmpwi r0,0
	beq lbl_80131200
	cmpwi r0,241
	beq lbl_8013120C
	b lbl_80131210
lbl_80131200:
	li r0,1
	stw r0,0(r3)
	b lbl_80131210
lbl_8013120C:
	bl fn_8017776C
lbl_80131210:
	li r3,0
	b lbl_80131224
lbl_80131218:
	bne lbl_80131220
	bl fn_8017776C
lbl_80131220:
	li r3,0
lbl_80131224:
	addi r11,r1,832
	bl _restgpr_26
	lwz r0,836(r1)
	mtlr r0
	addi r1,r1,832
	blr 
}

extern "C" asm void fn_8013123C()
{
	addi r0,r3,-36
	cmplwi r0,25
	bgt lbl_80131250
	addi r3,r3,26
	blr 
lbl_80131250:
	addi r0,r3,-88
	cmplwi r0,20
	bgt lbl_80131264
	addi r3,r3,26
	blr 
lbl_80131264:
	addi r0,r3,-110
	cmplwi r0,3
	bgt lbl_80131278
	addi r3,r3,25
	blr 
lbl_80131278:
	cmpwi r3,109
	bnelr 
	li r3,80
	blr 
}

extern "C" asm void fn_80131288()
{
	stwu r1,-32(r1)
	mflr r0
	stw r0,36(r1)
	addi r11,r1,32
	bl _savegpr_28
	mr r28,r3
	mr r29,r4
	mr r30,r5
	li r31,1
	mr r3,r29
	li r4,0
	lwz r5,0(r28)
	addi r5,r5,-1
	bl fn_8013652C
	cmpw r29,r3
	bne lbl_801312D8
	lwz r4,12(r28)
	slwi r0,r3,2
	stwx r30,r4,r0
	b lbl_80131308
lbl_801312D8:
	lwz r3,4(r28)
	addi r0,r3,1
	stw r0,4(r28)
	cmpwi r30,0
	beq lbl_80131304
	mr r3,r30
	li r4,1
	lwz r12,12(r3)
	lwz r12,8(r12)
	mtctr r12
	bctrl 
lbl_80131304:
	li r31,0
lbl_80131308:
	mr r3,r31
	addi r11,r1,32
	bl _restgpr_28
	lwz r0,36(r1)
	mtlr r0
	addi r1,r1,32
	blr 
}
