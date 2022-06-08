#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine::RaycastHit_ {
IL2CPP_REGISTER_METHOD(0x02F6CC60, void, Sort, (RaycastHit__Array * keys, int32_t index, int32_t length, IComparer_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04783A78, ArraySortHelper_1_UnityEngine_RaycastHit__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F6CF80, int32_t, BinarySearch, (RaycastHit__Array * array, int32_t index, int32_t length, RaycastHit value, IComparer_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476DBF0, ArraySortHelper_1_UnityEngine_RaycastHit__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F6D150, void, Sort, (RaycastHit__Array * keys, int32_t index, int32_t length, Comparison_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477C090, ArraySortHelper_1_UnityEngine_RaycastHit__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F6D2A0, int32_t, InternalBinarySearch, (RaycastHit__Array * array, int32_t index, int32_t length, RaycastHit value, IComparer_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F6D420, void, SwapIfGreater, (RaycastHit__Array * keys, Comparison_1_UnityEngine_RaycastHit_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F6D630, void, Swap, (RaycastHit__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (RaycastHit__Array * keys, int32_t left, int32_t length, Comparison_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (RaycastHit__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F6D6F0, int32_t, PickPivotAndPartition, (RaycastHit__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (RaycastHit__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F6DBC0, void, DownHeap, (RaycastHit__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UnityEngine_RaycastHit_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F6DFF0, void, InsertionSort, (RaycastHit__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_RaycastHit_ * comparer));
}
