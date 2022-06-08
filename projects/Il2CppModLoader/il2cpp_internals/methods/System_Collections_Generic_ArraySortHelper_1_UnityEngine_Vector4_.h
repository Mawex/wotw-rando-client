using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine::Vector4_ {
IL2CPP_REGISTER_METHOD(0x02C89290, void, Sort, (Vector4__Array * keys, int32_t index, int32_t length, IComparer_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047762B0, ArraySortHelper_1_UnityEngine_Vector4__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C895B0, int32_t, BinarySearch, (Vector4__Array * array, int32_t index, int32_t length, Vector4 value, IComparer_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04742658, ArraySortHelper_1_UnityEngine_Vector4__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C89760, void, Sort, (Vector4__Array * keys, int32_t index, int32_t length, Comparison_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0475B580, ArraySortHelper_1_UnityEngine_Vector4__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (Vector4__Array * array, int32_t index, int32_t length, Vector4 value, IComparer_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (Vector4__Array * keys, Comparison_1_UnityEngine_Vector4_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (Vector4__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Vector4__Array * keys, int32_t left, int32_t length, Comparison_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Vector4__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (Vector4__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Vector4__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (Vector4__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UnityEngine_Vector4_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (Vector4__Array * keys, int32_t lo, int32_t hi, Comparison_1_UnityEngine_Vector4_ * comparer));
}
