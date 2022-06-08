#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Int64_ {
IL2CPP_REGISTER_METHOD(0x03000DB0, void, Sort, (Int64__Array * keys, int32_t index, int32_t length, IComparer_1_System_Int64_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04794060, ArraySortHelper_1_System_Int64__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030010D0, int32_t, BinarySearch, (Int64__Array * array, int32_t index, int32_t length, int64_t value, IComparer_1_System_Int64_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04779990, ArraySortHelper_1_System_Int64__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03001270, void, Sort, (Int64__Array * keys, int32_t index, int32_t length, Comparison_1_Int64_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0472AD58, ArraySortHelper_1_System_Int64__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7C270, int32_t, InternalBinarySearch, (Int64__Array * array, int32_t index, int32_t length, int64_t value, IComparer_1_System_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C390, void, SwapIfGreater, (Int64__Array * keys, Comparison_1_Int64_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F7C510, void, Swap, (Int64__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Int64__Array * keys, int32_t left, int32_t length, Comparison_1_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Int64__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C590, int32_t, PickPivotAndPartition, (Int64__Array * keys, int32_t lo, int32_t hi, Comparison_1_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Int64__Array * keys, int32_t lo, int32_t hi, Comparison_1_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C960, void, DownHeap, (Int64__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7CC20, void, InsertionSort, (Int64__Array * keys, int32_t lo, int32_t hi, Comparison_1_Int64_ * comparer));
}
