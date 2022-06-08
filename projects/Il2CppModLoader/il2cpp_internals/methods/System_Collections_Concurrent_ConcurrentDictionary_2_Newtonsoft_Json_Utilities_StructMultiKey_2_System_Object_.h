using namespace app;

namespace app::methods::System::Collections::Concurrent::ConcurrentDictionary_2_Newtonsoft::Json::Utilities::StructMultiKey_2_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02ADDAD0, bool, IsValueWriteAtomic, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02ADDC30, void, __ctor, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADDD20, void, __ctor, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, int32_t concurrencyLevel, int32_t capacity, bool growLockArray, IEqualityComparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2__3 * comparer));
IL2CPP_REGISTER_METHODINFO(0x0478E4D8, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ADE240, bool, TryAdd, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, Object * value));
IL2CPP_REGISTER_METHOD(0x02ADE380, bool, ContainsKey, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key));
IL2CPP_REGISTER_METHOD(0x02ADE3D0, bool, TryRemove, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, Object * * value));
IL2CPP_REGISTER_METHOD(0x02ADE420, bool, TryRemoveInternal, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, Object * * value, bool matchValue, Object * oldValue));
IL2CPP_REGISTER_METHOD(0x02ADEA70, bool, TryGetValue, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, Object * * value));
IL2CPP_REGISTER_METHOD(0x02ADEB90, bool, TryGetValueInternal, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, int32_t hashcode, Object * * value));
IL2CPP_REGISTER_METHOD(0x02ADEE00, void, Clear, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADF160, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, KeyValuePair_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object___Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04735DC8, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ADF450, KeyValuePair_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object___Array *, ToArray, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04734BF0, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__ToArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ADF730, void, CopyToPairs, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, KeyValuePair_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object___Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02ADF810, void, CopyToEntries, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, DictionaryEntry__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02ADF960, void, CopyToObjects, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, Object__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02ADFAD0, IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ *, GetEnumerator, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADFC00, bool, TryAddInternal, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, int32_t hashcode, Object * value, bool updateIfExists, bool acquireLock, Object * * resultingValue));
IL2CPP_REGISTER_METHODINFO(0x0473B8B8, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__TryAddInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE05F0, Object *, get_Item, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key));
IL2CPP_REGISTER_METHOD(0x02AE06F0, void, set_Item, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, Object * value));
IL2CPP_REGISTER_METHOD(0x02AE0830, void, ThrowKeyNotFoundException, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0477E758, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__ThrowKeyNotFoundException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE0880, void, ThrowKeyNullException, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x047157E0, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__ThrowKeyNullException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE08E0, int32_t, get_Count, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE0A10, int32_t, GetCountInternal, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE0AC0, Object *, GetOrAdd, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Object_ * valueFactory));
IL2CPP_REGISTER_METHODINFO(0x0470BC98, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__GetOrAdd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE0CA0, bool, get_IsEmpty, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE0E70, void, System_Collections_Generic_IDictionary_TKey_TValue__Add, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04747190, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__System_Collections_Generic_IDictionary_TKey_TValue__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE0F70, bool, System_Collections_Generic_IDictionary_TKey_TValue__Remove, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, StructMultiKey_2_System_Object_System_Object_ key));
IL2CPP_REGISTER_METHOD(0x02AE0FC0, ICollection_1_Newtonsoft_Json_Utilities_StructMultiKey_2__3 *, get_Keys, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE0FC0, IEnumerable_1_Newtonsoft_Json_Utilities_StructMultiKey_2__3 *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE0FF0, ICollection_1_System_Object_ *, get_Values, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE0FF0, IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE1020, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, KeyValuePair_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x02AE10A0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, KeyValuePair_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE1150, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, KeyValuePair_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ keyValuePair));
IL2CPP_REGISTER_METHODINFO(0x04727570, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE1230, IEnumerator *, IEnumerable_GetEnumerator, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE1260, void, IDictionary_Add, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04744A00, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__System_Collections_IDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE1520, bool, IDictionary_Contains, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02AE16A0, IDictionaryEnumerator *, IDictionary_GetEnumerator, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE0FC0, ICollection *, IDictionary_get_Keys, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE17C0, void, IDictionary_Remove, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02AE0FF0, ICollection *, IDictionary_get_Values, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE1940, Object *, IDictionary_get_Item, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02AE1AD0, void, IDictionary_set_Item, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0478BE28, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__System_Collections_IDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE1DB0, void, ICollection_CopyTo, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04745848, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AE21D0, Object *, ICollection_get_SyncRoot, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04721B70, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__System_Collections_ICollection_get_SyncRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE2230, void, GrowTable, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, ConcurrentDictionary_2_TKey_TValue_Tables_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * tables));
IL2CPP_REGISTER_METHODINFO(0x04752A00, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__GrowTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE2D10, int32_t, GetBucket, (int32_t hashcode, int32_t bucketCount));
IL2CPP_REGISTER_METHOD(0x02AE2D20, void, GetBucketAndLockNo, (int32_t hashcode, int32_t * bucketNo, int32_t * lockNo, int32_t bucketCount, int32_t lockCount));
IL2CPP_REGISTER_METHOD(0x02AE2D40, int32_t, get_DefaultConcurrencyLevel, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02AE2D50, void, AcquireAllLocks, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, int32_t * locksAcquired));
IL2CPP_REGISTER_METHOD(0x02AE2F20, void, AcquireLocks, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, int32_t fromInclusive, int32_t toExclusive, int32_t * locksAcquired));
IL2CPP_REGISTER_METHOD(0x02AE3070, void, ReleaseLocks, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this, int32_t fromInclusive, int32_t toExclusive));
IL2CPP_REGISTER_METHOD(0x02AE3110, ReadOnlyCollection_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ *, GetKeys, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047656E8, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__GetKeys__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE35A0, ReadOnlyCollection_1_System_Object_ *, GetValues, (ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04730F78, ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Object__GetValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AE3A20, void, __cctor, (MethodInfo * method));
}
