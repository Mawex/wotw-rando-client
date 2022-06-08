using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Byte_ {
IL2CPP_REGISTER_METHOD(0x02FF4020, void, Sort, (Byte__Array * keys, int32_t index, int32_t length, IComparer_1_System_Byte_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047337D8, ArraySortHelper_1_System_Byte__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF4340, int32_t, BinarySearch, (Byte__Array * array, int32_t index, int32_t length, uint8_t value, IComparer_1_System_Byte_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477AD20, ArraySortHelper_1_System_Byte__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF44E0, void, Sort, (Byte__Array * keys, int32_t index, int32_t length, Comparison_1_Byte_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04716F58, ArraySortHelper_1_System_Byte__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7D410, int32_t, InternalBinarySearch, (Byte__Array * array, int32_t index, int32_t length, uint8_t value, IComparer_1_System_Byte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7D530, void, SwapIfGreater, (Byte__Array * keys, Comparison_1_Byte_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F7D6B0, void, Swap, (Byte__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Byte__Array * keys, int32_t left, int32_t length, Comparison_1_Byte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Byte__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Byte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7D730, int32_t, PickPivotAndPartition, (Byte__Array * keys, int32_t lo, int32_t hi, Comparison_1_Byte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Byte__Array * keys, int32_t lo, int32_t hi, Comparison_1_Byte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7DAF0, void, DownHeap, (Byte__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Byte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7DDB0, void, InsertionSort, (Byte__Array * keys, int32_t lo, int32_t hi, Comparison_1_Byte_ * comparer));
}
