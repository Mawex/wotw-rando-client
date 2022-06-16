#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_Object_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02BC8670, void, ctor_4, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047541B8, Dictionary_2_System_Object_System_Double___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::IDictionary_2_System_Object_System_Double_ * dictionary))
    IL2CPP_REGISTER_METHOD(0x02BC87B0, void, ctor_6, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::IDictionary_2_System_Object_System_Double_ * dictionary, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04773048, Dictionary_2_System_Object_System_Double___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC8B70, void, ctor_7, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_ *, get_Comparer, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Double_ *, get_Keys, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Double_ *, get_Values, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Double_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Double_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC8C40, double, get_Item, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04772170, Dictionary_2_System_Object_System_Double__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key, double value))
    IL2CPP_REGISTER_METHOD(0x02BBBD70, void, Add, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key, double value))
    IL2CPP_REGISTER_METHOD(0x02BC8D50, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::KeyValuePair_2_System_Object_System_Double_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BC8D80, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::KeyValuePair_2_System_Object_System_Double_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BC8E60, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::KeyValuePair_2_System_Object_System_Double_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02BC8F70, bool, ContainsValue, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x02BC9040, void, CopyTo, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::KeyValuePair_2_System_Object_System_Double___Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471AF78, Dictionary_2_System_Object_System_Double__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Double_, GetEnumerator, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator_1_KeyValuePair_2_System_Object_System_Double_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC9280, void, GetObjectData, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04711DF0, Dictionary_2_System_Object_System_Double__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC94C0, int32_t, FindEntry, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04730A58, Dictionary_2_System_Object_System_Double__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC9730, void, Initialize, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02BC9890, bool, TryInsert, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key, double value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x0474D3D8, Dictionary_2_System_Object_System_Double__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC9F30, void, OnDeserialization, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * sender))
    IL2CPP_REGISTER_METHODINFO(0x047786C8, Dictionary_2_System_Object_System_Double__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BCA370, void, Resize_1, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BCA440, void, Resize_2, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02BCA710, bool, Remove, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04738158, Dictionary_2_System_Object_System_Double__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key, double * value))
    IL2CPP_REGISTER_METHOD(0x02BBDB00, bool, TryAdd, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key, double value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::KeyValuePair_2_System_Object_System_Double___Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02BCAB60, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474A100, Dictionary_2_System_Object_System_Double__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BCB0F0, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BCB250, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02BCB390, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04790CF8, Dictionary_2_System_Object_System_Double__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BCB680, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x047367C8, Dictionary_2_System_Object_System_Double__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BCB780, void, IDictionary_Add, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04719920, Dictionary_2_System_Object_System_Double__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02BA7EA0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_System_Double_ * this_ptr, app::Object * key))
}
