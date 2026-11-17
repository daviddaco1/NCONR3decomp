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

static inline void FreeElement(DArray array, int n) {
  if (array->elemfreefn != NULL)
    array->elemfreefn(ArrayNth(array, n));
}

static inline void SetElement(DArray array, const void* elem, int pos) {
  GS_ASSERT(array);
  GS_ASSERT(elem);
  GS_ASSERT(array->elemsize);

  memcpy(ArrayNth(array, pos), elem, (size_t)array->elemsize);
}

void ArrayRemoveAt(DArray array, int n) {
  GS_ASSERT(array);
  GS_ASSERT((n >= 0) && (n < array->count));

  if (n < array->count - 1)
    memmove(ArrayNth(array, n), ArrayNth(array, n + 1),
            (size_t)(array->count - 1 - n) * array->elemsize);
  array->count--;
}

void ArrayDeleteAt(DArray array, int n) {
  GS_ASSERT(array);
  GS_ASSERT((n >= 0) && (n < array->count));

  FreeElement(array, n);
  ArrayRemoveAt(array, n);
}

void ArrayReplaceAt(DArray array, const void* newElem, int n) {
  GS_ASSERT(array);
  GS_ASSERT((n >= 0) && (n < array->count));

  FreeElement(array, n);
  SetElement(array, newElem, n);
}

void ArraySort(DArray array, ArrayCompareFn comparator) {
  GS_ASSERT(array);
  qsort(array->list, (size_t)array->count, (size_t)array->elemsize, comparator);
}
