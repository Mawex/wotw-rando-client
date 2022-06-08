using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Single_ {
IL2CPP_REGISTER_METHOD(0x02F7DF90, void, Sort, (Single__Array * keys, int32_t index, int32_t length, IComparer_1_System_Single_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04784180, ArraySortHelper_1_System_Single__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7E2B0, int32_t, BinarySearch, (Single__Array * array, int32_t index, int32_t length, float value, IComparer_1_System_Single_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476DBF8, ArraySortHelper_1_System_Single__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7E450, void, Sort, (Single__Array * keys, int32_t index, int32_t length, Comparison_1_Single_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04773058, ArraySortHelper_1_System_Single__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7E5A0, int32_t, InternalBinarySearch, (Single__Array * array, int32_t index, int32_t length, float value, IComparer_1_System_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7E6D0, void, SwapIfGreater, (Single__Array * keys, Comparison_1_Single_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F7E860, void, Swap, (Single__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Single__Array * keys, int32_t left, int32_t length, Comparison_1_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Single__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7E8E0, int32_t, PickPivotAndPartition, (Single__Array * keys, int32_t lo, int32_t hi, Comparison_1_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Single__Array * keys, int32_t lo, int32_t hi, Comparison_1_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7ECB0, void, DownHeap, (Single__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7EF70, void, InsertionSort, (Single__Array * keys, int32_t lo, int32_t hi, Comparison_1_Single_ * comparer));
}
