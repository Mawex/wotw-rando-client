#include <interception_macros.h>

namespace app::methods::System::Array_SorterGenericArray {
IL2CPP_REGISTER_METHOD(0x001E1420, void, __ctor, (Array_SorterGenericArray__Boxed * __this, Array * keys, Array * items, IComparer * comparer));
IL2CPP_REGISTER_METHOD(0x001E1430, void, SwapIfGreaterWithItems, (Array_SorterGenericArray__Boxed * __this, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x001E1440, void, Swap, (Array_SorterGenericArray__Boxed * __this, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x001E1450, void, Sort, (Array_SorterGenericArray__Boxed * __this, int32_t left, int32_t length));
IL2CPP_REGISTER_METHOD(0x001E1450, void, IntrospectiveSort, (Array_SorterGenericArray__Boxed * __this, int32_t left, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x04737F00, Array_SorterGenericArray_IntrospectiveSort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E1460, void, IntroSort, (Array_SorterGenericArray__Boxed * __this, int32_t lo, int32_t hi, int32_t depthLimit));
IL2CPP_REGISTER_METHOD(0x001E1470, int32_t, PickPivotAndPartition, (Array_SorterGenericArray__Boxed * __this, int32_t lo, int32_t hi));
IL2CPP_REGISTER_METHOD(0x001E1480, void, Heapsort, (Array_SorterGenericArray__Boxed * __this, int32_t lo, int32_t hi));
IL2CPP_REGISTER_METHOD(0x001E1490, void, DownHeap, (Array_SorterGenericArray__Boxed * __this, int32_t i, int32_t n, int32_t lo));
IL2CPP_REGISTER_METHOD(0x001E14A0, void, InsertionSort, (Array_SorterGenericArray__Boxed * __this, int32_t lo, int32_t hi));
}
