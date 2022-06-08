using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_MessageDescriptor_ {
IL2CPP_REGISTER_METHOD(0x02F621B0, void, Sort, (MessageDescriptor__Array * keys, int32_t index, int32_t length, IComparer_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0474F0E8, ArraySortHelper_1_MessageDescriptor__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F624D0, int32_t, BinarySearch, (MessageDescriptor__Array * array, int32_t index, int32_t length, MessageDescriptor value, IComparer_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04786480, ArraySortHelper_1_MessageDescriptor__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F62680, void, Sort, (MessageDescriptor__Array * keys, int32_t index, int32_t length, Comparison_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477BF98, ArraySortHelper_1_MessageDescriptor__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (MessageDescriptor__Array * array, int32_t index, int32_t length, MessageDescriptor value, IComparer_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (MessageDescriptor__Array * keys, Comparison_1_MessageDescriptor_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (MessageDescriptor__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (MessageDescriptor__Array * keys, int32_t left, int32_t length, Comparison_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (MessageDescriptor__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (MessageDescriptor__Array * keys, int32_t lo, int32_t hi, Comparison_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (MessageDescriptor__Array * keys, int32_t lo, int32_t hi, Comparison_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (MessageDescriptor__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_MessageDescriptor_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (MessageDescriptor__Array * keys, int32_t lo, int32_t hi, Comparison_1_MessageDescriptor_ * comparer));
}
