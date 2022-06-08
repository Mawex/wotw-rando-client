using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::SByte_ {
IL2CPP_REGISTER_METHOD(0x02F7CE00, void, Sort, (SByte__Array * keys, int32_t index, int32_t length, IComparer_1_System_SByte_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04744DB8, ArraySortHelper_1_System_SByte__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7D120, int32_t, BinarySearch, (SByte__Array * array, int32_t index, int32_t length, int8_t value, IComparer_1_System_SByte_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04749248, ArraySortHelper_1_System_SByte__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7D2C0, void, Sort, (SByte__Array * keys, int32_t index, int32_t length, Comparison_1_SByte_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04760340, ArraySortHelper_1_System_SByte__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7D410, int32_t, InternalBinarySearch, (SByte__Array * array, int32_t index, int32_t length, int8_t value, IComparer_1_System_SByte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7D530, void, SwapIfGreater, (SByte__Array * keys, Comparison_1_SByte_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F7D6B0, void, Swap, (SByte__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (SByte__Array * keys, int32_t left, int32_t length, Comparison_1_SByte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (SByte__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_SByte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7D730, int32_t, PickPivotAndPartition, (SByte__Array * keys, int32_t lo, int32_t hi, Comparison_1_SByte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (SByte__Array * keys, int32_t lo, int32_t hi, Comparison_1_SByte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7DAF0, void, DownHeap, (SByte__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_SByte_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7DDB0, void, InsertionSort, (SByte__Array * keys, int32_t lo, int32_t hi, Comparison_1_SByte_ * comparer));
}
