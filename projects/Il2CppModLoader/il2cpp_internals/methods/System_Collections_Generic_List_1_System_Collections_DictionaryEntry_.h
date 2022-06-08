using namespace app;

namespace app::methods::System::Collections::Generic::List_1_System::Collections::DictionaryEntry_ {
IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02F557D0, void, __ctor, (List_1_System_Collections_DictionaryEntry_ * __this, IEnumerable_1_System_Collections_DictionaryEntry_ * collection));
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x02F55C50, Object *, ICollection_get_SyncRoot, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E8A60, DictionaryEntry, get_Item, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025E8A90, void, set_Item, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, DictionaryEntry value));
IL2CPP_REGISTER_METHOD(0x025E8AF0, bool, IsCompatibleObject, (Object * value));
IL2CPP_REGISTER_METHOD(0x025E8BE0, Object *, IList_get_Item, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02F55DB0, void, IList_set_Item, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add, (List_1_System_Collections_DictionaryEntry_ * __this, DictionaryEntry item));
IL2CPP_REGISTER_METHOD(0x02F55F40, int32_t, IList_Add, (List_1_System_Collections_DictionaryEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (List_1_System_Collections_DictionaryEntry_ * __this, IEnumerable_1_System_Collections_DictionaryEntry_ * collection));
IL2CPP_REGISTER_METHOD(0x025E9050, ReadOnlyCollection_1_System_Collections_DictionaryEntry_ *, AsReadOnly, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9160, int32_t, BinarySearch, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, int32_t count, DictionaryEntry item, IComparer_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x025E91F0, int32_t, BinarySearch, (List_1_System_Collections_DictionaryEntry_ * __this, DictionaryEntry item, IComparer_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9280, bool, Contains, (List_1_System_Collections_DictionaryEntry_ * __this, DictionaryEntry item));
IL2CPP_REGISTER_METHOD(0x025E9350, bool, IList_Contains, (List_1_System_Collections_DictionaryEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, (List_1_System_Collections_DictionaryEntry_ * __this, DictionaryEntry__Array * array));
IL2CPP_REGISTER_METHOD(0x02F560E0, void, ICollection_CopyTo, (List_1_System_Collections_DictionaryEntry_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, DictionaryEntry__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (List_1_System_Collections_DictionaryEntry_ * __this, DictionaryEntry__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t min));
IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (List_1_System_Collections_DictionaryEntry_ * __this, Predicate_1_System_Collections_DictionaryEntry_ * match));
IL2CPP_REGISTER_METHOD(0x025E96E0, DictionaryEntry, Find, (List_1_System_Collections_DictionaryEntry_ * __this, Predicate_1_System_Collections_DictionaryEntry_ * match));
IL2CPP_REGISTER_METHOD(0x025E9800, List_1_System_Collections_DictionaryEntry_ *, FindAll, (List_1_System_Collections_DictionaryEntry_ * __this, Predicate_1_System_Collections_DictionaryEntry_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (List_1_System_Collections_DictionaryEntry_ * __this, Predicate_1_System_Collections_DictionaryEntry_ * match));
IL2CPP_REGISTER_METHOD(0x025E9A50, int32_t, FindIndex, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t startIndex, int32_t count, Predicate_1_System_Collections_DictionaryEntry_ * match));
IL2CPP_REGISTER_METHOD(0x02F561D0, void, ForEach, (List_1_System_Collections_DictionaryEntry_ * __this, Action_1_System_Collections_DictionaryEntry_ * action));
IL2CPP_REGISTER_METHOD(0x025E9D20, List_1_T_Enumerator_System_Collections_DictionaryEntry_, GetEnumerator, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9D60, IEnumerator_1_System_Collections_DictionaryEntry_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9D60, IEnumerator *, IEnumerable_GetEnumerator, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025E9DF0, List_1_System_Collections_DictionaryEntry_ *, GetRange, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025E9FA0, int32_t, IndexOf, (List_1_System_Collections_DictionaryEntry_ * __this, DictionaryEntry item));
IL2CPP_REGISTER_METHOD(0x025E9FE0, int32_t, IList_IndexOf, (List_1_System_Collections_DictionaryEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025EA130, void, Insert, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, DictionaryEntry item));
IL2CPP_REGISTER_METHOD(0x02F56380, void, IList_Insert, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02F56510, void, InsertRange, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, IEnumerable_1_System_Collections_DictionaryEntry_ * collection));
IL2CPP_REGISTER_METHOD(0x025EA760, bool, Remove, (List_1_System_Collections_DictionaryEntry_ * __this, DictionaryEntry item));
IL2CPP_REGISTER_METHOD(0x025EA7E0, void, IList_Remove, (List_1_System_Collections_DictionaryEntry_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x025EA920, int32_t, RemoveAll, (List_1_System_Collections_DictionaryEntry_ * __this, Predicate_1_System_Collections_DictionaryEntry_ * match));
IL2CPP_REGISTER_METHOD(0x025EAB40, void, RemoveAt, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (List_1_System_Collections_DictionaryEntry_ * __this, IComparer_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (List_1_System_Collections_DictionaryEntry_ * __this, int32_t index, int32_t count, IComparer_1_System_Collections_DictionaryEntry_ * comparer));
IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (List_1_System_Collections_DictionaryEntry_ * __this, Comparison_1_System_Collections_DictionaryEntry_ * comparison));
IL2CPP_REGISTER_METHOD(0x025EAEF0, DictionaryEntry__Array *, ToArray, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (List_1_System_Collections_DictionaryEntry_ * __this));
IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, (MethodInfo * method));
}
