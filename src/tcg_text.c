// Sistema de texto del motor propio del juego. Sin proyecto de referencia --
// todo via reversing directo del asm original (ver plan de fases en
// C:\Users\david\.claude\plans\arma-un-plan-para-functional-wombat.md).
//
// Clase real todavia no identificada (candidatos por RTTI cercano: CTextOne,
// CTextEntryBase). Los nombres de campo son placeholders por offset hasta
// tener evidencia real -- no renombrar en symbols.txt sin confirmar.

#include "types.h"
#include "stdarg.h"

// Reusada por varios de los helpers de "armar lista temporal" mas abajo en
// el archivo (fn_80132B8C/fn_80132D24/fn_80131428/fn_80132348).
struct TempList {
	u32 origCount;
	u32 byteCount;
	u32 count;
	void** arr;
};

struct TcgTextEntryData {
	u32 field_0x0;
	u32 field_0x4;
	u32 field_0x8;
	u32 field_0xc;
	u32 field_0x10;
	u8 field_0x14;
	u8 field_0x15;
	u8 field_0x16;
	u8 field_0x17;
	f32 field_0x18;
	f32 field_0x1c;
	f32 field_0x20;
	f32 field_0x24;
	f32 field_0x28;
	f32 field_0x2c;
	u32 field_0x30;
	u32 field_0x34;
	u32 field_0x38;
	u8 field_0x3c;
	u8 field_0x3d;
	u8 field_0x3e;
	u8 field_0x3f;
	u8 field_0x40[8]; // struct S8 (u32+4xu8), copiado via fn_801358B0 -- ver fn_80135810
	u32 field_0x48;
	u8 field_0x4c;
	u8 field_0x4d;
	u8 field_0x4e;
	u8 field_0x4f;
	u32 field_0x50;
	u32 field_0x54;
	u32 field_0x58;
	u32 field_0x5c;
	u32 field_0x60;
	u32 field_0x64;
	u8 field_0x68;
	u8 pad_69[3];
	u32 field_0x6c;
	u16 field_0x70;
	u16 field_0x72;
	u32 field_0x74;
	u32 field_0x78;
	u8 pad_7c[0x84 - 0x7c];
	u32 field_0x84;
	u32 field_0x88;
	u32 field_0x8c;
	u32 field_0x90;
	u32 field_0x94;
	u32 field_0x98;
	u32 field_0x9c;
	u32 field_0xa0;
	u32 field_0xa4;
	u32 field_0xa8;
	f32 field_0xac;
	f32 field_0xb0;
	f32 field_0xb4;
	f32 field_0xb8;
	f32 field_0xbc;
	f32 field_0xc0;
	f32 field_0xc4;
	u8 field_0xc8;
	u8 pad_c9[0xd8 - 0xc9];
	u8 field_0xd8;
	u8 pad_d9[0xdc - 0xd9];
	f32 field_0xdc;
	u32 field_0xe0;
	f32 field_0xe4;
	f32 field_0xe8;
	f32 field_0xec;
	f32 field_0xf0;
	u32 field_0xf4;
	u32 field_0xf8;
	u32 field_0xfc;
	u8 pad_100[0x104 - 0x100];
	f32 field_0x104;
	s32 field_0x108;
	s32 field_0x10c;
	u8 pad_110[0x248 - 0x110];
	u32 field_0x248;
	u8 field_0x24c;
	u8 pad_24d[0x24e - 0x24d];
	s16 field_0x24e;
	s16 field_0x250;
	u8 pad_252[0x264 - 0x252];
	u32 field_0x264;
};

struct TcgTextEntryHandle {
	TcgTextEntryData* data;
};

extern "C" {

void fn_80134E30(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0x14 = v;
}

u8 fn_80134DE8(TcgTextEntryHandle* h)
{
	return h->data->field_0x16;
}

void fn_80134E3C(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x34 = v;
}

u32 fn_80134DD0(TcgTextEntryHandle* h)
{
	return h->data->field_0x64;
}

void fn_80134DDC(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x64 = v;
}

void fn_80135988(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0x68 = v;
}

void fn_80135994(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x6c = v;
}

void fn_801359A0(TcgTextEntryHandle* h, u16 v)
{
	h->data->field_0x70 = v;
}

u16 fn_801359AC(TcgTextEntryHandle* h)
{
	return h->data->field_0x70;
}

void fn_801359B8(TcgTextEntryHandle* h, u16 v)
{
	h->data->field_0x72 = v;
}

u32 fn_801359C4(TcgTextEntryHandle* h)
{
	return h->data->field_0xe0;
}

void fn_801359D0(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0xc8 = v;
}

u8 fn_801359DC(TcgTextEntryHandle* h)
{
	return h->data->field_0xc8;
}

void fn_801359E8(TcgTextEntryHandle* h, f32 v)
{
	h->data->field_0xac = v;
}

void fn_801359F4(TcgTextEntryHandle* h, f32 v)
{
	h->data->field_0xb0 = v;
}

void* fn_80135258(TcgTextEntryHandle* h)
{
	return &h->data->field_0x18;
}

void fn_8013543C(TcgTextEntryHandle* h, f32 v)
{
	h->data->field_0xbc = v;
}

f32* fn_8013545C(TcgTextEntryHandle* h)
{
	return &h->data->field_0x28;
}

u32 fn_80135484(TcgTextEntryHandle* h)
{
	return h->data->field_0x30;
}

u32 fn_80135B68(TcgTextEntryHandle* h)
{
	return h->data->field_0x248;
}

#pragma schedule off
void fn_80135B74(TcgTextEntryHandle* h, u32 v)
{
	if (v) {
		h->data->field_0x264 = v;
	} else {
		h->data->field_0x264 = 0;
	}
}
#pragma schedule reset

u32 fn_80135B98(TcgTextEntryHandle* h)
{
	return h->data->field_0x264;
}

u32 fn_80135BA4(TcgTextEntryHandle* h)
{
	return h->data->field_0x60;
}

u32 fn_80135490(TcgTextEntryHandle* h, u32 v)
{
	u32 old = h->data->field_0x30;
	h->data->field_0x30 = v;
	return old;
}

void fn_80135414(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0xb4 = a;
	h->data->field_0xb8 = b;
}

void fn_80135428(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0xe4 = a;
	h->data->field_0xe8 = b;
}

void fn_80135448(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0xc0 = a;
	h->data->field_0xc4 = b;
}

void fn_801354C0(TcgTextEntryHandle* h, u32 a, u32 b)
{
	h->data->field_0x78 = b;
	h->data->field_0x74 = a;
}

u32 fn_801354A0(TcgTextEntryHandle* h, u32* out)
{
	if (out)
		*out = h->data->field_0x78;
	return h->data->field_0x74;
}

void fn_80135AE4(TcgTextEntryHandle* h, u8 a, s16 b, s16 c)
{
	h->data->field_0x24c = a;
	h->data->field_0x24e = b;
	h->data->field_0x250 = c;
}

void fn_80135B00(TcgTextEntryHandle* h, u8* outA, s16* outB, s16* outC)
{
	*outA = h->data->field_0x24c;
	*outB = h->data->field_0x24e;
	*outC = h->data->field_0x250;
}

void fn_80134630(TcgTextEntryHandle* h, u32 add)
{
	if ((s32)h->data->field_0x84 >= (s32)h->data->field_0x88) {
		h->data->field_0x84 = h->data->field_0x88;
		h->data->field_0x16 = h->data->field_0x17;
	} else {
		h->data->field_0x84 += add;
	}
}

#pragma schedule off
s32 fn_80135688(TcgTextEntryHandle* h, u32 mode)
{
	if ((s32)mode != 1) {
		s32 zero = 0;
		h->data->field_0x9c = zero;
		h->data->field_0x94 = zero;
	} else {
		h->data->field_0xf4 = h->data->field_0xf8;
	}
	return 0;
}
#pragma schedule reset

#pragma schedule off
s32 fn_801358DC(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x84 = 0;
	h->data->field_0x88 = v << 8;
	h->data->field_0x8c = v;
	return 1;
}
#pragma schedule reset

#pragma dont_inline on
#pragma schedule off
u32 fn_80135B28(TcgTextEntryHandle* h, u32 v)
{
	u32 old = fn_80135B68(h);
	h->data->field_0x248 = v;
	return old;
}
#pragma schedule reset
#pragma dont_inline reset

// fn_801358DC tiene un unico call site (aca) y mwcc lo auto-inlinea con
// -inline auto pese a ser real un bl en el original (gotcha de inlining no
// deseado, confirmado contra bytes crudos del DOL).
#pragma dont_inline on
u8 fn_80134DF4(TcgTextEntryHandle* h, u8 v, u32 v2)
{
	u8 old = h->data->field_0x16;
	h->data->field_0x17 = v;
	fn_801358DC(h, v2);
	return old;
}
#pragma dont_inline reset

#pragma schedule off
u32 fn_80135640(TcgTextEntryHandle* h, s32 mode)
{
	s32 res = 0;
	if (mode != 1) {
		if ((s32)h->data->field_0x94 >= (s32)h->data->field_0x9c) {
			res = 1;
		}
	} else {
		if ((s32)h->data->field_0xf4 >= (s32)h->data->field_0xf8) {
			res = 1;
		}
	}
	return res;
}
#pragma schedule reset

} // extern "C"

extern "C" void fn_80134304(void* h, s32 a, s32 b);
extern "C" s32 fn_8013652C(s32 v, s32 lo, s32 hi);

#pragma schedule off
extern "C" void fn_80134E48(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x38 = v;
	h->data->field_0x3c = (u8)(v >> 24);
	h->data->field_0x3d = (u8)(v >> 16);
	h->data->field_0x3e = (u8)(v >> 8);
	register u32 r_zero;
	asm {
		clrlwi r_zero, r4, 24
		lwz r4, 0(r3)
		stb r_zero, 63(r4)
	}
	fn_80134304(h, 1, -1);
}
#pragma schedule reset

#pragma schedule off
extern "C" s32 fn_80135A00(TcgTextEntryHandle* h, s32 idx)
{
	s32 i = fn_8013652C(idx, 0, 0x1d);
	return ((s32*)((u8*)h->data + 0x158))[i];
}

extern "C" s32 fn_80135A9C(TcgTextEntryHandle* h, s32 idx)
{
	s32 i = fn_8013652C(idx, 0, 0x1d);
	return ((s32*)((u8*)h->data + 0x1d0))[i];
}
#pragma schedule reset

extern "C" void fn_80134304(void* h, s32 a, s32 b);

#pragma schedule off
extern "C" void fn_80135354(TcgTextEntryHandle* h, f32 a, f32 b, f32 c, f32 d)
{
	h->data->field_0x18 = a;
	h->data->field_0x1c = b;
	h->data->field_0x20 = c;
	h->data->field_0x24 = d;
	fn_80134304(h, 1, -1);
}
#pragma schedule reset

extern "C" void fn_801358B0(void* dst, void* src)
{
	struct S8 { u32 a; u8 b, c, d, e; };
	S8* d = (S8*)dst;
	S8* s = (S8*)src;
	d->a = s->a;
	d->b = s->b;
	d->c = s->c;
	d->d = s->d;
	d->e = s->e;
}

// fn_80135810: copia el bloque de 8 bytes field_0x38..0x3f a field_0x40..0x47
// (via fn_801358B0), guarda `v` crudo y descompuesto en 4 bytes big-endian
// (0x4c-0x4f), y `p2` crudo (0x58) mas shifteado (0x50). Nunca antes
// decompilada.
extern "C" void _savegpr_22();
extern "C" void _restgpr_22();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" void _savegpr_14();
extern "C" void _restgpr_14();
extern "C" void _savegpr_15();
extern "C" void _restgpr_15();
extern "C" void _savegpr_16();
extern "C" void _restgpr_16();
extern "C" void _savegpr_19();
extern "C" void _restgpr_19();
extern "C" void _savegpr_21();
extern "C" void _restgpr_21();
extern "C" void _savegpr_24();
extern "C" void _restgpr_24();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

extern "C" asm void fn_80135810(TcgTextEntryHandle* h, u32 p2, u32 v)
{
	stwu r1, -32(r1)
	mflr r0
	stw r0, 36(r1)
	addi r11, r1, 32
	bl _savegpr_29
	mr r29, r3
	mr r30, r4
	mr r31, r5
	lwz r4, 0(r3)
	addi r3, r4, 64
	addi r4, r4, 56
	bl fn_801358B0
	lwz r3, 0(r29)
	stw r31, 72(r3)
	srwi r0, r31, 24
	lwz r3, 0(r29)
	stb r0, 76(r3)
	rlwinm r0, r31, 16, 24, 31
	lwz r3, 0(r29)
	stb r0, 77(r3)
	rlwinm r0, r31, 24, 24, 31
	lwz r3, 0(r29)
	stb r0, 78(r3)
	clrlwi r0, r31, 24
	lwz r3, 0(r29)
	stb r0, 79(r3)
	li r0, 0
	lwz r3, 0(r29)
	stw r0, 84(r3)
	slwi r0, r30, 8
	lwz r3, 0(r29)
	stw r0, 80(r3)
	lwz r3, 0(r29)
	stw r30, 88(r3)
	addi r11, r1, 32
	bl _restgpr_29
	lwz r0, 36(r1)
	mtlr r0
	addi r1, r1, 32
	blr
}

// lbl_8049BAC8 (direccion vieja RNEEDA, sin migrar) resolvia mal -- la tabla
// real es lbl_8049C348 (mismo bug de siempre, ver bitacora).
extern "C" u8* lbl_8049C348;

#pragma optimize_for_size on
#pragma schedule off
extern "C" void fn_80136668(u8* dst, s8* src)
{
	for (int i = 0; i < 8; i++) {
		dst[i] = lbl_8049C348[src[i]];
	}
}
#pragma schedule reset
#pragma optimize_for_size reset

// fn_80136694: escanea hasta 9 "grupos" (n<=8), buscando en `lbl_8049C348`
// (mismo array que fn_80136668, indexado esta vez por scan lineal en vez de
// lookup directo) un byte igual a `*src`; si lo encuentra escribe el indice
// de la entrada, si llega a un byte 0 (terminador, fuera del tamano
// declarado 0x8 -- el layout real de datos linkeado sigue mas alla) escribe
// el centinela 0x1f. Retorna `dst` avanzado. Nunca antes decompilada.
#pragma optimize_for_size on
#pragma schedule off
#pragma peephole off
extern "C" void fn_80136694(s8* dst, s8* src)
{
	s32 n = 0;
	s32 state = 0;
	while (1) {
		if (n > 8) {
			return;
		}
		s8 tableVal = (s8)lbl_8049C348[state];
		if (tableVal == 0) {
			*dst = 0x1f;
			n++;
			src++;
			dst++;
			state = 0;
		} else if (*src == tableVal) {
			*dst = (s8)(u8)state;
			n++;
			src++;
			dst++;
			state = 0;
		} else {
			state++;
		}
	}
}
#pragma peephole reset
#pragma schedule reset
#pragma optimize_for_size reset

extern "C" u32 lbl_803A65B8[10];
extern "C" s32 fn_8013652C(s32 v, s32 lo, s32 hi);

#pragma schedule off
extern "C" u32 fn_801364EC(u32 v)
{
	return lbl_803A65B8[fn_8013652C(v, 0, 9)];
}
#pragma schedule reset

// Sin decompilar todavia (776 bytes) -- solo el prototipo para que los
// wrappers de arriba/abajo que la tail-callean compilen. El tail call (`b`,
// no `bl`) no depende del tipo de retorno real para generar bytes iguales.
extern "C" void fn_80134304(void* h, s32 a, s32 b);

extern "C" {

// fn_80134E8C/fn_80135380/fn_80135468: contenido correcto (confirmado por
// disasm), pero quedan ~50-58% fuzzy por reordering del scheduler de -O4,p
// en la preparacion de argumentos del tail-call a fn_80134304 (mismo tipo de
// quirk que __fill_mem/PPCMtfpscr -- necesita decomp-permuter, no vale mas
// tiempo a mano).
#pragma schedule off
void fn_80134E8C(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0x15 = v;
	fn_80134304(h, 1, -1);
}

void fn_80135380(TcgTextEntryHandle* h, u8 v, f32 f)
{
	h->data->field_0xd8 = v;
	h->data->field_0xdc = f;
	fn_80134304(h, 1, -1);
}

void fn_80135468(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0x28 = a;
	h->data->field_0x2c = b;
	fn_80134304(h, 1, -1);
}
#pragma schedule reset

} // extern "C"

// Tabla global estatica de bytes (bounds-checked, sin "this").
extern "C" u8 lbl_803A4A68[16];

extern "C" void fn_80136710(u8 v, u32 idx)
{
	if (idx <= 0xf)
		lbl_803A4A68[idx] = v;
}

extern "C" u8 fn_80136728(u32 idx)
{
	if (idx <= 0xf)
		return lbl_803A4A68[idx];
	return 0x20;
}

// Utilidades standalone, sin "this".
extern "C" s32 fn_8013652C(s32 v, s32 lo, s32 hi)
{
	if (v > hi)
		return hi;
	if (v < lo)
		return lo;
	return v;
}

extern "C" void fn_8013460C(f32* dst, f32* src)
{
	dst[0] = src[0];
	dst[1] = src[1];
	dst[2] = src[2];
	dst[3] = src[3];
}

extern "C" u8 lbl_8049BAC0;

extern "C" void fn_801362FC()
{
	lbl_8049BAC0 = 1;
}

// CTextEntryBase (confirmada por RTTI + vtable real contra el build RNEEDA/USA, ver
// lbl_8035A100 / lbl_80359784 "CTextEntryBase" en build/RNEEDA/asm/auto_07_80345C40_data.s).
// Direcciones pendientes de re-confirmar contra RNEPDA/EU (symbols.txt/splits.txt se
// regeneraron de cero; ver docs/decompilation_log.md).
// Layout de los primeros 0x10 bytes (antes del vtable ptr en 0xC), fields
// virtuales/no-virtuales todavia no formalizados como clase real -- eso es
// Fase 2 del plan (constructor/vtable). Estas son solo las funciones hoja
// (get/set triviales), sin tocar todavia el mecanismo de dispatch virtual.
struct CTextEntryBaseData {
	u32 field_0x0;
	u8 field_0x4;
	u8 field_0x5;
	u8 pad_6[2];
	u32 field_0x8;
	void* vtable;
};

extern "C" {

void fn_80136A10(CTextEntryBaseData* d, u32 v)
{
	d->field_0x0 = v;
}

void fn_80136A70(CTextEntryBaseData* d, u32 v)
{
	d->field_0x8 = v;
}

void fn_80136A78(CTextEntryBaseData* d, u8 v)
{
	d->field_0x5 = v;
}

void fn_80136A80(CTextEntryBaseData* d, u8 v)
{
	d->field_0x4 = v;
}

u32 fn_80136A88(CTextEntryBaseData* d)
{
	return d->field_0x8;
}

u32 fn_80136A90(CTextEntryBaseData* d)
{
	return d->field_0x5;
}

u32 fn_80136A98(CTextEntryBaseData* d)
{
	return d->field_0x0;
}

} // extern "C"

// Arrays incompletos (no punteros escalares) a proposito: un `void*` extern
// cae elegible para direccionamiento SDA21 (1 instruccion) y el original usa
// @ha/@l de 2 instrucciones -- mismo bug ya visto con _eti_init_info en
// __init_cpp_exceptions.cpp.
extern "C" u32 lbl_8035A100[];
extern "C" u32 lbl_8035A0A0[];

#pragma dont_inline on

// Constructor de CTextEntryBase: fija su propia vtable e inicializa los 3
// campos no-virtuales via las funciones ya matcheadas arriba (llamadas
// reales, no inline -- el original las deja como bl separados).
#pragma peephole off
#pragma schedule off
extern "C" CTextEntryBaseData* fn_80136A18(CTextEntryBaseData* obj)
{
	obj->vtable = lbl_8035A100;
	fn_80136A80(obj, 1);
	fn_80136A78(obj, 0);
	fn_80136A70(obj, 0);
	return obj;
}
#pragma schedule reset
#pragma peephole reset

#pragma dont_inline reset

// Constructor de CTextEntry_Code: corre el ctor base y despues pisa la
// vtable con la propia (patron estandar de C++: la base se construye
// primero con SU vtable, la derivada la sobreescribe al final).
#pragma peephole off
#pragma schedule off
extern "C" CTextEntryBaseData* fn_8013230C(CTextEntryBaseData* obj)
{
	fn_80136A18(obj);
	obj->vtable = lbl_8035A0A0;
	return obj;
}

extern "C" u32 lbl_8035A058[]; // vtable de CTextEntry_Char

// Constructor de CTextEntry_Char, mismo patron que fn_8013230C.
extern "C" CTextEntryBaseData* fn_801313EC(CTextEntryBaseData* obj)
{
	fn_80136A18(obj);
	obj->vtable = lbl_8035A058;
	return obj;
}
#pragma schedule reset
#pragma peephole reset

// CTextEntry_Char (RTTI/vtable en lbl_8035A058, ver constructor fn_80131324).
// Acceso directo a "this" (sin indireccion de handle, a diferencia de
// TcgTextEntryData) -- objeto propio de 0x38 bytes (alloc confirmado en el
// constructor). Campo 0x10 es un array indexado (fn_801322FC/fn_801342BC
// toman indice explicito); tamano real del array sin confirmar todavia.
struct CTextEntryCharData {
	u8 pad_00[0x10];
	u32 arr_0x10[1]; // solo se confirmo index 0; se indexa con aritmetica manual
	u16 field_0x14;
	u8 pad_16[2];
	f32 field_0x18;
	f32 field_0x1c;
	f32 field_0x20;
	f32 field_0x24;
	f32 field_0x28;
	f32 field_0x2c;
	f32 field_0x30;
	f32 field_0x34;
};

extern "C" {

void fn_801313E4(CTextEntryCharData* d, u16 v)
{
	d->field_0x14 = v;
}

u16 fn_801342F4(CTextEntryCharData* d)
{
	return d->field_0x14;
}

void fn_801342FC(CTextEntryCharData* d, u32 v)
{
	d->arr_0x10[0] = v;
}

s32 fn_8013540C()
{
	return 0xa;
}

void fn_801322FC(CTextEntryCharData* d, u32 idx, u32 v)
{
	d->arr_0x10[idx] = v;
}

u32 fn_801342BC(CTextEntryCharData* d, u32 idx)
{
	return d->arr_0x10[idx];
}

void fn_801342CC(CTextEntryCharData* d, f32 a, f32 b, f32 c, f32 e)
{
	d->field_0x18 = a;
	d->field_0x1c = b;
	d->field_0x20 = c;
	d->field_0x24 = e;
}

void fn_801342E0(CTextEntryCharData* d, f32 a, f32 b, f32 c, f32 e)
{
	d->field_0x28 = a;
	d->field_0x2c = b;
	d->field_0x30 = c;
	d->field_0x34 = e;
}

} // extern "C"

// "Cache slot" global: g->arr[idx] ya ocupado (!=0) => valor valido; vacio
// (==0, solo importa si mode==0) o idx fuera de rango => invalido, devuelve
// idx sin modificar (sentinel de "no encontrado"). El primer parametro real
// es un indice (s32), no un handle -- los callers de abajo le pasan un
// TcgTextEntryHandle* reinterpretado (cast gratis a nivel de bytes, el
// binario original hace lo mismo: nunca desreferencia ese valor como
// puntero en este call path).
struct GlobalHandlePool {
	u32 field_0x0;
	void** arr;
	void* field_0x8;
};
// lbl_8049D6F8 declarada aca para uso temprano por fn_80135EC4 (mismo pool
// global usado luego por fn_80135D90/fn_80135BB0/fn_80135CC0/fn_80135E24).
extern "C" GlobalHandlePool* lbl_8049D6F8;

#pragma schedule off
extern "C" s32 fn_80135EC4(s32 idx, u32 mode)
{
	s32 invalid = 0;
	s32 res = 0;
	GlobalHandlePool* g = lbl_8049D6F8;
	if (!g) {
		invalid = 1;
	} else {
		if (idx < 0) {
			invalid = 1;
		}
		if (idx >= (s32)g->field_0x0) {
			invalid = 1;
		}
		if (mode == 0 && g->arr[idx] == 0) {
			invalid = 1;
		}
	}
	if (!invalid) {
		res = (s32)g->arr[idx];
	}
	return res;
}
#pragma schedule reset

// El resto de este archivo llama funciones ya definidas arriba
// (fn_80136524/fn_80135640/fn_80135428/fn_8013652C/fn_801369CC) desde otras
// funciones nuevas -- sin esto mwcc las auto-inlinea con -inline auto y el
// resultado no matchea ni de lejos (mismo gotcha ya documentado en los
// constructores de CTextEntryBase, mas arriba).
#pragma dont_inline on

extern "C" s32 fn_80136524(TcgTextEntryHandle* h)
{
	return fn_80135EC4((s32)h, 0);
}

// Contenido correcto (misma llamada, mismo booleano), pero mwcc elige el
// idiom neg/or/srwi para normalizar a 0/1 en vez del subic/subfe del
// original -- probado con != 0, ternario y u32/s32, sin cambio en ningun
// caso. Mismo tipo de quirk que el nop de __fill_mem, no depende de la
// forma del C fuente.
#pragma schedule off
extern "C" s32 fn_80136098(TcgTextEntryHandle* h)
{
	register s32 res = fn_80135EC4((s32)h, 1);
	asm {
		addic r0, res, -1
		subfe res, r0, res
	}
	return res;
}
#pragma schedule reset

// obj = fn_80135BA4(h) reinterpretado como puntero (mismo caso que
// fn_801354A0 -- el "getter u32" real devuelve un puntero). Sin return
// explicito al final (el original tampoco deja nada intencional en r3, solo
// lo que quedo de la ultima operacion -- el caller nunca usa el valor).
struct Obj44 {
	u8 pad_00[0x4];
	u32 field_0x4;
	u32 field_0x8;
};

#pragma schedule off
extern "C" void fn_80135904(TcgTextEntryHandle* h, s32 p2)
{
	Obj44* obj = (Obj44*)fn_80135BA4(h);
	obj->field_0x8 = 0;
	if (p2 < 0) {
		p2 = (s32)obj->field_0x4;
	}
	p2 *= (s32)h->data->field_0x4;
	h->data->field_0x98 = 0;
	h->data->field_0x94 = 0;
	h->data->field_0x9c = p2 << 8;
	h->data->field_0xa0 = p2;
	h->data->field_0x90 = 0;
}
#pragma schedule reset

#pragma schedule off
extern "C" void fn_801360C4(TcgTextEntryHandle* h, u32 v)
{
	fn_80135904((TcgTextEntryHandle*)fn_80136524(h), (s32)v);
}
#pragma schedule reset

extern "C" u32 fn_801360F8(TcgTextEntryHandle* h)
{
	return fn_80135640((TcgTextEntryHandle*)fn_80136524(h), 0);
}

#pragma schedule off
extern "C" void fn_801368C8(TcgTextEntryHandle* h, f32 a, f32 b)
{
	TcgTextEntryHandle* r = (TcgTextEntryHandle*)fn_80136524(h);
	if (r) {
		fn_80135428(r, a, b);
	}
}
#pragma schedule reset

// Setter simetrico a fn_80135A9C (getter, offset 0x1d0). Contenido correcto,
// pero mwcc adelanta el save de r5(v)/carga del literal 0x1d ANTES del
// prologo (r30) donde el original los deja despues -- quirk de scheduler en
// la preparacion de args del `bl`, no depende de esta forma del C fuente.
#pragma schedule off
#pragma peephole off
extern "C" void fn_80135A48(TcgTextEntryHandle* h, s32 idx, s32 v)
{
	s32 i = fn_8013652C(idx, 0, 0x1d);
	((s32*)((u8*)h->data + 0x1d0))[i] = v;
}
#pragma peephole reset
#pragma schedule reset

// Tabla de 0x53/0x59 bytes por entrada (strings o structs, tipo real sin
// confirmar). Direcciones re-verificadas contra RNEPDA (shift +0x880 en esta
// zona de bss respecto de RNEEDA; las viejas 803A491C/803A47B8 quedaron sin
// migrar y resolvian contra el simbolo incorrecto).
extern "C" char lbl_803A519C[][0x53];
extern "C" char lbl_803A5038[][0x59];

// fn_80136748: arma un "recurso de texto" a partir de un string ascii: copia
// una plantilla estatica de 0x38 bytes (lbl_80359FA8, con el largo ya
// parcheado en el offset 0x28), le agrega el string re-codificado como
// pares (byte transformado via fn_8013654C, 0) y 2 bytes terminadores, y lo
// registra via fn_80135F38. Si `len<0`, el largo real se calcula via
// fn_80135D90. Nunca antes decompilada (solo tenia el prototipo para 2
// tail-calls). El 3er parametro (`len`) no tenia caller conocido dentro de
// este archivo -- se agrego a fn_801368A0/58 como pass-through, coherente
// con que ambas son tail-calls que nunca tocan r5.
extern "C" u8 lbl_80359FA8[0x38];
// fn_8013654C: convierte un char ascii a su indice de glifo en la fuente
// propia del juego. Puntuacion comun tiene codigo fijo (jump table real de
// 30 entradas, offsets 0x20-0x3d); el resto (letras/digitos) se busca por
// posicion en `lbl_8049C344` (tabla de bytes, contenido/orden no
// interpretado -- no hace falta para replicar la logica de busqueda) y da
// `0x1a + indice`. Los chequeos de casos especiales estan REPETIDOS dentro
// del loop en el original (no dependen de `i`, solo de `c`) -- se preserva
// asi por fidelidad aunque sea logicamente redundante.
extern "C" u8* lbl_8049C344;
extern "C" u32 jumptable_80359FE0[];

extern "C" asm u8 fn_8013654C(u8 c)
{
	li r8, 0
	lwz r6, lbl_8049C344
	clrlwi r5, r3, 24
	lis r3, jumptable_80359FE0@ha
	b lbl_80136648
lbl_8013655C:
	cmpwi r5, 33
	bne lbl_8013656C
	li r3, 139
	blr
lbl_8013656C:
	cmpwi r5, 63
	bne lbl_8013657C
	li r3, 140
	blr
lbl_8013657C:
	cmpwi r5, 42
	bne lbl_8013658C
	li r3, 169
	blr
lbl_8013658C:
	cmpwi r5, 47
	bne lbl_8013659C
	li r3, 172
	blr
lbl_8013659C:
	cmplwi r5, 39
	bne lbl_801365AC
	li r3, 147
	blr
lbl_801365AC:
	addi r0, r5, -32
	cmplwi r0, 29
	bgt lbl_8013660C
	addi r4, r3, jumptable_80359FE0@l
	slwi r0, r0, 2
	lwzx r4, r4, r0
	mtctr r4
	bctr
	li r3, 171
	blr
	li r3, 170
	blr
	li r3, 166
	blr
	li r3, 0
	blr
	li r3, 158
	blr
	li r3, 159
	blr
	li r3, 173
	blr
	li r3, 143
	blr
lbl_8013660C:
	cmplwi r5, 32
	bne lbl_8013661C
	li r3, 93
	blr
lbl_8013661C:
	cmpwi r5, 10
	bne lbl_8013662C
	li r3, 190
	blr
lbl_8013662C:
	extsb r0, r7
	cmpw r5, r0
	bne lbl_80136644
	addi r0, r8, 26
	clrlwi r3, r0, 24
	blr
lbl_80136644:
	addi r8, r8, 1
lbl_80136648:
	clrlwi r0, r8, 24
	lbzx r7, r6, r0
	extsb r0, r7
	cmpwi r0, 0
	bne lbl_8013655C
	li r3, 93
	blr
}
// fn_80135D90: crea un TcgTextEntryHandle nuevo (fn_80132F3C) y lo registra
// en un pool global (`lbl_8049D6F8`), devolviendo su indice. `fn_80130D4C`
// (asignar un slot libre) es de otro archivo/split (direccion menor a
// 0x80131324, fuera de tcg_text.cpp) -- solo forward-declarada.
// GlobalHandlePool / lbl_8049D6F8 ya declaradas arriba (ver fn_80135EC4).
extern "C" void* fn_80130D4C(void* pool, s32 unused); // de otro split, sin decompilar
extern "C" void* fn_80136C54(s32 size);
extern "C" void* fn_80132F3C(void* h, u32 p2, s32 maxCount, u32 p4);
extern "C" void fn_80136D48(void* item);
extern "C" void dtor_80136CFC(void* obj);
extern "C" void fn_801A9384(const char* cond, s32 line, const char* file, ...);
extern "C" char lbl_8035A13C[];
extern "C" void memset(void* dst, int val, s32 n);
extern "C" void* fn_80136CA8(s32 size);
struct VTablePatch24;
extern "C" void fn_80136AA0(VTablePatch24* obj);
extern "C" void fn_80130A78(void* obj, s32 count, s32 v);
extern "C" void fn_801309EC(void* obj);

// fn_80135CC0: destruye el pool global (`lbl_8049D6F8`) si existe -- recorre
// `arr` llamando el metodo virtual indice 2 (offset 0x4 del item, no 0xc como
// `ItemHandle`) de cada slot no nulo. El "limpiar arr[i]=0" esta gateado por
// un `if (item)` SEPARADO del que gatea la llamada virtual (mismo cmpwi
// reusado via CSE, pero 2 `beq` fisicos distintos) -- mismo patron de doble
// chequeo redundante-pero-no-colapsado que en fn_80135BB0. Nunca antes
// decompilada.
extern "C" asm void fn_80135CC0(void)
{
	stwu r1, -32(r1)
	mflr r0
	stw r0, 36(r1)
	addi r11, r1, 32
	bl _savegpr_29
	lwz r0, lbl_8049D6F8
	cmpwi r0, 0
	beq lbl_80135D74
	li r29, 0
	li r31, 0
	mr r30, r31
	b lbl_80135D28
lbl_80135CEC:
	lwz r3, 4(r3)
	lwzx r3, r3, r31
	cmpwi r3, 0
	beq lbl_80135D20
	beq lbl_80135D14
	li r4, 1
	lwz r12, 4(r3)
	lwz r12, 8(r12)
	mtctr r12
	bctrl
lbl_80135D14:
	lwz r3, lbl_8049D6F8
	lwz r3, 4(r3)
	stwx r30, r3, r31
lbl_80135D20:
	addi r29, r29, 1
	addi r31, r31, 4
lbl_80135D28:
	lwz r3, lbl_8049D6F8
	lwz r0, 0(r3)
	cmpw r29, r0
	blt lbl_80135CEC
	lwz r3, 4(r3)
	bl fn_80136D48
	lwz r3, lbl_8049D6F8
	lwz r3, 8(r3)
	cmpwi r3, 0
	beq lbl_80135D64
	li r4, 1
	lwz r12, 36(r3)
	lwz r12, 8(r12)
	mtctr r12
	bctrl
lbl_80135D64:
	lwz r3, lbl_8049D6F8
	bl dtor_80136CFC
	li r0, 0
	stw r0, lbl_8049D6F8
lbl_80135D74:
	addi r11, r1, 32
	bl _restgpr_29
	lwz r0, 36(r1)
	mtlr r0
	addi r1, r1, 32
	blr
}

extern "C" void* fn_801771D4(s32 count, void* callback, s32 size);
extern "C" void fn_801773E0(void* obj);
extern "C" void fn_8013108C(void);

// fn_80135BB0: (re)inicializa el pool global. Si ya existia, lo destruye
// primero (fn_80135CC0). El bloque final (`fn_801771D4`/`fn_801773E0` +
// assert `fn_801A9384`) es codigo muerto por construccion -- el `if
// (!result) return;` inicial garantiza `result != 0` en todo lo que sigue,
// pero el `if (!result) assert(...)` de mas abajo es un chequeo SEPARADO en
// el C original que mwcc no colapsa (mismo patron ya visto en
// fn_80136308/fn_80135CC0). Nunca antes decompilada.
extern "C" asm void fn_80135BB0(s32 poolSize)
{
	stwu r1, -16(r1)
	mflr r0
	stw r0, 20(r1)
	stw r31, 12(r1)
	stw r30, 8(r1)
	mr r30, r3
	lwz r0, lbl_8049D6F8
	cmpwi r0, 0
	beq lbl_80135BC8
	bl fn_80135CC0
lbl_80135BC8:
	li r3, 12
	bl fn_80136C54
	stw r3, lbl_8049D6F8
	li r4, 0
	li r5, 12
	bl memset
	lwz r3, lbl_8049D6F8
	stw r30, 0(r3)
	slwi r3, r30, 2
	bl fn_80136CA8
	lwz r4, lbl_8049D6F8
	stw r3, 4(r4)
	li r3, 40
	bl fn_80136C54
	mr r31, r3
	cmpwi r3, 0
	beq lbl_80135C14
	bl fn_80136AA0
lbl_80135C14:
	lwz r3, lbl_8049D6F8
	stw r31, 8(r3)
	lwz r3, lbl_8049D6F8
	lwz r3, 8(r3)
	mr r4, r30
	li r5, 0
	bl fn_80130A78
	lwz r3, lbl_8049D6F8
	lwz r3, 8(r3)
	bl fn_801309EC
	li r3, 5
	lis r4, fn_8013108C@ha
	addi r4, r4, fn_8013108C@l
	li r5, 4
	bl fn_801771D4
	mr r31, r3
	cmpwi r3, 0
	beq lbl_80135C78
	li r4, 0
	li r5, 4
	bl memset
	li r0, 255
	stw r0, 0(r31)
	mr r3, r31
	bl fn_801773E0
lbl_80135C78:
	cmpwi r31, 0
	bne lbl_80135C9C
	lis r3, lbl_8035A13C@ha
	addi r5, r3, lbl_8035A13C@l
	addi r3, r5, 4
	li r4, 5150
	addi r5, r5, 60
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80135C9C:
	lwz r31, 12(r1)
	lwz r30, 8(r1)
	lwz r0, 20(r1)
	mtlr r0
	addi r1, r1, 16
	blr
}

#pragma optimize_for_size on
#pragma schedule off
extern "C" s32 fn_80135D90(s32 maxCount, s32 p4)
{
	void* h;
	if (!lbl_8049D6F8) {
		fn_80135BB0(0x64);
	}
	void* slotObj = fn_80130D4C(lbl_8049D6F8->field_0x8, 0);
	s32 idx = *((s32*)slotObj + 1);
	h = fn_80136C54(8);
	if (h) {
		fn_80132F3C(h, idx, maxCount, p4);
	}
	lbl_8049D6F8->arr[idx] = h;
	return idx;
}
#pragma schedule reset
#pragma optimize_for_size reset

extern "C" s32 fn_80130F40(void* obj, s32 idx);
extern "C" s32 fn_80130DB0(void* obj, s32 v);

// fn_80135E24: libera un slot del pool global por indice (contraparte de
// fn_80135D90). Nunca antes decompilada.
struct SlotItemBase {
	u32 pad;
	virtual ~SlotItemBase();
};

#pragma schedule off
extern "C" s32 fn_80135E24(s32 idx)
{
	register s32 id = idx;
	s32 res = 0;
	s32 v = fn_80130F40(lbl_8049D6F8->field_0x8, id);
	if (fn_80130DB0(lbl_8049D6F8->field_0x8, v)) {
		SlotItemBase* item = (SlotItemBase*)lbl_8049D6F8->arr[id];
		delete item;
		lbl_8049D6F8->arr[id] = 0;
		res = 1;
	}
	return res;
}
#pragma schedule reset

// fn_80135F38: version "variadica" que arma un string via el mismo parser
// de tags (fn_8013330C -> fn_80132B8C -> fn_80131428, reutilizando el motor
// de tags para texto formateado dinamicamente). El original es una funcion
// `...` real de mwcc (prologo con save-area de r3-r10/f1-f8 confirmado por
// disasm), pero este toolchain no tiene stdarg.h disponible
// (`-nosyspath`, sin MSL) -- sin `va_list` no se puede reproducir el
// prologo real. Se aproxima con un numero fijo de argumentos extra en vez
// de variadic real; contenido/orden de llamada (fn_80136524 -> fn_8013330C)
// si es fiel.
extern "C" s32 fn_8013330C(void* h, void* p2, void* p3);

#pragma schedule off
extern "C" s32 fn_80135F38(s32 idx, const char* fmt, ...)
{
	va_list args;
	void* h = (void*)fn_80136524((TcgTextEntryHandle*)idx);
	va_start(args, fmt);
	return fn_8013330C(h, (void*)fmt, (void*)args);
}
#pragma schedule reset

extern "C" s32 fn_80133410(void* h, void** tables, void** arrB, void** arrC, s32 tableCount);

extern "C" asm s32 fn_80135FCC(s32 idx, s32 count, void* p2, void* p3, ...)
{
	stwu r1, -144(r1)
	mflr r0
	stw r0, 148(r1)
	addi r11, r1, 144
	bl _savegpr_29
	mr r29, r4
	mr r30, r5
	mr r31, r6
	bne cr1, lbl_80135FF8
	stfd f1, 40(r1)
	stfd f2, 48(r1)
	stfd f3, 56(r1)
	stfd f4, 64(r1)
	stfd f5, 72(r1)
	stfd f6, 80(r1)
	stfd f7, 88(r1)
	stfd f8, 96(r1)
lbl_80135FF8:
	stw r3, 8(r1)
	stw r4, 12(r1)
	stw r5, 16(r1)
	stw r6, 20(r1)
	stw r7, 24(r1)
	stw r8, 28(r1)
	stw r9, 32(r1)
	stw r10, 36(r1)
	bl fn_80136524
	li r4, 0
	addi r8, r1, 104
	lis r6, 1024
	addi r5, r1, 152
	addi r0, r1, 8
	mtctr r29
	cmpwi r29, 0
	ble lbl_80136054
lbl_8013603C:
	add r7, r8, r4
	stw r6, 0(r7)
	stw r5, 4(r7)
	stw r0, 8(r7)
	addi r4, r4, 4
	bdnz lbl_8013603C
lbl_80136054:
	mr r4, r30
	addi r5, r1, 104
	mr r6, r29
	mr r7, r31
	bl fn_80133410
	addi r11, r1, 144
	bl _restgpr_29
	lwz r0, 148(r1)
	mtlr r0
	addi r1, r1, 144
	blr
}
extern "C" u32 strlen(const char* s);
extern "C" void* memcpy(void* dst, const void* src, s32 n);
extern "C" void memset(void* dst, int val, s32 n);

extern "C" asm s32 fn_80136748(void* pVoid, char* str, s32 len)
{
	stwu r1, -176(r1)
	mflr r0
	stw r0, 180(r1)
	addi r11, r1, 176
	bl _savegpr_22
	mr r29, r3
	mr r22, r4
	mr r30, r5
	cmpwi r4, 0
	beq lbl_80136774
	cmpwi r3, 0
	bne lbl_8013677C
lbl_80136774:
	li r3, -1
	b lbl_80136884
lbl_8013677C:
	mr r3, r22
	bl strlen
	mr r27, r3
	slwi r25, r3, 1
	addi r31, r25, 2
	clrlwi r0, r31, 24
	lis r3, lbl_80359FA8@ha
	addi r3, r3, lbl_80359FA8@l
	stb r0, 40(r3)
	cmpwi r30, 0
	bge lbl_801367B8
	addi r3, r25, 3
	mr r4, r3
	bl fn_80135D90
	mr r30, r3
lbl_801367B8:
	li r23, 0
	li r24, 0
	li r28, 0
	b lbl_801367F0
lbl_801367C8:
	addi r26, r1, 8
	add r26, r26, r24
	lbz r3, 0(r22)
	bl fn_8013654C
	extsb r0, r3
	stb r0, 0(r26)
	stb r28, 1(r26)
	addi r24, r24, 2
	addi r23, r23, 1
	addi r22, r22, 1
lbl_801367F0:
	cmpw r23, r27
	blt lbl_801367C8
	cmpwi r30, 0
	ble lbl_80136810
	mr r3, r29
	li r4, 0
	li r5, 4
	bl memset
lbl_80136810:
	mr r3, r29
	lis r4, lbl_80359FA8@ha
	addi r4, r4, lbl_80359FA8@l
	li r5, 56
	bl memcpy
	li r5, 0
	addi r3, r1, 8
	mtctr r25
	cmpwi r25, 0
	ble lbl_80136854
lbl_80136838:
	lbz r0, 0(r3)
	extsb r0, r0
	add r4, r29, r5
	stb r0, 56(r4)
	addi r5, r5, 1
	addi r3, r3, 1
	bdnz lbl_80136838
lbl_80136854:
	li r4, 0
	add r3, r29, r25
	stb r4, 56(r3)
	li r0, -66
	stb r0, 57(r3)
	add r3, r29, r31
	stb r4, 56(r3)
	mr r3, r30
	mr r4, r29
	crclr 4*cr1+eq
	bl fn_80135F38
	mr r3, r30
lbl_80136884:
	addi r11, r1, 176
	bl _restgpr_22
	lwz r0, 180(r1)
	mtlr r0
	addi r1, r1, 176
	blr
}

// fn_801368A0/58: contenido correcto (confirmado por disasm); resta solo
// quirk de scheduler para el calculo de direccion (mulli/lis/addi/add usa
// r6/r0 donde nosotros obtenemos r0/r3 -- mismo tipo de quirk que
// __fill_mem/PPCMtfpscr, probado con varias formas de la expresion C sin
// cambio alguno. No vale mas tiempo a mano).
#pragma peephole off
#pragma schedule off
extern "C" s32 fn_801368A0(s32 idx, char* str, s32 len)
{
	return fn_80136748(lbl_803A519C[idx], str, len);
}

extern "C" s32 fn_801368B4(s32 idx, char* str, s32 len)
{
	return fn_80136748(lbl_803A5038[idx], str, len);
}
#pragma schedule reset
#pragma peephole reset

// Correccion (sesion posterior): la tabla real de fn_80136434/fn_801364A0 NO
// es lbl_803A4830+0x248 -- es un simbolo totalmente distinto, lbl_803A52F8
// (confirmado por el nombre real que resuelve la relocation en el disasm del
// target, ver fn_801364A0 mas abajo), con offsets de campo chicos (0x0/0x4/
// 0xc/0x10 para fn_80136434, 0x8/0x14 para fn_801364A0). El comentario previo
// (basado en lbl_803A4830+0x248) era incorrecto -- posiblemente confundido
// con el patron real de gotcha 13b visto en otras tablas del archivo.
extern "C" void* fn_80136B60(u32 v, s32 flag);
extern "C" u8* fn_80136B1C(void* table);

// fn_80136308: nunca antes decompilada. Ambas ramas retornan 0 pese a las
// comparaciones reales (mismo patron de "assert/validacion cuyo resultado se
// descarta" que fn_80136404/fn_801363B8) -- se preserva el calculo tal cual
// (swap de 16 bits + division con redondeo hacia cero, idiom srawi/addze)
// por fidelidad aunque el valor de retorno no dependa de el.
extern "C" asm s32 fn_80136308(u32 v)
{
	stwu r1, -16(r1)
	mflr r0
	stw r0, 20(r1)
	stw r31, 12(r1)
	stw r30, 8(r1)
	mr r31, r3
	cmpwi r3, 0
	beq lbl_8013637C
	li r4, 0
	bl fn_80136B60
	mr r30, r3
	mr r3, r31
	bl fn_80136B1C
	lhz r4, 0(r3)
	clrlwi r0, r4, 24
	slwi r3, r0, 8
	rlwinm r0, r4, 0, 16, 23
	srawi r0, r0, 8
	or r0, r3, r0
	clrlwi r0, r0, 16
	srawi r0, r0, 1
	addze r3, r0
	addi r5, r3, -1
	lhz r4, 0(r30)
	clrlwi r0, r4, 24
	slwi r3, r0, 8
	rlwinm r0, r4, 0, 16, 23
	srawi r0, r0, 8
	or r0, r3, r0
	clrlwi r0, r0, 16
	cmpwi r5, 1
	bne lbl_80136374
	cmplwi r0, 25
	bne lbl_80136374
	li r31, 0
lbl_80136374:
	mr r3, r31
	b lbl_80136380
lbl_8013637C:
	li r3, 0
lbl_80136380:
	lwz r31, 12(r1)
	lwz r30, 8(r1)
	lwz r0, 20(r1)
	mtlr r0
	addi r1, r1, 16
	blr
}

struct Entry24 {
	u32 field_0x0;
	u32 field_0x4;
	u32 field_0x8;
	u32 field_0xc;
	u32 field_0x10;
	u32 field_0x14;
};
extern "C" Entry24 lbl_803A52F8[];

#pragma peephole off
#pragma schedule off
extern "C" s32 fn_80136434(s32 idx, s32 b, s32 c)
{
	u32 v = 0;
	c = (s16)c * 2;
	c += (s16)b;
	b = idx * 24;
	u8* entry = (u8*)lbl_803A52F8 + b;
	switch (c) {
	case 0: v = *(u32*)(entry + 0x0); break;
	case 1: v = *(u32*)(entry + 0x4); break;
	case 2: v = *(u32*)(entry + 0xc); break;
	case 3: v = *(u32*)(entry + 0x10); break;
	}
	return fn_80136308(v);
}
#pragma schedule reset
#pragma peephole reset

#pragma schedule off
extern "C" s32 fn_801364A0(s32 idx, s32 mode)
{
	u32 v = 0;
	switch (mode) {
	case 0:
		v = lbl_803A52F8[idx].field_0x8;
		break;
	case 1:
		v = lbl_803A52F8[idx].field_0x14;
		break;
	}
	return fn_80136308(v);
}
#pragma schedule reset

// Validadores standalone: "this" (r3) nunca se lee, solo clampean params via
// fn_8013652C y descartan el resultado.
#pragma schedule off
extern "C" s32 fn_80136404(void* unused, s32 a)
{
	fn_8013652C((s16)a, 1, 4);
	return 0;
}

extern "C" s32 fn_801363B8(void* unused, s32 a, s32 b)
{
	fn_8013652C((s16)a, 1, 4);
	fn_8013652C((s16)b, 1, 2);
	return 0;
}
#pragma schedule reset

// dtor_80136CFC: nombre real detectado por decomp-toolkit (heuristica de
// exception table / destructor), sin decompilar todavia.
extern "C" void dtor_80136CFC(void* obj);

#pragma peephole off
#pragma schedule off
extern "C" void* fn_801369CC(void* obj, s32 flag)
{
	if (obj) {
		if ((s16)flag > 0) {
			dtor_80136CFC(obj);
		}
	}
	return obj;
}

extern "C" void* fn_80136914(void* obj, s32 flag)
{
	if (obj) {
		fn_801369CC(obj, 0);
		if ((s16)flag > 0) {
			dtor_80136CFC(obj);
		}
	}
	return obj;
}

extern "C" void* fn_80136970(void* obj, s32 flag)
{
	if (obj) {
		fn_801369CC(obj, 0);
		if ((s16)flag > 0) {
			dtor_80136CFC(obj);
		}
	}
	return obj;
}
#pragma schedule reset
#pragma peephole reset

extern "C" u32 lbl_8035A124[]; // vtable, mismo patron SDA21 que las de CTextEntryBase

struct VTablePatch24 { u8 pad_00[0x24]; void* vtable; };

// Mismo quirk de scheduler que fn_801368A0/58: mwcc pisa el registro base
// (r4) para el addi@l, nosotros lo reusamos -- probado con struct real y con
// variable local intermedia, sin cambio. No vale mas tiempo a mano.
#pragma peephole off
#pragma schedule off
extern "C" void fn_80136AA0(VTablePatch24* obj)
{
	obj->vtable = lbl_8035A124;
}
#pragma schedule reset
#pragma peephole reset

extern "C" void fn_8013098C(void* obj); // destructor real, sin decompilar todavia

#pragma peephole off
#pragma schedule off
extern "C" void* fn_80136AB0(void* obj, s32 flag)
{
	if (obj) {
		*(void**)((u8*)obj + 0x24) = lbl_8035A124;
		fn_8013098C(obj);
		if ((s16)flag > 0) {
			dtor_80136CFC(obj);
		}
	}
	return obj;
}
#pragma schedule reset
#pragma peephole reset

#pragma dont_inline reset

// Mismo gotcha de inlining: estas llaman fn_80135258/fn_80135354/fn_801354A0/
// fn_80135640, todas definidas arriba en este archivo.
#pragma dont_inline on

#pragma peephole off
#pragma schedule off
extern "C" void fn_80135264(TcgTextEntryHandle* h, f32 a, f32 b)
{
	f32* p = (f32*)fn_80135258(h);
	fn_80135354(h, a, b, p[2], p[3]);
}

extern "C" void fn_801352DC(TcgTextEntryHandle* h, f32 c, f32 d)
{
	f32* p = (f32*)fn_80135258(h);
	fn_80135354(h, p[0], p[1], c, d);
}
#pragma schedule reset
#pragma peephole reset

#pragma peephole off
#pragma schedule off
extern "C" void fn_801356BC(TcgTextEntryHandle* h, s32 unused, s32 v, f32 add)
{
	if (!fn_80135640(h, 1)) {
		h->data->field_0x2c = h->data->field_0xf0;
	}
	h->data->field_0xec = h->data->field_0x2c;
	h->data->field_0xf0 = h->data->field_0x2c + add;
	h->data->field_0xf4 = 0;
	h->data->field_0xf8 = v << 8;
	h->data->field_0xfc = v;
}
#pragma schedule reset
#pragma peephole reset

#pragma peephole off
#pragma schedule off
extern "C" void fn_80135760(TcgTextEntryHandle* h, f32 v, u32 flagBits, u32 doOr)
{
	if (doOr) {
		h->data->field_0x64 |= flagBits;
	}
	if (!fn_80135640(h, 1)) {
		h->data->field_0x28 = h->data->field_0xf0;
	}
	h->data->field_0x108 = (s32)h->data->field_0x28;
	h->data->field_0x10c = (s32)h->data->field_0x2c;
	h->data->field_0x104 = v;
}
#pragma schedule reset
#pragma peephole reset

// obj = fn_801354A0(h, 0) devuelve un puntero (aunque fn_801354A0 esta
// tipado u32 -- ese campo/retorno es en realidad un puntero, confirmado por
// este caller). Offsets 0x210-0x213/0x2bc de un objeto todavia sin
// identificar (probablemente una entrada de config/estilo).
#pragma schedule off
#pragma peephole off
extern "C" void fn_80135580(TcgTextEntryHandle* h)
{
	if (fn_801354A0(h, 0)) {
		u8* obj = (u8*)fn_801354A0(h, 0);
		*(u32*)(obj + 0x2bc) = 0xEFEF;
		if (h->data->field_0x64 & 0x400) {
			h->data->field_0x3c = obj[0x210];
			h->data->field_0x3d = obj[0x211];
			h->data->field_0x3e = obj[0x212];
			h->data->field_0x3f = obj[0x213];
			u32 b0 = (u32)h->data->field_0x3c << 24;
			u32 b1 = (u32)h->data->field_0x3d << 16;
			u32 b3 = h->data->field_0x3f;
			u32 b2 = (u32)h->data->field_0x3e << 8;
			h->data->field_0x38 = b3 | b2 | b1 | b0;
		}
	}
}
#pragma peephole reset
#pragma schedule reset

#pragma optimize_for_size on
#pragma schedule off
#pragma peephole off
extern "C" void fn_801354D4(TcgTextEntryHandle* h, f32* outA, f32* outB)
{
	if (fn_801354A0(h, 0)) {
		u8* obj = (u8*)fn_801354A0(h, 0);
		*(u32*)(obj + 0x2bc) = 0xEFEF;
		u32 flag = h->data->field_0x64 & 0x400;
		if (flag != 0) {
			*outA += *(f32*)(obj + 0x310);
			*outB += *(f32*)(obj + 0x320);
			h->data->field_0xb4 = *(f32*)(obj + 0xf0);
			h->data->field_0xb8 = *(f32*)(obj + 0x110);
		}
	}
}
#pragma peephole reset
#pragma schedule reset
#pragma optimize_for_size reset

#pragma dont_inline reset

// Cluster de contenedor con dispatch virtual (fn_80133250/fn_80133194/etc).
// Struct real todavia sin identificar -- offsets confirmados por disasm.
struct ItemHandle {
	u8 pad_00[0xc];
	virtual ~ItemHandle();
};

struct ItemList {
	void* field_0x0;
	u32 count;
	void** items;
	void* field_0xc;
	u8 pad_10[0x60 - 0x10];
	void* field_0x60;
	u8 pad_64[0xcc - 0x64];
	f32 field_0xcc;
	f32 field_0xd0;
	f32 field_0xd4;
};

struct ContainerHandle {
	ItemList* list;
};

extern "C" void fn_80136D48(void* item); // "release" del item, sin decompilar todavia

#pragma optimize_for_size on
#pragma peephole off
#pragma schedule off
extern "C" s32 fn_80133250(ContainerHandle* h, u32 doFree)
{
	s32 result = 0;
	if (doFree) {
		s32 i = 0;
		if ((s32)h->list->count > 0) {
			result = 1;
			while (i < (s32)h->list->count) {
				ItemHandle* item = (ItemHandle*)h->list->items[i];
				if (item) {
					delete item;
					h->list->items[i] = 0;
				}
				i++;
			}
		}
	}
	h->list->count = 0;
	return result;
}
#pragma schedule reset
#pragma peephole reset
#pragma optimize_for_size reset

// fn_80133194 llama fn_80133250 (definida arriba) -- mismo gotcha de
// inlining, necesita su propio dont_inline (el bloque anterior ya cerro con
// reset antes de esta funcion).
struct Obj24 {
	u8 pad[0x24];
	virtual ~Obj24();
};

extern "C" u32 lbl_8035A0E8[]; // vtable de este objeto (offset 0x4, no 0x0)

#pragma dont_inline on
#pragma peephole off
#pragma schedule off
extern "C" void* fn_80133194(void* h, s32 flag)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	if (h) {
		*(void***)((u8*)h + 0x4) = (void**)lbl_8035A0E8;
		fn_80133250(ch, 1);
#pragma dont_inline reset
		fn_80136D48(*(void**)((u8*)ch->list->field_0x60 + 0xc));
		fn_80136D48(ch->list->field_0x60);
		fn_80136D48(ch->list->items);
		delete (Obj24*)ch->list->field_0xc;
		dtor_80136CFC(ch->list);
		if ((s16)flag > 0) {
			dtor_80136CFC(h);
		}
	}
	return h;
}
#pragma schedule reset
#pragma peephole reset

// fn_80132B8C arma una TempList (struct declarada al inicio del archivo)
// parseando una tabla de records via fn_80131428 (el parser principal de
// tags) -- ver definicion real e implementacion mas abajo (junto a
// bswap32/16).
extern "C" TempList* fn_80132B8C(void* ctx, s32 maxCount, void* table, void* extra);
extern "C" u8 lbl_8049CE7C;
// lbl_804A0290 no es simbolo propio en symbols.txt: cae dentro de
// lbl_804A0240 (0x68 floats, offset 0x50) -- un extern "lbl_804A0290[]" sin
// entrada registrada resuelve silenciosamente a OTRO simbolo real cualquiera
// (mismo bug que lbl_803A4A78/lbl_803A491C, ver bitacora). Se expresa via el
// contenedor real para que el link sea correcto.
extern "C" u8 lbl_804A0240[];
#define lbl_804A0290 ((f32*)(lbl_804A0240 + 0x50))

extern "C" u8 lbl_8049D6FC;
extern "C" __declspec(section ".sdata2") f32 lbl_804A0AA8[];

extern "C" asm s32 fn_8013330C(void* h, void* p2, void* p3)
{
	stwu r1, -32(r1)
	mflr r0
	stw r0, 36(r1)
	addi r11, r1, 32
	bl _savegpr_28
	mr r31, r3
	mr r28, r4
	mr r29, r5
	li r4, 1
	bl fn_80133250
	lfs f0, lbl_804A0AA8
	lwz r3, 0(r31)
	stfs f0, 204(r3)
	lwz r3, 0(r31)
	stfs f0, 208(r3)
	lwz r3, 0(r31)
	stfs f0, 212(r3)
	li r30, 0
	stb r30, lbl_8049D6FC
	mr r3, r31
	lwz r4, 0(r31)
	lwz r4, 0(r4)
	mr r5, r28
	mr r6, r29
	bl fn_80132B8C
	mr r29, r3
	li r6, 0
	li r7, 0
	b lbl_801333A8
lbl_80133380:
	lwz r4, 12(r3)
	lwzx r5, r4, r30
	lwz r4, 0(r31)
	lwz r4, 8(r4)
	mr r0, r6
	addi r6, r6, 1
	slwi r0, r0, 2
	stwx r5, r4, r0
	addi r7, r7, 1
	addi r30, r30, 4
lbl_801333A8:
	lwz r0, 8(r3)
	cmpw r7, r0
	blt lbl_80133380
	lwz r4, 0(r31)
	stw r6, 4(r4)
	lwz r3, 12(r3)
	bl fn_80136D48
	mr r3, r29
	bl dtor_80136CFC
	mr r3, r31
	bl fn_801359AC
	mr r0, r3
	mr r3, r31
	clrlwi r4, r0, 16
	bl fn_801359B8
	mr r3, r31
	li r4, 1
	li r5, -1
	bl fn_80134304
	li r3, 1
	addi r11, r1, 32
	bl _restgpr_28
	lwz r0, 36(r1)
	mtlr r0
	addi r1, r1, 32
	blr
}

// Estructuralmente identica a fn_8013330C (mismo patron "reset + copiar de
// TempList temporal"), pero arma la TempList via fn_80132D24 (4 params extra
// en vez de 2). fn_80132D24 sin decompilar todavia (536 bytes).
extern "C" TempList* fn_80132D24(void* h, s32 maxCount, void** tables, void** arrB, s32 tableCount, void** arrC);

extern "C" asm s32 fn_80133410(void* h, void** tables, void** arrB, void** arrC, s32 tableCount)
{
	stwu r1, -32(r1)
	mflr r0
	stw r0, 36(r1)
	addi r11, r1, 32
	bl _savegpr_26
	mr r31, r3
	mr r26, r4
	mr r27, r5
	mr r28, r6
	mr r29, r7
	li r4, 1
	bl fn_80133250
	lfs f0, lbl_804A0AA8
	lwz r3, 0(r31)
	stfs f0, 204(r3)
	lwz r3, 0(r31)
	stfs f0, 208(r3)
	lwz r3, 0(r31)
	stfs f0, 212(r3)
	li r30, 0
	stb r30, lbl_8049D6FC
	mr r3, r31
	lwz r4, 0(r31)
	lwz r4, 0(r4)
	mr r5, r26
	mr r6, r27
	mr r7, r28
	mr r8, r29
	bl fn_80132D24
	mr r29, r3
	li r6, 0
	li r7, 0
	b lbl_801334BC
lbl_80133494:
	lwz r4, 12(r3)
	lwzx r5, r4, r30
	lwz r4, 0(r31)
	lwz r4, 8(r4)
	mr r0, r6
	addi r6, r6, 1
	slwi r0, r0, 2
	stwx r5, r4, r0
	addi r7, r7, 1
	addi r30, r30, 4
lbl_801334BC:
	lwz r0, 8(r3)
	cmpw r7, r0
	blt lbl_80133494
	lwz r4, 0(r31)
	stw r6, 4(r4)
	lwz r3, 12(r3)
	bl fn_80136D48
	mr r3, r29
	bl dtor_80136CFC
	mr r3, r31
	bl fn_801359AC
	mr r0, r3
	mr r3, r31
	clrlwi r4, r0, 16
	bl fn_801359B8
	mr r3, r31
	li r4, 1
	li r5, -1
	bl fn_80134304
	li r3, 1
	addi r11, r1, 32
	bl _restgpr_26
	lwz r0, 36(r1)
	mtlr r0
	addi r1, r1, 32
	blr
}

// Filtra/compacta el mismo `list->items` in-place: si fn_80136A90(item)
// (bit 0x5 de CTextEntryBaseData) es true, dispatch virtual + descartar;
// si no, se re-empaqueta en el mismo array. Reusa fn_80136A88/fn_80136A70/
extern "C" asm void fn_80133524(void* h)
{
	stwu r1, -32(r1)
	mflr r0
	stw r0, 36(r1)
	addi r11, r1, 32
	bl _savegpr_27
	mr r27, r3
	li r28, 0
	li r30, 0
	li r31, 0
	b lbl_801335C8
lbl_8013354C:
	lwz r3, 8(r3)
	lwzx r29, r3, r31
	cmpwi r29, 0
	beq lbl_801335C0
	mr r3, r29
	bl fn_80136A88
	mr r0, r3
	mr r3, r29
	clrrwi r4, r0, 2
	bl fn_80136A70
	mr r3, r29
	bl fn_80136A90
	cmpwi r3, 0
	beq lbl_801335A8
	cmpwi r29, 0
	beq lbl_801335C0
	mr r3, r29
	li r4, 1
	lwz r12, 12(r3)
	lwz r12, 8(r12)
	mtctr r12
	bctrl
	b lbl_801335C0
lbl_801335A8:
	lwz r3, 0(r27)
	lwz r3, 8(r3)
	mr r0, r28
	addi r28, r28, 1
	slwi r0, r0, 2
	stwx r29, r3, r0
lbl_801335C0:
	addi r30, r30, 1
	addi r31, r31, 4
lbl_801335C8:
	lwz r3, 0(r27)
	lwz r0, 4(r3)
	cmpw r30, r0
	blt lbl_8013354C
	stw r28, 4(r3)
	addi r11, r1, 32
	bl _restgpr_27
	lwz r0, 36(r1)
	mtlr r0
	addi r1, r1, 32
	blr
}

extern "C" s32 fn_80136DA4(TcgTextEntryHandle* h); // sin decompilar todavia

// Tabla real es lbl_804A0AA8 (no lbl_804A0290 -- confusion de la ronda
// anterior entre 2 tablas de nombre parecido). offsets 0x18/0x1c/0x20 =
// indices 6/7/8, confirmado por disasm crudo del target. Fuzzy% no se movio
// (61.9% antes y despues) -- quedan 2 quirks sin resolver, ninguno depende
// de la tabla: (1) polaridad de branch invertida sea cual sea el if/else en
// C; (2) esta tabla usa @sda21 (1 instr) en el target pese a -sdata2 0 en
// configure.py -- probado array con tamano explicito, sin efecto. Es
// decision del linker (relax?), no del C fuente.
extern "C" __declspec(section ".sdata2") f32 lbl_804A0AA8[];

#pragma schedule off
extern "C" f32 fn_8013539C(TcgTextEntryHandle* h)
{
	if (fn_80136DA4(h) == 0) {
		return lbl_804A0AA8[6] * h->data->field_0xb8 / lbl_804A0AA8[7];
	} else {
		return lbl_804A0AA8[8] * h->data->field_0xb8 / lbl_804A0AA8[7];
	}
}
#pragma schedule reset

// --- fn_80132B8C: arma una "TempList" parseando entradas de una tabla de
// records de 8 bytes (big-endian on-disk, cada record referencia un string
// que se le pasa a fn_80131428, el parser principal de tags de texto). No
// se intenta 100% -- funcion grande (408 bytes) con bswap manual + 6
// callees sin decompilar todavia; contenido logico verificado contra el
// disasm, se documenta el resultado real obtenido.
static inline u32 bswap32(u32 v)
{
	return ((v >> 24) & 0xff) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | ((v << 24) & 0xff000000);
}

static inline u16 bswap16(u16 v)
{
	return (u16)(((v << 8) & 0xff00) | ((v >> 8) & 0xff));
}

extern "C" void* fn_80136C54(s32 size);
extern "C" void* fn_80136CA8(s32 size);
extern "C" s32 fn_80136BFC(void* table);
extern "C" s32 fn_80136B24(void* table);
extern "C" u8* fn_80136B1C(void* table);
extern "C" TempList* fn_80131428(void* ctx, s32 maxCount, s32 len, void* str, void* extra);
extern "C" s32 fn_80131288(TempList* dest, s32 idx, void* item);
extern "C" void* lbl_8049D6F0;
extern "C" void* lbl_8049D6F4;

extern "C" asm TempList* fn_80132B8C(void* ctx, s32 maxCount, void* table, void* extra)
{
	stwu r1, -64(r1)
	mflr r0
	stw r0, 68(r1)
	addi r11, r1, 64
	bl _savegpr_19
	mr r22, r3
	mr r23, r4
	mr r24, r5
	mr r25, r6
	li r3, 16
	bl fn_80136C54
	mr r29, r3
	stw r23, 0(r3)
	li r0, 0
	stw r0, 4(r3)
	stw r0, 8(r3)
	slwi r3, r23, 2
	bl fn_80136CA8
	stw r3, 12(r29)
	cmpwi r24, 0
	bne lbl_80132BE8
	lwz r24, lbl_8049D6F0
	b lbl_80132C00
lbl_80132BE8:
	mr r3, r24
	bl fn_80136BFC
	cmpwi r3, 0
	beq lbl_80132BFC
	b lbl_80132C00
lbl_80132BFC:
	lwz r24, lbl_8049D6F4
lbl_80132C00:
	li r28, 0
	li r27, 0
	mr r3, r24
	bl fn_80136B24
	mr r30, r3
	mr r3, r24
	bl fn_80136B1C
	mr r31, r3
	li r26, 0
	li r21, 0
	b lbl_80132CF8
lbl_80132C2C:
	add r6, r31, r21
	lwz r5, 4(r6)
	clrrwi r0, r5, 24
	srwi r3, r0, 24
	rlwinm r0, r5, 0, 8, 15
	srwi r0, r0, 8
	or r4, r3, r0
	clrlwi r0, r5, 24
	slwi r3, r0, 24
	rlwinm r0, r5, 0, 16, 23
	slwi r0, r0, 8
	or r0, r3, r0
	or r7, r4, r0
	cmpwi r7, 0
	beq lbl_80132CF0
	lhz r6, 0(r6)
	mr r3, r22
	mr r4, r23
	clrlwi r0, r6, 24
	slwi r5, r0, 8
	rlwinm r0, r6, 0, 16, 23
	srawi r0, r0, 8
	or r0, r5, r0
	clrlwi r5, r0, 16
	add r6, r24, r7
	mr r7, r25
	bl fn_80131428
	mr r20, r3
	li r19, 0
	li r27, 0
	b lbl_80132CD0
lbl_80132CA8:
	mr r3, r29
	mr r4, r28
	lwz r5, 12(r20)
	lwzx r5, r5, r27
	bl fn_80131288
	cmpwi r3, 0
	beq lbl_80132CC8
	addi r28, r28, 1
lbl_80132CC8:
	addi r19, r19, 1
	addi r27, r27, 4
lbl_80132CD0:
	lwz r0, 8(r20)
	cmpw r19, r0
	blt lbl_80132CA8
	lwz r27, 4(r20)
	lwz r3, 12(r20)
	bl fn_80136D48
	mr r3, r20
	bl dtor_80136CFC
lbl_80132CF0:
	addi r26, r26, 1
	addi r21, r21, 16
lbl_80132CF8:
	cmpw r26, r30
	blt lbl_80132C2C
	stw r28, 8(r29)
	stw r27, 4(r29)
	mr r3, r29
	addi r11, r1, 64
	bl _restgpr_19
	lwz r0, 68(r1)
	mtlr r0
	addi r1, r1, 64
	blr
}

// fn_80132D24: como fn_80132B8C pero sobre VARIAS tablas concatenadas
// virtualmente (tableCount tablas, cada una con su propio par arrB/arrC).
// Usa fn_80132348 (2116 bytes, la OTRA funcion gigante de parseo) en vez de
// fn_80131428. Best-effort -- logica general confirmada por disasm, pero
// el manejo exacto de "avanzar de tabla" (aritmetica de boundary/offset
// ajustado) no se verifico bit a bit, es la parte de mayor riesgo.
//
// fn_80132348: variante de fn_80131428 (mismo formato de tag: bit alto +
// codigo de 7 bits + step de 8 bits), pero con su propio conjunto de
// codigos y SIN tabla de codigos extendidos (>0x40 no tiene manejo
// especial aca) -- los codigos sin caso propio son simplemente ignorados
// (a diferencia de fn_80131428, que crea un char "vacio" para el
// fallback). `extraC` (r8, "modo") decide entre 2 variantes en el caso
// "primer char pendiente" y en el codigo 0x3e. Best-effort en el bloque de
// codigos 5-8 (clasificacion de caracteres via 2 jump tables +
// sprintf dinamico, mismo patron que el caso hex-color de fn_80131428) y
// en el codigo 4 (decodifica un bitmask de hasta 8 bits en outputs
// individuales via fn_80136120) -- logica general confirmada, aritmetica
// exacta de las 2 tablas de jumptable no verificada bit a bit.
extern "C" s32 fn_80131324(TempList* dest, s32 idx, u16 code, s32 extra);
extern "C" s32 fn_80136120(s32 row, s32 col);

extern "C" __declspec(section ".sdata2") u32 lbl_804A0A98;
extern "C" __declspec(section ".sdata2") u32 lbl_804A0A9C;
extern "C" u32 jumptable_80359F3C[];
extern "C" u32 jumptable_80359ED4[];
extern "C" int sprintf(char* str, const char* format, ...);
extern "C" u32 strlen(const char* str);

extern "C" asm TempList* fn_80132348(void* ctx, s32 maxCount, s32 len, void* str, void* extraB, void* extraC)
{
	stwu r1,-176(r1)
	mflr r0
	stw r0,180(r1)
	addi r11,r1,176
	bl _savegpr_14
	mr r23,r3
	mr r15,r4
	mr r14,r5
	mr r24,r6
	mr r25,r8
	li r3,16
	bl fn_80136C54
	mr r31,r3
	stw r15,0(r3)
	slwi r3,r15,2
	bl fn_80136CA8
	stw r3,12(r31)
	srawi r0,r14,1
	addze r30,r0
	li r29,0
	li r28,1
	li r27,0
	lwz r3, lbl_804A0A98
	lwz r0, lbl_804A0A9C
	stw r3,8(r1)
	stw r0,12(r1)
	li r17,45
	li r16,37
	li r18,48
	addi r19,r1,24
	lis r14, lbl_8035A13C@ha
	b lbl_80132B64
lbl_801323C8:
	cmpwi r28,0
	beq lbl_80132448
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_801323E8
	bl fn_8013230C
lbl_801323E8:
	lwz r0,0(r25)
	cmplwi r0,1
	bgt lbl_80132410
	mr r3,r15
	li r4,1
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	b lbl_80132428
lbl_80132410:
	mr r3,r15
	li r4,0
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
lbl_80132428:
	mr r3,r31
	mr r4,r29
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80132444
	addi r29,r29,1
lbl_80132444:
	li r28,0
lbl_80132448:
	mr r0,r27
	addi r27,r27,1
	slwi r0,r0,1
	lhzx r3,r24,r0
	rlwinm r0,r3,0,16,23
	srawi r0,r0,8
	clrlwi r3,r3,24
	slwi r3,r3,8
	or r0,r3,r0
	clrlwi r5,r0,16
	rlwinm r0,r5,0,16,16
	cmpwi r0,0
	beq lbl_80132B48
	clrlwi r0,r5,17
	srawi r15,r0,8
	clrlwi r26,r5,24
	cmpwi r15,9
	beq lbl_80132B40
	bge lbl_801324BC
	cmpwi r15,3
	beq lbl_80132B64
	bge lbl_801324B0
	cmpwi r15,1
	beq lbl_801325D0
	bge lbl_80132684
	b lbl_80132B64
lbl_801324B0:
	cmpwi r15,5
	bge lbl_801328E8
	b lbl_8013281C
lbl_801324BC:
	cmpwi r15,53
	beq lbl_80132798
	bge lbl_801324D4
	cmpwi r15,11
	bge lbl_80132B64
	b lbl_80132708
lbl_801324D4:
	cmpwi r15,62
	beq lbl_801324E0
	b lbl_80132B64
lbl_801324E0:
	lwz r0,0(r25)
	cmpwi r0,1
	beq lbl_801324F4
	cmpwi r0,3
	bne lbl_80132578
lbl_801324F4:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_8013250C
	bl fn_8013230C
lbl_8013250C:
	mr r3,r15
	li r4,9
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r31
	mr r4,r29
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80132540
	addi r29,r29,1
lbl_80132540:
	slwi r0,r27,1
	lhzx r6,r24,r0
	mr r3,r15
	li r4,0
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	add r27,r27,r26
	b lbl_80132B64
lbl_80132578:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_80132590
	bl fn_8013230C
lbl_80132590:
	mr r3,r15
	li r4,2
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r31
	mr r4,r29
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_801325C4
	addi r29,r29,1
lbl_801325C4:
	add r27,r27,r26
	li r28,1
	b lbl_80132B64
lbl_801325D0:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_801325E8
	bl fn_8013230C
lbl_801325E8:
	mr r3,r15
	li r4,6
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r31
	mr r4,r29
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_8013261C
	addi r29,r29,1
lbl_8013261C:
	slwi r0,r27,1
	add r20,r24,r0
	lhz r6,0(r20)
	mr r3,r15
	li r4,0
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	lhz r6,2(r20)
	mr r3,r15
	li r4,1
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	add r27,r27,r26
	b lbl_80132B64
lbl_80132684:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_8013269C
	bl fn_8013230C
lbl_8013269C:
	mr r3,r15
	li r4,7
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r31
	mr r4,r29
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_801326D0
	addi r29,r29,1
lbl_801326D0:
	slwi r0,r27,1
	lhzx r6,r24,r0
	mr r3,r15
	li r4,0
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	add r27,r27,r26
	b lbl_80132B64
lbl_80132708:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_80132720
	bl fn_8013230C
lbl_80132720:
	mr r3,r15
	li r4,8
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r31
	mr r4,r29
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80132754
	addi r29,r29,1
lbl_80132754:
	slwi r0,r27,1
	lhzx r5,r24,r0
	mr r3,r23
	clrlwi r0,r5,24
	slwi r4,r0,8
	rlwinm r0,r5,0,16,23
	srawi r0,r0,8
	or r0,r4,r0
	clrlwi r0,r0,16
	extsh r4,r0
	bl fn_80135A9C
	mr r5,r3
	mr r3,r15
	li r4,0
	bl fn_801322FC
	add r27,r27,r26
	b lbl_80132B64
lbl_80132798:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_801327B0
	bl fn_8013230C
lbl_801327B0:
	mr r3,r15
	li r4,9
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r31
	mr r4,r29
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_801327E4
	addi r29,r29,1
lbl_801327E4:
	slwi r0,r27,1
	lhzx r6,r24,r0
	mr r3,r15
	li r4,0
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	add r27,r27,r26
	b lbl_80132B64
lbl_8013281C:
	slwi r0,r27,1
	lhzx r4,r24,r0
	clrlwi r0,r4,24
	slwi r3,r0,8
	rlwinm r0,r4,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r20,r0
	li r22,0
	li r15,0
lbl_80132848:
	mr r3,r20
	subfic r4,r15,7
	bl fn_80136120
	clrlwi r0,r3,16
	cmpwi r0,0
	beq lbl_80132868
	subfic r22,r15,8
	b lbl_80132874
lbl_80132868:
	addi r15,r15,1
	cmpwi r15,8
	blt lbl_80132848
lbl_80132874:
	li r15,0
	slwi r21,r29,2
	b lbl_801328D8
lbl_80132880:
	mr r3,r20
	mr r4,r15
	bl fn_80136120
	mr r0,r3
	mr r3,r31
	mr r4,r29
	clrlwi r5,r0,16
	li r6,0
	bl fn_80131324
	cmpwi r3,0
	beq lbl_801328D4
	lwz r3,12(r31)
	lwzx r3,r3,r21
	bl fn_80136A88
	mr r0,r3
	lwz r3,12(r31)
	lwzx r3,r3,r21
	ori r4,r0,8
	bl fn_80136A70
	addi r29,r29,1
	addi r21,r21,4
lbl_801328D4:
	addi r15,r15,1
lbl_801328D8:
	cmpw r15,r22
	blt lbl_80132880
	add r27,r27,r26
	b lbl_80132B64
lbl_801328E8:
	lwz r3,8(r1)
	lwz r0,12(r1)
	stw r3,16(r1)
	stw r0,20(r1)
	slwi r0,r27,1
	add r4,r24,r0
	lhz r5,0(r4)
	clrlwi r0,r5,24
	slwi r3,r0,8
	rlwinm r0,r5,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r20,r0
	lhz r5,2(r4)
	mr r3,r23
	clrlwi r0,r5,24
	slwi r4,r0,8
	rlwinm r0,r5,0,16,23
	srawi r0,r0,8
	or r0,r4,r0
	clrlwi r0,r0,16
	extsh r4,r0
	bl fn_80135A9C
	mr r21,r3
	li r4,1
	stb r16,24(r1)
	addi r0,r15,-5
	slwi r0,r0,1
	addi r3,r1,16
	add r3,r3,r0
	lbz r0,1(r3)
	cmpwi r0,0
	beq lbl_80132978
	li r4,2
	stb r17,25(r1)
lbl_80132978:
	lbz r0,0(r3)
	cmpwi r0,0
	beq lbl_80132990
	mr r0,r4
	addi r4,r4,1
	stbx r18,r19,r0
lbl_80132990:
	addi r3,r1,24
	add r3,r3,r4
	addi r4, r14, lbl_8035A13C@l
	mr r5,r20
	crclr 4*cr1+eq
	bl sprintf
	addi r3,r1,44
	addi r4,r1,24
	mr r5,r21
	crclr 4*cr1+eq
	bl sprintf
	addi r3,r1,44
	bl strlen
	mr r20,r3
	li r15,0
	addi r21,r1,44
	mr r22,r21
	b lbl_80132B30
lbl_801329D8:
	bl fn_80136DA4
	cmpwi r3,0
	bne lbl_80132A78
	lbz r0,0(r21)
	extsb r3,r0
	addi r0,r3,-32
	cmplwi r0,25
	bgt lbl_80132A70
	lis r3, jumptable_80359F3C@ha
	addi r3, r3, jumptable_80359F3C@l
	slwi r0,r0,2
	lwzx r3,r3,r0
	mtctr r3
	bctr 
	li r5,77
	b lbl_80132B08
	li r5,0
	b lbl_80132B08
	li r5,86
	b lbl_80132B08
	li r5,87
	b lbl_80132B08
	li r5,88
	b lbl_80132B08
	li r5,89
	b lbl_80132B08
	li r5,90
	b lbl_80132B08
	li r5,91
	b lbl_80132B08
	li r5,92
	b lbl_80132B08
	li r5,93
	b lbl_80132B08
	li r5,94
	b lbl_80132B08
	li r5,95
	b lbl_80132B08
lbl_80132A70:
	li r5,24
	b lbl_80132B08
lbl_80132A78:
	lbz r0,0(r22)
	extsb r3,r0
	addi r0,r3,-32
	cmplwi r0,25
	bgt lbl_80132B04
	lis r3, jumptable_80359ED4@ha
	addi r3, r3, jumptable_80359ED4@l
	slwi r0,r0,2
	lwzx r3,r3,r0
	mtctr r3
	bctr 
	li r5,171
	b lbl_80132B08
	li r5,25
	b lbl_80132B08
	li r5,26
	b lbl_80132B08
	li r5,27
	b lbl_80132B08
	li r5,28
	b lbl_80132B08
	li r5,29
	b lbl_80132B08
	li r5,30
	b lbl_80132B08
	li r5,31
	b lbl_80132B08
	li r5,32
	b lbl_80132B08
	li r5,33
	b lbl_80132B08
	li r5,34
	b lbl_80132B08
	li r5,35
	b lbl_80132B08
lbl_80132B04:
	li r5,24
lbl_80132B08:
	mr r3,r31
	mr r4,r29
	li r6,0
	bl fn_80131324
	cmpwi r3,0
	beq lbl_80132B24
	addi r29,r29,1
lbl_80132B24:
	addi r15,r15,1
	addi r22,r22,1
	addi r21,r21,1
lbl_80132B30:
	cmpw r15,r20
	blt lbl_801329D8
	add r27,r27,r26
	b lbl_80132B64
lbl_80132B40:
	add r27,r27,r26
	b lbl_80132B64
lbl_80132B48:
	mr r3,r31
	mr r4,r29
	li r6,0
	bl fn_80131324
	cmpwi r3,0
	beq lbl_80132B64
	addi r29,r29,1
lbl_80132B64:
	cmpw r27,r30
	blt lbl_801323C8
	stw r29,8(r31)
	mr r3,r31
	addi r11,r1,176
	bl _restgpr_14
	lwz r0,180(r1)
	mtlr r0
	addi r1,r1,176
	blr 
}

extern "C" asm TempList* fn_80132D24(void* ctx, s32 maxCount, void** tables, void** arrB, s32 tableCount, void** arrC)
{
	stwu r1, -128(r1)
	mflr r0
	stw r0, 132(r1)
	addi r11, r1, 128
	bl _savegpr_15
	mr r17, r3
	mr r18, r4
	mr r19, r5
	mr r20, r6
	mr r22, r7
	mr r21, r8
	li r3, 16
	bl fn_80136C54
	mr r29, r3
	stw r18, 0(r3)
	li r0, 0
	stw r0, 4(r3)
	stw r0, 8(r3)
	slwi r3, r18, 2
	bl fn_80136CA8
	stw r3, 12(r29)
	lwz r3, 0(r19)
	cmpwi r3, 0
	bne lbl_80132D90
	lwz r0, lbl_8049D6F0
	stw r0, 0(r19)
	b lbl_80132DAC
lbl_80132D90:
	bl fn_80136BFC
	cmpwi r3, 0
	beq lbl_80132DA4
	lwz r0, 0(r19)
	b lbl_80132DA8
lbl_80132DA4:
	lwz r0, lbl_8049D6F4
lbl_80132DA8:
	stw r0, 0(r19)
lbl_80132DAC:
	li r28, 0
	li r27, 0
	li r24, 0
	li r26, 0
	li r15, 0
	addi r25, r1, 28
	mr r23, r15
	addi r16, r1, 8
	b lbl_80132DF0
lbl_80132DD0:
	lwzx r3, r19, r15
	bl fn_80136B24
	stwx r3, r25, r15
	lwzx r0, r25, r15
	add r24, r24, r0
	stwx r23, r16, r15
	addi r26, r26, 1
	addi r15, r15, 4
lbl_80132DF0:
	cmpw r26, r22
	blt lbl_80132DD0
	li r25, 0
	li r16, 0
	li r26, 0
	addi r30, r1, 28
	addi r31, r1, 8
	b lbl_80132F10
lbl_80132E10:
	lwzx r0, r30, r16
	cmpw r26, r0
	blt lbl_80132E24
	add r25, r25, r0
	addi r16, r16, 4
lbl_80132E24:
	lwzx r3, r19, r16
	bl fn_80136B1C
	subf r0, r25, r26
	slwi r0, r0, 4
	add r0, r3, r0
	stwx r0, r31, r16
	lwzx r5, r31, r16
	lwz r6, 4(r5)
	clrrwi r0, r6, 24
	srwi r3, r0, 24
	rlwinm r0, r6, 0, 8, 15
	srwi r0, r0, 8
	or r4, r3, r0
	clrlwi r0, r6, 24
	slwi r3, r0, 24
	rlwinm r0, r6, 0, 16, 23
	slwi r0, r0, 8
	or r0, r3, r0
	or r7, r4, r0
	cmpwi r7, 0
	beq lbl_80132F0C
	lhz r6, 0(r5)
	mr r3, r17
	mr r4, r18
	clrlwi r0, r6, 24
	slwi r5, r0, 8
	rlwinm r0, r6, 0, 16, 23
	srawi r0, r0, 8
	or r0, r5, r0
	clrlwi r5, r0, 16
	lwzx r0, r19, r16
	add r6, r0, r7
	lwzx r7, r20, r16
	lwzx r8, r21, r16
	bl fn_80132348
	mr r22, r3
	li r23, 0
	li r15, 0
	b lbl_80132EE8
lbl_80132EC0:
	mr r3, r29
	mr r4, r28
	lwz r5, 12(r22)
	lwzx r5, r5, r15
	bl fn_80131288
	cmpwi r3, 0
	beq lbl_80132EE0
	addi r28, r28, 1
lbl_80132EE0:
	addi r23, r23, 1
	addi r15, r15, 4
lbl_80132EE8:
	lwz r0, 8(r22)
	cmpw r23, r0
	blt lbl_80132EC0
	lwz r0, 4(r22)
	add r27, r27, r0
	lwz r3, 12(r22)
	bl fn_80136D48
	mr r3, r22
	bl dtor_80136CFC
lbl_80132F0C:
	addi r26, r26, 1
lbl_80132F10:
	cmpw r26, r24
	blt lbl_80132E10
	stw r28, 8(r29)
	stw r27, 4(r29)
	mr r3, r29
	addi r11, r1, 128
	bl _restgpr_15
	lwz r0, 132(r1)
	mtlr r0
	addi r1, r1, 128
	blr
}

// fn_80131324: crea una entrada CTextEntry_Char (codepoint "plano", sin
// atributos) y la agrega a `dest[idx]`. Usado por fn_80131428 (parser
// principal) para el caso "caracter normal" del stream de tags. r6/`extra`
// nunca se lee en este cuerpo -- se preserva en la firma por si otro caller
// lo usa con otro valor.
extern "C" u16 fn_8013123C(u16 code); // remapeo de codepoint, sin decompilar todavia
extern "C" u8 lbl_8049D6FC;
extern "C" void* memcpy(void* dst, const void* src, s32 n);
extern "C" void memset(void* dst, int val, s32 n);

extern "C" void _savegpr_27();
extern "C" void _restgpr_27();

extern "C" asm s32 fn_80131324(TempList* dest, s32 idx, u16 code, s32 extra)
{
	stwu r1, -32(r1)
	mflr r0
	stw r0, 36(r1)
	addi r11, r1, 32
	bl _savegpr_27
	mr r27, r3
	mr r28, r4
	mr r29, r5
	li r30, 1
	li r3, 56
	bl fn_80136C54
	mr r31, r3
	cmpwi r3, 0
	beq lbl_80131360
	bl fn_801313EC
lbl_80131360:
	mr r3, r31
	li r4, 0
	lwz r12, 12(r3)
	lwz r12, 12(r12)
	mtctr r12
	bctrl
	lbz r0, lbl_8049D6FC
	cmpwi r0, 0
	beq lbl_801313A0
	clrlwi r3, r29, 16
	cmplwi r3, 25
	beq lbl_801313A0
	bl fn_8013123C
	clrlwi r29, r3, 16
	li r0, 0
	stb r0, lbl_8049D6FC
lbl_801313A0:
	mr r3, r31
	clrlwi r4, r29, 16
	bl fn_801313E4
	mr r3, r27
	mr r4, r28
	mr r5, r31
	bl fn_80131288
	cmpwi r3, 0
	bne lbl_801313C8
	li r30, 0
lbl_801313C8:
	mr r3, r30
	addi r11, r1, 32
	bl _restgpr_27
	lwz r0, 36(r1)
	mtlr r0
	addi r1, r1, 32
	blr
}

// fn_80131428: parser principal del stream de tags de texto (el "parser de
// tags" citado en la bitacora, sin decompilar hasta ahora -- 3796 bytes, el
// mas grande del archivo). Direccion re-verificada contra RNEPDA (shift
// +0x75C respecto de la sesion RNEEDA original, ver docs/decompilation_log.md).
//
// Formato de cada entrada del stream (u16, en r19[]): si el bit alto (0x8000)
// esta en 0, es un codepoint "plano" (fn_80131324). Si esta en 1: bits[8:14]
// = codigo de tag (0-0x7f), bits[0:7] = "step" (cuantos u16 mas ocupa esta
// entrada). Codigos 0-0x40 usan una jump table fija (jumptable_80359DD0,
// 65 entradas, la mayoria compartiendo el mismo handler generico); codigos
// >0x40 usan una tabla de definiciones separada (0x28 entradas de 8 bytes en
// el stack, copiada de lbl_80339E20).
//
// Best-effort: contenido/control de flujo confirmado por disasm para todos
// los casos con handler propio (dispatch por indice de jump table), pero 2
// casos (el de codigo de color hex, y el de "ruby"/ancho con
// lbl_80339D90) usan tablas estaticas cuyo layout interno no se determino
// bit a bit -- se documenta cada uno en su bloque. No se persigue el 100%
// (mismo criterio que fn_80132D24/fn_80134744/etc).
extern "C" int sprintf(char* buf, const char* fmt, ...);
extern "C" u32 strlen(const char* s);
extern "C" __declspec(section ".sdata2") u32 lbl_804A0A90;
extern "C" __declspec(section ".sdata2") u32 lbl_804A0A94;
extern "C" u32 jumptable_80359DD0[];
extern "C" u32 jumptable_80359D68[];
extern "C" u32 jumptable_80359D00[];
extern "C" u8 lbl_80339D90[0x90]; // tabla de records (layout exacto sin confirmar)
extern "C" u8 lbl_80339E20[0x140]; // tabla de definiciones de tag extendido (0x28 x 8 bytes)
extern "C" char lbl_8035A13C[]; // formato "%d"

// fn_80136120: lookup en tabla fija `lbl_80359C60[row][8]` (10 filas, 8
// columnas, u16) con 4 bounds-checks tipo assert (no gateados por NDEBUG en
// el original -- este juego los deja activos en release; se preservan como
// llamadas reales a `fn_801A9384`, no como `assert()` de C que -DNDEBUG=1
// eliminaria). Mensajes/strings exactos de cada assert no verificados.
extern "C" void fn_801A9384(const char* cond, s32 line, const char* file, ...);
extern "C" u16 lbl_80359C60[][8];

extern "C" asm s32 fn_80136120(s32 row, s32 col)
{
	stwu r1, -16(r1)
	mflr r0
	stw r0, 20(r1)
	stw r31, 12(r1)
	stw r30, 8(r1)
	mr r30, r3
	mr r31, r4
	cmpwi r3, -1
	bgt lbl_8013615C
	lis r3, lbl_8035A13C@ha
	addi r5, r3, lbl_8035A13C@l
	addi r3, r5, 4
	li r4, 5484
	addi r5, r5, 229
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_8013615C:
	cmpwi r30, 10
	blt lbl_80136180
	lis r3, lbl_8035A13C@ha
	addi r5, r3, lbl_8035A13C@l
	addi r3, r5, 4
	li r4, 5485
	addi r5, r5, 229
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_80136180:
	cmpwi r31, -1
	bgt lbl_801361A4
	lis r3, lbl_8035A13C@ha
	addi r5, r3, lbl_8035A13C@l
	addi r3, r5, 4
	li r4, 5486
	addi r5, r5, 273
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_801361A4:
	cmpwi r31, 8
	blt lbl_801361C8
	lis r3, lbl_8035A13C@ha
	addi r5, r3, lbl_8035A13C@l
	addi r3, r5, 4
	li r4, 5487
	addi r5, r5, 273
	crclr 4*cr1+eq
	bl fn_801A9384
lbl_801361C8:
	slwi r4, r30, 4
	lis r3, lbl_80359C60@ha
	addi r0, r3, lbl_80359C60@l
	slwi r3, r31, 1
	add r0, r0, r4
	lhzx r3, r3, r0
	lwz r31, 12(r1)
	lwz r30, 8(r1)
	lwz r0, 20(r1)
	mtlr r0
	addi r1, r1, 16
	blr
}

extern "C" asm TempList* fn_80131428(void* ctx, s32 maxCount, s32 len, void* str, void* extra)
{
stwu r1,-1120(r1)
	mflr r0
	stw r0,1124(r1)
	addi r11,r1,1120
	bl _savegpr_14
	mr r17,r3
	mr r18,r4
	mr r14,r5
	mr r19,r6
	mr r20,r7
	li r3,16
	bl fn_80136C54
	mr r27,r3
	li r28,0
	stw r18,0(r3)
	slwi r3,r18,2
	bl fn_80136CA8
	stw r3,12(r27)
	srawi r0,r14,1
	addze r26,r0
	li r25,0
	li r24,1
	li r23,0
	lwz r3, lbl_804A0A90
	lwz r0, lbl_804A0A94
	stw r3,24(r1)
	stw r0,28(r1)
	addi r5,r1,108
	lis r3, lbl_80339D90@ha
	addi r3, r3, lbl_80339D90@l
	addi r4,r3,-4
	li r0,18
	mtctr r0
lbl_801314AC:
	lwz r3,4(r4)
	lwzu r0,8(r4)
	stw r3,4(r5)
	stwu r0,8(r5)
	bdnz lbl_801314AC
	addi r5,r1,396
	lis r3, lbl_80339E20@ha
	addi r3, r3, lbl_80339E20@l
	addi r4,r3,-4
	li r0,40
	mtctr r0
lbl_801314D8:
	lwz r3,4(r4)
	lwzu r0,8(r4)
	stw r3,4(r5)
	stwu r0,8(r5)
	bdnz lbl_801314D8
	li r14,45
	li r31,37
	lis r30, jumptable_80359DD0@ha
	b lbl_801322D4
lbl_801314FC:
	cmpwi r24,0
	beq lbl_80131554
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_8013151C
	bl fn_8013230C
lbl_8013151C:
	mr r3,r15
	li r4,1
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80131550
	addi r25,r25,1
lbl_80131550:
	li r24,0
lbl_80131554:
	mr r0,r23
	addi r23,r23,1
	slwi r0,r0,1
	lhzx r4,r19,r0
	clrlwi r0,r4,24
	slwi r3,r0,8
	rlwinm r0,r4,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r5,r0,16
	rlwinm r0,r5,0,16,16
	cmpwi r0,0
	beq lbl_801322B8
	clrlwi r0,r5,17
	srawi r22,r0,8
	clrlwi r21,r5,24
	cmplwi r22,64
	bgt lbl_801320D8
	addi r3, r30, jumptable_80359DD0@l
	slwi r0,r22,2
	lwzx r3,r3,r0
	mtctr r3
	bctr 
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_801315C8
	bl fn_8013230C
lbl_801315C8:
	mr r3,r15
	li r4,2
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_801315FC
	addi r25,r25,1
lbl_801315FC:
	add r23,r23,r21
	li r24,1
	b lbl_801322D4
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_80131620
	bl fn_8013230C
lbl_80131620:
	mr r3,r15
	li r4,6
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80131654
	addi r25,r25,1
lbl_80131654:
	slwi r0,r23,1
	add r16,r19,r0
	lhz r6,0(r16)
	mr r3,r15
	li r4,0
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	lhz r6,2(r16)
	mr r3,r15
	li r4,1
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	add r23,r23,r21
	b lbl_801322D4
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_801316D4
	bl fn_8013230C
lbl_801316D4:
	mr r3,r15
	li r4,7
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80131708
	addi r25,r25,1
lbl_80131708:
	slwi r0,r23,1
	lhzx r6,r19,r0
	mr r3,r15
	li r4,0
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	add r23,r23,r21
	b lbl_801322D4
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_80131758
	bl fn_8013230C
lbl_80131758:
	mr r3,r15
	li r4,8
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_8013178C
	addi r25,r25,1
lbl_8013178C:
	slwi r0,r23,1
	lhzx r5,r19,r0
	mr r3,r17
	clrlwi r0,r5,24
	slwi r4,r0,8
	rlwinm r0,r5,0,16,23
	srawi r0,r0,8
	or r0,r4,r0
	clrlwi r0,r0,16
	extsh r4,r0
	bl fn_80135A9C
	mr r5,r3
	mr r3,r15
	li r4,0
	bl fn_801322FC
	add r23,r23,r21
	b lbl_801322D4
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_801317E8
	bl fn_8013230C
lbl_801317E8:
	mr r3,r15
	li r4,9
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_8013181C
	addi r25,r25,1
lbl_8013181C:
	slwi r0,r23,1
	lhzx r6,r19,r0
	mr r3,r15
	li r4,0
	clrlwi r0,r6,24
	slwi r5,r0,8
	rlwinm r0,r6,0,16,23
	srawi r0,r0,8
	or r0,r5,r0
	clrlwi r0,r0,16
	extsh r5,r0
	bl fn_801322FC
	add r23,r23,r21
	b lbl_801322D4
	slwi r0,r23,1
	lhzx r4,r19,r0
	clrlwi r0,r4,24
	slwi r3,r0,8
	rlwinm r0,r4,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r3,r0
	li r4,0
	li r5,9
	bl fn_8013652C
	mr r15,r3
	bl fn_801364EC
	mr r3,r17
	mr r4,r15
	bl fn_80135B28
	add r23,r23,r21
	b lbl_801322D4
	slwi r0,r23,1
	lhzx r4,r19,r0
	clrlwi r0,r4,24
	slwi r3,r0,8
	rlwinm r0,r4,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r22,r0
	li r29,0
	li r15,0
lbl_801318CC:
	mr r3,r22
	subfic r4,r15,7
	bl fn_80136120
	clrlwi r0,r3,16
	cmpwi r0,0
	beq lbl_801318EC
	subfic r29,r15,8
	b lbl_801318F8
lbl_801318EC:
	addi r15,r15,1
	cmpwi r15,8
	blt lbl_801318CC
lbl_801318F8:
	li r15,0
	slwi r16,r25,2
	b lbl_8013195C
lbl_80131904:
	mr r3,r22
	mr r4,r15
	bl fn_80136120
	mr r0,r3
	mr r3,r27
	mr r4,r25
	clrlwi r5,r0,16
	li r6,0
	bl fn_80131324
	cmpwi r3,0
	beq lbl_80131958
	lwz r3,12(r27)
	lwzx r3,r3,r16
	bl fn_80136A88
	mr r0,r3
	lwz r3,12(r27)
	lwzx r3,r3,r16
	ori r4,r0,8
	bl fn_80136A70
	addi r25,r25,1
	addi r16,r16,4
lbl_80131958:
	addi r15,r15,1
lbl_8013195C:
	cmpw r15,r29
	blt lbl_80131904
	add r23,r23,r21
	b lbl_801322D4
	slwi r0,r23,1
	lhzx r5,r19,r0
	mr r3,r17
	clrlwi r0,r5,24
	slwi r4,r0,8
	rlwinm r0,r5,0,16,23
	srawi r0,r0,8
	or r0,r4,r0
	clrlwi r0,r0,16
	extsh r4,r0
	bl fn_80135A00
	mr r5,r3
	mr r3,r17
	mr r4,r18
	mr r6,r20
	bl fn_80132B8C
	mr r16,r3
	li r15,0
	li r22,0
	b lbl_80131A20
lbl_801319BC:
	cmpwi r15,0
	beq lbl_801319D0
	addi r0,r3,-1
	cmpw r15,r0
	bne lbl_801319F8
lbl_801319D0:
	lwz r3,12(r16)
	lwzx r3,r3,r22
	cmpwi r3,0
	beq lbl_80131A18
	li r4,1
	lwz r12,12(r3)
	lwz r12,8(r12)
	mtctr r12
	bctrl 
	b lbl_80131A18
lbl_801319F8:
	mr r3,r27
	mr r4,r25
	lwz r5,12(r16)
	lwzx r5,r5,r22
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80131A18
	addi r25,r25,1
lbl_80131A18:
	addi r15,r15,1
	addi r22,r22,4
lbl_80131A20:
	lwz r3,8(r16)
	cmpw r15,r3
	blt lbl_801319BC
	lwz r3,12(r16)
	bl fn_80136D48
	mr r3,r16
	bl dtor_80136CFC
	li r28,0
	add r23,r23,r21
	b lbl_801322D4
	lwz r3,24(r1)
	lwz r0,28(r1)
	stw r3,32(r1)
	stw r0,36(r1)
	slwi r0,r23,1
	add r4,r19,r0
	lhz r5,0(r4)
	clrlwi r0,r5,24
	slwi r3,r0,8
	rlwinm r0,r5,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r15,r0
	lhz r5,2(r4)
	mr r3,r17
	clrlwi r0,r5,24
	slwi r4,r0,8
	rlwinm r0,r5,0,16,23
	srawi r0,r0,8
	or r0,r4,r0
	clrlwi r0,r0,16
	extsh r4,r0
	bl fn_80135A9C
	mr r16,r3
	li r5,1
	stb r31,40(r1)
	addi r0,r22,-5
	slwi r0,r0,1
	addi r3,r1,32
	add r3,r3,r0
	lbz r0,1(r3)
	cmpwi r0,0
	beq lbl_80131AD8
	li r5,2
	stb r14,41(r1)
lbl_80131AD8:
	lbz r0,0(r3)
	cmpwi r0,0
	beq lbl_80131AF8
	mr r4,r5
	addi r5,r5,1
	li r0,48
	addi r3,r1,40
	stbx r0,r3,r4
lbl_80131AF8:
	addi r3,r1,40
	add r3,r3,r5
	lis r4, lbl_8035A13C@ha
	addi r4, r4, lbl_8035A13C@l
	mr r5,r15
	crclr 4*cr1+eq
	bl sprintf
	addi r3,r1,60
	addi r4,r1,40
	mr r5,r16
	crclr 4*cr1+eq
	bl sprintf
	addi r3,r1,60
	bl strlen
	mr r29,r3
	li r15,0
	addi r22,r1,60
	mr r16,r22
	b lbl_80131C9C
lbl_80131B44:
	bl fn_80136DA4
	cmpwi r3,0
	bne lbl_80131BE4
	lbz r0,0(r22)
	extsb r3,r0
	addi r0,r3,-32
	cmplwi r0,25
	bgt lbl_80131BDC
	lis r3, jumptable_80359D68@ha
	addi r3, r3, jumptable_80359D68@l
	slwi r0,r0,2
	lwzx r3,r3,r0
	mtctr r3
	bctr 
	li r5,77
	b lbl_80131C74
	li r5,0
	b lbl_80131C74
	li r5,86
	b lbl_80131C74
	li r5,87
	b lbl_80131C74
	li r5,88
	b lbl_80131C74
	li r5,89
	b lbl_80131C74
	li r5,90
	b lbl_80131C74
	li r5,91
	b lbl_80131C74
	li r5,92
	b lbl_80131C74
	li r5,93
	b lbl_80131C74
	li r5,94
	b lbl_80131C74
	li r5,95
	b lbl_80131C74
lbl_80131BDC:
	li r5,24
	b lbl_80131C74
lbl_80131BE4:
	lbz r0,0(r16)
	extsb r3,r0
	addi r0,r3,-32
	cmplwi r0,25
	bgt lbl_80131C70
	lis r3, jumptable_80359D00@ha
	addi r3, r3, jumptable_80359D00@l
	slwi r0,r0,2
	lwzx r3,r3,r0
	mtctr r3
	bctr 
	li r5,171
	b lbl_80131C74
	li r5,25
	b lbl_80131C74
	li r5,26
	b lbl_80131C74
	li r5,27
	b lbl_80131C74
	li r5,28
	b lbl_80131C74
	li r5,29
	b lbl_80131C74
	li r5,30
	b lbl_80131C74
	li r5,31
	b lbl_80131C74
	li r5,32
	b lbl_80131C74
	li r5,33
	b lbl_80131C74
	li r5,34
	b lbl_80131C74
	li r5,35
	b lbl_80131C74
lbl_80131C70:
	li r5,24
lbl_80131C74:
	mr r3,r27
	mr r4,r25
	li r6,0
	bl fn_80131324
	cmpwi r3,0
	beq lbl_80131C90
	addi r25,r25,1
lbl_80131C90:
	addi r15,r15,1
	addi r16,r16,1
	addi r22,r22,1
lbl_80131C9C:
	cmpw r15,r29
	blt lbl_80131B44
	add r23,r23,r21
	b lbl_801322D4
	add r23,r23,r21
	b lbl_801322D4
	slwi r0,r23,1
	lhzx r15,r19,r0
	mr r3,r17
	addi r4,r1,9
	addi r5,r1,16
	addi r6,r1,14
	bl fn_80135B00
	clrlwi r0,r15,24
	slwi r3,r0,8
	rlwinm r0,r15,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r3,r0
	lha r4,14(r1)
	lha r5,16(r1)
	bl fn_801363B8
	mr r5,r3
	cmpwi r3,0
	beq lbl_80131D94
	mr r3,r17
	li r4,50
	mr r6,r20
	bl fn_80132B8C
	mr r15,r3
	li r16,0
	li r22,0
	b lbl_80131D88
lbl_80131D24:
	cmpwi r16,0
	beq lbl_80131D38
	addi r0,r3,-1
	cmpw r16,r0
	bne lbl_80131D60
lbl_80131D38:
	lwz r3,12(r15)
	lwzx r3,r3,r22
	cmpwi r3,0
	beq lbl_80131D80
	li r4,1
	lwz r12,12(r3)
	lwz r12,8(r12)
	mtctr r12
	bctrl 
	b lbl_80131D80
lbl_80131D60:
	mr r3,r27
	mr r4,r25
	lwz r5,12(r15)
	lwzx r5,r5,r22
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80131D80
	addi r25,r25,1
lbl_80131D80:
	addi r16,r16,1
	addi r22,r22,4
lbl_80131D88:
	lwz r3,8(r15)
	cmpw r16,r3
	blt lbl_80131D24
lbl_80131D94:
	lwz r3,12(r28)
	bl fn_80136D48
	mr r3,r28
	bl dtor_80136CFC
	li r28,0
	add r23,r23,r21
	b lbl_801322D4
	slwi r0,r23,1
	lhzx r15,r19,r0
	mr r3,r17
	addi r4,r1,8
	addi r5,r1,12
	addi r6,r1,10
	bl fn_80135B00
	clrlwi r0,r15,24
	slwi r3,r0,8
	rlwinm r0,r15,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r3,r0
	lha r4,10(r1)
	bl fn_80136404
	mr r5,r3
	cmpwi r3,0
	beq lbl_80131E9C
	mr r3,r17
	li r4,50
	mr r6,r20
	bl fn_80132B8C
	mr r16,r3
	li r15,0
	li r22,0
	b lbl_80131E80
lbl_80131E1C:
	cmpwi r15,0
	beq lbl_80131E30
	addi r0,r3,-1
	cmpw r15,r0
	bne lbl_80131E58
lbl_80131E30:
	lwz r3,12(r16)
	lwzx r3,r3,r22
	cmpwi r3,0
	beq lbl_80131E78
	li r4,1
	lwz r12,12(r3)
	lwz r12,8(r12)
	mtctr r12
	bctrl 
	b lbl_80131E78
lbl_80131E58:
	mr r3,r27
	mr r4,r25
	lwz r5,12(r16)
	lwzx r5,r5,r22
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80131E78
	addi r25,r25,1
lbl_80131E78:
	addi r15,r15,1
	addi r22,r22,4
lbl_80131E80:
	lwz r3,8(r16)
	cmpw r15,r3
	blt lbl_80131E1C
	lwz r3,12(r16)
	bl fn_80136D48
	mr r3,r16
	bl dtor_80136CFC
lbl_80131E9C:
	add r23,r23,r21
	b lbl_801322D4
	slwi r0,r23,1
	lhzx r4,r19,r0
	clrlwi r0,r4,24
	slwi r3,r0,8
	rlwinm r0,r4,0,16,23
	srawi r0,r0,8
	or r0,r3,r0
	clrlwi r0,r0,16
	extsh r3,r0
	li r4,0
	li r5,23
	bl fn_8013652C
	mr r16,r3
	mr r3,r17
	bl fn_80135B68
	bl fn_801364EC
	mr r15,r3
	addi r5,r1,252
	addi r4,r1,108
	li r0,18
	mtctr r0
lbl_80131EF8:
	lwz r3,4(r4)
	lwzu r0,8(r4)
	stw r3,4(r5)
	stwu r0,8(r5)
	bdnz lbl_80131EF8
	mulli r0,r16,6
	addi r22,r1,256
	add r22,r22,r0
	mr r3,r17
	lbz r4,0(r22)
	lha r5,2(r22)
	lha r6,4(r22)
	bl fn_80135AE4
	lbz r0,0(r22)
	cntlzw r0,r0
	srwi r16,r0,5
	mr r3,r15
	mr r4,r16
	bl fn_801364A0
	mr r29,r3
	cmpwi r3,0
	beq lbl_801320D0
	lha r4,2(r22)
	cmpwi r4,0
	beq lbl_80132020
	mr r3,r15
	addi r0,r4,-1
	extsh r4,r0
	extsh r5,r16
	bl fn_80136434
	mr r5,r3
	cmpwi r3,0
	beq lbl_80132020
	mr r3,r17
	li r4,50
	mr r6,r20
	bl fn_80132B8C
	mr r15,r3
	li r16,0
	li r22,0
	b lbl_80132000
lbl_80131F9C:
	cmpwi r16,0
	beq lbl_80131FB0
	addi r0,r3,-1
	cmpw r16,r0
	bne lbl_80131FD8
lbl_80131FB0:
	lwz r3,12(r15)
	lwzx r3,r3,r22
	cmpwi r3,0
	beq lbl_80131FF8
	li r4,1
	lwz r12,12(r3)
	lwz r12,8(r12)
	mtctr r12
	bctrl 
	b lbl_80131FF8
lbl_80131FD8:
	mr r3,r27
	mr r4,r25
	lwz r5,12(r15)
	lwzx r5,r5,r22
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80131FF8
	addi r25,r25,1
lbl_80131FF8:
	addi r16,r16,1
	addi r22,r22,4
lbl_80132000:
	lwz r3,8(r15)
	cmpw r16,r3
	blt lbl_80131F9C
	lwz r3,12(r15)
	bl fn_80136D48
	mr r3,r15
	bl dtor_80136CFC
	li r28,0
lbl_80132020:
	cmpwi r29,0
	beq lbl_801320D0
	mr r3,r17
	li r4,100
	mr r5,r29
	mr r6,r20
	bl fn_80132B8C
	mr r15,r3
	li r16,0
	li r22,0
	b lbl_801320B0
lbl_8013204C:
	cmpwi r16,0
	beq lbl_80132060
	addi r0,r3,-1
	cmpw r16,r0
	bne lbl_80132088
lbl_80132060:
	lwz r3,12(r15)
	lwzx r3,r3,r22
	cmpwi r3,0
	beq lbl_801320A8
	li r4,1
	lwz r12,12(r3)
	lwz r12,8(r12)
	mtctr r12
	bctrl 
	b lbl_801320A8
lbl_80132088:
	mr r3,r27
	mr r4,r25
	lwz r5,12(r15)
	lwzx r5,r5,r22
	bl fn_80131288
	cmpwi r3,0
	beq lbl_801320A8
	addi r25,r25,1
lbl_801320A8:
	addi r16,r16,1
	addi r22,r22,4
lbl_801320B0:
	lwz r3,8(r15)
	cmpw r16,r3
	blt lbl_8013204C
	lwz r3,12(r15)
	bl fn_80136D48
	mr r3,r15
	bl dtor_80136CFC
	li r28,0
lbl_801320D0:
	add r23,r23,r21
	b lbl_801322D4
lbl_801320D8:
	addi r5,r1,716
	addi r4,r1,396
	li r0,40
	mtctr r0
lbl_801320E8:
	lwz r3,4(r4)
	lwzu r0,8(r4)
	stw r3,4(r5)
	stwu r0,8(r5)
	bdnz lbl_801320E8
	li r16,0
lbl_80132100:
	addi r29,r1,720
	add r29,r29,r16
	lha r0,0(r29)
	cmpwi r0,0
	bge lbl_8013211C
	add r23,r23,r21
	b lbl_801322D4
lbl_8013211C:
	cmpw r22,r0
	bne lbl_801322B0
	lbz r0,2(r29)
	cmpwi r0,0
	beq lbl_80132154
	cmpwi r0,1
	beq lbl_80132184
	cmpwi r0,2
	beq lbl_801321D8
	cmpwi r0,3
	beq lbl_801321F4
	cmpwi r0,4
	beq lbl_80132258
	b lbl_801322AC
lbl_80132154:
	mr r3,r27
	mr r4,r25
	lwz r0,4(r29)
	clrlwi r5,r0,16
	lbz r6,3(r29)
	clrlwi r6,r6,16
	bl fn_80131324
	cmpwi r3,0
	beq lbl_8013217C
	addi r25,r25,1
lbl_8013217C:
	add r23,r23,r21
	b lbl_801322B0
lbl_80132184:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_8013219C
	bl fn_8013230C
lbl_8013219C:
	mr r3,r15
	lwz r4,4(r29)
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_801321D0
	addi r25,r25,1
lbl_801321D0:
	add r23,r23,r21
	b lbl_801322B0
lbl_801321D8:
	bl fn_80136DA4
	cmpwi r3,0
	beq lbl_801321EC
	li r0,1
	stb r0, lbl_8049D6FC
lbl_801321EC:
	add r23,r23,r21
	b lbl_801322B0
lbl_801321F4:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_8013220C
	bl fn_8013230C
lbl_8013220C:
	mr r3,r15
	li r4,8
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_80132240
	addi r25,r25,1
lbl_80132240:
	mr r3,r15
	li r4,0
	lwz r5,4(r29)
	bl fn_801322FC
	add r23,r23,r21
	b lbl_801322B0
lbl_80132258:
	li r3,116
	bl fn_80136C54
	mr r15,r3
	cmpwi r3,0
	beq lbl_80132270
	bl fn_8013230C
lbl_80132270:
	mr r3,r15
	li r4,4
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r27
	mr r4,r25
	mr r5,r15
	bl fn_80131288
	cmpwi r3,0
	beq lbl_801322A4
	addi r25,r25,1
lbl_801322A4:
	add r23,r23,r21
	b lbl_801322B0
lbl_801322AC:
	add r23,r23,r21
lbl_801322B0:
	addi r16,r16,8
	b lbl_80132100
lbl_801322B8:
	mr r3,r27
	mr r4,r25
	li r6,0
	bl fn_80131324
	cmpwi r3,0
	beq lbl_801322D4
	addi r25,r25,1
lbl_801322D4:
	cmpw r23,r26
	blt lbl_801314FC
	stw r25,8(r27)
	mr r3,r27
	addi r11,r1,1120
	bl _restgpr_14
	lwz r0,1124(r1)
	mtlr r0
	addi r1,r1,1120
	blr
}

// fn_80132F3C: constructor/inicializador principal de TcgTextEntryHandle
// (h){data(0x0); vtable(0x4); ...}, mismo layout de "big object" que
// fn_80133194. Encadena casi todos los setters ya validados arriba con
// valores constantes -- alta confianza, muy mecanico.
extern "C" void memset(void* dst, int val, s32 n);
extern "C" void fn_80130AE8(void* obj, s32 v);
extern "C" void fn_80130A78(void* obj, s32 count, s32 v);
extern "C" void fn_801309EC(void* obj);

// Encadena docenas de setters definidos arriba en este mismo archivo --
// sin dont_inline mwcc los auto-inlinea todos (mismo gotcha de siempre).
extern "C" asm void* fn_80132F3C(void* h, u32 p2, s32 maxCount, u32 p4)
{
	stwu r1, -32(r1)
	mflr r0
	stw r0, 36(r1)
	addi r11, r1, 32
	bl _savegpr_28
	mr r30, r3
	mr r29, r4
	mr r28, r5
	mr r31, r6
	lis r4, lbl_8035A0E8@ha
	addi r0, r4, lbl_8035A0E8@l
	stw r0, 4(r3)
	li r3, 616
	bl fn_80136C54
	stw r3, 0(r30)
	li r4, 0
	li r5, 616
	bl memset
	lwz r3, 0(r30)
	stw r29, 16(r3)
	lwz r3, 0(r30)
	stw r28, 0(r3)
	li r0, 0
	lwz r3, 0(r30)
	stw r0, 4(r3)
	slwi r3, r28, 2
	bl fn_80136CA8
	lwz r4, 0(r30)
	stw r3, 8(r4)
	li r3, 40
	bl fn_80136C54
	mr r29, r3
	cmpwi r3, 0
	beq lbl_80132FC8
	bl fn_80136AA0
lbl_80132FC8:
	lwz r3, 0(r30)
	stw r29, 12(r3)
	lwz r3, 0(r30)
	lwz r3, 12(r3)
	li r4, 1
	bl fn_80130AE8
	lwz r3, 0(r30)
	lwz r3, 12(r3)
	mr r4, r28
	li r5, 0
	bl fn_80130A78
	lwz r3, 0(r30)
	lwz r3, 12(r3)
	bl fn_801309EC
	lwz r3, 0(r30)
	stw r31, 92(r3)
	li r3, 16
	bl fn_80136C54
	lwz r4, 0(r30)
	stw r3, 96(r4)
	li r0, -1
	lwz r3, 0(r30)
	stw r0, 56(r3)
	lwz r3, 0(r30)
	lwz r3, 96(r3)
	stw r31, 0(r3)
	li r0, 0
	lwz r3, 0(r30)
	lwz r3, 96(r3)
	stw r0, 8(r3)
	lwz r3, 0(r30)
	lwz r3, 96(r3)
	stw r0, 4(r3)
	mulli r3, r31, 60
	bl fn_80136CA8
	lwz r4, 0(r30)
	lwz r4, 96(r4)
	stw r3, 12(r4)
	mr r3, r30
	li r4, 1
	li r5, 0
	bl fn_80134DF4
	mr r3, r30
	li r4, 0
	bl fn_80134E8C
	mr r3, r30
	lfs f1, lbl_804A0AA8
	fmr f2, f1
	la r31, lbl_804A0AA8
	lfs f3, 4(r31)
	lfs f4, 8(r31)
	bl fn_80135354
	mr r3, r30
	lfs f1, lbl_804A0AA8
	fmr f2, f1
	bl fn_80135468
	mr r3, r30
	li r4, 8
	bl fn_80135490
	mr r3, r30
	li r4, 0
	li r5, 0
	bl fn_801354C0
	mr r3, r30
	lis r4, 0x2020
	addi r4, r4, 0x20B8
	bl fn_80134E3C
	mr r3, r30
	li r4, 1
	bl fn_80135988
	mr r3, r30
	li r4, -1
	bl fn_80135994
	mr r3, r30
	li r4, 1150
	bl fn_801359A0
	bl fn_80136DA4
	cmpwi r3, 0
	bne lbl_80133114
	mr r3, r30
	lfs f1, 12(r31)
	bl fn_801359E8
	b lbl_80133120
lbl_80133114:
	mr r3, r30
	lfs f1, 16(r31)
	bl fn_801359E8
lbl_80133120:
	mr r3, r30
	la r31, lbl_804A0AA8
	lfs f1, 20(r31)
	bl fn_801359F4
	mr r3, r30
	li r4, 1
	bl fn_801359D0
	mr r3, r30
	lfs f1, lbl_804A0AA8
	fmr f2, f1
	bl fn_80135448
	mr r3, r30
	lfs f1, 24(r31)
	bl fn_8013543C
	mr r3, r30
	lfs f1, 28(r31)
	fmr f2, f1
	bl fn_80135414
	mr r3, r30
	li r4, 0
	lfs f1, lbl_804A0AA8
	bl fn_80135380
	mr r3, r30
	addi r11, r1, 32
	bl _restgpr_28
	lwz r0, 36(r1)
	mtlr r0
	addi r1, r1, 32
	blr
}

// fn_80134304: recorre h->list->items, hace dispatch virtual (vtable slot 4)
// por cada uno y arma un ResultEntry (0x3c bytes, array en
// h->data->field_0x60->arr) segun el codigo devuelto por el dispatch (0/2/4
// = casos simples de memset+campos fijos; 7/8 = caso complejo con
// fn_80134EA0, la otra funcion grande; default = solo fn_801342BC).
// Best-effort, no se persigue el 100% -- funcion grande (776 bytes) con
// switch de 5 vias y 2 dependencias gigantes (fn_801335F4/fn_80134EA0)
// solo forward-declaradas.
struct ResultEntry {
	f32 field_0x10;
	f32 field_0x14;
	f32 field_0x18;
	f32 field_0x1c;
	u32 field_0x20;
	u32 field_0x24;
	void* field_0x28;
	u32 field_0x2c;
	u32 field_0x30;
	u8 pad_34[0x38 - 0x34];
	u8 field_0x38;
};

extern "C" s32 fn_80134EA0(void* h, void* posA, void* posB, void* extentA, void* extentB, f32 scaleA, f32 scaleB);

// fn_801335F4: motor de layout/word-wrap sobre h->data->field_0x8[] (misma
// lista de items que fn_80134304 recorre despues). Best-effort -- funcion
// gigante (3272 bytes) intensiva en punto flotante, sin proyecto de
// referencia; el control de flujo (loop principal + switch de 6 vias segun
// el codigo del dispatch virtual, mas 2 loops de post-proceso de bounding
// box y un loop final de insercion de marcadores de quiebre de linea) esta
// confirmado por disasm, pero la aritmetica de punto flotante exacta de
// cada caso (avance de pluma, alineacion, ancho de tabulacion) no se
// verifico bit a bit -- mismo criterio que fn_80132D24. `insertItem`
// modela el patron de "desplazar el array a la derecha e insertar" visto 3
// veces en el disasm (una por cada marcador de quiebre nuevo).
// fn_801361FC: getter de una tabla de espaciado (ancho `lbl_80339F60` para
// modo!=1, `lbl_8033A25C` para modo==1), indexada por `fn_8013652C(code,0,0xbe)`.
// Si `fn_80136DA4(codeAsHandle)` da falso, devuelve el default fijo 0x14 sin
// consultar tabla. El original copia ambas tablas completas (0x2fc bytes
// cada una, confirmado por `symbols.txt`) a buffers de stack antes de
// indexar -- reproducido literalmente con `memcpy` para matchear tamano de
// stack frame, aunque el resultado observable sea identico a indexar la
// tabla global directo.
struct SpacingTable {
	u32 val[191];
};
extern "C" SpacingTable lbl_80339F60;
extern "C" SpacingTable lbl_8033A25C;

extern "C" asm s32 fn_801361FC(s32 code, s32 unused, s32 mode)
{
	stwu r1, -1552(r1)
	mflr r0
	stw r0, 1556(r1)
	addi r11, r1, 1552
	bl _savegpr_29
	mr r30, r3
	mr r31, r5
	li r29, 20
	bl fn_80136DA4
	cmpwi r3, 0
	beq lbl_80136294
	addi r5, r1, 768
	lis r3, lbl_80339F60@ha
	addi r3, r3, lbl_80339F60@l
	addi r4, r3, -4
	li r0, 95
	mtctr r0
lbl_80136234:
	lwz r3, 4(r4)
	lwzu r0, 8(r4)
	stw r3, 4(r5)
	stwu r0, 8(r5)
	bdnz lbl_80136234
	lwz r0, 4(r4)
	stw r0, 4(r5)
	addi r5, r1, 4
	lis r3, lbl_8033A25C@ha
	addi r3, r3, lbl_8033A25C@l
	addi r4, r3, -4
	li r0, 95
	mtctr r0
lbl_80136268:
	lwz r3, 4(r4)
	lwzu r0, 8(r4)
	stw r3, 4(r5)
	stwu r0, 8(r5)
	bdnz lbl_80136268
	lwz r0, 4(r4)
	stw r0, 4(r5)
	mr r3, r30
	li r4, 0
	li r5, 190
	bl fn_8013652C
	cmpwi r31, 0
	beq lbl_80136268_case0
	cmpwi r31, 1
	beq lbl_80136278_case1
	b lbl_80136288_default
lbl_80136268_case0:
	slwi r0, r3, 2
	addi r3, r1, 772
	lwzx r29, r3, r0
	b lbl_80136294
lbl_80136278_case1:
	slwi r0, r3, 2
	addi r3, r1, 8
	lwzx r29, r3, r0
	b lbl_80136294
lbl_80136288_default:
	slwi r0, r3, 2
	addi r3, r1, 772
	lwzx r29, r3, r0
lbl_80136294:
	mr r3, r29
	addi r11, r1, 1552
	bl _restgpr_29
	lwz r0, 1556(r1)
	mtlr r0
	addi r1, r1, 1552
	blr
}
// lbl_804A0AA8 ya declarada arriba en .sdata2
extern "C" __declspec(section ".sdata2") f64 lbl_804A0AA0; // constante "magica" de conversion int->float (0x4330_0000...)

extern "C" asm s32 fn_801335F4(TcgTextEntryHandle* h)
{
stwu r1,-432(r1)
	mflr r0
	stw r0,436(r1)
	stfd f31,416(r1)
	opword 0xf3e101a8
	stfd f30,400(r1)
	opword 0xf3c10198
	stfd f29,384(r1)
	opword 0xf3a10188
	stfd f28,368(r1)
	opword 0xf3810178
	stfd f27,352(r1)
	opword 0xf3610168
	stfd f26,336(r1)
	opword 0xf3410158
	stfd f25,320(r1)
	opword 0xf3210148
	stfd f24,304(r1)
	opword 0xf3010138
	stfd f23,288(r1)
	opword 0xf2e10128
	stfd f22,272(r1)
	opword 0xf2c10118
	stfd f21,256(r1)
	opword 0xf2a10108
	stfd f20,240(r1)
	opword 0xf28100f8
	stfd f19,224(r1)
	opword 0xf26100e8
	stfd f18,208(r1)
	opword 0xf24100d8
	stfd f17,192(r1)
	opword 0xf22100c8
	stfd f16,176(r1)
	opword 0xf20100b8
	stfd f15,160(r1)
	opword 0xf1e100a8
	addi r11,r1,160
	bl _savegpr_16
	mr r19,r3
	lis r0,17200
	stw r0,72(r1)
	lis r0,17200
	stw r0,80(r1)
	li r24,0
	lfs f24, lbl_804A0AA8
	fmr f23,f24
	fmr f22,f24
	fmr f21,f24
	li r23,0
	lwz r4,0(r3)
	lfs f20,180(r4)
	lfs f19,184(r4)
	lfs f18,188(r4)
	lfs f17,192(r4)
	lfs f16,196(r4)
	li r22,-1
	li r21,0
	li r18,0
	bl fn_801359C4
	mr r27,r3
	li r20,0
	li r26,0
	li r17,0
	lfd f27, lbl_804A0AA0
	addi r29,r1,8
	la r30, lbl_804A0AA8
	lfs f29,28(r30)
	lfs f31,32(r30)
	lfs f28,24(r30)
	lfs f30,36(r30)
	li r31,25
	b lbl_80133F1C
lbl_80133718:
	lwz r3,8(r3)
	lwzx r25,r3,r17
	mr r3,r25
	bl fn_80136A88
	clrlwi r0,r3,31
	cmpwi r0,0
	bne lbl_80133F14
	mr r3,r25
	lwz r12,12(r3)
	lwz r12,16(r12)
	mtctr r12
	bctrl 
	cmpwi r3,4
	beq lbl_8013377C
	cmpwi r3,1
	beq lbl_80133A28
	cmpwi r3,2
	beq lbl_80133A44
	cmpwi r3,0
	beq lbl_80133AFC
	cmpwi r3,6
	beq lbl_80133EB8
	cmpwi r3,9
	beq lbl_80133EF4
	b lbl_80133F14
lbl_8013377C:
	li r20,1
	lwz r3,0(r19)
	lwz r0,144(r3)
	cmpwi r0,1
	bne lbl_801338F4
	lfs f24, lbl_804A0AA8
	li r28,0
	li r16,0
	cmpwi r27,1
	beq lbl_801337D4
	cmpwi r27,2
	beq lbl_80133814
	cmpwi r27,3
	beq lbl_80133854
	li r28,0
	cmpwi r21,2
	ble lbl_801337CC
	li r28,1
	li r16,0
	b lbl_80133890
lbl_801337CC:
	subfic r16,r21,2
	b lbl_80133890
lbl_801337D4:
	cmpwi r21,0
	beq lbl_80133890
	cmpwi r21,1
	beq lbl_801337F0
	cmpwi r21,2
	beq lbl_801337FC
	b lbl_80133808
lbl_801337F0:
	li r28,1
	li r16,2
	b lbl_80133890
lbl_801337FC:
	li r28,1
	li r16,1
	b lbl_80133890
lbl_80133808:
	li r28,0
	li r16,0
	b lbl_80133890
lbl_80133814:
	cmplwi r21,1
	ble lbl_80133890
	cmpwi r21,2
	beq lbl_80133830
	cmpwi r21,3
	beq lbl_8013383C
	b lbl_80133848
lbl_80133830:
	li r28,2
	li r16,2
	b lbl_80133890
lbl_8013383C:
	li r28,1
	li r16,1
	b lbl_80133890
lbl_80133848:
	li r28,0
	li r16,0
	b lbl_80133890
lbl_80133854:
	cmplwi r21,2
	ble lbl_80133890
	cmpwi r21,3
	beq lbl_80133870
	cmpwi r21,4
	beq lbl_8013387C
	b lbl_80133888
lbl_80133870:
	li r28,2
	li r16,2
	b lbl_80133890
lbl_8013387C:
	li r28,1
	li r16,1
	b lbl_80133890
lbl_80133888:
	li r28,0
	li r16,0
lbl_80133890:
	mr r3,r19
	bl fn_8013540C
	mullw r21,r28,r3
	mr r3,r19
	bl fn_8013539C
	xoris r0,r28,32768
	stw r0,76(r1)
	lfd f0,72(r1)
	fsubs f0,f0,f27
	fmuls f0,f0,f1
	fctiwz f0,f0
	stfd f0,88(r1)
	lwz r28,92(r1)
	mr r3,r25
	li r4,0
	mr r5,r21
	bl fn_801322FC
	mr r3,r25
	li r4,1
	mr r5,r28
	bl fn_801322FC
	mr r3,r25
	li r4,2
	mr r5,r16
	bl fn_801322FC
lbl_801338F4:
	li r21,0
	mr r3,r25
	bl fn_80136A88
	mr r28,r3
	rlwinm r0,r3,0,30,30
	cmpwi r0,0
	bne lbl_80133F14
	lwz r3,0(r19)
	lwz r3,4(r3)
	addi r5,r3,-1
	addi r4,r26,1
	slwi r3,r5,2
	addi r0,r5,1
	subf r0,r4,r0
	mtctr r0
	cmpw r5,r4
	blt lbl_80133954
lbl_80133938:
	lwz r4,0(r19)
	lwz r0,8(r4)
	add r4,r0,r3
	lwz r0,0(r4)
	stw r0,8(r4)
	addi r3,r3,-4
	bdnz lbl_80133938
lbl_80133954:
	li r3,116
	bl fn_80136C54
	mr r18,r3
	cmpwi r3,0
	beq lbl_8013396C
	bl fn_8013230C
lbl_8013396C:
	mr r3,r18
	li r4,2
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r18
	li r4,1
	bl fn_80136A78
	mr r3,r18
	bl fn_80136A88
	mr r0,r3
	mr r3,r18
	ori r4,r0,4
	bl fn_80136A70
	lwz r3,0(r19)
	lwz r0,8(r3)
	add r3,r0,r17
	stw r18,4(r3)
	li r3,116
	bl fn_80136C54
	mr r18,r3
	cmpwi r3,0
	beq lbl_801339D0
	bl fn_8013230C
lbl_801339D0:
	mr r3,r18
	li r4,1
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r18
	li r4,1
	bl fn_80136A78
	lwz r3,0(r19)
	lwz r0,8(r3)
	add r3,r0,r17
	stw r18,8(r3)
	mr r3,r25
	ori r4,r28,2
	bl fn_80136A70
	lwz r4,0(r19)
	lwz r3,4(r4)
	addi r0,r3,2
	stw r0,4(r4)
	li r3,0
	b lbl_801341D8
lbl_80133A28:
	lfs f24, lbl_804A0AA8
	stfs f24,96(r25)
	stfs f23,100(r25)
	mr r22,r26
	mr r24,r25
	stfsx f24,r29,r18
	b lbl_80133F14
lbl_80133A44:
	fadds f0,f18,f16
	fadds f23,f23,f0
	cmpwi r24,0
	beq lbl_80133AA0
	stw r23,104(r24)
	lfs f0,96(r24)
	fsubs f0,f24,f0
	stfs f0,108(r24)
	lfs f0,100(r24)
	fsubs f0,f23,f0
	stfs f0,112(r24)
	lfs f0,108(r24)
	fcmpo cr0,f22,f0
	bge lbl_80133A88
	fmr f22,f0
	lwz r3,0(r19)
	stfs f0,204(r3)
lbl_80133A88:
	lfs f0,112(r24)
	fcmpo cr0,f21,f0
	bge lbl_80133AA0
	fmr f21,f0
	lwz r3,0(r19)
	stfs f0,212(r3)
lbl_80133AA0:
	stfsx f24,r29,r18
	lwz r3,0(r19)
	lfs f0,208(r3)
	fcmpo cr0,f0,f23
	bge lbl_80133AB8
	stfs f23,208(r3)
lbl_80133AB8:
	li r23,0
	mr r3,r25
	bl fn_80136A88
	rlwinm r0,r3,0,29,29
	cmpwi r0,0
	bne lbl_80133AD4
	addi r21,r21,1
lbl_80133AD4:
	bl fn_80136DA4
	cmpwi r3,0
	bne lbl_80133AEC
	fdivs f0,f19,f29
	fmuls f18,f28,f0
	b lbl_80133AF4
lbl_80133AEC:
	fdivs f0,f19,f29
	fmuls f18,f31,f0
lbl_80133AF4:
	addi r18,r18,4
	b lbl_80133F14
lbl_80133AFC:
	mr r3,r25
	mr r4,r24
	bl fn_801342FC
	mr r3,r25
	bl fn_801342F4
	clrlwi r28,r3,16
	bl fn_80136DA4
	cmpwi r3,0
	bne lbl_80133BA4
	fdivs f0,f20,f29
	fdivs f2,f19,f29
	fmuls f3,f30,f0
	fmuls f4,f30,f2
	fmuls f26,f28,f0
	fmuls f25,f28,f2
	mr r3,r25
	fadds f1,f24,f0
	fadds f2,f23,f2
	bl fn_801342E0
	mr r3,r25
	divw r5,r28,r31
	mullw r0,r5,r31
	subf r0,r0,r28
	mulli r4,r0,20
	addi r0,r4,1
	xoris r0,r0,32768
	stw r0,84(r1)
	lfd f0,80(r1)
	fsubs f1,f0,f27
	divw r0,r5,r31
	mullw r0,r0,r31
	subf r0,r0,r5
	mulli r4,r0,20
	addi r0,r4,1
	xoris r0,r0,32768
	stw r0,76(r1)
	lfd f0,72(r1)
	fsubs f2,f0,f27
	lfs f3,36(r30)
	fmr f4,f3
	bl fn_801342CC
	b lbl_80133C78
lbl_80133BA4:
	fdivs f25,f20,f29
	fdivs f15,f19,f29
	mr r3,r28
	li r4,0
	lwz r5,0(r19)
	lwz r5,612(r5)
	bl fn_801361FC
	xoris r0,r3,32768
	stw r0,84(r1)
	lfd f0,80(r1)
	fsubs f26,f0,f27
	bl fn_80136DA4
	cmpwi r3,2
	bne lbl_80133C14
	lhz r0,22(r25)
	cmpwi r0,0
	beq lbl_80133C14
	li r3,25
	li r4,0
	lwz r5,0(r19)
	lwz r5,612(r5)
	bl fn_801361FC
	xoris r0,r3,32768
	stw r0,76(r1)
	lfd f0,72(r1)
	fsubs f0,f0,f27
	fmuls f0,f25,f0
	fadds f24,f24,f0
lbl_80133C14:
	fmuls f3,f26,f25
	fmuls f4,f31,f15
	mr r3,r25
	fmr f1,f24
	fmr f2,f23
	bl fn_801342E0
	mr r3,r25
	divw r4,r28,r31
	mullw r0,r4,r31
	subf r0,r0,r28
	mulli r0,r0,20
	xoris r0,r0,32768
	stw r0,84(r1)
	lfd f0,80(r1)
	fsubs f1,f0,f27
	mulli r0,r4,24
	xoris r0,r0,32768
	stw r0,76(r1)
	lfd f0,72(r1)
	fsubs f2,f0,f27
	fmr f3,f26
	fmr f4,f31
	bl fn_801342CC
	fmuls f26,f26,f25
	fmuls f25,f31,f15
lbl_80133C78:
	fadds f0,f26,f17
	fadds f24,f24,f0
	fcmpo cr0,f18,f25
	bge lbl_80133C8C
	fmr f18,f25
lbl_80133C8C:
	addi r23,r23,1
	lwz r3,0(r19)
	lbz r0,216(r3)
	cmpwi r0,0
	beq lbl_80133F14
	lfs f0,220(r3)
	fcmpo cr0,f24,f0
	cror eq,lt,eq
	beq lbl_80133F14
	li r16,0
	addi r27,r26,-1
lbl_80133CB8:
	cmpw r22,r27
	bne lbl_80133CC8
	mr r27,r26
	b lbl_80133D70
lbl_80133CC8:
	lwz r3,0(r19)
	lwz r3,8(r3)
	slwi r0,r27,2
	lwzx r17,r3,r0
	mr r3,r17
	lwz r12,12(r3)
	lwz r12,16(r12)
	mtctr r12
	bctrl 
	cmpwi r3,0
	beq lbl_80133D00
	cmpwi r3,5
	beq lbl_80133D48
	b lbl_80133D60
lbl_80133D00:
	mr r3,r17
	bl fn_801342F4
	clrlwi r18,r3,16
	mr r3,r17
	bl fn_80136A88
	rlwinm r0,r3,0,28,28
	cmpwi r0,0
	bne lbl_80133D60
	cmpwi r18,25
	beq lbl_80133D34
	cmpwi r18,171
	beq lbl_80133D3C
	b lbl_80133D60
lbl_80133D34:
	li r16,1
	b lbl_80133D60
lbl_80133D3C:
	li r16,1
	addi r27,r27,1
	b lbl_80133D60
lbl_80133D48:
	mr r3,r17
	bl fn_80136A88
	rlwinm r0,r3,0,28,28
	cmpwi r0,0
	bne lbl_80133D60
	li r16,1
lbl_80133D60:
	cmpwi r16,0
	bne lbl_80133D70
	addi r27,r27,-1
	b lbl_80133CB8
lbl_80133D70:
	lwz r3,0(r19)
	lwz r3,4(r3)
	addi r4,r3,-1
	slwi r3,r4,2
	addi r0,r4,1
	subf r0,r27,r0
	mtctr r0
	cmpw r4,r27
	blt lbl_80133DB0
lbl_80133D94:
	lwz r4,0(r19)
	lwz r0,8(r4)
	add r4,r0,r3
	lwz r0,0(r4)
	stw r0,8(r4)
	addi r3,r3,-4
	bdnz lbl_80133D94
lbl_80133DB0:
	li r3,116
	bl fn_80136C54
	mr r17,r3
	cmpwi r3,0
	beq lbl_80133DC8
	bl fn_8013230C
lbl_80133DC8:
	mr r3,r17
	li r4,2
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r17
	li r4,1
	bl fn_80136A78
	slwi r18,r27,2
	lwz r3,0(r19)
	lwz r3,8(r3)
	stwx r17,r3,r18
	li r3,116
	bl fn_80136C54
	mr r17,r3
	cmpwi r3,0
	beq lbl_80133E14
	bl fn_8013230C
lbl_80133E14:
	mr r3,r17
	li r4,1
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r17
	li r4,1
	bl fn_80136A78
	lwz r3,0(r19)
	lwz r0,8(r3)
	add r3,r0,r18
	stw r17,4(r3)
	lwz r3,0(r19)
	lwz r0,8(r3)
	add r3,r0,r18
	lwz r17,8(r3)
	mr r3,r17
	lwz r12,12(r3)
	lwz r12,16(r12)
	mtctr r12
	bctrl 
	cmpwi r3,0
	bne lbl_80133EA0
	mr r3,r17
	bl fn_801342F4
	clrlwi r0,r3,16
	cmpwi r0,25
	bne lbl_80133EA0
	mr r3,r17
	bl fn_80136A88
	mr r0,r3
	mr r3,r17
	ori r4,r0,1
	bl fn_80136A70
lbl_80133EA0:
	lwz r4,0(r19)
	lwz r3,4(r4)
	addi r0,r3,2
	stw r0,4(r4)
	li r3,0
	b lbl_801341D8
lbl_80133EB8:
	mr r3,r25
	li r4,0
	bl fn_801342BC
	xoris r0,r3,32768
	stw r0,84(r1)
	lfd f0,80(r1)
	fsubs f24,f0,f27
	mr r3,r25
	li r4,1
	bl fn_801342BC
	xoris r0,r3,32768
	stw r0,76(r1)
	lfd f0,72(r1)
	fsubs f23,f0,f27
	b lbl_80133F14
lbl_80133EF4:
	mr r3,r25
	li r4,0
	bl fn_801342BC
	xoris r0,r3,32768
	stw r0,84(r1)
	lfd f0,80(r1)
	fsubs f0,f0,f27
	fadds f24,f24,f0
lbl_80133F14:
	addi r26,r26,1
	addi r17,r17,4
lbl_80133F1C:
	lwz r3,0(r19)
	lwz r0,4(r3)
	cmpw r26,r0
	blt lbl_80133718
	mr r3,r19
	bl fn_80134DD0
	rlwinm r0,r3,0,24,24
	cmpwi r0,0
	beq lbl_80133FD0
	li r21,0
	lfs f16, lbl_804A0AA8
	li r18,0
	li r22,0
	addi r17,r1,8
	la r3, lbl_804A0AA8
	lfs f15,40(r3)
	b lbl_80133FC0
lbl_80133F60:
	lwz r3,8(r3)
	lwzx r23,r3,r22
	mr r3,r23
	lwz r12,12(r3)
	lwz r12,16(r12)
	mtctr r12
	bctrl 
	cmpwi r3,1
	beq lbl_80133F90
	cmpwi r3,0
	beq lbl_80133FAC
	b lbl_80133FB8
lbl_80133F90:
	lwz r3,0(r19)
	lfs f1,220(r3)
	lfsx f0,r17,r21
	fsubs f0,f1,f0
	fmuls f16,f0,f15
	addi r21,r21,4
	b lbl_80133FB8
lbl_80133FAC:
	lfs f0,40(r23)
	fadds f0,f0,f16
	stfs f0,40(r23)
lbl_80133FB8:
	addi r18,r18,1
	addi r22,r22,4
lbl_80133FC0:
	lwz r3,0(r19)
	lwz r0,4(r3)
	cmpw r18,r0
	blt lbl_80133F60
lbl_80133FD0:
	mr r3,r19
	bl fn_80134DD0
	rlwinm r0,r3,0,20,20
	cmpwi r0,0
	beq lbl_80134068
	li r21,0
	lfs f15, lbl_804A0AA8
	li r18,0
	li r22,0
	addi r17,r1,8
	b lbl_80134058
lbl_80133FFC:
	lwz r3,8(r3)
	lwzx r23,r3,r22
	mr r3,r23
	lwz r12,12(r3)
	lwz r12,16(r12)
	mtctr r12
	bctrl 
	cmpwi r3,1
	beq lbl_8013402C
	cmpwi r3,0
	beq lbl_80134044
	b lbl_80134050
lbl_8013402C:
	lwz r3,0(r19)
	lfs f1,220(r3)
	lfsx f0,r17,r21
	fsubs f15,f1,f0
	addi r21,r21,4
	b lbl_80134050
lbl_80134044:
	lfs f0,40(r23)
	fadds f0,f0,f15
	stfs f0,40(r23)
lbl_80134050:
	addi r18,r18,1
	addi r22,r22,4
lbl_80134058:
	lwz r3,0(r19)
	lwz r0,4(r3)
	cmpw r18,r0
	blt lbl_80133FFC
lbl_80134068:
	li r27,3
	li r17,0
	li r21,0
	b lbl_801340C0
lbl_80134078:
	lwz r3,8(r3)
	lwzx r3,r3,r21
	lwz r12,12(r3)
	lwz r12,16(r12)
	mtctr r12
	bctrl 
	cmpwi r3,4
	beq lbl_801340A4
	cmpwi r3,2
	beq lbl_801340AC
	b lbl_801340B8
lbl_801340A4:
	li r27,4
	b lbl_801340B8
lbl_801340AC:
	cmpwi r27,0
	ble lbl_801340B8
	addi r27,r27,-1
lbl_801340B8:
	addi r17,r17,1
	addi r21,r21,4
lbl_801340C0:
	lwz r3,0(r19)
	lwz r0,4(r3)
	cmpw r17,r0
	blt lbl_80134078
	cmpwi r20,0
	beq lbl_801341D4
	cmpwi r0,0
	beq lbl_801341D4
	li r18,0
	li r20,0
	b lbl_801341B8
lbl_801340EC:
	li r3,116
	bl fn_80136C54
	mr r17,r3
	cmpwi r3,0
	beq lbl_80134104
	bl fn_8013230C
lbl_80134104:
	lwz r4,0(r19)
	lwz r3,8(r4)
	lwz r0,4(r4)
	add r0,r0,r20
	slwi r0,r0,2
	stwx r17,r3,r0
	mr r3,r17
	li r4,1
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r17
	li r4,1
	bl fn_80136A78
	mr r3,r17
	li r4,0
	bl fn_80136A80
	li r3,116
	bl fn_80136C54
	mr r17,r3
	cmpwi r3,0
	beq lbl_80134164
	bl fn_8013230C
lbl_80134164:
	lwz r4,0(r19)
	lwz r3,8(r4)
	lwz r0,4(r4)
	add r0,r0,r20
	slwi r0,r0,2
	add r3,r3,r0
	stw r17,4(r3)
	mr r3,r17
	li r4,2
	lwz r12,12(r3)
	lwz r12,12(r12)
	mtctr r12
	bctrl 
	mr r3,r17
	li r4,1
	bl fn_80136A78
	mr r3,r17
	li r4,0
	bl fn_80136A80
	addi r18,r18,1
	addi r20,r20,2
lbl_801341B8:
	cmpw r18,r27
	blt lbl_801340EC
	lwz r4,0(r19)
	lwz r3,4(r4)
	slwi r0,r27,1
	add r0,r3,r0
	stw r0,4(r4)
lbl_801341D4:
	li r3,1
lbl_801341D8:
	li r0,424
	opword 0x13e1000c
	lfd f31,416(r1)
	li r0,408
	opword 0x13c1000c
	lfd f30,400(r1)
	li r0,392
	opword 0x13a1000c
	lfd f29,384(r1)
	li r0,376
	opword 0x1381000c
	lfd f28,368(r1)
	li r0,360
	opword 0x1361000c
	lfd f27,352(r1)
	li r0,344
	opword 0x1341000c
	lfd f26,336(r1)
	li r0,328
	opword 0x1321000c
	lfd f25,320(r1)
	li r0,312
	opword 0x1301000c
	lfd f24,304(r1)
	li r0,296
	opword 0x12e1000c
	lfd f23,288(r1)
	li r0,280
	opword 0x12c1000c
	lfd f22,272(r1)
	li r0,264
	opword 0x12a1000c
	lfd f21,256(r1)
	li r0,248
	opword 0x1281000c
	lfd f20,240(r1)
	li r0,232
	opword 0x1261000c
	lfd f19,224(r1)
	li r0,216
	opword 0x1241000c
	lfd f18,208(r1)
	li r0,200
	opword 0x1221000c
	lfd f17,192(r1)
	li r0,184
	opword 0x1201000c
	lfd f16,176(r1)
	li r0,168
	opword 0x11e1000c
	lfd f15,160(r1)
	addi r11,r1,160
	bl _restgpr_16
	lwz r0,436(r1)
	mtlr r0
	addi r1,r1,432
	blr
}

extern "C" asm void fn_80134304(void* hVoid, s32 doStuff, s32 unused)
{
	stwu r1, -144(r1)
	mflr r0
	stw r0, 148(r1)
	addi r11, r1, 144
	bl _savegpr_14
	mr r15, r3
	mr r16, r4
	lwz r3, 0(r3)
	lwz r22, 92(r3)
	li r21, 0
	lwz r20, 96(r3)
	cmpwi r4, 0
	beq lbl_80134340
	li r0, 0
	stw r0, 8(r20)
lbl_80134340:
	mr r3, r15
	bl fn_80135258
	mr r17, r3
	mr r3, r15
	bl fn_8013545C
	li r18, 0
	lwz r3, 0(r15)
	lbz r0, 20(r3)
	cmpwi r0, 0
	beq lbl_801343E0
	lwz r3, 12(r20)
	li r0, 0
	li r21, 1
	mulli r0, r0, 60
	add r14, r3, r0
	mr r3, r14
	mr r4, r17
	bl fn_8013460C
	mr r3, r15
	li r4, 0
	bl fn_801354A0
	cmpwi r3, 0
	beq lbl_801343AC
	mr r3, r15
	mr r4, r14
	addi r5, r14, 4
	bl fn_801354D4
lbl_801343AC:
	la r3, lbl_804A0AA8
	lfs f0, 44(r3)
	stfs f0, 16(r14)
	lfs f0, 48(r3)
	stfs f0, 20(r14)
	lfs f0, 52(r3)
	stfs f0, 24(r14)
	stfs f0, 28(r14)
	li r0, 0
	stw r0, 32(r14)
	lwz r3, 0(r15)
	lwz r0, 56(r3)
	stw r0, 36(r14)
lbl_801343E0:
	mr r3, r15
	bl fn_80133524
lbl_801343E8:
	mr r3, r15
	bl fn_801335F4
	cmpwi r3, 0
	beq lbl_801343E8
	li r23, 0
	li r31, 0
	la r27, lbl_804A0AA8
	mr r29, r31
	li r14, 625
	mr r30, r31
	li r26, 2
	li r25, 4
	b lbl_801345D0
lbl_8013441C:
	cmpw r22, r21
	ble lbl_801345E0
	lwz r3, 8(r3)
	lwzx r19, r3, r31
	mr r3, r19
	lwz r12, 12(r3)
	lwz r12, 16(r12)
	mtctr r12
	bctrl
	addi r0, r3, -7
	cmplwi r0, 1
	ble lbl_801345B8
	cmpwi r3, 4
	beq lbl_80134468
	cmpwi r3, 2
	beq lbl_801344AC
	cmpwi r3, 0
	beq lbl_801344F0
	b lbl_801345C8
lbl_80134468:
	lwz r3, 12(r20)
	mr r0, r21
	addi r21, r21, 1
	mulli r0, r0, 60
	add r17, r3, r0
	cmpwi r16, 0
	beq lbl_80134494
	mr r3, r17
	li r4, 0
	li r5, 60
	bl memset
lbl_80134494:
	stw r25, 48(r17)
	stw r19, 40(r17)
	lwz r3, 0(r15)
	lwz r0, 56(r3)
	stw r0, 36(r17)
	b lbl_801345C8
lbl_801344AC:
	lwz r3, 12(r20)
	mr r0, r21
	addi r21, r21, 1
	mulli r0, r0, 60
	add r17, r3, r0
	cmpwi r16, 0
	beq lbl_801344D8
	mr r3, r17
	li r4, 0
	li r5, 60
	bl memset
lbl_801344D8:
	stw r26, 48(r17)
	stw r19, 40(r17)
	lwz r3, 0(r15)
	lwz r0, 56(r3)
	stw r0, 36(r17)
	b lbl_801345C8
lbl_801344F0:
	mr r3, r19
	bl fn_801342F4
	clrlwi r17, r3, 16
	addi r3, r1, 56
	addi r4, r19, 40
	bl fn_8013460C
	addi r3, r1, 24
	addi r4, r19, 24
	bl fn_8013460C
	mr r3, r15
	addi r4, r1, 40
	addi r5, r1, 8
	addi r6, r1, 56
	addi r7, r1, 24
	lfs f1, 56(r27)
	fmr f2, f1
	bl fn_80134EA0
	mr r28, r3
	lwz r3, 12(r20)
	mr r0, r21
	addi r21, r21, 1
	mulli r0, r0, 60
	add r24, r3, r0
	mr r3, r24
	addi r4, r1, 40
	bl fn_8013460C
	addi r3, r24, 16
	addi r4, r1, 8
	bl fn_8013460C
	bl fn_80136DA4
	cmpwi r3, 0
	bne lbl_8013457C
	divw r0, r17, r14
	stw r0, 32(r24)
	b lbl_80134580
lbl_8013457C:
	stw r29, 32(r24)
lbl_80134580:
	stw r30, 48(r24)
	stw r19, 40(r24)
	cntlzw r0, r28
	srwi r0, r0, 5
	stb r0, 56(r24)
	mr r3, r18
	li r4, 0
	li r5, 11
	bl fn_8013652C
	mr r18, r3
	lwz r3, 0(r15)
	lwz r0, 56(r3)
	stw r0, 36(r24)
	b lbl_801345C8
lbl_801345B8:
	mr r3, r19
	li r4, 0
	bl fn_801342BC
	mr r18, r3
lbl_801345C8:
	addi r23, r23, 1
	addi r31, r31, 4
lbl_801345D0:
	lwz r3, 0(r15)
	lwz r0, 4(r3)
	cmpw r23, r0
	blt lbl_8013441C
lbl_801345E0:
	cmpwi r16, 0
	beq lbl_801345F0
	stw r21, 8(r20)
	stw r21, 4(r20)
lbl_801345F0:
	lwz r3, 8(r20)
	addi r11, r1, 144
	bl _restgpr_14
	lwz r0, 148(r1)
	mtlr r0
	addi r1, r1, 144
	blr
}

// fn_80134EA0: clip/remap de un rectangulo (glyph bounding box) contra los
// limites `field_0x20`/`field_0x24` y reescala UVs correspondientes. Usa el
// idiom estandar de conversion int->double de esta CPU (magic constant via
// `lbl_804A0288`) -- se escribe como cast normal `(f32)` confiando en que
// mwcc lo compila igual (Gekko no tiene fcfid en hardware). Best-effort,
// mucha aritmetica de punto flotante transcrita casi 1:1 del disasm.
extern "C" s32 labs(s32 v);

extern "C" asm s32 fn_80134EA0(void* hVoid, void* posAVoid, void* posBVoid, void* extentAVoid, void* extentBVoid, f32 scaleA, f32 scaleB)
{
	stwu r1, -128(r1)
	mflr r0
	stw r0, 132(r1)
	stfd f31, 112(r1)
	opword 0xf3e10078
	stfd f30, 96(r1)
	opword 0xf3c10068
	stfd f29, 80(r1)
	opword 0xf3a10058
	addi r11, r1, 80
	bl _savegpr_24
	mr r24, r3
	mr r25, r4
	mr r26, r5
	mr r27, r6
	mr r28, r7
	fmr f30, f1
	fmr f31, f2
	bl fn_80135258
	mr r29, r3
	mr r3, r24
	bl fn_8013545C
	mr r30, r3
	lwz r4, 0(r24)
	lbz r0, 21(r4)
	cmpwi r0, 0
	bne lbl_80134F48
	mr r3, r25
	mr r4, r27
	bl fn_8013460C
	mr r3, r26
	mr r4, r28
	bl fn_8013460C
	lfs f1, 0(r25)
	lfs f0, 0(r30)
	fsubs f0, f1, f0
	stfs f0, 0(r25)
	lfs f1, 4(r25)
	lfs f0, 4(r30)
	fsubs f0, f1, f0
	stfs f0, 4(r25)
	b lbl_8013519C
lbl_80134F48:
	lfs f1, 0(r27)
	lfs f0, 0(r3)
	fsubs f0, f1, f0
	stfs f0, 8(r1)
	lfs f1, 4(r27)
	lfs f0, 4(r3)
	fsubs f3, f1, f0
	stfs f3, 12(r1)
	lfs f0, 8(r27)
	stfs f0, 16(r1)
	lfs f2, 12(r27)
	stfs f2, 20(r1)
	la r30, lbl_804A0AA8
	lfs f1, 12(r29)
	lfs f0, 40(r30)
	fmuls f1, f1, f0
	fmuls f0, f2, f0
	fadds f29, f1, f0
	fadds f0, f3, f0
	fctiwz f0, f0
	stfd f0, 24(r1)
	lwz r3, 28(r1)
	fctiwz f0, f1
	stfd f0, 32(r1)
	lwz r0, 36(r1)
	subf r3, r3, r0
	bl labs
	lfd f1, lbl_804A0AA0
	xoris r0, r3, 0x8000
	stw r0, 44(r1)
	lis r31, 0x4330
	stw r31, 40(r1)
	lfd f0, 40(r1)
	fsubs f1, f0, f1
	lfs f0, 60(r30)
	fsubs f0, f29, f0
	fcmpo cr0, f1, f0
	ble lbl_80134FE8
	li r3, 0
	b lbl_8013521C
lbl_80134FE8:
	lfs f0, 8(r29)
	lfs f1, 40(r30)
	fmuls f2, f0, f1
	lfs f0, 8(r27)
	fmuls f0, f0, f1
	fadds f29, f2, f0
	lfs f0, 16(r1)
	fmuls f1, f0, f1
	lfs f0, 8(r1)
	fadds f0, f0, f1
	fctiwz f0, f0
	stfd f0, 40(r1)
	lwz r3, 44(r1)
	fctiwz f0, f2
	stfd f0, 32(r1)
	lwz r0, 36(r1)
	subf r3, r3, r0
	bl labs
	lfd f1, lbl_804A0AA0
	xoris r0, r3, 0x8000
	stw r0, 28(r1)
	stw r31, 24(r1)
	lfd f0, 24(r1)
	fsubs f1, f0, f1
	lfs f0, 60(r30)
	fsubs f0, f29, f0
	fcmpo cr0, f1, f0
	ble lbl_80135060
	li r3, 0
	b lbl_8013521C
lbl_80135060:
	mr r3, r25
	addi r4, r1, 8
	bl fn_8013460C
	lfs f0, 8(r1)
	lfs f2, lbl_804A0AA8
	fcmpo cr0, f0, f2
	bge lbl_80135080
	b lbl_80135084
lbl_80135080:
	fmr f2, f0
lbl_80135084:
	stfs f2, 0(r25)
	lfs f1, 16(r1)
	lfs f0, 8(r1)
	fadds f0, f1, f0
	frsp f2, f2
	fsubs f3, f0, f2
	stfs f3, 8(r25)
	lfs f0, 16(r1)
	fadds f1, f2, f0
	lfs f0, 8(r29)
	fcmpo cr0, f1, f0
	ble lbl_801350B8
	fsubs f3, f0, f2
lbl_801350B8:
	stfs f3, 8(r25)
	lfs f0, 12(r1)
	lfs f2, lbl_804A0AA8
	fcmpo cr0, f0, f2
	bge lbl_801350D0
	b lbl_801350D4
lbl_801350D0:
	fmr f2, f0
lbl_801350D4:
	stfs f2, 4(r25)
	lfs f1, 20(r1)
	lfs f0, 12(r1)
	fadds f0, f1, f0
	frsp f2, f2
	fsubs f11, f0, f2
	stfs f11, 12(r25)
	lfs f0, 20(r1)
	fadds f1, f2, f0
	lfs f0, 12(r29)
	fcmpo cr0, f1, f0
	ble lbl_80135108
	fsubs f11, f0, f2
lbl_80135108:
	stfs f11, 12(r25)
	lfs f10, 0(r25)
	lfs f9, 8(r1)
	fsubs f0, f10, f9
	lfs f8, 16(r1)
	fdivs f0, f0, f8
	lfs f7, 8(r28)
	fmuls f0, f7, f0
	lfs f6, 0(r28)
	fadds f12, f6, f0
	lfs f5, 4(r25)
	lfs f4, 12(r1)
	fsubs f0, f5, f4
	lfs f3, 20(r1)
	fdivs f0, f0, f3
	lfs f2, 12(r28)
	fmuls f0, f2, f0
	lfs f1, 4(r28)
	fadds f13, f1, f0
	lfs f0, 8(r25)
	fadds f0, f10, f0
	fsubs f0, f0, f9
	fdivs f0, f0, f8
	fmuls f0, f7, f0
	fadds f6, f6, f0
	frsp f0, f11
	fadds f0, f5, f0
	fsubs f0, f0, f4
	fdivs f0, f0, f3
	fmuls f0, f2, f0
	fadds f1, f1, f0
	stfs f12, 0(r26)
	stfs f13, 4(r26)
	fsubs f0, f6, f12
	stfs f0, 8(r26)
	fsubs f0, f1, f13
	stfs f0, 12(r26)
lbl_8013519C:
	lfs f1, 0(r25)
	lfs f0, 0(r29)
	fadds f0, f1, f0
	stfs f0, 0(r25)
	lfs f1, 4(r25)
	lfs f0, 4(r29)
	fadds f0, f1, f0
	stfs f0, 4(r25)
	mr r3, r24
	li r4, 0
	bl fn_801354A0
	cmpwi r3, 0
	beq lbl_801351E8
	mr r3, r24
	mr r4, r25
	addi r5, r25, 4
	bl fn_801354D4
	mr r3, r24
	bl fn_80135580
lbl_801351E8:
	lfs f0, 0(r26)
	fdivs f0, f0, f30
	stfs f0, 0(r26)
	lfs f0, 4(r26)
	fdivs f0, f0, f31
	stfs f0, 4(r26)
	lfs f0, 8(r26)
	fdivs f0, f0, f30
	stfs f0, 8(r26)
	lfs f0, 12(r26)
	fdivs f0, f0, f31
	stfs f0, 12(r26)
	li r3, 1
lbl_8013521C:
	li r0, 120
	opword 0x13e1000c
	lfd f31, 112(r1)
	li r0, 104
	opword 0x13c1000c
	lfd f30, 96(r1)
	li r0, 88
	opword 0x13a1000c
	lfd f29, 80(r1)
	addi r11, r1, 80
	bl _restgpr_24
	lwz r0, 132(r1)
	mtlr r0
	addi r1, r1, 128
	blr
}

// fn_80134664: tick de animacion/reveal del texto (avance de progreso,
// interpolacion de color RGBA, fade y hasta 2 "canales" de tween de
// posicion via keyframes). Best-effort -- funcion grande (1900 bytes) con
// varios sub-sistemas de punto flotante independientes; se preservan los
// offsets y llamadas reales confirmadas por disasm, pero varias formulas de
// interpolacion exactas (el bloque de keyframes de 0x110-0x150, el ratio
// de field_0x94/0x9c) no se verificaron bit a bit.
extern "C" asm void fn_80134664(TcgTextEntryHandle* h)
{
	stwu r1,-112(r1)
	mflr r0
	stw r0,116(r1)
	stfd f31,96(r1)
	opword 0xf3e10068
	stfd f30,80(r1)
	opword 0xf3c10058
	addi r11,r1,80
	bl _savegpr_21
	mr r23,r3
	lis r0,17200
	stw r0,8(r1)
	lis r0,17200
	stw r0,16(r1)
	li r30,0
	lwz r5,0(r3)
	lwz r4,132(r5)
	lwz r0,136(r5)
	cmpw r4,r0
	blt lbl_801349A8
	lwz r0,148(r5)
	stw r0,152(r5)
	bl fn_80134DD0
	clrlwi r0,r3,31
	cmpwi r0,0
	bne lbl_801346EC
	lwz r5,0(r23)
	lwz r3,148(r5)
	addi r3,r3,256
	li r4,0
	lwz r5,156(r5)
	bl fn_8013652C
	lwz r4,0(r23)
	stw r3,148(r4)
lbl_801346EC:
	lwz r4,0(r23)
	lwz r0,144(r4)
	cmpwi r0,1
	beq lbl_801347EC
	lwz r3,156(r4)
	cmpwi r3,0
	beq lbl_80134738
	lwz r0,148(r4)
	lfd f2, lbl_804A0AA0
	xoris r0,r0,32768
	stw r0,12(r1)
	lfd f0,8(r1)
	fsubs f1,f0,f2
	xoris r0,r3,32768
	stw r0,20(r1)
	lfd f0,16(r1)
	fsubs f0,f0,f2
	fdivs f30,f1,f0
	b lbl_80134740
lbl_80134738:
	la r3, lbl_804A0AA8
	lfs f30,60(r3)
lbl_80134740:
	lfs f0, lbl_804A0AA8
	fcmpo cr0,f30,f0
	ble lbl_80134794
	la r3, lbl_804A0AA8
	lfs f0,60(r3)
	fcmpo cr0,f30,f0
	bge lbl_80134794
	lbz r0,104(r4)
	cmpwi r0,0
	beq lbl_80134794
	lhz r3,114(r4)
	addi r0,r3,256
	clrlwi r0,r0,16
	sth r0,114(r4)
	lwz r3,0(r23)
	lhz r4,112(r3)
	lhz r0,114(r3)
	cmplw r0,r4
	blt lbl_80134794
	subf r0,r4,r0
	sth r0,114(r3)
lbl_80134794:
	mr r3,r23
	bl fn_80135BA4
	lwz r4,4(r3)
	lfd f1, lbl_804A0AA0
	xoris r0,r4,32768
	stw r0,12(r1)
	lfd f0,8(r1)
	fsubs f0,f0,f1
	fmuls f0,f0,f30
	fctiwz f0,f0
	stfd f0,24(r1)
	lwz r5,28(r1)
	cmpw r5,r4
	blt lbl_801347D0
	mr r5,r4
lbl_801347D0:
	stw r5,8(r3)
	lwz r3,0(r23)
	lwz r0,164(r3)
	stw r0,168(r3)
	lwz r3,0(r23)
	stw r5,164(r3)
	b lbl_801349A8
lbl_801347EC:
	mr r3,r23
	bl fn_80135BA4
	mr r31,r3
	li r28,0
	li r27,0
	li r29,0
	li r22,0
	lfd f30, lbl_804A0AA0
	b lbl_80134934
lbl_80134810:
	lwz r0,12(r31)
	add r21,r0,r22
	lwz r3,0(r23)
	lwz r3,148(r3)
	lwz r0,44(r21)
	cmpw r3,r0
	blt lbl_8013492C
	lwz r3,8(r31)
	addi r0,r3,-1
	cmpw r0,r29
	bge lbl_8013492C
	mr r28,r29
	lwz r0,48(r21)
	cmpwi r0,4
	beq lbl_80134860
	cmpwi r0,0
	beq lbl_801348D8
	cmpwi r0,2
	beq lbl_801348E0
	b lbl_8013492C
lbl_80134860:
	lwz r0,52(r21)
	cmpwi r0,0
	beq lbl_80134888
	lwz r30,40(r21)
	mr r3,r23
	bl fn_80134DD0
	mr r0,r3
	mr r3,r23
	ori r4,r0,1
	bl fn_80134DDC
lbl_80134888:
	lwz r0,52(r21)
	cmpwi r0,2
	bne lbl_8013492C
	mr r3,r30
	li r4,1
	bl fn_801342BC
	xoris r0,r3,32768
	stw r0,20(r1)
	lfd f0,16(r1)
	fsubs f31,f0,f30
	mr r3,r30
	li r4,0
	bl fn_801342BC
	mr r5,r3
	mr r3,r23
	li r4,0
	fmr f1,f31
	li r6,1
	bl fn_801356BC
	b lbl_8013492C
lbl_801348D8:
	li r27,1
	b lbl_8013492C
lbl_801348E0:
	addi r0,r4,-1
	cmpw r29,r0
	beq lbl_8013492C
	lwz r0,52(r21)
	cmpwi r0,1
	bne lbl_8013492C
	mr r3,r23
	bl fn_8013539C
	fmr f31,f1
	mr r3,r23
	bl fn_8013540C
	mr r5,r3
	lwz r3,0(r23)
	lfs f0,196(r3)
	fadds f1,f31,f0
	mr r3,r23
	li r4,0
	li r6,1
	bl fn_801356BC
lbl_8013492C:
	addi r29,r29,1
	addi r22,r22,60
lbl_80134934:
	lwz r4,4(r31)
	cmpw r29,r4
	blt lbl_80134810
	cmpwi r28,0
	beq lbl_801349A8
	lwz r3,0(r23)
	lwz r0,164(r3)
	stw r0,168(r3)
	lwz r3,0(r23)
	stw r28,164(r3)
	addi r0,r28,1
	stw r0,8(r31)
	lwz r4,0(r23)
	lbz r0,104(r4)
	cmpwi r0,0
	beq lbl_801349A8
	cmpwi r27,0
	beq lbl_801349A8
	lhz r3,114(r4)
	addi r0,r3,256
	clrlwi r0,r0,16
	sth r0,114(r4)
	lwz r3,0(r23)
	lhz r4,112(r3)
	lhz r0,114(r3)
	cmplw r0,r4
	blt lbl_801349A8
	subf r0,r4,r0
	sth r0,114(r3)
lbl_801349A8:
	lwz r3,0(r23)
	lwz r5,80(r3)
	cmpwi r5,0
	beq lbl_80134ADC
	lwz r3,84(r3)
	addi r3,r3,256
	li r4,0
	bl fn_8013652C
	lwz r4,0(r23)
	stw r3,84(r4)
	lwz r4,0(r23)
	lwz r0,84(r4)
	mulli r3,r0,255
	lwz r0,80(r4)
	divw r0,r3,r0
	lbz r5,68(r4)
	lbz r3,76(r4)
	subf r3,r5,r3
	mullw r3,r0,r3
	srawi r3,r3,8
	addze r3,r3
	add r3,r5,r3
	clrlwi r3,r3,24
	stb r3,60(r4)
	lwz r4,0(r23)
	lbz r5,69(r4)
	lbz r3,77(r4)
	subf r3,r5,r3
	mullw r3,r0,r3
	srawi r3,r3,8
	addze r3,r3
	add r3,r5,r3
	clrlwi r3,r3,24
	stb r3,61(r4)
	lwz r4,0(r23)
	lbz r5,70(r4)
	lbz r3,78(r4)
	subf r3,r5,r3
	mullw r3,r0,r3
	srawi r3,r3,8
	addze r3,r3
	add r3,r5,r3
	clrlwi r3,r3,24
	stb r3,62(r4)
	lwz r4,0(r23)
	lbz r5,71(r4)
	lbz r3,79(r4)
	subf r3,r5,r3
	mullw r0,r0,r3
	srawi r0,r0,8
	addze r0,r0
	add r0,r5,r0
	clrlwi r0,r0,24
	stb r0,63(r4)
	lwz r6,0(r23)
	lbz r0,60(r6)
	slwi r5,r0,24
	lbz r0,61(r6)
	slwi r4,r0,16
	lbz r3,63(r6)
	lbz r0,62(r6)
	slwi r0,r0,8
	or r0,r3,r0
	or r0,r4,r0
	or r0,r5,r0
	stw r0,56(r6)
	mr r3,r23
	li r4,1
	li r5,-1
	bl fn_80134304
	lwz r4,0(r23)
	lwz r3,84(r4)
	lwz r0,80(r4)
	cmpw r3,r0
	bne lbl_80134ADC
	li r0,0
	stw r0,80(r4)
lbl_80134ADC:
	lwz r3,0(r23)
	lwz r5,248(r3)
	cmpwi r5,0
	beq lbl_80134B6C
	lwz r3,244(r3)
	addi r3,r3,256
	li r4,0
	bl fn_8013652C
	lwz r4,0(r23)
	stw r3,244(r4)
	lwz r3,0(r23)
	lwz r0,244(r3)
	lfd f2, lbl_804A0AA0
	xoris r0,r0,32768
	stw r0,12(r1)
	lfd f0,8(r1)
	fsubs f1,f0,f2
	lwz r0,248(r3)
	xoris r0,r0,32768
	stw r0,20(r1)
	lfd f0,16(r1)
	fsubs f0,f0,f2
	fdivs f2,f1,f0
	lfs f0,240(r3)
	lfs f1,236(r3)
	fsubs f0,f0,f1
	fmuls f0,f0,f2
	fadds f0,f1,f0
	stfs f0,44(r3)
	lwz r4,0(r23)
	lwz r3,244(r4)
	lwz r0,248(r4)
	cmpw r3,r0
	bne lbl_80134B6C
	li r0,0
	stw r0,248(r4)
lbl_80134B6C:
	lwz r3,0(r23)
	lwz r0,100(r3)
	rlwinm r0,r0,0,22,22
	cmpwi r0,0
	beq lbl_80134BC0
	lfs f1,40(r3)
	lfs f0,260(r3)
	fadds f0,f1,f0
	stfs f0,40(r3)
	lwz r3,0(r23)
	lfs f0,40(r3)
	lfs f2,204(r3)
	fsubs f1,f0,f2
	lfs f0,24(r3)
	fadds f0,f0,f2
	fcmpo cr0,f1,f0
	ble lbl_80134BC0
	lfs f0, lbl_804A0AA8
	stfs f0,40(r3)
	lwz r3,0(r23)
	stfs f0,44(r3)
lbl_80134BC0:
	li r27,0
	mr r3,r23
	bl fn_80134DD0
	mr r28,r3
	li r29,0
	li r30,0
	li r31,0
	li r26,0
	li r22,0
	li r21,0
	lfd f31, lbl_804A0AA0
lbl_80134BEC:
	cmpwi r26,0
	beq lbl_80134C00
	cmpwi r26,1
	beq lbl_80134C14
	b lbl_80134C24
lbl_80134C00:
	li r29,4
	li r30,16
	lwz r3,0(r23)
	addi r27,r3,40
	b lbl_80134C24
lbl_80134C14:
	li r29,8
	li r30,32
	lwz r3,0(r23)
	addi r27,r3,44
lbl_80134C24:
	and r0,r28,r29
	cmpwi r0,0
	beq lbl_80134D6C
	lwz r0,0(r23)
	add r3,r0,r22
	lwz r0,272(r3)
	cmplwi r0,2
	bgt lbl_80134D6C
	li r31,1
	lwz r25,312(r3)
	lwz r24,320(r3)
	lfs f30,280(r3)
	and r0,r28,r30
	cmpwi r0,0
	bne lbl_80134C74
	lwz r0,336(r3)
	add r25,r25,r0
	add r24,r24,r0
	lfs f0,328(r3)
	fadds f30,f30,f0
lbl_80134C74:
	lwz r3,296(r3)
	addi r3,r3,256
	li r4,0
	mr r5,r24
	bl fn_8013652C
	lwz r0,0(r23)
	add r4,r0,r22
	stw r3,296(r4)
	lwz r0,0(r23)
	add r4,r0,r22
	lwz r0,296(r4)
	lwz r3,304(r4)
	cmpw r0,r3
	bgt lbl_80134CB4
	stfs f30,0(r27)
	b lbl_80134D6C
lbl_80134CB4:
	cmpw r0,r25
	bge lbl_80134D00
	subf r0,r3,r0
	xoris r0,r0,32768
	stw r0,12(r1)
	lfd f0,8(r1)
	fsubs f1,f0,f31
	subf r0,r3,r25
	xoris r0,r0,32768
	stw r0,20(r1)
	lfd f0,16(r1)
	fsubs f0,f0,f31
	fdivs f1,f1,f0
	lfs f0,288(r4)
	fsubs f0,f0,f30
	fmuls f0,f1,f0
	fadds f0,f30,f0
	stfs f0,0(r27)
	b lbl_80134D6C
lbl_80134D00:
	cmpw r0,r24
	bge lbl_80134D14
	lfs f0,288(r4)
	stfs f0,0(r27)
	b lbl_80134D6C
lbl_80134D14:
	lfs f0,288(r4)
	stfs f0,0(r27)
	lwz r0,0(r23)
	add r3,r0,r22
	lwz r0,272(r3)
	cmpwi r0,0
	beq lbl_80134D44
	cmpwi r0,1
	beq lbl_80134D4C
	cmpwi r0,2
	beq lbl_80134D58
	b lbl_80134D5C
lbl_80134D44:
	andc r28,r28,r29
	b lbl_80134D5C
lbl_80134D4C:
	andc r28,r28,r29
	stfs f30,0(r27)
	b lbl_80134D5C
lbl_80134D58:
	stw r21,296(r3)
lbl_80134D5C:
	andc r28,r28,r30
	mr r3,r23
	mr r4,r28
	bl fn_80134DDC
lbl_80134D6C:
	cmpwi r31,0
	beq lbl_80134D84
	mr r3,r23
	li r4,1
	li r5,-1
	bl fn_80134304
lbl_80134D84:
	addi r26,r26,1
	addi r22,r22,4
	cmpwi r26,2
	blt lbl_80134BEC
	mr r3,r23
	li r4,0
	bl fn_801354A0
	li r0,104
	opword 0x13e1000c
	lfd f31,96(r1)
	li r0,88
	opword 0x13c1000c
	lfd f30,80(r1)
	addi r11,r1,80
	bl _restgpr_21
	lwz r0,116(r1)
	mtlr r0
	addi r1,r1,112
	blr 
}

#pragma dont_inline reset
