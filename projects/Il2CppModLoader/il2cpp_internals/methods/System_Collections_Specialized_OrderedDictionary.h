using namespace app;

namespace app::methods::System::Collections::Specialized::OrderedDictionary {
IL2CPP_REGISTER_METHOD(0x0249BA70, void, __ctor, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249BA80, void, __ctor, (OrderedDictionary * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0249BA90, void, __ctor, (OrderedDictionary * __this, int32_t capacity, IEqualityComparer * comparer));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, __ctor, (OrderedDictionary * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0249BAA0, int32_t, get_Count, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, IDictionary_get_IsFixedSize, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsReadOnly, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249BAD0, ICollection *, get_Keys, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249BC20, ArrayList *, get_objectsArray, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249BD80, Hashtable *, get_objectsTable, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249BF00, Object *, ICollection_get_SyncRoot, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249C060, Object *, get_Item, (OrderedDictionary * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x0249C0A0, void, set_Item, (OrderedDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04797F58, OrderedDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249C380, ICollection *, get_Values, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249C4D0, void, Add, (OrderedDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04722470, OrderedDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249C620, void, Clear, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHODINFO(0x047357A8, OrderedDictionary_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249C730, bool, Contains, (OrderedDictionary * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x0249C770, void, CopyTo, (OrderedDictionary * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x0249C7C0, int32_t, IndexOfKey, (OrderedDictionary * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x0249C950, void, OnDeserialization, (OrderedDictionary * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04717628, OrderedDictionary_OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249CCC0, void, Remove, (OrderedDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x0476E830, OrderedDictionary_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249CE40, IDictionaryEnumerator *, GetEnumerator, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249CFC0, IEnumerator *, IEnumerable_GetEnumerator, (OrderedDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249D140, void, GetObjectData, (OrderedDictionary * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04798008, OrderedDictionary_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018687B0, void, IDeserializationCallback_OnDeserialization, (OrderedDictionary * __this, Object * sender));
}
