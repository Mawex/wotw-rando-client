#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_GameplayCameraTargetEntry_ {
IL2CPP_REGISTER_METHOD(0x02F5BF30, void, Sort, (GameplayCameraTargetEntry__Array * keys, int32_t index, int32_t length, IComparer_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0478AB80, ArraySortHelper_1_GameplayCameraTargetEntry__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F5C250, int32_t, BinarySearch, (GameplayCameraTargetEntry__Array * array, int32_t index, int32_t length, GameplayCameraTargetEntry value, IComparer_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04760D08, ArraySortHelper_1_GameplayCameraTargetEntry__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F5C400, void, Sort, (GameplayCameraTargetEntry__Array * keys, int32_t index, int32_t length, Comparison_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0474A9B0, ArraySortHelper_1_GameplayCameraTargetEntry__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (GameplayCameraTargetEntry__Array * array, int32_t index, int32_t length, GameplayCameraTargetEntry value, IComparer_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (GameplayCameraTargetEntry__Array * keys, Comparison_1_GameplayCameraTargetEntry_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (GameplayCameraTargetEntry__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (GameplayCameraTargetEntry__Array * keys, int32_t left, int32_t length, Comparison_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (GameplayCameraTargetEntry__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_GameplayCameraTargetEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (GameplayCameraTargetEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_GameplayCameraTargetEntry_ * comparer));
}
