using namespace app;

namespace app::methods::System::Collections::Generic::List_1_StateValidator_ {
IL2CPP_REGISTER_METHOD(0x025ED850, List_1_T_Enumerator_StateValidator_, GetEnumerator, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047427A0, List_1_StateValidator__GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047084F8, List_1_StateValidator___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_StateValidator_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02F4F680, void, __ctor, (List_1_StateValidator_ * __this, IEnumerable_1_StateValidator_ * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_StateValidator_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x02F4FB10, Object *, ICollection_get_SyncRoot, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025EC760, StateValidator, get_Item, (List_1_StateValidator_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EC7A0, void, set_Item, (List_1_StateValidator_ * __this, int32_t index, StateValidator value));
IL2CPP_REGISTER_METHOD(0x025EC810, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x025EC910, Object *, IList_get_Item, (List_1_StateValidator_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02F4FC70, void, IList_set_Item, (List_1_StateValidator_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x025ECB30, void, Add, (List_1_StateValidator_ * __this, StateValidator item));
IL2CPP_REGISTER_METHOD(0x02F4FE10, int32_t, IList_Add, (List_1_StateValidator_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_StateValidator_ * __this, IEnumerable_1_StateValidator_ * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_StateValidator_ *, AsReadOnly, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025ECD80, int32_t, BinarySearch, (List_1_StateValidator_ * __this, int32_t index, int32_t count, StateValidator item, IComparer_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x025ECE20, int32_t, BinarySearch, (List_1_StateValidator_ * __this, StateValidator item, IComparer_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025ECEC0, bool, Contains, (List_1_StateValidator_ * __this, StateValidator item));
IL2CPP_REGISTER_METHOD(0x025ECFB0, bool, IList_Contains, (List_1_StateValidator_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_StateValidator_ * __this, StateValidator__Array * array));
IL2CPP_REGISTER_METHOD(0x02F4FFC0, void, ICollection_CopyTo, (List_1_StateValidator_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_StateValidator_ * __this, int32_t index, StateValidator__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_StateValidator_ * __this, StateValidator__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_StateValidator_ * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_StateValidator_ * __this, Predicate_1_StateValidator_ * match));
IL2CPP_REGISTER_METHOD(0x025ED1F0, StateValidator, Find, (List_1_StateValidator_ * __this, Predicate_1_StateValidator_ * match));
IL2CPP_REGISTER_METHOD(0x025ED330, List_1_StateValidator_ *, FindAll, (List_1_StateValidator_ * __this, Predicate_1_StateValidator_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_StateValidator_ * __this, Predicate_1_StateValidator_ * match));
IL2CPP_REGISTER_METHOD(0x025ED580, int32_t, FindIndex, (List_1_StateValidator_ * __this, int32_t startIndex, int32_t count, Predicate_1_StateValidator_ * match));
IL2CPP_REGISTER_METHOD(0x02F500B0, void, ForEach, (List_1_StateValidator_ * __this, Action_1_StateValidator_ * action));
IL2CPP_REGISTER_METHOD(0x025ED8A0, IEnumerator_1_StateValidator_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025ED8A0, IEnumerator *, IEnumerable_GetEnumerator, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_StateValidator_ *, GetRange, (List_1_StateValidator_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025ED940, int32_t, IndexOf, (List_1_StateValidator_ * __this, StateValidator item));
IL2CPP_REGISTER_METHOD(0x025ED990, int32_t, IList_IndexOf, (List_1_StateValidator_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025EDAF0, void, Insert, (List_1_StateValidator_ * __this, int32_t index, StateValidator item));
IL2CPP_REGISTER_METHOD(0x02F50260, void, IList_Insert, (List_1_StateValidator_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02F50400, void, InsertRange, (List_1_StateValidator_ * __this, int32_t index, IEnumerable_1_StateValidator_ * collection));
IL2CPP_REGISTER_METHOD(0x025EE0D0, bool, Remove, (List_1_StateValidator_ * __this, StateValidator item));
IL2CPP_REGISTER_METHOD(0x025EE160, void, IList_Remove, (List_1_StateValidator_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025EE2B0, int32_t, RemoveAll, (List_1_StateValidator_ * __this, Predicate_1_StateValidator_ * match));
IL2CPP_REGISTER_METHOD(0x025EE4F0, void, RemoveAt, (List_1_StateValidator_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_StateValidator_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_StateValidator_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_StateValidator_ * __this, IComparer_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_StateValidator_ * __this, int32_t index, int32_t count, IComparer_1_StateValidator_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_StateValidator_ * __this, Comparison_1_StateValidator_ * comparison));
IL2CPP_REGISTER_METHOD(0x025EAEF0, StateValidator__Array *, ToArray, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_StateValidator_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, (MethodInfo * method));
}
