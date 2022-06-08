using namespace app;

namespace app::methods::System::Collections::Generic::Dictionary_2_System::ByteEnum_System::Int32_ {
IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, IEqualityComparer_1_System_ByteEnum_ * comparer));
IL2CPP_REGISTER_METHOD(0x02E392E0, void, __ctor, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, int32_t capacity, IEqualityComparer_1_System_ByteEnum_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04704978, Dictionary_2_System_ByteEnum_System_Int32___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, IDictionary_2_System_ByteEnum_System_Int32_ * dictionary));
IL2CPP_REGISTER_METHOD(0x02E39420, void, __ctor, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, IDictionary_2_System_ByteEnum_System_Int32_ * dictionary, IEqualityComparer_1_System_ByteEnum_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04737B18, Dictionary_2_System_ByteEnum_System_Int32___ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E397E0, void, __ctor, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_ByteEnum_ *, get_Comparer, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Int32_ *, get_Keys, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, ICollection_1_System_ByteEnum_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, IEnumerable_1_System_ByteEnum_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, Dictionary_2_TKey_TValue_ValueCollection_System_ByteEnum_System_Int32_ *, get_Values, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, ICollection_1_System_Int32_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, IEnumerable_1_System_Int32_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02E398B0, int32_t, get_Item, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x04770FE0, Dictionary_2_System_ByteEnum_System_Int32__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key, int32_t value));
IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key, int32_t value));
IL2CPP_REGISTER_METHOD(0x02BAC1A0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, KeyValuePair_2_System_ByteEnum_System_Int32_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x02BB26A0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, KeyValuePair_2_System_ByteEnum_System_Int32_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x02E399C0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, KeyValuePair_2_System_ByteEnum_System_Int32_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHOD(0x02BB2890, bool, ContainsValue, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02E39AD0, void, CopyTo, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, KeyValuePair_2_System_ByteEnum_System_Int32___Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04712EA0, Dictionary_2_System_ByteEnum_System_Int32__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC6E0, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_, GetEnumerator, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02BAC720, IEnumerator_1_KeyValuePair_2_System_ByteEnum_System_Int32_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02E39D10, void, GetObjectData, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04732CB8, Dictionary_2_System_ByteEnum_System_Int32__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E39F50, int32_t, FindEntry, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x04792BA0, Dictionary_2_System_ByteEnum_System_Int32__FindEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E3A180, void, Initialize, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02E3A2E0, bool, TryInsert, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key, int32_t value, InsertionBehavior__Enum behavior));
IL2CPP_REGISTER_METHODINFO(0x0477BDB0, Dictionary_2_System_ByteEnum_System_Int32__TryInsert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E3A9A0, void, OnDeserialization, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04764668, Dictionary_2_System_ByteEnum_System_Int32__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E3ADA0, void, Resize, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02E3AE70, void, Resize, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, int32_t newSize, bool forceNewHashCodes));
IL2CPP_REGISTER_METHOD(0x02E3B140, bool, Remove, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x0475ABF8, Dictionary_2_System_ByteEnum_System_Int32__Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key, int32_t * value));
IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, ByteEnum__Enum key, int32_t value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, KeyValuePair_2_System_ByteEnum_System_Int32___Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02E3B540, void, ICollection_CopyTo, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04723F40, Dictionary_2_System_ByteEnum_System_Int32__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC720, IEnumerator *, IEnumerable_GetEnumerator, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02E3BB20, Object *, ICollection_get_SyncRoot, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283E020, ICollection *, IDictionary_get_Keys, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0283E050, ICollection *, IDictionary_get_Values, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02E3BC80, Object *, IDictionary_get_Item, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02E3BDC0, void, IDictionary_set_Item, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04743030, Dictionary_2_System_ByteEnum_System_Int32__System_Collections_IDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E3C0B0, bool, IsCompatibleKey, (Object * key));
IL2CPP_REGISTER_METHODINFO(0x0476F5A0, Dictionary_2_System_ByteEnum_System_Int32__IsCompatibleKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E3C1B0, void, IDictionary_Add, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04787CF8, Dictionary_2_System_ByteEnum_System_Int32__System_Collections_IDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E35BB0, bool, IDictionary_Contains, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02BAEFE0, IDictionaryEnumerator *, IDictionary_GetEnumerator, (Dictionary_2_System_ByteEnum_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02E35C80, void, IDictionary_Remove, (Dictionary_2_System_ByteEnum_System_Int32_ * __this, Object * key));
}
