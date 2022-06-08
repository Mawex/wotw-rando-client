using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_ByteStateMap_Mapping_ {
IL2CPP_REGISTER_METHOD(0x02F2BED0, void, Sort, (ByteStateMap_Mapping__Array * keys, int32_t index, int32_t length, IComparer_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477DF10, ArraySortHelper_1_ByteStateMap_Mapping__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2C1F0, int32_t, BinarySearch, (ByteStateMap_Mapping__Array * array, int32_t index, int32_t length, ByteStateMap_Mapping value, IComparer_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04726D20, ArraySortHelper_1_ByteStateMap_Mapping__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2C390, void, Sort, (ByteStateMap_Mapping__Array * keys, int32_t index, int32_t length, Comparison_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0472D908, ArraySortHelper_1_ByteStateMap_Mapping__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (ByteStateMap_Mapping__Array * array, int32_t index, int32_t length, ByteStateMap_Mapping value, IComparer_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (ByteStateMap_Mapping__Array * keys, Comparison_1_ByteStateMap_Mapping_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (ByteStateMap_Mapping__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (ByteStateMap_Mapping__Array * keys, int32_t left, int32_t length, Comparison_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, Comparison_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, Comparison_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (ByteStateMap_Mapping__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_ByteStateMap_Mapping_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (ByteStateMap_Mapping__Array * keys, int32_t lo, int32_t hi, Comparison_1_ByteStateMap_Mapping_ * comparer));
}
