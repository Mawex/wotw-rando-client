using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_Moon::Trail_Point_ {
IL2CPP_REGISTER_METHOD(0x02F73830, void, Sort, (Trail_Point__Array * keys, int32_t index, int32_t length, IComparer_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04774B38, ArraySortHelper_1_Moon_Trail_Point__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F73B50, int32_t, BinarySearch, (Trail_Point__Array * array, int32_t index, int32_t length, Trail_Point value, IComparer_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0471E808, ArraySortHelper_1_Moon_Trail_Point__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F73D30, void, Sort, (Trail_Point__Array * keys, int32_t index, int32_t length, Comparison_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0473F760, ArraySortHelper_1_Moon_Trail_Point__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F73E80, int32_t, InternalBinarySearch, (Trail_Point__Array * array, int32_t index, int32_t length, Trail_Point value, IComparer_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F74020, void, SwapIfGreater, (Trail_Point__Array * keys, Comparison_1_Moon_Trail_Point_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F74240, void, Swap, (Trail_Point__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Trail_Point__Array * keys, int32_t left, int32_t length, Comparison_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Trail_Point__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F74310, int32_t, PickPivotAndPartition, (Trail_Point__Array * keys, int32_t lo, int32_t hi, Comparison_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Trail_Point__Array * keys, int32_t lo, int32_t hi, Comparison_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F747E0, void, DownHeap, (Trail_Point__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Moon_Trail_Point_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F74C10, void, InsertionSort, (Trail_Point__Array * keys, int32_t lo, int32_t hi, Comparison_1_Moon_Trail_Point_ * comparer));
}
