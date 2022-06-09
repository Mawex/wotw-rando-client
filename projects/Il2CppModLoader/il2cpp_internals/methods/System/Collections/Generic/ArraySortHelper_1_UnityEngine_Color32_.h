#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x02F64C80, void, Sort_1, (app::Color32__Array * keys, int32_t index, int32_t length, app::IComparer_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0477FAE0, ArraySortHelper_1_UnityEngine_Color32__Sort__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F64FA0, int32_t, BinarySearch, (app::Color32__Array * array, int32_t index, int32_t length, app::Color32 value, app::IComparer_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0470D508, ArraySortHelper_1_UnityEngine_Color32__BinarySearch__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F65140, void, Sort_2, (app::Color32__Array * keys, int32_t index, int32_t length, app::Comparison_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04796C88, ArraySortHelper_1_UnityEngine_Color32__Sort_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F65290, int32_t, InternalBinarySearch, (app::Color32__Array * array, int32_t index, int32_t length, app::Color32 value, app::IComparer_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F653B0, void, SwapIfGreater, (app::Color32__Array * keys, app::Comparison_1_UnityEngine_Color32_ * comparer, int32_t a, int32_t b));
    IL2CPP_REGISTER_METHOD(0x02F65540, void, Swap, (app::Color32__Array * a, int32_t i, int32_t j));
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::Color32__Array * keys, int32_t left, int32_t length, app::Comparison_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::Color32__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F655C0, int32_t, PickPivotAndPartition, (app::Color32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::Color32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F65990, void, DownHeap, (app::Color32__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UnityEngine_Color32_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F65C50, void, InsertionSort, (app::Color32__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UnityEngine_Color32_ * comparer));
}
