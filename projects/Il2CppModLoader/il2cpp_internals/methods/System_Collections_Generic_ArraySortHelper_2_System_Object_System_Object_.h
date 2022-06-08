using namespace app;

namespace app::methods::System::Collections::Generic::ArraySortHelper_2_System::Object_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02C90A60, ArraySortHelper_2_System_Object_System_Object_ *, get_Default, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C90B10, ArraySortHelper_2_System_Object_System_Object_ *, CreateArraySortHelper, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C90CE0, void, Sort, (ArraySortHelper_2_System_Object_System_Object_ * __this, Object__Array * keys, Object__Array * values, int32_t index, int32_t length, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04785B90, ArraySortHelper_2_System_Object_System_Object__Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C90E40, void, SwapIfGreaterWithItems, (Object__Array * keys, Object__Array * values, IComparer_1_System_Object_ * comparer, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x02C91030, void, Swap, (Object__Array * keys, Object__Array * values, int32_t i, int32_t j));
IL2CPP_REGISTER_METHOD(0x02C91130, void, IntrospectiveSort, (Object__Array * keys, Object__Array * values, int32_t left, int32_t length, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C91230, void, IntroSort, (Object__Array * keys, Object__Array * values, int32_t lo, int32_t hi, int32_t depthLimit, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C915E0, int32_t, PickPivotAndPartition, (Object__Array * keys, Object__Array * values, int32_t lo, int32_t hi, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C919D0, void, Heapsort, (Object__Array * keys, Object__Array * values, int32_t lo, int32_t hi, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C91BA0, void, DownHeap, (Object__Array * keys, Object__Array * values, int32_t i, int32_t n, int32_t lo, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02C91F00, void, InsertionSort, (Object__Array * keys, Object__Array * values, int32_t lo, int32_t hi, IComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (ArraySortHelper_2_System_Object_System_Object_ * __this));
}
