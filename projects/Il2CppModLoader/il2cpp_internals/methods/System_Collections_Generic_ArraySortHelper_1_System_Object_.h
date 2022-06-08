using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02F7BC60, void, Sort, (Object__Array * keys, int32_t index, int32_t length, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04760BB0, ArraySortHelper_1_System_Object__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7BF80, int32_t, BinarySearch, (Object__Array * array, int32_t index, int32_t length, Object * value, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04723B10, ArraySortHelper_1_System_Object__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7C120, void, Sort, (Object__Array * keys, int32_t index, int32_t length, Comparison_1_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0472E000, ArraySortHelper_1_System_Object__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7C270, int32_t, InternalBinarySearch, (Object__Array * array, int32_t index, int32_t length, Object * value, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C390, void, SwapIfGreater, (Object__Array * keys, Comparison_1_Object_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F7C510, void, Swap, (Object__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Object__Array * keys, int32_t left, int32_t length, Comparison_1_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Object__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C590, int32_t, PickPivotAndPartition, (Object__Array * keys, int32_t lo, int32_t hi, Comparison_1_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Object__Array * keys, int32_t lo, int32_t hi, Comparison_1_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7C960, void, DownHeap, (Object__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7CC20, void, InsertionSort, (Object__Array * keys, int32_t lo, int32_t hi, Comparison_1_Object_ * comparer));
}
