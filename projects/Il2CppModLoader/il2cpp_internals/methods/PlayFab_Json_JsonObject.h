using namespace app;

namespace app::methods::PlayFab::Json::JsonObject {
IL2CPP_REGISTER_METHOD(0x01846C80, void, __ctor, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x01846DF0, void, __ctor, (JsonObject * __this, IEqualityComparer_1_System_String_ * comparer));
IL2CPP_REGISTER_METHOD(0x01846F60, Object *, get_Item, (JsonObject * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01846F70, Object *, GetAtIndex, (IDictionary_2_System_String_System_Object_ * obj, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0471A3A0, JsonObject_GetAtIndex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018471B0, void, Add, (JsonObject * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x01847270, bool, ContainsKey, (JsonObject * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01847330, ICollection_1_System_String_ *, get_Keys, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x018473C0, bool, Remove, (JsonObject * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01847460, bool, TryGetValue, (JsonObject * __this, String * key, Object * * value));
IL2CPP_REGISTER_METHOD(0x01847510, ICollection_1_System_Object_ *, get_Values, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x018475A0, Object *, get_Item, (JsonObject * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01847640, void, set_Item, (JsonObject * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x01847700, void, Add, (JsonObject * __this, KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x018477C0, void, Clear, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x01847850, bool, Contains, (JsonObject * __this, KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01847950, void, CopyTo, (JsonObject * __this, KeyValuePair_2_System_String_System_Object___Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x0470E8A0, JsonObject_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01847BA0, int32_t, get_Count, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x01847C30, bool, Remove, (JsonObject * __this, KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01847CD0, IEnumerator_1_KeyValuePair_2_System_String_System_Object_ *, GetEnumerator, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x01847DC0, IEnumerator *, IEnumerable_GetEnumerator, (JsonObject * __this));
IL2CPP_REGISTER_METHOD(0x01847EB0, String *, ToString, (JsonObject * __this));
}
