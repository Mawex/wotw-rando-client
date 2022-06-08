using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_StateValidator_ {
IL2CPP_REGISTER_METHOD(0x02FF33F0, void, Sort, (StateValidator__Array * keys, int32_t index, int32_t length, IComparer_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047995F8, ArraySortHelper_1_StateValidator__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF3710, int32_t, BinarySearch, (StateValidator__Array * array, int32_t index, int32_t length, StateValidator value, IComparer_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04788A00, ArraySortHelper_1_StateValidator__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF38C0, void, Sort, (StateValidator__Array * keys, int32_t index, int32_t length, Comparison_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047758D8, ArraySortHelper_1_StateValidator__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (StateValidator__Array * array, int32_t index, int32_t length, StateValidator value, IComparer_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (StateValidator__Array * keys, Comparison_1_StateValidator_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (StateValidator__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (StateValidator__Array * keys, int32_t left, int32_t length, Comparison_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (StateValidator__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (StateValidator__Array * keys, int32_t lo, int32_t hi, Comparison_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (StateValidator__Array * keys, int32_t lo, int32_t hi, Comparison_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (StateValidator__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (StateValidator__Array * keys, int32_t lo, int32_t hi, Comparison_1_StateValidator_ * comparer));
}
