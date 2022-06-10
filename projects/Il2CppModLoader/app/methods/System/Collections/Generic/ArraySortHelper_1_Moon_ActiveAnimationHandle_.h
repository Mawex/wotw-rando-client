#pragma once
#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(0x02F338A0, void, Sort_1, (app::ActiveAnimationHandle__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473BB10, ArraySortHelper_1_Moon_ActiveAnimationHandle__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F33BC0, int32_t, BinarySearch, (app::ActiveAnimationHandle__Array * array, int32_t index, int32_t length, app::ActiveAnimationHandle value, app::IComparer_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04717620, ArraySortHelper_1_Moon_ActiveAnimationHandle__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F33D70, void, Sort_2, (app::ActiveAnimationHandle__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047763F8, ArraySortHelper_1_Moon_ActiveAnimationHandle__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::ActiveAnimationHandle__Array * array, int32_t index, int32_t length, app::ActiveAnimationHandle value, app::IComparer_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::ActiveAnimationHandle__Array * keys, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::ActiveAnimationHandle__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ActiveAnimationHandle__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ActiveAnimationHandle__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::ActiveAnimationHandle__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ActiveAnimationHandle__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::ActiveAnimationHandle__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::ActiveAnimationHandle__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_ActiveAnimationHandle_ * comparer))
}
