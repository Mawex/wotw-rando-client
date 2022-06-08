using namespace app;

namespace app::methods::System::Collections::Generic::Dictionary_2_System::ByteEnum_System::Object_ {
IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor, (Dictionary_2_System_ByteEnum_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor, (Dictionary_2_System_ByteEnum_System_Object_ * __this, IEqualityComparer_1_System_ByteEnum_ * comparer));
IL2CPP_REGISTER_METHOD(0x02EA9B10, void, __ctor, (Dictionary_2_System_ByteEnum_System_Object_ * __this, int32_t capacity, IEqualityComparer_1_System_ByteEnum_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476F978, Dictionary_2_System_ByteEnum_System_Object___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor, (Dictionary_2_System_ByteEnum_System_Object_ * __this, IDictionary_2_System_ByteEnum_System_Object_ * dictionary));
IL2CPP_REGISTER_METHOD(0x02EA9C50, void, __ctor, (Dictionary_2_System_ByteEnum_System_Object_ * __this, IDictionary_2_System_ByteEnum_System_Object_ * dictionary, IEqualityComparer_1_System_ByteEnum_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04799C38, Dictionary_2_System_ByteEnum_System_Object___ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02EAA010, void, __ctor, (Dictionary_2_System_ByteEnum_System_Object_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_ByteEnum_ *, get_Comparer, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ *, get_Keys, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, ICollection_1_System_ByteEnum_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B2B0, IEnumerable_1_System_ByteEnum_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, Dictionary_2_TKey_TValue_ValueCollection_System_ByteEnum_System_Object_ *, get_Values, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283B3E0, IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02EAA0E0, Object *, get_Item, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x04719BF0, Dictionary_2_System_ByteEnum_System_Object__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key, Object * value));
IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key, Object * value));
IL2CPP_REGISTER_METHOD(0x02EA6E30, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (Dictionary_2_System_ByteEnum_System_Object_ * __this, KeyValuePair_2_System_ByteEnum_System_Object_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x02EA6E60, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (Dictionary_2_System_ByteEnum_System_Object_ * __this, KeyValuePair_2_System_ByteEnum_System_Object_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x02EA6F40, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (Dictionary_2_System_ByteEnum_System_Object_ * __this, KeyValuePair_2_System_ByteEnum_System_Object_ keyValuePair));
IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHOD(0x02BB8BA0, bool, ContainsValue, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02EAA1F0, void, CopyTo, (Dictionary_2_System_ByteEnum_System_Object_ * __this, KeyValuePair_2_System_ByteEnum_System_Object___Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0477E7B8, Dictionary_2_System_ByteEnum_System_Object__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BA5400, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_, GetEnumerator, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02BA5450, IEnumerator_1_KeyValuePair_2_System_ByteEnum_System_Object_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02EAA430, void, GetObjectData, (Dictionary_2_System_ByteEnum_System_Object_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04774218, Dictionary_2_System_ByteEnum_System_Object__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02EAA670, int32_t, FindEntry, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x04726F68, Dictionary_2_System_ByteEnum_System_Object__FindEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02EAA8A0, void, Initialize, (Dictionary_2_System_ByteEnum_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02EAAA00, bool, TryInsert, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key, Object * value, InsertionBehavior__Enum behavior));
IL2CPP_REGISTER_METHODINFO(0x04796DC0, Dictionary_2_System_ByteEnum_System_Object__TryInsert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02EAB0D0, void, OnDeserialization, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04794BD0, Dictionary_2_System_ByteEnum_System_Object__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02EAB4E0, void, Resize, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02EAB5B0, void, Resize, (Dictionary_2_System_ByteEnum_System_Object_ * __this, int32_t newSize, bool forceNewHashCodes));
IL2CPP_REGISTER_METHOD(0x02EAB880, bool, Remove, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key));
IL2CPP_REGISTER_METHODINFO(0x04766AF8, Dictionary_2_System_ByteEnum_System_Object__Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key, Object * * value));
IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (Dictionary_2_System_ByteEnum_System_Object_ * __this, ByteEnum__Enum key, Object * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (Dictionary_2_System_ByteEnum_System_Object_ * __this, KeyValuePair_2_System_ByteEnum_System_Object___Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02EABC80, void, ICollection_CopyTo, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04768D60, Dictionary_2_System_ByteEnum_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BA5450, IEnumerator *, IEnumerable_GetEnumerator, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02EAC220, Object *, ICollection_get_SyncRoot, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283E020, ICollection *, IDictionary_get_Keys, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0283E050, ICollection *, IDictionary_get_Values, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02EAC380, Object *, IDictionary_get_Item, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02EAC480, void, IDictionary_set_Item, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04791C10, Dictionary_2_System_ByteEnum_System_Object__System_Collections_IDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02EAC740, bool, IsCompatibleKey, (Object * key));
IL2CPP_REGISTER_METHODINFO(0x04778FC0, Dictionary_2_System_ByteEnum_System_Object__IsCompatibleKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02EAC840, void, IDictionary_Add, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04765110, Dictionary_2_System_ByteEnum_System_Object__System_Collections_IDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E35BB0, bool, IDictionary_Contains, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02BA7EA0, IDictionaryEnumerator *, IDictionary_GetEnumerator, (Dictionary_2_System_ByteEnum_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02E35C80, void, IDictionary_Remove, (Dictionary_2_System_ByteEnum_System_Object_ * __this, Object * key));
}
