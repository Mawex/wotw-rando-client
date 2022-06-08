#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine::Vector2_ {
IL2CPP_REGISTER_METHOD(0x02C86500, void, Sort, (Vector2__Array * keys, int32_t index, int32_t length, IComparer_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04723FC8, ArraySortHelper_1_UnityEngine_Vector2__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C86820, int32_t, BinarySearch, (Vector2__Array * array, int32_t index, int32_t length, Vector2 value, IComparer_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04740AB0, ArraySortHelper_1_UnityEngine_Vector2__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C869D0, void, Sort, (Vector2__Array * keys, int32_t index, int32_t length, Comparison_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04736198, ArraySortHelper_1_UnityEngine_Vector2__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C86B20, int32_t, InternalBinarySearch, (Vector2__Array * array, int32_t index, int32_t length, Vector2 value, IComparer_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86C60, void, SwapIfGreater, (Vector2__Array * keys, Comparison_1_UnityEngine_Vector2_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C86E20, void, Swap, (Vector2__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Vector2__Array * keys, int32_t left, int32_t length, Comparison_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Vector2__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87320, int32_t, PickPivotAndPartition, (Vector2__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Vector2__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87900, void, DownHeap, (Vector2__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UnityEngine_Vector2_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87C30, void, InsertionSort, (Vector2__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector2_ * comparer));
}
