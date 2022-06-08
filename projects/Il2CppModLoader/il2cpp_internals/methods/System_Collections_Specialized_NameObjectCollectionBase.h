using namespace app;

namespace app::methods::System::Collections::Specialized::NameObjectCollectionBase {
IL2CPP_REGISTER_METHOD(0x02496680, void, __ctor, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02496730, void, __ctor, (NameObjectCollectionBase * __this, IEqualityComparer * equalityComparer));
IL2CPP_REGISTER_METHOD(0x02496800, void, __ctor, (NameObjectCollectionBase * __this, int32_t capacity, IEqualityComparer * equalityComparer));
IL2CPP_REGISTER_METHOD(0x02496840, void, __ctor, (NameObjectCollectionBase * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NameObjectCollectionBase * __this, DBNull * dummy));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, __ctor, (NameObjectCollectionBase * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02496900, void, GetObjectData, (NameObjectCollectionBase * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04731420, NameObjectCollectionBase_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02496E30, void, OnDeserialization, (NameObjectCollectionBase * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x0478A468, NameObjectCollectionBase_OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024975D0, void, Reset, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02497810, void, Reset, (NameObjectCollectionBase * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02497A60, NameObjectCollectionBase_NameObjectEntry *, FindEntry, (NameObjectCollectionBase * __this, String * key));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsReadOnly, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02497B80, bool, BaseHasKeys, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02497BC0, void, BaseAdd, (NameObjectCollectionBase * __this, String * name, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474FB18, NameObjectCollectionBase_BaseAdd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02497E00, void, BaseRemove, (NameObjectCollectionBase * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04767750, NameObjectCollectionBase_BaseRemove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498080, void, BaseClear, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHODINFO(0x04737CC8, NameObjectCollectionBase_BaseClear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498150, Object *, BaseGet, (NameObjectCollectionBase * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02498170, void, BaseSet, (NameObjectCollectionBase * __this, String * name, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04796CD8, NameObjectCollectionBase_BaseSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498280, Object *, BaseGet, (NameObjectCollectionBase * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x024983C0, String *, BaseGetKey, (NameObjectCollectionBase * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02498500, IEnumerator *, GetEnumerator, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x01E1A180, int32_t, get_Count, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02498660, void, ICollection_CopyTo, (NameObjectCollectionBase * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04796930, NameObjectCollectionBase_System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498980, Object *, ICollection_get_SyncRoot, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02498AE0, String__Array *, BaseGetAllKeys, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02498C20, NameObjectCollectionBase_KeysCollection *, get_Keys, (NameObjectCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x02498D70, void, __cctor, (MethodInfo * method));
}
