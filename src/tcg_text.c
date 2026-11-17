// Sistema de texto del motor propio del juego. Sin proyecto de referencia --
// todo via reversing directo del asm original.
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
	h->data->field_0x3f = (v & 0xff);
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
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();

extern "C" void fn_80135810(TcgTextEntryHandle* h, u32 p2, u32 v);
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

#pragma schedule off
#pragma optimize_for_size on
extern "C" s32 fn_80136098(TcgTextEntryHandle* h)
{
	return fn_80135EC4((s32)h, 1) != 0;
}
#pragma optimize_for_size reset
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

extern "C" u8 fn_8013654C(u8 c);
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
extern "C" void fn_80135CC0(void);
extern "C" void* fn_801771D4(s32 count, void* callback, s32 size);
extern "C" void fn_801773E0(void* obj);

// fn_80135BB0: (re)inicializa el pool global. Si ya existia, lo destruye
// primero (fn_80135CC0). El bloque final (`fn_801771D4`/`fn_801773E0` +
// assert `fn_801A9384`) es codigo muerto por construccion -- el `if
// (!result) return;` inicial garantiza `result != 0` en todo lo que sigue,
// pero el `if (!result) assert(...)` de mas abajo es un chequeo SEPARADO en
// el C original que mwcc no colapsa (mismo patron ya visto en
// fn_80136308/fn_80135CC0). Nunca antes decompilada.
extern "C" void fn_80135BB0(s32 poolSize);
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

extern "C" u32 strlen(const char* s);
extern "C" void* memcpy(void* dst, const void* src, s32 n);
extern "C" void memset(void* dst, int val, s32 n);

extern "C" s32 fn_80136748(void* pVoid, char* str, s32 len);
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
extern "C" u8* fn_80136B1C(void* table);

// fn_80136308: nunca antes decompilada. Ambas ramas retornan 0 pese a las
// comparaciones reales (mismo patron de "assert/validacion cuyo resultado se
// descarta" que fn_80136404/fn_801363B8) -- se preserva el calculo tal cual
// (swap de 16 bits + division con redondeo hacia cero, idiom srawi/addze)
// por fidelidad aunque el valor de retorno no dependa de el.
extern "C" s32 fn_80136308(u32 v);
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
// lbl_804A0290 no es simbolo propio en symbols.txt: cae dentro de
// lbl_804A0240 (0x68 floats, offset 0x50) -- un extern "lbl_804A0290[]" sin
// entrada registrada resuelve silenciosamente a OTRO simbolo real cualquiera
// (mismo bug que lbl_803A4A78/lbl_803A491C, ver bitacora). Se expresa via el
// contenedor real para que el link sea correcto.
extern "C" u8 lbl_804A0240[];
#define lbl_804A0290 ((f32*)(lbl_804A0240 + 0x50))

extern "C" u8 lbl_8049D6FC;
extern "C" __declspec(section ".sdata2") f32 lbl_804A0AA8[];

// Estructuralmente identica a fn_8013330C (mismo patron "reset + copiar de
// TempList temporal"), pero arma la TempList via fn_80132D24 (4 params extra
// en vez de 2). fn_80132D24 sin decompilar todavia (536 bytes).
extern "C" TempList* fn_80132D24(void* h, s32 maxCount, void** tables, void** arrB, s32 tableCount, void** arrC);

// Filtra/compacta el mismo `list->items` in-place: si fn_80136A90(item)
// (bit 0x5 de CTextEntryBaseData) es true, dispatch virtual + descartar;
// si no, se re-empaqueta en el mismo array. Reusa fn_80136A88/fn_80136A70/
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
extern "C" u8* fn_80136B1C(void* table);
extern "C" TempList* fn_80131428(void* ctx, s32 maxCount, s32 len, void* str, void* extra);

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
extern "C" int sprintf(char* str, const char* format, ...);
extern "C" u32 strlen(const char* str);

extern "C" TempList* fn_80132348(void* ctx, s32 maxCount, s32 len, void* str, void* extraB, void* extraC);
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

// fn_80132F3C: constructor/inicializador principal de TcgTextEntryHandle
// (h){data(0x0); vtable(0x4); ...}, mismo layout de "big object" que
// fn_80133194. Encadena casi todos los setters ya validados arriba con
// valores constantes -- alta confianza, muy mecanico.
extern "C" void memset(void* dst, int val, s32 n);
extern "C" void fn_80130A78(void* obj, s32 count, s32 v);
extern "C" void fn_801309EC(void* obj);

// Encadena docenas de setters definidos arriba en este mismo archivo --
// sin dont_inline mwcc los auto-inlinea todos (mismo gotcha de siempre).
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

extern "C" s32 fn_801361FC(s32 code, s32 unused, s32 mode);
// lbl_804A0AA8 ya declarada arriba en .sdata2
extern "C" __declspec(section ".sdata2") f64 lbl_804A0AA0; // constante "magica" de conversion int->float (0x4330_0000...)

extern "C" s32 fn_801335F4(TcgTextEntryHandle* h);
// fn_80134EA0: clip/remap de un rectangulo (glyph bounding box) contra los
// limites `field_0x20`/`field_0x24` y reescala UVs correspondientes. Usa el
// idiom estandar de conversion int->double de esta CPU (magic constant via
// `lbl_804A0288`) -- se escribe como cast normal `(f32)` confiando en que
// mwcc lo compila igual (Gekko no tiene fcfid en hardware). Best-effort,
// mucha aritmetica de punto flotante transcrita casi 1:1 del disasm.

// fn_80134664: tick de animacion/reveal del texto (avance de progreso,
// interpolacion de color RGBA, fade y hasta 2 "canales" de tween de
// posicion via keyframes). Best-effort -- funcion grande (1900 bytes) con
// varios sub-sistemas de punto flotante independientes; se preservan los
// offsets y llamadas reales confirmadas por disasm, pero varias formulas de
// interpolacion exactas (el bloque de keyframes de 0x110-0x150, el ratio
// de field_0x94/0x9c) no se verificaron bit a bit.
extern "C" void fn_80134664(TcgTextEntryHandle* h);
#pragma dont_inline reset
