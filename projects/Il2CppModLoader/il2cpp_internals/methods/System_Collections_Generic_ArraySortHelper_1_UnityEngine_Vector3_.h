#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine::Vector3_ {
IL2CPP_REGISTER_METHOD(0x02C87E80, void, Sort, (Vector3__Array * keys, int32_t index, int32_t length, IComparer_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0474CDA8, ArraySortHelper_1_UnityEngine_Vector3__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C881A0, int32_t, BinarySearch, (Vector3__Array * array, int32_t index, int32_t length, Vector3 value, IComparer_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0473E060, ArraySortHelper_1_UnityEngine_Vector3__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C88350, void, Sort, (Vector3__Array * keys, int32_t index, int32_t length, Comparison_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04766CA0, ArraySortHelper_1_UnityEngine_Vector3__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (Vector3__Array * array, int32_t index, int32_t length, Vector3 value, IComparer_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (Vector3__Array * keys, Comparison_1_UnityEngine_Vector3_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (Vector3__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Vector3__Array * keys, int32_t left, int32_t length, Comparison_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Vector3__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (Vector3__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Vector3__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (Vector3__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (Vector3__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector3_ * comparer));
}
