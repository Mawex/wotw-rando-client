using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_Datadog_ThresholdItem_ {
IL2CPP_REGISTER_METHOD(0x02F2F230, void, Sort, (Datadog_ThresholdItem__Array * keys, int32_t index, int32_t length, IComparer_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047468D8, ArraySortHelper_1_Datadog_ThresholdItem__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2F550, int32_t, BinarySearch, (Datadog_ThresholdItem__Array * array, int32_t index, int32_t length, Datadog_ThresholdItem value, IComparer_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04763000, ArraySortHelper_1_Datadog_ThresholdItem__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2F700, void, Sort, (Datadog_ThresholdItem__Array * keys, int32_t index, int32_t length, Comparison_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04746338, ArraySortHelper_1_Datadog_ThresholdItem__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (Datadog_ThresholdItem__Array * array, int32_t index, int32_t length, Datadog_ThresholdItem value, IComparer_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (Datadog_ThresholdItem__Array * keys, Comparison_1_Datadog_ThresholdItem_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (Datadog_ThresholdItem__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Datadog_ThresholdItem__Array * keys, int32_t left, int32_t length, Comparison_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, Comparison_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, Comparison_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (Datadog_ThresholdItem__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Datadog_ThresholdItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (Datadog_ThresholdItem__Array * keys, int32_t lo, int32_t hi, Comparison_1_Datadog_ThresholdItem_ * comparer));
}
