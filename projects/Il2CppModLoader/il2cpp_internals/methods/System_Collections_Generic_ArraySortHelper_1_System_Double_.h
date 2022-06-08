using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Double_ {
IL2CPP_REGISTER_METHOD(0x02FFE390, void, Sort, (Double__Array * keys, int32_t index, int32_t length, IComparer_1_System_Double_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04743598, ArraySortHelper_1_System_Double__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFE6B0, int32_t, BinarySearch, (Double__Array * array, int32_t index, int32_t length, double value, IComparer_1_System_Double_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04742F50, ArraySortHelper_1_System_Double__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFE850, void, Sort, (Double__Array * keys, int32_t index, int32_t length, Comparison_1_Double_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047058E8, ArraySortHelper_1_System_Double__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFE9A0, int32_t, InternalBinarySearch, (Double__Array * array, int32_t index, int32_t length, double value, IComparer_1_System_Double_ * comparer));
IL2CPP_REGISTER_METHOD(0x02FFEAD0, void, SwapIfGreater, (Double__Array * keys, Comparison_1_Double_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02FFEC60, void, Swap, (Double__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Double__Array * keys, int32_t left, int32_t length, Comparison_1_Double_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Double__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Double_ * comparer));
IL2CPP_REGISTER_METHOD(0x02FFECE0, int32_t, PickPivotAndPartition, (Double__Array * keys, int32_t lo, int32_t hi, Comparison_1_Double_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Double__Array * keys, int32_t lo, int32_t hi, Comparison_1_Double_ * comparer));
IL2CPP_REGISTER_METHOD(0x02FFF0B0, void, DownHeap, (Double__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Double_ * comparer));
IL2CPP_REGISTER_METHOD(0x02FFF370, void, InsertionSort, (Double__Array * keys, int32_t lo, int32_t hi, Comparison_1_Double_ * comparer));
}
