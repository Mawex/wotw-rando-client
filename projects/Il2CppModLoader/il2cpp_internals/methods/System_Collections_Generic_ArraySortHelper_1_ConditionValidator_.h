#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_ConditionValidator_ {
IL2CPP_REGISTER_METHOD(0x02F2EC10, void, Sort, (ConditionValidator__Array * keys, int32_t index, int32_t length, IComparer_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04766630, ArraySortHelper_1_ConditionValidator__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2EF30, int32_t, BinarySearch, (ConditionValidator__Array * array, int32_t index, int32_t length, ConditionValidator value, IComparer_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04706220, ArraySortHelper_1_ConditionValidator__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2F0E0, void, Sort, (ConditionValidator__Array * keys, int32_t index, int32_t length, Comparison_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04750300, ArraySortHelper_1_ConditionValidator__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (ConditionValidator__Array * array, int32_t index, int32_t length, ConditionValidator value, IComparer_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (ConditionValidator__Array * keys, Comparison_1_ConditionValidator_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (ConditionValidator__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (ConditionValidator__Array * keys, int32_t left, int32_t length, Comparison_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (ConditionValidator__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (ConditionValidator__Array * keys, int32_t lo, int32_t hi, Comparison_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (ConditionValidator__Array * keys, int32_t lo, int32_t hi, Comparison_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (ConditionValidator__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_ConditionValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (ConditionValidator__Array * keys, int32_t lo, int32_t hi, Comparison_1_ConditionValidator_ * comparer));
}
