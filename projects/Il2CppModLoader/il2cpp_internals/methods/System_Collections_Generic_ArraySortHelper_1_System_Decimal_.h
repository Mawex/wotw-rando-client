using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Decimal_ {
IL2CPP_REGISTER_METHOD(0x02FFD760, void, Sort, (Decimal__Array * keys, int32_t index, int32_t length, IComparer_1_System_Decimal_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04744160, ArraySortHelper_1_System_Decimal__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFDA80, int32_t, BinarySearch, (Decimal__Array * array, int32_t index, int32_t length, Decimal value, IComparer_1_System_Decimal_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04723AD0, ArraySortHelper_1_System_Decimal__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FFDC30, void, Sort, (Decimal__Array * keys, int32_t index, int32_t length, Comparison_1_Decimal_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04795F88, ArraySortHelper_1_System_Decimal__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (Decimal__Array * array, int32_t index, int32_t length, Decimal value, IComparer_1_System_Decimal_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (Decimal__Array * keys, Comparison_1_Decimal_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (Decimal__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Decimal__Array * keys, int32_t left, int32_t length, Comparison_1_Decimal_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Decimal__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Decimal_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (Decimal__Array * keys, int32_t lo, int32_t hi, Comparison_1_Decimal_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Decimal__Array * keys, int32_t lo, int32_t hi, Comparison_1_Decimal_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (Decimal__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Decimal_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (Decimal__Array * keys, int32_t lo, int32_t hi, Comparison_1_Decimal_ * comparer));
}
