using namespace app;

namespace app::methods::Newtonsoft::Json::Linq::JConstructor {
IL2CPP_REGISTER_METHOD(0x002FBB80, IList_1_Newtonsoft_Json_Linq_JToken_ *, get_ChildrenTokens, (JConstructor * __this));
IL2CPP_REGISTER_METHOD(0x01F04580, int32_t, IndexOfItem, (JConstructor * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_Name, (JConstructor * __this));
IL2CPP_REGISTER_METHOD(0x00420230, JTokenType__Enum, get_Type, (JConstructor * __this));
IL2CPP_REGISTER_METHOD(0x01F04670, void, __ctor, (JConstructor * __this, JConstructor * other));
IL2CPP_REGISTER_METHOD(0x01F047E0, void, __ctor, (JConstructor * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0478C6E0, JConstructor__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F049B0, JToken *, CloneToken, (JConstructor * __this));
IL2CPP_REGISTER_METHOD(0x01F04C40, void, WriteTo, (JConstructor * __this, JsonWriter * writer, JsonConverter__Array * converters));
IL2CPP_REGISTER_METHOD(0x01F04DA0, JConstructor *, Load, (JsonReader * reader, JsonLoadSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04725C10, JConstructor_Load__MethodInfo);
}
