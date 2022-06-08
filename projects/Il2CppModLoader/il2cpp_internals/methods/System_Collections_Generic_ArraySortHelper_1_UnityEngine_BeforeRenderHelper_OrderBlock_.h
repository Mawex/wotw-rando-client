#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine::BeforeRenderHelper_OrderBlock_ {
IL2CPP_REGISTER_METHOD(0x02F64660, void, Sort, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t index, int32_t length, IComparer_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477F5C0, ArraySortHelper_1_UnityEngine_BeforeRenderHelper_OrderBlock__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F64980, int32_t, BinarySearch, (BeforeRenderHelper_OrderBlock__Array * array, int32_t index, int32_t length, BeforeRenderHelper_OrderBlock value, IComparer_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0473AD88, ArraySortHelper_1_UnityEngine_BeforeRenderHelper_OrderBlock__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F64B30, void, Sort, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t index, int32_t length, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476A140, ArraySortHelper_1_UnityEngine_BeforeRenderHelper_OrderBlock__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (BeforeRenderHelper_OrderBlock__Array * array, int32_t index, int32_t length, BeforeRenderHelper_OrderBlock value, IComparer_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (BeforeRenderHelper_OrderBlock__Array * keys, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (BeforeRenderHelper_OrderBlock__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t left, int32_t length, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (BeforeRenderHelper_OrderBlock__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_BeforeRenderHelper_OrderBlock_ * comparer));
}
