using namespace app;

namespace app::methods::System::Collections::Generic::List_1_System::Int64_ {
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04704748, List_1_System_Int64__1__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (List_1_System_Int64__1 * __this, int64_t item));
IL2CPP_REGISTER_METHODINFO(0x04771728, List_1_System_Int64__1_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E518, List_1_System_Int64__1_get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025EFC50, int64_t, get_Item, (List_1_System_Int64__1 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474B878, List_1_System_Int64__1_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025F0B10, List_1_T_Enumerator_System_Int64_, GetEnumerator, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04763E00, List_1_System_Int64__1_GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025EAEF0, Int64__Array *, ToArray, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F3C8, List_1_System_Int64__1_ToArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C8A0, List_1_System_Int64__1_Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (List_1_System_Int64__1 * __this, int32_t index, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04786B40, List_1_System_Int64__1_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_System_Int64__1 * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04766B00, List_1_System_Int64__1__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FA70, List_1_System_Int64__1_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FE5140, void, __ctor, (List_1_System_Int64__1 * __this, IEnumerable_1_System_Int64_ * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_System_Int64__1 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x02FE55C0, Object *, ICollection_get_SyncRoot, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x025EFCD0, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x025EFDB0, Object *, IList_get_Item, (List_1_System_Int64__1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02FE5720, void, IList_set_Item, (List_1_System_Int64__1 * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x02FE58A0, int32_t, IList_Add, (List_1_System_Int64__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_System_Int64__1 * __this, IEnumerable_1_System_Int64_ * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_System_Int64_ *, AsReadOnly, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x025F01C0, int32_t, BinarySearch, (List_1_System_Int64__1 * __this, int32_t index, int32_t count, int64_t item, IComparer_1_System_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F1E380, int32_t, BinarySearch, (List_1_System_Int64__1 * __this, int64_t item, IComparer_1_System_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02F1E400, bool, Contains, (List_1_System_Int64__1 * __this, int64_t item));
IL2CPP_REGISTER_METHOD(0x025F0370, bool, IList_Contains, (List_1_System_Int64__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_System_Int64__1 * __this, Int64__Array * array));
IL2CPP_REGISTER_METHOD(0x02FE5A40, void, ICollection_CopyTo, (List_1_System_Int64__1 * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_System_Int64__1 * __this, int32_t index, Int64__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_System_Int64__1 * __this, Int64__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_System_Int64__1 * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_System_Int64__1 * __this, Predicate_1_Int64_ * match));
IL2CPP_REGISTER_METHOD(0x025F05A0, int64_t, Find, (List_1_System_Int64__1 * __this, Predicate_1_Int64_ * match));
IL2CPP_REGISTER_METHOD(0x02F1E5B0, List_1_System_Int64__1 *, FindAll, (List_1_System_Int64__1 * __this, Predicate_1_Int64_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_System_Int64__1 * __this, Predicate_1_Int64_ * match));
IL2CPP_REGISTER_METHOD(0x02F1E7B0, int32_t, FindIndex, (List_1_System_Int64__1 * __this, int32_t startIndex, int32_t count, Predicate_1_Int64_ * match));
IL2CPP_REGISTER_METHOD(0x02FE5B30, void, ForEach, (List_1_System_Int64__1 * __this, Action_1_Int64_ * action));
IL2CPP_REGISTER_METHOD(0x025F0B50, IEnumerator_1_System_Int64__1 *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x025F0B50, IEnumerator *, IEnumerable_GetEnumerator, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_System_Int64__1 *, GetRange, (List_1_System_Int64__1 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (List_1_System_Int64__1 * __this, int64_t item));
IL2CPP_REGISTER_METHOD(0x025F0C10, int32_t, IList_IndexOf, (List_1_System_Int64__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (List_1_System_Int64__1 * __this, int32_t index, int64_t item));
IL2CPP_REGISTER_METHOD(0x02FE5CC0, void, IList_Insert, (List_1_System_Int64__1 * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02FE5E40, void, InsertRange, (List_1_System_Int64__1 * __this, int32_t index, IEnumerable_1_System_Int64_ * collection));
IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (List_1_System_Int64__1 * __this, int64_t item));
IL2CPP_REGISTER_METHOD(0x025F1360, void, IList_Remove, (List_1_System_Int64__1 * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (List_1_System_Int64__1 * __this, Predicate_1_Int64_ * match));
IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (List_1_System_Int64__1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_System_Int64__1 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_System_Int64__1 * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_System_Int64__1 * __this, IComparer_1_System_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_System_Int64__1 * __this, int32_t index, int32_t count, IComparer_1_System_Int64_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_System_Int64__1 * __this, Comparison_1_Int64_ * comparison));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_System_Int64__1 * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, (MethodInfo * method));
}
