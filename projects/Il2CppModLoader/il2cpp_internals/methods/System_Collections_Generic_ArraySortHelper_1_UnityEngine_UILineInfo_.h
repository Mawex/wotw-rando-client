using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine::UILineInfo_ {
IL2CPP_REGISTER_METHOD(0x02F6F500, void, Sort, (UILineInfo__Array * keys, int32_t index, int32_t length, IComparer_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04727540, ArraySortHelper_1_UnityEngine_UILineInfo__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F6F820, int32_t, BinarySearch, (UILineInfo__Array * array, int32_t index, int32_t length, UILineInfo value, IComparer_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0471FCE8, ArraySortHelper_1_UnityEngine_UILineInfo__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F6F9D0, void, Sort, (UILineInfo__Array * keys, int32_t index, int32_t length, Comparison_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04729718, ArraySortHelper_1_UnityEngine_UILineInfo__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (UILineInfo__Array * array, int32_t index, int32_t length, UILineInfo value, IComparer_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (UILineInfo__Array * keys, Comparison_1_UnityEngine_UILineInfo_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (UILineInfo__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (UILineInfo__Array * keys, int32_t left, int32_t length, Comparison_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (UILineInfo__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (UILineInfo__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (UILineInfo__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (UILineInfo__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UnityEngine_UILineInfo_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (UILineInfo__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_UILineInfo_ * comparer));
}
