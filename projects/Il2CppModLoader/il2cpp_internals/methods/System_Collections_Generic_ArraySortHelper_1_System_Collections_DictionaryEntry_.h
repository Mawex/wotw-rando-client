using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System::Collections::DictionaryEntry_ {
IL2CPP_REGISTER_METHOD(0x02FF5250, void, Sort, (DictionaryEntry__Array * keys, int32_t index, int32_t length, IComparer_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04795940, ArraySortHelper_1_System_Collections_DictionaryEntry__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF5570, int32_t, BinarySearch, (DictionaryEntry__Array * array, int32_t index, int32_t length, DictionaryEntry value, IComparer_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0478C140, ArraySortHelper_1_System_Collections_DictionaryEntry__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF5720, void, Sort, (DictionaryEntry__Array * keys, int32_t index, int32_t length, Comparison_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04756A28, ArraySortHelper_1_System_Collections_DictionaryEntry__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (DictionaryEntry__Array * array, int32_t index, int32_t length, DictionaryEntry value, IComparer_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (DictionaryEntry__Array * keys, Comparison_1_System_Collections_DictionaryEntry_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (DictionaryEntry__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (DictionaryEntry__Array * keys, int32_t left, int32_t length, Comparison_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (DictionaryEntry__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (DictionaryEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (DictionaryEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (DictionaryEntry__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (DictionaryEntry__Array * keys, int32_t lo, int32_t hi, Comparison_1_System_Collections_DictionaryEntry_ * comparer));
}
