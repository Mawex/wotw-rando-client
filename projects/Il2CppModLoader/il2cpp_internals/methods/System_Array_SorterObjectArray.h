#include <interception_macros.h>

namespace app::methods::System::Array_SorterObjectArray {
IL2CPP_REGISTER_METHOD(0x001E14D0, void, __ctor, (Array_SorterObjectArray__Boxed * __this, Object__Array * keys, Object__Array * items, IComparer * comparer));
IL2CPP_REGISTER_METHOD(0x001E14E0, void, SwapIfGreaterWithItems, (Array_SorterObjectArray__Boxed * __this, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x001E14F0, void, Swap, (Array_SorterObjectArray__Boxed * __this, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x001E1500, void, Sort, (Array_SorterObjectArray__Boxed * __this, int32_t left, int32_t length));
IL2CPP_REGISTER_METHOD(0x001E1500, void, IntrospectiveSort, (Array_SorterObjectArray__Boxed * __this, int32_t left, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x047022F8, Array_SorterObjectArray_IntrospectiveSort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E1510, void, IntroSort, (Array_SorterObjectArray__Boxed * __this, int32_t lo, int32_t hi, int32_t depthLimit));
IL2CPP_REGISTER_METHOD(0x001E1520, int32_t, PickPivotAndPartition, (Array_SorterObjectArray__Boxed * __this, int32_t lo, int32_t hi));
IL2CPP_REGISTER_METHOD(0x001E1530, void, Heapsort, (Array_SorterObjectArray__Boxed * __this, int32_t lo, int32_t hi));
IL2CPP_REGISTER_METHOD(0x001E1540, void, DownHeap, (Array_SorterObjectArray__Boxed * __this, int32_t i, int32_t n, int32_t lo));
IL2CPP_REGISTER_METHOD(0x001E1550, void, InsertionSort, (Array_SorterObjectArray__Boxed * __this, int32_t lo, int32_t hi));
}
