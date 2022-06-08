using namespace app;

namespace app::methods::System::Collections::Hashtable_SyncHashtable {
IL2CPP_REGISTER_METHOD(0x002FBB50, void, __ctor, (Hashtable_SyncHashtable * __this, Hashtable * table));
IL2CPP_REGISTER_METHOD(0x02027AD0, void, __ctor, (Hashtable_SyncHashtable * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472E770, Hashtable_SyncHashtable__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02027C60, void, GetObjectData, (Hashtable_SyncHashtable * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047536B0, Hashtable_SyncHashtable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02027E60, int32_t, get_Count, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02027E90, bool, get_IsReadOnly, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02027EC0, bool, get_IsFixedSize, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSynchronized, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02027EF0, Object *, get_Item, (Hashtable_SyncHashtable * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02027F20, void, set_Item, (Hashtable_SyncHashtable * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x02028050, Object *, get_SyncRoot, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02028080, void, Add, (Hashtable_SyncHashtable * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x020281B0, void, Clear, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x020282C0, bool, Contains, (Hashtable_SyncHashtable * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x020282F0, bool, ContainsKey, (Hashtable_SyncHashtable * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x047971F0, Hashtable_SyncHashtable_ContainsKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020283E0, void, CopyTo, (Hashtable_SyncHashtable * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02028510, Object *, Clone, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02028700, IEnumerator *, IEnumerable_GetEnumerator, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02028700, IDictionaryEnumerator *, GetEnumerator, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02028730, ICollection *, get_Keys, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02028860, ICollection *, get_Values, (Hashtable_SyncHashtable * __this));
IL2CPP_REGISTER_METHOD(0x02028990, void, Remove, (Hashtable_SyncHashtable * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserialization, (Hashtable_SyncHashtable * __this, Object * sender));
IL2CPP_REGISTER_METHOD(0x02028AB0, KeyValuePairs__Array *, ToKeyValuePairsArray, (Hashtable_SyncHashtable * __this));
}
