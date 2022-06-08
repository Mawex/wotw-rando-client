#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_Moon::Substr_ {
IL2CPP_REGISTER_METHOD(0x02F39BB0, void, Sort, (Substr__Array * keys, int32_t index, int32_t length, IComparer_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04759780, ArraySortHelper_1_Moon_Substr__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F39ED0, int32_t, BinarySearch, (Substr__Array * array, int32_t index, int32_t length, Substr value, IComparer_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0478EF38, ArraySortHelper_1_Moon_Substr__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F3A070, void, Sort, (Substr__Array * keys, int32_t index, int32_t length, Comparison_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04713628, ArraySortHelper_1_Moon_Substr__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (Substr__Array * array, int32_t index, int32_t length, Substr value, IComparer_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (Substr__Array * keys, Comparison_1_Moon_Substr_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (Substr__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Substr__Array * keys, int32_t left, int32_t length, Comparison_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Substr__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (Substr__Array * keys, int32_t lo, int32_t hi, Comparison_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Substr__Array * keys, int32_t lo, int32_t hi, Comparison_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (Substr__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_Moon_Substr_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (Substr__Array * keys, int32_t lo, int32_t hi, Comparison_1_Moon_Substr_ * comparer));
}
