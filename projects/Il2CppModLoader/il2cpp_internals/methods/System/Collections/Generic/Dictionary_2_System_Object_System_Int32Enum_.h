#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_Object_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, __ctor_1, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, __ctor_2, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, __ctor_3, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02BCEF10, void, __ctor_4, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0478CC78, Dictionary_2_System_Object_System_Int32Enum___ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, __ctor_5, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::IDictionary_2_System_Object_System_Int32Enum_ * dictionary));
    IL2CPP_REGISTER_METHOD(0x02BCF050, void, __ctor_6, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::IDictionary_2_System_Object_System_Int32Enum_ * dictionary, app::IEqualityComparer_1_System_Object_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0470AB30, Dictionary_2_System_Object_System_Int32Enum___ctor_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BCF420, void, __ctor_7, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_ *, get_Comparer, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Int32Enum_ *, get_Keys, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Int32Enum_ *, get_Values, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Int32Enum_ *, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Int32Enum_ *, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BCF4F0, app::Int32Enum__Enum, get_Item, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x04705D48, Dictionary_2_System_Object_System_Int32Enum__get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key, app::Int32Enum__Enum value));
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key, app::Int32Enum__Enum value));
    IL2CPP_REGISTER_METHOD(0x02BCC160, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Object_System_Int32Enum_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x02BCC190, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Object_System_Int32Enum_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x02BCC270, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Object_System_Int32Enum_ key_value_pair));
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02BCC370, bool, ContainsValue, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum value));
    IL2CPP_REGISTER_METHOD(0x02BCF600, void, CopyTo, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Object_System_Int32Enum___Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0478A038, Dictionary_2_System_Object_System_Int32Enum__CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_, GetEnumerator, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator_1_KeyValuePair_2_System_Object_System_Int32Enum_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BCF850, void, GetObjectData, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04756350, Dictionary_2_System_Object_System_Int32Enum__GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BCFA90, int32_t, FindEntry, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x047650D8, Dictionary_2_System_Object_System_Int32Enum__FindEntry__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BCFD00, void, Initialize, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02BCFE60, bool, TryInsert, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key, app::Int32Enum__Enum value, app::InsertionBehavior__Enum behavior));
    IL2CPP_REGISTER_METHODINFO(0x047038E0, Dictionary_2_System_Object_System_Int32Enum__TryInsert__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BD0510, void, OnDeserialization, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHODINFO(0x04783E68, Dictionary_2_System_Object_System_Int32Enum__OnDeserialization__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BD0950, void, Resize_1, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BD0A20, void, Resize_2, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, int32_t new_size, bool force_new_hash_codes));
    IL2CPP_REGISTER_METHOD(0x02BD0CF0, bool, Remove, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x0471B510, Dictionary_2_System_Object_System_Int32Enum__Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key, app::Int32Enum__Enum * value));
    IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key, app::Int32Enum__Enum value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::KeyValuePair_2_System_Object_System_Int32Enum___Array * array, int32_t index));
    IL2CPP_REGISTER_METHOD(0x02BD1140, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04738B08, Dictionary_2_System_Object_System_Int32Enum__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BD16C0, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection *, IDictionary_get_Keys, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection *, IDictionary_get_Values, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BCE6F0, app::Object *, IDictionary_get_Item, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02BD1820, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04779610, Dictionary_2_System_Object_System_Int32Enum__System_Collections_IDictionary_set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BD1B10, bool, IsCompatibleKey, (app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x0478A030, Dictionary_2_System_Object_System_Int32Enum__IsCompatibleKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BD1C10, void, IDictionary_Add, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x047850B0, Dictionary_2_System_Object_System_Int32Enum__System_Collections_IDictionary_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x02BA7EA0, app::IDictionaryEnumerator *, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_System_Int32Enum_ * this_ptr, app::Object * key));
}
