#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Char_ {
IL2CPP_REGISTER_METHOD(0x02FF4C40, void, Sort, (Char__Array * keys, int32_t index, int32_t length, IComparer_1_System_Char_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0472EBE8, ArraySortHelper_1_System_Char__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF4F60, int32_t, BinarySearch, (Char__Array * array, int32_t index, int32_t length, uint16_t value, IComparer_1_System_Char_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04755670, ArraySortHelper_1_System_Char__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF5100, void, Sort, (Char__Array * keys, int32_t index, int32_t length, Comparison_1_Char_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04703368, ArraySortHelper_1_System_Char__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F7FD80, int32_t, InternalBinarySearch, (Char__Array * array, int32_t index, int32_t length, uint16_t value, IComparer_1_System_Char_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F7FEA0, void, SwapIfGreater, (Char__Array * keys, Comparison_1_Char_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F80030, void, Swap, (Char__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Char__Array * keys, int32_t left, int32_t length, Comparison_1_Char_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Char__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Char_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F800B0, int32_t, PickPivotAndPartition, (Char__Array * keys, int32_t lo, int32_t hi, Comparison_1_Char_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Char__Array * keys, int32_t lo, int32_t hi, Comparison_1_Char_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F80480, void, DownHeap, (Char__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Char_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F80750, void, InsertionSort, (Char__Array * keys, int32_t lo, int32_t hi, Comparison_1_Char_ * comparer));
}
