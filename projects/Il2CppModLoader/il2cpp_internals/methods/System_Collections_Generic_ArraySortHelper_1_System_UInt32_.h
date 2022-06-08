using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::UInt32_ {
IL2CPP_REGISTER_METHOD(0x02F80930, void, Sort, (UInt32__Array * keys, int32_t index, int32_t length, IComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04738D40, ArraySortHelper_1_System_UInt32__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F80C50, int32_t, BinarySearch, (UInt32__Array * array, int32_t index, int32_t length, uint32_t value, IComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04748E40, ArraySortHelper_1_System_UInt32__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F80DF0, void, Sort, (UInt32__Array * keys, int32_t index, int32_t length, Comparison_1_UInt32_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04779CA8, ArraySortHelper_1_System_UInt32__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F80F40, int32_t, InternalBinarySearch, (UInt32__Array * array, int32_t index, int32_t length, uint32_t value, IComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F81060, void, SwapIfGreater, (UInt32__Array * keys, Comparison_1_UInt32_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F811E0, void, Swap, (UInt32__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (UInt32__Array * keys, int32_t left, int32_t length, Comparison_1_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (UInt32__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F81260, int32_t, PickPivotAndPartition, (UInt32__Array * keys, int32_t lo, int32_t hi, Comparison_1_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (UInt32__Array * keys, int32_t lo, int32_t hi, Comparison_1_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F81610, void, DownHeap, (UInt32__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F818D0, void, InsertionSort, (UInt32__Array * keys, int32_t lo, int32_t hi, Comparison_1_UInt32_ * comparer));
}
