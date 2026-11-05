#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long size_t;
void* memmove(void* dest, const void* src, size_t n);

typedef void (*ArrayElementFreeFn)(void* elem);
typedef int (*ArrayCompareFn)(const void* entry1, const void* entry2);
typedef void (*ArrayMapFn)(void* elem, void* clientData);
typedef int (*ArrayMapFn2)(void* elem, void* clientData);

struct DArrayImplementation {
  int count;
  int capacity;
  int elemsize;
  int growby;
  ArrayElementFreeFn elemfreefn;
  void* list;
};
typedef struct DArrayImplementation* DArray;

static inline void* ArrayNth(DArray array, int n) {
  if (!((n >= 0) && (n < array->count)))
    return (void*)0;

  return (char*)array->list + array->elemsize * n;
}

static inline void FreeElement(DArray array, int n) {
  if (array->elemfreefn != (void*)0)
    array->elemfreefn(ArrayNth(array, n));
}

static inline void ArrayRemoveAt(DArray array, int n) {
  if (n < array->count - 1)
    memmove(ArrayNth(array, n), ArrayNth(array, n + 1),
            (size_t)(array->count - 1 - n) * array->elemsize);
  array->count--;
}

static inline void ArrayDeleteAt(DArray array, int n) {
  FreeElement(array, n);
  ArrayRemoveAt(array, n);
}

static inline int ArrayLength(const DArray array) {
  return array->count;
}

static inline void* mylsearch(const void* key, void* base, int count, int size,
                              ArrayCompareFn comparator) {
  int i;
  for (i = 0; i < count; i++) {
    if (comparator(key, (char*)base + size * i) == 0)
      return (char*)base + size * i;
  }
  return (void*)0;
}

static inline void* mybsearch(const void* elem, void* base, int num, int elemsize,
                              ArrayCompareFn comparator, int* found) {
  int L, H, I, C;

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

int fn_80253BA0(DArray array, const void* key, ArrayCompareFn comparator,
                int fromIndex, int isSorted) {
  void* res;
  int found = 1;
  if (!array || array->count == 0)
    return -1;

  if (isSorted)
    res = mybsearch(key, ArrayNth(array, fromIndex), array->count - fromIndex,
                    array->elemsize, comparator, &found);
  else
    res = mylsearch(key, ArrayNth(array, fromIndex), array->count - fromIndex,
                    array->elemsize, comparator);
  if (res != (void*)0 && found)
    return (((char*)res - (char*)array->list) / array->elemsize);
  else
    return -1;
}

void fn_80253D38(DArray array, ArrayMapFn fn, void* clientData) {
  int i;
  for (i = (array->count - 1); i >= 0; i--)
    fn(ArrayNth(array, i), clientData);
}

void* fn_80253DD4(DArray array, ArrayMapFn2 fn, void* clientData) {
  int i;
  void* pcurr;

  for (i = (array->count - 1); i >= 0; i--) {
    pcurr = ArrayNth(array, i);
    if (!fn(pcurr, clientData))
      return pcurr;
  }

  return (void*)0;
}

void fn_80253E78(DArray array) {
  int i;
  for (i = (ArrayLength(array) - 1); i >= 0; i--)
    ArrayDeleteAt(array, i);
}

#ifdef __cplusplus
}
#endif
