using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_DebugMenu_ExternalItem_ {
IL2CPP_REGISTER_METHOD(0x02F2F850, void, Sort, (DebugMenu_ExternalItem__Array * keys, int32_t index, int32_t length, IComparer_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04746178, ArraySortHelper_1_DebugMenu_ExternalItem__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2FB70, int32_t, BinarySearch, (DebugMenu_ExternalItem__Array * array, int32_t index, int32_t length, DebugMenu_ExternalItem value, IComparer_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04707518, ArraySortHelper_1_DebugMenu_ExternalItem__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2FD20, void, Sort, (DebugMenu_ExternalItem__Array * keys, int32_t index, int32_t length, Comparison_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0477ECA0, ArraySortHelper_1_DebugMenu_ExternalItem__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (DebugMenu_ExternalItem__Array * array, int32_t index, int32_t length, DebugMenu_ExternalItem value, IComparer_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (DebugMenu_ExternalItem__Array * keys, Comparison_1_DebugMenu_ExternalItem_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (DebugMenu_ExternalItem__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (DebugMenu_ExternalItem__Array * keys, int32_t left, int32_t length, Comparison_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (DebugMenu_ExternalItem__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (DebugMenu_ExternalItem__Array * keys, int32_t lo, int32_t hi, Comparison_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (DebugMenu_ExternalItem__Array * keys, int32_t lo, int32_t hi, Comparison_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (DebugMenu_ExternalItem__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_DebugMenu_ExternalItem_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (DebugMenu_ExternalItem__Array * keys, int32_t lo, int32_t hi, Comparison_1_DebugMenu_ExternalItem_ * comparer));
}
