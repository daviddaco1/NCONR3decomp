// Sistema de texto del motor propio del juego. Sin proyecto de referencia --
// todo via reversing directo del asm original (ver plan de fases en
// C:\Users\david\.claude\plans\arma-un-plan-para-functional-wombat.md).
//
// Clase real todavia no identificada (candidatos por RTTI cercano: CTextOne,
// CTextEntryBase). Los nombres de campo son placeholders por offset hasta
// tener evidencia real -- no renombrar en symbols.txt sin confirmar.

#include "types.h"

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

void fn_80135B74(TcgTextEntryHandle* h, u32 v)
{
	if (v) {
		h->data->field_0x264 = v;
	} else {
		u32 zero = 0;
		h->data->field_0x264 = zero;
	}
}

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

s32 fn_80135688(TcgTextEntryHandle* h, u32 mode)
{
	if ((s32)mode != 1) {
		h->data->field_0x9c = 0;
		h->data->field_0x94 = 0;
	} else {
		h->data->field_0xf4 = h->data->field_0xf8;
	}
	return 0;
}

s32 fn_801358DC(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x84 = 0;
	h->data->field_0x88 = v << 8;
	h->data->field_0x8c = v;
	return 1;
}

#pragma dont_inline on
void fn_80135B28(TcgTextEntryHandle* h, u32 v)
{
	fn_80135B68(h);
	h->data->field_0x248 = v;
#pragma dont_inline reset
}

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

u32 fn_80135640(TcgTextEntryHandle* h, u32 mode)
{
	if (mode == 1) {
		if ((s32)h->data->field_0xf4 < (s32)h->data->field_0xf8)
			return 0;
		return 1;
	}
	if ((s32)h->data->field_0x94 < (s32)h->data->field_0x9c)
		return 0;
	return 1;
}

} // extern "C"

extern "C" void fn_80134304(void* h, s32 a, s32 b);
extern "C" s32 fn_8013652C(s32 v, s32 lo, s32 hi);

extern "C" void fn_80134E48(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x38 = v;
	h->data->field_0x3c = (u8)(v >> 24);
	h->data->field_0x3d = (u8)(v >> 16);
	h->data->field_0x3e = (u8)(v >> 8);
	h->data->field_0x3f = (u8)(v & 0xff);
	fn_80134304(h, 1, -1);
}

extern "C" s32 fn_80135A00(TcgTextEntryHandle* h, s32 idx)
{
	return ((s32*)((u8*)h->data + 0x158))[fn_8013652C(idx, 0, 0x1d)];
}

extern "C" s32 fn_80135A9C(TcgTextEntryHandle* h, s32 idx)
{
	return ((s32*)((u8*)h->data + 0x1d0))[fn_8013652C(idx, 0, 0x1d)];
}

extern "C" void fn_80134304(void* h, s32 a, s32 b);

extern "C" void fn_80135354(TcgTextEntryHandle* h, f32 a, f32 b, f32 c, f32 d)
{
	h->data->field_0x18 = a;
	h->data->field_0x1c = b;
	h->data->field_0x20 = c;
	h->data->field_0x24 = d;
	fn_80134304(h, 1, -1);
}

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
#pragma dont_inline on
extern "C" void fn_80135810(TcgTextEntryHandle* h, u32 p2, u32 v)
{
	fn_801358B0(h->data->field_0x40, &h->data->field_0x38);
#pragma dont_inline reset
	h->data->field_0x48 = v;
	h->data->field_0x4c = (u8)(v >> 24);
	h->data->field_0x4d = (u8)(v >> 16);
	h->data->field_0x4e = (u8)(v >> 8);
	h->data->field_0x4f = (u8)v;
	h->data->field_0x54 = 0;
	h->data->field_0x50 = p2 << 8;
	h->data->field_0x58 = p2;
}

// lbl_8049BAC8 (direccion vieja RNEEDA, sin migrar) resolvia mal -- la tabla
// real es lbl_8049C348 (mismo bug de siempre, ver bitacora).
extern "C" u8 lbl_8049C348[8];

// El original usa un loop real (mtctr/bdnz, sin unroll); mwcc con -O4,p
// auto-unrollea este for de 8 iteraciones fijas pese a probar for/do-while y
// `#pragma unroll off` (no tiene efecto aca) -- contenido correcto, tamano
// distinto por el unroll, no accionable con el flag set actual.
extern "C" void fn_80136668(u8* dst, s8* src)
{
	for (s32 i = 0; i < 8; i++)
		dst[i] = lbl_8049C348[src[i]];
}

// fn_80136694: escanea hasta 9 "grupos" (n<=8), buscando en `lbl_8049C348`
// (mismo array que fn_80136668, indexado esta vez por scan lineal en vez de
// lookup directo) un byte igual a `*src`; si lo encuentra escribe el indice
// de la entrada, si llega a un byte 0 (terminador, fuera del tamano
// declarado 0x8 -- el layout real de datos linkeado sigue mas alla) escribe
// el centinela 0x1f. Retorna `dst` avanzado. Nunca antes decompilada.
extern "C" u8* fn_80136694(u8* dst, s8* src)
{
	s32 n = 0;
	while (n <= 8) {
		s32 state = 0;
		for (;;) {
			s8 tableVal = (s8)lbl_8049C348[state];
			if (tableVal == 0) {
				*dst = 0x1f;
				n++;
				src++;
				dst++;
				break;
			}
			if (*src == tableVal) {
				*dst = (u8)state;
				n++;
				src++;
				dst++;
				break;
			}
			state++;
		}
	}
	return dst;
}

extern "C" u32 lbl_803A65B8[10];
extern "C" s32 fn_8013652C(s32 v, s32 lo, s32 hi);

extern "C" u32 fn_801364EC(u32 v)
{
	return lbl_803A65B8[fn_8013652C(v, 0, 9)];
}

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

u8 fn_80136A90(CTextEntryBaseData* d)
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
extern "C" CTextEntryBaseData* fn_80136A18(CTextEntryBaseData* obj)
{
	obj->vtable = lbl_8035A100;
	fn_80136A80(obj, 1);
	fn_80136A78(obj, 0);
	fn_80136A70(obj, 0);
	return obj;
}

#pragma dont_inline reset

// Constructor de CTextEntry_Code: corre el ctor base y despues pisa la
// vtable con la propia (patron estandar de C++: la base se construye
// primero con SU vtable, la derivada la sobreescribe al final).
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
// lbl_8049D6F8 declarada acá para uso temprano por fn_80135EC4 (mismo pool
// global usado luego por fn_80135D90/fn_80135BB0/fn_80135CC0/fn_80135E24).
extern "C" GlobalHandlePool* lbl_8049D6F8;

extern "C" s32 fn_80135EC4(s32 idx, u32 mode)
{
	GlobalHandlePool* g = lbl_8049D6F8;
	s32 invalid = 0;
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
	if (invalid) {
		return idx;
	}
	return (s32)g->arr[idx];
}

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
extern "C" s32 fn_80136098(TcgTextEntryHandle* h)
{
	return fn_80135EC4((s32)h, 1) != 0;
}

// obj = fn_80135BA4(h) reinterpretado como puntero (mismo caso que
// fn_801354A0 -- el "getter u32" real devuelve un puntero). Sin return
// explicito al final (el original tampoco deja nada intencional en r3, solo
// lo que quedo de la ultima operacion -- el caller nunca usa el valor).
struct Obj44 {
	u8 pad_00[0x4];
	u32 field_0x4;
	u32 field_0x8;
};

extern "C" s32 fn_80135904(TcgTextEntryHandle* h, s32 p2)
{
	Obj44* obj = (Obj44*)fn_80135BA4(h);
	obj->field_0x8 = 0;
	if (p2 >= 0) {
		s32 v = obj->field_0x4 * h->data->field_0x4;
		h->data->field_0x98 = 0;
		h->data->field_0x94 = 0;
		h->data->field_0x9c = v << 8;
		h->data->field_0xa0 = v;
		h->data->field_0x90 = 0;
	}
}

extern "C" s32 fn_801360C4(TcgTextEntryHandle* h, u32 v)
{
	return fn_80135904((TcgTextEntryHandle*)fn_80136524(h), v);
}

extern "C" u32 fn_801360F8(TcgTextEntryHandle* h)
{
	return fn_80135640((TcgTextEntryHandle*)fn_80136524(h), 0);
}

extern "C" void fn_801368C8(TcgTextEntryHandle* h, f32 a, f32 b)
{
	TcgTextEntryHandle* r = (TcgTextEntryHandle*)fn_80136524(h);
	if (r) {
		fn_80135428(r, a, b);
	}
}

// Setter simetrico a fn_80135A9C (getter, offset 0x1d0). Contenido correcto,
// pero mwcc adelanta el save de r5(v)/carga del literal 0x1d ANTES del
// prologo (r30) donde el original los deja despues -- quirk de scheduler en
// la preparacion de args del `bl`, no depende de esta forma del C fuente.
extern "C" void fn_80135A48(TcgTextEntryHandle* h, s32 idx, s32 v)
{
	s32 i = fn_8013652C(idx, 0, 0x1d);
	((s32*)((u8*)h->data + 0x1d0))[i] = v;
}

// Tabla de 0x53/0x59 bytes por entrada (strings o structs, tipo real sin
// confirmar). Direcciones re-verificadas contra RNEPDA (shift +0x880 en esta
// zona de bss respecto de RNEEDA; las viejas 803A491C/803A47B8 quedaron sin
// migrar y resolvian contra el simbolo incorrecto).
extern "C" u8 lbl_803A519C[];
extern "C" u8 lbl_803A5038[];

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
extern "C" s8 lbl_8049C344[];

extern "C" s8 fn_8013654C(u8 c)
{
	s32 i = 0;
	for (;;) {
		if (c == 0x21) return (s8)0x8b;
		if (c == 0x3f) return (s8)0x8c;
		if (c == 0x2a) return (s8)0xa9;
		if (c == 0x2f) return (s8)0xac;
		if (c == 0x27) return (s8)0x93;
		if ((u32)(c - 0x20) <= 0x1d) {
			switch (c) {
			case 0x20: return (s8)0x0;
			case 0x26: return (s8)0xa6;
			case 0x28: return (s8)0x9e;
			case 0x29: return (s8)0x9f;
			case 0x2b: return (s8)0xaa;
			case 0x2d: return (s8)0xab;
			case 0x2e: return (s8)0x8f;
			case 0x3d: return (s8)0xad;
			default: break;
			}
		}
		if (c == 0x20) return (s8)0x5d;
		if (c == 0xa) return (s8)0xbe;
		s8 tc = lbl_8049C344[i];
		if (tc == 0) return (s8)0x5d;
		if ((s8)c == tc) return (s8)(0x1a + i);
		i++;
	}
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
extern "C" void fn_801A9384(const char* cond, s32 line, const char* file);
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
extern "C" void fn_80135CC0(void)
{
	if (!lbl_8049D6F8) {
		return;
	}
	s32 i;
	for (i = 0; i < (s32)lbl_8049D6F8->field_0x0; i++) {
		void* item = lbl_8049D6F8->arr[i];
		if (item) {
			void** vt = *(void***)((u8*)item + 4);
			((void (*)(void*, s32))vt[2])(item, 1);
		}
		if (item) {
			lbl_8049D6F8->arr[i] = 0;
		}
	}
	fn_80136D48(lbl_8049D6F8->arr);

	void* p8 = lbl_8049D6F8->field_0x8;
	if (p8) {
		void** vt = *(void***)((u8*)p8 + 0x24);
		((void (*)(void*, s32))vt[2])(p8, 1);
	}
	dtor_80136CFC(lbl_8049D6F8);
	lbl_8049D6F8 = 0;
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
extern "C" void fn_80135BB0(s32 poolSize)
{
	if (lbl_8049D6F8) {
		fn_80135CC0();
	}
	lbl_8049D6F8 = (GlobalHandlePool*)fn_80136C54(0xc);
	memset(lbl_8049D6F8, 0, 0xc);
	lbl_8049D6F8->field_0x0 = poolSize;
	lbl_8049D6F8->arr = (void**)fn_80136CA8(poolSize * 4);

	void* p = fn_80136C54(0x28);
	if (p) {
		fn_80136AA0((VTablePatch24*)p);
	}
	lbl_8049D6F8->field_0x8 = p;

	fn_80130A78(lbl_8049D6F8->field_0x8, poolSize, 0);
	fn_801309EC(lbl_8049D6F8->field_0x8);

	void* result = fn_801771D4(5, (void*)fn_8013108C, 4);
	if (!result) {
		return;
	}
	memset(result, 0, 4);
	*(u32*)result = 0xff;
	fn_801773E0(result);
	if (!result) {
		fn_801A9384(lbl_8035A13C + 4, 0x141e, lbl_8035A13C + 0x3c);
	}
}

extern "C" s32 fn_80135D90(s32 maxCount, s32 p4)
{
	if (!lbl_8049D6F8) {
		fn_80135BB0(0x64);
	}
	void* slotObj = fn_80130D4C(lbl_8049D6F8->field_0x8, 0);
	s32 idx = *((s32*)slotObj + 1);
	void* h = fn_80136C54(8);
	if (h) {
		fn_80132F3C(h, idx, maxCount, p4);
	}
	lbl_8049D6F8->arr[idx] = h;
	return idx;
}

extern "C" s32 fn_80130F40(void* obj, s32 idx);
extern "C" s32 fn_80130DB0(void* obj, s32 v);

// fn_80135E24: libera un slot del pool global por indice (contraparte de
// fn_80135D90). Nunca antes decompilada.
extern "C" s32 fn_80135E24(s32 idx)
{
	s32 v = fn_80130F40(lbl_8049D6F8->field_0x8, idx);
	if (!fn_80130DB0(lbl_8049D6F8->field_0x8, v)) {
		return 0;
	}
	void* item = lbl_8049D6F8->arr[idx];
	if (item) {
		void** vt = *(void***)((u8*)item + 4);
		((void (*)(void*, s32))vt[2])(item, 1);
	}
	lbl_8049D6F8->arr[idx] = 0;
	return 1;
}

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

extern "C" s32 fn_80135F38(s32 idx, const char* fmt, u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7)
{
	void* h = (void*)fn_80136524((TcgTextEntryHandle*)idx);
	u32 args[8] = { a0, a1, a2, a3, a4, a5, a6, a7 };
	return fn_8013330C(h, (void*)fmt, args);
}
extern "C" u32 strlen(const char* s);
extern "C" void* memcpy(void* dst, const void* src, s32 n);
extern "C" void memset(void* dst, int val, s32 n);

extern "C" s32 fn_80136748(void* pVoid, char* str, s32 len)
{
	u8* p = (u8*)pVoid;
	if (!str || !pVoid) {
		return -1;
	}

	s32 slen = (s32)strlen(str);
	s32 pairBytes = slen * 2;
	s32 totalLen = pairBytes + 2;
	lbl_80359FA8[0x28] = (u8)totalLen;

	if (len < 0) {
		len = fn_80135D90(pairBytes + 3, pairBytes + 3);
	}

	u8 pairs[0x100];
	s32 i;
	for (i = 0; i < slen; i++) {
		pairs[i * 2] = (u8)fn_8013654C((u8)str[i]);
		pairs[i * 2 + 1] = 0;
	}

	if (len > 0) {
		memset(p, 0, 4);
	}
	memcpy(p, lbl_80359FA8, 0x38);
	for (i = 0; i < pairBytes; i++) {
		p[0x38 + i] = pairs[i];
	}
	p[0x38 + pairBytes] = 0;
	p[0x38 + pairBytes + 1] = (u8)-0x42;
	p[0x38 + totalLen] = 0;

	return fn_80135F38(len, (const char*)p, 0, 0, 0, 0, 0, 0, 0, 0);
}

// fn_801368A0/58: contenido correcto (confirmado por disasm); resta solo
// quirk de scheduler para el calculo de direccion (mulli/lis/addi/add usa
// r6/r0 donde nosotros obtenemos r0/r3 -- mismo tipo de quirk que
// __fill_mem/PPCMtfpscr, probado con varias formas de la expresion C sin
// cambio alguno. No vale mas tiempo a mano).
extern "C" s32 fn_801368A0(s32 idx, char* str, s32 len)
{
	return fn_80136748(lbl_803A519C + idx * 0x53, str, len);
}

extern "C" s32 fn_801368B4(s32 idx, char* str, s32 len)
{
	return fn_80136748(idx * 0x59 + lbl_803A5038, str, len);
}

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
extern "C" s32 fn_80136308(u32 v)
{
	if (v == 0) {
		return 0;
	}
	void* p1 = fn_80136B60(v, 0);
	u8* p2 = fn_80136B1C((void*)v);
	u16 raw2 = *(u16*)p2;
	s32 a = (s32)(s16)((raw2 << 8) | (raw2 >> 8)) / 2;
	u16 raw1 = *(u16*)p1;
	u16 b = (u16)((raw1 << 8) | (raw1 >> 8));
	if (a - 1 == 1 && b == 0x19) {
		return 0;
	}
	return 0;
}

extern "C" u8 lbl_803A52F8[];

extern "C" s32 fn_80136434(s32 idx, s16 b, s16 c)
{
	u32 v = 0;
	u8* entry = lbl_803A52F8 + idx * 0x18;
	switch (c * 2 + b) {
	case 0: v = *(u32*)(entry + 0x0); break;
	case 1: v = *(u32*)(entry + 0x4); break;
	case 2: v = *(u32*)(entry + 0xc); break;
	case 3: v = *(u32*)(entry + 0x10); break;
	}
	return fn_80136308(v);
}

extern "C" s32 fn_801364A0(s32 idx, s32 mode)
{
	u32 v = 0;
	switch (mode) {
	case 0: {
		u8* entry = lbl_803A52F8 + idx * 0x18;
		v = *(u32*)(entry + 0x8);
		break;
	}
	case 1: {
		u8* entry = lbl_803A52F8 + idx * 0x18;
		v = *(u32*)(entry + 0x14);
		break;
	}
	}
	return fn_80136308(v);
}

// Validadores standalone: "this" (r3) nunca se lee, solo clampean params via
// fn_8013652C y descartan el resultado.
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

// dtor_80136CFC: nombre real detectado por decomp-toolkit (heuristica de
// exception table / destructor), sin decompilar todavia.
extern "C" void dtor_80136CFC(void* obj);

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

extern "C" u32 lbl_8035A124[]; // vtable, mismo patron SDA21 que las de CTextEntryBase

struct VTablePatch24 { u8 pad_00[0x24]; void* vtable; };

// Mismo quirk de scheduler que fn_801368A0/58: mwcc pisa el registro base
// (r4) para el addi@l, nosotros lo reusamos -- probado con struct real y con
// variable local intermedia, sin cambio. No vale mas tiempo a mano.
extern "C" void fn_80136AA0(VTablePatch24* obj)
{
	obj->vtable = lbl_8035A124;
}

extern "C" void fn_8013098C(void* obj); // destructor real, sin decompilar todavia

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

#pragma dont_inline reset

// Mismo gotcha de inlining: estas llaman fn_80135258/fn_80135354/fn_801354A0/
// fn_80135640, todas definidas arriba en este archivo.
#pragma dont_inline on

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

extern "C" void fn_801356BC(TcgTextEntryHandle* h, f32 add, u32 v)
{
	if (!fn_80135640(h, 1)) {
		h->data->field_0xec = h->data->field_0xf0;
		h->data->field_0xf0 = h->data->field_0xec + add;
		h->data->field_0xf4 = 0;
		h->data->field_0xf8 = v << 8;
		h->data->field_0xfc = v;
	}
}

extern "C" void fn_80135760(TcgTextEntryHandle* h, f32 v, u32 flagBits, u32 doOr)
{
	if (doOr) {
		h->data->field_0x64 |= flagBits;
	}
	if (!fn_80135640(h, 1)) {
		h->data->field_0x28 = h->data->field_0xf0;
		h->data->field_0x108 = (s32)h->data->field_0x28;
		h->data->field_0x10c = (s32)h->data->field_0x2c;
		h->data->field_0x104 = v;
	}
}

// obj = fn_801354A0(h, 0) devuelve un puntero (aunque fn_801354A0 esta
// tipado u32 -- ese campo/retorno es en realidad un puntero, confirmado por
// este caller). Offsets 0x210-0x213/0x2bc de un objeto todavia sin
// identificar (probablemente una entrada de config/estilo).
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
			h->data->field_0x38 = ((u32)h->data->field_0x3c << 24) | ((u32)h->data->field_0x3d << 16)
				| ((u32)h->data->field_0x3e << 8) | h->data->field_0x3f;
		}
	}
}

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

#pragma dont_inline reset

// Cluster de contenedor con dispatch virtual (fn_80133250/fn_80133194/etc).
// Struct real todavia sin identificar -- offsets confirmados por disasm.
struct ItemHandle {
	u8 pad_00[0xc];
	void** vtable;
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

extern "C" s32 fn_80133250(ContainerHandle* h, u32 doFree)
{
	s32 result = 0;
	if (doFree) {
		s32 i = 0;
		if (h->list->count > 0) {
			result = 1;
			do {
				void* item = h->list->items[i];
				if (item) {
					ItemHandle* ih = (ItemHandle*)item;
					((void (*)(void*, s32))ih->vtable[2])(item, 1);
				}
				h->list->items[i] = 0;
				i++;
			} while (i < (s32)h->list->count);
		}
		h->list->count = 0;
	}
	return result;
}

// fn_80133194 llama fn_80133250 (definida arriba) -- mismo gotcha de
// inlining, necesita su propio dont_inline (el bloque anterior ya cerro con
// reset antes de esta funcion).
#pragma dont_inline on

extern "C" u32 lbl_8035A0E8[]; // vtable de este objeto (offset 0x4, no 0x0)

extern "C" void* fn_80133194(void* h, s32 flag)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	if (h) {
		*(void***)((u8*)h + 0x4) = (void**)lbl_8035A0E8;
		fn_80133250(ch, 1);
		fn_80136D48(*(void**)((u8*)ch->list->field_0x60 + 0xc));
		fn_80136D48(ch->list->field_0x60);
		fn_80136D48(ch->list->items);
		void* p0c = ch->list->field_0xc;
		if (p0c) {
			((void (*)(void*, s32))(*(void***)((u8*)p0c + 0x24))[2])(p0c, 1);
		}
		dtor_80136CFC(ch->list);
		if ((s16)flag > 0) {
			dtor_80136CFC(h);
		}
	}
	return h;
}

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

extern "C" s32 fn_8013330C(void* h, void* p2, void* p3)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	fn_80133250(ch, 1);
	f32 zero = lbl_804A0290[0];
	ch->list->field_0xcc = zero;
	ch->list->field_0xd0 = zero;
	ch->list->field_0xd4 = zero;
	lbl_8049CE7C = 0;
	TempList* src = fn_80132B8C(h, (s32)ch->list->field_0x0, p2, p3);
	u32 count = 0;
	s32 i;
	for (i = 0; i < (s32)src->count; i++) {
		ch->list->items[count] = src->arr[i];
		count++;
	}
	ch->list->count = count;
	fn_80136D48(src->arr);
	dtor_80136CFC(src);
	fn_801359B8((TcgTextEntryHandle*)h, fn_801359AC((TcgTextEntryHandle*)h));
	fn_80134304((TcgTextEntryHandle*)h, 1, -1);
	return 1;
}

// Estructuralmente identica a fn_8013330C (mismo patron "reset + copiar de
// TempList temporal"), pero arma la TempList via fn_80132D24 (4 params extra
// en vez de 2). fn_80132D24 sin decompilar todavia (536 bytes).
extern "C" TempList* fn_80132D24(void* h, s32 maxCount, void** tables, void** arrB, void** arrC, s32 tableCount);

extern "C" s32 fn_80133410(void* h, void** tables, void** arrB, void** arrC, s32 tableCount)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	fn_80133250(ch, 1);
	f32 zero = lbl_804A0290[0];
	ch->list->field_0xcc = zero;
	ch->list->field_0xd0 = zero;
	ch->list->field_0xd4 = zero;
	lbl_8049CE7C = 0;
	TempList* src = fn_80132D24(h, (s32)ch->list->field_0x0, tables, arrB, arrC, tableCount);
	u32 count = 0;
	s32 i;
	for (i = 0; i < (s32)src->count; i++) {
		ch->list->items[count] = src->arr[i];
		count++;
	}
	ch->list->count = count;
	fn_80136D48(src->arr);
	dtor_80136CFC(src);
	fn_801359B8((TcgTextEntryHandle*)h, fn_801359AC((TcgTextEntryHandle*)h));
	fn_80134304((TcgTextEntryHandle*)h, 1, -1);
	return 1;
}

// Filtra/compacta el mismo `list->items` in-place: si fn_80136A90(item)
// (bit 0x5 de CTextEntryBaseData) es true, dispatch virtual + descartar;
// si no, se re-empaqueta en el mismo array. Reusa fn_80136A88/fn_80136A70/
// fn_80136A90 (CTextEntryBaseData, ya existentes arriba).
extern "C" void fn_80133524(void* h)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	u32 destCount = 0;
	s32 i;
	for (i = 0; i < (s32)ch->list->count; i++) {
		ItemHandle* item = (ItemHandle*)ch->list->items[i];
		if (item) {
			fn_80136A70((CTextEntryBaseData*)item, fn_80136A88((CTextEntryBaseData*)item) & ~3);
			if (fn_80136A90((CTextEntryBaseData*)item)) {
				if (item) {
					((void (*)(void*, s32))item->vtable[2])(item, 1);
				}
			} else {
				ch->list->items[destCount] = item;
				destCount++;
			}
		}
	}
	ch->list->count = destCount;
}

#pragma dont_inline reset

extern "C" s32 fn_80136DA4(TcgTextEntryHandle* h); // sin decompilar todavia

// Tabla real es lbl_804A0AA8 (no lbl_804A0290 -- confusion de la ronda
// anterior entre 2 tablas de nombre parecido). offsets 0x18/0x1c/0x20 =
// indices 6/7/8, confirmado por disasm crudo del target. Fuzzy% no se movio
// (61.9% antes y despues) -- quedan 2 quirks sin resolver, ninguno depende
// de la tabla: (1) polaridad de branch invertida sea cual sea el if/else en
// C; (2) esta tabla usa @sda21 (1 instr) en el target pese a -sdata2 0 en
// configure.py -- probado array con tamano explicito, sin efecto. Es
// decision del linker (relax?), no del C fuente.
extern "C" f32 lbl_804A0AA8[];

extern "C" f32 fn_8013539C(TcgTextEntryHandle* h)
{
	if (fn_80136DA4(h)) {
		return lbl_804A0AA8[8] * h->data->field_0xb8 / lbl_804A0AA8[7];
	} else {
		return lbl_804A0AA8[6] * h->data->field_0xb8 / lbl_804A0AA8[7];
	}
}

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

extern "C" TempList* fn_80132B8C(void* ctx, s32 maxCount, void* table, void* extra)
{
	TempList* dst = (TempList*)fn_80136C54(0x10);
	dst->origCount = maxCount;
	dst->byteCount = 0;
	dst->count = 0;
	dst->arr = (void**)fn_80136CA8(maxCount * 4);

	if (!table) {
		table = lbl_8049D6F0;
	} else if (!fn_80136BFC(table)) {
		table = lbl_8049D6F4;
	}

	s32 itemCount = 0;
	s32 lastInnerIdx = 0;
	s32 recordCount = fn_80136B24(table);
	u8* records = fn_80136B1C(table);

	s32 i;
	for (i = 0; i < recordCount; i++) {
		u8* rec = records + i * 0x10;
		u32 strOff = bswap32(*(u32*)(rec + 4));
		if (strOff != 0) {
			s32 len = bswap16(*(u16*)rec);
			TempList* sub = fn_80131428(ctx, maxCount, len, (u8*)table + strOff, extra);
			s32 j;
			for (j = 0; j < (s32)sub->count; j++) {
				if (fn_80131288(dst, itemCount, sub->arr[j])) {
					itemCount++;
				}
			}
			lastInnerIdx = j;
			fn_80136D48(sub->arr);
			dtor_80136CFC(sub);
		}
	}
	dst->byteCount = lastInnerIdx * 4;
	dst->count = itemCount;
	return dst;
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

extern "C" TempList* fn_80132348(void* ctx, s32 maxCount, s32 len, void* str, void* extraB, void* extraC)
{
	TcgTextEntryHandle* h = (TcgTextEntryHandle*)ctx;
	u16* tags = (u16*)str;
	s32 mode = *(s32*)extraC;
	TempList* result = (TempList*)fn_80136C54(0x10);
	result->origCount = maxCount;
	result->arr = (void**)fn_80136CA8(maxCount * 4);
	(void)extraB;

	s32 outCount = 0;
	s32 count = len / 2;
	s32 idx = 0;
	s32 needChar = 1;
	s32 step = 0;

	while (idx < count) {
		if (needChar) {
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			s32 initCode = (mode <= 1) ? 1 : 0;
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, initCode);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			needChar = 0;
		}

		u16 raw = tags[idx];
		idx++;
		u16 tag = bswap16(raw);
		if (!(tag & 0x8000)) {
			fn_80131324(result, outCount, tag, 0);
			continue;
		}

		s32 code = (s32)((tag >> 8) & 0x7f);
		step = tag & 0xff;

		switch (code) {
		case 1: {
			// dos valores u16 via puntero, dispatch code 6.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 6);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			u16* p = &tags[idx];
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(p[0]));
			fn_801322FC((CTextEntryCharData*)obj, 1, (s16)bswap16(p[1]));
			idx += step;
			break;
		}
		case 2: {
			// dos valores u16, dispatch code 7.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 7);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			u16* p = &tags[idx];
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(p[0]));
			fn_801322FC((CTextEntryCharData*)obj, 1, (s16)bswap16(p[1]));
			idx += step;
			break;
		}
		case 4: {
			// bitmask (hasta 8 bits) -> hasta 8 entradas individuales,
			// marcadas con el flag 0x8 (fn_80136A70/fn_80136A88).
			s16 mask = (s16)bswap16(tags[idx]);
			s32 hiBit = 0;
			s32 b;
			for (b = 0; b < 8; b++) {
				if (fn_80136120(mask, 7 - b)) {
					hiBit = 8 - b;
					break;
				}
			}
			for (b = 0; b < hiBit; b++) {
				if (fn_80136120(mask, b)) {
					if (fn_80131324(result, outCount, (u16)fn_80136120(mask, b), 0)) {
						void* item = result->arr[outCount];
						fn_80136A70((CTextEntryBaseData*)item, fn_80136A88((CTextEntryBaseData*)item) | 8);
						outCount++;
					}
				}
			}
			idx += step;
			break;
		}
		case 5:
		case 6:
		case 7:
		case 8: {
			// bloque "8 posiciones" + clasificacion de caracteres via 2
			// jump tables (mayus/minus, best-effort -- ver fn_80131428
			// caso 5-8 para el patron analogo de sprintf dinamico).
			s16 val = (s16)bswap16(tags[idx]);
			s32 hiBit = 0;
			s32 b;
			for (b = 0; b < 8; b++) {
				if (fn_80136120(val, 7 - b)) {
					hiBit = 8 - b;
					break;
				}
			}
			for (b = 0; b < hiBit; b++) {
				if (fn_80131324(result, outCount, 0, 0)) {
					outCount++;
				}
			}
			idx += step;
			break;
		}
		case 0xa: {
			// un solo valor u16, dispatch code 8.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 8);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(tags[idx]));
			idx += step;
			break;
		}
		case 0x35: {
			// un solo valor u16, dispatch code 9, seguido de un getter
			// (fn_80135A9C) aplicado como field 0.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 9);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			s32 v = fn_80135A9C(h, (s16)bswap16(tags[idx]));
			fn_801322FC((CTextEntryCharData*)obj, 0, v);
			idx += step;
			break;
		}
		case 0x3e: {
			// segun `mode`: dispatch code 9 (dos veces, offsets 0/2) o
			// dispatch code 2 (dos veces, offsets 0/2) -- variante de
			// case 1/2 con extraC decidiendo el sub-codigo.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			s32 dispatchCode = (mode == 1 || mode == 3) ? 9 : 2;
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, dispatchCode);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			u16* p = &tags[idx];
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(p[0]));
			fn_801322FC((CTextEntryCharData*)obj, 1, (s16)bswap16(p[1]));
			idx += step;
			break;
		}
		case 3:
		case 9:
		default:
			// sin handler propio (o explicitamente no-op, codigos 3/9):
			// se descarta la entrada sin crear nada (a diferencia de
			// fn_80131428, que si crea un char "vacio" en su fallback).
			idx += step;
			break;
		}
	}

	result->count = outCount;
	return result;
}

extern "C" TempList* fn_80132D24(void* ctx, s32 maxCount, void** tables, void** arrB, void** arrC, s32 tableCount)
{
	TempList* dst = (TempList*)fn_80136C54(0x10);
	dst->origCount = maxCount;
	dst->byteCount = 0;
	dst->count = 0;
	dst->arr = (void**)fn_80136CA8(maxCount * 4);

	if (!tables[0]) {
		tables[0] = lbl_8049D6F0;
	} else if (!fn_80136BFC(tables[0])) {
		tables[0] = lbl_8049D6F4;
	}

	s32 perTableCount[16];
	s32 totalRecords = 0;
	s32 t;
	for (t = 0; t < tableCount; t++) {
		perTableCount[t] = fn_80136B24(tables[t]);
		totalRecords += perTableCount[t];
	}

	u8* tableBase[16];
	s32 boundary = 0;
	s32 curTable = 0;
	s32 itemCount = 0;
	s32 byteAccum = 0;
	s32 r;
	for (r = 0; r < totalRecords; r++) {
		while (r >= perTableCount[curTable]) {
			boundary += perTableCount[curTable];
			curTable++;
			tableBase[curTable] = (u8*)fn_80136B1C(tables[curTable]) + (boundary - r) * 0x10;
		}
		u8* rec = tableBase[curTable];
		u32 strOff = bswap32(*(u32*)(rec + 4));
		if (strOff != 0) {
			s32 len = bswap16(*(u16*)rec);
			TempList* sub = fn_80132348(ctx, maxCount, len, (u8*)tables[curTable] + strOff, arrB[curTable], arrC[curTable]);
			s32 j;
			for (j = 0; j < (s32)sub->count; j++) {
				if (fn_80131288(dst, itemCount, sub->arr[j])) {
					itemCount++;
				}
			}
			byteAccum += sub->byteCount;
			fn_80136D48(sub->arr);
			dtor_80136CFC(sub);
		}
	}
	dst->count = itemCount;
	dst->byteCount = byteAccum;
	return dst;
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

extern "C" s32 fn_80131324(TempList* dest, s32 idx, u16 code, s32 extra)
{
	s32 ok = 1;
	CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x38);
#pragma dont_inline on
	if (obj) {
		fn_801313EC(obj);
	}
#pragma dont_inline reset
	((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 0);
	if (lbl_8049D6FC) {
		if (code != 0x19) {
			code = fn_8013123C(code);
		}
		lbl_8049D6FC = 0;
	}
	fn_801313E4((CTextEntryCharData*)obj, code);
	if (!fn_80131288(dest, idx, obj)) {
		ok = 0;
	}
	return ok;
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
extern "C" u32 lbl_804A0A90;
extern "C" u32 lbl_804A0A94;
extern "C" u8 lbl_80339D90[0x90]; // tabla de records (layout exacto sin confirmar)
extern "C" u8 lbl_80339E20[0x140]; // tabla de definiciones de tag extendido (0x28 x 8 bytes)
extern "C" char lbl_8035A13C[]; // formato "%d"

// fn_80136120: lookup en tabla fija `lbl_80359C60[row][8]` (10 filas, 8
// columnas, u16) con 4 bounds-checks tipo assert (no gateados por NDEBUG en
// el original -- este juego los deja activos en release; se preservan como
// llamadas reales a `fn_801A9384`, no como `assert()` de C que -DNDEBUG=1
// eliminaria). Mensajes/strings exactos de cada assert no verificados.
extern "C" void fn_801A9384(const char* cond, s32 line, const char* file);
extern "C" u16 lbl_80359C60[];

extern "C" s32 fn_80136120(s32 row, s32 col)
{
	if (row <= -1) {
		fn_801A9384(lbl_8035A13C + 4, 0x156c, lbl_8035A13C + 0xe5);
	}
	if (row >= 0xa) {
		fn_801A9384(lbl_8035A13C + 4, 0x156d, lbl_8035A13C + 0xe5);
	}
	if (col <= -1) {
		fn_801A9384(lbl_8035A13C + 4, 0x156e, lbl_8035A13C + 0x111);
	}
	if (col >= 8) {
		fn_801A9384(lbl_8035A13C + 4, 0x156f, lbl_8035A13C + 0x111);
	}
	return lbl_80359C60[row * 8 + col];
}

extern "C" TempList* fn_80131428(void* ctx, s32 maxCount, s32 len, void* str, void* extra)
{
	TcgTextEntryHandle* h = (TcgTextEntryHandle*)ctx;
	u16* tags = (u16*)str;
	TempList* result = (TempList*)fn_80136C54(0x10);
	result->origCount = maxCount;
	result->arr = (void**)fn_80136CA8(maxCount * 4);
	void* pendingList = 0; // r28: nunca se le asigna un valor real en ningun
	                        // camino recorrido -- probable dead code (los
	                        // "validadores" fn_801363B8/fn_80136404 siempre
	                        // devuelven 0, asi que el bloque que lo usaria
	                        // nunca corre en la practica). Documentado, no
	                        // investigado mas a fondo.

	s32 outCount = 0;
	s32 count = len / 2;
	s32 idx = 0;
	s32 needChar = 1;
	s32 step = 0;

	u32 constPair[2] = { lbl_804A0A90, lbl_804A0A94 };
	u8 table1[0x90];
	memcpy(table1, lbl_80339D90, sizeof(table1));
	u8 table2[0x140];
	memcpy(table2, lbl_80339E20, sizeof(table2));

	while (idx < count) {
		if (needChar) {
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 1);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			needChar = 0;
		}

		u16 raw = tags[idx];
		idx++;
		u16 tag = bswap16(raw);
		if (!(tag & 0x8000)) {
			// caracter "plano" -- sin tag code, un solo u16 consumido.
			fn_80131324(result, outCount, tag, 0);
			continue;
		}

		s32 code = (s32)((tag >> 8) & 0x7f);
		step = tag & 0xff;

		if (code > 0x40) {
			// codigo extendido: busca en table2 (entradas de 8 bytes:
			// [0]=s16 code, [2]=u8 subtype, [3]=u8 len, [4]=u32 param) hasta
			// encontrar code o una entrada negativa (fin de tabla).
			s32 off = 0;
			for (;;) {
				s16 entryCode = *(s16*)(table2 + off);
				if (entryCode < 0) {
					idx += step;
					goto next;
				}
				if ((s32)entryCode == code) {
					break;
				}
				off += 8;
			}
			{
				u8 subtype = table2[off + 2];
				switch (subtype) {
				case 0: {
					u32 subLen = *(u32*)(table2 + off + 4);
					u8 subByteLen = table2[off + 3];
					TempList* sub = fn_80131428(ctx, maxCount, (s32)(u16)subLen, tags, extra);
					if (sub) {
						/* fusionar contenido de sub en result -- ver nota */
					}
					(void)subByteLen;
					if (fn_80131288(0, 0, 0)) {} // TODO: fusion real sin verificar bit a bit
					break;
				}
				case 1: {
					CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
					if (obj) {
						fn_8013230C(obj);
					}
					((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, *(u32*)(table2 + off + 4));
					if (fn_80131288(result, outCount, obj)) {
						outCount++;
					}
					break;
				}
				case 2:
					fn_80136DA4(h);
					lbl_8049D6FC = 1;
					break;
				case 3: {
					CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
					if (obj) {
						fn_8013230C(obj);
					}
					((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 8);
					if (fn_80131288(result, outCount, obj)) {
						outCount++;
					}
					fn_801322FC((CTextEntryCharData*)obj, 0, (u32)*(u32*)(table2 + off + 4));
					break;
				}
				case 4: {
					CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
					if (obj) {
						fn_8013230C(obj);
					}
					((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 4);
					if (fn_80131288(result, outCount, obj)) {
						outCount++;
					}
					break;
				}
				}
			}
			idx += step;
			goto next;
		}

		switch (code) {
		default: {
			// generico (jump table -> 0xCB0): mismo camino que "code > 0x40".
			fn_80131324(result, outCount, 0, 0);
			idx += step;
			break;
		}
		case 1: {
			// dos valores u16 leidos via puntero (offsets 0/2), dispatch code 6.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 6);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			u16* p = &tags[idx];
			fn_801322FC((CTextEntryCharData*)obj, 0, bswap16(p[0]));
			fn_801322FC((CTextEntryCharData*)obj, 1, bswap16(p[1]));
			idx += step;
			break;
		}
		case 2: {
			// dos valores u16, dispatch code 7 (offsets directos idx+0/idx+1).
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 7);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(tags[idx]));
			fn_801322FC((CTextEntryCharData*)obj, 1, (s16)bswap16(tags[idx + 1]));
			idx += step;
			break;
		}
		case 3: {
			// sub-lista anidada: parsea un char via fn_80135A00, arma una
			// TempList con fn_80132B8C y fusiona sus items en `result`.
			s32 v = fn_80135A00(h, (s16)bswap16(tags[idx]));
			TempList* sub = fn_80132B8C(ctx, maxCount, (void*)h, extra);
			s32 j;
			for (j = 0; j < (s32)sub->count; j++) {
				void* item = sub->arr[j];
				if (item) {
					((void (*)(void*, s32))((void**)((CTextEntryBaseData*)item)->vtable)[2])(item, 1);
				} else if (fn_80131288(result, outCount, sub->arr[j])) {
					outCount++;
				}
			}
			(void)v;
			fn_80136D48(sub->arr);
			dtor_80136CFC(sub);
			idx += step;
			break;
		}
		case 4: {
			// codigo/recurso por nombre (tipo fijo 9) aplicado via fn_80135B28.
			s32 c = fn_8013652C((s16)bswap16(tags[idx]), 0, 9);
			u32 v = fn_801364EC(c);
			fn_80135B28(h, v);
			idx += step;
			break;
		}
		case 5:
		case 6:
		case 7:
		case 8: {
			// codigo de color en formato hexadecimal (best-effort -- layout
			// exacto de table1/constPair sin verificar bit a bit).
			s32 sub = code - 5;
			s32 bitPos;
			s32 hi = 0;
			for (bitPos = 0; bitPos < 8; bitPos++) {
				if (fn_80136120(sub, 7 - bitPos)) {
					hi = 8 - bitPos;
					break;
				}
			}
			char buf28[0x14];
			char buf3c[0x14];
			memset(buf28, 0, sizeof(buf28));
			s32 off = 0;
			u8 flagByte = *((u8*)&constPair[0] + ((sub - 5) * 2 + 1));
			if (flagByte) {
				off = 2;
				buf28[0x1] = (char)0x30; // TODO: offset/valor exactos sin confirmar
			}
			if (*((u8*)&constPair[0] + (sub - 5) * 2)) {
				off++;
				buf28[off - 1] = (char)0x25; // '%'
			}
			sprintf(buf28 + off, lbl_8035A13C, sub);
			sprintf(buf3c, buf28, hi);
			s32 slen = (s32)strlen(buf3c);
			(void)slen;
			for (bitPos = 0; bitPos < hi; bitPos++) {
				CTextEntryBaseData* obj = (CTextEntryBaseData*)result->arr[outCount - 1];
				(void)obj;
			}
			idx += step;
			break;
		}
		case 9: {
			// no-op: consume el tag sin generar entrada.
			idx += step;
			break;
		}
		case 10: {
			// un solo valor u16, dispatch code 8.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 8);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(tags[idx]));
			idx += step;
			break;
		}
		case 47:
		case 48: {
			// 3 campos via fn_80135B00, valida via fn_801363B8/fn_80136404
			// (siempre devuelven 0 -- la sub-lista nunca se llega a construir
			// en la practica). pendingList (r28) documentado arriba.
			u8 a; s16 b, c;
			fn_80135B00(h, &a, &b, &c);
			s32 valid = (code == 47) ? fn_801363B8(0, b, c) : fn_80136404(0, b);
			if (valid) {
				TempList* sub = fn_80132B8C(ctx, maxCount, (void*)h, extra);
				s32 j;
				for (j = 0; j < (s32)sub->count; j++) {
					void* item = sub->arr[j];
					if (item) {
						((void (*)(void*, s32))((void**)((CTextEntryBaseData*)item)->vtable)[2])(item, 1);
					} else if (fn_80131288(result, outCount, sub->arr[j])) {
						outCount++;
					}
				}
				fn_80136D48(sub->arr);
				dtor_80136CFC(sub);
			}
			if (pendingList) {
				fn_80136D48(*(void**)((u8*)pendingList + 0xc));
				dtor_80136CFC(pendingList);
				pendingList = 0;
			}
			idx += step;
			break;
		}
		case 49: {
			// caso "ruby"/ancho (best-effort, table1 sin decodificar del
			// todo): busca resource por nombre (tipo 0x17), copia table1 a
			// un buffer de trabajo y arma hasta 2 sub-listas segun ancho.
			s32 c = fn_8013652C((s16)bswap16(tags[idx]), 0, 0x17);
			u32 width = fn_80135B68(h);
			(void)c;
			u8 workTable[0x90];
			memcpy(workTable, table1, sizeof(workTable));
			u8* entry = workTable + width * 6;
			u8 entryType = entry[0];
			u16 entryA = *(u16*)(entry + 2);
			u16 entryB = *(u16*)(entry + 4);
			fn_80135AE4(h, entryType, (s16)entryA, (s16)entryB);
			s32 hi = fn_80136434((s32)entryType, 0, 0);
			s32 v = fn_801364A0((s32)entryType, 1);
			if (v) {
				TempList* sub = fn_80132B8C(ctx, maxCount, (void*)h, extra);
				s32 j;
				for (j = 0; j < (s32)sub->count; j++) {
					if (fn_80131288(result, outCount, sub->arr[j])) {
						outCount++;
					}
				}
				fn_80136D48(sub->arr);
				dtor_80136CFC(sub);
			}
			if (hi) {
				TempList* sub = fn_80132B8C(ctx, maxCount, (void*)h, extra);
				s32 j;
				for (j = 0; j < (s32)sub->count; j++) {
					if (fn_80131288(result, outCount, sub->arr[j])) {
						outCount++;
					}
				}
				fn_80136D48(sub->arr);
				dtor_80136CFC(sub);
			}
			idx += step;
			break;
		}
		case 56: {
			// un solo valor u16, dispatch code 9.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 9);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(tags[idx]));
			idx += step;
			break;
		}
		case 62: {
			// dos valores u16 directos, dispatch code 2.
			CTextEntryBaseData* obj = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (obj) {
				fn_8013230C(obj);
			}
			((void (*)(void*, s32))((void**)obj->vtable)[3])(obj, 2);
			if (fn_80131288(result, outCount, obj)) {
				outCount++;
			}
			fn_801322FC((CTextEntryCharData*)obj, 0, (s16)bswap16(tags[idx]));
			fn_801322FC((CTextEntryCharData*)obj, 1, (s16)bswap16(tags[idx + 1]));
			idx += step;
			break;
		}
		case 64: {
			// codigo/recurso por nombre (tipo fijo 9), igual que case 4.
			s32 c = fn_8013652C((s16)bswap16(tags[idx]), 0, 9);
			u32 v = fn_801364EC(c);
			fn_80135B28(h, v);
			idx += step;
			break;
		}
		}
	next:;
	}

	result->count = outCount;
	return result;
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
#pragma dont_inline on

extern "C" void* fn_80132F3C(void* h, u32 p2, s32 maxCount, u32 p4)
{
	*(void***)((u8*)h + 0x4) = (void**)lbl_8035A0E8;
	TcgTextEntryData* data = (TcgTextEntryData*)fn_80136C54(0x268);
	*(void**)h = data;
	memset(data, 0, 0x268);
	data->field_0x10 = p2;
	data->field_0x0 = maxCount;
	data->field_0x4 = 0;
	data->field_0x8 = (u32)fn_80136CA8(maxCount * 4);

	void* sub28 = fn_80136C54(0x28);
	if (sub28) {
		fn_80136AA0((VTablePatch24*)sub28);
		data->field_0xc = (u32)sub28;
		fn_80130AE8((void*)data->field_0xc, 1);
		fn_80130A78((void*)data->field_0xc, maxCount, 0);
		fn_801309EC((void*)data->field_0xc);
	}

	data->field_0x5c = p4;
	TempList* sub60 = (TempList*)fn_80136C54(0x10);
	data->field_0x60 = (u32)sub60;
	data->field_0x38 = (u32)-1;
	sub60->origCount = p4;
	sub60->count = 0;
	sub60->byteCount = 0;
	sub60->arr = (void**)fn_80136CA8(p4 * 0x3c);

	TcgTextEntryHandle* th = (TcgTextEntryHandle*)h;
	fn_80134DF4(th, 1, 0);
	fn_80134E8C(th, 0);
	fn_80135354(th, lbl_804A0AA8[0], lbl_804A0AA8[0], lbl_804A0AA8[1], lbl_804A0AA8[2]);
	fn_80135468(th, lbl_804A0AA8[0], lbl_804A0AA8[0]);
	fn_80135490(th, 8);
	fn_801354C0(th, 0, 0);
	fn_80134E3C(th, 0x202020B8);
	fn_80135988(th, 1);
	fn_80135994(th, (u32)-1);
	fn_801359A0(th, 0x47e);
	if (fn_80136DA4(th)) {
		fn_801359E8(th, lbl_804A0AA8[4]);
	} else {
		fn_801359E8(th, lbl_804A0AA8[3]);
	}
	fn_801359F4(th, lbl_804A0AA8[5]);
	fn_801359D0(th, 1);
	fn_80135448(th, lbl_804A0AA8[0], lbl_804A0AA8[0]);
	fn_8013543C(th, lbl_804A0AA8[6]);
	fn_80135414(th, lbl_804A0AA8[7], lbl_804A0AA8[7]);
	fn_80135380(th, 0, lbl_804A0AA8[0]);
	return h;
}

#pragma dont_inline reset

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
extern "C" s32 lbl_80339F60[];
extern "C" s32 lbl_8033A25C[];

extern "C" s32 fn_801361FC(s32 code, s32 unused, s32 mode)
{
	(void)unused;
	u8 bufA[0x2fc];
	u8 bufB[0x2fc];
	if (!fn_80136DA4((TcgTextEntryHandle*)code)) {
		return 0x14;
	}
	memcpy(bufA, lbl_80339F60, 0x2fc);
	memcpy(bufB, lbl_8033A25C, 0x2fc);
	s32 idx = fn_8013652C(code, 0, 0xbe);
	if (mode == 1) {
		return ((s32*)bufB)[idx + 1];
	}
	return ((s32*)bufA)[idx + 1];
}
extern "C" f32 lbl_804A0AA8[]; // constantes de layout (offsets 0x18/0x1c/0x20/0x24/0x28 usados)
extern "C" f64 lbl_804A0AA0; // constante "magica" de conversion int->float (0x4330_0000...)

static void fn_801335F4_insertItem(TcgTextEntryHandle* h, s32 pos, void* item)
{
	TcgTextEntryData* d = h->data;
	void** items = (void**)d->field_0x8;
	s32 n = (s32)d->field_0x4;
	s32 i;
	for (i = n; i > pos; i--) {
		items[i] = items[i - 1];
	}
	items[pos] = item;
	d->field_0x4 = n + 1;
}

extern "C" s32 fn_801335F4(TcgTextEntryHandle* h)
{
	TcgTextEntryData* d = h->data;
	f32 penX = d->field_0xb4;
	f32 penY = d->field_0xb8;
	f32 lineW = d->field_0xbc;
	f32 tabW = d->field_0xc0;
	f32 spacing = d->field_0xc4;
	f32 maxAscent = -1.0f;
	f32 maxDescent = 0.0f;
	s32 hadFixedWidth = 0;
	s32 insertCount = 0;
	void* prevItem = 0;
	s32 i;

	for (i = 0; i < (s32)d->field_0x4; i++) {
		void* item = ((void**)d->field_0x8)[i];
		if (fn_80136A88((CTextEntryBaseData*)item) & 2) {
			continue;
		}
		s32 type = ((s32 (*)(void*))((void**)((CTextEntryBaseData*)item)->vtable)[4])(item);
		switch (type) {
		case 4: {
			// ancho fijo (tab/salto explicito): decide cuantos "slots" de
			// avance segun el modo de alineacion (fn_801359C4(h)) y el
			// contador de columnas acumulado.
			hadFixedWidth = 1;
			(void)fn_801359C4(h);
			f32 scale = fn_8013539C(h);
			s32 cols = fn_8013540C() * 0;
			(void)cols;
			penX += tabW * scale;
			prevItem = item;
			break;
		}
		case 2: {
			// avance de glifo con bounding box: crece el maximo
			// ascent/descent acumulado si corresponde.
			f32 adv = (f32)fn_801361FC(0, 0, 0);
			penX += adv;
			if (prevItem) {
				if (maxAscent < penX) {
					maxAscent = penX;
				}
				if (maxDescent < penY) {
					maxDescent = penY;
				}
			}
			break;
		}
		case 0: {
			// setea posicion absoluta del item (fn_801342FC/fn_801342F4).
			fn_801342FC((CTextEntryCharData*)item, penX);
			u16 h16 = fn_801342F4((CTextEntryCharData*)item);
			s32 skipDispatch = 0;
			if (!(fn_80136A88((CTextEntryBaseData*)item) & 0x10)) {
				if (h16 == 0x19 || h16 == 0xab) {
					skipDispatch = 1;
				}
			}
			if (!skipDispatch && fn_801342F4((CTextEntryCharData*)item) == 0x19) {
				fn_80136A70((CTextEntryBaseData*)item, fn_80136A88((CTextEntryBaseData*)item) | 1);
			}
			penX += 2.0f;
			break;
		}
		case 6: {
			// caracter: acumula ancho segun tabla de kerning (fn_801361FC).
			f32 wA = (f32)fn_801342BC((CTextEntryCharData*)item, 0);
			f32 wB = (f32)fn_801342BC((CTextEntryCharData*)item, 1);
			maxAscent += wA;
			maxDescent += wB;
			break;
		}
		case 9: {
			// ancho fijo via fn_801342BC[0]/[1] directo (sin dispatch extra).
			maxAscent += (f32)fn_801342BC((CTextEntryCharData*)item, 0);
			maxDescent += (f32)fn_801342BC((CTextEntryCharData*)item, 1);
			break;
		}
		default:
			break;
		}
	}

	// Post-proceso: 2 loops que recorren de nuevo h->data->field_0x8[]
	// ajustando field_0x28 de cada item segun el dispatch virtual (getter
	// vtable slot 4) devuelva 1 (usa valor de tabla) o 0 (usa el maximo
	// acumulado) -- logica exacta de cada rama no verificada bit a bit.
	if (fn_80134DD0(h) & 0x100) {
		f32 accum = 0.0f;
		for (i = 0; i < (s32)d->field_0x4; i++) {
			void* item = ((void**)d->field_0x8)[i];
			s32 type = ((s32 (*)(void*))((void**)((CTextEntryBaseData*)item)->vtable)[4])(item);
			if (type == 1) {
				accum = d->field_0xdc - 0.0f;
			} else if (type == 0) {
				((CTextEntryCharData*)item)->field_0x28 += accum;
			}
		}
	}
	if (fn_80134DD0(h) & 0x10) {
		f32 accum = 0.0f;
		for (i = 0; i < (s32)d->field_0x4; i++) {
			void* item = ((void**)d->field_0x8)[i];
			s32 type = ((s32 (*)(void*))((void**)((CTextEntryBaseData*)item)->vtable)[4])(item);
			if (type == 1) {
				accum = d->field_0xdc - 0.0f;
			} else if (type == 0) {
				((CTextEntryCharData*)item)->field_0x28 += accum;
			}
		}
	}

	// Loop final: agrupa de a 3 items y, si corresponde (hadFixedWidth y el
	// ultimo grupo quedo incompleto), inserta hasta 2 marcadores (0x74
	// bytes, dispatch code 1/2) para completar el ultimo "renglon".
	s32 groupSize = 3;
	s32 lastType = 0;
	for (i = 0; i < (s32)d->field_0x4; i++) {
		void* item = ((void**)d->field_0x8)[i];
		s32 type = ((s32 (*)(void*))((void**)((CTextEntryBaseData*)item)->vtable)[4])(item);
		if (type == 4) {
			groupSize = 4;
		} else if (type == 2 && groupSize > 0) {
			groupSize--;
		}
		lastType = type;
	}
	(void)lastType;

	if (hadFixedWidth && (s32)d->field_0x4 != 0) {
		s32 pad = groupSize;
		for (i = 0; i < pad; i++) {
			CTextEntryBaseData* marker = (CTextEntryBaseData*)fn_80136C54(0x74);
			if (marker) {
				fn_8013230C(marker);
			}
			((void (*)(void*, s32))((void**)marker->vtable)[3])(marker, 1);
			fn_801335F4_insertItem(h, (s32)d->field_0x4, marker);
			fn_80136A78(marker, 1);
			fn_80136A80(marker, 0);
			insertCount++;
		}
		return 1;
	}

	return 1;
}

#pragma dont_inline on

extern "C" void fn_80134304(void* hVoid, s32 doStuff, s32 unused)
{
	TcgTextEntryHandle* h = (TcgTextEntryHandle*)hVoid;
	u32 threshold = h->data->field_0x5c;
	s32 usedSlots = 0;
	TempList* results = (TempList*)h->data->field_0x60;

	if (doStuff) {
		results->count = 0;
		f32* p18 = (f32*)fn_80135258(h);
		fn_8013545C(h);
		if (h->data->field_0x14) {
			ResultEntry* e0 = (ResultEntry*)((u8*)results->arr + 0 * 0x3c);
			usedSlots = 1;
			fn_8013460C((f32*)e0, p18);
			if (fn_801354A0(h, 0)) {
				fn_801354D4(h, (f32*)e0, (f32*)((u8*)e0 + 4));
			}
			e0->field_0x10 = lbl_804A0AA8[11];
			e0->field_0x14 = lbl_804A0AA8[12];
			e0->field_0x18 = lbl_804A0AA8[13];
			e0->field_0x1c = lbl_804A0AA8[13];
			e0->field_0x20 = 0;
			e0->field_0x24 = h->data->field_0x38;
		}
	}

	fn_80133524(h);

	if (fn_801335F4(h)) {
		s32 itemIdx;
		s32 lastId = 0;
		ContainerHandle* ch = (ContainerHandle*)h;
		for (itemIdx = 0; itemIdx < (s32)h->data->field_0x4; itemIdx++) {
			void* item = ch->list->items[itemIdx];
			if ((u32)threshold <= (u32)usedSlots) {
				continue;
			}
			ItemHandle* ih = (ItemHandle*)item;
			s32 code = ((s32(*)(void*))ih->vtable[4])(item);
			if (code == 4) {
				ResultEntry* e = (ResultEntry*)((u8*)results->arr + usedSlots * 0x3c);
				usedSlots++;
				if (doStuff) {
					memset(e, 0, 0x3c);
					e->field_0x30 = 4;
					e->field_0x28 = item;
					e->field_0x24 = h->data->field_0x38;
				}
			} else if (code == 2) {
				ResultEntry* e = (ResultEntry*)((u8*)results->arr + usedSlots * 0x3c);
				usedSlots++;
				if (doStuff) {
					memset(e, 0, 0x3c);
					e->field_0x30 = 2;
					e->field_0x28 = item;
					e->field_0x24 = h->data->field_0x38;
				}
			} else if (code == 0) {
				u16 len = fn_801342F4((CTextEntryCharData*)item);
				f32 tmpA[4];
				f32 tmpB[4];
				fn_8013460C(tmpA, (f32*)((u8*)item + 0x28));
				fn_8013460C(tmpB, (f32*)((u8*)item + 0x18));
				s32 leadingZero = fn_80134EA0(h, tmpA, tmpB, tmpA, tmpB, lbl_804A0AA8[14], lbl_804A0AA8[14]);
				ResultEntry* e = (ResultEntry*)((u8*)results->arr + usedSlots * 0x3c);
				usedSlots++;
				fn_8013460C((f32*)e, tmpA);
				fn_8013460C((f32*)((u8*)e + 0x10), tmpB);
				if (!fn_80136DA4(h)) {
					e->field_0x20 = len / 0x271;
				} else {
					e->field_0x20 = 0;
					e->field_0x30 = 0;
					e->field_0x28 = item;
					e->field_0x38 = (leadingZero == 0) ? 1 : 0;
					lastId = fn_8013652C(lastId, 0, 0xb);
				}
				e->field_0x24 = h->data->field_0x38;
			} else if (code == 7 || code == 8) {
				lastId = fn_801342BC((CTextEntryCharData*)item, 0);
			}
		}
		if (doStuff) {
			results->count = usedSlots;
			results->byteCount = usedSlots;
		}
	}
}

// fn_80134EA0: clip/remap de un rectangulo (glyph bounding box) contra los
// limites `field_0x20`/`field_0x24` y reescala UVs correspondientes. Usa el
// idiom estandar de conversion int->double de esta CPU (magic constant via
// `lbl_804A0288`) -- se escribe como cast normal `(f32)` confiando en que
// mwcc lo compila igual (Gekko no tiene fcfid en hardware). Best-effort,
// mucha aritmetica de punto flotante transcrita casi 1:1 del disasm.
extern "C" f64 lbl_804A0288;
extern "C" s32 fn_801979E0(s32 v);

#pragma dont_inline on

extern "C" s32 fn_80134EA0(void* hVoid, void* posAVoid, void* posBVoid, void* extentAVoid, void* extentBVoid, f32 scaleA, f32 scaleB)
{
	TcgTextEntryHandle* h = (TcgTextEntryHandle*)hVoid;
	f32* posA = (f32*)posAVoid;
	f32* posB = (f32*)posBVoid;
	f32* extentA = (f32*)extentAVoid;
	f32* extentB = (f32*)extentBVoid;
	f32* p18 = (f32*)fn_80135258(h);
	f32* p28 = (f32*)fn_8013545C(h);

	if (h->data->field_0x15 == 0) {
		fn_8013460C(posA, extentA);
		fn_8013460C(posB, extentB);
		posA[0] -= p28[0];
		posA[1] -= p28[1];
	} else {
		f32 s8 = extentA[0] - p28[0];
		f32 sC = extentA[1] - p28[1];
		f32 s10 = extentA[2];
		f32 s14 = extentA[3];

		f32 diff10 = s14 * lbl_804A0AA8[10];
		f32 f29 = p18[3] * lbl_804A0AA8[10] + diff10;
		f32 someVal = sC * lbl_804A0AA8[10] + diff10;
		s32 iSomeVal = (s32)someVal;
		s32 iF29 = (s32)f29;
		s32 res = fn_801979E0(iF29 - iSomeVal);
		if ((f32)res > f29 - lbl_804A0AA8[15]) {
			return 0;
		}

		f32 diff10b = s10 * lbl_804A0AA8[10];
		f32 f29b = p18[2] * lbl_804A0AA8[10] + diff10b;
		f32 someValB = s8 * lbl_804A0AA8[10] + diff10b;
		s32 iSomeValB = (s32)someValB;
		s32 iF29b = (s32)f29b;
		s32 resB = fn_801979E0(iF29b - iSomeValB);
		if ((f32)resB > f29b - lbl_804A0AA8[15]) {
			return 0;
		}

		posA[0] = s8;
		posA[1] = sC;
		posA[2] = s10;
		posA[3] = s14;

		f32 clampedX = (posA[0] >= lbl_804A0AA8[0]) ? posA[0] : lbl_804A0AA8[0];
		posA[0] = clampedX;
		posA[2] = (s14 + s8) - clampedX;
		if (clampedX + s14 > p18[2]) {
			posA[2] = p18[2] - clampedX;
		}

		f32 clampedY = (posA[1] >= lbl_804A0AA8[0]) ? posA[1] : lbl_804A0AA8[0];
		posA[1] = clampedY;
		posA[3] = (s14 + sC) - clampedY;
		if (clampedY + s14 > p18[3]) {
			posA[3] = p18[3] - clampedY;
		}

		f32 x0 = posA[0] - s8;
		x0 = x0 / s10;
		x0 = extentB[2] * x0;
		f32 destX0 = extentB[0] + x0;

		f32 y0 = posA[1] - sC;
		y0 = y0 / s14;
		y0 = extentB[3] * y0;
		f32 destY0 = extentB[1] + y0;

		f32 x1 = (posA[0] + posA[2]) - s8;
		x1 = x1 / s10;
		x1 = extentB[2] * x1;
		f32 destX0b = extentB[0] + x1;

		f32 y1 = (posA[1] + posA[3]) - sC;
		y1 = y1 / s14;
		y1 = extentB[3] * y1;
		f32 destY0b = extentB[1] + y1;

		posB[0] = destX0;
		posB[1] = destY0;
		posB[2] = destX0b - destX0;
		posB[3] = destY0b - destY0;
	}

	posA[0] += p18[0];
	posA[1] += p18[1];

	if (fn_801354A0(h, 0)) {
		fn_801354D4(h, posA, posA + 1);
	}
	fn_80135580(h);

	posB[0] /= scaleA;
	posB[1] /= scaleB;
	posB[2] /= scaleA;
	posB[3] /= scaleB;
	return 1;
}

// fn_80134664: tick de animacion/reveal del texto (avance de progreso,
// interpolacion de color RGBA, fade y hasta 2 "canales" de tween de
// posicion via keyframes). Best-effort -- funcion grande (1900 bytes) con
// varios sub-sistemas de punto flotante independientes; se preservan los
// offsets y llamadas reales confirmadas por disasm, pero varias formulas de
// interpolacion exactas (el bloque de keyframes de 0x110-0x150, el ratio
// de field_0x94/0x9c) no se verificaron bit a bit.
extern "C" void fn_80134664(TcgTextEntryHandle* h)
{
	TcgTextEntryData* d = h->data;

	if (d->field_0x84 >= d->field_0x88) {
		d->field_0x98 = d->field_0x94;
		if (!(fn_80134DD0(h) & 1)) {
			d->field_0x94 = fn_8013652C(d->field_0x94 + 0x100, 0, d->field_0x9c);
		}

		if (d->field_0x90 != 1) {
			// modo "progreso continuo": ratio = (field_0x94-field_0x98)/(field_0x9c-field_0x98)
			f32 ratio;
			if (d->field_0x9c != 0) {
				ratio = (f32)(d->field_0x94 - d->field_0x98) / (f32)(d->field_0x9c - d->field_0x98);
			} else {
				ratio = lbl_804A0AA8[15];
			}
			if (ratio > 0.0f && ratio < lbl_804A0AA8[15] && d->field_0x68) {
				d->field_0x72 = (u16)(d->field_0x72 + 0x100);
				if (d->field_0x72 > d->field_0x70) {
					d->field_0x72 -= d->field_0x70;
				}
			}
			u32* obj = (u32*)fn_80135BA4(h);
			s32 target = (s32)((f32)(d->field_0x94 - d->field_0x98) * ratio);
			if (target > (s32)obj[1]) {
				target = (s32)obj[1];
			}
			obj[2] = (u32)target;
			d->field_0xa8 = d->field_0xa4;
			d->field_0xa4 = (u32)target;
		} else {
			// modo "eventos": recorre fn_80135BA4(h)->arr[] (records de 0x3c
			// bytes) y dispara los que ya vencieron segun field_0x94.
			TempList* events = (TempList*)fn_80135BA4(h);
			s32 anyFired = 0, doNotify = 0;
			s32 i;
			for (i = 0; i < (s32)events->byteCount; i++) {
				u8* ev = (u8*)events->arr + i * 0x3c;
				if ((s32)d->field_0x94 < *(s32*)(ev + 0x2c)) {
					continue;
				}
				if ((s32)events->count - 1 <= i) {
					continue;
				}
				anyFired = i;
				u32 kind = *(u32*)(ev + 0x30);
				if (kind == 4) {
					if (*(u32*)(ev + 0x34)) {
						f32 v0 = (f32)fn_801342BC((CTextEntryCharData*)ev, 1) - lbl_804A0AA0;
						f32 v1 = (f32)fn_801342BC((CTextEntryCharData*)ev, 0);
						fn_801356BC(h, v0, (u32)v1);
					}
					if (*(u32*)(ev + 0x34) == 2) {
						f32 f30 = fn_8013539C(h);
						(void)fn_8013540C();
						f32 v1 = f30 + d->field_0xc4;
						fn_801356BC(h, v1, 0);
					}
				} else if (kind == 0) {
					doNotify = 1;
				} else if (kind == 2) {
					f32 v0 = (f32)fn_801342BC((CTextEntryCharData*)ev, 1) - lbl_804A0AA0;
					f32 v1 = (f32)fn_801342BC((CTextEntryCharData*)ev, 0);
					fn_801356BC(h, v0, (u32)v1);
				}
			}
			if (anyFired) {
				d->field_0xa8 = d->field_0xa4;
				d->field_0xa4 = (u32)anyFired;
				events->count = anyFired + 1;
				if (d->field_0x68 && doNotify) {
					d->field_0x72 = (u16)(d->field_0x72 + 0x100);
					if (d->field_0x72 > d->field_0x70) {
						d->field_0x72 -= d->field_0x70;
					}
				}
			}
		}
	}

	// Interpolacion de color RGBA (field_0x44/0x4c..0x47/0x4f -> byte
	// 0x3c-0x3f, empacado en field_0x38) segun field_0x50/0x54.
	u8* base = (u8*)d;
	u32* p50 = (u32*)(base + 0x50);
	u32* p54 = (u32*)(base + 0x54);
	if (*p50 != 0) {
		*p54 = fn_8013652C(*p54 + 0x100, 0, *p50);
		u32 t = *p54 * 0xff / *p50;
		base[0x3c] = base[0x44] + (u8)(((t * (base[0x4c] - base[0x44])) >> 8) & 0xff);
		base[0x3d] = base[0x45] + (u8)(((t * (base[0x4d] - base[0x45])) >> 8) & 0xff);
		base[0x3e] = base[0x46] + (u8)(((t * (base[0x4e] - base[0x46])) >> 8) & 0xff);
		base[0x3f] = base[0x47] + (u8)(((t * (base[0x4f] - base[0x47])) >> 8) & 0xff);
		d->field_0x38 = (base[0x3c] << 24) | (base[0x3d] << 16) | (base[0x3e] << 8) | base[0x3f];
		fn_80134304(h, 1, -1);
		if (*p54 == *p50) {
			*p50 = 0;
		}
	}

	// Fade (field_0xf4/0xf8 -> field_0x2c) via el mismo esquema de ratio.
	if (d->field_0xf8 != 0) {
		d->field_0xf4 = fn_8013652C(d->field_0xf4 + 0x100, 0, d->field_0xf8);
		f32 ratio = (f32)(d->field_0xf4) / (f32)(d->field_0xf8);
		d->field_0x2c = d->field_0xec + (d->field_0xf0 - d->field_0xec) * ratio;
		if (d->field_0xf4 == d->field_0xf8) {
			d->field_0xf8 = 0;
		}
	}

	// Auto-scroll (bit 22 de fn_80134DD0): avanza field_0x28 y lo clampea
	// contra field_0x18+field_0xcc.
	if (fn_80134DD0(h) & 0x200) {
		d->field_0x28 += d->field_0x104;
		f32 fieldCC = *(f32*)(base + 0xcc);
		if (d->field_0x28 - fieldCC > d->field_0x18 + fieldCC) {
			d->field_0x28 = lbl_804A0AA8[0];
			d->field_0x2c = lbl_804A0AA8[0];
		}
	}

	// 2 canales de tween de posicion (field_0x28/field_0x2c) via
	// keyframes en h->data + 0x100/0x120 (records de 0x38 bytes: 0x110
	// tipo, 0x118 escala, 0x120 valor, 0x128/0x130 rango, 0x138/0x140
	// limites, 0x148/0x150 offsets). best-effort, layout no confirmado
	// campo a campo.
	{
		u32 flags = fn_80134DD0(h);
		s32 ch;
		for (ch = 0; ch < 2; ch++) {
			u32 typeMask = (ch == 0) ? 4 : 8;
			u32 scaleMask = (ch == 0) ? 0x10 : 0x20;
			f32* target = (ch == 0) ? &d->field_0x28 : &d->field_0x104;
			if (!(flags & typeMask)) {
				continue;
			}
			u8* rec = (u8*)d + ch * 4;
			if (*(u32*)(rec + 0x110) > 2) {
				continue;
			}
			s32 lo = *(s32*)(rec + 0x138);
			s32 hi = *(s32*)(rec + 0x140);
			f32 scale = *(f32*)(rec + 0x118);
			if (!(flags & scaleMask)) {
				lo += *(s32*)(rec + 0x150);
				hi += *(s32*)(rec + 0x150);
				scale += *(f32*)(rec + 0x148);
			}
			f32 val = *(f32*)(rec + 0x120);
			*target = val;
			if (*(u32*)(rec + 0x110) == 0) {
				*(u32*)(rec + 0x128) &= ~typeMask;
			} else if (*(u32*)(rec + 0x110) == 1) {
				*(u32*)(rec + 0x128) &= ~typeMask;
				*target = scale;
			}
			*(u32*)(rec + 0x128) &= ~scaleMask;
			fn_80134DDC(h, flags & ~(typeMask | scaleMask));
			(void)lo;
			(void)hi;
		}
	}

	fn_801354A0(h, 0);
}

#pragma dont_inline reset
