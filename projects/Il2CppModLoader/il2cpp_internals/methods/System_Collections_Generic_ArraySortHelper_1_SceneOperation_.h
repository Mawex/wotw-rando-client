using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_SceneOperation_ {
IL2CPP_REGISTER_METHOD(0x02FEF030, void, Sort, (SceneOperation__Array * keys, int32_t index, int32_t length, IComparer_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04790AE8, ArraySortHelper_1_SceneOperation__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FEF350, int32_t, BinarySearch, (SceneOperation__Array * array, int32_t index, int32_t length, SceneOperation value, IComparer_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0471E5D0, ArraySortHelper_1_SceneOperation__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FEF500, void, Sort, (SceneOperation__Array * keys, int32_t index, int32_t length, Comparison_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04745050, ArraySortHelper_1_SceneOperation__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (SceneOperation__Array * array, int32_t index, int32_t length, SceneOperation value, IComparer_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (SceneOperation__Array * keys, Comparison_1_SceneOperation_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (SceneOperation__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (SceneOperation__Array * keys, int32_t left, int32_t length, Comparison_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (SceneOperation__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (SceneOperation__Array * keys, int32_t lo, int32_t hi, Comparison_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (SceneOperation__Array * keys, int32_t lo, int32_t hi, Comparison_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (SceneOperation__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_SceneOperation_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (SceneOperation__Array * keys, int32_t lo, int32_t hi, Comparison_1_SceneOperation_ * comparer));
}
