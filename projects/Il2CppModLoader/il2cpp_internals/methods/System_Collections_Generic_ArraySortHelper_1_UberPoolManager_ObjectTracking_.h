using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_UberPoolManager_ObjectTracking_ {
IL2CPP_REGISTER_METHOD(0x02F876A0, void, Sort, (UberPoolManager_ObjectTracking__Array * keys, int32_t index, int32_t length, IComparer_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04708840, ArraySortHelper_1_UberPoolManager_ObjectTracking__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F879C0, int32_t, BinarySearch, (UberPoolManager_ObjectTracking__Array * array, int32_t index, int32_t length, UberPoolManager_ObjectTracking value, IComparer_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047641D8, ArraySortHelper_1_UberPoolManager_ObjectTracking__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F87B70, void, Sort, (UberPoolManager_ObjectTracking__Array * keys, int32_t index, int32_t length, Comparison_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04716410, ArraySortHelper_1_UberPoolManager_ObjectTracking__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (UberPoolManager_ObjectTracking__Array * array, int32_t index, int32_t length, UberPoolManager_ObjectTracking value, IComparer_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (UberPoolManager_ObjectTracking__Array * keys, Comparison_1_UberPoolManager_ObjectTracking_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (UberPoolManager_ObjectTracking__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (UberPoolManager_ObjectTracking__Array * keys, int32_t left, int32_t length, Comparison_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (UberPoolManager_ObjectTracking__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (UberPoolManager_ObjectTracking__Array * keys, int32_t lo, int32_t hi, Comparison_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (UberPoolManager_ObjectTracking__Array * keys, int32_t lo, int32_t hi, Comparison_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (UberPoolManager_ObjectTracking__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_UberPoolManager_ObjectTracking_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (UberPoolManager_ObjectTracking__Array * keys, int32_t lo, int32_t hi, Comparison_1_UberPoolManager_ObjectTracking_ * comparer));
}
