#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::UInt64_ {
IL2CPP_REGISTER_METHOD(0x02F81AB0, void, Sort, (UInt64__Array * keys, int32_t index, int32_t length, IComparer_1_System_UInt64_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04712D40, ArraySortHelper_1_System_UInt64__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F81DD0, int32_t, BinarySearch, (UInt64__Array * array, int32_t index, int32_t length, uint64_t value, IComparer_1_System_UInt64_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0473BC30, ArraySortHelper_1_System_UInt64__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F81F70, void, Sort, (UInt64__Array * keys, int32_t index, int32_t length, Comparison_1_UInt64_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047882D0, ArraySortHelper_1_System_UInt64__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7C270, int32_t, InternalBinarySearch, (UInt64__Array * array, int32_t index, int32_t length, uint64_t value, IComparer_1_System_UInt64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C390, void, SwapIfGreater, (UInt64__Array * keys, Comparison_1_UInt64_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F7C510, void, Swap, (UInt64__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (UInt64__Array * keys, int32_t left, int32_t length, Comparison_1_UInt64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (UInt64__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UInt64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C590, int32_t, PickPivotAndPartition, (UInt64__Array * keys, int32_t lo, int32_t hi, Comparison_1_UInt64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (UInt64__Array * keys, int32_t lo, int32_t hi, Comparison_1_UInt64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C960, void, DownHeap, (UInt64__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UInt64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7CC20, void, InsertionSort, (UInt64__Array * keys, int32_t lo, int32_t hi, Comparison_1_UInt64_ * comparer));
}
