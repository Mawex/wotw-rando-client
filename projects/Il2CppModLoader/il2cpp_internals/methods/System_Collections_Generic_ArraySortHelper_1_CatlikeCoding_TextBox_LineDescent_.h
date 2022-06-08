using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_CatlikeCoding::TextBox::LineDescent_ {
IL2CPP_REGISTER_METHOD(0x02F2CB00, void, Sort, (LineDescent__Array * keys, int32_t index, int32_t length, IComparer_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0478E950, ArraySortHelper_1_CatlikeCoding_TextBox_LineDescent__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2CE20, int32_t, BinarySearch, (LineDescent__Array * array, int32_t index, int32_t length, LineDescent value, IComparer_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x047905D8, ArraySortHelper_1_CatlikeCoding_TextBox_LineDescent__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F2CFD0, void, Sort, (LineDescent__Array * keys, int32_t index, int32_t length, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0473D7C8, ArraySortHelper_1_CatlikeCoding_TextBox_LineDescent__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C86B20, int32_t, InternalBinarySearch, (LineDescent__Array * array, int32_t index, int32_t length, LineDescent value, IComparer_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86C60, void, SwapIfGreater, (LineDescent__Array * keys, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C86E20, void, Swap, (LineDescent__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (LineDescent__Array * keys, int32_t left, int32_t length, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (LineDescent__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87320, int32_t, PickPivotAndPartition, (LineDescent__Array * keys, int32_t lo, int32_t hi, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (LineDescent__Array * keys, int32_t lo, int32_t hi, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87900, void, DownHeap, (LineDescent__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87C30, void, InsertionSort, (LineDescent__Array * keys, int32_t lo, int32_t hi, Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparer));
}
