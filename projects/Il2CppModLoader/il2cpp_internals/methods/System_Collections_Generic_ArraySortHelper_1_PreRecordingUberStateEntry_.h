using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_PreRecordingUberStateEntry_ {
IL2CPP_REGISTER_METHOD(0x02FEDDD0, void, Sort, (PreRecordingUberStateEntry__Array * keys, int32_t index, int32_t length, IComparer_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04740F48, ArraySortHelper_1_PreRecordingUberStateEntry__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FEE0F0, int32_t, BinarySearch, (PreRecordingUberStateEntry__Array * array, int32_t index, int32_t length, PreRecordingUberStateEntry value, IComparer_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04762600, ArraySortHelper_1_PreRecordingUberStateEntry__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FEE2A0, void, Sort, (PreRecordingUberStateEntry__Array * keys, int32_t index, int32_t length, Comparison_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0474E5D0, ArraySortHelper_1_PreRecordingUberStateEntry__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (PreRecordingUberStateEntry__Array * array, int32_t index, int32_t length, PreRecordingUberStateEntry value, IComparer_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (PreRecordingUberStateEntry__Array * keys, Comparison_1_PreRecordingUberStateEntry_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (PreRecordingUberStateEntry__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (PreRecordingUberStateEntry__Array * keys, int32_t left, int32_t length, Comparison_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (PreRecordingUberStateEntry__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_PreRecordingUberStateEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (PreRecordingUberStateEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_PreRecordingUberStateEntry_ * comparer));
}
