using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Int16_ {
IL2CPP_REGISTER_METHOD(0x02FFFB80, void, Sort, (Int16__Array * keys, int32_t index, int32_t length, IComparer_1_System_Int16_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047522B0, ArraySortHelper_1_System_Int16__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFFEA0, int32_t, BinarySearch, (Int16__Array * array, int32_t index, int32_t length, int16_t value, IComparer_1_System_Int16_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04796270, ArraySortHelper_1_System_Int16__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03000040, void, Sort, (Int16__Array * keys, int32_t index, int32_t length, Comparison_1_Int16_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04745B18, ArraySortHelper_1_System_Int16__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7FD80, int32_t, InternalBinarySearch, (Int16__Array * array, int32_t index, int32_t length, int16_t value, IComparer_1_System_Int16_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7FEA0, void, SwapIfGreater, (Int16__Array * keys, Comparison_1_Int16_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F80030, void, Swap, (Int16__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Int16__Array * keys, int32_t left, int32_t length, Comparison_1_Int16_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Int16__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Int16_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F800B0, int32_t, PickPivotAndPartition, (Int16__Array * keys, int32_t lo, int32_t hi, Comparison_1_Int16_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Int16__Array * keys, int32_t lo, int32_t hi, Comparison_1_Int16_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F80480, void, DownHeap, (Int16__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Int16_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F80750, void, InsertionSort, (Int16__Array * keys, int32_t lo, int32_t hi, Comparison_1_Int16_ * comparer));
}
