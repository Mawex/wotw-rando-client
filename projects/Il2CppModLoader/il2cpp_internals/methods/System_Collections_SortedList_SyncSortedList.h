using namespace app;

namespace app::methods::System::Collections::SortedList_SyncSortedList {
IL2CPP_REGISTER_METHOD(0x0202FE70, void, __ctor, (SortedList_SyncSortedList * __this, SortedList * list));
IL2CPP_REGISTER_METHOD(0x0202FF40, int32_t, get_Count, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Object *, get_SyncRoot, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x02030050, bool, get_IsReadOnly, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x02030080, bool, get_IsFixedSize, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSynchronized, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x020300B0, Object *, get_Item, (SortedList_SyncSortedList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x020301C0, void, set_Item, (SortedList_SyncSortedList * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x020302D0, void, Add, (SortedList_SyncSortedList * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x020303E0, int32_t, get_Capacity, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x020304F0, void, Clear, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x020305E0, Object *, Clone, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x020306F0, bool, Contains, (SortedList_SyncSortedList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02030800, bool, ContainsKey, (SortedList_SyncSortedList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02030910, bool, ContainsValue, (SortedList_SyncSortedList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02030A20, void, CopyTo, (SortedList_SyncSortedList * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02030B30, Object *, GetByIndex, (SortedList_SyncSortedList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02030C40, IDictionaryEnumerator *, GetEnumerator, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x02030D50, Object *, GetKey, (SortedList_SyncSortedList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02030E60, IList *, GetKeyList, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x02030F70, IList *, GetValueList, (SortedList_SyncSortedList * __this));
IL2CPP_REGISTER_METHOD(0x02031080, int32_t, IndexOfKey, (SortedList_SyncSortedList * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04723D80, SortedList_SyncSortedList_IndexOfKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031250, int32_t, IndexOfValue, (SortedList_SyncSortedList * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02031360, void, RemoveAt, (SortedList_SyncSortedList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02031460, void, Remove, (SortedList_SyncSortedList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02031560, KeyValuePairs__Array *, ToKeyValuePairsArray, (SortedList_SyncSortedList * __this));
}
