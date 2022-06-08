using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_FloatStateMap_Mapping_ {
IL2CPP_REGISTER_METHOD(0x02F32C60, void, Sort, (FloatStateMap_Mapping__Array * keys, int32_t index, int32_t length, IComparer_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0474DFB8, ArraySortHelper_1_FloatStateMap_Mapping__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F32F80, int32_t, BinarySearch, (FloatStateMap_Mapping__Array * array, int32_t index, int32_t length, FloatStateMap_Mapping value, IComparer_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476E868, ArraySortHelper_1_FloatStateMap_Mapping__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F33130, void, Sort, (FloatStateMap_Mapping__Array * keys, int32_t index, int32_t length, Comparison_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0473DA48, ArraySortHelper_1_FloatStateMap_Mapping__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C884A0, int32_t, InternalBinarySearch, (FloatStateMap_Mapping__Array * array, int32_t index, int32_t length, FloatStateMap_Mapping value, IComparer_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C88650, void, SwapIfGreater, (FloatStateMap_Mapping__Array * keys, Comparison_1_FloatStateMap_Mapping_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C88810, void, Swap, (FloatStateMap_Mapping__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (FloatStateMap_Mapping__Array * keys, int32_t left, int32_t length, Comparison_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (FloatStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C888B0, int32_t, PickPivotAndPartition, (FloatStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, Comparison_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (FloatStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, Comparison_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C88CE0, void, DownHeap, (FloatStateMap_Mapping__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_FloatStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89050, void, InsertionSort, (FloatStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, Comparison_1_FloatStateMap_Mapping_ * comparer));
}
