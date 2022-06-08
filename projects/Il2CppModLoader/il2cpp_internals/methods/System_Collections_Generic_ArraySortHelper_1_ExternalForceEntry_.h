using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_ExternalForceEntry_ {
IL2CPP_REGISTER_METHOD(0x02F316F0, void, Sort, (ExternalForceEntry__Array * keys, int32_t index, int32_t length, IComparer_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04743D38, ArraySortHelper_1_ExternalForceEntry__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F31A10, int32_t, BinarySearch, (ExternalForceEntry__Array * array, int32_t index, int32_t length, ExternalForceEntry value, IComparer_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476A7C0, ArraySortHelper_1_ExternalForceEntry__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F31BE0, void, Sort, (ExternalForceEntry__Array * keys, int32_t index, int32_t length, Comparison_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04781DB0, ArraySortHelper_1_ExternalForceEntry__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F31D30, int32_t, InternalBinarySearch, (ExternalForceEntry__Array * array, int32_t index, int32_t length, ExternalForceEntry value, IComparer_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F31EA0, void, SwapIfGreater, (ExternalForceEntry__Array * keys, Comparison_1_ExternalForceEntry_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F32090, void, Swap, (ExternalForceEntry__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (ExternalForceEntry__Array * keys, int32_t left, int32_t length, Comparison_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (ExternalForceEntry__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F32150, int32_t, PickPivotAndPartition, (ExternalForceEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (ExternalForceEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F325F0, void, DownHeap, (ExternalForceEntry__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_ExternalForceEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F329C0, void, InsertionSort, (ExternalForceEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_ExternalForceEntry_ * comparer));
}
