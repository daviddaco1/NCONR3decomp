#include "types.h"
#include "m2c_macros.h"
/*
 *
 * File: darray.c
 * ---------------
 *	David Wright
 *	10/8/98
 *
 *  See darray.h for function descriptions
 */
#include "darray.h"
#include <stdlib.h>
#include <string.h>

#ifdef _MFC_MEM_DEBUG
#define _CRTDBG_MAP_ALLOC 1
#include <crtdbg.h>
#endif

#define DEF_GROWBY 8

#include "nonport.h"

// STRUCTURES
struct DArrayImplementation {
  int count, capacity;
  int elemsize;
  int growby;
  ArrayElementFreeFn elemfreefn;
  void* list; // array of elements
};

// PROTOTYPES
static void* mylsearch(const void* key, void* base, int count, int size,
                       ArrayCompareFn comparator);
static void* mybsearch(const void* elem, void* base, int num, int elemsize,
                       ArrayCompareFn comparator, int* found);
// FUNCTIONS

/* FreeElement
 * Frees the element at position N in the array
 */
static void FreeElement(DArray array, int n) {
  if (array->elemfreefn != NULL)
    array->elemfreefn(ArrayNth(array, n));
}

/* ArrayGrow
 * Reallocates the array to a new size, incresed by growby
 */
static void ArrayGrow(DArray array) {
  GS_ASSERT(array->elemsize) // sanity check -mj Oct 31st
  array->capacity += array->growby;
  array->list =
      gsirealloc(array->list, (size_t)array->capacity * array->elemsize);
  GS_ASSERT(array->list);
}

/* SetElement
 * Sets the element at pos to the contents of elem
 */
static void SetElement(DArray array, const void* elem, int pos) {
  GS_ASSERT(array) // safety check -mj Oct 31st
  GS_ASSERT(elem)
  GS_ASSERT(array->elemsize)

  memcpy(ArrayNth(array, pos), elem, (size_t)array->elemsize);
}

DArray ArrayNew(int elemSize, int numElemsToAllocate,
                ArrayElementFreeFn elemFreeFn) {
  DArray array;

  array = (DArray)gsimalloc(sizeof(struct DArrayImplementation));
  GS_ASSERT(array);
  GS_ASSERT(elemSize);
  if (numElemsToAllocate == 0)
    numElemsToAllocate = DEF_GROWBY;
  array->count = 0;
  array->capacity = numElemsToAllocate;
  ;
  array->elemsize = elemSize;
  array->growby = numElemsToAllocate;
  array->elemfreefn = elemFreeFn;
  if (array->capacity != 0) {
    array->list = gsimalloc((size_t)array->capacity * array->elemsize);
    GS_ASSERT(array->list);
  } else
    array->list = NULL;

  return array;
}

void ArrayFree(DArray array) {
  int i;

  GS_ASSERT(array);
  for (i = 0; i < array->count; i++) {
    FreeElement(array, i);
  }
  // mj to do: move these asserts into gsi_free.  maybe, depends on whether user
  // overloads them
  GS_ASSERT(array->list)
  GS_ASSERT(array)
  gsifree(array->list);
  gsifree(array);
}

/*
void *ArrayGetDataPtr(DArray array)
{
        GS_ASSERT(array);
        return array->list;
}

void ArraySetDataPtr(DArray array, void *ptr, int count, int capacity)
{
        int i;

        GS_ASSERT(array);
        if (array->list != NULL)
        {
                for (i = 0; i < array->count; i++)
                {
                        FreeElement(array, i);
                }
                gsifree(array->list);
        }
        array->list = ptr;
        array->count = count;
        array->capacity = capacity;

}
*/

int ArrayLength(const DArray array) {
  GS_ASSERT(array)
  return array->count;
}

void* ArrayNth(DArray array, int n) {
  // 2004.Nov.16.JED - modified GS_ASSERT to include "if" to add robustness
  GS_ASSERT((n >= 0) && (n < array->count));
  if (!((n >= 0) && (n < array->count)))
    return NULL;

  return (char*)array->list + array->elemsize * n;
}

/* ArrayAppend
 * Just do an Insert at the end of the array
 */
void ArrayAppend(DArray array, const void* newElem) {
  GS_ASSERT(array);
  if (array)
    ArrayInsertAt(array, newElem, array->count);
}

static inline void ArrayInsertAt(DArray array, const void* newElem, int n) {
  GS_ASSERT(array)
  GS_ASSERT((n >= 0) && (n <= array->count));

  if (array->count == array->capacity)
    ArrayGrow(array);
  array->count++;
  if (n < array->count - 1) // if we aren't appending
    memmove(ArrayNth(array, n + 1), ArrayNth(array, n),
            (size_t)(array->count - 1 - n) * array->elemsize);
  SetElement(array, newElem, n);
}

void ArrayInsertSorted(DArray array, const void* newElem,
                       ArrayCompareFn comparator) {
  int n;
  void* res;
  int found;

  GS_ASSERT(array)
  GS_ASSERT(comparator);

  res = mybsearch(newElem, array->list, array->count, array->elemsize,
                  comparator, &found);
  n = (((char*)res - (char*)array->list) / array->elemsize);
  ArrayInsertAt(array, newElem, n);
}

void ArrayRemoveAt(DArray array, int n) {
  GS_ASSERT(array)
  GS_ASSERT((n >= 0) && (n < array->count));

  if (n < array->count - 1) // if not last element
    memmove(ArrayNth(array, n), ArrayNth(array, n + 1),
            (size_t)(array->count - 1 - n) * array->elemsize);
  array->count--;
}

void ArrayDeleteAt(DArray array, int n) {
  GS_ASSERT(array)
  GS_ASSERT((n >= 0) && (n < array->count));

  FreeElement(array, n);
  ArrayRemoveAt(array, n);
}

void ArrayReplaceAt(DArray array, const void* newElem, int n) {
  GS_ASSERT(array)
  GS_ASSERT((n >= 0) && (n < array->count));

  FreeElement(array, n);
  SetElement(array, newElem, n);
}

void ArraySort(DArray array, ArrayCompareFn comparator) {
  GS_ASSERT(array)
  qsort(array->list, (size_t)array->count, (size_t)array->elemsize, comparator);
}

// GS_ASSERT will be raised by ArrayNth if fromindex out of range
int ArraySearch(DArray array, const void* key, ArrayCompareFn comparator,
                int fromIndex, int isSorted) {
  void* res;
  int found = 1;
  if (!array || array->count == 0)
    return NOT_FOUND;

  if (isSorted)
    res = mybsearch(key, ArrayNth(array, fromIndex), array->count - fromIndex,
                    array->elemsize, comparator, &found);
  else
    res = mylsearch(key, ArrayNth(array, fromIndex), array->count - fromIndex,
                    array->elemsize, comparator);
  if (res != NULL && found)
    return (((char*)res - (char*)array->list) / array->elemsize);
  else
    return NOT_FOUND;
}

/*
void ArrayMap(DArray array, ArrayMapFn fn, void *clientData)
{
        int i;

        GS_ASSERT (array)
        GS_ASSERT(fn);

        for (i = 0; i < array->count; i++)
                fn(ArrayNth(array,i), clientData);

}
*/

void ArrayMapBackwards(DArray array, ArrayMapFn fn, void* clientData) {
  int i;

  GS_ASSERT(fn);

  for (i = (array->count - 1); i >= 0; i--)
    fn(ArrayNth(array, i), clientData);
}

/*
void * ArrayMap2(DArray array, ArrayMapFn2 fn, void *clientData)
{
        int i;
        void * pcurr;

        GS_ASSERT(fn);
        GS_ASSERT(clientData);

        for (i = 0; i < array->count; i++)
        {
                pcurr = ArrayNth(array,i);
                if(!fn(pcurr, clientData))
                        return pcurr;
        }

        return NULL;
}
*/

void* ArrayMapBackwards2(DArray array, ArrayMapFn2 fn, void* clientData) {
  int i;
  void* pcurr;

  GS_ASSERT(fn);
  GS_ASSERT(clientData);

  for (i = (array->count - 1); i >= 0; i--) {
    pcurr = ArrayNth(array, i);
    if (!fn(pcurr, clientData))
      return pcurr;
  }

  return NULL;
}

void ArrayClear(DArray array) {
  int i;

  // This could be more optimal!
  //////////////////////////////
  for (i = (ArrayLength(array) - 1); i >= 0; i--)
    ArrayDeleteAt(array, i);
}

/* mylsearch
 * Implementation of a standard linear search on an array, since we
 * couldn't use lfind
 */
static void* mylsearch(const void* key, void* base, int count, int size,
                       ArrayCompareFn comparator) {
  int i;
  GS_ASSERT(key);
  GS_ASSERT(base);
  for (i = 0; i < count; i++) {
    if (comparator(key, (char*)base + size * i) == 0)
      return (char*)base + size * i;
  }
  return NULL;
}

/* mybsearch
 * Implementation of a bsearch, since its not available on all platforms
 */
static void* mybsearch(const void* elem, void* base, int num, int elemsize,
                       ArrayCompareFn comparator, int* found) {
  int L, H, I, C;

  GS_ASSERT(elem);
  GS_ASSERT(base);
  GS_ASSERT(found);

  L = 0;
  H = num - 1;
  *found = 0;
  while (L <= H) {
    I = (L + H) >> 1;
    C = comparator(((char*)base) + I * elemsize, elem);
    if (C == 0)
      *found = 1;
    if (C < 0)
      L = I + 1;
    else {
      H = I - 1;
    }
  }
  return ((char*)base) + L * elemsize;
}

extern u8 lbl_8049C5A0;
extern M2C_UNK lbl_8049C688;
extern s32 *lbl_8049DB30;
extern u8 *lbl_8049DB4C;
extern u8 *lbl_8049DB60;
extern s32 lbl_8049DB84;
extern s32 lbl_8049DB88;
extern s32 lbl_8049DB98;
s32 fn_802286F4();
s32 fn_8022954C();
s32 fn_8022EBF0();
s32 fn_8022F374();
u8 fn_8022F5F0();
void fn_802305C0();
void fn_802305C4();
void fn_80230F44();
s32 fn_8023933C();
void fn_80246ED4();
void fn_80246ED8();
s32 fn_80246FE4();
s32 fn_80249C28();
void fn_80249C44();
s32 fn_80249C58();
u8 * fn_80249E2C();
s32 fn_8024A360();
s32 fn_8024A378();
void fn_8024A3D8();
void fn_8024A3EC();
s32 fn_8024AC78();
s32 fn_8024ACA0();
s32 fn_8024ACC8();
void fn_8024ACF0();
void fn_8024AD40();
void fn_8024B300();
s8 fn_8024C6A8();
M2C_UNK fn_8024C6B0();
void fn_8024DBB4();
s32 fn_8024DC24();
s32 fn_8024DC30();
void fn_8024E16C();
s32 fn_8024E4F4();
s32 fn_8024E50C();
void fn_8024E524();
s32 fn_8024E89C();
void fn_8024E8A8();
void fn_8024E8AC();
s32 fn_8024EFCC();
void fn_8024FB10();
void fn_8024FB6C();
void fn_80251680();
void fn_802520AC();
s32 fn_80252CE8();
void fn_80253084();
M2C_UNK fn_80253090();
s32 gt2GetConnectionData();
s32 fn_8022EBF0(s32 arg0, s32 arg1) {
    if ((s32 *) lbl_8049DB30 == NULL) {
        return 0;
    }
    M2C_FIELD(lbl_8049DB30, s32 *, 0x88) = arg0;
    M2C_FIELD(lbl_8049DB30, s32 *, 0x8C) = arg1;
    return 1;
}

s32 fn_8022F374(void) {
    if ((s32 *) lbl_8049DB30 != NULL) {
        return M2C_FIELD(lbl_8049DB30, s32 *, 0x24);
    }
    return 0;
}

u8 fn_8022F5F0(s32 arg0) {
    s32 temp_r3;

    temp_r3 = gt2GetConnectionData(arg0);
    if (temp_r3 != 0) {
        return M2C_FIELD(temp_r3, u8 *, 1);
    }
    return 0xFFU;
}

void fn_802305C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8024AD40(arg0, arg1, arg2, arg3);
}

void fn_80230F44(s32 arg0, s32 arg1) {
    fn_802305C4(arg0, arg1, 0, 0xFFU);
}

s32 fn_8023933C(void) {
    return lbl_8049DB4C == NULL;
}

void fn_80246ED4(void) {

}

void fn_80246ED8(void) {

}

s32 fn_80246FE4(void) {
    return 0;
}

s32 fn_80249C28(void) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(lbl_8049DB4C, s32 *, 0x8DC);
    return (s32) ((u32) ((1 - temp_r4) | (temp_r4 - 1)) >> 0x1FU);
}

void fn_80249C44(s32 arg0) {
    memset((void *) (lbl_8049DB4C + 0x58), 0, 0x608);
}

s32 fn_80249C58(void) {
    return M2C_FIELD(lbl_8049DB4C, s32 *, 0x58);
}

u8 *fn_80249E2C(void) {
    if ((s32) M2C_FIELD(lbl_8049DB4C, s32 *, 0x58) >= 1) {
        return lbl_8049DB4C + 0x60;
    }
    return NULL;
}

s32 fn_8024A360(void) {
    return (M2C_FIELD(lbl_8049DB4C, s32 *, 0x8DC) - 2) == 0;
}

s32 fn_8024A378(u8 *arg0) {
    s32 sp8;
    u8 var_r31;

    var_r31 = 0;
    sp8 = 0;
    if (fn_8022954C(&lbl_8049C5A0, &sp8, arg0 + 8, 0x2F) > 0) {
        var_r31 = strtoul((const char *) &sp8, 0, 0xA);
    }
    return (s32) var_r31;
}

s32 fn_8024AC78(s32 arg0, s32 arg1) {
    if ((u8 *) lbl_8049DB60 == NULL) {
        return 0;
    }
    M2C_FIELD(lbl_8049DB60, s32 *, 0x800) = arg0;
    M2C_FIELD(lbl_8049DB60, s32 *, 0x810) = arg1;
    return 1;
}

s32 fn_8024ACA0(s32 arg0, s32 arg1) {
    if ((u8 *) lbl_8049DB60 == NULL) {
        return 0;
    }
    M2C_FIELD(lbl_8049DB60, s32 *, 0x804) = arg0;
    M2C_FIELD(lbl_8049DB60, s32 *, 0x814) = arg1;
    return 1;
}

s32 fn_8024ACC8(s32 arg0, s32 arg1) {
    if ((u8 *) lbl_8049DB60 == NULL) {
        return 0;
    }
    M2C_FIELD(lbl_8049DB60, s32 *, 0x80C) = arg0;
    M2C_FIELD(lbl_8049DB60, s32 *, 0x81C) = arg1;
    return 1;
}

void fn_8024ACF0(u8 *arg0) {
    lbl_8049DB60 = arg0;
    memset((void *) arg0, 0, 0x828);
    M2C_FIELD(lbl_8049DB60, s16 *, 0x820) = 0x5B9;
    if ((u8 *) lbl_8049DB60 != NULL) {
        M2C_FIELD(lbl_8049DB60, s32 *, 0x824) = 0x4E20;
    }
    fn_8024A3D8();
}

void fn_8024B300(void) {
    lbl_8049DB60 = NULL;
    fn_8024A3EC();
}

s8 fn_8024C6A8(void) {
    return (s8) &lbl_8049C688;
}

s32 fn_8024C6B0(void) {
    return (s32) OSGetAppGamename();
}

void fn_8024DBB4(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8024DC24(u32 *arg0) {
    return ((u32) *arg0 >> 0xEU) & 1;
}

s32 fn_8024DC30(u32 *arg0) {
    return ((u32) *arg0 >> 0x10U) & 1;
}

s32 fn_8024E4F4(s8 *arg0) {
    return ((((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 0xBU) & 3) - 1) == 0;
}

s32 fn_8024E50C(u32 *arg0) {
    return (((u32) *arg0 >> 0xBU) & 3) != 0;
}

void fn_8024E524(s8 *arg0) {
    fn_8024E16C(arg0, fn_802286F4());
}

s32 fn_8024E89C(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20) & 1;
}

void fn_8024E8A8(s32 arg0) {
    fn_8024E8AC((s8 *) arg0);
}

s32 fn_8024EFCC(void) {
    return lbl_8049DB84;
}

void fn_8024FB10(void) {

}

/*
Decompilation failure in function fn_8024FB38:

Unable to determine jump table for bctr instruction at unk_8022E6D8.s line 37518.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

/*
Decompilation failure in function fn_8024FB50:

Unable to determine jump table for bctr instruction at unk_8022E6D8.s line 37529.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

void fn_8024FB6C(s32 arg0) {
    M2C_FIELD(lbl_8049DB88, s32 *, 0x59B8) = 1;
    M2C_FIELD(lbl_8049DB88, s32 *, 0x59BC) = arg0;
}

void fn_80251680(void) {

}

s32 fn_80252CE8(void) {
    return lbl_8049DB98;
}

void fn_80253084(s32 arg0, s32 arg1) {
    fn_802520AC(arg0 == 0, (u8 *) arg1);
}

s32 fn_80253090(void) {
    return fn_80252224();
}

void fn_802305C4();
void fn_8024A3D8();
void fn_8024A3EC();
extern int fn_8024A47C();
extern int fn_8024A488();
void fn_8024AD40();
void fn_8024E16C();
void fn_8024E8AC();
extern int fn_8024FB38();
extern int fn_8024FB50();
void fn_802520AC();
extern int fn_80252224();
extern int fn_80252814();
extern int fn_80253098();
extern void gt2Send();

#pragma dont_inline on
int fn_8024A47C(void) {
    return fn_8024A488((s32) gt2Send);
}
#pragma dont_inline reset

#pragma dont_inline on
int fn_80252814(void) {
    fn_80253098();
    lbl_8049DB98 = 0;
    return 0;
}
#pragma dont_inline reset
