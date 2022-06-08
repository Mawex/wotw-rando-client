using namespace app;

namespace app::methods::Newtonsoft::Json::Linq::JArray {
IL2CPP_REGISTER_METHOD(0x002FBB60, IList_1_Newtonsoft_Json_Linq_JToken_ *, get_ChildrenTokens, (JArray * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, JTokenType__Enum, get_Type, (JArray * __this));
IL2CPP_REGISTER_METHOD(0x01F037F0, void, __ctor, (JArray * __this));
IL2CPP_REGISTER_METHOD(0x01F03950, void, __ctor, (JArray * __this, JArray * other));
IL2CPP_REGISTER_METHOD(0x01F03AB0, void, __ctor, (JArray * __this, Object * content));
IL2CPP_REGISTER_METHOD(0x01F03C20, JToken *, CloneToken, (JArray * __this));
IL2CPP_REGISTER_METHOD(0x01F03E90, JArray *, Load, (JsonReader * reader, JsonLoadSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047104D8, JArray_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F04150, void, WriteTo, (JArray * __this, JsonWriter * writer, JsonConverter__Array * converters));
IL2CPP_REGISTER_METHOD(0x01F042A0, JToken *, get_Item, (JArray * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F042C0, void, set_Item, (JArray * __this, int32_t index, JToken * value));
IL2CPP_REGISTER_METHOD(0x01F042E0, int32_t, IndexOfItem, (JArray * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F043D0, int32_t, IndexOf, (JArray * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F043F0, void, Insert, (JArray * __this, int32_t index, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F04420, void, RemoveAt, (JArray * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F04440, IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *, GetEnumerator, (JArray * __this));
IL2CPP_REGISTER_METHOD(0x01F044E0, void, Add, (JArray * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F04500, void, Clear, (JArray * __this));
IL2CPP_REGISTER_METHOD(0x01F04520, bool, Contains, (JArray * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F04540, void, CopyTo, (JArray * __this, JToken__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (JArray * __this));
IL2CPP_REGISTER_METHOD(0x01F04560, bool, Remove, (JArray * __this, JToken * item));
}
