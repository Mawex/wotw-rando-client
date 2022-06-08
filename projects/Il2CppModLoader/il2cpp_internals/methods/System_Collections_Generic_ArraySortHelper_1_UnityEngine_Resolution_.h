#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine::Resolution_ {
IL2CPP_REGISTER_METHOD(0x02F6E8C0, void, Sort, (Resolution__Array * keys, int32_t index, int32_t length, IComparer_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04726890, ArraySortHelper_1_UnityEngine_Resolution__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F6EBE0, int32_t, BinarySearch, (Resolution__Array * array, int32_t index, int32_t length, Resolution value, IComparer_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04706388, ArraySortHelper_1_UnityEngine_Resolution__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F6ED90, void, Sort, (Resolution__Array * keys, int32_t index, int32_t length, Comparison_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0475F130, ArraySortHelper_1_UnityEngine_Resolution__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (Resolution__Array * array, int32_t index, int32_t length, Resolution value, IComparer_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (Resolution__Array * keys, Comparison_1_UnityEngine_Resolution_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (Resolution__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Resolution__Array * keys, int32_t left, int32_t length, Comparison_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Resolution__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (Resolution__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Resolution__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (Resolution__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UnityEngine_Resolution_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (Resolution__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Resolution_ * comparer));
}
