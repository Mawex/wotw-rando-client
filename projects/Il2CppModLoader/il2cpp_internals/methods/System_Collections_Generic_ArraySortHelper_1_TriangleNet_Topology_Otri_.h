using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_TriangleNet::Topology::Otri_ {
IL2CPP_REGISTER_METHOD(0x02F851C0, void, Sort, (Otri__Array * keys, int32_t index, int32_t length, IComparer_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0470BBB0, ArraySortHelper_1_TriangleNet_Topology_Otri__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F854E0, int32_t, BinarySearch, (Otri__Array * array, int32_t index, int32_t length, Otri value, IComparer_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04771358, ArraySortHelper_1_TriangleNet_Topology_Otri__BinarySearch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F85690, void, Sort, (Otri__Array * keys, int32_t index, int32_t length, Comparison_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04725230, ArraySortHelper_1_TriangleNet_Topology_Otri__Sort_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (Otri__Array * array, int32_t index, int32_t length, Otri value, IComparer_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (Otri__Array * keys, Comparison_1_TriangleNet_Topology_Otri_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (Otri__Array * a, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (Otri__Array * keys, int32_t left, int32_t length, Comparison_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (Otri__Array * keys, int32_t lo, int32_t hi, int32_t depthLimit, Comparison_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (Otri__Array * keys, int32_t lo, int32_t hi, Comparison_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (Otri__Array * keys, int32_t lo, int32_t hi, Comparison_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (Otri__Array * keys, int32_t i, int32_t n, int32_t lo, Comparison_1_TriangleNet_Topology_Otri_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (Otri__Array * keys, int32_t lo, int32_t hi, Comparison_1_TriangleNet_Topology_Otri_ * comparer));
}
