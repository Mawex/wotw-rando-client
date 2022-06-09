#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_ByteEnum_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor_1, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor_2, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor_3, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::IEqualityComparer_1_System_ByteEnum_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02EA9B10, void, __ctor_4, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_ByteEnum_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0476F978, Dictionary_2_System_ByteEnum_System_Object___ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor_5, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::IDictionary_2_System_ByteEnum_System_Object_ * dictionary));
    IL2CPP_REGISTER_METHOD(0x02EA9C50, void, __ctor_6, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::IDictionary_2_System_ByteEnum_System_Object_ * dictionary, app::IEqualityComparer_1_System_ByteEnum_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04799C38, Dictionary_2_System_ByteEnum_System_Object___ctor_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAA010, void, __ctor_7, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_ByteEnum_ *, get_Comparer, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ *, get_Keys, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_ByteEnum_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_ByteEnum_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_ByteEnum_System_Object_ *, get_Values, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAA0E0, app::Object *, get_Item, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key));
    IL2CPP_REGISTER_METHODINFO(0x04719BF0, Dictionary_2_System_ByteEnum_System_Object__get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02EA6E30, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::KeyValuePair_2_System_ByteEnum_System_Object_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x02EA6E60, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::KeyValuePair_2_System_ByteEnum_System_Object_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x02EA6F40, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::KeyValuePair_2_System_ByteEnum_System_Object_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key));
    IL2CPP_REGISTER_METHOD(0x02BB8BA0, bool, ContainsValue, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02EAA1F0, void, CopyTo, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::KeyValuePair_2_System_ByteEnum_System_Object___Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0477E7B8, Dictionary_2_System_ByteEnum_System_Object__CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_, GetEnumerator, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator_1_KeyValuePair_2_System_ByteEnum_System_Object_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAA430, void, GetObjectData, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04774218, Dictionary_2_System_ByteEnum_System_Object__GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAA670, int32_t, FindEntry, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key));
    IL2CPP_REGISTER_METHODINFO(0x04726F68, Dictionary_2_System_ByteEnum_System_Object__FindEntry__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAA8A0, void, Initialize, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02EAAA00, bool, TryInsert, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key, app::Object * value, app::InsertionBehavior__Enum behavior));
    IL2CPP_REGISTER_METHODINFO(0x04796DC0, Dictionary_2_System_ByteEnum_System_Object__TryInsert__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAB0D0, void, OnDeserialization, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHODINFO(0x04794BD0, Dictionary_2_System_ByteEnum_System_Object__OnDeserialization__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAB4E0, void, Resize_1, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAB5B0, void, Resize_2, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, int32_t new_size, bool force_new_hash_codes));
    IL2CPP_REGISTER_METHOD(0x02EAB880, bool, Remove, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key));
    IL2CPP_REGISTER_METHODINFO(0x04766AF8, Dictionary_2_System_ByteEnum_System_Object__Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key, app::Object * * value));
    IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::KeyValuePair_2_System_ByteEnum_System_Object___Array * array, int32_t index));
    IL2CPP_REGISTER_METHOD(0x02EABC80, void, ICollection_CopyTo, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04768D60, Dictionary_2_System_ByteEnum_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAC220, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EAC380, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02EAC480, void, IDictionary_set_Item, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04791C10, Dictionary_2_System_ByteEnum_System_Object__System_Collections_IDictionary_set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAC740, bool, IsCompatibleKey, (app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x04778FC0, Dictionary_2_System_ByteEnum_System_Object__IsCompatibleKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02EAC840, void, IDictionary_Add, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04765110, Dictionary_2_System_ByteEnum_System_Object__System_Collections_IDictionary_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02E35BB0, bool, IDictionary_Contains, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02BA7EA0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02E35C80, void, IDictionary_Remove, (app::Dictionary_2_System_ByteEnum_System_Object_ * this_ptr, app::Object * key));
}
