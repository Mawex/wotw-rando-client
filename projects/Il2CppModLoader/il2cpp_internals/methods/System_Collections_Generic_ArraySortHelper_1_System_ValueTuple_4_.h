#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::ValueTuple_4_ {
IL2CPP_REGISTER_METHOD(0x02F83320, void, Sort, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t index, int32_t length, IComparer_1_System_ValueTuple_4_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476AD98, ArraySortHelper_1_System_ValueTuple_4__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F83640, int32_t, BinarySearch, (ValueTuple_4_Object_Int32_Int32_Single___Array * array, int32_t index, int32_t length, ValueTuple_4_Object_Int32_Int32_Single_ value, IComparer_1_System_ValueTuple_4_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047950A0, ArraySortHelper_1_System_ValueTuple_4__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F837F0, void, Sort, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t index, int32_t length, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0470AC58, ArraySortHelper_1_System_ValueTuple_4__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (ValueTuple_4_Object_Int32_Int32_Single___Array * array, int32_t index, int32_t length, ValueTuple_4_Object_Int32_Int32_Single_ value, IComparer_1_System_ValueTuple_4_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (ValueTuple_4_Object_Int32_Int32_Single___Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t left, int32_t length, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t lo, int32_t hi, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t lo, int32_t hi, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (ValueTuple_4_Object_Int32_Int32_Single___Array * keys, int32_t lo, int32_t hi, Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparer));
}
