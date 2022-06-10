#pragma once
#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_Object_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02E78920, void, ctor_4, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04709040, Dictionary_2_System_Object_System_Single___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::IDictionary_2_System_Object_System_Single_ * dictionary))
    IL2CPP_REGISTER_METHOD(0x02E78A60, void, ctor_6, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::IDictionary_2_System_Object_System_Single_ * dictionary, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470F4F8, Dictionary_2_System_Object_System_Single___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E78E20, void, ctor_7, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_ *, get_Comparer, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Single_ *, get_Keys, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Single_ *, get_Values, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Single_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Single_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E78EF0, float, get_Item, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0478C1D8, Dictionary_2_System_Object_System_Single__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key, float value))
    IL2CPP_REGISTER_METHOD(0x02BBBD70, void, Add, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key, float value))
    IL2CPP_REGISTER_METHOD(0x02C41C00, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::KeyValuePair_2_System_Object_System_Single_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02C41C30, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::KeyValuePair_2_System_Object_System_Single_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02C41D10, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::KeyValuePair_2_System_Object_System_Single_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02C41E20, bool, ContainsValue, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02E79000, void, CopyTo, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::KeyValuePair_2_System_Object_System_Single___Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04785CB8, Dictionary_2_System_Object_System_Single__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single_, GetEnumerator, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator_1_KeyValuePair_2_System_Object_System_Single_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E79260, void, GetObjectData, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04703B38, Dictionary_2_System_Object_System_Single__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E794A0, int32_t, FindEntry, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0475B7A0, Dictionary_2_System_Object_System_Single__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E79710, void, Initialize, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02E79870, bool, TryInsert, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key, float value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x0470ACE8, Dictionary_2_System_Object_System_Single__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E79F10, void, OnDeserialization, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * sender))
    IL2CPP_REGISTER_METHODINFO(0x0478D5C8, Dictionary_2_System_Object_System_Single__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E7A350, void, Resize_1, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E7A420, void, Resize_2, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02E7A6F0, bool, Remove, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0475D000, Dictionary_2_System_Object_System_Single__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key, float * value))
    IL2CPP_REGISTER_METHOD(0x02BBDB00, bool, TryAdd, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key, float value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::KeyValuePair_2_System_Object_System_Single___Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E7AB40, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04785548, Dictionary_2_System_Object_System_Single__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E7B0E0, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E7B240, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02E7B380, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0474AF88, Dictionary_2_System_Object_System_Single__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E7B670, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04771F50, Dictionary_2_System_Object_System_Single__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E7B770, void, IDictionary_Add, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04714860, Dictionary_2_System_Object_System_Single__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02BA7EA0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_System_Single_ * this_ptr, app::Object * key))
}
