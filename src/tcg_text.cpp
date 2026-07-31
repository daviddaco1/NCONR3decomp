// Sistema de texto del motor propio del juego. Sin proyecto de referencia --
// todo via reversing directo del asm original (ver plan de fases en
// C:\Users\david\.claude\plans\arma-un-plan-para-functional-wombat.md).
//
// Clase real todavia no identificada (candidatos por RTTI cercano: CTextOne,
// CTextEntryBase). Los nombres de campo son placeholders por offset hasta
// tener evidencia real -- no renombrar en symbols.txt sin confirmar.

#include "types.h"

// Reusada por varios de los helpers de "armar lista temporal" mas abajo en
// el archivo (fn_80132430/fn_801325C8/fn_80130CCC/fn_80131BEC).
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
	u8 pad_40[0x5c - 0x40];
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
	u8 pad_a4[0xac - 0xa4];
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

void fn_801346D4(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0x14 = v;
}

u8 fn_8013468C(TcgTextEntryHandle* h)
{
	return h->data->field_0x16;
}

void fn_801346E0(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x34 = v;
}

u32 fn_80134674(TcgTextEntryHandle* h)
{
	return h->data->field_0x64;
}

void fn_80134680(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x64 = v;
}

void fn_8013522C(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0x68 = v;
}

void fn_80135238(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x6c = v;
}

void fn_80135244(TcgTextEntryHandle* h, u16 v)
{
	h->data->field_0x70 = v;
}

u16 fn_80135250(TcgTextEntryHandle* h)
{
	return h->data->field_0x70;
}

void fn_8013525C(TcgTextEntryHandle* h, u16 v)
{
	h->data->field_0x72 = v;
}

u32 fn_80135268(TcgTextEntryHandle* h)
{
	return h->data->field_0xe0;
}

void fn_80135274(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0xc8 = v;
}

u8 fn_80135280(TcgTextEntryHandle* h)
{
	return h->data->field_0xc8;
}

void fn_8013528C(TcgTextEntryHandle* h, f32 v)
{
	h->data->field_0xac = v;
}

void fn_80135298(TcgTextEntryHandle* h, f32 v)
{
	h->data->field_0xb0 = v;
}

void* fn_80134AFC(TcgTextEntryHandle* h)
{
	return &h->data->field_0x18;
}

void fn_80134CE0(TcgTextEntryHandle* h, f32 v)
{
	h->data->field_0xbc = v;
}

f32* fn_80134D00(TcgTextEntryHandle* h)
{
	return &h->data->field_0x28;
}

u32 fn_80134D28(TcgTextEntryHandle* h)
{
	return h->data->field_0x30;
}

u32 fn_8013540C(TcgTextEntryHandle* h)
{
	return h->data->field_0x248;
}

void fn_80135418(TcgTextEntryHandle* h, u32 v)
{
	if (v) {
		h->data->field_0x264 = v;
	} else {
		u32 zero = 0;
		h->data->field_0x264 = zero;
	}
}

u32 fn_8013543C(TcgTextEntryHandle* h)
{
	return h->data->field_0x264;
}

u32 fn_80135448(TcgTextEntryHandle* h)
{
	return h->data->field_0x60;
}

u32 fn_80134D34(TcgTextEntryHandle* h, u32 v)
{
	u32 old = h->data->field_0x30;
	h->data->field_0x30 = v;
	return old;
}

void fn_80134CB8(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0xb4 = a;
	h->data->field_0xb8 = b;
}

void fn_80134CCC(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0xe4 = a;
	h->data->field_0xe8 = b;
}

void fn_80134CEC(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0xc0 = a;
	h->data->field_0xc4 = b;
}

void fn_80134D64(TcgTextEntryHandle* h, u32 a, u32 b)
{
	h->data->field_0x78 = b;
	h->data->field_0x74 = a;
}

u32 fn_80134D44(TcgTextEntryHandle* h, u32* out)
{
	if (out)
		*out = h->data->field_0x78;
	return h->data->field_0x74;
}

void fn_80135388(TcgTextEntryHandle* h, u8 a, s16 b, s16 c)
{
	h->data->field_0x24c = a;
	h->data->field_0x24e = b;
	h->data->field_0x250 = c;
}

void fn_801353A4(TcgTextEntryHandle* h, u8* outA, s16* outB, s16* outC)
{
	*outA = h->data->field_0x24c;
	*outB = h->data->field_0x24e;
	*outC = h->data->field_0x250;
}

void fn_80133ED4(TcgTextEntryHandle* h, u32 add)
{
	TcgTextEntryData* d = h->data;
	if (d->field_0x84 < d->field_0x88) {
		d->field_0x84 += add;
	} else {
		d->field_0x84 = d->field_0x88;
		d->field_0x16 = d->field_0x17;
	}
}

s32 fn_80134F2C(TcgTextEntryHandle* h, u32 mode)
{
	if (mode == 1) {
		h->data->field_0xf4 = h->data->field_0xf8;
	} else {
		h->data->field_0x9c = 0;
		h->data->field_0x94 = 0;
	}
	return 0;
}

s32 fn_80135180(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x84 = 0;
	h->data->field_0x88 = v << 8;
	h->data->field_0x8c = v;
	return 1;
}

void fn_801353CC(TcgTextEntryHandle* h, u32 v)
{
	fn_8013540C(h);
	h->data->field_0x248 = v;
}

u8 fn_80134698(TcgTextEntryHandle* h, u8 v, u32 v2)
{
	u8 old = h->data->field_0x16;
	h->data->field_0x17 = v;
	fn_80135180(h, v2);
	return old;
}

u32 fn_80134EE4(TcgTextEntryHandle* h, u32 mode)
{
	if (mode == 1)
		return h->data->field_0xf4 >= h->data->field_0xf8;
	return h->data->field_0x94 >= h->data->field_0x9c;
}

} // extern "C"

extern "C" void fn_80133BA8(void* h, s32 a, s32 b);
extern "C" s32 fn_80135DD0(s32 v, s32 lo, s32 hi);

extern "C" void fn_801346EC(TcgTextEntryHandle* h, u32 v)
{
	h->data->field_0x38 = v;
	h->data->field_0x3c = (u8)(v >> 24);
	h->data->field_0x3d = (u8)(v >> 16);
	h->data->field_0x3e = (u8)(v >> 8);
	h->data->field_0x3f = (u8)v;
	fn_80133BA8(h, 1, -1);
}

extern "C" s32 fn_801352A4(TcgTextEntryHandle* h, s32 idx)
{
	return ((s32*)((u8*)h->data + 0x158))[fn_80135DD0(idx, 0, 0x1d)];
}

extern "C" s32 fn_80135340(TcgTextEntryHandle* h, s32 idx)
{
	return ((s32*)((u8*)h->data + 0x1d0))[fn_80135DD0(idx, 0, 0x1d)];
}

extern "C" void fn_80133BA8(void* h, s32 a, s32 b);

extern "C" void fn_80134BF8(TcgTextEntryHandle* h, f32 a, f32 b, f32 c, f32 d)
{
	h->data->field_0x18 = a;
	h->data->field_0x1c = b;
	h->data->field_0x20 = c;
	h->data->field_0x24 = d;
	fn_80133BA8(h, 1, -1);
}

extern "C" void fn_80135154(void* dst, void* src)
{
	struct S8 { u32 a; u8 b, c, d, e; };
	*(S8*)dst = *(S8*)src;
}

extern "C" u8 lbl_8049BAC8[8];

extern "C" void fn_80135F0C(u8* dst, s8* src)
{
	for (s32 i = 0; i < 8; i++)
		dst[i] = lbl_8049BAC8[src[i]];
}

extern "C" u32 lbl_803A5D38[10];
extern "C" s32 fn_80135DD0(s32 v, s32 lo, s32 hi);

extern "C" u32 fn_80135D90(u32 v)
{
	return lbl_803A5D38[fn_80135DD0(v, 0, 9)];
}

// Sin decompilar todavia (776 bytes) -- solo el prototipo para que los
// wrappers de arriba/abajo que la tail-callean compilen. El tail call (`b`,
// no `bl`) no depende del tipo de retorno real para generar bytes iguales.
extern "C" void fn_80133BA8(void* h, s32 a, s32 b);

extern "C" {

// fn_80134730/fn_80134C24/fn_80134D0C: contenido correcto (confirmado por
// disasm), pero quedan ~50-58% fuzzy por reordering del scheduler de -O4,p
// en la preparacion de argumentos del tail-call a fn_80133BA8 (mismo tipo de
// quirk que __fill_mem/PPCMtfpscr -- necesita decomp-permuter, no vale mas
// tiempo a mano).
void fn_80134730(TcgTextEntryHandle* h, u8 v)
{
	h->data->field_0x15 = v;
	fn_80133BA8(h, 1, -1);
}

void fn_80134C24(TcgTextEntryHandle* h, u8 v, f32 f)
{
	h->data->field_0xd8 = v;
	h->data->field_0xdc = f;
	fn_80133BA8(h, 1, -1);
}

void fn_80134D0C(TcgTextEntryHandle* h, f32 a, f32 b)
{
	h->data->field_0x28 = a;
	h->data->field_0x2c = b;
	fn_80133BA8(h, 1, -1);
}

} // extern "C"

// Tabla global estatica de bytes (bounds-checked, sin "this").
extern "C" u8 lbl_803A4A68[16];

extern "C" void fn_80135FB4(u8 v, u32 idx)
{
	if (idx <= 0xf)
		lbl_803A4A68[idx] = v;
}

extern "C" u8 fn_80135FCC(u32 idx)
{
	if (idx <= 0xf)
		return lbl_803A4A68[idx];
	return 0x20;
}

// Utilidades standalone, sin "this".
extern "C" s32 fn_80135DD0(s32 v, s32 lo, s32 hi)
{
	if (v > hi)
		return hi;
	if (v < lo)
		return lo;
	return v;
}

extern "C" void fn_80133EB0(f32* dst, f32* src)
{
	dst[0] = src[0];
	dst[1] = src[1];
	dst[2] = src[2];
	dst[3] = src[3];
}

extern "C" u8 lbl_8049BAC0;

extern "C" void fn_80135BA0()
{
	lbl_8049BAC0 = 1;
}

// CTextEntryBase (confirmada por RTTI + vtable real contra el build RNEEDA/USA, ver
// lbl_803597D0 / lbl_80359784 "CTextEntryBase" en build/RNEEDA/asm/auto_07_80345C40_data.s).
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

void fn_801362B4(CTextEntryBaseData* d, u32 v)
{
	d->field_0x0 = v;
}

void fn_80136314(CTextEntryBaseData* d, u32 v)
{
	d->field_0x8 = v;
}

void fn_8013631C(CTextEntryBaseData* d, u8 v)
{
	d->field_0x5 = v;
}

void fn_80136324(CTextEntryBaseData* d, u8 v)
{
	d->field_0x4 = v;
}

u32 fn_8013632C(CTextEntryBaseData* d)
{
	return d->field_0x8;
}

u8 fn_80136334(CTextEntryBaseData* d)
{
	return d->field_0x5;
}

u32 fn_8013633C(CTextEntryBaseData* d)
{
	return d->field_0x0;
}

} // extern "C"

// Arrays incompletos (no punteros escalares) a proposito: un `void*` extern
// cae elegible para direccionamiento SDA21 (1 instruccion) y el original usa
// @ha/@l de 2 instrucciones -- mismo bug ya visto con _eti_init_info en
// __init_cpp_exceptions.cpp.
extern "C" u32 lbl_803597D0[];
extern "C" u32 lbl_80359770[];

#pragma dont_inline on

// Constructor de CTextEntryBase: fija su propia vtable e inicializa los 3
// campos no-virtuales via las funciones ya matcheadas arriba (llamadas
// reales, no inline -- el original las deja como bl separados).
extern "C" CTextEntryBaseData* fn_801362BC(CTextEntryBaseData* obj)
{
	obj->vtable = lbl_803597D0;
	fn_80136324(obj, 1);
	fn_8013631C(obj, 0);
	fn_80136314(obj, 0);
	return obj;
}

#pragma dont_inline reset

// Constructor de CTextEntry_Code: corre el ctor base y despues pisa la
// vtable con la propia (patron estandar de C++: la base se construye
// primero con SU vtable, la derivada la sobreescribe al final).
extern "C" CTextEntryBaseData* fn_80131BB0(CTextEntryBaseData* obj)
{
	fn_801362BC(obj);
	obj->vtable = lbl_80359770;
	return obj;
}

extern "C" u32 lbl_80359728[]; // vtable de CTextEntry_Char

// Constructor de CTextEntry_Char, mismo patron que fn_80131BB0.
extern "C" CTextEntryBaseData* fn_80130C90(CTextEntryBaseData* obj)
{
	fn_801362BC(obj);
	obj->vtable = lbl_80359728;
	return obj;
}

// CTextEntry_Char (RTTI/vtable en lbl_80359728, ver constructor fn_80130BC8).
// Acceso directo a "this" (sin indireccion de handle, a diferencia de
// TcgTextEntryData) -- objeto propio de 0x38 bytes (alloc confirmado en el
// constructor). Campo 0x10 es un array indexado (fn_80131BA0/fn_80133B60
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

void fn_80130C88(CTextEntryCharData* d, u16 v)
{
	d->field_0x14 = v;
}

u16 fn_80133B98(CTextEntryCharData* d)
{
	return d->field_0x14;
}

void fn_80133BA0(CTextEntryCharData* d, u32 v)
{
	d->arr_0x10[0] = v;
}

s32 fn_80134CB0()
{
	return 0xa;
}

void fn_80131BA0(CTextEntryCharData* d, u32 idx, u32 v)
{
	d->arr_0x10[idx] = v;
}

u32 fn_80133B60(CTextEntryCharData* d, u32 idx)
{
	return d->arr_0x10[idx];
}

void fn_80133B70(CTextEntryCharData* d, f32 a, f32 b, f32 c, f32 e)
{
	d->field_0x18 = a;
	d->field_0x1c = b;
	d->field_0x20 = c;
	d->field_0x24 = e;
}

void fn_80133B84(CTextEntryCharData* d, f32 a, f32 b, f32 c, f32 e)
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
struct GlobalTable {
	s32 count;
	s32* arr;
};
extern "C" GlobalTable* lbl_8049CE78;

extern "C" s32 fn_80135768(s32 idx, u32 mode)
{
	GlobalTable* g = lbl_8049CE78;
	s32 invalid = 0;
	if (!g) {
		invalid = 1;
	} else {
		if (idx < 0) {
			invalid = 1;
		}
		if (idx >= g->count) {
			invalid = 1;
		}
		if (mode == 0 && g->arr[idx] == 0) {
			invalid = 1;
		}
	}
	if (invalid) {
		return idx;
	}
	return g->arr[idx];
}

// El resto de este archivo llama funciones ya definidas arriba
// (fn_80135DC8/fn_80134EE4/fn_80134CCC/fn_80135DD0/fn_80136270) desde otras
// funciones nuevas -- sin esto mwcc las auto-inlinea con -inline auto y el
// resultado no matchea ni de lejos (mismo gotcha ya documentado en los
// constructores de CTextEntryBase, mas arriba).
#pragma dont_inline on

extern "C" s32 fn_80135DC8(TcgTextEntryHandle* h)
{
	return fn_80135768((s32)h, 0);
}

// Contenido correcto (misma llamada, mismo booleano), pero mwcc elige el
// idiom neg/or/srwi para normalizar a 0/1 en vez del subic/subfe del
// original -- probado con != 0, ternario y u32/s32, sin cambio en ningun
// caso. Mismo tipo de quirk que el nop de __fill_mem, no depende de la
// forma del C fuente.
extern "C" s32 fn_8013593C(TcgTextEntryHandle* h)
{
	return fn_80135768((s32)h, 1) != 0;
}

// obj = fn_80135448(h) reinterpretado como puntero (mismo caso que
// fn_80134D44 -- el "getter u32" real devuelve un puntero). Sin return
// explicito al final (el original tampoco deja nada intencional en r3, solo
// lo que quedo de la ultima operacion -- el caller nunca usa el valor).
struct Obj44 {
	u8 pad_00[0x4];
	u32 field_0x4;
	u32 field_0x8;
};

extern "C" s32 fn_801351A8(TcgTextEntryHandle* h, s32 p2)
{
	Obj44* obj = (Obj44*)fn_80135448(h);
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

extern "C" s32 fn_80135968(TcgTextEntryHandle* h, u32 v)
{
	return fn_801351A8((TcgTextEntryHandle*)fn_80135DC8(h), v);
}

extern "C" u32 fn_8013599C(TcgTextEntryHandle* h)
{
	return fn_80134EE4((TcgTextEntryHandle*)fn_80135DC8(h), 0);
}

extern "C" void fn_8013616C(TcgTextEntryHandle* h, f32 a, f32 b)
{
	TcgTextEntryHandle* r = (TcgTextEntryHandle*)fn_80135DC8(h);
	if (r) {
		fn_80134CCC(r, a, b);
	}
}

// Setter simetrico a fn_80135340 (getter, offset 0x1d0). Contenido correcto,
// pero mwcc adelanta el save de r5(v)/carga del literal 0x1d ANTES del
// prologo (r30) donde el original los deja despues -- quirk de scheduler en
// la preparacion de args del `bl`, no depende de esta forma del C fuente.
extern "C" void fn_801352EC(TcgTextEntryHandle* h, s32 idx, s32 v)
{
	s32 i = fn_80135DD0(idx, 0, 0x1d);
	((s32*)((u8*)h->data + 0x1d0))[i] = v;
}

// Tabla de 0x53/0x59 bytes por entrada (strings o structs, tipo real sin
// confirmar) -- fn_80135FEC sin decompilar todavia (344 bytes), solo
// prototipo para el tail call.
extern "C" s32 fn_80135FEC(void* p, u32 v);
extern "C" u8 lbl_803A491C[];
extern "C" u8 lbl_803A47B8[];

// fn_80136144/58: contenido correcto (confirmado por disasm), pero
// mwcc elige r6/r0 para los temporales del calculo de direccion donde
// nosotros obtenemos r0/r3 -- mismo tipo de quirk de scheduler que
// __fill_mem/PPCMtfpscr, probado con varias formas de la expresion C sin
// cambio alguno. No vale mas tiempo a mano.
extern "C" s32 fn_80136144(s32 idx, u32 v)
{
	return fn_80135FEC(lbl_803A491C + idx * 0x53, v);
}

extern "C" s32 fn_80136158(s32 idx, u32 v)
{
	return fn_80135FEC(idx * 0x59 + lbl_803A47B8, v);
}

// Tabla de entradas de 0x18 bytes (offsets 0x0/0x4/0x8/0xc/0x10/0x14
// confirmados por fn_80135CD8/fn_80135D44). fn_80135BAC sin decompilar
// todavia (176 bytes) -- solo prototipo para el tail call.
extern "C" s32 fn_80135BAC(u32 v);
extern "C" u8 lbl_803A4A78[];

extern "C" s32 fn_80135CD8(s32 idx, s16 b, s16 c)
{
	u32 v = 0;
	u8* entry = lbl_803A4A78 + idx * 0x18;
	switch (c * 2 + b) {
	case 0: v = *(u32*)(entry + 0x0); break;
	case 1: v = *(u32*)(entry + 0x4); break;
	case 2: v = *(u32*)(entry + 0xc); break;
	case 3: v = *(u32*)(entry + 0x10); break;
	}
	return fn_80135BAC(v);
}

extern "C" s32 fn_80135D44(s32 idx, s32 mode)
{
	u32 v = 0;
	switch (mode) {
	case 0: {
		u8* entry = lbl_803A4A78 + idx * 0x18;
		v = *(u32*)(entry + 0x8);
		break;
	}
	case 1: {
		u8* entry = lbl_803A4A78 + idx * 0x18;
		v = *(u32*)(entry + 0x14);
		break;
	}
	}
	return fn_80135BAC(v);
}

// Validadores standalone: "this" (r3) nunca se lee, solo clampean params via
// fn_80135DD0 y descartan el resultado.
extern "C" s32 fn_80135CA8(void* unused, s32 a)
{
	fn_80135DD0((s16)a, 1, 4);
	return 0;
}

extern "C" s32 fn_80135C5C(void* unused, s32 a, s32 b)
{
	fn_80135DD0((s16)a, 1, 4);
	fn_80135DD0((s16)b, 1, 2);
	return 0;
}

// dtor_801365A0: nombre real detectado por decomp-toolkit (heuristica de
// exception table / destructor), sin decompilar todavia.
extern "C" void dtor_801365A0(void* obj);

extern "C" void* fn_80136270(void* obj, s32 flag)
{
	if (obj && (s16)flag > 0) {
		dtor_801365A0(obj);
	}
	return obj;
}

extern "C" void* fn_801361B8(void* obj, s32 flag)
{
	if (obj) {
		fn_80136270(obj, 0);
		if ((s16)flag > 0) {
			dtor_801365A0(obj);
		}
	}
	return obj;
}

extern "C" void* fn_80136214(void* obj, s32 flag)
{
	if (obj) {
		fn_80136270(obj, 0);
		if ((s16)flag > 0) {
			dtor_801365A0(obj);
		}
	}
	return obj;
}

extern "C" u32 lbl_803597F4[]; // vtable, mismo patron SDA21 que las de CTextEntryBase

struct VTablePatch24 { u8 pad_00[0x24]; void* vtable; };

// Mismo quirk de scheduler que fn_80136144/58: mwcc pisa el registro base
// (r4) para el addi@l, nosotros lo reusamos -- probado con struct real y con
// variable local intermedia, sin cambio. No vale mas tiempo a mano.
extern "C" void fn_80136344(VTablePatch24* obj)
{
	obj->vtable = lbl_803597F4;
}

extern "C" void fn_80130230(void* obj); // destructor real, sin decompilar todavia

extern "C" void* fn_80136354(void* obj, s32 flag)
{
	if (obj) {
		*(void**)((u8*)obj + 0x24) = lbl_803597F4;
		fn_80130230(obj);
		if ((s16)flag > 0) {
			dtor_801365A0(obj);
		}
	}
	return obj;
}

#pragma dont_inline reset

// Mismo gotcha de inlining: estas llaman fn_80134AFC/fn_80134BF8/fn_80134D44/
// fn_80134EE4, todas definidas arriba en este archivo.
#pragma dont_inline on

extern "C" void fn_80134B08(TcgTextEntryHandle* h, f32 a, f32 b)
{
	f32* p = (f32*)fn_80134AFC(h);
	fn_80134BF8(h, a, b, p[2], p[3]);
}

extern "C" void fn_80134B80(TcgTextEntryHandle* h, f32 c, f32 d)
{
	f32* p = (f32*)fn_80134AFC(h);
	fn_80134BF8(h, p[0], p[1], c, d);
}

extern "C" void fn_80134F60(TcgTextEntryHandle* h, f32 add, u32 v)
{
	if (!fn_80134EE4(h, 1)) {
		h->data->field_0xec = h->data->field_0xf0;
		h->data->field_0xf0 = h->data->field_0xec + add;
		h->data->field_0xf4 = 0;
		h->data->field_0xf8 = v << 8;
		h->data->field_0xfc = v;
	}
}

extern "C" void fn_80135004(TcgTextEntryHandle* h, f32 v, u32 flagBits, u32 doOr)
{
	if (doOr) {
		h->data->field_0x64 |= flagBits;
	}
	if (!fn_80134EE4(h, 1)) {
		h->data->field_0x28 = h->data->field_0xf0;
		h->data->field_0x108 = (s32)h->data->field_0x28;
		h->data->field_0x10c = (s32)h->data->field_0x2c;
		h->data->field_0x104 = v;
	}
}

// obj = fn_80134D44(h, 0) devuelve un puntero (aunque fn_80134D44 esta
// tipado u32 -- ese campo/retorno es en realidad un puntero, confirmado por
// este caller). Offsets 0x210-0x213/0x2bc de un objeto todavia sin
// identificar (probablemente una entrada de config/estilo).
extern "C" void fn_80134E24(TcgTextEntryHandle* h)
{
	if (fn_80134D44(h, 0)) {
		u8* obj = (u8*)fn_80134D44(h, 0);
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

extern "C" void fn_80134D78(TcgTextEntryHandle* h, f32* outA, f32* outB)
{
	if (fn_80134D44(h, 0)) {
		u8* obj = (u8*)fn_80134D44(h, 0);
		*(u32*)(obj + 0x2bc) = 0xEFEF;
		if (h->data->field_0x64 & 0x400) {
			*outA += *(f32*)(obj + 0x310);
			*outB += *(f32*)(obj + 0x320);
			h->data->field_0xb4 = *(f32*)(obj + 0xf0);
			h->data->field_0xb8 = *(f32*)(obj + 0x110);
		}
	}
}

#pragma dont_inline reset

// Cluster de contenedor con dispatch virtual (fn_80132AF4/fn_80132A38/etc).
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

extern "C" void fn_801365EC(void* item); // "release" del item, sin decompilar todavia

extern "C" s32 fn_80132AF4(ContainerHandle* h, u32 doFree)
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

// fn_80132A38 llama fn_80132AF4 (definida arriba) -- mismo gotcha de
// inlining, necesita su propio dont_inline (el bloque anterior ya cerro con
// reset antes de esta funcion).
#pragma dont_inline on

extern "C" u32 lbl_803597B8[]; // vtable de este objeto (offset 0x4, no 0x0)

extern "C" void* fn_80132A38(void* h, s32 flag)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	if (h) {
		*(void***)((u8*)h + 0x4) = (void**)lbl_803597B8;
		fn_80132AF4(ch, 1);
		fn_801365EC(*(void**)((u8*)ch->list->field_0x60 + 0xc));
		fn_801365EC(ch->list->field_0x60);
		fn_801365EC(ch->list->items);
		void* p0c = ch->list->field_0xc;
		if (p0c) {
			((void (*)(void*, s32))(*(void***)((u8*)p0c + 0x24))[2])(p0c, 1);
		}
		dtor_801365A0(ch->list);
		if ((s16)flag > 0) {
			dtor_801365A0(h);
		}
	}
	return h;
}

// fn_80132430 arma una TempList (struct declarada al inicio del archivo)
// parseando una tabla de records via fn_80130CCC (el parser principal de
// tags) -- ver definicion real e implementacion mas abajo (junto a
// bswap32/16).
extern "C" TempList* fn_80132430(void* ctx, s32 maxCount, void* table, void* extra);
extern "C" u8 lbl_8049CE7C;
extern "C" f32 lbl_804A0290[];

extern "C" s32 fn_80132BB0(void* h, void* p2, void* p3)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	fn_80132AF4(ch, 1);
	f32 zero = lbl_804A0290[0];
	ch->list->field_0xcc = zero;
	ch->list->field_0xd0 = zero;
	ch->list->field_0xd4 = zero;
	lbl_8049CE7C = 0;
	TempList* src = fn_80132430(h, (s32)ch->list->field_0x0, p2, p3);
	u32 count = 0;
	s32 i;
	for (i = 0; i < (s32)src->count; i++) {
		ch->list->items[count] = src->arr[i];
		count++;
	}
	ch->list->count = count;
	fn_801365EC(src->arr);
	dtor_801365A0(src);
	fn_8013525C((TcgTextEntryHandle*)h, fn_80135250((TcgTextEntryHandle*)h));
	fn_80133BA8((TcgTextEntryHandle*)h, 1, -1);
	return 1;
}

// Estructuralmente identica a fn_80132BB0 (mismo patron "reset + copiar de
// TempList temporal"), pero arma la TempList via fn_801325C8 (4 params extra
// en vez de 2). fn_801325C8 sin decompilar todavia (536 bytes).
extern "C" TempList* fn_801325C8(void* h, s32 maxCount, void** tables, void** arrB, void** arrC, s32 tableCount);

extern "C" s32 fn_80132CB4(void* h, void** tables, void** arrB, void** arrC, s32 tableCount)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	fn_80132AF4(ch, 1);
	f32 zero = lbl_804A0290[0];
	ch->list->field_0xcc = zero;
	ch->list->field_0xd0 = zero;
	ch->list->field_0xd4 = zero;
	lbl_8049CE7C = 0;
	TempList* src = fn_801325C8(h, (s32)ch->list->field_0x0, tables, arrB, arrC, tableCount);
	u32 count = 0;
	s32 i;
	for (i = 0; i < (s32)src->count; i++) {
		ch->list->items[count] = src->arr[i];
		count++;
	}
	ch->list->count = count;
	fn_801365EC(src->arr);
	dtor_801365A0(src);
	fn_8013525C((TcgTextEntryHandle*)h, fn_80135250((TcgTextEntryHandle*)h));
	fn_80133BA8((TcgTextEntryHandle*)h, 1, -1);
	return 1;
}

// Filtra/compacta el mismo `list->items` in-place: si fn_80136334(item)
// (bit 0x5 de CTextEntryBaseData) es true, dispatch virtual + descartar;
// si no, se re-empaqueta en el mismo array. Reusa fn_8013632C/fn_80136314/
// fn_80136334 (CTextEntryBaseData, ya existentes arriba).
extern "C" void fn_80132DC8(void* h)
{
	ContainerHandle* ch = (ContainerHandle*)h;
	u32 destCount = 0;
	s32 i;
	for (i = 0; i < (s32)ch->list->count; i++) {
		ItemHandle* item = (ItemHandle*)ch->list->items[i];
		if (item) {
			fn_80136314((CTextEntryBaseData*)item, fn_8013632C((CTextEntryBaseData*)item) & ~3);
			if (fn_80136334((CTextEntryBaseData*)item)) {
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

extern "C" s32 fn_80136648(TcgTextEntryHandle* h); // sin decompilar todavia

// Contenido/logica correctos (confirmado por disasm) pero 2 quirks sin
// resolver: (1) branch polarity (`beq`/`bne`) invertida sea cual sea la
// forma del if/else en C -- mwcc elige distinto sin importar la fuente; (2)
// lbl_804A0290 usa `@sda21` (1 instr) en el original pero `lis+addi` (2 instr)
// en el nuestro pese a probar array incompleto y de tamano fijo -- esto
// ultimo es decision del linker/threshold de small-data, no del C fuente.
extern "C" f32 fn_80134C40(TcgTextEntryHandle* h)
{
	if (fn_80136648(h)) {
		return lbl_804A0290[8] * h->data->field_0xb8 / lbl_804A0290[7];
	} else {
		return lbl_804A0290[6] * h->data->field_0xb8 / lbl_804A0290[7];
	}
}

// --- fn_80132430: arma una "TempList" parseando entradas de una tabla de
// records de 8 bytes (big-endian on-disk, cada record referencia un string
// que se le pasa a fn_80130CCC, el parser principal de tags de texto). No
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

extern "C" void* fn_801364F8(s32 size);
extern "C" void* fn_8013654C(s32 size);
extern "C" s32 fn_801364A0(void* table);
extern "C" s32 fn_801363C8(void* table);
extern "C" u8* fn_801363C0(void* table);
extern "C" TempList* fn_80130CCC(void* ctx, s32 maxCount, s32 len, void* str, void* extra);
extern "C" s32 fn_80130B2C(TempList* dest, s32 idx, void* item);
extern "C" void* lbl_8049CE70;
extern "C" void* lbl_8049CE74;

extern "C" TempList* fn_80132430(void* ctx, s32 maxCount, void* table, void* extra)
{
	TempList* dst = (TempList*)fn_801364F8(0x10);
	dst->origCount = maxCount;
	dst->byteCount = 0;
	dst->count = 0;
	dst->arr = (void**)fn_8013654C(maxCount * 4);

	if (!table) {
		table = lbl_8049CE70;
	} else if (!fn_801364A0(table)) {
		table = lbl_8049CE74;
	}

	s32 itemCount = 0;
	s32 lastInnerIdx = 0;
	s32 recordCount = fn_801363C8(table);
	u8* records = fn_801363C0(table);

	s32 i;
	for (i = 0; i < recordCount; i++) {
		u8* rec = records + i * 0x10;
		u32 strOff = bswap32(*(u32*)(rec + 4));
		if (strOff != 0) {
			s32 len = bswap16(*(u16*)rec);
			TempList* sub = fn_80130CCC(ctx, maxCount, len, (u8*)table + strOff, extra);
			s32 j;
			for (j = 0; j < (s32)sub->count; j++) {
				if (fn_80130B2C(dst, itemCount, sub->arr[j])) {
					itemCount++;
				}
			}
			lastInnerIdx = j;
			fn_801365EC(sub->arr);
			dtor_801365A0(sub);
		}
	}
	dst->byteCount = lastInnerIdx * 4;
	dst->count = itemCount;
	return dst;
}

// fn_801325C8: como fn_80132430 pero sobre VARIAS tablas concatenadas
// virtualmente (tableCount tablas, cada una con su propio par arrB/arrC).
// Usa fn_80131BEC (2116 bytes, la OTRA funcion gigante de parseo) en vez de
// fn_80130CCC. Best-effort -- logica general confirmada por disasm, pero
// el manejo exacto de "avanzar de tabla" (aritmetica de boundary/offset
// ajustado) no se verifico bit a bit, es la parte de mayor riesgo.
extern "C" TempList* fn_80131BEC(void* ctx, s32 maxCount, s32 len, void* str, void* extraB, void* extraC);

extern "C" TempList* fn_801325C8(void* ctx, s32 maxCount, void** tables, void** arrB, void** arrC, s32 tableCount)
{
	TempList* dst = (TempList*)fn_801364F8(0x10);
	dst->origCount = maxCount;
	dst->byteCount = 0;
	dst->count = 0;
	dst->arr = (void**)fn_8013654C(maxCount * 4);

	if (!tables[0]) {
		tables[0] = lbl_8049CE70;
	} else if (!fn_801364A0(tables[0])) {
		tables[0] = lbl_8049CE74;
	}

	s32 perTableCount[16];
	s32 totalRecords = 0;
	s32 t;
	for (t = 0; t < tableCount; t++) {
		perTableCount[t] = fn_801363C8(tables[t]);
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
			tableBase[curTable] = (u8*)fn_801363C0(tables[curTable]) + (boundary - r) * 0x10;
		}
		u8* rec = tableBase[curTable];
		u32 strOff = bswap32(*(u32*)(rec + 4));
		if (strOff != 0) {
			s32 len = bswap16(*(u16*)rec);
			TempList* sub = fn_80131BEC(ctx, maxCount, len, (u8*)tables[curTable] + strOff, arrB[curTable], arrC[curTable]);
			s32 j;
			for (j = 0; j < (s32)sub->count; j++) {
				if (fn_80130B2C(dst, itemCount, sub->arr[j])) {
					itemCount++;
				}
			}
			byteAccum += sub->byteCount;
			fn_801365EC(sub->arr);
			dtor_801365A0(sub);
		}
	}
	dst->count = itemCount;
	dst->byteCount = byteAccum;
	return dst;
}

// fn_801327E0: constructor/inicializador principal de TcgTextEntryHandle
// (h){data(0x0); vtable(0x4); ...}, mismo layout de "big object" que
// fn_80132A38. Encadena casi todos los setters ya validados arriba con
// valores constantes -- alta confianza, muy mecanico.
extern "C" void memset(void* dst, int val, s32 n);
extern "C" void fn_8013038C(void* obj, s32 v);
extern "C" void fn_8013031C(void* obj, s32 count, s32 v);
extern "C" void fn_80130290(void* obj);

// Encadena docenas de setters definidos arriba en este mismo archivo --
// sin dont_inline mwcc los auto-inlinea todos (mismo gotcha de siempre).
#pragma dont_inline on

extern "C" void* fn_801327E0(void* h, u32 p2, s32 maxCount, u32 p4)
{
	*(void***)((u8*)h + 0x4) = (void**)lbl_803597B8;
	TcgTextEntryData* data = (TcgTextEntryData*)fn_801364F8(0x268);
	*(void**)h = data;
	memset(data, 0, 0x268);
	data->field_0x10 = p2;
	data->field_0x0 = maxCount;
	data->field_0x4 = 0;
	data->field_0x8 = (u32)fn_8013654C(maxCount * 4);

	void* sub28 = fn_801364F8(0x28);
	if (sub28) {
		fn_80136344((VTablePatch24*)sub28);
		data->field_0xc = (u32)sub28;
		fn_8013038C((void*)data->field_0xc, 1);
		fn_8013031C((void*)data->field_0xc, maxCount, 0);
		fn_80130290((void*)data->field_0xc);
	}

	data->field_0x5c = p4;
	TempList* sub60 = (TempList*)fn_801364F8(0x10);
	data->field_0x60 = (u32)sub60;
	data->field_0x38 = (u32)-1;
	sub60->origCount = p4;
	sub60->count = 0;
	sub60->byteCount = 0;
	sub60->arr = (void**)fn_8013654C(p4 * 0x3c);

	TcgTextEntryHandle* th = (TcgTextEntryHandle*)h;
	fn_80134698(th, 1, 0);
	fn_80134730(th, 0);
	fn_80134BF8(th, lbl_804A0290[0], lbl_804A0290[0], lbl_804A0290[1], lbl_804A0290[2]);
	fn_80134D0C(th, lbl_804A0290[0], lbl_804A0290[0]);
	fn_80134D34(th, 8);
	fn_80134D64(th, 0, 0);
	fn_801346E0(th, 0x202020B8);
	fn_8013522C(th, 1);
	fn_80135238(th, (u32)-1);
	fn_80135244(th, 0x47e);
	if (fn_80136648(th)) {
		fn_8013528C(th, lbl_804A0290[4]);
	} else {
		fn_8013528C(th, lbl_804A0290[3]);
	}
	fn_80135298(th, lbl_804A0290[5]);
	fn_80135274(th, 1);
	fn_80134CEC(th, lbl_804A0290[0], lbl_804A0290[0]);
	fn_80134CE0(th, lbl_804A0290[6]);
	fn_80134CB8(th, lbl_804A0290[7], lbl_804A0290[7]);
	fn_80134C24(th, 0, lbl_804A0290[0]);
	return h;
}

#pragma dont_inline reset

// fn_80133BA8: recorre h->list->items, hace dispatch virtual (vtable slot 4)
// por cada uno y arma un ResultEntry (0x3c bytes, array en
// h->data->field_0x60->arr) segun el codigo devuelto por el dispatch (0/2/4
// = casos simples de memset+campos fijos; 7/8 = caso complejo con
// fn_80134744, la otra funcion grande; default = solo fn_80133B60).
// Best-effort, no se persigue el 100% -- funcion grande (776 bytes) con
// switch de 5 vias y 2 dependencias gigantes (fn_80132E98/fn_80134744)
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

extern "C" s32 fn_80132E98(TcgTextEntryHandle* h);
extern "C" s32 fn_80134744(void* h, void* posA, void* posB, void* extentA, void* extentB, f32 scaleA, f32 scaleB);

#pragma dont_inline on

extern "C" void fn_80133BA8(void* hVoid, s32 doStuff, s32 unused)
{
	TcgTextEntryHandle* h = (TcgTextEntryHandle*)hVoid;
	u32 threshold = h->data->field_0x5c;
	s32 usedSlots = 0;
	TempList* results = (TempList*)h->data->field_0x60;

	if (doStuff) {
		results->count = 0;
		f32* p18 = (f32*)fn_80134AFC(h);
		fn_80134D00(h);
		if (h->data->field_0x14) {
			ResultEntry* e0 = (ResultEntry*)((u8*)results->arr + 0 * 0x3c);
			usedSlots = 1;
			fn_80133EB0((f32*)e0, p18);
			if (fn_80134D44(h, 0)) {
				fn_80134D78(h, (f32*)e0, (f32*)((u8*)e0 + 4));
			}
			e0->field_0x10 = lbl_804A0290[11];
			e0->field_0x14 = lbl_804A0290[12];
			e0->field_0x18 = lbl_804A0290[13];
			e0->field_0x1c = lbl_804A0290[13];
			e0->field_0x20 = 0;
			e0->field_0x24 = h->data->field_0x38;
		}
	}

	fn_80132DC8(h);

	if (fn_80132E98(h)) {
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
				u16 len = fn_80133B98((CTextEntryCharData*)item);
				f32 tmpA[4];
				f32 tmpB[4];
				fn_80133EB0(tmpA, (f32*)((u8*)item + 0x28));
				fn_80133EB0(tmpB, (f32*)((u8*)item + 0x18));
				s32 leadingZero = fn_80134744(h, tmpA, tmpB, tmpA, tmpB, lbl_804A0290[14], lbl_804A0290[14]);
				ResultEntry* e = (ResultEntry*)((u8*)results->arr + usedSlots * 0x3c);
				usedSlots++;
				fn_80133EB0((f32*)e, tmpA);
				fn_80133EB0((f32*)((u8*)e + 0x10), tmpB);
				if (!fn_80136648(h)) {
					e->field_0x20 = len / 0x271;
				} else {
					e->field_0x20 = 0;
					e->field_0x30 = 0;
					e->field_0x28 = item;
					e->field_0x38 = (leadingZero == 0) ? 1 : 0;
					lastId = fn_80135DD0(lastId, 0, 0xb);
				}
				e->field_0x24 = h->data->field_0x38;
			} else if (code == 7 || code == 8) {
				lastId = fn_80133B60((CTextEntryCharData*)item, 0);
			}
		}
		if (doStuff) {
			results->count = usedSlots;
			results->byteCount = usedSlots;
		}
	}
}

// fn_80134744: clip/remap de un rectangulo (glyph bounding box) contra los
// limites `field_0x20`/`field_0x24` y reescala UVs correspondientes. Usa el
// idiom estandar de conversion int->double de esta CPU (magic constant via
// `lbl_804A0288`) -- se escribe como cast normal `(f32)` confiando en que
// mwcc lo compila igual (Gekko no tiene fcfid en hardware). Best-effort,
// mucha aritmetica de punto flotante transcrita casi 1:1 del disasm.
extern "C" f64 lbl_804A0288;
extern "C" s32 fn_80197284(s32 v);

#pragma dont_inline on

extern "C" s32 fn_80134744(void* hVoid, void* posAVoid, void* posBVoid, void* extentAVoid, void* extentBVoid, f32 scaleA, f32 scaleB)
{
	TcgTextEntryHandle* h = (TcgTextEntryHandle*)hVoid;
	f32* posA = (f32*)posAVoid;
	f32* posB = (f32*)posBVoid;
	f32* extentA = (f32*)extentAVoid;
	f32* extentB = (f32*)extentBVoid;
	f32* p18 = (f32*)fn_80134AFC(h);
	f32* p28 = (f32*)fn_80134D00(h);

	if (h->data->field_0x15 == 0) {
		fn_80133EB0(posA, extentA);
		fn_80133EB0(posB, extentB);
		posA[0] -= p28[0];
		posA[1] -= p28[1];
	} else {
		f32 s8 = extentA[0] - p28[0];
		f32 sC = extentA[1] - p28[1];
		f32 s10 = extentA[2];
		f32 s14 = extentA[3];

		f32 diff10 = s14 * lbl_804A0290[10];
		f32 f29 = p18[3] * lbl_804A0290[10] + diff10;
		f32 someVal = sC * lbl_804A0290[10] + diff10;
		s32 iSomeVal = (s32)someVal;
		s32 iF29 = (s32)f29;
		s32 res = fn_80197284(iF29 - iSomeVal);
		if ((f32)res > f29 - lbl_804A0290[15]) {
			return 0;
		}

		f32 diff10b = s10 * lbl_804A0290[10];
		f32 f29b = p18[2] * lbl_804A0290[10] + diff10b;
		f32 someValB = s8 * lbl_804A0290[10] + diff10b;
		s32 iSomeValB = (s32)someValB;
		s32 iF29b = (s32)f29b;
		s32 resB = fn_80197284(iF29b - iSomeValB);
		if ((f32)resB > f29b - lbl_804A0290[15]) {
			return 0;
		}

		posA[0] = s8;
		posA[1] = sC;
		posA[2] = s10;
		posA[3] = s14;

		f32 clampedX = (posA[0] >= lbl_804A0290[0]) ? posA[0] : lbl_804A0290[0];
		posA[0] = clampedX;
		posA[2] = (s14 + s8) - clampedX;
		if (clampedX + s14 > p18[2]) {
			posA[2] = p18[2] - clampedX;
		}

		f32 clampedY = (posA[1] >= lbl_804A0290[0]) ? posA[1] : lbl_804A0290[0];
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

	if (fn_80134D44(h, 0)) {
		fn_80134D78(h, posA, posA + 1);
	}
	fn_80134E24(h);

	posB[0] /= scaleA;
	posB[1] /= scaleB;
	posB[2] /= scaleA;
	posB[3] /= scaleB;
	return 1;
}

#pragma dont_inline reset
