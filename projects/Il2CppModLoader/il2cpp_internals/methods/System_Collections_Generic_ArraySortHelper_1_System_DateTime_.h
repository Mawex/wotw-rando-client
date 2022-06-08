#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::DateTime_ {
IL2CPP_REGISTER_METHOD(0x02FFCB30, void, Sort, (DateTime__Array * keys, int32_t index, int32_t length, IComparer_1_System_DateTime_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477EFA0, ArraySortHelper_1_System_DateTime__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFCE50, int32_t, BinarySearch, (DateTime__Array * array, int32_t index, int32_t length, DateTime value, IComparer_1_System_DateTime_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04718CD8, ArraySortHelper_1_System_DateTime__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFCFF0, void, Sort, (DateTime__Array * keys, int32_t index, int32_t length, Comparison_1_DateTime_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0471A138, ArraySortHelper_1_System_DateTime__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (DateTime__Array * array, int32_t index, int32_t length, DateTime value, IComparer_1_System_DateTime_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (DateTime__Array * keys, Comparison_1_DateTime_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (DateTime__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (DateTime__Array * keys, int32_t left, int32_t length, Comparison_1_DateTime_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (DateTime__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_DateTime_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (DateTime__Array * keys, int32_t lo, int32_t hi, Comparison_1_DateTime_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (DateTime__Array * keys, int32_t lo, int32_t hi, Comparison_1_DateTime_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (DateTime__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_DateTime_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (DateTime__Array * keys, int32_t lo, int32_t hi, Comparison_1_DateTime_ * comparer));
}
