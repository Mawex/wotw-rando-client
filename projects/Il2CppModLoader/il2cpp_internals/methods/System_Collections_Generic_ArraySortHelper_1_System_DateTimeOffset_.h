using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::DateTimeOffset_ {
IL2CPP_REGISTER_METHOD(0x02FFD140, void, Sort, (DateTimeOffset__Array * keys, int32_t index, int32_t length, IComparer_1_System_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477B2A8, ArraySortHelper_1_System_DateTimeOffset__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFD460, int32_t, BinarySearch, (DateTimeOffset__Array * array, int32_t index, int32_t length, DateTimeOffset value, IComparer_1_System_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0474DAD8, ArraySortHelper_1_System_DateTimeOffset__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFD610, void, Sort, (DateTimeOffset__Array * keys, int32_t index, int32_t length, Comparison_1_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04769B70, ArraySortHelper_1_System_DateTimeOffset__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (DateTimeOffset__Array * array, int32_t index, int32_t length, DateTimeOffset value, IComparer_1_System_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (DateTimeOffset__Array * keys, Comparison_1_DateTimeOffset_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (DateTimeOffset__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (DateTimeOffset__Array * keys, int32_t left, int32_t length, Comparison_1_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (DateTimeOffset__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (DateTimeOffset__Array * keys, int32_t lo, int32_t hi, Comparison_1_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (DateTimeOffset__Array * keys, int32_t lo, int32_t hi, Comparison_1_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (DateTimeOffset__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_DateTimeOffset_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (DateTimeOffset__Array * keys, int32_t lo, int32_t hi, Comparison_1_DateTimeOffset_ * comparer));
}
