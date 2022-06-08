#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Boolean_ {
IL2CPP_REGISTER_METHOD(0x02FF3A10, void, Sort, (Boolean__Array * keys, int32_t index, int32_t length, IComparer_1_System_Boolean_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0473F530, ArraySortHelper_1_System_Boolean__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF3D30, int32_t, BinarySearch, (Boolean__Array * array, int32_t index, int32_t length, bool value, IComparer_1_System_Boolean_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0475E5B8, ArraySortHelper_1_System_Boolean__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF3ED0, void, Sort, (Boolean__Array * keys, int32_t index, int32_t length, Comparison_1_Boolean_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0470C7B8, ArraySortHelper_1_System_Boolean__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7D410, int32_t, InternalBinarySearch, (Boolean__Array * array, int32_t index, int32_t length, bool value, IComparer_1_System_Boolean_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7D530, void, SwapIfGreater, (Boolean__Array * keys, Comparison_1_Boolean_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F7D6B0, void, Swap, (Boolean__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Boolean__Array * keys, int32_t left, int32_t length, Comparison_1_Boolean_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Boolean__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Boolean_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7D730, int32_t, PickPivotAndPartition, (Boolean__Array * keys, int32_t lo, int32_t hi, Comparison_1_Boolean_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Boolean__Array * keys, int32_t lo, int32_t hi, Comparison_1_Boolean_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7DAF0, void, DownHeap, (Boolean__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Boolean_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7DDB0, void, InsertionSort, (Boolean__Array * keys, int32_t lo, int32_t hi, Comparison_1_Boolean_ * comparer));
}
