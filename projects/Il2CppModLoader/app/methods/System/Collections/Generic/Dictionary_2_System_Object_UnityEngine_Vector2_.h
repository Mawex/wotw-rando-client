#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_Object_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02E1B880, void, ctor_4, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478D0B0, Dictionary_2_System_Object_UnityEngine_Vector2___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::IDictionary_2_System_Object_UnityEngine_Vector2_ * dictionary))
    IL2CPP_REGISTER_METHOD(0x02E1B9C0, void, ctor_6, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::IDictionary_2_System_Object_UnityEngine_Vector2_ * dictionary, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473A8B0, Dictionary_2_System_Object_UnityEngine_Vector2___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1BDB0, void, ctor_7, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_ *, get_Comparer, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UnityEngine_Vector2_ *, get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector2_ *, get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_UnityEngine_Vector2_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_UnityEngine_Vector2_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1BE80, app::Vector2, get_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04788228, Dictionary_2_System_Object_UnityEngine_Vector2__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1BFA0, void, set_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x02E1BFE0, void, Add, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x02E1C020, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector2_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02E1C070, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector2_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02E1C190, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector2_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02E1C2D0, bool, ContainsValue, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x02E1C3C0, void, CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector2___Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047754F8, Dictionary_2_System_Object_UnityEngine_Vector2__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector2_, GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator_1_KeyValuePair_2_System_Object_UnityEngine_Vector2_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1C610, void, GetObjectData, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0473D6D8, Dictionary_2_System_Object_UnityEngine_Vector2__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1C850, int32_t, FindEntry, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04786E98, Dictionary_2_System_Object_UnityEngine_Vector2__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1CAC0, void, Initialize, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02E1CC20, bool, TryInsert, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key, app::Vector2 value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x04779BF0, Dictionary_2_System_Object_UnityEngine_Vector2__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1D2E0, void, OnDeserialization, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * sender))
    IL2CPP_REGISTER_METHODINFO(0x04793410, Dictionary_2_System_Object_UnityEngine_Vector2__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1D730, void, Resize_1, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1D800, void, Resize_2, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02E1DAD0, bool, Remove, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0477B910, Dictionary_2_System_Object_UnityEngine_Vector2__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1DF20, bool, TryGetValue, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key, app::Vector2 * value))
    IL2CPP_REGISTER_METHOD(0x02E1DFC0, bool, TryAdd, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector2___Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E1E000, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476D868, Dictionary_2_System_Object_UnityEngine_Vector2__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1E5A0, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BCB250, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02E1E700, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0471C120, Dictionary_2_System_Object_UnityEngine_Vector2__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1EA00, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0478DD98, Dictionary_2_System_Object_UnityEngine_Vector2__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1EB00, void, IDictionary_Add, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047758E8, Dictionary_2_System_Object_UnityEngine_Vector2__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02BA7EA0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_UnityEngine_Vector2_ * this_ptr, app::Object * key))
}
