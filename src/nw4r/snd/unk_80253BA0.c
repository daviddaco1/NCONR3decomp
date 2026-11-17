#pragma inline_max_size(500)
#pragma inline_max_total_size(2000)
#include "darray.h"
#include <stdlib.h>
#include <string.h>

#define DEF_GROWBY 8
#include "nonport.h"

struct DArrayImplementation {
  int count, capacity;
  int elemsize;
  int growby;
  ArrayElementFreeFn elemfreefn;
  void* list;
};

static inline void* ArrayNth(DArray array, int n) {
  GS_ASSERT((n >= 0) && (n < array->count));
  if (!((n >= 0) && (n < array->count)))
    return NULL;

  return (char*)array->list + array->elemsize * n;
}

static inline int ArrayLength(const DArray array) {
  return array->count;
}

static void* mylsearch(const void* key, void* base, int count, int size,
                       ArrayCompareFn comparator);
static void* mybsearch(const void* elem, void* base, int num, int elemsize,
                       ArrayCompareFn comparator, int* found);

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

void ArrayMapBackwards(DArray array, ArrayMapFn fn, void* clientData) {
  int i;
  for (i = (array->count - 1); i >= 0; i--)
    fn(ArrayNth(array, i), clientData);
}

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


static inline void ArrayRemoveAt(DArray array, int n) {
  if (n < array->count - 1)
    memmove(ArrayNth(array, n), ArrayNth(array, n + 1),
            (size_t)(array->count - 1 - n) * array->elemsize);
  array->count--;
}

static inline void ArrayDeleteAt(DArray array, int n) {
  if (array->elemfreefn != NULL) array->elemfreefn(ArrayNth(array, n));
  ArrayRemoveAt(array, n);
}

void ArrayClear(DArray array) {
  int i;
  for (i = (ArrayLength(array) - 1); i >= 0; i--)
    ArrayDeleteAt(array, i);
}

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
