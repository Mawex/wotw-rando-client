#include <interception_macros.h>

namespace app::methods::System::Dynamic::ExpandoObject {
IL2CPP_REGISTER_METHOD(0x01F8CA20, void, __ctor, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8CBA0, bool, TryGetValue, (ExpandoObject * __this, Object * indexClass, int32_t index, String * name, bool ignoreCase, Object * * value));
IL2CPP_REGISTER_METHODINFO(0x04792528, ExpandoObject_TryGetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8CD50, void, TrySetValue, (ExpandoObject * __this, Object * indexClass, int32_t index, Object * value, String * name, bool ignoreCase, bool add));
IL2CPP_REGISTER_METHODINFO(0x04748C40, ExpandoObject_TrySetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8D240, bool, TryDeleteValue, (ExpandoObject * __this, Object * indexClass, int32_t index, String * name, bool ignoreCase, Object * deleteValue));
IL2CPP_REGISTER_METHODINFO(0x0477EEA8, ExpandoObject_TryDeleteValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8D6D0, bool, IsDeletedMember, (ExpandoObject * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0195B0F0, ExpandoClass *, get_Class, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8D7F0, ExpandoObject_ExpandoData *, PromoteClassCore, (ExpandoObject * __this, ExpandoClass * oldClass, ExpandoClass * newClass));
IL2CPP_REGISTER_METHOD(0x01F8D840, void, PromoteClass, (ExpandoObject * __this, Object * oldClass, Object * newClass));
IL2CPP_REGISTER_METHOD(0x01F8DA60, DynamicMetaObject *, IDynamicMetaObjectProvider_GetMetaObject, (ExpandoObject * __this, Expression * parameter));
IL2CPP_REGISTER_METHOD(0x01F8DC70, void, TryAddMember, (ExpandoObject * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x01F8DD40, bool, TryGetValueForKey, (ExpandoObject * __this, String * key, Object * * value));
IL2CPP_REGISTER_METHOD(0x01F8DD70, bool, ExpandoContainsKey, (ExpandoObject * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01F8DDB0, ICollection_1_System_String_ *, IDictionary_string__object__get_Keys, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8DF00, ICollection_1_System_Object_ *, IDictionary_string__object__get_Values, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8E050, Object *, IDictionary_string__object__get_Item, (ExpandoObject * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x04719298, ExpandoObject_System_Collections_Generic_IDictionary_System_String_System_Object__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8E130, void, IDictionary_string__object__set_Item, (ExpandoObject * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x01F8E200, void, IDictionary_string__object__Add, (ExpandoObject * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x01F8E210, bool, IDictionary_string__object__ContainsKey, (ExpandoObject * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01F8E350, bool, IDictionary_string__object__Remove, (ExpandoObject * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01F8DD40, bool, IDictionary_string__object__TryGetValue, (ExpandoObject * __this, String * key, Object * * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, ICollection_KeyValuePair_string__object___get_Count, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_KeyValuePair_string__object___get_IsReadOnly, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8E440, void, ICollection_KeyValuePair_string__object___Add, (ExpandoObject * __this, KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01F8E4D0, void, ICollection_KeyValuePair_string__object___Clear, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8E880, bool, ICollection_KeyValuePair_string__object___Contains, (ExpandoObject * __this, KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01F8E990, void, ICollection_KeyValuePair_string__object___CopyTo, (ExpandoObject * __this, KeyValuePair_2_System_String_System_Object___Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x01F8ED60, bool, ICollection_KeyValuePair_string__object___Remove, (ExpandoObject * __this, KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01F8EE10, IEnumerator_1_KeyValuePair_2_System_String_System_Object_ *, IEnumerable_KeyValuePair_string__object___GetEnumerator, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8EE10, IEnumerator *, IEnumerable_GetEnumerator, (ExpandoObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8EE40, IEnumerator_1_KeyValuePair_2_System_String_System_Object_ *, GetExpandoEnumerator, (ExpandoObject * __this, ExpandoObject_ExpandoData * data, int32_t version));
IL2CPP_REGISTER_METHOD(0x01F8EFB0, void, INotifyPropertyChanged_add_PropertyChanged, (ExpandoObject * __this, PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x01F8F070, void, INotifyPropertyChanged_remove_PropertyChanged, (ExpandoObject * __this, PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x01F8F130, void, __cctor, ());
}
