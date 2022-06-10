#pragma once
#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_Int32Enum_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::IEqualityComparer_1_System_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C32030, void, ctor_4, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047310F8, Dictionary_2_System_Int32Enum_System_Int32Enum___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::IDictionary_2_System_Int32Enum_System_Int32Enum_ * dictionary))
    IL2CPP_REGISTER_METHOD(0x02C32170, void, ctor_6, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::IDictionary_2_System_Int32Enum_System_Int32Enum_ * dictionary, app::IEqualityComparer_1_System_Int32Enum_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475C050, Dictionary_2_System_Int32Enum_System_Int32Enum___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C32530, void, ctor_7, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int32Enum_ *, get_Comparer, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_System_Int32Enum_ *, get_Keys, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Int32Enum_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Int32Enum_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Int32Enum_ *, get_Values, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Int32Enum_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Int32Enum_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C32600, app::Int32Enum__Enum, get_Item, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04759120, Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key, app::Int32Enum__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key, app::Int32Enum__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BAC1A0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_System_Int32Enum_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BB26A0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_System_Int32Enum_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BB2780, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_System_Int32Enum_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BB2890, bool, ContainsValue, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum value))
    IL2CPP_REGISTER_METHOD(0x02C32710, void, CopyTo, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_System_Int32Enum___Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471B398, Dictionary_2_System_Int32Enum_System_Int32Enum__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC6E0, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Int32Enum_, GetEnumerator, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC720, app::IEnumerator_1_KeyValuePair_2_System_Int32Enum_System_Int32Enum_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C32940, void, GetObjectData, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047736A8, Dictionary_2_System_Int32Enum_System_Int32Enum__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C32B80, int32_t, FindEntry, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04763A50, Dictionary_2_System_Int32Enum_System_Int32Enum__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C32DA0, void, Initialize, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02C32F00, bool, TryInsert, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key, app::Int32Enum__Enum value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x0474CC58, Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C335B0, void, OnDeserialization, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Object * sender))
    IL2CPP_REGISTER_METHODINFO(0x04766C10, Dictionary_2_System_Int32Enum_System_Int32Enum__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C339B0, void, Resize_1, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C33A80, void, Resize_2, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02C33D50, bool, Remove, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04754E38, Dictionary_2_System_Int32Enum_System_Int32Enum__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key, app::Int32Enum__Enum * value))
    IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum key, app::Int32Enum__Enum value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_System_Int32Enum___Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02C34150, void, ICollection_CopyTo, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047029A8, Dictionary_2_System_Int32Enum_System_Int32Enum__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC720, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C34730, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BB4B70, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02C34890, void, IDictionary_set_Item, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0473FED8, Dictionary_2_System_Int32Enum_System_Int32Enum__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C34B80, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x047999E0, Dictionary_2_System_Int32Enum_System_Int32Enum__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C34C80, void, IDictionary_Add, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04703840, Dictionary_2_System_Int32Enum_System_Int32Enum__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02BAEFE0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (app::Dictionary_2_System_Int32Enum_System_Int32Enum_ * this_ptr, app::Object * key))
}
